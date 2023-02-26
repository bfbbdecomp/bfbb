.include "macros.inc"
.file "xHudMeter.cpp"

# 0x8002F57C - 0x8002FAF0
.text
.balign 4

# xhud::@unnamed@xHudMeter_cpp@::add_global_tweaks()
.fn "add_global_tweaks__Q24xhud23@unnamed@xHudMeter_cpp@Fv", local
/* 8002F57C 0002C65C  4E 80 00 20 */	blr
.endfn "add_global_tweaks__Q24xhud23@unnamed@xHudMeter_cpp@Fv"

# xhud::meter_widget::set_value(float)
.fn set_value__Q24xhud12meter_widgetFf, global
/* 8002F580 0002C660  94 21 FF C0 */	stwu r1, -0x40(r1)
/* 8002F584 0002C664  7C 08 02 A6 */	mflr r0
/* 8002F588 0002C668  90 01 00 44 */	stw r0, 0x44(r1)
/* 8002F58C 0002C66C  DB E1 00 30 */	stfd f31, 0x30(r1)
/* 8002F590 0002C670  F3 E1 00 38 */	psq_st f31, 0x38(r1), 0, qr0
/* 8002F594 0002C674  DB C1 00 20 */	stfd f30, 0x20(r1)
/* 8002F598 0002C678  F3 C1 00 28 */	psq_st f30, 0x28(r1), 0, qr0
/* 8002F59C 0002C67C  DB A1 00 10 */	stfd f29, 0x10(r1)
/* 8002F5A0 0002C680  F3 A1 00 18 */	psq_st f29, 0x18(r1), 0, qr0
/* 8002F5A4 0002C684  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8002F5A8 0002C688  7C 7F 1B 78 */	mr r31, r3
/* 8002F5AC 0002C68C  FF A0 08 90 */	fmr f29, f1
/* 8002F5B0 0002C690  C0 43 00 88 */	lfs f2, 0x88(r3)
/* 8002F5B4 0002C694  C0 02 84 20 */	lfs f0, "@680"@sda21(r2)
/* 8002F5B8 0002C698  EF FD 10 28 */	fsubs f31, f29, f2
/* 8002F5BC 0002C69C  FC 1F 00 40 */	fcmpo cr0, f31, f0
/* 8002F5C0 0002C6A0  40 80 00 60 */	bge .L_8002F620
/* 8002F5C4 0002C6A4  80 7F 00 84 */	lwz r3, 0x84(r31)
/* 8002F5C8 0002C6A8  80 63 00 44 */	lwz r3, 0x44(r3)
/* 8002F5CC 0002C6AC  28 03 00 00 */	cmplwi r3, 0x0
/* 8002F5D0 0002C6B0  41 82 00 24 */	beq .L_8002F5F4
/* 8002F5D4 0002C6B4  C0 42 84 28 */	lfs f2, "@682"@sda21(r2)
/* 8002F5D8 0002C6B8  38 80 00 80 */	li r4, 0x80
/* 8002F5DC 0002C6BC  C0 22 84 24 */	lfs f1, "@681"@sda21(r2)
/* 8002F5E0 0002C6C0  38 A0 00 00 */	li r5, 0x0
/* 8002F5E4 0002C6C4  FC 60 10 90 */	fmr f3, f2
/* 8002F5E8 0002C6C8  38 C0 00 00 */	li r6, 0x0
/* 8002F5EC 0002C6CC  38 E0 00 00 */	li r7, 0x0
/* 8002F5F0 0002C6D0  48 01 94 3D */	bl xSndPlay__FUiffUiUiUi14sound_categoryf
.L_8002F5F4:
/* 8002F5F4 0002C6D4  80 7F 00 84 */	lwz r3, 0x84(r31)
/* 8002F5F8 0002C6D8  C0 02 84 2C */	lfs f0, "@683"@sda21(r2)
/* 8002F5FC 0002C6DC  C0 23 00 38 */	lfs f1, 0x38(r3)
/* 8002F600 0002C6E0  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8002F604 0002C6E4  40 80 00 14 */	bge .L_8002F618
/* 8002F608 0002C6E8  FC 20 E8 90 */	fmr f1, f29
/* 8002F60C 0002C6EC  7F E3 FB 78 */	mr r3, r31
/* 8002F610 0002C6F0  48 00 01 39 */	bl set_value_immediate__Q24xhud12meter_widgetFf
/* 8002F614 0002C6F4  48 00 01 08 */	b .L_8002F71C
.L_8002F618:
/* 8002F618 0002C6F8  C3 C2 84 30 */	lfs f30, "@684"@sda21(r2)
/* 8002F61C 0002C6FC  48 00 00 74 */	b .L_8002F690
.L_8002F620:
/* 8002F620 0002C700  C0 02 84 2C */	lfs f0, "@683"@sda21(r2)
/* 8002F624 0002C704  FC 1F 00 40 */	fcmpo cr0, f31, f0
/* 8002F628 0002C708  40 81 00 60 */	ble .L_8002F688
/* 8002F62C 0002C70C  80 7F 00 84 */	lwz r3, 0x84(r31)
/* 8002F630 0002C710  80 63 00 3C */	lwz r3, 0x3c(r3)
/* 8002F634 0002C714  28 03 00 00 */	cmplwi r3, 0x0
/* 8002F638 0002C718  41 82 00 24 */	beq .L_8002F65C
/* 8002F63C 0002C71C  C0 42 84 28 */	lfs f2, "@682"@sda21(r2)
/* 8002F640 0002C720  38 80 00 80 */	li r4, 0x80
/* 8002F644 0002C724  C0 22 84 24 */	lfs f1, "@681"@sda21(r2)
/* 8002F648 0002C728  38 A0 00 00 */	li r5, 0x0
/* 8002F64C 0002C72C  FC 60 10 90 */	fmr f3, f2
/* 8002F650 0002C730  38 C0 00 00 */	li r6, 0x0
/* 8002F654 0002C734  38 E0 00 00 */	li r7, 0x0
/* 8002F658 0002C738  48 01 93 D5 */	bl xSndPlay__FUiffUiUiUi14sound_categoryf
.L_8002F65C:
/* 8002F65C 0002C73C  80 7F 00 84 */	lwz r3, 0x84(r31)
/* 8002F660 0002C740  C0 02 84 2C */	lfs f0, "@683"@sda21(r2)
/* 8002F664 0002C744  C0 23 00 34 */	lfs f1, 0x34(r3)
/* 8002F668 0002C748  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8002F66C 0002C74C  40 80 00 14 */	bge .L_8002F680
/* 8002F670 0002C750  FC 20 E8 90 */	fmr f1, f29
/* 8002F674 0002C754  7F E3 FB 78 */	mr r3, r31
/* 8002F678 0002C758  48 00 00 D1 */	bl set_value_immediate__Q24xhud12meter_widgetFf
/* 8002F67C 0002C75C  48 00 00 A0 */	b .L_8002F71C
.L_8002F680:
/* 8002F680 0002C760  C3 C2 84 24 */	lfs f30, "@681"@sda21(r2)
/* 8002F684 0002C764  48 00 00 0C */	b .L_8002F690
.L_8002F688:
/* 8002F688 0002C768  48 00 00 C1 */	bl set_value_immediate__Q24xhud12meter_widgetFf
/* 8002F68C 0002C76C  48 00 00 90 */	b .L_8002F71C
.L_8002F690:
/* 8002F690 0002C770  D3 BF 00 94 */	stfs f29, 0x94(r31)
/* 8002F694 0002C774  80 7F 00 84 */	lwz r3, 0x84(r31)
/* 8002F698 0002C778  C0 22 84 28 */	lfs f1, "@682"@sda21(r2)
/* 8002F69C 0002C77C  C0 03 00 38 */	lfs f0, 0x38(r3)
/* 8002F6A0 0002C780  FC 01 00 00 */	fcmpu cr0, f1, f0
/* 8002F6A4 0002C784  40 82 00 14 */	bne .L_8002F6B8
/* 8002F6A8 0002C788  3C 60 80 25 */	lis r3, "@stringBase0"@ha
/* 8002F6AC 0002C78C  38 63 2F 38 */	addi r3, r3, "@stringBase0"@l
/* 8002F6B0 0002C790  4C C6 31 82 */	crclr 4*cr1+eq
/* 8002F6B4 0002C794  48 1B 4B 51 */	bl printf
.L_8002F6B8:
/* 8002F6B8 0002C798  80 7F 00 84 */	lwz r3, 0x84(r31)
/* 8002F6BC 0002C79C  C0 02 84 34 */	lfs f0, "@685"@sda21(r2)
/* 8002F6C0 0002C7A0  C0 23 00 38 */	lfs f1, 0x38(r3)
/* 8002F6C4 0002C7A4  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8002F6C8 0002C7A8  40 81 00 08 */	ble .L_8002F6D0
/* 8002F6CC 0002C7AC  48 00 00 08 */	b .L_8002F6D4
.L_8002F6D0:
/* 8002F6D0 0002C7B0  FC 20 00 90 */	fmr f1, f0
.L_8002F6D4:
/* 8002F6D4 0002C7B4  EC 1E 08 24 */	fdivs f0, f30, f1
/* 8002F6D8 0002C7B8  D0 1F 00 98 */	stfs f0, 0x98(r31)
/* 8002F6DC 0002C7BC  C0 02 84 38 */	lfs f0, "@686"@sda21(r2)
/* 8002F6E0 0002C7C0  EC 00 07 B2 */	fmuls f0, f0, f30
/* 8002F6E4 0002C7C4  D0 1F 00 9C */	stfs f0, 0x9c(r31)
/* 8002F6E8 0002C7C8  C0 02 84 28 */	lfs f0, "@682"@sda21(r2)
/* 8002F6EC 0002C7CC  D0 1F 00 A4 */	stfs f0, 0xa4(r31)
/* 8002F6F0 0002C7D0  C0 22 84 3C */	lfs f1, "@687"@sda21(r2)
/* 8002F6F4 0002C7D4  C0 1F 00 9C */	lfs f0, 0x9c(r31)
/* 8002F6F8 0002C7D8  EF E1 07 F2 */	fmuls f31, f1, f31
/* 8002F6FC 0002C7DC  EC 3F 00 24 */	fdivs f1, f31, f0
/* 8002F700 0002C7E0  4B FD B0 FD */	bl xsqrt__Ff
/* 8002F704 0002C7E4  C0 02 84 3C */	lfs f0, "@687"@sda21(r2)
/* 8002F708 0002C7E8  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8002F70C 0002C7EC  40 81 00 10 */	ble .L_8002F71C
/* 8002F710 0002C7F0  C0 02 84 40 */	lfs f0, "@688"@sda21(r2)
/* 8002F714 0002C7F4  EC 1F 00 32 */	fmuls f0, f31, f0
/* 8002F718 0002C7F8  D0 1F 00 9C */	stfs f0, 0x9c(r31)
.L_8002F71C:
/* 8002F71C 0002C7FC  E3 E1 00 38 */	psq_l f31, 0x38(r1), 0, qr0
/* 8002F720 0002C800  CB E1 00 30 */	lfd f31, 0x30(r1)
/* 8002F724 0002C804  E3 C1 00 28 */	psq_l f30, 0x28(r1), 0, qr0
/* 8002F728 0002C808  CB C1 00 20 */	lfd f30, 0x20(r1)
/* 8002F72C 0002C80C  E3 A1 00 18 */	psq_l f29, 0x18(r1), 0, qr0
/* 8002F730 0002C810  CB A1 00 10 */	lfd f29, 0x10(r1)
/* 8002F734 0002C814  80 01 00 44 */	lwz r0, 0x44(r1)
/* 8002F738 0002C818  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8002F73C 0002C81C  7C 08 03 A6 */	mtlr r0
/* 8002F740 0002C820  38 21 00 40 */	addi r1, r1, 0x40
/* 8002F744 0002C824  4E 80 00 20 */	blr
.endfn set_value__Q24xhud12meter_widgetFf

