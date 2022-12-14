.include "macros.inc"
.file "zNPCTypeBoss.cpp"

# 0x8013612C - 0x80136464
.text
.balign 4

# ZNPC_Boss_Startup()
.fn ZNPC_Boss_Startup__Fv, global
/* 8013612C 0013320C  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 80136130 00133210  7C 08 02 A6 */	mflr r0
/* 80136134 00133214  3C 80 80 2A */	lis r4, g_strz_bossanim@ha
/* 80136138 00133218  3C 60 80 2A */	lis r3, g_hash_bossanim@ha
/* 8013613C 0013321C  90 01 00 24 */	stw r0, 0x24(r1)
/* 80136140 00133220  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 80136144 00133224  3B E4 93 A0 */	addi r31, r4, g_strz_bossanim@l
/* 80136148 00133228  93 C1 00 18 */	stw r30, 0x18(r1)
/* 8013614C 0013322C  3B C3 92 68 */	addi r30, r3, g_hash_bossanim@l
/* 80136150 00133230  93 A1 00 14 */	stw r29, 0x14(r1)
/* 80136154 00133234  3B A0 00 00 */	li r29, 0x0
.L_80136158:
/* 80136158 00133238  80 7F 00 00 */	lwz r3, 0x0(r31)
/* 8013615C 0013323C  4B F1 60 B9 */	bl xStrHash__FPCc
/* 80136160 00133240  3B BD 00 01 */	addi r29, r29, 0x1
/* 80136164 00133244  90 7E 00 00 */	stw r3, 0x0(r30)
/* 80136168 00133248  2C 1D 00 4E */	cmpwi r29, 0x4e
/* 8013616C 0013324C  3B FF 00 04 */	addi r31, r31, 0x4
/* 80136170 00133250  3B DE 00 04 */	addi r30, r30, 0x4
/* 80136174 00133254  41 80 FF E4 */	blt .L_80136158
/* 80136178 00133258  80 01 00 24 */	lwz r0, 0x24(r1)
/* 8013617C 0013325C  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 80136180 00133260  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 80136184 00133264  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 80136188 00133268  7C 08 03 A6 */	mtlr r0
/* 8013618C 0013326C  38 21 00 20 */	addi r1, r1, 0x20
/* 80136190 00133270  4E 80 00 20 */	blr
.endfn ZNPC_Boss_Startup__Fv

# ZNPC_Boss_Shutdown()
.fn ZNPC_Boss_Shutdown__Fv, global
/* 80136194 00133274  4E 80 00 20 */	blr
.endfn ZNPC_Boss_Shutdown__Fv

# zNPCBoss_ScenePrepare()
.fn zNPCBoss_ScenePrepare__Fv, global
/* 80136198 00133278  38 00 00 01 */	li r0, 0x1
/* 8013619C 0013327C  90 0D 96 40 */	stw r0, g_boss_is_in_the_house@sda21(r13)
/* 801361A0 00133280  4E 80 00 20 */	blr
.endfn zNPCBoss_ScenePrepare__Fv

# zNPCBoss_SceneFinish()
.fn zNPCBoss_SceneFinish__Fv, global
/* 801361A4 00133284  38 00 00 00 */	li r0, 0x0
/* 801361A8 00133288  90 0D 96 40 */	stw r0, g_boss_is_in_the_house@sda21(r13)
/* 801361AC 0013328C  4E 80 00 20 */	blr
.endfn zNPCBoss_SceneFinish__Fv

