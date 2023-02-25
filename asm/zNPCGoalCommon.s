.include "macros.inc"
.file "zNPCGoalCommon.cpp"

# 0x800D5114 - 0x800D5404
.text
.balign 4

# zNPCGoalCommon::Enter(float, void*)
.fn Enter__14zNPCGoalCommonFfPv, global
/* 800D5114 000D21F4  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 800D5118 000D21F8  7C 08 02 A6 */	mflr r0
/* 800D511C 000D21FC  90 01 00 24 */	stw r0, 0x24(r1)
/* 800D5120 000D2200  DB E1 00 18 */	stfd f31, 0x18(r1)
/* 800D5124 000D2204  FF E0 08 90 */	fmr f31, f1
/* 800D5128 000D2208  93 E1 00 14 */	stw r31, 0x14(r1)
/* 800D512C 000D220C  93 C1 00 10 */	stw r30, 0x10(r1)
/* 800D5130 000D2210  7C 9E 23 78 */	mr r30, r4
/* 800D5134 000D2214  93 A1 00 0C */	stw r29, 0xc(r1)
/* 800D5138 000D2218  7C 7D 1B 78 */	mr r29, r3
/* 800D513C 000D221C  80 63 00 18 */	lwz r3, 0x18(r3)
/* 800D5140 000D2220  48 03 84 C5 */	bl GIDOfPending__7xPsycheCFv
/* 800D5144 000D2224  80 1D 00 3C */	lwz r0, 0x3c(r29)
/* 800D5148 000D2228  7C 7F 1B 78 */	mr r31, r3
/* 800D514C 000D222C  54 00 07 BD */	rlwinm. r0, r0, 0, 30, 30
/* 800D5150 000D2230  41 82 00 0C */	beq .L_800D515C
/* 800D5154 000D2234  2C 1F 00 00 */	cmpwi r31, 0x0
/* 800D5158 000D2238  41 82 00 14 */	beq .L_800D516C
.L_800D515C:
/* 800D515C 000D223C  7F A3 EB 78 */	mr r3, r29
/* 800D5160 000D2240  48 00 02 AD */	bl GetID__5xGoalCFv
/* 800D5164 000D2244  7C 1F 18 00 */	cmpw r31, r3
/* 800D5168 000D2248  40 82 00 14 */	bne .L_800D517C
.L_800D516C:
/* 800D516C 000D224C  7F A3 EB 78 */	mr r3, r29
/* 800D5170 000D2250  38 80 00 20 */	li r4, 0x20
/* 800D5174 000D2254  38 A0 00 00 */	li r5, 0x0
/* 800D5178 000D2258  48 00 01 A1 */	bl DoAutoAnim__14zNPCGoalCommonF16en_NPC_GOAL_SPOTi
.L_800D517C:
/* 800D517C 000D225C  FC 20 F8 90 */	fmr f1, f31
/* 800D5180 000D2260  7F A3 EB 78 */	mr r3, r29
/* 800D5184 000D2264  7F C4 F3 78 */	mr r4, r30
/* 800D5188 000D2268  48 00 02 7D */	bl Enter__5xGoalFfPv
/* 800D518C 000D226C  80 01 00 24 */	lwz r0, 0x24(r1)
/* 800D5190 000D2270  CB E1 00 18 */	lfd f31, 0x18(r1)
/* 800D5194 000D2274  83 E1 00 14 */	lwz r31, 0x14(r1)
/* 800D5198 000D2278  83 C1 00 10 */	lwz r30, 0x10(r1)
/* 800D519C 000D227C  83 A1 00 0C */	lwz r29, 0xc(r1)
/* 800D51A0 000D2280  7C 08 03 A6 */	mtlr r0
/* 800D51A4 000D2284  38 21 00 20 */	addi r1, r1, 0x20
/* 800D51A8 000D2288  4E 80 00 20 */	blr
.endfn Enter__14zNPCGoalCommonFfPv

