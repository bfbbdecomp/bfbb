.include "macros.inc"
.file "zNPCTypes.cpp"

# 0x800EED74 - 0x800EEE4C
.text
.balign 4

# zNPCTypes_StartupTypes()
.fn zNPCTypes_StartupTypes__Fv, global
/* 800EED74 000EBE54  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 800EED78 000EBE58  7C 08 02 A6 */	mflr r0
/* 800EED7C 000EBE5C  90 01 00 14 */	stw r0, 0x14(r1)
/* 800EED80 000EBE60  48 00 01 65 */	bl ZNPC_Common_Startup__Fv
/* 800EED84 000EBE64  48 00 5C E9 */	bl ZNPC_Robot_Startup__Fv
/* 800EED88 000EBE68  48 01 A8 01 */	bl ZNPC_Tiki_Startup__Fv
/* 800EED8C 000EBE6C  48 03 64 31 */	bl ZNPC_Duplotron_Startup__Fv
/* 800EED90 000EBE70  48 01 3E 9D */	bl ZNPC_Villager_Startup__Fv
/* 800EED94 000EBE74  48 01 8A 0D */	bl ZNPC_Ambient_Startup__Fv
/* 800EED98 000EBE78  48 04 71 09 */	bl ZNPC_SubBoss_Startup__Fv
/* 800EED9C 000EBE7C  48 04 73 91 */	bl ZNPC_Boss_Startup__Fv
/* 800EEDA0 000EBE80  48 04 6D 2D */	bl ZNPC_Test_Startup__Fv
/* 800EEDA4 000EBE84  80 01 00 14 */	lwz r0, 0x14(r1)
/* 800EEDA8 000EBE88  7C 08 03 A6 */	mtlr r0
/* 800EEDAC 000EBE8C  38 21 00 10 */	addi r1, r1, 0x10
/* 800EEDB0 000EBE90  4E 80 00 20 */	blr
.endfn zNPCTypes_StartupTypes__Fv

# zNPCTypes_ShutdownTypes()
.fn zNPCTypes_ShutdownTypes__Fv, global
/* 800EEDB4 000EBE94  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 800EEDB8 000EBE98  7C 08 02 A6 */	mflr r0
/* 800EEDBC 000EBE9C  90 01 00 14 */	stw r0, 0x14(r1)
/* 800EEDC0 000EBEA0  48 04 6D 75 */	bl ZNPC_Test_Shutdown__Fv
/* 800EEDC4 000EBEA4  48 04 73 D1 */	bl ZNPC_Boss_Shutdown__Fv
/* 800EEDC8 000EBEA8  48 04 71 41 */	bl ZNPC_SubBoss_Shutdown__Fv
/* 800EEDCC 000EBEAC  48 01 8A 3D */	bl ZNPC_Ambient_Shutdown__Fv
/* 800EEDD0 000EBEB0  48 01 3E F1 */	bl ZNPC_Villager_Shutdown__Fv
/* 800EEDD4 000EBEB4  48 03 64 51 */	bl ZNPC_Duplotron_Shutdown__Fv
/* 800EEDD8 000EBEB8  48 01 A8 11 */	bl ZNPC_Tiki_Shutdown__Fv
/* 800EEDDC 000EBEBC  48 00 5D E5 */	bl ZNPC_Robot_Shutdown__Fv
/* 800EEDE0 000EBEC0  48 00 01 7D */	bl ZNPC_Common_Shutdown__Fv
/* 800EEDE4 000EBEC4  80 01 00 14 */	lwz r0, 0x14(r1)
/* 800EEDE8 000EBEC8  7C 08 03 A6 */	mtlr r0
/* 800EEDEC 000EBECC  38 21 00 10 */	addi r1, r1, 0x10
/* 800EEDF0 000EBED0  4E 80 00 20 */	blr
.endfn zNPCTypes_ShutdownTypes__Fv

