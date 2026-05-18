#include "bink.h"
#include "binkacd.h"
#include "popmal.h"
#include "../fft.h"
#include "../varbits.h"

#define MAX_TRANSFORM 4096
#define WINDOWRATIO 16
#define BINKAC_RATE_44K 44100
#define BINKAC_RATE_22K 22050
#define BINKAC_TRANSFORM_44K 2048
#define BINKAC_TRANSFORM_22K 1024
#define BINKAC_TRANSFORM_11K 512
#define TOTBANDS 25
#define RLEBITS 4
#define MAXRLE (1 << RLEBITS)
#define FXPBITS 29
#define FXP_SIGN_MASK 0x10000000
#define FXP_VALUE_MASK ((1 << FXPBITS) - 1)
#define FXP_BIN_MASK 31
#define FXP_VALUE_SHIFT 5
#define BINKAC_INVERT_BINS 24
#define BINKACNEWFORMAT_SKIP_BITS 2
#define VQLENGTH 8
#define BINKAC_S16_MAX 0x7fff
#define BINKAC_S16_MIN (-0x8000)
#define BINKAC_FIRST_COEFF 2
#define BINKAC_BAND_LIMIT_SCALE 2
#define BINKAC_THRESHOLD_BITS 8
#define BINKAC_NYQUIST_DIVISOR 2
#define BINKAC_TRANSFORM_HALF_DIVISOR 2
#define BINKAC_QUANT_POWER_BASE 10.0
#define BINKAC_QUANT_INDEX_SCALE 0.664f
#define BINKAC_QUANT_POWER_SCALE 0.10f
#define BINKAC_NYQUIST_ROUNDING 1
#define BINKAC_FFT_WORK_EXTRA 2
#define BINKAC_DCT_COEFF_BYTES_PER_SAMPLE 5
#define BINKAC_RDFT_COEFF_TAIL_ADJUST 1
#define BINKAC_TRANSFORM_ROOT_SCALE 2.0f
#define BINKAC_START_FRAME 1
#define BINKAC_MONO_CHANNELS 1
#define BINKAC_RSQRT_NEWTON_HALF 0.5
#define BINKAC_RSQRT_NEWTON_THREE 3.0
#define BINKAC_LOAD32(ptr) (*(const u32 PTR4*)(ptr))
#define BINKAC_BAND_SAMPLE_LIMIT(band_limits, band) ((band_limits)[band] * BINKAC_BAND_LIMIT_SCALE)
#define BINKAC_RLE_SAMPLE_RUN(index) (bink_rlelens_snd[(index)] * VQLENGTH)
#define BINKAC_WINDOW_BYTES(buffer_size) ((buffer_size) / WINDOWRATIO)
#define BINKAC_OUTPUT_BYTES(buffer_size, window_size) ((buffer_size) - (window_size))
#define BINKAC_SAMPLE_BYTES(samples) ((samples) * sizeof(s16))
#define BINKAC_FFT_WORK_BYTES(transform_size_half, work) \
    (((u32)radfsqrt((f32)(transform_size_half)) + BINKAC_FFT_WORK_EXTRA) * sizeof(*(work)))
#define BINKAC_DCT_COEFF_BYTES(transform_size) \
    ((transform_size) * BINKAC_DCT_COEFF_BYTES_PER_SAMPLE)
#define BINKAC_RDFT_COEFF_BYTES(transform_size_half, coeffs) \
    ((transform_size_half) * sizeof(*(coeffs)) - BINKAC_RDFT_COEFF_TAIL_ADJUST)
#define BINKAC_OVERLAP_BYTES(buffer_size) ((buffer_size) / BINKAC_TRANSFORM_HALF_DIVISOR)

/* RLE code lengths, in VQLENGTH sample groups, for sparse audio coefficients. */
static u8 bink_rlelens_snd[MAXRLE] = {
    2, 3, 4, 5, 6, 8, 9, 10, 11, 12, 13, 14, 15, 16, 32, 64
};

/* Upper frequency for each Bink audio critical band. */
static u32 bink_bandtopfreq[TOTBANDS] = {
    0,   100,  200,  300,  400,  510,  630,  770,   920,   1080,  1270, 1480, 1720,
    2000, 2320, 2700, 3150, 3700, 4400, 5300, 6400, 7700, 9500, 12000, 15500
};

/* Reciprocals used by fxptof for the 29-bit packed fixed-point coefficients. */
static f64 bink_invertbins[BINKAC_INVERT_BINS] = {
    1.0 / (1 << 23), 1.0 / (1 << 22), 1.0 / (1 << 21), 1.0 / (1 << 20),
    1.0 / (1 << 19), 1.0 / (1 << 18), 1.0 / (1 << 17), 1.0 / (1 << 16),
    1.0 / (1 << 15), 1.0 / (1 << 14), 1.0 / (1 << 13), 1.0 / (1 << 12),
    1.0 / (1 << 11), 1.0 / (1 << 10), 1.0 / (1 << 9),  1.0 / (1 << 8),
    1.0 / (1 << 7),  1.0 / (1 << 6),  1.0 / (1 << 5),  1.0 / (1 << 4),
    1.0 / (1 << 3),  1.0 / (1 << 2),  1.0 / (1 << 1),  1.0 / (1 << 0)
};

