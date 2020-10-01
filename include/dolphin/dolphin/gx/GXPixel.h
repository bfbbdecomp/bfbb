#ifndef __GXPIXEL_H__
#define __GXPIXEL_H__

#ifdef __cplusplus
extern "C" {
#endif

#include "../types.h"
#include "GXEnum.h"

void GXSetColorUpdate(GXBool update_enable);
void GXSetAlphaUpdate(GXBool update_enable);

#ifdef __cplusplus
}
#endif

#endif