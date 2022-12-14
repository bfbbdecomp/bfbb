.include "macros.inc"
.file "AXAux.c"

# 0x801B81CC - 0x801B8654
.text
.balign 4

.fn __AXAuxInit, global
/* 801B81CC 001B52AC  38 E0 00 00 */	li r7, 0x0
/* 801B81D0 001B52B0  38 C0 00 01 */	li r6, 0x1
/* 801B81D4 001B52B4  90 ED 99 B8 */	stw r7, __AXCallbackAuxA@sda21(r13)
/* 801B81D8 001B52B8  38 A0 00 02 */	li r5, 0x2
/* 801B81DC 001B52BC  3C 80 80 36 */	lis r4, __AXBufferAuxA@ha
/* 801B81E0 001B52C0  90 ED 99 BC */	stw r7, __AXCallbackAuxB@sda21(r13)
/* 801B81E4 001B52C4  38 00 00 1E */	li r0, 0x1e
/* 801B81E8 001B52C8  3C 60 80 36 */	lis r3, __AXBufferAuxB@ha
/* 801B81EC 001B52CC  7C 09 03 A6 */	mtctr r0
/* 801B81F0 001B52D0  90 ED 99 C0 */	stw r7, __AXContextAuxA@sda21(r13)
/* 801B81F4 001B52D4  38 84 3E A0 */	addi r4, r4, __AXBufferAuxA@l
/* 801B81F8 001B52D8  38 03 55 20 */	addi r0, r3, __AXBufferAuxB@l
/* 801B81FC 001B52DC  7C 83 23 78 */	mr r3, r4
/* 801B8200 001B52E0  90 ED 99 C4 */	stw r7, __AXContextAuxB@sda21(r13)
/* 801B8204 001B52E4  7C 04 03 78 */	mr r4, r0
/* 801B8208 001B52E8  90 ED 99 D8 */	stw r7, __AXAuxDspWritePosition@sda21(r13)
/* 801B820C 001B52EC  90 CD 99 DC */	stw r6, __AXAuxDspReadPosition@sda21(r13)
/* 801B8210 001B52F0  90 ED 99 E0 */	stw r7, __AXAuxDspWritePositionDpl2@sda21(r13)
/* 801B8214 001B52F4  90 CD 99 E4 */	stw r6, __AXAuxDspReadPositionDpl2@sda21(r13)
/* 801B8218 001B52F8  90 AD 99 E8 */	stw r5, __AXAuxCpuReadWritePosition@sda21(r13)
.L_801B821C:
/* 801B821C 001B52FC  38 00 00 00 */	li r0, 0x0
/* 801B8220 001B5300  90 03 00 00 */	stw r0, 0x0(r3)
/* 801B8224 001B5304  90 04 00 00 */	stw r0, 0x0(r4)
/* 801B8228 001B5308  90 03 00 04 */	stw r0, 0x4(r3)
/* 801B822C 001B530C  90 04 00 04 */	stw r0, 0x4(r4)
/* 801B8230 001B5310  90 03 00 08 */	stw r0, 0x8(r3)
/* 801B8234 001B5314  90 04 00 08 */	stw r0, 0x8(r4)
/* 801B8238 001B5318  90 03 00 0C */	stw r0, 0xc(r3)
/* 801B823C 001B531C  90 04 00 0C */	stw r0, 0xc(r4)
/* 801B8240 001B5320  90 03 00 10 */	stw r0, 0x10(r3)
/* 801B8244 001B5324  90 04 00 10 */	stw r0, 0x10(r4)
/* 801B8248 001B5328  90 03 00 14 */	stw r0, 0x14(r3)
/* 801B824C 001B532C  90 04 00 14 */	stw r0, 0x14(r4)
/* 801B8250 001B5330  90 03 00 18 */	stw r0, 0x18(r3)
/* 801B8254 001B5334  90 04 00 18 */	stw r0, 0x18(r4)
/* 801B8258 001B5338  90 03 00 1C */	stw r0, 0x1c(r3)
/* 801B825C 001B533C  90 04 00 1C */	stw r0, 0x1c(r4)
/* 801B8260 001B5340  90 03 00 20 */	stw r0, 0x20(r3)
/* 801B8264 001B5344  90 04 00 20 */	stw r0, 0x20(r4)
/* 801B8268 001B5348  90 03 00 24 */	stw r0, 0x24(r3)
/* 801B826C 001B534C  90 04 00 24 */	stw r0, 0x24(r4)
/* 801B8270 001B5350  90 03 00 28 */	stw r0, 0x28(r3)
/* 801B8274 001B5354  90 04 00 28 */	stw r0, 0x28(r4)
/* 801B8278 001B5358  90 03 00 2C */	stw r0, 0x2c(r3)
/* 801B827C 001B535C  90 04 00 2C */	stw r0, 0x2c(r4)
/* 801B8280 001B5360  90 03 00 30 */	stw r0, 0x30(r3)
/* 801B8284 001B5364  90 04 00 30 */	stw r0, 0x30(r4)
/* 801B8288 001B5368  90 03 00 34 */	stw r0, 0x34(r3)
/* 801B828C 001B536C  90 04 00 34 */	stw r0, 0x34(r4)
/* 801B8290 001B5370  90 03 00 38 */	stw r0, 0x38(r3)
/* 801B8294 001B5374  90 04 00 38 */	stw r0, 0x38(r4)
/* 801B8298 001B5378  90 03 00 3C */	stw r0, 0x3c(r3)
/* 801B829C 001B537C  38 63 00 40 */	addi r3, r3, 0x40
/* 801B82A0 001B5380  90 04 00 3C */	stw r0, 0x3c(r4)
/* 801B82A4 001B5384  38 84 00 40 */	addi r4, r4, 0x40
/* 801B82A8 001B5388  42 00 FF 74 */	bdnz .L_801B821C
/* 801B82AC 001B538C  4E 80 00 20 */	blr
.endfn __AXAuxInit

