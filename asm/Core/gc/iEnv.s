.include "macros.inc"
.file "iEnv.cpp"

# 0x800C2EAC - 0x800C3300
.text
.balign 4

# SetPipelineCB(RpAtomic*, void*)
.fn SetPipelineCB__FP8RpAtomicPv, local
/* 800C2EAC 000BFF8C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 800C2EB0 000BFF90  7C 08 02 A6 */	mflr r0
/* 800C2EB4 000BFF94  90 01 00 14 */	stw r0, 0x14(r1)
/* 800C2EB8 000BFF98  93 E1 00 0C */	stw r31, 0xc(r1)
/* 800C2EBC 000BFF9C  7C 9F 23 78 */	mr r31, r4
/* 800C2EC0 000BFFA0  93 C1 00 08 */	stw r30, 0x8(r1)
/* 800C2EC4 000BFFA4  7C 7E 1B 78 */	mr r30, r3
/* 800C2EC8 000BFFA8  80 6D 91 B8 */	lwz r3, sPipeCamera@sda21(r13)
/* 800C2ECC 000BFFAC  48 17 46 E5 */	bl RwCameraBeginUpdate
/* 800C2ED0 000BFFB0  28 03 00 00 */	cmplwi r3, 0x0
/* 800C2ED4 000BFFB4  41 82 00 14 */	beq .L_800C2EE8
/* 800C2ED8 000BFFB8  7F C3 F3 78 */	mr r3, r30
/* 800C2EDC 000BFFBC  48 15 1F 9D */	bl RpAtomicInstance
/* 800C2EE0 000BFFC0  80 6D 91 B8 */	lwz r3, sPipeCamera@sda21(r13)
/* 800C2EE4 000BFFC4  48 17 46 A5 */	bl RwCameraEndUpdate
.L_800C2EE8:
/* 800C2EE8 000BFFC8  28 1F 00 00 */	cmplwi r31, 0x0
/* 800C2EEC 000BFFCC  41 82 00 08 */	beq .L_800C2EF4
/* 800C2EF0 000BFFD0  93 FE 00 6C */	stw r31, 0x6c(r30)
.L_800C2EF4:
/* 800C2EF4 000BFFD4  80 01 00 14 */	lwz r0, 0x14(r1)
/* 800C2EF8 000BFFD8  7F C3 F3 78 */	mr r3, r30
/* 800C2EFC 000BFFDC  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 800C2F00 000BFFE0  83 C1 00 08 */	lwz r30, 0x8(r1)
/* 800C2F04 000BFFE4  7C 08 03 A6 */	mtlr r0
/* 800C2F08 000BFFE8  38 21 00 10 */	addi r1, r1, 0x10
/* 800C2F0C 000BFFEC  4E 80 00 20 */	blr
.endfn SetPipelineCB__FP8RpAtomicPv

# iEnvSetBSP(iEnv*, int, RpWorld*)
.fn iEnvSetBSP__FP4iEnviP7RpWorld, local
/* 800C2F10 000BFFF0  2C 04 00 00 */	cmpwi r4, 0x0
/* 800C2F14 000BFFF4  40 82 00 0C */	bne .L_800C2F20
/* 800C2F18 000BFFF8  90 A3 00 00 */	stw r5, 0x0(r3)
/* 800C2F1C 000BFFFC  4E 80 00 20 */	blr
.L_800C2F20:
/* 800C2F20 000C0000  2C 04 00 01 */	cmpwi r4, 0x1
/* 800C2F24 000C0004  40 82 00 0C */	bne .L_800C2F30
/* 800C2F28 000C0008  90 A3 00 04 */	stw r5, 0x4(r3)
/* 800C2F2C 000C000C  4E 80 00 20 */	blr
.L_800C2F30:
/* 800C2F30 000C0010  2C 04 00 02 */	cmpwi r4, 0x2
/* 800C2F34 000C0014  40 82 00 0C */	bne .L_800C2F40
/* 800C2F38 000C0018  90 A3 00 08 */	stw r5, 0x8(r3)
/* 800C2F3C 000C001C  4E 80 00 20 */	blr
.L_800C2F40:
/* 800C2F40 000C0020  2C 04 00 03 */	cmpwi r4, 0x3
/* 800C2F44 000C0024  4C 82 00 20 */	bnelr
/* 800C2F48 000C0028  90 A3 00 0C */	stw r5, 0xc(r3)
/* 800C2F4C 000C002C  4E 80 00 20 */	blr
.endfn iEnvSetBSP__FP4iEnviP7RpWorld

