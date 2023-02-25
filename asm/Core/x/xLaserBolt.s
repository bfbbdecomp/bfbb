.include "macros.inc"
.file "xLaserBolt.cpp"

# 0x8017D544 - 0x8017E838
.text
.balign 4

# xLaserBoltEmitter::init(unsigned long, const char*)
.fn init__17xLaserBoltEmitterFUlPCc, global
/* 8017D544 0017A624  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 8017D548 0017A628  7C 08 02 A6 */	mflr r0
/* 8017D54C 0017A62C  90 01 00 24 */	stw r0, 0x24(r1)
/* 8017D550 0017A630  38 00 00 00 */	li r0, 0x0
/* 8017D554 0017A634  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 8017D558 0017A638  7C BF 2B 78 */	mr r31, r5
/* 8017D55C 0017A63C  38 A0 00 1C */	li r5, 0x1c
/* 8017D560 0017A640  93 C1 00 18 */	stw r30, 0x18(r1)
/* 8017D564 0017A644  7C 9E 23 78 */	mr r30, r4
/* 8017D568 0017A648  38 80 00 00 */	li r4, 0x0
/* 8017D56C 0017A64C  93 A1 00 14 */	stw r29, 0x14(r1)
/* 8017D570 0017A650  7C 7D 1B 78 */	mr r29, r3
/* 8017D574 0017A654  90 03 00 54 */	stw r0, 0x54(r3)
/* 8017D578 0017A658  38 7D 00 78 */	addi r3, r29, 0x78
/* 8017D57C 0017A65C  4B E8 5E DD */	bl memset
/* 8017D580 0017A660  7F C4 F3 78 */	mr r4, r30
/* 8017D584 0017A664  38 7D 00 3C */	addi r3, r29, 0x3c
/* 8017D588 0017A668  48 00 15 D9 */	bl "init__40static_queue<Q217xLaserBoltEmitter4bolt>FUl"
/* 8017D58C 0017A66C  7F A3 EB 78 */	mr r3, r29
/* 8017D590 0017A670  7F E4 FB 78 */	mr r4, r31
/* 8017D594 0017A674  48 00 12 A5 */	bl debug_init__17xLaserBoltEmitterFPCc
/* 8017D598 0017A678  80 01 00 24 */	lwz r0, 0x24(r1)
/* 8017D59C 0017A67C  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 8017D5A0 0017A680  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 8017D5A4 0017A684  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 8017D5A8 0017A688  7C 08 03 A6 */	mtlr r0
/* 8017D5AC 0017A68C  38 21 00 20 */	addi r1, r1, 0x20
/* 8017D5B0 0017A690  4E 80 00 20 */	blr
.endfn init__17xLaserBoltEmitterFUlPCc

# xLaserBoltEmitter::set_texture(const char*)
.fn set_texture__17xLaserBoltEmitterFPCc, global
/* 8017D5B4 0017A694  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8017D5B8 0017A698  7C 08 02 A6 */	mflr r0
/* 8017D5BC 0017A69C  90 01 00 14 */	stw r0, 0x14(r1)
/* 8017D5C0 0017A6A0  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8017D5C4 0017A6A4  7C 7F 1B 78 */	mr r31, r3
/* 8017D5C8 0017A6A8  7C 83 23 78 */	mr r3, r4
/* 8017D5CC 0017A6AC  4B EC EC 49 */	bl xStrHash__FPCc
/* 8017D5D0 0017A6B0  7C 64 1B 78 */	mr r4, r3
/* 8017D5D4 0017A6B4  7F E3 FB 78 */	mr r3, r31
/* 8017D5D8 0017A6B8  48 00 00 19 */	bl set_texture__17xLaserBoltEmitterFUi
/* 8017D5DC 0017A6BC  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8017D5E0 0017A6C0  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8017D5E4 0017A6C4  7C 08 03 A6 */	mtlr r0
/* 8017D5E8 0017A6C8  38 21 00 10 */	addi r1, r1, 0x10
/* 8017D5EC 0017A6CC  4E 80 00 20 */	blr
.endfn set_texture__17xLaserBoltEmitterFPCc

# xLaserBoltEmitter::set_texture(unsigned int)
.fn set_texture__17xLaserBoltEmitterFUi, global
/* 8017D5F0 0017A6D0  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8017D5F4 0017A6D4  7C 08 02 A6 */	mflr r0
/* 8017D5F8 0017A6D8  90 01 00 14 */	stw r0, 0x14(r1)
/* 8017D5FC 0017A6DC  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8017D600 0017A6E0  7C 7F 1B 78 */	mr r31, r3
/* 8017D604 0017A6E4  7C 83 23 78 */	mr r3, r4
/* 8017D608 0017A6E8  38 80 00 00 */	li r4, 0x0
/* 8017D60C 0017A6EC  4B EC E1 01 */	bl xSTFindAsset__FUiPUi
/* 8017D610 0017A6F0  7C 64 1B 78 */	mr r4, r3
/* 8017D614 0017A6F4  7F E3 FB 78 */	mr r3, r31
/* 8017D618 0017A6F8  48 00 00 19 */	bl set_texture__17xLaserBoltEmitterFP9RwTexture
/* 8017D61C 0017A6FC  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8017D620 0017A700  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8017D624 0017A704  7C 08 03 A6 */	mtlr r0
/* 8017D628 0017A708  38 21 00 10 */	addi r1, r1, 0x10
/* 8017D62C 0017A70C  4E 80 00 20 */	blr
.endfn set_texture__17xLaserBoltEmitterFUi

# xLaserBoltEmitter::set_texture(RwTexture*)
.fn set_texture__17xLaserBoltEmitterFP9RwTexture, global
/* 8017D630 0017A710  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8017D634 0017A714  7C 08 02 A6 */	mflr r0
/* 8017D638 0017A718  28 04 00 00 */	cmplwi r4, 0x0
/* 8017D63C 0017A71C  90 01 00 14 */	stw r0, 0x14(r1)
/* 8017D640 0017A720  40 82 00 10 */	bne .L_8017D650
/* 8017D644 0017A724  38 00 00 00 */	li r0, 0x0
/* 8017D648 0017A728  90 03 00 54 */	stw r0, 0x54(r3)
/* 8017D64C 0017A72C  48 00 00 0C */	b .L_8017D658
.L_8017D650:
/* 8017D650 0017A730  80 84 00 00 */	lwz r4, 0x0(r4)
/* 8017D654 0017A734  48 00 00 15 */	bl set_texture__17xLaserBoltEmitterFP8RwRaster
.L_8017D658:
/* 8017D658 0017A738  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8017D65C 0017A73C  7C 08 03 A6 */	mtlr r0
/* 8017D660 0017A740  38 21 00 10 */	addi r1, r1, 0x10
/* 8017D664 0017A744  4E 80 00 20 */	blr
.endfn set_texture__17xLaserBoltEmitterFP9RwTexture

# xLaserBoltEmitter::set_texture(RwRaster*)
.fn set_texture__17xLaserBoltEmitterFP8RwRaster, global
/* 8017D668 0017A748  90 83 00 54 */	stw r4, 0x54(r3)
/* 8017D66C 0017A74C  4E 80 00 20 */	blr
.endfn set_texture__17xLaserBoltEmitterFP8RwRaster

# xLaserBoltEmitter::reset()
.fn reset__17xLaserBoltEmitterFv, global
/* 8017D670 0017A750  94 21 FF D0 */	stwu r1, -0x30(r1)
/* 8017D674 0017A754  7C 08 02 A6 */	mflr r0
/* 8017D678 0017A758  90 01 00 34 */	stw r0, 0x34(r1)
/* 8017D67C 0017A75C  93 E1 00 2C */	stw r31, 0x2c(r1)
/* 8017D680 0017A760  93 C1 00 28 */	stw r30, 0x28(r1)
/* 8017D684 0017A764  93 A1 00 24 */	stw r29, 0x24(r1)
/* 8017D688 0017A768  93 81 00 20 */	stw r28, 0x20(r1)
/* 8017D68C 0017A76C  7C 7C 1B 78 */	mr r28, r3
/* 8017D690 0017A770  38 7C 00 3C */	addi r3, r28, 0x3c
/* 8017D694 0017A774  48 00 16 71 */	bl "begin__40static_queue<Q217xLaserBoltEmitter4bolt>CFv"
/* 8017D698 0017A778  90 81 00 14 */	stw r4, 0x14(r1)
/* 8017D69C 0017A77C  90 61 00 10 */	stw r3, 0x10(r1)
/* 8017D6A0 0017A780  48 00 00 54 */	b .L_8017D6F4
.L_8017D6A4:
/* 8017D6A4 0017A784  38 61 00 10 */	addi r3, r1, 0x10
/* 8017D6A8 0017A788  48 00 16 45 */	bl "__ml__Q240static_queue<Q217xLaserBoltEmitter4bolt>8iteratorCFv"
/* 8017D6AC 0017A78C  80 1C 00 90 */	lwz r0, 0x90(r28)
/* 8017D6B0 0017A790  7C 7F 1B 78 */	mr r31, r3
/* 8017D6B4 0017A794  83 DC 00 74 */	lwz r30, 0x74(r28)
/* 8017D6B8 0017A798  1C 00 00 18 */	mulli r0, r0, 0x18
/* 8017D6BC 0017A79C  7F BE 02 14 */	add r29, r30, r0
/* 8017D6C0 0017A7A0  48 00 00 24 */	b .L_8017D6E4
.L_8017D6C4:
/* 8017D6C4 0017A7A4  C0 3F 00 34 */	lfs f1, 0x34(r31)
/* 8017D6C8 0017A7A8  7F 83 E3 78 */	mr r3, r28
/* 8017D6CC 0017A7AC  C0 62 AE 20 */	lfs f3, "@899"@sda21(r2)
/* 8017D6D0 0017A7B0  7F C4 F3 78 */	mr r4, r30
/* 8017D6D4 0017A7B4  FC 40 08 90 */	fmr f2, f1
/* 8017D6D8 0017A7B8  7F E5 FB 78 */	mr r5, r31
/* 8017D6DC 0017A7BC  48 00 11 61 */	bl emit_fx__17xLaserBoltEmitterFRQ217xLaserBoltEmitter11effect_dataRQ217xLaserBoltEmitter4boltfff
/* 8017D6E0 0017A7C0  3B DE 00 18 */	addi r30, r30, 0x18
.L_8017D6E4:
/* 8017D6E4 0017A7C4  7C 1E E8 40 */	cmplw r30, r29
/* 8017D6E8 0017A7C8  40 82 FF DC */	bne .L_8017D6C4
/* 8017D6EC 0017A7CC  38 61 00 10 */	addi r3, r1, 0x10
/* 8017D6F0 0017A7D0  48 00 15 89 */	bl "__pp__Q240static_queue<Q217xLaserBoltEmitter4bolt>8iteratorFv"
.L_8017D6F4:
/* 8017D6F4 0017A7D4  38 7C 00 3C */	addi r3, r28, 0x3c
/* 8017D6F8 0017A7D8  48 00 15 11 */	bl "end__40static_queue<Q217xLaserBoltEmitter4bolt>CFv"
/* 8017D6FC 0017A7DC  90 81 00 0C */	stw r4, 0xc(r1)
/* 8017D700 0017A7E0  38 81 00 08 */	addi r4, r1, 0x8
/* 8017D704 0017A7E4  90 61 00 08 */	stw r3, 0x8(r1)
/* 8017D708 0017A7E8  38 61 00 10 */	addi r3, r1, 0x10
/* 8017D70C 0017A7EC  48 00 14 E1 */	bl "__ne__Q240static_queue<Q217xLaserBoltEmitter4bolt>8iteratorCFRCQ240static_queue<Q217xLaserBoltEmitter4bolt>8iterator"
/* 8017D710 0017A7F0  54 60 06 3F */	clrlwi. r0, r3, 24
/* 8017D714 0017A7F4  40 82 FF 90 */	bne .L_8017D6A4
/* 8017D718 0017A7F8  38 7C 00 3C */	addi r3, r28, 0x3c
/* 8017D71C 0017A7FC  48 00 14 C1 */	bl "clear__40static_queue<Q217xLaserBoltEmitter4bolt>Fv"
/* 8017D720 0017A800  38 00 00 00 */	li r0, 0x0
/* 8017D724 0017A804  3B A0 00 00 */	li r29, 0x0
/* 8017D728 0017A808  90 1C 00 58 */	stw r0, 0x58(r28)
.L_8017D72C:
/* 8017D72C 0017A80C  7F 83 E3 78 */	mr r3, r28
/* 8017D730 0017A810  7F A4 EB 78 */	mr r4, r29
/* 8017D734 0017A814  48 00 0A C5 */	bl reset_fx__17xLaserBoltEmitterFQ217xLaserBoltEmitter12fx_when_enum
/* 8017D738 0017A818  3B BD 00 01 */	addi r29, r29, 0x1
/* 8017D73C 0017A81C  2C 1D 00 07 */	cmpwi r29, 0x7
/* 8017D740 0017A820  41 80 FF EC */	blt .L_8017D72C
/* 8017D744 0017A824  80 01 00 34 */	lwz r0, 0x34(r1)
/* 8017D748 0017A828  83 E1 00 2C */	lwz r31, 0x2c(r1)
/* 8017D74C 0017A82C  83 C1 00 28 */	lwz r30, 0x28(r1)
/* 8017D750 0017A830  83 A1 00 24 */	lwz r29, 0x24(r1)
/* 8017D754 0017A834  83 81 00 20 */	lwz r28, 0x20(r1)
/* 8017D758 0017A838  7C 08 03 A6 */	mtlr r0
/* 8017D75C 0017A83C  38 21 00 30 */	addi r1, r1, 0x30
/* 8017D760 0017A840  4E 80 00 20 */	blr
.endfn reset__17xLaserBoltEmitterFv

# xLaserBoltEmitter::refresh_config()
.fn refresh_config__17xLaserBoltEmitterFv, global
/* 8017D764 0017A844  C0 23 00 10 */	lfs f1, 0x10(r3)
/* 8017D768 0017A848  C0 03 00 0C */	lfs f0, 0xc(r3)
/* 8017D76C 0017A84C  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8017D770 0017A850  4C 40 13 82 */	cror eq, lt, eq
/* 8017D774 0017A854  40 82 00 0C */	bne .L_8017D780
/* 8017D778 0017A858  C0 02 AE 24 */	lfs f0, "@930"@sda21(r2)
/* 8017D77C 0017A85C  48 00 00 10 */	b .L_8017D78C
.L_8017D780:
/* 8017D780 0017A860  EC 01 00 28 */	fsubs f0, f1, f0
/* 8017D784 0017A864  C0 22 AE 28 */	lfs f1, "@931"@sda21(r2)
/* 8017D788 0017A868  EC 01 00 24 */	fdivs f0, f1, f0
.L_8017D78C:
/* 8017D78C 0017A86C  D0 03 00 50 */	stfs f0, 0x50(r3)
/* 8017D790 0017A870  4E 80 00 20 */	blr
.endfn refresh_config__17xLaserBoltEmitterFv

# xLaserBoltEmitter::emit(const xVec3&, const xVec3&)
.fn emit__17xLaserBoltEmitterFRC5xVec3RC5xVec3, global
/* 8017D794 0017A874  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 8017D798 0017A878  7C 08 02 A6 */	mflr r0
/* 8017D79C 0017A87C  90 01 00 24 */	stw r0, 0x24(r1)
/* 8017D7A0 0017A880  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 8017D7A4 0017A884  93 C1 00 18 */	stw r30, 0x18(r1)
/* 8017D7A8 0017A888  7C 9E 23 78 */	mr r30, r4
/* 8017D7AC 0017A88C  93 A1 00 14 */	stw r29, 0x14(r1)
/* 8017D7B0 0017A890  7C BD 2B 78 */	mr r29, r5
/* 8017D7B4 0017A894  93 81 00 10 */	stw r28, 0x10(r1)
/* 8017D7B8 0017A898  7C 7C 1B 78 */	mr r28, r3
/* 8017D7BC 0017A89C  38 7C 00 3C */	addi r3, r28, 0x3c
/* 8017D7C0 0017A8A0  48 00 15 F5 */	bl "full__40static_queue<Q217xLaserBoltEmitter4bolt>CFv"
/* 8017D7C4 0017A8A4  54 60 06 3F */	clrlwi. r0, r3, 24
/* 8017D7C8 0017A8A8  41 82 00 0C */	beq .L_8017D7D4
/* 8017D7CC 0017A8AC  38 7C 00 3C */	addi r3, r28, 0x3c
/* 8017D7D0 0017A8B0  48 00 15 D5 */	bl "pop_back__40static_queue<Q217xLaserBoltEmitter4bolt>Fv"
.L_8017D7D4:
/* 8017D7D4 0017A8B4  38 7C 00 3C */	addi r3, r28, 0x3c
/* 8017D7D8 0017A8B8  48 00 15 51 */	bl "push_front__40static_queue<Q217xLaserBoltEmitter4bolt>Fv"
/* 8017D7DC 0017A8BC  7C 7F 1B 78 */	mr r31, r3
/* 8017D7E0 0017A8C0  7F C4 F3 78 */	mr r4, r30
/* 8017D7E4 0017A8C4  38 7F 00 18 */	addi r3, r31, 0x18
/* 8017D7E8 0017A8C8  4B E8 DA 7D */	bl __as__5xVec3FRC5xVec3
/* 8017D7EC 0017A8CC  7C 64 1B 78 */	mr r4, r3
/* 8017D7F0 0017A8D0  7F E3 FB 78 */	mr r3, r31
/* 8017D7F4 0017A8D4  4B E8 DA 71 */	bl __as__5xVec3FRC5xVec3
/* 8017D7F8 0017A8D8  7F A4 EB 78 */	mr r4, r29
/* 8017D7FC 0017A8DC  38 7F 00 0C */	addi r3, r31, 0xc
/* 8017D800 0017A8E0  4B E8 DA 65 */	bl __as__5xVec3FRC5xVec3
/* 8017D804 0017A8E4  C0 02 AE 24 */	lfs f0, "@930"@sda21(r2)
/* 8017D808 0017A8E8  38 00 00 00 */	li r0, 0x0
/* 8017D80C 0017A8EC  D0 1F 00 3C */	stfs f0, 0x3c(r31)
/* 8017D810 0017A8F0  D0 1F 00 38 */	stfs f0, 0x38(r31)
/* 8017D814 0017A8F4  D0 1F 00 30 */	stfs f0, 0x30(r31)
/* 8017D818 0017A8F8  C0 1C 00 10 */	lfs f0, 0x10(r28)
/* 8017D81C 0017A8FC  D0 1F 00 34 */	stfs f0, 0x34(r31)
/* 8017D820 0017A900  90 1F 00 40 */	stw r0, 0x40(r31)
/* 8017D824 0017A904  C0 02 AE 24 */	lfs f0, "@930"@sda21(r2)
/* 8017D828 0017A908  D0 1F 00 44 */	stfs f0, 0x44(r31)
/* 8017D82C 0017A90C  90 1F 00 48 */	stw r0, 0x48(r31)
/* 8017D830 0017A910  C0 3C 00 1C */	lfs f1, 0x1c(r28)
/* 8017D834 0017A914  C0 02 AE 24 */	lfs f0, "@930"@sda21(r2)
/* 8017D838 0017A918  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8017D83C 0017A91C  40 81 00 10 */	ble .L_8017D84C
/* 8017D840 0017A920  7F 83 E3 78 */	mr r3, r28
/* 8017D844 0017A924  38 9F 00 0C */	addi r4, r31, 0xc
/* 8017D848 0017A928  48 00 10 69 */	bl perturb_dir__17xLaserBoltEmitterFR5xVec3f
.L_8017D84C:
/* 8017D84C 0017A92C  80 1C 00 34 */	lwz r0, 0x34(r28)
/* 8017D850 0017A930  2C 00 00 00 */	cmpwi r0, 0x0
/* 8017D854 0017A934  40 81 00 10 */	ble .L_8017D864
/* 8017D858 0017A938  7F 83 E3 78 */	mr r3, r28
/* 8017D85C 0017A93C  7F E4 FB 78 */	mr r4, r31
/* 8017D860 0017A940  48 00 04 89 */	bl pre_collide__17xLaserBoltEmitterFRQ217xLaserBoltEmitter4bolt
.L_8017D864:
/* 8017D864 0017A944  80 7C 00 58 */	lwz r3, 0x58(r28)
/* 8017D868 0017A948  38 03 00 01 */	addi r0, r3, 0x1
/* 8017D86C 0017A94C  90 1C 00 58 */	stw r0, 0x58(r28)
/* 8017D870 0017A950  80 1C 00 78 */	lwz r0, 0x78(r28)
/* 8017D874 0017A954  83 DC 00 5C */	lwz r30, 0x5c(r28)
/* 8017D878 0017A958  1C 00 00 18 */	mulli r0, r0, 0x18
/* 8017D87C 0017A95C  7F BE 02 14 */	add r29, r30, r0
/* 8017D880 0017A960  48 00 00 24 */	b .L_8017D8A4
.L_8017D884:
/* 8017D884 0017A964  C0 22 AE 24 */	lfs f1, "@930"@sda21(r2)
/* 8017D888 0017A968  7F 83 E3 78 */	mr r3, r28
/* 8017D88C 0017A96C  C0 62 AE 20 */	lfs f3, "@899"@sda21(r2)
/* 8017D890 0017A970  7F C4 F3 78 */	mr r4, r30
/* 8017D894 0017A974  FC 40 08 90 */	fmr f2, f1
/* 8017D898 0017A978  7F E5 FB 78 */	mr r5, r31
/* 8017D89C 0017A97C  48 00 0F A1 */	bl emit_fx__17xLaserBoltEmitterFRQ217xLaserBoltEmitter11effect_dataRQ217xLaserBoltEmitter4boltfff
/* 8017D8A0 0017A980  3B DE 00 18 */	addi r30, r30, 0x18
.L_8017D8A4:
/* 8017D8A4 0017A984  7C 1E E8 40 */	cmplw r30, r29
/* 8017D8A8 0017A988  40 82 FF DC */	bne .L_8017D884
/* 8017D8AC 0017A98C  80 01 00 24 */	lwz r0, 0x24(r1)
/* 8017D8B0 0017A990  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 8017D8B4 0017A994  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 8017D8B8 0017A998  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 8017D8BC 0017A99C  83 81 00 10 */	lwz r28, 0x10(r1)
/* 8017D8C0 0017A9A0  7C 08 03 A6 */	mtlr r0
/* 8017D8C4 0017A9A4  38 21 00 20 */	addi r1, r1, 0x20
/* 8017D8C8 0017A9A8  4E 80 00 20 */	blr
.endfn emit__17xLaserBoltEmitterFRC5xVec3RC5xVec3

