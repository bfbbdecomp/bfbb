#include "zNPCGoalBoss.h"

#include <types.h>

// GOALCreate_Boss(int,RyzMemGrow*,void*)
#pragma GLOBAL_ASM("asm/Game/zNPCGoalBoss.s", "GOALCreate_Boss__FiP10RyzMemGrowPv")

// zNPCGoalBossPatFudge::zNPCGoalBossPatFudge(int)
#pragma GLOBAL_ASM("asm/Game/zNPCGoalBoss.s", "__ct__20zNPCGoalBossPatFudgeFi")

// zNPCGoalBossPatSpin::zNPCGoalBossPatSpin(int)
#pragma GLOBAL_ASM("asm/Game/zNPCGoalBoss.s", "__ct__19zNPCGoalBossPatSpinFi")

// zNPCGoalBossPatSpawn::zNPCGoalBossPatSpawn(int)
#pragma GLOBAL_ASM("asm/Game/zNPCGoalBoss.s", "__ct__20zNPCGoalBossPatSpawnFi")

// zNPCGoalBossPatFreeze::zNPCGoalBossPatFreeze(int)
#pragma GLOBAL_ASM("asm/Game/zNPCGoalBoss.s", "__ct__21zNPCGoalBossPatFreezeFi")

// zNPCGoalBossPatSmack::zNPCGoalBossPatSmack(int)
#pragma GLOBAL_ASM("asm/Game/zNPCGoalBoss.s", "__ct__20zNPCGoalBossPatSmackFi")

// zNPCGoalBossPatRun::zNPCGoalBossPatRun(int)
#pragma GLOBAL_ASM("asm/Game/zNPCGoalBoss.s", "__ct__18zNPCGoalBossPatRunFi")

// zNPCGoalBossPatSpit::zNPCGoalBossPatSpit(int)
#pragma GLOBAL_ASM("asm/Game/zNPCGoalBoss.s", "__ct__19zNPCGoalBossPatSpitFi")

// zNPCGoalBossPatHit::zNPCGoalBossPatHit(int)
#pragma GLOBAL_ASM("asm/Game/zNPCGoalBoss.s", "__ct__18zNPCGoalBossPatHitFi")

// zNPCGoalBossPatTaunt::zNPCGoalBossPatTaunt(int)
#pragma GLOBAL_ASM("asm/Game/zNPCGoalBoss.s", "__ct__20zNPCGoalBossPatTauntFi")

// zNPCGoalBossPatIdle::zNPCGoalBossPatIdle(int)
#pragma GLOBAL_ASM("asm/Game/zNPCGoalBoss.s", "__ct__19zNPCGoalBossPatIdleFi")

// zNPCGoalBossSB1Deflate::zNPCGoalBossSB1Deflate(int)
#pragma GLOBAL_ASM("asm/Game/zNPCGoalBoss.s", "__ct__22zNPCGoalBossSB1DeflateFi")

// zNPCGoalBossSB1Smash::zNPCGoalBossSB1Smash(int)
#pragma GLOBAL_ASM("asm/Game/zNPCGoalBoss.s", "__ct__20zNPCGoalBossSB1SmashFi")

// zNPCGoalBossSB1Stomp::zNPCGoalBossSB1Stomp(int)
#pragma GLOBAL_ASM("asm/Game/zNPCGoalBoss.s", "__ct__20zNPCGoalBossSB1StompFi")

// zNPCGoalBossSB1Taunt::zNPCGoalBossSB1Taunt(int)
#pragma GLOBAL_ASM("asm/Game/zNPCGoalBoss.s", "__ct__20zNPCGoalBossSB1TauntFi")

// zNPCGoalBossSB1Idle::zNPCGoalBossSB1Idle(int)
#pragma GLOBAL_ASM("asm/Game/zNPCGoalBoss.s", "__ct__19zNPCGoalBossSB1IdleFi")

// zNPCGoalBossSandyClothesline::zNPCGoalBossSandyClothesline(int)
#pragma GLOBAL_ASM("asm/Game/zNPCGoalBoss.s", "__ct__28zNPCGoalBossSandyClotheslineFi")

// zNPCGoalBossSandyRunToRope::zNPCGoalBossSandyRunToRope(int)
#pragma GLOBAL_ASM("asm/Game/zNPCGoalBoss.s", "__ct__26zNPCGoalBossSandyRunToRopeFi")

// zNPCGoalBossSandyGetUp::zNPCGoalBossSandyGetUp(int)
#pragma GLOBAL_ASM("asm/Game/zNPCGoalBoss.s", "__ct__22zNPCGoalBossSandyGetUpFi")

// zNPCGoalBossSandySit::zNPCGoalBossSandySit(int)
#pragma GLOBAL_ASM("asm/Game/zNPCGoalBoss.s", "__ct__20zNPCGoalBossSandySitFi")

// zNPCGoalBossSandyLeap::zNPCGoalBossSandyLeap(int)
#pragma GLOBAL_ASM("asm/Game/zNPCGoalBoss.s", "__ct__21zNPCGoalBossSandyLeapFi")

// zNPCGoalBossSandyElbowDrop::zNPCGoalBossSandyElbowDrop(int)
#pragma GLOBAL_ASM("asm/Game/zNPCGoalBoss.s", "__ct__26zNPCGoalBossSandyElbowDropFi")

// zNPCGoalBossSandyNoHead::zNPCGoalBossSandyNoHead(int)
#pragma GLOBAL_ASM("asm/Game/zNPCGoalBoss.s", "__ct__23zNPCGoalBossSandyNoHeadFi")

// zNPCGoalBossSandyMelee::zNPCGoalBossSandyMelee(int)
#pragma GLOBAL_ASM("asm/Game/zNPCGoalBoss.s", "__ct__22zNPCGoalBossSandyMeleeFi")

// zNPCGoalBossSandyChase::zNPCGoalBossSandyChase(int)
#pragma GLOBAL_ASM("asm/Game/zNPCGoalBoss.s", "__ct__22zNPCGoalBossSandyChaseFi")

// zNPCGoalBossSandyTaunt::zNPCGoalBossSandyTaunt(int)
#pragma GLOBAL_ASM("asm/Game/zNPCGoalBoss.s", "__ct__22zNPCGoalBossSandyTauntFi")

// zNPCGoalBossSandyIdle::zNPCGoalBossSandyIdle(int)
#pragma GLOBAL_ASM("asm/Game/zNPCGoalBoss.s", "__ct__21zNPCGoalBossSandyIdleFi")

// zNPCGoalExist::zNPCGoalExist(int)
#pragma GLOBAL_ASM("asm/Game/zNPCGoalBoss.s", "__ct__13zNPCGoalExistFi")
