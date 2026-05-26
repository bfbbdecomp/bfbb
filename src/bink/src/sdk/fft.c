#include "bink.h"
#include "fft.h"

extern const u32 BINK_RDFT_INVERSE_SCALE_BITS[];
extern const u32 BINK_FFT_TRIG_ONE_BITS[];
extern const u32 BINK_FFT_HALF_SECANT_SCALE_BITS[];
extern const u32 BINK_FFT_SIX_BITS[];
extern const u32 BINK_FFT_THREE_BITS[];
extern const u32 BINK_FFT_HALF_RECIP_SCALE_BITS[];
extern const u32 BINK_DCT_TRIG_ONE_BITS[];
extern const u32 BINK_DCT_CENTER_SCALE_BITS[];
extern const u32 BINK_DCT_HALF_SCALE_BITS[];
extern const u32 BINK_CFT_ROT_ONE_BITS[];
extern const u32 BINK_CFT_ROT_ZERO_BITS[];
extern const u32 BINK_CFT_INV_ROT_ONE_BITS[];
extern const u32 BINK_CFT_INV_ROT_ZERO_BITS[];
extern const u32 BINK_RFT_HALF_SCALE_BITS[];
extern const u32 BINK_RFT_INV_HALF_SCALE_BITS[];

f32 atanf(f32 x);
f32 cosf(f32 x);
f32 sinf(f32 x);

#define F32CONST(label) (*(const f32 PTR4*)(label))
#define F64CONST(label) (*(const f64*)(label))

#define RDFT_INVERSE_SCALE F32CONST(BINK_RDFT_INVERSE_SCALE_BITS)
#define FFT_TRIG_ONE F32CONST(BINK_FFT_TRIG_ONE_BITS)
#define FFT_HALF_SECANT_SCALE F64CONST(BINK_FFT_HALF_SECANT_SCALE_BITS)
#define FFT_SIX F32CONST(BINK_FFT_SIX_BITS)
#define FFT_THREE F32CONST(BINK_FFT_THREE_BITS)
#define FFT_HALF_RECIP_SCALE F32CONST(BINK_FFT_HALF_RECIP_SCALE_BITS)
#define DCT_TRIG_ONE F32CONST(BINK_DCT_TRIG_ONE_BITS)
#define DCT_CENTER_SCALE F32CONST(BINK_DCT_CENTER_SCALE_BITS)
#define DCT_HALF_SCALE F64CONST(BINK_DCT_HALF_SCALE_BITS)
#define CFT_ROT_ONE F32CONST(BINK_CFT_ROT_ONE_BITS)
#define CFT_ROT_ZERO F32CONST(BINK_CFT_ROT_ZERO_BITS)
#define CFT_INV_ROT_ONE F32CONST(BINK_CFT_INV_ROT_ONE_BITS)
#define CFT_INV_ROT_ZERO F32CONST(BINK_CFT_INV_ROT_ZERO_BITS)
#define RFT_HALF_SCALE F32CONST(BINK_RFT_HALF_SCALE_BITS)
#define RFT_INV_HALF_SCALE F32CONST(BINK_RFT_INV_HALF_SCALE_BITS)

#define FFT_WORK_INDEX_OFFSET 2
#define FFT_EIGHTH_SIZE(n) ((n) >> 3)
#define FFT_QUARTER_SIZE(n) ((s32)(n) >> 2)
#define FFT_HALF_SIZE(n) ((n) >> 1)
#define FFT_TABLE_FULL_SIZE(n) ((n) << 2)
#define FFT_TABLE_DOUBLE_SIZE(n) ((n) << 1)
#define FFT_CFT_16_REAL_SIZE 32
#define FFT_CFT_8_REAL_SIZE 16
#define FFT_CFT_4_REAL_SIZE 8
#define FFT_CFT_2_REAL_SIZE 4
#define FFT_CFT_RECURSION_LIMIT 0x200

/* Bink audio uses Ooura-style RDFT/DCT work arrays: ip stores table sizes,
   followed by bit-reversal work indices, while w holds trig tables. */
static void makewt(s32 nw, s32 PTR4* ip, f32 PTR4* w);
static void makect(s32 nc, s32 PTR4* ip, f32 PTR4* c);
void cftfsub(s32 n, f32 PTR4* a, s32 PTR4* ip, s32 nw, f32 PTR4* w);
static void cftbsub(s32 n, f32 PTR4* a, s32 PTR4* ip, s32 nw, f32 PTR4* w);
static void bitrv2(s32 n, s32 PTR4* ip, f32 PTR4* a);
static void bitrv2conj(s32 n, s32 PTR4* ip, f32 PTR4* a);
static void bitrv216(f32 PTR4* a);
static void bitrv216neg(f32 PTR4* a);
static void bitrv208(f32 PTR4* a);
static void bitrv208neg(f32 PTR4* a);
static void cftf1st(s32 n, f32 PTR4* a, f32 PTR4* w);
static void cftb1st(s32 n, f32 PTR4* a, f32 PTR4* w);
void cftrec1(s32 n, f32 PTR4* a, s32 nw, f32 PTR4* w);
void cftrec2(s32 n, f32 PTR4* a, s32 nw, f32 PTR4* w);
static void cftexp1(s32 n, f32 PTR4* a, s32 nw, f32 PTR4* w);
static void cftexp2(s32 n, f32 PTR4* a, s32 nw, f32 PTR4* w);
static void cftmdl1(s32 n, f32 PTR4* a, f32 PTR4* w);
static void cftmdl2(s32 n, f32 PTR4* a, f32 PTR4* w);
static void cftfx41(s32 n, f32 PTR4* a, s32 nw, f32 PTR4* w);
static void cftfx42(s32 n, f32 PTR4* a, s32 nw, f32 PTR4* w);
static void cftf161(f32 PTR4* a, f32 PTR4* w);
static void cftf162(f32 PTR4* a, f32 PTR4* w);
static void cftf081(f32 PTR4* a, f32 PTR4* w);
static void cftf082(f32 PTR4* a, f32 PTR4* w);
static void cftf040(f32 PTR4* a);
static void cftb040(f32 PTR4* a);
static void cftx020(f32 PTR4* a);
static void rftfsub(s32 n, f32 PTR4* a, s32 nc, f32 PTR4* c);
static void rftbsub(s32 n, f32 PTR4* a, s32 nc, f32 PTR4* c);
static void dctsub(s32 n, f32 PTR4* a, s32 nc, f32 PTR4* c);

/* Real discrete Fourier transform used by legacy Bink audio streams. */
void rdft(u32 n, s32 isgn, f32 PTR4* a, s32 PTR4* ip, f32 PTR4* w)
{
    f32 xi;
    s32 nw;
    s32 nc;

    nw = ip[0];
    if ((s32)n > FFT_TABLE_FULL_SIZE(nw)) {
        nw = FFT_QUARTER_SIZE(n);
        makewt(nw, ip, w);
    }

    nc = ip[1];
    if ((s32)n > FFT_TABLE_FULL_SIZE(nc)) {
        nc = FFT_QUARTER_SIZE(n);
        makect(nc, ip, w + nw);
    }

    if (isgn >= 0) {
        if ((s32)n > FFT_CFT_2_REAL_SIZE) {
            cftfsub(n, a, ip + FFT_WORK_INDEX_OFFSET, nw, w);
            rftfsub(n, a, nc, w + nw);
        } else if (n == FFT_CFT_2_REAL_SIZE) {
            cftfsub(FFT_CFT_2_REAL_SIZE, a, ip + FFT_WORK_INDEX_OFFSET, nw, w);
        }

        xi = a[0] - a[1];
        a[0] += a[1];
        a[1] = xi;
    } else {
        a[1] = (a[0] - a[1]) * RDFT_INVERSE_SCALE;
        a[0] -= a[1];

        if ((s32)n > FFT_CFT_2_REAL_SIZE) {
            rftbsub(n, a, nc, w + nw);
            cftbsub(n, a, ip + FFT_WORK_INDEX_OFFSET, nw, w);
        } else if (n == FFT_CFT_2_REAL_SIZE) {
            cftbsub(FFT_CFT_2_REAL_SIZE, a, ip + FFT_WORK_INDEX_OFFSET, nw, w);
        }
    }
}

/* Discrete cosine transform path used by newer Bink audio streams. */
void ddct(u32 n, s32 isgn, f32 PTR4* a, s32 PTR4* ip, f32 PTR4* w)
{
    f32 xr;
    f32 xi;
    f32 yr;
    s32 j;
    s32 nw;
    s32 nc;

    nw = ip[0];
    if ((s32)n > FFT_TABLE_FULL_SIZE(nw)) {
        nw = FFT_QUARTER_SIZE(n);
        makewt(nw, ip, w);
    }

    nc = ip[1];
    if ((s32)n > nc) {
        nc = n;
        makect(nc, ip, w + nw);
    }

    if (isgn < 0) {
        j = n - 2;
        xr = a[n - 1];
        if (1 < j) {
            f32 PTR4* p = a + j;
            do {
                f32 tmp;
                f32 sum;
                f32 diff;

                xi = p[0];
                j -= 2;
                tmp = p[-1];
                diff = xi - tmp;
                p[1] = diff;
                sum = xi + tmp;
                p[0] = sum;
                p -= 2;
            } while (1 < j);
        }

        xi = a[0];
        yr = xi + xr;
        a[0] = yr;
        xr = xi - xr;
        a[1] = xr;

        if ((s32)n > FFT_CFT_2_REAL_SIZE) {
            rftbsub(n, a, nc, w + nw);
            cftbsub(n, a, ip + FFT_WORK_INDEX_OFFSET, nw, w);
        } else if (n == FFT_CFT_2_REAL_SIZE) {
            cftbsub(FFT_CFT_2_REAL_SIZE, a, ip + FFT_WORK_INDEX_OFFSET, nw, w);
        }
    }

    dctsub(n, a, nc, w + nw);

    if (isgn >= 0) {
        if ((s32)n > FFT_CFT_2_REAL_SIZE) {
            cftfsub(n, a, ip + FFT_WORK_INDEX_OFFSET, nw, w);
            rftfsub(n, a, nc, w + nw);
        } else if (n == FFT_CFT_2_REAL_SIZE) {
            cftfsub(FFT_CFT_2_REAL_SIZE, a, ip + FFT_WORK_INDEX_OFFSET, nw, w);
        }

        xr = a[0];
        j = 2;
        xi = a[1];
        a[0] = xr + xi;
        xi = xr - xi;
        if (j < (s32)n) {
            f32 PTR4* p = a + 2;
            do {
                f32 tmp;
                f32 sum;
                f32 diff;

                yr = p[0];
                j += 2;
                tmp = p[1];
                diff = yr - tmp;
                p[-1] = diff;
                sum = yr + tmp;
                p[0] = sum;
                p += 2;
            } while (j < (s32)n);
        }
        a[n - 1] = xi;
    }
}

