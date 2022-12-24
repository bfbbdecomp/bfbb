.include "macros.inc"
.file "zEntTeleportBox.cpp"

# 0x8012C0A8 - 0x8012D888
.text
.balign 4

# VecFromAngle(float, xVec3*)
.fn VecFromAngle__FfP5xVec3, local
/* 8012C0A8 00129188  94 21 FF B0 */	stwu r1, -0x50(r1)
/* 8012C0AC 0012918C  7C 08 02 A6 */	mflr r0
/* 8012C0B0 00129190  90 01 00 54 */	stw r0, 0x54(r1)
/* 8012C0B4 00129194  DB E1 00 40 */	stfd f31, 0x40(r1)
/* 8012C0B8 00129198  F3 E1 00 48 */	psq_st f31, 0x48(r1), 0, qr0
/* 8012C0BC 0012919C  93 E1 00 3C */	stw r31, 0x3c(r1)
/* 8012C0C0 001291A0  FF E0 08 90 */	fmr f31, f1
/* 8012C0C4 001291A4  7C 7F 1B 78 */	mr r31, r3
/* 8012C0C8 001291A8  38 61 00 08 */	addi r3, r1, 0x8
/* 8012C0CC 001291AC  4B EE 2F 41 */	bl xMat3x3Identity__FP7xMat3x3
/* 8012C0D0 001291B0  C0 02 A2 38 */	lfs f0, "@777"@sda21(r2)
/* 8012C0D4 001291B4  38 61 00 08 */	addi r3, r1, 0x8
/* 8012C0D8 001291B8  C0 42 A2 40 */	lfs f2, "@779"@sda21(r2)
/* 8012C0DC 001291BC  EC 20 07 F2 */	fmuls f1, f0, f31
/* 8012C0E0 001291C0  C0 02 A2 3C */	lfs f0, "@778"@sda21(r2)
/* 8012C0E4 001291C4  FC 60 10 90 */	fmr f3, f2
/* 8012C0E8 001291C8  EC 21 00 24 */	fdivs f1, f1, f0
/* 8012C0EC 001291CC  4B F0 60 E5 */	bl xMat3x3Euler__FP7xMat3x3fff
/* 8012C0F0 001291D0  C0 22 A2 40 */	lfs f1, "@779"@sda21(r2)
/* 8012C0F4 001291D4  7F E3 FB 78 */	mr r3, r31
/* 8012C0F8 001291D8  C0 62 A2 44 */	lfs f3, "@780"@sda21(r2)
/* 8012C0FC 001291DC  FC 40 08 90 */	fmr f2, f1
/* 8012C100 001291E0  4B EE 2E FD */	bl xVec3Init__FP5xVec3fff
/* 8012C104 001291E4  7F E3 FB 78 */	mr r3, r31
/* 8012C108 001291E8  7F E5 FB 78 */	mr r5, r31
/* 8012C10C 001291EC  38 81 00 08 */	addi r4, r1, 0x8
/* 8012C110 001291F0  4B F0 69 4D */	bl xMat3x3LMulVec__FP5xVec3PC7xMat3x3PC5xVec3
/* 8012C114 001291F4  E3 E1 00 48 */	psq_l f31, 0x48(r1), 0, qr0
/* 8012C118 001291F8  80 01 00 54 */	lwz r0, 0x54(r1)
/* 8012C11C 001291FC  CB E1 00 40 */	lfd f31, 0x40(r1)
/* 8012C120 00129200  83 E1 00 3C */	lwz r31, 0x3c(r1)
/* 8012C124 00129204  7C 08 03 A6 */	mtlr r0
/* 8012C128 00129208  38 21 00 50 */	addi r1, r1, 0x50
/* 8012C12C 0012920C  4E 80 00 20 */	blr
.endfn VecFromAngle__FfP5xVec3

# OpenCheck(xAnimTransition*, xAnimSingle*, void*)
.fn OpenCheck__FP15xAnimTransitionP11xAnimSinglePv, global
/* 8012C130 00129210  80 85 00 D4 */	lwz r4, 0xd4(r5)
/* 8012C134 00129214  20 64 00 01 */	subfic r3, r4, 0x1
/* 8012C138 00129218  38 04 FF FF */	addi r0, r4, -0x1
/* 8012C13C 0012921C  7C 60 03 78 */	or r0, r3, r0
/* 8012C140 00129220  54 03 0F FE */	srwi r3, r0, 31
/* 8012C144 00129224  4E 80 00 20 */	blr
.endfn OpenCheck__FP15xAnimTransitionP11xAnimSinglePv

# JumpInCheck(xAnimTransition*, xAnimSingle*, void*)
.fn JumpInCheck__FP15xAnimTransitionP11xAnimSinglePv, local
/* 8012C148 00129228  80 65 00 E8 */	lwz r3, 0xe8(r5)
/* 8012C14C 0012922C  7C 03 00 D0 */	neg r0, r3
/* 8012C150 00129230  7C 00 1B 78 */	or r0, r0, r3
/* 8012C154 00129234  54 03 0F FE */	srwi r3, r0, 31
/* 8012C158 00129238  4E 80 00 20 */	blr
.endfn JumpInCheck__FP15xAnimTransitionP11xAnimSinglePv

# JumpInCB(xAnimTransition*, xAnimSingle*, void*)
.fn JumpInCB__FP15xAnimTransitionP11xAnimSinglePv, local
/* 8012C15C 0012923C  38 00 00 00 */	li r0, 0x0
/* 8012C160 00129240  38 60 00 00 */	li r3, 0x0
/* 8012C164 00129244  90 05 00 E8 */	stw r0, 0xe8(r5)
/* 8012C168 00129248  4E 80 00 20 */	blr
.endfn JumpInCB__FP15xAnimTransitionP11xAnimSinglePv

# JumpOutCheck(xAnimTransition*, xAnimSingle*, void*)
.fn JumpOutCheck__FP15xAnimTransitionP11xAnimSinglePv, local
/* 8012C16C 0012924C  80 65 00 EC */	lwz r3, 0xec(r5)
/* 8012C170 00129250  7C 03 00 D0 */	neg r0, r3
/* 8012C174 00129254  7C 00 1B 78 */	or r0, r0, r3
/* 8012C178 00129258  54 03 0F FE */	srwi r3, r0, 31
/* 8012C17C 0012925C  4E 80 00 20 */	blr
.endfn JumpOutCheck__FP15xAnimTransitionP11xAnimSinglePv

# JumpOutCB(xAnimTransition*, xAnimSingle*, void*)
.fn JumpOutCB__FP15xAnimTransitionP11xAnimSinglePv, local
/* 8012C180 00129260  38 00 00 00 */	li r0, 0x0
/* 8012C184 00129264  38 60 00 00 */	li r3, 0x0
/* 8012C188 00129268  90 05 00 EC */	stw r0, 0xec(r5)
/* 8012C18C 0012926C  4E 80 00 20 */	blr
.endfn JumpOutCB__FP15xAnimTransitionP11xAnimSinglePv

# JItoOCheck(xAnimTransition*, xAnimSingle*, void*)
.fn JItoOCheck__FP15xAnimTransitionP11xAnimSinglePv, local
/* 8012C190 00129270  80 65 00 F4 */	lwz r3, 0xf4(r5)
/* 8012C194 00129274  7C 03 00 D0 */	neg r0, r3
/* 8012C198 00129278  7C 00 1B 78 */	or r0, r0, r3
/* 8012C19C 0012927C  54 03 0F FE */	srwi r3, r0, 31
/* 8012C1A0 00129280  4E 80 00 20 */	blr
.endfn JItoOCheck__FP15xAnimTransitionP11xAnimSinglePv

# JItoOCB(xAnimTransition*, xAnimSingle*, void*)
.fn JItoOCB__FP15xAnimTransitionP11xAnimSinglePv, local
/* 8012C1A4 00129284  38 00 00 00 */	li r0, 0x0
/* 8012C1A8 00129288  38 60 00 00 */	li r3, 0x0
/* 8012C1AC 0012928C  90 05 00 F4 */	stw r0, 0xf4(r5)
/* 8012C1B0 00129290  90 05 00 E0 */	stw r0, 0xe0(r5)
/* 8012C1B4 00129294  4E 80 00 20 */	blr
.endfn JItoOCB__FP15xAnimTransitionP11xAnimSinglePv

# JOtoOCheck(xAnimTransition*, xAnimSingle*, void*)
.fn JOtoOCheck__FP15xAnimTransitionP11xAnimSinglePv, local
/* 8012C1B8 00129298  80 65 00 F0 */	lwz r3, 0xf0(r5)
/* 8012C1BC 0012929C  7C 03 00 D0 */	neg r0, r3
/* 8012C1C0 001292A0  7C 00 1B 78 */	or r0, r0, r3
/* 8012C1C4 001292A4  54 03 0F FE */	srwi r3, r0, 31
/* 8012C1C8 001292A8  4E 80 00 20 */	blr
.endfn JOtoOCheck__FP15xAnimTransitionP11xAnimSinglePv

# JOtoOCB(xAnimTransition*, xAnimSingle*, void*)
.fn JOtoOCB__FP15xAnimTransitionP11xAnimSinglePv, local
/* 8012C1CC 001292AC  38 00 00 00 */	li r0, 0x0
/* 8012C1D0 001292B0  38 60 00 00 */	li r3, 0x0
/* 8012C1D4 001292B4  90 05 00 F0 */	stw r0, 0xf0(r5)
/* 8012C1D8 001292B8  4E 80 00 20 */	blr
.endfn JOtoOCB__FP15xAnimTransitionP11xAnimSinglePv

# CtoOCheck(xAnimTransition*, xAnimSingle*, void*)
.fn CtoOCheck__FP15xAnimTransitionP11xAnimSinglePv, local
/* 8012C1DC 001292BC  80 65 00 24 */	lwz r3, 0x24(r5)
/* 8012C1E0 001292C0  3C 80 80 3C */	lis r4, globals@ha
/* 8012C1E4 001292C4  38 84 05 58 */	addi r4, r4, globals@l
/* 8012C1E8 001292C8  C0 02 A2 48 */	lfs f0, "@853"@sda21(r2)
/* 8012C1EC 001292CC  80 63 00 4C */	lwz r3, 0x4c(r3)
/* 8012C1F0 001292D0  C0 44 07 6C */	lfs f2, 0x76c(r4)
/* 8012C1F4 001292D4  C0 23 00 34 */	lfs f1, 0x34(r3)
/* 8012C1F8 001292D8  C0 84 07 68 */	lfs f4, 0x768(r4)
/* 8012C1FC 001292DC  EC A2 08 28 */	fsubs f5, f2, f1
/* 8012C200 001292E0  C0 23 00 30 */	lfs f1, 0x30(r3)
/* 8012C204 001292E4  C0 64 07 70 */	lfs f3, 0x770(r4)
/* 8012C208 001292E8  EC 84 08 28 */	fsubs f4, f4, f1
/* 8012C20C 001292EC  C0 43 00 38 */	lfs f2, 0x38(r3)
/* 8012C210 001292F0  EC 25 01 72 */	fmuls f1, f5, f5
/* 8012C214 001292F4  EC 43 10 28 */	fsubs f2, f3, f2
/* 8012C218 001292F8  EC 24 09 3A */	fmadds f1, f4, f4, f1
/* 8012C21C 001292FC  EC 22 08 BA */	fmadds f1, f2, f2, f1
/* 8012C220 00129300  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8012C224 00129304  7C 00 00 26 */	mfcr r0
/* 8012C228 00129308  54 03 0F FE */	srwi r3, r0, 31
/* 8012C22C 0012930C  4E 80 00 20 */	blr
.endfn CtoOCheck__FP15xAnimTransitionP11xAnimSinglePv

# CtoOCB(xAnimTransition*, xAnimSingle*, void*)
.fn CtoOCB__FP15xAnimTransitionP11xAnimSinglePv, local
/* 8012C230 00129310  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 8012C234 00129314  7C 08 02 A6 */	mflr r0
/* 8012C238 00129318  90 01 00 24 */	stw r0, 0x24(r1)
/* 8012C23C 0012931C  38 61 00 08 */	addi r3, r1, 0x8
/* 8012C240 00129320  80 85 00 24 */	lwz r4, 0x24(r5)
/* 8012C244 00129324  80 84 00 4C */	lwz r4, 0x4c(r4)
/* 8012C248 00129328  38 84 00 30 */	addi r4, r4, 0x30
/* 8012C24C 0012932C  4B F2 22 91 */	bl xVec3Copy__FP5xVec3PC5xVec3
/* 8012C250 00129330  C0 21 00 0C */	lfs f1, 0xc(r1)
/* 8012C254 00129334  38 61 00 08 */	addi r3, r1, 0x8
/* 8012C258 00129338  C0 02 A2 44 */	lfs f0, "@780"@sda21(r2)
/* 8012C25C 0012933C  38 80 00 32 */	li r4, 0x32
/* 8012C260 00129340  EC 01 00 2A */	fadds f0, f1, f0
/* 8012C264 00129344  D0 01 00 0C */	stfs f0, 0xc(r1)
/* 8012C268 00129348  4B F6 87 D1 */	bl zFX_SpawnBubbleHit__FPC5xVec3Ui
/* 8012C26C 0012934C  3C 60 80 27 */	lis r3, "@stringBase0"@ha
/* 8012C270 00129350  38 63 C2 B0 */	addi r3, r3, "@stringBase0"@l
/* 8012C274 00129354  4B F1 FF A1 */	bl xStrHash__FPCc
/* 8012C278 00129358  C0 42 A2 40 */	lfs f2, "@779"@sda21(r2)
/* 8012C27C 0012935C  38 C1 00 08 */	addi r6, r1, 0x8
/* 8012C280 00129360  C0 22 A2 4C */	lfs f1, "@858"@sda21(r2)
/* 8012C284 00129364  38 80 00 80 */	li r4, 0x80
/* 8012C288 00129368  FC 60 10 90 */	fmr f3, f2
/* 8012C28C 0012936C  38 A0 00 00 */	li r5, 0x0
/* 8012C290 00129370  FC 80 10 90 */	fmr f4, f2
/* 8012C294 00129374  38 E0 00 00 */	li r7, 0x0
/* 8012C298 00129378  4B F2 A2 1D */	bl xSndPlay3D__FUiffUiUiPC5xVec3f14sound_categoryf
/* 8012C29C 0012937C  80 01 00 24 */	lwz r0, 0x24(r1)
/* 8012C2A0 00129380  38 60 00 00 */	li r3, 0x0
/* 8012C2A4 00129384  7C 08 03 A6 */	mtlr r0
/* 8012C2A8 00129388  38 21 00 20 */	addi r1, r1, 0x20
/* 8012C2AC 0012938C  4E 80 00 20 */	blr
.endfn CtoOCB__FP15xAnimTransitionP11xAnimSinglePv

# JumpInEffectPlrInvisibleCB(unsigned int, xAnimActiveEffect*, xAnimSingle*, void*)
.fn JumpInEffectPlrInvisibleCB__FUiP17xAnimActiveEffectP11xAnimSinglePv, local
/* 8012C2B0 00129390  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8012C2B4 00129394  7C 08 02 A6 */	mflr r0
/* 8012C2B8 00129398  3C 60 80 3C */	lis r3, globals@ha
/* 8012C2BC 0012939C  38 80 00 04 */	li r4, 0x4
/* 8012C2C0 001293A0  38 63 05 58 */	addi r3, r3, globals@l
/* 8012C2C4 001293A4  90 01 00 14 */	stw r0, 0x14(r1)
/* 8012C2C8 001293A8  38 63 06 E0 */	addi r3, r3, 0x6e0
/* 8012C2CC 001293AC  4B EF 33 25 */	bl zEntEvent__FP5xBaseUi
/* 8012C2D0 001293B0  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8012C2D4 001293B4  38 60 00 00 */	li r3, 0x0
/* 8012C2D8 001293B8  7C 08 03 A6 */	mtlr r0
/* 8012C2DC 001293BC  38 21 00 10 */	addi r1, r1, 0x10
/* 8012C2E0 001293C0  4E 80 00 20 */	blr
.endfn JumpInEffectPlrInvisibleCB__FUiP17xAnimActiveEffectP11xAnimSinglePv

# JumpInEffectPlrTeleportCB(unsigned int, xAnimActiveEffect*, xAnimSingle*, void*)
.fn JumpInEffectPlrTeleportCB__FUiP17xAnimActiveEffectP11xAnimSinglePv, local
/* 8012C2E4 001293C4  38 00 00 02 */	li r0, 0x2
/* 8012C2E8 001293C8  38 60 00 00 */	li r3, 0x0
/* 8012C2EC 001293CC  90 06 00 E0 */	stw r0, 0xe0(r6)
/* 8012C2F0 001293D0  4E 80 00 20 */	blr
.endfn JumpInEffectPlrTeleportCB__FUiP17xAnimActiveEffectP11xAnimSinglePv

# JumpInEffectJIAnimCB(unsigned int, xAnimActiveEffect*, xAnimSingle*, void*)
.fn JumpInEffectJIAnimCB__FUiP17xAnimActiveEffectP11xAnimSinglePv, local
/* 8012C2F4 001293D4  38 00 00 01 */	li r0, 0x1
/* 8012C2F8 001293D8  38 60 00 00 */	li r3, 0x0
/* 8012C2FC 001293DC  90 06 00 F4 */	stw r0, 0xf4(r6)
/* 8012C300 001293E0  4E 80 00 20 */	blr
.endfn JumpInEffectJIAnimCB__FUiP17xAnimActiveEffectP11xAnimSinglePv

# CtoOEffectTboxEnableCB(unsigned int, xAnimActiveEffect*, xAnimSingle*, void*)
.fn CtoOEffectTboxEnableCB__FUiP17xAnimActiveEffectP11xAnimSinglePv, local
/* 8012C304 001293E4  80 06 00 D4 */	lwz r0, 0xd4(r6)
/* 8012C308 001293E8  28 00 00 01 */	cmplwi r0, 0x1
/* 8012C30C 001293EC  40 82 00 0C */	bne .L_8012C318
/* 8012C310 001293F0  38 00 00 00 */	li r0, 0x0
/* 8012C314 001293F4  90 06 00 D4 */	stw r0, 0xd4(r6)
.L_8012C318:
/* 8012C318 001293F8  38 60 00 00 */	li r3, 0x0
/* 8012C31C 001293FC  4E 80 00 20 */	blr
.endfn CtoOEffectTboxEnableCB__FUiP17xAnimActiveEffectP11xAnimSinglePv

# JumpOutEffectPlrVisibleCB(unsigned int, xAnimActiveEffect*, xAnimSingle*, void*)
.fn JumpOutEffectPlrVisibleCB__FUiP17xAnimActiveEffectP11xAnimSinglePv, local
/* 8012C320 00129400  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8012C324 00129404  7C 08 02 A6 */	mflr r0
/* 8012C328 00129408  3C 60 80 3C */	lis r3, globals@ha
/* 8012C32C 0012940C  38 80 00 03 */	li r4, 0x3
/* 8012C330 00129410  38 63 05 58 */	addi r3, r3, globals@l
/* 8012C334 00129414  90 01 00 14 */	stw r0, 0x14(r1)
/* 8012C338 00129418  38 63 06 E0 */	addi r3, r3, 0x6e0
/* 8012C33C 0012941C  4B EF 32 B5 */	bl zEntEvent__FP5xBaseUi
/* 8012C340 00129420  38 60 00 00 */	li r3, 0x0
/* 8012C344 00129424  4B FA 32 01 */	bl iCameraMotionBlurActivate__FUi
/* 8012C348 00129428  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8012C34C 0012942C  38 60 00 00 */	li r3, 0x0
/* 8012C350 00129430  7C 08 03 A6 */	mtlr r0
/* 8012C354 00129434  38 21 00 10 */	addi r1, r1, 0x10
/* 8012C358 00129438  4E 80 00 20 */	blr
.endfn JumpOutEffectPlrVisibleCB__FUiP17xAnimActiveEffectP11xAnimSinglePv