.fn __AXAuxQuit, global
/* 801B82B0 001B5390  38 00 00 00 */	li r0, 0x0
/* 801B82B4 001B5394  90 0D 99 B8 */	stw r0, __AXCallbackAuxA@sda21(r13)
/* 801B82B8 001B5398  90 0D 99 BC */	stw r0, __AXCallbackAuxB@sda21(r13)
/* 801B82BC 001B539C  4E 80 00 20 */	blr
.endfn __AXAuxQuit

.fn __AXGetAuxAInput, global
/* 801B82C0 001B53A0  80 0D 99 B8 */	lwz r0, __AXCallbackAuxA@sda21(r13)
/* 801B82C4 001B53A4  28 00 00 00 */	cmplwi r0, 0x0
/* 801B82C8 001B53A8  41 82 00 20 */	beq .L_801B82E8
/* 801B82CC 001B53AC  80 AD 99 D8 */	lwz r5, __AXAuxDspWritePosition@sda21(r13)
/* 801B82D0 001B53B0  3C 80 80 36 */	lis r4, __AXBufferAuxA@ha
/* 801B82D4 001B53B4  38 04 3E A0 */	addi r0, r4, __AXBufferAuxA@l
/* 801B82D8 001B53B8  1C 85 07 80 */	mulli r4, r5, 0x780
/* 801B82DC 001B53BC  7C 00 22 14 */	add r0, r0, r4
/* 801B82E0 001B53C0  90 03 00 00 */	stw r0, 0x0(r3)
/* 801B82E4 001B53C4  4E 80 00 20 */	blr
.L_801B82E8:
/* 801B82E8 001B53C8  38 00 00 00 */	li r0, 0x0
/* 801B82EC 001B53CC  90 03 00 00 */	stw r0, 0x0(r3)
/* 801B82F0 001B53D0  4E 80 00 20 */	blr
.endfn __AXGetAuxAInput