# zNPCGoalCommon::Resume(float, void*)
.fn Resume__14zNPCGoalCommonFfPv, global
/* 800D51AC 000D228C  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 800D51B0 000D2290  7C 08 02 A6 */	mflr r0
/* 800D51B4 000D2294  90 01 00 24 */	stw r0, 0x24(r1)
/* 800D51B8 000D2298  DB E1 00 18 */	stfd f31, 0x18(r1)
/* 800D51BC 000D229C  FF E0 08 90 */	fmr f31, f1
/* 800D51C0 000D22A0  93 E1 00 14 */	stw r31, 0x14(r1)
/* 800D51C4 000D22A4  93 C1 00 10 */	stw r30, 0x10(r1)
/* 800D51C8 000D22A8  7C 9E 23 78 */	mr r30, r4
/* 800D51CC 000D22AC  93 A1 00 0C */	stw r29, 0xc(r1)
/* 800D51D0 000D22B0  7C 7D 1B 78 */	mr r29, r3
/* 800D51D4 000D22B4  80 63 00 18 */	lwz r3, 0x18(r3)
/* 800D51D8 000D22B8  48 03 84 2D */	bl GIDOfPending__7xPsycheCFv
/* 800D51DC 000D22BC  80 9D 00 3C */	lwz r4, 0x3c(r29)
/* 800D51E0 000D22C0  7C 7F 1B 78 */	mr r31, r3
/* 800D51E4 000D22C4  54 80 07 BD */	rlwinm. r0, r4, 0, 30, 30
/* 800D51E8 000D22C8  41 82 00 14 */	beq .L_800D51FC
/* 800D51EC 000D22CC  54 80 07 7B */	rlwinm. r0, r4, 0, 29, 29
/* 800D51F0 000D22D0  41 82 00 0C */	beq .L_800D51FC
/* 800D51F4 000D22D4  2C 1F 00 00 */	cmpwi r31, 0x0
/* 800D51F8 000D22D8  41 82 00 14 */	beq .L_800D520C
.L_800D51FC:
/* 800D51FC 000D22DC  7F A3 EB 78 */	mr r3, r29
/* 800D5200 000D22E0  48 00 02 0D */	bl GetID__5xGoalCFv
/* 800D5204 000D22E4  7C 1F 18 00 */	cmpw r31, r3
/* 800D5208 000D22E8  40 82 00 14 */	bne .L_800D521C
.L_800D520C:
/* 800D520C 000D22EC  7F A3 EB 78 */	mr r3, r29
/* 800D5210 000D22F0  38 80 00 21 */	li r4, 0x21
/* 800D5214 000D22F4  38 A0 00 00 */	li r5, 0x0
/* 800D5218 000D22F8  48 00 01 01 */	bl DoAutoAnim__14zNPCGoalCommonF16en_NPC_GOAL_SPOTi
.L_800D521C:
/* 800D521C 000D22FC  FC 20 F8 90 */	fmr f1, f31
/* 800D5220 000D2300  7F A3 EB 78 */	mr r3, r29
/* 800D5224 000D2304  7F C4 F3 78 */	mr r4, r30
/* 800D5228 000D2308  48 00 01 ED */	bl Resume__5xGoalFfPv
/* 800D522C 000D230C  80 01 00 24 */	lwz r0, 0x24(r1)
/* 800D5230 000D2310  CB E1 00 18 */	lfd f31, 0x18(r1)
/* 800D5234 000D2314  83 E1 00 14 */	lwz r31, 0x14(r1)
/* 800D5238 000D2318  83 C1 00 10 */	lwz r30, 0x10(r1)
/* 800D523C 000D231C  83 A1 00 0C */	lwz r29, 0xc(r1)
/* 800D5240 000D2320  7C 08 03 A6 */	mtlr r0
/* 800D5244 000D2324  38 21 00 20 */	addi r1, r1, 0x20
/* 800D5248 000D2328  4E 80 00 20 */	blr
.endfn Resume__14zNPCGoalCommonFfPv

