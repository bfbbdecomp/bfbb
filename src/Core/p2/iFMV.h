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
uint32 iFMVPlay(char* filename, uint32 buttons, float32 time, bool skippable, bool lockController);
static void Setup_surface_array();
void Decompress_frame(HBINK bnk, HRAD3DIMAGE rad_image, int64 flags);

void arammalloc(size_t size);
void aramfree(void* mem);
void PlayFMV(char* filename, size_t buttons, float32 time);

#endif