#pragma dont_inline on
/* Build complex FFT twiddle factors and the matching bit-reversal table. */
static void makewt(s32 nw, s32 PTR4* ip, f32 PTR4* w)
{
    s32 j;
    s32 nwh;
    s32 offset;
    s32 next;
    f32 delta;
    f32 three;
    f32 x;
    f32 cos_nwh;
    f32 half_recip;

    ip[1] = 1;
    ip[0] = nw;

    if (nw > 2) {
        nwh = FFT_HALF_SIZE(nw);
        delta = atanf(FFT_TRIG_ONE) / (f32)nwh;
        x = cosf(delta * (f32)nwh);
        cos_nwh = x;
        w[1] = x;
        w[0] = FFT_TRIG_ONE;

        if (nwh > 3) {
            w[2] = FFT_HALF_SECANT_SCALE / cosf(delta + delta);
            w[3] = FFT_HALF_SECANT_SCALE / cosf(delta * FFT_SIX);
        }

        j = 4;
        if (j < nwh) {
            f32 PTR4* p = w + 4;
            three = FFT_THREE;
            do {
                x = delta * (f32)j;
                p[0] = cosf(x);
                p[1] = sinf(x);
                x = (delta * three) * (f32)j;
                p[2] = cosf(x);
                p[3] = sinf(x);
                j += 4;
                p += 4;
            } while (j < nwh);
        }

        offset = 0;
        while (nwh > 2) {
            half_recip = FFT_HALF_RECIP_SCALE;
            next = offset + nwh;
            nwh >>= 1;
            w[next] = FFT_TRIG_ONE;
            w[next + 1] = cos_nwh;

            if (nwh > 3) {
                f32 x6;
                f32 x4;

                x6 = w[offset + 6];
                x4 = w[offset + 4];
                w[next + 3] = half_recip / x6;
                w[next + 2] = half_recip / x4;
            }

            j = 4;
            if (j < nwh) {
                f32 PTR4* src = w + offset + 8;
                f32 PTR4* dst = w + next + 4;
                do {
                    f32 x0;
                    f32 x1;
                    f32 x2;
                    f32 x3;

                    j += 4;
                    x0 = src[0];
                    x1 = src[1];
                    x2 = src[2];
                    x3 = src[3];
                    dst[0] = x0;
                    dst[1] = x1;
                    dst[2] = x2;
                    dst[3] = x3;
                    src += 8;
                    dst += 4;
                } while (j < nwh);
            }

            offset = next;
        }
    }
}

/* Build the cosine table used by RDFT/DCT pre/post-processing. */
static void makect(s32 nc, s32 PTR4* ip, f32 PTR4* c)
{
    s32 j;
    s32 nch;
    f32 delta;
    f32 x;
    f64 half;

    ip[1] = nc;

    if (nc > 1) {
        nch = FFT_HALF_SIZE(nc);
        j = 1;
        delta = atanf(DCT_TRIG_ONE) / (f32)nch;
        x = cosf(delta * (f32)nch);
        c[0] = x;
        c[nch] = x * DCT_CENTER_SCALE;

        if (j < nch) {
            f32 PTR4* fwd = c + 1;
            f32 PTR4* rev = c + nc - 1;
            half = DCT_HALF_SCALE;
            do {
                x = delta * (f32)j;
                ++j;
                *fwd = cosf(x) * half;
                ++fwd;
                *rev = sinf(x) * half;
                --rev;
            } while (j < nch);
        }
    }
}
void cftfsub(s32 n, f32 PTR4* a, s32 PTR4* ip, s32 nw, f32 PTR4* w)
{
    s32 n4;

    if (n > FFT_CFT_16_REAL_SIZE) {
        n4 = FFT_QUARTER_SIZE(n);
        cftf1st(n, a, &w[nw - n4]);
        if (n > FFT_CFT_RECURSION_LIMIT) {
            cftrec1(n4, a, nw, w);
            cftrec2(n4, a + n4, nw, w);
            cftrec1(n4, a + n4 * 2, nw, w);
            cftrec1(n4, a + n4 * 3, nw, w);
        } else if (n4 > FFT_CFT_16_REAL_SIZE) {
            cftexp1(n, a, nw, w);
        } else {
            cftfx41(n, a, nw, w);
        }
        bitrv2(n, ip, a);
    } else if (n > FFT_CFT_4_REAL_SIZE) {
        if (n == FFT_CFT_16_REAL_SIZE) {
            cftf161(a, &w[nw - 8]);
            bitrv216(a);
        } else {
            cftf081(a, w);
            bitrv208(a);
        }
    } else if (n == FFT_CFT_4_REAL_SIZE) {
        cftf040(a);
    } else if (n == FFT_CFT_2_REAL_SIZE) {
        cftx020(a);
    }
}

static void cftbsub(s32 n, f32 PTR4* a, s32 PTR4* ip, s32 nw, f32 PTR4* w)
{
    s32 n4;

    if (n > FFT_CFT_16_REAL_SIZE) {
        n4 = FFT_QUARTER_SIZE(n);
        cftb1st(n, a, &w[nw - n4]);
        if (n > FFT_CFT_RECURSION_LIMIT) {
            cftrec1(n4, a, nw, w);
            cftrec2(n4, a + n4, nw, w);
            cftrec1(n4, a + n4 * 2, nw, w);
            cftrec1(n4, a + n4 * 3, nw, w);
        } else if (n4 > FFT_CFT_16_REAL_SIZE) {
            cftexp1(n, a, nw, w);
        } else {
            cftfx41(n, a, nw, w);
        }
        bitrv2conj(n, ip, a);
    } else if (n > FFT_CFT_4_REAL_SIZE) {
        if (n == FFT_CFT_16_REAL_SIZE) {
            cftf161(a, &w[nw - 8]);
            bitrv216neg(a);
        } else {
            cftf081(a, w);
            bitrv208neg(a);
        }
    } else if (n == FFT_CFT_4_REAL_SIZE) {
        cftb040(a);
    } else if (n == FFT_CFT_2_REAL_SIZE) {
        cftx020(a);
    }
}

static void bitrv2(s32 n, s32 PTR4* ip, f32 PTR4* a)
{
    f32 xr;
    f32 xi;
    f32 yr;
    s32 j;
    s32 k;
    s32 l;
    s32 m;
    s32 m2;
    s32 j1;
    s32 k1;

    ip[0] = 0;
    l = n;
    m = 1;
    while ((m << 3) < l) {
        l >>= 1;
        for (j = 0; j < m; ++j) {
            ip[m + j] = ip[j] + l;
        }
        m2 = FFT_TABLE_DOUBLE_SIZE(m);
        m = m2;
    }

    m2 = FFT_TABLE_DOUBLE_SIZE(m);
    if ((m << 3) == l) {
        k = 0;
        if (k < m) {
            do {
                j = 0;
                if (j < k) {
                    do {
                        j1 = k * 2 + ip[j];
                        k1 = j * 2 + ip[k];
                        xr = a[k1];
                        xi = a[k1 + 1];
                        yr = a[j1 + 1];
                        a[k1] = a[j1];
                        a[k1 + 1] = yr;
                        a[j1] = xr;
                        a[j1 + 1] = xi;

                        k1 += m2;
                        j1 += m * 4;
                        xr = a[k1];
                        xi = a[k1 + 1];
                        yr = a[j1 + 1];
                        a[k1] = a[j1];
                        a[k1 + 1] = yr;
                        a[j1] = xr;
                        a[j1 + 1] = xi;

                        k1 += m2;
                        j1 -= m2;
                        xr = a[k1];
                        xi = a[k1 + 1];
                        yr = a[j1 + 1];
                        a[k1] = a[j1];
                        a[k1 + 1] = yr;
                        a[j1] = xr;
                        a[j1 + 1] = xi;

                        k1 += m2;
                        j1 += m * 4;
                        xr = a[k1];
                        xi = a[k1 + 1];
                        yr = a[j1 + 1];
                        a[k1] = a[j1];
                        a[k1 + 1] = yr;
                        a[j1] = xr;
                        a[j1 + 1] = xi;

                        ++j;
                    } while (j < k);
                }

                j1 = k * 2 + m2 + ip[k];
                k1 = j1 + m2;
                xr = a[j1];
                xi = a[j1 + 1];
                yr = a[k1 + 1];
                a[j1] = a[k1];
                a[j1 + 1] = yr;
                a[k1] = xr;
                a[k1 + 1] = xi;
                ++k;
            } while (k < m);
        }
    } else {
        k = 1;
        if (k < m) {
            do {
                j = 0;
                if (j < k) {
                    do {
                        j1 = k * 2 + ip[j];
                        k1 = j * 2 + ip[k];
                        xr = a[k1];
                        xi = a[k1 + 1];
                        yr = a[j1 + 1];
                        a[k1] = a[j1];
                        a[k1 + 1] = yr;
                        a[j1] = xr;
                        a[j1 + 1] = xi;

                        k1 += m2;
                        j1 += m2;
                        xr = a[k1];
                        xi = a[k1 + 1];
                        yr = a[j1 + 1];
                        a[k1] = a[j1];
                        a[k1 + 1] = yr;
                        a[j1] = xr;
                        a[j1 + 1] = xi;
                        ++j;
                    } while (j < k);
                }
                ++k;
            } while (k < m);
        }
    }
}
static void bitrv2conj(s32 n, s32 PTR4* ip, f32 PTR4* a)
{
    f32 xr;
    f32 xi;
    f32 yr;
    s32 j;
    s32 k;
    s32 l;
    s32 m;
    s32 m2;
    s32 j1;
    s32 k1;

    ip[0] = 0;
    l = n;
    m = 1;
    while ((m << 3) < l) {
        l >>= 1;
        m2 = FFT_TABLE_DOUBLE_SIZE(m);
        for (j = 0; j < m; ++j) {
            ip[m + j] = ip[j] + l;
        }
        m = m2;
    }

    m2 = FFT_TABLE_DOUBLE_SIZE(m);
    if ((m << 3) == l) {
        k = 0;
        if (k < m) {
            do {
                j = 0;
                if (j < k) {
                    do {
                        j1 = k * 2 + ip[j];
                        k1 = j * 2 + ip[k];
                        xr = a[k1];
                        xi = a[k1 + 1];
                        yr = a[j1 + 1];
                        a[k1] = a[j1];
                        a[k1 + 1] = -yr;
                        a[j1] = xr;
                        a[j1 + 1] = -xi;

                        k1 += m2;
                        j1 += m * 4;
                        xr = a[k1];
                        xi = a[k1 + 1];
                        yr = a[j1 + 1];
                        a[k1] = a[j1];
                        a[k1 + 1] = -yr;
                        a[j1] = xr;
                        a[j1 + 1] = -xi;

                        k1 += m2;
                        j1 -= m2;
                        xr = a[k1];
                        xi = a[k1 + 1];
                        yr = a[j1 + 1];
                        a[k1] = a[j1];
                        a[k1 + 1] = -yr;
                        a[j1] = xr;
                        a[j1 + 1] = -xi;

                        k1 += m2;
                        j1 += m * 4;
                        xr = a[k1];
                        xi = a[k1 + 1];
                        yr = a[j1 + 1];
                        a[k1] = a[j1];
                        a[k1 + 1] = -yr;
                        a[j1] = xr;
                        a[j1 + 1] = -xi;

                        ++j;
                    } while (j < k);
                }

                j1 = k * 2 + ip[k];
                a[j1 + 1] = -a[j1 + 1];
                k1 = j1 + m2;
                j1 = k1 + m2;
                xr = a[k1];
                xi = a[k1 + 1];
                yr = a[j1 + 1];
                a[k1] = a[j1];
                a[k1 + 1] = -yr;
                a[j1] = xr;
                a[j1 + 1] = -xi;
                j1 += m2;
                a[j1 + 1] = -a[j1 + 1];
                ++k;
            } while (k < m);
        }
    } else {
        a[1] = -a[1];
        a[m2 + 1] = -a[m2 + 1];
        k = 1;
        if (k < m) {
            do {
                j = 0;
                if (j < k) {
                    do {
                        j1 = k * 2 + ip[j];
                        k1 = j * 2 + ip[k];
                        xr = a[k1];
                        xi = a[k1 + 1];
                        yr = a[j1 + 1];
                        a[k1] = a[j1];
                        a[k1 + 1] = -yr;
                        a[j1] = xr;
                        a[j1 + 1] = -xi;

                        k1 += m2;
                        j1 += m2;
                        xr = a[k1];
                        xi = a[k1 + 1];
                        yr = a[j1 + 1];
                        a[k1] = a[j1];
                        a[k1 + 1] = -yr;
                        a[j1] = xr;
                        a[j1 + 1] = -xi;
                        ++j;
                    } while (j < k);
                }

                j1 = k * 2 + ip[k];
                a[j1 + 1] = -a[j1 + 1];
                j1 += m2;
                a[j1 + 1] = -a[j1 + 1];
                ++k;
            } while (k < m);
        }
    }
}
static void bitrv216(f32 PTR4* a)
{
    f32 x4;
    f32 x5;
    f32 x8;
    f32 x9;
    f32 x16;
    f32 x17;
    f32 x20;
    f32 x24;
    f32 x25;
    f32 x2;
    f32 x3;
    f32 x6;
    f32 x7;
    f32 x10;
    f32 x21;
    f32 x11;
    f32 x14;
    f32 x15;
    f32 x22;
    f32 x23;
    f32 x26;
    f32 x27;
    f32 x28;
    f32 x29;

    x4 = a[4];
    x5 = a[5];
    x8 = a[8];
    x9 = a[9];
    x16 = a[16];
    x17 = a[17];
    x20 = a[20];
    x24 = a[24];
    x25 = a[25];
    x2 = a[2];
    x3 = a[3];
    x6 = a[6];
    x7 = a[7];
    x10 = a[10];

    a[2] = x16;
    a[3] = x17;
    a[4] = x8;
    a[5] = x9;
    a[6] = x24;
    a[7] = x25;
    a[8] = x4;
    a[9] = x5;
    a[10] = x20;

    x21 = a[21];
    x11 = a[11];
    x14 = a[14];
    x15 = a[15];
    x22 = a[22];
    x23 = a[23];
    x26 = a[26];
    x27 = a[27];
    x28 = a[28];
    x29 = a[29];

    a[11] = x21;
    a[14] = x28;
    a[15] = x29;
    a[16] = x2;
    a[17] = x3;
    a[20] = x10;
    a[21] = x11;
    a[22] = x26;
    a[23] = x27;
    a[24] = x6;
    a[25] = x7;
    a[26] = x22;
    a[27] = x23;
    a[28] = x14;
    a[29] = x15;
}