# zNPCGoalCommon::PreCalc(float, void*)
.fn PreCalc__14zNPCGoalCommonFfPv, global
/* 800D524C 000D232C  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 800D5250 000D2330  7C 08 02 A6 */	mflr r0
/* 800D5254 000D2334  90 01 00 24 */	stw r0, 0x24(r1)
/* 800D5258 000D2338  DB E1 00 18 */	stfd f31, 0x18(r1)
/* 800D525C 000D233C  FF E0 08 90 */	fmr f31, f1
/* 800D5260 000D2340  93 E1 00 14 */	stw r31, 0x14(r1)
/* 800D5264 000D2344  7C 9F 23 78 */	mr r31, r4
/* 800D5268 000D2348  93 C1 00 10 */	stw r30, 0x10(r1)
/* 800D526C 000D234C  7C 7E 1B 78 */	mr r30, r3
/* 800D5270 000D2350  80 03 00 3C */	lwz r0, 0x3c(r3)
/* 800D5274 000D2354  80 63 00 18 */	lwz r3, 0x18(r3)
/* 800D5278 000D2358  54 00 07 39 */	rlwinm. r0, r0, 0, 28, 28
/* 800D527C 000D235C  80 63 00 00 */	lwz r3, 0x0(r3)
/* 800D5280 000D2360  41 82 00 6C */	beq .L_800D52EC
/* 800D5284 000D2364  A8 1E 00 48 */	lha r0, 0x48(r30)
/* 800D5288 000D2368  60 04 00 08 */	ori r4, r0, 0x8
/* 800D528C 000D236C  7C 80 07 35 */	extsh. r0, r4
/* 800D5290 000D2370  B0 9E 00 48 */	sth r4, 0x48(r30)
/* 800D5294 000D2374  40 82 00 58 */	bne .L_800D52EC
/* 800D5298 000D2378  48 01 DD 69 */	bl AnimCurStateID__10zNPCCommonFv
/* 800D529C 000D237C  80 1E 00 44 */	lwz r0, 0x44(r30)
/* 800D52A0 000D2380  7C 03 00 40 */	cmplw r3, r0
/* 800D52A4 000D2384  41 82 00 48 */	beq .L_800D52EC
/* 800D52A8 000D2388  7F C3 F3 78 */	mr r3, r30
/* 800D52AC 000D238C  48 00 01 8D */	bl Name__14zNPCGoalCommonFv
/* 800D52B0 000D2390  A8 1E 00 48 */	lha r0, 0x48(r30)
/* 800D52B4 000D2394  60 00 00 08 */	ori r0, r0, 0x8
/* 800D52B8 000D2398  B0 1E 00 48 */	sth r0, 0x48(r30)
/* 800D52BC 000D239C  80 7E 00 18 */	lwz r3, 0x18(r30)
/* 800D52C0 000D23A0  80 63 00 04 */	lwz r3, 0x4(r3)
/* 800D52C4 000D23A4  28 03 00 00 */	cmplwi r3, 0x0
/* 800D52C8 000D23A8  41 82 00 24 */	beq .L_800D52EC
/* 800D52CC 000D23AC  41 82 00 20 */	beq .L_800D52EC
/* 800D52D0 000D23B0  81 83 00 00 */	lwz r12, 0x0(r3)
/* 800D52D4 000D23B4  7F C5 F3 78 */	mr r5, r30
/* 800D52D8 000D23B8  38 80 00 02 */	li r4, 0x2
/* 800D52DC 000D23BC  38 C0 00 00 */	li r6, 0x0
/* 800D52E0 000D23C0  81 8C 00 08 */	lwz r12, 0x8(r12)
/* 800D52E4 000D23C4  7D 89 03 A6 */	mtctr r12
/* 800D52E8 000D23C8  4E 80 04 21 */	bctrl
.L_800D52EC:
/* 800D52EC 000D23CC  FC 20 F8 90 */	fmr f1, f31
/* 800D52F0 000D23D0  7F C3 F3 78 */	mr r3, r30
/* 800D52F4 000D23D4  7F E4 FB 78 */	mr r4, r31
/* 800D52F8 000D23D8  48 03 97 CD */	bl PreCalc__5xGoalFfPv
/* 800D52FC 000D23DC  80 01 00 24 */	lwz r0, 0x24(r1)
/* 800D5300 000D23E0  CB E1 00 18 */	lfd f31, 0x18(r1)
/* 800D5304 000D23E4  83 E1 00 14 */	lwz r31, 0x14(r1)
/* 800D5308 000D23E8  83 C1 00 10 */	lwz r30, 0x10(r1)
/* 800D530C 000D23EC  7C 08 03 A6 */	mtlr r0
/* 800D5310 000D23F0  38 21 00 20 */	addi r1, r1, 0x20
/* 800D5314 000D23F4  4E 80 00 20 */	blr
.endfn PreCalc__14zNPCGoalCommonFfPv

