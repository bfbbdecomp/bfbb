#include "ngcrad3d.h"

#include <dolphin/gx.h>
#include "iFMV.h"
#include <bink/include/rad3d.h>

static int D3D_surface_type[5];
static unsigned int Pixel_info[5];

static int Built_tables;

static void Setup_surface_array()
{
    if (Built_tables)
    {
        return;
    }

    D3D_surface_type[0] = 6;
    D3D_surface_type[1] = 6;
    D3D_surface_type[2] = 4;
    D3D_surface_type[3] = 5;
    D3D_surface_type[4] = -1;

    Pixel_info[0] = 0x00000004;
    Pixel_info[1] = 0x80000004;
    Pixel_info[2] = 0x00000002;
    Pixel_info[3] = 0x80000002;
    Pixel_info[4] = 0x00000002;

    Built_tables = 1;
}

// TODO:
// Defining this struct locally because i believe this isnt 100% right. Or if it is right why isnt this in the bink.h or other headers?
// inestigate this

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

void Close_RAD_3D_image(struct RAD3DIMAGE* image)
{
    if (image != 0)
    {
        if (image->f != 0)
        {
            iFMVfree(image->f);
            image->f = 0;
        }
        iFMVfree(image);
    }
}

S32 Lock_RAD_3D_image(HRAD3DIMAGE rad_image, void* out_pixel_buffer, U32* out_buffer_pitch,
                      U32* arg3)
{
    if (rad_image == 0)
    {
        return 0;
    }

    if (out_pixel_buffer != 0)
    {
        *(void**)(out_pixel_buffer) = rad_image->f;
    }

    if (out_buffer_pitch != 0)
    {
        *out_buffer_pitch = rad_image->a * rad_image->d;
    }

    if (arg3 != 0)
    {
        *arg3 = rad_image->e;
    }

    return 1;
}

static void GXColor4u8(int r3, int r4, int r5, int r6)
{
    int ptr = 0xcc010000;
    *((char*)(ptr)-0x8000) = r3;
    *((char*)(ptr)-0x8000) = r4;
    *((char*)(ptr)-0x8000) = r5;
    *((char*)(ptr)-0x8000) = r6;
}

static void GXPosition3s16(int r3, int r4, int r5)
{
    int ptr = 0xcc010000;
    *(short*)((char*)(ptr)-0x8000) = r3;
    *(short*)((char*)(ptr)-0x8000) = r4;
    *(short*)((char*)(ptr)-0x8000) = r5;
}