# JumpOutEffectPlrEjectCB(unsigned int, xAnimActiveEffect*, xAnimSingle*, void*)
.fn JumpOutEffectPlrEjectCB__FUiP17xAnimActiveEffectP11xAnimSinglePv, local
/* 8012C35C 0012943C  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 8012C360 00129440  7C 08 02 A6 */	mflr r0
/* 8012C364 00129444  90 01 00 24 */	stw r0, 0x24(r1)
/* 8012C368 00129448  38 00 00 04 */	li r0, 0x4
/* 8012C36C 0012944C  38 61 00 08 */	addi r3, r1, 0x8
/* 8012C370 00129450  90 06 00 E0 */	stw r0, 0xe0(r6)
/* 8012C374 00129454  C0 02 A2 54 */	lfs f0, "@888"@sda21(r2)
/* 8012C378 00129458  D0 06 01 3C */	stfs f0, 0x13c(r6)
/* 8012C37C 0012945C  80 86 00 24 */	lwz r4, 0x24(r6)
/* 8012C380 00129460  80 84 00 4C */	lwz r4, 0x4c(r4)
/* 8012C384 00129464  38 84 00 30 */	addi r4, r4, 0x30
/* 8012C388 00129468  4B F2 21 55 */	bl xVec3Copy__FP5xVec3PC5xVec3
/* 8012C38C 0012946C  C0 21 00 0C */	lfs f1, 0xc(r1)
/* 8012C390 00129470  38 61 00 08 */	addi r3, r1, 0x8
/* 8012C394 00129474  C0 02 A2 44 */	lfs f0, "@780"@sda21(r2)
/* 8012C398 00129478  38 80 00 32 */	li r4, 0x32
/* 8012C39C 0012947C  EC 01 00 2A */	fadds f0, f1, f0
/* 8012C3A0 00129480  D0 01 00 0C */	stfs f0, 0xc(r1)
/* 8012C3A4 00129484  4B F6 86 95 */	bl zFX_SpawnBubbleHit__FPC5xVec3Ui
/* 8012C3A8 00129488  80 01 00 24 */	lwz r0, 0x24(r1)
/* 8012C3AC 0012948C  38 60 00 00 */	li r3, 0x0
/* 8012C3B0 00129490  7C 08 03 A6 */	mtlr r0
/* 8012C3B4 00129494  38 21 00 20 */	addi r1, r1, 0x20
/* 8012C3B8 00129498  4E 80 00 20 */	blr
.endfn JumpOutEffectPlrEjectCB__FUiP17xAnimActiveEffectP11xAnimSinglePv

# JumpOutEffectJOAnimCB(unsigned int, xAnimActiveEffect*, xAnimSingle*, void*)
.fn JumpOutEffectJOAnimCB__FUiP17xAnimActiveEffectP11xAnimSinglePv, local
/* 8012C3BC 0012949C  38 00 00 01 */	li r0, 0x1
/* 8012C3C0 001294A0  38 60 00 00 */	li r3, 0x0
/* 8012C3C4 001294A4  90 06 00 F0 */	stw r0, 0xf0(r6)
/* 8012C3C8 001294A8  4E 80 00 20 */	blr
.endfn JumpOutEffectJOAnimCB__FUiP17xAnimActiveEffectP11xAnimSinglePv

# zEntTeleportBox_Init(xBase&, xDynAsset&, unsigned long)
.fn zEntTeleportBox_Init__FR5xBaseR9xDynAssetUl, global
/* 8012C3CC 001294AC  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8012C3D0 001294B0  7C 08 02 A6 */	mflr r0
/* 8012C3D4 001294B4  90 01 00 14 */	stw r0, 0x14(r1)
/* 8012C3D8 001294B8  48 00 00 15 */	bl zEntTeleportBox_Init__FP16_zEntTeleportBoxP14teleport_asset
/* 8012C3DC 001294BC  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8012C3E0 001294C0  7C 08 03 A6 */	mtlr r0
/* 8012C3E4 001294C4  38 21 00 10 */	addi r1, r1, 0x10
/* 8012C3E8 001294C8  4E 80 00 20 */	blr
.endfn zEntTeleportBox_Init__FR5xBaseR9xDynAssetUl