# zNPCGoalCommon::DoAutoAnim(en_NPC_GOAL_SPOT, int)
.fn DoAutoAnim__14zNPCGoalCommonF16en_NPC_GOAL_SPOTi, global
/* 800D5318 000D23F8  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 800D531C 000D23FC  7C 08 02 A6 */	mflr r0
/* 800D5320 000D2400  90 01 00 14 */	stw r0, 0x14(r1)
/* 800D5324 000D2404  93 E1 00 0C */	stw r31, 0xc(r1)
/* 800D5328 000D2408  7C BF 2B 78 */	mr r31, r5
/* 800D532C 000D240C  7C 85 23 78 */	mr r5, r4
/* 800D5330 000D2410  93 C1 00 08 */	stw r30, 0x8(r1)
/* 800D5334 000D2414  7C 7E 1B 78 */	mr r30, r3
/* 800D5338 000D2418  7F C6 F3 78 */	mr r6, r30
/* 800D533C 000D241C  80 63 00 18 */	lwz r3, 0x18(r3)
/* 800D5340 000D2420  80 9E 00 1C */	lwz r4, 0x1c(r30)
/* 800D5344 000D2424  80 63 00 00 */	lwz r3, 0x0(r3)
/* 800D5348 000D2428  81 83 01 B8 */	lwz r12, 0x1b8(r3)
/* 800D534C 000D242C  81 8C 00 B0 */	lwz r12, 0xb0(r12)
/* 800D5350 000D2430  7D 89 03 A6 */	mtctr r12
/* 800D5354 000D2434  4E 80 04 21 */	bctrl
/* 800D5358 000D2438  7C 64 1B 79 */	mr. r4, r3
/* 800D535C 000D243C  41 82 00 10 */	beq .L_800D536C
/* 800D5360 000D2440  7F C3 F3 78 */	mr r3, r30
/* 800D5364 000D2444  7F E5 FB 78 */	mr r5, r31
/* 800D5368 000D2448  48 00 00 21 */	bl DoExplicitAnim__14zNPCGoalCommonFUii
.L_800D536C:
/* 800D536C 000D244C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 800D5370 000D2450  80 7E 00 44 */	lwz r3, 0x44(r30)
/* 800D5374 000D2454  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 800D5378 000D2458  83 C1 00 08 */	lwz r30, 0x8(r1)
/* 800D537C 000D245C  7C 08 03 A6 */	mtlr r0
/* 800D5380 000D2460  38 21 00 10 */	addi r1, r1, 0x10
/* 800D5384 000D2464  4E 80 00 20 */	blr
.endfn DoAutoAnim__14zNPCGoalCommonF16en_NPC_GOAL_SPOTi

