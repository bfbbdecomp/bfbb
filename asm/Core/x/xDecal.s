.include "macros.inc"

.section .text  # 0x8017C420 - 0x8017D544

.global xDecal.register_emitter__20_unnamed_xDecal_cpp_FP13xDecalEmitter
xDecal.register_emitter__20_unnamed_xDecal_cpp_FP13xDecalEmitter:
/* 8017C420 00179220  80 0D 97 B0 */	lwz r0, lbl_active_emitters_size__20_unnamed_xDecal_cpp_-_SDA_BASE_(r13)
/* 8017C424 00179224  28 00 00 20 */	cmplwi r0, 0x20
/* 8017C428 00179228  4C 80 00 20 */	bgelr 
/* 8017C42C 0017922C  3C 80 80 33 */	lis r4, lbl_active_emitters__20_unnamed_xDecal_cpp_@ha
/* 8017C430 00179230  54 00 10 3A */	slwi r0, r0, 2
/* 8017C434 00179234  38 84 B4 48 */	addi r4, r4, lbl_active_emitters__20_unnamed_xDecal_cpp_@l
/* 8017C438 00179238  7C 64 01 2E */	stwx r3, r4, r0
/* 8017C43C 0017923C  80 6D 97 B0 */	lwz r3, lbl_active_emitters_size__20_unnamed_xDecal_cpp_-_SDA_BASE_(r13)
/* 8017C440 00179240  38 03 00 01 */	addi r0, r3, 1
/* 8017C444 00179244  90 0D 97 B0 */	stw r0, lbl_active_emitters_size__20_unnamed_xDecal_cpp_-_SDA_BASE_(r13)
/* 8017C448 00179248  4E 80 00 20 */	blr 

.global xDecalInit__Fv
xDecalInit__Fv:
/* 8017C44C 0017924C  38 00 00 00 */	li r0, 0
/* 8017C450 00179250  90 0D 97 B0 */	stw r0, lbl_active_emitters_size__20_unnamed_xDecal_cpp_-_SDA_BASE_(r13)
/* 8017C454 00179254  4E 80 00 20 */	blr 

.global xDecalUpdate__Ff
xDecalUpdate__Ff:
/* 8017C458 00179258  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 8017C45C 0017925C  7C 08 02 A6 */	mflr r0
/* 8017C460 00179260  3C 60 80 33 */	lis r3, lbl_active_emitters__20_unnamed_xDecal_cpp_@ha
/* 8017C464 00179264  90 01 00 24 */	stw r0, 0x24(r1)
/* 8017C468 00179268  DB E1 00 18 */	stfd f31, 0x18(r1)
/* 8017C46C 0017926C  FF E0 08 90 */	fmr f31, f1
/* 8017C470 00179270  93 E1 00 14 */	stw r31, 0x14(r1)
/* 8017C474 00179274  3B E3 B4 48 */	addi r31, r3, lbl_active_emitters__20_unnamed_xDecal_cpp_@l
/* 8017C478 00179278  93 C1 00 10 */	stw r30, 0x10(r1)
/* 8017C47C 0017927C  3B C0 00 00 */	li r30, 0
/* 8017C480 00179280  48 00 00 28 */	b lbl_8017C4A8
lbl_8017C484:
/* 8017C484 00179284  80 7F 00 00 */	lwz r3, 0(r31)
/* 8017C488 00179288  48 00 0B 89 */	bl need_update__13xDecalEmitterCFv
/* 8017C48C 0017928C  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8017C490 00179290  41 82 00 10 */	beq lbl_8017C4A0
/* 8017C494 00179294  FC 20 F8 90 */	fmr f1, f31
/* 8017C498 00179298  80 7F 00 00 */	lwz r3, 0(r31)
/* 8017C49C 0017929C  48 00 06 1D */	bl update__13xDecalEmitterFf
lbl_8017C4A0:
/* 8017C4A0 001792A0  3B FF 00 04 */	addi r31, r31, 4
/* 8017C4A4 001792A4  3B DE 00 01 */	addi r30, r30, 1
lbl_8017C4A8:
/* 8017C4A8 001792A8  80 0D 97 B0 */	lwz r0, lbl_active_emitters_size__20_unnamed_xDecal_cpp_-_SDA_BASE_(r13)
/* 8017C4AC 001792AC  7C 1E 00 40 */	cmplw r30, r0
/* 8017C4B0 001792B0  41 80 FF D4 */	blt lbl_8017C484
/* 8017C4B4 001792B4  80 01 00 24 */	lwz r0, 0x24(r1)
/* 8017C4B8 001792B8  CB E1 00 18 */	lfd f31, 0x18(r1)
/* 8017C4BC 001792BC  83 E1 00 14 */	lwz r31, 0x14(r1)
/* 8017C4C0 001792C0  83 C1 00 10 */	lwz r30, 0x10(r1)
/* 8017C4C4 001792C4  7C 08 03 A6 */	mtlr r0
/* 8017C4C8 001792C8  38 21 00 20 */	addi r1, r1, 0x20
/* 8017C4CC 001792CC  4E 80 00 20 */	blr 

.global init__13xDecalEmitterFiPCc
init__13xDecalEmitterFiPCc:
/* 8017C4D0 001792D0  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 8017C4D4 001792D4  7C 08 02 A6 */	mflr r0
/* 8017C4D8 001792D8  90 01 00 24 */	stw r0, 0x24(r1)
/* 8017C4DC 001792DC  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 8017C4E0 001792E0  7C BF 2B 78 */	mr r31, r5
/* 8017C4E4 001792E4  93 C1 00 18 */	stw r30, 0x18(r1)
/* 8017C4E8 001792E8  7C 9E 23 78 */	mr r30, r4
/* 8017C4EC 001792EC  93 A1 00 14 */	stw r29, 0x14(r1)
/* 8017C4F0 001792F0  7C 7D 1B 78 */	mr r29, r3
/* 8017C4F4 001792F4  4B FF FF 2D */	bl xDecal.register_emitter__20_unnamed_xDecal_cpp_FP13xDecalEmitter
/* 8017C4F8 001792F8  7F C4 F3 78 */	mr r4, r30
/* 8017C4FC 001792FC  38 7D 00 44 */	addi r3, r29, 0x44
/* 8017C500 00179300  48 00 0B B1 */	bl init__41static_queue_Q213xDecalEmitter9unit_data_FUl
/* 8017C504 00179304  7F A3 EB 78 */	mr r3, r29
/* 8017C508 00179308  7F E4 FB 78 */	mr r4, r31
/* 8017C50C 0017930C  48 00 0B 69 */	bl debug_init__13xDecalEmitterFPCc
/* 8017C510 00179310  80 01 00 24 */	lwz r0, 0x24(r1)
/* 8017C514 00179314  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 8017C518 00179318  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 8017C51C 0017931C  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 8017C520 00179320  7C 08 03 A6 */	mtlr r0
/* 8017C524 00179324  38 21 00 20 */	addi r1, r1, 0x20
/* 8017C528 00179328  4E 80 00 20 */	blr 

.global set_default_config__13xDecalEmitterFv
set_default_config__13xDecalEmitterFv:
/* 8017C52C 0017932C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8017C530 00179330  7C 08 02 A6 */	mflr r0
/* 8017C534 00179334  38 80 00 05 */	li r4, 5
/* 8017C538 00179338  90 01 00 14 */	stw r0, 0x14(r1)
/* 8017C53C 0017933C  38 00 00 00 */	li r0, 0
/* 8017C540 00179340  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8017C544 00179344  7C 7F 1B 78 */	mr r31, r3
/* 8017C548 00179348  90 03 00 00 */	stw r0, 0(r3)
/* 8017C54C 0017934C  38 00 00 02 */	li r0, 2
/* 8017C550 00179350  38 7F 00 10 */	addi r3, r31, 0x10
/* 8017C554 00179354  C0 02 AD F8 */	lfs f0, lbl__805_1-_SDA2_BASE_(r2)
/* 8017C558 00179358  D0 1F 00 04 */	stfs f0, 4(r31)
/* 8017C55C 0017935C  90 9F 00 08 */	stw r4, 8(r31)
/* 8017C560 00179360  90 1F 00 0C */	stw r0, 0xc(r31)
/* 8017C564 00179364  C0 22 AD FC */	lfs f1, lbl__806_2-_SDA2_BASE_(r2)
/* 8017C568 00179368  FC 40 08 90 */	fmr f2, f1
/* 8017C56C 0017936C  4B EA 9D AD */	bl assign__5xVec2Fff
/* 8017C570 00179370  C0 22 AD F8 */	lfs f1, lbl__805_1-_SDA2_BASE_(r2)
/* 8017C574 00179374  38 7F 00 18 */	addi r3, r31, 0x18
/* 8017C578 00179378  FC 40 08 90 */	fmr f2, f1
/* 8017C57C 0017937C  4B EA 9D 9D */	bl assign__5xVec2Fff
/* 8017C580 00179380  38 80 00 01 */	li r4, 1
/* 8017C584 00179384  38 00 00 00 */	li r0, 0
/* 8017C588 00179388  98 9F 00 21 */	stb r4, 0x21(r31)
/* 8017C58C 0017938C  7F E3 FB 78 */	mr r3, r31
/* 8017C590 00179390  98 9F 00 20 */	stb r4, 0x20(r31)
/* 8017C594 00179394  90 1F 00 24 */	stw r0, 0x24(r31)
/* 8017C598 00179398  48 00 00 B5 */	bl refresh_config__13xDecalEmitterFv
/* 8017C59C 0017939C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8017C5A0 001793A0  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8017C5A4 001793A4  7C 08 03 A6 */	mtlr r0
/* 8017C5A8 001793A8  38 21 00 10 */	addi r1, r1, 0x10
/* 8017C5AC 001793AC  4E 80 00 20 */	blr 

.global set_texture__13xDecalEmitterFPCc
set_texture__13xDecalEmitterFPCc:
/* 8017C5B0 001793B0  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8017C5B4 001793B4  7C 08 02 A6 */	mflr r0
/* 8017C5B8 001793B8  90 01 00 14 */	stw r0, 0x14(r1)
/* 8017C5BC 001793BC  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8017C5C0 001793C0  7C 7F 1B 78 */	mr r31, r3
/* 8017C5C4 001793C4  7C 83 23 78 */	mr r3, r4
/* 8017C5C8 001793C8  4B EC FC 4D */	bl xStrHash__FPCc
/* 8017C5CC 001793CC  7C 64 1B 78 */	mr r4, r3
/* 8017C5D0 001793D0  7F E3 FB 78 */	mr r3, r31
/* 8017C5D4 001793D4  48 00 00 19 */	bl set_texture__13xDecalEmitterFUi
/* 8017C5D8 001793D8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8017C5DC 001793DC  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8017C5E0 001793E0  7C 08 03 A6 */	mtlr r0
/* 8017C5E4 001793E4  38 21 00 10 */	addi r1, r1, 0x10
/* 8017C5E8 001793E8  4E 80 00 20 */	blr 

.global set_texture__13xDecalEmitterFUi
set_texture__13xDecalEmitterFUi:
/* 8017C5EC 001793EC  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8017C5F0 001793F0  7C 08 02 A6 */	mflr r0
/* 8017C5F4 001793F4  28 04 00 00 */	cmplwi r4, 0
/* 8017C5F8 001793F8  90 01 00 14 */	stw r0, 0x14(r1)
/* 8017C5FC 001793FC  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8017C600 00179400  7C 7F 1B 78 */	mr r31, r3
/* 8017C604 00179404  40 82 00 0C */	bne lbl_8017C610
/* 8017C608 00179408  38 80 00 00 */	li r4, 0
/* 8017C60C 0017940C  48 00 00 14 */	b lbl_8017C620
lbl_8017C610:
/* 8017C610 00179410  7C 83 23 78 */	mr r3, r4
/* 8017C614 00179414  38 80 00 00 */	li r4, 0
/* 8017C618 00179418  4B EC F0 F5 */	bl xSTFindAsset__FUiPUi
/* 8017C61C 0017941C  7C 64 1B 78 */	mr r4, r3
lbl_8017C620:
/* 8017C620 00179420  7F E3 FB 78 */	mr r3, r31
/* 8017C624 00179424  48 00 00 19 */	bl set_texture__13xDecalEmitterFP9RwTexture
/* 8017C628 00179428  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8017C62C 0017942C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8017C630 00179430  7C 08 03 A6 */	mtlr r0
/* 8017C634 00179434  38 21 00 10 */	addi r1, r1, 0x10
/* 8017C638 00179438  4E 80 00 20 */	blr 

.global set_texture__13xDecalEmitterFP9RwTexture
set_texture__13xDecalEmitterFP9RwTexture:
/* 8017C63C 0017943C  90 83 00 28 */	stw r4, 0x28(r3)
/* 8017C640 00179440  38 00 00 00 */	li r0, 0
/* 8017C644 00179444  90 03 00 40 */	stw r0, 0x40(r3)
/* 8017C648 00179448  4E 80 00 20 */	blr 