# xhud::meter_widget::set_value_immediate(float)
.fn set_value_immediate__Q24xhud12meter_widgetFf, global
/* 8002F748 0002C828  D0 23 00 88 */	stfs f1, 0x88(r3)
/* 8002F74C 0002C82C  D0 23 00 94 */	stfs f1, 0x94(r3)
/* 8002F750 0002C830  C0 02 84 28 */	lfs f0, "@682"@sda21(r2)
/* 8002F754 0002C834  D0 03 00 98 */	stfs f0, 0x98(r3)
/* 8002F758 0002C838  4E 80 00 20 */	blr
.endfn set_value_immediate__Q24xhud12meter_widgetFf

# xhud::meter_widget::meter_widget(const xhud::meter_asset&)
.fn __ct__Q24xhud12meter_widgetFRCQ24xhud11meter_asset, global
/* 8002F75C 0002C83C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8002F760 0002C840  7C 08 02 A6 */	mflr r0
/* 8002F764 0002C844  90 01 00 14 */	stw r0, 0x14(r1)
/* 8002F768 0002C848  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8002F76C 0002C84C  7C 9F 23 78 */	mr r31, r4
/* 8002F770 0002C850  93 C1 00 08 */	stw r30, 0x8(r1)
/* 8002F774 0002C854  7C 7E 1B 78 */	mr r30, r3
/* 8002F778 0002C858  4B FF E4 B1 */	bl __ct__Q24xhud6widgetFRCQ24xhud5asset
/* 8002F77C 0002C85C  3C 60 80 28 */	lis r3, __vt__Q24xhud12meter_widget@ha
/* 8002F780 0002C860  C0 5F 00 28 */	lfs f2, 0x28(r31)
/* 8002F784 0002C864  38 03 D6 78 */	addi r0, r3, __vt__Q24xhud12meter_widget@l
/* 8002F788 0002C868  C0 3F 00 2C */	lfs f1, 0x2c(r31)
/* 8002F78C 0002C86C  90 1E 00 74 */	stw r0, 0x74(r30)
/* 8002F790 0002C870  38 7E 00 A8 */	addi r3, r30, 0xa8
/* 8002F794 0002C874  C0 1F 00 30 */	lfs f0, 0x30(r31)
/* 8002F798 0002C878  93 FE 00 84 */	stw r31, 0x84(r30)
/* 8002F79C 0002C87C  D0 5E 00 88 */	stfs f2, 0x88(r30)
/* 8002F7A0 0002C880  D0 3E 00 8C */	stfs f1, 0x8c(r30)
/* 8002F7A4 0002C884  D0 1E 00 90 */	stfs f0, 0x90(r30)
/* 8002F7A8 0002C888  D0 5E 00 94 */	stfs f2, 0x94(r30)
/* 8002F7AC 0002C88C  C0 02 84 28 */	lfs f0, "@682"@sda21(r2)
/* 8002F7B0 0002C890  D0 1E 00 98 */	stfs f0, 0x98(r30)
/* 8002F7B4 0002C894  C0 02 84 48 */	lfs f0, "@704"@sda21(r2)
/* 8002F7B8 0002C898  D0 1E 00 A0 */	stfs f0, 0xa0(r30)
/* 8002F7BC 0002C89C  48 00 03 35 */	bl "__ct__14sound_queue<4>Fv"
/* 8002F7C0 0002C8A0  4B FF FD BD */	bl "add_global_tweaks__Q24xhud23@unnamed@xHudMeter_cpp@Fv"
/* 8002F7C4 0002C8A4  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8002F7C8 0002C8A8  7F C3 F3 78 */	mr r3, r30
/* 8002F7CC 0002C8AC  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8002F7D0 0002C8B0  83 C1 00 08 */	lwz r30, 0x8(r1)
/* 8002F7D4 0002C8B4  7C 08 03 A6 */	mtlr r0
/* 8002F7D8 0002C8B8  38 21 00 10 */	addi r1, r1, 0x10
/* 8002F7DC 0002C8BC  4E 80 00 20 */	blr
.endfn __ct__Q24xhud12meter_widgetFRCQ24xhud11meter_asset

