#include "rwcore.h"
#include "rtanim.h"
#include "rtquat.h"

RwInt32 _rpPTankAtomicDataOffset = 0; /* Offset in RpAtomic */
RwInt32 _rpPTankGlobalsOffset = 0; /* Offset in Rwengine */

typedef struct RwTexCoords RxTexCoords;

const RwInt32 datasize[] = {
    sizeof(RwV3d), /*rpPTANKDFLAGPOSITION*/
    sizeof(RwMatrix), /*rpPTANKDFLAGMATRIX*/
    sizeof(RwV3d), /*rpPTANKDFLAGNORMAL*/
    sizeof(RwV2d), /*rpPTANKDFLAGSIZE*/
    sizeof(RwRGBA), /*rpPTANKDFLAGCOLOR*/
    4 * sizeof(RwRGBA), /*rpPTANKDFLAGVTXCOLOR*/
    sizeof(RwReal), /*rpPTANKDFLAG2DROTATE*/
    2 * sizeof(RwTexCoords), /*rpPTANKDFLAGVTX2TEXCOORDS*/
    4 * sizeof(RwTexCoords) /*rpPTANKDFLAGVTX4TEXCOORDS*/
};

#if (defined(GCN_DRVMODEL_H))

#define FAVORITEORGANISATIONMODE (rpPTANKDFLAGSTRUCTURE)

#elif (defined(D3D8_DRVMODEL_H) || defined(D3D9_DRVMODEL_H) || defined(XBOX_DRVMODEL_H) ||         \
       defined(NULL_DRVMODEL_H) || defined(NULLGCN_DRVMODEL_H) || defined(NULLSKY_DRVMODEL_H) ||   \
       defined(SKY2_DRVMODEL_H) || defined(OPENGL_DRVMODEL_H) || defined(SOFTRAS_DRVMODEL_H) ||    \
       defined(NULLXBOX_DRVMODEL_H))

#define FAVORITEORGANISATIONMODE (rpPTANKDFLAGARRAY)

#endif

static void* PTankAtomicInit(void* object, RwInt32 offset, RwInt32 size)
{
}
