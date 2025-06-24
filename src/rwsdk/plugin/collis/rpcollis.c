#include "rwplcore.h"
#include "rwcore.h"

RwInt32 _rpCollisionNumInstances = 0;
RwInt32 _rpCollisionGlobalsOffset = 0;
RwInt32 _rpCollisionAtomicDataOffset = 0;
RwInt32 _rpCollisionGeometryDataOffset = 0;
RwInt32 _rpCollisionWorldSectorDataOffset = 0;

struct RpCollisionData
{
    struct RpCollTree* tree;
};

typedef struct RpCollisionData RpCollisionData;

// Not the correct params?
static void* CollisionOpen(void* instance, RwInt32 offset, RwInt32 size)
{
    _rpCollisionNumInstances++;
}

// Not the correct params?
static void* CollisionClose(void* instance, RwInt32 offset, RwInt32 size)
{
    _rpCollisionNumInstances--;
}

void* CollisionDataDestroy(void* object, s32 offset)
{
    RpCollisionData** extData;
}

// params unknown, probably offset and size tho
void CollisionDataCreate(RwInt32 offset, RwInt32 size)
{
    *(RwInt32*)(offset + size) = 0;
}

// param could be wrong
void CollisionAtomicInit(RwInt32 size)
{
    *(RwInt32*)(size + _rpCollisionAtomicDataOffset) = 0;
}

static RwStream* CollisionDataStreamWrite(RwStream* stream, const void* object, RwInt32 offset)
{
}

RwStream* CollisionDataStreamRead(RwStream* stream, s32 binaryLength, void* object, s32 offset)
{
}

s32 CollisionDataStreamGetSize(void* object, s32 offsetInObject)
{
}

RwBool RpCollisionPluginAttach()
{
}