# xhud::meter_widget::destruct()
.fn destruct__Q24xhud12meter_widgetFv, global
/* 8002F7E0 0002C8C0  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8002F7E4 0002C8C4  7C 08 02 A6 */	mflr r0
/* 8002F7E8 0002C8C8  90 01 00 14 */	stw r0, 0x14(r1)
/* 8002F7EC 0002C8CC  4B FF E5 A9 */	bl destruct__Q24xhud6widgetFv
/* 8002F7F0 0002C8D0  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8002F7F4 0002C8D4  7C 08 03 A6 */	mtlr r0
/* 8002F7F8 0002C8D8  38 21 00 10 */	addi r1, r1, 0x10
/* 8002F7FC 0002C8DC  4E 80 00 20 */	blr
.endfn destruct__Q24xhud12meter_widgetFv

# xhud::meter_widget::type() const
.fn type__Q24xhud12meter_widgetCFv, global
/* 8002F800 0002C8E0  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8002F804 0002C8E4  7C 08 02 A6 */	mflr r0
/* 8002F808 0002C8E8  90 01 00 14 */	stw r0, 0x14(r1)
/* 8002F80C 0002C8EC  88 0D 89 B4 */	lbz r0, init$717@sda21(r13)
/* 8002F810 0002C8F0  7C 00 07 75 */	extsb. r0, r0
/* 8002F814 0002C8F4  40 82 00 18 */	bne .L_8002F82C
/* 8002F818 0002C8F8  48 00 04 41 */	bl type_name__Q24xhud11meter_assetFv
/* 8002F81C 0002C8FC  48 01 C9 F9 */	bl xStrHash__FPCc
/* 8002F820 0002C900  90 6D 89 B0 */	stw r3, myid$716@sda21(r13)
/* 8002F824 0002C904  38 00 00 01 */	li r0, 0x1
/* 8002F828 0002C908  98 0D 89 B4 */	stb r0, init$717@sda21(r13)
.L_8002F82C:
/* 8002F82C 0002C90C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8002F830 0002C910  80 6D 89 B0 */	lwz r3, myid$716@sda21(r13)
/* 8002F834 0002C914  7C 08 03 A6 */	mtlr r0
/* 8002F838 0002C918  38 21 00 10 */	addi r1, r1, 0x10
/* 8002F83C 0002C91C  4E 80 00 20 */	blr
.endfn type__Q24xhud12meter_widgetCFv

