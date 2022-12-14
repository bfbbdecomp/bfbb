.include "macros.inc"
.file "xDecal.cpp"

# 0x8017C420 - 0x8017D010
.text
.balign 4

# @unnamed@xDecal_cpp@::register_emitter(xDecalEmitter*)
.fn "register_emitter__20@unnamed@xDecal_cpp@FP13xDecalEmitter", local
/* 8017C420 00179500  80 0D 97 B0 */	lwz r0, "active_emitters_size__20@unnamed@xDecal_cpp@"@sda21(r13)
/* 8017C424 00179504  28 00 00 20 */	cmplwi r0, 0x20
/* 8017C428 00179508  4C 80 00 20 */	bgelr
/* 8017C42C 0017950C  3C 80 80 33 */	lis r4, "active_emitters__20@unnamed@xDecal_cpp@"@ha
/* 8017C430 00179510  54 00 10 3A */	slwi r0, r0, 2
/* 8017C434 00179514  38 84 B4 48 */	addi r4, r4, "active_emitters__20@unnamed@xDecal_cpp@"@l
/* 8017C438 00179518  7C 64 01 2E */	stwx r3, r4, r0
/* 8017C43C 0017951C  80 6D 97 B0 */	lwz r3, "active_emitters_size__20@unnamed@xDecal_cpp@"@sda21(r13)
/* 8017C440 00179520  38 03 00 01 */	addi r0, r3, 0x1
/* 8017C444 00179524  90 0D 97 B0 */	stw r0, "active_emitters_size__20@unnamed@xDecal_cpp@"@sda21(r13)
/* 8017C448 00179528  4E 80 00 20 */	blr
.endfn "register_emitter__20@unnamed@xDecal_cpp@FP13xDecalEmitter"

# xDecalInit()
.fn xDecalInit__Fv, global
/* 8017C44C 0017952C  38 00 00 00 */	li r0, 0x0
/* 8017C450 00179530  90 0D 97 B0 */	stw r0, "active_emitters_size__20@unnamed@xDecal_cpp@"@sda21(r13)
/* 8017C454 00179534  4E 80 00 20 */	blr
.endfn xDecalInit__Fv

# xDecalUpdate(float)
.fn xDecalUpdate__Ff, global
/* 8017C458 00179538  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 8017C45C 0017953C  7C 08 02 A6 */	mflr r0
/* 8017C460 00179540  3C 60 80 33 */	lis r3, "active_emitters__20@unnamed@xDecal_cpp@"@ha
/* 8017C464 00179544  90 01 00 24 */	stw r0, 0x24(r1)
/* 8017C468 00179548  DB E1 00 18 */	stfd f31, 0x18(r1)
/* 8017C46C 0017954C  FF E0 08 90 */	fmr f31, f1
/* 8017C470 00179550  93 E1 00 14 */	stw r31, 0x14(r1)
/* 8017C474 00179554  3B E3 B4 48 */	addi r31, r3, "active_emitters__20@unnamed@xDecal_cpp@"@l
/* 8017C478 00179558  93 C1 00 10 */	stw r30, 0x10(r1)
/* 8017C47C 0017955C  3B C0 00 00 */	li r30, 0x0
/* 8017C480 00179560  48 00 00 28 */	b .L_8017C4A8
.L_8017C484:
/* 8017C484 00179564  80 7F 00 00 */	lwz r3, 0x0(r31)
/* 8017C488 00179568  48 00 0B 89 */	bl need_update__13xDecalEmitterCFv
/* 8017C48C 0017956C  54 60 06 3F */	clrlwi. r0, r3, 24
/* 8017C490 00179570  41 82 00 10 */	beq .L_8017C4A0
/* 8017C494 00179574  FC 20 F8 90 */	fmr f1, f31
/* 8017C498 00179578  80 7F 00 00 */	lwz r3, 0x0(r31)
/* 8017C49C 0017957C  48 00 06 1D */	bl update__13xDecalEmitterFf
.L_8017C4A0:
/* 8017C4A0 00179580  3B FF 00 04 */	addi r31, r31, 0x4
/* 8017C4A4 00179584  3B DE 00 01 */	addi r30, r30, 0x1
.L_8017C4A8:
/* 8017C4A8 00179588  80 0D 97 B0 */	lwz r0, "active_emitters_size__20@unnamed@xDecal_cpp@"@sda21(r13)
/* 8017C4AC 0017958C  7C 1E 00 40 */	cmplw r30, r0
/* 8017C4B0 00179590  41 80 FF D4 */	blt .L_8017C484
/* 8017C4B4 00179594  80 01 00 24 */	lwz r0, 0x24(r1)
/* 8017C4B8 00179598  CB E1 00 18 */	lfd f31, 0x18(r1)
/* 8017C4BC 0017959C  83 E1 00 14 */	lwz r31, 0x14(r1)
/* 8017C4C0 001795A0  83 C1 00 10 */	lwz r30, 0x10(r1)
/* 8017C4C4 001795A4  7C 08 03 A6 */	mtlr r0
/* 8017C4C8 001795A8  38 21 00 20 */	addi r1, r1, 0x20
/* 8017C4CC 001795AC  4E 80 00 20 */	blr
.endfn xDecalUpdate__Ff

# xDecalEmitter::init(int, const char*)
.fn init__13xDecalEmitterFiPCc, global
/* 8017C4D0 001795B0  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 8017C4D4 001795B4  7C 08 02 A6 */	mflr r0
/* 8017C4D8 001795B8  90 01 00 24 */	stw r0, 0x24(r1)
/* 8017C4DC 001795BC  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 8017C4E0 001795C0  7C BF 2B 78 */	mr r31, r5
/* 8017C4E4 001795C4  93 C1 00 18 */	stw r30, 0x18(r1)
/* 8017C4E8 001795C8  7C 9E 23 78 */	mr r30, r4
/* 8017C4EC 001795CC  93 A1 00 14 */	stw r29, 0x14(r1)
/* 8017C4F0 001795D0  7C 7D 1B 78 */	mr r29, r3
/* 8017C4F4 001795D4  4B FF FF 2D */	bl "register_emitter__20@unnamed@xDecal_cpp@FP13xDecalEmitter"
/* 8017C4F8 001795D8  7F C4 F3 78 */	mr r4, r30
/* 8017C4FC 001795DC  38 7D 00 44 */	addi r3, r29, 0x44
/* 8017C500 001795E0  48 00 0B B1 */	bl "init__41static_queue<Q213xDecalEmitter9unit_data>FUl"
/* 8017C504 001795E4  7F A3 EB 78 */	mr r3, r29
/* 8017C508 001795E8  7F E4 FB 78 */	mr r4, r31
/* 8017C50C 001795EC  48 00 0B 69 */	bl debug_init__13xDecalEmitterFPCc
/* 8017C510 001795F0  80 01 00 24 */	lwz r0, 0x24(r1)
/* 8017C514 001795F4  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 8017C518 001795F8  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 8017C51C 001795FC  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 8017C520 00179600  7C 08 03 A6 */	mtlr r0
/* 8017C524 00179604  38 21 00 20 */	addi r1, r1, 0x20
/* 8017C528 00179608  4E 80 00 20 */	blr
.endfn init__13xDecalEmitterFiPCc

# xDecalEmitter::set_default_config()
.fn set_default_config__13xDecalEmitterFv, global
/* 8017C52C 0017960C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8017C530 00179610  7C 08 02 A6 */	mflr r0
/* 8017C534 00179614  38 80 00 05 */	li r4, 0x5
/* 8017C538 00179618  90 01 00 14 */	stw r0, 0x14(r1)
/* 8017C53C 0017961C  38 00 00 00 */	li r0, 0x0
/* 8017C540 00179620  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8017C544 00179624  7C 7F 1B 78 */	mr r31, r3
/* 8017C548 00179628  90 03 00 00 */	stw r0, 0x0(r3)
/* 8017C54C 0017962C  38 00 00 02 */	li r0, 0x2
/* 8017C550 00179630  38 7F 00 10 */	addi r3, r31, 0x10
/* 8017C554 00179634  C0 02 AD F8 */	lfs f0, "@805"@sda21(r2)
/* 8017C558 00179638  D0 1F 00 04 */	stfs f0, 0x4(r31)
/* 8017C55C 0017963C  90 9F 00 08 */	stw r4, 0x8(r31)
/* 8017C560 00179640  90 1F 00 0C */	stw r0, 0xc(r31)
/* 8017C564 00179644  C0 22 AD FC */	lfs f1, "@806"@sda21(r2)
/* 8017C568 00179648  FC 40 08 90 */	fmr f2, f1
/* 8017C56C 0017964C  4B EA 9D AD */	bl assign__5xVec2Fff
/* 8017C570 00179650  C0 22 AD F8 */	lfs f1, "@805"@sda21(r2)
/* 8017C574 00179654  38 7F 00 18 */	addi r3, r31, 0x18
/* 8017C578 00179658  FC 40 08 90 */	fmr f2, f1
/* 8017C57C 0017965C  4B EA 9D 9D */	bl assign__5xVec2Fff
/* 8017C580 00179660  38 80 00 01 */	li r4, 0x1
/* 8017C584 00179664  38 00 00 00 */	li r0, 0x0
/* 8017C588 00179668  98 9F 00 21 */	stb r4, 0x21(r31)
/* 8017C58C 0017966C  7F E3 FB 78 */	mr r3, r31
/* 8017C590 00179670  98 9F 00 20 */	stb r4, 0x20(r31)
/* 8017C594 00179674  90 1F 00 24 */	stw r0, 0x24(r31)
/* 8017C598 00179678  48 00 00 B5 */	bl refresh_config__13xDecalEmitterFv
/* 8017C59C 0017967C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8017C5A0 00179680  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8017C5A4 00179684  7C 08 03 A6 */	mtlr r0
/* 8017C5A8 00179688  38 21 00 10 */	addi r1, r1, 0x10
/* 8017C5AC 0017968C  4E 80 00 20 */	blr
.endfn set_default_config__13xDecalEmitterFv

# xDecalEmitter::set_texture(const char*)
.fn set_texture__13xDecalEmitterFPCc, global
/* 8017C5B0 00179690  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8017C5B4 00179694  7C 08 02 A6 */	mflr r0
/* 8017C5B8 00179698  90 01 00 14 */	stw r0, 0x14(r1)
/* 8017C5BC 0017969C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8017C5C0 001796A0  7C 7F 1B 78 */	mr r31, r3
/* 8017C5C4 001796A4  7C 83 23 78 */	mr r3, r4
/* 8017C5C8 001796A8  4B EC FC 4D */	bl xStrHash__FPCc
/* 8017C5CC 001796AC  7C 64 1B 78 */	mr r4, r3
/* 8017C5D0 001796B0  7F E3 FB 78 */	mr r3, r31
/* 8017C5D4 001796B4  48 00 00 19 */	bl set_texture__13xDecalEmitterFUi
/* 8017C5D8 001796B8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8017C5DC 001796BC  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8017C5E0 001796C0  7C 08 03 A6 */	mtlr r0
/* 8017C5E4 001796C4  38 21 00 10 */	addi r1, r1, 0x10
/* 8017C5E8 001796C8  4E 80 00 20 */	blr
.endfn set_texture__13xDecalEmitterFPCc

# xDecalEmitter::set_texture(unsigned int)
.fn set_texture__13xDecalEmitterFUi, global
/* 8017C5EC 001796CC  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8017C5F0 001796D0  7C 08 02 A6 */	mflr r0
/* 8017C5F4 001796D4  28 04 00 00 */	cmplwi r4, 0x0
/* 8017C5F8 001796D8  90 01 00 14 */	stw r0, 0x14(r1)
/* 8017C5FC 001796DC  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8017C600 001796E0  7C 7F 1B 78 */	mr r31, r3
/* 8017C604 001796E4  40 82 00 0C */	bne .L_8017C610
/* 8017C608 001796E8  38 80 00 00 */	li r4, 0x0
/* 8017C60C 001796EC  48 00 00 14 */	b .L_8017C620
.L_8017C610:
/* 8017C610 001796F0  7C 83 23 78 */	mr r3, r4
/* 8017C614 001796F4  38 80 00 00 */	li r4, 0x0
/* 8017C618 001796F8  4B EC F0 F5 */	bl xSTFindAsset__FUiPUi
/* 8017C61C 001796FC  7C 64 1B 78 */	mr r4, r3
.L_8017C620:
/* 8017C620 00179700  7F E3 FB 78 */	mr r3, r31
/* 8017C624 00179704  48 00 00 19 */	bl set_texture__13xDecalEmitterFP9RwTexture
/* 8017C628 00179708  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8017C62C 0017970C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8017C630 00179710  7C 08 03 A6 */	mtlr r0
/* 8017C634 00179714  38 21 00 10 */	addi r1, r1, 0x10
/* 8017C638 00179718  4E 80 00 20 */	blr
.endfn set_texture__13xDecalEmitterFUi

# xDecalEmitter::set_texture(RwTexture*)
.fn set_texture__13xDecalEmitterFP9RwTexture, global
/* 8017C63C 0017971C  90 83 00 28 */	stw r4, 0x28(r3)
/* 8017C640 00179720  38 00 00 00 */	li r0, 0x0
/* 8017C644 00179724  90 03 00 40 */	stw r0, 0x40(r3)
/* 8017C648 00179728  4E 80 00 20 */	blr
.endfn set_texture__13xDecalEmitterFP9RwTexture