# xLaserBoltEmitter::update(float)
.fn update__17xLaserBoltEmitterFf, global
/* 8017D8CC 0017A9AC  94 21 FF 90 */	stwu r1, -0x70(r1)
/* 8017D8D0 0017A9B0  7C 08 02 A6 */	mflr r0
/* 8017D8D4 0017A9B4  90 01 00 74 */	stw r0, 0x74(r1)
/* 8017D8D8 0017A9B8  DB E1 00 60 */	stfd f31, 0x60(r1)
/* 8017D8DC 0017A9BC  F3 E1 00 68 */	psq_st f31, 0x68(r1), 0, qr0
/* 8017D8E0 0017A9C0  DB C1 00 50 */	stfd f30, 0x50(r1)
/* 8017D8E4 0017A9C4  F3 C1 00 58 */	psq_st f30, 0x58(r1), 0, qr0
/* 8017D8E8 0017A9C8  BF 61 00 3C */	stmw r27, 0x3c(r1)
/* 8017D8EC 0017A9CC  7C 7F 1B 78 */	mr r31, r3
/* 8017D8F0 0017A9D0  FF C0 08 90 */	fmr f30, f1
/* 8017D8F4 0017A9D4  48 00 10 8D */	bl debug_update__17xLaserBoltEmitterFf
/* 8017D8F8 0017A9D8  80 9F 00 34 */	lwz r4, 0x34(r31)
/* 8017D8FC 0017A9DC  2C 04 00 00 */	cmpwi r4, 0x0
/* 8017D900 0017A9E0  40 81 00 18 */	ble .L_8017D918
/* 8017D904 0017A9E4  80 7F 00 58 */	lwz r3, 0x58(r31)
/* 8017D908 0017A9E8  7C 03 23 D6 */	divw r0, r3, r4
/* 8017D90C 0017A9EC  7C 00 21 D6 */	mullw r0, r0, r4
/* 8017D910 0017A9F0  7C 00 18 50 */	subf r0, r0, r3
/* 8017D914 0017A9F4  48 00 00 0C */	b .L_8017D920
.L_8017D918:
/* 8017D918 0017A9F8  3C 60 C4 65 */	lis r3, 0xc465
/* 8017D91C 0017A9FC  38 03 36 00 */	addi r0, r3, 0x3600
.L_8017D920:
/* 8017D920 0017AA00  7C 1E 03 78 */	mr r30, r0
/* 8017D924 0017AA04  38 7F 00 3C */	addi r3, r31, 0x3c
/* 8017D928 0017AA08  48 00 13 DD */	bl "begin__40static_queue<Q217xLaserBoltEmitter4bolt>CFv"
/* 8017D92C 0017AA0C  90 81 00 1C */	stw r4, 0x1c(r1)
/* 8017D930 0017AA10  90 61 00 18 */	stw r3, 0x18(r1)
/* 8017D934 0017AA14  48 00 01 DC */	b .L_8017DB10
.L_8017D938:
/* 8017D938 0017AA18  38 61 00 18 */	addi r3, r1, 0x18
/* 8017D93C 0017AA1C  48 00 13 B1 */	bl "__ml__Q240static_queue<Q217xLaserBoltEmitter4bolt>8iteratorCFv"
/* 8017D940 0017AA20  C0 23 00 30 */	lfs f1, 0x30(r3)
/* 8017D944 0017AA24  7C 7D 1B 78 */	mr r29, r3
/* 8017D948 0017AA28  C0 03 00 34 */	lfs f0, 0x34(r3)
/* 8017D94C 0017AA2C  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8017D950 0017AA30  4C 41 13 82 */	cror eq, gt, eq
/* 8017D954 0017AA34  7C 00 00 26 */	mfcr r0
/* 8017D958 0017AA38  FF E0 08 90 */	fmr f31, f1
/* 8017D95C 0017AA3C  FC 20 F0 90 */	fmr f1, f30
/* 8017D960 0017AA40  7F E3 FB 78 */	mr r3, r31
/* 8017D964 0017AA44  7F A4 EB 78 */	mr r4, r29
/* 8017D968 0017AA48  54 1C 1F FE */	extrwi r28, r0, 1, 2
/* 8017D96C 0017AA4C  48 00 0F F9 */	bl update__17xLaserBoltEmitterFRQ217xLaserBoltEmitter4boltf
/* 8017D970 0017AA50  C0 1D 00 30 */	lfs f0, 0x30(r29)
/* 8017D974 0017AA54  C0 3D 00 34 */	lfs f1, 0x34(r29)
/* 8017D978 0017AA58  FC 00 08 40 */	fcmpo cr0, f0, f1
/* 8017D97C 0017AA5C  4C 41 13 82 */	cror eq, gt, eq
/* 8017D980 0017AA60  40 82 00 08 */	bne .L_8017D988
/* 8017D984 0017AA64  48 00 00 08 */	b .L_8017D98C
.L_8017D988:
/* 8017D988 0017AA68  FC 20 00 90 */	fmr f1, f0
.L_8017D98C:
/* 8017D98C 0017AA6C  38 61 00 20 */	addi r3, r1, 0x20
/* 8017D990 0017AA70  38 9D 00 0C */	addi r4, r29, 0xc
/* 8017D994 0017AA74  4B E8 D7 8D */	bl __ml__5xVec3CFf
/* 8017D998 0017AA78  7F A4 EB 78 */	mr r4, r29
/* 8017D99C 0017AA7C  38 61 00 2C */	addi r3, r1, 0x2c
/* 8017D9A0 0017AA80  38 A1 00 20 */	addi r5, r1, 0x20
/* 8017D9A4 0017AA84  4B E9 7A 3D */	bl __pl__5xVec3CFRC5xVec3
/* 8017D9A8 0017AA88  38 7D 00 18 */	addi r3, r29, 0x18
/* 8017D9AC 0017AA8C  38 81 00 2C */	addi r4, r1, 0x2c
/* 8017D9B0 0017AA90  4B E8 D8 B5 */	bl __as__5xVec3FRC5xVec3
/* 8017D9B4 0017AA94  C0 3D 00 30 */	lfs f1, 0x30(r29)
/* 8017D9B8 0017AA98  C0 1F 00 10 */	lfs f0, 0x10(r31)
/* 8017D9BC 0017AA9C  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8017D9C0 0017AAA0  4C 41 13 82 */	cror eq, gt, eq
/* 8017D9C4 0017AAA4  40 82 00 64 */	bne .L_8017DA28
/* 8017D9C8 0017AAA8  80 1F 00 90 */	lwz r0, 0x90(r31)
/* 8017D9CC 0017AAAC  83 9F 00 74 */	lwz r28, 0x74(r31)
/* 8017D9D0 0017AAB0  1C 00 00 18 */	mulli r0, r0, 0x18
/* 8017D9D4 0017AAB4  7F DC 02 14 */	add r30, r28, r0
/* 8017D9D8 0017AAB8  48 00 00 24 */	b .L_8017D9FC
.L_8017D9DC:
/* 8017D9DC 0017AABC  C0 3D 00 34 */	lfs f1, 0x34(r29)
/* 8017D9E0 0017AAC0  FC 60 F0 90 */	fmr f3, f30
/* 8017D9E4 0017AAC4  7F E3 FB 78 */	mr r3, r31
/* 8017D9E8 0017AAC8  7F 84 E3 78 */	mr r4, r28
/* 8017D9EC 0017AACC  FC 40 08 90 */	fmr f2, f1
/* 8017D9F0 0017AAD0  7F A5 EB 78 */	mr r5, r29
/* 8017D9F4 0017AAD4  48 00 0E 49 */	bl emit_fx__17xLaserBoltEmitterFRQ217xLaserBoltEmitter11effect_dataRQ217xLaserBoltEmitter4boltfff
/* 8017D9F8 0017AAD8  3B 9C 00 18 */	addi r28, r28, 0x18
.L_8017D9FC:
/* 8017D9FC 0017AADC  7C 1C F0 40 */	cmplw r28, r30
/* 8017DA00 0017AAE0  40 82 FF DC */	bne .L_8017D9DC
/* 8017DA04 0017AAE4  38 7F 00 3C */	addi r3, r31, 0x3c
/* 8017DA08 0017AAE8  48 00 12 01 */	bl "end__40static_queue<Q217xLaserBoltEmitter4bolt>CFv"
/* 8017DA0C 0017AAEC  90 81 00 14 */	stw r4, 0x14(r1)
/* 8017DA10 0017AAF0  38 81 00 18 */	addi r4, r1, 0x18
/* 8017DA14 0017AAF4  38 A1 00 10 */	addi r5, r1, 0x10
/* 8017DA18 0017AAF8  90 61 00 10 */	stw r3, 0x10(r1)
/* 8017DA1C 0017AAFC  38 7F 00 3C */	addi r3, r31, 0x3c
/* 8017DA20 0017AB00  48 00 13 ED */	bl "erase__40static_queue<Q217xLaserBoltEmitter4bolt>FRCQ240static_queue<Q217xLaserBoltEmitter4bolt>8iteratorRCQ240static_queue<Q217xLaserBoltEmitter4bolt>8iterator"
/* 8017DA24 0017AB04  48 00 01 10 */	b .L_8017DB34
.L_8017DA28:
/* 8017DA28 0017AB08  FC 20 F8 90 */	fmr f1, f31
/* 8017DA2C 0017AB0C  7F E3 FB 78 */	mr r3, r31
/* 8017DA30 0017AB10  FC 40 F0 90 */	fmr f2, f30
/* 8017DA34 0017AB14  7F A4 EB 78 */	mr r4, r29
/* 8017DA38 0017AB18  48 00 08 09 */	bl update_fx__17xLaserBoltEmitterFRQ217xLaserBoltEmitter4boltff
/* 8017DA3C 0017AB1C  C0 3D 00 30 */	lfs f1, 0x30(r29)
/* 8017DA40 0017AB20  C0 1D 00 34 */	lfs f0, 0x34(r29)
/* 8017DA44 0017AB24  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8017DA48 0017AB28  4C 41 13 82 */	cror eq, gt, eq
/* 8017DA4C 0017AB2C  40 82 00 24 */	bne .L_8017DA70
/* 8017DA50 0017AB30  80 1D 00 40 */	lwz r0, 0x40(r29)
/* 8017DA54 0017AB34  28 00 00 00 */	cmplwi r0, 0x0
/* 8017DA58 0017AB38  41 82 00 18 */	beq .L_8017DA70
/* 8017DA5C 0017AB3C  7F E3 FB 78 */	mr r3, r31
/* 8017DA60 0017AB40  7F A4 EB 78 */	mr r4, r29
/* 8017DA64 0017AB44  48 00 07 19 */	bl apply_damage__17xLaserBoltEmitterFRQ217xLaserBoltEmitter4bolt
/* 8017DA68 0017AB48  38 00 00 00 */	li r0, 0x0
/* 8017DA6C 0017AB4C  90 1D 00 40 */	stw r0, 0x40(r29)
.L_8017DA70:
/* 8017DA70 0017AB50  80 1F 00 34 */	lwz r0, 0x34(r31)
/* 8017DA74 0017AB54  3B DE 00 01 */	addi r30, r30, 0x1
/* 8017DA78 0017AB58  7C 1E 00 00 */	cmpw r30, r0
/* 8017DA7C 0017AB5C  41 80 00 34 */	blt .L_8017DAB0
/* 8017DA80 0017AB60  C0 3D 00 30 */	lfs f1, 0x30(r29)
/* 8017DA84 0017AB64  7F C0 F0 50 */	subf r30, r0, r30
/* 8017DA88 0017AB68  C0 1D 00 34 */	lfs f0, 0x34(r29)
/* 8017DA8C 0017AB6C  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8017DA90 0017AB70  40 80 00 20 */	bge .L_8017DAB0
/* 8017DA94 0017AB74  C0 1F 00 14 */	lfs f0, 0x14(r31)
/* 8017DA98 0017AB78  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8017DA9C 0017AB7C  4C 41 13 82 */	cror eq, gt, eq
/* 8017DAA0 0017AB80  40 82 00 10 */	bne .L_8017DAB0
/* 8017DAA4 0017AB84  7F E3 FB 78 */	mr r3, r31
/* 8017DAA8 0017AB88  7F A4 EB 78 */	mr r4, r29
/* 8017DAAC 0017AB8C  48 00 03 09 */	bl collide_update__17xLaserBoltEmitterFRQ217xLaserBoltEmitter4bolt
.L_8017DAB0:
/* 8017DAB0 0017AB90  28 1C 00 00 */	cmplwi r28, 0x0
/* 8017DAB4 0017AB94  40 82 00 54 */	bne .L_8017DB08
/* 8017DAB8 0017AB98  C0 3D 00 30 */	lfs f1, 0x30(r29)
/* 8017DABC 0017AB9C  C0 1D 00 34 */	lfs f0, 0x34(r29)
/* 8017DAC0 0017ABA0  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8017DAC4 0017ABA4  4C 41 13 82 */	cror eq, gt, eq
/* 8017DAC8 0017ABA8  40 82 00 40 */	bne .L_8017DB08
/* 8017DACC 0017ABAC  80 1F 00 7C */	lwz r0, 0x7c(r31)
/* 8017DAD0 0017ABB0  83 9F 00 60 */	lwz r28, 0x60(r31)
/* 8017DAD4 0017ABB4  1C 00 00 18 */	mulli r0, r0, 0x18
/* 8017DAD8 0017ABB8  7F 7C 02 14 */	add r27, r28, r0
/* 8017DADC 0017ABBC  48 00 00 24 */	b .L_8017DB00
.L_8017DAE0:
/* 8017DAE0 0017ABC0  C0 3D 00 34 */	lfs f1, 0x34(r29)
/* 8017DAE4 0017ABC4  FC 60 F0 90 */	fmr f3, f30
/* 8017DAE8 0017ABC8  7F E3 FB 78 */	mr r3, r31
/* 8017DAEC 0017ABCC  7F 84 E3 78 */	mr r4, r28
/* 8017DAF0 0017ABD0  FC 40 08 90 */	fmr f2, f1
/* 8017DAF4 0017ABD4  7F A5 EB 78 */	mr r5, r29
/* 8017DAF8 0017ABD8  48 00 0D 45 */	bl emit_fx__17xLaserBoltEmitterFRQ217xLaserBoltEmitter11effect_dataRQ217xLaserBoltEmitter4boltfff
/* 8017DAFC 0017ABDC  3B 9C 00 18 */	addi r28, r28, 0x18
.L_8017DB00:
/* 8017DB00 0017ABE0  7C 1C D8 40 */	cmplw r28, r27
/* 8017DB04 0017ABE4  40 82 FF DC */	bne .L_8017DAE0
.L_8017DB08:
/* 8017DB08 0017ABE8  38 61 00 18 */	addi r3, r1, 0x18
/* 8017DB0C 0017ABEC  48 00 11 6D */	bl "__pp__Q240static_queue<Q217xLaserBoltEmitter4bolt>8iteratorFv"
.L_8017DB10:
/* 8017DB10 0017ABF0  38 7F 00 3C */	addi r3, r31, 0x3c
/* 8017DB14 0017ABF4  48 00 10 F5 */	bl "end__40static_queue<Q217xLaserBoltEmitter4bolt>CFv"
/* 8017DB18 0017ABF8  90 81 00 0C */	stw r4, 0xc(r1)
/* 8017DB1C 0017ABFC  38 81 00 08 */	addi r4, r1, 0x8
/* 8017DB20 0017AC00  90 61 00 08 */	stw r3, 0x8(r1)
/* 8017DB24 0017AC04  38 61 00 18 */	addi r3, r1, 0x18
/* 8017DB28 0017AC08  48 00 10 C5 */	bl "__ne__Q240static_queue<Q217xLaserBoltEmitter4bolt>8iteratorCFRCQ240static_queue<Q217xLaserBoltEmitter4bolt>8iterator"
/* 8017DB2C 0017AC0C  54 60 06 3F */	clrlwi. r0, r3, 24
/* 8017DB30 0017AC10  40 82 FE 08 */	bne .L_8017D938
.L_8017DB34:
/* 8017DB34 0017AC14  80 7F 00 58 */	lwz r3, 0x58(r31)
/* 8017DB38 0017AC18  38 03 00 01 */	addi r0, r3, 0x1
/* 8017DB3C 0017AC1C  90 1F 00 58 */	stw r0, 0x58(r31)
/* 8017DB40 0017AC20  E3 E1 00 68 */	psq_l f31, 0x68(r1), 0, qr0
/* 8017DB44 0017AC24  CB E1 00 60 */	lfd f31, 0x60(r1)
/* 8017DB48 0017AC28  E3 C1 00 58 */	psq_l f30, 0x58(r1), 0, qr0
/* 8017DB4C 0017AC2C  CB C1 00 50 */	lfd f30, 0x50(r1)
/* 8017DB50 0017AC30  BB 61 00 3C */	lmw r27, 0x3c(r1)
/* 8017DB54 0017AC34  80 01 00 74 */	lwz r0, 0x74(r1)
/* 8017DB58 0017AC38  7C 08 03 A6 */	mtlr r0
/* 8017DB5C 0017AC3C  38 21 00 70 */	addi r1, r1, 0x70
/* 8017DB60 0017AC40  4E 80 00 20 */	blr
.endfn update__17xLaserBoltEmitterFf