static void bitrv216neg(f32 PTR4* a)
{
    f32 x1r, x1i, x2r, x2i, x3r, x3i, x4r, x4i;
    f32 x5r, x5i, x6r, x6i, x7r, x7i, x8r, x8i;
    f32 x9r, x9i, x10r, x10i, x11r, x11i, x12r, x12i;
    f32 x13r, x13i, x14r, x14i, x15r, x15i;

    x1r = a[2];
    x1i = a[3];
    x2r = a[4];
    x2i = a[5];
    x3r = a[6];
    x3i = a[7];
    x4r = a[8];
    x4i = a[9];
    x5r = a[10];
    x5i = a[11];
    x6r = a[12];
    x6i = a[13];
    x7r = a[14];
    x7i = a[15];
    x8r = a[16];
    x8i = a[17];
    x9r = a[18];
    x9i = a[19];
    x10r = a[20];
    x10i = a[21];
    x11r = a[22];
    x11i = a[23];
    x12r = a[24];
    x12i = a[25];
    x13r = a[26];
    x13i = a[27];
    x14r = a[28];
    x14i = a[29];
    x15r = a[30];
    x15i = a[31];

    a[2] = x15r;
    a[3] = x15i;
    a[4] = x7r;
    a[5] = x7i;
    a[6] = x11r;
    a[7] = x11i;
    a[8] = x3r;
    a[9] = x3i;
    a[10] = x13r;
    a[11] = x13i;
    a[12] = x5r;
    a[13] = x5i;
    a[14] = x9r;
    a[15] = x9i;
    a[16] = x1r;
    a[17] = x1i;
    a[18] = x14r;
    a[19] = x14i;
    a[20] = x6r;
    a[21] = x6i;
    a[22] = x10r;
    a[23] = x10i;
    a[24] = x2r;
    a[25] = x2i;
    a[26] = x12r;
    a[27] = x12i;
    a[28] = x4r;
    a[29] = x4i;
    a[30] = x8r;
    a[31] = x8i;
}

static void bitrv208(f32 PTR4* a)
{
    f32 x2;
    f32 x3;
    f32 x6;
    f32 x7;
    f32 x8;
    f32 x9;
    f32 x12;
    f32 x13;

    x2 = a[2];
    x3 = a[3];
    x6 = a[6];
    x7 = a[7];
    x8 = a[8];
    x9 = a[9];
    x12 = a[12];
    x13 = a[13];

    a[2] = x8;
    a[3] = x9;
    a[6] = x12;
    a[7] = x13;
    a[8] = x2;
    a[9] = x3;
    a[12] = x6;
    a[13] = x7;
}

static void bitrv208neg(f32 PTR4* a)
{
    f32 x1r, x1i, x2r, x2i, x3r, x3i, x4r, x4i;
    f32 x5r, x5i, x6r, x6i, x7r, x7i;

    x1r = a[2];
    x1i = a[3];
    x2r = a[4];
    x2i = a[5];
    x3r = a[6];
    x3i = a[7];
    x4r = a[8];
    x4i = a[9];
    x5r = a[10];
    x5i = a[11];
    x6r = a[12];
    x6i = a[13];
    x7r = a[14];
    x7i = a[15];

    a[2] = x7r;
    a[3] = x7i;
    a[4] = x3r;
    a[5] = x3i;
    a[6] = x5r;
    a[7] = x5i;
    a[8] = x1r;
    a[9] = x1i;
    a[10] = x6r;
    a[11] = x6i;
    a[12] = x2r;
    a[13] = x2i;
    a[14] = x4r;
    a[15] = x4i;
}
static void cftf1st(s32 n, f32 PTR4* a, f32 PTR4* w)
{
    int j, j0, j1, j2, j3, k, m, mh;
    f32 wn4r, csc1, csc3, wk1r, wk1i, wk3r, wk3i,
           wd1r, wd1i, wd3r, wd3i;
    f32 x0r, x0i, x1r, x1i, x2r, x2i, x3r, x3i,
           y0r, y0i, y1r, y1i, y2r, y2i, y3r, y3i;

    mh = FFT_EIGHTH_SIZE(n);
    m = 2 * mh;
    j1 = m;
    j2 = j1 + m;
    j3 = j2 + m;
    x0r = a[0] + a[j2];
    x0i = a[1] + a[j2 + 1];
    x1r = a[0] - a[j2];
    x1i = a[1] - a[j2 + 1];
    x2r = a[j1] + a[j3];
    x2i = a[j1 + 1] + a[j3 + 1];
    x3r = a[j1] - a[j3];
    x3i = a[j1 + 1] - a[j3 + 1];
    a[0] = x0r + x2r;
    a[1] = x0i + x2i;
    a[j1] = x0r - x2r;
    a[j1 + 1] = x0i - x2i;
    a[j2] = x1r - x3i;
    a[j2 + 1] = x1i + x3r;
    a[j3] = x1r + x3i;
    a[j3 + 1] = x1i - x3r;
    wn4r = w[1];
    csc1 = w[2];
    csc3 = w[3];
    wd1r = CFT_ROT_ONE;
    wd1i = CFT_ROT_ZERO;
    wd3r = CFT_ROT_ONE;
    wd3i = CFT_ROT_ZERO;
    k = 0;
    for (j = 2; j < mh - 2; j += 4)
    {
        k += 4;
        wk1r = csc1 * (wd1r + w[k]);
        wk1i = csc1 * (wd1i + w[k + 1]);
        wk3r = csc3 * (wd3r + w[k + 2]);
        wk3i = csc3 * (wd3i - w[k + 3]);
        wd1r = w[k];
        wd1i = w[k + 1];
        wd3r = w[k + 2];
        wd3i = -w[k + 3];
        j1 = j + m;
        j2 = j1 + m;
        j3 = j2 + m;
        x0r = a[j] + a[j2];
        x0i = a[j + 1] + a[j2 + 1];
        x1r = a[j] - a[j2];
        x1i = a[j + 1] - a[j2 + 1];
        y0r = a[j + 2] + a[j2 + 2];
        y0i = a[j + 3] + a[j2 + 3];
        y1r = a[j + 2] - a[j2 + 2];
        y1i = a[j + 3] - a[j2 + 3];
        x2r = a[j1] + a[j3];
        x2i = a[j1 + 1] + a[j3 + 1];
        x3r = a[j1] - a[j3];
        x3i = a[j1 + 1] - a[j3 + 1];
        y2r = a[j1 + 2] + a[j3 + 2];
        y2i = a[j1 + 3] + a[j3 + 3];
        y3r = a[j1 + 2] - a[j3 + 2];
        y3i = a[j1 + 3] - a[j3 + 3];
        a[j] = x0r + x2r;
        a[j + 1] = x0i + x2i;
        a[j + 2] = y0r + y2r;
        a[j + 3] = y0i + y2i;
        a[j1] = x0r - x2r;
        a[j1 + 1] = x0i - x2i;
        a[j1 + 2] = y0r - y2r;
        a[j1 + 3] = y0i - y2i;
        x0r = x1r - x3i;
        x0i = x1i + x3r;
        a[j2] = wk1r * x0r - wk1i * x0i;
        a[j2 + 1] = wk1r * x0i + wk1i * x0r;
        x0r = y1r - y3i;
        x0i = y1i + y3r;
        a[j2 + 2] = wd1r * x0r - wd1i * x0i;
        a[j2 + 3] = wd1r * x0i + wd1i * x0r;
        x0r = x1r + x3i;
        x0i = x1i - x3r;
        a[j3] = wk3r * x0r + wk3i * x0i;
        a[j3 + 1] = wk3r * x0i - wk3i * x0r;
        x0r = y1r + y3i;
        x0i = y1i - y3r;
        a[j3 + 2] = wd3r * x0r + wd3i * x0i;
        a[j3 + 3] = wd3r * x0i - wd3i * x0r;
        j0 = m - j;
        j1 = j0 + m;
        j2 = j1 + m;
        j3 = j2 + m;
        x0r = a[j0] + a[j2];
        x0i = a[j0 + 1] + a[j2 + 1];
        x1r = a[j0] - a[j2];
        x1i = a[j0 + 1] - a[j2 + 1];
        y0r = a[j0 - 2] + a[j2 - 2];
        y0i = a[j0 - 1] + a[j2 - 1];
        y1r = a[j0 - 2] - a[j2 - 2];
        y1i = a[j0 - 1] - a[j2 - 1];
        x2r = a[j1] + a[j3];
        x2i = a[j1 + 1] + a[j3 + 1];
        x3r = a[j1] - a[j3];
        x3i = a[j1 + 1] - a[j3 + 1];
        y2r = a[j1 - 2] + a[j3 - 2];
        y2i = a[j1 - 1] + a[j3 - 1];
        y3r = a[j1 - 2] - a[j3 - 2];
        y3i = a[j1 - 1] - a[j3 - 1];
        a[j0] = x0r + x2r;
        a[j0 + 1] = x0i + x2i;
        a[j0 - 2] = y0r + y2r;
        a[j0 - 1] = y0i + y2i;
        a[j1] = x0r - x2r;
        a[j1 + 1] = x0i - x2i;
        a[j1 - 2] = y0r - y2r;
        a[j1 - 1] = y0i - y2i;
        x0r = x1r - x3i;
        x0i = x1i + x3r;
        a[j2] = wk1i * x0r - wk1r * x0i;
        a[j2 + 1] = wk1i * x0i + wk1r * x0r;
        x0r = y1r - y3i;
        x0i = y1i + y3r;
        a[j2 - 2] = wd1i * x0r - wd1r * x0i;
        a[j2 - 1] = wd1i * x0i + wd1r * x0r;
        x0r = x1r + x3i;
        x0i = x1i - x3r;
        a[j3] = wk3i * x0r + wk3r * x0i;
        a[j3 + 1] = wk3i * x0i - wk3r * x0r;
        x0r = y1r + y3i;
        x0i = y1i - y3r;
        a[j3 - 2] = wd3i * x0r + wd3r * x0i;
        a[j3 - 1] = wd3i * x0i - wd3r * x0r;
    }
    wk1r = csc1 * (wd1r + wn4r);
    wk1i = csc1 * (wd1i + wn4r);
    wk3r = csc3 * (wd3r - wn4r);
    wk3i = csc3 * (wd3i - wn4r);
    j0 = mh;
    j1 = j0 + m;
    j2 = j1 + m;
    j3 = j2 + m;
    x0r = a[j0 - 2] + a[j2 - 2];
    x0i = a[j0 - 1] + a[j2 - 1];
    x1r = a[j0 - 2] - a[j2 - 2];
    x1i = a[j0 - 1] - a[j2 - 1];
    x2r = a[j1 - 2] + a[j3 - 2];
    x2i = a[j1 - 1] + a[j3 - 1];
    x3r = a[j1 - 2] - a[j3 - 2];
    x3i = a[j1 - 1] - a[j3 - 1];
    a[j0 - 2] = x0r + x2r;
    a[j0 - 1] = x0i + x2i;
    a[j1 - 2] = x0r - x2r;
    a[j1 - 1] = x0i - x2i;
    x0r = x1r - x3i;
    x0i = x1i + x3r;
    a[j2 - 2] = wk1r * x0r - wk1i * x0i;
    a[j2 - 1] = wk1r * x0i + wk1i * x0r;
    x0r = x1r + x3i;
    x0i = x1i - x3r;
    a[j3 - 2] = wk3r * x0r + wk3i * x0i;
    a[j3 - 1] = wk3r * x0i - wk3i * x0r;
    x0r = a[j0] + a[j2];
    x0i = a[j0 + 1] + a[j2 + 1];
    x1r = a[j0] - a[j2];
    x1i = a[j0 + 1] - a[j2 + 1];
    x2r = a[j1] + a[j3];
    x2i = a[j1 + 1] + a[j3 + 1];
    x3r = a[j1] - a[j3];
    x3i = a[j1 + 1] - a[j3 + 1];
    a[j0] = x0r + x2r;
    a[j0 + 1] = x0i + x2i;
    a[j1] = x0r - x2r;
    a[j1 + 1] = x0i - x2i;
    x0r = x1r - x3i;
    x0i = x1i + x3r;
    a[j2] = wn4r * (x0r - x0i);
    a[j2 + 1] = wn4r * (x0i + x0r);
    x0r = x1r + x3i;
    x0i = x1i - x3r;
    a[j3] = -wn4r * (x0r + x0i);
    a[j3 + 1] = -wn4r * (x0i - x0r);
    x0r = a[j0 + 2] + a[j2 + 2];
    x0i = a[j0 + 3] + a[j2 + 3];
    x1r = a[j0 + 2] - a[j2 + 2];
    x1i = a[j0 + 3] - a[j2 + 3];
    x2r = a[j1 + 2] + a[j3 + 2];
    x2i = a[j1 + 3] + a[j3 + 3];
    x3r = a[j1 + 2] - a[j3 + 2];
    x3i = a[j1 + 3] - a[j3 + 3];
    a[j0 + 2] = x0r + x2r;
    a[j0 + 3] = x0i + x2i;
    a[j1 + 2] = x0r - x2r;
    a[j1 + 3] = x0i - x2i;
    x0r = x1r - x3i;
    x0i = x1i + x3r;
    a[j2 + 2] = wk1i * x0r - wk1r * x0i;
    a[j2 + 3] = wk1i * x0i + wk1r * x0r;
    x0r = x1r + x3i;
    x0i = x1i - x3r;
    a[j3 + 2] = wk3i * x0r + wk3r * x0i;
    a[j3 + 3] = wk3i * x0i - wk3r * x0r;
}