# xDecalEmitter::refresh_config()
.fn refresh_config__13xDecalEmitterFv, global
/* 8017C64C 0017972C  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 8017C650 00179730  7C 08 02 A6 */	mflr r0
/* 8017C654 00179734  90 01 00 24 */	stw r0, 0x24(r1)
/* 8017C658 00179738  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 8017C65C 0017973C  7C 7F 1B 78 */	mr r31, r3
/* 8017C660 00179740  C0 02 AE 00 */	lfs f0, "@834"@sda21(r2)
/* 8017C664 00179744  C0 23 00 04 */	lfs f1, 0x4(r3)
/* 8017C668 00179748  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8017C66C 0017974C  40 80 00 08 */	bge .L_8017C674
/* 8017C670 00179750  D0 1F 00 04 */	stfs f0, 0x4(r31)
.L_8017C674:
/* 8017C674 00179754  C0 22 AD F8 */	lfs f1, "@805"@sda21(r2)
/* 8017C678 00179758  C0 1F 00 04 */	lfs f0, 0x4(r31)
/* 8017C67C 0017975C  EC 01 00 24 */	fdivs f0, f1, f0
/* 8017C680 00179760  D0 1F 00 64 */	stfs f0, 0x64(r31)
/* 8017C684 00179764  88 1F 00 20 */	lbz r0, 0x20(r31)
/* 8017C688 00179768  28 00 00 00 */	cmplwi r0, 0x0
/* 8017C68C 0017976C  40 82 00 0C */	bne .L_8017C698
/* 8017C690 00179770  38 00 00 01 */	li r0, 0x1
/* 8017C694 00179774  98 1F 00 20 */	stb r0, 0x20(r31)
.L_8017C698:
/* 8017C698 00179778  88 1F 00 21 */	lbz r0, 0x21(r31)
/* 8017C69C 0017977C  28 00 00 00 */	cmplwi r0, 0x0
/* 8017C6A0 00179780  40 82 00 0C */	bne .L_8017C6AC
/* 8017C6A4 00179784  38 00 00 01 */	li r0, 0x1
/* 8017C6A8 00179788  98 1F 00 21 */	stb r0, 0x21(r31)
.L_8017C6AC:
/* 8017C6AC 0017978C  C0 3F 00 10 */	lfs f1, 0x10(r31)
/* 8017C6B0 00179790  C0 42 AD FC */	lfs f2, "@806"@sda21(r2)
/* 8017C6B4 00179794  C0 62 AE 04 */	lfs f3, "@835"@sda21(r2)
/* 8017C6B8 00179798  4B E9 22 81 */	bl "range_limit<f>__Ffff"
/* 8017C6BC 0017979C  D0 3F 00 10 */	stfs f1, 0x10(r31)
/* 8017C6C0 001797A0  C0 3F 00 14 */	lfs f1, 0x14(r31)
/* 8017C6C4 001797A4  C0 42 AD FC */	lfs f2, "@806"@sda21(r2)
/* 8017C6C8 001797A8  C0 62 AE 04 */	lfs f3, "@835"@sda21(r2)
/* 8017C6CC 001797AC  4B E9 22 6D */	bl "range_limit<f>__Ffff"
/* 8017C6D0 001797B0  D0 3F 00 14 */	stfs f1, 0x14(r31)
/* 8017C6D4 001797B4  C0 42 AE 08 */	lfs f2, "@836"@sda21(r2)
/* 8017C6D8 001797B8  C0 1F 00 10 */	lfs f0, 0x10(r31)
/* 8017C6DC 001797BC  C0 3F 00 18 */	lfs f1, 0x18(r31)
/* 8017C6E0 001797C0  EC 42 00 2A */	fadds f2, f2, f0
/* 8017C6E4 001797C4  C0 62 AD F8 */	lfs f3, "@805"@sda21(r2)
/* 8017C6E8 001797C8  4B E9 22 51 */	bl "range_limit<f>__Ffff"
/* 8017C6EC 001797CC  D0 3F 00 18 */	stfs f1, 0x18(r31)
/* 8017C6F0 001797D0  C0 42 AE 08 */	lfs f2, "@836"@sda21(r2)
/* 8017C6F4 001797D4  C0 1F 00 14 */	lfs f0, 0x14(r31)
/* 8017C6F8 001797D8  C0 3F 00 1C */	lfs f1, 0x1c(r31)
/* 8017C6FC 001797DC  EC 42 00 2A */	fadds f2, f2, f0
/* 8017C700 001797E0  C0 62 AD F8 */	lfs f3, "@805"@sda21(r2)
/* 8017C704 001797E4  4B E9 22 35 */	bl "range_limit<f>__Ffff"
/* 8017C708 001797E8  D0 3F 00 1C */	stfs f1, 0x1c(r31)
/* 8017C70C 001797EC  3C 00 43 30 */	lis r0, 0x4330
/* 8017C710 001797F0  38 7F 00 38 */	addi r3, r31, 0x38
/* 8017C714 001797F4  88 BF 00 20 */	lbz r5, 0x20(r31)
/* 8017C718 001797F8  88 9F 00 21 */	lbz r4, 0x21(r31)
/* 8017C71C 001797FC  90 01 00 08 */	stw r0, 0x8(r1)
/* 8017C720 00179800  7C 85 21 D6 */	mullw r4, r5, r4
/* 8017C724 00179804  90 01 00 10 */	stw r0, 0x10(r1)
/* 8017C728 00179808  90 9F 00 2C */	stw r4, 0x2c(r31)
/* 8017C72C 0017980C  88 1F 00 21 */	lbz r0, 0x21(r31)
/* 8017C730 00179810  C0 7F 00 18 */	lfs f3, 0x18(r31)
/* 8017C734 00179814  90 01 00 0C */	stw r0, 0xc(r1)
/* 8017C738 00179818  C0 5F 00 10 */	lfs f2, 0x10(r31)
/* 8017C73C 0017981C  C8 22 AE 10 */	lfd f1, "@838"@sda21(r2)
/* 8017C740 00179820  C8 01 00 08 */	lfd f0, 0x8(r1)
/* 8017C744 00179824  EC 43 10 28 */	fsubs f2, f3, f2
/* 8017C748 00179828  EC 00 08 28 */	fsubs f0, f0, f1
/* 8017C74C 0017982C  EC 02 00 24 */	fdivs f0, f2, f0
/* 8017C750 00179830  D0 1F 00 30 */	stfs f0, 0x30(r31)
/* 8017C754 00179834  88 1F 00 20 */	lbz r0, 0x20(r31)
/* 8017C758 00179838  C0 7F 00 1C */	lfs f3, 0x1c(r31)
/* 8017C75C 0017983C  90 01 00 14 */	stw r0, 0x14(r1)
/* 8017C760 00179840  C0 5F 00 14 */	lfs f2, 0x14(r31)
/* 8017C764 00179844  C8 22 AE 10 */	lfd f1, "@838"@sda21(r2)
/* 8017C768 00179848  C8 01 00 10 */	lfd f0, 0x10(r1)
/* 8017C76C 0017984C  EC 43 10 28 */	fsubs f2, f3, f2
/* 8017C770 00179850  EC 00 08 28 */	fsubs f0, f0, f1
/* 8017C774 00179854  EC 02 00 24 */	fdivs f0, f2, f0
/* 8017C778 00179858  D0 1F 00 34 */	stfs f0, 0x34(r31)
/* 8017C77C 0017985C  C0 42 AD F8 */	lfs f2, "@805"@sda21(r2)
/* 8017C780 00179860  C0 3F 00 30 */	lfs f1, 0x30(r31)
/* 8017C784 00179864  C0 1F 00 34 */	lfs f0, 0x34(r31)
/* 8017C788 00179868  EC 22 08 24 */	fdivs f1, f2, f1
/* 8017C78C 0017986C  EC 42 00 24 */	fdivs f2, f2, f0
/* 8017C790 00179870  4B EA 9B 89 */	bl assign__5xVec2Fff
/* 8017C794 00179874  80 01 00 24 */	lwz r0, 0x24(r1)
/* 8017C798 00179878  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 8017C79C 0017987C  7C 08 03 A6 */	mtlr r0
/* 8017C7A0 00179880  38 21 00 20 */	addi r1, r1, 0x20
/* 8017C7A4 00179884  4E 80 00 20 */	blr
.endfn refresh_config__13xDecalEmitterFv

# xDecalEmitter::set_curve(const xDecalEmitter::curve_node*, unsigned long)
.fn set_curve__13xDecalEmitterFPCQ213xDecalEmitter10curve_nodeUl, global
/* 8017C7A8 00179888  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8017C7AC 0017988C  7C 08 02 A6 */	mflr r0
/* 8017C7B0 00179890  90 01 00 14 */	stw r0, 0x14(r1)
/* 8017C7B4 00179894  90 A3 00 5C */	stw r5, 0x5c(r3)
/* 8017C7B8 00179898  90 83 00 58 */	stw r4, 0x58(r3)
/* 8017C7BC 0017989C  48 00 08 BD */	bl debug_update_curve__13xDecalEmitterFv
/* 8017C7C0 001798A0  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8017C7C4 001798A4  7C 08 03 A6 */	mtlr r0
/* 8017C7C8 001798A8  38 21 00 10 */	addi r1, r1, 0x10
/* 8017C7CC 001798AC  4E 80 00 20 */	blr
.endfn set_curve__13xDecalEmitterFPCQ213xDecalEmitter10curve_nodeUl

# xDecalEmitter::emit(const xMat4x3&, int)
.fn emit__13xDecalEmitterFRC7xMat4x3i, global
/* 8017C7D0 001798B0  94 21 FF C0 */	stwu r1, -0x40(r1)
/* 8017C7D4 001798B4  7C 08 02 A6 */	mflr r0
/* 8017C7D8 001798B8  90 01 00 44 */	stw r0, 0x44(r1)
/* 8017C7DC 001798BC  DB E1 00 30 */	stfd f31, 0x30(r1)
/* 8017C7E0 001798C0  F3 E1 00 38 */	psq_st f31, 0x38(r1), 0, qr0
/* 8017C7E4 001798C4  DB C1 00 20 */	stfd f30, 0x20(r1)
/* 8017C7E8 001798C8  F3 C1 00 28 */	psq_st f30, 0x28(r1), 0, qr0
/* 8017C7EC 001798CC  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 8017C7F0 001798D0  93 C1 00 18 */	stw r30, 0x18(r1)
/* 8017C7F4 001798D4  93 A1 00 14 */	stw r29, 0x14(r1)
/* 8017C7F8 001798D8  93 81 00 10 */	stw r28, 0x10(r1)
/* 8017C7FC 001798DC  7C 7C 1B 78 */	mr r28, r3
/* 8017C800 001798E0  7C 9D 23 78 */	mr r29, r4
/* 8017C804 001798E4  7C BE 2B 78 */	mr r30, r5
/* 8017C808 001798E8  38 7C 00 44 */	addi r3, r28, 0x44
/* 8017C80C 001798EC  48 00 0A 25 */	bl "full__41static_queue<Q213xDecalEmitter9unit_data>CFv"
/* 8017C810 001798F0  54 60 06 3F */	clrlwi. r0, r3, 24
/* 8017C814 001798F4  41 82 00 0C */	beq .L_8017C820
/* 8017C818 001798F8  38 7C 00 44 */	addi r3, r28, 0x44
/* 8017C81C 001798FC  48 00 0A 05 */	bl "pop_back__41static_queue<Q213xDecalEmitter9unit_data>Fv"
.L_8017C820:
/* 8017C820 00179900  38 7C 00 44 */	addi r3, r28, 0x44
/* 8017C824 00179904  48 00 09 A5 */	bl "push_front__41static_queue<Q213xDecalEmitter9unit_data>Fv"
/* 8017C828 00179908  38 7C 00 44 */	addi r3, r28, 0x44
/* 8017C82C 0017990C  48 00 09 11 */	bl "front__41static_queue<Q213xDecalEmitter9unit_data>Fv"
/* 8017C830 00179910  C0 02 AD FC */	lfs f0, "@806"@sda21(r2)
/* 8017C834 00179914  7C 7F 1B 78 */	mr r31, r3
/* 8017C838 00179918  D0 03 00 08 */	stfs f0, 0x8(r3)
/* 8017C83C 0017991C  80 1C 00 00 */	lwz r0, 0x0(r28)
/* 8017C840 00179920  54 00 07 BD */	rlwinm. r0, r0, 0, 30, 30
/* 8017C844 00179924  41 82 00 30 */	beq .L_8017C874
/* 8017C848 00179928  C0 22 AD F8 */	lfs f1, "@805"@sda21(r2)
/* 8017C84C 0017992C  38 7F 00 10 */	addi r3, r31, 0x10
/* 8017C850 00179930  FC 40 08 90 */	fmr f2, f1
/* 8017C854 00179934  FC 60 08 90 */	fmr f3, f1
/* 8017C858 00179938  4B E8 E8 95 */	bl assign__5xVec3Ffff
/* 8017C85C 0017993C  38 7F 00 40 */	addi r3, r31, 0x40
/* 8017C860 00179940  38 9D 00 30 */	addi r4, r29, 0x30
/* 8017C864 00179944  4B E8 EA 01 */	bl __as__5xVec3FRC5xVec3
/* 8017C868 00179948  C0 02 AE 18 */	lfs f0, "@875"@sda21(r2)
/* 8017C86C 0017994C  D0 1F 00 0C */	stfs f0, 0xc(r31)
/* 8017C870 00179950  48 00 00 48 */	b .L_8017C8B8
.L_8017C874:
/* 8017C874 00179954  7F A4 EB 78 */	mr r4, r29
/* 8017C878 00179958  38 7F 00 10 */	addi r3, r31, 0x10
/* 8017C87C 0017995C  4B E8 EC F1 */	bl __as__7xMat4x3FRC7xMat4x3
/* 8017C880 00179960  38 7F 00 30 */	addi r3, r31, 0x30
/* 8017C884 00179964  4B E8 E9 25 */	bl length__5xVec3CFv
/* 8017C888 00179968  FF C0 08 90 */	fmr f30, f1
/* 8017C88C 0017996C  38 7F 00 20 */	addi r3, r31, 0x20
/* 8017C890 00179970  4B E8 E9 19 */	bl length__5xVec3CFv
/* 8017C894 00179974  FF E0 08 90 */	fmr f31, f1
/* 8017C898 00179978  38 7F 00 10 */	addi r3, r31, 0x10
/* 8017C89C 0017997C  4B E8 E9 0D */	bl length__5xVec3CFv
/* 8017C8A0 00179980  FC 40 F8 90 */	fmr f2, f31
/* 8017C8A4 00179984  FC 60 F0 90 */	fmr f3, f30
/* 8017C8A8 00179988  48 00 00 81 */	bl "choose_greatest__20@unnamed@xDecal_cpp@Ffff"
/* 8017C8AC 0017998C  C0 02 AE 18 */	lfs f0, "@875"@sda21(r2)
/* 8017C8B0 00179990  EC 00 00 72 */	fmuls f0, f0, f1
/* 8017C8B4 00179994  D0 1F 00 0C */	stfs f0, 0xc(r31)
.L_8017C8B8:
/* 8017C8B8 00179998  2C 1E 00 00 */	cmpwi r30, 0x0
/* 8017C8BC 0017999C  41 80 00 10 */	blt .L_8017C8CC
/* 8017C8C0 001799A0  80 1C 00 2C */	lwz r0, 0x2c(r28)
/* 8017C8C4 001799A4  7C 1E 00 00 */	cmpw r30, r0
/* 8017C8C8 001799A8  40 81 00 10 */	ble .L_8017C8D8
.L_8017C8CC:
/* 8017C8CC 001799AC  7F 83 E3 78 */	mr r3, r28
/* 8017C8D0 001799B0  48 00 06 B9 */	bl select_texture_unit__13xDecalEmitterFv
/* 8017C8D4 001799B4  7C 7E 1B 78 */	mr r30, r3
.L_8017C8D8:
/* 8017C8D8 001799B8  88 7C 00 20 */	lbz r3, 0x20(r28)
/* 8017C8DC 001799BC  7C 1E 1B D6 */	divw r0, r30, r3
/* 8017C8E0 001799C0  7C 00 19 D6 */	mullw r0, r0, r3
/* 8017C8E4 001799C4  7C 00 F0 50 */	subf r0, r0, r30
/* 8017C8E8 001799C8  98 1F 00 02 */	stb r0, 0x2(r31)
/* 8017C8EC 001799CC  88 1C 00 20 */	lbz r0, 0x20(r28)
/* 8017C8F0 001799D0  7C 1E 03 D6 */	divw r0, r30, r0
/* 8017C8F4 001799D4  98 1F 00 03 */	stb r0, 0x3(r31)
/* 8017C8F8 001799D8  E3 E1 00 38 */	psq_l f31, 0x38(r1), 0, qr0
/* 8017C8FC 001799DC  CB E1 00 30 */	lfd f31, 0x30(r1)
/* 8017C900 001799E0  E3 C1 00 28 */	psq_l f30, 0x28(r1), 0, qr0
/* 8017C904 001799E4  CB C1 00 20 */	lfd f30, 0x20(r1)
/* 8017C908 001799E8  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 8017C90C 001799EC  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 8017C910 001799F0  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 8017C914 001799F4  80 01 00 44 */	lwz r0, 0x44(r1)
/* 8017C918 001799F8  83 81 00 10 */	lwz r28, 0x10(r1)
/* 8017C91C 001799FC  7C 08 03 A6 */	mtlr r0
/* 8017C920 00179A00  38 21 00 40 */	addi r1, r1, 0x40
/* 8017C924 00179A04  4E 80 00 20 */	blr
.endfn emit__13xDecalEmitterFRC7xMat4x3i

