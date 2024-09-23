#ifndef IFMV_H
#define IFMV_H

#include <types.h>
#include <rwcore.h>
#include <bink.h>

struct iFMV
{
    void InitVI();
    void Suspend();
    void Resume();
};

void* iFMVmalloc(size_t size);
void iFMVfree(void* mem);
U32 iFMVPlay(char* filename, U32 buttons, F32 time, bool skippable, bool lockController);
static void Setup_surface_array();
void Decompress_frame(HBINK bnk, HRAD3DIMAGE rad_image, S64 flags);

void arammalloc(size_t size);
static void aramfree(void* mem);
void PlayFMV(char* filename, size_t buttons, F32 time);

#endif