.global refresh_config__13xDecalEmitterFv
refresh_config__13xDecalEmitterFv:
/* 8017C64C 0017944C  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 8017C650 00179450  7C 08 02 A6 */	mflr r0
/* 8017C654 00179454  90 01 00 24 */	stw r0, 0x24(r1)
/* 8017C658 00179458  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 8017C65C 0017945C  7C 7F 1B 78 */	mr r31, r3
/* 8017C660 00179460  C0 02 AE 00 */	lfs f0, lbl__834_3-_SDA2_BASE_(r2)
/* 8017C664 00179464  C0 23 00 04 */	lfs f1, 4(r3)
/* 8017C668 00179468  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8017C66C 0017946C  40 80 00 08 */	bge lbl_8017C674
/* 8017C670 00179470  D0 1F 00 04 */	stfs f0, 4(r31)
lbl_8017C674:
/* 8017C674 00179474  C0 22 AD F8 */	lfs f1, lbl__805_1-_SDA2_BASE_(r2)
/* 8017C678 00179478  C0 1F 00 04 */	lfs f0, 4(r31)
/* 8017C67C 0017947C  EC 01 00 24 */	fdivs f0, f1, f0
/* 8017C680 00179480  D0 1F 00 64 */	stfs f0, 0x64(r31)
/* 8017C684 00179484  88 1F 00 20 */	lbz r0, 0x20(r31)
/* 8017C688 00179488  28 00 00 00 */	cmplwi r0, 0
/* 8017C68C 0017948C  40 82 00 0C */	bne lbl_8017C698
/* 8017C690 00179490  38 00 00 01 */	li r0, 1
/* 8017C694 00179494  98 1F 00 20 */	stb r0, 0x20(r31)
lbl_8017C698:
/* 8017C698 00179498  88 1F 00 21 */	lbz r0, 0x21(r31)
/* 8017C69C 0017949C  28 00 00 00 */	cmplwi r0, 0
/* 8017C6A0 001794A0  40 82 00 0C */	bne lbl_8017C6AC
/* 8017C6A4 001794A4  38 00 00 01 */	li r0, 1
/* 8017C6A8 001794A8  98 1F 00 21 */	stb r0, 0x21(r31)
lbl_8017C6AC:
/* 8017C6AC 001794AC  C0 3F 00 10 */	lfs f1, 0x10(r31)
/* 8017C6B0 001794B0  C0 42 AD FC */	lfs f2, lbl__806_2-_SDA2_BASE_(r2)
/* 8017C6B4 001794B4  C0 62 AE 04 */	lfs f3, lbl__835_4-_SDA2_BASE_(r2)
/* 8017C6B8 001794B8  4B E9 22 81 */	bl range_limit_f___Ffff
/* 8017C6BC 001794BC  D0 3F 00 10 */	stfs f1, 0x10(r31)
/* 8017C6C0 001794C0  C0 3F 00 14 */	lfs f1, 0x14(r31)
/* 8017C6C4 001794C4  C0 42 AD FC */	lfs f2, lbl__806_2-_SDA2_BASE_(r2)
/* 8017C6C8 001794C8  C0 62 AE 04 */	lfs f3, lbl__835_4-_SDA2_BASE_(r2)
/* 8017C6CC 001794CC  4B E9 22 6D */	bl range_limit_f___Ffff
/* 8017C6D0 001794D0  D0 3F 00 14 */	stfs f1, 0x14(r31)
/* 8017C6D4 001794D4  C0 42 AE 08 */	lfs f2, lbl__836_3-_SDA2_BASE_(r2)
/* 8017C6D8 001794D8  C0 1F 00 10 */	lfs f0, 0x10(r31)
/* 8017C6DC 001794DC  C0 3F 00 18 */	lfs f1, 0x18(r31)
/* 8017C6E0 001794E0  EC 42 00 2A */	fadds f2, f2, f0
/* 8017C6E4 001794E4  C0 62 AD F8 */	lfs f3, lbl__805_1-_SDA2_BASE_(r2)
/* 8017C6E8 001794E8  4B E9 22 51 */	bl range_limit_f___Ffff
/* 8017C6EC 001794EC  D0 3F 00 18 */	stfs f1, 0x18(r31)
/* 8017C6F0 001794F0  C0 42 AE 08 */	lfs f2, lbl__836_3-_SDA2_BASE_(r2)
/* 8017C6F4 001794F4  C0 1F 00 14 */	lfs f0, 0x14(r31)
/* 8017C6F8 001794F8  C0 3F 00 1C */	lfs f1, 0x1c(r31)
/* 8017C6FC 001794FC  EC 42 00 2A */	fadds f2, f2, f0
/* 8017C700 00179500  C0 62 AD F8 */	lfs f3, lbl__805_1-_SDA2_BASE_(r2)
/* 8017C704 00179504  4B E9 22 35 */	bl range_limit_f___Ffff
/* 8017C708 00179508  D0 3F 00 1C */	stfs f1, 0x1c(r31)
/* 8017C70C 0017950C  3C 00 43 30 */	lis r0, 0x4330
/* 8017C710 00179510  38 7F 00 38 */	addi r3, r31, 0x38
/* 8017C714 00179514  88 BF 00 20 */	lbz r5, 0x20(r31)
/* 8017C718 00179518  88 9F 00 21 */	lbz r4, 0x21(r31)
/* 8017C71C 0017951C  90 01 00 08 */	stw r0, 8(r1)
/* 8017C720 00179520  7C 85 21 D6 */	mullw r4, r5, r4
/* 8017C724 00179524  90 01 00 10 */	stw r0, 0x10(r1)
/* 8017C728 00179528  90 9F 00 2C */	stw r4, 0x2c(r31)
/* 8017C72C 0017952C  88 1F 00 21 */	lbz r0, 0x21(r31)
/* 8017C730 00179530  C0 7F 00 18 */	lfs f3, 0x18(r31)
/* 8017C734 00179534  90 01 00 0C */	stw r0, 0xc(r1)
/* 8017C738 00179538  C0 5F 00 10 */	lfs f2, 0x10(r31)
/* 8017C73C 0017953C  C8 22 AE 10 */	lfd f1, lbl__838_4-_SDA2_BASE_(r2)
/* 8017C740 00179540  C8 01 00 08 */	lfd f0, 8(r1)
/* 8017C744 00179544  EC 43 10 28 */	fsubs f2, f3, f2
/* 8017C748 00179548  EC 00 08 28 */	fsubs f0, f0, f1
/* 8017C74C 0017954C  EC 02 00 24 */	fdivs f0, f2, f0
/* 8017C750 00179550  D0 1F 00 30 */	stfs f0, 0x30(r31)
/* 8017C754 00179554  88 1F 00 20 */	lbz r0, 0x20(r31)
/* 8017C758 00179558  C0 7F 00 1C */	lfs f3, 0x1c(r31)
/* 8017C75C 0017955C  90 01 00 14 */	stw r0, 0x14(r1)
/* 8017C760 00179560  C0 5F 00 14 */	lfs f2, 0x14(r31)
/* 8017C764 00179564  C8 22 AE 10 */	lfd f1, lbl__838_4-_SDA2_BASE_(r2)
/* 8017C768 00179568  C8 01 00 10 */	lfd f0, 0x10(r1)
/* 8017C76C 0017956C  EC 43 10 28 */	fsubs f2, f3, f2
/* 8017C770 00179570  EC 00 08 28 */	fsubs f0, f0, f1
/* 8017C774 00179574  EC 02 00 24 */	fdivs f0, f2, f0
/* 8017C778 00179578  D0 1F 00 34 */	stfs f0, 0x34(r31)
/* 8017C77C 0017957C  C0 42 AD F8 */	lfs f2, lbl__805_1-_SDA2_BASE_(r2)
/* 8017C780 00179580  C0 3F 00 30 */	lfs f1, 0x30(r31)
/* 8017C784 00179584  C0 1F 00 34 */	lfs f0, 0x34(r31)
/* 8017C788 00179588  EC 22 08 24 */	fdivs f1, f2, f1
/* 8017C78C 0017958C  EC 42 00 24 */	fdivs f2, f2, f0
/* 8017C790 00179590  4B EA 9B 89 */	bl assign__5xVec2Fff
/* 8017C794 00179594  80 01 00 24 */	lwz r0, 0x24(r1)
/* 8017C798 00179598  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 8017C79C 0017959C  7C 08 03 A6 */	mtlr r0
/* 8017C7A0 001795A0  38 21 00 20 */	addi r1, r1, 0x20
/* 8017C7A4 001795A4  4E 80 00 20 */	blr 

.global set_curve__13xDecalEmitterFPCQ213xDecalEmitter10curve_nodeUl
set_curve__13xDecalEmitterFPCQ213xDecalEmitter10curve_nodeUl:
/* 8017C7A8 001795A8  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8017C7AC 001795AC  7C 08 02 A6 */	mflr r0
/* 8017C7B0 001795B0  90 01 00 14 */	stw r0, 0x14(r1)
/* 8017C7B4 001795B4  90 A3 00 5C */	stw r5, 0x5c(r3)
/* 8017C7B8 001795B8  90 83 00 58 */	stw r4, 0x58(r3)
/* 8017C7BC 001795BC  48 00 08 BD */	bl debug_update_curve__13xDecalEmitterFv
/* 8017C7C0 001795C0  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8017C7C4 001795C4  7C 08 03 A6 */	mtlr r0
/* 8017C7C8 001795C8  38 21 00 10 */	addi r1, r1, 0x10
/* 8017C7CC 001795CC  4E 80 00 20 */	blr 

.global emit__13xDecalEmitterFRC7xMat4x3i
emit__13xDecalEmitterFRC7xMat4x3i:
/* 8017C7D0 001795D0  94 21 FF C0 */	stwu r1, -0x40(r1)
/* 8017C7D4 001795D4  7C 08 02 A6 */	mflr r0
/* 8017C7D8 001795D8  90 01 00 44 */	stw r0, 0x44(r1)
/* 8017C7DC 001795DC  DB E1 00 30 */	stfd f31, 0x30(r1)
/* 8017C7E0 001795E0  F3 E1 00 38 */	psq_st f31, 56(r1), 0, qr0
/* 8017C7E4 001795E4  DB C1 00 20 */	stfd f30, 0x20(r1)
/* 8017C7E8 001795E8  F3 C1 00 28 */	psq_st f30, 40(r1), 0, qr0
/* 8017C7EC 001795EC  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 8017C7F0 001795F0  93 C1 00 18 */	stw r30, 0x18(r1)
/* 8017C7F4 001795F4  93 A1 00 14 */	stw r29, 0x14(r1)
/* 8017C7F8 001795F8  93 81 00 10 */	stw r28, 0x10(r1)
/* 8017C7FC 001795FC  7C 7C 1B 78 */	mr r28, r3
/* 8017C800 00179600  7C 9D 23 78 */	mr r29, r4
/* 8017C804 00179604  7C BE 2B 78 */	mr r30, r5
/* 8017C808 00179608  38 7C 00 44 */	addi r3, r28, 0x44
/* 8017C80C 0017960C  48 00 0A 25 */	bl full__41static_queue_Q213xDecalEmitter9unit_data_CFv
/* 8017C810 00179610  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8017C814 00179614  41 82 00 0C */	beq lbl_8017C820
/* 8017C818 00179618  38 7C 00 44 */	addi r3, r28, 0x44
/* 8017C81C 0017961C  48 00 0A 05 */	bl pop_back__41static_queue_Q213xDecalEmitter9unit_data_Fv
lbl_8017C820:
/* 8017C820 00179620  38 7C 00 44 */	addi r3, r28, 0x44
/* 8017C824 00179624  48 00 09 A5 */	bl push_front__41static_queue_Q213xDecalEmitter9unit_data_Fv
/* 8017C828 00179628  38 7C 00 44 */	addi r3, r28, 0x44
/* 8017C82C 0017962C  48 00 09 11 */	bl front__41static_queue_Q213xDecalEmitter9unit_data_Fv
/* 8017C830 00179630  C0 02 AD FC */	lfs f0, lbl__806_2-_SDA2_BASE_(r2)
/* 8017C834 00179634  7C 7F 1B 78 */	mr r31, r3
/* 8017C838 00179638  D0 03 00 08 */	stfs f0, 8(r3)
/* 8017C83C 0017963C  80 1C 00 00 */	lwz r0, 0(r28)
/* 8017C840 00179640  54 00 07 BD */	rlwinm. r0, r0, 0, 0x1e, 0x1e
/* 8017C844 00179644  41 82 00 30 */	beq lbl_8017C874
/* 8017C848 00179648  C0 22 AD F8 */	lfs f1, lbl__805_1-_SDA2_BASE_(r2)
/* 8017C84C 0017964C  38 7F 00 10 */	addi r3, r31, 0x10
/* 8017C850 00179650  FC 40 08 90 */	fmr f2, f1
/* 8017C854 00179654  FC 60 08 90 */	fmr f3, f1
/* 8017C858 00179658  4B E8 E8 95 */	bl assign__5xVec3Ffff
/* 8017C85C 0017965C  38 7F 00 40 */	addi r3, r31, 0x40
/* 8017C860 00179660  38 9D 00 30 */	addi r4, r29, 0x30
/* 8017C864 00179664  4B E8 EA 01 */	bl __as__5xVec3FRC5xVec3
/* 8017C868 00179668  C0 02 AE 18 */	lfs f0, lbl__875_4-_SDA2_BASE_(r2)
/* 8017C86C 0017966C  D0 1F 00 0C */	stfs f0, 0xc(r31)
/* 8017C870 00179670  48 00 00 48 */	b lbl_8017C8B8
lbl_8017C874:
/* 8017C874 00179674  7F A4 EB 78 */	mr r4, r29
/* 8017C878 00179678  38 7F 00 10 */	addi r3, r31, 0x10
/* 8017C87C 0017967C  4B E8 EC F1 */	bl __as__7xMat4x3FRC7xMat4x3
/* 8017C880 00179680  38 7F 00 30 */	addi r3, r31, 0x30
/* 8017C884 00179684  4B E8 E9 25 */	bl length__5xVec3CFv
/* 8017C888 00179688  FF C0 08 90 */	fmr f30, f1
/* 8017C88C 0017968C  38 7F 00 20 */	addi r3, r31, 0x20
/* 8017C890 00179690  4B E8 E9 19 */	bl length__5xVec3CFv
/* 8017C894 00179694  FF E0 08 90 */	fmr f31, f1
/* 8017C898 00179698  38 7F 00 10 */	addi r3, r31, 0x10
/* 8017C89C 0017969C  4B E8 E9 0D */	bl length__5xVec3CFv
/* 8017C8A0 001796A0  FC 40 F8 90 */	fmr f2, f31
/* 8017C8A4 001796A4  FC 60 F0 90 */	fmr f3, f30
/* 8017C8A8 001796A8  48 00 00 81 */	bl xDecal.choose_greatest__20_unnamed_xDecal_cpp_Ffff
/* 8017C8AC 001796AC  C0 02 AE 18 */	lfs f0, lbl__875_4-_SDA2_BASE_(r2)
/* 8017C8B0 001796B0  EC 00 00 72 */	fmuls f0, f0, f1
/* 8017C8B4 001796B4  D0 1F 00 0C */	stfs f0, 0xc(r31)
lbl_8017C8B8:
/* 8017C8B8 001796B8  2C 1E 00 00 */	cmpwi r30, 0
/* 8017C8BC 001796BC  41 80 00 10 */	blt lbl_8017C8CC
/* 8017C8C0 001796C0  80 1C 00 2C */	lwz r0, 0x2c(r28)
/* 8017C8C4 001796C4  7C 1E 00 00 */	cmpw r30, r0
/* 8017C8C8 001796C8  40 81 00 10 */	ble lbl_8017C8D8
lbl_8017C8CC:
/* 8017C8CC 001796CC  7F 83 E3 78 */	mr r3, r28
/* 8017C8D0 001796D0  48 00 06 B9 */	bl select_texture_unit__13xDecalEmitterFv
/* 8017C8D4 001796D4  7C 7E 1B 78 */	mr r30, r3
lbl_8017C8D8:
/* 8017C8D8 001796D8  88 7C 00 20 */	lbz r3, 0x20(r28)
/* 8017C8DC 001796DC  7C 1E 1B D6 */	divw r0, r30, r3
/* 8017C8E0 001796E0  7C 00 19 D6 */	mullw r0, r0, r3
/* 8017C8E4 001796E4  7C 00 F0 50 */	subf r0, r0, r30
/* 8017C8E8 001796E8  98 1F 00 02 */	stb r0, 2(r31)
/* 8017C8EC 001796EC  88 1C 00 20 */	lbz r0, 0x20(r28)
/* 8017C8F0 001796F0  7C 1E 03 D6 */	divw r0, r30, r0
/* 8017C8F4 001796F4  98 1F 00 03 */	stb r0, 3(r31)
/* 8017C8F8 001796F8  E3 E1 00 38 */	psq_l f31, 56(r1), 0, qr0
/* 8017C8FC 001796FC  CB E1 00 30 */	lfd f31, 0x30(r1)
/* 8017C900 00179700  E3 C1 00 28 */	psq_l f30, 40(r1), 0, qr0
/* 8017C904 00179704  CB C1 00 20 */	lfd f30, 0x20(r1)
/* 8017C908 00179708  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 8017C90C 0017970C  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 8017C910 00179710  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 8017C914 00179714  80 01 00 44 */	lwz r0, 0x44(r1)
/* 8017C918 00179718  83 81 00 10 */	lwz r28, 0x10(r1)
/* 8017C91C 0017971C  7C 08 03 A6 */	mtlr r0
/* 8017C920 00179720  38 21 00 40 */	addi r1, r1, 0x40
/* 8017C924 00179724  4E 80 00 20 */	blr 