# @unnamed@xDecal_cpp@::choose_greatest(float, float, float)
.fn "choose_greatest__20@unnamed@xDecal_cpp@Ffff", local
/* 8017C928 00179A08  FC 01 10 40 */	fcmpo cr0, f1, f2
/* 8017C92C 00179A0C  40 80 00 08 */	bge .L_8017C934
/* 8017C930 00179A10  FC 20 10 90 */	fmr f1, f2
.L_8017C934:
/* 8017C934 00179A14  FC 01 18 40 */	fcmpo cr0, f1, f3
/* 8017C938 00179A18  4C 80 00 20 */	bgelr
/* 8017C93C 00179A1C  FC 20 18 90 */	fmr f1, f3
/* 8017C940 00179A20  4E 80 00 20 */	blr
.endfn "choose_greatest__20@unnamed@xDecal_cpp@Ffff"

# xDecalEmitter::emit(const xMat4x3&, const xVec3&, int)
.fn emit__13xDecalEmitterFRC7xMat4x3RC5xVec3i, global
/* 8017C944 00179A24  94 21 FF C0 */	stwu r1, -0x40(r1)
/* 8017C948 00179A28  7C 08 02 A6 */	mflr r0
/* 8017C94C 00179A2C  90 01 00 44 */	stw r0, 0x44(r1)
/* 8017C950 00179A30  DB E1 00 30 */	stfd f31, 0x30(r1)
/* 8017C954 00179A34  F3 E1 00 38 */	psq_st f31, 0x38(r1), 0, qr0
/* 8017C958 00179A38  DB C1 00 20 */	stfd f30, 0x20(r1)
/* 8017C95C 00179A3C  F3 C1 00 28 */	psq_st f30, 0x28(r1), 0, qr0
/* 8017C960 00179A40  BF 61 00 0C */	stmw r27, 0xc(r1)
/* 8017C964 00179A44  7C 7B 1B 78 */	mr r27, r3
/* 8017C968 00179A48  7C 9C 23 78 */	mr r28, r4
/* 8017C96C 00179A4C  7C BD 2B 78 */	mr r29, r5
/* 8017C970 00179A50  7C DE 33 78 */	mr r30, r6
/* 8017C974 00179A54  38 7B 00 44 */	addi r3, r27, 0x44
/* 8017C978 00179A58  48 00 08 B9 */	bl "full__41static_queue<Q213xDecalEmitter9unit_data>CFv"
/* 8017C97C 00179A5C  54 60 06 3F */	clrlwi. r0, r3, 24
/* 8017C980 00179A60  41 82 00 0C */	beq .L_8017C98C
/* 8017C984 00179A64  38 7B 00 44 */	addi r3, r27, 0x44
/* 8017C988 00179A68  48 00 08 99 */	bl "pop_back__41static_queue<Q213xDecalEmitter9unit_data>Fv"
.L_8017C98C:
/* 8017C98C 00179A6C  38 7B 00 44 */	addi r3, r27, 0x44
/* 8017C990 00179A70  48 00 08 39 */	bl "push_front__41static_queue<Q213xDecalEmitter9unit_data>Fv"
/* 8017C994 00179A74  38 7B 00 44 */	addi r3, r27, 0x44
/* 8017C998 00179A78  48 00 07 A5 */	bl "front__41static_queue<Q213xDecalEmitter9unit_data>Fv"
/* 8017C99C 00179A7C  C0 02 AD FC */	lfs f0, "@806"@sda21(r2)
/* 8017C9A0 00179A80  7C 7F 1B 78 */	mr r31, r3
/* 8017C9A4 00179A84  D0 03 00 08 */	stfs f0, 0x8(r3)
/* 8017C9A8 00179A88  80 1B 00 00 */	lwz r0, 0x0(r27)
/* 8017C9AC 00179A8C  54 00 07 BD */	rlwinm. r0, r0, 0, 30, 30
/* 8017C9B0 00179A90  41 82 00 3C */	beq .L_8017C9EC
/* 8017C9B4 00179A94  7F A4 EB 78 */	mr r4, r29
/* 8017C9B8 00179A98  38 7F 00 10 */	addi r3, r31, 0x10
/* 8017C9BC 00179A9C  4B E8 E8 A9 */	bl __as__5xVec3FRC5xVec3
/* 8017C9C0 00179AA0  38 7F 00 40 */	addi r3, r31, 0x40
/* 8017C9C4 00179AA4  38 9C 00 30 */	addi r4, r28, 0x30
/* 8017C9C8 00179AA8  4B E8 E8 9D */	bl __as__5xVec3FRC5xVec3
/* 8017C9CC 00179AAC  C0 3D 00 00 */	lfs f1, 0x0(r29)
/* 8017C9D0 00179AB0  C0 5D 00 04 */	lfs f2, 0x4(r29)
/* 8017C9D4 00179AB4  C0 7D 00 08 */	lfs f3, 0x8(r29)
/* 8017C9D8 00179AB8  4B FF FF 51 */	bl "choose_greatest__20@unnamed@xDecal_cpp@Ffff"
/* 8017C9DC 00179ABC  C0 02 AE 18 */	lfs f0, "@875"@sda21(r2)
/* 8017C9E0 00179AC0  EC 00 00 72 */	fmuls f0, f0, f1
/* 8017C9E4 00179AC4  D0 1F 00 0C */	stfs f0, 0xc(r31)
/* 8017C9E8 00179AC8  48 00 00 6C */	b .L_8017CA54
.L_8017C9EC:
/* 8017C9EC 00179ACC  7F 84 E3 78 */	mr r4, r28
/* 8017C9F0 00179AD0  38 7F 00 10 */	addi r3, r31, 0x10
/* 8017C9F4 00179AD4  4B E8 EB 79 */	bl __as__7xMat4x3FRC7xMat4x3
/* 8017C9F8 00179AD8  C0 3D 00 00 */	lfs f1, 0x0(r29)
/* 8017C9FC 00179ADC  38 7F 00 10 */	addi r3, r31, 0x10
/* 8017CA00 00179AE0  4B E8 E7 81 */	bl __amu__5xVec3Ff
/* 8017CA04 00179AE4  C0 3D 00 04 */	lfs f1, 0x4(r29)
/* 8017CA08 00179AE8  38 7F 00 20 */	addi r3, r31, 0x20
/* 8017CA0C 00179AEC  4B E8 E7 75 */	bl __amu__5xVec3Ff
/* 8017CA10 00179AF0  C0 3D 00 08 */	lfs f1, 0x8(r29)
/* 8017CA14 00179AF4  38 7F 00 30 */	addi r3, r31, 0x30
/* 8017CA18 00179AF8  4B E8 E7 69 */	bl __amu__5xVec3Ff
/* 8017CA1C 00179AFC  38 7F 00 30 */	addi r3, r31, 0x30
/* 8017CA20 00179B00  4B E8 E7 89 */	bl length__5xVec3CFv
/* 8017CA24 00179B04  FF C0 08 90 */	fmr f30, f1
/* 8017CA28 00179B08  38 7F 00 20 */	addi r3, r31, 0x20
/* 8017CA2C 00179B0C  4B E8 E7 7D */	bl length__5xVec3CFv
/* 8017CA30 00179B10  FF E0 08 90 */	fmr f31, f1
/* 8017CA34 00179B14  38 7F 00 10 */	addi r3, r31, 0x10
/* 8017CA38 00179B18  4B E8 E7 71 */	bl length__5xVec3CFv
/* 8017CA3C 00179B1C  FC 40 F8 90 */	fmr f2, f31
/* 8017CA40 00179B20  FC 60 F0 90 */	fmr f3, f30
/* 8017CA44 00179B24  4B FF FE E5 */	bl "choose_greatest__20@unnamed@xDecal_cpp@Ffff"
/* 8017CA48 00179B28  C0 02 AE 18 */	lfs f0, "@875"@sda21(r2)
/* 8017CA4C 00179B2C  EC 00 00 72 */	fmuls f0, f0, f1
/* 8017CA50 00179B30  D0 1F 00 0C */	stfs f0, 0xc(r31)
.L_8017CA54:
/* 8017CA54 00179B34  2C 1E 00 00 */	cmpwi r30, 0x0
/* 8017CA58 00179B38  41 80 00 10 */	blt .L_8017CA68
/* 8017CA5C 00179B3C  80 1B 00 2C */	lwz r0, 0x2c(r27)
/* 8017CA60 00179B40  7C 1E 00 00 */	cmpw r30, r0
/* 8017CA64 00179B44  40 81 00 10 */	ble .L_8017CA74
.L_8017CA68:
/* 8017CA68 00179B48  7F 63 DB 78 */	mr r3, r27
/* 8017CA6C 00179B4C  48 00 05 1D */	bl select_texture_unit__13xDecalEmitterFv
/* 8017CA70 00179B50  7C 7E 1B 78 */	mr r30, r3
.L_8017CA74:
/* 8017CA74 00179B54  88 7B 00 20 */	lbz r3, 0x20(r27)
/* 8017CA78 00179B58  7C 1E 1B D6 */	divw r0, r30, r3
/* 8017CA7C 00179B5C  7C 00 19 D6 */	mullw r0, r0, r3
/* 8017CA80 00179B60  7C 00 F0 50 */	subf r0, r0, r30
/* 8017CA84 00179B64  98 1F 00 02 */	stb r0, 0x2(r31)
/* 8017CA88 00179B68  88 1B 00 20 */	lbz r0, 0x20(r27)
/* 8017CA8C 00179B6C  7C 1E 03 D6 */	divw r0, r30, r0
/* 8017CA90 00179B70  98 1F 00 03 */	stb r0, 0x3(r31)
/* 8017CA94 00179B74  E3 E1 00 38 */	psq_l f31, 0x38(r1), 0, qr0
/* 8017CA98 00179B78  CB E1 00 30 */	lfd f31, 0x30(r1)
/* 8017CA9C 00179B7C  E3 C1 00 28 */	psq_l f30, 0x28(r1), 0, qr0
/* 8017CAA0 00179B80  CB C1 00 20 */	lfd f30, 0x20(r1)
/* 8017CAA4 00179B84  BB 61 00 0C */	lmw r27, 0xc(r1)
/* 8017CAA8 00179B88  80 01 00 44 */	lwz r0, 0x44(r1)
/* 8017CAAC 00179B8C  7C 08 03 A6 */	mtlr r0
/* 8017CAB0 00179B90  38 21 00 40 */	addi r1, r1, 0x40
/* 8017CAB4 00179B94  4E 80 00 20 */	blr
.endfn emit__13xDecalEmitterFRC7xMat4x3RC5xVec3i