# xLaserBoltEmitter::render()
.fn render__17xLaserBoltEmitterFv, global
/* 8017DB64 0017AC44  94 21 FF D0 */	stwu r1, -0x30(r1)
/* 8017DB68 0017AC48  7C 08 02 A6 */	mflr r0
/* 8017DB6C 0017AC4C  90 01 00 34 */	stw r0, 0x34(r1)
/* 8017DB70 0017AC50  93 E1 00 2C */	stw r31, 0x2c(r1)
/* 8017DB74 0017AC54  93 C1 00 28 */	stw r30, 0x28(r1)
/* 8017DB78 0017AC58  7C 7E 1B 78 */	mr r30, r3
/* 8017DB7C 0017AC5C  93 A1 00 24 */	stw r29, 0x24(r1)
/* 8017DB80 0017AC60  93 81 00 20 */	stw r28, 0x20(r1)
/* 8017DB84 0017AC64  48 00 0E 41 */	bl debug_render__17xLaserBoltEmitterFv
/* 8017DB88 0017AC68  7F C3 F3 78 */	mr r3, r30
/* 8017DB8C 0017AC6C  38 81 00 08 */	addi r4, r1, 0x8
/* 8017DB90 0017AC70  48 00 05 D5 */	bl get_vert_buffer__17xLaserBoltEmitterFRi
/* 8017DB94 0017AC74  7C 7F 1B 78 */	mr r31, r3
/* 8017DB98 0017AC78  80 9E 00 54 */	lwz r4, 0x54(r30)
/* 8017DB9C 0017AC7C  38 60 00 01 */	li r3, 0x1
/* 8017DBA0 0017AC80  7F FC FB 78 */	mr r28, r31
/* 8017DBA4 0017AC84  48 0B 1C 39 */	bl RwRenderStateSet
/* 8017DBA8 0017AC88  38 7E 00 3C */	addi r3, r30, 0x3c
/* 8017DBAC 0017AC8C  48 00 11 59 */	bl "begin__40static_queue<Q217xLaserBoltEmitter4bolt>CFv"
/* 8017DBB0 0017AC90  3C A0 38 E4 */	lis r5, 0x38e4
/* 8017DBB4 0017AC94  90 81 00 18 */	stw r4, 0x18(r1)
/* 8017DBB8 0017AC98  3B A5 8E 39 */	addi r29, r5, -0x71c7
/* 8017DBBC 0017AC9C  90 61 00 14 */	stw r3, 0x14(r1)
/* 8017DBC0 0017ACA0  48 00 00 60 */	b .L_8017DC20
.L_8017DBC4:
/* 8017DBC4 0017ACA4  7C 7F E0 50 */	subf r3, r31, r28
/* 8017DBC8 0017ACA8  80 01 00 08 */	lwz r0, 0x8(r1)
/* 8017DBCC 0017ACAC  7C 7D 18 96 */	mulhw r3, r29, r3
/* 8017DBD0 0017ACB0  7C 63 1E 70 */	srawi r3, r3, 3
/* 8017DBD4 0017ACB4  54 64 0F FE */	srwi r4, r3, 31
/* 8017DBD8 0017ACB8  7C A3 22 14 */	add r5, r3, r4
/* 8017DBDC 0017ACBC  7C 05 00 50 */	subf r0, r5, r0
/* 8017DBE0 0017ACC0  2C 00 00 06 */	cmpwi r0, 0x6
/* 8017DBE4 0017ACC4  40 80 00 14 */	bge .L_8017DBF8
/* 8017DBE8 0017ACC8  7F C3 F3 78 */	mr r3, r30
/* 8017DBEC 0017ACCC  7F E4 FB 78 */	mr r4, r31
/* 8017DBF0 0017ACD0  48 00 0D 95 */	bl flush_verts__17xLaserBoltEmitterFP18RxObjSpace3DVertexi
/* 8017DBF4 0017ACD4  7F FC FB 78 */	mr r28, r31
.L_8017DBF8:
/* 8017DBF8 0017ACD8  38 61 00 14 */	addi r3, r1, 0x14
/* 8017DBFC 0017ACDC  48 00 10 F1 */	bl "__ml__Q240static_queue<Q217xLaserBoltEmitter4bolt>8iteratorCFv"
/* 8017DC00 0017ACE0  7C 64 1B 78 */	mr r4, r3
/* 8017DC04 0017ACE4  7F C3 F3 78 */	mr r3, r30
/* 8017DC08 0017ACE8  7F 85 E3 78 */	mr r5, r28
/* 8017DC0C 0017ACEC  48 00 03 15 */	bl render__17xLaserBoltEmitterFRQ217xLaserBoltEmitter4boltP18RxObjSpace3DVertex
/* 8017DC10 0017ACF0  7C 60 1B 78 */	mr r0, r3
/* 8017DC14 0017ACF4  38 61 00 14 */	addi r3, r1, 0x14
/* 8017DC18 0017ACF8  7C 1C 03 78 */	mr r28, r0
/* 8017DC1C 0017ACFC  48 00 10 5D */	bl "__pp__Q240static_queue<Q217xLaserBoltEmitter4bolt>8iteratorFv"
.L_8017DC20:
/* 8017DC20 0017AD00  38 7E 00 3C */	addi r3, r30, 0x3c
/* 8017DC24 0017AD04  48 00 0F E5 */	bl "end__40static_queue<Q217xLaserBoltEmitter4bolt>CFv"
/* 8017DC28 0017AD08  90 81 00 10 */	stw r4, 0x10(r1)
/* 8017DC2C 0017AD0C  38 81 00 0C */	addi r4, r1, 0xc
/* 8017DC30 0017AD10  90 61 00 0C */	stw r3, 0xc(r1)
/* 8017DC34 0017AD14  38 61 00 14 */	addi r3, r1, 0x14
/* 8017DC38 0017AD18  48 00 0F B5 */	bl "__ne__Q240static_queue<Q217xLaserBoltEmitter4bolt>8iteratorCFRCQ240static_queue<Q217xLaserBoltEmitter4bolt>8iterator"
/* 8017DC3C 0017AD1C  54 60 06 3F */	clrlwi. r0, r3, 24
/* 8017DC40 0017AD20  40 82 FF 84 */	bne .L_8017DBC4
/* 8017DC44 0017AD24  7C 1C F8 40 */	cmplw r28, r31
/* 8017DC48 0017AD28  41 82 00 2C */	beq .L_8017DC74
/* 8017DC4C 0017AD2C  3C 60 38 E4 */	lis r3, 0x38e4
/* 8017DC50 0017AD30  7C 1F E0 50 */	subf r0, r31, r28
/* 8017DC54 0017AD34  38 83 8E 39 */	addi r4, r3, -0x71c7
/* 8017DC58 0017AD38  7F C3 F3 78 */	mr r3, r30
/* 8017DC5C 0017AD3C  7C 04 00 96 */	mulhw r0, r4, r0
/* 8017DC60 0017AD40  7F E4 FB 78 */	mr r4, r31
/* 8017DC64 0017AD44  7C 00 1E 70 */	srawi r0, r0, 3
/* 8017DC68 0017AD48  54 05 0F FE */	srwi r5, r0, 31
/* 8017DC6C 0017AD4C  7C A0 2A 14 */	add r5, r0, r5
/* 8017DC70 0017AD50  48 00 0D 15 */	bl flush_verts__17xLaserBoltEmitterFP18RxObjSpace3DVertexi
.L_8017DC74:
/* 8017DC74 0017AD54  80 01 00 34 */	lwz r0, 0x34(r1)
/* 8017DC78 0017AD58  83 E1 00 2C */	lwz r31, 0x2c(r1)
/* 8017DC7C 0017AD5C  83 C1 00 28 */	lwz r30, 0x28(r1)
/* 8017DC80 0017AD60  83 A1 00 24 */	lwz r29, 0x24(r1)
/* 8017DC84 0017AD64  83 81 00 20 */	lwz r28, 0x20(r1)
/* 8017DC88 0017AD68  7C 08 03 A6 */	mtlr r0
/* 8017DC8C 0017AD6C  38 21 00 30 */	addi r1, r1, 0x30
/* 8017DC90 0017AD70  4E 80 00 20 */	blr
.endfn render__17xLaserBoltEmitterFv

# xLaserBoltEmitter::attach_effects(xLaserBoltEmitter::fx_when_enum, xLaserBoltEmitter::effect_data*, unsigned long)
.fn attach_effects__17xLaserBoltEmitterFQ217xLaserBoltEmitter12fx_when_enumPQ217xLaserBoltEmitter11effect_dataUl, global
/* 8017DC94 0017AD74  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8017DC98 0017AD78  7C 08 02 A6 */	mflr r0
/* 8017DC9C 0017AD7C  90 01 00 14 */	stw r0, 0x14(r1)
/* 8017DCA0 0017AD80  54 80 10 3A */	slwi r0, r4, 2
/* 8017DCA4 0017AD84  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8017DCA8 0017AD88  7C 9F 23 78 */	mr r31, r4
/* 8017DCAC 0017AD8C  93 C1 00 08 */	stw r30, 0x8(r1)
/* 8017DCB0 0017AD90  7C 7E 1B 78 */	mr r30, r3
/* 8017DCB4 0017AD94  7C FE 02 14 */	add r7, r30, r0
/* 8017DCB8 0017AD98  90 A7 00 5C */	stw r5, 0x5c(r7)
/* 8017DCBC 0017AD9C  90 C7 00 78 */	stw r6, 0x78(r7)
/* 8017DCC0 0017ADA0  48 00 05 39 */	bl reset_fx__17xLaserBoltEmitterFQ217xLaserBoltEmitter12fx_when_enum
/* 8017DCC4 0017ADA4  7F C3 F3 78 */	mr r3, r30
/* 8017DCC8 0017ADA8  7F E4 FB 78 */	mr r4, r31
/* 8017DCCC 0017ADAC  48 00 0C FD */	bl debug_refresh_effects__17xLaserBoltEmitterFQ217xLaserBoltEmitter12fx_when_enum
/* 8017DCD0 0017ADB0  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8017DCD4 0017ADB4  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8017DCD8 0017ADB8  83 C1 00 08 */	lwz r30, 0x8(r1)
/* 8017DCDC 0017ADBC  7C 08 03 A6 */	mtlr r0
/* 8017DCE0 0017ADC0  38 21 00 10 */	addi r1, r1, 0x10
/* 8017DCE4 0017ADC4  4E 80 00 20 */	blr
.endfn attach_effects__17xLaserBoltEmitterFQ217xLaserBoltEmitter12fx_when_enumPQ217xLaserBoltEmitter11effect_dataUl

# xLaserBoltEmitter::pre_collide(xLaserBoltEmitter::bolt&)
.fn pre_collide__17xLaserBoltEmitterFRQ217xLaserBoltEmitter4bolt, global
/* 8017DCE8 0017ADC8  94 21 FF 70 */	stwu r1, -0x90(r1)
/* 8017DCEC 0017ADCC  7C 08 02 A6 */	mflr r0
/* 8017DCF0 0017ADD0  3C A0 80 3C */	lis r5, globals@ha
/* 8017DCF4 0017ADD4  90 01 00 94 */	stw r0, 0x94(r1)
/* 8017DCF8 0017ADD8  93 E1 00 8C */	stw r31, 0x8c(r1)
/* 8017DCFC 0017ADDC  93 C1 00 88 */	stw r30, 0x88(r1)
/* 8017DD00 0017ADE0  7C 9E 23 78 */	mr r30, r4
/* 8017DD04 0017ADE4  93 A1 00 84 */	stw r29, 0x84(r1)
/* 8017DD08 0017ADE8  7C 7D 1B 78 */	mr r29, r3
/* 8017DD0C 0017ADEC  38 65 05 58 */	addi r3, r5, globals@l
/* 8017DD10 0017ADF0  83 E3 1F C0 */	lwz r31, 0x1fc0(r3)
/* 8017DD14 0017ADF4  38 61 00 08 */	addi r3, r1, 0x8
/* 8017DD18 0017ADF8  4B E8 D5 4D */	bl __as__5xVec3FRC5xVec3
/* 8017DD1C 0017ADFC  38 61 00 14 */	addi r3, r1, 0x14
/* 8017DD20 0017AE00  38 9E 00 0C */	addi r4, r30, 0xc
/* 8017DD24 0017AE04  4B E8 D5 41 */	bl __as__5xVec3FRC5xVec3
/* 8017DD28 0017AE08  C0 1D 00 14 */	lfs f0, 0x14(r29)
/* 8017DD2C 0017AE0C  39 00 08 00 */	li r8, 0x800
/* 8017DD30 0017AE10  38 00 03 00 */	li r0, 0x300
/* 8017DD34 0017AE14  7F E3 FB 78 */	mr r3, r31
/* 8017DD38 0017AE18  D0 01 00 20 */	stfs f0, 0x20(r1)
/* 8017DD3C 0017AE1C  38 81 00 08 */	addi r4, r1, 0x8
/* 8017DD40 0017AE20  38 A1 00 2C */	addi r5, r1, 0x2c
/* 8017DD44 0017AE24  38 C0 00 10 */	li r6, 0x10
/* 8017DD48 0017AE28  C0 1E 00 34 */	lfs f0, 0x34(r30)
/* 8017DD4C 0017AE2C  38 E0 00 22 */	li r7, 0x22
/* 8017DD50 0017AE30  D0 01 00 24 */	stfs f0, 0x24(r1)
/* 8017DD54 0017AE34  91 01 00 28 */	stw r8, 0x28(r1)
/* 8017DD58 0017AE38  90 01 00 2C */	stw r0, 0x2c(r1)
/* 8017DD5C 0017AE3C  4B EC 27 69 */	bl xRayHitsSceneFlags__FP6xSceneP5xRay3P7xCollisUcUc
/* 8017DD60 0017AE40  80 01 00 2C */	lwz r0, 0x2c(r1)
/* 8017DD64 0017AE44  54 00 07 FF */	clrlwi. r0, r0, 31
/* 8017DD68 0017AE48  41 82 00 20 */	beq .L_8017DD88
/* 8017DD6C 0017AE4C  C0 01 00 3C */	lfs f0, 0x3c(r1)
/* 8017DD70 0017AE50  38 7E 00 24 */	addi r3, r30, 0x24
/* 8017DD74 0017AE54  38 81 00 40 */	addi r4, r1, 0x40
/* 8017DD78 0017AE58  D0 1E 00 34 */	stfs f0, 0x34(r30)
/* 8017DD7C 0017AE5C  4B E8 D4 E9 */	bl __as__5xVec3FRC5xVec3
/* 8017DD80 0017AE60  80 01 00 34 */	lwz r0, 0x34(r1)
/* 8017DD84 0017AE64  90 1E 00 40 */	stw r0, 0x40(r30)
.L_8017DD88:
/* 8017DD88 0017AE68  80 01 00 2C */	lwz r0, 0x2c(r1)
/* 8017DD8C 0017AE6C  7F A3 EB 78 */	mr r3, r29
/* 8017DD90 0017AE70  54 04 07 FE */	clrlwi r4, r0, 31
/* 8017DD94 0017AE74  48 00 0C 39 */	bl log_collide_statics__17xLaserBoltEmitterFb
/* 8017DD98 0017AE78  80 01 00 94 */	lwz r0, 0x94(r1)
/* 8017DD9C 0017AE7C  83 E1 00 8C */	lwz r31, 0x8c(r1)
/* 8017DDA0 0017AE80  83 C1 00 88 */	lwz r30, 0x88(r1)
/* 8017DDA4 0017AE84  83 A1 00 84 */	lwz r29, 0x84(r1)
/* 8017DDA8 0017AE88  7C 08 03 A6 */	mtlr r0
/* 8017DDAC 0017AE8C  38 21 00 90 */	addi r1, r1, 0x90
/* 8017DDB0 0017AE90  4E 80 00 20 */	blr
.endfn pre_collide__17xLaserBoltEmitterFRQ217xLaserBoltEmitter4bolt

# xLaserBoltEmitter::collide_update(xLaserBoltEmitter::bolt&)
.fn collide_update__17xLaserBoltEmitterFRQ217xLaserBoltEmitter4bolt, global
/* 8017DDB4 0017AE94  94 21 FF 20 */	stwu r1, -0xe0(r1)
/* 8017DDB8 0017AE98  7C 08 02 A6 */	mflr r0
/* 8017DDBC 0017AE9C  3C A0 80 3C */	lis r5, globals@ha
/* 8017DDC0 0017AEA0  90 01 00 E4 */	stw r0, 0xe4(r1)
/* 8017DDC4 0017AEA4  93 E1 00 DC */	stw r31, 0xdc(r1)
/* 8017DDC8 0017AEA8  7C 9F 23 78 */	mr r31, r4
/* 8017DDCC 0017AEAC  93 C1 00 D8 */	stw r30, 0xd8(r1)
/* 8017DDD0 0017AEB0  7C 7E 1B 78 */	mr r30, r3
/* 8017DDD4 0017AEB4  38 65 05 58 */	addi r3, r5, globals@l
/* 8017DDD8 0017AEB8  93 A1 00 D4 */	stw r29, 0xd4(r1)
/* 8017DDDC 0017AEBC  83 A3 1F C0 */	lwz r29, 0x1fc0(r3)
/* 8017DDE0 0017AEC0  38 61 00 08 */	addi r3, r1, 0x8
/* 8017DDE4 0017AEC4  4B E8 D4 81 */	bl __as__5xVec3FRC5xVec3
/* 8017DDE8 0017AEC8  38 61 00 14 */	addi r3, r1, 0x14
/* 8017DDEC 0017AECC  38 9F 00 0C */	addi r4, r31, 0xc
/* 8017DDF0 0017AED0  4B E8 D4 75 */	bl __as__5xVec3FRC5xVec3
/* 8017DDF4 0017AED4  C0 3F 00 3C */	lfs f1, 0x3c(r31)
/* 8017DDF8 0017AED8  38 00 0C 00 */	li r0, 0xc00
/* 8017DDFC 0017AEDC  C0 1E 00 04 */	lfs f0, 0x4(r30)
/* 8017DE00 0017AEE0  EC 21 00 28 */	fsubs f1, f1, f0
/* 8017DE04 0017AEE4  D0 21 00 20 */	stfs f1, 0x20(r1)
/* 8017DE08 0017AEE8  C0 1F 00 30 */	lfs f0, 0x30(r31)
/* 8017DE0C 0017AEEC  D0 01 00 24 */	stfs f0, 0x24(r1)
/* 8017DE10 0017AEF0  90 01 00 28 */	stw r0, 0x28(r1)
/* 8017DE14 0017AEF4  C0 1E 00 14 */	lfs f0, 0x14(r30)
/* 8017DE18 0017AEF8  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8017DE1C 0017AEFC  40 80 00 08 */	bge .L_8017DE24
/* 8017DE20 0017AF00  D0 01 00 20 */	stfs f0, 0x20(r1)
.L_8017DE24:
/* 8017DE24 0017AF04  38 00 03 00 */	li r0, 0x300
/* 8017DE28 0017AF08  3C 60 80 3C */	lis r3, globals@ha
/* 8017DE2C 0017AF0C  38 83 05 58 */	addi r4, r3, globals@l
/* 8017DE30 0017AF10  90 01 00 7C */	stw r0, 0x7c(r1)
/* 8017DE34 0017AF14  38 61 00 08 */	addi r3, r1, 0x8
/* 8017DE38 0017AF18  38 A1 00 7C */	addi r5, r1, 0x7c
/* 8017DE3C 0017AF1C  38 84 07 44 */	addi r4, r4, 0x744
/* 8017DE40 0017AF20  4B E8 CE A9 */	bl xRayHitsBound__FPC5xRay3PC6xBoundP7xCollis
/* 8017DE44 0017AF24  80 01 00 7C */	lwz r0, 0x7c(r1)
/* 8017DE48 0017AF28  54 00 07 FF */	clrlwi. r0, r0, 31
/* 8017DE4C 0017AF2C  41 82 00 0C */	beq .L_8017DE58
/* 8017DE50 0017AF30  C0 01 00 8C */	lfs f0, 0x8c(r1)
/* 8017DE54 0017AF34  D0 01 00 24 */	stfs f0, 0x24(r1)
.L_8017DE58:
/* 8017DE58 0017AF38  38 00 03 00 */	li r0, 0x300
/* 8017DE5C 0017AF3C  7F A3 EB 78 */	mr r3, r29
/* 8017DE60 0017AF40  90 01 00 2C */	stw r0, 0x2c(r1)
/* 8017DE64 0017AF44  38 81 00 08 */	addi r4, r1, 0x8
/* 8017DE68 0017AF48  38 A1 00 2C */	addi r5, r1, 0x2c
/* 8017DE6C 0017AF4C  38 C0 00 10 */	li r6, 0x10
/* 8017DE70 0017AF50  38 E0 00 0C */	li r7, 0xc
/* 8017DE74 0017AF54  4B EC 26 51 */	bl xRayHitsSceneFlags__FP6xSceneP5xRay3P7xCollisUcUc
/* 8017DE78 0017AF58  80 01 00 2C */	lwz r0, 0x2c(r1)
/* 8017DE7C 0017AF5C  54 00 07 FF */	clrlwi. r0, r0, 31
/* 8017DE80 0017AF60  41 82 00 24 */	beq .L_8017DEA4
/* 8017DE84 0017AF64  C0 01 00 3C */	lfs f0, 0x3c(r1)
/* 8017DE88 0017AF68  38 7F 00 24 */	addi r3, r31, 0x24
/* 8017DE8C 0017AF6C  38 81 00 40 */	addi r4, r1, 0x40
/* 8017DE90 0017AF70  D0 1F 00 34 */	stfs f0, 0x34(r31)
/* 8017DE94 0017AF74  4B E8 D3 D1 */	bl __as__5xVec3FRC5xVec3
/* 8017DE98 0017AF78  80 01 00 34 */	lwz r0, 0x34(r1)
/* 8017DE9C 0017AF7C  90 1F 00 40 */	stw r0, 0x40(r31)
/* 8017DEA0 0017AF80  48 00 00 34 */	b .L_8017DED4
.L_8017DEA4:
/* 8017DEA4 0017AF84  80 01 00 7C */	lwz r0, 0x7c(r1)
/* 8017DEA8 0017AF88  54 00 07 FF */	clrlwi. r0, r0, 31
/* 8017DEAC 0017AF8C  41 82 00 28 */	beq .L_8017DED4
/* 8017DEB0 0017AF90  C0 01 00 8C */	lfs f0, 0x8c(r1)
/* 8017DEB4 0017AF94  38 7F 00 24 */	addi r3, r31, 0x24
/* 8017DEB8 0017AF98  38 81 00 90 */	addi r4, r1, 0x90
/* 8017DEBC 0017AF9C  D0 1F 00 34 */	stfs f0, 0x34(r31)
/* 8017DEC0 0017AFA0  4B E8 D3 A5 */	bl __as__5xVec3FRC5xVec3
/* 8017DEC4 0017AFA4  3C 60 80 3C */	lis r3, globals@ha
/* 8017DEC8 0017AFA8  38 63 05 58 */	addi r3, r3, globals@l
/* 8017DECC 0017AFAC  38 03 06 E0 */	addi r0, r3, 0x6e0
/* 8017DED0 0017AFB0  90 1F 00 40 */	stw r0, 0x40(r31)
.L_8017DED4:
/* 8017DED4 0017AFB4  C0 1F 00 30 */	lfs f0, 0x30(r31)
/* 8017DED8 0017AFB8  7F C3 F3 78 */	mr r3, r30
/* 8017DEDC 0017AFBC  38 80 00 00 */	li r4, 0x0
/* 8017DEE0 0017AFC0  D0 1F 00 3C */	stfs f0, 0x3c(r31)
/* 8017DEE4 0017AFC4  80 01 00 2C */	lwz r0, 0x2c(r1)
/* 8017DEE8 0017AFC8  54 00 07 FF */	clrlwi. r0, r0, 31
/* 8017DEEC 0017AFCC  40 82 00 10 */	bne .L_8017DEFC
/* 8017DEF0 0017AFD0  80 01 00 7C */	lwz r0, 0x7c(r1)
/* 8017DEF4 0017AFD4  54 00 07 FF */	clrlwi. r0, r0, 31
/* 8017DEF8 0017AFD8  41 82 00 08 */	beq .L_8017DF00
.L_8017DEFC:
/* 8017DEFC 0017AFDC  38 80 00 01 */	li r4, 0x1
.L_8017DF00:
/* 8017DF00 0017AFE0  48 00 0A D1 */	bl log_collide_dynamics__17xLaserBoltEmitterFb
/* 8017DF04 0017AFE4  80 01 00 E4 */	lwz r0, 0xe4(r1)
/* 8017DF08 0017AFE8  83 E1 00 DC */	lwz r31, 0xdc(r1)
/* 8017DF0C 0017AFEC  83 C1 00 D8 */	lwz r30, 0xd8(r1)
/* 8017DF10 0017AFF0  83 A1 00 D4 */	lwz r29, 0xd4(r1)
/* 8017DF14 0017AFF4  7C 08 03 A6 */	mtlr r0
/* 8017DF18 0017AFF8  38 21 00 E0 */	addi r1, r1, 0xe0
/* 8017DF1C 0017AFFC  4E 80 00 20 */	blr
.endfn collide_update__17xLaserBoltEmitterFRQ217xLaserBoltEmitter4bolt

