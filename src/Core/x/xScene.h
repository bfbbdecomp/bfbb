#ifndef XSCENE_H
#define XSCENE_H

#include "xBase.h"
#include "xEnt.h"
#include "xEnv.h"
#include "xMemMgr.h"

typedef char*(*xSceneBase2NameCallback)(xBase*);
typedef char*(*xSceneID2NameCallback)(unsigned int);
typedef xBase*(*xSceneResolvIDCallback)(unsigned int);

struct xScene
{
	unsigned int sceneID;
	unsigned short flags;
	unsigned short num_ents;
	unsigned short num_trigs;
	unsigned short num_stats;
	unsigned short num_dyns;
	unsigned short num_npcs;
	unsigned short num_act_ents;
	unsigned short num_nact_ents;
	float gravity;
	float drag;
	float friction;
	unsigned short num_ents_allocd;
	unsigned short num_trigs_allocd;
	unsigned short num_stats_allocd;
	unsigned short num_dyns_allocd;
	unsigned short num_npcs_allocd;
	xEnt** trigs;
	xEnt** stats;
	xEnt** dyns;
	xEnt** npcs;
	xEnt** act_ents;
	xEnt** nact_ents;
	xEnv* env;
	xMemPool mempool;
	xSceneResolvIDCallback resolvID;
	xSceneBase2NameCallback base2Name;
	xSceneID2NameCallback id2Name;
};

#endif