# xDecalEmitter::update(float)
.fn update__13xDecalEmitterFf, global
/* 8017CAB8 00179B98  94 21 FF 90 */	stwu r1, -0x70(r1)
/* 8017CABC 00179B9C  7C 08 02 A6 */	mflr r0
/* 8017CAC0 00179BA0  90 01 00 74 */	stw r0, 0x74(r1)
/* 8017CAC4 00179BA4  DB E1 00 60 */	stfd f31, 0x60(r1)
/* 8017CAC8 00179BA8  F3 E1 00 68 */	psq_st f31, 0x68(r1), 0, qr0
/* 8017CACC 00179BAC  93 E1 00 5C */	stw r31, 0x5c(r1)
/* 8017CAD0 00179BB0  93 C1 00 58 */	stw r30, 0x58(r1)
/* 8017CAD4 00179BB4  7C 7F 1B 78 */	mr r31, r3
/* 8017CAD8 00179BB8  FF E0 08 90 */	fmr f31, f1
/* 8017CADC 00179BBC  48 00 05 A1 */	bl debug_update__13xDecalEmitterFf
/* 8017CAE0 00179BC0  C0 1F 00 64 */	lfs f0, 0x64(r31)
/* 8017CAE4 00179BC4  38 61 00 24 */	addi r3, r1, 0x24
/* 8017CAE8 00179BC8  EF FF 00 32 */	fmuls f31, f31, f0
/* 8017CAEC 00179BCC  4B F9 AB 95 */	bl reset__10ptank_poolFv
/* 8017CAF0 00179BD0  80 9F 00 28 */	lwz r4, 0x28(r31)
/* 8017CAF4 00179BD4  38 00 00 00 */	li r0, 0x0
/* 8017CAF8 00179BD8  38 7F 00 44 */	addi r3, r31, 0x44
/* 8017CAFC 00179BDC  90 81 00 24 */	stw r4, 0x24(r1)
/* 8017CB00 00179BE0  80 9F 00 08 */	lwz r4, 0x8(r31)
/* 8017CB04 00179BE4  90 81 00 28 */	stw r4, 0x28(r1)
/* 8017CB08 00179BE8  80 9F 00 0C */	lwz r4, 0xc(r31)
/* 8017CB0C 00179BEC  90 81 00 2C */	stw r4, 0x2c(r1)
/* 8017CB10 00179BF0  80 9F 00 00 */	lwz r4, 0x0(r31)
/* 8017CB14 00179BF4  54 84 07 FE */	clrlwi r4, r4, 31
/* 8017CB18 00179BF8  90 81 00 30 */	stw r4, 0x30(r1)
/* 8017CB1C 00179BFC  90 1F 00 60 */	stw r0, 0x60(r31)
/* 8017CB20 00179C00  48 00 06 65 */	bl "begin__41static_queue<Q213xDecalEmitter9unit_data>CFv"
/* 8017CB24 00179C04  90 81 00 20 */	stw r4, 0x20(r1)
/* 8017CB28 00179C08  90 61 00 1C */	stw r3, 0x1c(r1)
/* 8017CB2C 00179C0C  48 00 00 BC */	b .L_8017CBE8
.L_8017CB30:
/* 8017CB30 00179C10  38 61 00 1C */	addi r3, r1, 0x1c
/* 8017CB34 00179C14  48 00 06 39 */	bl "__ml__Q241static_queue<Q213xDecalEmitter9unit_data>8iteratorCFv"
/* 8017CB38 00179C18  C0 03 00 08 */	lfs f0, 0x8(r3)
/* 8017CB3C 00179C1C  7C 7E 1B 78 */	mr r30, r3
/* 8017CB40 00179C20  EC 00 F8 2A */	fadds f0, f0, f31
/* 8017CB44 00179C24  D0 03 00 08 */	stfs f0, 0x8(r3)
/* 8017CB48 00179C28  C0 23 00 08 */	lfs f1, 0x8(r3)
/* 8017CB4C 00179C2C  C0 02 AD F8 */	lfs f0, "@805"@sda21(r2)
/* 8017CB50 00179C30  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8017CB54 00179C34  4C 41 13 82 */	cror eq, gt, eq
/* 8017CB58 00179C38  41 82 00 B4 */	beq .L_8017CC0C
/* 8017CB5C 00179C3C  7F E3 FB 78 */	mr r3, r31
/* 8017CB60 00179C40  7F C4 F3 78 */	mr r4, r30
/* 8017CB64 00179C44  48 00 01 01 */	bl update_frac__13xDecalEmitterFRQ213xDecalEmitter9unit_data
/* 8017CB68 00179C48  88 9E 00 01 */	lbz r4, 0x1(r30)
/* 8017CB6C 00179C4C  38 61 00 08 */	addi r3, r1, 0x8
/* 8017CB70 00179C50  80 DF 00 58 */	lwz r6, 0x58(r31)
/* 8017CB74 00179C54  38 04 00 01 */	addi r0, r4, 0x1
/* 8017CB78 00179C58  C0 3E 00 04 */	lfs f1, 0x4(r30)
/* 8017CB7C 00179C5C  1C A4 00 0C */	mulli r5, r4, 0xc
/* 8017CB80 00179C60  1C 80 00 0C */	mulli r4, r0, 0xc
/* 8017CB84 00179C64  38 05 00 08 */	addi r0, r5, 0x8
/* 8017CB88 00179C68  7C 46 04 2E */	lfsx f2, r6, r0
/* 8017CB8C 00179C6C  38 04 00 08 */	addi r0, r4, 0x8
/* 8017CB90 00179C70  7C 66 04 2E */	lfsx f3, r6, r0
/* 8017CB94 00179C74  48 00 00 C1 */	bl "lerp__20@unnamed@xDecal_cpp@FRffff"
/* 8017CB98 00179C78  C0 3E 00 0C */	lfs f1, 0xc(r30)
/* 8017CB9C 00179C7C  38 61 00 24 */	addi r3, r1, 0x24
/* 8017CBA0 00179C80  C0 01 00 08 */	lfs f0, 0x8(r1)
/* 8017CBA4 00179C84  EC 01 00 32 */	fmuls f0, f1, f0
/* 8017CBA8 00179C88  D0 1E 00 4C */	stfs f0, 0x4c(r30)
/* 8017CBAC 00179C8C  48 00 08 65 */	bl next__25ptank_pool__color_mat_uv2Fv
/* 8017CBB0 00179C90  38 61 00 24 */	addi r3, r1, 0x24
/* 8017CBB4 00179C94  4B F9 A8 E1 */	bl valid__10ptank_poolCFv
/* 8017CBB8 00179C98  54 60 06 3F */	clrlwi. r0, r3, 24
/* 8017CBBC 00179C9C  41 82 00 50 */	beq .L_8017CC0C
/* 8017CBC0 00179CA0  80 E1 00 50 */	lwz r7, 0x50(r1)
/* 8017CBC4 00179CA4  7F E3 FB 78 */	mr r3, r31
/* 8017CBC8 00179CA8  C0 21 00 08 */	lfs f1, 0x8(r1)
/* 8017CBCC 00179CAC  7F C4 F3 78 */	mr r4, r30
/* 8017CBD0 00179CB0  80 A1 00 48 */	lwz r5, 0x48(r1)
/* 8017CBD4 00179CB4  39 07 00 08 */	addi r8, r7, 0x8
/* 8017CBD8 00179CB8  80 C1 00 4C */	lwz r6, 0x4c(r1)
/* 8017CBDC 00179CBC  48 00 01 1D */	bl get_render_data__13xDecalEmitterFRCQ213xDecalEmitter9unit_datafR10iColor_tagR7xMat4x3R5xVec2R5xVec2
/* 8017CBE0 00179CC0  38 61 00 1C */	addi r3, r1, 0x1c
/* 8017CBE4 00179CC4  48 00 07 79 */	bl "__pp__Q241static_queue<Q213xDecalEmitter9unit_data>8iteratorFv"
.L_8017CBE8:
/* 8017CBE8 00179CC8  38 7F 00 44 */	addi r3, r31, 0x44
/* 8017CBEC 00179CCC  48 00 07 2D */	bl "end__41static_queue<Q213xDecalEmitter9unit_data>CFv"
/* 8017CBF0 00179CD0  90 81 00 18 */	stw r4, 0x18(r1)
/* 8017CBF4 00179CD4  38 81 00 14 */	addi r4, r1, 0x14
/* 8017CBF8 00179CD8  90 61 00 14 */	stw r3, 0x14(r1)
/* 8017CBFC 00179CDC  38 61 00 1C */	addi r3, r1, 0x1c
/* 8017CC00 00179CE0  48 00 06 FD */	bl "__ne__Q241static_queue<Q213xDecalEmitter9unit_data>8iteratorCFRCQ241static_queue<Q213xDecalEmitter9unit_data>8iterator"
/* 8017CC04 00179CE4  54 60 06 3F */	clrlwi. r0, r3, 24
/* 8017CC08 00179CE8  40 82 FF 28 */	bne .L_8017CB30
.L_8017CC0C:
/* 8017CC0C 00179CEC  38 61 00 24 */	addi r3, r1, 0x24
/* 8017CC10 00179CF0  48 00 07 C1 */	bl flush__25ptank_pool__color_mat_uv2Fv
/* 8017CC14 00179CF4  38 7F 00 44 */	addi r3, r31, 0x44
/* 8017CC18 00179CF8  48 00 07 01 */	bl "end__41static_queue<Q213xDecalEmitter9unit_data>CFv"
/* 8017CC1C 00179CFC  90 81 00 10 */	stw r4, 0x10(r1)
/* 8017CC20 00179D00  38 81 00 1C */	addi r4, r1, 0x1c
/* 8017CC24 00179D04  38 A1 00 0C */	addi r5, r1, 0xc
/* 8017CC28 00179D08  90 61 00 0C */	stw r3, 0xc(r1)
/* 8017CC2C 00179D0C  38 7F 00 44 */	addi r3, r31, 0x44
/* 8017CC30 00179D10  48 00 06 59 */	bl "erase__41static_queue<Q213xDecalEmitter9unit_data>FRCQ241static_queue<Q213xDecalEmitter9unit_data>8iteratorRCQ241static_queue<Q213xDecalEmitter9unit_data>8iterator"
/* 8017CC34 00179D14  E3 E1 00 68 */	psq_l f31, 0x68(r1), 0, qr0
/* 8017CC38 00179D18  80 01 00 74 */	lwz r0, 0x74(r1)
/* 8017CC3C 00179D1C  CB E1 00 60 */	lfd f31, 0x60(r1)
/* 8017CC40 00179D20  83 E1 00 5C */	lwz r31, 0x5c(r1)
/* 8017CC44 00179D24  83 C1 00 58 */	lwz r30, 0x58(r1)
/* 8017CC48 00179D28  7C 08 03 A6 */	mtlr r0
/* 8017CC4C 00179D2C  38 21 00 70 */	addi r1, r1, 0x70
/* 8017CC50 00179D30  4E 80 00 20 */	blr
.endfn update__13xDecalEmitterFf

# @unnamed@xDecal_cpp@::lerp(float&, float, float, float)
.fn "lerp__20@unnamed@xDecal_cpp@FRffff", local
/* 8017CC54 00179D34  EC 03 10 28 */	fsubs f0, f3, f2
/* 8017CC58 00179D38  EC 01 10 3A */	fmadds f0, f1, f0, f2
/* 8017CC5C 00179D3C  D0 03 00 00 */	stfs f0, 0x0(r3)
/* 8017CC60 00179D40  4E 80 00 20 */	blr
.endfn "lerp__20@unnamed@xDecal_cpp@FRffff"

# xDecalEmitter::update_frac(xDecalEmitter::unit_data&)
.fn update_frac__13xDecalEmitterFRQ213xDecalEmitter9unit_data, global
/* 8017CC64 00179D44  48 00 00 40 */	b .L_8017CCA4
.L_8017CC68:
/* 8017CC68 00179D48  1C 06 00 0C */	mulli r0, r6, 0xc
/* 8017CC6C 00179D4C  80 A3 00 58 */	lwz r5, 0x58(r3)
/* 8017CC70 00179D50  C0 24 00 08 */	lfs f1, 0x8(r4)
/* 8017CC74 00179D54  7C A5 02 14 */	add r5, r5, r0
/* 8017CC78 00179D58  C0 05 00 00 */	lfs f0, 0x0(r5)
/* 8017CC7C 00179D5C  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8017CC80 00179D60  4C 41 13 82 */	cror eq, gt, eq
/* 8017CC84 00179D64  40 82 00 14 */	bne .L_8017CC98
/* 8017CC88 00179D68  C0 05 00 0C */	lfs f0, 0xc(r5)
/* 8017CC8C 00179D6C  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8017CC90 00179D70  4C 40 13 82 */	cror eq, lt, eq
/* 8017CC94 00179D74  41 82 00 24 */	beq .L_8017CCB8
.L_8017CC98:
/* 8017CC98 00179D78  80 A3 00 60 */	lwz r5, 0x60(r3)
/* 8017CC9C 00179D7C  38 05 00 01 */	addi r0, r5, 0x1
/* 8017CCA0 00179D80  90 03 00 60 */	stw r0, 0x60(r3)
.L_8017CCA4:
/* 8017CCA4 00179D84  80 A3 00 5C */	lwz r5, 0x5c(r3)
/* 8017CCA8 00179D88  80 C3 00 60 */	lwz r6, 0x60(r3)
/* 8017CCAC 00179D8C  38 05 FF FE */	addi r0, r5, -0x2
/* 8017CCB0 00179D90  7C 06 00 40 */	cmplw r6, r0
/* 8017CCB4 00179D94  41 80 FF B4 */	blt .L_8017CC68
.L_8017CCB8:
/* 8017CCB8 00179D98  98 C4 00 01 */	stb r6, 0x1(r4)
/* 8017CCBC 00179D9C  80 A3 00 60 */	lwz r5, 0x60(r3)
/* 8017CCC0 00179DA0  80 C3 00 58 */	lwz r6, 0x58(r3)
/* 8017CCC4 00179DA4  38 05 00 01 */	addi r0, r5, 0x1
/* 8017CCC8 00179DA8  C0 42 AD F8 */	lfs f2, "@805"@sda21(r2)
/* 8017CCCC 00179DAC  1C 65 00 0C */	mulli r3, r5, 0xc
/* 8017CCD0 00179DB0  C0 04 00 08 */	lfs f0, 0x8(r4)
/* 8017CCD4 00179DB4  1C 00 00 0C */	mulli r0, r0, 0xc
/* 8017CCD8 00179DB8  7C 66 1C 2E */	lfsx f3, r6, r3
/* 8017CCDC 00179DBC  EC 00 18 28 */	fsubs f0, f0, f3
/* 8017CCE0 00179DC0  7C 26 04 2E */	lfsx f1, r6, r0
/* 8017CCE4 00179DC4  EC 21 18 28 */	fsubs f1, f1, f3
/* 8017CCE8 00179DC8  EC 22 08 24 */	fdivs f1, f2, f1
/* 8017CCEC 00179DCC  EC 01 00 32 */	fmuls f0, f1, f0
/* 8017CCF0 00179DD0  D0 04 00 04 */	stfs f0, 0x4(r4)
/* 8017CCF4 00179DD4  4E 80 00 20 */	blr
.endfn update_frac__13xDecalEmitterFRQ213xDecalEmitter9unit_data

