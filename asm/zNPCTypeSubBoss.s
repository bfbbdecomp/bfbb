.include "macros.inc"
.file "zNPCTypeSubBoss.cpp"

# 0x80135EA0 - 0x801360C8
.text
.balign 4

# ZNPC_SubBoss_Startup()
.fn ZNPC_SubBoss_Startup__Fv, global
/* 80135EA0 00132F80  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 80135EA4 00132F84  7C 08 02 A6 */	mflr r0
/* 80135EA8 00132F88  3C 80 80 2A */	lis r4, g_strz_subbanim@ha
/* 80135EAC 00132F8C  3C 60 80 2A */	lis r3, g_hash_subbanim@ha
/* 80135EB0 00132F90  90 01 00 24 */	stw r0, 0x24(r1)
/* 80135EB4 00132F94  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 80135EB8 00132F98  3B E4 91 3C */	addi r31, r4, g_strz_subbanim@l
/* 80135EBC 00132F9C  93 C1 00 18 */	stw r30, 0x18(r1)
/* 80135EC0 00132FA0  3B C3 90 E0 */	addi r30, r3, g_hash_subbanim@l
/* 80135EC4 00132FA4  93 A1 00 14 */	stw r29, 0x14(r1)
/* 80135EC8 00132FA8  3B A0 00 00 */	li r29, 0x0
.L_80135ECC:
/* 80135ECC 00132FAC  80 7F 00 00 */	lwz r3, 0x0(r31)
/* 80135ED0 00132FB0  4B F1 63 45 */	bl xStrHash__FPCc
/* 80135ED4 00132FB4  3B BD 00 01 */	addi r29, r29, 0x1
/* 80135ED8 00132FB8  90 7E 00 00 */	stw r3, 0x0(r30)
/* 80135EDC 00132FBC  2C 1D 00 17 */	cmpwi r29, 0x17
/* 80135EE0 00132FC0  3B FF 00 04 */	addi r31, r31, 0x4
/* 80135EE4 00132FC4  3B DE 00 04 */	addi r30, r30, 0x4
/* 80135EE8 00132FC8  41 80 FF E4 */	blt .L_80135ECC
/* 80135EEC 00132FCC  80 01 00 24 */	lwz r0, 0x24(r1)
/* 80135EF0 00132FD0  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 80135EF4 00132FD4  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 80135EF8 00132FD8  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 80135EFC 00132FDC  7C 08 03 A6 */	mtlr r0
/* 80135F00 00132FE0  38 21 00 20 */	addi r1, r1, 0x20
/* 80135F04 00132FE4  4E 80 00 20 */	blr
.endfn ZNPC_SubBoss_Startup__Fv

# ZNPC_SubBoss_Shutdown()
.fn ZNPC_SubBoss_Shutdown__Fv, global
/* 80135F08 00132FE8  4E 80 00 20 */	blr
.endfn ZNPC_SubBoss_Shutdown__Fv

# zNPCSubBoss_ScenePrepare()
.fn zNPCSubBoss_ScenePrepare__Fv, global
/* 80135F0C 00132FEC  38 00 00 01 */	li r0, 0x1
/* 80135F10 00132FF0  90 0D 96 38 */	stw r0, g_contract_for_hire@sda21(r13)
/* 80135F14 00132FF4  4E 80 00 20 */	blr
.endfn zNPCSubBoss_ScenePrepare__Fv

# zNPCSubBoss_SceneFinish()
.fn zNPCSubBoss_SceneFinish__Fv, global
/* 80135F18 00132FF8  38 00 00 00 */	li r0, 0x0
/* 80135F1C 00132FFC  90 0D 96 38 */	stw r0, g_contract_for_hire@sda21(r13)
/* 80135F20 00133000  4E 80 00 20 */	blr
.endfn zNPCSubBoss_SceneFinish__Fv