# zEntTeleportBox_Init(_zEntTeleportBox*, teleport_asset*)
.fn zEntTeleportBox_Init__FP16_zEntTeleportBoxP14teleport_asset, global
/* 8012C3EC 001294CC  94 21 FF D0 */	stwu r1, -0x30(r1)
/* 8012C3F0 001294D0  7C 08 02 A6 */	mflr r0
/* 8012C3F4 001294D4  38 A0 00 00 */	li r5, 0x0
/* 8012C3F8 001294D8  90 01 00 34 */	stw r0, 0x34(r1)
/* 8012C3FC 001294DC  93 E1 00 2C */	stw r31, 0x2c(r1)
/* 8012C400 001294E0  7C 9F 23 78 */	mr r31, r4
/* 8012C404 001294E4  38 80 00 54 */	li r4, 0x54
/* 8012C408 001294E8  93 C1 00 28 */	stw r30, 0x28(r1)
/* 8012C40C 001294EC  7C 7E 1B 78 */	mr r30, r3
/* 8012C410 001294F0  93 A1 00 24 */	stw r29, 0x24(r1)
/* 8012C414 001294F4  80 6D 89 E0 */	lwz r3, gActiveHeap@sda21(r13)
/* 8012C418 001294F8  4B F0 75 29 */	bl xMemAlloc__FUiUii
/* 8012C41C 001294FC  80 1F 00 00 */	lwz r0, 0x0(r31)
/* 8012C420 00129500  7C 7D 1B 78 */	mr r29, r3
/* 8012C424 00129504  38 80 00 31 */	li r4, 0x31
/* 8012C428 00129508  38 A0 00 00 */	li r5, 0x0
/* 8012C42C 0012950C  90 03 00 00 */	stw r0, 0x0(r3)
/* 8012C430 00129510  38 00 00 01 */	li r0, 0x1
/* 8012C434 00129514  38 7D 00 14 */	addi r3, r29, 0x14
/* 8012C438 00129518  98 9D 00 04 */	stb r4, 0x4(r29)
/* 8012C43C 0012951C  98 BD 00 05 */	stb r5, 0x5(r29)
/* 8012C440 00129520  A0 9F 00 06 */	lhz r4, 0x6(r31)
/* 8012C444 00129524  B0 9D 00 06 */	sth r4, 0x6(r29)
/* 8012C448 00129528  A0 9D 00 06 */	lhz r4, 0x6(r29)
/* 8012C44C 0012952C  60 84 00 22 */	ori r4, r4, 0x22
/* 8012C450 00129530  B0 9D 00 06 */	sth r4, 0x6(r29)
/* 8012C454 00129534  98 1D 00 08 */	stb r0, 0x8(r29)
/* 8012C458 00129538  88 1D 00 0B */	lbz r0, 0xb(r29)
/* 8012C45C 0012953C  60 00 00 20 */	ori r0, r0, 0x20
/* 8012C460 00129540  98 1D 00 0B */	stb r0, 0xb(r29)
/* 8012C464 00129544  98 BD 00 0A */	stb r5, 0xa(r29)
/* 8012C468 00129548  C0 22 A2 40 */	lfs f1, "@779"@sda21(r2)
/* 8012C46C 0012954C  4B EF 04 0D */	bl __as__5xVec3Ff
/* 8012C470 00129550  C0 02 A2 44 */	lfs f0, "@780"@sda21(r2)
/* 8012C474 00129554  3C 60 80 27 */	lis r3, "@stringBase0"@ha
/* 8012C478 00129558  38 63 C2 B0 */	addi r3, r3, "@stringBase0"@l
/* 8012C47C 0012955C  D0 1D 00 2C */	stfs f0, 0x2c(r29)
/* 8012C480 00129560  38 63 00 09 */	addi r3, r3, 0x9
/* 8012C484 00129564  C0 02 A2 44 */	lfs f0, "@780"@sda21(r2)
/* 8012C488 00129568  D0 1D 00 30 */	stfs f0, 0x30(r29)
/* 8012C48C 0012956C  C0 02 A2 44 */	lfs f0, "@780"@sda21(r2)
/* 8012C490 00129570  D0 1D 00 34 */	stfs f0, 0x34(r29)
/* 8012C494 00129574  C0 02 A2 44 */	lfs f0, "@780"@sda21(r2)
/* 8012C498 00129578  D0 1D 00 38 */	stfs f0, 0x38(r29)
/* 8012C49C 0012957C  C0 02 A2 44 */	lfs f0, "@780"@sda21(r2)
/* 8012C4A0 00129580  D0 1D 00 3C */	stfs f0, 0x3c(r29)
/* 8012C4A4 00129584  C0 02 A2 44 */	lfs f0, "@780"@sda21(r2)
/* 8012C4A8 00129588  D0 1D 00 40 */	stfs f0, 0x40(r29)
/* 8012C4AC 0012958C  4B F1 FD 69 */	bl xStrHash__FPCc
/* 8012C4B0 00129590  90 7D 00 4C */	stw r3, 0x4c(r29)
/* 8012C4B4 00129594  38 00 00 00 */	li r0, 0x0
/* 8012C4B8 00129598  38 81 00 18 */	addi r4, r1, 0x18
/* 8012C4BC 0012959C  90 1D 00 50 */	stw r0, 0x50(r29)
/* 8012C4C0 001295A0  80 7F 00 10 */	lwz r3, 0x10(r31)
/* 8012C4C4 001295A4  4B F1 F2 49 */	bl xSTFindAsset__FUiPUi
/* 8012C4C8 001295A8  28 03 00 00 */	cmplwi r3, 0x0
/* 8012C4CC 001295AC  41 82 08 EC */	beq .L_8012CDB8
/* 8012C4D0 001295B0  80 01 00 18 */	lwz r0, 0x18(r1)
/* 8012C4D4 001295B4  28 00 00 0C */	cmplwi r0, 0xc
/* 8012C4D8 001295B8  40 82 08 E0 */	bne .L_8012CDB8
/* 8012C4DC 001295BC  C0 03 00 00 */	lfs f0, 0x0(r3)
/* 8012C4E0 001295C0  3C A0 54 42 */	lis r5, 0x5442
/* 8012C4E4 001295C4  7F A4 EB 78 */	mr r4, r29
/* 8012C4E8 001295C8  D0 1D 00 20 */	stfs f0, 0x20(r29)
/* 8012C4EC 001295CC  38 A5 4F 58 */	addi r5, r5, 0x4f58
/* 8012C4F0 001295D0  C0 03 00 04 */	lfs f0, 0x4(r3)
/* 8012C4F4 001295D4  D0 1D 00 24 */	stfs f0, 0x24(r29)
/* 8012C4F8 001295D8  C0 03 00 08 */	lfs f0, 0x8(r3)
/* 8012C4FC 001295DC  7F C3 F3 78 */	mr r3, r30
/* 8012C500 001295E0  D0 1D 00 28 */	stfs f0, 0x28(r29)
/* 8012C504 001295E4  4B F2 86 F9 */	bl zEntInit__FP4zEntP9xEntAssetUi
/* 8012C508 001295E8  93 FE 00 D8 */	stw r31, 0xd8(r30)
/* 8012C50C 001295EC  3C 60 80 13 */	lis r3, zEntTeleportBox_Update__FP4xEntP6xScenef@ha
/* 8012C510 001295F0  3C 80 80 13 */	lis r4, zEntTeleportBoxEventCB__FP5xBaseP5xBaseUiPCfP5xBase@ha
/* 8012C514 001295F4  38 A0 00 00 */	li r5, 0x0
/* 8012C518 001295F8  88 DE 00 23 */	lbz r6, 0x23(r30)
/* 8012C51C 001295FC  38 03 CF F8 */	addi r0, r3, zEntTeleportBox_Update__FP4xEntP6xScenef@l
/* 8012C520 00129600  38 84 D7 80 */	addi r4, r4, zEntTeleportBoxEventCB__FP5xBaseP5xBaseUiPCfP5xBase@l
/* 8012C524 00129604  60 C3 00 10 */	ori r3, r6, 0x10
/* 8012C528 00129608  98 7E 00 23 */	stb r3, 0x23(r30)
/* 8012C52C 0012960C  88 7E 00 22 */	lbz r3, 0x22(r30)
/* 8012C530 00129610  60 63 00 18 */	ori r3, r3, 0x18
/* 8012C534 00129614  98 7E 00 22 */	stb r3, 0x22(r30)
/* 8012C538 00129618  90 BE 00 40 */	stw r5, 0x40(r30)
/* 8012C53C 0012961C  90 9E 00 0C */	stw r4, 0xc(r30)
/* 8012C540 00129620  90 1E 00 34 */	stw r0, 0x34(r30)
/* 8012C544 00129624  88 1E 00 05 */	lbz r0, 0x5(r30)
/* 8012C548 00129628  28 00 00 00 */	cmplwi r0, 0x0
/* 8012C54C 0012962C  41 82 00 14 */	beq .L_8012C560
/* 8012C550 00129630  80 7E 00 10 */	lwz r3, 0x10(r30)
/* 8012C554 00129634  38 03 00 78 */	addi r0, r3, 0x78
/* 8012C558 00129638  90 1E 00 08 */	stw r0, 0x8(r30)
/* 8012C55C 0012963C  48 00 00 08 */	b .L_8012C564
.L_8012C560:
/* 8012C560 00129640  90 BE 00 08 */	stw r5, 0x8(r30)
.L_8012C564:
/* 8012C564 00129644  3C 80 80 13 */	lis r4, zEntTeleportBoxEventCB__FP5xBaseP5xBaseUiPCfP5xBase@ha
/* 8012C568 00129648  7F C3 F3 78 */	mr r3, r30
/* 8012C56C 0012964C  38 04 D7 80 */	addi r0, r4, zEntTeleportBoxEventCB__FP5xBaseP5xBaseUiPCfP5xBase@l
/* 8012C570 00129650  90 1E 00 0C */	stw r0, 0xc(r30)
/* 8012C574 00129654  4B EE C9 DD */	bl xEntReset__FP4xEnt
/* 8012C578 00129658  3C 60 80 27 */	lis r3, "@stringBase0"@ha
/* 8012C57C 0012965C  38 80 00 00 */	li r4, 0x0
/* 8012C580 00129660  38 63 C2 B0 */	addi r3, r3, "@stringBase0"@l
/* 8012C584 00129664  38 A0 00 00 */	li r5, 0x0
/* 8012C588 00129668  38 63 00 20 */	addi r3, r3, 0x20
/* 8012C58C 0012966C  4B ED A6 E5 */	bl xAnimTableNew__FPCcPP10xAnimTableUi
/* 8012C590 00129670  3C A0 80 00 */	lis r5, xAnimDefaultBeforeEnter__FP9xAnimPlayP10xAnimState@ha
/* 8012C594 00129674  3C 80 80 27 */	lis r4, "@stringBase0"@ha
/* 8012C598 00129678  38 05 6C FC */	addi r0, r5, xAnimDefaultBeforeEnter__FP9xAnimPlayP10xAnimState@l
/* 8012C59C 0012967C  7C 7F 1B 78 */	mr r31, r3
/* 8012C5A0 00129680  90 01 00 08 */	stw r0, 0x8(r1)
/* 8012C5A4 00129684  38 00 00 00 */	li r0, 0x0
/* 8012C5A8 00129688  38 84 C2 B0 */	addi r4, r4, "@stringBase0"@l
/* 8012C5AC 0012968C  38 A0 00 10 */	li r5, 0x10
/* 8012C5B0 00129690  90 01 00 0C */	stw r0, 0xc(r1)
/* 8012C5B4 00129694  38 84 00 25 */	addi r4, r4, 0x25
/* 8012C5B8 00129698  38 C0 00 00 */	li r6, 0x0
/* 8012C5BC 0012969C  38 E0 00 00 */	li r7, 0x0
/* 8012C5C0 001296A0  90 01 00 10 */	stw r0, 0x10(r1)
/* 8012C5C4 001296A4  39 00 00 00 */	li r8, 0x0
/* 8012C5C8 001296A8  39 20 00 00 */	li r9, 0x0
/* 8012C5CC 001296AC  39 40 00 00 */	li r10, 0x0
/* 8012C5D0 001296B0  C0 22 A2 44 */	lfs f1, "@780"@sda21(r2)
/* 8012C5D4 001296B4  C0 42 A2 40 */	lfs f2, "@779"@sda21(r2)
/* 8012C5D8 001296B8  4B ED A7 81 */	bl xAnimTableNewState__FP10xAnimTablePCcUiUifPfPffPUsPvPFP9xAnimPlayP10xAnimState_vPFP10xAnimStateP11xAnimSinglePv_vPFP9xAnimPlayP5xQuatP5xVec3i_v
/* 8012C5DC 001296BC  3C 80 80 00 */	lis r4, xAnimDefaultBeforeEnter__FP9xAnimPlayP10xAnimState@ha
/* 8012C5E0 001296C0  3C 60 80 27 */	lis r3, "@stringBase0"@ha
/* 8012C5E4 001296C4  38 84 6C FC */	addi r4, r4, xAnimDefaultBeforeEnter__FP9xAnimPlayP10xAnimState@l
/* 8012C5E8 001296C8  38 00 00 00 */	li r0, 0x0
/* 8012C5EC 001296CC  90 81 00 08 */	stw r4, 0x8(r1)
/* 8012C5F0 001296D0  38 83 C2 B0 */	addi r4, r3, "@stringBase0"@l
/* 8012C5F4 001296D4  7F E3 FB 78 */	mr r3, r31
/* 8012C5F8 001296D8  38 A0 00 10 */	li r5, 0x10
/* 8012C5FC 001296DC  90 01 00 0C */	stw r0, 0xc(r1)
/* 8012C600 001296E0  38 84 00 2C */	addi r4, r4, 0x2c
/* 8012C604 001296E4  38 C0 00 00 */	li r6, 0x0
/* 8012C608 001296E8  38 E0 00 00 */	li r7, 0x0
/* 8012C60C 001296EC  90 01 00 10 */	stw r0, 0x10(r1)
/* 8012C610 001296F0  39 00 00 00 */	li r8, 0x0
/* 8012C614 001296F4  39 20 00 00 */	li r9, 0x0
/* 8012C618 001296F8  39 40 00 00 */	li r10, 0x0
/* 8012C61C 001296FC  C0 22 A2 44 */	lfs f1, "@780"@sda21(r2)
/* 8012C620 00129700  C0 42 A2 40 */	lfs f2, "@779"@sda21(r2)
/* 8012C624 00129704  4B ED A7 35 */	bl xAnimTableNewState__FP10xAnimTablePCcUiUifPfPffPUsPvPFP9xAnimPlayP10xAnimState_vPFP10xAnimStateP11xAnimSinglePv_vPFP9xAnimPlayP5xQuatP5xVec3i_v
/* 8012C628 00129708  3C 80 80 00 */	lis r4, xAnimDefaultBeforeEnter__FP9xAnimPlayP10xAnimState@ha
/* 8012C62C 0012970C  3C 60 80 27 */	lis r3, "@stringBase0"@ha
/* 8012C630 00129710  38 84 6C FC */	addi r4, r4, xAnimDefaultBeforeEnter__FP9xAnimPlayP10xAnimState@l
/* 8012C634 00129714  38 00 00 00 */	li r0, 0x0
/* 8012C638 00129718  90 81 00 08 */	stw r4, 0x8(r1)
/* 8012C63C 0012971C  38 83 C2 B0 */	addi r4, r3, "@stringBase0"@l
/* 8012C640 00129720  7F E3 FB 78 */	mr r3, r31
/* 8012C644 00129724  38 A0 00 00 */	li r5, 0x0
/* 8012C648 00129728  90 01 00 0C */	stw r0, 0xc(r1)
/* 8012C64C 0012972C  38 84 00 31 */	addi r4, r4, 0x31
/* 8012C650 00129730  38 C0 00 00 */	li r6, 0x0
/* 8012C654 00129734  38 E0 00 00 */	li r7, 0x0
/* 8012C658 00129738  90 01 00 10 */	stw r0, 0x10(r1)
/* 8012C65C 0012973C  39 00 00 00 */	li r8, 0x0
/* 8012C660 00129740  39 20 00 00 */	li r9, 0x0
/* 8012C664 00129744  39 40 00 00 */	li r10, 0x0
/* 8012C668 00129748  C0 22 A2 44 */	lfs f1, "@780"@sda21(r2)
/* 8012C66C 0012974C  C0 42 A2 40 */	lfs f2, "@779"@sda21(r2)
/* 8012C670 00129750  4B ED A6 E9 */	bl xAnimTableNewState__FP10xAnimTablePCcUiUifPfPffPUsPvPFP9xAnimPlayP10xAnimState_vPFP10xAnimStateP11xAnimSinglePv_vPFP9xAnimPlayP5xQuatP5xVec3i_v
/* 8012C674 00129754  3C 80 80 00 */	lis r4, xAnimDefaultBeforeEnter__FP9xAnimPlayP10xAnimState@ha
/* 8012C678 00129758  3C 60 80 27 */	lis r3, "@stringBase0"@ha
/* 8012C67C 0012975C  38 84 6C FC */	addi r4, r4, xAnimDefaultBeforeEnter__FP9xAnimPlayP10xAnimState@l
/* 8012C680 00129760  38 00 00 00 */	li r0, 0x0
/* 8012C684 00129764  90 81 00 08 */	stw r4, 0x8(r1)
/* 8012C688 00129768  38 83 C2 B0 */	addi r4, r3, "@stringBase0"@l
/* 8012C68C 0012976C  7F E3 FB 78 */	mr r3, r31
/* 8012C690 00129770  38 A0 00 00 */	li r5, 0x0
/* 8012C694 00129774  90 01 00 0C */	stw r0, 0xc(r1)
/* 8012C698 00129778  38 84 00 38 */	addi r4, r4, 0x38
/* 8012C69C 0012977C  38 C0 00 00 */	li r6, 0x0
/* 8012C6A0 00129780  38 E0 00 00 */	li r7, 0x0
/* 8012C6A4 00129784  90 01 00 10 */	stw r0, 0x10(r1)
/* 8012C6A8 00129788  39 00 00 00 */	li r8, 0x0
/* 8012C6AC 0012978C  39 20 00 00 */	li r9, 0x0
/* 8012C6B0 00129790  39 40 00 00 */	li r10, 0x0
/* 8012C6B4 00129794  C0 22 A2 44 */	lfs f1, "@780"@sda21(r2)
/* 8012C6B8 00129798  C0 42 A2 40 */	lfs f2, "@779"@sda21(r2)
/* 8012C6BC 0012979C  4B ED A6 9D */	bl xAnimTableNewState__FP10xAnimTablePCcUiUifPfPffPUsPvPFP9xAnimPlayP10xAnimState_vPFP10xAnimStateP11xAnimSinglePv_vPFP9xAnimPlayP5xQuatP5xVec3i_v
/* 8012C6C0 001297A0  3C 80 80 00 */	lis r4, xAnimDefaultBeforeEnter__FP9xAnimPlayP10xAnimState@ha
/* 8012C6C4 001297A4  3C 60 80 27 */	lis r3, "@stringBase0"@ha
/* 8012C6C8 001297A8  38 84 6C FC */	addi r4, r4, xAnimDefaultBeforeEnter__FP9xAnimPlayP10xAnimState@l
/* 8012C6CC 001297AC  38 00 00 00 */	li r0, 0x0
/* 8012C6D0 001297B0  90 81 00 08 */	stw r4, 0x8(r1)
/* 8012C6D4 001297B4  38 83 C2 B0 */	addi r4, r3, "@stringBase0"@l
/* 8012C6D8 001297B8  7F E3 FB 78 */	mr r3, r31
/* 8012C6DC 001297BC  38 A0 00 00 */	li r5, 0x0
/* 8012C6E0 001297C0  90 01 00 0C */	stw r0, 0xc(r1)
/* 8012C6E4 001297C4  38 84 00 41 */	addi r4, r4, 0x41
/* 8012C6E8 001297C8  38 C0 00 00 */	li r6, 0x0
/* 8012C6EC 001297CC  38 E0 00 00 */	li r7, 0x0
/* 8012C6F0 001297D0  90 01 00 10 */	stw r0, 0x10(r1)
/* 8012C6F4 001297D4  39 00 00 00 */	li r8, 0x0
/* 8012C6F8 001297D8  39 20 00 00 */	li r9, 0x0
/* 8012C6FC 001297DC  39 40 00 00 */	li r10, 0x0
/* 8012C700 001297E0  C0 22 A2 44 */	lfs f1, "@780"@sda21(r2)
/* 8012C704 001297E4  C0 42 A2 40 */	lfs f2, "@779"@sda21(r2)
/* 8012C708 001297E8  4B ED A6 51 */	bl xAnimTableNewState__FP10xAnimTablePCcUiUifPfPffPUsPvPFP9xAnimPlayP10xAnimState_vPFP10xAnimStateP11xAnimSinglePv_vPFP9xAnimPlayP5xQuatP5xVec3i_v
/* 8012C70C 001297EC  3C 80 80 00 */	lis r4, xAnimDefaultBeforeEnter__FP9xAnimPlayP10xAnimState@ha
/* 8012C710 001297F0  3C 60 80 27 */	lis r3, "@stringBase0"@ha
/* 8012C714 001297F4  38 84 6C FC */	addi r4, r4, xAnimDefaultBeforeEnter__FP9xAnimPlayP10xAnimState@l
/* 8012C718 001297F8  38 00 00 00 */	li r0, 0x0
/* 8012C71C 001297FC  90 81 00 08 */	stw r4, 0x8(r1)
/* 8012C720 00129800  38 83 C2 B0 */	addi r4, r3, "@stringBase0"@l
/* 8012C724 00129804  7F E3 FB 78 */	mr r3, r31
/* 8012C728 00129808  38 A0 00 00 */	li r5, 0x0
/* 8012C72C 0012980C  90 01 00 0C */	stw r0, 0xc(r1)
/* 8012C730 00129810  38 84 00 49 */	addi r4, r4, 0x49
/* 8012C734 00129814  38 C0 00 00 */	li r6, 0x0
/* 8012C738 00129818  38 E0 00 00 */	li r7, 0x0
/* 8012C73C 0012981C  90 01 00 10 */	stw r0, 0x10(r1)
/* 8012C740 00129820  39 00 00 00 */	li r8, 0x0
/* 8012C744 00129824  39 20 00 00 */	li r9, 0x0
/* 8012C748 00129828  39 40 00 00 */	li r10, 0x0
/* 8012C74C 0012982C  C0 22 A2 44 */	lfs f1, "@780"@sda21(r2)
/* 8012C750 00129830  C0 42 A2 40 */	lfs f2, "@779"@sda21(r2)
/* 8012C754 00129834  4B ED A6 05 */	bl xAnimTableNewState__FP10xAnimTablePCcUiUifPfPffPUsPvPFP9xAnimPlayP10xAnimState_vPFP10xAnimStateP11xAnimSinglePv_vPFP9xAnimPlayP5xQuatP5xVec3i_v
/* 8012C758 00129838  38 00 00 00 */	li r0, 0x0
/* 8012C75C 0012983C  3C 60 80 27 */	lis r3, "@stringBase0"@ha
/* 8012C760 00129840  90 01 00 08 */	stw r0, 0x8(r1)
/* 8012C764 00129844  38 A3 C2 B0 */	addi r5, r3, "@stringBase0"@l
/* 8012C768 00129848  3C 80 80 13 */	lis r4, OpenCheck__FP15xAnimTransitionP11xAnimSinglePv@ha
/* 8012C76C 0012984C  7F E3 FB 78 */	mr r3, r31
/* 8012C770 00129850  90 01 00 0C */	stw r0, 0xc(r1)
/* 8012C774 00129854  38 C4 C1 30 */	addi r6, r4, OpenCheck__FP15xAnimTransitionP11xAnimSinglePv@l
/* 8012C778 00129858  38 85 00 25 */	addi r4, r5, 0x25
/* 8012C77C 0012985C  38 A5 00 49 */	addi r5, r5, 0x49
/* 8012C780 00129860  C0 22 A2 40 */	lfs f1, "@779"@sda21(r2)
/* 8012C784 00129864  38 E0 00 00 */	li r7, 0x0
/* 8012C788 00129868  C0 62 A2 58 */	lfs f3, "@943"@sda21(r2)
/* 8012C78C 0012986C  39 00 00 00 */	li r8, 0x0
/* 8012C790 00129870  FC 40 08 90 */	fmr f2, f1
/* 8012C794 00129874  39 20 00 00 */	li r9, 0x0
/* 8012C798 00129878  39 40 00 01 */	li r10, 0x1
/* 8012C79C 0012987C  4B ED AC 25 */	bl xAnimTableNewTransition__FP10xAnimTablePCcPCcPFP15xAnimTransitionP11xAnimSinglePv_UiPFP15xAnimTransitionP11xAnimSinglePv_UiUiUiffUsUsfPUs
/* 8012C7A0 00129880  38 00 00 00 */	li r0, 0x0
/* 8012C7A4 00129884  3C 60 80 27 */	lis r3, "@stringBase0"@ha
/* 8012C7A8 00129888  90 01 00 08 */	stw r0, 0x8(r1)
/* 8012C7AC 0012988C  38 A3 C2 B0 */	addi r5, r3, "@stringBase0"@l
/* 8012C7B0 00129890  3C 80 80 13 */	lis r4, JumpOutCheck__FP15xAnimTransitionP11xAnimSinglePv@ha
/* 8012C7B4 00129894  3C 60 80 13 */	lis r3, JumpOutCB__FP15xAnimTransitionP11xAnimSinglePv@ha
/* 8012C7B8 00129898  90 01 00 0C */	stw r0, 0xc(r1)
/* 8012C7BC 0012989C  38 C4 C1 6C */	addi r6, r4, JumpOutCheck__FP15xAnimTransitionP11xAnimSinglePv@l
/* 8012C7C0 001298A0  38 E3 C1 80 */	addi r7, r3, JumpOutCB__FP15xAnimTransitionP11xAnimSinglePv@l
/* 8012C7C4 001298A4  38 85 00 25 */	addi r4, r5, 0x25
/* 8012C7C8 001298A8  C0 22 A2 40 */	lfs f1, "@779"@sda21(r2)
/* 8012C7CC 001298AC  7F E3 FB 78 */	mr r3, r31
/* 8012C7D0 001298B0  C0 62 A2 5C */	lfs f3, "@944"@sda21(r2)
/* 8012C7D4 001298B4  38 A5 00 41 */	addi r5, r5, 0x41
/* 8012C7D8 001298B8  FC 40 08 90 */	fmr f2, f1
/* 8012C7DC 001298BC  39 00 00 00 */	li r8, 0x0
/* 8012C7E0 001298C0  39 20 00 00 */	li r9, 0x0
/* 8012C7E4 001298C4  39 40 00 01 */	li r10, 0x1
/* 8012C7E8 001298C8  4B ED AB D9 */	bl xAnimTableNewTransition__FP10xAnimTablePCcPCcPFP15xAnimTransitionP11xAnimSinglePv_UiPFP15xAnimTransitionP11xAnimSinglePv_UiUiUiffUsUsfPUs
/* 8012C7EC 001298CC  38 00 00 00 */	li r0, 0x0
/* 8012C7F0 001298D0  3C 60 80 27 */	lis r3, "@stringBase0"@ha
/* 8012C7F4 001298D4  90 01 00 08 */	stw r0, 0x8(r1)
/* 8012C7F8 001298D8  38 A3 C2 B0 */	addi r5, r3, "@stringBase0"@l
/* 8012C7FC 001298DC  3C 80 80 13 */	lis r4, JumpOutCheck__FP15xAnimTransitionP11xAnimSinglePv@ha
/* 8012C800 001298E0  3C 60 80 13 */	lis r3, JumpOutCB__FP15xAnimTransitionP11xAnimSinglePv@ha
/* 8012C804 001298E4  90 01 00 0C */	stw r0, 0xc(r1)
/* 8012C808 001298E8  38 C4 C1 6C */	addi r6, r4, JumpOutCheck__FP15xAnimTransitionP11xAnimSinglePv@l
/* 8012C80C 001298EC  38 E3 C1 80 */	addi r7, r3, JumpOutCB__FP15xAnimTransitionP11xAnimSinglePv@l
/* 8012C810 001298F0  38 85 00 2C */	addi r4, r5, 0x2c
/* 8012C814 001298F4  C0 22 A2 40 */	lfs f1, "@779"@sda21(r2)
/* 8012C818 001298F8  7F E3 FB 78 */	mr r3, r31
/* 8012C81C 001298FC  C0 62 A2 5C */	lfs f3, "@944"@sda21(r2)
/* 8012C820 00129900  38 A5 00 41 */	addi r5, r5, 0x41
/* 8012C824 00129904  FC 40 08 90 */	fmr f2, f1
/* 8012C828 00129908  39 00 00 00 */	li r8, 0x0
/* 8012C82C 0012990C  39 20 00 00 */	li r9, 0x0
/* 8012C830 00129910  39 40 00 01 */	li r10, 0x1
/* 8012C834 00129914  4B ED AB 8D */	bl xAnimTableNewTransition__FP10xAnimTablePCcPCcPFP15xAnimTransitionP11xAnimSinglePv_UiPFP15xAnimTransitionP11xAnimSinglePv_UiUiUiffUsUsfPUs
/* 8012C838 00129918  38 00 00 00 */	li r0, 0x0
/* 8012C83C 0012991C  3C 60 80 27 */	lis r3, "@stringBase0"@ha
/* 8012C840 00129920  90 01 00 08 */	stw r0, 0x8(r1)
/* 8012C844 00129924  38 A3 C2 B0 */	addi r5, r3, "@stringBase0"@l
/* 8012C848 00129928  3C 80 80 13 */	lis r4, JumpOutCheck__FP15xAnimTransitionP11xAnimSinglePv@ha
/* 8012C84C 0012992C  3C 60 80 13 */	lis r3, JumpOutCB__FP15xAnimTransitionP11xAnimSinglePv@ha
/* 8012C850 00129930  90 01 00 0C */	stw r0, 0xc(r1)
/* 8012C854 00129934  38 C4 C1 6C */	addi r6, r4, JumpOutCheck__FP15xAnimTransitionP11xAnimSinglePv@l
/* 8012C858 00129938  38 E3 C1 80 */	addi r7, r3, JumpOutCB__FP15xAnimTransitionP11xAnimSinglePv@l
/* 8012C85C 0012993C  38 85 00 49 */	addi r4, r5, 0x49
/* 8012C860 00129940  C0 22 A2 40 */	lfs f1, "@779"@sda21(r2)
/* 8012C864 00129944  7F E3 FB 78 */	mr r3, r31
/* 8012C868 00129948  C0 62 A2 5C */	lfs f3, "@944"@sda21(r2)
/* 8012C86C 0012994C  38 A5 00 41 */	addi r5, r5, 0x41
/* 8012C870 00129950  FC 40 08 90 */	fmr f2, f1
/* 8012C874 00129954  39 00 00 00 */	li r8, 0x0
/* 8012C878 00129958  39 20 00 00 */	li r9, 0x0
/* 8012C87C 0012995C  39 40 00 01 */	li r10, 0x1
/* 8012C880 00129960  4B ED AB 41 */	bl xAnimTableNewTransition__FP10xAnimTablePCcPCcPFP15xAnimTransitionP11xAnimSinglePv_UiPFP15xAnimTransitionP11xAnimSinglePv_UiUiUiffUsUsfPUs
/* 8012C884 00129964  38 00 00 00 */	li r0, 0x0
/* 8012C888 00129968  3C 60 80 27 */	lis r3, "@stringBase0"@ha
/* 8012C88C 0012996C  90 01 00 08 */	stw r0, 0x8(r1)
/* 8012C890 00129970  38 A3 C2 B0 */	addi r5, r3, "@stringBase0"@l
/* 8012C894 00129974  3C 80 80 13 */	lis r4, JumpInCheck__FP15xAnimTransitionP11xAnimSinglePv@ha
/* 8012C898 00129978  3C 60 80 13 */	lis r3, JumpInCB__FP15xAnimTransitionP11xAnimSinglePv@ha
/* 8012C89C 0012997C  90 01 00 0C */	stw r0, 0xc(r1)
/* 8012C8A0 00129980  38 C4 C1 48 */	addi r6, r4, JumpInCheck__FP15xAnimTransitionP11xAnimSinglePv@l
/* 8012C8A4 00129984  38 E3 C1 5C */	addi r7, r3, JumpInCB__FP15xAnimTransitionP11xAnimSinglePv@l
/* 8012C8A8 00129988  38 85 00 49 */	addi r4, r5, 0x49
/* 8012C8AC 0012998C  C0 22 A2 40 */	lfs f1, "@779"@sda21(r2)
/* 8012C8B0 00129990  7F E3 FB 78 */	mr r3, r31
/* 8012C8B4 00129994  C0 62 A2 5C */	lfs f3, "@944"@sda21(r2)
/* 8012C8B8 00129998  38 A5 00 31 */	addi r5, r5, 0x31
/* 8012C8BC 0012999C  FC 40 08 90 */	fmr f2, f1
/* 8012C8C0 001299A0  39 00 00 00 */	li r8, 0x0
/* 8012C8C4 001299A4  39 20 00 00 */	li r9, 0x0
/* 8012C8C8 001299A8  39 40 00 0A */	li r10, 0xa
/* 8012C8CC 001299AC  4B ED AA F5 */	bl xAnimTableNewTransition__FP10xAnimTablePCcPCcPFP15xAnimTransitionP11xAnimSinglePv_UiPFP15xAnimTransitionP11xAnimSinglePv_UiUiUiffUsUsfPUs
/* 8012C8D0 001299B0  38 00 00 00 */	li r0, 0x0
/* 8012C8D4 001299B4  3C 60 80 27 */	lis r3, "@stringBase0"@ha
/* 8012C8D8 001299B8  90 01 00 08 */	stw r0, 0x8(r1)
/* 8012C8DC 001299BC  38 A3 C2 B0 */	addi r5, r3, "@stringBase0"@l
/* 8012C8E0 001299C0  3C 80 80 13 */	lis r4, JumpInCheck__FP15xAnimTransitionP11xAnimSinglePv@ha
/* 8012C8E4 001299C4  3C 60 80 13 */	lis r3, JumpInCB__FP15xAnimTransitionP11xAnimSinglePv@ha
/* 8012C8E8 001299C8  90 01 00 0C */	stw r0, 0xc(r1)
/* 8012C8EC 001299CC  38 C4 C1 48 */	addi r6, r4, JumpInCheck__FP15xAnimTransitionP11xAnimSinglePv@l
/* 8012C8F0 001299D0  38 E3 C1 5C */	addi r7, r3, JumpInCB__FP15xAnimTransitionP11xAnimSinglePv@l
/* 8012C8F4 001299D4  38 85 00 2C */	addi r4, r5, 0x2c
/* 8012C8F8 001299D8  C0 22 A2 40 */	lfs f1, "@779"@sda21(r2)
/* 8012C8FC 001299DC  7F E3 FB 78 */	mr r3, r31
/* 8012C900 001299E0  C0 62 A2 5C */	lfs f3, "@944"@sda21(r2)
/* 8012C904 001299E4  38 A5 00 31 */	addi r5, r5, 0x31
/* 8012C908 001299E8  FC 40 08 90 */	fmr f2, f1
/* 8012C90C 001299EC  39 00 00 00 */	li r8, 0x0
/* 8012C910 001299F0  39 20 00 00 */	li r9, 0x0
/* 8012C914 001299F4  39 40 00 0A */	li r10, 0xa
/* 8012C918 001299F8  4B ED AA A9 */	bl xAnimTableNewTransition__FP10xAnimTablePCcPCcPFP15xAnimTransitionP11xAnimSinglePv_UiPFP15xAnimTransitionP11xAnimSinglePv_UiUiUiffUsUsfPUs
/* 8012C91C 001299FC  38 00 00 00 */	li r0, 0x0
/* 8012C920 00129A00  3C 60 80 27 */	lis r3, "@stringBase0"@ha
/* 8012C924 00129A04  90 01 00 08 */	stw r0, 0x8(r1)
/* 8012C928 00129A08  38 A3 C2 B0 */	addi r5, r3, "@stringBase0"@l
/* 8012C92C 00129A0C  3C 80 80 13 */	lis r4, JItoOCheck__FP15xAnimTransitionP11xAnimSinglePv@ha
/* 8012C930 00129A10  3C 60 80 13 */	lis r3, JItoOCB__FP15xAnimTransitionP11xAnimSinglePv@ha
/* 8012C934 00129A14  90 01 00 0C */	stw r0, 0xc(r1)
/* 8012C938 00129A18  38 C4 C1 90 */	addi r6, r4, JItoOCheck__FP15xAnimTransitionP11xAnimSinglePv@l
/* 8012C93C 00129A1C  38 E3 C1 A4 */	addi r7, r3, JItoOCB__FP15xAnimTransitionP11xAnimSinglePv@l
/* 8012C940 00129A20  38 85 00 31 */	addi r4, r5, 0x31
/* 8012C944 00129A24  C0 22 A2 40 */	lfs f1, "@779"@sda21(r2)
/* 8012C948 00129A28  7F E3 FB 78 */	mr r3, r31
/* 8012C94C 00129A2C  C0 62 A2 5C */	lfs f3, "@944"@sda21(r2)
/* 8012C950 00129A30  38 A5 00 2C */	addi r5, r5, 0x2c
/* 8012C954 00129A34  FC 40 08 90 */	fmr f2, f1
/* 8012C958 00129A38  39 00 00 00 */	li r8, 0x0
/* 8012C95C 00129A3C  39 20 00 00 */	li r9, 0x0
/* 8012C960 00129A40  39 40 00 01 */	li r10, 0x1
/* 8012C964 00129A44  4B ED AA 5D */	bl xAnimTableNewTransition__FP10xAnimTablePCcPCcPFP15xAnimTransitionP11xAnimSinglePv_UiPFP15xAnimTransitionP11xAnimSinglePv_UiUiUiffUsUsfPUs
/* 8012C968 00129A48  38 00 00 00 */	li r0, 0x0
/* 8012C96C 00129A4C  3C 60 80 27 */	lis r3, "@stringBase0"@ha
/* 8012C970 00129A50  90 01 00 08 */	stw r0, 0x8(r1)
/* 8012C974 00129A54  38 A3 C2 B0 */	addi r5, r3, "@stringBase0"@l
/* 8012C978 00129A58  3C 80 80 13 */	lis r4, JOtoOCheck__FP15xAnimTransitionP11xAnimSinglePv@ha
/* 8012C97C 00129A5C  3C 60 80 13 */	lis r3, JOtoOCB__FP15xAnimTransitionP11xAnimSinglePv@ha
/* 8012C980 00129A60  90 01 00 0C */	stw r0, 0xc(r1)
/* 8012C984 00129A64  38 C4 C1 B8 */	addi r6, r4, JOtoOCheck__FP15xAnimTransitionP11xAnimSinglePv@l
/* 8012C988 00129A68  38 E3 C1 CC */	addi r7, r3, JOtoOCB__FP15xAnimTransitionP11xAnimSinglePv@l
/* 8012C98C 00129A6C  38 85 00 41 */	addi r4, r5, 0x41
/* 8012C990 00129A70  C0 22 A2 40 */	lfs f1, "@779"@sda21(r2)
/* 8012C994 00129A74  7F E3 FB 78 */	mr r3, r31
/* 8012C998 00129A78  C0 62 A2 5C */	lfs f3, "@944"@sda21(r2)
/* 8012C99C 00129A7C  38 A5 00 2C */	addi r5, r5, 0x2c
/* 8012C9A0 00129A80  FC 40 08 90 */	fmr f2, f1
/* 8012C9A4 00129A84  39 00 00 00 */	li r8, 0x0
/* 8012C9A8 00129A88  39 20 00 00 */	li r9, 0x0
/* 8012C9AC 00129A8C  39 40 00 01 */	li r10, 0x1
/* 8012C9B0 00129A90  4B ED AA 11 */	bl xAnimTableNewTransition__FP10xAnimTablePCcPCcPFP15xAnimTransitionP11xAnimSinglePv_UiPFP15xAnimTransitionP11xAnimSinglePv_UiUiUiffUsUsfPUs
/* 8012C9B4 00129A94  38 00 00 00 */	li r0, 0x0
/* 8012C9B8 00129A98  3C 60 80 27 */	lis r3, "@stringBase0"@ha
/* 8012C9BC 00129A9C  90 01 00 08 */	stw r0, 0x8(r1)
/* 8012C9C0 00129AA0  38 A3 C2 B0 */	addi r5, r3, "@stringBase0"@l
/* 8012C9C4 00129AA4  3C 80 80 13 */	lis r4, CtoOCheck__FP15xAnimTransitionP11xAnimSinglePv@ha
/* 8012C9C8 00129AA8  3C 60 80 13 */	lis r3, CtoOCB__FP15xAnimTransitionP11xAnimSinglePv@ha
/* 8012C9CC 00129AAC  90 01 00 0C */	stw r0, 0xc(r1)
/* 8012C9D0 00129AB0  38 C4 C1 DC */	addi r6, r4, CtoOCheck__FP15xAnimTransitionP11xAnimSinglePv@l
/* 8012C9D4 00129AB4  38 E3 C2 30 */	addi r7, r3, CtoOCB__FP15xAnimTransitionP11xAnimSinglePv@l
/* 8012C9D8 00129AB8  38 85 00 25 */	addi r4, r5, 0x25
/* 8012C9DC 00129ABC  C0 22 A2 40 */	lfs f1, "@779"@sda21(r2)
/* 8012C9E0 00129AC0  7F E3 FB 78 */	mr r3, r31
/* 8012C9E4 00129AC4  C0 62 A2 5C */	lfs f3, "@944"@sda21(r2)
/* 8012C9E8 00129AC8  38 A5 00 49 */	addi r5, r5, 0x49
/* 8012C9EC 00129ACC  FC 40 08 90 */	fmr f2, f1
/* 8012C9F0 00129AD0  39 00 00 00 */	li r8, 0x0
/* 8012C9F4 00129AD4  39 20 00 00 */	li r9, 0x0
/* 8012C9F8 00129AD8  39 40 00 01 */	li r10, 0x1
/* 8012C9FC 00129ADC  4B ED A9 C5 */	bl xAnimTableNewTransition__FP10xAnimTablePCcPCcPFP15xAnimTransitionP11xAnimSinglePv_UiPFP15xAnimTransitionP11xAnimSinglePv_UiUiUiffUsUsfPUs
/* 8012CA00 00129AE0  3C 80 80 27 */	lis r4, "@stringBase0"@ha
/* 8012CA04 00129AE4  7F E3 FB 78 */	mr r3, r31
/* 8012CA08 00129AE8  38 84 C2 B0 */	addi r4, r4, "@stringBase0"@l
/* 8012CA0C 00129AEC  38 84 00 31 */	addi r4, r4, 0x31
/* 8012CA10 00129AF0  4B ED AD 4D */	bl xAnimTableGetState__FP10xAnimTablePCc
/* 8012CA14 00129AF4  3C 80 80 13 */	lis r4, JumpInEffectPlrInvisibleCB__FUiP17xAnimActiveEffectP11xAnimSinglePv@ha
/* 8012CA18 00129AF8  C0 22 A2 60 */	lfs f1, "@945"@sda21(r2)
/* 8012CA1C 00129AFC  38 A4 C2 B0 */	addi r5, r4, JumpInEffectPlrInvisibleCB__FUiP17xAnimActiveEffectP11xAnimSinglePv@l
/* 8012CA20 00129B00  C0 42 A2 40 */	lfs f2, "@779"@sda21(r2)
/* 8012CA24 00129B04  7C 7D 1B 78 */	mr r29, r3
/* 8012CA28 00129B08  38 80 00 01 */	li r4, 0x1
/* 8012CA2C 00129B0C  38 C0 00 00 */	li r6, 0x0
/* 8012CA30 00129B10  4B ED A1 6D */	bl xAnimStateNewEffect__FP10xAnimStateUiffPFUiP17xAnimActiveEffectP11xAnimSinglePv_UiUi
/* 8012CA34 00129B14  3C 60 80 13 */	lis r3, JumpInEffectPlrTeleportCB__FUiP17xAnimActiveEffectP11xAnimSinglePv@ha
/* 8012CA38 00129B18  C0 22 A2 64 */	lfs f1, "@946"@sda21(r2)
/* 8012CA3C 00129B1C  38 A3 C2 E4 */	addi r5, r3, JumpInEffectPlrTeleportCB__FUiP17xAnimActiveEffectP11xAnimSinglePv@l
/* 8012CA40 00129B20  C0 42 A2 40 */	lfs f2, "@779"@sda21(r2)
/* 8012CA44 00129B24  7F A3 EB 78 */	mr r3, r29
/* 8012CA48 00129B28  38 80 00 01 */	li r4, 0x1
/* 8012CA4C 00129B2C  38 C0 00 00 */	li r6, 0x0
/* 8012CA50 00129B30  4B ED A1 4D */	bl xAnimStateNewEffect__FP10xAnimStateUiffPFUiP17xAnimActiveEffectP11xAnimSinglePv_UiUi
/* 8012CA54 00129B34  3C 60 80 13 */	lis r3, JumpInEffectJIAnimCB__FUiP17xAnimActiveEffectP11xAnimSinglePv@ha
/* 8012CA58 00129B38  C0 22 A2 54 */	lfs f1, "@888"@sda21(r2)
/* 8012CA5C 00129B3C  38 A3 C2 F4 */	addi r5, r3, JumpInEffectJIAnimCB__FUiP17xAnimActiveEffectP11xAnimSinglePv@l
/* 8012CA60 00129B40  C0 42 A2 40 */	lfs f2, "@779"@sda21(r2)
/* 8012CA64 00129B44  7F A3 EB 78 */	mr r3, r29
/* 8012CA68 00129B48  38 80 00 01 */	li r4, 0x1
/* 8012CA6C 00129B4C  38 C0 00 00 */	li r6, 0x0
/* 8012CA70 00129B50  4B ED A1 2D */	bl xAnimStateNewEffect__FP10xAnimStateUiffPFUiP17xAnimActiveEffectP11xAnimSinglePv_UiUi
/* 8012CA74 00129B54  3C 80 80 27 */	lis r4, "@stringBase0"@ha
/* 8012CA78 00129B58  7F E3 FB 78 */	mr r3, r31
/* 8012CA7C 00129B5C  38 84 C2 B0 */	addi r4, r4, "@stringBase0"@l
/* 8012CA80 00129B60  38 84 00 41 */	addi r4, r4, 0x41
/* 8012CA84 00129B64  4B ED AC D9 */	bl xAnimTableGetState__FP10xAnimTablePCc
/* 8012CA88 00129B68  3C 80 80 13 */	lis r4, JumpOutEffectPlrVisibleCB__FUiP17xAnimActiveEffectP11xAnimSinglePv@ha
/* 8012CA8C 00129B6C  C0 22 A2 60 */	lfs f1, "@945"@sda21(r2)
/* 8012CA90 00129B70  38 A4 C3 20 */	addi r5, r4, JumpOutEffectPlrVisibleCB__FUiP17xAnimActiveEffectP11xAnimSinglePv@l
/* 8012CA94 00129B74  C0 42 A2 40 */	lfs f2, "@779"@sda21(r2)
/* 8012CA98 00129B78  7C 7D 1B 78 */	mr r29, r3
/* 8012CA9C 00129B7C  38 80 00 01 */	li r4, 0x1
/* 8012CAA0 00129B80  38 C0 00 00 */	li r6, 0x0
/* 8012CAA4 00129B84  4B ED A0 F9 */	bl xAnimStateNewEffect__FP10xAnimStateUiffPFUiP17xAnimActiveEffectP11xAnimSinglePv_UiUi
/* 8012CAA8 00129B88  3C 60 80 13 */	lis r3, JumpOutEffectPlrEjectCB__FUiP17xAnimActiveEffectP11xAnimSinglePv@ha
/* 8012CAAC 00129B8C  C0 22 A2 68 */	lfs f1, "@947"@sda21(r2)
/* 8012CAB0 00129B90  38 A3 C3 5C */	addi r5, r3, JumpOutEffectPlrEjectCB__FUiP17xAnimActiveEffectP11xAnimSinglePv@l
/* 8012CAB4 00129B94  C0 42 A2 40 */	lfs f2, "@779"@sda21(r2)
/* 8012CAB8 00129B98  7F A3 EB 78 */	mr r3, r29
/* 8012CABC 00129B9C  38 80 00 01 */	li r4, 0x1
/* 8012CAC0 00129BA0  38 C0 00 00 */	li r6, 0x0
/* 8012CAC4 00129BA4  4B ED A0 D9 */	bl xAnimStateNewEffect__FP10xAnimStateUiffPFUiP17xAnimActiveEffectP11xAnimSinglePv_UiUi
/* 8012CAC8 00129BA8  3C 60 80 13 */	lis r3, JumpOutEffectJOAnimCB__FUiP17xAnimActiveEffectP11xAnimSinglePv@ha
/* 8012CACC 00129BAC  C0 22 A2 54 */	lfs f1, "@888"@sda21(r2)
/* 8012CAD0 00129BB0  38 A3 C3 BC */	addi r5, r3, JumpOutEffectJOAnimCB__FUiP17xAnimActiveEffectP11xAnimSinglePv@l
/* 8012CAD4 00129BB4  C0 42 A2 40 */	lfs f2, "@779"@sda21(r2)
/* 8012CAD8 00129BB8  7F A3 EB 78 */	mr r3, r29
/* 8012CADC 00129BBC  38 80 00 01 */	li r4, 0x1
/* 8012CAE0 00129BC0  38 C0 00 00 */	li r6, 0x0
/* 8012CAE4 00129BC4  4B ED A0 B9 */	bl xAnimStateNewEffect__FP10xAnimStateUiffPFUiP17xAnimActiveEffectP11xAnimSinglePv_UiUi
/* 8012CAE8 00129BC8  3C 80 80 27 */	lis r4, "@stringBase0"@ha
/* 8012CAEC 00129BCC  7F E3 FB 78 */	mr r3, r31
/* 8012CAF0 00129BD0  38 84 C2 B0 */	addi r4, r4, "@stringBase0"@l
/* 8012CAF4 00129BD4  38 84 00 49 */	addi r4, r4, 0x49
/* 8012CAF8 00129BD8  4B ED AC 65 */	bl xAnimTableGetState__FP10xAnimTablePCc
/* 8012CAFC 00129BDC  3C 80 80 13 */	lis r4, CtoOEffectTboxEnableCB__FUiP17xAnimActiveEffectP11xAnimSinglePv@ha
/* 8012CB00 00129BE0  C0 22 A2 64 */	lfs f1, "@946"@sda21(r2)
/* 8012CB04 00129BE4  38 A4 C3 04 */	addi r5, r4, CtoOEffectTboxEnableCB__FUiP17xAnimActiveEffectP11xAnimSinglePv@l
/* 8012CB08 00129BE8  C0 42 A2 40 */	lfs f2, "@779"@sda21(r2)
/* 8012CB0C 00129BEC  38 80 00 01 */	li r4, 0x1
/* 8012CB10 00129BF0  38 C0 00 00 */	li r6, 0x0
/* 8012CB14 00129BF4  4B ED A0 89 */	bl xAnimStateNewEffect__FP10xAnimStateUiffPFUiP17xAnimActiveEffectP11xAnimSinglePv_UiUi
/* 8012CB18 00129BF8  3C 60 80 27 */	lis r3, "@stringBase0"@ha
/* 8012CB1C 00129BFC  38 63 C2 B0 */	addi r3, r3, "@stringBase0"@l
/* 8012CB20 00129C00  38 63 00 55 */	addi r3, r3, 0x55
/* 8012CB24 00129C04  4B F1 F6 F1 */	bl xStrHash__FPCc
/* 8012CB28 00129C08  38 81 00 18 */	addi r4, r1, 0x18
/* 8012CB2C 00129C0C  4B F1 EB E1 */	bl xSTFindAsset__FUiPUi
/* 8012CB30 00129C10  28 03 00 00 */	cmplwi r3, 0x0
/* 8012CB34 00129C14  41 82 00 54 */	beq .L_8012CB88
/* 8012CB38 00129C18  3C 80 80 27 */	lis r4, "@stringBase0"@ha
/* 8012CB3C 00129C1C  38 A0 00 00 */	li r5, 0x0
/* 8012CB40 00129C20  38 84 C2 B0 */	addi r4, r4, "@stringBase0"@l
/* 8012CB44 00129C24  38 C0 00 00 */	li r6, 0x0
/* 8012CB48 00129C28  38 84 00 72 */	addi r4, r4, 0x72
/* 8012CB4C 00129C2C  4B ED 9A 1D */	bl xAnimFileNew__FPvPCcUiPP9xAnimFile
/* 8012CB50 00129C30  3C A0 80 27 */	lis r5, "@stringBase0"@ha
/* 8012CB54 00129C34  7C 64 1B 78 */	mr r4, r3
/* 8012CB58 00129C38  38 A5 C2 B0 */	addi r5, r5, "@stringBase0"@l
/* 8012CB5C 00129C3C  7F E3 FB 78 */	mr r3, r31
/* 8012CB60 00129C40  38 A5 00 25 */	addi r5, r5, 0x25
/* 8012CB64 00129C44  4B ED AA 11 */	bl xAnimTableAddFile__FP10xAnimTableP9xAnimFilePCc
/* 8012CB68 00129C48  3C 60 80 3C */	lis r3, globals@ha
/* 8012CB6C 00129C4C  80 DE 00 24 */	lwz r6, 0x24(r30)
/* 8012CB70 00129C50  38 63 05 58 */	addi r3, r3, globals@l
/* 8012CB74 00129C54  7F C4 F3 78 */	mr r4, r30
/* 8012CB78 00129C58  80 63 1F C0 */	lwz r3, 0x1fc0(r3)
/* 8012CB7C 00129C5C  7F E5 FB 78 */	mr r5, r31
/* 8012CB80 00129C60  38 63 00 48 */	addi r3, r3, 0x48
/* 8012CB84 00129C64  4B ED C7 51 */	bl xAnimPoolAlloc__FP8xMemPoolPvP10xAnimTableP14xModelInstance
.L_8012CB88:
/* 8012CB88 00129C68  3C 60 80 27 */	lis r3, "@stringBase0"@ha
/* 8012CB8C 00129C6C  38 63 C2 B0 */	addi r3, r3, "@stringBase0"@l
/* 8012CB90 00129C70  38 63 00 73 */	addi r3, r3, 0x73
/* 8012CB94 00129C74  4B F1 F6 81 */	bl xStrHash__FPCc
/* 8012CB98 00129C78  38 81 00 18 */	addi r4, r1, 0x18
/* 8012CB9C 00129C7C  4B F1 EB 71 */	bl xSTFindAsset__FUiPUi
/* 8012CBA0 00129C80  28 03 00 00 */	cmplwi r3, 0x0
/* 8012CBA4 00129C84  41 82 00 54 */	beq .L_8012CBF8
/* 8012CBA8 00129C88  3C 80 80 27 */	lis r4, "@stringBase0"@ha
/* 8012CBAC 00129C8C  38 A0 00 00 */	li r5, 0x0
/* 8012CBB0 00129C90  38 84 C2 B0 */	addi r4, r4, "@stringBase0"@l
/* 8012CBB4 00129C94  38 C0 00 00 */	li r6, 0x0
/* 8012CBB8 00129C98  38 84 00 72 */	addi r4, r4, 0x72
/* 8012CBBC 00129C9C  4B ED 99 AD */	bl xAnimFileNew__FPvPCcUiPP9xAnimFile
/* 8012CBC0 00129CA0  3C A0 80 27 */	lis r5, "@stringBase0"@ha
/* 8012CBC4 00129CA4  7C 64 1B 78 */	mr r4, r3
/* 8012CBC8 00129CA8  38 A5 C2 B0 */	addi r5, r5, "@stringBase0"@l
/* 8012CBCC 00129CAC  7F E3 FB 78 */	mr r3, r31
/* 8012CBD0 00129CB0  38 A5 00 31 */	addi r5, r5, 0x31
/* 8012CBD4 00129CB4  4B ED A9 A1 */	bl xAnimTableAddFile__FP10xAnimTableP9xAnimFilePCc
/* 8012CBD8 00129CB8  3C 60 80 3C */	lis r3, globals@ha
/* 8012CBDC 00129CBC  80 DE 00 24 */	lwz r6, 0x24(r30)
/* 8012CBE0 00129CC0  38 63 05 58 */	addi r3, r3, globals@l
/* 8012CBE4 00129CC4  7F C4 F3 78 */	mr r4, r30
/* 8012CBE8 00129CC8  80 63 1F C0 */	lwz r3, 0x1fc0(r3)
/* 8012CBEC 00129CCC  7F E5 FB 78 */	mr r5, r31
/* 8012CBF0 00129CD0  38 63 00 48 */	addi r3, r3, 0x48
/* 8012CBF4 00129CD4  4B ED C6 E1 */	bl xAnimPoolAlloc__FP8xMemPoolPvP10xAnimTableP14xModelInstance
.L_8012CBF8:
/* 8012CBF8 00129CD8  3C 60 80 27 */	lis r3, "@stringBase0"@ha
/* 8012CBFC 00129CDC  38 63 C2 B0 */	addi r3, r3, "@stringBase0"@l
/* 8012CC00 00129CE0  38 63 00 99 */	addi r3, r3, 0x99
/* 8012CC04 00129CE4  4B F1 F6 11 */	bl xStrHash__FPCc
/* 8012CC08 00129CE8  38 81 00 18 */	addi r4, r1, 0x18
/* 8012CC0C 00129CEC  4B F1 EB 01 */	bl xSTFindAsset__FUiPUi
/* 8012CC10 00129CF0  28 03 00 00 */	cmplwi r3, 0x0
/* 8012CC14 00129CF4  41 82 00 54 */	beq .L_8012CC68
/* 8012CC18 00129CF8  3C 80 80 27 */	lis r4, "@stringBase0"@ha
/* 8012CC1C 00129CFC  38 A0 00 00 */	li r5, 0x0
/* 8012CC20 00129D00  38 84 C2 B0 */	addi r4, r4, "@stringBase0"@l
/* 8012CC24 00129D04  38 C0 00 00 */	li r6, 0x0
/* 8012CC28 00129D08  38 84 00 72 */	addi r4, r4, 0x72
/* 8012CC2C 00129D0C  4B ED 99 3D */	bl xAnimFileNew__FPvPCcUiPP9xAnimFile
/* 8012CC30 00129D10  3C A0 80 27 */	lis r5, "@stringBase0"@ha
/* 8012CC34 00129D14  7C 64 1B 78 */	mr r4, r3
/* 8012CC38 00129D18  38 A5 C2 B0 */	addi r5, r5, "@stringBase0"@l
/* 8012CC3C 00129D1C  7F E3 FB 78 */	mr r3, r31
/* 8012CC40 00129D20  38 A5 00 2C */	addi r5, r5, 0x2c
/* 8012CC44 00129D24  4B ED A9 31 */	bl xAnimTableAddFile__FP10xAnimTableP9xAnimFilePCc
/* 8012CC48 00129D28  3C 60 80 3C */	lis r3, globals@ha
/* 8012CC4C 00129D2C  80 DE 00 24 */	lwz r6, 0x24(r30)
/* 8012CC50 00129D30  38 63 05 58 */	addi r3, r3, globals@l
/* 8012CC54 00129D34  7F C4 F3 78 */	mr r4, r30
/* 8012CC58 00129D38  80 63 1F C0 */	lwz r3, 0x1fc0(r3)
/* 8012CC5C 00129D3C  7F E5 FB 78 */	mr r5, r31
/* 8012CC60 00129D40  38 63 00 48 */	addi r3, r3, 0x48
/* 8012CC64 00129D44  4B ED C6 71 */	bl xAnimPoolAlloc__FP8xMemPoolPvP10xAnimTableP14xModelInstance
.L_8012CC68:
/* 8012CC68 00129D48  3C 60 80 27 */	lis r3, "@stringBase0"@ha
/* 8012CC6C 00129D4C  38 63 C2 B0 */	addi r3, r3, "@stringBase0"@l
/* 8012CC70 00129D50  38 63 00 B4 */	addi r3, r3, 0xb4
/* 8012CC74 00129D54  4B F1 F5 A1 */	bl xStrHash__FPCc
/* 8012CC78 00129D58  38 81 00 18 */	addi r4, r1, 0x18
/* 8012CC7C 00129D5C  4B F1 EA 91 */	bl xSTFindAsset__FUiPUi
/* 8012CC80 00129D60  28 03 00 00 */	cmplwi r3, 0x0
/* 8012CC84 00129D64  41 82 00 54 */	beq .L_8012CCD8
/* 8012CC88 00129D68  3C 80 80 27 */	lis r4, "@stringBase0"@ha
/* 8012CC8C 00129D6C  38 A0 00 00 */	li r5, 0x0
/* 8012CC90 00129D70  38 84 C2 B0 */	addi r4, r4, "@stringBase0"@l
/* 8012CC94 00129D74  38 C0 00 00 */	li r6, 0x0
/* 8012CC98 00129D78  38 84 00 72 */	addi r4, r4, 0x72
/* 8012CC9C 00129D7C  4B ED 98 CD */	bl xAnimFileNew__FPvPCcUiPP9xAnimFile
/* 8012CCA0 00129D80  3C A0 80 27 */	lis r5, "@stringBase0"@ha
/* 8012CCA4 00129D84  7C 64 1B 78 */	mr r4, r3
/* 8012CCA8 00129D88  38 A5 C2 B0 */	addi r5, r5, "@stringBase0"@l
/* 8012CCAC 00129D8C  7F E3 FB 78 */	mr r3, r31
/* 8012CCB0 00129D90  38 A5 00 41 */	addi r5, r5, 0x41
/* 8012CCB4 00129D94  4B ED A8 C1 */	bl xAnimTableAddFile__FP10xAnimTableP9xAnimFilePCc
/* 8012CCB8 00129D98  3C 60 80 3C */	lis r3, globals@ha
/* 8012CCBC 00129D9C  80 DE 00 24 */	lwz r6, 0x24(r30)
/* 8012CCC0 00129DA0  38 63 05 58 */	addi r3, r3, globals@l
/* 8012CCC4 00129DA4  7F C4 F3 78 */	mr r4, r30
/* 8012CCC8 00129DA8  80 63 1F C0 */	lwz r3, 0x1fc0(r3)
/* 8012CCCC 00129DAC  7F E5 FB 78 */	mr r5, r31
/* 8012CCD0 00129DB0  38 63 00 48 */	addi r3, r3, 0x48
/* 8012CCD4 00129DB4  4B ED C6 01 */	bl xAnimPoolAlloc__FP8xMemPoolPvP10xAnimTableP14xModelInstance
.L_8012CCD8:
/* 8012CCD8 00129DB8  3C 60 80 27 */	lis r3, "@stringBase0"@ha
/* 8012CCDC 00129DBC  38 63 C2 B0 */	addi r3, r3, "@stringBase0"@l
/* 8012CCE0 00129DC0  38 63 00 DB */	addi r3, r3, 0xdb
/* 8012CCE4 00129DC4  4B F1 F5 31 */	bl xStrHash__FPCc
/* 8012CCE8 00129DC8  38 81 00 18 */	addi r4, r1, 0x18
/* 8012CCEC 00129DCC  4B F1 EA 21 */	bl xSTFindAsset__FUiPUi
/* 8012CCF0 00129DD0  28 03 00 00 */	cmplwi r3, 0x0
/* 8012CCF4 00129DD4  41 82 00 54 */	beq .L_8012CD48
/* 8012CCF8 00129DD8  3C 80 80 27 */	lis r4, "@stringBase0"@ha
/* 8012CCFC 00129DDC  38 A0 00 00 */	li r5, 0x0
/* 8012CD00 00129DE0  38 84 C2 B0 */	addi r4, r4, "@stringBase0"@l
/* 8012CD04 00129DE4  38 C0 00 00 */	li r6, 0x0
/* 8012CD08 00129DE8  38 84 00 72 */	addi r4, r4, 0x72
/* 8012CD0C 00129DEC  4B ED 98 5D */	bl xAnimFileNew__FPvPCcUiPP9xAnimFile
/* 8012CD10 00129DF0  3C A0 80 27 */	lis r5, "@stringBase0"@ha
/* 8012CD14 00129DF4  7C 64 1B 78 */	mr r4, r3
/* 8012CD18 00129DF8  38 A5 C2 B0 */	addi r5, r5, "@stringBase0"@l
/* 8012CD1C 00129DFC  7F E3 FB 78 */	mr r3, r31
/* 8012CD20 00129E00  38 A5 00 38 */	addi r5, r5, 0x38
/* 8012CD24 00129E04  4B ED A8 51 */	bl xAnimTableAddFile__FP10xAnimTableP9xAnimFilePCc
/* 8012CD28 00129E08  3C 60 80 3C */	lis r3, globals@ha
/* 8012CD2C 00129E0C  80 DE 00 24 */	lwz r6, 0x24(r30)
/* 8012CD30 00129E10  38 63 05 58 */	addi r3, r3, globals@l
/* 8012CD34 00129E14  7F C4 F3 78 */	mr r4, r30
/* 8012CD38 00129E18  80 63 1F C0 */	lwz r3, 0x1fc0(r3)
/* 8012CD3C 00129E1C  7F E5 FB 78 */	mr r5, r31
/* 8012CD40 00129E20  38 63 00 48 */	addi r3, r3, 0x48
/* 8012CD44 00129E24  4B ED C5 91 */	bl xAnimPoolAlloc__FP8xMemPoolPvP10xAnimTableP14xModelInstance
.L_8012CD48:
/* 8012CD48 00129E28  3C 60 80 27 */	lis r3, "@stringBase0"@ha
/* 8012CD4C 00129E2C  38 63 C2 B0 */	addi r3, r3, "@stringBase0"@l
/* 8012CD50 00129E30  38 63 00 FA */	addi r3, r3, 0xfa
/* 8012CD54 00129E34  4B F1 F4 C1 */	bl xStrHash__FPCc
/* 8012CD58 00129E38  38 81 00 18 */	addi r4, r1, 0x18
/* 8012CD5C 00129E3C  4B F1 E9 B1 */	bl xSTFindAsset__FUiPUi
/* 8012CD60 00129E40  28 03 00 00 */	cmplwi r3, 0x0
/* 8012CD64 00129E44  41 82 00 54 */	beq .L_8012CDB8
/* 8012CD68 00129E48  3C 80 80 27 */	lis r4, "@stringBase0"@ha
/* 8012CD6C 00129E4C  38 A0 00 00 */	li r5, 0x0
/* 8012CD70 00129E50  38 84 C2 B0 */	addi r4, r4, "@stringBase0"@l
/* 8012CD74 00129E54  38 C0 00 00 */	li r6, 0x0
/* 8012CD78 00129E58  38 84 00 72 */	addi r4, r4, 0x72
/* 8012CD7C 00129E5C  4B ED 97 ED */	bl xAnimFileNew__FPvPCcUiPP9xAnimFile
/* 8012CD80 00129E60  3C A0 80 27 */	lis r5, "@stringBase0"@ha
/* 8012CD84 00129E64  7C 64 1B 78 */	mr r4, r3
/* 8012CD88 00129E68  38 A5 C2 B0 */	addi r5, r5, "@stringBase0"@l
/* 8012CD8C 00129E6C  7F E3 FB 78 */	mr r3, r31
/* 8012CD90 00129E70  38 A5 00 49 */	addi r5, r5, 0x49
/* 8012CD94 00129E74  4B ED A7 E1 */	bl xAnimTableAddFile__FP10xAnimTableP9xAnimFilePCc
/* 8012CD98 00129E78  3C 60 80 3C */	lis r3, globals@ha
/* 8012CD9C 00129E7C  80 DE 00 24 */	lwz r6, 0x24(r30)
/* 8012CDA0 00129E80  38 63 05 58 */	addi r3, r3, globals@l
/* 8012CDA4 00129E84  7F C4 F3 78 */	mr r4, r30
/* 8012CDA8 00129E88  80 63 1F C0 */	lwz r3, 0x1fc0(r3)
/* 8012CDAC 00129E8C  7F E5 FB 78 */	mr r5, r31
/* 8012CDB0 00129E90  38 63 00 48 */	addi r3, r3, 0x48
/* 8012CDB4 00129E94  4B ED C5 21 */	bl xAnimPoolAlloc__FP8xMemPoolPvP10xAnimTableP14xModelInstance
.L_8012CDB8:
/* 8012CDB8 00129E98  80 01 00 34 */	lwz r0, 0x34(r1)
/* 8012CDBC 00129E9C  83 E1 00 2C */	lwz r31, 0x2c(r1)
/* 8012CDC0 00129EA0  83 C1 00 28 */	lwz r30, 0x28(r1)
/* 8012CDC4 00129EA4  83 A1 00 24 */	lwz r29, 0x24(r1)
/* 8012CDC8 00129EA8  7C 08 03 A6 */	mtlr r0
/* 8012CDCC 00129EAC  38 21 00 30 */	addi r1, r1, 0x30
/* 8012CDD0 00129EB0  4E 80 00 20 */	blr
.endfn zEntTeleportBox_Init__FP16_zEntTeleportBoxP14teleport_asset

