#ifndef XPAREMITTER_H
#define XPAREMITTER_H

#include "xBase.h"
#include "xModel.h"

typedef struct xParGroup;
typedef struct xParEmitterPropsAsset;
typedef struct xParSys;

typedef unsigned char type_81[3];
typedef unsigned char type_83[3];

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
	type_81 emit_pad;
	type_83 rot;
	xModelTag tag;
	float oocull_distance_sqr;
	float distance_to_cull_sqr;
	void* attachTo;
	xParSys* parSys;
	void* emit_volume;
	xVec3 last_attach_loc;
};

#endif