# ZNPC_Create_SubBoss(int, RyzMemGrow*, void*)
.fn ZNPC_Create_SubBoss__FiP10RyzMemGrowPv, global
/* 80135F24 00133004  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80135F28 00133008  7C 08 02 A6 */	mflr r0
/* 80135F2C 0013300C  3C C0 4E 54 */	lis r6, 0x4e54
/* 80135F30 00133010  7C 85 23 78 */	mr r5, r4
/* 80135F34 00133014  90 01 00 14 */	stw r0, 0x14(r1)
/* 80135F38 00133018  38 06 48 31 */	addi r0, r6, 0x4831
/* 80135F3C 0013301C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80135F40 00133020  7C 7F 1B 78 */	mr r31, r3
/* 80135F44 00133024  7C 1F 00 00 */	cmpw r31, r0
/* 80135F48 00133028  41 82 00 50 */	beq .L_80135F98
/* 80135F4C 0013302C  40 80 00 14 */	bge .L_80135F60
/* 80135F50 00133030  38 06 48 30 */	addi r0, r6, 0x4830
/* 80135F54 00133034  7C 1F 00 00 */	cmpw r31, r0
/* 80135F58 00133038  40 80 00 18 */	bge .L_80135F70
/* 80135F5C 0013303C  48 00 00 8C */	b .L_80135FE8
.L_80135F60:
/* 80135F60 00133040  38 06 48 33 */	addi r0, r6, 0x4833
/* 80135F64 00133044  7C 1F 00 00 */	cmpw r31, r0
/* 80135F68 00133048  40 80 00 80 */	bge .L_80135FE8
/* 80135F6C 0013304C  48 00 00 54 */	b .L_80135FC0
.L_80135F70:
/* 80135F70 00133050  7F E4 FB 78 */	mr r4, r31
/* 80135F74 00133054  38 60 10 B8 */	li r3, 0x10b8
/* 80135F78 00133058  4B FD 91 D9 */	bl __nw__10RyzMemDataFUliP10RyzMemGrow
/* 80135F7C 0013305C  7C 60 1B 79 */	mr. r0, r3
/* 80135F80 00133060  41 82 00 10 */	beq .L_80135F90
/* 80135F84 00133064  7F E4 FB 78 */	mr r4, r31
/* 80135F88 00133068  48 01 1A 65 */	bl __ct__13zNPCKingJellyFi
/* 80135F8C 0013306C  7C 60 1B 78 */	mr r0, r3
.L_80135F90:
/* 80135F90 00133070  7C 03 03 78 */	mr r3, r0
/* 80135F94 00133074  48 00 00 78 */	b .L_8013600C
.L_80135F98:
/* 80135F98 00133078  7F E4 FB 78 */	mr r4, r31
/* 80135F9C 0013307C  38 60 06 4C */	li r3, 0x64c
/* 80135FA0 00133080  4B FD 91 B1 */	bl __nw__10RyzMemDataFUliP10RyzMemGrow
/* 80135FA4 00133084  7C 60 1B 79 */	mr. r0, r3
/* 80135FA8 00133088  41 82 00 10 */	beq .L_80135FB8
/* 80135FAC 0013308C  7F E4 FB 78 */	mr r4, r31
/* 80135FB0 00133090  48 03 D0 69 */	bl __ct__12zNPCDutchmanFi
/* 80135FB4 00133094  7C 60 1B 78 */	mr r0, r3
.L_80135FB8:
/* 80135FB8 00133098  7C 03 03 78 */	mr r3, r0
/* 80135FBC 0013309C  48 00 00 50 */	b .L_8013600C
.L_80135FC0:
/* 80135FC0 001330A0  7F E4 FB 78 */	mr r4, r31
/* 80135FC4 001330A4  38 60 14 24 */	li r3, 0x1424
/* 80135FC8 001330A8  4B FD 91 89 */	bl __nw__10RyzMemDataFUliP10RyzMemGrow
/* 80135FCC 001330AC  7C 60 1B 79 */	mr. r0, r3
/* 80135FD0 001330B0  41 82 00 10 */	beq .L_80135FE0
/* 80135FD4 001330B4  7F E4 FB 78 */	mr r4, r31
/* 80135FD8 001330B8  48 01 A6 E1 */	bl __ct__9zNPCPrawnFi
/* 80135FDC 001330BC  7C 60 1B 78 */	mr r0, r3
.L_80135FE0:
/* 80135FE0 001330C0  7C 03 03 78 */	mr r3, r0
/* 80135FE4 001330C4  48 00 00 28 */	b .L_8013600C
.L_80135FE8:
/* 80135FE8 001330C8  7F E4 FB 78 */	mr r4, r31
/* 80135FEC 001330CC  38 60 02 B4 */	li r3, 0x2b4
/* 80135FF0 001330D0  4B FD 91 61 */	bl __nw__10RyzMemDataFUliP10RyzMemGrow
/* 80135FF4 001330D4  7C 60 1B 79 */	mr. r0, r3
/* 80135FF8 001330D8  41 82 00 10 */	beq .L_80136008
/* 80135FFC 001330DC  7F E4 FB 78 */	mr r4, r31
/* 80136000 001330E0  48 00 00 C9 */	bl __ct__11zNPCSubBossFi
/* 80136004 001330E4  7C 60 1B 78 */	mr r0, r3
.L_80136008:
/* 80136008 001330E8  7C 03 03 78 */	mr r3, r0
.L_8013600C:
/* 8013600C 001330EC  28 03 00 00 */	cmplwi r3, 0x0
/* 80136010 001330F0  41 82 00 08 */	beq .L_80136018
/* 80136014 001330F4  38 63 00 D0 */	addi r3, r3, 0xd0
.L_80136018:
/* 80136018 001330F8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8013601C 001330FC  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80136020 00133100  7C 08 03 A6 */	mtlr r0
/* 80136024 00133104  38 21 00 10 */	addi r1, r1, 0x10
/* 80136028 00133108  4E 80 00 20 */	blr
.endfn ZNPC_Create_SubBoss__FiP10RyzMemGrowPv

