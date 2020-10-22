#ifndef RPHANIM_H
#define RPHANIM_H

#include "rwcore.h"
#include "rtanim.h"

struct RpHAnimNodeInfo
{
    RwInt32 nodeID;
    RwInt32 nodeIndex;
    RwInt32 flags;
    RwFrame* pFrame;
};

struct RpHAnimHierarchy
{
    RwInt32 flags;
    RwInt32 numNodes;
    RwMatrix* pMatrixArray;
    void* pMatrixArrayUnaligned;
    RpHAnimNodeInfo* pNodeInfo;
    RwFrame* parentFrame;
    RpHAnimHierarchy* parentHierarchy;
    RwInt32 rootParentOffset;
    RtAnimInterpolator* currentAnim;
};

enum RpHAnimHierarchyFlag
{
    rpHANIMHIERARCHYSUBHIERARCHY = 0x01,
    rpHANIMHIERARCHYNOMATRICES = 0x02,
    rpHANIMHIERARCHYUPDATEMODELLINGMATRICES = 0x1000,
    rpHANIMHIERARCHYUPDATELTMS = 0x2000,
    rpHANIMHIERARCHYLOCALSPACEMATRICES = 0x4000,
    rpHANIMHIERARCHYFLAGFORCEENUMSIZEINT = RWFORCEENUMSIZEINT
};

#ifdef __cplusplus
extern "C" {
#endif

extern void RpHAnimKeyFrameApply(void* matrix, void* voidIFrame);
extern void RpHAnimKeyFrameInterpolate(void* voidOut, void* voidIn1, void* voidIn2, RwReal time,
                                       void* customData);
extern void RpHAnimKeyFrameBlend(void* voidOut, void* voidIn1, void* voidIn2, RwReal alpha);
extern RtAnimAnimation* RpHAnimKeyFrameStreamRead(RwStream* stream, RtAnimAnimation* animation);
extern RwBool RpHAnimKeyFrameStreamWrite(const RtAnimAnimation* animation, RwStream* stream);
extern RwInt32 RpHAnimKeyFrameStreamGetSize(const RtAnimAnimation* animation);
extern void RpHAnimKeyFrameMulRecip(void* voidFrame, void* voidStart);
extern void RpHAnimKeyFrameAdd(void* voidOut, void* voidIn1, void* voidIn2);
extern RwBool RpHAnimPluginAttach(void);
extern RpHAnimHierarchy* RpHAnimHierarchyCreate(RwInt32 numNodes, RwUInt32* nodeFlags,
                                                RwInt32* nodeIDs, RpHAnimHierarchyFlag flags,
                                                RwInt32 maxInterpKeyFrameSize);
extern RpHAnimHierarchy* RpHAnimHierarchyDestroy(RpHAnimHierarchy* hierarchy);
extern RwBool RpHAnimFrameSetHierarchy(RwFrame* frame, RpHAnimHierarchy* hierarchy);
extern RpHAnimHierarchy* RpHAnimFrameGetHierarchy(RwFrame* frame);

#ifdef __cplusplus
}
#endif

#endif