.global xDecal.choose_greatest__20_unnamed_xDecal_cpp_Ffff
xDecal.choose_greatest__20_unnamed_xDecal_cpp_Ffff:
/* 8017C928 00179728  FC 01 10 40 */	fcmpo cr0, f1, f2
/* 8017C92C 0017972C  40 80 00 08 */	bge lbl_8017C934
/* 8017C930 00179730  FC 20 10 90 */	fmr f1, f2
lbl_8017C934:
/* 8017C934 00179734  FC 01 18 40 */	fcmpo cr0, f1, f3
/* 8017C938 00179738  4C 80 00 20 */	bgelr 
/* 8017C93C 0017973C  FC 20 18 90 */	fmr f1, f3
/* 8017C940 00179740  4E 80 00 20 */	blr 

.global emit__13xDecalEmitterFRC7xMat4x3RC5xVec3i
emit__13xDecalEmitterFRC7xMat4x3RC5xVec3i:
/* 8017C944 00179744  94 21 FF C0 */	stwu r1, -0x40(r1)
/* 8017C948 00179748  7C 08 02 A6 */	mflr r0
/* 8017C94C 0017974C  90 01 00 44 */	stw r0, 0x44(r1)
/* 8017C950 00179750  DB E1 00 30 */	stfd f31, 0x30(r1)
/* 8017C954 00179754  F3 E1 00 38 */	psq_st f31, 56(r1), 0, qr0
/* 8017C958 00179758  DB C1 00 20 */	stfd f30, 0x20(r1)
/* 8017C95C 0017975C  F3 C1 00 28 */	psq_st f30, 40(r1), 0, qr0
/* 8017C960 00179760  BF 61 00 0C */	stmw r27, 0xc(r1)
/* 8017C964 00179764  7C 7B 1B 78 */	mr r27, r3
/* 8017C968 00179768  7C 9C 23 78 */	mr r28, r4
/* 8017C96C 0017976C  7C BD 2B 78 */	mr r29, r5
/* 8017C970 00179770  7C DE 33 78 */	mr r30, r6
/* 8017C974 00179774  38 7B 00 44 */	addi r3, r27, 0x44
/* 8017C978 00179778  48 00 08 B9 */	bl full__41static_queue_Q213xDecalEmitter9unit_data_CFv
/* 8017C97C 0017977C  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8017C980 00179780  41 82 00 0C */	beq lbl_8017C98C
/* 8017C984 00179784  38 7B 00 44 */	addi r3, r27, 0x44
/* 8017C988 00179788  48 00 08 99 */	bl pop_back__41static_queue_Q213xDecalEmitter9unit_data_Fv
lbl_8017C98C:
/* 8017C98C 0017978C  38 7B 00 44 */	addi r3, r27, 0x44
/* 8017C990 00179790  48 00 08 39 */	bl push_front__41static_queue_Q213xDecalEmitter9unit_data_Fv
/* 8017C994 00179794  38 7B 00 44 */	addi r3, r27, 0x44
/* 8017C998 00179798  48 00 07 A5 */	bl front__41static_queue_Q213xDecalEmitter9unit_data_Fv
/* 8017C99C 0017979C  C0 02 AD FC */	lfs f0, lbl__806_2-_SDA2_BASE_(r2)
/* 8017C9A0 001797A0  7C 7F 1B 78 */	mr r31, r3
/* 8017C9A4 001797A4  D0 03 00 08 */	stfs f0, 8(r3)
/* 8017C9A8 001797A8  80 1B 00 00 */	lwz r0, 0(r27)
/* 8017C9AC 001797AC  54 00 07 BD */	rlwinm. r0, r0, 0, 0x1e, 0x1e
/* 8017C9B0 001797B0  41 82 00 3C */	beq lbl_8017C9EC
/* 8017C9B4 001797B4  7F A4 EB 78 */	mr r4, r29
/* 8017C9B8 001797B8  38 7F 00 10 */	addi r3, r31, 0x10
/* 8017C9BC 001797BC  4B E8 E8 A9 */	bl __as__5xVec3FRC5xVec3
/* 8017C9C0 001797C0  38 7F 00 40 */	addi r3, r31, 0x40
/* 8017C9C4 001797C4  38 9C 00 30 */	addi r4, r28, 0x30
/* 8017C9C8 001797C8  4B E8 E8 9D */	bl __as__5xVec3FRC5xVec3
/* 8017C9CC 001797CC  C0 3D 00 00 */	lfs f1, 0(r29)
/* 8017C9D0 001797D0  C0 5D 00 04 */	lfs f2, 4(r29)
/* 8017C9D4 001797D4  C0 7D 00 08 */	lfs f3, 8(r29)
/* 8017C9D8 001797D8  4B FF FF 51 */	bl xDecal.choose_greatest__20_unnamed_xDecal_cpp_Ffff
/* 8017C9DC 001797DC  C0 02 AE 18 */	lfs f0, lbl__875_4-_SDA2_BASE_(r2)
/* 8017C9E0 001797E0  EC 00 00 72 */	fmuls f0, f0, f1
/* 8017C9E4 001797E4  D0 1F 00 0C */	stfs f0, 0xc(r31)
/* 8017C9E8 001797E8  48 00 00 6C */	b lbl_8017CA54
lbl_8017C9EC:
/* 8017C9EC 001797EC  7F 84 E3 78 */	mr r4, r28
/* 8017C9F0 001797F0  38 7F 00 10 */	addi r3, r31, 0x10
/* 8017C9F4 001797F4  4B E8 EB 79 */	bl __as__7xMat4x3FRC7xMat4x3
/* 8017C9F8 001797F8  C0 3D 00 00 */	lfs f1, 0(r29)
/* 8017C9FC 001797FC  38 7F 00 10 */	addi r3, r31, 0x10
/* 8017CA00 00179800  4B E8 E7 81 */	bl __amu__5xVec3Ff
/* 8017CA04 00179804  C0 3D 00 04 */	lfs f1, 4(r29)
/* 8017CA08 00179808  38 7F 00 20 */	addi r3, r31, 0x20
/* 8017CA0C 0017980C  4B E8 E7 75 */	bl __amu__5xVec3Ff
/* 8017CA10 00179810  C0 3D 00 08 */	lfs f1, 8(r29)
/* 8017CA14 00179814  38 7F 00 30 */	addi r3, r31, 0x30
/* 8017CA18 00179818  4B E8 E7 69 */	bl __amu__5xVec3Ff
/* 8017CA1C 0017981C  38 7F 00 30 */	addi r3, r31, 0x30
/* 8017CA20 00179820  4B E8 E7 89 */	bl length__5xVec3CFv
/* 8017CA24 00179824  FF C0 08 90 */	fmr f30, f1
/* 8017CA28 00179828  38 7F 00 20 */	addi r3, r31, 0x20
/* 8017CA2C 0017982C  4B E8 E7 7D */	bl length__5xVec3CFv
/* 8017CA30 00179830  FF E0 08 90 */	fmr f31, f1
/* 8017CA34 00179834  38 7F 00 10 */	addi r3, r31, 0x10
/* 8017CA38 00179838  4B E8 E7 71 */	bl length__5xVec3CFv
/* 8017CA3C 0017983C  FC 40 F8 90 */	fmr f2, f31
/* 8017CA40 00179840  FC 60 F0 90 */	fmr f3, f30
/* 8017CA44 00179844  4B FF FE E5 */	bl xDecal.choose_greatest__20_unnamed_xDecal_cpp_Ffff
/* 8017CA48 00179848  C0 02 AE 18 */	lfs f0, lbl__875_4-_SDA2_BASE_(r2)
/* 8017CA4C 0017984C  EC 00 00 72 */	fmuls f0, f0, f1
/* 8017CA50 00179850  D0 1F 00 0C */	stfs f0, 0xc(r31)
lbl_8017CA54:
/* 8017CA54 00179854  2C 1E 00 00 */	cmpwi r30, 0
/* 8017CA58 00179858  41 80 00 10 */	blt lbl_8017CA68
/* 8017CA5C 0017985C  80 1B 00 2C */	lwz r0, 0x2c(r27)
/* 8017CA60 00179860  7C 1E 00 00 */	cmpw r30, r0
/* 8017CA64 00179864  40 81 00 10 */	ble lbl_8017CA74
lbl_8017CA68:
/* 8017CA68 00179868  7F 63 DB 78 */	mr r3, r27
/* 8017CA6C 0017986C  48 00 05 1D */	bl select_texture_unit__13xDecalEmitterFv
/* 8017CA70 00179870  7C 7E 1B 78 */	mr r30, r3
lbl_8017CA74:
/* 8017CA74 00179874  88 7B 00 20 */	lbz r3, 0x20(r27)
/* 8017CA78 00179878  7C 1E 1B D6 */	divw r0, r30, r3
/* 8017CA7C 0017987C  7C 00 19 D6 */	mullw r0, r0, r3
/* 8017CA80 00179880  7C 00 F0 50 */	subf r0, r0, r30
/* 8017CA84 00179884  98 1F 00 02 */	stb r0, 2(r31)
/* 8017CA88 00179888  88 1B 00 20 */	lbz r0, 0x20(r27)
/* 8017CA8C 0017988C  7C 1E 03 D6 */	divw r0, r30, r0
/* 8017CA90 00179890  98 1F 00 03 */	stb r0, 3(r31)
/* 8017CA94 00179894  E3 E1 00 38 */	psq_l f31, 56(r1), 0, qr0
/* 8017CA98 00179898  CB E1 00 30 */	lfd f31, 0x30(r1)
/* 8017CA9C 0017989C  E3 C1 00 28 */	psq_l f30, 40(r1), 0, qr0
/* 8017CAA0 001798A0  CB C1 00 20 */	lfd f30, 0x20(r1)
/* 8017CAA4 001798A4  BB 61 00 0C */	lmw r27, 0xc(r1)
/* 8017CAA8 001798A8  80 01 00 44 */	lwz r0, 0x44(r1)
/* 8017CAAC 001798AC  7C 08 03 A6 */	mtlr r0
/* 8017CAB0 001798B0  38 21 00 40 */	addi r1, r1, 0x40
/* 8017CAB4 001798B4  4E 80 00 20 */	blr 