static f32 fxptof(u32 val)
{
    f32 f;

    f = (f32)((f64)((val & ~FXP_SIGN_MASK) >> FXP_VALUE_SHIFT) *
              bink_invertbins[val & FXP_BIN_MASK]);
    return (val & FXP_SIGN_MASK) ? -f : f;
}

static inline s16 clamp_to_s16(s32 value)
{
    s32 clamped;

    if (value < BINKAC_S16_MAX) {
        if (value > BINKAC_S16_MIN) {
            clamped = value;
        } else {
            clamped = BINKAC_S16_MIN;
        }
    } else {
        clamped = BINKAC_S16_MAX;
    }

    return clamped;
}

static void quanttos16s(s16 PTR4* dest, const f32 PTR4* src, f32 scale, u32 count)
{
    if (count != 0) {
        do {
            s16 PTR4* out = dest;
            s32 value = (s32)(*src * scale);

            dest = out + 1;
            *out = clamp_to_s16(value);
            ++src;
            --count;
        } while (count != 0);
    }
}

static void quanttos16chans2(s16 PTR4* dest, const f32 PTR4* src, f32 scale, u32 count)
{
    u32 remaining;
    u32 stride;

    remaining = count - 1;
    if (count != 0) {
        stride = count;
        do {
            s16 PTR4* out = dest++;
            s32 value = (s32)(src[0] * scale);

            *out = clamp_to_s16(value);
            out = dest++;
            value = (s32)(src[stride] * scale);
            *out = clamp_to_s16(value);
            ++src;
        } while (remaining-- != 0);
    }
}

static inline u32 read_bits(VARBITS PTR4* vb, u32 count)
{
    u32 value;
    u32 bits = vb->bitlen;

    if (bits >= count) {
        value = vb->bits & GetBitsLen(count);
        vb->bitlen = bits - count;
        vb->bits >>= count;
    } else {
        u32 word = BINKAC_LOAD32(vb->cur);
        u32 temp = vb->bits | (word << bits);

        VARBITS_ADVANCE_CUR(vb->cur);
        value = temp & GetBitsLen(count);
        vb->bitlen = bits + BITSTYPELEN - count;
        vb->bits = word >> (count - bits);
    }

    return value;
}

static inline u32 read_bit(VARBITS PTR4* vb)
{
    u32 bitcount = vb->bitlen;
    u32 value;

    if (bitcount != 0) {
        value = vb->bits & 1;
        vb->bitlen = bitcount - 1;
        vb->bits >>= 1;
    } else {
        u32 word = BINKAC_LOAD32(vb->cur);

        VARBITS_ADVANCE_CUR(vb->cur);
        value = word & 1;
        vb->bitlen = BITSTYPELEN - 1;
        vb->bits = word >> 1;
    }

    return value;
}

static void read_rle_samples(f32 PTR4* samples, u32 transform_size, VARBITS PTR4* vb,
                             const f32 PTR4* threshold, const u32 PTR4* band_limits)
{
    u32 i;
    u32 band = 0;
    f32 scale = 0.0f;
    f32 PTR4* out;

    while (BINKAC_BAND_SAMPLE_LIMIT(band_limits, band) < BINKAC_FIRST_COEFF) {
        scale = threshold[band];
        ++band;
    }

    i = BINKAC_FIRST_COEFF;
    out = samples + BINKAC_FIRST_COEFF;

    while (i < transform_size) {
        u32 end;
        u32 bitlen;

        /* Each sparse coefficient packet is either 5 bits (literal VQ run) or
           9 bits (RLE flag, 4-bit run index, 4-bit coefficient bit length). */
        if (read_bit(vb) != 0) {
            end = i + BINKAC_RLE_SAMPLE_RUN(read_bits(vb, RLEBITS));
        } else {
            end = i + VQLENGTH;
        }

        if (end > transform_size) {
            end = transform_size;
        }

        bitlen = read_bits(vb, RLEBITS);
        if (bitlen == 0) {
            memset(out, 0, (end - i) * sizeof(*out));
            out += end - i;
            i = end;

            while (i > BINKAC_BAND_SAMPLE_LIMIT(band_limits, band)) {
                scale = threshold[band];
                ++band;
            }
        } else {
            while (i < end) {
                if (i == BINKAC_BAND_SAMPLE_LIMIT(band_limits, band)) {
                    scale = threshold[band];
                    ++band;
                }

                {
                    s32 value = read_bits(vb, bitlen);

                    if (value != 0) {
                        /* Bink audio 1 stores the sign bit after each nonzero coefficient. */
                        s32 sign = -(s32)read_bit(vb);
                        value = (value ^ sign) - sign;
                        *out = value * scale;
                    } else {
                        *out = 0.0f;
                    }
                }

                ++i;
                ++out;
            }
        }
    }
}