# zNPCTypes_RegisterTypes(xFactory*)
.fn zNPCTypes_RegisterTypes__FP8xFactory, global
/* 800EEDF4 000EBED4  94 21 FC A0 */	stwu r1, -0x360(r1)
/* 800EEDF8 000EBED8  7C 08 02 A6 */	mflr r0
/* 800EEDFC 000EBEDC  3C 80 80 27 */	lis r4, "@797"@ha
/* 800EEE00 000EBEE0  90 01 03 64 */	stw r0, 0x364(r1)
/* 800EEE04 000EBEE4  38 84 88 D0 */	addi r4, r4, "@797"@l
/* 800EEE08 000EBEE8  38 00 00 6A */	li r0, 0x6a
/* 800EEE0C 000EBEEC  38 C1 00 04 */	addi r6, r1, 0x4
/* 800EEE10 000EBEF0  38 A4 FF FC */	addi r5, r4, -0x4
/* 800EEE14 000EBEF4  7C 09 03 A6 */	mtctr r0
.L_800EEE18:
/* 800EEE18 000EBEF8  80 85 00 04 */	lwz r4, 0x4(r5)
/* 800EEE1C 000EBEFC  84 05 00 08 */	lwzu r0, 0x8(r5)
/* 800EEE20 000EBF00  90 86 00 04 */	stw r4, 0x4(r6)
/* 800EEE24 000EBF04  94 06 00 08 */	stwu r0, 0x8(r6)
/* 800EEE28 000EBF08  42 00 FF F0 */	bdnz .L_800EEE18
/* 800EEE2C 000EBF0C  80 05 00 04 */	lwz r0, 0x4(r5)
/* 800EEE30 000EBF10  38 81 00 08 */	addi r4, r1, 0x8
/* 800EEE34 000EBF14  90 06 00 04 */	stw r0, 0x4(r6)
/* 800EEE38 000EBF18  48 02 05 71 */	bl RegItemType__8xFactoryFP12XGOFTypeInfo
/* 800EEE3C 000EBF1C  80 01 03 64 */	lwz r0, 0x364(r1)
/* 800EEE40 000EBF20  7C 08 03 A6 */	mtlr r0
/* 800EEE44 000EBF24  38 21 03 60 */	addi r1, r1, 0x360
/* 800EEE48 000EBF28  4E 80 00 20 */	blr
.endfn zNPCTypes_RegisterTypes__FP8xFactory

# 0x802688D0 - 0x80268C28
.rodata
.balign 8