# iEnvLoad(iEnv*, const void*, unsigned int, int)
.fn iEnvLoad__FP4iEnvPCvUii, global
/* 800C2F50 000C0030  94 21 FF D0 */	stwu r1, -0x30(r1)
/* 800C2F54 000C0034  7C 08 02 A6 */	mflr r0
/* 800C2F58 000C0038  90 01 00 34 */	stw r0, 0x34(r1)
/* 800C2F5C 000C003C  88 04 00 00 */	lbz r0, 0x0(r4)
/* 800C2F60 000C0040  93 E1 00 2C */	stw r31, 0x2c(r1)
/* 800C2F64 000C0044  7C DF 33 78 */	mr r31, r6
/* 800C2F68 000C0048  28 00 00 4A */	cmplwi r0, 0x4a
/* 800C2F6C 000C004C  93 C1 00 28 */	stw r30, 0x28(r1)
/* 800C2F70 000C0050  7C 7E 1B 78 */	mr r30, r3
/* 800C2F74 000C0054  93 A1 00 24 */	stw r29, 0x24(r1)
/* 800C2F78 000C0058  7C 9D 23 78 */	mr r29, r4
/* 800C2F7C 000C005C  7F A5 EB 78 */	mr r5, r29
/* 800C2F80 000C0060  40 82 00 EC */	bne .L_800C306C
/* 800C2F84 000C0064  88 1D 00 01 */	lbz r0, 0x1(r29)
/* 800C2F88 000C0068  28 00 00 53 */	cmplwi r0, 0x53
/* 800C2F8C 000C006C  40 82 00 E0 */	bne .L_800C306C
/* 800C2F90 000C0070  88 1D 00 02 */	lbz r0, 0x2(r29)
/* 800C2F94 000C0074  28 00 00 50 */	cmplwi r0, 0x50
/* 800C2F98 000C0078  40 82 00 D4 */	bne .L_800C306C
/* 800C2F9C 000C007C  88 1D 00 03 */	lbz r0, 0x3(r29)
/* 800C2FA0 000C0080  28 00 00 00 */	cmplwi r0, 0x0
/* 800C2FA4 000C0084  40 82 00 C8 */	bne .L_800C306C
/* 800C2FA8 000C0088  2C 1F 00 00 */	cmpwi r31, 0x0
/* 800C2FAC 000C008C  40 82 00 DC */	bne .L_800C3088
/* 800C2FB0 000C0090  3C 80 80 26 */	lis r4, "@700"@ha
/* 800C2FB4 000C0094  38 61 00 08 */	addi r3, r1, 0x8
/* 800C2FB8 000C0098  39 24 01 30 */	addi r9, r4, "@700"@l
/* 800C2FBC 000C009C  81 09 00 00 */	lwz r8, 0x0(r9)
/* 800C2FC0 000C00A0  80 E9 00 04 */	lwz r7, 0x4(r9)
/* 800C2FC4 000C00A4  80 C9 00 08 */	lwz r6, 0x8(r9)
/* 800C2FC8 000C00A8  80 A9 00 0C */	lwz r5, 0xc(r9)
/* 800C2FCC 000C00AC  80 89 00 10 */	lwz r4, 0x10(r9)
/* 800C2FD0 000C00B0  80 09 00 14 */	lwz r0, 0x14(r9)
/* 800C2FD4 000C00B4  91 01 00 08 */	stw r8, 0x8(r1)
/* 800C2FD8 000C00B8  90 E1 00 0C */	stw r7, 0xc(r1)
/* 800C2FDC 000C00BC  90 C1 00 10 */	stw r6, 0x10(r1)
/* 800C2FE0 000C00C0  90 A1 00 14 */	stw r5, 0x14(r1)
/* 800C2FE4 000C00C4  90 81 00 18 */	stw r4, 0x18(r1)
/* 800C2FE8 000C00C8  90 01 00 1C */	stw r0, 0x1c(r1)
/* 800C2FEC 000C00CC  48 15 A0 B5 */	bl RpWorldCreate
/* 800C2FF0 000C00D0  90 7E 00 00 */	stw r3, 0x0(r30)
/* 800C2FF4 000C00D4  38 60 02 80 */	li r3, 0x280
/* 800C2FF8 000C00D8  38 80 01 E0 */	li r4, 0x1e0
/* 800C2FFC 000C00DC  38 A0 00 00 */	li r5, 0x0
/* 800C3000 000C00E0  4B FF D1 39 */	bl iCameraCreate__Fiii
/* 800C3004 000C00E4  90 6D 91 B8 */	stw r3, sPipeCamera@sda21(r13)
/* 800C3008 000C00E8  80 1E 00 00 */	lwz r0, 0x0(r30)
/* 800C300C 000C00EC  90 0D 91 B4 */	stw r0, sPipeWorld@sda21(r13)
/* 800C3010 000C00F0  80 6D 91 B4 */	lwz r3, sPipeWorld@sda21(r13)
/* 800C3014 000C00F4  80 8D 91 B8 */	lwz r4, sPipeCamera@sda21(r13)
/* 800C3018 000C00F8  48 15 BE DD */	bl RpWorldAddCamera
/* 800C301C 000C00FC  93 BE 00 10 */	stw r29, 0x10(r30)
/* 800C3020 000C0100  3C 60 80 0C */	lis r3, SetPipelineCB__FP8RpAtomicPv@ha
/* 800C3024 000C0104  38 83 2E AC */	addi r4, r3, SetPipelineCB__FP8RpAtomicPv@l
/* 800C3028 000C0108  38 A0 00 00 */	li r5, 0x0
/* 800C302C 000C010C  80 7E 00 10 */	lwz r3, 0x10(r30)
/* 800C3030 000C0110  80 63 00 0C */	lwz r3, 0xc(r3)
/* 800C3034 000C0114  48 14 FF FD */	bl RpClumpForAllAtomics
/* 800C3038 000C0118  80 9E 00 10 */	lwz r4, 0x10(r30)
/* 800C303C 000C011C  80 64 00 10 */	lwz r3, 0x10(r4)
/* 800C3040 000C0120  80 84 00 0C */	lwz r4, 0xc(r4)
/* 800C3044 000C0124  48 05 A5 B1 */	bl xClumpColl_InstancePointers__FP17xClumpCollBSPTreeP7RpClump
/* 800C3048 000C0128  80 6D 91 B4 */	lwz r3, sPipeWorld@sda21(r13)
/* 800C304C 000C012C  80 8D 91 B8 */	lwz r4, sPipeCamera@sda21(r13)
/* 800C3050 000C0130  48 15 BE F9 */	bl RpWorldRemoveCamera
/* 800C3054 000C0134  80 6D 91 B8 */	lwz r3, sPipeCamera@sda21(r13)
/* 800C3058 000C0138  4B FF D1 B9 */	bl iCameraDestroy__FP8RwCamera
/* 800C305C 000C013C  38 00 00 00 */	li r0, 0x0
/* 800C3060 000C0140  90 0D 91 B4 */	stw r0, sPipeWorld@sda21(r13)
/* 800C3064 000C0144  90 0D 91 B8 */	stw r0, sPipeCamera@sda21(r13)
/* 800C3068 000C0148  48 00 00 20 */	b .L_800C3088
.L_800C306C:
/* 800C306C 000C014C  2C 1F 00 00 */	cmpwi r31, 0x0
/* 800C3070 000C0150  40 82 00 0C */	bne .L_800C307C
/* 800C3074 000C0154  38 00 00 00 */	li r0, 0x0
/* 800C3078 000C0158  90 1E 00 10 */	stw r0, 0x10(r30)
.L_800C307C:
/* 800C307C 000C015C  7F C3 F3 78 */	mr r3, r30
/* 800C3080 000C0160  7F E4 FB 78 */	mr r4, r31
/* 800C3084 000C0164  4B FF FE 8D */	bl iEnvSetBSP__FP4iEnviP7RpWorld
.L_800C3088:
/* 800C3088 000C0168  2C 1F 00 00 */	cmpwi r31, 0x0
/* 800C308C 000C016C  40 82 00 0C */	bne .L_800C3098
/* 800C3090 000C0170  4B F7 0B 8D */	bl xMemGetBase__Fv
/* 800C3094 000C0174  90 7E 00 24 */	stw r3, 0x24(r30)
.L_800C3098:
/* 800C3098 000C0178  80 01 00 34 */	lwz r0, 0x34(r1)
/* 800C309C 000C017C  83 E1 00 2C */	lwz r31, 0x2c(r1)
/* 800C30A0 000C0180  83 C1 00 28 */	lwz r30, 0x28(r1)
/* 800C30A4 000C0184  83 A1 00 24 */	lwz r29, 0x24(r1)
/* 800C30A8 000C0188  7C 08 03 A6 */	mtlr r0
/* 800C30AC 000C018C  38 21 00 30 */	addi r1, r1, 0x30
/* 800C30B0 000C0190  4E 80 00 20 */	blr
.endfn iEnvLoad__FP4iEnvPCvUii