# zNPCGoalCommon::DoExplicitAnim(unsigned int, int)
.fn DoExplicitAnim__14zNPCGoalCommonFUii, global
/* 800D5388 000D2468  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 800D538C 000D246C  7C 08 02 A6 */	mflr r0
/* 800D5390 000D2470  90 01 00 14 */	stw r0, 0x14(r1)
/* 800D5394 000D2474  93 E1 00 0C */	stw r31, 0xc(r1)
/* 800D5398 000D2478  7C 9F 23 78 */	mr r31, r4
/* 800D539C 000D247C  93 C1 00 08 */	stw r30, 0x8(r1)
/* 800D53A0 000D2480  7C 7E 1B 78 */	mr r30, r3
/* 800D53A4 000D2484  80 63 00 18 */	lwz r3, 0x18(r3)
/* 800D53A8 000D2488  80 63 00 00 */	lwz r3, 0x0(r3)
/* 800D53AC 000D248C  48 01 D9 E5 */	bl AnimStart__10zNPCCommonFUii
/* 800D53B0 000D2490  2C 03 00 00 */	cmpwi r3, 0x0
/* 800D53B4 000D2494  41 82 00 0C */	beq .L_800D53C0
/* 800D53B8 000D2498  93 FE 00 44 */	stw r31, 0x44(r30)
/* 800D53BC 000D249C  48 00 00 14 */	b .L_800D53D0
.L_800D53C0:
/* 800D53C0 000D24A0  7F C3 F3 78 */	mr r3, r30
/* 800D53C4 000D24A4  48 00 00 75 */	bl Name__14zNPCGoalCommonFv
/* 800D53C8 000D24A8  38 00 00 00 */	li r0, 0x0
/* 800D53CC 000D24AC  90 1E 00 44 */	stw r0, 0x44(r30)
.L_800D53D0:
/* 800D53D0 000D24B0  80 1E 00 3C */	lwz r0, 0x3c(r30)
/* 800D53D4 000D24B4  54 00 07 39 */	rlwinm. r0, r0, 0, 28, 28
/* 800D53D8 000D24B8  41 82 00 10 */	beq .L_800D53E8
/* 800D53DC 000D24BC  A8 1E 00 48 */	lha r0, 0x48(r30)
/* 800D53E0 000D24C0  54 00 07 76 */	rlwinm r0, r0, 0, 29, 27
/* 800D53E4 000D24C4  B0 1E 00 48 */	sth r0, 0x48(r30)
.L_800D53E8:
/* 800D53E8 000D24C8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 800D53EC 000D24CC  80 7E 00 44 */	lwz r3, 0x44(r30)
/* 800D53F0 000D24D0  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 800D53F4 000D24D4  83 C1 00 08 */	lwz r30, 0x8(r1)
/* 800D53F8 000D24D8  7C 08 03 A6 */	mtlr r0
/* 800D53FC 000D24DC  38 21 00 10 */	addi r1, r1, 0x10
/* 800D5400 000D24E0  4E 80 00 20 */	blr
.endfn DoExplicitAnim__14zNPCGoalCommonFUii

# 0x800D5404 - 0x800D5434
.section .text, "ax", unique, 1
.balign 4

# xGoal::Enter(float, void*)
.fn Enter__5xGoalFfPv, weak
/* 800D5404 000D24E4  38 60 00 00 */	li r3, 0x0
/* 800D5408 000D24E8  4E 80 00 20 */	blr
.endfn Enter__5xGoalFfPv

# xGoal::GetID() const
.fn GetID__5xGoalCFv, weak
/* 800D540C 000D24EC  80 63 00 1C */	lwz r3, 0x1c(r3)
/* 800D5410 000D24F0  4E 80 00 20 */	blr
.endfn GetID__5xGoalCFv

# xGoal::Resume(float, void*)
.fn Resume__5xGoalFfPv, weak
/* 800D5414 000D24F4  38 60 00 00 */	li r3, 0x0
/* 800D5418 000D24F8  4E 80 00 20 */	blr
.endfn Resume__5xGoalFfPv

# xGoal::Exit(float, void*)
.fn Exit__5xGoalFfPv, weak
/* 800D541C 000D24FC  38 60 00 00 */	li r3, 0x0
/* 800D5420 000D2500  4E 80 00 20 */	blr
.endfn Exit__5xGoalFfPv

# xGoal::Suspend(float, void*)
.fn Suspend__5xGoalFfPv, weak
/* 800D5424 000D2504  38 60 00 00 */	li r3, 0x0
/* 800D5428 000D2508  4E 80 00 20 */	blr
.endfn Suspend__5xGoalFfPv

# xGoal::SysEvent(xBase*, xBase*, unsigned int, const float*, xBase*, int*)
.fn SysEvent__5xGoalFP5xBaseP5xBaseUiPCfP5xBasePi, weak
/* 800D542C 000D250C  38 60 00 01 */	li r3, 0x1
/* 800D5430 000D2510  4E 80 00 20 */	blr
.endfn SysEvent__5xGoalFP5xBaseP5xBaseUiPCfP5xBasePi