.obj "@797", local
	.4byte 0x4E543031
	.4byte ZNPC_Create_Common__FiP10RyzMemGrowPv
	.4byte ZNPC_Destroy_Common__FP12xFactoryInst
	.4byte 0x4E545330
	.4byte ZNPC_Create_Ambient__FiP10RyzMemGrowPv
	.4byte ZNPC_Destroy_Ambient__FP12xFactoryInst
	.4byte 0x4E545331
	.4byte ZNPC_Create_Villager__FiP10RyzMemGrowPv
	.4byte ZNPC_Destroy_Villager__FP12xFactoryInst
	.4byte 0x4E545332
	.4byte ZNPC_Create_Robot__FiP10RyzMemGrowPv
	.4byte ZNPC_Destroy_Robot__FP12xFactoryInst
	.4byte 0x4E545334
	.4byte ZNPC_Create_Test__FiP10RyzMemGrowPv
	.4byte ZNPC_Destroy_Test__FP12xFactoryInst
	.4byte 0x4E544630
	.4byte ZNPC_Create_Villager__FiP10RyzMemGrowPv
	.4byte ZNPC_Destroy_Villager__FP12xFactoryInst
	.4byte 0x4E544631
	.4byte ZNPC_Create_Villager__FiP10RyzMemGrowPv
	.4byte ZNPC_Destroy_Villager__FP12xFactoryInst
	.4byte 0x4E544632
	.4byte ZNPC_Create_Villager__FiP10RyzMemGrowPv
	.4byte ZNPC_Destroy_Villager__FP12xFactoryInst
	.4byte 0x4E544633
	.4byte ZNPC_Create_Villager__FiP10RyzMemGrowPv
	.4byte ZNPC_Destroy_Villager__FP12xFactoryInst
	.4byte 0x4E544634
	.4byte ZNPC_Create_Villager__FiP10RyzMemGrowPv
	.4byte ZNPC_Destroy_Villager__FP12xFactoryInst
	.4byte 0x4E544635
	.4byte ZNPC_Create_Villager__FiP10RyzMemGrowPv
	.4byte ZNPC_Destroy_Villager__FP12xFactoryInst
	.4byte 0x4E544636
	.4byte ZNPC_Create_Villager__FiP10RyzMemGrowPv
	.4byte ZNPC_Destroy_Villager__FP12xFactoryInst
	.4byte 0x4E544637
	.4byte ZNPC_Create_Villager__FiP10RyzMemGrowPv
	.4byte ZNPC_Destroy_Villager__FP12xFactoryInst
	.4byte 0x4E544638
	.4byte ZNPC_Create_Villager__FiP10RyzMemGrowPv
	.4byte ZNPC_Destroy_Villager__FP12xFactoryInst
	.4byte 0x4E54463E
	.4byte ZNPC_Create_Villager__FiP10RyzMemGrowPv
	.4byte ZNPC_Destroy_Villager__FP12xFactoryInst
	.4byte 0x4E54463F
	.4byte ZNPC_Create_Villager__FiP10RyzMemGrowPv
	.4byte ZNPC_Destroy_Villager__FP12xFactoryInst
	.4byte 0x4E544640
	.4byte ZNPC_Create_Villager__FiP10RyzMemGrowPv
	.4byte ZNPC_Destroy_Villager__FP12xFactoryInst
	.4byte 0x4E544641
	.4byte ZNPC_Create_Villager__FiP10RyzMemGrowPv
	.4byte ZNPC_Destroy_Villager__FP12xFactoryInst
	.4byte 0x4E54463D
	.4byte ZNPC_Create_Villager__FiP10RyzMemGrowPv
	.4byte ZNPC_Destroy_Villager__FP12xFactoryInst
	.4byte 0x4E544639
	.4byte ZNPC_Create_Villager__FiP10RyzMemGrowPv
	.4byte ZNPC_Destroy_Villager__FP12xFactoryInst
	.4byte 0x4E54463A
	.4byte ZNPC_Create_Villager__FiP10RyzMemGrowPv
	.4byte ZNPC_Destroy_Villager__FP12xFactoryInst
	.4byte 0x4E54463B
	.4byte ZNPC_Create_Villager__FiP10RyzMemGrowPv
	.4byte ZNPC_Destroy_Villager__FP12xFactoryInst
	.4byte 0x4E54463C
	.4byte ZNPC_Create_Villager__FiP10RyzMemGrowPv
	.4byte ZNPC_Destroy_Villager__FP12xFactoryInst
	.4byte 0x4E544642
	.4byte ZNPC_Create_Villager__FiP10RyzMemGrowPv
	.4byte ZNPC_Destroy_Villager__FP12xFactoryInst
	.4byte 0x4E544643
	.4byte ZNPC_Create_Villager__FiP10RyzMemGrowPv
	.4byte ZNPC_Destroy_Villager__FP12xFactoryInst
	.4byte 0x4E544644
	.4byte ZNPC_Create_Villager__FiP10RyzMemGrowPv
	.4byte ZNPC_Destroy_Villager__FP12xFactoryInst
	.4byte 0x4E544645
	.4byte ZNPC_Create_Villager__FiP10RyzMemGrowPv
	.4byte ZNPC_Destroy_Villager__FP12xFactoryInst
	.4byte 0x4E544646
	.4byte ZNPC_Create_Villager__FiP10RyzMemGrowPv
	.4byte ZNPC_Destroy_Villager__FP12xFactoryInst
	.4byte 0x4E544647
	.4byte ZNPC_Create_Villager__FiP10RyzMemGrowPv
	.4byte ZNPC_Destroy_Villager__FP12xFactoryInst
	.4byte 0x4E544648
	.4byte ZNPC_Create_Villager__FiP10RyzMemGrowPv
	.4byte ZNPC_Destroy_Villager__FP12xFactoryInst
	.4byte 0x4E54464A
	.4byte ZNPC_Create_Villager__FiP10RyzMemGrowPv
	.4byte ZNPC_Destroy_Villager__FP12xFactoryInst
	.4byte 0x4E54464B
	.4byte ZNPC_Create_Villager__FiP10RyzMemGrowPv
	.4byte ZNPC_Destroy_Villager__FP12xFactoryInst
	.4byte 0x4E544649
	.4byte ZNPC_Create_Villager__FiP10RyzMemGrowPv
	.4byte ZNPC_Destroy_Villager__FP12xFactoryInst
	.4byte 0x4E54464C
	.4byte ZNPC_Create_Villager__FiP10RyzMemGrowPv
	.4byte ZNPC_Destroy_Villager__FP12xFactoryInst
	.4byte 0x4E544130
	.4byte ZNPC_Create_Ambient__FiP10RyzMemGrowPv
	.4byte ZNPC_Destroy_Ambient__FP12xFactoryInst
	.4byte 0x4E544131
	.4byte ZNPC_Create_Ambient__FiP10RyzMemGrowPv
	.4byte ZNPC_Destroy_Ambient__FP12xFactoryInst
	.4byte 0x4E544132
	.4byte ZNPC_Create_Ambient__FiP10RyzMemGrowPv
	.4byte ZNPC_Destroy_Ambient__FP12xFactoryInst
	.4byte 0x4E544133
	.4byte ZNPC_Create_Ambient__FiP10RyzMemGrowPv
	.4byte ZNPC_Destroy_Ambient__FP12xFactoryInst
	.4byte 0x4E544134
	.4byte ZNPC_Create_Ambient__FiP10RyzMemGrowPv
	.4byte ZNPC_Destroy_Ambient__FP12xFactoryInst
	.4byte 0x4E545430
	.4byte ZNPC_Create_Tiki__FiP10RyzMemGrowPv
	.4byte ZNPC_Destroy_Tiki__FP12xFactoryInst
	.4byte 0x4E545431
	.4byte ZNPC_Create_Tiki__FiP10RyzMemGrowPv
	.4byte ZNPC_Destroy_Tiki__FP12xFactoryInst
	.4byte 0x4E545432
	.4byte ZNPC_Create_Tiki__FiP10RyzMemGrowPv
	.4byte ZNPC_Destroy_Tiki__FP12xFactoryInst
	.4byte 0x4E545433
	.4byte ZNPC_Create_Tiki__FiP10RyzMemGrowPv
	.4byte ZNPC_Destroy_Tiki__FP12xFactoryInst
	.4byte 0x4E545434
	.4byte ZNPC_Create_Tiki__FiP10RyzMemGrowPv
	.4byte ZNPC_Destroy_Tiki__FP12xFactoryInst
	.4byte 0x4E545230
	.4byte ZNPC_Create_Robot__FiP10RyzMemGrowPv
	.4byte ZNPC_Destroy_Robot__FP12xFactoryInst
	.4byte 0x4E545231
	.4byte ZNPC_Create_Robot__FiP10RyzMemGrowPv
	.4byte ZNPC_Destroy_Robot__FP12xFactoryInst
	.4byte 0x4E545232
	.4byte ZNPC_Create_Robot__FiP10RyzMemGrowPv
	.4byte ZNPC_Destroy_Robot__FP12xFactoryInst
	.4byte 0x4E545233
	.4byte ZNPC_Create_Robot__FiP10RyzMemGrowPv
	.4byte ZNPC_Destroy_Robot__FP12xFactoryInst
	.4byte 0x4E545234
	.4byte ZNPC_Create_Robot__FiP10RyzMemGrowPv
	.4byte ZNPC_Destroy_Robot__FP12xFactoryInst
	.4byte 0x4E545235
	.4byte ZNPC_Create_Robot__FiP10RyzMemGrowPv
	.4byte ZNPC_Destroy_Robot__FP12xFactoryInst
	.4byte 0x4E545236
	.4byte ZNPC_Create_Robot__FiP10RyzMemGrowPv
	.4byte ZNPC_Destroy_Robot__FP12xFactoryInst
	.4byte 0x4E545237
	.4byte ZNPC_Create_Robot__FiP10RyzMemGrowPv
	.4byte ZNPC_Destroy_Robot__FP12xFactoryInst
	.4byte 0x4E545238
	.4byte ZNPC_Create_Robot__FiP10RyzMemGrowPv
	.4byte ZNPC_Destroy_Robot__FP12xFactoryInst
	.4byte 0x4E545239
	.4byte ZNPC_Create_Robot__FiP10RyzMemGrowPv
	.4byte ZNPC_Destroy_Robot__FP12xFactoryInst
	.4byte 0x4E54523A
	.4byte ZNPC_Create_Robot__FiP10RyzMemGrowPv
	.4byte ZNPC_Destroy_Robot__FP12xFactoryInst
	.4byte 0x4E54523B
	.4byte ZNPC_Create_Robot__FiP10RyzMemGrowPv
	.4byte ZNPC_Destroy_Robot__FP12xFactoryInst
	.4byte 0x4E54523C
	.4byte ZNPC_Create_Robot__FiP10RyzMemGrowPv
	.4byte ZNPC_Destroy_Robot__FP12xFactoryInst
	.4byte 0x4E54523D
	.4byte ZNPC_Create_Robot__FiP10RyzMemGrowPv
	.4byte ZNPC_Destroy_Robot__FP12xFactoryInst
	.4byte 0x4E54523F
	.4byte ZNPC_Create_Robot__FiP10RyzMemGrowPv
	.4byte ZNPC_Destroy_Robot__FP12xFactoryInst
	.4byte 0x4E54523E
	.4byte ZNPC_Create_Robot__FiP10RyzMemGrowPv
	.4byte ZNPC_Destroy_Robot__FP12xFactoryInst
	.4byte 0x4E545240
	.4byte ZNPC_Create_Robot__FiP10RyzMemGrowPv
	.4byte ZNPC_Destroy_Robot__FP12xFactoryInst
	.4byte 0x4E544430
	.4byte ZNPC_Create_Duplotron__FiP10RyzMemGrowPv
	.4byte ZNPC_Destroy_Duplotron__FP12xFactoryInst
	.4byte 0x4E544831
	.4byte ZNPC_Create_SubBoss__FiP10RyzMemGrowPv
	.4byte ZNPC_Destroy_SubBoss__FP12xFactoryInst
	.4byte 0x4E544830
