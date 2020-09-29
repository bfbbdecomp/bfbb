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
	unsigned char rate_mode;
	float rate;
	float rate_time;
	float rate_fraction;
	float rate_fraction_cull;
	unsigned char emit_flags;
	unsigned char emit_pad[3];
	unsigned char rot[3];
	xModelTag tag;
	float oocull_distance_sqr;
	float distance_to_cull_sqr;
	void* attachTo;
	xParSys* parSys;
	void* emit_volume;
	xVec3 last_attach_loc;
};

#endif