f64 pow(f64 x, f64 y);

static inline f32 Undecibel(f32 d)
{
    return (f32)pow(BINKAC_QUANT_POWER_BASE, d * BINKAC_QUANT_POWER_SCALE);
}

static u32 Unquant(u32 transform_size, u32 chans, u32 flags, s32 PTR4* fft_work,
                   f32 PTR4* fft_coeffs, s16 PTR4* samples, void PTR4* inptr,
                   u32 num_bands, const u32 PTR4* bands,
                   f32 transform_size_root)
{
    f32 threshold[TOTBANDS + 1];
    VARBITS vb;
    f32 decoded[MAX_TRANSFORM];
    u32 ch;
    f32 PTR4* channel;

    vb.init = inptr;
    vb.cur = inptr;
    vb.bits = 0;
    vb.bitlen = 0;

    if ((flags & BINKACNEWFORMAT) != 0) {
        /* New-format streams reserve two leading bits before the coefficient payload. */
        vb.bits = BINKAC_LOAD32(vb.cur) >> BINKACNEWFORMAT_SKIP_BITS;
        VARBITS_ADVANCE_CUR(vb.cur);
        vb.bitlen = BITSTYPELEN - BINKACNEWFORMAT_SKIP_BITS;
    }

    channel = decoded;
    for (ch = 0; ch < chans; ++ch) {
        u32 i;

        channel[0] = fxptof(read_bits(&vb, FXPBITS));
        channel[1] = fxptof(read_bits(&vb, FXPBITS));

        for (i = 0; i < num_bands; ++i) {
            s32 q = read_bits(&vb, BINKAC_THRESHOLD_BITS);

            threshold[i] = Undecibel((f32)q * BINKAC_QUANT_INDEX_SCALE);
        }

        read_rle_samples(channel, transform_size, &vb, threshold, bands);
        if ((flags & BINKACNEWFORMAT) != 0) {
            ddct(transform_size, 1, channel, fft_work, fft_coeffs);
        } else {
            rdft(transform_size, -1, channel, fft_work, fft_coeffs);
        }

        channel += transform_size;
    }

    if (chans == BINKAC_MONO_CHANNELS) {
        quanttos16s(samples, decoded, transform_size_root, transform_size);
    } else {
        quanttos16chans2(samples, decoded, transform_size_root, transform_size);
    }

    vb.bitlen = 0;
    return ((u32)((u8 PTR4*)vb.cur - (u8 PTR4*)vb.init)) & FXP_VALUE_MASK;
}

static inline f32 radfsqrt(f32 value)
{
    if (value > 0.0f) {
        f64 guess;

        __asm__ volatile("frsqrte %0,%1" : "=f"(guess) : "f"(value));

        guess = BINKAC_RSQRT_NEWTON_HALF * guess *
                (BINKAC_RSQRT_NEWTON_THREE - guess * guess * value);
        guess = BINKAC_RSQRT_NEWTON_HALF * guess *
                (BINKAC_RSQRT_NEWTON_THREE - guess * guess * value);
        guess = BINKAC_RSQRT_NEWTON_HALF * guess *
                (BINKAC_RSQRT_NEWTON_THREE - guess * guess * value);
        return value * guess;
    }

    return value;
}