# iEnvFree(iEnv*)
.fn iEnvFree__FP4iEnv, global
/* 800C30B4 000C0194  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 800C30B8 000C0198  7C 08 02 A6 */	mflr r0
/* 800C30BC 000C019C  90 01 00 14 */	stw r0, 0x14(r1)
/* 800C30C0 000C01A0  93 E1 00 0C */	stw r31, 0xc(r1)
/* 800C30C4 000C01A4  7C 7F 1B 78 */	mr r31, r3
/* 800C30C8 000C01A8  48 17 9D 35 */	bl _rwFrameSyncDirty
/* 800C30CC 000C01AC  80 7F 00 00 */	lwz r3, 0x0(r31)
/* 800C30D0 000C01B0  48 15 9E 51 */	bl RpWorldDestroy
/* 800C30D4 000C01B4  38 00 00 00 */	li r0, 0x0
/* 800C30D8 000C01B8  90 1F 00 00 */	stw r0, 0x0(r31)
/* 800C30DC 000C01BC  80 7F 00 08 */	lwz r3, 0x8(r31)
/* 800C30E0 000C01C0  28 03 00 00 */	cmplwi r3, 0x0
/* 800C30E4 000C01C4  41 82 00 10 */	beq .L_800C30F4
/* 800C30E8 000C01C8  48 15 9E 39 */	bl RpWorldDestroy
/* 800C30EC 000C01CC  38 00 00 00 */	li r0, 0x0
/* 800C30F0 000C01D0  90 1F 00 08 */	stw r0, 0x8(r31)
.L_800C30F4:
/* 800C30F4 000C01D4  80 7F 00 04 */	lwz r3, 0x4(r31)
/* 800C30F8 000C01D8  28 03 00 00 */	cmplwi r3, 0x0
/* 800C30FC 000C01DC  41 82 00 10 */	beq .L_800C310C
/* 800C3100 000C01E0  48 15 9E 21 */	bl RpWorldDestroy
/* 800C3104 000C01E4  38 00 00 00 */	li r0, 0x0
/* 800C3108 000C01E8  90 1F 00 04 */	stw r0, 0x4(r31)
.L_800C310C:
/* 800C310C 000C01EC  80 01 00 14 */	lwz r0, 0x14(r1)
/* 800C3110 000C01F0  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 800C3114 000C01F4  7C 08 03 A6 */	mtlr r0
/* 800C3118 000C01F8  38 21 00 10 */	addi r1, r1, 0x10
/* 800C311C 000C01FC  4E 80 00 20 */	blr
.endfn iEnvFree__FP4iEnv