# zEntTeleportBox_InitAll()
.fn zEntTeleportBox_InitAll__Fv, global
/* 8012CDD4 00129EB4  38 00 00 00 */	li r0, 0x0
/* 8012CDD8 00129EB8  90 0D 95 C8 */	stw r0, sPlayerIn@sda21(r13)
/* 8012CDDC 00129EBC  4E 80 00 20 */	blr
.endfn zEntTeleportBox_InitAll__Fv

# zEntTeleportBox_Setup(_zEntTeleportBox*)
.fn zEntTeleportBox_Setup__FP16_zEntTeleportBox, global
/* 8012CDE0 00129EC0  94 21 FF C0 */	stwu r1, -0x40(r1)
/* 8012CDE4 00129EC4  7C 08 02 A6 */	mflr r0
/* 8012CDE8 00129EC8  90 01 00 44 */	stw r0, 0x44(r1)
/* 8012CDEC 00129ECC  93 E1 00 3C */	stw r31, 0x3c(r1)
/* 8012CDF0 00129ED0  7C 7F 1B 78 */	mr r31, r3
/* 8012CDF4 00129ED4  C0 02 A2 44 */	lfs f0, "@780"@sda21(r2)
/* 8012CDF8 00129ED8  80 83 00 10 */	lwz r4, 0x10(r3)
/* 8012CDFC 00129EDC  D0 04 00 38 */	stfs f0, 0x38(r4)
/* 8012CE00 00129EE0  C0 02 A2 44 */	lfs f0, "@780"@sda21(r2)
/* 8012CE04 00129EE4  80 83 00 10 */	lwz r4, 0x10(r3)
/* 8012CE08 00129EE8  D0 04 00 3C */	stfs f0, 0x3c(r4)
/* 8012CE0C 00129EEC  C0 02 A2 44 */	lfs f0, "@780"@sda21(r2)
/* 8012CE10 00129EF0  80 83 00 10 */	lwz r4, 0x10(r3)
/* 8012CE14 00129EF4  D0 04 00 40 */	stfs f0, 0x40(r4)
/* 8012CE18 00129EF8  C0 02 A2 44 */	lfs f0, "@780"@sda21(r2)
/* 8012CE1C 00129EFC  80 83 00 10 */	lwz r4, 0x10(r3)
/* 8012CE20 00129F00  D0 04 00 44 */	stfs f0, 0x44(r4)
/* 8012CE24 00129F04  4B F2 82 41 */	bl zEntSetup__FP4zEnt
/* 8012CE28 00129F08  38 60 00 01 */	li r3, 0x1
/* 8012CE2C 00129F0C  38 00 00 00 */	li r0, 0x0
/* 8012CE30 00129F10  90 7F 00 D4 */	stw r3, 0xd4(r31)
/* 8012CE34 00129F14  90 1F 00 E0 */	stw r0, 0xe0(r31)
/* 8012CE38 00129F18  80 7F 00 D8 */	lwz r3, 0xd8(r31)
/* 8012CE3C 00129F1C  80 63 00 20 */	lwz r3, 0x20(r3)
/* 8012CE40 00129F20  4B F8 7B FD */	bl zSceneFindObject__FUi
/* 8012CE44 00129F24  90 7F 00 DC */	stw r3, 0xdc(r31)
/* 8012CE48 00129F28  38 00 00 00 */	li r0, 0x0
/* 8012CE4C 00129F2C  38 61 00 08 */	addi r3, r1, 0x8
/* 8012CE50 00129F30  90 1F 00 E8 */	stw r0, 0xe8(r31)
/* 8012CE54 00129F34  90 1F 00 EC */	stw r0, 0xec(r31)
/* 8012CE58 00129F38  90 1F 00 F0 */	stw r0, 0xf0(r31)
/* 8012CE5C 00129F3C  90 1F 00 F4 */	stw r0, 0xf4(r31)
/* 8012CE60 00129F40  C0 02 A2 40 */	lfs f0, "@779"@sda21(r2)
/* 8012CE64 00129F44  D0 1F 01 38 */	stfs f0, 0x138(r31)
/* 8012CE68 00129F48  C0 02 A2 6C */	lfs f0, "@970"@sda21(r2)
/* 8012CE6C 00129F4C  D0 1F 01 3C */	stfs f0, 0x13c(r31)
/* 8012CE70 00129F50  C0 02 A2 70 */	lfs f0, "@971"@sda21(r2)
/* 8012CE74 00129F54  D0 01 00 14 */	stfs f0, 0x14(r1)
/* 8012CE78 00129F58  C0 02 A2 74 */	lfs f0, "@972"@sda21(r2)
/* 8012CE7C 00129F5C  D0 01 00 20 */	stfs f0, 0x20(r1)
/* 8012CE80 00129F60  C0 02 A2 50 */	lfs f0, "@860"@sda21(r2)
/* 8012CE84 00129F64  D0 01 00 1C */	stfs f0, 0x1c(r1)
/* 8012CE88 00129F68  C0 02 A2 78 */	lfs f0, "@973"@sda21(r2)
/* 8012CE8C 00129F6C  D0 01 00 28 */	stfs f0, 0x28(r1)
/* 8012CE90 00129F70  C0 02 A2 7C */	lfs f0, "@974"@sda21(r2)
/* 8012CE94 00129F74  D0 01 00 24 */	stfs f0, 0x24(r1)
/* 8012CE98 00129F78  C0 02 A2 80 */	lfs f0, "@975"@sda21(r2)
/* 8012CE9C 00129F7C  D0 01 00 18 */	stfs f0, 0x18(r1)
/* 8012CEA0 00129F80  80 9F 00 24 */	lwz r4, 0x24(r31)
/* 8012CEA4 00129F84  80 84 00 4C */	lwz r4, 0x4c(r4)
/* 8012CEA8 00129F88  38 84 00 30 */	addi r4, r4, 0x30
/* 8012CEAC 00129F8C  4B F2 16 31 */	bl xVec3Copy__FP5xVec3PC5xVec3
/* 8012CEB0 00129F90  C0 22 A2 84 */	lfs f1, "@976"@sda21(r2)
/* 8012CEB4 00129F94  38 7F 00 F8 */	addi r3, r31, 0xf8
/* 8012CEB8 00129F98  C0 01 00 08 */	lfs f0, 0x8(r1)
/* 8012CEBC 00129F9C  38 81 00 14 */	addi r4, r1, 0x14
/* 8012CEC0 00129FA0  C0 41 00 14 */	lfs f2, 0x14(r1)
/* 8012CEC4 00129FA4  EC 21 00 2A */	fadds f1, f1, f0
/* 8012CEC8 00129FA8  C0 01 00 20 */	lfs f0, 0x20(r1)
/* 8012CECC 00129FAC  C0 61 00 10 */	lfs f3, 0x10(r1)
/* 8012CED0 00129FB0  C0 A1 00 1C */	lfs f5, 0x1c(r1)
/* 8012CED4 00129FB4  EC C2 08 2A */	fadds f6, f2, f1
/* 8012CED8 00129FB8  C0 41 00 28 */	lfs f2, 0x28(r1)
/* 8012CEDC 00129FBC  EC 80 08 2A */	fadds f4, f0, f1
/* 8012CEE0 00129FC0  C0 21 00 24 */	lfs f1, 0x24(r1)
/* 8012CEE4 00129FC4  C0 E1 00 0C */	lfs f7, 0xc(r1)
/* 8012CEE8 00129FC8  D0 C1 00 14 */	stfs f6, 0x14(r1)
/* 8012CEEC 00129FCC  C0 01 00 18 */	lfs f0, 0x18(r1)
/* 8012CEF0 00129FD0  EC 21 38 2A */	fadds f1, f1, f7
/* 8012CEF4 00129FD4  D0 81 00 20 */	stfs f4, 0x20(r1)
/* 8012CEF8 00129FD8  EC 00 38 2A */	fadds f0, f0, f7
/* 8012CEFC 00129FDC  C0 82 A2 88 */	lfs f4, "@977"@sda21(r2)
/* 8012CF00 00129FE0  EC 64 18 2A */	fadds f3, f4, f3
/* 8012CF04 00129FE4  D0 21 00 24 */	stfs f1, 0x24(r1)
/* 8012CF08 00129FE8  D0 01 00 18 */	stfs f0, 0x18(r1)
/* 8012CF0C 00129FEC  EC 25 18 2A */	fadds f1, f5, f3
/* 8012CF10 00129FF0  EC 02 18 2A */	fadds f0, f2, f3
/* 8012CF14 00129FF4  D0 21 00 1C */	stfs f1, 0x1c(r1)
/* 8012CF18 00129FF8  D0 01 00 28 */	stfs f0, 0x28(r1)
/* 8012CF1C 00129FFC  4B ED D7 75 */	bl __as__4xBoxFRC4xBox
/* 8012CF20 0012A000  C0 02 A2 8C */	lfs f0, "@978"@sda21(r2)
/* 8012CF24 0012A004  38 61 00 08 */	addi r3, r1, 0x8
/* 8012CF28 0012A008  D0 01 00 14 */	stfs f0, 0x14(r1)
/* 8012CF2C 0012A00C  C0 02 A2 90 */	lfs f0, "@979"@sda21(r2)
/* 8012CF30 0012A010  D0 01 00 20 */	stfs f0, 0x20(r1)
/* 8012CF34 0012A014  C0 02 A2 64 */	lfs f0, "@946"@sda21(r2)
/* 8012CF38 0012A018  D0 01 00 1C */	stfs f0, 0x1c(r1)
/* 8012CF3C 0012A01C  C0 02 A2 94 */	lfs f0, "@980"@sda21(r2)
/* 8012CF40 0012A020  D0 01 00 28 */	stfs f0, 0x28(r1)
/* 8012CF44 0012A024  C0 02 A2 7C */	lfs f0, "@974"@sda21(r2)
/* 8012CF48 0012A028  D0 01 00 24 */	stfs f0, 0x24(r1)
/* 8012CF4C 0012A02C  C0 02 A2 54 */	lfs f0, "@888"@sda21(r2)
/* 8012CF50 0012A030  D0 01 00 18 */	stfs f0, 0x18(r1)
/* 8012CF54 0012A034  80 9F 00 24 */	lwz r4, 0x24(r31)
/* 8012CF58 0012A038  80 84 00 4C */	lwz r4, 0x4c(r4)
/* 8012CF5C 0012A03C  38 84 00 30 */	addi r4, r4, 0x30
/* 8012CF60 0012A040  4B F2 15 7D */	bl xVec3Copy__FP5xVec3PC5xVec3
/* 8012CF64 0012A044  C0 21 00 14 */	lfs f1, 0x14(r1)
/* 8012CF68 0012A048  38 7F 01 10 */	addi r3, r31, 0x110
/* 8012CF6C 0012A04C  C0 41 00 08 */	lfs f2, 0x8(r1)
/* 8012CF70 0012A050  38 81 00 14 */	addi r4, r1, 0x14
/* 8012CF74 0012A054  C0 01 00 20 */	lfs f0, 0x20(r1)
/* 8012CF78 0012A058  EC 21 10 2A */	fadds f1, f1, f2
/* 8012CF7C 0012A05C  C0 61 00 10 */	lfs f3, 0x10(r1)
/* 8012CF80 0012A060  EC 00 10 2A */	fadds f0, f0, f2
/* 8012CF84 0012A064  C0 A1 00 1C */	lfs f5, 0x1c(r1)
/* 8012CF88 0012A068  C0 41 00 28 */	lfs f2, 0x28(r1)
/* 8012CF8C 0012A06C  D0 21 00 14 */	stfs f1, 0x14(r1)
/* 8012CF90 0012A070  C0 21 00 24 */	lfs f1, 0x24(r1)
/* 8012CF94 0012A074  D0 01 00 20 */	stfs f0, 0x20(r1)
/* 8012CF98 0012A078  C0 C1 00 0C */	lfs f6, 0xc(r1)
/* 8012CF9C 0012A07C  C0 82 A2 88 */	lfs f4, "@977"@sda21(r2)
/* 8012CFA0 0012A080  C0 01 00 18 */	lfs f0, 0x18(r1)
/* 8012CFA4 0012A084  EC 21 30 2A */	fadds f1, f1, f6
/* 8012CFA8 0012A088  EC 84 18 2A */	fadds f4, f4, f3
/* 8012CFAC 0012A08C  EC 00 30 2A */	fadds f0, f0, f6
/* 8012CFB0 0012A090  D0 21 00 24 */	stfs f1, 0x24(r1)
/* 8012CFB4 0012A094  EC 65 20 2A */	fadds f3, f5, f4
/* 8012CFB8 0012A098  EC 22 20 2A */	fadds f1, f2, f4
/* 8012CFBC 0012A09C  D0 01 00 18 */	stfs f0, 0x18(r1)
/* 8012CFC0 0012A0A0  D0 61 00 1C */	stfs f3, 0x1c(r1)
/* 8012CFC4 0012A0A4  D0 21 00 28 */	stfs f1, 0x28(r1)
/* 8012CFC8 0012A0A8  4B ED D6 C9 */	bl __as__4xBoxFRC4xBox
/* 8012CFCC 0012A0AC  3C 60 80 27 */	lis r3, "@stringBase0"@ha
/* 8012CFD0 0012A0B0  38 63 C2 B0 */	addi r3, r3, "@stringBase0"@l
/* 8012CFD4 0012A0B4  38 63 01 1D */	addi r3, r3, 0x11d
/* 8012CFD8 0012A0B8  4B F1 F2 3D */	bl xStrHash__FPCc
/* 8012CFDC 0012A0BC  4B F8 7A 61 */	bl zSceneFindObject__FUi
/* 8012CFE0 0012A0C0  90 6D 95 D0 */	stw r3, sTeleportUI@sda21(r13)
/* 8012CFE4 0012A0C4  80 01 00 44 */	lwz r0, 0x44(r1)
/* 8012CFE8 0012A0C8  83 E1 00 3C */	lwz r31, 0x3c(r1)
/* 8012CFEC 0012A0CC  7C 08 03 A6 */	mtlr r0
/* 8012CFF0 0012A0D0  38 21 00 40 */	addi r1, r1, 0x40
/* 8012CFF4 0012A0D4  4E 80 00 20 */	blr
.endfn zEntTeleportBox_Setup__FP16_zEntTeleportBox

