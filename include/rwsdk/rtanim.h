#ifndef RTANIM_H
#define RTANIM_H

#include "rwcore.h"

typedef struct RtAnimAnimation;

typedef void (*RtAnimKeyFrameApplyCallBack)(void* result, void* voidIFrame);
typedef void (*RtAnimKeyFrameBlendCallBack)(void* voidOut, void* voidIn1, void* voidIn2,
                                            RwReal alpha);
typedef void (*RtAnimKeyFrameInterpolateCallBack)(void* voidOut, void* voidIn1, void* voidIn2,
                                                  RwReal time, void* customData);
typedef void (*RtAnimKeyFrameAddCallBack)(void* voidOut, void* voidIn1, void* voidIn2);
typedef void (*RtAnimKeyFrameMulRecipCallBack)(void* voidFrame, void* voidStart);
typedef RtAnimAnimation* (*RtAnimKeyFrameStreamReadCallBack)(RwStream* stream,
                                                             RtAnimAnimation* animation);
typedef RwBool (*RtAnimKeyFrameStreamWriteCallBack)(RtAnimAnimation* animation, RwStream* stream);
typedef RwInt32 (*RtAnimKeyFrameStreamGetSizeCallBack)(RtAnimAnimation* animation);

struct RtAnimInterpolatorInfo
{
    RwInt32 typeID;
    RwInt32 interpKeyFrameSize;
    RwInt32 animKeyFrameSize;
    RtAnimKeyFrameApplyCallBack keyFrameApplyCB;
    RtAnimKeyFrameBlendCallBack keyFrameBlendCB;
    RtAnimKeyFrameInterpolateCallBack keyFrameInterpolateCB;
    RtAnimKeyFrameAddCallBack keyFrameAddCB;
    RtAnimKeyFrameMulRecipCallBack keyFrameMulRecipCB;
    RtAnimKeyFrameStreamReadCallBack keyFrameStreamReadCB;
    RtAnimKeyFrameStreamWriteCallBack keyFrameStreamWriteCB;
    RtAnimKeyFrameStreamGetSizeCallBack keyFrameStreamGetSizeCB;
    RwInt32 customDataSize;
};

struct RtAnimAnimation
{
    RtAnimInterpolatorInfo* interpInfo;
    RwInt32 numFrames;
    RwInt32 flags;
    RwReal duration;
    void* pFrames;
    void* customData;
};

typedef struct RtAnimInterpolator;

typedef RtAnimInterpolator* (*RtAnimCallBack)(RtAnimInterpolator* animInstance, void* data);

struct RtAnimInterpolator
{
    RtAnimAnimation* pCurrentAnim;
    RwReal currentTime;
    void* pNextFrame;
    RtAnimCallBack pAnimCallBack;
    void* pAnimCallBackData;
    RwReal animCallBackTime;
    RtAnimCallBack pAnimLoopCallBack;
    void* pAnimLoopCallBackData;
    RwInt32 maxInterpKeyFrameSize;
    RwInt32 currentInterpKeyFrameSize;
    RwInt32 currentAnimKeyFrameSize;
    RwInt32 numNodes;
    RwBool isSubInterpolator;
    RwInt32 offsetInParent;
    RtAnimInterpolator* parentAnimation;
    RtAnimKeyFrameApplyCallBack keyFrameApplyCB;
    RtAnimKeyFrameBlendCallBack keyFrameBlendCB;
    RtAnimKeyFrameInterpolateCallBack keyFrameInterpolateCB;
    RtAnimKeyFrameAddCallBack keyFrameAddCB;
};

#ifdef __cplusplus
extern "C" {
#endif

extern RwBool RtAnimRegisterInterpolationScheme(RtAnimInterpolatorInfo* interpolatorInfo);
extern RtAnimInterpolator* RtAnimInterpolatorCreate(RwInt32 numNodes,
                                                    RwInt32 maxInterpKeyFrameSize);
extern void RtAnimInterpolatorDestroy(RtAnimInterpolator* anim);

#ifdef __cplusplus
}
#endif

#endif