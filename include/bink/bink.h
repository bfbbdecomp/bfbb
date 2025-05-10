#ifndef __BINK_H__
#define __BINK_H__

#include <size_t.h>

#define BINKSURFACE8P 0
#define BINKSURFACE24 1
#define BINKSURFACE24R 2
#define BINKSURFACE32 3
#define BINKSURFACE32R 4
#define BINKSURFACE32A 5
#define BINKSURFACE32RA 6
#define BINKSURFACE4444 7
#define BINKSURFACE5551 8
#define BINKSURFACE555 9
#define BINKSURFACE565 10
#define BINKSURFACE655 11
#define BINKSURFACE664 12
#define BINKSURFACEYUY2 13
#define BINKSURFACEUYVY 14
#define BINKSURFACEYV12 15
#define BINKSURFACEMASK 15

struct BINK
{
    // Do the members really need to be defined?
    U32 unk_0;
    U32 unk_4;
    U32 unk_8;
    U32 unk_c;
    U32 unk_10;
    U32 unk_14;
    U32 unk_18;
    U32 unk_1c;
    U8 unk_20[0xd0];
    S32 unk_f0;
};

typedef struct BINK* HBINK;

struct RAD3DIMAGE
{
    int a;
    int b;
    unsigned int c;
    int d;
    int e;
    void* f;
    int g;
    int h;
};

typedef struct RAD3DIMAGE* HRAD3DIMAGE;

#ifdef __cplusplus
extern "C" {
#endif

extern int BinkDoFrame(HBINK bnk);
extern int BinkCopyToBuffer(HBINK bnk, void* dest, int destpitch, unsigned int destheight,
                            unsigned int destx, unsigned int desty, unsigned int flags);
extern int Lock_RAD_3D_image(HRAD3DIMAGE rad_image, void* out_pixel_buffer,
                             unsigned int* out_buffer_pitch, unsigned int* arg3);
extern void Unlock_RAD_3D_image(HRAD3DIMAGE rad_image);
extern void Blit_RAD_3D_image(HRAD3DIMAGE Image, float, float, float, float, float);
extern void RADSetAudioMemory(void* (*malloc)(size_t), void (*free)(void*));
extern void RADSetMemory(void* (*malloc)(size_t), void (*free)(void*));
extern HBINK BinkOpen(const char* fname, void*);
extern void BinkGetError();
extern void BinkSetVolume(HBINK bink, unsigned int, int volume);
extern HRAD3DIMAGE Open_RAD_3D_image(HBINK bink, unsigned int, unsigned int, unsigned int);
extern void Close_RAD_3D_image(HRAD3DIMAGE rad_image);
extern void BinkGoto(HBINK bink, int frame, unsigned int);
extern int BinkWait(HBINK bink);
extern void BinkNextFrame(HBINK bink);
extern void BinkClose(HBINK bink);

#ifdef __cplusplus
}
#endif

#endif

