#ifndef DLRENDST_H
#define DLRENDST_H

#include "rwsdk/rwcore.h"


#ifdef __cplusplus
extern "C" {
#endif

extern void _rwDlRenderStateSetZCompLoc(RwInt32 zBeforeTex);
extern void RwGameCubeSetAlphaCompare(RwInt32 comp0, RwUInt8 ref0, RwInt32 op, RwInt32 comp1, RwUInt8 ref1);


#ifdef __cplusplus
}
#endif

#endif
