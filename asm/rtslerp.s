.include "macros.inc"
.file "rtslerp.c"

# 0x8022E57C - 0x8022E974
.text
.balign 4

.fn RtQuatSetupSlerpCache, global
/* 8022E57C 0022B65C  94 21 FF C0 */	stwu r1, -0x40(r1)
/* 8022E580 0022B660  7C 08 02 A6 */	mflr r0
/* 8022E584 0022B664  90 01 00 44 */	stw r0, 0x44(r1)
/* 8022E588 0022B668  DB E1 00 30 */	stfd f31, 0x30(r1)
/* 8022E58C 0022B66C  F3 E1 00 38 */	psq_st f31, 0x38(r1), 0, qr0
/* 8022E590 0022B670  DB C1 00 20 */	stfd f30, 0x20(r1)
/* 8022E594 0022B674  F3 C1 00 28 */	psq_st f30, 0x28(r1), 0, qr0
/* 8022E598 0022B678  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 8022E59C 0022B67C  80 C3 00 00 */	lwz r6, 0x0(r3)
/* 8022E5A0 0022B680  7C BF 2B 78 */	mr r31, r5
/* 8022E5A4 0022B684  80 03 00 04 */	lwz r0, 0x4(r3)
/* 8022E5A8 0022B688  90 C5 00 00 */	stw r6, 0x0(r5)
/* 8022E5AC 0022B68C  90 05 00 04 */	stw r0, 0x4(r5)
/* 8022E5B0 0022B690  80 A3 00 08 */	lwz r5, 0x8(r3)
/* 8022E5B4 0022B694  80 03 00 0C */	lwz r0, 0xc(r3)
/* 8022E5B8 0022B698  90 BF 00 08 */	stw r5, 0x8(r31)
/* 8022E5BC 0022B69C  90 1F 00 0C */	stw r0, 0xc(r31)
/* 8022E5C0 0022B6A0  C0 23 00 04 */	lfs f1, 0x4(r3)
/* 8022E5C4 0022B6A4  C0 04 00 04 */	lfs f0, 0x4(r4)
/* 8022E5C8 0022B6A8  C0 43 00 00 */	lfs f2, 0x0(r3)
/* 8022E5CC 0022B6AC  EC 01 00 32 */	fmuls f0, f1, f0
/* 8022E5D0 0022B6B0  C0 24 00 00 */	lfs f1, 0x0(r4)
/* 8022E5D4 0022B6B4  C0 83 00 08 */	lfs f4, 0x8(r3)
/* 8022E5D8 0022B6B8  C0 64 00 08 */	lfs f3, 0x8(r4)
/* 8022E5DC 0022B6BC  EC 22 00 7A */	fmadds f1, f2, f1, f0
/* 8022E5E0 0022B6C0  C0 43 00 0C */	lfs f2, 0xc(r3)
/* 8022E5E4 0022B6C4  C0 A4 00 0C */	lfs f5, 0xc(r4)
/* 8022E5E8 0022B6C8  C0 02 BC 6C */	lfs f0, "@305"@sda21(r2)
/* 8022E5EC 0022B6CC  EC 24 08 FA */	fmadds f1, f4, f3, f1
/* 8022E5F0 0022B6D0  EC 22 09 7A */	fmadds f1, f2, f5, f1
/* 8022E5F4 0022B6D4  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8022E5F8 0022B6D8  40 80 00 4C */	bge .L_8022E644
/* 8022E5FC 0022B6DC  C0 02 BC 74 */	lfs f0, "@500"@sda21(r2)
/* 8022E600 0022B6E0  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8022E604 0022B6E4  40 80 00 0C */	bge .L_8022E610
/* 8022E608 0022B6E8  C3 E2 BC 68 */	lfs f31, "@304"@sda21(r2)
/* 8022E60C 0022B6EC  48 00 00 08 */	b .L_8022E614
.L_8022E610:
/* 8022E610 0022B6F0  FF E0 08 50 */	fneg f31, f1
.L_8022E614:
/* 8022E614 0022B6F4  FC 00 28 50 */	fneg f0, f5
/* 8022E618 0022B6F8  D0 1F 00 1C */	stfs f0, 0x1c(r31)
/* 8022E61C 0022B6FC  C0 04 00 00 */	lfs f0, 0x0(r4)
/* 8022E620 0022B700  FC 00 00 50 */	fneg f0, f0
/* 8022E624 0022B704  D0 1F 00 10 */	stfs f0, 0x10(r31)
/* 8022E628 0022B708  C0 04 00 04 */	lfs f0, 0x4(r4)
/* 8022E62C 0022B70C  FC 00 00 50 */	fneg f0, f0
/* 8022E630 0022B710  D0 1F 00 14 */	stfs f0, 0x14(r31)
/* 8022E634 0022B714  C0 04 00 08 */	lfs f0, 0x8(r4)
/* 8022E638 0022B718  FC 00 00 50 */	fneg f0, f0
/* 8022E63C 0022B71C  D0 1F 00 18 */	stfs f0, 0x18(r31)
/* 8022E640 0022B720  48 00 00 38 */	b .L_8022E678
.L_8022E644:
/* 8022E644 0022B724  C3 E2 BC 68 */	lfs f31, "@304"@sda21(r2)
/* 8022E648 0022B728  FC 01 F8 40 */	fcmpo cr0, f1, f31
/* 8022E64C 0022B72C  40 81 00 08 */	ble .L_8022E654
/* 8022E650 0022B730  48 00 00 08 */	b .L_8022E658
.L_8022E654:
/* 8022E654 0022B734  FF E0 08 90 */	fmr f31, f1
.L_8022E658:
/* 8022E658 0022B738  80 64 00 00 */	lwz r3, 0x0(r4)
/* 8022E65C 0022B73C  80 04 00 04 */	lwz r0, 0x4(r4)
/* 8022E660 0022B740  90 7F 00 10 */	stw r3, 0x10(r31)
/* 8022E664 0022B744  90 1F 00 14 */	stw r0, 0x14(r31)
/* 8022E668 0022B748  80 64 00 08 */	lwz r3, 0x8(r4)
/* 8022E66C 0022B74C  80 04 00 0C */	lwz r0, 0xc(r4)
/* 8022E670 0022B750  90 7F 00 18 */	stw r3, 0x18(r31)
/* 8022E674 0022B754  90 1F 00 1C */	stw r0, 0x1c(r31)
.L_8022E678:
/* 8022E678 0022B758  D3 E1 00 10 */	stfs f31, 0x10(r1)
/* 8022E67C 0022B75C  3C 00 3F 80 */	lis r0, 0x3f80
/* 8022E680 0022B760  80 61 00 10 */	lwz r3, 0x10(r1)
/* 8022E684 0022B764  54 64 00 7E */	clrlwi r4, r3, 1
/* 8022E688 0022B768  7C 04 00 00 */	cmpw r4, r0
/* 8022E68C 0022B76C  41 80 00 24 */	blt .L_8022E6B0
/* 8022E690 0022B770  2C 03 00 00 */	cmpwi r3, 0x0
/* 8022E694 0022B774  40 81 00 10 */	ble .L_8022E6A4
/* 8022E698 0022B778  C0 02 BC 6C */	lfs f0, "@305"@sda21(r2)
/* 8022E69C 0022B77C  D0 1F 00 20 */	stfs f0, 0x20(r31)
/* 8022E6A0 0022B780  48 00 01 E8 */	b .L_8022E888
.L_8022E6A4:
/* 8022E6A4 0022B784  C0 02 BC 78 */	lfs f0, "@501"@sda21(r2)
/* 8022E6A8 0022B788  D0 1F 00 20 */	stfs f0, 0x20(r31)
/* 8022E6AC 0022B78C  48 00 01 DC */	b .L_8022E888
.L_8022E6B0:
/* 8022E6B0 0022B790  3C 00 3F 00 */	lis r0, 0x3f00
/* 8022E6B4 0022B794  7C 04 00 00 */	cmpw r4, r0
/* 8022E6B8 0022B798  40 80 00 94 */	bge .L_8022E74C
/* 8022E6BC 0022B79C  3C 00 23 00 */	lis r0, 0x2300
/* 8022E6C0 0022B7A0  7C 04 00 00 */	cmpw r4, r0
/* 8022E6C4 0022B7A4  41 81 00 10 */	bgt .L_8022E6D4
/* 8022E6C8 0022B7A8  C0 02 BC 7C */	lfs f0, "@502"@sda21(r2)
/* 8022E6CC 0022B7AC  D0 1F 00 20 */	stfs f0, 0x20(r31)
/* 8022E6D0 0022B7B0  48 00 01 B8 */	b .L_8022E888
.L_8022E6D4:
/* 8022E6D4 0022B7B4  EC FF 07 F2 */	fmuls f7, f31, f31
/* 8022E6D8 0022B7B8  C0 22 BC 9C */	lfs f1, "@510"@sda21(r2)
/* 8022E6DC 0022B7BC  C0 02 BC 98 */	lfs f0, "@509"@sda21(r2)
/* 8022E6E0 0022B7C0  C0 62 BC 94 */	lfs f3, "@508"@sda21(r2)
/* 8022E6E4 0022B7C4  EC 81 01 FA */	fmadds f4, f1, f7, f0
/* 8022E6E8 0022B7C8  C0 42 BC 90 */	lfs f2, "@507"@sda21(r2)
/* 8022E6EC 0022B7CC  C0 22 BC AC */	lfs f1, "@514"@sda21(r2)
/* 8022E6F0 0022B7D0  C0 02 BC A8 */	lfs f0, "@513"@sda21(r2)
/* 8022E6F4 0022B7D4  EC 67 19 3A */	fmadds f3, f7, f4, f3
/* 8022E6F8 0022B7D8  C0 A2 BC 8C */	lfs f5, "@506"@sda21(r2)
/* 8022E6FC 0022B7DC  EC 21 01 FA */	fmadds f1, f1, f7, f0
/* 8022E700 0022B7E0  C0 02 BC A4 */	lfs f0, "@512"@sda21(r2)
/* 8022E704 0022B7E4  C0 82 BC 88 */	lfs f4, "@505"@sda21(r2)
/* 8022E708 0022B7E8  EC C7 10 FA */	fmadds f6, f7, f3, f2
/* 8022E70C 0022B7EC  EC 67 00 7A */	fmadds f3, f7, f1, f0
/* 8022E710 0022B7F0  C0 42 BC A0 */	lfs f2, "@511"@sda21(r2)
/* 8022E714 0022B7F4  C0 22 BC 68 */	lfs f1, "@304"@sda21(r2)
/* 8022E718 0022B7F8  EC A7 29 BA */	fmadds f5, f7, f6, f5
/* 8022E71C 0022B7FC  C0 02 BC 84 */	lfs f0, "@504"@sda21(r2)
/* 8022E720 0022B800  EC 47 10 FA */	fmadds f2, f7, f3, f2
/* 8022E724 0022B804  C0 C2 BC 80 */	lfs f6, "@503"@sda21(r2)
/* 8022E728 0022B808  EC 67 21 7A */	fmadds f3, f7, f5, f4
/* 8022E72C 0022B80C  EC 27 08 BA */	fmadds f1, f7, f2, f1
/* 8022E730 0022B810  EC 47 00 F2 */	fmuls f2, f7, f3
/* 8022E734 0022B814  EC 22 08 24 */	fdivs f1, f2, f1
/* 8022E738 0022B818  EC 1F 00 7C */	fnmsubs f0, f31, f1, f0
/* 8022E73C 0022B81C  EC 1F 00 28 */	fsubs f0, f31, f0
/* 8022E740 0022B820  EC 06 00 28 */	fsubs f0, f6, f0
/* 8022E744 0022B824  D0 1F 00 20 */	stfs f0, 0x20(r31)
/* 8022E748 0022B828  48 00 01 40 */	b .L_8022E888
.L_8022E74C:
/* 8022E74C 0022B82C  2C 03 00 00 */	cmpwi r3, 0x0
/* 8022E750 0022B830  40 80 00 94 */	bge .L_8022E7E4
/* 8022E754 0022B834  C0 02 BC 68 */	lfs f0, "@304"@sda21(r2)
/* 8022E758 0022B838  C0 22 BC B0 */	lfs f1, "@515"@sda21(r2)
/* 8022E75C 0022B83C  EC 00 F8 2A */	fadds f0, f0, f31
/* 8022E760 0022B840  EF C1 00 32 */	fmuls f30, f1, f0
/* 8022E764 0022B844  FC 20 F0 90 */	fmr f1, f30
/* 8022E768 0022B848  48 00 55 5D */	bl _rwSqrt
/* 8022E76C 0022B84C  C0 42 BC 9C */	lfs f2, "@510"@sda21(r2)
/* 8022E770 0022B850  C0 02 BC 98 */	lfs f0, "@509"@sda21(r2)
/* 8022E774 0022B854  C0 82 BC 94 */	lfs f4, "@508"@sda21(r2)
/* 8022E778 0022B858  EC A2 07 BA */	fmadds f5, f2, f30, f0
/* 8022E77C 0022B85C  C0 62 BC 90 */	lfs f3, "@507"@sda21(r2)
/* 8022E780 0022B860  C0 42 BC AC */	lfs f2, "@514"@sda21(r2)
/* 8022E784 0022B864  C0 02 BC A8 */	lfs f0, "@513"@sda21(r2)
/* 8022E788 0022B868  EC 9E 21 7A */	fmadds f4, f30, f5, f4
/* 8022E78C 0022B86C  C0 C2 BC 8C */	lfs f6, "@506"@sda21(r2)
/* 8022E790 0022B870  EC 42 07 BA */	fmadds f2, f2, f30, f0
/* 8022E794 0022B874  C0 02 BC A4 */	lfs f0, "@512"@sda21(r2)
/* 8022E798 0022B878  C0 A2 BC 88 */	lfs f5, "@505"@sda21(r2)
/* 8022E79C 0022B87C  EC FE 19 3A */	fmadds f7, f30, f4, f3
/* 8022E7A0 0022B880  EC 9E 00 BA */	fmadds f4, f30, f2, f0
/* 8022E7A4 0022B884  C0 02 BC A0 */	lfs f0, "@511"@sda21(r2)
/* 8022E7A8 0022B888  C0 62 BC 68 */	lfs f3, "@304"@sda21(r2)
/* 8022E7AC 0022B88C  EC DE 31 FA */	fmadds f6, f30, f7, f6
/* 8022E7B0 0022B890  C0 42 BC 84 */	lfs f2, "@504"@sda21(r2)
/* 8022E7B4 0022B894  EC 9E 01 3A */	fmadds f4, f30, f4, f0
/* 8022E7B8 0022B898  C0 E2 BC 70 */	lfs f7, "@306"@sda21(r2)
/* 8022E7BC 0022B89C  EC BE 29 BA */	fmadds f5, f30, f6, f5
/* 8022E7C0 0022B8A0  C0 02 BC B4 */	lfs f0, "@516"@sda21(r2)
/* 8022E7C4 0022B8A4  EC 7E 19 3A */	fmadds f3, f30, f4, f3
/* 8022E7C8 0022B8A8  EC 9E 01 72 */	fmuls f4, f30, f5
/* 8022E7CC 0022B8AC  EC 64 18 24 */	fdivs f3, f4, f3
/* 8022E7D0 0022B8B0  EC 43 10 78 */	fmsubs f2, f3, f1, f2
/* 8022E7D4 0022B8B4  EC 21 10 2A */	fadds f1, f1, f2
/* 8022E7D8 0022B8B8  EC 07 00 7C */	fnmsubs f0, f7, f1, f0
/* 8022E7DC 0022B8BC  D0 1F 00 20 */	stfs f0, 0x20(r31)
/* 8022E7E0 0022B8C0  48 00 00 A8 */	b .L_8022E888
.L_8022E7E4:
/* 8022E7E4 0022B8C4  C0 02 BC 68 */	lfs f0, "@304"@sda21(r2)
/* 8022E7E8 0022B8C8  C0 22 BC B0 */	lfs f1, "@515"@sda21(r2)
/* 8022E7EC 0022B8CC  EC 00 F8 28 */	fsubs f0, f0, f31
/* 8022E7F0 0022B8D0  EF C1 00 32 */	fmuls f30, f1, f0
/* 8022E7F4 0022B8D4  FC 20 F0 90 */	fmr f1, f30
/* 8022E7F8 0022B8D8  48 00 54 CD */	bl _rwSqrt
/* 8022E7FC 0022B8DC  C0 42 BC 9C */	lfs f2, "@510"@sda21(r2)
/* 8022E800 0022B8E0  C0 02 BC 98 */	lfs f0, "@509"@sda21(r2)
/* 8022E804 0022B8E4  D0 21 00 0C */	stfs f1, 0xc(r1)
/* 8022E808 0022B8E8  EC 42 07 BA */	fmadds f2, f2, f30, f0
/* 8022E80C 0022B8EC  C0 02 BC 94 */	lfs f0, "@508"@sda21(r2)
/* 8022E810 0022B8F0  80 01 00 0C */	lwz r0, 0xc(r1)
/* 8022E814 0022B8F4  C0 62 BC 90 */	lfs f3, "@507"@sda21(r2)
/* 8022E818 0022B8F8  EC 9E 00 BA */	fmadds f4, f30, f2, f0
/* 8022E81C 0022B8FC  C0 42 BC AC */	lfs f2, "@514"@sda21(r2)
/* 8022E820 0022B900  C0 02 BC A8 */	lfs f0, "@513"@sda21(r2)
/* 8022E824 0022B904  54 00 00 26 */	clrrwi r0, r0, 12
/* 8022E828 0022B908  90 01 00 08 */	stw r0, 0x8(r1)
/* 8022E82C 0022B90C  EC 9E 19 3A */	fmadds f4, f30, f4, f3
/* 8022E830 0022B910  C0 62 BC 8C */	lfs f3, "@506"@sda21(r2)
/* 8022E834 0022B914  EC 42 07 BA */	fmadds f2, f2, f30, f0
/* 8022E838 0022B918  C0 02 BC A4 */	lfs f0, "@512"@sda21(r2)
/* 8022E83C 0022B91C  EC 9E 19 3A */	fmadds f4, f30, f4, f3
/* 8022E840 0022B920  C0 62 BC 88 */	lfs f3, "@505"@sda21(r2)
/* 8022E844 0022B924  EC 5E 00 BA */	fmadds f2, f30, f2, f0
/* 8022E848 0022B928  C0 02 BC A0 */	lfs f0, "@511"@sda21(r2)
/* 8022E84C 0022B92C  C0 C1 00 08 */	lfs f6, 0x8(r1)
/* 8022E850 0022B930  EC BE 19 3A */	fmadds f5, f30, f4, f3
/* 8022E854 0022B934  EC 9E 00 BA */	fmadds f4, f30, f2, f0
/* 8022E858 0022B938  C0 62 BC 68 */	lfs f3, "@304"@sda21(r2)
/* 8022E85C 0022B93C  EC 46 F1 BC */	fnmsubs f2, f6, f6, f30
/* 8022E860 0022B940  C0 E2 BC 70 */	lfs f7, "@306"@sda21(r2)
/* 8022E864 0022B944  EC 01 30 2A */	fadds f0, f1, f6
/* 8022E868 0022B948  EC BE 01 72 */	fmuls f5, f30, f5
/* 8022E86C 0022B94C  EC 7E 19 3A */	fmadds f3, f30, f4, f3
/* 8022E870 0022B950  EC 02 00 24 */	fdivs f0, f2, f0
/* 8022E874 0022B954  EC 45 18 24 */	fdivs f2, f5, f3
/* 8022E878 0022B958  EC 02 00 7A */	fmadds f0, f2, f1, f0
/* 8022E87C 0022B95C  EC 06 00 2A */	fadds f0, f6, f0
/* 8022E880 0022B960  EC 07 00 32 */	fmuls f0, f7, f0
/* 8022E884 0022B964  D0 1F 00 20 */	stfs f0, 0x20(r31)
.L_8022E888:
/* 8022E888 0022B968  C0 02 BC B8 */	lfs f0, "@517"@sda21(r2)
/* 8022E88C 0022B96C  FC 1F 00 40 */	fcmpo cr0, f31, f0
/* 8022E890 0022B970  4C 41 13 82 */	cror eq, gt, eq
/* 8022E894 0022B974  7C 00 00 26 */	mfcr r0
/* 8022E898 0022B978  54 00 1F FE */	extrwi r0, r0, 1, 2
/* 8022E89C 0022B97C  90 1F 00 24 */	stw r0, 0x24(r31)
/* 8022E8A0 0022B980  80 1F 00 24 */	lwz r0, 0x24(r31)
/* 8022E8A4 0022B984  2C 00 00 00 */	cmpwi r0, 0x0
/* 8022E8A8 0022B988  40 82 00 A8 */	bne .L_8022E950
/* 8022E8AC 0022B98C  C0 FF 00 20 */	lfs f7, 0x20(r31)
/* 8022E8B0 0022B990  C0 42 BC D0 */	lfs f2, "@523"@sda21(r2)
/* 8022E8B4 0022B994  ED 07 01 F2 */	fmuls f8, f7, f7
/* 8022E8B8 0022B998  C0 22 BC CC */	lfs f1, "@522"@sda21(r2)
/* 8022E8BC 0022B99C  C0 02 BC C8 */	lfs f0, "@521"@sda21(r2)
/* 8022E8C0 0022B9A0  C0 82 BC C4 */	lfs f4, "@520"@sda21(r2)
/* 8022E8C4 0022B9A4  EC A2 0A 3A */	fmadds f5, f2, f8, f1
/* 8022E8C8 0022B9A8  C0 62 BC C0 */	lfs f3, "@519"@sda21(r2)
/* 8022E8CC 0022B9AC  C0 42 BC BC */	lfs f2, "@518"@sda21(r2)
/* 8022E8D0 0022B9B0  EC C8 01 F2 */	fmuls f6, f8, f7
/* 8022E8D4 0022B9B4  C0 22 BC 68 */	lfs f1, "@304"@sda21(r2)
/* 8022E8D8 0022B9B8  EC A8 01 7A */	fmadds f5, f8, f5, f0
/* 8022E8DC 0022B9BC  C0 1F 00 0C */	lfs f0, 0xc(r31)
/* 8022E8E0 0022B9C0  EC 88 21 7A */	fmadds f4, f8, f5, f4
/* 8022E8E4 0022B9C4  EC 68 19 3A */	fmadds f3, f8, f4, f3
/* 8022E8E8 0022B9C8  EC 48 10 FA */	fmadds f2, f8, f3, f2
/* 8022E8EC 0022B9CC  EC 46 38 BA */	fmadds f2, f6, f2, f7
/* 8022E8F0 0022B9D0  EC 21 10 24 */	fdivs f1, f1, f2
/* 8022E8F4 0022B9D4  EC 00 00 72 */	fmuls f0, f0, f1
/* 8022E8F8 0022B9D8  D0 1F 00 0C */	stfs f0, 0xc(r31)
/* 8022E8FC 0022B9DC  C0 1F 00 00 */	lfs f0, 0x0(r31)
/* 8022E900 0022B9E0  EC 00 00 72 */	fmuls f0, f0, f1
/* 8022E904 0022B9E4  D0 1F 00 00 */	stfs f0, 0x0(r31)
/* 8022E908 0022B9E8  C0 1F 00 04 */	lfs f0, 0x4(r31)
/* 8022E90C 0022B9EC  EC 00 00 72 */	fmuls f0, f0, f1
/* 8022E910 0022B9F0  D0 1F 00 04 */	stfs f0, 0x4(r31)
/* 8022E914 0022B9F4  C0 1F 00 08 */	lfs f0, 0x8(r31)
/* 8022E918 0022B9F8  EC 00 00 72 */	fmuls f0, f0, f1
/* 8022E91C 0022B9FC  D0 1F 00 08 */	stfs f0, 0x8(r31)
/* 8022E920 0022BA00  C0 1F 00 1C */	lfs f0, 0x1c(r31)
/* 8022E924 0022BA04  EC 00 00 72 */	fmuls f0, f0, f1
/* 8022E928 0022BA08  D0 1F 00 1C */	stfs f0, 0x1c(r31)
/* 8022E92C 0022BA0C  C0 1F 00 10 */	lfs f0, 0x10(r31)
/* 8022E930 0022BA10  EC 00 00 72 */	fmuls f0, f0, f1
/* 8022E934 0022BA14  D0 1F 00 10 */	stfs f0, 0x10(r31)
/* 8022E938 0022BA18  C0 1F 00 14 */	lfs f0, 0x14(r31)
/* 8022E93C 0022BA1C  EC 00 00 72 */	fmuls f0, f0, f1
/* 8022E940 0022BA20  D0 1F 00 14 */	stfs f0, 0x14(r31)
/* 8022E944 0022BA24  C0 1F 00 18 */	lfs f0, 0x18(r31)
/* 8022E948 0022BA28  EC 00 00 72 */	fmuls f0, f0, f1
/* 8022E94C 0022BA2C  D0 1F 00 18 */	stfs f0, 0x18(r31)
.L_8022E950:
/* 8022E950 0022BA30  E3 E1 00 38 */	psq_l f31, 0x38(r1), 0, qr0
/* 8022E954 0022BA34  CB E1 00 30 */	lfd f31, 0x30(r1)
/* 8022E958 0022BA38  E3 C1 00 28 */	psq_l f30, 0x28(r1), 0, qr0
/* 8022E95C 0022BA3C  CB C1 00 20 */	lfd f30, 0x20(r1)
/* 8022E960 0022BA40  80 01 00 44 */	lwz r0, 0x44(r1)
/* 8022E964 0022BA44  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 8022E968 0022BA48  7C 08 03 A6 */	mtlr r0
/* 8022E96C 0022BA4C  38 21 00 40 */	addi r1, r1, 0x40
/* 8022E970 0022BA50  4E 80 00 20 */	blr
.endfn RtQuatSetupSlerpCache