# zEntTeleportBox_Update(xEnt*, xScene*, float)
.fn zEntTeleportBox_Update__FP4xEntP6xScenef, global
/* 8012CFF8 0012A0D8  94 21 FF A0 */	stwu r1, -0x60(r1)
/* 8012CFFC 0012A0DC  7C 08 02 A6 */	mflr r0
/* 8012D000 0012A0E0  90 01 00 64 */	stw r0, 0x64(r1)
/* 8012D004 0012A0E4  DB E1 00 50 */	stfd f31, 0x50(r1)
/* 8012D008 0012A0E8  F3 E1 00 58 */	psq_st f31, 0x58(r1), 0, qr0
/* 8012D00C 0012A0EC  93 E1 00 4C */	stw r31, 0x4c(r1)
/* 8012D010 0012A0F0  93 C1 00 48 */	stw r30, 0x48(r1)
/* 8012D014 0012A0F4  93 A1 00 44 */	stw r29, 0x44(r1)
/* 8012D018 0012A0F8  FF E0 08 90 */	fmr f31, f1
/* 8012D01C 0012A0FC  83 A3 00 DC */	lwz r29, 0xdc(r3)
/* 8012D020 0012A100  7C 7E 1B 78 */	mr r30, r3
/* 8012D024 0012A104  4B EE C5 D9 */	bl xEntUpdate__FP4xEntP6xScenef
/* 8012D028 0012A108  80 7E 00 24 */	lwz r3, 0x24(r30)
/* 8012D02C 0012A10C  3C 80 80 3C */	lis r4, globals@ha
/* 8012D030 0012A110  38 84 05 58 */	addi r4, r4, globals@l
/* 8012D034 0012A114  C0 02 A2 48 */	lfs f0, "@853"@sda21(r2)
/* 8012D038 0012A118  80 63 00 4C */	lwz r3, 0x4c(r3)
/* 8012D03C 0012A11C  C0 44 07 6C */	lfs f2, 0x76c(r4)
/* 8012D040 0012A120  C0 23 00 34 */	lfs f1, 0x34(r3)
/* 8012D044 0012A124  C0 84 07 68 */	lfs f4, 0x768(r4)
/* 8012D048 0012A128  EC A2 08 28 */	fsubs f5, f2, f1
/* 8012D04C 0012A12C  C0 23 00 30 */	lfs f1, 0x30(r3)
/* 8012D050 0012A130  C0 64 07 70 */	lfs f3, 0x770(r4)
/* 8012D054 0012A134  C0 43 00 38 */	lfs f2, 0x38(r3)
/* 8012D058 0012A138  EC 84 08 28 */	fsubs f4, f4, f1
/* 8012D05C 0012A13C  EC 25 01 72 */	fmuls f1, f5, f5
/* 8012D060 0012A140  EC 43 10 28 */	fsubs f2, f3, f2
/* 8012D064 0012A144  EC 24 09 3A */	fmadds f1, f4, f4, f1
/* 8012D068 0012A148  EC 22 08 BA */	fmadds f1, f2, f2, f1
/* 8012D06C 0012A14C  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8012D070 0012A150  40 80 00 10 */	bge .L_8012D080
/* 8012D074 0012A154  38 00 00 01 */	li r0, 0x1
/* 8012D078 0012A158  90 1E 01 30 */	stw r0, 0x130(r30)
/* 8012D07C 0012A15C  48 00 00 0C */	b .L_8012D088
.L_8012D080:
/* 8012D080 0012A160  38 00 00 00 */	li r0, 0x0
/* 8012D084 0012A164  90 1E 01 30 */	stw r0, 0x130(r30)
.L_8012D088:
/* 8012D088 0012A168  80 7E 01 30 */	lwz r3, 0x130(r30)
/* 8012D08C 0012A16C  80 1E 01 34 */	lwz r0, 0x134(r30)
/* 8012D090 0012A170  7C 03 00 40 */	cmplw r3, r0
/* 8012D094 0012A174  41 82 00 34 */	beq .L_8012D0C8
/* 8012D098 0012A178  28 03 00 00 */	cmplwi r3, 0x0
/* 8012D09C 0012A17C  41 82 00 10 */	beq .L_8012D0AC
/* 8012D0A0 0012A180  38 00 00 01 */	li r0, 0x1
/* 8012D0A4 0012A184  90 0D 95 CC */	stw r0, sPlayerNear@sda21(r13)
/* 8012D0A8 0012A188  48 00 00 20 */	b .L_8012D0C8
.L_8012D0AC:
/* 8012D0AC 0012A18C  38 00 00 00 */	li r0, 0x0
/* 8012D0B0 0012A190  3C 60 80 27 */	lis r3, "@stringBase0"@ha
/* 8012D0B4 0012A194  38 63 C2 B0 */	addi r3, r3, "@stringBase0"@l
/* 8012D0B8 0012A198  90 0D 95 CC */	stw r0, sPlayerNear@sda21(r13)
/* 8012D0BC 0012A19C  38 63 01 1D */	addi r3, r3, 0x11d
/* 8012D0C0 0012A1A0  38 80 00 04 */	li r4, 0x4
/* 8012D0C4 0012A1A4  4B EF 24 61 */	bl zEntEvent__FPcUi
.L_8012D0C8:
/* 8012D0C8 0012A1A8  80 1E 01 30 */	lwz r0, 0x130(r30)
/* 8012D0CC 0012A1AC  90 1E 01 34 */	stw r0, 0x134(r30)
/* 8012D0D0 0012A1B0  80 1E 01 30 */	lwz r0, 0x130(r30)
/* 8012D0D4 0012A1B4  28 00 00 00 */	cmplwi r0, 0x0
/* 8012D0D8 0012A1B8  41 82 00 68 */	beq .L_8012D140
/* 8012D0DC 0012A1BC  4B F2 F3 E5 */	bl active__13cruise_bubbleFv
/* 8012D0E0 0012A1C0  54 60 06 3F */	clrlwi. r0, r3, 24
/* 8012D0E4 0012A1C4  41 82 00 2C */	beq .L_8012D110
/* 8012D0E8 0012A1C8  80 6D 95 D0 */	lwz r3, sTeleportUI@sda21(r13)
/* 8012D0EC 0012A1CC  4B EE 15 4D */	bl xEntIsVisible__FPC4xEnt
/* 8012D0F0 0012A1D0  28 03 00 00 */	cmplwi r3, 0x0
/* 8012D0F4 0012A1D4  41 82 00 4C */	beq .L_8012D140
/* 8012D0F8 0012A1D8  3C 60 80 27 */	lis r3, "@stringBase0"@ha
/* 8012D0FC 0012A1DC  38 80 00 04 */	li r4, 0x4
/* 8012D100 0012A1E0  38 63 C2 B0 */	addi r3, r3, "@stringBase0"@l
/* 8012D104 0012A1E4  38 63 01 1D */	addi r3, r3, 0x11d
/* 8012D108 0012A1E8  4B EF 24 1D */	bl zEntEvent__FPcUi
/* 8012D10C 0012A1EC  48 00 00 34 */	b .L_8012D140
.L_8012D110:
/* 8012D110 0012A1F0  80 6D 95 D0 */	lwz r3, sTeleportUI@sda21(r13)
/* 8012D114 0012A1F4  4B EE 15 25 */	bl xEntIsVisible__FPC4xEnt
/* 8012D118 0012A1F8  28 03 00 00 */	cmplwi r3, 0x0
/* 8012D11C 0012A1FC  40 82 00 24 */	bne .L_8012D140
/* 8012D120 0012A200  80 1D 00 D4 */	lwz r0, 0xd4(r29)
/* 8012D124 0012A204  28 00 00 01 */	cmplwi r0, 0x1
/* 8012D128 0012A208  40 82 00 18 */	bne .L_8012D140
/* 8012D12C 0012A20C  3C 60 80 27 */	lis r3, "@stringBase0"@ha
/* 8012D130 0012A210  38 80 00 03 */	li r4, 0x3
/* 8012D134 0012A214  38 63 C2 B0 */	addi r3, r3, "@stringBase0"@l
/* 8012D138 0012A218  38 63 01 1D */	addi r3, r3, 0x11d
/* 8012D13C 0012A21C  4B EF 23 E9 */	bl zEntEvent__FPcUi
.L_8012D140:
/* 8012D140 0012A220  3C 80 80 3C */	lis r4, globals@ha
/* 8012D144 0012A224  38 61 00 20 */	addi r3, r1, 0x20
/* 8012D148 0012A228  3B E4 05 58 */	addi r31, r4, globals@l
/* 8012D14C 0012A22C  80 9F 07 04 */	lwz r4, 0x704(r31)
/* 8012D150 0012A230  80 84 00 4C */	lwz r4, 0x4c(r4)
/* 8012D154 0012A234  38 84 00 30 */	addi r4, r4, 0x30
/* 8012D158 0012A238  4B F2 13 85 */	bl xVec3Copy__FP5xVec3PC5xVec3
/* 8012D15C 0012A23C  C0 21 00 24 */	lfs f1, 0x24(r1)
/* 8012D160 0012A240  38 7E 00 F8 */	addi r3, r30, 0xf8
/* 8012D164 0012A244  C0 02 A2 64 */	lfs f0, "@946"@sda21(r2)
/* 8012D168 0012A248  38 81 00 20 */	addi r4, r1, 0x20
/* 8012D16C 0012A24C  EC 01 00 2A */	fadds f0, f1, f0
/* 8012D170 0012A250  D0 01 00 24 */	stfs f0, 0x24(r1)
/* 8012D174 0012A254  4B F0 48 F1 */	bl xPointInBox__FPC4xBoxPC5xVec3
/* 8012D178 0012A258  2C 03 00 00 */	cmpwi r3, 0x0
/* 8012D17C 0012A25C  40 82 00 50 */	bne .L_8012D1CC
/* 8012D180 0012A260  38 7E 01 10 */	addi r3, r30, 0x110
/* 8012D184 0012A264  38 81 00 20 */	addi r4, r1, 0x20
/* 8012D188 0012A268  4B F0 48 DD */	bl xPointInBox__FPC4xBoxPC5xVec3
/* 8012D18C 0012A26C  2C 03 00 00 */	cmpwi r3, 0x0
/* 8012D190 0012A270  40 82 00 3C */	bne .L_8012D1CC
/* 8012D194 0012A274  80 9F 07 04 */	lwz r4, 0x704(r31)
/* 8012D198 0012A278  38 7E 00 F8 */	addi r3, r30, 0xf8
/* 8012D19C 0012A27C  80 84 00 4C */	lwz r4, 0x4c(r4)
/* 8012D1A0 0012A280  38 84 00 30 */	addi r4, r4, 0x30
/* 8012D1A4 0012A284  4B F0 48 C1 */	bl xPointInBox__FPC4xBoxPC5xVec3
/* 8012D1A8 0012A288  2C 03 00 00 */	cmpwi r3, 0x0
/* 8012D1AC 0012A28C  40 82 00 20 */	bne .L_8012D1CC
/* 8012D1B0 0012A290  80 9F 07 04 */	lwz r4, 0x704(r31)
/* 8012D1B4 0012A294  38 7E 01 10 */	addi r3, r30, 0x110
/* 8012D1B8 0012A298  80 84 00 4C */	lwz r4, 0x4c(r4)
/* 8012D1BC 0012A29C  38 84 00 30 */	addi r4, r4, 0x30
/* 8012D1C0 0012A2A0  4B F0 48 A5 */	bl xPointInBox__FPC4xBoxPC5xVec3
/* 8012D1C4 0012A2A4  2C 03 00 00 */	cmpwi r3, 0x0
/* 8012D1C8 0012A2A8  41 82 00 64 */	beq .L_8012D22C
.L_8012D1CC:
/* 8012D1CC 0012A2AC  80 1E 00 E0 */	lwz r0, 0xe0(r30)
/* 8012D1D0 0012A2B0  28 00 00 00 */	cmplwi r0, 0x0
/* 8012D1D4 0012A2B4  40 82 00 4C */	bne .L_8012D220
/* 8012D1D8 0012A2B8  7F C3 F3 78 */	mr r3, r30
/* 8012D1DC 0012A2BC  48 00 05 49 */	bl zEntTeleportBox_isOpen__FP16_zEntTeleportBox
/* 8012D1E0 0012A2C0  28 03 00 00 */	cmplwi r3, 0x0
/* 8012D1E4 0012A2C4  41 82 00 3C */	beq .L_8012D220
/* 8012D1E8 0012A2C8  3C 60 80 3C */	lis r3, globals@ha
/* 8012D1EC 0012A2CC  C0 02 A2 40 */	lfs f0, "@779"@sda21(r2)
/* 8012D1F0 0012A2D0  38 83 05 58 */	addi r4, r3, globals@l
/* 8012D1F4 0012A2D4  80 64 07 28 */	lwz r3, 0x728(r4)
/* 8012D1F8 0012A2D8  C0 23 00 D8 */	lfs f1, 0xd8(r3)
/* 8012D1FC 0012A2DC  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8012D200 0012A2E0  4C 40 13 82 */	cror eq, lt, eq
/* 8012D204 0012A2E4  40 82 00 1C */	bne .L_8012D220
/* 8012D208 0012A2E8  80 04 16 B0 */	lwz r0, 0x16b0(r4)
/* 8012D20C 0012A2EC  28 00 00 00 */	cmplwi r0, 0x0
/* 8012D210 0012A2F0  41 82 00 10 */	beq .L_8012D220
/* 8012D214 0012A2F4  38 00 00 01 */	li r0, 0x1
/* 8012D218 0012A2F8  90 1E 00 E8 */	stw r0, 0xe8(r30)
/* 8012D21C 0012A2FC  90 1E 00 E0 */	stw r0, 0xe0(r30)
.L_8012D220:
/* 8012D220 0012A300  38 00 00 01 */	li r0, 0x1
/* 8012D224 0012A304  90 1E 01 28 */	stw r0, 0x128(r30)
/* 8012D228 0012A308  48 00 00 1C */	b .L_8012D244
.L_8012D22C:
/* 8012D22C 0012A30C  38 60 00 00 */	li r3, 0x0
/* 8012D230 0012A310  90 7E 01 28 */	stw r3, 0x128(r30)
/* 8012D234 0012A314  80 1E 00 E0 */	lwz r0, 0xe0(r30)
/* 8012D238 0012A318  28 00 00 04 */	cmplwi r0, 0x4
/* 8012D23C 0012A31C  40 82 00 08 */	bne .L_8012D244
/* 8012D240 0012A320  90 7E 00 E0 */	stw r3, 0xe0(r30)
.L_8012D244:
/* 8012D244 0012A324  80 7E 01 28 */	lwz r3, 0x128(r30)
/* 8012D248 0012A328  80 1E 01 2C */	lwz r0, 0x12c(r30)
/* 8012D24C 0012A32C  7C 03 00 40 */	cmplw r3, r0
/* 8012D250 0012A330  41 82 00 20 */	beq .L_8012D270
/* 8012D254 0012A334  28 03 00 00 */	cmplwi r3, 0x0
/* 8012D258 0012A338  41 82 00 10 */	beq .L_8012D268
/* 8012D25C 0012A33C  38 00 00 01 */	li r0, 0x1
/* 8012D260 0012A340  90 0D 95 C8 */	stw r0, sPlayerIn@sda21(r13)
/* 8012D264 0012A344  48 00 00 0C */	b .L_8012D270
.L_8012D268:
/* 8012D268 0012A348  38 00 00 00 */	li r0, 0x0
/* 8012D26C 0012A34C  90 0D 95 C8 */	stw r0, sPlayerIn@sda21(r13)
.L_8012D270:
/* 8012D270 0012A350  80 1E 01 28 */	lwz r0, 0x128(r30)
/* 8012D274 0012A354  90 1E 01 2C */	stw r0, 0x12c(r30)
/* 8012D278 0012A358  80 1E 00 E0 */	lwz r0, 0xe0(r30)
/* 8012D27C 0012A35C  28 00 00 03 */	cmplwi r0, 0x3
/* 8012D280 0012A360  40 82 00 18 */	bne .L_8012D298
/* 8012D284 0012A364  3C 60 80 3C */	lis r3, globals@ha
/* 8012D288 0012A368  C0 0D 95 D4 */	lfs f0, sTeleportCamPitch@sda21(r13)
/* 8012D28C 0012A36C  38 63 05 58 */	addi r3, r3, globals@l
/* 8012D290 0012A370  D0 03 01 84 */	stfs f0, 0x184(r3)
/* 8012D294 0012A374  D0 03 01 80 */	stfs f0, 0x180(r3)
.L_8012D298:
/* 8012D298 0012A378  80 1E 00 E4 */	lwz r0, 0xe4(r30)
/* 8012D29C 0012A37C  80 7E 00 E0 */	lwz r3, 0xe0(r30)
/* 8012D2A0 0012A380  7C 00 18 40 */	cmplw r0, r3
/* 8012D2A4 0012A384  41 82 03 0C */	beq .L_8012D5B0
/* 8012D2A8 0012A388  2C 03 00 02 */	cmpwi r3, 0x2
/* 8012D2AC 0012A38C  41 82 00 AC */	beq .L_8012D358
/* 8012D2B0 0012A390  40 80 00 14 */	bge .L_8012D2C4
/* 8012D2B4 0012A394  2C 03 00 00 */	cmpwi r3, 0x0
/* 8012D2B8 0012A398  41 82 02 F8 */	beq .L_8012D5B0
/* 8012D2BC 0012A39C  40 80 00 18 */	bge .L_8012D2D4
/* 8012D2C0 0012A3A0  48 00 02 F0 */	b .L_8012D5B0
.L_8012D2C4:
/* 8012D2C4 0012A3A4  2C 03 00 04 */	cmpwi r3, 0x4
/* 8012D2C8 0012A3A8  41 82 02 00 */	beq .L_8012D4C8
/* 8012D2CC 0012A3AC  40 80 02 E4 */	bge .L_8012D5B0
/* 8012D2D0 0012A3B0  48 00 01 7C */	b .L_8012D44C
.L_8012D2D4:
/* 8012D2D4 0012A3B4  88 1E 00 22 */	lbz r0, 0x22(r30)
/* 8012D2D8 0012A3B8  38 60 00 80 */	li r3, 0x80
/* 8012D2DC 0012A3BC  70 00 00 EF */	andi. r0, r0, 0xef
/* 8012D2E0 0012A3C0  98 1E 00 22 */	stb r0, 0x22(r30)
/* 8012D2E4 0012A3C4  4B F3 92 75 */	bl zEntPlayerControlOff__F13zControlOwner
/* 8012D2E8 0012A3C8  3C 80 80 3C */	lis r4, globals@ha
/* 8012D2EC 0012A3CC  3C 60 80 27 */	lis r3, "@stringBase0"@ha
/* 8012D2F0 0012A3D0  38 A4 05 58 */	addi r5, r4, globals@l
/* 8012D2F4 0012A3D4  C0 02 A2 40 */	lfs f0, "@779"@sda21(r2)
/* 8012D2F8 0012A3D8  80 85 07 28 */	lwz r4, 0x728(r5)
/* 8012D2FC 0012A3DC  38 63 C2 B0 */	addi r3, r3, "@stringBase0"@l
/* 8012D300 0012A3E0  38 63 01 2F */	addi r3, r3, 0x12f
/* 8012D304 0012A3E4  D0 04 00 D4 */	stfs f0, 0xd4(r4)
/* 8012D308 0012A3E8  C0 02 A2 40 */	lfs f0, "@779"@sda21(r2)
/* 8012D30C 0012A3EC  80 85 07 28 */	lwz r4, 0x728(r5)
/* 8012D310 0012A3F0  D0 04 00 DC */	stfs f0, 0xdc(r4)
/* 8012D314 0012A3F4  C0 02 A2 40 */	lfs f0, "@779"@sda21(r2)
/* 8012D318 0012A3F8  D0 05 1F B0 */	stfs f0, 0x1fb0(r5)
/* 8012D31C 0012A3FC  4B F1 EE F9 */	bl xStrHash__FPCc
/* 8012D320 0012A400  C0 42 A2 40 */	lfs f2, "@779"@sda21(r2)
/* 8012D324 0012A404  38 80 00 80 */	li r4, 0x80
/* 8012D328 0012A408  80 DE 00 24 */	lwz r6, 0x24(r30)
/* 8012D32C 0012A40C  38 A0 00 00 */	li r5, 0x0
/* 8012D330 0012A410  FC 60 10 90 */	fmr f3, f2
/* 8012D334 0012A414  C0 22 A2 4C */	lfs f1, "@858"@sda21(r2)
/* 8012D338 0012A418  80 C6 00 4C */	lwz r6, 0x4c(r6)
/* 8012D33C 0012A41C  38 E0 00 00 */	li r7, 0x0
/* 8012D340 0012A420  C0 82 A2 5C */	lfs f4, "@944"@sda21(r2)
/* 8012D344 0012A424  38 C6 00 30 */	addi r6, r6, 0x30
/* 8012D348 0012A428  4B F2 91 6D */	bl xSndPlay3D__FUiffUiUiPC5xVec3f14sound_categoryf
/* 8012D34C 0012A42C  38 60 00 10 */	li r3, 0x10
/* 8012D350 0012A430  4B F7 FD 05 */	bl zRumbleStart__F16_tagSDRumbleType
/* 8012D354 0012A434  48 00 02 5C */	b .L_8012D5B0
.L_8012D358:
/* 8012D358 0012A438  4B F3 67 7D */	bl zEntPickup_GiveAllRewardsNow__Fv
/* 8012D35C 0012A43C  88 1E 00 22 */	lbz r0, 0x22(r30)
/* 8012D360 0012A440  28 1D 00 00 */	cmplwi r29, 0x0
/* 8012D364 0012A444  60 00 00 10 */	ori r0, r0, 0x10
/* 8012D368 0012A448  98 1E 00 22 */	stb r0, 0x22(r30)
/* 8012D36C 0012A44C  41 82 00 C0 */	beq .L_8012D42C
/* 8012D370 0012A450  80 9F 07 04 */	lwz r4, 0x704(r31)
/* 8012D374 0012A454  80 7D 00 24 */	lwz r3, 0x24(r29)
/* 8012D378 0012A458  80 A4 00 4C */	lwz r5, 0x4c(r4)
/* 8012D37C 0012A45C  80 83 00 4C */	lwz r4, 0x4c(r3)
/* 8012D380 0012A460  38 65 00 30 */	addi r3, r5, 0x30
/* 8012D384 0012A464  38 84 00 30 */	addi r4, r4, 0x30
/* 8012D388 0012A468  4B F2 11 55 */	bl xVec3Copy__FP5xVec3PC5xVec3
/* 8012D38C 0012A46C  80 7D 00 24 */	lwz r3, 0x24(r29)
/* 8012D390 0012A470  3C 80 80 3C */	lis r4, globals@ha
/* 8012D394 0012A474  38 84 05 58 */	addi r4, r4, globals@l
/* 8012D398 0012A478  80 A4 07 28 */	lwz r5, 0x728(r4)
/* 8012D39C 0012A47C  80 83 00 4C */	lwz r4, 0x4c(r3)
/* 8012D3A0 0012A480  38 65 00 30 */	addi r3, r5, 0x30
/* 8012D3A4 0012A484  38 84 00 30 */	addi r4, r4, 0x30
/* 8012D3A8 0012A488  4B F2 11 35 */	bl xVec3Copy__FP5xVec3PC5xVec3
/* 8012D3AC 0012A48C  80 7F 07 04 */	lwz r3, 0x704(r31)
/* 8012D3B0 0012A490  38 81 00 14 */	addi r4, r1, 0x14
/* 8012D3B4 0012A494  83 E3 00 4C */	lwz r31, 0x4c(r3)
/* 8012D3B8 0012A498  7F E3 FB 78 */	mr r3, r31
/* 8012D3BC 0012A49C  4B F0 4A 79 */	bl xMat3x3GetEuler__FPC7xMat3x3P5xVec3
/* 8012D3C0 0012A4A0  80 9D 00 D8 */	lwz r4, 0xd8(r29)
/* 8012D3C4 0012A4A4  3C 00 43 30 */	lis r0, 0x4330
/* 8012D3C8 0012A4A8  90 01 00 30 */	stw r0, 0x30(r1)
/* 8012D3CC 0012A4AC  7F E3 FB 78 */	mr r3, r31
/* 8012D3D0 0012A4B0  80 04 00 18 */	lwz r0, 0x18(r4)
/* 8012D3D4 0012A4B4  38 81 00 14 */	addi r4, r1, 0x14
/* 8012D3D8 0012A4B8  C8 42 A2 A0 */	lfd f2, "@1054"@sda21(r2)
/* 8012D3DC 0012A4BC  90 01 00 34 */	stw r0, 0x34(r1)
/* 8012D3E0 0012A4C0  C0 62 A2 38 */	lfs f3, "@777"@sda21(r2)
/* 8012D3E4 0012A4C4  C8 21 00 30 */	lfd f1, 0x30(r1)
/* 8012D3E8 0012A4C8  C0 02 A2 3C */	lfs f0, "@778"@sda21(r2)
/* 8012D3EC 0012A4CC  EC 21 10 28 */	fsubs f1, f1, f2
/* 8012D3F0 0012A4D0  EC 23 00 72 */	fmuls f1, f3, f1
/* 8012D3F4 0012A4D4  EC 01 00 24 */	fdivs f0, f1, f0
/* 8012D3F8 0012A4D8  D0 01 00 14 */	stfs f0, 0x14(r1)
/* 8012D3FC 0012A4DC  4B F0 4D A9 */	bl xMat3x3Euler__FP7xMat3x3PC5xVec3
/* 8012D400 0012A4E0  38 00 00 03 */	li r0, 0x3
/* 8012D404 0012A4E4  7F A3 EB 78 */	mr r3, r29
/* 8012D408 0012A4E8  90 1D 00 E0 */	stw r0, 0xe0(r29)
/* 8012D40C 0012A4EC  48 00 03 45 */	bl zEntTeleportBox_isClosed__FP16_zEntTeleportBox
/* 8012D410 0012A4F0  28 03 00 00 */	cmplwi r3, 0x0
/* 8012D414 0012A4F4  41 82 00 10 */	beq .L_8012D424
/* 8012D418 0012A4F8  7F A3 EB 78 */	mr r3, r29
/* 8012D41C 0012A4FC  38 80 01 54 */	li r4, 0x154
/* 8012D420 0012A500  4B EF 21 D1 */	bl zEntEvent__FP5xBaseUi
.L_8012D424:
/* 8012D424 0012A504  38 60 00 01 */	li r3, 0x1
/* 8012D428 0012A508  4B FA 21 1D */	bl iCameraMotionBlurActivate__FUi
.L_8012D42C:
/* 8012D42C 0012A50C  38 60 00 11 */	li r3, 0x11
/* 8012D430 0012A510  4B F7 FC 25 */	bl zRumbleStart__F16_tagSDRumbleType
/* 8012D434 0012A514  C0 22 A2 60 */	lfs f1, "@945"@sda21(r2)
/* 8012D438 0012A518  38 60 00 03 */	li r3, 0x3
/* 8012D43C 0012A51C  38 80 00 00 */	li r4, 0x0
/* 8012D440 0012A520  38 A0 00 00 */	li r5, 0x0
/* 8012D444 0012A524  4B F7 FD 89 */	bl zPadAddRumble__F14_tagRumbleTypefiUi
/* 8012D448 0012A528  48 00 01 68 */	b .L_8012D5B0
.L_8012D44C:
/* 8012D44C 0012A52C  38 00 00 01 */	li r0, 0x1
/* 8012D450 0012A530  3C 80 6C 17 */	lis r4, 0x6c17
/* 8012D454 0012A534  90 1E 00 EC */	stw r0, 0xec(r30)
/* 8012D458 0012A538  3C 00 43 30 */	lis r0, 0x4330
/* 8012D45C 0012A53C  3C 60 80 3C */	lis r3, globals@ha
/* 8012D460 0012A540  38 84 C1 6D */	addi r4, r4, -0x3e93
/* 8012D464 0012A544  80 BE 00 D8 */	lwz r5, 0xd8(r30)
/* 8012D468 0012A548  38 63 05 58 */	addi r3, r3, globals@l
/* 8012D46C 0012A54C  90 01 00 30 */	stw r0, 0x30(r1)
/* 8012D470 0012A550  80 A5 00 1C */	lwz r5, 0x1c(r5)
/* 8012D474 0012A554  C8 42 A2 A0 */	lfd f2, "@1054"@sda21(r2)
/* 8012D478 0012A558  38 A5 00 B4 */	addi r5, r5, 0xb4
/* 8012D47C 0012A55C  C0 62 A2 38 */	lfs f3, "@777"@sda21(r2)
/* 8012D480 0012A560  7C 84 28 16 */	mulhwu r4, r4, r5
/* 8012D484 0012A564  C0 02 A2 3C */	lfs f0, "@778"@sda21(r2)
/* 8012D488 0012A568  7C 04 28 50 */	subf r0, r4, r5
/* 8012D48C 0012A56C  54 00 F8 7E */	srwi r0, r0, 1
/* 8012D490 0012A570  7C 00 22 14 */	add r0, r0, r4
/* 8012D494 0012A574  54 00 C2 3E */	srwi r0, r0, 8
/* 8012D498 0012A578  1C 00 01 68 */	mulli r0, r0, 0x168
/* 8012D49C 0012A57C  7C 00 28 50 */	subf r0, r0, r5
/* 8012D4A0 0012A580  90 01 00 34 */	stw r0, 0x34(r1)
/* 8012D4A4 0012A584  C8 21 00 30 */	lfd f1, 0x30(r1)
/* 8012D4A8 0012A588  EC 21 10 28 */	fsubs f1, f1, f2
/* 8012D4AC 0012A58C  EC 23 00 72 */	fmuls f1, f3, f1
/* 8012D4B0 0012A590  EC 01 00 24 */	fdivs f0, f1, f0
/* 8012D4B4 0012A594  D0 0D 95 D4 */	stfs f0, sTeleportCamPitch@sda21(r13)
/* 8012D4B8 0012A598  C0 0D 95 D4 */	lfs f0, sTeleportCamPitch@sda21(r13)
/* 8012D4BC 0012A59C  D0 03 01 84 */	stfs f0, 0x184(r3)
/* 8012D4C0 0012A5A0  D0 03 01 80 */	stfs f0, 0x180(r3)
/* 8012D4C4 0012A5A4  48 00 00 EC */	b .L_8012D5B0
.L_8012D4C8:
/* 8012D4C8 0012A5A8  3C 60 80 3C */	lis r3, globals@ha
/* 8012D4CC 0012A5AC  3C 00 43 30 */	lis r0, 0x4330
/* 8012D4D0 0012A5B0  3B A3 05 58 */	addi r29, r3, globals@l
/* 8012D4D4 0012A5B4  C0 02 A2 98 */	lfs f0, "@1051"@sda21(r2)
/* 8012D4D8 0012A5B8  80 9D 07 28 */	lwz r4, 0x728(r29)
/* 8012D4DC 0012A5BC  38 61 00 08 */	addi r3, r1, 0x8
/* 8012D4E0 0012A5C0  90 01 00 30 */	stw r0, 0x30(r1)
/* 8012D4E4 0012A5C4  D0 04 00 D8 */	stfs f0, 0xd8(r4)
/* 8012D4E8 0012A5C8  80 9E 00 D8 */	lwz r4, 0xd8(r30)
/* 8012D4EC 0012A5CC  C8 22 A2 A0 */	lfd f1, "@1054"@sda21(r2)
/* 8012D4F0 0012A5D0  80 04 00 18 */	lwz r0, 0x18(r4)
/* 8012D4F4 0012A5D4  C0 42 A2 6C */	lfs f2, "@970"@sda21(r2)
/* 8012D4F8 0012A5D8  90 01 00 34 */	stw r0, 0x34(r1)
/* 8012D4FC 0012A5DC  C8 01 00 30 */	lfd f0, 0x30(r1)
/* 8012D500 0012A5E0  EC 00 08 28 */	fsubs f0, f0, f1
/* 8012D504 0012A5E4  EC 22 00 32 */	fmuls f1, f2, f0
/* 8012D508 0012A5E8  4B FF EB A1 */	bl VecFromAngle__FfP5xVec3
/* 8012D50C 0012A5EC  C0 22 A2 9C */	lfs f1, "@1052"@sda21(r2)
/* 8012D510 0012A5F0  3C 60 80 27 */	lis r3, "@stringBase0"@ha
/* 8012D514 0012A5F4  C0 01 00 08 */	lfs f0, 0x8(r1)
/* 8012D518 0012A5F8  38 63 C2 B0 */	addi r3, r3, "@stringBase0"@l
/* 8012D51C 0012A5FC  80 9D 07 28 */	lwz r4, 0x728(r29)
/* 8012D520 0012A600  38 63 01 3F */	addi r3, r3, 0x13f
/* 8012D524 0012A604  EC 01 00 32 */	fmuls f0, f1, f0
/* 8012D528 0012A608  D0 04 00 D4 */	stfs f0, 0xd4(r4)
/* 8012D52C 0012A60C  C0 22 A2 9C */	lfs f1, "@1052"@sda21(r2)
/* 8012D530 0012A610  C0 01 00 10 */	lfs f0, 0x10(r1)
/* 8012D534 0012A614  80 9D 07 28 */	lwz r4, 0x728(r29)
/* 8012D538 0012A618  EC 01 00 32 */	fmuls f0, f1, f0
/* 8012D53C 0012A61C  D0 04 00 DC */	stfs f0, 0xdc(r4)
/* 8012D540 0012A620  4B F1 EC D5 */	bl xStrHash__FPCc
/* 8012D544 0012A624  C0 42 A2 40 */	lfs f2, "@779"@sda21(r2)
/* 8012D548 0012A628  38 80 00 80 */	li r4, 0x80
/* 8012D54C 0012A62C  80 DE 00 24 */	lwz r6, 0x24(r30)
/* 8012D550 0012A630  38 A0 00 00 */	li r5, 0x0
/* 8012D554 0012A634  FC 60 10 90 */	fmr f3, f2
/* 8012D558 0012A638  C0 22 A2 4C */	lfs f1, "@858"@sda21(r2)
/* 8012D55C 0012A63C  80 C6 00 4C */	lwz r6, 0x4c(r6)
/* 8012D560 0012A640  FC 80 10 90 */	fmr f4, f2
/* 8012D564 0012A644  38 E0 00 00 */	li r7, 0x0
/* 8012D568 0012A648  38 C6 00 30 */	addi r6, r6, 0x30
/* 8012D56C 0012A64C  4B F2 8F 49 */	bl xSndPlay3D__FUiffUiUiPC5xVec3f14sound_categoryf
/* 8012D570 0012A650  3C 60 80 27 */	lis r3, "@stringBase0"@ha
/* 8012D574 0012A654  38 63 C2 B0 */	addi r3, r3, "@stringBase0"@l
/* 8012D578 0012A658  4B F1 EC 9D */	bl xStrHash__FPCc
/* 8012D57C 0012A65C  C0 42 A2 40 */	lfs f2, "@779"@sda21(r2)
/* 8012D580 0012A660  38 80 00 80 */	li r4, 0x80
/* 8012D584 0012A664  80 DE 00 24 */	lwz r6, 0x24(r30)
/* 8012D588 0012A668  38 A0 00 00 */	li r5, 0x0
/* 8012D58C 0012A66C  FC 60 10 90 */	fmr f3, f2
/* 8012D590 0012A670  C0 22 A2 4C */	lfs f1, "@858"@sda21(r2)
/* 8012D594 0012A674  80 C6 00 4C */	lwz r6, 0x4c(r6)
/* 8012D598 0012A678  FC 80 10 90 */	fmr f4, f2
/* 8012D59C 0012A67C  38 E0 00 00 */	li r7, 0x0
/* 8012D5A0 0012A680  38 C6 00 30 */	addi r6, r6, 0x30
/* 8012D5A4 0012A684  4B F2 8F 11 */	bl xSndPlay3D__FUiffUiUiPC5xVec3f14sound_categoryf
/* 8012D5A8 0012A688  38 60 00 12 */	li r3, 0x12
/* 8012D5AC 0012A68C  4B F7 FA A9 */	bl zRumbleStart__F16_tagSDRumbleType
.L_8012D5B0:
/* 8012D5B0 0012A690  80 1E 00 E0 */	lwz r0, 0xe0(r30)
/* 8012D5B4 0012A694  90 1E 00 E4 */	stw r0, 0xe4(r30)
/* 8012D5B8 0012A698  C0 1E 01 38 */	lfs f0, 0x138(r30)
/* 8012D5BC 0012A69C  C0 3E 01 3C */	lfs f1, 0x13c(r30)
/* 8012D5C0 0012A6A0  FC 00 08 40 */	fcmpo cr0, f0, f1
/* 8012D5C4 0012A6A4  40 81 00 18 */	ble .L_8012D5DC
/* 8012D5C8 0012A6A8  FC 00 00 50 */	fneg f0, f0
/* 8012D5CC 0012A6AC  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8012D5D0 0012A6B0  40 81 00 0C */	ble .L_8012D5DC
/* 8012D5D4 0012A6B4  38 60 00 80 */	li r3, 0x80
/* 8012D5D8 0012A6B8  4B F3 8F 29 */	bl zEntPlayerControlOn__F13zControlOwner
.L_8012D5DC:
/* 8012D5DC 0012A6BC  D3 FE 01 38 */	stfs f31, 0x138(r30)
/* 8012D5E0 0012A6C0  C0 1E 01 3C */	lfs f0, 0x13c(r30)
/* 8012D5E4 0012A6C4  EC 00 F8 28 */	fsubs f0, f0, f31
/* 8012D5E8 0012A6C8  D0 1E 01 3C */	stfs f0, 0x13c(r30)
/* 8012D5EC 0012A6CC  E3 E1 00 58 */	psq_l f31, 0x58(r1), 0, qr0
/* 8012D5F0 0012A6D0  80 01 00 64 */	lwz r0, 0x64(r1)
/* 8012D5F4 0012A6D4  CB E1 00 50 */	lfd f31, 0x50(r1)
/* 8012D5F8 0012A6D8  83 E1 00 4C */	lwz r31, 0x4c(r1)
/* 8012D5FC 0012A6DC  83 C1 00 48 */	lwz r30, 0x48(r1)
/* 8012D600 0012A6E0  83 A1 00 44 */	lwz r29, 0x44(r1)
/* 8012D604 0012A6E4  7C 08 03 A6 */	mtlr r0
/* 8012D608 0012A6E8  38 21 00 60 */	addi r1, r1, 0x60
/* 8012D60C 0012A6EC  4E 80 00 20 */	blr
.endfn zEntTeleportBox_Update__FP4xEntP6xScenef