# ZNPC_Create_Boss(int, RyzMemGrow*, void*)
.fn ZNPC_Create_Boss__FiP10RyzMemGrowPv, global
/* 801361B0 00133290  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801361B4 00133294  7C 08 02 A6 */	mflr r0
/* 801361B8 00133298  3C C0 4E 54 */	lis r6, 0x4e54
/* 801361BC 0013329C  7C 85 23 78 */	mr r5, r4
/* 801361C0 001332A0  90 01 00 14 */	stw r0, 0x14(r1)
/* 801361C4 001332A4  38 06 42 32 */	addi r0, r6, 0x4232
/* 801361C8 001332A8  93 E1 00 0C */	stw r31, 0xc(r1)
/* 801361CC 001332AC  7C 7F 1B 78 */	mr r31, r3
/* 801361D0 001332B0  7C 1F 00 00 */	cmpw r31, r0
/* 801361D4 001332B4  41 82 00 80 */	beq .L_80136254
/* 801361D8 001332B8  40 80 00 18 */	bge .L_801361F0
/* 801361DC 001332BC  38 06 42 30 */	addi r0, r6, 0x4230
/* 801361E0 001332C0  7C 1F 00 00 */	cmpw r31, r0
/* 801361E4 001332C4  41 82 00 20 */	beq .L_80136204
/* 801361E8 001332C8  40 80 00 44 */	bge .L_8013622C
/* 801361EC 001332CC  48 00 00 E0 */	b .L_801362CC
.L_801361F0:
/* 801361F0 001332D0  38 06 42 34 */	addi r0, r6, 0x4234
/* 801361F4 001332D4  7C 1F 00 00 */	cmpw r31, r0
/* 801361F8 001332D8  41 82 00 AC */	beq .L_801362A4
/* 801361FC 001332DC  40 80 00 D0 */	bge .L_801362CC
/* 80136200 001332E0  48 00 00 7C */	b .L_8013627C
.L_80136204:
/* 80136204 001332E4  7F E4 FB 78 */	mr r4, r31
/* 80136208 001332E8  38 60 0E 2C */	li r3, 0xe2c
/* 8013620C 001332EC  4B FD 8F 45 */	bl __nw__10RyzMemDataFUliP10RyzMemGrow
/* 80136210 001332F0  7C 60 1B 79 */	mr. r0, r3
/* 80136214 001332F4  41 82 00 10 */	beq .L_80136224
/* 80136218 001332F8  7F E4 FB 78 */	mr r4, r31
/* 8013621C 001332FC  48 00 02 FD */	bl __ct__10zNPCBSandyFi
/* 80136220 00133300  7C 60 1B 78 */	mr r0, r3
.L_80136224:
/* 80136224 00133304  7C 03 03 78 */	mr r3, r0
/* 80136228 00133308  48 00 00 C8 */	b .L_801362F0
.L_8013622C:
/* 8013622C 0013330C  7F E4 FB 78 */	mr r4, r31
/* 80136230 00133310  38 60 19 88 */	li r3, 0x1988
/* 80136234 00133314  4B FD 8F 1D */	bl __nw__10RyzMemDataFUliP10RyzMemGrow
/* 80136238 00133318  7C 60 1B 79 */	mr. r0, r3
/* 8013623C 0013331C  41 82 00 10 */	beq .L_8013624C
/* 80136240 00133320  7F E4 FB 78 */	mr r4, r31
/* 80136244 00133324  48 00 02 99 */	bl __ct__12zNPCBPatrickFi
/* 80136248 00133328  7C 60 1B 78 */	mr r0, r3
.L_8013624C:
/* 8013624C 0013332C  7C 03 03 78 */	mr r3, r0
/* 80136250 00133330  48 00 00 A0 */	b .L_801362F0
.L_80136254:
/* 80136254 00133334  7F E4 FB 78 */	mr r4, r31
/* 80136258 00133338  38 60 04 AC */	li r3, 0x4ac
/* 8013625C 0013333C  4B FD 8E F5 */	bl __nw__10RyzMemDataFUliP10RyzMemGrow
/* 80136260 00133340  7C 60 1B 79 */	mr. r0, r3
/* 80136264 00133344  41 82 00 10 */	beq .L_80136274
/* 80136268 00133348  7F E4 FB 78 */	mr r4, r31
/* 8013626C 0013334C  48 00 02 35 */	bl __ct__9zNPCB_SB1Fi
/* 80136270 00133350  7C 60 1B 78 */	mr r0, r3
.L_80136274:
/* 80136274 00133354  7C 03 03 78 */	mr r3, r0
/* 80136278 00133358  48 00 00 78 */	b .L_801362F0
.L_8013627C:
/* 8013627C 0013335C  7F E4 FB 78 */	mr r4, r31
/* 80136280 00133360  38 60 1B 18 */	li r3, 0x1b18
/* 80136284 00133364  4B FD 8E CD */	bl __nw__10RyzMemDataFUliP10RyzMemGrow
/* 80136288 00133368  7C 60 1B 79 */	mr. r0, r3
/* 8013628C 0013336C  41 82 00 10 */	beq .L_8013629C
/* 80136290 00133370  7F E4 FB 78 */	mr r4, r31
/* 80136294 00133374  48 00 02 F9 */	bl __ct__9zNPCB_SB2Fi
/* 80136298 00133378  7C 60 1B 78 */	mr r0, r3
.L_8013629C:
/* 8013629C 0013337C  7C 03 03 78 */	mr r3, r0
/* 801362A0 00133380  48 00 00 50 */	b .L_801362F0
.L_801362A4:
/* 801362A4 00133384  7F E4 FB 78 */	mr r4, r31
/* 801362A8 00133388  38 60 06 A8 */	li r3, 0x6a8
/* 801362AC 0013338C  4B FD 8E A5 */	bl __nw__10RyzMemDataFUliP10RyzMemGrow
/* 801362B0 00133390  7C 60 1B 79 */	mr. r0, r3
/* 801362B4 00133394  41 82 00 10 */	beq .L_801362C4
/* 801362B8 00133398  7F E4 FB 78 */	mr r4, r31
/* 801362BC 0013339C  48 03 35 BD */	bl __ct__13zNPCBPlanktonFi
/* 801362C0 001333A0  7C 60 1B 78 */	mr r0, r3
.L_801362C4:
/* 801362C4 001333A4  7C 03 03 78 */	mr r3, r0
/* 801362C8 001333A8  48 00 00 28 */	b .L_801362F0
.L_801362CC:
/* 801362CC 001333AC  7F E4 FB 78 */	mr r4, r31
/* 801362D0 001333B0  38 60 02 B4 */	li r3, 0x2b4
/* 801362D4 001333B4  4B FD 8E 7D */	bl __nw__10RyzMemDataFUliP10RyzMemGrow
/* 801362D8 001333B8  7C 60 1B 79 */	mr. r0, r3
/* 801362DC 001333BC  41 82 00 10 */	beq .L_801362EC
/* 801362E0 001333C0  7F E4 FB 78 */	mr r4, r31
/* 801362E4 001333C4  48 00 01 81 */	bl __ct__8zNPCBossFi
/* 801362E8 001333C8  7C 60 1B 78 */	mr r0, r3
.L_801362EC:
/* 801362EC 001333CC  7C 03 03 78 */	mr r3, r0
.L_801362F0:
/* 801362F0 001333D0  28 03 00 00 */	cmplwi r3, 0x0
/* 801362F4 001333D4  41 82 00 08 */	beq .L_801362FC
/* 801362F8 001333D8  38 63 00 D0 */	addi r3, r3, 0xd0
.L_801362FC:
/* 801362FC 001333DC  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80136300 001333E0  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80136304 001333E4  7C 08 03 A6 */	mtlr r0
/* 80136308 001333E8  38 21 00 10 */	addi r1, r1, 0x10
/* 8013630C 001333EC  4E 80 00 20 */	blr
.endfn ZNPC_Create_Boss__FiP10RyzMemGrowPv