# xLaserBoltEmitter::render(xLaserBoltEmitter::bolt&, RxObjSpace3DVertex*)
.fn render__17xLaserBoltEmitterFRQ217xLaserBoltEmitter4boltP18RxObjSpace3DVertex, global
/* 8017DF20 0017B000  94 21 FF 30 */	stwu r1, -0xd0(r1)
/* 8017DF24 0017B004  7C 08 02 A6 */	mflr r0
/* 8017DF28 0017B008  90 01 00 D4 */	stw r0, 0xd4(r1)
/* 8017DF2C 0017B00C  DB E1 00 C0 */	stfd f31, 0xc0(r1)
/* 8017DF30 0017B010  F3 E1 00 C8 */	psq_st f31, 0xc8(r1), 0, qr0
/* 8017DF34 0017B014  93 E1 00 BC */	stw r31, 0xbc(r1)
/* 8017DF38 0017B018  93 C1 00 B8 */	stw r30, 0xb8(r1)
/* 8017DF3C 0017B01C  93 A1 00 B4 */	stw r29, 0xb4(r1)
/* 8017DF40 0017B020  7C 7E 1B 78 */	mr r30, r3
/* 8017DF44 0017B024  7C 9D 23 78 */	mr r29, r4
/* 8017DF48 0017B028  C0 44 00 38 */	lfs f2, 0x38(r4)
/* 8017DF4C 0017B02C  7C BF 2B 78 */	mr r31, r5
/* 8017DF50 0017B030  C0 23 00 04 */	lfs f1, 0x4(r3)
/* 8017DF54 0017B034  C0 02 AE 24 */	lfs f0, "@930"@sda21(r2)
/* 8017DF58 0017B038  EC 22 08 28 */	fsubs f1, f2, f1
/* 8017DF5C 0017B03C  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8017DF60 0017B040  40 80 00 08 */	bge .L_8017DF68
/* 8017DF64 0017B044  FC 20 00 90 */	fmr f1, f0
.L_8017DF68:
/* 8017DF68 0017B048  C3 FD 00 30 */	lfs f31, 0x30(r29)
/* 8017DF6C 0017B04C  C0 1D 00 34 */	lfs f0, 0x34(r29)
/* 8017DF70 0017B050  FC 1F 00 40 */	fcmpo cr0, f31, f0
/* 8017DF74 0017B054  4C 40 13 82 */	cror eq, lt, eq
/* 8017DF78 0017B058  40 82 00 08 */	bne .L_8017DF80
/* 8017DF7C 0017B05C  48 00 00 08 */	b .L_8017DF84
.L_8017DF80:
/* 8017DF80 0017B060  FF E0 00 90 */	fmr f31, f0
.L_8017DF84:
/* 8017DF84 0017B064  FC 01 F8 40 */	fcmpo cr0, f1, f31
/* 8017DF88 0017B068  4C 41 13 82 */	cror eq, gt, eq
/* 8017DF8C 0017B06C  40 82 00 0C */	bne .L_8017DF98
/* 8017DF90 0017B070  7F E3 FB 78 */	mr r3, r31
/* 8017DF94 0017B074  48 00 01 AC */	b .L_8017E140
.L_8017DF98:
/* 8017DF98 0017B078  38 61 00 50 */	addi r3, r1, 0x50
/* 8017DF9C 0017B07C  38 9D 00 0C */	addi r4, r29, 0xc
/* 8017DFA0 0017B080  4B E8 D1 81 */	bl __ml__5xVec3CFf
/* 8017DFA4 0017B084  7F A4 EB 78 */	mr r4, r29
/* 8017DFA8 0017B088  38 61 00 5C */	addi r3, r1, 0x5c
/* 8017DFAC 0017B08C  38 A1 00 50 */	addi r5, r1, 0x50
/* 8017DFB0 0017B090  4B E9 74 31 */	bl __pl__5xVec3CFRC5xVec3
/* 8017DFB4 0017B094  80 C1 00 5C */	lwz r6, 0x5c(r1)
/* 8017DFB8 0017B098  FC 20 F8 90 */	fmr f1, f31
/* 8017DFBC 0017B09C  80 A1 00 60 */	lwz r5, 0x60(r1)
/* 8017DFC0 0017B0A0  38 61 00 38 */	addi r3, r1, 0x38
/* 8017DFC4 0017B0A4  80 01 00 64 */	lwz r0, 0x64(r1)
/* 8017DFC8 0017B0A8  38 9D 00 0C */	addi r4, r29, 0xc
/* 8017DFCC 0017B0AC  90 C1 00 98 */	stw r6, 0x98(r1)
/* 8017DFD0 0017B0B0  90 A1 00 9C */	stw r5, 0x9c(r1)
/* 8017DFD4 0017B0B4  90 01 00 A0 */	stw r0, 0xa0(r1)
/* 8017DFD8 0017B0B8  4B E8 D1 49 */	bl __ml__5xVec3CFf
/* 8017DFDC 0017B0BC  7F A4 EB 78 */	mr r4, r29
/* 8017DFE0 0017B0C0  38 61 00 44 */	addi r3, r1, 0x44
/* 8017DFE4 0017B0C4  38 A1 00 38 */	addi r5, r1, 0x38
/* 8017DFE8 0017B0C8  4B E9 73 F9 */	bl __pl__5xVec3CFRC5xVec3
/* 8017DFEC 0017B0CC  80 E1 00 44 */	lwz r7, 0x44(r1)
/* 8017DFF0 0017B0D0  38 61 00 20 */	addi r3, r1, 0x20
/* 8017DFF4 0017B0D4  80 C1 00 48 */	lwz r6, 0x48(r1)
/* 8017DFF8 0017B0D8  38 81 00 8C */	addi r4, r1, 0x8c
/* 8017DFFC 0017B0DC  80 01 00 4C */	lwz r0, 0x4c(r1)
/* 8017E000 0017B0E0  38 A1 00 98 */	addi r5, r1, 0x98
/* 8017E004 0017B0E4  90 E1 00 8C */	stw r7, 0x8c(r1)
/* 8017E008 0017B0E8  90 C1 00 90 */	stw r6, 0x90(r1)
/* 8017E00C 0017B0EC  90 01 00 94 */	stw r0, 0x94(r1)
/* 8017E010 0017B0F0  4B E8 D1 BD */	bl __mi__5xVec3CFRC5xVec3
/* 8017E014 0017B0F4  38 61 00 2C */	addi r3, r1, 0x2c
/* 8017E018 0017B0F8  38 81 00 20 */	addi r4, r1, 0x20
/* 8017E01C 0017B0FC  4B F9 82 91 */	bl normal__5xVec3CFv
/* 8017E020 0017B100  80 81 00 2C */	lwz r4, 0x2c(r1)
/* 8017E024 0017B104  3C 60 80 3C */	lis r3, globals@ha
/* 8017E028 0017B108  80 C1 00 30 */	lwz r6, 0x30(r1)
/* 8017E02C 0017B10C  38 A3 05 58 */	addi r5, r3, globals@l
/* 8017E030 0017B110  80 01 00 34 */	lwz r0, 0x34(r1)
/* 8017E034 0017B114  38 61 00 14 */	addi r3, r1, 0x14
/* 8017E038 0017B118  90 81 00 80 */	stw r4, 0x80(r1)
/* 8017E03C 0017B11C  38 81 00 80 */	addi r4, r1, 0x80
/* 8017E040 0017B120  38 A5 00 34 */	addi r5, r5, 0x34
/* 8017E044 0017B124  90 C1 00 84 */	stw r6, 0x84(r1)
/* 8017E048 0017B128  90 01 00 88 */	stw r0, 0x88(r1)
/* 8017E04C 0017B12C  4B E9 74 E9 */	bl cross__5xVec3CFRC5xVec3
/* 8017E050 0017B130  80 A1 00 14 */	lwz r5, 0x14(r1)
/* 8017E054 0017B134  38 61 00 74 */	addi r3, r1, 0x74
/* 8017E058 0017B138  80 81 00 18 */	lwz r4, 0x18(r1)
/* 8017E05C 0017B13C  80 01 00 1C */	lwz r0, 0x1c(r1)
/* 8017E060 0017B140  90 A1 00 74 */	stw r5, 0x74(r1)
/* 8017E064 0017B144  90 81 00 78 */	stw r4, 0x78(r1)
/* 8017E068 0017B148  90 01 00 7C */	stw r0, 0x7c(r1)
/* 8017E06C 0017B14C  4B E8 D0 91 */	bl length2__5xVec3CFv
/* 8017E070 0017B150  C0 02 AE 30 */	lfs f0, "@1160"@sda21(r2)
/* 8017E074 0017B154  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8017E078 0017B158  4C 41 13 82 */	cror eq, gt, eq
/* 8017E07C 0017B15C  40 82 00 2C */	bne .L_8017E0A8
/* 8017E080 0017B160  C0 02 AE 34 */	lfs f0, "@1161"@sda21(r2)
/* 8017E084 0017B164  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8017E088 0017B168  4C 40 13 82 */	cror eq, lt, eq
/* 8017E08C 0017B16C  40 82 00 1C */	bne .L_8017E0A8
/* 8017E090 0017B170  C0 42 AE 24 */	lfs f2, "@930"@sda21(r2)
/* 8017E094 0017B174  38 61 00 74 */	addi r3, r1, 0x74
/* 8017E098 0017B178  C0 22 AE 38 */	lfs f1, "@1162"@sda21(r2)
/* 8017E09C 0017B17C  FC 60 10 90 */	fmr f3, f2
/* 8017E0A0 0017B180  4B E8 D0 4D */	bl assign__5xVec3Ffff
/* 8017E0A4 0017B184  48 00 00 18 */	b .L_8017E0BC
.L_8017E0A8:
/* 8017E0A8 0017B188  4B E8 C7 55 */	bl xsqrt__Ff
/* 8017E0AC 0017B18C  C0 02 AE 38 */	lfs f0, "@1162"@sda21(r2)
/* 8017E0B0 0017B190  38 61 00 74 */	addi r3, r1, 0x74
/* 8017E0B4 0017B194  EC 20 08 24 */	fdivs f1, f0, f1
/* 8017E0B8 0017B198  4B E8 D0 C9 */	bl __amu__5xVec3Ff
.L_8017E0BC:
/* 8017E0BC 0017B19C  C0 22 AE 2C */	lfs f1, "@965"@sda21(r2)
/* 8017E0C0 0017B1A0  38 61 00 08 */	addi r3, r1, 0x8
/* 8017E0C4 0017B1A4  C0 1E 00 00 */	lfs f0, 0x0(r30)
/* 8017E0C8 0017B1A8  38 81 00 74 */	addi r4, r1, 0x74
/* 8017E0CC 0017B1AC  EC 21 00 32 */	fmuls f1, f1, f0
/* 8017E0D0 0017B1B0  4B E8 D0 51 */	bl __ml__5xVec3CFf
/* 8017E0D4 0017B1B4  C0 3D 00 30 */	lfs f1, 0x30(r29)
/* 8017E0D8 0017B1B8  C0 1E 00 0C */	lfs f0, 0xc(r30)
/* 8017E0DC 0017B1BC  80 81 00 08 */	lwz r4, 0x8(r1)
/* 8017E0E0 0017B1C0  80 61 00 0C */	lwz r3, 0xc(r1)
/* 8017E0E4 0017B1C4  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8017E0E8 0017B1C8  80 01 00 10 */	lwz r0, 0x10(r1)
/* 8017E0EC 0017B1CC  90 81 00 68 */	stw r4, 0x68(r1)
/* 8017E0F0 0017B1D0  90 61 00 6C */	stw r3, 0x6c(r1)
/* 8017E0F4 0017B1D4  90 01 00 70 */	stw r0, 0x70(r1)
/* 8017E0F8 0017B1D8  4C 40 13 82 */	cror eq, lt, eq
/* 8017E0FC 0017B1DC  40 82 00 0C */	bne .L_8017E108
/* 8017E100 0017B1E0  38 E0 00 FF */	li r7, 0xff
/* 8017E104 0017B1E4  48 00 00 20 */	b .L_8017E124
.L_8017E108:
/* 8017E108 0017B1E8  EC 21 00 28 */	fsubs f1, f1, f0
/* 8017E10C 0017B1EC  C0 5E 00 50 */	lfs f2, 0x50(r30)
/* 8017E110 0017B1F0  C0 02 AE 3C */	lfs f0, "@1163"@sda21(r2)
/* 8017E114 0017B1F4  EC 02 00 7C */	fnmsubs f0, f2, f1, f0
/* 8017E118 0017B1F8  FC 00 00 1E */	fctiwz f0, f0
/* 8017E11C 0017B1FC  D8 01 00 A8 */	stfd f0, 0xa8(r1)
/* 8017E120 0017B200  80 E1 00 AC */	lwz r7, 0xac(r1)
.L_8017E124:
/* 8017E124 0017B204  7F C3 F3 78 */	mr r3, r30
/* 8017E128 0017B208  7F E4 FB 78 */	mr r4, r31
/* 8017E12C 0017B20C  38 A1 00 98 */	addi r5, r1, 0x98
/* 8017E130 0017B210  38 C1 00 8C */	addi r6, r1, 0x8c
/* 8017E134 0017B214  39 01 00 68 */	addi r8, r1, 0x68
/* 8017E138 0017B218  48 00 08 9D */	bl set_bolt_verts__17xLaserBoltEmitterFP18RxObjSpace3DVertexRC5xVec3RC5xVec3UcRC5xVec3
/* 8017E13C 0017B21C  38 7F 00 D8 */	addi r3, r31, 0xd8
.L_8017E140:
/* 8017E140 0017B220  E3 E1 00 C8 */	psq_l f31, 0xc8(r1), 0, qr0
/* 8017E144 0017B224  80 01 00 D4 */	lwz r0, 0xd4(r1)
/* 8017E148 0017B228  CB E1 00 C0 */	lfd f31, 0xc0(r1)
/* 8017E14C 0017B22C  83 E1 00 BC */	lwz r31, 0xbc(r1)
/* 8017E150 0017B230  83 C1 00 B8 */	lwz r30, 0xb8(r1)
/* 8017E154 0017B234  83 A1 00 B4 */	lwz r29, 0xb4(r1)
/* 8017E158 0017B238  7C 08 03 A6 */	mtlr r0
/* 8017E15C 0017B23C  38 21 00 D0 */	addi r1, r1, 0xd0
/* 8017E160 0017B240  4E 80 00 20 */	blr
.endfn render__17xLaserBoltEmitterFRQ217xLaserBoltEmitter4boltP18RxObjSpace3DVertex

# xLaserBoltEmitter::get_vert_buffer(int&)
.fn get_vert_buffer__17xLaserBoltEmitterFRi, global
/* 8017E164 0017B244  38 00 01 E0 */	li r0, 0x1e0
/* 8017E168 0017B248  3C 60 80 3D */	lis r3, gRenderBuffer@ha
/* 8017E16C 0017B24C  90 04 00 00 */	stw r0, 0x0(r4)
/* 8017E170 0017B250  38 63 88 E0 */	addi r3, r3, gRenderBuffer@l
/* 8017E174 0017B254  80 63 00 04 */	lwz r3, 0x4(r3)
/* 8017E178 0017B258  4E 80 00 20 */	blr
.endfn get_vert_buffer__17xLaserBoltEmitterFRi

# xLaserBoltEmitter::apply_damage(xLaserBoltEmitter::bolt&)
.fn apply_damage__17xLaserBoltEmitterFRQ217xLaserBoltEmitter4bolt, global
/* 8017E17C 0017B25C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8017E180 0017B260  7C 08 02 A6 */	mflr r0
/* 8017E184 0017B264  7C 65 1B 78 */	mr r5, r3
/* 8017E188 0017B268  90 01 00 14 */	stw r0, 0x14(r1)
/* 8017E18C 0017B26C  80 64 00 40 */	lwz r3, 0x40(r4)
/* 8017E190 0017B270  88 03 00 04 */	lbz r0, 0x4(r3)
/* 8017E194 0017B274  28 00 00 2B */	cmplwi r0, 0x2b
/* 8017E198 0017B278  40 82 00 24 */	bne .L_8017E1BC
/* 8017E19C 0017B27C  81 83 01 B8 */	lwz r12, 0x1b8(r3)
/* 8017E1A0 0017B280  38 C4 00 0C */	addi r6, r4, 0xc
/* 8017E1A4 0017B284  38 80 00 0A */	li r4, 0xa
/* 8017E1A8 0017B288  38 A0 00 00 */	li r5, 0x0
/* 8017E1AC 0017B28C  81 8C 00 80 */	lwz r12, 0x80(r12)
/* 8017E1B0 0017B290  7D 89 03 A6 */	mtctr r12
/* 8017E1B4 0017B294  4E 80 04 21 */	bctrl
/* 8017E1B8 0017B298  48 00 00 30 */	b .L_8017E1E8
.L_8017E1BC:
/* 8017E1BC 0017B29C  28 00 00 1B */	cmplwi r0, 0x1b
/* 8017E1C0 0017B2A0  40 82 00 10 */	bne .L_8017E1D0
/* 8017E1C4 0017B2A4  3C 80 00 04 */	lis r4, 0x4
/* 8017E1C8 0017B2A8  4B EE 2D ED */	bl zEntDestructObj_Hit__FP15zEntDestructObjUi
/* 8017E1CC 0017B2AC  48 00 00 1C */	b .L_8017E1E8
.L_8017E1D0:
/* 8017E1D0 0017B2B0  C0 42 AE 24 */	lfs f2, "@930"@sda21(r2)
/* 8017E1D4 0017B2B4  38 80 00 3A */	li r4, 0x3a
/* 8017E1D8 0017B2B8  C0 25 00 38 */	lfs f1, 0x38(r5)
/* 8017E1DC 0017B2BC  FC 60 10 90 */	fmr f3, f2
/* 8017E1E0 0017B2C0  FC 80 10 90 */	fmr f4, f2
/* 8017E1E4 0017B2C4  4B EA 14 49 */	bl zEntEvent__FP5xBaseUiffff
.L_8017E1E8:
/* 8017E1E8 0017B2C8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8017E1EC 0017B2CC  7C 08 03 A6 */	mtlr r0
/* 8017E1F0 0017B2D0  38 21 00 10 */	addi r1, r1, 0x10
/* 8017E1F4 0017B2D4  4E 80 00 20 */	blr
.endfn apply_damage__17xLaserBoltEmitterFRQ217xLaserBoltEmitter4bolt

# xLaserBoltEmitter::reset_fx(xLaserBoltEmitter::fx_when_enum)
.fn reset_fx__17xLaserBoltEmitterFQ217xLaserBoltEmitter12fx_when_enum, global
/* 8017E1F8 0017B2D8  54 80 10 3A */	slwi r0, r4, 2
/* 8017E1FC 0017B2DC  7C 63 02 14 */	add r3, r3, r0
/* 8017E200 0017B2E0  80 03 00 78 */	lwz r0, 0x78(r3)
/* 8017E204 0017B2E4  80 63 00 5C */	lwz r3, 0x5c(r3)
/* 8017E208 0017B2E8  1C 00 00 18 */	mulli r0, r0, 0x18
/* 8017E20C 0017B2EC  7C 03 02 14 */	add r0, r3, r0
/* 8017E210 0017B2F0  48 00 00 24 */	b .L_8017E234
.L_8017E214:
/* 8017E214 0017B2F4  C0 23 00 08 */	lfs f1, 0x8(r3)
/* 8017E218 0017B2F8  C0 02 AE 24 */	lfs f0, "@930"@sda21(r2)
/* 8017E21C 0017B2FC  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8017E220 0017B300  40 81 00 0C */	ble .L_8017E22C
/* 8017E224 0017B304  C0 02 AE 38 */	lfs f0, "@1162"@sda21(r2)
/* 8017E228 0017B308  EC 00 08 24 */	fdivs f0, f0, f1
.L_8017E22C:
/* 8017E22C 0017B30C  D0 03 00 14 */	stfs f0, 0x14(r3)
/* 8017E230 0017B310  38 63 00 18 */	addi r3, r3, 0x18
.L_8017E234:
/* 8017E234 0017B314  7C 03 00 40 */	cmplw r3, r0
/* 8017E238 0017B318  40 82 FF DC */	bne .L_8017E214
/* 8017E23C 0017B31C  4E 80 00 20 */	blr
.endfn reset_fx__17xLaserBoltEmitterFQ217xLaserBoltEmitter12fx_when_enum