# ZNPC_Destroy_SubBoss(xFactoryInst*)
.fn ZNPC_Destroy_SubBoss__FP12xFactoryInst, global
/* 8013602C 0013310C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80136030 00133110  7C 08 02 A6 */	mflr r0
/* 80136034 00133114  38 80 00 01 */	li r4, 0x1
/* 80136038 00133118  90 01 00 14 */	stw r0, 0x14(r1)
/* 8013603C 0013311C  4B FA 2F 69 */	bl __dt__12xFactoryInstFv
/* 80136040 00133120  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80136044 00133124  7C 08 03 A6 */	mtlr r0
/* 80136048 00133128  38 21 00 10 */	addi r1, r1, 0x10
/* 8013604C 0013312C  4E 80 00 20 */	blr
.endfn ZNPC_Destroy_SubBoss__FP12xFactoryInst

# zNPCSubBoss::Setup()
.fn Setup__11zNPCSubBossFv, global
/* 80136050 00133130  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80136054 00133134  7C 08 02 A6 */	mflr r0
/* 80136058 00133138  90 01 00 14 */	stw r0, 0x14(r1)
/* 8013605C 0013313C  4B FB 94 05 */	bl Setup__10zNPCCommonFv
/* 80136060 00133140  80 0D 96 38 */	lwz r0, g_contract_for_hire@sda21(r13)
/* 80136064 00133144  2C 00 00 00 */	cmpwi r0, 0x0
/* 80136068 00133148  41 82 00 10 */	beq .L_80136078
/* 8013606C 0013314C  38 00 00 00 */	li r0, 0x0
/* 80136070 00133150  90 0D 96 38 */	stw r0, g_contract_for_hire@sda21(r13)
/* 80136074 00133154  48 00 00 15 */	bl SUBB_InitEffects__Fv
.L_80136078:
/* 80136078 00133158  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8013607C 0013315C  7C 08 03 A6 */	mtlr r0
/* 80136080 00133160  38 21 00 10 */	addi r1, r1, 0x10
/* 80136084 00133164  4E 80 00 20 */	blr
.endfn Setup__11zNPCSubBossFv

# SUBB_InitEffects()
.fn SUBB_InitEffects__Fv, global
/* 80136088 00133168  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8013608C 0013316C  7C 08 02 A6 */	mflr r0
/* 80136090 00133170  3C 60 80 27 */	lis r3, "@stringBase0"@ha
/* 80136094 00133174  38 63 CA A8 */	addi r3, r3, "@stringBase0"@l
/* 80136098 00133178  90 01 00 14 */	stw r0, 0x14(r1)
/* 8013609C 0013317C  38 63 00 FE */	addi r3, r3, 0xfe
/* 801360A0 00133180  4B F7 27 A5 */	bl zParEmitterFind__FPCc
/* 801360A4 00133184  3C 80 80 32 */	lis r4, g_parf_holder@ha
/* 801360A8 00133188  90 6D 96 3C */	stw r3, g_pemit_holder@sda21(r13)
/* 801360AC 0013318C  38 64 42 F8 */	addi r3, r4, g_parf_holder@l
/* 801360B0 00133190  38 00 01 00 */	li r0, 0x100
/* 801360B4 00133194  90 03 01 38 */	stw r0, 0x138(r3)
/* 801360B8 00133198  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801360BC 0013319C  7C 08 03 A6 */	mtlr r0
/* 801360C0 001331A0  38 21 00 10 */	addi r1, r1, 0x10
/* 801360C4 001331A4  4E 80 00 20 */	blr
.endfn SUBB_InitEffects__Fv