# xhud::meter_widget::is(unsigned int) const
.fn is__Q24xhud12meter_widgetCFUi, global
/* 8002F840 0002C920  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 8002F844 0002C924  7C 08 02 A6 */	mflr r0
/* 8002F848 0002C928  90 01 00 24 */	stw r0, 0x24(r1)
/* 8002F84C 0002C92C  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 8002F850 0002C930  3B E0 00 00 */	li r31, 0x0
/* 8002F854 0002C934  93 C1 00 18 */	stw r30, 0x18(r1)
/* 8002F858 0002C938  7C 9E 23 78 */	mr r30, r4
/* 8002F85C 0002C93C  93 A1 00 14 */	stw r29, 0x14(r1)
/* 8002F860 0002C940  7C 7D 1B 78 */	mr r29, r3
/* 8002F864 0002C944  4B FF FF 9D */	bl type__Q24xhud12meter_widgetCFv
/* 8002F868 0002C948  7C 1E 18 40 */	cmplw r30, r3
/* 8002F86C 0002C94C  41 82 00 18 */	beq .L_8002F884
/* 8002F870 0002C950  7F A3 EB 78 */	mr r3, r29
/* 8002F874 0002C954  7F C4 F3 78 */	mr r4, r30
/* 8002F878 0002C958  4B FF E7 25 */	bl is__Q24xhud6widgetCFUi
/* 8002F87C 0002C95C  54 60 06 3F */	clrlwi. r0, r3, 24
/* 8002F880 0002C960  41 82 00 08 */	beq .L_8002F888
.L_8002F884:
/* 8002F884 0002C964  3B E0 00 01 */	li r31, 0x1
.L_8002F888:
/* 8002F888 0002C968  80 01 00 24 */	lwz r0, 0x24(r1)
/* 8002F88C 0002C96C  7F E3 FB 78 */	mr r3, r31
/* 8002F890 0002C970  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 8002F894 0002C974  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 8002F898 0002C978  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 8002F89C 0002C97C  7C 08 03 A6 */	mtlr r0
/* 8002F8A0 0002C980  38 21 00 20 */	addi r1, r1, 0x20
/* 8002F8A4 0002C984  4E 80 00 20 */	blr
.endfn is__Q24xhud12meter_widgetCFUi