# xLaserBoltEmitter::update_fx(xLaserBoltEmitter::bolt&, float, float)
.fn update_fx__17xLaserBoltEmitterFRQ217xLaserBoltEmitter4boltff, global
/* 8017E240 0017B320  94 21 FF A0 */	stwu r1, -0x60(r1)
/* 8017E244 0017B324  7C 08 02 A6 */	mflr r0
/* 8017E248 0017B328  90 01 00 64 */	stw r0, 0x64(r1)
/* 8017E24C 0017B32C  DB E1 00 50 */	stfd f31, 0x50(r1)
/* 8017E250 0017B330  F3 E1 00 58 */	psq_st f31, 0x58(r1), 0, qr0
/* 8017E254 0017B334  DB C1 00 40 */	stfd f30, 0x40(r1)
/* 8017E258 0017B338  F3 C1 00 48 */	psq_st f30, 0x48(r1), 0, qr0
/* 8017E25C 0017B33C  DB A1 00 30 */	stfd f29, 0x30(r1)
/* 8017E260 0017B340  F3 A1 00 38 */	psq_st f29, 0x38(r1), 0, qr0
/* 8017E264 0017B344  DB 81 00 20 */	stfd f28, 0x20(r1)
/* 8017E268 0017B348  F3 81 00 28 */	psq_st f28, 0x28(r1), 0, qr0
/* 8017E26C 0017B34C  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 8017E270 0017B350  93 C1 00 18 */	stw r30, 0x18(r1)
/* 8017E274 0017B354  93 A1 00 14 */	stw r29, 0x14(r1)
/* 8017E278 0017B358  93 81 00 10 */	stw r28, 0x10(r1)
/* 8017E27C 0017B35C  7C 7C 1B 78 */	mr r28, r3
/* 8017E280 0017B360  7C 9D 23 78 */	mr r29, r4
/* 8017E284 0017B364  C0 04 00 30 */	lfs f0, 0x30(r4)
/* 8017E288 0017B368  FF 80 08 90 */	fmr f28, f1
/* 8017E28C 0017B36C  C0 23 00 04 */	lfs f1, 0x4(r3)
/* 8017E290 0017B370  FF A0 10 90 */	fmr f29, f2
/* 8017E294 0017B374  FC 00 08 40 */	fcmpo cr0, f0, f1
/* 8017E298 0017B378  EF E0 08 28 */	fsubs f31, f0, f1
/* 8017E29C 0017B37C  40 80 00 44 */	bge .L_8017E2E0
/* 8017E2A0 0017B380  80 1C 00 80 */	lwz r0, 0x80(r28)
/* 8017E2A4 0017B384  83 FC 00 64 */	lwz r31, 0x64(r28)
/* 8017E2A8 0017B388  1C 00 00 18 */	mulli r0, r0, 0x18
/* 8017E2AC 0017B38C  7F DF 02 14 */	add r30, r31, r0
/* 8017E2B0 0017B390  48 00 00 24 */	b .L_8017E2D4
.L_8017E2B4:
/* 8017E2B4 0017B394  C0 22 AE 24 */	lfs f1, "@930"@sda21(r2)
/* 8017E2B8 0017B398  FC 60 E8 90 */	fmr f3, f29
/* 8017E2BC 0017B39C  7F 83 E3 78 */	mr r3, r28
/* 8017E2C0 0017B3A0  7F E4 FB 78 */	mr r4, r31
/* 8017E2C4 0017B3A4  FC 40 08 90 */	fmr f2, f1
/* 8017E2C8 0017B3A8  7F A5 EB 78 */	mr r5, r29
/* 8017E2CC 0017B3AC  48 00 05 71 */	bl emit_fx__17xLaserBoltEmitterFRQ217xLaserBoltEmitter11effect_dataRQ217xLaserBoltEmitter4boltfff
/* 8017E2D0 0017B3B0  3B FF 00 18 */	addi r31, r31, 0x18
.L_8017E2D4:
/* 8017E2D4 0017B3B4  7C 1F F0 40 */	cmplw r31, r30
/* 8017E2D8 0017B3B8  40 82 FF DC */	bne .L_8017E2B4
/* 8017E2DC 0017B3BC  48 00 00 60 */	b .L_8017E33C
.L_8017E2E0:
/* 8017E2E0 0017B3C0  C0 1D 00 34 */	lfs f0, 0x34(r29)
/* 8017E2E4 0017B3C4  FC 1F 00 40 */	fcmpo cr0, f31, f0
/* 8017E2E8 0017B3C8  40 80 00 54 */	bge .L_8017E33C
/* 8017E2EC 0017B3CC  80 1C 00 8C */	lwz r0, 0x8c(r28)
/* 8017E2F0 0017B3D0  EF DC 08 28 */	fsubs f30, f28, f1
/* 8017E2F4 0017B3D4  C0 02 AE 24 */	lfs f0, "@930"@sda21(r2)
/* 8017E2F8 0017B3D8  1C 00 00 18 */	mulli r0, r0, 0x18
/* 8017E2FC 0017B3DC  83 DC 00 70 */	lwz r30, 0x70(r28)
/* 8017E300 0017B3E0  FC 1E 00 40 */	fcmpo cr0, f30, f0
/* 8017E304 0017B3E4  7F FE 02 14 */	add r31, r30, r0
/* 8017E308 0017B3E8  40 80 00 2C */	bge .L_8017E334
/* 8017E30C 0017B3EC  FF C0 00 90 */	fmr f30, f0
/* 8017E310 0017B3F0  48 00 00 24 */	b .L_8017E334
.L_8017E314:
/* 8017E314 0017B3F4  FC 20 F0 90 */	fmr f1, f30
/* 8017E318 0017B3F8  7F 83 E3 78 */	mr r3, r28
/* 8017E31C 0017B3FC  FC 40 F8 90 */	fmr f2, f31
/* 8017E320 0017B400  7F C4 F3 78 */	mr r4, r30
/* 8017E324 0017B404  FC 60 E8 90 */	fmr f3, f29
/* 8017E328 0017B408  7F A5 EB 78 */	mr r5, r29
/* 8017E32C 0017B40C  48 00 05 11 */	bl emit_fx__17xLaserBoltEmitterFRQ217xLaserBoltEmitter11effect_dataRQ217xLaserBoltEmitter4boltfff
/* 8017E330 0017B410  3B DE 00 18 */	addi r30, r30, 0x18
.L_8017E334:
/* 8017E334 0017B414  7C 1E F8 40 */	cmplw r30, r31
/* 8017E338 0017B418  40 82 FF DC */	bne .L_8017E314
.L_8017E33C:
/* 8017E33C 0017B41C  C0 1D 00 30 */	lfs f0, 0x30(r29)
/* 8017E340 0017B420  C0 3D 00 34 */	lfs f1, 0x34(r29)
/* 8017E344 0017B424  FC 00 08 40 */	fcmpo cr0, f0, f1
/* 8017E348 0017B428  40 80 00 44 */	bge .L_8017E38C
/* 8017E34C 0017B42C  80 1C 00 88 */	lwz r0, 0x88(r28)
/* 8017E350 0017B430  83 DC 00 6C */	lwz r30, 0x6c(r28)
/* 8017E354 0017B434  1C 00 00 18 */	mulli r0, r0, 0x18
/* 8017E358 0017B438  7F FE 02 14 */	add r31, r30, r0
/* 8017E35C 0017B43C  48 00 00 24 */	b .L_8017E380
.L_8017E360:
/* 8017E360 0017B440  FC 20 E0 90 */	fmr f1, f28
/* 8017E364 0017B444  C0 5D 00 30 */	lfs f2, 0x30(r29)
/* 8017E368 0017B448  FC 60 E8 90 */	fmr f3, f29
/* 8017E36C 0017B44C  7F 83 E3 78 */	mr r3, r28
/* 8017E370 0017B450  7F C4 F3 78 */	mr r4, r30
/* 8017E374 0017B454  7F A5 EB 78 */	mr r5, r29
/* 8017E378 0017B458  48 00 04 C5 */	bl emit_fx__17xLaserBoltEmitterFRQ217xLaserBoltEmitter11effect_dataRQ217xLaserBoltEmitter4boltfff
/* 8017E37C 0017B45C  3B DE 00 18 */	addi r30, r30, 0x18
.L_8017E380:
/* 8017E380 0017B460  7C 1E F8 40 */	cmplw r30, r31
/* 8017E384 0017B464  40 82 FF DC */	bne .L_8017E360
/* 8017E388 0017B468  48 00 00 48 */	b .L_8017E3D0
.L_8017E38C:
/* 8017E38C 0017B46C  FC 1F 08 40 */	fcmpo cr0, f31, f1
/* 8017E390 0017B470  40 80 00 40 */	bge .L_8017E3D0
/* 8017E394 0017B474  80 1C 00 84 */	lwz r0, 0x84(r28)
/* 8017E398 0017B478  83 DC 00 68 */	lwz r30, 0x68(r28)
/* 8017E39C 0017B47C  1C 00 00 18 */	mulli r0, r0, 0x18
/* 8017E3A0 0017B480  7F FE 02 14 */	add r31, r30, r0
/* 8017E3A4 0017B484  48 00 00 24 */	b .L_8017E3C8
.L_8017E3A8:
/* 8017E3A8 0017B488  C0 3D 00 34 */	lfs f1, 0x34(r29)
/* 8017E3AC 0017B48C  FC 60 E8 90 */	fmr f3, f29
/* 8017E3B0 0017B490  7F 83 E3 78 */	mr r3, r28
/* 8017E3B4 0017B494  7F C4 F3 78 */	mr r4, r30
/* 8017E3B8 0017B498  FC 40 08 90 */	fmr f2, f1
/* 8017E3BC 0017B49C  7F A5 EB 78 */	mr r5, r29
/* 8017E3C0 0017B4A0  48 00 04 7D */	bl emit_fx__17xLaserBoltEmitterFRQ217xLaserBoltEmitter11effect_dataRQ217xLaserBoltEmitter4boltfff
/* 8017E3C4 0017B4A4  3B DE 00 18 */	addi r30, r30, 0x18
.L_8017E3C8:
/* 8017E3C8 0017B4A8  7C 1E F8 40 */	cmplw r30, r31
/* 8017E3CC 0017B4AC  40 82 FF DC */	bne .L_8017E3A8
.L_8017E3D0:
/* 8017E3D0 0017B4B0  E3 E1 00 58 */	psq_l f31, 0x58(r1), 0, qr0
/* 8017E3D4 0017B4B4  CB E1 00 50 */	lfd f31, 0x50(r1)
/* 8017E3D8 0017B4B8  E3 C1 00 48 */	psq_l f30, 0x48(r1), 0, qr0
/* 8017E3DC 0017B4BC  CB C1 00 40 */	lfd f30, 0x40(r1)
/* 8017E3E0 0017B4C0  E3 A1 00 38 */	psq_l f29, 0x38(r1), 0, qr0
/* 8017E3E4 0017B4C4  CB A1 00 30 */	lfd f29, 0x30(r1)
/* 8017E3E8 0017B4C8  E3 81 00 28 */	psq_l f28, 0x28(r1), 0, qr0
/* 8017E3EC 0017B4CC  CB 81 00 20 */	lfd f28, 0x20(r1)
/* 8017E3F0 0017B4D0  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 8017E3F4 0017B4D4  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 8017E3F8 0017B4D8  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 8017E3FC 0017B4DC  80 01 00 64 */	lwz r0, 0x64(r1)
/* 8017E400 0017B4E0  83 81 00 10 */	lwz r28, 0x10(r1)
/* 8017E404 0017B4E4  7C 08 03 A6 */	mtlr r0
/* 8017E408 0017B4E8  38 21 00 60 */	addi r1, r1, 0x60
/* 8017E40C 0017B4EC  4E 80 00 20 */	blr
.endfn update_fx__17xLaserBoltEmitterFRQ217xLaserBoltEmitter4boltff

# xLaserBoltEmitter::emit_particle(xLaserBoltEmitter::effect_data&, xLaserBoltEmitter::bolt&, float, float, float)
.fn emit_particle__17xLaserBoltEmitterFRQ217xLaserBoltEmitter11effect_dataRQ217xLaserBoltEmitter4boltfff, global
/* 8017E410 0017B4F0  94 21 FF 30 */	stwu r1, -0xd0(r1)
/* 8017E414 0017B4F4  7C 08 02 A6 */	mflr r0
/* 8017E418 0017B4F8  90 01 00 D4 */	stw r0, 0xd4(r1)
/* 8017E41C 0017B4FC  DB E1 00 C0 */	stfd f31, 0xc0(r1)
/* 8017E420 0017B500  F3 E1 00 C8 */	psq_st f31, 0xc8(r1), 0, qr0
/* 8017E424 0017B504  DB C1 00 B0 */	stfd f30, 0xb0(r1)
/* 8017E428 0017B508  F3 C1 00 B8 */	psq_st f30, 0xb8(r1), 0, qr0
/* 8017E42C 0017B50C  DB A1 00 A0 */	stfd f29, 0xa0(r1)
/* 8017E430 0017B510  F3 A1 00 A8 */	psq_st f29, 0xa8(r1), 0, qr0
/* 8017E434 0017B514  DB 81 00 90 */	stfd f28, 0x90(r1)
/* 8017E438 0017B518  F3 81 00 98 */	psq_st f28, 0x98(r1), 0, qr0
/* 8017E43C 0017B51C  93 E1 00 8C */	stw r31, 0x8c(r1)
/* 8017E440 0017B520  93 C1 00 88 */	stw r30, 0x88(r1)
/* 8017E444 0017B524  93 A1 00 84 */	stw r29, 0x84(r1)
/* 8017E448 0017B528  83 E4 00 0C */	lwz r31, 0xc(r4)
/* 8017E44C 0017B52C  FF 80 08 90 */	fmr f28, f1
/* 8017E450 0017B530  80 04 00 04 */	lwz r0, 0x4(r4)
/* 8017E454 0017B534  FF A0 10 90 */	fmr f29, f2
/* 8017E458 0017B538  83 DF 00 10 */	lwz r30, 0x10(r31)
/* 8017E45C 0017B53C  FF C0 18 90 */	fmr f30, f3
/* 8017E460 0017B540  2C 00 00 03 */	cmpwi r0, 0x3
/* 8017E464 0017B544  C3 FE 00 40 */	lfs f31, 0x40(r30)
/* 8017E468 0017B548  7C BD 2B 78 */	mr r29, r5
/* 8017E46C 0017B54C  41 82 00 5C */	beq .L_8017E4C8
/* 8017E470 0017B550  40 80 00 74 */	bge .L_8017E4E4
/* 8017E474 0017B554  2C 00 00 01 */	cmpwi r0, 0x1
/* 8017E478 0017B558  41 82 00 10 */	beq .L_8017E488
/* 8017E47C 0017B55C  40 80 00 2C */	bge .L_8017E4A8
/* 8017E480 0017B560  48 00 00 64 */	b .L_8017E4E4
/* 8017E484 0017B564  48 00 00 60 */	b .L_8017E4E4
.L_8017E488:
/* 8017E488 0017B568  FC 20 F8 90 */	fmr f1, f31
/* 8017E48C 0017B56C  38 61 00 68 */	addi r3, r1, 0x68
/* 8017E490 0017B570  38 9D 00 0C */	addi r4, r29, 0xc
/* 8017E494 0017B574  4B E8 CC 8D */	bl __ml__5xVec3CFf
/* 8017E498 0017B578  38 7E 00 3C */	addi r3, r30, 0x3c
/* 8017E49C 0017B57C  38 81 00 68 */	addi r4, r1, 0x68
/* 8017E4A0 0017B580  4B E8 CD C5 */	bl __as__5xVec3FRC5xVec3
/* 8017E4A4 0017B584  48 00 00 40 */	b .L_8017E4E4
.L_8017E4A8:
/* 8017E4A8 0017B588  FC 20 F8 50 */	fneg f1, f31
/* 8017E4AC 0017B58C  38 61 00 5C */	addi r3, r1, 0x5c
/* 8017E4B0 0017B590  38 9D 00 0C */	addi r4, r29, 0xc
/* 8017E4B4 0017B594  4B E8 CC 6D */	bl __ml__5xVec3CFf
/* 8017E4B8 0017B598  38 7E 00 3C */	addi r3, r30, 0x3c
/* 8017E4BC 0017B59C  38 81 00 5C */	addi r4, r1, 0x5c
/* 8017E4C0 0017B5A0  4B E8 CD A5 */	bl __as__5xVec3FRC5xVec3
/* 8017E4C4 0017B5A4  48 00 00 20 */	b .L_8017E4E4
.L_8017E4C8:
/* 8017E4C8 0017B5A8  FC 20 F8 90 */	fmr f1, f31
/* 8017E4CC 0017B5AC  38 61 00 50 */	addi r3, r1, 0x50
/* 8017E4D0 0017B5B0  38 9D 00 24 */	addi r4, r29, 0x24
/* 8017E4D4 0017B5B4  4B E8 CC 4D */	bl __ml__5xVec3CFf
/* 8017E4D8 0017B5B8  38 7E 00 3C */	addi r3, r30, 0x3c
/* 8017E4DC 0017B5BC  38 81 00 50 */	addi r4, r1, 0x50
/* 8017E4E0 0017B5C0  4B E8 CD 85 */	bl __as__5xVec3FRC5xVec3
.L_8017E4E4:
/* 8017E4E4 0017B5C4  88 1E 00 09 */	lbz r0, 0x9(r30)
/* 8017E4E8 0017B5C8  28 00 00 05 */	cmplwi r0, 0x5
/* 8017E4EC 0017B5CC  40 82 00 6C */	bne .L_8017E558
/* 8017E4F0 0017B5D0  FC 20 E0 90 */	fmr f1, f28
/* 8017E4F4 0017B5D4  38 61 00 38 */	addi r3, r1, 0x38
/* 8017E4F8 0017B5D8  38 9D 00 0C */	addi r4, r29, 0xc
/* 8017E4FC 0017B5DC  4B E8 CC 25 */	bl __ml__5xVec3CFf
/* 8017E500 0017B5E0  7F A4 EB 78 */	mr r4, r29
/* 8017E504 0017B5E4  38 61 00 44 */	addi r3, r1, 0x44
/* 8017E508 0017B5E8  38 A1 00 38 */	addi r5, r1, 0x38
/* 8017E50C 0017B5EC  4B E9 6E D5 */	bl __pl__5xVec3CFRC5xVec3
/* 8017E510 0017B5F0  38 7E 00 10 */	addi r3, r30, 0x10
/* 8017E514 0017B5F4  38 81 00 44 */	addi r4, r1, 0x44
/* 8017E518 0017B5F8  4B E8 CD 4D */	bl __as__5xVec3FRC5xVec3
/* 8017E51C 0017B5FC  FC 20 E8 90 */	fmr f1, f29
/* 8017E520 0017B600  38 61 00 20 */	addi r3, r1, 0x20
/* 8017E524 0017B604  38 9D 00 0C */	addi r4, r29, 0xc
/* 8017E528 0017B608  4B E8 CB F9 */	bl __ml__5xVec3CFf
/* 8017E52C 0017B60C  7F A4 EB 78 */	mr r4, r29
/* 8017E530 0017B610  38 61 00 2C */	addi r3, r1, 0x2c
/* 8017E534 0017B614  38 A1 00 20 */	addi r5, r1, 0x20
/* 8017E538 0017B618  4B E9 6E A9 */	bl __pl__5xVec3CFRC5xVec3
/* 8017E53C 0017B61C  38 7E 00 1C */	addi r3, r30, 0x1c
/* 8017E540 0017B620  38 81 00 2C */	addi r4, r1, 0x2c
/* 8017E544 0017B624  4B E8 CD 21 */	bl __as__5xVec3FRC5xVec3
/* 8017E548 0017B628  FC 20 F0 90 */	fmr f1, f30
/* 8017E54C 0017B62C  7F E3 FB 78 */	mr r3, r31
/* 8017E550 0017B630  4B F9 A3 95 */	bl xParEmitterEmit__FP11xParEmitterf
/* 8017E554 0017B634  48 00 00 60 */	b .L_8017E5B4
.L_8017E558:
/* 8017E558 0017B638  80 DE 00 30 */	lwz r6, 0x30(r30)
/* 8017E55C 0017B63C  FC 20 E8 90 */	fmr f1, f29
/* 8017E560 0017B640  80 BE 00 34 */	lwz r5, 0x34(r30)
/* 8017E564 0017B644  38 61 00 08 */	addi r3, r1, 0x8
/* 8017E568 0017B648  80 1E 00 38 */	lwz r0, 0x38(r30)
/* 8017E56C 0017B64C  38 9D 00 0C */	addi r4, r29, 0xc
/* 8017E570 0017B650  90 C1 00 74 */	stw r6, 0x74(r1)
/* 8017E574 0017B654  90 A1 00 78 */	stw r5, 0x78(r1)
/* 8017E578 0017B658  90 01 00 7C */	stw r0, 0x7c(r1)
/* 8017E57C 0017B65C  4B E8 CB A5 */	bl __ml__5xVec3CFf
/* 8017E580 0017B660  7F A4 EB 78 */	mr r4, r29
/* 8017E584 0017B664  38 61 00 14 */	addi r3, r1, 0x14
/* 8017E588 0017B668  38 A1 00 08 */	addi r5, r1, 0x8
/* 8017E58C 0017B66C  4B E9 6E 55 */	bl __pl__5xVec3CFRC5xVec3
/* 8017E590 0017B670  38 7E 00 30 */	addi r3, r30, 0x30
/* 8017E594 0017B674  38 81 00 14 */	addi r4, r1, 0x14
/* 8017E598 0017B678  4B E9 6E AD */	bl __apl__5xVec3FRC5xVec3
/* 8017E59C 0017B67C  FC 20 F0 90 */	fmr f1, f30
/* 8017E5A0 0017B680  7F E3 FB 78 */	mr r3, r31
/* 8017E5A4 0017B684  4B F9 A3 41 */	bl xParEmitterEmit__FP11xParEmitterf
/* 8017E5A8 0017B688  38 7E 00 30 */	addi r3, r30, 0x30
/* 8017E5AC 0017B68C  38 81 00 74 */	addi r4, r1, 0x74
/* 8017E5B0 0017B690  4B E8 CC B5 */	bl __as__5xVec3FRC5xVec3
.L_8017E5B4:
/* 8017E5B4 0017B694  D3 FE 00 40 */	stfs f31, 0x40(r30)
/* 8017E5B8 0017B698  E3 E1 00 C8 */	psq_l f31, 0xc8(r1), 0, qr0
/* 8017E5BC 0017B69C  CB E1 00 C0 */	lfd f31, 0xc0(r1)
/* 8017E5C0 0017B6A0  E3 C1 00 B8 */	psq_l f30, 0xb8(r1), 0, qr0
/* 8017E5C4 0017B6A4  CB C1 00 B0 */	lfd f30, 0xb0(r1)
/* 8017E5C8 0017B6A8  E3 A1 00 A8 */	psq_l f29, 0xa8(r1), 0, qr0
/* 8017E5CC 0017B6AC  CB A1 00 A0 */	lfd f29, 0xa0(r1)
/* 8017E5D0 0017B6B0  E3 81 00 98 */	psq_l f28, 0x98(r1), 0, qr0
/* 8017E5D4 0017B6B4  CB 81 00 90 */	lfd f28, 0x90(r1)
/* 8017E5D8 0017B6B8  83 E1 00 8C */	lwz r31, 0x8c(r1)
/* 8017E5DC 0017B6BC  83 C1 00 88 */	lwz r30, 0x88(r1)
/* 8017E5E0 0017B6C0  80 01 00 D4 */	lwz r0, 0xd4(r1)
/* 8017E5E4 0017B6C4  83 A1 00 84 */	lwz r29, 0x84(r1)
/* 8017E5E8 0017B6C8  7C 08 03 A6 */	mtlr r0
/* 8017E5EC 0017B6CC  38 21 00 D0 */	addi r1, r1, 0xd0
/* 8017E5F0 0017B6D0  4E 80 00 20 */	blr
.endfn emit_particle__17xLaserBoltEmitterFRQ217xLaserBoltEmitter11effect_dataRQ217xLaserBoltEmitter4boltfff

