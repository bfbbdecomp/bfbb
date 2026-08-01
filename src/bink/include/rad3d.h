#ifndef __RAD3DH__
#define __RAD3DH__

#ifndef __RADBASEH__
#include "radbase.h"
#endif

#define RAD3DSURFACE32 0
#define RAD3DSURFACE32A 1
#define RAD3DSURFACE565 2
#define RAD3DSURFACE4444 3 // actually RGB4A3
#define RAD3DSURFACEYUY2 4
#define RADSURFACEYUY2 RAD3DSURFACEYUY2
#define RAD3DSURFACECOUNT (RAD3DSURFACEYUY2 + 1)

#ifdef __cplusplus
#define RADCFUNC extern "C"
#else
#define RADCFUNC
#endif

#define HRAD3D int

RADCFUNC void Start_RAD_3D_frame(HRAD3D rad_3D);

RADCFUNC void End_RAD_3D_frame(HRAD3D rad_3D, s32 swap);

//
// Define the handle types.
//

struct RAD3DIMAGE;
typedef struct RAD3DIMAGE* HRAD3DIMAGE;

RADCFUNC HRAD3DIMAGE Open_RAD_3D_image(HRAD3D rad_3d, u32 width, u32 height,
                                       u32 rad3d_surface_format);

RADCFUNC void Close_RAD_3D_image(HRAD3DIMAGE rad_image);

RADCFUNC s32 Lock_RAD_3D_image(HRAD3DIMAGE rad_image, void* out_pixel_buffer,
                               u32* out_buffer_pitch, u32* out_surface_format);

RADCFUNC void Unlock_RAD_3D_image(HRAD3DIMAGE rad_image);

RADCFUNC void Blit_RAD_3D_image(HRAD3DIMAGE rad_image, f32 x_offset, f32 y_offset, f32 x_scale,
                                f32 y_scale, f32 alpha_level);

RADCFUNC void Draw_lines_RAD_3D_image(HRAD3DIMAGE rad_image, f32 x_offset, f32 y_offset,
                                      f32 x_scale, f32 y_scale);

#endif