.global update__13xDecalEmitterFf
update__13xDecalEmitterFf:
/* 8017CAB8 001798B8  94 21 FF 90 */	stwu r1, -0x70(r1)
/* 8017CABC 001798BC  7C 08 02 A6 */	mflr r0
/* 8017CAC0 001798C0  90 01 00 74 */	stw r0, 0x74(r1)
/* 8017CAC4 001798C4  DB E1 00 60 */	stfd f31, 0x60(r1)
/* 8017CAC8 001798C8  F3 E1 00 68 */	psq_st f31, 104(r1), 0, qr0
/* 8017CACC 001798CC  93 E1 00 5C */	stw r31, 0x5c(r1)
/* 8017CAD0 001798D0  93 C1 00 58 */	stw r30, 0x58(r1)
/* 8017CAD4 001798D4  7C 7F 1B 78 */	mr r31, r3
/* 8017CAD8 001798D8  FF E0 08 90 */	fmr f31, f1
/* 8017CADC 001798DC  48 00 05 A1 */	bl debug_update__13xDecalEmitterFf
/* 8017CAE0 001798E0  C0 1F 00 64 */	lfs f0, 0x64(r31)
/* 8017CAE4 001798E4  38 61 00 24 */	addi r3, r1, 0x24
/* 8017CAE8 001798E8  EF FF 00 32 */	fmuls f31, f31, f0
/* 8017CAEC 001798EC  4B F9 AB 95 */	bl reset__10ptank_poolFv
/* 8017CAF0 001798F0  80 9F 00 28 */	lwz r4, 0x28(r31)
/* 8017CAF4 001798F4  38 00 00 00 */	li r0, 0
/* 8017CAF8 001798F8  38 7F 00 44 */	addi r3, r31, 0x44
/* 8017CAFC 001798FC  90 81 00 24 */	stw r4, 0x24(r1)
/* 8017CB00 00179900  80 9F 00 08 */	lwz r4, 8(r31)
/* 8017CB04 00179904  90 81 00 28 */	stw r4, 0x28(r1)
/* 8017CB08 00179908  80 9F 00 0C */	lwz r4, 0xc(r31)
/* 8017CB0C 0017990C  90 81 00 2C */	stw r4, 0x2c(r1)
/* 8017CB10 00179910  80 9F 00 00 */	lwz r4, 0(r31)
/* 8017CB14 00179914  54 84 07 FE */	clrlwi r4, r4, 0x1f
/* 8017CB18 00179918  90 81 00 30 */	stw r4, 0x30(r1)
/* 8017CB1C 0017991C  90 1F 00 60 */	stw r0, 0x60(r31)
/* 8017CB20 00179920  48 00 06 65 */	bl begin__41static_queue_Q213xDecalEmitter9unit_data_CFv
/* 8017CB24 00179924  90 81 00 20 */	stw r4, 0x20(r1)
/* 8017CB28 00179928  90 61 00 1C */	stw r3, 0x1c(r1)
/* 8017CB2C 0017992C  48 00 00 BC */	b lbl_8017CBE8
lbl_8017CB30:
/* 8017CB30 00179930  38 61 00 1C */	addi r3, r1, 0x1c
/* 8017CB34 00179934  48 00 06 39 */	bl __ml__Q241static_queue_Q213xDecalEmitter9unit_data_8iteratorCFv
/* 8017CB38 00179938  C0 03 00 08 */	lfs f0, 8(r3)
/* 8017CB3C 0017993C  7C 7E 1B 78 */	mr r30, r3
/* 8017CB40 00179940  EC 00 F8 2A */	fadds f0, f0, f31
/* 8017CB44 00179944  D0 03 00 08 */	stfs f0, 8(r3)
/* 8017CB48 00179948  C0 23 00 08 */	lfs f1, 8(r3)
/* 8017CB4C 0017994C  C0 02 AD F8 */	lfs f0, lbl__805_1-_SDA2_BASE_(r2)
/* 8017CB50 00179950  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8017CB54 00179954  4C 41 13 82 */	cror 2, 1, 2
/* 8017CB58 00179958  41 82 00 B4 */	beq lbl_8017CC0C
/* 8017CB5C 0017995C  7F E3 FB 78 */	mr r3, r31
/* 8017CB60 00179960  7F C4 F3 78 */	mr r4, r30
/* 8017CB64 00179964  48 00 01 01 */	bl update_frac__13xDecalEmitterFRQ213xDecalEmitter9unit_data
/* 8017CB68 00179968  88 9E 00 01 */	lbz r4, 1(r30)
/* 8017CB6C 0017996C  38 61 00 08 */	addi r3, r1, 8
/* 8017CB70 00179970  80 DF 00 58 */	lwz r6, 0x58(r31)
/* 8017CB74 00179974  38 04 00 01 */	addi r0, r4, 1
/* 8017CB78 00179978  C0 3E 00 04 */	lfs f1, 4(r30)
/* 8017CB7C 0017997C  1C A4 00 0C */	mulli r5, r4, 0xc
/* 8017CB80 00179980  1C 80 00 0C */	mulli r4, r0, 0xc
/* 8017CB84 00179984  38 05 00 08 */	addi r0, r5, 8
/* 8017CB88 00179988  7C 46 04 2E */	lfsx f2, r6, r0
/* 8017CB8C 0017998C  38 04 00 08 */	addi r0, r4, 8
/* 8017CB90 00179990  7C 66 04 2E */	lfsx f3, r6, r0
/* 8017CB94 00179994  48 00 00 C1 */	bl xDecal.lerp__20_unnamed_xDecal_cpp_FRffff
/* 8017CB98 00179998  C0 3E 00 0C */	lfs f1, 0xc(r30)
/* 8017CB9C 0017999C  38 61 00 24 */	addi r3, r1, 0x24
/* 8017CBA0 001799A0  C0 01 00 08 */	lfs f0, 8(r1)
/* 8017CBA4 001799A4  EC 01 00 32 */	fmuls f0, f1, f0
/* 8017CBA8 001799A8  D0 1E 00 4C */	stfs f0, 0x4c(r30)
/* 8017CBAC 001799AC  48 00 08 65 */	bl next__25ptank_pool__color_mat_uv2Fv
/* 8017CBB0 001799B0  38 61 00 24 */	addi r3, r1, 0x24
/* 8017CBB4 001799B4  4B F9 A8 E1 */	bl valid__10ptank_poolCFv
/* 8017CBB8 001799B8  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8017CBBC 001799BC  41 82 00 50 */	beq lbl_8017CC0C
/* 8017CBC0 001799C0  80 E1 00 50 */	lwz r7, 0x50(r1)
/* 8017CBC4 001799C4  7F E3 FB 78 */	mr r3, r31
/* 8017CBC8 001799C8  C0 21 00 08 */	lfs f1, 8(r1)
/* 8017CBCC 001799CC  7F C4 F3 78 */	mr r4, r30
/* 8017CBD0 001799D0  80 A1 00 48 */	lwz r5, 0x48(r1)
/* 8017CBD4 001799D4  39 07 00 08 */	addi r8, r7, 8
/* 8017CBD8 001799D8  80 C1 00 4C */	lwz r6, 0x4c(r1)
/* 8017CBDC 001799DC  48 00 01 1D */	bl get_render_data__13xDecalEmitterFRCQ213xDecalEmitter9unit_datafR10iColor_tagR7xMat4x3R5xVec2R5xVec2
/* 8017CBE0 001799E0  38 61 00 1C */	addi r3, r1, 0x1c
/* 8017CBE4 001799E4  48 00 07 79 */	bl __pp__Q241static_queue_Q213xDecalEmitter9unit_data_8iteratorFv
lbl_8017CBE8:
/* 8017CBE8 001799E8  38 7F 00 44 */	addi r3, r31, 0x44
/* 8017CBEC 001799EC  48 00 07 2D */	bl end__41static_queue_Q213xDecalEmitter9unit_data_CFv
/* 8017CBF0 001799F0  90 81 00 18 */	stw r4, 0x18(r1)
/* 8017CBF4 001799F4  38 81 00 14 */	addi r4, r1, 0x14
/* 8017CBF8 001799F8  90 61 00 14 */	stw r3, 0x14(r1)
/* 8017CBFC 001799FC  38 61 00 1C */	addi r3, r1, 0x1c
/* 8017CC00 00179A00  48 00 06 FD */	bl __ne__Q241static_queue_Q213xDecalEmitter9unit_data_8iteratorCFRCQ241static_queue_Q213xDecalEmitter9unit_data_8iterator
/* 8017CC04 00179A04  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8017CC08 00179A08  40 82 FF 28 */	bne lbl_8017CB30
lbl_8017CC0C:
/* 8017CC0C 00179A0C  38 61 00 24 */	addi r3, r1, 0x24
/* 8017CC10 00179A10  48 00 07 C1 */	bl flush__25ptank_pool__color_mat_uv2Fv
/* 8017CC14 00179A14  38 7F 00 44 */	addi r3, r31, 0x44
/* 8017CC18 00179A18  48 00 07 01 */	bl end__41static_queue_Q213xDecalEmitter9unit_data_CFv
/* 8017CC1C 00179A1C  90 81 00 10 */	stw r4, 0x10(r1)
/* 8017CC20 00179A20  38 81 00 1C */	addi r4, r1, 0x1c
/* 8017CC24 00179A24  38 A1 00 0C */	addi r5, r1, 0xc
/* 8017CC28 00179A28  90 61 00 0C */	stw r3, 0xc(r1)
/* 8017CC2C 00179A2C  38 7F 00 44 */	addi r3, r31, 0x44
/* 8017CC30 00179A30  48 00 06 59 */	bl erase__41static_queue_Q213xDecalEmitter9unit_data_FRCQ241static_queue_Q213xDecalEmitter9unit_data_8iteratorRCQ241static_queue_Q213xDecalEmitter9unit_data_8iterator
/* 8017CC34 00179A34  E3 E1 00 68 */	psq_l f31, 104(r1), 0, qr0
/* 8017CC38 00179A38  80 01 00 74 */	lwz r0, 0x74(r1)
/* 8017CC3C 00179A3C  CB E1 00 60 */	lfd f31, 0x60(r1)
/* 8017CC40 00179A40  83 E1 00 5C */	lwz r31, 0x5c(r1)
/* 8017CC44 00179A44  83 C1 00 58 */	lwz r30, 0x58(r1)
/* 8017CC48 00179A48  7C 08 03 A6 */	mtlr r0
/* 8017CC4C 00179A4C  38 21 00 70 */	addi r1, r1, 0x70
/* 8017CC50 00179A50  4E 80 00 20 */	blr 

.global xDecal.lerp__20_unnamed_xDecal_cpp_FRffff
xDecal.lerp__20_unnamed_xDecal_cpp_FRffff:
/* 8017CC54 00179A54  EC 03 10 28 */	fsubs f0, f3, f2
/* 8017CC58 00179A58  EC 01 10 3A */	fmadds f0, f1, f0, f2
/* 8017CC5C 00179A5C  D0 03 00 00 */	stfs f0, 0(r3)
/* 8017CC60 00179A60  4E 80 00 20 */	blr 

.global update_frac__13xDecalEmitterFRQ213xDecalEmitter9unit_data
update_frac__13xDecalEmitterFRQ213xDecalEmitter9unit_data:
/* 8017CC64 00179A64  48 00 00 40 */	b lbl_8017CCA4
lbl_8017CC68:
/* 8017CC68 00179A68  1C 06 00 0C */	mulli r0, r6, 0xc
/* 8017CC6C 00179A6C  80 A3 00 58 */	lwz r5, 0x58(r3)
/* 8017CC70 00179A70  C0 24 00 08 */	lfs f1, 8(r4)
/* 8017CC74 00179A74  7C A5 02 14 */	add r5, r5, r0
/* 8017CC78 00179A78  C0 05 00 00 */	lfs f0, 0(r5)
/* 8017CC7C 00179A7C  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8017CC80 00179A80  4C 41 13 82 */	cror 2, 1, 2
/* 8017CC84 00179A84  40 82 00 14 */	bne lbl_8017CC98
/* 8017CC88 00179A88  C0 05 00 0C */	lfs f0, 0xc(r5)
/* 8017CC8C 00179A8C  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8017CC90 00179A90  4C 40 13 82 */	cror 2, 0, 2
/* 8017CC94 00179A94  41 82 00 24 */	beq lbl_8017CCB8
lbl_8017CC98:
/* 8017CC98 00179A98  80 A3 00 60 */	lwz r5, 0x60(r3)
/* 8017CC9C 00179A9C  38 05 00 01 */	addi r0, r5, 1
/* 8017CCA0 00179AA0  90 03 00 60 */	stw r0, 0x60(r3)
lbl_8017CCA4:
/* 8017CCA4 00179AA4  80 A3 00 5C */	lwz r5, 0x5c(r3)
/* 8017CCA8 00179AA8  80 C3 00 60 */	lwz r6, 0x60(r3)
/* 8017CCAC 00179AAC  38 05 FF FE */	addi r0, r5, -2
/* 8017CCB0 00179AB0  7C 06 00 40 */	cmplw r6, r0
/* 8017CCB4 00179AB4  41 80 FF B4 */	blt lbl_8017CC68
lbl_8017CCB8:
/* 8017CCB8 00179AB8  98 C4 00 01 */	stb r6, 1(r4)
/* 8017CCBC 00179ABC  80 A3 00 60 */	lwz r5, 0x60(r3)
/* 8017CCC0 00179AC0  80 C3 00 58 */	lwz r6, 0x58(r3)
/* 8017CCC4 00179AC4  38 05 00 01 */	addi r0, r5, 1
/* 8017CCC8 00179AC8  C0 42 AD F8 */	lfs f2, lbl__805_1-_SDA2_BASE_(r2)
/* 8017CCCC 00179ACC  1C 65 00 0C */	mulli r3, r5, 0xc
/* 8017CCD0 00179AD0  C0 04 00 08 */	lfs f0, 8(r4)
/* 8017CCD4 00179AD4  1C 00 00 0C */	mulli r0, r0, 0xc
/* 8017CCD8 00179AD8  7C 66 1C 2E */	lfsx f3, r6, r3
/* 8017CCDC 00179ADC  EC 00 18 28 */	fsubs f0, f0, f3
/* 8017CCE0 00179AE0  7C 26 04 2E */	lfsx f1, r6, r0
/* 8017CCE4 00179AE4  EC 21 18 28 */	fsubs f1, f1, f3
/* 8017CCE8 00179AE8  EC 22 08 24 */	fdivs f1, f2, f1
/* 8017CCEC 00179AEC  EC 01 00 32 */	fmuls f0, f1, f0
/* 8017CCF0 00179AF0  D0 04 00 04 */	stfs f0, 4(r4)
/* 8017CCF4 00179AF4  4E 80 00 20 */	blr 