# zEntTeleportBox_Save(_zEntTeleportBox*, xSerial*)
.fn zEntTeleportBox_Save__FP16_zEntTeleportBoxP7xSerial, global
/* 8012D610 0012A6F0  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8012D614 0012A6F4  7C 08 02 A6 */	mflr r0
/* 8012D618 0012A6F8  90 01 00 14 */	stw r0, 0x14(r1)
/* 8012D61C 0012A6FC  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8012D620 0012A700  7C 9F 23 78 */	mr r31, r4
/* 8012D624 0012A704  93 C1 00 08 */	stw r30, 0x8(r1)
/* 8012D628 0012A708  7C 7E 1B 78 */	mr r30, r3
/* 8012D62C 0012A70C  4B F2 7B E5 */	bl zEntSave__FP4zEntP7xSerial
/* 8012D630 0012A710  80 1E 00 D4 */	lwz r0, 0xd4(r30)
/* 8012D634 0012A714  28 00 00 00 */	cmplwi r0, 0x0
/* 8012D638 0012A718  40 82 00 14 */	bne .L_8012D64C
/* 8012D63C 0012A71C  7F E3 FB 78 */	mr r3, r31
/* 8012D640 0012A720  38 80 00 01 */	li r4, 0x1
/* 8012D644 0012A724  4B F1 59 C9 */	bl Write_b1__7xSerialFi
/* 8012D648 0012A728  48 00 00 10 */	b .L_8012D658
.L_8012D64C:
/* 8012D64C 0012A72C  7F E3 FB 78 */	mr r3, r31
/* 8012D650 0012A730  38 80 00 00 */	li r4, 0x0
/* 8012D654 0012A734  4B F1 59 B9 */	bl Write_b1__7xSerialFi
.L_8012D658:
/* 8012D658 0012A738  80 9E 00 E0 */	lwz r4, 0xe0(r30)
/* 8012D65C 0012A73C  7F E3 FB 78 */	mr r3, r31
/* 8012D660 0012A740  4B F1 5A 9D */	bl Write__7xSerialFUi
/* 8012D664 0012A744  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8012D668 0012A748  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8012D66C 0012A74C  83 C1 00 08 */	lwz r30, 0x8(r1)
/* 8012D670 0012A750  7C 08 03 A6 */	mtlr r0
/* 8012D674 0012A754  38 21 00 10 */	addi r1, r1, 0x10
/* 8012D678 0012A758  4E 80 00 20 */	blr
.endfn zEntTeleportBox_Save__FP16_zEntTeleportBoxP7xSerial