# iEnvDefaultLighting(iEnv*)
.fn iEnvDefaultLighting__FP4iEnv, global
/* 800C3120 000C0200  4E 80 00 20 */	blr
.endfn iEnvDefaultLighting__FP4iEnv

# iEnvLightingBasics(iEnv*, xEnvAsset*)
.fn iEnvLightingBasics__FP4iEnvP9xEnvAsset, global
/* 800C3124 000C0204  4E 80 00 20 */	blr
.endfn iEnvLightingBasics__FP4iEnvP9xEnvAsset

# Jsp_ClumpRender(RpClump*, xJSPNodeInfo*)
.fn Jsp_ClumpRender__FP7RpClumpP12xJSPNodeInfo, local
/* 800C3128 000C0208  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 800C312C 000C020C  7C 08 02 A6 */	mflr r0
/* 800C3130 000C0210  90 01 00 24 */	stw r0, 0x24(r1)
/* 800C3134 000C0214  BF 41 00 08 */	stmw r26, 0x8(r1)
/* 800C3138 000C0218  7C 9A 23 78 */	mr r26, r4
/* 800C313C 000C021C  3B 83 00 08 */	addi r28, r3, 0x8
/* 800C3140 000C0220  3B E0 00 01 */	li r31, 0x1
/* 800C3144 000C0224  3B C0 00 01 */	li r30, 0x1
/* 800C3148 000C0228  83 A3 00 08 */	lwz r29, 0x8(r3)
/* 800C314C 000C022C  48 00 00 CC */	b .L_800C3218
.L_800C3150:
/* 800C3150 000C0230  88 1D FF C2 */	lbz r0, -0x3e(r29)
/* 800C3154 000C0234  3B 7D FF C0 */	addi r27, r29, -0x40
/* 800C3158 000C0238  54 00 07 7B */	rlwinm. r0, r0, 0, 29, 29
/* 800C315C 000C023C  41 82 00 B4 */	beq .L_800C3210
/* 800C3160 000C0240  80 9B 00 04 */	lwz r4, 0x4(r27)
/* 800C3164 000C0244  7F 63 DB 78 */	mr r3, r27
/* 800C3168 000C0248  38 84 00 50 */	addi r4, r4, 0x50
/* 800C316C 000C024C  48 00 50 71 */	bl iModelCull__FP8RpAtomicP11RwMatrixTag
/* 800C3170 000C0250  2C 03 00 00 */	cmpwi r3, 0x0
/* 800C3174 000C0254  40 82 00 9C */	bne .L_800C3210
/* 800C3178 000C0258  2C 1F 00 00 */	cmpwi r31, 0x0
/* 800C317C 000C025C  41 82 00 24 */	beq .L_800C31A0
/* 800C3180 000C0260  80 1A 00 04 */	lwz r0, 0x4(r26)
/* 800C3184 000C0264  54 00 07 7B */	rlwinm. r0, r0, 0, 29, 29
/* 800C3188 000C0268  41 82 00 34 */	beq .L_800C31BC
/* 800C318C 000C026C  3B E0 00 00 */	li r31, 0x0
/* 800C3190 000C0270  38 60 00 14 */	li r3, 0x14
/* 800C3194 000C0274  38 80 00 01 */	li r4, 0x1
/* 800C3198 000C0278  48 16 C6 45 */	bl RwRenderStateSet
/* 800C319C 000C027C  48 00 00 20 */	b .L_800C31BC
.L_800C31A0:
/* 800C31A0 000C0280  80 1A 00 04 */	lwz r0, 0x4(r26)
/* 800C31A4 000C0284  54 00 07 7B */	rlwinm. r0, r0, 0, 29, 29
/* 800C31A8 000C0288  40 82 00 14 */	bne .L_800C31BC
/* 800C31AC 000C028C  3B E0 00 01 */	li r31, 0x1
/* 800C31B0 000C0290  38 60 00 14 */	li r3, 0x14
/* 800C31B4 000C0294  38 80 00 02 */	li r4, 0x2
/* 800C31B8 000C0298  48 16 C6 25 */	bl RwRenderStateSet
.L_800C31BC:
/* 800C31BC 000C029C  2C 1E 00 00 */	cmpwi r30, 0x0
/* 800C31C0 000C02A0  41 82 00 24 */	beq .L_800C31E4
/* 800C31C4 000C02A4  80 1A 00 04 */	lwz r0, 0x4(r26)
/* 800C31C8 000C02A8  54 00 07 BD */	rlwinm. r0, r0, 0, 30, 30
/* 800C31CC 000C02AC  41 82 00 34 */	beq .L_800C3200
/* 800C31D0 000C02B0  3B C0 00 00 */	li r30, 0x0
/* 800C31D4 000C02B4  38 60 00 08 */	li r3, 0x8
/* 800C31D8 000C02B8  38 80 00 00 */	li r4, 0x0
/* 800C31DC 000C02BC  48 16 C6 01 */	bl RwRenderStateSet
/* 800C31E0 000C02C0  48 00 00 20 */	b .L_800C3200
.L_800C31E4:
/* 800C31E4 000C02C4  80 1A 00 04 */	lwz r0, 0x4(r26)
/* 800C31E8 000C02C8  54 00 07 BD */	rlwinm. r0, r0, 0, 30, 30
/* 800C31EC 000C02CC  40 82 00 14 */	bne .L_800C3200
/* 800C31F0 000C02D0  3B C0 00 01 */	li r30, 0x1
/* 800C31F4 000C02D4  38 60 00 08 */	li r3, 0x8
/* 800C31F8 000C02D8  38 80 00 01 */	li r4, 0x1
/* 800C31FC 000C02DC  48 16 C5 E1 */	bl RwRenderStateSet
.L_800C3200:
/* 800C3200 000C02E0  81 9B 00 48 */	lwz r12, 0x48(r27)
/* 800C3204 000C02E4  7F 63 DB 78 */	mr r3, r27
/* 800C3208 000C02E8  7D 89 03 A6 */	mtctr r12
/* 800C320C 000C02EC  4E 80 04 21 */	bctrl
.L_800C3210:
/* 800C3210 000C02F0  83 BD 00 00 */	lwz r29, 0x0(r29)
/* 800C3214 000C02F4  3B 5A 00 08 */	addi r26, r26, 0x8
.L_800C3218:
/* 800C3218 000C02F8  7C 1D E0 40 */	cmplw r29, r28
/* 800C321C 000C02FC  40 82 FF 34 */	bne .L_800C3150
/* 800C3220 000C0300  BB 41 00 08 */	lmw r26, 0x8(r1)
/* 800C3224 000C0304  80 01 00 24 */	lwz r0, 0x24(r1)
/* 800C3228 000C0308  7C 08 03 A6 */	mtlr r0
/* 800C322C 000C030C  38 21 00 20 */	addi r1, r1, 0x20
/* 800C3230 000C0310  4E 80 00 20 */	blr
.endfn Jsp_ClumpRender__FP7RpClumpP12xJSPNodeInfo