.global get_render_data__13xDecalEmitterFRCQ213xDecalEmitter9unit_datafR10iColor_tagR7xMat4x3R5xVec2R5xVec2
get_render_data__13xDecalEmitterFRCQ213xDecalEmitter9unit_datafR10iColor_tagR7xMat4x3R5xVec2R5xVec2:
/* 8017CCF8 00179AF8  94 21 FF B0 */	stwu r1, -0x50(r1)
/* 8017CCFC 00179AFC  7C 08 02 A6 */	mflr r0
/* 8017CD00 00179B00  90 01 00 54 */	stw r0, 0x54(r1)
/* 8017CD04 00179B04  DB E1 00 40 */	stfd f31, 0x40(r1)
/* 8017CD08 00179B08  F3 E1 00 48 */	psq_st f31, 72(r1), 0, qr0
/* 8017CD0C 00179B0C  BF 61 00 2C */	stmw r27, 0x2c(r1)
/* 8017CD10 00179B10  7C 9C 23 78 */	mr r28, r4
/* 8017CD14 00179B14  88 84 00 01 */	lbz r4, 1(r4)
/* 8017CD18 00179B18  7C DD 33 78 */	mr r29, r6
/* 8017CD1C 00179B1C  FF E0 08 90 */	fmr f31, f1
/* 8017CD20 00179B20  38 04 00 01 */	addi r0, r4, 1
/* 8017CD24 00179B24  7C 7B 1B 78 */	mr r27, r3
/* 8017CD28 00179B28  81 23 00 58 */	lwz r9, 0x58(r3)
/* 8017CD2C 00179B2C  1C 60 00 0C */	mulli r3, r0, 0xc
/* 8017CD30 00179B30  C0 3C 00 04 */	lfs f1, 4(r28)
/* 8017CD34 00179B34  7C FE 3B 78 */	mr r30, r7
/* 8017CD38 00179B38  38 03 00 04 */	addi r0, r3, 4
/* 8017CD3C 00179B3C  7D 1F 43 78 */	mr r31, r8
/* 8017CD40 00179B40  1C C4 00 0C */	mulli r6, r4, 0xc
/* 8017CD44 00179B44  7C 09 00 2E */	lwzx r0, r9, r0
/* 8017CD48 00179B48  7C A3 2B 78 */	mr r3, r5
/* 8017CD4C 00179B4C  90 01 00 08 */	stw r0, 8(r1)
/* 8017CD50 00179B50  38 81 00 0C */	addi r4, r1, 0xc
/* 8017CD54 00179B54  7C A9 32 14 */	add r5, r9, r6
/* 8017CD58 00179B58  80 05 00 04 */	lwz r0, 4(r5)
/* 8017CD5C 00179B5C  38 A1 00 08 */	addi r5, r1, 8
/* 8017CD60 00179B60  90 01 00 0C */	stw r0, 0xc(r1)
/* 8017CD64 00179B64  48 00 01 25 */	bl xDecal.lerp__20_unnamed_xDecal_cpp_FR10iColor_tagf10iColor_tag10iColor_tag
/* 8017CD68 00179B68  80 1B 00 00 */	lwz r0, 0(r27)
/* 8017CD6C 00179B6C  54 00 07 BD */	rlwinm. r0, r0, 0, 0x1e, 0x1e
/* 8017CD70 00179B70  41 82 00 58 */	beq lbl_8017CDC8
/* 8017CD74 00179B74  3C 80 80 3C */	lis r4, lbl_globals@ha
/* 8017CD78 00179B78  7F A3 EB 78 */	mr r3, r29
/* 8017CD7C 00179B7C  38 84 05 58 */	addi r4, r4, lbl_globals@l
/* 8017CD80 00179B80  38 84 00 14 */	addi r4, r4, 0x14
/* 8017CD84 00179B84  4B E8 E8 45 */	bl __as__7xMat3x3FRC7xMat3x3
/* 8017CD88 00179B88  C0 1C 00 10 */	lfs f0, 0x10(r28)
/* 8017CD8C 00179B8C  7F A3 EB 78 */	mr r3, r29
/* 8017CD90 00179B90  EC 3F 00 32 */	fmuls f1, f31, f0
/* 8017CD94 00179B94  4B E8 E3 ED */	bl __amu__5xVec3Ff
/* 8017CD98 00179B98  C0 1C 00 14 */	lfs f0, 0x14(r28)
/* 8017CD9C 00179B9C  38 7D 00 10 */	addi r3, r29, 0x10
/* 8017CDA0 00179BA0  EC 3F 00 32 */	fmuls f1, f31, f0
/* 8017CDA4 00179BA4  4B E8 E3 DD */	bl __amu__5xVec3Ff
/* 8017CDA8 00179BA8  C0 1C 00 18 */	lfs f0, 0x18(r28)
/* 8017CDAC 00179BAC  38 7D 00 20 */	addi r3, r29, 0x20
/* 8017CDB0 00179BB0  EC 3F 00 32 */	fmuls f1, f31, f0
/* 8017CDB4 00179BB4  4B E8 E3 CD */	bl __amu__5xVec3Ff
/* 8017CDB8 00179BB8  38 7D 00 30 */	addi r3, r29, 0x30
/* 8017CDBC 00179BBC  38 9C 00 40 */	addi r4, r28, 0x40
/* 8017CDC0 00179BC0  4B E8 E4 A5 */	bl __as__5xVec3FRC5xVec3
/* 8017CDC4 00179BC4  48 00 00 34 */	b lbl_8017CDF8
lbl_8017CDC8:
/* 8017CDC8 00179BC8  7F A3 EB 78 */	mr r3, r29
/* 8017CDCC 00179BCC  38 9C 00 10 */	addi r4, r28, 0x10
/* 8017CDD0 00179BD0  4B E8 E7 9D */	bl __as__7xMat4x3FRC7xMat4x3
/* 8017CDD4 00179BD4  FC 20 F8 90 */	fmr f1, f31
/* 8017CDD8 00179BD8  7F A3 EB 78 */	mr r3, r29
/* 8017CDDC 00179BDC  4B E8 E3 A5 */	bl __amu__5xVec3Ff
/* 8017CDE0 00179BE0  FC 20 F8 90 */	fmr f1, f31
/* 8017CDE4 00179BE4  38 7D 00 10 */	addi r3, r29, 0x10
/* 8017CDE8 00179BE8  4B E8 E3 99 */	bl __amu__5xVec3Ff
/* 8017CDEC 00179BEC  FC 20 F8 90 */	fmr f1, f31
/* 8017CDF0 00179BF0  38 7D 00 20 */	addi r3, r29, 0x20
/* 8017CDF4 00179BF4  4B E8 E3 8D */	bl __amu__5xVec3Ff
lbl_8017CDF8:
/* 8017CDF8 00179BF8  88 9C 00 02 */	lbz r4, 2(r28)
/* 8017CDFC 00179BFC  3C 60 43 30 */	lis r3, 0x4330
/* 8017CE00 00179C00  88 1C 00 03 */	lbz r0, 3(r28)
/* 8017CE04 00179C04  90 81 00 14 */	stw r4, 0x14(r1)
/* 8017CE08 00179C08  C8 62 AE 10 */	lfd f3, lbl__838_4-_SDA2_BASE_(r2)
/* 8017CE0C 00179C0C  90 61 00 10 */	stw r3, 0x10(r1)
/* 8017CE10 00179C10  C0 3B 00 30 */	lfs f1, 0x30(r27)
/* 8017CE14 00179C14  C8 41 00 10 */	lfd f2, 0x10(r1)
/* 8017CE18 00179C18  C0 1B 00 10 */	lfs f0, 0x10(r27)
/* 8017CE1C 00179C1C  EC 42 18 28 */	fsubs f2, f2, f3
/* 8017CE20 00179C20  90 01 00 1C */	stw r0, 0x1c(r1)
/* 8017CE24 00179C24  90 61 00 18 */	stw r3, 0x18(r1)
/* 8017CE28 00179C28  EC 22 00 7A */	fmadds f1, f2, f1, f0
/* 8017CE2C 00179C2C  C8 01 00 18 */	lfd f0, 0x18(r1)
/* 8017CE30 00179C30  D0 3E 00 00 */	stfs f1, 0(r30)
/* 8017CE34 00179C34  C8 42 AE 10 */	lfd f2, lbl__838_4-_SDA2_BASE_(r2)
/* 8017CE38 00179C38  C0 3B 00 34 */	lfs f1, 0x34(r27)
/* 8017CE3C 00179C3C  EC 40 10 28 */	fsubs f2, f0, f2
/* 8017CE40 00179C40  C0 1B 00 14 */	lfs f0, 0x14(r27)
/* 8017CE44 00179C44  EC 02 00 7A */	fmadds f0, f2, f1, f0
/* 8017CE48 00179C48  D0 1E 00 04 */	stfs f0, 4(r30)
/* 8017CE4C 00179C4C  C0 3E 00 00 */	lfs f1, 0(r30)
/* 8017CE50 00179C50  C0 1B 00 30 */	lfs f0, 0x30(r27)
/* 8017CE54 00179C54  EC 01 00 2A */	fadds f0, f1, f0
/* 8017CE58 00179C58  D0 1F 00 00 */	stfs f0, 0(r31)
/* 8017CE5C 00179C5C  C0 3E 00 04 */	lfs f1, 4(r30)
/* 8017CE60 00179C60  C0 1B 00 34 */	lfs f0, 0x34(r27)
/* 8017CE64 00179C64  EC 01 00 2A */	fadds f0, f1, f0
/* 8017CE68 00179C68  D0 1F 00 04 */	stfs f0, 4(r31)
/* 8017CE6C 00179C6C  E3 E1 00 48 */	psq_l f31, 72(r1), 0, qr0
/* 8017CE70 00179C70  CB E1 00 40 */	lfd f31, 0x40(r1)
/* 8017CE74 00179C74  BB 61 00 2C */	lmw r27, 0x2c(r1)
/* 8017CE78 00179C78  80 01 00 54 */	lwz r0, 0x54(r1)
/* 8017CE7C 00179C7C  7C 08 03 A6 */	mtlr r0
/* 8017CE80 00179C80  38 21 00 50 */	addi r1, r1, 0x50
/* 8017CE84 00179C84  4E 80 00 20 */	blr 