# zEntTeleportBox_Load(_zEntTeleportBox*, xSerial*)
.fn zEntTeleportBox_Load__FP16_zEntTeleportBoxP7xSerial, global
/* 8012D67C 0012A75C  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 8012D680 0012A760  7C 08 02 A6 */	mflr r0
/* 8012D684 0012A764  90 01 00 24 */	stw r0, 0x24(r1)
/* 8012D688 0012A768  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 8012D68C 0012A76C  7C 9F 23 78 */	mr r31, r4
/* 8012D690 0012A770  93 C1 00 18 */	stw r30, 0x18(r1)
/* 8012D694 0012A774  7C 7E 1B 78 */	mr r30, r3
/* 8012D698 0012A778  4B F2 7B 99 */	bl zEntLoad__FP4zEntP7xSerial
/* 8012D69C 0012A77C  38 00 00 00 */	li r0, 0x0
/* 8012D6A0 0012A780  7F E3 FB 78 */	mr r3, r31
/* 8012D6A4 0012A784  90 01 00 08 */	stw r0, 0x8(r1)
/* 8012D6A8 0012A788  38 81 00 08 */	addi r4, r1, 0x8
/* 8012D6AC 0012A78C  4B F1 5C 01 */	bl Read_b1__7xSerialFPi
/* 8012D6B0 0012A790  80 01 00 08 */	lwz r0, 0x8(r1)
/* 8012D6B4 0012A794  2C 00 00 00 */	cmpwi r0, 0x0
/* 8012D6B8 0012A798  41 82 00 10 */	beq .L_8012D6C8
/* 8012D6BC 0012A79C  7F C3 F3 78 */	mr r3, r30
/* 8012D6C0 0012A7A0  48 00 00 35 */	bl zEntTeleportBox_Open__FP16_zEntTeleportBox
/* 8012D6C4 0012A7A4  48 00 00 0C */	b .L_8012D6D0
.L_8012D6C8:
/* 8012D6C8 0012A7A8  7F C3 F3 78 */	mr r3, r30
/* 8012D6CC 0012A7AC  48 00 00 41 */	bl zEntTeleportBox_Close__FP16_zEntTeleportBox
.L_8012D6D0:
/* 8012D6D0 0012A7B0  7F E3 FB 78 */	mr r3, r31
/* 8012D6D4 0012A7B4  38 9E 00 E0 */	addi r4, r30, 0xe0
/* 8012D6D8 0012A7B8  4B F1 5C 9D */	bl Read__7xSerialFPUi
/* 8012D6DC 0012A7BC  80 01 00 24 */	lwz r0, 0x24(r1)
/* 8012D6E0 0012A7C0  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 8012D6E4 0012A7C4  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 8012D6E8 0012A7C8  7C 08 03 A6 */	mtlr r0
/* 8012D6EC 0012A7CC  38 21 00 20 */	addi r1, r1, 0x20
/* 8012D6F0 0012A7D0  4E 80 00 20 */	blr
.endfn zEntTeleportBox_Load__FP16_zEntTeleportBoxP7xSerial

