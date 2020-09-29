#ifndef ZSCENE_H
#define ZSCENE_H

#include "../Core/x/xScene.h"

#include "zPortal.h"
#include "zEnv.h"

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
	unsigned int baseCount[72];
	xBase* baseList[72];
	_zEnv* zen;
};

#endif