.global xDecal.lerp__20_unnamed_xDecal_cpp_FR10iColor_tagf10iColor_tag10iColor_tag
xDecal.lerp__20_unnamed_xDecal_cpp_FR10iColor_tagf10iColor_tag10iColor_tag:
/* 8017CE88 00179C88  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 8017CE8C 00179C8C  7C 08 02 A6 */	mflr r0
/* 8017CE90 00179C90  90 01 00 24 */	stw r0, 0x24(r1)
/* 8017CE94 00179C94  DB E1 00 18 */	stfd f31, 0x18(r1)
/* 8017CE98 00179C98  FF E0 08 90 */	fmr f31, f1
/* 8017CE9C 00179C9C  93 E1 00 14 */	stw r31, 0x14(r1)
/* 8017CEA0 00179CA0  7C BF 2B 78 */	mr r31, r5
/* 8017CEA4 00179CA4  93 C1 00 10 */	stw r30, 0x10(r1)
/* 8017CEA8 00179CA8  7C 9E 23 78 */	mr r30, r4
/* 8017CEAC 00179CAC  93 A1 00 0C */	stw r29, 0xc(r1)
/* 8017CEB0 00179CB0  7C 7D 1B 78 */	mr r29, r3
/* 8017CEB4 00179CB4  88 84 00 00 */	lbz r4, 0(r4)
/* 8017CEB8 00179CB8  88 A5 00 00 */	lbz r5, 0(r5)
/* 8017CEBC 00179CBC  48 00 00 61 */	bl xDecal.lerp__20_unnamed_xDecal_cpp_FRUcfUcUc
/* 8017CEC0 00179CC0  FC 20 F8 90 */	fmr f1, f31
/* 8017CEC4 00179CC4  88 9E 00 01 */	lbz r4, 1(r30)
/* 8017CEC8 00179CC8  88 BF 00 01 */	lbz r5, 1(r31)
/* 8017CECC 00179CCC  38 7D 00 01 */	addi r3, r29, 1
/* 8017CED0 00179CD0  48 00 00 4D */	bl xDecal.lerp__20_unnamed_xDecal_cpp_FRUcfUcUc
/* 8017CED4 00179CD4  FC 20 F8 90 */	fmr f1, f31
/* 8017CED8 00179CD8  88 9E 00 02 */	lbz r4, 2(r30)
/* 8017CEDC 00179CDC  88 BF 00 02 */	lbz r5, 2(r31)
/* 8017CEE0 00179CE0  38 7D 00 02 */	addi r3, r29, 2
/* 8017CEE4 00179CE4  48 00 00 39 */	bl xDecal.lerp__20_unnamed_xDecal_cpp_FRUcfUcUc
/* 8017CEE8 00179CE8  FC 20 F8 90 */	fmr f1, f31
/* 8017CEEC 00179CEC  88 9E 00 03 */	lbz r4, 3(r30)
/* 8017CEF0 00179CF0  88 BF 00 03 */	lbz r5, 3(r31)
/* 8017CEF4 00179CF4  38 7D 00 03 */	addi r3, r29, 3
/* 8017CEF8 00179CF8  48 00 00 25 */	bl xDecal.lerp__20_unnamed_xDecal_cpp_FRUcfUcUc
/* 8017CEFC 00179CFC  80 01 00 24 */	lwz r0, 0x24(r1)
/* 8017CF00 00179D00  CB E1 00 18 */	lfd f31, 0x18(r1)
/* 8017CF04 00179D04  83 E1 00 14 */	lwz r31, 0x14(r1)
/* 8017CF08 00179D08  83 C1 00 10 */	lwz r30, 0x10(r1)
/* 8017CF0C 00179D0C  83 A1 00 0C */	lwz r29, 0xc(r1)
/* 8017CF10 00179D10  7C 08 03 A6 */	mtlr r0
/* 8017CF14 00179D14  38 21 00 20 */	addi r1, r1, 0x20
/* 8017CF18 00179D18  4E 80 00 20 */	blr 

.global xDecal.lerp__20_unnamed_xDecal_cpp_FRUcfUcUc
xDecal.lerp__20_unnamed_xDecal_cpp_FRUcfUcUc:
/* 8017CF1C 00179D1C  94 21 FF D0 */	stwu r1, -0x30(r1)
/* 8017CF20 00179D20  3C C0 43 30 */	lis r6, 0x4330
/* 8017CF24 00179D24  54 80 06 3E */	clrlwi r0, r4, 0x18
/* 8017CF28 00179D28  54 A4 06 3E */	clrlwi r4, r5, 0x18
/* 8017CF2C 00179D2C  90 C1 00 08 */	stw r6, 8(r1)
/* 8017CF30 00179D30  C8 82 AE 10 */	lfd f4, lbl__838_4-_SDA2_BASE_(r2)
/* 8017CF34 00179D34  90 81 00 0C */	stw r4, 0xc(r1)
/* 8017CF38 00179D38  C0 A2 AE 18 */	lfs f5, lbl__875_4-_SDA2_BASE_(r2)
/* 8017CF3C 00179D3C  C8 01 00 08 */	lfd f0, 8(r1)
/* 8017CF40 00179D40  90 01 00 14 */	stw r0, 0x14(r1)
/* 8017CF44 00179D44  EC 60 20 28 */	fsubs f3, f0, f4
/* 8017CF48 00179D48  90 C1 00 10 */	stw r6, 0x10(r1)
/* 8017CF4C 00179D4C  C8 01 00 10 */	lfd f0, 0x10(r1)
/* 8017CF50 00179D50  90 01 00 1C */	stw r0, 0x1c(r1)
/* 8017CF54 00179D54  EC 40 20 28 */	fsubs f2, f0, f4
/* 8017CF58 00179D58  90 C1 00 18 */	stw r6, 0x18(r1)
/* 8017CF5C 00179D5C  C8 01 00 18 */	lfd f0, 0x18(r1)
/* 8017CF60 00179D60  EC 43 10 28 */	fsubs f2, f3, f2
/* 8017CF64 00179D64  EC 00 20 28 */	fsubs f0, f0, f4
/* 8017CF68 00179D68  EC 01 00 BA */	fmadds f0, f1, f2, f0
/* 8017CF6C 00179D6C  EC 05 00 2A */	fadds f0, f5, f0
/* 8017CF70 00179D70  FC 00 00 1E */	fctiwz f0, f0
/* 8017CF74 00179D74  D8 01 00 20 */	stfd f0, 0x20(r1)
/* 8017CF78 00179D78  80 01 00 24 */	lwz r0, 0x24(r1)
/* 8017CF7C 00179D7C  98 03 00 00 */	stb r0, 0(r3)
/* 8017CF80 00179D80  38 21 00 30 */	addi r1, r1, 0x30
/* 8017CF84 00179D84  4E 80 00 20 */	blr 

.global select_texture_unit__13xDecalEmitterFv
select_texture_unit__13xDecalEmitterFv:
/* 8017CF88 00179D88  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8017CF8C 00179D8C  7C 08 02 A6 */	mflr r0
/* 8017CF90 00179D90  90 01 00 14 */	stw r0, 0x14(r1)
/* 8017CF94 00179D94  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8017CF98 00179D98  7C 7F 1B 78 */	mr r31, r3
/* 8017CF9C 00179D9C  80 03 00 24 */	lwz r0, 0x24(r3)
/* 8017CFA0 00179DA0  2C 00 00 01 */	cmpwi r0, 1
/* 8017CFA4 00179DA4  41 82 00 18 */	beq lbl_8017CFBC
/* 8017CFA8 00179DA8  40 80 00 08 */	bge lbl_8017CFB0
/* 8017CFAC 00179DAC  48 00 00 4C */	b lbl_8017CFF8
lbl_8017CFB0:
/* 8017CFB0 00179DB0  2C 00 00 03 */	cmpwi r0, 3
/* 8017CFB4 00179DB4  40 80 00 44 */	bge lbl_8017CFF8
/* 8017CFB8 00179DB8  48 00 00 20 */	b lbl_8017CFD8
lbl_8017CFBC:
/* 8017CFBC 00179DBC  4B EB 3C AD */	bl xrand__Fv
/* 8017CFC0 00179DC0  80 9F 00 2C */	lwz r4, 0x2c(r31)
/* 8017CFC4 00179DC4  54 63 9B 7E */	srwi r3, r3, 0xd
/* 8017CFC8 00179DC8  7C 03 23 96 */	divwu r0, r3, r4
/* 8017CFCC 00179DCC  7C 00 21 D6 */	mullw r0, r0, r4
/* 8017CFD0 00179DD0  7C 60 18 50 */	subf r3, r0, r3
/* 8017CFD4 00179DD4  48 00 00 28 */	b lbl_8017CFFC
lbl_8017CFD8:
/* 8017CFD8 00179DD8  80 7F 00 40 */	lwz r3, 0x40(r31)
/* 8017CFDC 00179DDC  38 83 00 01 */	addi r4, r3, 1
/* 8017CFE0 00179DE0  90 9F 00 40 */	stw r4, 0x40(r31)
/* 8017CFE4 00179DE4  80 7F 00 2C */	lwz r3, 0x2c(r31)
/* 8017CFE8 00179DE8  7C 04 1B 96 */	divwu r0, r4, r3
/* 8017CFEC 00179DEC  7C 00 19 D6 */	mullw r0, r0, r3
/* 8017CFF0 00179DF0  7C 60 20 50 */	subf r3, r0, r4
/* 8017CFF4 00179DF4  48 00 00 08 */	b lbl_8017CFFC
lbl_8017CFF8:
/* 8017CFF8 00179DF8  38 60 00 00 */	li r3, 0
lbl_8017CFFC:
/* 8017CFFC 00179DFC  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8017D000 00179E00  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8017D004 00179E04  7C 08 03 A6 */	mtlr r0
/* 8017D008 00179E08  38 21 00 10 */	addi r1, r1, 0x10
/* 8017D00C 00179E0C  4E 80 00 20 */	blr 

.global need_update__13xDecalEmitterCFv
need_update__13xDecalEmitterCFv:
/* 8017D010 00179E10  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8017D014 00179E14  7C 08 02 A6 */	mflr r0
/* 8017D018 00179E18  90 01 00 14 */	stw r0, 0x14(r1)
/* 8017D01C 00179E1C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8017D020 00179E20  3B E0 00 00 */	li r31, 0
/* 8017D024 00179E24  93 C1 00 08 */	stw r30, 8(r1)
/* 8017D028 00179E28  7C 7E 1B 78 */	mr r30, r3
/* 8017D02C 00179E2C  38 7E 00 44 */	addi r3, r30, 0x44
/* 8017D030 00179E30  48 00 00 51 */	bl empty__41static_queue_Q213xDecalEmitter9unit_data_CFv
/* 8017D034 00179E34  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8017D038 00179E38  41 82 00 14 */	beq lbl_8017D04C
/* 8017D03C 00179E3C  7F C3 F3 78 */	mr r3, r30
/* 8017D040 00179E40  48 00 00 2D */	bl debug_need_update__13xDecalEmitterCFv
/* 8017D044 00179E44  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8017D048 00179E48  41 82 00 08 */	beq lbl_8017D050
lbl_8017D04C:
/* 8017D04C 00179E4C  3B E0 00 01 */	li r31, 1
lbl_8017D050:
/* 8017D050 00179E50  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8017D054 00179E54  7F E3 FB 78 */	mr r3, r31
/* 8017D058 00179E58  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8017D05C 00179E5C  83 C1 00 08 */	lwz r30, 8(r1)
/* 8017D060 00179E60  7C 08 03 A6 */	mtlr r0
/* 8017D064 00179E64  38 21 00 10 */	addi r1, r1, 0x10
/* 8017D068 00179E68  4E 80 00 20 */	blr 

.global debug_need_update__13xDecalEmitterCFv
debug_need_update__13xDecalEmitterCFv:
/* 8017D06C 00179E6C  38 60 00 00 */	li r3, 0
/* 8017D070 00179E70  4E 80 00 20 */	blr 

.global debug_init__13xDecalEmitterFPCc
debug_init__13xDecalEmitterFPCc:
/* 8017D074 00179E74  4E 80 00 20 */	blr 

.global debug_update_curve__13xDecalEmitterFv
debug_update_curve__13xDecalEmitterFv:
/* 8017D078 00179E78  4E 80 00 20 */	blr 

.global debug_update__13xDecalEmitterFf
debug_update__13xDecalEmitterFf:
/* 8017D07C 00179E7C  4E 80 00 20 */	blr 

.global empty__41static_queue_Q213xDecalEmitter9unit_data_CFv
empty__41static_queue_Q213xDecalEmitter9unit_data_CFv:
/* 8017D080 00179E80  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8017D084 00179E84  7C 08 02 A6 */	mflr r0
/* 8017D088 00179E88  90 01 00 14 */	stw r0, 0x14(r1)
/* 8017D08C 00179E8C  48 00 00 1D */	bl size__41static_queue_Q213xDecalEmitter9unit_data_CFv
/* 8017D090 00179E90  7C 60 00 34 */	cntlzw r0, r3
/* 8017D094 00179E94  54 03 D9 7E */	srwi r3, r0, 5
/* 8017D098 00179E98  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8017D09C 00179E9C  7C 08 03 A6 */	mtlr r0
/* 8017D0A0 00179EA0  38 21 00 10 */	addi r1, r1, 0x10
/* 8017D0A4 00179EA4  4E 80 00 20 */	blr 

.global size__41static_queue_Q213xDecalEmitter9unit_data_CFv
size__41static_queue_Q213xDecalEmitter9unit_data_CFv:
/* 8017D0A8 00179EA8  80 63 00 04 */	lwz r3, 4(r3)
/* 8017D0AC 00179EAC  4E 80 00 20 */	blr 