static void cftb1st(s32 n, f32 PTR4* a, f32 PTR4* w)
{
    int j, j0, j1, j2, j3, k, m, mh;
    f32 wn4r, csc1, csc3, wk1r, wk1i, wk3r, wk3i,
           wd1r, wd1i, wd3r, wd3i;
    f32 x0r, x0i, x1r, x1i, x2r, x2i, x3r, x3i,
           y0r, y0i, y1r, y1i, y2r, y2i, y3r, y3i;

    mh = FFT_EIGHTH_SIZE(n);
    m = 2 * mh;
    j1 = m;
    j2 = j1 + m;
    j3 = j2 + m;
    x0r = a[0] + a[j2];
    x0i = -a[1] - a[j2 + 1];
    x1r = a[0] - a[j2];
    x1i = -a[1] + a[j2 + 1];
    x2r = a[j1] + a[j3];
    x2i = a[j1 + 1] + a[j3 + 1];
    x3r = a[j1] - a[j3];
    x3i = a[j1 + 1] - a[j3 + 1];
    a[0] = x0r + x2r;
    a[1] = x0i - x2i;
    a[j1] = x0r - x2r;
    a[j1 + 1] = x0i + x2i;
    a[j2] = x1r + x3i;
    a[j2 + 1] = x1i + x3r;
    a[j3] = x1r - x3i;
    a[j3 + 1] = x1i - x3r;
    wn4r = w[1];
    csc1 = w[2];
    csc3 = w[3];
    wd1r = CFT_INV_ROT_ONE;
    wd1i = CFT_INV_ROT_ZERO;
    wd3r = CFT_INV_ROT_ONE;
    wd3i = CFT_INV_ROT_ZERO;
    k = 0;
    for (j = 2; j < mh - 2; j += 4)
    {
        k += 4;
        wk1r = csc1 * (wd1r + w[k]);
        wk1i = csc1 * (wd1i + w[k + 1]);
        wk3r = csc3 * (wd3r + w[k + 2]);
        wk3i = csc3 * (wd3i - w[k + 3]);
        wd1r = w[k];
        wd1i = w[k + 1];
        wd3r = w[k + 2];
        wd3i = -w[k + 3];
        j1 = j + m;
        j2 = j1 + m;
        j3 = j2 + m;
        x0r = a[j] + a[j2];
        x0i = -a[j + 1] - a[j2 + 1];
        x1r = a[j] - a[j2];
        x1i = -a[j + 1] + a[j2 + 1];
        y0r = a[j + 2] + a[j2 + 2];
        y0i = -a[j + 3] - a[j2 + 3];
        y1r = a[j + 2] - a[j2 + 2];
        y1i = -a[j + 3] + a[j2 + 3];
        x2r = a[j1] + a[j3];
        x2i = a[j1 + 1] + a[j3 + 1];
        x3r = a[j1] - a[j3];
        x3i = a[j1 + 1] - a[j3 + 1];
        y2r = a[j1 + 2] + a[j3 + 2];
        y2i = a[j1 + 3] + a[j3 + 3];
        y3r = a[j1 + 2] - a[j3 + 2];
        y3i = a[j1 + 3] - a[j3 + 3];
        a[j] = x0r + x2r;
        a[j + 1] = x0i - x2i;
        a[j + 2] = y0r + y2r;
        a[j + 3] = y0i - y2i;
        a[j1] = x0r - x2r;
        a[j1 + 1] = x0i + x2i;
        a[j1 + 2] = y0r - y2r;
        a[j1 + 3] = y0i + y2i;
        x0r = x1r + x3i;
        x0i = x1i + x3r;
        a[j2] = wk1r * x0r - wk1i * x0i;
        a[j2 + 1] = wk1r * x0i + wk1i * x0r;
        x0r = y1r + y3i;
        x0i = y1i + y3r;
        a[j2 + 2] = wd1r * x0r - wd1i * x0i;
        a[j2 + 3] = wd1r * x0i + wd1i * x0r;
        x0r = x1r - x3i;
        x0i = x1i - x3r;
        a[j3] = wk3r * x0r + wk3i * x0i;
        a[j3 + 1] = wk3r * x0i - wk3i * x0r;
        x0r = y1r - y3i;
        x0i = y1i - y3r;
        a[j3 + 2] = wd3r * x0r + wd3i * x0i;
        a[j3 + 3] = wd3r * x0i - wd3i * x0r;
        j0 = m - j;
        j1 = j0 + m;
        j2 = j1 + m;
        j3 = j2 + m;
        x0r = a[j0] + a[j2];
        x0i = -a[j0 + 1] - a[j2 + 1];
        x1r = a[j0] - a[j2];
        x1i = -a[j0 + 1] + a[j2 + 1];
        y0r = a[j0 - 2] + a[j2 - 2];
        y0i = -a[j0 - 1] - a[j2 - 1];
        y1r = a[j0 - 2] - a[j2 - 2];
        y1i = -a[j0 - 1] + a[j2 - 1];
        x2r = a[j1] + a[j3];
        x2i = a[j1 + 1] + a[j3 + 1];
        x3r = a[j1] - a[j3];
        x3i = a[j1 + 1] - a[j3 + 1];
        y2r = a[j1 - 2] + a[j3 - 2];
        y2i = a[j1 - 1] + a[j3 - 1];
        y3r = a[j1 - 2] - a[j3 - 2];
        y3i = a[j1 - 1] - a[j3 - 1];
        a[j0] = x0r + x2r;
        a[j0 + 1] = x0i - x2i;
        a[j0 - 2] = y0r + y2r;
        a[j0 - 1] = y0i - y2i;
        a[j1] = x0r - x2r;
        a[j1 + 1] = x0i + x2i;
        a[j1 - 2] = y0r - y2r;
        a[j1 - 1] = y0i + y2i;
        x0r = x1r + x3i;
        x0i = x1i + x3r;
        a[j2] = wk1i * x0r - wk1r * x0i;
        a[j2 + 1] = wk1i * x0i + wk1r * x0r;
        x0r = y1r + y3i;
        x0i = y1i + y3r;
        a[j2 - 2] = wd1i * x0r - wd1r * x0i;
        a[j2 - 1] = wd1i * x0i + wd1r * x0r;
        x0r = x1r - x3i;
        x0i = x1i - x3r;
        a[j3] = wk3i * x0r + wk3r * x0i;
        a[j3 + 1] = wk3i * x0i - wk3r * x0r;
        x0r = y1r - y3i;
        x0i = y1i - y3r;
        a[j3 - 2] = wd3i * x0r + wd3r * x0i;
        a[j3 - 1] = wd3i * x0i - wd3r * x0r;
    }
    wk1r = csc1 * (wd1r + wn4r);
    wk1i = csc1 * (wd1i + wn4r);
    wk3r = csc3 * (wd3r - wn4r);
    wk3i = csc3 * (wd3i - wn4r);
    j0 = mh;
    j1 = j0 + m;
    j2 = j1 + m;
    j3 = j2 + m;
    x0r = a[j0 - 2] + a[j2 - 2];
    x0i = -a[j0 - 1] - a[j2 - 1];
    x1r = a[j0 - 2] - a[j2 - 2];
    x1i = -a[j0 - 1] + a[j2 - 1];
    x2r = a[j1 - 2] + a[j3 - 2];
    x2i = a[j1 - 1] + a[j3 - 1];
    x3r = a[j1 - 2] - a[j3 - 2];
    x3i = a[j1 - 1] - a[j3 - 1];
    a[j0 - 2] = x0r + x2r;
    a[j0 - 1] = x0i - x2i;
    a[j1 - 2] = x0r - x2r;
    a[j1 - 1] = x0i + x2i;
    x0r = x1r + x3i;
    x0i = x1i + x3r;
    a[j2 - 2] = wk1r * x0r - wk1i * x0i;
    a[j2 - 1] = wk1r * x0i + wk1i * x0r;
    x0r = x1r - x3i;
    x0i = x1i - x3r;
    a[j3 - 2] = wk3r * x0r + wk3i * x0i;
    a[j3 - 1] = wk3r * x0i - wk3i * x0r;
    x0r = a[j0] + a[j2];
    x0i = -a[j0 + 1] - a[j2 + 1];
    x1r = a[j0] - a[j2];
    x1i = -a[j0 + 1] + a[j2 + 1];
    x2r = a[j1] + a[j3];
    x2i = a[j1 + 1] + a[j3 + 1];
    x3r = a[j1] - a[j3];
    x3i = a[j1 + 1] - a[j3 + 1];
    a[j0] = x0r + x2r;
    a[j0 + 1] = x0i - x2i;
    a[j1] = x0r - x2r;
    a[j1 + 1] = x0i + x2i;
    x0r = x1r + x3i;
    x0i = x1i + x3r;
    a[j2] = wn4r * (x0r - x0i);
    a[j2 + 1] = wn4r * (x0i + x0r);
    x0r = x1r - x3i;
    x0i = x1i - x3r;
    a[j3] = -wn4r * (x0r + x0i);
    a[j3 + 1] = -wn4r * (x0i - x0r);
    x0r = a[j0 + 2] + a[j2 + 2];
    x0i = -a[j0 + 3] - a[j2 + 3];
    x1r = a[j0 + 2] - a[j2 + 2];
    x1i = -a[j0 + 3] + a[j2 + 3];
    x2r = a[j1 + 2] + a[j3 + 2];
    x2i = a[j1 + 3] + a[j3 + 3];
    x3r = a[j1 + 2] - a[j3 + 2];
    x3i = a[j1 + 3] - a[j3 + 3];
    a[j0 + 2] = x0r + x2r;
    a[j0 + 3] = x0i - x2i;
    a[j1 + 2] = x0r - x2r;
    a[j1 + 3] = x0i + x2i;
    x0r = x1r + x3i;
    x0i = x1i + x3r;
    a[j2 + 2] = wk1i * x0r - wk1r * x0i;
    a[j2 + 3] = wk1i * x0i + wk1r * x0r;
    x0r = x1r - x3i;
    x0i = x1i - x3r;
    a[j3 + 2] = wk3i * x0r + wk3r * x0i;
    a[j3 + 3] = wk3i * x0i - wk3r * x0r;
}