.fn __AXGetAuxAInputDpl2, global
/* 801B82F4 001B53D4  80 AD 99 D8 */	lwz r5, __AXAuxDspWritePosition@sda21(r13)
/* 801B82F8 001B53D8  3C 80 80 36 */	lis r4, __AXBufferAuxB@ha
/* 801B82FC 001B53DC  38 04 55 20 */	addi r0, r4, __AXBufferAuxB@l
/* 801B8300 001B53E0  1C 85 07 80 */	mulli r4, r5, 0x780
/* 801B8304 001B53E4  7C 80 22 14 */	add r4, r0, r4
/* 801B8308 001B53E8  38 04 05 00 */	addi r0, r4, 0x500
/* 801B830C 001B53EC  90 03 00 00 */	stw r0, 0x0(r3)
/* 801B8310 001B53F0  4E 80 00 20 */	blr
.endfn __AXGetAuxAInputDpl2

.fn __AXGetAuxAOutput, global
/* 801B8314 001B53F4  80 AD 99 DC */	lwz r5, __AXAuxDspReadPosition@sda21(r13)
/* 801B8318 001B53F8  3C 80 80 36 */	lis r4, __AXBufferAuxA@ha
/* 801B831C 001B53FC  38 04 3E A0 */	addi r0, r4, __AXBufferAuxA@l
/* 801B8320 001B5400  1C 85 07 80 */	mulli r4, r5, 0x780
/* 801B8324 001B5404  7C 00 22 14 */	add r0, r0, r4
/* 801B8328 001B5408  90 03 00 00 */	stw r0, 0x0(r3)
/* 801B832C 001B540C  4E 80 00 20 */	blr
.endfn __AXGetAuxAOutput

.fn __AXGetAuxAOutputDpl2R, global
/* 801B8330 001B5410  80 AD 99 DC */	lwz r5, __AXAuxDspReadPosition@sda21(r13)
/* 801B8334 001B5414  3C 80 80 36 */	lis r4, __AXBufferAuxA@ha
/* 801B8338 001B5418  38 04 3E A0 */	addi r0, r4, __AXBufferAuxA@l
/* 801B833C 001B541C  1C 85 07 80 */	mulli r4, r5, 0x780
/* 801B8340 001B5420  7C 80 22 14 */	add r4, r0, r4
/* 801B8344 001B5424  38 04 02 80 */	addi r0, r4, 0x280
/* 801B8348 001B5428  90 03 00 00 */	stw r0, 0x0(r3)
/* 801B834C 001B542C  4E 80 00 20 */	blr
.endfn __AXGetAuxAOutputDpl2R

.fn __AXGetAuxAOutputDpl2Ls, global
/* 801B8350 001B5430  80 AD 99 DC */	lwz r5, __AXAuxDspReadPosition@sda21(r13)
/* 801B8354 001B5434  3C 80 80 36 */	lis r4, __AXBufferAuxA@ha
/* 801B8358 001B5438  38 04 3E A0 */	addi r0, r4, __AXBufferAuxA@l
/* 801B835C 001B543C  1C 85 07 80 */	mulli r4, r5, 0x780
/* 801B8360 001B5440  7C 80 22 14 */	add r4, r0, r4
/* 801B8364 001B5444  38 04 05 00 */	addi r0, r4, 0x500
/* 801B8368 001B5448  90 03 00 00 */	stw r0, 0x0(r3)
/* 801B836C 001B544C  4E 80 00 20 */	blr
.endfn __AXGetAuxAOutputDpl2Ls

.fn __AXGetAuxAOutputDpl2Rs, global
/* 801B8370 001B5450  80 AD 99 DC */	lwz r5, __AXAuxDspReadPosition@sda21(r13)
/* 801B8374 001B5454  3C 80 80 36 */	lis r4, __AXBufferAuxB@ha
/* 801B8378 001B5458  38 04 55 20 */	addi r0, r4, __AXBufferAuxB@l
/* 801B837C 001B545C  1C 85 07 80 */	mulli r4, r5, 0x780
/* 801B8380 001B5460  7C 80 22 14 */	add r4, r0, r4
/* 801B8384 001B5464  38 04 05 00 */	addi r0, r4, 0x500
/* 801B8388 001B5468  90 03 00 00 */	stw r0, 0x0(r3)
/* 801B838C 001B546C  4E 80 00 20 */	blr
.endfn __AXGetAuxAOutputDpl2Rs

