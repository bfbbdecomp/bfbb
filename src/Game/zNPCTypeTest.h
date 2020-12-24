#ifndef ZNPCTYPETEST_H
#define ZNPCTYPETEST_H

#include <zNPCTypeCommon.h>

typedef struct zNPCTest;

struct zNPCTest : zNPCCommon
{
	int32 numAnimations;
	int32 currentState;
	float32 transitionTimer;

	uint32 AnimPick();
	void SelfSetup();
	void Process(xScene* xscn, float32 dt);
	void Reset();
};

void ZNPC_Test_Startup();
void ZNPC_Test_Shutdown();

#endif