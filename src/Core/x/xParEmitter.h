#ifndef XPAREMITTER_H
#define XPAREMITTER_H

#include "xBase.h"
#include "xModel.h"

typedef struct xParGroup;
typedef struct xParEmitterPropsAsset;
typedef struct xParSys;

struct xParEmitterAsset : xBaseAsset
{
};

struct xParEmitter : xBase
{
	xParEmitterAsset* tasset;
	xParGroup* group;
	xParEmitterPropsAsset* prop;
	uint8 rate_mode;
	float32 rate;
	float32 rate_time;
	float32 rate_fraction;
	float32 rate_fraction_cull;
	uint8 emit_flags;
	uint8 emit_pad[3];
	uint8 rot[3];
	xModelTag tag;
	float32 oocull_distance_sqr;
	float32 distance_to_cull_sqr;
	void* attachTo;
	xParSys* parSys;
	void* emit_volume;
	xVec3 last_attach_loc;
};

#endif