void cftrec1(s32 n, f32 PTR4* a, s32 nw, f32 PTR4* w)
{
    int quarter;

    quarter = n >> 2;
    cftmdl1(n, a, &w[nw - (quarter + quarter)]);
    if (n > FFT_CFT_RECURSION_LIMIT) {
        cftrec1(quarter, a, nw, w);
        cftrec2(quarter, a + quarter, nw, w);
        cftrec1(quarter, a + quarter * 2, nw, w);
        cftrec1(quarter, a + quarter * 3, nw, w);
    } else {
        cftexp1(n, a, nw, w);
    }
}

void cftrec2(s32 n, f32 PTR4* a, s32 nw, f32 PTR4* w)
{
    int quarter;

    quarter = n >> 2;
    cftmdl2(n, a, &w[nw - n]);
    if (n > FFT_CFT_RECURSION_LIMIT) {
        cftrec1(quarter, a, nw, w);
        cftrec2(quarter, a + quarter, nw, w);
        cftrec1(quarter, a + quarter * 2, nw, w);
        cftrec2(quarter, a + quarter * 3, nw, w);
    } else {
        cftexp2(n, a, nw, w);
    }
}
static void cftexp1(s32 n, f32 PTR4* a, s32 nw, f32 PTR4* w)
{
    s32 j;
    s32 k;
    s32 m;
    s32 mh;

    m = n >> 2;
    while (m > 128) {
        k = m;
        mh = m >> 1;
        if (k < n) {
            do {
                for (j = k - m; j < n; j += k << 2) {
                    cftmdl1(m, &a[j], &w[nw - mh]);
                    cftmdl2(m, &a[j + k], &w[nw - m]);
                    cftmdl1(m, &a[j + 2 * k], &w[nw - mh]);
                }
                k <<= 2;
            } while (k < n);
        }
        cftmdl1(m, &a[n - m], &w[nw - mh]);
        m >>= 2;
    }

    k = m;
    mh = m >> 1;
    if (k < n) {
        do {
            for (j = k - m; j < n; j += k << 2) {
                cftmdl1(m, &a[j], &w[nw - mh]);
                cftfx41(m, &a[j], nw, w);
                cftmdl2(m, &a[j + k], &w[nw - m]);
                cftfx42(m, &a[j + k], nw, w);
                cftmdl1(m, &a[j + 2 * k], &w[nw - mh]);
                cftfx41(m, &a[j + 2 * k], nw, w);
            }
            k <<= 2;
        } while (k < n);
    }
    cftmdl1(m, &a[n - m], &w[nw - mh]);
    cftfx41(m, &a[n - m], nw, w);
}