# xDecalEmitter::get_render_data(const xDecalEmitter::unit_data&, float, iColor_tag&, xMat4x3&, xVec2&, xVec2&)
.fn get_render_data__13xDecalEmitterFRCQ213xDecalEmitter9unit_datafR10iColor_tagR7xMat4x3R5xVec2R5xVec2, global
/* 8017CCF8 00179DD8  94 21 FF B0 */	stwu r1, -0x50(r1)
/* 8017CCFC 00179DDC  7C 08 02 A6 */	mflr r0
/* 8017CD00 00179DE0  90 01 00 54 */	stw r0, 0x54(r1)
/* 8017CD04 00179DE4  DB E1 00 40 */	stfd f31, 0x40(r1)
/* 8017CD08 00179DE8  F3 E1 00 48 */	psq_st f31, 0x48(r1), 0, qr0
/* 8017CD0C 00179DEC  BF 61 00 2C */	stmw r27, 0x2c(r1)
/* 8017CD10 00179DF0  7C 9C 23 78 */	mr r28, r4
/* 8017CD14 00179DF4  88 84 00 01 */	lbz r4, 0x1(r4)
/* 8017CD18 00179DF8  7C DD 33 78 */	mr r29, r6
/* 8017CD1C 00179DFC  FF E0 08 90 */	fmr f31, f1
/* 8017CD20 00179E00  38 04 00 01 */	addi r0, r4, 0x1
/* 8017CD24 00179E04  7C 7B 1B 78 */	mr r27, r3
/* 8017CD28 00179E08  81 23 00 58 */	lwz r9, 0x58(r3)
/* 8017CD2C 00179E0C  1C 60 00 0C */	mulli r3, r0, 0xc
/* 8017CD30 00179E10  C0 3C 00 04 */	lfs f1, 0x4(r28)
/* 8017CD34 00179E14  7C FE 3B 78 */	mr r30, r7
/* 8017CD38 00179E18  38 03 00 04 */	addi r0, r3, 0x4
/* 8017CD3C 00179E1C  7D 1F 43 78 */	mr r31, r8
/* 8017CD40 00179E20  1C C4 00 0C */	mulli r6, r4, 0xc
/* 8017CD44 00179E24  7C 09 00 2E */	lwzx r0, r9, r0
/* 8017CD48 00179E28  7C A3 2B 78 */	mr r3, r5
/* 8017CD4C 00179E2C  90 01 00 08 */	stw r0, 0x8(r1)
/* 8017CD50 00179E30  38 81 00 0C */	addi r4, r1, 0xc
/* 8017CD54 00179E34  7C A9 32 14 */	add r5, r9, r6
/* 8017CD58 00179E38  80 05 00 04 */	lwz r0, 0x4(r5)
/* 8017CD5C 00179E3C  38 A1 00 08 */	addi r5, r1, 0x8
/* 8017CD60 00179E40  90 01 00 0C */	stw r0, 0xc(r1)
/* 8017CD64 00179E44  48 00 01 25 */	bl "lerp__20@unnamed@xDecal_cpp@FR10iColor_tagf10iColor_tag10iColor_tag"
/* 8017CD68 00179E48  80 1B 00 00 */	lwz r0, 0x0(r27)
/* 8017CD6C 00179E4C  54 00 07 BD */	rlwinm. r0, r0, 0, 30, 30
/* 8017CD70 00179E50  41 82 00 58 */	beq .L_8017CDC8
/* 8017CD74 00179E54  3C 80 80 3C */	lis r4, globals@ha
/* 8017CD78 00179E58  7F A3 EB 78 */	mr r3, r29
/* 8017CD7C 00179E5C  38 84 05 58 */	addi r4, r4, globals@l
/* 8017CD80 00179E60  38 84 00 14 */	addi r4, r4, 0x14
/* 8017CD84 00179E64  4B E8 E8 45 */	bl __as__7xMat3x3FRC7xMat3x3
/* 8017CD88 00179E68  C0 1C 00 10 */	lfs f0, 0x10(r28)
/* 8017CD8C 00179E6C  7F A3 EB 78 */	mr r3, r29
/* 8017CD90 00179E70  EC 3F 00 32 */	fmuls f1, f31, f0
/* 8017CD94 00179E74  4B E8 E3 ED */	bl __amu__5xVec3Ff
/* 8017CD98 00179E78  C0 1C 00 14 */	lfs f0, 0x14(r28)
/* 8017CD9C 00179E7C  38 7D 00 10 */	addi r3, r29, 0x10
/* 8017CDA0 00179E80  EC 3F 00 32 */	fmuls f1, f31, f0
/* 8017CDA4 00179E84  4B E8 E3 DD */	bl __amu__5xVec3Ff
/* 8017CDA8 00179E88  C0 1C 00 18 */	lfs f0, 0x18(r28)
/* 8017CDAC 00179E8C  38 7D 00 20 */	addi r3, r29, 0x20
/* 8017CDB0 00179E90  EC 3F 00 32 */	fmuls f1, f31, f0
/* 8017CDB4 00179E94  4B E8 E3 CD */	bl __amu__5xVec3Ff
/* 8017CDB8 00179E98  38 7D 00 30 */	addi r3, r29, 0x30
/* 8017CDBC 00179E9C  38 9C 00 40 */	addi r4, r28, 0x40
/* 8017CDC0 00179EA0  4B E8 E4 A5 */	bl __as__5xVec3FRC5xVec3
/* 8017CDC4 00179EA4  48 00 00 34 */	b .L_8017CDF8
.L_8017CDC8:
/* 8017CDC8 00179EA8  7F A3 EB 78 */	mr r3, r29
/* 8017CDCC 00179EAC  38 9C 00 10 */	addi r4, r28, 0x10
/* 8017CDD0 00179EB0  4B E8 E7 9D */	bl __as__7xMat4x3FRC7xMat4x3
/* 8017CDD4 00179EB4  FC 20 F8 90 */	fmr f1, f31
/* 8017CDD8 00179EB8  7F A3 EB 78 */	mr r3, r29
/* 8017CDDC 00179EBC  4B E8 E3 A5 */	bl __amu__5xVec3Ff
/* 8017CDE0 00179EC0  FC 20 F8 90 */	fmr f1, f31
/* 8017CDE4 00179EC4  38 7D 00 10 */	addi r3, r29, 0x10
/* 8017CDE8 00179EC8  4B E8 E3 99 */	bl __amu__5xVec3Ff
/* 8017CDEC 00179ECC  FC 20 F8 90 */	fmr f1, f31
/* 8017CDF0 00179ED0  38 7D 00 20 */	addi r3, r29, 0x20
/* 8017CDF4 00179ED4  4B E8 E3 8D */	bl __amu__5xVec3Ff
.L_8017CDF8:
/* 8017CDF8 00179ED8  88 9C 00 02 */	lbz r4, 0x2(r28)
/* 8017CDFC 00179EDC  3C 60 43 30 */	lis r3, 0x4330
/* 8017CE00 00179EE0  88 1C 00 03 */	lbz r0, 0x3(r28)
/* 8017CE04 00179EE4  90 81 00 14 */	stw r4, 0x14(r1)
/* 8017CE08 00179EE8  C8 62 AE 10 */	lfd f3, "@838"@sda21(r2)
/* 8017CE0C 00179EEC  90 61 00 10 */	stw r3, 0x10(r1)
/* 8017CE10 00179EF0  C0 3B 00 30 */	lfs f1, 0x30(r27)
/* 8017CE14 00179EF4  C8 41 00 10 */	lfd f2, 0x10(r1)
/* 8017CE18 00179EF8  C0 1B 00 10 */	lfs f0, 0x10(r27)
/* 8017CE1C 00179EFC  EC 42 18 28 */	fsubs f2, f2, f3
/* 8017CE20 00179F00  90 01 00 1C */	stw r0, 0x1c(r1)
/* 8017CE24 00179F04  90 61 00 18 */	stw r3, 0x18(r1)
/* 8017CE28 00179F08  EC 22 00 7A */	fmadds f1, f2, f1, f0
/* 8017CE2C 00179F0C  C8 01 00 18 */	lfd f0, 0x18(r1)
/* 8017CE30 00179F10  D0 3E 00 00 */	stfs f1, 0x0(r30)
/* 8017CE34 00179F14  C8 42 AE 10 */	lfd f2, "@838"@sda21(r2)
/* 8017CE38 00179F18  C0 3B 00 34 */	lfs f1, 0x34(r27)
/* 8017CE3C 00179F1C  EC 40 10 28 */	fsubs f2, f0, f2
/* 8017CE40 00179F20  C0 1B 00 14 */	lfs f0, 0x14(r27)
/* 8017CE44 00179F24  EC 02 00 7A */	fmadds f0, f2, f1, f0
/* 8017CE48 00179F28  D0 1E 00 04 */	stfs f0, 0x4(r30)
/* 8017CE4C 00179F2C  C0 3E 00 00 */	lfs f1, 0x0(r30)
/* 8017CE50 00179F30  C0 1B 00 30 */	lfs f0, 0x30(r27)
/* 8017CE54 00179F34  EC 01 00 2A */	fadds f0, f1, f0
/* 8017CE58 00179F38  D0 1F 00 00 */	stfs f0, 0x0(r31)
/* 8017CE5C 00179F3C  C0 3E 00 04 */	lfs f1, 0x4(r30)
/* 8017CE60 00179F40  C0 1B 00 34 */	lfs f0, 0x34(r27)
/* 8017CE64 00179F44  EC 01 00 2A */	fadds f0, f1, f0
/* 8017CE68 00179F48  D0 1F 00 04 */	stfs f0, 0x4(r31)
/* 8017CE6C 00179F4C  E3 E1 00 48 */	psq_l f31, 0x48(r1), 0, qr0
/* 8017CE70 00179F50  CB E1 00 40 */	lfd f31, 0x40(r1)
/* 8017CE74 00179F54  BB 61 00 2C */	lmw r27, 0x2c(r1)
/* 8017CE78 00179F58  80 01 00 54 */	lwz r0, 0x54(r1)
/* 8017CE7C 00179F5C  7C 08 03 A6 */	mtlr r0
/* 8017CE80 00179F60  38 21 00 50 */	addi r1, r1, 0x50
/* 8017CE84 00179F64  4E 80 00 20 */	blr
.endfn get_render_data__13xDecalEmitterFRCQ213xDecalEmitter9unit_datafR10iColor_tagR7xMat4x3R5xVec2R5xVec2

# @unnamed@xDecal_cpp@::lerp(iColor_tag&, float, iColor_tag, iColor_tag)
.fn "lerp__20@unnamed@xDecal_cpp@FR10iColor_tagf10iColor_tag10iColor_tag", local
/* 8017CE88 00179F68  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 8017CE8C 00179F6C  7C 08 02 A6 */	mflr r0
/* 8017CE90 00179F70  90 01 00 24 */	stw r0, 0x24(r1)
/* 8017CE94 00179F74  DB E1 00 18 */	stfd f31, 0x18(r1)
/* 8017CE98 00179F78  FF E0 08 90 */	fmr f31, f1
/* 8017CE9C 00179F7C  93 E1 00 14 */	stw r31, 0x14(r1)
/* 8017CEA0 00179F80  7C BF 2B 78 */	mr r31, r5
/* 8017CEA4 00179F84  93 C1 00 10 */	stw r30, 0x10(r1)
/* 8017CEA8 00179F88  7C 9E 23 78 */	mr r30, r4
/* 8017CEAC 00179F8C  93 A1 00 0C */	stw r29, 0xc(r1)
/* 8017CEB0 00179F90  7C 7D 1B 78 */	mr r29, r3
/* 8017CEB4 00179F94  88 84 00 00 */	lbz r4, 0x0(r4)
/* 8017CEB8 00179F98  88 A5 00 00 */	lbz r5, 0x0(r5)
/* 8017CEBC 00179F9C  48 00 00 61 */	bl "lerp__20@unnamed@xDecal_cpp@FRUcfUcUc"
/* 8017CEC0 00179FA0  FC 20 F8 90 */	fmr f1, f31
/* 8017CEC4 00179FA4  88 9E 00 01 */	lbz r4, 0x1(r30)
/* 8017CEC8 00179FA8  88 BF 00 01 */	lbz r5, 0x1(r31)
/* 8017CECC 00179FAC  38 7D 00 01 */	addi r3, r29, 0x1
/* 8017CED0 00179FB0  48 00 00 4D */	bl "lerp__20@unnamed@xDecal_cpp@FRUcfUcUc"
/* 8017CED4 00179FB4  FC 20 F8 90 */	fmr f1, f31
/* 8017CED8 00179FB8  88 9E 00 02 */	lbz r4, 0x2(r30)
/* 8017CEDC 00179FBC  88 BF 00 02 */	lbz r5, 0x2(r31)
/* 8017CEE0 00179FC0  38 7D 00 02 */	addi r3, r29, 0x2
/* 8017CEE4 00179FC4  48 00 00 39 */	bl "lerp__20@unnamed@xDecal_cpp@FRUcfUcUc"
/* 8017CEE8 00179FC8  FC 20 F8 90 */	fmr f1, f31
/* 8017CEEC 00179FCC  88 9E 00 03 */	lbz r4, 0x3(r30)
/* 8017CEF0 00179FD0  88 BF 00 03 */	lbz r5, 0x3(r31)
/* 8017CEF4 00179FD4  38 7D 00 03 */	addi r3, r29, 0x3
/* 8017CEF8 00179FD8  48 00 00 25 */	bl "lerp__20@unnamed@xDecal_cpp@FRUcfUcUc"
/* 8017CEFC 00179FDC  80 01 00 24 */	lwz r0, 0x24(r1)
/* 8017CF00 00179FE0  CB E1 00 18 */	lfd f31, 0x18(r1)
/* 8017CF04 00179FE4  83 E1 00 14 */	lwz r31, 0x14(r1)
/* 8017CF08 00179FE8  83 C1 00 10 */	lwz r30, 0x10(r1)
/* 8017CF0C 00179FEC  83 A1 00 0C */	lwz r29, 0xc(r1)
/* 8017CF10 00179FF0  7C 08 03 A6 */	mtlr r0
/* 8017CF14 00179FF4  38 21 00 20 */	addi r1, r1, 0x20
/* 8017CF18 00179FF8  4E 80 00 20 */	blr
.endfn "lerp__20@unnamed@xDecal_cpp@FR10iColor_tagf10iColor_tag10iColor_tag"