.global init__41static_queue_Q213xDecalEmitter9unit_data_FUl
init__41static_queue_Q213xDecalEmitter9unit_data_FUl:
/* 8017D0B0 00179EB0  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8017D0B4 00179EB4  7C 08 02 A6 */	mflr r0
/* 8017D0B8 00179EB8  90 01 00 14 */	stw r0, 0x14(r1)
/* 8017D0BC 00179EBC  38 04 00 01 */	addi r0, r4, 1
/* 8017D0C0 00179EC0  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8017D0C4 00179EC4  7C 7F 1B 78 */	mr r31, r3
/* 8017D0C8 00179EC8  38 60 00 00 */	li r3, 0
/* 8017D0CC 00179ECC  48 00 00 0C */	b lbl_8017D0D8
lbl_8017D0D0:
/* 8017D0D0 00179ED0  54 00 F8 7E */	srwi r0, r0, 1
/* 8017D0D4 00179ED4  38 63 00 01 */	addi r3, r3, 1
lbl_8017D0D8:
/* 8017D0D8 00179ED8  28 00 00 01 */	cmplwi r0, 1
/* 8017D0DC 00179EDC  41 81 FF F4 */	bgt lbl_8017D0D0
/* 8017D0E0 00179EE0  38 00 00 01 */	li r0, 1
/* 8017D0E4 00179EE4  38 A0 00 00 */	li r5, 0
/* 8017D0E8 00179EE8  7C 00 18 30 */	slw r0, r0, r3
/* 8017D0EC 00179EEC  90 1F 00 08 */	stw r0, 8(r31)
/* 8017D0F0 00179EF0  80 7F 00 08 */	lwz r3, 8(r31)
/* 8017D0F4 00179EF4  38 03 FF FF */	addi r0, r3, -1
/* 8017D0F8 00179EF8  90 1F 00 0C */	stw r0, 0xc(r31)
/* 8017D0FC 00179EFC  80 1F 00 08 */	lwz r0, 8(r31)
/* 8017D100 00179F00  80 6D 89 E0 */	lwz r3, lbl_gActiveHeap-_SDA_BASE_(r13)
/* 8017D104 00179F04  1C 80 00 50 */	mulli r4, r0, 0x50
/* 8017D108 00179F08  4B EB 68 39 */	bl xMemAlloc__FUiUii
/* 8017D10C 00179F0C  90 7F 00 10 */	stw r3, 0x10(r31)
/* 8017D110 00179F10  7F E3 FB 78 */	mr r3, r31
/* 8017D114 00179F14  48 00 00 19 */	bl clear__41static_queue_Q213xDecalEmitter9unit_data_Fv
/* 8017D118 00179F18  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8017D11C 00179F1C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8017D120 00179F20  7C 08 03 A6 */	mtlr r0
/* 8017D124 00179F24  38 21 00 10 */	addi r1, r1, 0x10
/* 8017D128 00179F28  4E 80 00 20 */	blr 

.global clear__41static_queue_Q213xDecalEmitter9unit_data_Fv
clear__41static_queue_Q213xDecalEmitter9unit_data_Fv:
/* 8017D12C 00179F2C  38 00 00 00 */	li r0, 0
/* 8017D130 00179F30  90 03 00 04 */	stw r0, 4(r3)
/* 8017D134 00179F34  90 03 00 00 */	stw r0, 0(r3)
/* 8017D138 00179F38  4E 80 00 20 */	blr 

.global front__41static_queue_Q213xDecalEmitter9unit_data_Fv
front__41static_queue_Q213xDecalEmitter9unit_data_Fv:
/* 8017D13C 00179F3C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8017D140 00179F40  7C 08 02 A6 */	mflr r0
/* 8017D144 00179F44  90 01 00 14 */	stw r0, 0x14(r1)
/* 8017D148 00179F48  48 00 00 3D */	bl begin__41static_queue_Q213xDecalEmitter9unit_data_CFv
/* 8017D14C 00179F4C  90 61 00 08 */	stw r3, 8(r1)
/* 8017D150 00179F50  38 61 00 08 */	addi r3, r1, 8
/* 8017D154 00179F54  90 81 00 0C */	stw r4, 0xc(r1)
/* 8017D158 00179F58  48 00 00 15 */	bl __ml__Q241static_queue_Q213xDecalEmitter9unit_data_8iteratorCFv
/* 8017D15C 00179F5C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8017D160 00179F60  7C 08 03 A6 */	mtlr r0
/* 8017D164 00179F64  38 21 00 10 */	addi r1, r1, 0x10
/* 8017D168 00179F68  4E 80 00 20 */	blr 

.global __ml__Q241static_queue_Q213xDecalEmitter9unit_data_8iteratorCFv
__ml__Q241static_queue_Q213xDecalEmitter9unit_data_8iteratorCFv:
/* 8017D16C 00179F6C  80 03 00 00 */	lwz r0, 0(r3)
/* 8017D170 00179F70  80 63 00 04 */	lwz r3, 4(r3)
/* 8017D174 00179F74  1C 00 00 50 */	mulli r0, r0, 0x50
/* 8017D178 00179F78  80 63 00 10 */	lwz r3, 0x10(r3)
/* 8017D17C 00179F7C  7C 63 02 14 */	add r3, r3, r0
/* 8017D180 00179F80  4E 80 00 20 */	blr 

.global begin__41static_queue_Q213xDecalEmitter9unit_data_CFv
begin__41static_queue_Q213xDecalEmitter9unit_data_CFv:
/* 8017D184 00179F84  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8017D188 00179F88  7C 08 02 A6 */	mflr r0
/* 8017D18C 00179F8C  80 83 00 00 */	lwz r4, 0(r3)
/* 8017D190 00179F90  90 01 00 14 */	stw r0, 0x14(r1)
/* 8017D194 00179F94  48 00 00 15 */	bl create_iterator__41static_queue_Q213xDecalEmitter9unit_data_CFUl
/* 8017D198 00179F98  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8017D19C 00179F9C  7C 08 03 A6 */	mtlr r0
/* 8017D1A0 00179FA0  38 21 00 10 */	addi r1, r1, 0x10
/* 8017D1A4 00179FA4  4E 80 00 20 */	blr 

.global create_iterator__41static_queue_Q213xDecalEmitter9unit_data_CFUl
create_iterator__41static_queue_Q213xDecalEmitter9unit_data_CFUl:
/* 8017D1A8 00179FA8  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8017D1AC 00179FAC  7C 60 1B 78 */	mr r0, r3
/* 8017D1B0 00179FB0  7C 83 23 78 */	mr r3, r4
/* 8017D1B4 00179FB4  90 81 00 08 */	stw r4, 8(r1)
/* 8017D1B8 00179FB8  7C 04 03 78 */	mr r4, r0
/* 8017D1BC 00179FBC  90 01 00 0C */	stw r0, 0xc(r1)
/* 8017D1C0 00179FC0  38 21 00 10 */	addi r1, r1, 0x10
/* 8017D1C4 00179FC4  4E 80 00 20 */	blr 

.global push_front__41static_queue_Q213xDecalEmitter9unit_data_Fv
push_front__41static_queue_Q213xDecalEmitter9unit_data_Fv:
/* 8017D1C8 00179FC8  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8017D1CC 00179FCC  7C 08 02 A6 */	mflr r0
/* 8017D1D0 00179FD0  90 01 00 14 */	stw r0, 0x14(r1)
/* 8017D1D4 00179FD4  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8017D1D8 00179FD8  7C 7F 1B 78 */	mr r31, r3
/* 8017D1DC 00179FDC  80 83 00 04 */	lwz r4, 4(r3)
/* 8017D1E0 00179FE0  38 04 00 01 */	addi r0, r4, 1
/* 8017D1E4 00179FE4  90 03 00 04 */	stw r0, 4(r3)
/* 8017D1E8 00179FE8  80 83 00 00 */	lwz r4, 0(r3)
/* 8017D1EC 00179FEC  38 84 FF FF */	addi r4, r4, -1
/* 8017D1F0 00179FF0  48 00 00 25 */	bl mod_max_size__41static_queue_Q213xDecalEmitter9unit_data_CFUl
/* 8017D1F4 00179FF4  90 7F 00 00 */	stw r3, 0(r31)
/* 8017D1F8 00179FF8  7F E3 FB 78 */	mr r3, r31
/* 8017D1FC 00179FFC  4B FF FF 41 */	bl front__41static_queue_Q213xDecalEmitter9unit_data_Fv
/* 8017D200 0017A000  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8017D204 0017A004  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8017D208 0017A008  7C 08 03 A6 */	mtlr r0
/* 8017D20C 0017A00C  38 21 00 10 */	addi r1, r1, 0x10
/* 8017D210 0017A010  4E 80 00 20 */	blr 

.global mod_max_size__41static_queue_Q213xDecalEmitter9unit_data_CFUl
mod_max_size__41static_queue_Q213xDecalEmitter9unit_data_CFUl:
/* 8017D214 0017A014  80 03 00 0C */	lwz r0, 0xc(r3)
/* 8017D218 0017A018  7C 83 00 38 */	and r3, r4, r0
/* 8017D21C 0017A01C  4E 80 00 20 */	blr 

.global pop_back__41static_queue_Q213xDecalEmitter9unit_data_Fv
pop_back__41static_queue_Q213xDecalEmitter9unit_data_Fv:
/* 8017D220 0017A020  80 83 00 04 */	lwz r4, 4(r3)
/* 8017D224 0017A024  38 04 FF FF */	addi r0, r4, -1
/* 8017D228 0017A028  90 03 00 04 */	stw r0, 4(r3)
/* 8017D22C 0017A02C  4E 80 00 20 */	blr 

.global full__41static_queue_Q213xDecalEmitter9unit_data_CFv
full__41static_queue_Q213xDecalEmitter9unit_data_CFv:
/* 8017D230 0017A030  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8017D234 0017A034  7C 08 02 A6 */	mflr r0
/* 8017D238 0017A038  90 01 00 14 */	stw r0, 0x14(r1)
/* 8017D23C 0017A03C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8017D240 0017A040  93 C1 00 08 */	stw r30, 8(r1)
/* 8017D244 0017A044  7C 7E 1B 78 */	mr r30, r3
/* 8017D248 0017A048  48 00 00 35 */	bl max_size__41static_queue_Q213xDecalEmitter9unit_data_CFv
/* 8017D24C 0017A04C  7C 7F 1B 78 */	mr r31, r3
/* 8017D250 0017A050  7F C3 F3 78 */	mr r3, r30
/* 8017D254 0017A054  4B FF FE 55 */	bl size__41static_queue_Q213xDecalEmitter9unit_data_CFv
/* 8017D258 0017A058  7C 03 F8 50 */	subf r0, r3, r31
/* 8017D25C 0017A05C  7C 00 00 34 */	cntlzw r0, r0
/* 8017D260 0017A060  54 03 D9 7E */	srwi r3, r0, 5
/* 8017D264 0017A064  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8017D268 0017A068  83 C1 00 08 */	lwz r30, 8(r1)
/* 8017D26C 0017A06C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8017D270 0017A070  7C 08 03 A6 */	mtlr r0
/* 8017D274 0017A074  38 21 00 10 */	addi r1, r1, 0x10
/* 8017D278 0017A078  4E 80 00 20 */	blr 

.global max_size__41static_queue_Q213xDecalEmitter9unit_data_CFv
max_size__41static_queue_Q213xDecalEmitter9unit_data_CFv:
/* 8017D27C 0017A07C  80 63 00 08 */	lwz r3, 8(r3)
/* 8017D280 0017A080  38 63 FF FF */	addi r3, r3, -1
/* 8017D284 0017A084  4E 80 00 20 */	blr 

.global erase__41static_queue_Q213xDecalEmitter9unit_data_FRCQ241static_queue_Q213xDecalEmitter9unit_data_8iteratorRCQ241static_queue_Q213xDecalEmitter9unit_data_8iterator
erase__41static_queue_Q213xDecalEmitter9unit_data_FRCQ241static_queue_Q213xDecalEmitter9unit_data_8iteratorRCQ241static_queue_Q213xDecalEmitter9unit_data_8iterator:
/* 8017D288 0017A088  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8017D28C 0017A08C  7C 08 02 A6 */	mflr r0
/* 8017D290 0017A090  80 84 00 00 */	lwz r4, 0(r4)
/* 8017D294 0017A094  90 01 00 14 */	stw r0, 0x14(r1)
/* 8017D298 0017A098  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8017D29C 0017A09C  7C 7F 1B 78 */	mr r31, r3
/* 8017D2A0 0017A0A0  80 C3 00 00 */	lwz r6, 0(r3)
/* 8017D2A4 0017A0A4  7C 04 30 40 */	cmplw r4, r6
/* 8017D2A8 0017A0A8  40 82 00 28 */	bne lbl_8017D2D0
/* 8017D2AC 0017A0AC  80 9F 00 04 */	lwz r4, 4(r31)
/* 8017D2B0 0017A0B0  80 05 00 00 */	lwz r0, 0(r5)
/* 8017D2B4 0017A0B4  7C 86 22 14 */	add r4, r6, r4
/* 8017D2B8 0017A0B8  90 1F 00 00 */	stw r0, 0(r31)
/* 8017D2BC 0017A0BC  80 1F 00 00 */	lwz r0, 0(r31)
/* 8017D2C0 0017A0C0  7C 80 20 50 */	subf r4, r0, r4
/* 8017D2C4 0017A0C4  4B FF FF 51 */	bl mod_max_size__41static_queue_Q213xDecalEmitter9unit_data_CFUl
/* 8017D2C8 0017A0C8  90 7F 00 04 */	stw r3, 4(r31)
/* 8017D2CC 0017A0CC  48 00 00 1C */	b lbl_8017D2E8
lbl_8017D2D0:
/* 8017D2D0 0017A0D0  80 05 00 00 */	lwz r0, 0(r5)
/* 8017D2D4 0017A0D4  7C 84 00 50 */	subf r4, r4, r0
/* 8017D2D8 0017A0D8  4B FF FF 3D */	bl mod_max_size__41static_queue_Q213xDecalEmitter9unit_data_CFUl
/* 8017D2DC 0017A0DC  80 1F 00 04 */	lwz r0, 4(r31)
/* 8017D2E0 0017A0E0  7C 03 00 50 */	subf r0, r3, r0
/* 8017D2E4 0017A0E4  90 1F 00 04 */	stw r0, 4(r31)
lbl_8017D2E8:
/* 8017D2E8 0017A0E8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8017D2EC 0017A0EC  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8017D2F0 0017A0F0  7C 08 03 A6 */	mtlr r0
/* 8017D2F4 0017A0F4  38 21 00 10 */	addi r1, r1, 0x10
/* 8017D2F8 0017A0F8  4E 80 00 20 */	blr 