# iEnvRender(iEnv*)
.fn iEnvRender__FP4iEnv, global
/* 800C3234 000C0314  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 800C3238 000C0318  7C 08 02 A6 */	mflr r0
/* 800C323C 000C031C  38 80 00 05 */	li r4, 0x5
/* 800C3240 000C0320  90 01 00 14 */	stw r0, 0x14(r1)
/* 800C3244 000C0324  93 E1 00 0C */	stw r31, 0xc(r1)
/* 800C3248 000C0328  7C 7F 1B 78 */	mr r31, r3
/* 800C324C 000C032C  38 60 00 0A */	li r3, 0xa
/* 800C3250 000C0330  48 16 C5 8D */	bl RwRenderStateSet
/* 800C3254 000C0334  38 60 00 0B */	li r3, 0xb
/* 800C3258 000C0338  38 80 00 06 */	li r4, 0x6
/* 800C325C 000C033C  48 16 C5 81 */	bl RwRenderStateSet
/* 800C3260 000C0340  80 9F 00 10 */	lwz r4, 0x10(r31)
/* 800C3264 000C0344  28 04 00 00 */	cmplwi r4, 0x0
/* 800C3268 000C0348  41 82 00 14 */	beq .L_800C327C
/* 800C326C 000C034C  80 64 00 0C */	lwz r3, 0xc(r4)
/* 800C3270 000C0350  80 84 00 14 */	lwz r4, 0x14(r4)
/* 800C3274 000C0354  4B FF FE B5 */	bl Jsp_ClumpRender__FP7RpClumpP12xJSPNodeInfo
/* 800C3278 000C0358  48 00 00 0C */	b .L_800C3284
.L_800C327C:
/* 800C327C 000C035C  80 7F 00 00 */	lwz r3, 0x0(r31)
/* 800C3280 000C0360  48 15 9C 5D */	bl RpWorldRender
.L_800C3284:
/* 800C3284 000C0364  93 ED 91 BC */	stw r31, lastEnv@sda21(r13)
/* 800C3288 000C0368  80 01 00 14 */	lwz r0, 0x14(r1)
/* 800C328C 000C036C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 800C3290 000C0370  7C 08 03 A6 */	mtlr r0
/* 800C3294 000C0374  38 21 00 10 */	addi r1, r1, 0x10
/* 800C3298 000C0378  4E 80 00 20 */	blr
.endfn iEnvRender__FP4iEnv