# @unnamed@xDecal_cpp@::lerp(unsigned char&, float, unsigned char, unsigned char)
.fn "lerp__20@unnamed@xDecal_cpp@FRUcfUcUc", local
/* 8017CF1C 00179FFC  94 21 FF D0 */	stwu r1, -0x30(r1)
/* 8017CF20 0017A000  3C C0 43 30 */	lis r6, 0x4330
/* 8017CF24 0017A004  54 80 06 3E */	clrlwi r0, r4, 24
/* 8017CF28 0017A008  54 A4 06 3E */	clrlwi r4, r5, 24
/* 8017CF2C 0017A00C  90 C1 00 08 */	stw r6, 0x8(r1)
/* 8017CF30 0017A010  C8 82 AE 10 */	lfd f4, "@838"@sda21(r2)
/* 8017CF34 0017A014  90 81 00 0C */	stw r4, 0xc(r1)
/* 8017CF38 0017A018  C0 A2 AE 18 */	lfs f5, "@875"@sda21(r2)
/* 8017CF3C 0017A01C  C8 01 00 08 */	lfd f0, 0x8(r1)
/* 8017CF40 0017A020  90 01 00 14 */	stw r0, 0x14(r1)
/* 8017CF44 0017A024  EC 60 20 28 */	fsubs f3, f0, f4
/* 8017CF48 0017A028  90 C1 00 10 */	stw r6, 0x10(r1)
/* 8017CF4C 0017A02C  C8 01 00 10 */	lfd f0, 0x10(r1)
/* 8017CF50 0017A030  90 01 00 1C */	stw r0, 0x1c(r1)
/* 8017CF54 0017A034  EC 40 20 28 */	fsubs f2, f0, f4
/* 8017CF58 0017A038  90 C1 00 18 */	stw r6, 0x18(r1)
/* 8017CF5C 0017A03C  C8 01 00 18 */	lfd f0, 0x18(r1)
/* 8017CF60 0017A040  EC 43 10 28 */	fsubs f2, f3, f2
/* 8017CF64 0017A044  EC 00 20 28 */	fsubs f0, f0, f4
/* 8017CF68 0017A048  EC 01 00 BA */	fmadds f0, f1, f2, f0
/* 8017CF6C 0017A04C  EC 05 00 2A */	fadds f0, f5, f0
/* 8017CF70 0017A050  FC 00 00 1E */	fctiwz f0, f0
/* 8017CF74 0017A054  D8 01 00 20 */	stfd f0, 0x20(r1)
/* 8017CF78 0017A058  80 01 00 24 */	lwz r0, 0x24(r1)
/* 8017CF7C 0017A05C  98 03 00 00 */	stb r0, 0x0(r3)
/* 8017CF80 0017A060  38 21 00 30 */	addi r1, r1, 0x30
/* 8017CF84 0017A064  4E 80 00 20 */	blr
.endfn "lerp__20@unnamed@xDecal_cpp@FRUcfUcUc"

# xDecalEmitter::select_texture_unit()
.fn select_texture_unit__13xDecalEmitterFv, global
/* 8017CF88 0017A068  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8017CF8C 0017A06C  7C 08 02 A6 */	mflr r0
/* 8017CF90 0017A070  90 01 00 14 */	stw r0, 0x14(r1)
/* 8017CF94 0017A074  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8017CF98 0017A078  7C 7F 1B 78 */	mr r31, r3
/* 8017CF9C 0017A07C  80 03 00 24 */	lwz r0, 0x24(r3)
/* 8017CFA0 0017A080  2C 00 00 01 */	cmpwi r0, 0x1
/* 8017CFA4 0017A084  41 82 00 18 */	beq .L_8017CFBC
/* 8017CFA8 0017A088  40 80 00 08 */	bge .L_8017CFB0
/* 8017CFAC 0017A08C  48 00 00 4C */	b .L_8017CFF8
.L_8017CFB0:
/* 8017CFB0 0017A090  2C 00 00 03 */	cmpwi r0, 0x3
/* 8017CFB4 0017A094  40 80 00 44 */	bge .L_8017CFF8
/* 8017CFB8 0017A098  48 00 00 20 */	b .L_8017CFD8
.L_8017CFBC:
/* 8017CFBC 0017A09C  4B EB 3C AD */	bl xrand__Fv
/* 8017CFC0 0017A0A0  80 9F 00 2C */	lwz r4, 0x2c(r31)
/* 8017CFC4 0017A0A4  54 63 9B 7E */	srwi r3, r3, 13
/* 8017CFC8 0017A0A8  7C 03 23 96 */	divwu r0, r3, r4
/* 8017CFCC 0017A0AC  7C 00 21 D6 */	mullw r0, r0, r4
/* 8017CFD0 0017A0B0  7C 60 18 50 */	subf r3, r0, r3
/* 8017CFD4 0017A0B4  48 00 00 28 */	b .L_8017CFFC
.L_8017CFD8:
/* 8017CFD8 0017A0B8  80 7F 00 40 */	lwz r3, 0x40(r31)
/* 8017CFDC 0017A0BC  38 83 00 01 */	addi r4, r3, 0x1
/* 8017CFE0 0017A0C0  90 9F 00 40 */	stw r4, 0x40(r31)
/* 8017CFE4 0017A0C4  80 7F 00 2C */	lwz r3, 0x2c(r31)
/* 8017CFE8 0017A0C8  7C 04 1B 96 */	divwu r0, r4, r3
/* 8017CFEC 0017A0CC  7C 00 19 D6 */	mullw r0, r0, r3
/* 8017CFF0 0017A0D0  7C 60 20 50 */	subf r3, r0, r4
/* 8017CFF4 0017A0D4  48 00 00 08 */	b .L_8017CFFC
.L_8017CFF8:
/* 8017CFF8 0017A0D8  38 60 00 00 */	li r3, 0x0
.L_8017CFFC:
/* 8017CFFC 0017A0DC  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8017D000 0017A0E0  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8017D004 0017A0E4  7C 08 03 A6 */	mtlr r0
/* 8017D008 0017A0E8  38 21 00 10 */	addi r1, r1, 0x10
/* 8017D00C 0017A0EC  4E 80 00 20 */	blr
.endfn select_texture_unit__13xDecalEmitterFv

# 0x8017D010 - 0x8017D080
.section .text, "ax", unique, 1
.balign 4

# xDecalEmitter::need_update() const
.fn need_update__13xDecalEmitterCFv, weak
/* 8017D010 0017A0F0  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8017D014 0017A0F4  7C 08 02 A6 */	mflr r0
/* 8017D018 0017A0F8  90 01 00 14 */	stw r0, 0x14(r1)
/* 8017D01C 0017A0FC  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8017D020 0017A100  3B E0 00 00 */	li r31, 0x0
/* 8017D024 0017A104  93 C1 00 08 */	stw r30, 0x8(r1)
/* 8017D028 0017A108  7C 7E 1B 78 */	mr r30, r3
/* 8017D02C 0017A10C  38 7E 00 44 */	addi r3, r30, 0x44
/* 8017D030 0017A110  48 00 00 51 */	bl "empty__41static_queue<Q213xDecalEmitter9unit_data>CFv"
/* 8017D034 0017A114  54 60 06 3F */	clrlwi. r0, r3, 24
/* 8017D038 0017A118  41 82 00 14 */	beq .L_8017D04C
/* 8017D03C 0017A11C  7F C3 F3 78 */	mr r3, r30
/* 8017D040 0017A120  48 00 00 2D */	bl debug_need_update__13xDecalEmitterCFv
/* 8017D044 0017A124  54 60 06 3F */	clrlwi. r0, r3, 24
/* 8017D048 0017A128  41 82 00 08 */	beq .L_8017D050
.L_8017D04C:
/* 8017D04C 0017A12C  3B E0 00 01 */	li r31, 0x1
.L_8017D050:
/* 8017D050 0017A130  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8017D054 0017A134  7F E3 FB 78 */	mr r3, r31
/* 8017D058 0017A138  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8017D05C 0017A13C  83 C1 00 08 */	lwz r30, 0x8(r1)
/* 8017D060 0017A140  7C 08 03 A6 */	mtlr r0
/* 8017D064 0017A144  38 21 00 10 */	addi r1, r1, 0x10
/* 8017D068 0017A148  4E 80 00 20 */	blr
.endfn need_update__13xDecalEmitterCFv

# xDecalEmitter::debug_need_update() const
.fn debug_need_update__13xDecalEmitterCFv, weak
/* 8017D06C 0017A14C  38 60 00 00 */	li r3, 0x0
/* 8017D070 0017A150  4E 80 00 20 */	blr
.endfn debug_need_update__13xDecalEmitterCFv

# xDecalEmitter::debug_init(const char*)
.fn debug_init__13xDecalEmitterFPCc, weak
/* 8017D074 0017A154  4E 80 00 20 */	blr
.endfn debug_init__13xDecalEmitterFPCc

# xDecalEmitter::debug_update_curve()
.fn debug_update_curve__13xDecalEmitterFv, weak
/* 8017D078 0017A158  4E 80 00 20 */	blr
.endfn debug_update_curve__13xDecalEmitterFv

# xDecalEmitter::debug_update(float)
.fn debug_update__13xDecalEmitterFf, weak
/* 8017D07C 0017A15C  4E 80 00 20 */	blr
.endfn debug_update__13xDecalEmitterFf

# 0x8017D080 - 0x8017D3D0
.section .text, "ax", unique, 2
.balign 4

# static_queue<xDecalEmitter::unit_data>::empty() const
.fn "empty__41static_queue<Q213xDecalEmitter9unit_data>CFv", weak
/* 8017D080 0017A160  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8017D084 0017A164  7C 08 02 A6 */	mflr r0
/* 8017D088 0017A168  90 01 00 14 */	stw r0, 0x14(r1)
/* 8017D08C 0017A16C  48 00 00 1D */	bl "size__41static_queue<Q213xDecalEmitter9unit_data>CFv"
/* 8017D090 0017A170  7C 60 00 34 */	cntlzw r0, r3
/* 8017D094 0017A174  54 03 D9 7E */	srwi r3, r0, 5
/* 8017D098 0017A178  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8017D09C 0017A17C  7C 08 03 A6 */	mtlr r0
/* 8017D0A0 0017A180  38 21 00 10 */	addi r1, r1, 0x10
/* 8017D0A4 0017A184  4E 80 00 20 */	blr
.endfn "empty__41static_queue<Q213xDecalEmitter9unit_data>CFv"

# static_queue<xDecalEmitter::unit_data>::size() const
.fn "size__41static_queue<Q213xDecalEmitter9unit_data>CFv", weak
/* 8017D0A8 0017A188  80 63 00 04 */	lwz r3, 0x4(r3)
/* 8017D0AC 0017A18C  4E 80 00 20 */	blr
.endfn "size__41static_queue<Q213xDecalEmitter9unit_data>CFv"

# static_queue<xDecalEmitter::unit_data>::init(unsigned long)
.fn "init__41static_queue<Q213xDecalEmitter9unit_data>FUl", weak
/* 8017D0B0 0017A190  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8017D0B4 0017A194  7C 08 02 A6 */	mflr r0
/* 8017D0B8 0017A198  90 01 00 14 */	stw r0, 0x14(r1)
/* 8017D0BC 0017A19C  38 04 00 01 */	addi r0, r4, 0x1
/* 8017D0C0 0017A1A0  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8017D0C4 0017A1A4  7C 7F 1B 78 */	mr r31, r3
/* 8017D0C8 0017A1A8  38 60 00 00 */	li r3, 0x0
/* 8017D0CC 0017A1AC  48 00 00 0C */	b .L_8017D0D8
.L_8017D0D0:
/* 8017D0D0 0017A1B0  54 00 F8 7E */	srwi r0, r0, 1
/* 8017D0D4 0017A1B4  38 63 00 01 */	addi r3, r3, 0x1
.L_8017D0D8:
/* 8017D0D8 0017A1B8  28 00 00 01 */	cmplwi r0, 0x1
/* 8017D0DC 0017A1BC  41 81 FF F4 */	bgt .L_8017D0D0
/* 8017D0E0 0017A1C0  38 00 00 01 */	li r0, 0x1
/* 8017D0E4 0017A1C4  38 A0 00 00 */	li r5, 0x0
/* 8017D0E8 0017A1C8  7C 00 18 30 */	slw r0, r0, r3
/* 8017D0EC 0017A1CC  90 1F 00 08 */	stw r0, 0x8(r31)
/* 8017D0F0 0017A1D0  80 7F 00 08 */	lwz r3, 0x8(r31)
/* 8017D0F4 0017A1D4  38 03 FF FF */	addi r0, r3, -0x1
/* 8017D0F8 0017A1D8  90 1F 00 0C */	stw r0, 0xc(r31)
/* 8017D0FC 0017A1DC  80 1F 00 08 */	lwz r0, 0x8(r31)
/* 8017D100 0017A1E0  80 6D 89 E0 */	lwz r3, gActiveHeap@sda21(r13)
/* 8017D104 0017A1E4  1C 80 00 50 */	mulli r4, r0, 0x50
/* 8017D108 0017A1E8  4B EB 68 39 */	bl xMemAlloc__FUiUii
/* 8017D10C 0017A1EC  90 7F 00 10 */	stw r3, 0x10(r31)
/* 8017D110 0017A1F0  7F E3 FB 78 */	mr r3, r31
/* 8017D114 0017A1F4  48 00 00 19 */	bl "clear__41static_queue<Q213xDecalEmitter9unit_data>Fv"
/* 8017D118 0017A1F8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8017D11C 0017A1FC  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8017D120 0017A200  7C 08 03 A6 */	mtlr r0
/* 8017D124 0017A204  38 21 00 10 */	addi r1, r1, 0x10
/* 8017D128 0017A208  4E 80 00 20 */	blr
.endfn "init__41static_queue<Q213xDecalEmitter9unit_data>FUl"

# static_queue<xDecalEmitter::unit_data>::clear()
.fn "clear__41static_queue<Q213xDecalEmitter9unit_data>Fv", weak
/* 8017D12C 0017A20C  38 00 00 00 */	li r0, 0x0
/* 8017D130 0017A210  90 03 00 04 */	stw r0, 0x4(r3)
/* 8017D134 0017A214  90 03 00 00 */	stw r0, 0x0(r3)
/* 8017D138 0017A218  4E 80 00 20 */	blr
.endfn "clear__41static_queue<Q213xDecalEmitter9unit_data>Fv"