# ZNPC_Destroy_Boss(xFactoryInst*)
.fn ZNPC_Destroy_Boss__FP12xFactoryInst, global
/* 80136310 001333F0  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80136314 001333F4  7C 08 02 A6 */	mflr r0
/* 80136318 001333F8  38 80 00 01 */	li r4, 0x1
/* 8013631C 001333FC  90 01 00 14 */	stw r0, 0x14(r1)
/* 80136320 00133400  4B FA 2C 85 */	bl __dt__12xFactoryInstFv
/* 80136324 00133404  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80136328 00133408  7C 08 03 A6 */	mtlr r0
/* 8013632C 0013340C  38 21 00 10 */	addi r1, r1, 0x10
/* 80136330 00133410  4E 80 00 20 */	blr
.endfn ZNPC_Destroy_Boss__FP12xFactoryInst

# ZNPC_AnimTable_BossSBobbyArm()
.fn ZNPC_AnimTable_BossSBobbyArm__Fv, global
/* 80136334 00133414  94 21 FF D0 */	stwu r1, -0x30(r1)
/* 80136338 00133418  7C 08 02 A6 */	mflr r0
/* 8013633C 0013341C  3C 60 80 27 */	lis r3, "@stringBase0"@ha
/* 80136340 00133420  38 80 00 00 */	li r4, 0x0
/* 80136344 00133424  90 01 00 34 */	stw r0, 0x34(r1)
/* 80136348 00133428  38 63 CB B8 */	addi r3, r3, "@stringBase0"@l
/* 8013634C 0013342C  38 63 03 6D */	addi r3, r3, 0x36d
/* 80136350 00133430  93 E1 00 2C */	stw r31, 0x2c(r1)
/* 80136354 00133434  80 A2 A3 88 */	lwz r5, "@917"@sda21(r2)
/* 80136358 00133438  80 02 A3 8C */	lwz r0, "@917"+0x4@sda21(r2)
/* 8013635C 0013343C  90 A1 00 18 */	stw r5, 0x18(r1)
/* 80136360 00133440  38 A0 00 00 */	li r5, 0x0
/* 80136364 00133444  90 01 00 1C */	stw r0, 0x1c(r1)
/* 80136368 00133448  4B ED 09 09 */	bl xAnimTableNew__FPCcPP10xAnimTableUi
/* 8013636C 0013344C  3C A0 80 00 */	lis r5, xAnimDefaultBeforeEnter__FP9xAnimPlayP10xAnimState@ha
/* 80136370 00133450  3C 80 80 2A */	lis r4, g_strz_bossanim@ha
/* 80136374 00133454  38 05 6C FC */	addi r0, r5, xAnimDefaultBeforeEnter__FP9xAnimPlayP10xAnimState@l
/* 80136378 00133458  7C 7F 1B 78 */	mr r31, r3
/* 8013637C 0013345C  90 01 00 08 */	stw r0, 0x8(r1)
/* 80136380 00133460  38 00 00 00 */	li r0, 0x0
/* 80136384 00133464  38 84 93 A0 */	addi r4, r4, g_strz_bossanim@l
/* 80136388 00133468  38 A0 00 10 */	li r5, 0x10
/* 8013638C 0013346C  90 01 00 0C */	stw r0, 0xc(r1)
/* 80136390 00133470  38 C0 00 00 */	li r6, 0x0
/* 80136394 00133474  38 E0 00 00 */	li r7, 0x0
/* 80136398 00133478  39 00 00 00 */	li r8, 0x0
/* 8013639C 0013347C  90 01 00 10 */	stw r0, 0x10(r1)
/* 801363A0 00133480  39 20 00 00 */	li r9, 0x0
/* 801363A4 00133484  39 40 00 00 */	li r10, 0x0
/* 801363A8 00133488  80 84 00 04 */	lwz r4, 0x4(r4)
/* 801363AC 0013348C  C0 22 A3 90 */	lfs f1, "@920"@sda21(r2)
/* 801363B0 00133490  C0 42 A3 94 */	lfs f2, "@921"@sda21(r2)
/* 801363B4 00133494  4B ED 09 A5 */	bl xAnimTableNewState__FP10xAnimTablePCcUiUifPfPffPUsPvPFP9xAnimPlayP10xAnimState_vPFP10xAnimStateP11xAnimSinglePv_vPFP9xAnimPlayP5xQuatP5xVec3i_v
/* 801363B8 00133498  3C 60 80 2A */	lis r3, g_strz_bossanim@ha
/* 801363BC 0013349C  C0 22 A3 98 */	lfs f1, "@922"@sda21(r2)
/* 801363C0 001334A0  38 83 93 A0 */	addi r4, r3, g_strz_bossanim@l
/* 801363C4 001334A4  38 A1 00 18 */	addi r5, r1, 0x18
/* 801363C8 001334A8  7F E3 FB 78 */	mr r3, r31
/* 801363CC 001334AC  38 C0 00 01 */	li r6, 0x1
/* 801363D0 001334B0  4B FB E0 29 */	bl NPCC_BuildStandardAnimTran__FP10xAnimTablePPcPiif
/* 801363D4 001334B4  80 01 00 34 */	lwz r0, 0x34(r1)
/* 801363D8 001334B8  7F E3 FB 78 */	mr r3, r31
/* 801363DC 001334BC  83 E1 00 2C */	lwz r31, 0x2c(r1)
/* 801363E0 001334C0  7C 08 03 A6 */	mtlr r0
/* 801363E4 001334C4  38 21 00 30 */	addi r1, r1, 0x30
/* 801363E8 001334C8  4E 80 00 20 */	blr
.endfn ZNPC_AnimTable_BossSBobbyArm__Fv