.fn __AXGetAuxBInput, global
/* 801B8390 001B5470  80 0D 99 BC */	lwz r0, __AXCallbackAuxB@sda21(r13)
/* 801B8394 001B5474  28 00 00 00 */	cmplwi r0, 0x0
/* 801B8398 001B5478  41 82 00 20 */	beq .L_801B83B8
/* 801B839C 001B547C  80 AD 99 D8 */	lwz r5, __AXAuxDspWritePosition@sda21(r13)
/* 801B83A0 001B5480  3C 80 80 36 */	lis r4, __AXBufferAuxB@ha
/* 801B83A4 001B5484  38 04 55 20 */	addi r0, r4, __AXBufferAuxB@l
/* 801B83A8 001B5488  1C 85 07 80 */	mulli r4, r5, 0x780
/* 801B83AC 001B548C  7C 00 22 14 */	add r0, r0, r4
/* 801B83B0 001B5490  90 03 00 00 */	stw r0, 0x0(r3)
/* 801B83B4 001B5494  4E 80 00 20 */	blr
.L_801B83B8:
/* 801B83B8 001B5498  38 00 00 00 */	li r0, 0x0
/* 801B83BC 001B549C  90 03 00 00 */	stw r0, 0x0(r3)
/* 801B83C0 001B54A0  4E 80 00 20 */	blr
.endfn __AXGetAuxBInput

.fn __AXGetAuxBOutput, global
/* 801B83C4 001B54A4  80 AD 99 DC */	lwz r5, __AXAuxDspReadPosition@sda21(r13)
/* 801B83C8 001B54A8  3C 80 80 36 */	lis r4, __AXBufferAuxB@ha
/* 801B83CC 001B54AC  38 04 55 20 */	addi r0, r4, __AXBufferAuxB@l
/* 801B83D0 001B54B0  1C 85 07 80 */	mulli r4, r5, 0x780
/* 801B83D4 001B54B4  7C 00 22 14 */	add r0, r0, r4
/* 801B83D8 001B54B8  90 03 00 00 */	stw r0, 0x0(r3)
/* 801B83DC 001B54BC  4E 80 00 20 */	blr
.endfn __AXGetAuxBOutput

.fn __AXGetAuxBForDPL2, global
/* 801B83E0 001B54C0  80 AD 99 E0 */	lwz r5, __AXAuxDspWritePositionDpl2@sda21(r13)
/* 801B83E4 001B54C4  3C 80 80 36 */	lis r4, __AXBufferAuxB@ha
/* 801B83E8 001B54C8  38 04 55 20 */	addi r0, r4, __AXBufferAuxB@l
/* 801B83EC 001B54CC  1C 85 07 80 */	mulli r4, r5, 0x780
/* 801B83F0 001B54D0  7C 00 22 14 */	add r0, r0, r4
/* 801B83F4 001B54D4  90 03 00 00 */	stw r0, 0x0(r3)
/* 801B83F8 001B54D8  4E 80 00 20 */	blr
.endfn __AXGetAuxBForDPL2

.fn __AXGetAuxBOutputDPL2, global
/* 801B83FC 001B54DC  80 AD 99 E4 */	lwz r5, __AXAuxDspReadPositionDpl2@sda21(r13)
/* 801B8400 001B54E0  3C 80 80 36 */	lis r4, __AXBufferAuxB@ha
/* 801B8404 001B54E4  38 04 55 20 */	addi r0, r4, __AXBufferAuxB@l
/* 801B8408 001B54E8  1C 85 07 80 */	mulli r4, r5, 0x780
/* 801B840C 001B54EC  7C 00 22 14 */	add r0, r0, r4
/* 801B8410 001B54F0  90 03 00 00 */	stw r0, 0x0(r3)
/* 801B8414 001B54F4  4E 80 00 20 */	blr
.endfn __AXGetAuxBOutputDPL2