# xLaserBoltEmitter::emit_decal(xLaserBoltEmitter::effect_data&, xLaserBoltEmitter::bolt&, float, float, float)
.fn emit_decal__17xLaserBoltEmitterFRQ217xLaserBoltEmitter11effect_dataRQ217xLaserBoltEmitter4boltfff, global
/* 8017E5F4 0017B6D4  94 21 FF 90 */	stwu r1, -0x70(r1)
/* 8017E5F8 0017B6D8  7C 08 02 A6 */	mflr r0
/* 8017E5FC 0017B6DC  90 01 00 74 */	stw r0, 0x74(r1)
/* 8017E600 0017B6E0  DB E1 00 68 */	stfd f31, 0x68(r1)
/* 8017E604 0017B6E4  FF E0 10 90 */	fmr f31, f2
/* 8017E608 0017B6E8  93 E1 00 64 */	stw r31, 0x64(r1)
/* 8017E60C 0017B6EC  7C BF 2B 78 */	mr r31, r5
/* 8017E610 0017B6F0  93 C1 00 60 */	stw r30, 0x60(r1)
/* 8017E614 0017B6F4  7C 9E 23 78 */	mr r30, r4
/* 8017E618 0017B6F8  80 04 00 04 */	lwz r0, 0x4(r4)
/* 8017E61C 0017B6FC  2C 00 00 03 */	cmpwi r0, 0x3
/* 8017E620 0017B700  41 82 00 28 */	beq .L_8017E648
/* 8017E624 0017B704  40 80 00 30 */	bge .L_8017E654
/* 8017E628 0017B708  2C 00 00 00 */	cmpwi r0, 0x0
/* 8017E62C 0017B70C  40 80 00 0C */	bge .L_8017E638
/* 8017E630 0017B710  48 00 00 24 */	b .L_8017E654
/* 8017E634 0017B714  48 00 00 20 */	b .L_8017E654
.L_8017E638:
/* 8017E638 0017B718  38 61 00 20 */	addi r3, r1, 0x20
/* 8017E63C 0017B71C  38 9F 00 0C */	addi r4, r31, 0xc
/* 8017E640 0017B720  4B E9 6B B9 */	bl xMat3x3LookVec3__FR7xMat3x3RC5xVec3
/* 8017E644 0017B724  48 00 00 10 */	b .L_8017E654
.L_8017E648:
/* 8017E648 0017B728  38 61 00 20 */	addi r3, r1, 0x20
/* 8017E64C 0017B72C  38 9F 00 24 */	addi r4, r31, 0x24
/* 8017E650 0017B730  4B E9 6B A9 */	bl xMat3x3LookVec3__FR7xMat3x3RC5xVec3
.L_8017E654:
/* 8017E654 0017B734  FC 20 F8 90 */	fmr f1, f31
/* 8017E658 0017B738  38 61 00 08 */	addi r3, r1, 0x8
/* 8017E65C 0017B73C  38 9F 00 0C */	addi r4, r31, 0xc
/* 8017E660 0017B740  4B E8 CA C1 */	bl __ml__5xVec3CFf
/* 8017E664 0017B744  7F E4 FB 78 */	mr r4, r31
/* 8017E668 0017B748  38 61 00 14 */	addi r3, r1, 0x14
/* 8017E66C 0017B74C  38 A1 00 08 */	addi r5, r1, 0x8
/* 8017E670 0017B750  4B E9 6D 71 */	bl __pl__5xVec3CFRC5xVec3
/* 8017E674 0017B754  38 61 00 50 */	addi r3, r1, 0x50
/* 8017E678 0017B758  38 81 00 14 */	addi r4, r1, 0x14
/* 8017E67C 0017B75C  4B E8 CB E9 */	bl __as__5xVec3FRC5xVec3
/* 8017E680 0017B760  80 7E 00 0C */	lwz r3, 0xc(r30)
/* 8017E684 0017B764  38 81 00 20 */	addi r4, r1, 0x20
/* 8017E688 0017B768  38 A0 FF FF */	li r5, -0x1
/* 8017E68C 0017B76C  4B FF E1 45 */	bl emit__13xDecalEmitterFRC7xMat4x3i
/* 8017E690 0017B770  80 01 00 74 */	lwz r0, 0x74(r1)
/* 8017E694 0017B774  CB E1 00 68 */	lfd f31, 0x68(r1)
/* 8017E698 0017B778  83 E1 00 64 */	lwz r31, 0x64(r1)
/* 8017E69C 0017B77C  83 C1 00 60 */	lwz r30, 0x60(r1)
/* 8017E6A0 0017B780  7C 08 03 A6 */	mtlr r0
/* 8017E6A4 0017B784  38 21 00 70 */	addi r1, r1, 0x70
/* 8017E6A8 0017B788  4E 80 00 20 */	blr
.endfn emit_decal__17xLaserBoltEmitterFRQ217xLaserBoltEmitter11effect_dataRQ217xLaserBoltEmitter4boltfff

# xLaserBoltEmitter::emit_decal_dist(xLaserBoltEmitter::effect_data&, xLaserBoltEmitter::bolt&, float, float, float)
.fn emit_decal_dist__17xLaserBoltEmitterFRQ217xLaserBoltEmitter11effect_dataRQ217xLaserBoltEmitter4boltfff, global
/* 8017E6AC 0017B78C  94 21 FF 50 */	stwu r1, -0xb0(r1)
/* 8017E6B0 0017B790  7C 08 02 A6 */	mflr r0
/* 8017E6B4 0017B794  90 01 00 B4 */	stw r0, 0xb4(r1)
/* 8017E6B8 0017B798  DB E1 00 A0 */	stfd f31, 0xa0(r1)
/* 8017E6BC 0017B79C  F3 E1 00 A8 */	psq_st f31, 0xa8(r1), 0, qr0
/* 8017E6C0 0017B7A0  93 E1 00 9C */	stw r31, 0x9c(r1)
/* 8017E6C4 0017B7A4  93 C1 00 98 */	stw r30, 0x98(r1)
/* 8017E6C8 0017B7A8  93 A1 00 94 */	stw r29, 0x94(r1)
/* 8017E6CC 0017B7AC  93 81 00 90 */	stw r28, 0x90(r1)
/* 8017E6D0 0017B7B0  7C 9C 23 78 */	mr r28, r4
/* 8017E6D4 0017B7B4  7C BD 2B 78 */	mr r29, r5
/* 8017E6D8 0017B7B8  EC 02 08 28 */	fsubs f0, f2, f1
/* 8017E6DC 0017B7BC  C0 65 00 44 */	lfs f3, 0x44(r5)
/* 8017E6E0 0017B7C0  C0 44 00 08 */	lfs f2, 0x8(r4)
/* 8017E6E4 0017B7C4  3C 00 43 30 */	lis r0, 0x4330
/* 8017E6E8 0017B7C8  C0 82 AE 38 */	lfs f4, "@1162"@sda21(r2)
/* 8017E6EC 0017B7CC  EC 02 18 3A */	fmadds f0, f2, f0, f3
/* 8017E6F0 0017B7D0  C0 44 00 14 */	lfs f2, 0x14(r4)
/* 8017E6F4 0017B7D4  EC 64 18 28 */	fsubs f3, f4, f3
/* 8017E6F8 0017B7D8  90 01 00 80 */	stw r0, 0x80(r1)
/* 8017E6FC 0017B7DC  D0 05 00 44 */	stfs f0, 0x44(r5)
/* 8017E700 0017B7E0  EC 03 00 B2 */	fmuls f0, f3, f2
/* 8017E704 0017B7E4  C0 65 00 44 */	lfs f3, 0x44(r5)
/* 8017E708 0017B7E8  C8 42 AE 40 */	lfd f2, "@1361"@sda21(r2)
/* 8017E70C 0017B7EC  EF E1 00 2A */	fadds f31, f1, f0
/* 8017E710 0017B7F0  FC 00 18 1E */	fctiwz f0, f3
/* 8017E714 0017B7F4  D8 01 00 78 */	stfd f0, 0x78(r1)
/* 8017E718 0017B7F8  83 C1 00 7C */	lwz r30, 0x7c(r1)
/* 8017E71C 0017B7FC  6F C0 80 00 */	xoris r0, r30, 0x8000
/* 8017E720 0017B800  2C 1E 00 00 */	cmpwi r30, 0x0
/* 8017E724 0017B804  90 01 00 84 */	stw r0, 0x84(r1)
/* 8017E728 0017B808  C8 01 00 80 */	lfd f0, 0x80(r1)
/* 8017E72C 0017B80C  EC 00 10 28 */	fsubs f0, f0, f2
/* 8017E730 0017B810  EC 03 00 28 */	fsubs f0, f3, f0
/* 8017E734 0017B814  D0 05 00 44 */	stfs f0, 0x44(r5)
/* 8017E738 0017B818  40 81 00 D8 */	ble .L_8017E810
/* 8017E73C 0017B81C  80 1C 00 04 */	lwz r0, 0x4(r28)
/* 8017E740 0017B820  2C 00 00 03 */	cmpwi r0, 0x3
/* 8017E744 0017B824  41 82 00 28 */	beq .L_8017E76C
/* 8017E748 0017B828  40 80 00 30 */	bge .L_8017E778
/* 8017E74C 0017B82C  2C 00 00 00 */	cmpwi r0, 0x0
/* 8017E750 0017B830  40 80 00 0C */	bge .L_8017E75C
/* 8017E754 0017B834  48 00 00 24 */	b .L_8017E778
/* 8017E758 0017B838  48 00 00 20 */	b .L_8017E778
.L_8017E75C:
/* 8017E75C 0017B83C  38 61 00 38 */	addi r3, r1, 0x38
/* 8017E760 0017B840  38 9D 00 0C */	addi r4, r29, 0xc
/* 8017E764 0017B844  4B E9 6A 95 */	bl xMat3x3LookVec3__FR7xMat3x3RC5xVec3
/* 8017E768 0017B848  48 00 00 10 */	b .L_8017E778
.L_8017E76C:
/* 8017E76C 0017B84C  38 61 00 38 */	addi r3, r1, 0x38
/* 8017E770 0017B850  38 9D 00 24 */	addi r4, r29, 0x24
/* 8017E774 0017B854  4B E9 6A 85 */	bl xMat3x3LookVec3__FR7xMat3x3RC5xVec3
.L_8017E778:
/* 8017E778 0017B858  C0 3C 00 14 */	lfs f1, 0x14(r28)
/* 8017E77C 0017B85C  38 61 00 20 */	addi r3, r1, 0x20
/* 8017E780 0017B860  38 9D 00 0C */	addi r4, r29, 0xc
/* 8017E784 0017B864  4B E8 C9 9D */	bl __ml__5xVec3CFf
/* 8017E788 0017B868  80 C1 00 20 */	lwz r6, 0x20(r1)
/* 8017E78C 0017B86C  FC 20 F8 90 */	fmr f1, f31
/* 8017E790 0017B870  80 A1 00 24 */	lwz r5, 0x24(r1)
/* 8017E794 0017B874  38 61 00 08 */	addi r3, r1, 0x8
/* 8017E798 0017B878  80 01 00 28 */	lwz r0, 0x28(r1)
/* 8017E79C 0017B87C  38 9D 00 0C */	addi r4, r29, 0xc
/* 8017E7A0 0017B880  90 C1 00 2C */	stw r6, 0x2c(r1)
/* 8017E7A4 0017B884  90 A1 00 30 */	stw r5, 0x30(r1)
/* 8017E7A8 0017B888  90 01 00 34 */	stw r0, 0x34(r1)
/* 8017E7AC 0017B88C  4B E8 C9 75 */	bl __ml__5xVec3CFf
/* 8017E7B0 0017B890  7F A4 EB 78 */	mr r4, r29
/* 8017E7B4 0017B894  38 61 00 14 */	addi r3, r1, 0x14
/* 8017E7B8 0017B898  38 A1 00 08 */	addi r5, r1, 0x8
/* 8017E7BC 0017B89C  4B E9 6C 25 */	bl __pl__5xVec3CFRC5xVec3
/* 8017E7C0 0017B8A0  3B E1 00 68 */	addi r31, r1, 0x68
/* 8017E7C4 0017B8A4  38 81 00 14 */	addi r4, r1, 0x14
/* 8017E7C8 0017B8A8  7F E3 FB 78 */	mr r3, r31
/* 8017E7CC 0017B8AC  4B E8 CA 99 */	bl __as__5xVec3FRC5xVec3
/* 8017E7D0 0017B8B0  3B A0 00 00 */	li r29, 0x0
/* 8017E7D4 0017B8B4  48 00 00 34 */	b .L_8017E808
.L_8017E7D8:
/* 8017E7D8 0017B8B8  80 7C 00 0C */	lwz r3, 0xc(r28)
/* 8017E7DC 0017B8BC  48 00 06 A5 */	bl full__13xDecalEmitterCFv
/* 8017E7E0 0017B8C0  54 60 06 3F */	clrlwi. r0, r3, 24
/* 8017E7E4 0017B8C4  40 82 00 2C */	bne .L_8017E810
/* 8017E7E8 0017B8C8  80 7C 00 0C */	lwz r3, 0xc(r28)
/* 8017E7EC 0017B8CC  38 81 00 38 */	addi r4, r1, 0x38
/* 8017E7F0 0017B8D0  38 A0 FF FF */	li r5, -0x1
/* 8017E7F4 0017B8D4  4B FF DF DD */	bl emit__13xDecalEmitterFRC7xMat4x3i
/* 8017E7F8 0017B8D8  7F E3 FB 78 */	mr r3, r31
/* 8017E7FC 0017B8DC  38 81 00 2C */	addi r4, r1, 0x2c
/* 8017E800 0017B8E0  3B BD 00 01 */	addi r29, r29, 0x1
/* 8017E804 0017B8E4  4B E9 6C 41 */	bl __apl__5xVec3FRC5xVec3
.L_8017E808:
/* 8017E808 0017B8E8  7C 1D F0 00 */	cmpw r29, r30
/* 8017E80C 0017B8EC  41 80 FF CC */	blt .L_8017E7D8
.L_8017E810:
/* 8017E810 0017B8F0  E3 E1 00 A8 */	psq_l f31, 0xa8(r1), 0, qr0
/* 8017E814 0017B8F4  80 01 00 B4 */	lwz r0, 0xb4(r1)
/* 8017E818 0017B8F8  CB E1 00 A0 */	lfd f31, 0xa0(r1)
/* 8017E81C 0017B8FC  83 E1 00 9C */	lwz r31, 0x9c(r1)
/* 8017E820 0017B900  83 C1 00 98 */	lwz r30, 0x98(r1)
/* 8017E824 0017B904  83 A1 00 94 */	lwz r29, 0x94(r1)
/* 8017E828 0017B908  83 81 00 90 */	lwz r28, 0x90(r1)
/* 8017E82C 0017B90C  7C 08 03 A6 */	mtlr r0
/* 8017E830 0017B910  38 21 00 B0 */	addi r1, r1, 0xb0
/* 8017E834 0017B914  4E 80 00 20 */	blr
.endfn emit_decal_dist__17xLaserBoltEmitterFRQ217xLaserBoltEmitter11effect_dataRQ217xLaserBoltEmitter4boltfff

# 0x8017E838 - 0x8017EB60
.section .text, "ax", unique, 1
.balign 4

# xLaserBoltEmitter::debug_init(const char*)
.fn debug_init__17xLaserBoltEmitterFPCc, weak
/* 8017E838 0017B918  4E 80 00 20 */	blr
.endfn debug_init__17xLaserBoltEmitterFPCc

# xLaserBoltEmitter::emit_fx(xLaserBoltEmitter::effect_data&, xLaserBoltEmitter::bolt&, float, float, float)
.fn emit_fx__17xLaserBoltEmitterFRQ217xLaserBoltEmitter11effect_dataRQ217xLaserBoltEmitter4boltfff, weak
/* 8017E83C 0017B91C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8017E840 0017B920  7C 08 02 A6 */	mflr r0
/* 8017E844 0017B924  90 01 00 14 */	stw r0, 0x14(r1)
/* 8017E848 0017B928  80 04 00 00 */	lwz r0, 0x0(r4)
/* 8017E84C 0017B92C  2C 00 00 02 */	cmpwi r0, 0x2
/* 8017E850 0017B930  41 82 00 34 */	beq .L_8017E884
/* 8017E854 0017B934  40 80 00 14 */	bge .L_8017E868
/* 8017E858 0017B938  2C 00 00 00 */	cmpwi r0, 0x0
/* 8017E85C 0017B93C  41 82 00 18 */	beq .L_8017E874
/* 8017E860 0017B940  40 80 00 1C */	bge .L_8017E87C
/* 8017E864 0017B944  48 00 00 3C */	b .L_8017E8A0
.L_8017E868:
/* 8017E868 0017B948  2C 00 00 04 */	cmpwi r0, 0x4
/* 8017E86C 0017B94C  40 80 00 34 */	bge .L_8017E8A0
/* 8017E870 0017B950  48 00 00 1C */	b .L_8017E88C
.L_8017E874:
/* 8017E874 0017B954  4B FF FB 9D */	bl emit_particle__17xLaserBoltEmitterFRQ217xLaserBoltEmitter11effect_dataRQ217xLaserBoltEmitter4boltfff
/* 8017E878 0017B958  48 00 00 28 */	b .L_8017E8A0
.L_8017E87C:
/* 8017E87C 0017B95C  4B FF FD 79 */	bl emit_decal__17xLaserBoltEmitterFRQ217xLaserBoltEmitter11effect_dataRQ217xLaserBoltEmitter4boltfff
/* 8017E880 0017B960  48 00 00 20 */	b .L_8017E8A0
.L_8017E884:
/* 8017E884 0017B964  4B FF FE 29 */	bl emit_decal_dist__17xLaserBoltEmitterFRQ217xLaserBoltEmitter11effect_dataRQ217xLaserBoltEmitter4boltfff
/* 8017E888 0017B968  48 00 00 18 */	b .L_8017E8A0
.L_8017E88C:
/* 8017E88C 0017B96C  81 84 00 0C */	lwz r12, 0xc(r4)
/* 8017E890 0017B970  7C A3 2B 78 */	mr r3, r5
/* 8017E894 0017B974  80 84 00 10 */	lwz r4, 0x10(r4)
/* 8017E898 0017B978  7D 89 03 A6 */	mtctr r12
/* 8017E89C 0017B97C  4E 80 04 21 */	bctrl
.L_8017E8A0:
/* 8017E8A0 0017B980  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8017E8A4 0017B984  7C 08 03 A6 */	mtlr r0
/* 8017E8A8 0017B988  38 21 00 10 */	addi r1, r1, 0x10
/* 8017E8AC 0017B98C  4E 80 00 20 */	blr
.endfn emit_fx__17xLaserBoltEmitterFRQ217xLaserBoltEmitter11effect_dataRQ217xLaserBoltEmitter4boltfff