static void cftexp2(s32 n, f32 PTR4* a, s32 nw, f32 PTR4* w)
{
    s32 j;
    s32 k;
    s32 m;
    s32 mh;
    s32 h;
    s32 next;

    h = n >> 1;
    m = n >> 2;
    while (m > 128) {
        k = m;
        next = m >> 2;
        if (k < h) {
            mh = k >> 1;
            do {
                for (j = k - m; j < h; j += k << 1) {
                    cftmdl1(m, &a[j], &w[nw - mh]);
                    cftmdl1(m, &a[j + h], &w[nw - mh]);
                }
                for (j = k * 2 - m; j < h; j += k << 2) {
                    cftmdl2(m, &a[j], &w[nw - m]);
                    cftmdl2(m, &a[j + h], &w[nw - m]);
                }
                k <<= 2;
            } while (k < h);
        }
        m = next;
    }

    k = m;
    if (k < h) {
        mh = k >> 1;
        do {
            for (j = k - m; j < h; j += k << 1) {
                cftmdl1(m, &a[j], &w[nw - mh]);
                cftfx41(m, &a[j], nw, w);
                cftmdl1(m, &a[j + h], &w[nw - mh]);
                cftfx41(m, &a[j + h], nw, w);
            }
            for (j = k * 2 - m; j < h; j += k << 2) {
                cftmdl2(m, &a[j], &w[nw - m]);
                cftfx42(m, &a[j], nw, w);
                cftmdl2(m, &a[j + h], &w[nw - m]);
                cftfx42(m, &a[j + h], nw, w);
            }
            k <<= 2;
        } while (k < h);
    }
}
static void cftmdl1(s32 n, f32 PTR4* a, f32 PTR4* w)
{
    int j;
    int j0;
    int j1;
    int j2;
    int j3;
    int k;
    int m;
    int mh;
    f32 wn4r;
    f32 wk1r;
    f32 wk1i;
    f32 wk3r;
    f32 wk3i;
    f32 x0r;
    f32 x0i;
    f32 x1r;
    f32 x1i;
    f32 x2r;
    f32 x2i;
    f32 x3r;
    f32 x3i;

    mh = FFT_EIGHTH_SIZE(n);
    m = 2 * mh;
    j1 = m;
    j2 = j1 + m;
    j3 = j2 + m;
    x0r = a[0] + a[j2];
    x0i = a[1] + a[j2 + 1];
    x1r = a[0] - a[j2];
    x1i = a[1] - a[j2 + 1];
    x2r = a[j1] + a[j3];
    x2i = a[j1 + 1] + a[j3 + 1];
    x3r = a[j1] - a[j3];
    x3i = a[j1 + 1] - a[j3 + 1];
    a[0] = x0r + x2r;
    a[1] = x0i + x2i;
    a[j1] = x0r - x2r;
    a[j1 + 1] = x0i - x2i;
    a[j2] = x1r - x3i;
    a[j2 + 1] = x1i + x3r;
    a[j3] = x1r + x3i;
    a[j3 + 1] = x1i - x3r;
    wn4r = w[1];
    k = 0;
    for (j = 2; j < mh; j += 2) {
        k += 4;
        wk1r = w[k];
        wk1i = w[k + 1];
        wk3r = w[k + 2];
        wk3i = -w[k + 3];
        j1 = j + m;
        j2 = j1 + m;
        j3 = j2 + m;
        x0r = a[j] + a[j2];
        x0i = a[j + 1] + a[j2 + 1];
        x1r = a[j] - a[j2];
        x1i = a[j + 1] - a[j2 + 1];
        x2r = a[j1] + a[j3];
        x2i = a[j1 + 1] + a[j3 + 1];
        x3r = a[j1] - a[j3];
        x3i = a[j1 + 1] - a[j3 + 1];
        a[j] = x0r + x2r;
        a[j + 1] = x0i + x2i;
        a[j1] = x0r - x2r;
        a[j1 + 1] = x0i - x2i;
        x0r = x1r - x3i;
        x0i = x1i + x3r;
        a[j2] = wk1r * x0r - wk1i * x0i;
        a[j2 + 1] = wk1r * x0i + wk1i * x0r;
        x0r = x1r + x3i;
        x0i = x1i - x3r;
        a[j3] = wk3r * x0r + wk3i * x0i;
        a[j3 + 1] = wk3r * x0i - wk3i * x0r;
        j0 = m - j;
        j1 = j0 + m;
        j2 = j1 + m;
        j3 = j2 + m;
        x0r = a[j0] + a[j2];
        x0i = a[j0 + 1] + a[j2 + 1];
        x1r = a[j0] - a[j2];
        x1i = a[j0 + 1] - a[j2 + 1];
        x2r = a[j1] + a[j3];
        x2i = a[j1 + 1] + a[j3 + 1];
        x3r = a[j1] - a[j3];
        x3i = a[j1 + 1] - a[j3 + 1];
        a[j0] = x0r + x2r;
        a[j0 + 1] = x0i + x2i;
        a[j1] = x0r - x2r;
        a[j1 + 1] = x0i - x2i;
        x0r = x1r - x3i;
        x0i = x1i + x3r;
        a[j2] = wk1i * x0r - wk1r * x0i;
        a[j2 + 1] = wk1i * x0i + wk1r * x0r;
        x0r = x1r + x3i;
        x0i = x1i - x3r;
        a[j3] = wk3i * x0r + wk3r * x0i;
        a[j3 + 1] = wk3i * x0i - wk3r * x0r;
    }
    j0 = mh;
    j1 = j0 + m;
    j2 = j1 + m;
    j3 = j2 + m;
    x0r = a[j0] + a[j2];
    x0i = a[j0 + 1] + a[j2 + 1];
    x1r = a[j0] - a[j2];
    x1i = a[j0 + 1] - a[j2 + 1];
    x2r = a[j1] + a[j3];
    x2i = a[j1 + 1] + a[j3 + 1];
    x3r = a[j1] - a[j3];
    x3i = a[j1 + 1] - a[j3 + 1];
    a[j0] = x0r + x2r;
    a[j0 + 1] = x0i + x2i;
    a[j1] = x0r - x2r;
    a[j1 + 1] = x0i - x2i;
    x0r = x1r - x3i;
    x0i = x1i + x3r;
    a[j2] = wn4r * (x0r - x0i);
    a[j2 + 1] = wn4r * (x0i + x0r);
    x0r = x1r + x3i;
    x0i = x1i - x3r;
    a[j3] = -wn4r * (x0r + x0i);
    a[j3 + 1] = -wn4r * (x0i - x0r);
}
static void cftmdl2(s32 n, f32 PTR4* a, f32 PTR4* w)
{
    int j;
    int j0;
    int j1;
    int j2;
    int j3;
    int k;
    int kr;
    int m;
    int mh;
    f32 wn4r;
    f32 wk1r;
    f32 wk1i;
    f32 wk3r;
    f32 wk3i;
    f32 wd1r;
    f32 wd1i;
    f32 wd3r;
    f32 wd3i;
    f32 x0r;
    f32 x0i;
    f32 x1r;
    f32 x1i;
    f32 x2r;
    f32 x2i;
    f32 x3r;
    f32 x3i;
    f32 y0r;
    f32 y0i;
    f32 y2r;
    f32 y2i;

    mh = FFT_EIGHTH_SIZE(n);
    m = 2 * mh;
    wn4r = w[1];
    j1 = m;
    j2 = j1 + m;
    j3 = j2 + m;
    x0r = a[0] - a[j2 + 1];
    x0i = a[1] + a[j2];
    x1r = a[0] + a[j2 + 1];
    x1i = a[1] - a[j2];
    x2r = a[j1] - a[j3 + 1];
    x2i = a[j1 + 1] + a[j3];
    x3r = a[j1] + a[j3 + 1];
    x3i = a[j1 + 1] - a[j3];
    y0r = wn4r * (x2r - x2i);
    y0i = wn4r * (x2i + x2r);
    a[0] = x0r + y0r;
    a[1] = x0i + y0i;
    a[j1] = x0r - y0r;
    a[j1 + 1] = x0i - y0i;
    y0r = wn4r * (x3r - x3i);
    y0i = wn4r * (x3i + x3r);
    a[j2] = x1r - y0i;
    a[j2 + 1] = x1i + y0r;
    a[j3] = x1r + y0i;
    a[j3 + 1] = x1i - y0r;
    k = 0;
    kr = 2 * m;
    for (j = 2; j < mh; j += 2) {
        k += 4;
        wk1r = w[k];
        wk1i = w[k + 1];
        wk3r = w[k + 2];
        wk3i = -w[k + 3];
        kr -= 4;
        wd1i = w[kr];
        wd1r = w[kr + 1];
        wd3i = w[kr + 2];
        wd3r = -w[kr + 3];
        j1 = j + m;
        j2 = j1 + m;
        j3 = j2 + m;
        x0r = a[j] - a[j2 + 1];
        x0i = a[j + 1] + a[j2];
        x1r = a[j] + a[j2 + 1];
        x1i = a[j + 1] - a[j2];
        x2r = a[j1] - a[j3 + 1];
        x2i = a[j1 + 1] + a[j3];
        x3r = a[j1] + a[j3 + 1];
        x3i = a[j1 + 1] - a[j3];
        y0r = wk1r * x0r - wk1i * x0i;
        y0i = wk1r * x0i + wk1i * x0r;
        y2r = wd1r * x2r - wd1i * x2i;
        y2i = wd1r * x2i + wd1i * x2r;
        a[j] = y0r + y2r;
        a[j + 1] = y0i + y2i;
        a[j1] = y0r - y2r;
        a[j1 + 1] = y0i - y2i;
        y0r = wk3r * x1r + wk3i * x1i;
        y0i = wk3r * x1i - wk3i * x1r;
        y2r = wd3r * x3r + wd3i * x3i;
        y2i = wd3r * x3i - wd3i * x3r;
        a[j2] = y0r + y2r;
        a[j2 + 1] = y0i + y2i;
        a[j3] = y0r - y2r;
        a[j3 + 1] = y0i - y2i;
        j0 = m - j;
        j1 = j0 + m;
        j2 = j1 + m;
        j3 = j2 + m;
        x0r = a[j0] - a[j2 + 1];
        x0i = a[j0 + 1] + a[j2];
        x1r = a[j0] + a[j2 + 1];
        x1i = a[j0 + 1] - a[j2];
        x2r = a[j1] - a[j3 + 1];
        x2i = a[j1 + 1] + a[j3];
        x3r = a[j1] + a[j3 + 1];
        x3i = a[j1 + 1] - a[j3];
        y0r = wd1i * x0r - wd1r * x0i;
        y0i = wd1i * x0i + wd1r * x0r;
        y2r = wk1i * x2r - wk1r * x2i;
        y2i = wk1i * x2i + wk1r * x2r;
        a[j0] = y0r + y2r;
        a[j0 + 1] = y0i + y2i;
        a[j1] = y0r - y2r;
        a[j1 + 1] = y0i - y2i;
        y0r = wd3i * x1r + wd3r * x1i;
        y0i = wd3i * x1i - wd3r * x1r;
        y2r = wk3i * x3r + wk3r * x3i;
        y2i = wk3i * x3i - wk3r * x3r;
        a[j2] = y0r + y2r;
        a[j2 + 1] = y0i + y2i;
        a[j3] = y0r - y2r;
        a[j3 + 1] = y0i - y2i;
    }
    wk1r = w[m];
    wk1i = w[m + 1];
    j0 = mh;
    j1 = j0 + m;
    j2 = j1 + m;
    j3 = j2 + m;
    x0r = a[j0] - a[j2 + 1];
    x0i = a[j0 + 1] + a[j2];
    x1r = a[j0] + a[j2 + 1];
    x1i = a[j0 + 1] - a[j2];
    x2r = a[j1] - a[j3 + 1];
    x2i = a[j1 + 1] + a[j3];
    x3r = a[j1] + a[j3 + 1];
    x3i = a[j1 + 1] - a[j3];
    y0r = wk1r * x0r - wk1i * x0i;
    y0i = wk1r * x0i + wk1i * x0r;
    y2r = wk1i * x2r - wk1r * x2i;
    y2i = wk1i * x2i + wk1r * x2r;
    a[j0] = y0r + y2r;
    a[j0 + 1] = y0i + y2i;
    a[j1] = y0r - y2r;
    a[j1 + 1] = y0i - y2i;
    y0r = wk1i * x1r - wk1r * x1i;
    y0i = wk1i * x1i + wk1r * x1r;
    y2r = wk1r * x3r - wk1i * x3i;
    y2i = wk1r * x3i + wk1i * x3r;
    a[j2] = y0r - y2r;
    a[j2 + 1] = y0i - y2i;
    a[j3] = y0r + y2r;
    a[j3 + 1] = y0i + y2i;
}
static void cftfx41(s32 n, f32 PTR4* a, s32 nw, f32 PTR4* w)
{
    if (n == 0x80) {
        cftf161(a, &w[nw - 8]);
        cftf162(a + 0x20, &w[nw - 32]);
        cftf161(a + 0x40, &w[nw - 8]);
        cftf161(a + 0x60, &w[nw - 8]);
    } else {
        cftf081(a, &w[nw - 16]);
        cftf082(a + 0x10, &w[nw - 16]);
        cftf081(a + 0x20, &w[nw - 16]);
        cftf081(a + 0x30, &w[nw - 16]);
    }
}