.fn __AXProcessAux, global
/* 801B8418 001B54F8  7C 08 02 A6 */	mflr r0
/* 801B841C 001B54FC  3C 80 80 36 */	lis r4, ...bss.0@ha
/* 801B8420 001B5500  90 01 00 04 */	stw r0, 0x4(r1)
/* 801B8424 001B5504  94 21 FF C8 */	stwu r1, -0x38(r1)
/* 801B8428 001B5508  93 E1 00 34 */	stw r31, 0x34(r1)
/* 801B842C 001B550C  3B E4 3E A0 */	addi r31, r4, ...bss.0@l
/* 801B8430 001B5510  80 0D 99 D8 */	lwz r0, __AXAuxDspWritePosition@sda21(r13)
/* 801B8434 001B5514  80 6D 99 DC */	lwz r3, __AXAuxDspReadPosition@sda21(r13)
/* 801B8438 001B5518  1C 80 07 80 */	mulli r4, r0, 0x780
/* 801B843C 001B551C  80 0D 99 B8 */	lwz r0, __AXCallbackAuxA@sda21(r13)
/* 801B8440 001B5520  1C 63 07 80 */	mulli r3, r3, 0x780
/* 801B8444 001B5524  7C 9F 22 14 */	add r4, r31, r4
/* 801B8448 001B5528  7C 7F 1A 14 */	add r3, r31, r3
/* 801B844C 001B552C  90 8D 99 C8 */	stw r4, __AXAuxADspWrite@sda21(r13)
/* 801B8450 001B5530  38 84 16 80 */	addi r4, r4, 0x1680
/* 801B8454 001B5534  90 6D 99 CC */	stw r3, __AXAuxADspRead@sda21(r13)
/* 801B8458 001B5538  38 63 16 80 */	addi r3, r3, 0x1680
/* 801B845C 001B553C  28 00 00 00 */	cmplwi r0, 0x0
/* 801B8460 001B5540  90 8D 99 D0 */	stw r4, __AXAuxBDspWrite@sda21(r13)
/* 801B8464 001B5544  90 6D 99 D4 */	stw r3, __AXAuxBDspRead@sda21(r13)
/* 801B8468 001B5548  41 82 00 CC */	beq .L_801B8534
/* 801B846C 001B554C  80 0D 9A 00 */	lwz r0, __AXClMode@sda21(r13)
/* 801B8470 001B5550  28 00 00 02 */	cmplwi r0, 0x2
/* 801B8474 001B5554  40 82 00 74 */	bne .L_801B84E8
/* 801B8478 001B5558  80 0D 99 E8 */	lwz r0, __AXAuxCpuReadWritePosition@sda21(r13)
/* 801B847C 001B555C  38 80 07 80 */	li r4, 0x780
/* 801B8480 001B5560  1C 00 07 80 */	mulli r0, r0, 0x780
/* 801B8484 001B5564  7C BF 02 14 */	add r5, r31, r0
/* 801B8488 001B5568  90 A1 00 20 */	stw r5, 0x20(r1)
/* 801B848C 001B556C  38 05 02 80 */	addi r0, r5, 0x280
/* 801B8490 001B5570  38 65 05 00 */	addi r3, r5, 0x500
/* 801B8494 001B5574  90 01 00 24 */	stw r0, 0x24(r1)
/* 801B8498 001B5578  38 05 1B 80 */	addi r0, r5, 0x1b80
/* 801B849C 001B557C  90 61 00 28 */	stw r3, 0x28(r1)
/* 801B84A0 001B5580  90 01 00 2C */	stw r0, 0x2c(r1)
/* 801B84A4 001B5584  80 61 00 20 */	lwz r3, 0x20(r1)
/* 801B84A8 001B5588  48 01 9E 85 */	bl DCInvalidateRange
/* 801B84AC 001B558C  80 61 00 2C */	lwz r3, 0x2c(r1)
/* 801B84B0 001B5590  38 80 02 80 */	li r4, 0x280
/* 801B84B4 001B5594  48 01 9E 79 */	bl DCInvalidateRange
/* 801B84B8 001B5598  81 8D 99 B8 */	lwz r12, __AXCallbackAuxA@sda21(r13)
/* 801B84BC 001B559C  38 61 00 20 */	addi r3, r1, 0x20
/* 801B84C0 001B55A0  80 8D 99 C0 */	lwz r4, __AXContextAuxA@sda21(r13)
/* 801B84C4 001B55A4  7D 88 03 A6 */	mtlr r12
/* 801B84C8 001B55A8  4E 80 00 21 */	blrl
/* 801B84CC 001B55AC  80 61 00 20 */	lwz r3, 0x20(r1)
/* 801B84D0 001B55B0  38 80 07 80 */	li r4, 0x780
/* 801B84D4 001B55B4  48 01 9E E5 */	bl DCFlushRangeNoSync
/* 801B84D8 001B55B8  80 61 00 2C */	lwz r3, 0x2c(r1)
/* 801B84DC 001B55BC  38 80 02 80 */	li r4, 0x280
/* 801B84E0 001B55C0  48 01 9E D9 */	bl DCFlushRangeNoSync
/* 801B84E4 001B55C4  48 00 00 50 */	b .L_801B8534
.L_801B84E8:
/* 801B84E8 001B55C8  80 0D 99 E8 */	lwz r0, __AXAuxCpuReadWritePosition@sda21(r13)
/* 801B84EC 001B55CC  38 80 07 80 */	li r4, 0x780
/* 801B84F0 001B55D0  1C 00 07 80 */	mulli r0, r0, 0x780
/* 801B84F4 001B55D4  7C BF 02 14 */	add r5, r31, r0
/* 801B84F8 001B55D8  90 A1 00 14 */	stw r5, 0x14(r1)
/* 801B84FC 001B55DC  38 65 02 80 */	addi r3, r5, 0x280
/* 801B8500 001B55E0  38 05 05 00 */	addi r0, r5, 0x500
/* 801B8504 001B55E4  90 61 00 18 */	stw r3, 0x18(r1)
/* 801B8508 001B55E8  90 01 00 1C */	stw r0, 0x1c(r1)
/* 801B850C 001B55EC  80 61 00 14 */	lwz r3, 0x14(r1)
/* 801B8510 001B55F0  48 01 9E 1D */	bl DCInvalidateRange
/* 801B8514 001B55F4  81 8D 99 B8 */	lwz r12, __AXCallbackAuxA@sda21(r13)
/* 801B8518 001B55F8  38 61 00 14 */	addi r3, r1, 0x14
/* 801B851C 001B55FC  80 8D 99 C0 */	lwz r4, __AXContextAuxA@sda21(r13)
/* 801B8520 001B5600  7D 88 03 A6 */	mtlr r12
/* 801B8524 001B5604  4E 80 00 21 */	blrl
/* 801B8528 001B5608  80 61 00 14 */	lwz r3, 0x14(r1)
/* 801B852C 001B560C  38 80 07 80 */	li r4, 0x780
/* 801B8530 001B5610  48 01 9E 89 */	bl DCFlushRangeNoSync
.L_801B8534:
/* 801B8534 001B5614  80 0D 99 BC */	lwz r0, __AXCallbackAuxB@sda21(r13)
/* 801B8538 001B5618  28 00 00 00 */	cmplwi r0, 0x0
/* 801B853C 001B561C  41 82 00 60 */	beq .L_801B859C
/* 801B8540 001B5620  80 0D 9A 00 */	lwz r0, __AXClMode@sda21(r13)
/* 801B8544 001B5624  28 00 00 02 */	cmplwi r0, 0x2
/* 801B8548 001B5628  41 82 00 54 */	beq .L_801B859C
/* 801B854C 001B562C  80 0D 99 E8 */	lwz r0, __AXAuxCpuReadWritePosition@sda21(r13)
/* 801B8550 001B5630  38 80 07 80 */	li r4, 0x780
/* 801B8554 001B5634  1C 00 07 80 */	mulli r0, r0, 0x780
/* 801B8558 001B5638  7C BF 02 14 */	add r5, r31, r0
/* 801B855C 001B563C  38 A5 16 80 */	addi r5, r5, 0x1680
/* 801B8560 001B5640  90 A1 00 08 */	stw r5, 0x8(r1)
/* 801B8564 001B5644  38 65 02 80 */	addi r3, r5, 0x280
/* 801B8568 001B5648  38 05 05 00 */	addi r0, r5, 0x500
/* 801B856C 001B564C  90 61 00 0C */	stw r3, 0xc(r1)
/* 801B8570 001B5650  90 01 00 10 */	stw r0, 0x10(r1)
/* 801B8574 001B5654  80 61 00 08 */	lwz r3, 0x8(r1)
/* 801B8578 001B5658  48 01 9D B5 */	bl DCInvalidateRange
/* 801B857C 001B565C  81 8D 99 BC */	lwz r12, __AXCallbackAuxB@sda21(r13)
/* 801B8580 001B5660  38 61 00 08 */	addi r3, r1, 0x8
/* 801B8584 001B5664  80 8D 99 C4 */	lwz r4, __AXContextAuxB@sda21(r13)
/* 801B8588 001B5668  7D 88 03 A6 */	mtlr r12
/* 801B858C 001B566C  4E 80 00 21 */	blrl
/* 801B8590 001B5670  80 61 00 08 */	lwz r3, 0x8(r1)
/* 801B8594 001B5674  38 80 07 80 */	li r4, 0x780
/* 801B8598 001B5678  48 01 9E 21 */	bl DCFlushRangeNoSync
.L_801B859C:
/* 801B859C 001B567C  80 8D 99 D8 */	lwz r4, __AXAuxDspWritePosition@sda21(r13)
/* 801B85A0 001B5680  3C 60 AA AB */	lis r3, 0xaaab
/* 801B85A4 001B5684  80 AD 99 DC */	lwz r5, __AXAuxDspReadPosition@sda21(r13)
/* 801B85A8 001B5688  39 03 AA AB */	addi r8, r3, -0x5555
/* 801B85AC 001B568C  80 6D 99 E8 */	lwz r3, __AXAuxCpuReadWritePosition@sda21(r13)
/* 801B85B0 001B5690  38 04 00 01 */	addi r0, r4, 0x1
/* 801B85B4 001B5694  80 8D 99 E0 */	lwz r4, __AXAuxDspWritePositionDpl2@sda21(r13)
/* 801B85B8 001B5698  38 A5 00 01 */	addi r5, r5, 0x1
/* 801B85BC 001B569C  90 0D 99 D8 */	stw r0, __AXAuxDspWritePosition@sda21(r13)
/* 801B85C0 001B56A0  38 03 00 01 */	addi r0, r3, 0x1
/* 801B85C4 001B56A4  80 6D 99 E4 */	lwz r3, __AXAuxDspReadPositionDpl2@sda21(r13)
/* 801B85C8 001B56A8  90 AD 99 DC */	stw r5, __AXAuxDspReadPosition@sda21(r13)
/* 801B85CC 001B56AC  38 A4 00 01 */	addi r5, r4, 0x1
/* 801B85D0 001B56B0  81 4D 99 D8 */	lwz r10, __AXAuxDspWritePosition@sda21(r13)
/* 801B85D4 001B56B4  38 83 00 01 */	addi r4, r3, 0x1
/* 801B85D8 001B56B8  90 0D 99 E8 */	stw r0, __AXAuxCpuReadWritePosition@sda21(r13)
/* 801B85DC 001B56BC  80 ED 99 DC */	lwz r7, __AXAuxDspReadPosition@sda21(r13)
/* 801B85E0 001B56C0  7D 28 50 16 */	mulhwu r9, r8, r10
/* 801B85E4 001B56C4  80 6D 99 E8 */	lwz r3, __AXAuxCpuReadWritePosition@sda21(r13)
/* 801B85E8 001B56C8  90 AD 99 E0 */	stw r5, __AXAuxDspWritePositionDpl2@sda21(r13)
/* 801B85EC 001B56CC  90 8D 99 E4 */	stw r4, __AXAuxDspReadPositionDpl2@sda21(r13)
/* 801B85F0 001B56D0  7C C8 38 16 */	mulhwu r6, r8, r7
/* 801B85F4 001B56D4  80 AD 99 E0 */	lwz r5, __AXAuxDspWritePositionDpl2@sda21(r13)
/* 801B85F8 001B56D8  80 8D 99 E4 */	lwz r4, __AXAuxDspReadPositionDpl2@sda21(r13)
/* 801B85FC 001B56DC  7C 08 18 16 */	mulhwu r0, r8, r3
/* 801B8600 001B56E0  55 29 F8 7E */	srwi r9, r9, 1
/* 801B8604 001B56E4  54 C6 F8 7E */	srwi r6, r6, 1
/* 801B8608 001B56E8  54 00 F8 7E */	srwi r0, r0, 1
/* 801B860C 001B56EC  1D 09 00 03 */	mulli r8, r9, 0x3
/* 801B8610 001B56F0  1C C6 00 03 */	mulli r6, r6, 0x3
/* 801B8614 001B56F4  1C 00 00 03 */	mulli r0, r0, 0x3
/* 801B8618 001B56F8  7D 08 50 50 */	subf r8, r8, r10
/* 801B861C 001B56FC  7C C6 38 50 */	subf r6, r6, r7
/* 801B8620 001B5700  91 0D 99 D8 */	stw r8, __AXAuxDspWritePosition@sda21(r13)
/* 801B8624 001B5704  54 A5 07 FE */	clrlwi r5, r5, 31
/* 801B8628 001B5708  54 84 07 FE */	clrlwi r4, r4, 31
/* 801B862C 001B570C  90 CD 99 DC */	stw r6, __AXAuxDspReadPosition@sda21(r13)
/* 801B8630 001B5710  7C 00 18 50 */	subf r0, r0, r3
/* 801B8634 001B5714  90 AD 99 E0 */	stw r5, __AXAuxDspWritePositionDpl2@sda21(r13)
/* 801B8638 001B5718  90 8D 99 E4 */	stw r4, __AXAuxDspReadPositionDpl2@sda21(r13)
/* 801B863C 001B571C  90 0D 99 E8 */	stw r0, __AXAuxCpuReadWritePosition@sda21(r13)
/* 801B8640 001B5720  80 01 00 3C */	lwz r0, 0x3c(r1)
/* 801B8644 001B5724  83 E1 00 34 */	lwz r31, 0x34(r1)
/* 801B8648 001B5728  38 21 00 38 */	addi r1, r1, 0x38
/* 801B864C 001B572C  7C 08 03 A6 */	mtlr r0
/* 801B8650 001B5730  4E 80 00 20 */	blr
.endfn __AXProcessAux