# xhud::meter_widget::updater(float)
.fn updater__Q24xhud12meter_widgetFf, global
/* 8002F8A8 0002C988  94 21 FF C0 */	stwu r1, -0x40(r1)
/* 8002F8AC 0002C98C  7C 08 02 A6 */	mflr r0
/* 8002F8B0 0002C990  90 01 00 44 */	stw r0, 0x44(r1)
/* 8002F8B4 0002C994  DB E1 00 30 */	stfd f31, 0x30(r1)
/* 8002F8B8 0002C998  F3 E1 00 38 */	psq_st f31, 0x38(r1), 0, qr0
/* 8002F8BC 0002C99C  DB C1 00 20 */	stfd f30, 0x20(r1)
/* 8002F8C0 0002C9A0  F3 C1 00 28 */	psq_st f30, 0x28(r1), 0, qr0
/* 8002F8C4 0002C9A4  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 8002F8C8 0002C9A8  7C 7F 1B 78 */	mr r31, r3
/* 8002F8CC 0002C9AC  FF C0 08 90 */	fmr f30, f1
/* 8002F8D0 0002C9B0  4B FF E5 0D */	bl updater__Q24xhud6widgetFf
/* 8002F8D4 0002C9B4  C0 1F 00 A0 */	lfs f0, 0xa0(r31)
/* 8002F8D8 0002C9B8  EC 00 F0 2A */	fadds f0, f0, f30
/* 8002F8DC 0002C9BC  D0 1F 00 A0 */	stfs f0, 0xa0(r31)
/* 8002F8E0 0002C9C0  C0 1F 00 A4 */	lfs f0, 0xa4(r31)
/* 8002F8E4 0002C9C4  EC 00 F0 2A */	fadds f0, f0, f30
/* 8002F8E8 0002C9C8  D0 1F 00 A4 */	stfs f0, 0xa4(r31)
/* 8002F8EC 0002C9CC  C0 02 84 28 */	lfs f0, "@682"@sda21(r2)
/* 8002F8F0 0002C9D0  C0 3F 00 98 */	lfs f1, 0x98(r31)
/* 8002F8F4 0002C9D4  FC 00 08 00 */	fcmpu cr0, f0, f1
/* 8002F8F8 0002C9D8  41 82 01 D4 */	beq .L_8002FACC
/* 8002F8FC 0002C9DC  C0 42 84 44 */	lfs f2, "@693"@sda21(r2)
/* 8002F900 0002C9E0  EC 01 07 B2 */	fmuls f0, f1, f30
/* 8002F904 0002C9E4  C0 3F 00 9C */	lfs f1, 0x9c(r31)
/* 8002F908 0002C9E8  C3 FF 00 88 */	lfs f31, 0x88(r31)
/* 8002F90C 0002C9EC  EC 22 00 72 */	fmuls f1, f2, f1
/* 8002F910 0002C9F0  EC 21 07 B2 */	fmuls f1, f1, f30
/* 8002F914 0002C9F4  EC 1E 00 7A */	fmadds f0, f30, f1, f0
/* 8002F918 0002C9F8  EC 1F 00 2A */	fadds f0, f31, f0
/* 8002F91C 0002C9FC  D0 1F 00 88 */	stfs f0, 0x88(r31)
/* 8002F920 0002CA00  C0 3F 00 9C */	lfs f1, 0x9c(r31)
/* 8002F924 0002CA04  C0 1F 00 98 */	lfs f0, 0x98(r31)
/* 8002F928 0002CA08  EC 01 07 BA */	fmadds f0, f1, f30, f0
/* 8002F92C 0002CA0C  D0 1F 00 98 */	stfs f0, 0x98(r31)
/* 8002F930 0002CA10  C0 3F 00 98 */	lfs f1, 0x98(r31)
/* 8002F934 0002CA14  C0 02 84 28 */	lfs f0, "@682"@sda21(r2)
/* 8002F938 0002CA18  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8002F93C 0002CA1C  40 80 00 CC */	bge .L_8002FA08
/* 8002F940 0002CA20  C0 1F 00 88 */	lfs f0, 0x88(r31)
/* 8002F944 0002CA24  C0 3F 00 94 */	lfs f1, 0x94(r31)
/* 8002F948 0002CA28  FC 00 08 40 */	fcmpo cr0, f0, f1
/* 8002F94C 0002CA2C  4C 40 13 82 */	cror eq, lt, eq
/* 8002F950 0002CA30  40 82 00 10 */	bne .L_8002F960
/* 8002F954 0002CA34  D0 3F 00 88 */	stfs f1, 0x88(r31)
/* 8002F958 0002CA38  C0 02 84 28 */	lfs f0, "@682"@sda21(r2)
/* 8002F95C 0002CA3C  D0 1F 00 98 */	stfs f0, 0x98(r31)
.L_8002F960:
/* 8002F960 0002CA40  C0 22 84 4C */	lfs f1, "@779"@sda21(r2)
/* 8002F964 0002CA44  C0 1F 00 A4 */	lfs f0, 0xa4(r31)
/* 8002F968 0002CA48  C0 42 84 50 */	lfs f2, "@780"@sda21(r2)
/* 8002F96C 0002CA4C  EC 21 00 32 */	fmuls f1, f1, f0
/* 8002F970 0002CA50  C0 62 84 54 */	lfs f3, "@781"@sda21(r2)
/* 8002F974 0002CA54  4B FD EF C5 */	bl "range_limit<f>__Ffff"
/* 8002F978 0002CA58  FF C0 08 90 */	fmr f30, f1
/* 8002F97C 0002CA5C  C0 02 84 58 */	lfs f0, "@782"@sda21(r2)
/* 8002F980 0002CA60  C0 22 84 44 */	lfs f1, "@693"@sda21(r2)
/* 8002F984 0002CA64  EC 40 07 B2 */	fmuls f2, f0, f30
/* 8002F988 0002CA68  48 00 02 8D */	bl xpow__Fff
/* 8002F98C 0002CA6C  C0 5F 00 88 */	lfs f2, 0x88(r31)
/* 8002F990 0002CA70  FC 00 F8 1E */	fctiwz f0, f31
/* 8002F994 0002CA74  C0 62 84 5C */	lfs f3, "@783"@sda21(r2)
/* 8002F998 0002CA78  FC 40 10 1E */	fctiwz f2, f2
/* 8002F99C 0002CA7C  D8 01 00 10 */	stfd f0, 0x10(r1)
/* 8002F9A0 0002CA80  EC 23 00 72 */	fmuls f1, f3, f1
/* 8002F9A4 0002CA84  D8 41 00 08 */	stfd f2, 0x8(r1)
/* 8002F9A8 0002CA88  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8002F9AC 0002CA8C  80 61 00 0C */	lwz r3, 0xc(r1)
/* 8002F9B0 0002CA90  7C 03 00 00 */	cmpw r3, r0
/* 8002F9B4 0002CA94  41 82 01 18 */	beq .L_8002FACC
/* 8002F9B8 0002CA98  80 7F 00 84 */	lwz r3, 0x84(r31)
/* 8002F9BC 0002CA9C  80 03 00 48 */	lwz r0, 0x48(r3)
/* 8002F9C0 0002CAA0  28 00 00 00 */	cmplwi r0, 0x0
/* 8002F9C4 0002CAA4  41 82 01 08 */	beq .L_8002FACC
/* 8002F9C8 0002CAA8  C0 1F 00 A0 */	lfs f0, 0xa0(r31)
/* 8002F9CC 0002CAAC  FC 00 08 40 */	fcmpo cr0, f0, f1
/* 8002F9D0 0002CAB0  40 81 00 FC */	ble .L_8002FACC
/* 8002F9D4 0002CAB4  C0 02 84 28 */	lfs f0, "@682"@sda21(r2)
/* 8002F9D8 0002CAB8  FC 40 F0 90 */	fmr f2, f30
/* 8002F9DC 0002CABC  38 7F 00 A8 */	addi r3, r31, 0xa8
/* 8002F9E0 0002CAC0  38 A0 00 80 */	li r5, 0x80
/* 8002F9E4 0002CAC4  D0 1F 00 A0 */	stfs f0, 0xa0(r31)
/* 8002F9E8 0002CAC8  38 C0 00 00 */	li r6, 0x0
/* 8002F9EC 0002CACC  38 E0 00 00 */	li r7, 0x0
/* 8002F9F0 0002CAD0  80 9F 00 84 */	lwz r4, 0x84(r31)
/* 8002F9F4 0002CAD4  39 00 00 00 */	li r8, 0x0
/* 8002F9F8 0002CAD8  C0 22 84 24 */	lfs f1, "@681"@sda21(r2)
/* 8002F9FC 0002CADC  80 84 00 48 */	lwz r4, 0x48(r4)
/* 8002FA00 0002CAE0  48 00 01 01 */	bl "play__14sound_queue<4>FUiffUiUiUi14sound_category"
/* 8002FA04 0002CAE4  48 00 00 C8 */	b .L_8002FACC
.L_8002FA08:
/* 8002FA08 0002CAE8  C0 1F 00 88 */	lfs f0, 0x88(r31)
/* 8002FA0C 0002CAEC  C0 3F 00 94 */	lfs f1, 0x94(r31)
/* 8002FA10 0002CAF0  FC 00 08 40 */	fcmpo cr0, f0, f1
/* 8002FA14 0002CAF4  4C 41 13 82 */	cror eq, gt, eq
/* 8002FA18 0002CAF8  40 82 00 10 */	bne .L_8002FA28
/* 8002FA1C 0002CAFC  D0 3F 00 88 */	stfs f1, 0x88(r31)
/* 8002FA20 0002CB00  C0 02 84 28 */	lfs f0, "@682"@sda21(r2)
/* 8002FA24 0002CB04  D0 1F 00 98 */	stfs f0, 0x98(r31)
.L_8002FA28:
/* 8002FA28 0002CB08  C0 22 84 3C */	lfs f1, "@687"@sda21(r2)
/* 8002FA2C 0002CB0C  C0 1F 00 A4 */	lfs f0, 0xa4(r31)
/* 8002FA30 0002CB10  C0 42 84 50 */	lfs f2, "@780"@sda21(r2)
/* 8002FA34 0002CB14  EC 21 00 32 */	fmuls f1, f1, f0
/* 8002FA38 0002CB18  C0 62 84 54 */	lfs f3, "@781"@sda21(r2)
/* 8002FA3C 0002CB1C  4B FD EE FD */	bl "range_limit<f>__Ffff"
/* 8002FA40 0002CB20  FF C0 08 90 */	fmr f30, f1
/* 8002FA44 0002CB24  C0 02 84 58 */	lfs f0, "@782"@sda21(r2)
/* 8002FA48 0002CB28  C0 22 84 44 */	lfs f1, "@693"@sda21(r2)
/* 8002FA4C 0002CB2C  EC 40 07 B2 */	fmuls f2, f0, f30
/* 8002FA50 0002CB30  48 00 01 C5 */	bl xpow__Fff
/* 8002FA54 0002CB34  C0 5F 00 88 */	lfs f2, 0x88(r31)
/* 8002FA58 0002CB38  FC 00 F8 1E */	fctiwz f0, f31
/* 8002FA5C 0002CB3C  C0 62 84 5C */	lfs f3, "@783"@sda21(r2)
/* 8002FA60 0002CB40  FC 40 10 1E */	fctiwz f2, f2
/* 8002FA64 0002CB44  D8 01 00 08 */	stfd f0, 0x8(r1)
/* 8002FA68 0002CB48  EC 23 00 72 */	fmuls f1, f3, f1
/* 8002FA6C 0002CB4C  D8 41 00 10 */	stfd f2, 0x10(r1)
/* 8002FA70 0002CB50  80 01 00 0C */	lwz r0, 0xc(r1)
/* 8002FA74 0002CB54  80 61 00 14 */	lwz r3, 0x14(r1)
/* 8002FA78 0002CB58  7C 03 00 00 */	cmpw r3, r0
/* 8002FA7C 0002CB5C  41 82 00 50 */	beq .L_8002FACC
/* 8002FA80 0002CB60  80 7F 00 84 */	lwz r3, 0x84(r31)
/* 8002FA84 0002CB64  80 03 00 40 */	lwz r0, 0x40(r3)
/* 8002FA88 0002CB68  28 00 00 00 */	cmplwi r0, 0x0
/* 8002FA8C 0002CB6C  41 82 00 40 */	beq .L_8002FACC
/* 8002FA90 0002CB70  C0 1F 00 A0 */	lfs f0, 0xa0(r31)
/* 8002FA94 0002CB74  FC 00 08 40 */	fcmpo cr0, f0, f1
/* 8002FA98 0002CB78  40 81 00 34 */	ble .L_8002FACC
/* 8002FA9C 0002CB7C  C0 02 84 28 */	lfs f0, "@682"@sda21(r2)
/* 8002FAA0 0002CB80  FC 40 F0 90 */	fmr f2, f30
/* 8002FAA4 0002CB84  38 7F 00 A8 */	addi r3, r31, 0xa8
/* 8002FAA8 0002CB88  38 A0 00 80 */	li r5, 0x80
/* 8002FAAC 0002CB8C  D0 1F 00 A0 */	stfs f0, 0xa0(r31)
/* 8002FAB0 0002CB90  38 C0 00 00 */	li r6, 0x0
/* 8002FAB4 0002CB94  38 E0 00 00 */	li r7, 0x0
/* 8002FAB8 0002CB98  80 9F 00 84 */	lwz r4, 0x84(r31)
/* 8002FABC 0002CB9C  39 00 00 00 */	li r8, 0x0
/* 8002FAC0 0002CBA0  C0 22 84 24 */	lfs f1, "@681"@sda21(r2)
/* 8002FAC4 0002CBA4  80 84 00 40 */	lwz r4, 0x40(r4)
/* 8002FAC8 0002CBA8  48 00 00 39 */	bl "play__14sound_queue<4>FUiffUiUiUi14sound_category"
.L_8002FACC:
/* 8002FACC 0002CBAC  E3 E1 00 38 */	psq_l f31, 0x38(r1), 0, qr0
/* 8002FAD0 0002CBB0  CB E1 00 30 */	lfd f31, 0x30(r1)
/* 8002FAD4 0002CBB4  E3 C1 00 28 */	psq_l f30, 0x28(r1), 0, qr0
/* 8002FAD8 0002CBB8  CB C1 00 20 */	lfd f30, 0x20(r1)
/* 8002FADC 0002CBBC  80 01 00 44 */	lwz r0, 0x44(r1)
/* 8002FAE0 0002CBC0  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 8002FAE4 0002CBC4  7C 08 03 A6 */	mtlr r0
/* 8002FAE8 0002CBC8  38 21 00 40 */	addi r1, r1, 0x40
/* 8002FAEC 0002CBCC  4E 80 00 20 */	blr
.endfn updater__Q24xhud12meter_widgetFf