# zNPCBoss::Setup()
.fn Setup__8zNPCBossFv, global
/* 801363EC 001334CC  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801363F0 001334D0  7C 08 02 A6 */	mflr r0
/* 801363F4 001334D4  90 01 00 14 */	stw r0, 0x14(r1)
/* 801363F8 001334D8  4B FB 90 69 */	bl Setup__10zNPCCommonFv
/* 801363FC 001334DC  80 0D 96 40 */	lwz r0, g_boss_is_in_the_house@sda21(r13)
/* 80136400 001334E0  2C 00 00 00 */	cmpwi r0, 0x0
/* 80136404 001334E4  41 82 00 10 */	beq .L_80136414
/* 80136408 001334E8  38 00 00 00 */	li r0, 0x0
/* 8013640C 001334EC  90 0D 96 40 */	stw r0, g_boss_is_in_the_house@sda21(r13)
/* 80136410 001334F0  48 00 00 15 */	bl BOSS_InitEffects__Fv
.L_80136414:
/* 80136414 001334F4  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80136418 001334F8  7C 08 03 A6 */	mtlr r0
/* 8013641C 001334FC  38 21 00 10 */	addi r1, r1, 0x10
/* 80136420 00133500  4E 80 00 20 */	blr
.endfn Setup__8zNPCBossFv

# BOSS_InitEffects()
.fn BOSS_InitEffects__Fv, global
/* 80136424 00133504  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80136428 00133508  7C 08 02 A6 */	mflr r0
/* 8013642C 0013350C  3C 60 80 27 */	lis r3, "@stringBase0"@ha
/* 80136430 00133510  38 63 CB B8 */	addi r3, r3, "@stringBase0"@l
/* 80136434 00133514  90 01 00 14 */	stw r0, 0x14(r1)
/* 80136438 00133518  38 63 03 7B */	addi r3, r3, 0x37b
/* 8013643C 0013351C  4B F7 24 09 */	bl zParEmitterFind__FPCc
/* 80136440 00133520  3C 80 80 32 */	lis r4, g_parf_holder@ha
/* 80136444 00133524  90 6D 96 44 */	stw r3, g_pemit_holder@sda21(r13)
/* 80136448 00133528  38 64 44 68 */	addi r3, r4, g_parf_holder@l
/* 8013644C 0013352C  38 00 01 00 */	li r0, 0x100
/* 80136450 00133530  90 03 01 38 */	stw r0, 0x138(r3)
/* 80136454 00133534  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80136458 00133538  7C 08 03 A6 */	mtlr r0
/* 8013645C 0013353C  38 21 00 10 */	addi r1, r1, 0x10
/* 80136460 00133540  4E 80 00 20 */	blr
.endfn BOSS_InitEffects__Fv

# 0x80136464 - 0x8013658C
.section .text, "ax", unique, 1
.balign 4

# zNPCBoss::zNPCBoss(int)
.fn __ct__8zNPCBossFi, weak
/* 80136464 00133544  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80136468 00133548  7C 08 02 A6 */	mflr r0
/* 8013646C 0013354C  90 01 00 14 */	stw r0, 0x14(r1)
/* 80136470 00133550  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80136474 00133554  7C 7F 1B 78 */	mr r31, r3
/* 80136478 00133558  4B FB E1 7D */	bl __ct__10zNPCCommonFi
/* 8013647C 0013355C  3C 80 80 2A */	lis r4, __vt__8zNPCBoss@ha
/* 80136480 00133560  7F E3 FB 78 */	mr r3, r31
/* 80136484 00133564  38 04 94 D8 */	addi r0, r4, __vt__8zNPCBoss@l
/* 80136488 00133568  90 1F 01 B8 */	stw r0, 0x1b8(r31)
/* 8013648C 0013356C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80136490 00133570  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80136494 00133574  7C 08 03 A6 */	mtlr r0
/* 80136498 00133578  38 21 00 10 */	addi r1, r1, 0x10
/* 8013649C 0013357C  4E 80 00 20 */	blr
.endfn __ct__8zNPCBossFi

# zNPCB_SB1::zNPCB_SB1(int)
.fn __ct__9zNPCB_SB1Fi, weak
/* 801364A0 00133580  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801364A4 00133584  7C 08 02 A6 */	mflr r0
/* 801364A8 00133588  90 01 00 14 */	stw r0, 0x14(r1)
/* 801364AC 0013358C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 801364B0 00133590  7C 7F 1B 78 */	mr r31, r3
/* 801364B4 00133594  4B FF FF B1 */	bl __ct__8zNPCBossFi
/* 801364B8 00133598  3C 80 80 2A */	lis r4, __vt__9zNPCB_SB1@ha
/* 801364BC 0013359C  7F E3 FB 78 */	mr r3, r31
/* 801364C0 001335A0  38 04 A6 24 */	addi r0, r4, __vt__9zNPCB_SB1@l
/* 801364C4 001335A4  90 1F 01 B8 */	stw r0, 0x1b8(r31)
/* 801364C8 001335A8  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 801364CC 001335AC  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801364D0 001335B0  7C 08 03 A6 */	mtlr r0
/* 801364D4 001335B4  38 21 00 10 */	addi r1, r1, 0x10
/* 801364D8 001335B8  4E 80 00 20 */	blr
.endfn __ct__9zNPCB_SB1Fi