# 0x80363EA0 - 0x80366BA0
.section .bss, "wa", @nobits
.balign 8

.obj __AXBufferAuxA, local
.sym ...bss.0, local
	.skip 0x1680
.endobj __AXBufferAuxA

.obj __AXBufferAuxB, local
	.skip 0x1680
.endobj __AXBufferAuxB

# 0x803CC2B8 - 0x803CC2F0
.section .sbss, "wa", @nobits
.balign 8

.obj __AXCallbackAuxA, local
	.skip 0x4
.endobj __AXCallbackAuxA

.obj __AXCallbackAuxB, local
	.skip 0x4
.endobj __AXCallbackAuxB

.obj __AXContextAuxA, local
	.skip 0x4
.endobj __AXContextAuxA

.obj __AXContextAuxB, local
	.skip 0x4
.endobj __AXContextAuxB

.obj __AXAuxADspWrite, local
	.skip 0x4
.endobj __AXAuxADspWrite

.obj __AXAuxADspRead, local
	.skip 0x4
.endobj __AXAuxADspRead

.obj __AXAuxBDspWrite, local
	.skip 0x4
.endobj __AXAuxBDspWrite

.obj __AXAuxBDspRead, local
	.skip 0x4
.endobj __AXAuxBDspRead

.obj __AXAuxDspWritePosition, local
	.skip 0x4
.endobj __AXAuxDspWritePosition

.obj __AXAuxDspReadPosition, local
	.skip 0x4
.endobj __AXAuxDspReadPosition

.obj __AXAuxDspWritePositionDpl2, local
	.skip 0x4
.endobj __AXAuxDspWritePositionDpl2

.obj __AXAuxDspReadPositionDpl2, local
	.skip 0x4
.endobj __AXAuxDspReadPositionDpl2

.obj __AXAuxCpuReadWritePosition, local
	.skip 0x4
.endobj __AXAuxCpuReadWritePosition
	.skip 0x4