static void cftfx42(s32 n, f32 PTR4* a, s32 nw, f32 PTR4* w)
{
    if (n == 0x80) {
        cftf161(a, &w[nw - 8]);
        cftf162(a + 0x20, &w[nw - 32]);
        cftf161(a + 0x40, &w[nw - 8]);
        cftf162(a + 0x60, &w[nw - 32]);
    } else {
        cftf081(a, &w[nw - 16]);
        cftf082(a + 0x10, &w[nw - 16]);
        cftf081(a + 0x20, &w[nw - 16]);
        cftf082(a + 0x30, &w[nw - 16]);
    }
}
static void cftf161(f32 PTR4* a, f32 PTR4* w)
{
    f32 wn4r, wk1r, wk1i;
    f32 x0r, x0i, x1r, x1i, x2r, x2i, x3r, x3i;
    f32 y0r, y0i, y1r, y1i, y2r, y2i, y3r, y3i;
    f32 y4r, y4i, y5r, y5i, y6r, y6i, y7r, y7i;
    f32 y8r, y8i, y9r, y9i, y10r, y10i, y11r, y11i;
    f32 y12r, y12i, y13r, y13i, y14r, y14i, y15r, y15i;

    wn4r = w[1];
    wk1r = w[2];
    wk1i = w[3];
    x0r = a[0] + a[16];
    x0i = a[1] + a[17];
    x1r = a[0] - a[16];
    x1i = a[1] - a[17];
    x2r = a[8] + a[24];
    x2i = a[9] + a[25];
    x3r = a[8] - a[24];
    x3i = a[9] - a[25];
    y0r = x0r + x2r;
    y0i = x0i + x2i;
    y4r = x0r - x2r;
    y4i = x0i - x2i;
    y8r = x1r - x3i;
    y8i = x1i + x3r;
    y12r = x1r + x3i;
    y12i = x1i - x3r;
    x0r = a[2] + a[18];
    x0i = a[3] + a[19];
    x1r = a[2] - a[18];
    x1i = a[3] - a[19];
    x2r = a[10] + a[26];
    x2i = a[11] + a[27];
    x3r = a[10] - a[26];
    x3i = a[11] - a[27];
    y1r = x0r + x2r;
    y1i = x0i + x2i;
    y5r = x0r - x2r;
    y5i = x0i - x2i;
    x0r = x1r - x3i;
    x0i = x1i + x3r;
    y9r = wk1r * x0r - wk1i * x0i;
    y9i = wk1r * x0i + wk1i * x0r;
    x0r = x1r + x3i;
    x0i = x1i - x3r;
    y13r = wk1i * x0r - wk1r * x0i;
    y13i = wk1i * x0i + wk1r * x0r;
    x0r = a[4] + a[20];
    x0i = a[5] + a[21];
    x1r = a[4] - a[20];
    x1i = a[5] - a[21];
    x2r = a[12] + a[28];
    x2i = a[13] + a[29];
    x3r = a[12] - a[28];
    x3i = a[13] - a[29];
    y2r = x0r + x2r;
    y2i = x0i + x2i;
    y6r = x0r - x2r;
    y6i = x0i - x2i;
    x0r = x1r - x3i;
    x0i = x1i + x3r;
    y10r = wn4r * (x0r - x0i);
    y10i = wn4r * (x0i + x0r);
    x0r = x1r + x3i;
    x0i = x1i - x3r;
    y14r = wn4r * (x0r + x0i);
    y14i = wn4r * (x0i - x0r);
    x0r = a[6] + a[22];
    x0i = a[7] + a[23];
    x1r = a[6] - a[22];
    x1i = a[7] - a[23];
    x2r = a[14] + a[30];
    x2i = a[15] + a[31];
    x3r = a[14] - a[30];
    x3i = a[15] - a[31];
    y3r = x0r + x2r;
    y3i = x0i + x2i;
    y7r = x0r - x2r;
    y7i = x0i - x2i;
    x0r = x1r - x3i;
    x0i = x1i + x3r;
    y11r = wk1i * x0r - wk1r * x0i;
    y11i = wk1i * x0i + wk1r * x0r;
    x0r = x1r + x3i;
    x0i = x1i - x3r;
    y15r = wk1r * x0r - wk1i * x0i;
    y15i = wk1r * x0i + wk1i * x0r;
    x0r = y12r - y14r;
    x0i = y12i - y14i;
    x1r = y12r + y14r;
    x1i = y12i + y14i;
    x2r = y13r - y15r;
    x2i = y13i - y15i;
    x3r = y13r + y15r;
    x3i = y13i + y15i;
    a[24] = x0r + x2r;
    a[25] = x0i + x2i;
    a[26] = x0r - x2r;
    a[27] = x0i - x2i;
    a[28] = x1r - x3i;
    a[29] = x1i + x3r;
    a[30] = x1r + x3i;
    a[31] = x1i - x3r;
    x0r = y8r + y10r;
    x0i = y8i + y10i;
    x1r = y8r - y10r;
    x1i = y8i - y10i;
    x2r = y9r + y11r;
    x2i = y9i + y11i;
    x3r = y9r - y11r;
    x3i = y9i - y11i;
    a[16] = x0r + x2r;
    a[17] = x0i + x2i;
    a[18] = x0r - x2r;
    a[19] = x0i - x2i;
    a[20] = x1r - x3i;
    a[21] = x1i + x3r;
    a[22] = x1r + x3i;
    a[23] = x1i - x3r;
    x0r = y5r - y7i;
    x0i = y5i + y7r;
    x2r = wn4r * (x0r - x0i);
    x2i = wn4r * (x0i + x0r);
    x0r = y5r + y7i;
    x0i = y5i - y7r;
    x3r = wn4r * (x0r - x0i);
    x3i = wn4r * (x0i + x0r);
    x0r = y4r - y6i;
    x0i = y4i + y6r;
    x1r = y4r + y6i;
    x1i = y4i - y6r;
    a[8] = x0r + x2r;
    a[9] = x0i + x2i;
    a[10] = x0r - x2r;
    a[11] = x0i - x2i;
    a[12] = x1r - x3i;
    a[13] = x1i + x3r;
    a[14] = x1r + x3i;
    a[15] = x1i - x3r;
    x0r = y0r + y2r;
    x0i = y0i + y2i;
    x1r = y0r - y2r;
    x1i = y0i - y2i;
    x2r = y1r + y3r;
    x2i = y1i + y3i;
    x3r = y1r - y3r;
    x3i = y1i - y3i;
    a[0] = x0r + x2r;
    a[1] = x0i + x2i;
    a[2] = x0r - x2r;
    a[3] = x0i - x2i;
    a[4] = x1r - x3i;
    a[5] = x1i + x3r;
    a[6] = x1r + x3i;
    a[7] = x1i - x3r;
}
static void cftf162(f32 PTR4* a, f32 PTR4* w)
{
    f32 wn4r, wk1r, wk1i, wk2r, wk2i, wk3r, wk3i,
           x0r, x0i, x1r, x1i, x2r, x2i,
           y0r, y0i, y1r, y1i, y2r, y2i, y3r, y3i,
           y4r, y4i, y5r, y5i, y6r, y6i, y7r, y7i,
           y8r, y8i, y9r, y9i, y10r, y10i, y11r, y11i,
           y12r, y12i, y13r, y13i, y14r, y14i, y15r, y15i;

    wn4r = w[1];
    wk1r = w[4];
    wk1i = w[5];
    wk3r = w[6];
    wk3i = -w[7];
    wk2r = w[8];
    wk2i = w[9];
    x1r = a[0] - a[17];
    x1i = a[1] + a[16];
    x0r = a[8] - a[25];
    x0i = a[9] + a[24];
    x2r = wn4r * (x0r - x0i);
    x2i = wn4r * (x0i + x0r);
    y0r = x1r + x2r;
    y0i = x1i + x2i;
    y4r = x1r - x2r;
    y4i = x1i - x2i;
    x1r = a[0] + a[17];
    x1i = a[1] - a[16];
    x0r = a[8] + a[25];
    x0i = a[9] - a[24];
    x2r = wn4r * (x0r - x0i);
    x2i = wn4r * (x0i + x0r);
    y8r = x1r - x2i;
    y8i = x1i + x2r;
    y12r = x1r + x2i;
    y12i = x1i - x2r;
    x0r = a[2] - a[19];
    x0i = a[3] + a[18];
    x1r = wk1r * x0r - wk1i * x0i;
    x1i = wk1r * x0i + wk1i * x0r;
    x0r = a[10] - a[27];
    x0i = a[11] + a[26];
    x2r = wk3i * x0r - wk3r * x0i;
    x2i = wk3i * x0i + wk3r * x0r;
    y1r = x1r + x2r;
    y1i = x1i + x2i;
    y5r = x1r - x2r;
    y5i = x1i - x2i;
    x0r = a[2] + a[19];
    x0i = a[3] - a[18];
    x1r = wk3r * x0r - wk3i * x0i;
    x1i = wk3r * x0i + wk3i * x0r;
    x0r = a[10] + a[27];
    x0i = a[11] - a[26];
    x2r = wk1r * x0r + wk1i * x0i;
    x2i = wk1r * x0i - wk1i * x0r;
    y9r = x1r - x2r;
    y9i = x1i - x2i;
    y13r = x1r + x2r;
    y13i = x1i + x2i;
    x0r = a[4] - a[21];
    x0i = a[5] + a[20];
    x1r = wk2r * x0r - wk2i * x0i;
    x1i = wk2r * x0i + wk2i * x0r;
    x0r = a[12] - a[29];
    x0i = a[13] + a[28];
    x2r = wk2i * x0r - wk2r * x0i;
    x2i = wk2i * x0i + wk2r * x0r;
    y2r = x1r + x2r;
    y2i = x1i + x2i;
    y6r = x1r - x2r;
    y6i = x1i - x2i;
    x0r = a[4] + a[21];
    x0i = a[5] - a[20];
    x1r = wk2i * x0r - wk2r * x0i;
    x1i = wk2i * x0i + wk2r * x0r;
    x0r = a[12] + a[29];
    x0i = a[13] - a[28];
    x2r = wk2r * x0r - wk2i * x0i;
    x2i = wk2r * x0i + wk2i * x0r;
    y10r = x1r - x2r;
    y10i = x1i - x2i;
    y14r = x1r + x2r;
    y14i = x1i + x2i;
    x0r = a[6] - a[23];
    x0i = a[7] + a[22];
    x1r = wk3r * x0r - wk3i * x0i;
    x1i = wk3r * x0i + wk3i * x0r;
    x0r = a[14] - a[31];
    x0i = a[15] + a[30];
    x2r = wk1i * x0r - wk1r * x0i;
    x2i = wk1i * x0i + wk1r * x0r;
    y3r = x1r + x2r;
    y3i = x1i + x2i;
    y7r = x1r - x2r;
    y7i = x1i - x2i;
    x0r = a[6] + a[23];
    x0i = a[7] - a[22];
    x1r = wk1i * x0r + wk1r * x0i;
    x1i = wk1i * x0i - wk1r * x0r;
    x0r = a[14] + a[31];
    x0i = a[15] - a[30];
    x2r = wk3i * x0r - wk3r * x0i;
    x2i = wk3i * x0i + wk3r * x0r;
    y11r = x1r + x2r;
    y11i = x1i + x2i;
    y15r = x1r - x2r;
    y15i = x1i - x2i;
    x1r = y0r + y2r;
    x1i = y0i + y2i;
    x2r = y1r + y3r;
    x2i = y1i + y3i;
    a[0] = x1r + x2r;
    a[1] = x1i + x2i;
    a[2] = x1r - x2r;
    a[3] = x1i - x2i;
    x1r = y0r - y2r;
    x1i = y0i - y2i;
    x2r = y1r - y3r;
    x2i = y1i - y3i;
    a[4] = x1r - x2i;
    a[5] = x1i + x2r;
    a[6] = x1r + x2i;
    a[7] = x1i - x2r;
    x1r = y4r - y6i;
    x1i = y4i + y6r;
    x0r = y5r - y7i;
    x0i = y5i + y7r;
    x2r = wn4r * (x0r - x0i);
    x2i = wn4r * (x0i + x0r);
    a[8] = x1r + x2r;
    a[9] = x1i + x2i;
    a[10] = x1r - x2r;
    a[11] = x1i - x2i;
    x1r = y4r + y6i;
    x1i = y4i - y6r;
    x0r = y5r + y7i;
    x0i = y5i - y7r;
    x2r = wn4r * (x0r - x0i);
    x2i = wn4r * (x0i + x0r);
    a[12] = x1r - x2i;
    a[13] = x1i + x2r;
    a[14] = x1r + x2i;
    a[15] = x1i - x2r;
    x1r = y8r + y10r;
    x1i = y8i + y10i;
    x2r = y9r - y11r;
    x2i = y9i - y11i;
    a[16] = x1r + x2r;
    a[17] = x1i + x2i;
    a[18] = x1r - x2r;
    a[19] = x1i - x2i;
    x1r = y8r - y10r;
    x1i = y8i - y10i;
    x2r = y9r + y11r;
    x2i = y9i + y11i;
    a[20] = x1r - x2i;
    a[21] = x1i + x2r;
    a[22] = x1r + x2i;
    a[23] = x1i - x2r;
    x1r = y12r - y14i;
    x1i = y12i + y14r;
    x0r = y13r + y15i;
    x0i = y13i - y15r;
    x2r = wn4r * (x0r - x0i);
    x2i = wn4r * (x0i + x0r);
    a[24] = x1r + x2r;
    a[25] = x1i + x2i;
    a[26] = x1r - x2r;
    a[27] = x1i - x2i;
    x1r = y12r + y14i;
    x1i = y12i - y14r;
    x0r = y13r - y15i;
    x0i = y13i + y15r;
    x2r = wn4r * (x0r - x0i);
    x2i = wn4r * (x0i + x0r);
    a[28] = x1r - x2i;
    a[29] = x1i + x2r;
    a[30] = x1r + x2i;
    a[31] = x1i - x2r;
}