# zNPCBPatrick::zNPCBPatrick(int)
.fn __ct__12zNPCBPatrickFi, weak
/* 801364DC 001335BC  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801364E0 001335C0  7C 08 02 A6 */	mflr r0
/* 801364E4 001335C4  90 01 00 14 */	stw r0, 0x14(r1)
/* 801364E8 001335C8  93 E1 00 0C */	stw r31, 0xc(r1)
/* 801364EC 001335CC  7C 7F 1B 78 */	mr r31, r3
/* 801364F0 001335D0  4B FF FF 75 */	bl __ct__8zNPCBossFi
/* 801364F4 001335D4  3C 80 80 2A */	lis r4, __vt__12zNPCBPatrick@ha
/* 801364F8 001335D8  7F E3 FB 78 */	mr r3, r31
/* 801364FC 001335DC  38 04 AE 54 */	addi r0, r4, __vt__12zNPCBPatrick@l
/* 80136500 001335E0  90 1F 01 B8 */	stw r0, 0x1b8(r31)
/* 80136504 001335E4  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80136508 001335E8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8013650C 001335EC  7C 08 03 A6 */	mtlr r0
/* 80136510 001335F0  38 21 00 10 */	addi r1, r1, 0x10
/* 80136514 001335F4  4E 80 00 20 */	blr
.endfn __ct__12zNPCBPatrickFi

# zNPCBSandy::zNPCBSandy(int)
.fn __ct__10zNPCBSandyFi, weak
/* 80136518 001335F8  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8013651C 001335FC  7C 08 02 A6 */	mflr r0
/* 80136520 00133600  90 01 00 14 */	stw r0, 0x14(r1)
/* 80136524 00133604  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80136528 00133608  7C 7F 1B 78 */	mr r31, r3
/* 8013652C 0013360C  4B FF FF 39 */	bl __ct__8zNPCBossFi
/* 80136530 00133610  3C 80 80 2A */	lis r4, __vt__10zNPCBSandy@ha
/* 80136534 00133614  7F E3 FB 78 */	mr r3, r31
/* 80136538 00133618  38 04 9C CC */	addi r0, r4, __vt__10zNPCBSandy@l
/* 8013653C 0013361C  90 1F 01 B8 */	stw r0, 0x1b8(r31)
/* 80136540 00133620  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80136544 00133624  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80136548 00133628  7C 08 03 A6 */	mtlr r0
/* 8013654C 0013362C  38 21 00 10 */	addi r1, r1, 0x10
/* 80136550 00133630  4E 80 00 20 */	blr
.endfn __ct__10zNPCBSandyFi

# zNPCBoss::ColChkFlags() const
.fn ColChkFlags__8zNPCBossCFv, weak
/* 80136554 00133634  38 60 00 00 */	li r3, 0x0
/* 80136558 00133638  4E 80 00 20 */	blr
.endfn ColChkFlags__8zNPCBossCFv

# zNPCBoss::ColPenFlags() const
.fn ColPenFlags__8zNPCBossCFv, weak
/* 8013655C 0013363C  38 60 00 00 */	li r3, 0x0
/* 80136560 00133640  4E 80 00 20 */	blr
.endfn ColPenFlags__8zNPCBossCFv

# zNPCBoss::ColChkByFlags() const
.fn ColChkByFlags__8zNPCBossCFv, weak
/* 80136564 00133644  38 60 00 10 */	li r3, 0x10
/* 80136568 00133648  4E 80 00 20 */	blr
.endfn ColChkByFlags__8zNPCBossCFv

# zNPCBoss::ColPenByFlags() const
.fn ColPenByFlags__8zNPCBossCFv, weak
/* 8013656C 0013364C  38 60 00 10 */	li r3, 0x10
/* 80136570 00133650  4E 80 00 20 */	blr
.endfn ColPenByFlags__8zNPCBossCFv

# zNPCBoss::PhysicsFlags() const
.fn PhysicsFlags__8zNPCBossCFv, weak
/* 80136574 00133654  38 60 00 03 */	li r3, 0x3
/* 80136578 00133658  4E 80 00 20 */	blr
.endfn PhysicsFlags__8zNPCBossCFv

# zNPCBoss::AttackTimeLeft()
.fn AttackTimeLeft__8zNPCBossFv, weak
/* 8013657C 0013365C  C0 22 A3 9C */	lfs f1, "@947"@sda21(r2)
/* 80136580 00133660  4E 80 00 20 */	blr
.endfn AttackTimeLeft__8zNPCBossFv

# zNPCBoss::HoldUpDude()
.fn HoldUpDude__8zNPCBossFv, weak
/* 80136584 00133664  4E 80 00 20 */	blr
.endfn HoldUpDude__8zNPCBossFv

# zNPCBoss::ThanksImDone()
.fn ThanksImDone__8zNPCBossFv, weak
/* 80136588 00133668  4E 80 00 20 */	blr
.endfn ThanksImDone__8zNPCBossFv

# 0x8013658C - 0x801365C8
.section .text, "ax", unique, 2
.balign 4