.L_80268BC8:
	.4byte ZNPC_Create_SubBoss__FiP10RyzMemGrowPv
	.4byte ZNPC_Destroy_SubBoss__FP12xFactoryInst
	.4byte 0x4E544832
	.4byte ZNPC_Create_SubBoss__FiP10RyzMemGrowPv
	.4byte ZNPC_Destroy_SubBoss__FP12xFactoryInst
	.4byte 0x4E544230
	.4byte ZNPC_Create_Boss__FiP10RyzMemGrowPv
	.4byte ZNPC_Destroy_Boss__FP12xFactoryInst
	.4byte 0x4E544231
	.4byte ZNPC_Create_Boss__FiP10RyzMemGrowPv
	.4byte ZNPC_Destroy_Boss__FP12xFactoryInst
	.4byte 0x4E544232
	.4byte ZNPC_Create_Boss__FiP10RyzMemGrowPv
	.4byte ZNPC_Destroy_Boss__FP12xFactoryInst
	.4byte 0x4E544233
	.4byte ZNPC_Create_Boss__FiP10RyzMemGrowPv
	.4byte ZNPC_Destroy_Boss__FP12xFactoryInst
	.4byte 0x4E544234
	.4byte ZNPC_Create_Boss__FiP10RyzMemGrowPv
	.4byte ZNPC_Destroy_Boss__FP12xFactoryInst
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
.endobj "@797"
	.4byte 0x00000000