HBINKAUDIODECOMP BinkAudioDecompressOpen(u32 rate, u32 chans, u32 flags)
{
    u32 transform_size;
    u32 buffer_size;
    u32 transform_size_half;
    s32 nyquist;
    u32 num_bands;
    u32 i;
    f32 transform_size_root;
    HBINKAUDIODECOMP ba;
    u32 PTR4* bands;
    s32 PTR4* fft_work;
    f32 PTR4* fft_coeffs;
    s16 PTR4* overlap;
    s16 PTR4* samples;

    if (rate >= BINKAC_RATE_44K) {
        transform_size = BINKAC_TRANSFORM_44K;
    } else if (rate >= BINKAC_RATE_22K) {
        transform_size = BINKAC_TRANSFORM_22K;
    } else {
        transform_size = BINKAC_TRANSFORM_11K;
    }

    buffer_size = BINKAC_SAMPLE_BYTES(transform_size * chans);
    if ((flags & BINKACNEWFORMAT) == 0) {
        /* Legacy RDFT streams interleave stereo by decoding one larger mono transform. */
        rate *= chans;
        transform_size *= chans;
        chans = BINKAC_MONO_CHANNELS;
    }

    nyquist = (rate + BINKAC_NYQUIST_ROUNDING) / BINKAC_NYQUIST_DIVISOR;
    transform_size_half = transform_size / BINKAC_TRANSFORM_HALF_DIVISOR;
    /* Calculate the number of critical bands below Nyquist. */
    for (i = 0; i < TOTBANDS; ++i) {
        if (bink_bandtopfreq[i] >= (u32)nyquist) {
            break;
        }
    }

    num_bands = i;
    pushmalloc((void PTR4* PTR4*)&bands, (num_bands + 1) * sizeof(*bands));
    pushmalloc((void PTR4* PTR4*)&fft_work, BINKAC_FFT_WORK_BYTES(transform_size_half, fft_work));
    if ((flags & BINKACNEWFORMAT) != 0) {
        pushmalloc((void PTR4* PTR4*)&fft_coeffs, BINKAC_DCT_COEFF_BYTES(transform_size));
    } else {
        pushmalloc((void PTR4* PTR4*)&fft_coeffs,
                   BINKAC_RDFT_COEFF_BYTES(transform_size_half, fft_coeffs));
    }
    pushmalloc((void PTR4* PTR4*)&overlap, BINKAC_OVERLAP_BYTES(buffer_size));
    pushmalloc((void PTR4* PTR4*)&samples, buffer_size);

    ba = (HBINKAUDIODECOMP)popmalloc(sizeof(*ba));
    if (ba == 0) {
        return 0;
    }

    memset(ba, 0, sizeof(*ba));
    ba->bands = bands;
    ba->fft_work = fft_work;
    ba->fft_coeffs = fft_coeffs;
    ba->overlap = overlap;
    ba->samples = samples;
    ba->flags = flags;
    ba->chans = chans;
    ba->num_bands = num_bands;
    ba->transform_size = transform_size;
    ba->buffer_size = buffer_size;
    ba->window_size_in_bytes = BINKAC_WINDOW_BYTES(buffer_size);
    transform_size_root = BINKAC_TRANSFORM_ROOT_SCALE / radfsqrt((f32)transform_size);
    ba->transform_size_root = transform_size_root;

    for (i = 0; i < num_bands; ++i) {
        ba->bands[i] = (bink_bandtopfreq[i] * transform_size_half) / nyquist;
        if (ba->bands[i] == 0) {
            ba->bands[i] = 1;
        }
    }
    ba->bands[i] = transform_size_half;
    ba->fft_work[0] = 0;
    ba->start_frame = BINKAC_START_FRAME;

    return ba;
}

void BinkAudioDecompress(HBINKAUDIODECOMP ba, void PTR4* PTR4* outptr, u32 PTR4* outbytes,
                         void PTR4* inptr, void PTR4* PTR4* inoutptr)
{
    u32 transform_size;
    f32 transform_size_root;
    u32 chans;
    u32 flags;
    s32 PTR4* fft_work;
    f32 PTR4* fft_coeffs;
    s16 PTR4* samples;
    u32 num_bands;
    const u32 PTR4* bands;
    u32 used;

    transform_size = ba->transform_size;
    transform_size_root = ba->transform_size_root;
    chans = ba->chans;
    flags = ba->flags;
    fft_work = ba->fft_work;
    fft_coeffs = ba->fft_coeffs;
    samples = ba->samples;
    num_bands = ba->num_bands;
    bands = ba->bands;
    used = Unquant(transform_size, chans, flags, fft_work, fft_coeffs, samples, inptr,
                   num_bands, bands, transform_size_root);

    /* Later frames overlap-add their leading window against the saved tail from the last frame. */
    if (ba->start_frame != 0) {
        ba->start_frame = 0;
    } else {
        u32 i;
        u32 count = ba->window_size_in_bytes / sizeof(*ba->samples);

        for (i = 0; i < count; ++i) {
            ba->samples[i] = (ba->samples[i] * i + ba->overlap[i] * (count - i)) / count;
        }
    }

    /* Save the trailing window for the next frame's overlap blend. */
    memcpy(ba->overlap, (u8 PTR4*)ba->samples + (ba->buffer_size - ba->window_size_in_bytes),
           ba->window_size_in_bytes);

    if (outbytes != 0) {
        /* The public frame excludes the saved overlap tail. */
        *outbytes = BINKAC_OUTPUT_BYTES(ba->buffer_size, ba->window_size_in_bytes);
    }

    if (outptr != 0) {
        *outptr = ba->samples;
    }

    if (inoutptr != 0) {
        /* Return the compressed stream cursor after the bits consumed by Unquant. */
        *inoutptr = (u8 PTR4*)inptr + used;
    }
}

void radfree(void PTR4* ptr);

void BinkAudioDecompressClose(HBINKAUDIODECOMP handle)
{
    radfree(handle);
}