# zNPCB_SB2::zNPCB_SB2(int)
.fn __ct__9zNPCB_SB2Fi, weak
/* 8013658C 0013366C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80136590 00133670  7C 08 02 A6 */	mflr r0
/* 80136594 00133674  90 01 00 14 */	stw r0, 0x14(r1)
/* 80136598 00133678  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8013659C 0013367C  7C 7F 1B 78 */	mr r31, r3
/* 801365A0 00133680  4B FF FE C5 */	bl __ct__8zNPCBossFi
/* 801365A4 00133684  3C 80 80 2A */	lis r4, __vt__9zNPCB_SB2@ha
/* 801365A8 00133688  7F E3 FB 78 */	mr r3, r31
/* 801365AC 0013368C  38 04 A9 8C */	addi r0, r4, __vt__9zNPCB_SB2@l
/* 801365B0 00133690  90 1F 01 B8 */	stw r0, 0x1b8(r31)
/* 801365B4 00133694  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 801365B8 00133698  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801365BC 0013369C  7C 08 03 A6 */	mtlr r0
/* 801365C0 001336A0  38 21 00 10 */	addi r1, r1, 0x10
/* 801365C4 001336A4  4E 80 00 20 */	blr
.endfn __ct__9zNPCB_SB2Fi

# 0x8026CBB8 - 0x8026CF48
.rodata
.balign 8

.obj "@stringBase0", local
	.4byte 0x556E6B6E
	.4byte 0x6F776E00
	.4byte 0x49646C65
.L_8026CBC4:
	.4byte 0x30310049
	.4byte 0x646C6530
	.4byte 0x32005461
	.4byte 0x756E7430
	.4byte 0x31005275
	.4byte 0x6E303100
	.4byte 0x57616C6B
	.4byte 0x3031004D
	.4byte 0x656C6565
	.4byte 0x30310048
	.4byte 0x69743031
	.4byte 0x00486974
	.4byte 0x30320047
.L_8026CBF8:
	.4byte 0x65745570
	.4byte 0x30310044
	.4byte 0x697A7A79
	.4byte 0x30310045
	.4byte 0x6C626F77
	.4byte 0x44726F70
	.4byte 0x3031004C
	.4byte 0x65617030
	.4byte 0x31004C65
	.4byte 0x61703032
	.4byte 0x004C6561
	.4byte 0x70303300
	.4byte 0x4C656170
	.4byte 0x30340053
	.4byte 0x69743031
	.4byte 0x00536974
	.4byte 0x53686F63
	.4byte 0x6B303100
	.4byte 0x434C4265
.L_8026CC44:
	.4byte 0x67696E30
	.4byte 0x3100434C
	.4byte 0x4C6F6F70
	.4byte 0x30310043
	.4byte 0x4C456E64
	.4byte 0x3031004E
	.4byte 0x6F486561
	.4byte 0x6449646C
	.4byte 0x65303100
	.4byte 0x4E6F4865
	.4byte 0x61645761
	.4byte 0x76696E67
	.4byte 0x3031004E
	.4byte 0x6F486561
	.4byte 0x64476574
	.4byte 0x55703031
	.4byte 0x004E6F48
	.4byte 0x65616453
	.4byte 0x686F7455
	.4byte 0x70303100
	.4byte 0x4E6F4865
	.4byte 0x61645368
	.4byte 0x6F636B30
	.4byte 0x31004E6F
	.4byte 0x48656164
	.4byte 0x5265706C
	.4byte 0x61636530
	.4byte 0x31004E6F
	.4byte 0x48656164
	.4byte 0x48697430
	.4byte 0x31004672
	.4byte 0x65657A65
	.4byte 0x30310046
	.4byte 0x75646765
	.4byte 0x4A756D70
	.4byte 0x30310046
	.4byte 0x75646765
	.4byte 0x426C6F77
	.4byte 0x30310046
	.4byte 0x75646765
	.4byte 0x446F6E65
	.4byte 0x3031004C
	.4byte 0x69636B30
	.4byte 0x31005370
	.4byte 0x69743031
	.4byte 0x00537069
	.4byte 0x74303200
	.4byte 0x53706177
	.4byte 0x6E303100
	.4byte 0x5370696E
	.4byte 0x42656769
	.4byte 0x6E303100
	.4byte 0x5370696E
	.4byte 0x6E696E67
	.4byte 0x30310053
	.4byte 0x70696E53
	.4byte 0x746F7030
	.4byte 0x31004469
	.4byte 0x7A7A7946
	.4byte 0x616C6C30
	.4byte 0x31004469
	.4byte 0x7A7A7953
	.4byte 0x69743031
	.4byte 0x00536D61
	.4byte 0x73685374
	.4byte 0x61727400
	.4byte 0x536D6173
	.4byte 0x684C6F6F
	.4byte 0x7000536D
	.4byte 0x61736845
	.4byte 0x6E640041
	.4byte 0x74746163
	.4byte 0x6B53746F
	.4byte 0x6D700041
	.4byte 0x74746163
	.4byte 0x6B52756D
	.4byte 0x626C6500
	.4byte 0x536D6173
	.4byte 0x68486974
	.4byte 0x4C656674
	.4byte 0x00536D61
	.4byte 0x73684869
	.4byte 0x74526967
	.4byte 0x68740053
	.4byte 0x6D61636B
	.4byte 0x4C656674
	.4byte 0x30310053
	.4byte 0x6D61636B
	.4byte 0x52696768
	.4byte 0x74303100
	.4byte 0x43686F70
	.4byte 0x4C656674
	.4byte 0x42656769
	.4byte 0x6E004368
	.4byte 0x6F704C65
	.4byte 0x66744C6F
	.4byte 0x6F700043
	.4byte 0x686F704C
	.4byte 0x65667445
	.4byte 0x6E640043
	.4byte 0x686F7052
	.4byte 0x69676874
	.4byte 0x42656769
	.4byte 0x6E004368
	.4byte 0x6F705269
	.4byte 0x6768744C
	.4byte 0x6F6F7000
	.4byte 0x43686F70
	.4byte 0x52696768
	.4byte 0x74456E64
	.4byte 0x00537769
	.4byte 0x70654C65
	.4byte 0x66744265
	.4byte 0x67696E00
	.4byte 0x53776970
	.4byte 0x654C6566
	.4byte 0x744C6F6F
	.4byte 0x70005377
	.4byte 0x6970654C
	.4byte 0x65667445