# xLaserBoltEmitter::perturb_dir(xVec3&, float)
.fn perturb_dir__17xLaserBoltEmitterFR5xVec3f, weak
/* 8017E8B0 0017B990  94 21 FF A0 */	stwu r1, -0x60(r1)
/* 8017E8B4 0017B994  7C 08 02 A6 */	mflr r0
/* 8017E8B8 0017B998  90 01 00 64 */	stw r0, 0x64(r1)
/* 8017E8BC 0017B99C  DB E1 00 50 */	stfd f31, 0x50(r1)
/* 8017E8C0 0017B9A0  F3 E1 00 58 */	psq_st f31, 0x58(r1), 0, qr0
/* 8017E8C4 0017B9A4  93 E1 00 4C */	stw r31, 0x4c(r1)
/* 8017E8C8 0017B9A8  3C 60 80 27 */	lis r3, "@621"@ha
/* 8017E8CC 0017B9AC  FF E0 08 90 */	fmr f31, f1
/* 8017E8D0 0017B9B0  38 A3 2C 40 */	addi r5, r3, "@621"@l
/* 8017E8D4 0017B9B4  7C 9F 23 78 */	mr r31, r4
/* 8017E8D8 0017B9B8  80 85 00 00 */	lwz r4, 0x0(r5)
/* 8017E8DC 0017B9BC  80 65 00 04 */	lwz r3, 0x4(r5)
/* 8017E8E0 0017B9C0  80 05 00 08 */	lwz r0, 0x8(r5)
/* 8017E8E4 0017B9C4  90 81 00 08 */	stw r4, 0x8(r1)
/* 8017E8E8 0017B9C8  90 61 00 0C */	stw r3, 0xc(r1)
/* 8017E8EC 0017B9CC  90 01 00 10 */	stw r0, 0x10(r1)
/* 8017E8F0 0017B9D0  4B EB 23 99 */	bl xurand__Fv
/* 8017E8F4 0017B9D4  C0 02 AE 2C */	lfs f0, "@965"@sda21(r2)
/* 8017E8F8 0017B9D8  EC 01 00 28 */	fsubs f0, f1, f0
/* 8017E8FC 0017B9DC  EC 1F 00 32 */	fmuls f0, f31, f0
/* 8017E900 0017B9E0  D0 01 00 08 */	stfs f0, 0x8(r1)
/* 8017E904 0017B9E4  4B EB 23 85 */	bl xurand__Fv
/* 8017E908 0017B9E8  C0 02 AE 2C */	lfs f0, "@965"@sda21(r2)
/* 8017E90C 0017B9EC  EC 01 00 28 */	fsubs f0, f1, f0
/* 8017E910 0017B9F0  EC 1F 00 32 */	fmuls f0, f31, f0
/* 8017E914 0017B9F4  D0 01 00 0C */	stfs f0, 0xc(r1)
/* 8017E918 0017B9F8  4B EB 23 71 */	bl xurand__Fv
/* 8017E91C 0017B9FC  C0 02 AE 2C */	lfs f0, "@965"@sda21(r2)
/* 8017E920 0017BA00  38 61 00 14 */	addi r3, r1, 0x14
/* 8017E924 0017BA04  38 81 00 08 */	addi r4, r1, 0x8
/* 8017E928 0017BA08  EC 01 00 28 */	fsubs f0, f1, f0
/* 8017E92C 0017BA0C  EC 1F 00 32 */	fmuls f0, f31, f0
/* 8017E930 0017BA10  D0 01 00 10 */	stfs f0, 0x10(r1)
/* 8017E934 0017BA14  4B EB 38 71 */	bl xMat3x3Euler__FP7xMat3x3PC5xVec3
/* 8017E938 0017BA18  7F E3 FB 78 */	mr r3, r31
/* 8017E93C 0017BA1C  7F E5 FB 78 */	mr r5, r31
/* 8017E940 0017BA20  38 81 00 14 */	addi r4, r1, 0x14
/* 8017E944 0017BA24  4B EB 41 19 */	bl xMat3x3LMulVec__FP5xVec3PC7xMat3x3PC5xVec3
/* 8017E948 0017BA28  E3 E1 00 58 */	psq_l f31, 0x58(r1), 0, qr0
/* 8017E94C 0017BA2C  80 01 00 64 */	lwz r0, 0x64(r1)
/* 8017E950 0017BA30  CB E1 00 50 */	lfd f31, 0x50(r1)
/* 8017E954 0017BA34  83 E1 00 4C */	lwz r31, 0x4c(r1)
/* 8017E958 0017BA38  7C 08 03 A6 */	mtlr r0
/* 8017E95C 0017BA3C  38 21 00 60 */	addi r1, r1, 0x60
/* 8017E960 0017BA40  4E 80 00 20 */	blr
.endfn perturb_dir__17xLaserBoltEmitterFR5xVec3f

# xLaserBoltEmitter::update(xLaserBoltEmitter::bolt&, float)
.fn update__17xLaserBoltEmitterFRQ217xLaserBoltEmitter4boltf, weak
/* 8017E964 0017BA44  C0 04 00 30 */	lfs f0, 0x30(r4)
/* 8017E968 0017BA48  D0 04 00 38 */	stfs f0, 0x38(r4)
/* 8017E96C 0017BA4C  C0 43 00 08 */	lfs f2, 0x8(r3)
/* 8017E970 0017BA50  C0 04 00 30 */	lfs f0, 0x30(r4)
/* 8017E974 0017BA54  EC 02 00 7A */	fmadds f0, f2, f1, f0
/* 8017E978 0017BA58  D0 04 00 30 */	stfs f0, 0x30(r4)
/* 8017E97C 0017BA5C  4E 80 00 20 */	blr
.endfn update__17xLaserBoltEmitterFRQ217xLaserBoltEmitter4boltf

# xLaserBoltEmitter::debug_update(float)
.fn debug_update__17xLaserBoltEmitterFf, weak
/* 8017E980 0017BA60  4E 80 00 20 */	blr
.endfn debug_update__17xLaserBoltEmitterFf

# xLaserBoltEmitter::flush_verts(RxObjSpace3DVertex*, int)
.fn flush_verts__17xLaserBoltEmitterFP18RxObjSpace3DVertexi, weak
/* 8017E984 0017BA64  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8017E988 0017BA68  7C 08 02 A6 */	mflr r0
/* 8017E98C 0017BA6C  7C 83 23 78 */	mr r3, r4
/* 8017E990 0017BA70  38 C0 00 19 */	li r6, 0x19
/* 8017E994 0017BA74  90 01 00 14 */	stw r0, 0x14(r1)
/* 8017E998 0017BA78  7C A0 2B 78 */	mr r0, r5
/* 8017E99C 0017BA7C  38 A0 00 00 */	li r5, 0x0
/* 8017E9A0 0017BA80  7C 04 03 78 */	mr r4, r0
/* 8017E9A4 0017BA84  48 0C D2 D1 */	bl RwIm3DTransform
/* 8017E9A8 0017BA88  38 60 00 03 */	li r3, 0x3
/* 8017E9AC 0017BA8C  48 0C D5 95 */	bl RwIm3DRenderPrimitive
/* 8017E9B0 0017BA90  48 0C D3 A5 */	bl RwIm3DEnd
/* 8017E9B4 0017BA94  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8017E9B8 0017BA98  7C 08 03 A6 */	mtlr r0
/* 8017E9BC 0017BA9C  38 21 00 10 */	addi r1, r1, 0x10
/* 8017E9C0 0017BAA0  4E 80 00 20 */	blr
.endfn flush_verts__17xLaserBoltEmitterFP18RxObjSpace3DVertexi

# xLaserBoltEmitter::debug_render()
.fn debug_render__17xLaserBoltEmitterFv, weak
/* 8017E9C4 0017BAA4  4E 80 00 20 */	blr
.endfn debug_render__17xLaserBoltEmitterFv

# xLaserBoltEmitter::debug_refresh_effects(xLaserBoltEmitter::fx_when_enum)
.fn debug_refresh_effects__17xLaserBoltEmitterFQ217xLaserBoltEmitter12fx_when_enum, weak
/* 8017E9C8 0017BAA8  4E 80 00 20 */	blr
.endfn debug_refresh_effects__17xLaserBoltEmitterFQ217xLaserBoltEmitter12fx_when_enum

# xLaserBoltEmitter::log_collide_statics(bool)
.fn log_collide_statics__17xLaserBoltEmitterFb, weak
/* 8017E9CC 0017BAAC  4E 80 00 20 */	blr
.endfn log_collide_statics__17xLaserBoltEmitterFb

# xLaserBoltEmitter::log_collide_dynamics(bool)
.fn log_collide_dynamics__17xLaserBoltEmitterFb, weak
/* 8017E9D0 0017BAB0  4E 80 00 20 */	blr
.endfn log_collide_dynamics__17xLaserBoltEmitterFb

# xLaserBoltEmitter::set_bolt_verts(RxObjSpace3DVertex*, const xVec3&, const xVec3&, unsigned char, const xVec3&)
.fn set_bolt_verts__17xLaserBoltEmitterFP18RxObjSpace3DVertexRC5xVec3RC5xVec3UcRC5xVec3, weak
/* 8017E9D4 0017BAB4  94 21 FF 70 */	stwu r1, -0x90(r1)
/* 8017E9D8 0017BAB8  7C 08 02 A6 */	mflr r0
/* 8017E9DC 0017BABC  90 01 00 94 */	stw r0, 0x94(r1)
/* 8017E9E0 0017BAC0  DB E1 00 80 */	stfd f31, 0x80(r1)
/* 8017E9E4 0017BAC4  F3 E1 00 88 */	psq_st f31, 0x88(r1), 0, qr0
/* 8017E9E8 0017BAC8  DB C1 00 70 */	stfd f30, 0x70(r1)
/* 8017E9EC 0017BACC  F3 C1 00 78 */	psq_st f30, 0x78(r1), 0, qr0
/* 8017E9F0 0017BAD0  DB A1 00 60 */	stfd f29, 0x60(r1)
/* 8017E9F4 0017BAD4  F3 A1 00 68 */	psq_st f29, 0x68(r1), 0, qr0
/* 8017E9F8 0017BAD8  DB 81 00 50 */	stfd f28, 0x50(r1)
/* 8017E9FC 0017BADC  F3 81 00 58 */	psq_st f28, 0x58(r1), 0, qr0
/* 8017EA00 0017BAE0  BF 41 00 38 */	stmw r26, 0x38(r1)
/* 8017EA04 0017BAE4  7C 7A 1B 78 */	mr r26, r3
/* 8017EA08 0017BAE8  7C BC 2B 78 */	mr r28, r5
/* 8017EA0C 0017BAEC  7D 1F 43 78 */	mr r31, r8
/* 8017EA10 0017BAF0  C3 E3 00 24 */	lfs f31, 0x24(r3)
/* 8017EA14 0017BAF4  7C 9B 23 78 */	mr r27, r4
/* 8017EA18 0017BAF8  C3 C3 00 28 */	lfs f30, 0x28(r3)
/* 8017EA1C 0017BAFC  C3 A3 00 2C */	lfs f29, 0x2c(r3)
/* 8017EA20 0017BB00  7C DD 33 78 */	mr r29, r6
/* 8017EA24 0017BB04  C3 83 00 30 */	lfs f28, 0x30(r3)
/* 8017EA28 0017BB08  7C FE 3B 78 */	mr r30, r7
/* 8017EA2C 0017BB0C  7F 84 E3 78 */	mr r4, r28
/* 8017EA30 0017BB10  7F E5 FB 78 */	mr r5, r31
/* 8017EA34 0017BB14  38 61 00 2C */	addi r3, r1, 0x2c
/* 8017EA38 0017BB18  4B E8 C7 95 */	bl __mi__5xVec3CFRC5xVec3
/* 8017EA3C 0017BB1C  FC 20 F8 90 */	fmr f1, f31
/* 8017EA40 0017BB20  7F 43 D3 78 */	mr r3, r26
/* 8017EA44 0017BB24  FC 40 F0 90 */	fmr f2, f30
/* 8017EA48 0017BB28  7F 64 DB 78 */	mr r4, r27
/* 8017EA4C 0017BB2C  7F C6 F3 78 */	mr r6, r30
/* 8017EA50 0017BB30  38 A1 00 2C */	addi r5, r1, 0x2c
/* 8017EA54 0017BB34  48 00 00 D5 */	bl set_vert__17xLaserBoltEmitterFR18RxObjSpace3DVertexRC5xVec3ffUc
/* 8017EA58 0017BB38  7F A4 EB 78 */	mr r4, r29
/* 8017EA5C 0017BB3C  7F E5 FB 78 */	mr r5, r31
/* 8017EA60 0017BB40  38 61 00 20 */	addi r3, r1, 0x20
/* 8017EA64 0017BB44  4B E8 C7 69 */	bl __mi__5xVec3CFRC5xVec3
/* 8017EA68 0017BB48  FC 20 E8 90 */	fmr f1, f29
/* 8017EA6C 0017BB4C  7F 43 D3 78 */	mr r3, r26
/* 8017EA70 0017BB50  FC 40 F0 90 */	fmr f2, f30
/* 8017EA74 0017BB54  7F C6 F3 78 */	mr r6, r30
/* 8017EA78 0017BB58  38 9B 00 24 */	addi r4, r27, 0x24
/* 8017EA7C 0017BB5C  38 A1 00 20 */	addi r5, r1, 0x20
/* 8017EA80 0017BB60  48 00 00 A9 */	bl set_vert__17xLaserBoltEmitterFR18RxObjSpace3DVertexRC5xVec3ffUc
/* 8017EA84 0017BB64  7F 84 E3 78 */	mr r4, r28
/* 8017EA88 0017BB68  7F E5 FB 78 */	mr r5, r31
/* 8017EA8C 0017BB6C  38 61 00 14 */	addi r3, r1, 0x14
/* 8017EA90 0017BB70  4B E9 69 51 */	bl __pl__5xVec3CFRC5xVec3
/* 8017EA94 0017BB74  FC 20 F8 90 */	fmr f1, f31
/* 8017EA98 0017BB78  7F 43 D3 78 */	mr r3, r26
/* 8017EA9C 0017BB7C  FC 40 E0 90 */	fmr f2, f28
/* 8017EAA0 0017BB80  7F C6 F3 78 */	mr r6, r30
/* 8017EAA4 0017BB84  38 9B 00 48 */	addi r4, r27, 0x48
/* 8017EAA8 0017BB88  38 A1 00 14 */	addi r5, r1, 0x14
/* 8017EAAC 0017BB8C  48 00 00 7D */	bl set_vert__17xLaserBoltEmitterFR18RxObjSpace3DVertexRC5xVec3ffUc
/* 8017EAB0 0017BB90  38 7B 00 6C */	addi r3, r27, 0x6c
/* 8017EAB4 0017BB94  38 9B 00 48 */	addi r4, r27, 0x48
/* 8017EAB8 0017BB98  4B F7 C6 C9 */	bl __as__18RxObjSpace3DVertexFRC18RxObjSpace3DVertex
/* 8017EABC 0017BB9C  38 7B 00 90 */	addi r3, r27, 0x90
/* 8017EAC0 0017BBA0  38 9B 00 24 */	addi r4, r27, 0x24
/* 8017EAC4 0017BBA4  4B F7 C6 BD */	bl __as__18RxObjSpace3DVertexFRC18RxObjSpace3DVertex
/* 8017EAC8 0017BBA8  7F A4 EB 78 */	mr r4, r29
/* 8017EACC 0017BBAC  7F E5 FB 78 */	mr r5, r31
/* 8017EAD0 0017BBB0  38 61 00 08 */	addi r3, r1, 0x8
/* 8017EAD4 0017BBB4  4B E9 69 0D */	bl __pl__5xVec3CFRC5xVec3
/* 8017EAD8 0017BBB8  FC 20 E8 90 */	fmr f1, f29
/* 8017EADC 0017BBBC  7F 43 D3 78 */	mr r3, r26
/* 8017EAE0 0017BBC0  FC 40 E0 90 */	fmr f2, f28
/* 8017EAE4 0017BBC4  7F C6 F3 78 */	mr r6, r30
/* 8017EAE8 0017BBC8  38 9B 00 B4 */	addi r4, r27, 0xb4
/* 8017EAEC 0017BBCC  38 A1 00 08 */	addi r5, r1, 0x8
/* 8017EAF0 0017BBD0  48 00 00 39 */	bl set_vert__17xLaserBoltEmitterFR18RxObjSpace3DVertexRC5xVec3ffUc
/* 8017EAF4 0017BBD4  E3 E1 00 88 */	psq_l f31, 0x88(r1), 0, qr0
/* 8017EAF8 0017BBD8  CB E1 00 80 */	lfd f31, 0x80(r1)
/* 8017EAFC 0017BBDC  E3 C1 00 78 */	psq_l f30, 0x78(r1), 0, qr0
/* 8017EB00 0017BBE0  CB C1 00 70 */	lfd f30, 0x70(r1)
/* 8017EB04 0017BBE4  E3 A1 00 68 */	psq_l f29, 0x68(r1), 0, qr0
/* 8017EB08 0017BBE8  CB A1 00 60 */	lfd f29, 0x60(r1)
/* 8017EB0C 0017BBEC  E3 81 00 58 */	psq_l f28, 0x58(r1), 0, qr0
/* 8017EB10 0017BBF0  CB 81 00 50 */	lfd f28, 0x50(r1)
/* 8017EB14 0017BBF4  BB 41 00 38 */	lmw r26, 0x38(r1)
/* 8017EB18 0017BBF8  80 01 00 94 */	lwz r0, 0x94(r1)
/* 8017EB1C 0017BBFC  7C 08 03 A6 */	mtlr r0
/* 8017EB20 0017BC00  38 21 00 90 */	addi r1, r1, 0x90
/* 8017EB24 0017BC04  4E 80 00 20 */	blr
.endfn set_bolt_verts__17xLaserBoltEmitterFP18RxObjSpace3DVertexRC5xVec3RC5xVec3UcRC5xVec3

# xLaserBoltEmitter::set_vert(RxObjSpace3DVertex&, const xVec3&, float, float, unsigned char)
.fn set_vert__17xLaserBoltEmitterFR18RxObjSpace3DVertexRC5xVec3ffUc, weak
/* 8017EB28 0017BC08  C0 05 00 00 */	lfs f0, 0x0(r5)
/* 8017EB2C 0017BC0C  38 00 00 FF */	li r0, 0xff
/* 8017EB30 0017BC10  C0 65 00 04 */	lfs f3, 0x4(r5)
/* 8017EB34 0017BC14  D0 04 00 00 */	stfs f0, 0x0(r4)
/* 8017EB38 0017BC18  C0 05 00 08 */	lfs f0, 0x8(r5)
/* 8017EB3C 0017BC1C  D0 64 00 04 */	stfs f3, 0x4(r4)
/* 8017EB40 0017BC20  D0 04 00 08 */	stfs f0, 0x8(r4)
/* 8017EB44 0017BC24  D0 24 00 1C */	stfs f1, 0x1c(r4)
/* 8017EB48 0017BC28  D0 44 00 20 */	stfs f2, 0x20(r4)
/* 8017EB4C 0017BC2C  98 04 00 18 */	stb r0, 0x18(r4)
/* 8017EB50 0017BC30  98 04 00 19 */	stb r0, 0x19(r4)
/* 8017EB54 0017BC34  98 04 00 1A */	stb r0, 0x1a(r4)
/* 8017EB58 0017BC38  98 C4 00 1B */	stb r6, 0x1b(r4)
/* 8017EB5C 0017BC3C  4E 80 00 20 */	blr
.endfn set_vert__17xLaserBoltEmitterFR18RxObjSpace3DVertexRC5xVec3ffUc

# 0x8017EB60 - 0x8017EE80
.section .text, "ax", unique, 2
.balign 4

# static_queue<xLaserBoltEmitter::bolt>::init(unsigned long)
.fn "init__40static_queue<Q217xLaserBoltEmitter4bolt>FUl", weak
/* 8017EB60 0017BC40  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8017EB64 0017BC44  7C 08 02 A6 */	mflr r0
/* 8017EB68 0017BC48  90 01 00 14 */	stw r0, 0x14(r1)
/* 8017EB6C 0017BC4C  38 04 00 01 */	addi r0, r4, 0x1
/* 8017EB70 0017BC50  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8017EB74 0017BC54  7C 7F 1B 78 */	mr r31, r3
/* 8017EB78 0017BC58  38 60 00 00 */	li r3, 0x0
/* 8017EB7C 0017BC5C  48 00 00 0C */	b .L_8017EB88
.L_8017EB80:
/* 8017EB80 0017BC60  54 00 F8 7E */	srwi r0, r0, 1
/* 8017EB84 0017BC64  38 63 00 01 */	addi r3, r3, 0x1
.L_8017EB88:
/* 8017EB88 0017BC68  28 00 00 01 */	cmplwi r0, 0x1
/* 8017EB8C 0017BC6C  41 81 FF F4 */	bgt .L_8017EB80
/* 8017EB90 0017BC70  38 00 00 01 */	li r0, 0x1
/* 8017EB94 0017BC74  38 A0 00 00 */	li r5, 0x0
/* 8017EB98 0017BC78  7C 00 18 30 */	slw r0, r0, r3
/* 8017EB9C 0017BC7C  90 1F 00 08 */	stw r0, 0x8(r31)
/* 8017EBA0 0017BC80  80 7F 00 08 */	lwz r3, 0x8(r31)
/* 8017EBA4 0017BC84  38 03 FF FF */	addi r0, r3, -0x1
/* 8017EBA8 0017BC88  90 1F 00 0C */	stw r0, 0xc(r31)
/* 8017EBAC 0017BC8C  80 1F 00 08 */	lwz r0, 0x8(r31)
/* 8017EBB0 0017BC90  80 6D 89 E0 */	lwz r3, gActiveHeap@sda21(r13)
/* 8017EBB4 0017BC94  1C 80 00 4C */	mulli r4, r0, 0x4c
/* 8017EBB8 0017BC98  4B EB 4D 89 */	bl xMemAlloc__FUiUii
/* 8017EBBC 0017BC9C  90 7F 00 10 */	stw r3, 0x10(r31)
/* 8017EBC0 0017BCA0  7F E3 FB 78 */	mr r3, r31
/* 8017EBC4 0017BCA4  48 00 00 19 */	bl "clear__40static_queue<Q217xLaserBoltEmitter4bolt>Fv"
/* 8017EBC8 0017BCA8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8017EBCC 0017BCAC  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8017EBD0 0017BCB0  7C 08 03 A6 */	mtlr r0
/* 8017EBD4 0017BCB4  38 21 00 10 */	addi r1, r1, 0x10
/* 8017EBD8 0017BCB8  4E 80 00 20 */	blr
.endfn "init__40static_queue<Q217xLaserBoltEmitter4bolt>FUl"

