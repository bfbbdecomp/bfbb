#ifndef RPSKIN_H
#define RPSKIN_H

#include "rwcore.h"
#include "rpworld.h"
#include "rphanim.h"

typedef struct RpSkin RpSkin;

struct RwMatrixWeights
{
    RwReal w0;
    RwReal w1;
    RwReal w2;
    RwReal w3;
};

enum RpSkinType
{
    rpNASKINTYPE = 0,
    rpSKINTYPEGENERIC = 1,
    rpSKINTYPEMATFX = 2,
    rpSKINTYPETOON = 3,
    rpSKINTYPEFORCEENUMSIZEINT = RWFORCEENUMSIZEINT
};

#ifdef __cplusplus
extern "C" {
#endif

extern RwBool RpSkinPluginAttach(void);
extern RpAtomic* RpSkinAtomicSetHAnimHierarchy(RpAtomic* atomic, RpHAnimHierarchy* hierarchy);
extern RpSkin* RpSkinGeometryGetSkin(RpGeometry* geometry);
extern RpGeometry* RpSkinGeometrySetSkin(RpGeometry* geometry, RpSkin* skin);
extern RpSkin* RpSkinDestroy(RpSkin* skin);
extern RwUInt32 RpSkinGetNumBones(RpSkin* skin);
typedef struct RwMatrixWeights RwMatrixWeights;

extern const RwMatrixWeights* RpSkinGetVertexBoneWeights(RpSkin* skin);
extern const RwUInt32* RpSkinGetVertexBoneIndices(RpSkin* skin);
extern const RwMatrix* RpSkinGetSkinToBoneMatrices(RpSkin* skin);
typedef struct RpAtomic RpAtomic;
typedef enum RpSkinType RpSkinType;

extern RpAtomic* RpSkinAtomicSetType(RpAtomic* atomic, RpSkinType type);

#ifdef __cplusplus
}
#endif

#endif