# 0x803D05E8 - 0x803D0658
.section .sdata2, "a"
.balign 8

.obj "@304", local
	.4byte 0x3F800000
.endobj "@304"

.obj "@305", local
	.4byte 0x00000000
.endobj "@305"

.obj "@306", local
	.4byte 0x40000000
.endobj "@306"

.obj "@500", local
	.4byte 0xBF800000
.endobj "@500"

.obj "@501", local
	.4byte 0x40490FDB
.endobj "@501"

.obj "@502", local
	.4byte 0x3FC90FDB
.endobj "@502"

.obj "@503", local
	.4byte 0x3FC90FDA
.endobj "@503"

.obj "@504", local
	.4byte 0x33A22168
.endobj "@504"

.obj "@505", local
	.4byte 0x3E2AAAAB
.endobj "@505"

.obj "@506", local
	.4byte 0xBEA6B090
.endobj "@506"

.obj "@507", local
	.4byte 0x3E4E0AA8
.endobj "@507"

.obj "@508", local
	.4byte 0xBD241146
.endobj "@508"

.obj "@509", local
	.4byte 0x3A4F7F04
.endobj "@509"

.obj "@510", local
	.4byte 0x3811EF08
.endobj "@510"

.obj "@511", local
	.4byte 0xC019D139
.endobj "@511"

.obj "@512", local
	.4byte 0x4001572D
.endobj "@512"

.obj "@513", local
	.4byte 0xBF303361
.endobj "@513"

.obj "@514", local
	.4byte 0x3D9DC62E
.endobj "@514"

.obj "@515", local
	.4byte 0x3F000000
.endobj "@515"

.obj "@516", local
	.4byte 0x40490FDA
.endobj "@516"

.obj "@517", local
	.4byte 0x3F7FFF58
.endobj "@517"

.obj "@518", local
	.4byte 0xBE2AAAAB
.endobj "@518"

.obj "@519", local
	.4byte 0x3C088889
.endobj "@519"

.obj "@520", local
	.4byte 0xB9500D01
.endobj "@520"

.obj "@521", local
	.4byte 0x3638EF1B
.endobj "@521"

.obj "@522", local
	.4byte 0xB2D72F34
.endobj "@522"

.obj "@523", local
	.4byte 0x2F2EC9D3
.endobj "@523"
	.4byte 0x00000000