# zEntTeleportBox_Open(_zEntTeleportBox*)
.fn zEntTeleportBox_Open__FP16_zEntTeleportBox, global
/* 8012D6F4 0012A7D4  80 03 00 D4 */	lwz r0, 0xd4(r3)
/* 8012D6F8 0012A7D8  28 00 00 01 */	cmplwi r0, 0x1
/* 8012D6FC 0012A7DC  4C 82 00 20 */	bnelr
/* 8012D700 0012A7E0  38 00 00 00 */	li r0, 0x0
/* 8012D704 0012A7E4  90 03 00 D4 */	stw r0, 0xd4(r3)
/* 8012D708 0012A7E8  4E 80 00 20 */	blr
.endfn zEntTeleportBox_Open__FP16_zEntTeleportBox

# zEntTeleportBox_Close(_zEntTeleportBox*)
.fn zEntTeleportBox_Close__FP16_zEntTeleportBox, global
/* 8012D70C 0012A7EC  80 03 00 D4 */	lwz r0, 0xd4(r3)
/* 8012D710 0012A7F0  28 00 00 00 */	cmplwi r0, 0x0
/* 8012D714 0012A7F4  4C 82 00 20 */	bnelr
/* 8012D718 0012A7F8  38 00 00 01 */	li r0, 0x1
/* 8012D71C 0012A7FC  90 03 00 D4 */	stw r0, 0xd4(r3)
/* 8012D720 0012A800  4E 80 00 20 */	blr
.endfn zEntTeleportBox_Close__FP16_zEntTeleportBox

# zEntTeleportBox_isOpen(_zEntTeleportBox*)
.fn zEntTeleportBox_isOpen__FP16_zEntTeleportBox, global
/* 8012D724 0012A804  80 03 00 D4 */	lwz r0, 0xd4(r3)
/* 8012D728 0012A808  80 63 00 DC */	lwz r3, 0xdc(r3)
/* 8012D72C 0012A80C  28 00 00 00 */	cmplwi r0, 0x0
/* 8012D730 0012A810  40 82 00 18 */	bne .L_8012D748
/* 8012D734 0012A814  80 03 00 D4 */	lwz r0, 0xd4(r3)
/* 8012D738 0012A818  28 00 00 00 */	cmplwi r0, 0x0
/* 8012D73C 0012A81C  40 82 00 0C */	bne .L_8012D748
/* 8012D740 0012A820  38 60 00 01 */	li r3, 0x1
/* 8012D744 0012A824  4E 80 00 20 */	blr
.L_8012D748:
/* 8012D748 0012A828  38 60 00 00 */	li r3, 0x0
/* 8012D74C 0012A82C  4E 80 00 20 */	blr
.endfn zEntTeleportBox_isOpen__FP16_zEntTeleportBox

# zEntTeleportBox_isClosed(_zEntTeleportBox*)
.fn zEntTeleportBox_isClosed__FP16_zEntTeleportBox, global
/* 8012D750 0012A830  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8012D754 0012A834  7C 08 02 A6 */	mflr r0
/* 8012D758 0012A838  90 01 00 14 */	stw r0, 0x14(r1)
/* 8012D75C 0012A83C  4B FF FF C9 */	bl zEntTeleportBox_isOpen__FP16_zEntTeleportBox
/* 8012D760 0012A840  7C 60 00 34 */	cntlzw r0, r3
/* 8012D764 0012A844  54 03 DE 3E */	extrwi r3, r0, 8, 19
/* 8012D768 0012A848  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8012D76C 0012A84C  7C 08 03 A6 */	mtlr r0
/* 8012D770 0012A850  38 21 00 10 */	addi r1, r1, 0x10
/* 8012D774 0012A854  4E 80 00 20 */	blr
.endfn zEntTeleportBox_isClosed__FP16_zEntTeleportBox

# zEntTeleportBox_playerIn()
.fn zEntTeleportBox_playerIn__Fv, global
/* 8012D778 0012A858  80 6D 95 C8 */	lwz r3, sPlayerIn@sda21(r13)
/* 8012D77C 0012A85C  4E 80 00 20 */	blr
.endfn zEntTeleportBox_playerIn__Fv

# zEntTeleportBoxEventCB(xBase*, xBase*, unsigned int, const float*, xBase*)
.fn zEntTeleportBoxEventCB__FP5xBaseP5xBaseUiPCfP5xBase, global
/* 8012D780 0012A860  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8012D784 0012A864  7C 08 02 A6 */	mflr r0
/* 8012D788 0012A868  2C 05 00 56 */	cmpwi r5, 0x56
/* 8012D78C 0012A86C  90 01 00 14 */	stw r0, 0x14(r1)
/* 8012D790 0012A870  41 82 00 B8 */	beq .L_8012D848
/* 8012D794 0012A874  40 80 00 34 */	bge .L_8012D7C8
/* 8012D798 0012A878  2C 05 00 53 */	cmpwi r5, 0x53
/* 8012D79C 0012A87C  41 82 00 74 */	beq .L_8012D810
/* 8012D7A0 0012A880  40 80 00 1C */	bge .L_8012D7BC
/* 8012D7A4 0012A884  2C 05 00 04 */	cmpwi r5, 0x4
/* 8012D7A8 0012A888  41 82 00 5C */	beq .L_8012D804
/* 8012D7AC 0012A88C  40 80 00 C8 */	bge .L_8012D874
/* 8012D7B0 0012A890  2C 05 00 03 */	cmpwi r5, 0x3
/* 8012D7B4 0012A894  40 80 00 44 */	bge .L_8012D7F8
/* 8012D7B8 0012A898  48 00 00 BC */	b .L_8012D874
.L_8012D7BC:
/* 8012D7BC 0012A89C  2C 05 00 55 */	cmpwi r5, 0x55
/* 8012D7C0 0012A8A0  40 80 00 70 */	bge .L_8012D830
/* 8012D7C4 0012A8A4  48 00 00 5C */	b .L_8012D820
.L_8012D7C8:
/* 8012D7C8 0012A8A8  2C 05 01 F7 */	cmpwi r5, 0x1f7
/* 8012D7CC 0012A8AC  41 82 00 2C */	beq .L_8012D7F8
/* 8012D7D0 0012A8B0  40 80 00 1C */	bge .L_8012D7EC
/* 8012D7D4 0012A8B4  2C 05 01 55 */	cmpwi r5, 0x155
/* 8012D7D8 0012A8B8  41 82 00 94 */	beq .L_8012D86C
/* 8012D7DC 0012A8BC  40 80 00 98 */	bge .L_8012D874
/* 8012D7E0 0012A8C0  2C 05 01 54 */	cmpwi r5, 0x154
/* 8012D7E4 0012A8C4  40 80 00 7C */	bge .L_8012D860
/* 8012D7E8 0012A8C8  48 00 00 8C */	b .L_8012D874
.L_8012D7EC:
/* 8012D7EC 0012A8CC  2C 05 01 F9 */	cmpwi r5, 0x1f9
/* 8012D7F0 0012A8D0  40 80 00 84 */	bge .L_8012D874
/* 8012D7F4 0012A8D4  48 00 00 10 */	b .L_8012D804
.L_8012D7F8:
/* 8012D7F8 0012A8D8  7C 83 23 78 */	mr r3, r4
/* 8012D7FC 0012A8DC  4B EE DF FD */	bl xEntShow__FP4xEnt
/* 8012D800 0012A8E0  48 00 00 74 */	b .L_8012D874
.L_8012D804:
/* 8012D804 0012A8E4  7C 83 23 78 */	mr r3, r4
/* 8012D808 0012A8E8  4B EE DF E1 */	bl xEntHide__FP4xEnt
/* 8012D80C 0012A8EC  48 00 00 68 */	b .L_8012D874
.L_8012D810:
/* 8012D810 0012A8F0  88 04 00 22 */	lbz r0, 0x22(r4)
/* 8012D814 0012A8F4  60 00 00 18 */	ori r0, r0, 0x18
/* 8012D818 0012A8F8  98 04 00 22 */	stb r0, 0x22(r4)
/* 8012D81C 0012A8FC  48 00 00 58 */	b .L_8012D874
.L_8012D820:
/* 8012D820 0012A900  88 04 00 22 */	lbz r0, 0x22(r4)
/* 8012D824 0012A904  70 00 00 E7 */	andi. r0, r0, 0xe7
/* 8012D828 0012A908  98 04 00 22 */	stb r0, 0x22(r4)
/* 8012D82C 0012A90C  48 00 00 48 */	b .L_8012D874
.L_8012D830:
/* 8012D830 0012A910  88 04 00 22 */	lbz r0, 0x22(r4)
/* 8012D834 0012A914  7C 83 23 78 */	mr r3, r4
/* 8012D838 0012A918  60 00 00 18 */	ori r0, r0, 0x18
/* 8012D83C 0012A91C  98 04 00 22 */	stb r0, 0x22(r4)
/* 8012D840 0012A920  4B EE DF B9 */	bl xEntShow__FP4xEnt
/* 8012D844 0012A924  48 00 00 30 */	b .L_8012D874
.L_8012D848:
/* 8012D848 0012A928  88 04 00 22 */	lbz r0, 0x22(r4)
/* 8012D84C 0012A92C  7C 83 23 78 */	mr r3, r4
/* 8012D850 0012A930  70 00 00 E7 */	andi. r0, r0, 0xe7
/* 8012D854 0012A934  98 04 00 22 */	stb r0, 0x22(r4)
/* 8012D858 0012A938  4B EE DF 91 */	bl xEntHide__FP4xEnt
/* 8012D85C 0012A93C  48 00 00 18 */	b .L_8012D874
.L_8012D860:
/* 8012D860 0012A940  7C 83 23 78 */	mr r3, r4
/* 8012D864 0012A944  4B FF FE 91 */	bl zEntTeleportBox_Open__FP16_zEntTeleportBox
/* 8012D868 0012A948  48 00 00 0C */	b .L_8012D874
.L_8012D86C:
/* 8012D86C 0012A94C  7C 83 23 78 */	mr r3, r4
/* 8012D870 0012A950  4B FF FE 9D */	bl zEntTeleportBox_Close__FP16_zEntTeleportBox
.L_8012D874:
/* 8012D874 0012A954  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8012D878 0012A958  38 60 00 01 */	li r3, 0x1
/* 8012D87C 0012A95C  7C 08 03 A6 */	mtlr r0
/* 8012D880 0012A960  38 21 00 10 */	addi r1, r1, 0x10
/* 8012D884 0012A964  4E 80 00 20 */	blr
.endfn zEntTeleportBoxEventCB__FP5xBaseP5xBaseUiPCfP5xBase

# 0x8026C2B0 - 0x8026C400
.rodata
.balign 8

.obj "@stringBase0", local
	.4byte 0x426F785F
	.4byte 0x6F70656E
	.4byte 0x0074656C
	.4byte 0x65706F72
	.4byte 0x74617469
	.4byte 0x6F6E5F62
	.4byte 0x6F785F62
	.4byte 0x696E6400
	.4byte 0x54426F78
	.4byte 0x00436C6F
	.4byte 0x73656400
	.4byte 0x4F70656E
	.4byte 0x004A756D
	.4byte 0x70496E00
	.4byte 0x54656C65
	.4byte 0x706F7274
	.4byte 0x004A756D
	.4byte 0x704F7574
	.4byte 0x00436C6F
	.4byte 0x73656432
	.4byte 0x4F70656E
	.4byte 0x0074656C
	.4byte 0x65706F72
	.4byte 0x74617469
	.4byte 0x6F6E5F62
	.4byte 0x6F785F63
	.4byte 0x6C6F7365
	.4byte 0x642E616E
	.4byte 0x6D000074
	.4byte 0x656C6570
	.4byte 0x6F727461
	.4byte 0x74696F6E
	.4byte 0x5F626F78
	.4byte 0x5F6A756D
	.4byte 0x70696E5F
	.4byte 0x74656C65
	.4byte 0x706F7274
	.4byte 0x2E616E6D
	.4byte 0x0074656C
	.4byte 0x65706F72
	.4byte 0x74617469
	.4byte 0x6F6E5F62
	.4byte 0x6F785F6F
	.4byte 0x70656E2E
	.4byte 0x616E6D00
	.4byte 0x74656C65
	.4byte 0x706F7274
	.4byte 0x6174696F
	.4byte 0x6E5F626F
	.4byte 0x785F7465
	.4byte 0x6C65706F
	.4byte 0x72745F6A
	.4byte 0x756D706F
	.4byte 0x75742E61
	.4byte 0x6E6D0074
	.4byte 0x656C6570
	.4byte 0x6F727461
	.4byte 0x74696F6E
	.4byte 0x5F626F78
	.4byte 0x5F74656C
	.4byte 0x65706F72
	.4byte 0x742E616E
	.4byte 0x6D007465
	.4byte 0x6C65706F
	.4byte 0x72746174
	.4byte 0x696F6E5F
	.4byte 0x626F785F
	.4byte 0x636C6F73
	.4byte 0x6564746F
	.4byte 0x6F70656E
	.4byte 0x2E616E6D
	.4byte 0x006D6E75
	.4byte 0x34207465
	.4byte 0x6C65706F
	.4byte 0x72742062
	.4byte 0x6F780042
	.4byte 0x6F785F73
	.4byte 0x68756666
	.4byte 0x6C655F61
	.4byte 0x6C740042
	.4byte 0x6F785F73
	.4byte 0x68756666
	.4byte 0x6C655F6F
	.4byte 0x70656E00
.endobj "@stringBase0"

# 0x803CBEC8 - 0x803CBED8
.section .sbss, "wa", @nobits
.balign 8

.obj sPlayerIn, local
	.skip 0x4
.endobj sPlayerIn

.obj sPlayerNear, local
	.skip 0x4
.endobj sPlayerNear

.obj sTeleportUI, local
	.skip 0x4
.endobj sTeleportUI

.obj sTeleportCamPitch, local
	.skip 0x4
.endobj sTeleportCamPitch

# 0x803CEBB8 - 0x803CEC28
.section .sdata2, "a"
.balign 8

.obj "@777", local
	.4byte 0x40490FDB
.endobj "@777"

.obj "@778", local
	.4byte 0x43340000
.endobj "@778"

.obj "@779", local
	.4byte 0x00000000
.endobj "@779"

.obj "@780", local
	.4byte 0x3F800000
.endobj "@780"

.obj "@853", local
	.4byte 0x4138F5C3
.endobj "@853"

.obj "@858", local
	.4byte 0x3F451EB8
.endobj "@858"

.obj "@860", local
	.4byte 0x3E800000
.endobj "@860"

.obj "@888", local
	.4byte 0x3F99999A
.endobj "@888"

.obj "@943", local
	.4byte 0x3E4CCCCD
.endobj "@943"

.obj "@944", local
	.4byte 0x3DCCCCCD
.endobj "@944"

.obj "@945", local
	.4byte 0x3ECCCCCD
.endobj "@945"

.obj "@946", local
	.4byte 0x3F000000
.endobj "@946"

.obj "@947", local
	.4byte 0x3F666666
.endobj "@947"

.obj "@970", local
	.4byte 0xBF800000
.endobj "@970"

.obj "@971", local
	.4byte 0x3E9C28F6
.endobj "@971"

.obj "@972", local
	.4byte 0xBE9C28F6
.endobj "@972"

.obj "@973", local
	.4byte 0xBE800000
.endobj "@973"

.obj "@974", local
	.4byte 0xBDCCCCCD
.endobj "@974"

.obj "@975", local
	.4byte 0x40200000
.endobj "@975"

.obj "@976", local
	.4byte 0x3CE56042
.endobj "@976"

.obj "@977", local
	.4byte 0xBE23D70A
.endobj "@977"

.obj "@978", local
	.4byte 0x3F1C28F6
.endobj "@978"

.obj "@979", local
	.4byte 0xBF1C28F6
.endobj "@979"

.obj "@980", local
	.4byte 0xBF000000
.endobj "@980"

.obj "@1051", local
	.4byte 0x41700000
.endobj "@1051"

.obj "@1052", local
	.4byte 0x402CCCCD
.endobj "@1052"

.obj "@1054", local
	.4byte 0x43300000
	.4byte 0x00000000
.endobj "@1054"