static void cftf081(f32 PTR4* a, f32 PTR4* w)
{
    f32 wn4r, x0r, x0i, x1r, x1i, x2r, x2i, x3r, x3i;
    f32 y0r, y0i, y1r, y1i, y2r, y2i, y3r, y3i;
    f32 y4r, y4i, y5r, y5i, y6r, y6i, y7r, y7i;

    wn4r = w[1];
    x0r = a[0] + a[8];
    x0i = a[1] + a[9];
    x1r = a[0] - a[8];
    x1i = a[1] - a[9];
    x2r = a[4] + a[12];
    x2i = a[5] + a[13];
    x3r = a[4] - a[12];
    x3i = a[5] - a[13];
    y0r = x0r + x2r;
    y0i = x0i + x2i;
    y2r = x0r - x2r;
    y2i = x0i - x2i;
    y1r = x1r - x3i;
    y1i = x1i + x3r;
    y3r = x1r + x3i;
    y3i = x1i - x3r;
    x0r = a[2] + a[10];
    x0i = a[3] + a[11];
    x1r = a[2] - a[10];
    x1i = a[3] - a[11];
    x2r = a[6] + a[14];
    x2i = a[7] + a[15];
    x3r = a[6] - a[14];
    x3i = a[7] - a[15];
    y4r = x0r + x2r;
    y4i = x0i + x2i;
    y6r = x0r - x2r;
    y6i = x0i - x2i;
    x0r = x1r - x3i;
    x0i = x1i + x3r;
    x2r = x1r + x3i;
    x2i = x1i - x3r;
    y5r = wn4r * (x0r - x0i);
    y5i = wn4r * (x0r + x0i);
    y7r = wn4r * (x2r - x2i);
    y7i = wn4r * (x2r + x2i);
    a[8] = y1r + y5r;
    a[9] = y1i + y5i;
    a[10] = y1r - y5r;
    a[11] = y1i - y5i;
    a[12] = y3r - y7i;
    a[13] = y3i + y7r;
    a[14] = y3r + y7i;
    a[15] = y3i - y7r;
    a[0] = y0r + y4r;
    a[1] = y0i + y4i;
    a[2] = y0r - y4r;
    a[3] = y0i - y4i;
    a[4] = y2r - y6i;
    a[5] = y2i + y6r;
    a[6] = y2r + y6i;
    a[7] = y2i - y6r;
}

static void cftf082(f32 PTR4* a, f32 PTR4* w)
{
    f32 wn4r, wk1r, wk1i, x0r, x0i, x1r, x1i;
    f32 y0r, y0i, y1r, y1i, y2r, y2i, y3r, y3i;
    f32 y4r, y4i, y5r, y5i, y6r, y6i, y7r, y7i;

    wn4r = w[1];
    wk1r = w[4];
    wk1i = w[5];
    y0r = a[0] - a[9];
    y0i = a[1] + a[8];
    y1r = a[0] + a[9];
    y1i = a[1] - a[8];
    x0r = a[4] - a[13];
    x0i = a[5] + a[12];
    y2r = wn4r * (x0r - x0i);
    y2i = wn4r * (x0i + x0r);
    x0r = a[4] + a[13];
    x0i = a[5] - a[12];
    y3r = wn4r * (x0r - x0i);
    y3i = wn4r * (x0i + x0r);
    x0r = a[2] - a[11];
    x0i = a[3] + a[10];
    y4r = wk1r * x0r - wk1i * x0i;
    y4i = wk1r * x0i + wk1i * x0r;
    x0r = a[2] + a[11];
    x0i = a[3] - a[10];
    y5r = wk1i * x0r - wk1r * x0i;
    y5i = wk1i * x0i + wk1r * x0r;
    x0r = a[6] - a[15];
    x0i = a[7] + a[14];
    y6r = wk1i * x0r - wk1r * x0i;
    y6i = wk1i * x0i + wk1r * x0r;
    x0r = a[6] + a[15];
    x0i = a[7] - a[14];
    y7r = wk1r * x0r - wk1i * x0i;
    y7i = wk1r * x0i + wk1i * x0r;
    x0r = y0r + y2r;
    x0i = y0i + y2i;
    x1r = y4r + y6r;
    x1i = y4i + y6i;
    a[0] = x0r + x1r;
    a[1] = x0i + x1i;
    a[2] = x0r - x1r;
    a[3] = x0i - x1i;
    x0r = y0r - y2r;
    x0i = y0i - y2i;
    x1r = y4r - y6r;
    x1i = y4i - y6i;
    a[4] = x0r - x1i;
    a[5] = x0i + x1r;
    a[6] = x0r + x1i;
    a[7] = x0i - x1r;
    x0r = y1r - y3i;
    x0i = y1i + y3r;
    x1r = y5r - y7r;
    x1i = y5i - y7i;
    a[8] = x0r + x1r;
    a[9] = x0i + x1i;
    a[10] = x0r - x1r;
    a[11] = x0i - x1i;
    x0r = y1r + y3i;
    x0i = y1i - y3r;
    x1r = y5r + y7r;
    x1i = y5i + y7i;
    a[12] = x0r - x1i;
    a[13] = x0i + x1r;
    a[14] = x0r + x1i;
    a[15] = x0i - x1r;
}
static void cftf040(f32 PTR4* a)
{
    f32 x0r;
    f32 x0i;
    f32 x1r;
    f32 x1i;
    f32 x2r;
    f32 x2i;
    f32 x3r;
    f32 x3i;

    x0r = a[0] + a[4];
    x0i = a[1] + a[5];
    x1r = a[0] - a[4];
    x1i = a[1] - a[5];
    x2r = a[2] + a[6];
    x2i = a[3] + a[7];
    x3r = a[2] - a[6];
    x3i = a[3] - a[7];
    a[0] = x0r + x2r;
    a[1] = x0i + x2i;
    a[2] = x1r - x3i;
    a[3] = x1i + x3r;
    a[4] = x0r - x2r;
    a[5] = x0i - x2i;
    a[6] = x1r + x3i;
    a[7] = x1i - x3r;
}

static void cftb040(f32 PTR4* a)
{
    f32 x0r;
    f32 x0i;
    f32 x1r;
    f32 x1i;
    f32 x2r;
    f32 x2i;
    f32 x3r;
    f32 x3i;

    x0r = a[0] + a[4];
    x0i = a[1] + a[5];
    x1r = a[0] - a[4];
    x1i = a[1] - a[5];
    x2r = a[2] + a[6];
    x2i = a[3] + a[7];
    x3r = a[2] - a[6];
    x3i = a[3] - a[7];
    a[0] = x0r + x2r;
    a[1] = x0i + x2i;
    a[2] = x1r + x3i;
    a[3] = x1i - x3r;
    a[4] = x0r - x2r;
    a[5] = x0i - x2i;
    a[6] = x1r - x3i;
    a[7] = x1i + x3r;
}

static void cftx020(f32 PTR4* a)
{
    f32 x0r;
    f32 x0i;

    x0r = a[0] - a[2];
    x0i = a[1] - a[3];
    a[0] += a[2];
    a[1] += a[3];
    a[2] = x0r;
    a[3] = x0i;
}
static void rftfsub(s32 n, f32 PTR4* a, s32 nc, f32 PTR4* c)
{
    f32 xr;
    f32 xi;
    f32 yr;
    f32 yi;
    f32 wkr;
    f32 wki;
    f32 half = RFT_HALF_SCALE;
    s32 m;
    s32 ks;
    s32 kk;
    s32 j;
    s32 k;

    m = n >> 1;
    ks = (nc + nc) / m;
    kk = 0;
    for (j = 2; j < m; j += 2) {
        k = n - j;
        kk += ks;
        wkr = half - c[nc - kk];
        wki = c[kk];
        xr = a[j] - a[k];
        xi = a[j + 1] + a[k + 1];
        yr = wkr * xr - wki * xi;
        yi = wkr * xi + wki * xr;
        a[j] -= yr;
        a[j + 1] -= yi;
        a[k] += yr;
        a[k + 1] -= yi;
    }
}

static void rftbsub(s32 n, f32 PTR4* a, s32 nc, f32 PTR4* c)
{
    f32 xr;
    f32 xi;
    f32 yr;
    f32 yi;
    f32 wkr;
    f32 wki;
    f32 half = RFT_INV_HALF_SCALE;
    s32 m;
    s32 ks;
    s32 kk;
    s32 j;
    s32 k;

    m = n >> 1;
    ks = (nc + nc) / m;
    kk = 0;
    for (j = 2; j < m; j += 2) {
        k = n - j;
        kk += ks;
        wkr = half - c[nc - kk];
        wki = c[kk];
        xr = a[j] - a[k];
        xi = a[j + 1] + a[k + 1];
        yr = wkr * xr + wki * xi;
        yi = wkr * xi - wki * xr;
        a[j] -= yr;
        a[j + 1] -= yi;
        a[k] += yr;
        a[k + 1] -= yi;
    }
}

static void dctsub(s32 n, f32 PTR4* a, s32 nc, f32 PTR4* c)
{
    f32 xr;
    f32 yr;
    f32 wkr;
    f32 wki;
    s32 j;
    s32 k;
    s32 kk;
    s32 m;
    s32 ks;

    m = n >> 1;
    ks = nc / n;
    kk = 0;
    for (j = 1; j < m; ++j) {
        k = n - j;
        kk += ks;
        xr = a[k];
        yr = a[j];
        wkr = c[kk] + c[nc - kk];
        wki = c[kk] - c[nc - kk];
        a[j] = wki * yr + wkr * xr;
        a[k] = wkr * yr - wki * xr;
    }
    a[m] *= c[0];
}

const u32 BINK_RDFT_INVERSE_SCALE_BITS[] = {
    0x3f000000,
};
const u32 BINK_FFT_TRIG_ONE_BITS[] = {
    0x3f800000,
};
const u32 BINK_FFT_INT_TO_FLOAT_BIAS[] = {
    0x43300000, 0x80000000,
};
const u32 BINK_FFT_HALF_SECANT_SCALE_BITS[] = {
    0x3fe00000, 0x00000000,
};
const u32 BINK_FFT_SIX_BITS[] = {
    0x40c00000,
};
const u32 BINK_FFT_THREE_BITS[] = {
    0x40400000,
};
const u32 BINK_FFT_HALF_RECIP_SCALE_BITS[] = {
    0x3f000000,
};
const u32 BINK_DCT_TRIG_ONE_BITS[] = {
    0x3f800000,
};
const u32 BINK_DCT_INT_TO_FLOAT_BIAS[] = {
    0x43300000, 0x80000000,
};
const u32 BINK_DCT_CENTER_SCALE_BITS[] = {
    0x3f000000, 0x00000000,
};
const u32 BINK_DCT_HALF_SCALE_BITS[] = {
    0x3fe00000, 0x00000000,
};
const u32 BINK_CFT_ROT_ONE_BITS[] = {
    0x3f800000,
};
const u32 BINK_CFT_ROT_ZERO_BITS[] = {
    0x00000000,
};
const u32 BINK_CFT_INV_ROT_ONE_BITS[] = {
    0x3f800000,
};
const u32 BINK_CFT_INV_ROT_ZERO_BITS[] = {
    0x00000000,
};
const u32 BINK_RFT_HALF_SCALE_BITS[] = {
    0x3f000000,
};
const u32 BINK_RFT_INV_HALF_SCALE_BITS[] = {
    0x3f000000, 0x00000000, 0x00000000,
};
#pragma dont_inline reset