# 0x8002FAF0 - 0x8002FC58
.section .text, "ax", unique, 1
.balign 4

# sound_queue<4>::sound_queue()
.fn "__ct__14sound_queue<4>Fv", weak
/* 8002FAF0 0002CBD0  38 00 00 00 */	li r0, 0x0
/* 8002FAF4 0002CBD4  90 03 00 14 */	stw r0, 0x14(r3)
/* 8002FAF8 0002CBD8  90 03 00 18 */	stw r0, 0x18(r3)
/* 8002FAFC 0002CBDC  4E 80 00 20 */	blr
.endfn "__ct__14sound_queue<4>Fv"

# sound_queue<4>::play(unsigned int, float, float, unsigned int, unsigned int, unsigned int, sound_category)
.fn "play__14sound_queue<4>FUiffUiUiUi14sound_category", weak
/* 8002FB00 0002CBE0  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8002FB04 0002CBE4  7C 08 02 A6 */	mflr r0
/* 8002FB08 0002CBE8  90 01 00 14 */	stw r0, 0x14(r1)
/* 8002FB0C 0002CBEC  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8002FB10 0002CBF0  7C 7F 1B 78 */	mr r31, r3
/* 8002FB14 0002CBF4  7C 83 23 78 */	mr r3, r4
/* 8002FB18 0002CBF8  7C A4 2B 78 */	mr r4, r5
/* 8002FB1C 0002CBFC  C0 62 84 28 */	lfs f3, "@682"@sda21(r2)
/* 8002FB20 0002CC00  7C C5 33 78 */	mr r5, r6
/* 8002FB24 0002CC04  7C E6 3B 78 */	mr r6, r7
/* 8002FB28 0002CC08  7D 07 43 78 */	mr r7, r8
/* 8002FB2C 0002CC0C  48 01 8F 01 */	bl xSndPlay__FUiffUiUiUi14sound_categoryf
/* 8002FB30 0002CC10  7C 60 1B 78 */	mr r0, r3
/* 8002FB34 0002CC14  7F E3 FB 78 */	mr r3, r31
/* 8002FB38 0002CC18  7C 04 03 78 */	mr r4, r0
/* 8002FB3C 0002CC1C  48 00 00 19 */	bl "push__14sound_queue<4>FUi"
/* 8002FB40 0002CC20  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8002FB44 0002CC24  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8002FB48 0002CC28  7C 08 03 A6 */	mtlr r0
/* 8002FB4C 0002CC2C  38 21 00 10 */	addi r1, r1, 0x10
/* 8002FB50 0002CC30  4E 80 00 20 */	blr
.endfn "play__14sound_queue<4>FUiffUiUiUi14sound_category"