.L_8026CE24:
	.4byte 0x6E640053
	.4byte 0x77697065
	.4byte 0x52696768
	.4byte 0x74426567
	.4byte 0x696E0053
	.4byte 0x77697065
	.4byte 0x52696768
	.4byte 0x744C6F6F
	.4byte 0x70005377
	.4byte 0x69706552
	.4byte 0x69676874
	.4byte 0x456E6400
	.4byte 0x52657475
	.4byte 0x726E4964
	.4byte 0x6C653031
	.4byte 0x004B6172
	.4byte 0x61746553
	.4byte 0x74617274
	.4byte 0x004B6172
	.4byte 0x6174654C
	.4byte 0x6F6F7000
	.4byte 0x4B617261
	.4byte 0x7465456E
	.4byte 0x64006D6F
	.4byte 0x76650073
	.4byte 0x74756E5F
	.4byte 0x62656769
	.4byte 0x6E007374
	.4byte 0x756E5F6C
	.4byte 0x6F6F7000
	.4byte 0x7374756E
	.4byte 0x5F656E64
	.4byte 0x00617474
	.4byte 0x61636B5F
	.4byte 0x6265616D
	.4byte 0x5F626567
	.4byte 0x696E0061
	.4byte 0x74746163
	.4byte 0x6B5F6265
	.4byte 0x616D5F6C
	.4byte 0x6F6F7000
	.4byte 0x61747461
	.4byte 0x636B5F62
	.4byte 0x65616D5F
	.4byte 0x656E6400
	.4byte 0x61747461
	.4byte 0x636B5F77
	.4byte 0x616C6C5F
	.4byte 0x62656769
	.4byte 0x6E006174
	.4byte 0x7461636B
	.4byte 0x5F77616C
	.4byte 0x6C5F6C6F
	.4byte 0x6F700061
	.4byte 0x74746163
	.4byte 0x6B5F7761
	.4byte 0x6C6C5F65
	.4byte 0x6E640061
	.4byte 0x74746163
	.4byte 0x6B5F6D69
	.4byte 0x73736C65
	.4byte 0x00617474
	.4byte 0x61636B5F
	.4byte 0x626F6D62
	.4byte 0x007A4E50
	.4byte 0x4342426F
	.4byte 0x62627941
	.4byte 0x726D0050
	.4byte 0x4152454D
	.4byte 0x49545F43
	.4byte 0x4C4F5544
	.byte 0x00
.endobj "@stringBase0"
	.4byte 0x00000000
	.byte 0x00, 0x00, 0x00

# 0x80299268 - 0x802995B0
.data
.balign 8

.obj g_hash_bossanim, global
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
.endobj g_hash_bossanim

.obj g_strz_bossanim, global
	.4byte "@stringBase0"
	.4byte "@stringBase0"+0x8
	.4byte "@stringBase0"+0xF
	.4byte "@stringBase0"+0x16
	.4byte "@stringBase0"+0x1E
	.4byte "@stringBase0"+0x24
	.4byte "@stringBase0"+0x2B
	.4byte "@stringBase0"+0x33
	.4byte "@stringBase0"+0x39
	.4byte "@stringBase0"+0x3F
	.4byte "@stringBase0"+0x47
	.4byte "@stringBase0"+0x4F
	.4byte "@stringBase0"+0x5B
	.4byte "@stringBase0"+0x62
	.4byte "@stringBase0"+0x69
	.4byte "@stringBase0"+0x70
	.4byte "@stringBase0"+0x77
	.4byte "@stringBase0"+0x7D
	.4byte "@stringBase0"+0x88
	.4byte "@stringBase0"+0x92
	.4byte "@stringBase0"+0x9B
	.4byte "@stringBase0"+0xA3
	.4byte "@stringBase0"+0xB0
	.4byte "@stringBase0"+0xBF
	.4byte "@stringBase0"+0xCD
	.4byte "@stringBase0"+0xDC
	.4byte "@stringBase0"+0xEA
	.4byte "@stringBase0"+0xFA
	.4byte "@stringBase0"+0x106
	.4byte "@stringBase0"+0x10F
	.4byte "@stringBase0"+0x11B
	.4byte "@stringBase0"+0x127
	.4byte "@stringBase0"+0x133
	.4byte "@stringBase0"+0x13A
	.4byte "@stringBase0"+0x141
	.4byte "@stringBase0"+0x148
	.4byte "@stringBase0"+0x150
	.4byte "@stringBase0"+0x15C
	.4byte "@stringBase0"+0x167
	.4byte "@stringBase0"+0x172
	.4byte "@stringBase0"+0x17E
	.4byte "@stringBase0"+0x189
	.4byte "@stringBase0"+0x194
	.4byte "@stringBase0"+0x19E
	.4byte "@stringBase0"+0x1A7
	.4byte "@stringBase0"+0x1B3
	.4byte "@stringBase0"+0x1C0
	.4byte "@stringBase0"+0x1CD
	.4byte "@stringBase0"+0x1DB
	.4byte "@stringBase0"+0x1E7
	.4byte "@stringBase0"+0x1F4
	.4byte "@stringBase0"+0x202
	.4byte "@stringBase0"+0x20F
	.4byte "@stringBase0"+0x21B
	.4byte "@stringBase0"+0x22A
	.4byte "@stringBase0"+0x238
	.4byte "@stringBase0"+0x245
	.4byte "@stringBase0"+0x254
	.4byte "@stringBase0"+0x262
	.4byte "@stringBase0"+0x26F
	.4byte "@stringBase0"+0x27F
	.4byte "@stringBase0"+0x28E
	.4byte "@stringBase0"+0x29C
	.4byte "@stringBase0"+0x2A9
	.4byte "@stringBase0"+0x2B5
	.4byte "@stringBase0"+0x2C0
	.4byte "@stringBase0"+0x2CA
	.4byte "@stringBase0"+0x2CF
	.4byte "@stringBase0"+0x2DA
	.4byte "@stringBase0"+0x2E4
	.4byte "@stringBase0"+0x2ED
	.4byte "@stringBase0"+0x2FF
	.4byte "@stringBase0"+0x310
	.4byte "@stringBase0"+0x320
	.4byte "@stringBase0"+0x332
	.4byte "@stringBase0"+0x343
	.4byte "@stringBase0"+0x353
	.4byte "@stringBase0"+0x361
