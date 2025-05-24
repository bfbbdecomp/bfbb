#include "ngcrad3d.h"

#include <dolphin/gx.h>
#include "iFMV.h"

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

// HRAD3DIMAGE Open_RAD_3D_image(HBINK param_1, unsigned int param_2, unsigned int param_3,
//                               unsigned int param_4)
// {
//     HRAD3DIMAGE imgDat;
//     int pi_p4;

//     Setup_surface_array();

//     pi_p4 = Pixel_info[param_4] & 0xff;
//     imgDat = (HRAD3DIMAGE)iFMVmalloc(0x3c);

//     if (imgDat == 0)
//     {
//         return 0;
//     }

//     imgDat->a = param_2;
//     imgDat->b = param_3;
//     imgDat->c = Pixel_info[param_4] >> 31;
//     imgDat->d = pi_p4;
//     imgDat->e = param_4;

//     imgDat->g = GXGetTexBufferSize((unsigned short)param_2, (unsigned short)param_3,
//                                    D3D_surface_type[param_4], 0, 0);
//     imgDat->f = (void*)iFMVmalloc(imgDat->g);

//     GXInitTexObj((volatile int)imgDat + 0x1c, imgDat->f, param_2 & 0xffff, param_3 & 0xffff,
//                  D3D_surface_type[param_4], 0, 0, 0);

//     GXInitTexObjLOD(imgDat, 0.0f, 0.0f, (volatile int)imgDat + 0x1c, 1, 0, 0, 0, 0);

//     return imgDat;
// }

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

int Lock_RAD_3D_image(HRAD3DIMAGE rad_image, void* out_pixel_buffer, unsigned int* out_buffer_pitch,
                      unsigned int* arg3)
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

// void Unlock_RAD_3D_image(struct RAD3DIMAGE* image)
// {
//     if (image)
//     {
//         DCStoreRange(image->f, image->g);
//     }
// }

// static void GXTexCoord2f32(float f1, float f2)
// {
//     int ptr = 0xcc010000;
//     *(float*)((char*)(ptr)-0x8000) = f1;
//     *(float*)((char*)(ptr)-0x8000) = f2;
// }

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

// static void GXSetTextCoordGen(int a, int b, int c, int d)
// {
//     GXSetTexCoordGen2(a, b, c, d, 0, 0x7d);
// }

// static void Submit_vertices(float param_1, float param_2, float param_3, float param_4,
//                             long param_5, long param_6, float param_7)
// {
//     short uVar1 = (short)(param_7 * 255.0f) & 0xff;
//     short iVar3;
//     short iVar2;
//     short blah = (unsigned short)param_2;

//     GXSetCullMode(0);
//     GXSetZMode(1, 7, 1);
//     GXSetColorUpdate(1);
//     GXBegin(0x80, 0, 4);
//     iVar3 = param_1;
//     iVar2 = param_6 * param_4 + param_2;

//     GXPosition3s16(iVar3, iVar2, 0);
//     GXColor4u8(0xff, 0xff, 0xff, uVar1);
//     GXTexCoord2f32(0, 1.0f);

//     GXPosition3s16(iVar3, blah, 0);
//     GXColor4u8(0xff, 0xff, 0xff, uVar1);
//     GXTexCoord2f32(0, 0);
//     iVar3 = param_5 * param_3 + param_1;

//     GXPosition3s16(iVar3, blah, 0);
//     GXColor4u8(0xff, 0xff, 0xff, uVar1);
//     GXTexCoord2f32(4503601774854144.0, 0);

//     GXPosition3s16(iVar3, iVar2, 0);
//     GXColor4u8(0xff, 0xff, 0xff, uVar1);
//     GXTexCoord2f32(1.0f, 1.0f);

//     GXEnd();
// }