# sound_queue<4>::push(unsigned int)
.fn "push__14sound_queue<4>FUi", weak
/* 8002FB54 0002CC34  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 8002FB58 0002CC38  7C 08 02 A6 */	mflr r0
/* 8002FB5C 0002CC3C  90 01 00 24 */	stw r0, 0x24(r1)
/* 8002FB60 0002CC40  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 8002FB64 0002CC44  93 C1 00 18 */	stw r30, 0x18(r1)
/* 8002FB68 0002CC48  7C 7E 1B 78 */	mr r30, r3
/* 8002FB6C 0002CC4C  93 A1 00 14 */	stw r29, 0x14(r1)
/* 8002FB70 0002CC50  80 03 00 18 */	lwz r0, 0x18(r3)
/* 8002FB74 0002CC54  54 00 10 3A */	slwi r0, r0, 2
/* 8002FB78 0002CC58  7C 9E 01 2E */	stwx r4, r30, r0
/* 8002FB7C 0002CC5C  80 63 00 18 */	lwz r3, 0x18(r3)
/* 8002FB80 0002CC60  83 BE 00 14 */	lwz r29, 0x14(r30)
/* 8002FB84 0002CC64  3B E3 00 01 */	addi r31, r3, 0x1
/* 8002FB88 0002CC68  7C 1F E8 00 */	cmpw r31, r29
/* 8002FB8C 0002CC6C  41 81 00 08 */	bgt .L_8002FB94
/* 8002FB90 0002CC70  3B FF 00 05 */	addi r31, r31, 0x5
.L_8002FB94:
/* 8002FB94 0002CC74  7C 1D F8 50 */	subf r0, r29, r31
/* 8002FB98 0002CC78  2C 00 00 04 */	cmpwi r0, 0x4
/* 8002FB9C 0002CC7C  40 81 00 38 */	ble .L_8002FBD4
/* 8002FBA0 0002CC80  57 A0 10 3A */	slwi r0, r29, 2
/* 8002FBA4 0002CC84  7C 7E 00 2E */	lwzx r3, r30, r0
/* 8002FBA8 0002CC88  48 01 96 59 */	bl xSndStop__FUi
/* 8002FBAC 0002CC8C  3C 60 66 66 */	lis r3, 0x6666
/* 8002FBB0 0002CC90  38 9D 00 01 */	addi r4, r29, 0x1
/* 8002FBB4 0002CC94  38 03 66 67 */	addi r0, r3, 0x6667
/* 8002FBB8 0002CC98  7C 00 20 96 */	mulhw r0, r0, r4
/* 8002FBBC 0002CC9C  7C 00 0E 70 */	srawi r0, r0, 1
/* 8002FBC0 0002CCA0  54 03 0F FE */	srwi r3, r0, 31
/* 8002FBC4 0002CCA4  7C 00 1A 14 */	add r0, r0, r3
/* 8002FBC8 0002CCA8  1C 00 00 05 */	mulli r0, r0, 0x5
/* 8002FBCC 0002CCAC  7C 00 20 50 */	subf r0, r0, r4
/* 8002FBD0 0002CCB0  90 1E 00 14 */	stw r0, 0x14(r30)
.L_8002FBD4:
/* 8002FBD4 0002CCB4  3C 60 66 66 */	lis r3, 0x6666
/* 8002FBD8 0002CCB8  38 03 66 67 */	addi r0, r3, 0x6667
/* 8002FBDC 0002CCBC  7C 00 F8 96 */	mulhw r0, r0, r31
/* 8002FBE0 0002CCC0  7C 00 0E 70 */	srawi r0, r0, 1
/* 8002FBE4 0002CCC4  54 03 0F FE */	srwi r3, r0, 31
/* 8002FBE8 0002CCC8  7C 00 1A 14 */	add r0, r0, r3
/* 8002FBEC 0002CCCC  1C 00 00 05 */	mulli r0, r0, 0x5
/* 8002FBF0 0002CCD0  7C 00 F8 50 */	subf r0, r0, r31
/* 8002FBF4 0002CCD4  90 1E 00 18 */	stw r0, 0x18(r30)
/* 8002FBF8 0002CCD8  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 8002FBFC 0002CCDC  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 8002FC00 0002CCE0  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 8002FC04 0002CCE4  80 01 00 24 */	lwz r0, 0x24(r1)
/* 8002FC08 0002CCE8  7C 08 03 A6 */	mtlr r0
/* 8002FC0C 0002CCEC  38 21 00 20 */	addi r1, r1, 0x20
/* 8002FC10 0002CCF0  4E 80 00 20 */	blr
.endfn "push__14sound_queue<4>FUi"