# static_queue<xDecalEmitter::unit_data>::front()
.fn "front__41static_queue<Q213xDecalEmitter9unit_data>Fv", weak
/* 8017D13C 0017A21C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8017D140 0017A220  7C 08 02 A6 */	mflr r0
/* 8017D144 0017A224  90 01 00 14 */	stw r0, 0x14(r1)
/* 8017D148 0017A228  48 00 00 3D */	bl "begin__41static_queue<Q213xDecalEmitter9unit_data>CFv"
/* 8017D14C 0017A22C  90 61 00 08 */	stw r3, 0x8(r1)
/* 8017D150 0017A230  38 61 00 08 */	addi r3, r1, 0x8
/* 8017D154 0017A234  90 81 00 0C */	stw r4, 0xc(r1)
/* 8017D158 0017A238  48 00 00 15 */	bl "__ml__Q241static_queue<Q213xDecalEmitter9unit_data>8iteratorCFv"
/* 8017D15C 0017A23C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8017D160 0017A240  7C 08 03 A6 */	mtlr r0
/* 8017D164 0017A244  38 21 00 10 */	addi r1, r1, 0x10
/* 8017D168 0017A248  4E 80 00 20 */	blr
.endfn "front__41static_queue<Q213xDecalEmitter9unit_data>Fv"

# static_queue<xDecalEmitter::unit_data>::iterator::operator*() const
.fn "__ml__Q241static_queue<Q213xDecalEmitter9unit_data>8iteratorCFv", weak
/* 8017D16C 0017A24C  80 03 00 00 */	lwz r0, 0x0(r3)
/* 8017D170 0017A250  80 63 00 04 */	lwz r3, 0x4(r3)
/* 8017D174 0017A254  1C 00 00 50 */	mulli r0, r0, 0x50
/* 8017D178 0017A258  80 63 00 10 */	lwz r3, 0x10(r3)
/* 8017D17C 0017A25C  7C 63 02 14 */	add r3, r3, r0
/* 8017D180 0017A260  4E 80 00 20 */	blr
.endfn "__ml__Q241static_queue<Q213xDecalEmitter9unit_data>8iteratorCFv"

# static_queue<xDecalEmitter::unit_data>::begin() const
.fn "begin__41static_queue<Q213xDecalEmitter9unit_data>CFv", weak
/* 8017D184 0017A264  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8017D188 0017A268  7C 08 02 A6 */	mflr r0
/* 8017D18C 0017A26C  80 83 00 00 */	lwz r4, 0x0(r3)
/* 8017D190 0017A270  90 01 00 14 */	stw r0, 0x14(r1)
/* 8017D194 0017A274  48 00 00 15 */	bl "create_iterator__41static_queue<Q213xDecalEmitter9unit_data>CFUl"
/* 8017D198 0017A278  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8017D19C 0017A27C  7C 08 03 A6 */	mtlr r0
/* 8017D1A0 0017A280  38 21 00 10 */	addi r1, r1, 0x10
/* 8017D1A4 0017A284  4E 80 00 20 */	blr
.endfn "begin__41static_queue<Q213xDecalEmitter9unit_data>CFv"

# static_queue<xDecalEmitter::unit_data>::create_iterator(unsigned long) const
.fn "create_iterator__41static_queue<Q213xDecalEmitter9unit_data>CFUl", weak
/* 8017D1A8 0017A288  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8017D1AC 0017A28C  7C 60 1B 78 */	mr r0, r3
/* 8017D1B0 0017A290  7C 83 23 78 */	mr r3, r4
/* 8017D1B4 0017A294  90 81 00 08 */	stw r4, 0x8(r1)
/* 8017D1B8 0017A298  7C 04 03 78 */	mr r4, r0
/* 8017D1BC 0017A29C  90 01 00 0C */	stw r0, 0xc(r1)
/* 8017D1C0 0017A2A0  38 21 00 10 */	addi r1, r1, 0x10
/* 8017D1C4 0017A2A4  4E 80 00 20 */	blr
.endfn "create_iterator__41static_queue<Q213xDecalEmitter9unit_data>CFUl"

# static_queue<xDecalEmitter::unit_data>::push_front()
.fn "push_front__41static_queue<Q213xDecalEmitter9unit_data>Fv", weak
/* 8017D1C8 0017A2A8  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8017D1CC 0017A2AC  7C 08 02 A6 */	mflr r0
/* 8017D1D0 0017A2B0  90 01 00 14 */	stw r0, 0x14(r1)
/* 8017D1D4 0017A2B4  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8017D1D8 0017A2B8  7C 7F 1B 78 */	mr r31, r3
/* 8017D1DC 0017A2BC  80 83 00 04 */	lwz r4, 0x4(r3)
/* 8017D1E0 0017A2C0  38 04 00 01 */	addi r0, r4, 0x1
/* 8017D1E4 0017A2C4  90 03 00 04 */	stw r0, 0x4(r3)
/* 8017D1E8 0017A2C8  80 83 00 00 */	lwz r4, 0x0(r3)
/* 8017D1EC 0017A2CC  38 84 FF FF */	addi r4, r4, -0x1
/* 8017D1F0 0017A2D0  48 00 00 25 */	bl "mod_max_size__41static_queue<Q213xDecalEmitter9unit_data>CFUl"
/* 8017D1F4 0017A2D4  90 7F 00 00 */	stw r3, 0x0(r31)
/* 8017D1F8 0017A2D8  7F E3 FB 78 */	mr r3, r31
/* 8017D1FC 0017A2DC  4B FF FF 41 */	bl "front__41static_queue<Q213xDecalEmitter9unit_data>Fv"
/* 8017D200 0017A2E0  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8017D204 0017A2E4  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8017D208 0017A2E8  7C 08 03 A6 */	mtlr r0
/* 8017D20C 0017A2EC  38 21 00 10 */	addi r1, r1, 0x10
/* 8017D210 0017A2F0  4E 80 00 20 */	blr
.endfn "push_front__41static_queue<Q213xDecalEmitter9unit_data>Fv"

# static_queue<xDecalEmitter::unit_data>::mod_max_size(unsigned long) const
.fn "mod_max_size__41static_queue<Q213xDecalEmitter9unit_data>CFUl", weak
/* 8017D214 0017A2F4  80 03 00 0C */	lwz r0, 0xc(r3)
/* 8017D218 0017A2F8  7C 83 00 38 */	and r3, r4, r0
/* 8017D21C 0017A2FC  4E 80 00 20 */	blr
.endfn "mod_max_size__41static_queue<Q213xDecalEmitter9unit_data>CFUl"

# static_queue<xDecalEmitter::unit_data>::pop_back()
.fn "pop_back__41static_queue<Q213xDecalEmitter9unit_data>Fv", weak
/* 8017D220 0017A300  80 83 00 04 */	lwz r4, 0x4(r3)
/* 8017D224 0017A304  38 04 FF FF */	addi r0, r4, -0x1
/* 8017D228 0017A308  90 03 00 04 */	stw r0, 0x4(r3)
/* 8017D22C 0017A30C  4E 80 00 20 */	blr
.endfn "pop_back__41static_queue<Q213xDecalEmitter9unit_data>Fv"

# static_queue<xDecalEmitter::unit_data>::full() const
.fn "full__41static_queue<Q213xDecalEmitter9unit_data>CFv", weak
/* 8017D230 0017A310  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8017D234 0017A314  7C 08 02 A6 */	mflr r0
/* 8017D238 0017A318  90 01 00 14 */	stw r0, 0x14(r1)
/* 8017D23C 0017A31C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8017D240 0017A320  93 C1 00 08 */	stw r30, 0x8(r1)
/* 8017D244 0017A324  7C 7E 1B 78 */	mr r30, r3
/* 8017D248 0017A328  48 00 00 35 */	bl "max_size__41static_queue<Q213xDecalEmitter9unit_data>CFv"
/* 8017D24C 0017A32C  7C 7F 1B 78 */	mr r31, r3
/* 8017D250 0017A330  7F C3 F3 78 */	mr r3, r30
/* 8017D254 0017A334  4B FF FE 55 */	bl "size__41static_queue<Q213xDecalEmitter9unit_data>CFv"
/* 8017D258 0017A338  7C 03 F8 50 */	subf r0, r3, r31
/* 8017D25C 0017A33C  7C 00 00 34 */	cntlzw r0, r0
/* 8017D260 0017A340  54 03 D9 7E */	srwi r3, r0, 5
/* 8017D264 0017A344  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8017D268 0017A348  83 C1 00 08 */	lwz r30, 0x8(r1)
/* 8017D26C 0017A34C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8017D270 0017A350  7C 08 03 A6 */	mtlr r0
/* 8017D274 0017A354  38 21 00 10 */	addi r1, r1, 0x10
/* 8017D278 0017A358  4E 80 00 20 */	blr
.endfn "full__41static_queue<Q213xDecalEmitter9unit_data>CFv"

# static_queue<xDecalEmitter::unit_data>::max_size() const
.fn "max_size__41static_queue<Q213xDecalEmitter9unit_data>CFv", weak
/* 8017D27C 0017A35C  80 63 00 08 */	lwz r3, 0x8(r3)
/* 8017D280 0017A360  38 63 FF FF */	addi r3, r3, -0x1
/* 8017D284 0017A364  4E 80 00 20 */	blr
.endfn "max_size__41static_queue<Q213xDecalEmitter9unit_data>CFv"

# static_queue<xDecalEmitter::unit_data>::erase(const static_queue<xDecalEmitter::unit_data>::iterator&, const static_queue<xDecalEmitter::unit_data>::iterator&)
.fn "erase__41static_queue<Q213xDecalEmitter9unit_data>FRCQ241static_queue<Q213xDecalEmitter9unit_data>8iteratorRCQ241static_queue<Q213xDecalEmitter9unit_data>8iterator", weak
/* 8017D288 0017A368  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8017D28C 0017A36C  7C 08 02 A6 */	mflr r0
/* 8017D290 0017A370  80 84 00 00 */	lwz r4, 0x0(r4)
/* 8017D294 0017A374  90 01 00 14 */	stw r0, 0x14(r1)
/* 8017D298 0017A378  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8017D29C 0017A37C  7C 7F 1B 78 */	mr r31, r3
/* 8017D2A0 0017A380  80 C3 00 00 */	lwz r6, 0x0(r3)
/* 8017D2A4 0017A384  7C 04 30 40 */	cmplw r4, r6
/* 8017D2A8 0017A388  40 82 00 28 */	bne .L_8017D2D0
/* 8017D2AC 0017A38C  80 9F 00 04 */	lwz r4, 0x4(r31)
/* 8017D2B0 0017A390  80 05 00 00 */	lwz r0, 0x0(r5)
/* 8017D2B4 0017A394  7C 86 22 14 */	add r4, r6, r4
/* 8017D2B8 0017A398  90 1F 00 00 */	stw r0, 0x0(r31)
/* 8017D2BC 0017A39C  80 1F 00 00 */	lwz r0, 0x0(r31)
/* 8017D2C0 0017A3A0  7C 80 20 50 */	subf r4, r0, r4
/* 8017D2C4 0017A3A4  4B FF FF 51 */	bl "mod_max_size__41static_queue<Q213xDecalEmitter9unit_data>CFUl"
/* 8017D2C8 0017A3A8  90 7F 00 04 */	stw r3, 0x4(r31)
/* 8017D2CC 0017A3AC  48 00 00 1C */	b .L_8017D2E8
.L_8017D2D0:
/* 8017D2D0 0017A3B0  80 05 00 00 */	lwz r0, 0x0(r5)
/* 8017D2D4 0017A3B4  7C 84 00 50 */	subf r4, r4, r0
/* 8017D2D8 0017A3B8  4B FF FF 3D */	bl "mod_max_size__41static_queue<Q213xDecalEmitter9unit_data>CFUl"
/* 8017D2DC 0017A3BC  80 1F 00 04 */	lwz r0, 0x4(r31)
/* 8017D2E0 0017A3C0  7C 03 00 50 */	subf r0, r3, r0
/* 8017D2E4 0017A3C4  90 1F 00 04 */	stw r0, 0x4(r31)
.L_8017D2E8:
/* 8017D2E8 0017A3C8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8017D2EC 0017A3CC  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8017D2F0 0017A3D0  7C 08 03 A6 */	mtlr r0
/* 8017D2F4 0017A3D4  38 21 00 10 */	addi r1, r1, 0x10
/* 8017D2F8 0017A3D8  4E 80 00 20 */	blr
.endfn "erase__41static_queue<Q213xDecalEmitter9unit_data>FRCQ241static_queue<Q213xDecalEmitter9unit_data>8iteratorRCQ241static_queue<Q213xDecalEmitter9unit_data>8iterator"

# static_queue<xDecalEmitter::unit_data>::iterator::operator!=(const static_queue<xDecalEmitter::unit_data>::iterator&) const
.fn "__ne__Q241static_queue<Q213xDecalEmitter9unit_data>8iteratorCFRCQ241static_queue<Q213xDecalEmitter9unit_data>8iterator", weak
/* 8017D2FC 0017A3DC  80 A3 00 00 */	lwz r5, 0x0(r3)
/* 8017D300 0017A3E0  80 04 00 00 */	lwz r0, 0x0(r4)
/* 8017D304 0017A3E4  7C 65 00 50 */	subf r3, r5, r0
/* 8017D308 0017A3E8  7C 00 28 50 */	subf r0, r0, r5
/* 8017D30C 0017A3EC  7C 60 03 78 */	or r0, r3, r0
/* 8017D310 0017A3F0  54 03 0F FE */	srwi r3, r0, 31
/* 8017D314 0017A3F4  4E 80 00 20 */	blr
.endfn "__ne__Q241static_queue<Q213xDecalEmitter9unit_data>8iteratorCFRCQ241static_queue<Q213xDecalEmitter9unit_data>8iterator"

