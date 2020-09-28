#ifndef ZSCENE_H
#define ZSCENE_H

#include "../Core/x/xScene.h"

#include "zPortal.h"
#include "zEnv.h"

typedef unsigned int type_45[72];
typedef xBase* type_49[72];

struct zScene : xScene
{
	_zPortal* pendingPortal;
	union
	{
		unsigned int num_ents;
		unsigned int num_base;
	};
	union
	{
		xBase** base;
		zEnt** ents;
	};
	unsigned int num_update_base;
	xBase** update_base;
	type_45 baseCount;
	type_49 baseList;
	_zEnv* zen;
};

#endif