#include "ngcrad3d.h"

#include <dolphin/gx.h>
#include <dolphin/os.h>
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

struct RAD3DIMAGE
{
    U32 width;
    U32 height;
    U32 alpha_pixels;
    U32 pixel_size;
    U32 surface_type;
    void* texture_buffer;
    U32 texture_size;
    GXTexObj texture;
};

HRAD3DIMAGE Open_RAD_3D_image(HRAD3D, U32 width, U32 height, U32 rad3d_surface_format)
{
    RAD3DIMAGE* image;
    U32 pixel_info;

    Setup_surface_array();

    pixel_info = Pixel_info[rad3d_surface_format];
    image = (RAD3DIMAGE*)iFMVmalloc(sizeof(RAD3DIMAGE));
    if (image == NULL)
    {
        return NULL;
    }

    image->width = width;
    image->height = height;
    image->alpha_pixels = pixel_info >> 31;
    image->pixel_size = pixel_info & 0xff;
    image->surface_type = rad3d_surface_format;
    image->texture_size =
        GXGetTexBufferSize((u16)width, (u16)height, D3D_surface_type[rad3d_surface_format], 0, 0);
    image->texture_buffer = iFMVmalloc(image->texture_size);
    GXInitTexObj(&image->texture, image->texture_buffer, (u16)width, (u16)height,
                 (GXTexFmt)D3D_surface_type[rad3d_surface_format], (GXTexWrapMode)0,
                 (GXTexWrapMode)0, (GXBool)0);
    GXInitTexObjLOD(&image->texture, (GXTexFilter)1, (GXTexFilter)1, 1.0f, 0.0f, 0.0f,
                    (GXBool)0, (GXBool)0, (GXAnisotropy)0);

    return image;
}

void Close_RAD_3D_image(struct RAD3DIMAGE* image)
{
    if (image != 0)
    {
        if (image->texture_buffer != 0)
        {
            iFMVfree(image->texture_buffer);
            image->texture_buffer = 0;
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
        *(void**)(out_pixel_buffer) = rad_image->texture_buffer;
    }

    if (out_buffer_pitch != 0)
    {
        *out_buffer_pitch = rad_image->width * rad_image->pixel_size;
    }

    if (arg3 != 0)
    {
        *arg3 = rad_image->surface_type;
    }

    return 1;
}

void Unlock_RAD_3D_image(HRAD3DIMAGE rad_image)
{
    if (rad_image != NULL)
    {
        DCStoreRange(rad_image->texture_buffer, rad_image->texture_size);
    }
}