# 0x801360C8 - 0x8013612C
.section .text, "ax", unique, 1
.balign 4

# zNPCSubBoss::zNPCSubBoss(int)
.fn __ct__11zNPCSubBossFi, weak
/* 801360C8 001331A8  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801360CC 001331AC  7C 08 02 A6 */	mflr r0
/* 801360D0 001331B0  90 01 00 14 */	stw r0, 0x14(r1)
/* 801360D4 001331B4  93 E1 00 0C */	stw r31, 0xc(r1)
/* 801360D8 001331B8  7C 7F 1B 78 */	mr r31, r3
/* 801360DC 001331BC  4B FB E5 19 */	bl __ct__10zNPCCommonFi
/* 801360E0 001331C0  3C 80 80 2A */	lis r4, __vt__11zNPCSubBoss@ha
/* 801360E4 001331C4  7F E3 FB 78 */	mr r3, r31
/* 801360E8 001331C8  38 04 91 98 */	addi r0, r4, __vt__11zNPCSubBoss@l
/* 801360EC 001331CC  90 1F 01 B8 */	stw r0, 0x1b8(r31)
/* 801360F0 001331D0  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 801360F4 001331D4  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801360F8 001331D8  7C 08 03 A6 */	mtlr r0
/* 801360FC 001331DC  38 21 00 10 */	addi r1, r1, 0x10
/* 80136100 001331E0  4E 80 00 20 */	blr
.endfn __ct__11zNPCSubBossFi

# zNPCSubBoss::ColChkFlags() const
.fn ColChkFlags__11zNPCSubBossCFv, weak
/* 80136104 001331E4  38 60 00 00 */	li r3, 0x0
/* 80136108 001331E8  4E 80 00 20 */	blr
.endfn ColChkFlags__11zNPCSubBossCFv

# zNPCSubBoss::ColPenFlags() const
.fn ColPenFlags__11zNPCSubBossCFv, weak
/* 8013610C 001331EC  38 60 00 00 */	li r3, 0x0
/* 80136110 001331F0  4E 80 00 20 */	blr
.endfn ColPenFlags__11zNPCSubBossCFv

# zNPCSubBoss::ColChkByFlags() const
.fn ColChkByFlags__11zNPCSubBossCFv, weak
/* 80136114 001331F4  38 60 00 10 */	li r3, 0x10
/* 80136118 001331F8  4E 80 00 20 */	blr
.endfn ColChkByFlags__11zNPCSubBossCFv

# zNPCSubBoss::ColPenByFlags() const
.fn ColPenByFlags__11zNPCSubBossCFv, weak
/* 8013611C 001331FC  38 60 00 10 */	li r3, 0x10
/* 80136120 00133200  4E 80 00 20 */	blr
.endfn ColPenByFlags__11zNPCSubBossCFv

# zNPCSubBoss::PhysicsFlags() const
.fn PhysicsFlags__11zNPCSubBossCFv, weak
/* 80136124 00133204  38 60 00 03 */	li r3, 0x3
/* 80136128 00133208  4E 80 00 20 */	blr
.endfn PhysicsFlags__11zNPCSubBossCFv

# 0x8026CAA8 - 0x8026CBB8
.rodata
.balign 8

.obj "@stringBase0", local
	.4byte 0x556E6B6E
	.4byte 0x6F776E00
.L_8026CAB0:
	.4byte 0x49646C65
	.byte 0x30, 0x31, 0x00
.L_8026CAB7:
	.4byte 0x49646C65
	.byte 0x30, 0x32, 0x00
.L_8026CABE:
	.4byte 0x49646C65
	.byte 0x30, 0x33, 0x00
.L_8026CAC5:
	.4byte 0x46696467
	.4byte 0x65743031
	.byte 0x00
.L_8026CACE:
	.4byte 0x46696467
	.4byte 0x65743032
	.byte 0x00
.L_8026CAD7:
	.4byte 0x46696467
	.4byte 0x65743033
	.byte 0x00
.L_8026CAE0:
	.4byte 0x5461756E
	.4byte 0x74303100
.L_8026CAE8:
	.4byte 0x41747461
	.4byte 0x636B3031
	.byte 0x00
.L_8026CAF1:
	.4byte 0x44616D61
	.4byte 0x67653031
	.byte 0x00
.L_8026CAFA:
	.4byte 0x44616D61
	.4byte 0x67653032
	.byte 0x00
.L_8026CB03:
	.4byte 0x44656174
	.4byte 0x68303100