# iEnvEndRenderFX(iEnv*)
.fn iEnvEndRenderFX__FP4iEnv, global
/* 800C329C 000C037C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 800C32A0 000C0380  7C 08 02 A6 */	mflr r0
/* 800C32A4 000C0384  90 01 00 14 */	stw r0, 0x14(r1)
/* 800C32A8 000C0388  93 E1 00 0C */	stw r31, 0xc(r1)
/* 800C32AC 000C038C  83 ED 91 BC */	lwz r31, lastEnv@sda21(r13)
/* 800C32B0 000C0390  80 7F 00 08 */	lwz r3, 0x8(r31)
/* 800C32B4 000C0394  28 03 00 00 */	cmplwi r3, 0x0
/* 800C32B8 000C0398  41 82 00 34 */	beq .L_800C32EC
/* 800C32BC 000C039C  80 8D 91 80 */	lwz r4, globalCamera@sda21(r13)
/* 800C32C0 000C03A0  28 04 00 00 */	cmplwi r4, 0x0
/* 800C32C4 000C03A4  41 82 00 28 */	beq .L_800C32EC
/* 800C32C8 000C03A8  80 0D 91 B0 */	lwz r0, sBeginDrawFX@sda21(r13)
/* 800C32CC 000C03AC  2C 00 00 00 */	cmpwi r0, 0x0
/* 800C32D0 000C03B0  41 82 00 1C */	beq .L_800C32EC
/* 800C32D4 000C03B4  48 15 BC 75 */	bl RpWorldRemoveCamera
/* 800C32D8 000C03B8  80 7F 00 00 */	lwz r3, 0x0(r31)
/* 800C32DC 000C03BC  80 8D 91 80 */	lwz r4, globalCamera@sda21(r13)
/* 800C32E0 000C03C0  48 15 BC 15 */	bl RpWorldAddCamera
/* 800C32E4 000C03C4  38 00 00 00 */	li r0, 0x0
/* 800C32E8 000C03C8  90 0D 91 B0 */	stw r0, sBeginDrawFX@sda21(r13)
.L_800C32EC:
/* 800C32EC 000C03CC  80 01 00 14 */	lwz r0, 0x14(r1)
/* 800C32F0 000C03D0  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 800C32F4 000C03D4  7C 08 03 A6 */	mtlr r0
/* 800C32F8 000C03D8  38 21 00 10 */	addi r1, r1, 0x10
/* 800C32FC 000C03DC  4E 80 00 20 */	blr
.endfn iEnvEndRenderFX__FP4iEnv

# 0x80260130 - 0x80260148
.rodata
.balign 8

.obj "@700", local
	.4byte 0x447A0000
	.4byte 0x447A0000
	.4byte 0x447A0000
	.4byte 0xC47A0000
	.4byte 0xC47A0000
	.4byte 0xC47A0000
.endobj "@700"

# 0x803CBAB0 - 0x803CBAC0
.section .sbss, "wa", @nobits
.balign 8

.obj sBeginDrawFX, local
	.skip 0x4
.endobj sBeginDrawFX

.obj sPipeWorld, local
	.skip 0x4
.endobj sPipeWorld

.obj sPipeCamera, local
	.skip 0x4
.endobj sPipeCamera

.obj lastEnv, local
	.skip 0x4
.endobj lastEnv
