#ifndef BINK_SDK_DECODE_BINKACD_H
#define BINK_SDK_DECODE_BINKACD_H

#include "bink.h"

#define BINKACNEWFORMAT 1 // use the newer DCT transform path instead of the legacy RDFT path
#define BINKACNODEINTERLACE 2 // keep stereo channels as separate output planes
#define BINKAC20 4 // newer coefficient packet coding

// extra padding after inpend, that, given random data, Bink might read past (very unlikely, but possible)
#define BINKACD_EXTRA_INPUT_SPACE 72

typedef struct BINKAUDIODECOMP BINKAUDIODECOMP;
typedef BINKAUDIODECOMP PTR4* HBINKAUDIODECOMP;

struct BINKAUDIODECOMP
{
    u32 transform_size;
    f32 transform_size_root; // output scale applied after the inverse transform
    u32 buffer_size;
    u32 window_size_in_bytes; // overlap/crossfade tail length in bytes
    u32 chans;
    s16 PTR4* samples; // decoded PCM frame plus overlap tail
    s32 start_frame; // suppress overlap blending for the first decoded frame
    u32 num_bands; // number of critical bands below Nyquist
    u32 PTR4* bands; // critical band sample ranges
    s32 PTR4* fft_work; // FFT/DCT work area
    f32 PTR4* fft_coeffs; // transform coefficient table/work buffer
    s16 PTR4* overlap; // previous frame tail for the startup crossfade
    u32 flags; // BINKACNEWFORMAT/BINKACNODEINTERLACE/BINKAC20
};

HBINKAUDIODECOMP BinkAudioDecompressOpen(u32 rate, u32 chans, u32 flags);
void BinkAudioDecompress(HBINKAUDIODECOMP handle, void PTR4* PTR4* outptr, u32 PTR4* outbytes,
                         void PTR4* inptr, void PTR4* PTR4* inoutptr);
void BinkAudioDecompressClose(HBINKAUDIODECOMP handle);

#endif