# static_queue<xLaserBoltEmitter::bolt>::clear()
.fn "clear__40static_queue<Q217xLaserBoltEmitter4bolt>Fv", weak
/* 8017EBDC 0017BCBC  38 00 00 00 */	li r0, 0x0
/* 8017EBE0 0017BCC0  90 03 00 04 */	stw r0, 0x4(r3)
/* 8017EBE4 0017BCC4  90 03 00 00 */	stw r0, 0x0(r3)
/* 8017EBE8 0017BCC8  4E 80 00 20 */	blr
.endfn "clear__40static_queue<Q217xLaserBoltEmitter4bolt>Fv"

# static_queue<xLaserBoltEmitter::bolt>::iterator::operator!=(const static_queue<xLaserBoltEmitter::bolt>::iterator&) const
.fn "__ne__Q240static_queue<Q217xLaserBoltEmitter4bolt>8iteratorCFRCQ240static_queue<Q217xLaserBoltEmitter4bolt>8iterator", weak
/* 8017EBEC 0017BCCC  80 A3 00 00 */	lwz r5, 0x0(r3)
/* 8017EBF0 0017BCD0  80 04 00 00 */	lwz r0, 0x0(r4)
/* 8017EBF4 0017BCD4  7C 65 00 50 */	subf r3, r5, r0
/* 8017EBF8 0017BCD8  7C 00 28 50 */	subf r0, r0, r5
/* 8017EBFC 0017BCDC  7C 60 03 78 */	or r0, r3, r0
/* 8017EC00 0017BCE0  54 03 0F FE */	srwi r3, r0, 31
/* 8017EC04 0017BCE4  4E 80 00 20 */	blr
.endfn "__ne__Q240static_queue<Q217xLaserBoltEmitter4bolt>8iteratorCFRCQ240static_queue<Q217xLaserBoltEmitter4bolt>8iterator"

# static_queue<xLaserBoltEmitter::bolt>::end() const
.fn "end__40static_queue<Q217xLaserBoltEmitter4bolt>CFv", weak
/* 8017EC08 0017BCE8  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8017EC0C 0017BCEC  7C 08 02 A6 */	mflr r0
/* 8017EC10 0017BCF0  80 83 00 00 */	lwz r4, 0x0(r3)
/* 8017EC14 0017BCF4  90 01 00 14 */	stw r0, 0x14(r1)
/* 8017EC18 0017BCF8  80 03 00 04 */	lwz r0, 0x4(r3)
/* 8017EC1C 0017BCFC  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8017EC20 0017BD00  7C 7F 1B 78 */	mr r31, r3
/* 8017EC24 0017BD04  7C 84 02 14 */	add r4, r4, r0
/* 8017EC28 0017BD08  48 00 00 45 */	bl "mod_max_size__40static_queue<Q217xLaserBoltEmitter4bolt>CFUl"
/* 8017EC2C 0017BD0C  7C 64 1B 78 */	mr r4, r3
/* 8017EC30 0017BD10  7F E3 FB 78 */	mr r3, r31
/* 8017EC34 0017BD14  48 00 00 19 */	bl "create_iterator__40static_queue<Q217xLaserBoltEmitter4bolt>CFUl"
/* 8017EC38 0017BD18  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8017EC3C 0017BD1C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8017EC40 0017BD20  7C 08 03 A6 */	mtlr r0
/* 8017EC44 0017BD24  38 21 00 10 */	addi r1, r1, 0x10
/* 8017EC48 0017BD28  4E 80 00 20 */	blr
.endfn "end__40static_queue<Q217xLaserBoltEmitter4bolt>CFv"

# static_queue<xLaserBoltEmitter::bolt>::create_iterator(unsigned long) const
.fn "create_iterator__40static_queue<Q217xLaserBoltEmitter4bolt>CFUl", weak
/* 8017EC4C 0017BD2C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8017EC50 0017BD30  7C 60 1B 78 */	mr r0, r3
/* 8017EC54 0017BD34  7C 83 23 78 */	mr r3, r4
/* 8017EC58 0017BD38  90 81 00 08 */	stw r4, 0x8(r1)
/* 8017EC5C 0017BD3C  7C 04 03 78 */	mr r4, r0
/* 8017EC60 0017BD40  90 01 00 0C */	stw r0, 0xc(r1)
/* 8017EC64 0017BD44  38 21 00 10 */	addi r1, r1, 0x10
/* 8017EC68 0017BD48  4E 80 00 20 */	blr
.endfn "create_iterator__40static_queue<Q217xLaserBoltEmitter4bolt>CFUl"

# static_queue<xLaserBoltEmitter::bolt>::mod_max_size(unsigned long) const
.fn "mod_max_size__40static_queue<Q217xLaserBoltEmitter4bolt>CFUl", weak
/* 8017EC6C 0017BD4C  80 03 00 0C */	lwz r0, 0xc(r3)
/* 8017EC70 0017BD50  7C 83 00 38 */	and r3, r4, r0
/* 8017EC74 0017BD54  4E 80 00 20 */	blr
.endfn "mod_max_size__40static_queue<Q217xLaserBoltEmitter4bolt>CFUl"

# static_queue<xLaserBoltEmitter::bolt>::iterator::operator++()
.fn "__pp__Q240static_queue<Q217xLaserBoltEmitter4bolt>8iteratorFv", weak
/* 8017EC78 0017BD58  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8017EC7C 0017BD5C  7C 08 02 A6 */	mflr r0
/* 8017EC80 0017BD60  38 80 00 01 */	li r4, 0x1
/* 8017EC84 0017BD64  90 01 00 14 */	stw r0, 0x14(r1)
/* 8017EC88 0017BD68  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8017EC8C 0017BD6C  7C 7F 1B 78 */	mr r31, r3
/* 8017EC90 0017BD70  48 00 00 1D */	bl "__apl__Q240static_queue<Q217xLaserBoltEmitter4bolt>8iteratorFi"
/* 8017EC94 0017BD74  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8017EC98 0017BD78  7F E3 FB 78 */	mr r3, r31
/* 8017EC9C 0017BD7C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8017ECA0 0017BD80  7C 08 03 A6 */	mtlr r0
/* 8017ECA4 0017BD84  38 21 00 10 */	addi r1, r1, 0x10
/* 8017ECA8 0017BD88  4E 80 00 20 */	blr
.endfn "__pp__Q240static_queue<Q217xLaserBoltEmitter4bolt>8iteratorFv"

# static_queue<xLaserBoltEmitter::bolt>::iterator::operator+=(int)
.fn "__apl__Q240static_queue<Q217xLaserBoltEmitter4bolt>8iteratorFi", weak
/* 8017ECAC 0017BD8C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8017ECB0 0017BD90  7C 08 02 A6 */	mflr r0
/* 8017ECB4 0017BD94  90 01 00 14 */	stw r0, 0x14(r1)
/* 8017ECB8 0017BD98  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8017ECBC 0017BD9C  7C 7F 1B 78 */	mr r31, r3
/* 8017ECC0 0017BDA0  80 03 00 00 */	lwz r0, 0x0(r3)
/* 8017ECC4 0017BDA4  80 63 00 04 */	lwz r3, 0x4(r3)
/* 8017ECC8 0017BDA8  7C 80 22 14 */	add r4, r0, r4
/* 8017ECCC 0017BDAC  4B FF FF A1 */	bl "mod_max_size__40static_queue<Q217xLaserBoltEmitter4bolt>CFUl"
/* 8017ECD0 0017BDB0  90 7F 00 00 */	stw r3, 0x0(r31)
/* 8017ECD4 0017BDB4  7F E3 FB 78 */	mr r3, r31
/* 8017ECD8 0017BDB8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8017ECDC 0017BDBC  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8017ECE0 0017BDC0  7C 08 03 A6 */	mtlr r0
/* 8017ECE4 0017BDC4  38 21 00 10 */	addi r1, r1, 0x10
/* 8017ECE8 0017BDC8  4E 80 00 20 */	blr
.endfn "__apl__Q240static_queue<Q217xLaserBoltEmitter4bolt>8iteratorFi"

# static_queue<xLaserBoltEmitter::bolt>::iterator::operator*() const
.fn "__ml__Q240static_queue<Q217xLaserBoltEmitter4bolt>8iteratorCFv", weak
/* 8017ECEC 0017BDCC  80 03 00 00 */	lwz r0, 0x0(r3)
/* 8017ECF0 0017BDD0  80 63 00 04 */	lwz r3, 0x4(r3)
/* 8017ECF4 0017BDD4  1C 00 00 4C */	mulli r0, r0, 0x4c
/* 8017ECF8 0017BDD8  80 63 00 10 */	lwz r3, 0x10(r3)
/* 8017ECFC 0017BDDC  7C 63 02 14 */	add r3, r3, r0
/* 8017ED00 0017BDE0  4E 80 00 20 */	blr
.endfn "__ml__Q240static_queue<Q217xLaserBoltEmitter4bolt>8iteratorCFv"

# static_queue<xLaserBoltEmitter::bolt>::begin() const
.fn "begin__40static_queue<Q217xLaserBoltEmitter4bolt>CFv", weak
/* 8017ED04 0017BDE4  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8017ED08 0017BDE8  7C 08 02 A6 */	mflr r0
/* 8017ED0C 0017BDEC  80 83 00 00 */	lwz r4, 0x0(r3)
/* 8017ED10 0017BDF0  90 01 00 14 */	stw r0, 0x14(r1)
/* 8017ED14 0017BDF4  4B FF FF 39 */	bl "create_iterator__40static_queue<Q217xLaserBoltEmitter4bolt>CFUl"
/* 8017ED18 0017BDF8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8017ED1C 0017BDFC  7C 08 03 A6 */	mtlr r0
/* 8017ED20 0017BE00  38 21 00 10 */	addi r1, r1, 0x10
/* 8017ED24 0017BE04  4E 80 00 20 */	blr
.endfn "begin__40static_queue<Q217xLaserBoltEmitter4bolt>CFv"

# static_queue<xLaserBoltEmitter::bolt>::push_front()
.fn "push_front__40static_queue<Q217xLaserBoltEmitter4bolt>Fv", weak
/* 8017ED28 0017BE08  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8017ED2C 0017BE0C  7C 08 02 A6 */	mflr r0
/* 8017ED30 0017BE10  90 01 00 14 */	stw r0, 0x14(r1)
/* 8017ED34 0017BE14  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8017ED38 0017BE18  7C 7F 1B 78 */	mr r31, r3
/* 8017ED3C 0017BE1C  80 83 00 04 */	lwz r4, 0x4(r3)
/* 8017ED40 0017BE20  38 04 00 01 */	addi r0, r4, 0x1
/* 8017ED44 0017BE24  90 03 00 04 */	stw r0, 0x4(r3)
/* 8017ED48 0017BE28  80 83 00 00 */	lwz r4, 0x0(r3)
/* 8017ED4C 0017BE2C  38 84 FF FF */	addi r4, r4, -0x1
/* 8017ED50 0017BE30  4B FF FF 1D */	bl "mod_max_size__40static_queue<Q217xLaserBoltEmitter4bolt>CFUl"
/* 8017ED54 0017BE34  90 7F 00 00 */	stw r3, 0x0(r31)
/* 8017ED58 0017BE38  7F E3 FB 78 */	mr r3, r31
/* 8017ED5C 0017BE3C  48 00 00 19 */	bl "front__40static_queue<Q217xLaserBoltEmitter4bolt>Fv"
/* 8017ED60 0017BE40  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8017ED64 0017BE44  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8017ED68 0017BE48  7C 08 03 A6 */	mtlr r0
/* 8017ED6C 0017BE4C  38 21 00 10 */	addi r1, r1, 0x10
/* 8017ED70 0017BE50  4E 80 00 20 */	blr
.endfn "push_front__40static_queue<Q217xLaserBoltEmitter4bolt>Fv"

# static_queue<xLaserBoltEmitter::bolt>::front()
.fn "front__40static_queue<Q217xLaserBoltEmitter4bolt>Fv", weak
/* 8017ED74 0017BE54  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8017ED78 0017BE58  7C 08 02 A6 */	mflr r0
/* 8017ED7C 0017BE5C  90 01 00 14 */	stw r0, 0x14(r1)
/* 8017ED80 0017BE60  4B FF FF 85 */	bl "begin__40static_queue<Q217xLaserBoltEmitter4bolt>CFv"
/* 8017ED84 0017BE64  90 61 00 08 */	stw r3, 0x8(r1)
/* 8017ED88 0017BE68  38 61 00 08 */	addi r3, r1, 0x8
/* 8017ED8C 0017BE6C  90 81 00 0C */	stw r4, 0xc(r1)
/* 8017ED90 0017BE70  4B FF FF 5D */	bl "__ml__Q240static_queue<Q217xLaserBoltEmitter4bolt>8iteratorCFv"
/* 8017ED94 0017BE74  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8017ED98 0017BE78  7C 08 03 A6 */	mtlr r0
/* 8017ED9C 0017BE7C  38 21 00 10 */	addi r1, r1, 0x10
/* 8017EDA0 0017BE80  4E 80 00 20 */	blr
.endfn "front__40static_queue<Q217xLaserBoltEmitter4bolt>Fv"

# static_queue<xLaserBoltEmitter::bolt>::pop_back()
.fn "pop_back__40static_queue<Q217xLaserBoltEmitter4bolt>Fv", weak
/* 8017EDA4 0017BE84  80 83 00 04 */	lwz r4, 0x4(r3)
/* 8017EDA8 0017BE88  38 04 FF FF */	addi r0, r4, -0x1
/* 8017EDAC 0017BE8C  90 03 00 04 */	stw r0, 0x4(r3)
/* 8017EDB0 0017BE90  4E 80 00 20 */	blr
.endfn "pop_back__40static_queue<Q217xLaserBoltEmitter4bolt>Fv"

# static_queue<xLaserBoltEmitter::bolt>::full() const
.fn "full__40static_queue<Q217xLaserBoltEmitter4bolt>CFv", weak
/* 8017EDB4 0017BE94  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8017EDB8 0017BE98  7C 08 02 A6 */	mflr r0
/* 8017EDBC 0017BE9C  90 01 00 14 */	stw r0, 0x14(r1)
/* 8017EDC0 0017BEA0  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8017EDC4 0017BEA4  93 C1 00 08 */	stw r30, 0x8(r1)
/* 8017EDC8 0017BEA8  7C 7E 1B 78 */	mr r30, r3
/* 8017EDCC 0017BEAC  48 00 00 35 */	bl "max_size__40static_queue<Q217xLaserBoltEmitter4bolt>CFv"
/* 8017EDD0 0017BEB0  7C 7F 1B 78 */	mr r31, r3
/* 8017EDD4 0017BEB4  7F C3 F3 78 */	mr r3, r30
/* 8017EDD8 0017BEB8  4B FF 14 E5 */	bl "size__40static_queue<Q217xLaserBoltEmitter4bolt>CFv"
/* 8017EDDC 0017BEBC  7C 03 F8 50 */	subf r0, r3, r31
/* 8017EDE0 0017BEC0  7C 00 00 34 */	cntlzw r0, r0
/* 8017EDE4 0017BEC4  54 03 D9 7E */	srwi r3, r0, 5
/* 8017EDE8 0017BEC8  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8017EDEC 0017BECC  83 C1 00 08 */	lwz r30, 0x8(r1)
/* 8017EDF0 0017BED0  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8017EDF4 0017BED4  7C 08 03 A6 */	mtlr r0
/* 8017EDF8 0017BED8  38 21 00 10 */	addi r1, r1, 0x10
/* 8017EDFC 0017BEDC  4E 80 00 20 */	blr
.endfn "full__40static_queue<Q217xLaserBoltEmitter4bolt>CFv"

# static_queue<xLaserBoltEmitter::bolt>::max_size() const
.fn "max_size__40static_queue<Q217xLaserBoltEmitter4bolt>CFv", weak
/* 8017EE00 0017BEE0  80 63 00 08 */	lwz r3, 0x8(r3)
/* 8017EE04 0017BEE4  38 63 FF FF */	addi r3, r3, -0x1
/* 8017EE08 0017BEE8  4E 80 00 20 */	blr
.endfn "max_size__40static_queue<Q217xLaserBoltEmitter4bolt>CFv"

# static_queue<xLaserBoltEmitter::bolt>::erase(const static_queue<xLaserBoltEmitter::bolt>::iterator&, const static_queue<xLaserBoltEmitter::bolt>::iterator&)
.fn "erase__40static_queue<Q217xLaserBoltEmitter4bolt>FRCQ240static_queue<Q217xLaserBoltEmitter4bolt>8iteratorRCQ240static_queue<Q217xLaserBoltEmitter4bolt>8iterator", weak
/* 8017EE0C 0017BEEC  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8017EE10 0017BEF0  7C 08 02 A6 */	mflr r0
/* 8017EE14 0017BEF4  80 84 00 00 */	lwz r4, 0x0(r4)
/* 8017EE18 0017BEF8  90 01 00 14 */	stw r0, 0x14(r1)
/* 8017EE1C 0017BEFC  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8017EE20 0017BF00  7C 7F 1B 78 */	mr r31, r3
/* 8017EE24 0017BF04  80 C3 00 00 */	lwz r6, 0x0(r3)
/* 8017EE28 0017BF08  7C 04 30 40 */	cmplw r4, r6
/* 8017EE2C 0017BF0C  40 82 00 28 */	bne .L_8017EE54
/* 8017EE30 0017BF10  80 9F 00 04 */	lwz r4, 0x4(r31)
/* 8017EE34 0017BF14  80 05 00 00 */	lwz r0, 0x0(r5)
/* 8017EE38 0017BF18  7C 86 22 14 */	add r4, r6, r4
/* 8017EE3C 0017BF1C  90 1F 00 00 */	stw r0, 0x0(r31)
/* 8017EE40 0017BF20  80 1F 00 00 */	lwz r0, 0x0(r31)
/* 8017EE44 0017BF24  7C 80 20 50 */	subf r4, r0, r4
/* 8017EE48 0017BF28  4B FF FE 25 */	bl "mod_max_size__40static_queue<Q217xLaserBoltEmitter4bolt>CFUl"
/* 8017EE4C 0017BF2C  90 7F 00 04 */	stw r3, 0x4(r31)
/* 8017EE50 0017BF30  48 00 00 1C */	b .L_8017EE6C
.L_8017EE54:
/* 8017EE54 0017BF34  80 05 00 00 */	lwz r0, 0x0(r5)
/* 8017EE58 0017BF38  7C 84 00 50 */	subf r4, r4, r0
/* 8017EE5C 0017BF3C  4B FF FE 11 */	bl "mod_max_size__40static_queue<Q217xLaserBoltEmitter4bolt>CFUl"
/* 8017EE60 0017BF40  80 1F 00 04 */	lwz r0, 0x4(r31)
/* 8017EE64 0017BF44  7C 03 00 50 */	subf r0, r3, r0
/* 8017EE68 0017BF48  90 1F 00 04 */	stw r0, 0x4(r31)
.L_8017EE6C:
/* 8017EE6C 0017BF4C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8017EE70 0017BF50  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8017EE74 0017BF54  7C 08 03 A6 */	mtlr r0
/* 8017EE78 0017BF58  38 21 00 10 */	addi r1, r1, 0x10
/* 8017EE7C 0017BF5C  4E 80 00 20 */	blr
.endfn "erase__40static_queue<Q217xLaserBoltEmitter4bolt>FRCQ240static_queue<Q217xLaserBoltEmitter4bolt>8iteratorRCQ240static_queue<Q217xLaserBoltEmitter4bolt>8iterator"

# 0x8017EE80 - 0x8017EEA4
.section .text, "ax", unique, 3
.balign 4

# xDecalEmitter::full() const
.fn full__13xDecalEmitterCFv, weak
/* 8017EE80 0017BF60  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8017EE84 0017BF64  7C 08 02 A6 */	mflr r0
/* 8017EE88 0017BF68  38 63 00 44 */	addi r3, r3, 0x44
/* 8017EE8C 0017BF6C  90 01 00 14 */	stw r0, 0x14(r1)
/* 8017EE90 0017BF70  4B FF E3 A1 */	bl "full__41static_queue<Q213xDecalEmitter9unit_data>CFv"
/* 8017EE94 0017BF74  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8017EE98 0017BF78  7C 08 03 A6 */	mtlr r0
/* 8017EE9C 0017BF7C  38 21 00 10 */	addi r1, r1, 0x10
/* 8017EEA0 0017BF80  4E 80 00 20 */	blr
.endfn full__13xDecalEmitterCFv

# 0x80272C40 - 0x80272C50
.rodata
.balign 8

.obj "@621", local
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
.endobj "@621"
	.4byte 0x00000000

# 0x803CF7A0 - 0x803CF7C8
.section .sdata2, "a"
.balign 8

.obj "@899", local
	.4byte 0x3C888889
.endobj "@899"

.obj "@930", local
	.4byte 0x00000000
.endobj "@930"

.obj "@931", local
	.4byte 0x437F0000
.endobj "@931"

.obj "@965", local
	.4byte 0x3F000000
.endobj "@965"

.obj "@1160", local
	.4byte 0xB727C5AC
.endobj "@1160"

.obj "@1161", local
	.4byte 0x3727C5AC
.endobj "@1161"

.obj "@1162", local
	.4byte 0x3F800000
.endobj "@1162"

.obj "@1163", local
	.4byte 0x437F8000
.endobj "@1163"

.obj "@1361", local
	.4byte 0x43300000
	.4byte 0x80000000
.endobj "@1361"