# static_queue<xDecalEmitter::unit_data>::end() const
.fn "end__41static_queue<Q213xDecalEmitter9unit_data>CFv", weak
/* 8017D318 0017A3F8  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8017D31C 0017A3FC  7C 08 02 A6 */	mflr r0
/* 8017D320 0017A400  80 83 00 00 */	lwz r4, 0x0(r3)
/* 8017D324 0017A404  90 01 00 14 */	stw r0, 0x14(r1)
/* 8017D328 0017A408  80 03 00 04 */	lwz r0, 0x4(r3)
/* 8017D32C 0017A40C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8017D330 0017A410  7C 7F 1B 78 */	mr r31, r3
/* 8017D334 0017A414  7C 84 02 14 */	add r4, r4, r0
/* 8017D338 0017A418  4B FF FE DD */	bl "mod_max_size__41static_queue<Q213xDecalEmitter9unit_data>CFUl"
/* 8017D33C 0017A41C  7C 64 1B 78 */	mr r4, r3
/* 8017D340 0017A420  7F E3 FB 78 */	mr r3, r31
/* 8017D344 0017A424  4B FF FE 65 */	bl "create_iterator__41static_queue<Q213xDecalEmitter9unit_data>CFUl"
/* 8017D348 0017A428  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8017D34C 0017A42C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8017D350 0017A430  7C 08 03 A6 */	mtlr r0
/* 8017D354 0017A434  38 21 00 10 */	addi r1, r1, 0x10
/* 8017D358 0017A438  4E 80 00 20 */	blr
.endfn "end__41static_queue<Q213xDecalEmitter9unit_data>CFv"

# static_queue<xDecalEmitter::unit_data>::iterator::operator++()
.fn "__pp__Q241static_queue<Q213xDecalEmitter9unit_data>8iteratorFv", weak
/* 8017D35C 0017A43C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8017D360 0017A440  7C 08 02 A6 */	mflr r0
/* 8017D364 0017A444  38 80 00 01 */	li r4, 0x1
/* 8017D368 0017A448  90 01 00 14 */	stw r0, 0x14(r1)
/* 8017D36C 0017A44C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8017D370 0017A450  7C 7F 1B 78 */	mr r31, r3
/* 8017D374 0017A454  48 00 00 1D */	bl "__apl__Q241static_queue<Q213xDecalEmitter9unit_data>8iteratorFi"
/* 8017D378 0017A458  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8017D37C 0017A45C  7F E3 FB 78 */	mr r3, r31
/* 8017D380 0017A460  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8017D384 0017A464  7C 08 03 A6 */	mtlr r0
/* 8017D388 0017A468  38 21 00 10 */	addi r1, r1, 0x10
/* 8017D38C 0017A46C  4E 80 00 20 */	blr
.endfn "__pp__Q241static_queue<Q213xDecalEmitter9unit_data>8iteratorFv"

# static_queue<xDecalEmitter::unit_data>::iterator::operator+=(int)
.fn "__apl__Q241static_queue<Q213xDecalEmitter9unit_data>8iteratorFi", weak
/* 8017D390 0017A470  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8017D394 0017A474  7C 08 02 A6 */	mflr r0
/* 8017D398 0017A478  90 01 00 14 */	stw r0, 0x14(r1)
/* 8017D39C 0017A47C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8017D3A0 0017A480  7C 7F 1B 78 */	mr r31, r3
/* 8017D3A4 0017A484  80 03 00 00 */	lwz r0, 0x0(r3)
/* 8017D3A8 0017A488  80 63 00 04 */	lwz r3, 0x4(r3)
/* 8017D3AC 0017A48C  7C 80 22 14 */	add r4, r0, r4
/* 8017D3B0 0017A490  4B FF FE 65 */	bl "mod_max_size__41static_queue<Q213xDecalEmitter9unit_data>CFUl"
/* 8017D3B4 0017A494  90 7F 00 00 */	stw r3, 0x0(r31)
/* 8017D3B8 0017A498  7F E3 FB 78 */	mr r3, r31
/* 8017D3BC 0017A49C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8017D3C0 0017A4A0  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8017D3C4 0017A4A4  7C 08 03 A6 */	mtlr r0
/* 8017D3C8 0017A4A8  38 21 00 10 */	addi r1, r1, 0x10
/* 8017D3CC 0017A4AC  4E 80 00 20 */	blr
.endfn "__apl__Q241static_queue<Q213xDecalEmitter9unit_data>8iteratorFi"

# 0x8017D3D0 - 0x8017D544
.section .text, "ax", unique, 3
.balign 4

# ptank_pool__color_mat_uv2::flush()
.fn flush__25ptank_pool__color_mat_uv2Fv, weak
/* 8017D3D0 0017A4B0  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8017D3D4 0017A4B4  7C 08 02 A6 */	mflr r0
/* 8017D3D8 0017A4B8  90 01 00 14 */	stw r0, 0x14(r1)
/* 8017D3DC 0017A4BC  38 00 00 04 */	li r0, 0x4
/* 8017D3E0 0017A4C0  80 A3 00 24 */	lwz r5, 0x24(r3)
/* 8017D3E4 0017A4C4  80 83 00 30 */	lwz r4, 0x30(r3)
/* 8017D3E8 0017A4C8  7C 85 22 14 */	add r4, r5, r4
/* 8017D3EC 0017A4CC  90 83 00 18 */	stw r4, 0x18(r3)
/* 8017D3F0 0017A4D0  80 83 00 30 */	lwz r4, 0x30(r3)
/* 8017D3F4 0017A4D4  90 83 00 1C */	stw r4, 0x1c(r3)
/* 8017D3F8 0017A4D8  90 03 00 20 */	stw r0, 0x20(r3)
/* 8017D3FC 0017A4DC  48 00 2B 41 */	bl flush__10ptank_poolFv
/* 8017D400 0017A4E0  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8017D404 0017A4E4  7C 08 03 A6 */	mtlr r0
/* 8017D408 0017A4E8  38 21 00 10 */	addi r1, r1, 0x10
/* 8017D40C 0017A4EC  4E 80 00 20 */	blr
.endfn flush__25ptank_pool__color_mat_uv2Fv

# ptank_pool__color_mat_uv2::next()
.fn next__25ptank_pool__color_mat_uv2Fv, weak
/* 8017D410 0017A4F0  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8017D414 0017A4F4  7C 08 02 A6 */	mflr r0
/* 8017D418 0017A4F8  90 01 00 14 */	stw r0, 0x14(r1)
/* 8017D41C 0017A4FC  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8017D420 0017A500  7C 7F 1B 78 */	mr r31, r3
/* 8017D424 0017A504  4B F9 A2 49 */	bl at_block_end__10ptank_poolCFv
/* 8017D428 0017A508  54 60 06 3F */	clrlwi. r0, r3, 24
/* 8017D42C 0017A50C  41 82 00 44 */	beq .L_8017D470
/* 8017D430 0017A510  7F E3 FB 78 */	mr r3, r31
/* 8017D434 0017A514  4B F9 A0 61 */	bl valid__10ptank_poolCFv
/* 8017D438 0017A518  54 60 06 3F */	clrlwi. r0, r3, 24
/* 8017D43C 0017A51C  41 82 00 0C */	beq .L_8017D448
/* 8017D440 0017A520  7F E3 FB 78 */	mr r3, r31
/* 8017D444 0017A524  4B F9 A1 C5 */	bl unlock_block__10ptank_poolFv
.L_8017D448:
/* 8017D448 0017A528  7F E3 FB 78 */	mr r3, r31
/* 8017D44C 0017A52C  38 80 00 00 */	li r4, 0x0
/* 8017D450 0017A530  48 00 28 AD */	bl grab_block__10ptank_poolF16ptank_group_type
/* 8017D454 0017A534  7F E3 FB 78 */	mr r3, r31
/* 8017D458 0017A538  4B F9 A0 3D */	bl valid__10ptank_poolCFv
/* 8017D45C 0017A53C  54 60 06 3F */	clrlwi. r0, r3, 24
/* 8017D460 0017A540  41 82 00 4C */	beq .L_8017D4AC
/* 8017D464 0017A544  7F E3 FB 78 */	mr r3, r31
/* 8017D468 0017A548  48 00 00 59 */	bl lock_block__25ptank_pool__color_mat_uv2Fv
/* 8017D46C 0017A54C  48 00 00 34 */	b .L_8017D4A0
.L_8017D470:
/* 8017D470 0017A550  80 7F 00 24 */	lwz r3, 0x24(r31)
/* 8017D474 0017A554  80 1F 00 30 */	lwz r0, 0x30(r31)
/* 8017D478 0017A558  7C 03 02 14 */	add r0, r3, r0
/* 8017D47C 0017A55C  90 1F 00 24 */	stw r0, 0x24(r31)
/* 8017D480 0017A560  80 7F 00 28 */	lwz r3, 0x28(r31)
/* 8017D484 0017A564  80 1F 00 30 */	lwz r0, 0x30(r31)
/* 8017D488 0017A568  7C 03 02 14 */	add r0, r3, r0
/* 8017D48C 0017A56C  90 1F 00 28 */	stw r0, 0x28(r31)
/* 8017D490 0017A570  80 7F 00 2C */	lwz r3, 0x2c(r31)
/* 8017D494 0017A574  80 1F 00 30 */	lwz r0, 0x30(r31)
/* 8017D498 0017A578  7C 03 02 14 */	add r0, r3, r0
/* 8017D49C 0017A57C  90 1F 00 2C */	stw r0, 0x2c(r31)
.L_8017D4A0:
/* 8017D4A0 0017A580  80 7F 00 10 */	lwz r3, 0x10(r31)
/* 8017D4A4 0017A584  38 03 00 01 */	addi r0, r3, 0x1
/* 8017D4A8 0017A588  90 1F 00 10 */	stw r0, 0x10(r31)
.L_8017D4AC:
/* 8017D4AC 0017A58C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8017D4B0 0017A590  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8017D4B4 0017A594  7C 08 03 A6 */	mtlr r0
/* 8017D4B8 0017A598  38 21 00 10 */	addi r1, r1, 0x10
/* 8017D4BC 0017A59C  4E 80 00 20 */	blr
.endfn next__25ptank_pool__color_mat_uv2Fv

# ptank_pool__color_mat_uv2::lock_block()
.fn lock_block__25ptank_pool__color_mat_uv2Fv, weak
/* 8017D4C0 0017A5A0  94 21 FF D0 */	stwu r1, -0x30(r1)
/* 8017D4C4 0017A5A4  7C 08 02 A6 */	mflr r0
/* 8017D4C8 0017A5A8  38 A0 00 02 */	li r5, 0x2
/* 8017D4CC 0017A5AC  3C C0 40 00 */	lis r6, 0x4000
/* 8017D4D0 0017A5B0  90 01 00 34 */	stw r0, 0x34(r1)
/* 8017D4D4 0017A5B4  38 81 00 18 */	addi r4, r1, 0x18
/* 8017D4D8 0017A5B8  93 E1 00 2C */	stw r31, 0x2c(r1)
/* 8017D4DC 0017A5BC  7C 7F 1B 78 */	mr r31, r3
/* 8017D4E0 0017A5C0  80 63 00 14 */	lwz r3, 0x14(r3)
/* 8017D4E4 0017A5C4  48 08 92 B1 */	bl RpPTankAtomicLock
/* 8017D4E8 0017A5C8  80 7F 00 14 */	lwz r3, 0x14(r31)
/* 8017D4EC 0017A5CC  38 81 00 10 */	addi r4, r1, 0x10
/* 8017D4F0 0017A5D0  38 A0 00 08 */	li r5, 0x8
/* 8017D4F4 0017A5D4  3C C0 40 00 */	lis r6, 0x4000
/* 8017D4F8 0017A5D8  48 08 92 9D */	bl RpPTankAtomicLock
/* 8017D4FC 0017A5DC  80 7F 00 14 */	lwz r3, 0x14(r31)
/* 8017D500 0017A5E0  38 81 00 08 */	addi r4, r1, 0x8
/* 8017D504 0017A5E4  38 A0 00 80 */	li r5, 0x80
/* 8017D508 0017A5E8  3C C0 40 00 */	lis r6, 0x4000
/* 8017D50C 0017A5EC  48 08 92 89 */	bl RpPTankAtomicLock
/* 8017D510 0017A5F0  80 01 00 18 */	lwz r0, 0x18(r1)
/* 8017D514 0017A5F4  90 1F 00 24 */	stw r0, 0x24(r31)
/* 8017D518 0017A5F8  80 01 00 10 */	lwz r0, 0x10(r1)
/* 8017D51C 0017A5FC  90 1F 00 28 */	stw r0, 0x28(r31)
/* 8017D520 0017A600  80 01 00 08 */	lwz r0, 0x8(r1)
/* 8017D524 0017A604  90 1F 00 2C */	stw r0, 0x2c(r31)
/* 8017D528 0017A608  80 01 00 1C */	lwz r0, 0x1c(r1)
/* 8017D52C 0017A60C  90 1F 00 30 */	stw r0, 0x30(r31)
/* 8017D530 0017A610  83 E1 00 2C */	lwz r31, 0x2c(r1)
/* 8017D534 0017A614  80 01 00 34 */	lwz r0, 0x34(r1)
/* 8017D538 0017A618  7C 08 03 A6 */	mtlr r0
/* 8017D53C 0017A61C  38 21 00 30 */	addi r1, r1, 0x30
/* 8017D540 0017A620  4E 80 00 20 */	blr
.endfn lock_block__25ptank_pool__color_mat_uv2Fv

# 0x8032B448 - 0x8032B4C8
.section .bss, "wa", @nobits
.balign 8

# @unnamed@xDecal_cpp@::active_emitters
.obj "active_emitters__20@unnamed@xDecal_cpp@", local
	.skip 0x80
.endobj "active_emitters__20@unnamed@xDecal_cpp@"

# 0x803CC0B0 - 0x803CC0B8
.section .sbss, "wa", @nobits
.balign 8

# @unnamed@xDecal_cpp@::active_emitters_size
.obj "active_emitters_size__20@unnamed@xDecal_cpp@", local
	.skip 0x4
.endobj "active_emitters_size__20@unnamed@xDecal_cpp@"
	.skip 0x4

# 0x803CF778 - 0x803CF7A0
.section .sdata2, "a"
.balign 8

.obj "@805", local
	.4byte 0x3F800000
.endobj "@805"

.obj "@806", local
	.4byte 0x00000000
.endobj "@806"

.obj "@834", local
	.4byte 0x3A83126F
.endobj "@834"

.obj "@835", local
	.4byte 0x3F7D70A4
.endobj "@835"

.obj "@836", local
	.4byte 0x3C23D70A
.endobj "@836"
	.4byte 0x00000000

.obj "@838", local
	.4byte 0x43300000
	.4byte 0x00000000
.endobj "@838"

.obj "@875", local
	.4byte 0x3F000000
.endobj "@875"
	.4byte 0x00000000
