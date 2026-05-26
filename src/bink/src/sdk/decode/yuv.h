#ifndef BINK_DECODE_YUV_H
#define BINK_DECODE_YUV_H

#include "bink.h"

#ifdef __cplusplus
extern "C" {
#endif

void YUV_init(u32 flags);
void YUV_blit_32bpp(void PTR4* dest, u32 destx, u32 desty, u32 destpitch,
                    void PTR4* src, u32 srcx, u32 srcy, u32 srcw, u32 srch, u32 srcpitch,
                    u32 srcheight, u32 flags);
void YUV_blit_32abpp(void PTR4* dest, u32 destx, u32 desty, u32 destpitch,
                     void PTR4* src, u32 srcx, u32 srcy, u32 srcw, u32 srch, u32 srcpitch,
                     u32 srcheight, void PTR4* alpha, u32 flags);
void YUV_blit_16bpp(void PTR4* dest, u32 destx, u32 desty, u32 destpitch,
                    void PTR4* src, u32 srcx, u32 srcy, u32 srcw, u32 srch, u32 srcpitch,
                    u32 srcheight, u32 flags);
void YUV_blit_16a4bpp(void PTR4* dest, u32 destx, u32 desty, u32 destpitch,
                      void PTR4* src, u32 srcx, u32 srcy, u32 srcw, u32 srch, u32 srcpitch,
                      u32 srcheight, void PTR4* alpha, u32 flags);
void YUV_blit_YUY2(void PTR4* dest, u32 destx, u32 desty, u32 destpitch,
                   void PTR4* src, u32 srcx, u32 srcy, u32 srcw, u32 srch, u32 srcpitch,
                   u32 srcheight, u32 flags);
void YUV_blit_32bpp_mask(void PTR4* dest, u32 destx, u32 desty, u32 destpitch,
                         u8 PTR4* mask, u32 maskpitch, void PTR4* src, u32 srcx, u32 srcy,
                         u32 srcw, u32 srch, u32 srcpitch, u32 srcheight, u32 flags);
void YUV_blit_32abpp_mask(void PTR4* dest, u32 destx, u32 desty, u32 destpitch,
                          u8 PTR4* mask, u32 maskpitch, void PTR4* src, u32 srcx, u32 srcy,
                          u32 srcw, u32 srch, u32 srcpitch, u32 srcheight,
                          void PTR4* alpha, u32 flags);
void YUV_blit_16bpp_mask(void PTR4* dest, u32 destx, u32 desty, u32 destpitch,
                         u8 PTR4* mask, u32 maskpitch, void PTR4* src, u32 srcx, u32 srcy,
                         u32 srcw, u32 srch, u32 srcpitch, u32 srcheight, u32 flags);
void YUV_blit_16a4bpp_mask(void PTR4* dest, u32 destx, u32 desty, u32 destpitch,
                           u8 PTR4* mask, u32 maskpitch, void PTR4* src, u32 srcx, u32 srcy,
                           u32 srcw, u32 srch, u32 srcpitch, u32 srcheight,
                           void PTR4* alpha, u32 flags);
void YUV_blit_YUY2_mask(void PTR4* dest, u32 destx, u32 desty, u32 destpitch,
                        u8 PTR4* mask, u32 maskpitch, void PTR4* src, u32 srcx, u32 srcy,
                        u32 srcw, u32 srch, u32 srcpitch, u32 srcheight, u32 flags);

#ifdef __cplusplus
}
#endif

#endif
