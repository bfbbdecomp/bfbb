.include "macros.inc"
.file "xEnv.cpp"

# 0x8001F438 - 0x8001F524
.text
.balign 4

# xEnvLoadBsp(xEnv*, const void*, unsigned int, int)
.fn xEnvLoadBsp__FP4xEnvPCvUii, global
/* 8001F438 0001C518  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8001F43C 0001C51C  7C 08 02 A6 */	mflr r0
/* 8001F440 0001C520  2C 06 00 00 */	cmpwi r6, 0x0
/* 8001F444 0001C524  90 01 00 14 */	stw r0, 0x14(r1)
/* 8001F448 0001C528  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8001F44C 0001C52C  7C 7F 1B 78 */	mr r31, r3
/* 8001F450 0001C530  40 82 00 0C */	bne .L_8001F45C
/* 8001F454 0001C534  38 1F 00 04 */	addi r0, r31, 0x4
/* 8001F458 0001C538  90 1F 00 00 */	stw r0, 0x0(r31)
.L_8001F45C:
/* 8001F45C 0001C53C  80 7F 00 00 */	lwz r3, 0x0(r31)
/* 8001F460 0001C540  48 0A 3A F1 */	bl iEnvLoad__FP4iEnvPCvUii
/* 8001F464 0001C544  93 ED 88 E0 */	stw r31, gCurXEnv@sda21(r13)
/* 8001F468 0001C548  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8001F46C 0001C54C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8001F470 0001C550  7C 08 03 A6 */	mtlr r0
/* 8001F474 0001C554  38 21 00 10 */	addi r1, r1, 0x10
/* 8001F478 0001C558  4E 80 00 20 */	blr
.endfn xEnvLoadBsp__FP4xEnvPCvUii

# xEnvSetup(xEnv*)
.fn xEnvSetup__FP4xEnv, global
/* 8001F47C 0001C55C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8001F480 0001C560  7C 08 02 A6 */	mflr r0
/* 8001F484 0001C564  90 01 00 14 */	stw r0, 0x14(r1)
/* 8001F488 0001C568  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8001F48C 0001C56C  7C 7F 1B 78 */	mr r31, r3
/* 8001F490 0001C570  80 63 00 00 */	lwz r3, 0x0(r3)
/* 8001F494 0001C574  48 0A 3C 8D */	bl iEnvDefaultLighting__FP4iEnv
/* 8001F498 0001C578  38 00 00 00 */	li r0, 0x0
/* 8001F49C 0001C57C  90 1F 00 2C */	stw r0, 0x2c(r31)
/* 8001F4A0 0001C580  93 ED 88 E0 */	stw r31, gCurXEnv@sda21(r13)
/* 8001F4A4 0001C584  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8001F4A8 0001C588  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8001F4AC 0001C58C  7C 08 03 A6 */	mtlr r0
/* 8001F4B0 0001C590  38 21 00 10 */	addi r1, r1, 0x10
/* 8001F4B4 0001C594  4E 80 00 20 */	blr
.endfn xEnvSetup__FP4xEnv

# xEnvFree(xEnv*)
.fn xEnvFree__FP4xEnv, global
/* 8001F4B8 0001C598  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8001F4BC 0001C59C  7C 08 02 A6 */	mflr r0
/* 8001F4C0 0001C5A0  90 01 00 14 */	stw r0, 0x14(r1)
/* 8001F4C4 0001C5A4  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8001F4C8 0001C5A8  7C 7F 1B 78 */	mr r31, r3
/* 8001F4CC 0001C5AC  80 63 00 00 */	lwz r3, 0x0(r3)
/* 8001F4D0 0001C5B0  28 03 00 00 */	cmplwi r3, 0x0
/* 8001F4D4 0001C5B4  41 82 00 10 */	beq .L_8001F4E4
/* 8001F4D8 0001C5B8  48 0A 3B DD */	bl iEnvFree__FP4iEnv
/* 8001F4DC 0001C5BC  38 00 00 00 */	li r0, 0x0
/* 8001F4E0 0001C5C0  90 1F 00 00 */	stw r0, 0x0(r31)
.L_8001F4E4:
/* 8001F4E4 0001C5C4  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8001F4E8 0001C5C8  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8001F4EC 0001C5CC  7C 08 03 A6 */	mtlr r0
/* 8001F4F0 0001C5D0  38 21 00 10 */	addi r1, r1, 0x10
/* 8001F4F4 0001C5D4  4E 80 00 20 */	blr
.endfn xEnvFree__FP4xEnv

# xEnvRender(xEnv*)
.fn xEnvRender__FP4xEnv, global
/* 8001F4F8 0001C5D8  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8001F4FC 0001C5DC  7C 08 02 A6 */	mflr r0
/* 8001F500 0001C5E0  90 01 00 14 */	stw r0, 0x14(r1)
/* 8001F504 0001C5E4  80 63 00 00 */	lwz r3, 0x0(r3)
/* 8001F508 0001C5E8  28 03 00 00 */	cmplwi r3, 0x0
/* 8001F50C 0001C5EC  41 82 00 08 */	beq .L_8001F514
/* 8001F510 0001C5F0  48 0A 3D 25 */	bl iEnvRender__FP4iEnv
.L_8001F514:
/* 8001F514 0001C5F4  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8001F518 0001C5F8  7C 08 03 A6 */	mtlr r0
/* 8001F51C 0001C5FC  38 21 00 10 */	addi r1, r1, 0x10
/* 8001F520 0001C600  4E 80 00 20 */	blr
.endfn xEnvRender__FP4xEnv

# 0x803CB1E0 - 0x803CB1E8
.section .sbss, "wa", @nobits
.balign 8

.obj gCurXEnv, global
	.skip 0x4
.endobj gCurXEnv
	.skip 0x4