.L_8026CB0B:
	.4byte 0x41747461
	.4byte 0x636B5769
	.4byte 0x6E647570
	.byte 0x30, 0x31, 0x00
.L_8026CB1A:
	.4byte 0x41747461
	.4byte 0x636B4C6F
	.4byte 0x6F703031
	.byte 0x00
.L_8026CB27:
	.4byte 0x41747461
	.4byte 0x636B456E
	.4byte 0x64303100
.L_8026CB33:
	.4byte 0x53706177
	.4byte 0x6E4B6964
	.4byte 0x73303100
.L_8026CB3F:
	.4byte 0x41747461
	.4byte 0x636B3032
	.4byte 0x57696E64
	.4byte 0x75703031
	.byte 0x00
.L_8026CB50:
	.4byte 0x41747461
	.4byte 0x636B3032
	.4byte 0x4C6F6F70
	.byte 0x30, 0x31, 0x00
.L_8026CB5F:
	.4byte 0x41747461
	.4byte 0x636B3032
	.4byte 0x456E6430
	.2byte 0x3100
.L_8026CB6D:
	.4byte 0x4C617373
	.4byte 0x6F477261
	.4byte 0x62303100
.L_8026CB79:
	.4byte 0x4C617373
	.4byte 0x6F486F6C
	.4byte 0x644C6566
	.4byte 0x74303100
.L_8026CB89:
	.4byte 0x4C617373
	.4byte 0x6F486F6C
	.4byte 0x64526967
	.4byte 0x68743031
	.byte 0x00
.L_8026CB9A:
	.4byte 0x4C617373
	.4byte 0x6F467265
	.4byte 0x65303100
	.4byte 0x50415245
	.4byte 0x4D49545F
	.4byte 0x434C4F55
	.2byte 0x4400
.endobj "@stringBase0"
	.4byte 0x00000000

# 0x802990E0 - 0x80299268
.data
.balign 8

.obj g_hash_subbanim, global
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
.endobj g_hash_subbanim

.obj g_strz_subbanim, global
	.4byte "@stringBase0"
	.rel "@stringBase0", .L_8026CAB0
	.rel "@stringBase0", .L_8026CAB7
	.rel "@stringBase0", .L_8026CABE
	.rel "@stringBase0", .L_8026CAC5
	.rel "@stringBase0", .L_8026CACE
	.rel "@stringBase0", .L_8026CAD7
	.rel "@stringBase0", .L_8026CAE0
	.rel "@stringBase0", .L_8026CAE8
	.rel "@stringBase0", .L_8026CAF1
	.rel "@stringBase0", .L_8026CAFA
	.rel "@stringBase0", .L_8026CB03
	.rel "@stringBase0", .L_8026CB0B
	.rel "@stringBase0", .L_8026CB1A
	.rel "@stringBase0", .L_8026CB27
	.rel "@stringBase0", .L_8026CB33
	.rel "@stringBase0", .L_8026CB3F
	.rel "@stringBase0", .L_8026CB50
	.rel "@stringBase0", .L_8026CB5F
	.rel "@stringBase0", .L_8026CB6D
	.rel "@stringBase0", .L_8026CB79
	.rel "@stringBase0", .L_8026CB89
	.rel "@stringBase0", .L_8026CB9A
.endobj g_strz_subbanim

# zNPCSubBoss::__vtable
.obj __vt__11zNPCSubBoss, global
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte Init__10zNPCCommonFP9xEntAsset
	.4byte PostInit__9xNPCBasicFv
	.4byte Setup__11zNPCSubBossFv
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
	.4byte ColChkFlags__11zNPCSubBossCFv
	.4byte ColPenFlags__11zNPCSubBossCFv
	.4byte ColChkByFlags__11zNPCSubBossCFv
	.4byte ColPenByFlags__11zNPCSubBossCFv
	.4byte PhysicsFlags__11zNPCSubBossCFv
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
.endobj __vt__11zNPCSubBoss
	.4byte 0x00000000

# 0x803242F8 - 0x80324468
.section .bss, "wa", @nobits
.balign 8

.obj g_parf_holder, local
	.skip 0x16C
.endobj g_parf_holder
	.skip 0x4

# 0x803CBF38 - 0x803CBF40
.section .sbss, "wa", @nobits
.balign 8

.obj g_contract_for_hire, local
	.skip 0x4
.endobj g_contract_for_hire

.obj g_pemit_holder, local
	.skip 0x4
.endobj g_pemit_holder