.global __ne__Q241static_queue_Q213xDecalEmitter9unit_data_8iteratorCFRCQ241static_queue_Q213xDecalEmitter9unit_data_8iterator
__ne__Q241static_queue_Q213xDecalEmitter9unit_data_8iteratorCFRCQ241static_queue_Q213xDecalEmitter9unit_data_8iterator:
/* 8017D2FC 0017A0FC  80 A3 00 00 */	lwz r5, 0(r3)
/* 8017D300 0017A100  80 04 00 00 */	lwz r0, 0(r4)
/* 8017D304 0017A104  7C 65 00 50 */	subf r3, r5, r0
/* 8017D308 0017A108  7C 00 28 50 */	subf r0, r0, r5
/* 8017D30C 0017A10C  7C 60 03 78 */	or r0, r3, r0
/* 8017D310 0017A110  54 03 0F FE */	srwi r3, r0, 0x1f
/* 8017D314 0017A114  4E 80 00 20 */	blr 

.global end__41static_queue_Q213xDecalEmitter9unit_data_CFv
end__41static_queue_Q213xDecalEmitter9unit_data_CFv:
/* 8017D318 0017A118  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8017D31C 0017A11C  7C 08 02 A6 */	mflr r0
/* 8017D320 0017A120  80 83 00 00 */	lwz r4, 0(r3)
/* 8017D324 0017A124  90 01 00 14 */	stw r0, 0x14(r1)
/* 8017D328 0017A128  80 03 00 04 */	lwz r0, 4(r3)
/* 8017D32C 0017A12C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8017D330 0017A130  7C 7F 1B 78 */	mr r31, r3
/* 8017D334 0017A134  7C 84 02 14 */	add r4, r4, r0
/* 8017D338 0017A138  4B FF FE DD */	bl mod_max_size__41static_queue_Q213xDecalEmitter9unit_data_CFUl
/* 8017D33C 0017A13C  7C 64 1B 78 */	mr r4, r3
/* 8017D340 0017A140  7F E3 FB 78 */	mr r3, r31
/* 8017D344 0017A144  4B FF FE 65 */	bl create_iterator__41static_queue_Q213xDecalEmitter9unit_data_CFUl
/* 8017D348 0017A148  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8017D34C 0017A14C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8017D350 0017A150  7C 08 03 A6 */	mtlr r0
/* 8017D354 0017A154  38 21 00 10 */	addi r1, r1, 0x10
/* 8017D358 0017A158  4E 80 00 20 */	blr 

.global __pp__Q241static_queue_Q213xDecalEmitter9unit_data_8iteratorFv
__pp__Q241static_queue_Q213xDecalEmitter9unit_data_8iteratorFv:
/* 8017D35C 0017A15C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8017D360 0017A160  7C 08 02 A6 */	mflr r0
/* 8017D364 0017A164  38 80 00 01 */	li r4, 1
/* 8017D368 0017A168  90 01 00 14 */	stw r0, 0x14(r1)
/* 8017D36C 0017A16C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8017D370 0017A170  7C 7F 1B 78 */	mr r31, r3
/* 8017D374 0017A174  48 00 00 1D */	bl __apl__Q241static_queue_Q213xDecalEmitter9unit_data_8iteratorFi
/* 8017D378 0017A178  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8017D37C 0017A17C  7F E3 FB 78 */	mr r3, r31
/* 8017D380 0017A180  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8017D384 0017A184  7C 08 03 A6 */	mtlr r0
/* 8017D388 0017A188  38 21 00 10 */	addi r1, r1, 0x10
/* 8017D38C 0017A18C  4E 80 00 20 */	blr 

.global __apl__Q241static_queue_Q213xDecalEmitter9unit_data_8iteratorFi
__apl__Q241static_queue_Q213xDecalEmitter9unit_data_8iteratorFi:
/* 8017D390 0017A190  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8017D394 0017A194  7C 08 02 A6 */	mflr r0
/* 8017D398 0017A198  90 01 00 14 */	stw r0, 0x14(r1)
/* 8017D39C 0017A19C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8017D3A0 0017A1A0  7C 7F 1B 78 */	mr r31, r3
/* 8017D3A4 0017A1A4  80 03 00 00 */	lwz r0, 0(r3)
/* 8017D3A8 0017A1A8  80 63 00 04 */	lwz r3, 4(r3)
/* 8017D3AC 0017A1AC  7C 80 22 14 */	add r4, r0, r4
/* 8017D3B0 0017A1B0  4B FF FE 65 */	bl mod_max_size__41static_queue_Q213xDecalEmitter9unit_data_CFUl
/* 8017D3B4 0017A1B4  90 7F 00 00 */	stw r3, 0(r31)
/* 8017D3B8 0017A1B8  7F E3 FB 78 */	mr r3, r31
/* 8017D3BC 0017A1BC  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8017D3C0 0017A1C0  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8017D3C4 0017A1C4  7C 08 03 A6 */	mtlr r0
/* 8017D3C8 0017A1C8  38 21 00 10 */	addi r1, r1, 0x10
/* 8017D3CC 0017A1CC  4E 80 00 20 */	blr 

.global flush__25ptank_pool__color_mat_uv2Fv
flush__25ptank_pool__color_mat_uv2Fv:
/* 8017D3D0 0017A1D0  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8017D3D4 0017A1D4  7C 08 02 A6 */	mflr r0
/* 8017D3D8 0017A1D8  90 01 00 14 */	stw r0, 0x14(r1)
/* 8017D3DC 0017A1DC  38 00 00 04 */	li r0, 4
/* 8017D3E0 0017A1E0  80 A3 00 24 */	lwz r5, 0x24(r3)
/* 8017D3E4 0017A1E4  80 83 00 30 */	lwz r4, 0x30(r3)
/* 8017D3E8 0017A1E8  7C 85 22 14 */	add r4, r5, r4
/* 8017D3EC 0017A1EC  90 83 00 18 */	stw r4, 0x18(r3)
/* 8017D3F0 0017A1F0  80 83 00 30 */	lwz r4, 0x30(r3)
/* 8017D3F4 0017A1F4  90 83 00 1C */	stw r4, 0x1c(r3)
/* 8017D3F8 0017A1F8  90 03 00 20 */	stw r0, 0x20(r3)
/* 8017D3FC 0017A1FC  48 00 2B 41 */	bl flush__10ptank_poolFv
/* 8017D400 0017A200  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8017D404 0017A204  7C 08 03 A6 */	mtlr r0
/* 8017D408 0017A208  38 21 00 10 */	addi r1, r1, 0x10
/* 8017D40C 0017A20C  4E 80 00 20 */	blr 

.global next__25ptank_pool__color_mat_uv2Fv
next__25ptank_pool__color_mat_uv2Fv:
/* 8017D410 0017A210  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8017D414 0017A214  7C 08 02 A6 */	mflr r0
/* 8017D418 0017A218  90 01 00 14 */	stw r0, 0x14(r1)
/* 8017D41C 0017A21C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8017D420 0017A220  7C 7F 1B 78 */	mr r31, r3
/* 8017D424 0017A224  4B F9 A2 49 */	bl at_block_end__10ptank_poolCFv
/* 8017D428 0017A228  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8017D42C 0017A22C  41 82 00 44 */	beq lbl_8017D470
/* 8017D430 0017A230  7F E3 FB 78 */	mr r3, r31
/* 8017D434 0017A234  4B F9 A0 61 */	bl valid__10ptank_poolCFv
/* 8017D438 0017A238  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8017D43C 0017A23C  41 82 00 0C */	beq lbl_8017D448
/* 8017D440 0017A240  7F E3 FB 78 */	mr r3, r31
/* 8017D444 0017A244  4B F9 A1 C5 */	bl unlock_block__10ptank_poolFv
lbl_8017D448:
/* 8017D448 0017A248  7F E3 FB 78 */	mr r3, r31
/* 8017D44C 0017A24C  38 80 00 00 */	li r4, 0
/* 8017D450 0017A250  48 00 28 AD */	bl grab_block__10ptank_poolF16ptank_group_type
/* 8017D454 0017A254  7F E3 FB 78 */	mr r3, r31
/* 8017D458 0017A258  4B F9 A0 3D */	bl valid__10ptank_poolCFv
/* 8017D45C 0017A25C  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8017D460 0017A260  41 82 00 4C */	beq lbl_8017D4AC
/* 8017D464 0017A264  7F E3 FB 78 */	mr r3, r31
/* 8017D468 0017A268  48 00 00 59 */	bl lock_block__25ptank_pool__color_mat_uv2Fv
/* 8017D46C 0017A26C  48 00 00 34 */	b lbl_8017D4A0
lbl_8017D470:
/* 8017D470 0017A270  80 7F 00 24 */	lwz r3, 0x24(r31)
/* 8017D474 0017A274  80 1F 00 30 */	lwz r0, 0x30(r31)
/* 8017D478 0017A278  7C 03 02 14 */	add r0, r3, r0
/* 8017D47C 0017A27C  90 1F 00 24 */	stw r0, 0x24(r31)
/* 8017D480 0017A280  80 7F 00 28 */	lwz r3, 0x28(r31)
/* 8017D484 0017A284  80 1F 00 30 */	lwz r0, 0x30(r31)
/* 8017D488 0017A288  7C 03 02 14 */	add r0, r3, r0
/* 8017D48C 0017A28C  90 1F 00 28 */	stw r0, 0x28(r31)
/* 8017D490 0017A290  80 7F 00 2C */	lwz r3, 0x2c(r31)
/* 8017D494 0017A294  80 1F 00 30 */	lwz r0, 0x30(r31)
/* 8017D498 0017A298  7C 03 02 14 */	add r0, r3, r0
/* 8017D49C 0017A29C  90 1F 00 2C */	stw r0, 0x2c(r31)
lbl_8017D4A0:
/* 8017D4A0 0017A2A0  80 7F 00 10 */	lwz r3, 0x10(r31)
/* 8017D4A4 0017A2A4  38 03 00 01 */	addi r0, r3, 1
/* 8017D4A8 0017A2A8  90 1F 00 10 */	stw r0, 0x10(r31)
lbl_8017D4AC:
/* 8017D4AC 0017A2AC  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8017D4B0 0017A2B0  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8017D4B4 0017A2B4  7C 08 03 A6 */	mtlr r0
/* 8017D4B8 0017A2B8  38 21 00 10 */	addi r1, r1, 0x10
/* 8017D4BC 0017A2BC  4E 80 00 20 */	blr 

.global lock_block__25ptank_pool__color_mat_uv2Fv
lock_block__25ptank_pool__color_mat_uv2Fv:
/* 8017D4C0 0017A2C0  94 21 FF D0 */	stwu r1, -0x30(r1)
/* 8017D4C4 0017A2C4  7C 08 02 A6 */	mflr r0
/* 8017D4C8 0017A2C8  38 A0 00 02 */	li r5, 2
/* 8017D4CC 0017A2CC  3C C0 40 00 */	lis r6, 0x4000
/* 8017D4D0 0017A2D0  90 01 00 34 */	stw r0, 0x34(r1)
/* 8017D4D4 0017A2D4  38 81 00 18 */	addi r4, r1, 0x18
/* 8017D4D8 0017A2D8  93 E1 00 2C */	stw r31, 0x2c(r1)
/* 8017D4DC 0017A2DC  7C 7F 1B 78 */	mr r31, r3
/* 8017D4E0 0017A2E0  80 63 00 14 */	lwz r3, 0x14(r3)
/* 8017D4E4 0017A2E4  48 08 92 B1 */	bl RpPTankAtomicLock
/* 8017D4E8 0017A2E8  80 7F 00 14 */	lwz r3, 0x14(r31)
/* 8017D4EC 0017A2EC  38 81 00 10 */	addi r4, r1, 0x10
/* 8017D4F0 0017A2F0  38 A0 00 08 */	li r5, 8
/* 8017D4F4 0017A2F4  3C C0 40 00 */	lis r6, 0x4000
/* 8017D4F8 0017A2F8  48 08 92 9D */	bl RpPTankAtomicLock
/* 8017D4FC 0017A2FC  80 7F 00 14 */	lwz r3, 0x14(r31)
/* 8017D500 0017A300  38 81 00 08 */	addi r4, r1, 8
/* 8017D504 0017A304  38 A0 00 80 */	li r5, 0x80
/* 8017D508 0017A308  3C C0 40 00 */	lis r6, 0x4000
/* 8017D50C 0017A30C  48 08 92 89 */	bl RpPTankAtomicLock
/* 8017D510 0017A310  80 01 00 18 */	lwz r0, 0x18(r1)
/* 8017D514 0017A314  90 1F 00 24 */	stw r0, 0x24(r31)
/* 8017D518 0017A318  80 01 00 10 */	lwz r0, 0x10(r1)
/* 8017D51C 0017A31C  90 1F 00 28 */	stw r0, 0x28(r31)
/* 8017D520 0017A320  80 01 00 08 */	lwz r0, 8(r1)
/* 8017D524 0017A324  90 1F 00 2C */	stw r0, 0x2c(r31)
/* 8017D528 0017A328  80 01 00 1C */	lwz r0, 0x1c(r1)
/* 8017D52C 0017A32C  90 1F 00 30 */	stw r0, 0x30(r31)
/* 8017D530 0017A330  83 E1 00 2C */	lwz r31, 0x2c(r1)
/* 8017D534 0017A334  80 01 00 34 */	lwz r0, 0x34(r1)
/* 8017D538 0017A338  7C 08 03 A6 */	mtlr r0
/* 8017D53C 0017A33C  38 21 00 30 */	addi r1, r1, 0x30
/* 8017D540 0017A340  4E 80 00 20 */	blr 