# xpow(float, float)
.fn xpow__Fff, weak
/* 8002FC14 0002CCF4  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8002FC18 0002CCF8  7C 08 02 A6 */	mflr r0
/* 8002FC1C 0002CCFC  90 01 00 14 */	stw r0, 0x14(r1)
/* 8002FC20 0002CD00  48 00 00 15 */	bl powf__3stdFff
/* 8002FC24 0002CD04  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8002FC28 0002CD08  7C 08 03 A6 */	mtlr r0
/* 8002FC2C 0002CD0C  38 21 00 10 */	addi r1, r1, 0x10
/* 8002FC30 0002CD10  4E 80 00 20 */	blr
.endfn xpow__Fff

# std::powf(float, float)
.fn powf__3stdFff, weak
/* 8002FC34 0002CD14  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8002FC38 0002CD18  7C 08 02 A6 */	mflr r0
/* 8002FC3C 0002CD1C  90 01 00 14 */	stw r0, 0x14(r1)
/* 8002FC40 0002CD20  48 1B CE F1 */	bl pow
/* 8002FC44 0002CD24  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8002FC48 0002CD28  FC 20 08 18 */	frsp f1, f1
/* 8002FC4C 0002CD2C  7C 08 03 A6 */	mtlr r0
/* 8002FC50 0002CD30  38 21 00 10 */	addi r1, r1, 0x10
/* 8002FC54 0002CD34  4E 80 00 20 */	blr
.endfn powf__3stdFff

# 0x8002FC58 - 0x8002FC68
.section .text, "ax", unique, 2
.balign 4

# xhud::meter_asset::type_name()
.fn type_name__Q24xhud11meter_assetFv, weak
/* 8002FC58 0002CD38  3C 60 80 25 */	lis r3, "@stringBase0"@ha
/* 8002FC5C 0002CD3C  38 63 2F 38 */	addi r3, r3, "@stringBase0"@l
/* 8002FC60 0002CD40  38 63 00 22 */	addi r3, r3, 0x22
/* 8002FC64 0002CD44  4E 80 00 20 */	blr
.endfn type_name__Q24xhud11meter_assetFv

# 0x8002FC68 - 0x8002FC88
.section .text, "ax", unique, 3
.balign 4

# xhud::meter_widget::update(float)
.fn update__Q24xhud12meter_widgetFf, weak
/* 8002FC68 0002CD48  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8002FC6C 0002CD4C  7C 08 02 A6 */	mflr r0
/* 8002FC70 0002CD50  90 01 00 14 */	stw r0, 0x14(r1)
/* 8002FC74 0002CD54  4B FF FC 35 */	bl updater__Q24xhud12meter_widgetFf
/* 8002FC78 0002CD58  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8002FC7C 0002CD5C  7C 08 03 A6 */	mtlr r0
/* 8002FC80 0002CD60  38 21 00 10 */	addi r1, r1, 0x10
/* 8002FC84 0002CD64  4E 80 00 20 */	blr
.endfn update__Q24xhud12meter_widgetFf

# 0x80252F38 - 0x80252F68
.rodata
.balign 8

.obj "@stringBase0", local
	.4byte 0x64656372
	.4byte 0x656D656E
	.4byte 0x74207469
	.4byte 0x6D65203D
	.4byte 0x2030202D
	.4byte 0x2D206173
	.4byte 0x73207361
	.4byte 0x76656421
	.4byte 0x0A006875
	.4byte 0x643A6D65
	.4byte 0x74657200
.endobj "@stringBase0"
	.4byte 0x00000000

# 0x8027D678 - 0x8027D6A0
.data
.balign 8

# xhud::meter_widget::__vtable
.obj __vt__Q24xhud12meter_widget, global
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte destroy__Q24xhud6widgetFv
	.4byte type__Q24xhud12meter_widgetCFv
	.4byte is__Q24xhud12meter_widgetCFUi
	.4byte init__Q24xhud6widgetFv
	.4byte setup__Q24xhud6widgetFv
	.4byte update__Q24xhud12meter_widgetFf
	.4byte render__Q24xhud6widgetFv
	.4byte dispatch__Q24xhud6widgetFP5xBaseUiPCfP5xBase
.endobj __vt__Q24xhud12meter_widget

# 0x803CB2B0 - 0x803CB2B8
.section .sbss, "wa", @nobits
.balign 8

.obj myid$716, local
	.skip 0x4
.endobj myid$716

.obj init$717, local
	.skip 0x1
.endobj init$717
	.skip 0x3

# 0x803CCDA0 - 0x803CCDE0
.section .sdata2, "a"
.balign 8

.obj "@680", local
	.4byte 0xBC23D70A
.endobj "@680"

.obj "@681", local
	.4byte 0x3F800000
.endobj "@681"

.obj "@682", local
	.4byte 0x00000000
.endobj "@682"

.obj "@683", local
	.4byte 0x3C23D70A
.endobj "@683"

.obj "@684", local
	.4byte 0xBF800000
.endobj "@684"

.obj "@685", local
	.4byte 0x3727C5AC
.endobj "@685"

.obj "@686", local
	.4byte 0x42480000
.endobj "@686"

.obj "@687", local
	.4byte 0x40000000
.endobj "@687"

.obj "@688", local
	.4byte 0x3E800000
.endobj "@688"

.obj "@693", local
	.4byte 0x3F000000
.endobj "@693"

.obj "@704", local
	.4byte 0x41200000
.endobj "@704"

.obj "@779", local
	.4byte 0xC0800000
.endobj "@779"

.obj "@780", local
	.4byte 0xC1200000
.endobj "@780"

.obj "@781", local
	.4byte 0x40D00000
.endobj "@781"

.obj "@782", local
	.4byte 0x3DAAAAAB
.endobj "@782"

.obj "@783", local
	.4byte 0x3D4CCCCD
.endobj "@783"