.endobj g_strz_bossanim

# zNPCBoss::__vtable
.obj __vt__8zNPCBoss, global
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte Init__10zNPCCommonFP9xEntAsset
	.4byte PostInit__9xNPCBasicFv
	.4byte Setup__8zNPCBossFv
	.4byte PostSetup__9xNPCBasicFv
	.4byte Reset__10zNPCCommonFv
	.4byte Process__10zNPCCommonFP6xScenef
	.4byte BUpdate__10zNPCCommonFP5xVec3
	.4byte NewTime__10zNPCCommonFP6xScenef
	.4byte Move__10zNPCCommonFP6xScenefP9xEntFrame
	.4byte SysEvent__10zNPCCommonFP5xBaseP5xBaseUiPCfP5xBasePi
	.4byte Render__9xNPCBasicFv
	.4byte Save__9xNPCBasicCFP7xSerial
	.4byte Load__9xNPCBasicFP7xSerial
	.4byte CollideReview__10zNPCCommonFv
	.4byte ColChkFlags__8zNPCBossCFv
	.4byte ColPenFlags__8zNPCBossCFv
	.4byte ColChkByFlags__8zNPCBossCFv
	.4byte ColPenByFlags__8zNPCBossCFv
	.4byte PhysicsFlags__8zNPCBossCFv
	.4byte Destroy__10zNPCCommonFv
	.4byte NPCMessage__10zNPCCommonFP6NPCMsg
	.4byte RenderExtra__10zNPCCommonFv
	.4byte RenderExtraPostParticles__10zNPCCommonFv
	.4byte ParseINI__10zNPCCommonFv
	.4byte ParseLinks__10zNPCCommonFv
	.4byte ParseProps__10zNPCCommonFv
	.4byte SelfSetup__10zNPCCommonFv
	.4byte SelfDestroy__10zNPCCommonFv
	.4byte IsHealthy__10zNPCCommonFv
	.4byte IsAlive__10zNPCCommonFv
	.4byte Damage__10zNPCCommonF18en_NPC_DAMAGE_TYPEP5xBasePC5xVec3
	.4byte Respawn__10zNPCCommonFPC5xVec3P10zMovePointP10zMovePoint
	.4byte DuploOwner__10zNPCCommonFP10zNPCCommon
	.4byte DuploNotice__10zNPCCommonF13en_SM_NOTICESPv
	.4byte CanRope__10zNPCCommonFv
	.4byte LassoNotify__10zNPCCommonF14en_LASSO_EVENT
	.4byte SetCarryState__10zNPCCommonF18en_NPC_CARRY_STATE
	.4byte Stun__10zNPCCommonFf
	.4byte SpeakBegin__10zNPCCommonFv
	.4byte SpeakEnd__10zNPCCommonFv
	.4byte SpeakStart__10zNPCCommonFUiUii
	.4byte SpeakStop__10zNPCCommonFv
	.4byte AnimPick__10zNPCCommonFi16en_NPC_GOAL_SPOTP5xGoal
	.4byte GetParm__10zNPCCommonF10en_npcparmPv
	.4byte GetParmDefault__10zNPCCommonF10en_npcparmPv
	.4byte GenShadCacheRad__10zNPCCommonFv
	.4byte PRIV_GetDriverData__10zNPCCommonFv
	.4byte PRIV_GetLassoData__10zNPCCommonFv
	.4byte LassoSetup__10zNPCCommonFv
	.4byte AttackTimeLeft__8zNPCBossFv
	.4byte HoldUpDude__8zNPCBossFv
	.4byte ThanksImDone__8zNPCBossFv
.endobj __vt__8zNPCBoss

# 0x80324468 - 0x803245D8
.section .bss, "wa", @nobits
.balign 8

.obj g_parf_holder, local
	.skip 0x16C
.endobj g_parf_holder
	.skip 0x4

# 0x803CBF40 - 0x803CBF48
.section .sbss, "wa", @nobits
.balign 8

.obj g_boss_is_in_the_house, local
	.skip 0x4
.endobj g_boss_is_in_the_house

.obj g_pemit_holder, local
	.skip 0x4
.endobj g_pemit_holder

# 0x803CED08 - 0x803CED20
.section .sdata2, "a"
.balign 8

.obj "@917", local
	.4byte 0x00000001
	.4byte 0x00000000
.endobj "@917"

.obj "@920", local
	.4byte 0x3F800000
.endobj "@920"

.obj "@921", local
	.4byte 0x00000000
.endobj "@921"

.obj "@922", local
	.4byte 0x3E4CCCCD
.endobj "@922"

.obj "@947", local
	.4byte 0x7E967699
.endobj "@947"
