#include "zNPCTypeTest.h"

#include "zNPCTypes.h"

#include "xString.h"
#include "xMath.h"

extern F32 _830_2;
extern F32 _831_2;
extern F32 _832_0;
extern F32 _866_5;
extern F32 _867_6;

#define ANIM_COUNT 11

U32 g_hash_testanim[ANIM_COUNT] = {};

// clang-format off
const char* g_strz_testanim[ANIM_COUNT] =
{
    "Unknown",
    "Test01",
    "Test02",
    "Test03",
    "Test04",
    "Test05",
    "Test06",
    "Test07",
    "Test08",
    "Test09",
#if 1 // needed until ZNPC_AnimTable_Test is matching
    "Test10\0zNPCTest"
#else
    "Test10"
#endif
};
// clang-format on

void ZNPC_Test_Startup()
{
    for (S32 i = 0; i < ANIM_COUNT; i++)
    {
        g_hash_testanim[i] = xStrHash(g_strz_testanim[i]);
    }
}

void ZNPC_Test_Shutdown()
{
}

xFactoryInst* ZNPC_Create_Test(S32 who, RyzMemGrow* grow, void*)
{
    zNPCTest* inst = NULL;

    switch (who)
    {
    case NPC_TYPE_TEST:
    {
        inst = new (who, grow) zNPCTest(who);
        break;
    }
    }

    return inst;
}

void ZNPC_Destroy_Test(xFactoryInst* inst)
{
    delete inst;
}

#ifdef NON_MATCHING
xAnimTable* ZNPC_AnimTable_Test()
{
    xAnimTable* table;
    const char** names = g_strz_testanim;

    table = xAnimTableNew(_stringBase0_84 + 78, NULL, 0);

    for (S32 i = 1; i < ANIM_COUNT; i++)
    {
        xAnimTableNewState(table, names[i], 0x10, 0x1, _830_2, NULL, NULL, _831_2, NULL, NULL,
                           xAnimDefaultBeforeEnter, NULL, NULL);
    }

    for (S32 i = 1; i < ANIM_COUNT; i++)
    {
        // non-matching: float scheduling

        if (i < ANIM_COUNT - 1)
        {
            xAnimTableNewTransition(table, names[i], names[i + 1], NULL, NULL, 0, 0, _831_2, _831_2,
                                    1, 0, _832_0, NULL);
        }

        if (i > 1)
        {
            xAnimTableNewTransition(table, names[i], names[1], NULL, NULL, 0, 0, _831_2, _831_2, 1,
                                    0, _832_0, NULL);
        }
    }

    return table;
}
#endif

zNPCTest::zNPCTest(S32 myType) : zNPCCommon(myType)
{
}

void zNPCTest::Reset()
{
    zNPCCommon::Reset();

    currentState = 0;
}

void zNPCTest::Process(xScene* xscn, F32 dt)
{
    transitionTimer = MAX(_866_5, transitionTimer - dt);

    if (transitionTimer < _831_2)
    {
        transitionTimer = _867_6;

        if (++currentState >= numAnimations)
        {
            currentState = 0;
        }

        AnimStart(g_hash_testanim[currentState + 1], 0);
    }

    zNPCCommon::Process(xscn, dt);
}

void zNPCTest::SelfSetup()
{
    currentState = 0;
    numAnimations = cfg_npc->test_count;
    transitionTimer = _867_6;
}

U32 zNPCTest::AnimPick(S32, en_NPC_GOAL_SPOT, xGoal*)
{
    return g_hash_testanim[currentState + 1];
}