# 0x800D5434 - 0x800D5438
.section .text, "ax", unique, 2
.balign 4

# xPSYNote::Notice(en_psynote, xGoal*, void*)
.fn Notice__8xPSYNoteF10en_psynoteP5xGoalPv, weak
/* 800D5434 000D2514  4E 80 00 20 */	blr
.endfn Notice__8xPSYNoteF10en_psynoteP5xGoalPv

# 0x800D5438 - 0x800D5478
.section .text, "ax", unique, 3
.balign 4

# zNPCGoalCommon::Name()
.fn Name__14zNPCGoalCommonFv, weak
/* 800D5438 000D2518  38 60 00 00 */	li r3, 0x0
/* 800D543C 000D251C  4E 80 00 20 */	blr
.endfn Name__14zNPCGoalCommonFv

# zNPCGoalCommon::Clear()
.fn Clear__14zNPCGoalCommonFv, weak
/* 800D5440 000D2520  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 800D5444 000D2524  7C 08 02 A6 */	mflr r0
/* 800D5448 000D2528  90 01 00 14 */	stw r0, 0x14(r1)
/* 800D544C 000D252C  38 00 00 00 */	li r0, 0x0
/* 800D5450 000D2530  B0 03 00 48 */	sth r0, 0x48(r3)
/* 800D5454 000D2534  48 03 96 65 */	bl Clear__5xGoalFv
/* 800D5458 000D2538  80 01 00 14 */	lwz r0, 0x14(r1)
/* 800D545C 000D253C  7C 08 03 A6 */	mtlr r0
/* 800D5460 000D2540  38 21 00 10 */	addi r1, r1, 0x10
/* 800D5464 000D2544  4E 80 00 20 */	blr
.endfn Clear__14zNPCGoalCommonFv

# zNPCGoalCommon::NPCMessage(NPCMsg*)
.fn NPCMessage__14zNPCGoalCommonFP6NPCMsg, weak
/* 800D5468 000D2548  38 60 00 00 */	li r3, 0x0
/* 800D546C 000D254C  4E 80 00 20 */	blr
.endfn NPCMessage__14zNPCGoalCommonFP6NPCMsg

# zNPCGoalCommon::CollReview(void*)
.fn CollReview__14zNPCGoalCommonFPv, weak
/* 800D5470 000D2550  38 60 00 00 */	li r3, 0x0
/* 800D5474 000D2554  4E 80 00 20 */	blr
.endfn CollReview__14zNPCGoalCommonFPv

# 0x800D5478 - 0x800D5480
.section .text, "ax", unique, 4
.balign 4

# zNPCCommon::AnimPick(int, en_NPC_GOAL_SPOT, xGoal*)
.fn AnimPick__10zNPCCommonFi16en_NPC_GOAL_SPOTP5xGoal, weak
/* 800D5478 000D2558  38 60 00 00 */	li r3, 0x0
/* 800D547C 000D255C  4E 80 00 20 */	blr
.endfn AnimPick__10zNPCCommonFi16en_NPC_GOAL_SPOTP5xGoal

# 0x80292BD8 - 0x80292C10
.data
.balign 8

# zNPCGoalCommon::__vtable
.obj __vt__14zNPCGoalCommon, global
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte Clear__14zNPCGoalCommonFv
	.4byte Enter__14zNPCGoalCommonFfPv
	.4byte Exit__5xGoalFfPv
	.4byte Suspend__5xGoalFfPv
	.4byte Resume__14zNPCGoalCommonFfPv
	.4byte PreCalc__14zNPCGoalCommonFfPv
	.4byte EvalRules__5xGoalFP11en_trantypefPv
	.4byte Process__5xGoalFP11en_trantypefPvP6xScene
	.4byte SysEvent__5xGoalFP5xBaseP5xBaseUiPCfP5xBasePi
	.4byte NPCMessage__14zNPCGoalCommonFP6NPCMsg
	.4byte CollReview__14zNPCGoalCommonFPv
.endobj __vt__14zNPCGoalCommon
	.4byte 0x00000000
