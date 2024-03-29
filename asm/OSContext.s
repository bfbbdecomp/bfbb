.include "macros.inc"
.file "OSContext.c"

# 0x801D2750 - 0x801D2F04
.text
.balign 4

.fn __OSLoadFPUContext, local
/* 801D2750 001CF830  A0 A4 01 A2 */	lhz r5, 0x1a2(r4)
/* 801D2754 001CF834  54 A5 07 FF */	clrlwi. r5, r5, 31
/* 801D2758 001CF838  41 82 01 18 */	beq .L_801D2870
/* 801D275C 001CF83C  C8 04 01 90 */	lfd f0, 0x190(r4)
/* 801D2760 001CF840  FD FE 05 8E */	mtfsf 255, f0
/* 801D2764 001CF844  7C B8 E2 A6 */	mfspr r5, HID2
/* 801D2768 001CF848  54 A5 1F FF */	extrwi. r5, r5, 1, 2
/* 801D276C 001CF84C  41 82 00 84 */	beq .L_801D27F0
/* 801D2770 001CF850  E0 04 01 C8 */	psq_l f0, 0x1c8(r4), 0, qr0
/* 801D2774 001CF854  E0 24 01 D0 */	psq_l f1, 0x1d0(r4), 0, qr0
/* 801D2778 001CF858  E0 44 01 D8 */	psq_l f2, 0x1d8(r4), 0, qr0
/* 801D277C 001CF85C  E0 64 01 E0 */	psq_l f3, 0x1e0(r4), 0, qr0
/* 801D2780 001CF860  E0 84 01 E8 */	psq_l f4, 0x1e8(r4), 0, qr0
/* 801D2784 001CF864  E0 A4 01 F0 */	psq_l f5, 0x1f0(r4), 0, qr0
/* 801D2788 001CF868  E0 C4 01 F8 */	psq_l f6, 0x1f8(r4), 0, qr0
/* 801D278C 001CF86C  E0 E4 02 00 */	psq_l f7, 0x200(r4), 0, qr0
/* 801D2790 001CF870  E1 04 02 08 */	psq_l f8, 0x208(r4), 0, qr0
/* 801D2794 001CF874  E1 24 02 10 */	psq_l f9, 0x210(r4), 0, qr0
/* 801D2798 001CF878  E1 44 02 18 */	psq_l f10, 0x218(r4), 0, qr0
/* 801D279C 001CF87C  E1 64 02 20 */	psq_l f11, 0x220(r4), 0, qr0
/* 801D27A0 001CF880  E1 84 02 28 */	psq_l f12, 0x228(r4), 0, qr0
/* 801D27A4 001CF884  E1 A4 02 30 */	psq_l f13, 0x230(r4), 0, qr0
/* 801D27A8 001CF888  E1 C4 02 38 */	psq_l f14, 0x238(r4), 0, qr0
/* 801D27AC 001CF88C  E1 E4 02 40 */	psq_l f15, 0x240(r4), 0, qr0
/* 801D27B0 001CF890  E2 04 02 48 */	psq_l f16, 0x248(r4), 0, qr0
/* 801D27B4 001CF894  E2 24 02 50 */	psq_l f17, 0x250(r4), 0, qr0
/* 801D27B8 001CF898  E2 44 02 58 */	psq_l f18, 0x258(r4), 0, qr0
/* 801D27BC 001CF89C  E2 64 02 60 */	psq_l f19, 0x260(r4), 0, qr0
/* 801D27C0 001CF8A0  E2 84 02 68 */	psq_l f20, 0x268(r4), 0, qr0
/* 801D27C4 001CF8A4  E2 A4 02 70 */	psq_l f21, 0x270(r4), 0, qr0
/* 801D27C8 001CF8A8  E2 C4 02 78 */	psq_l f22, 0x278(r4), 0, qr0
/* 801D27CC 001CF8AC  E2 E4 02 80 */	psq_l f23, 0x280(r4), 0, qr0
/* 801D27D0 001CF8B0  E3 04 02 88 */	psq_l f24, 0x288(r4), 0, qr0
/* 801D27D4 001CF8B4  E3 24 02 90 */	psq_l f25, 0x290(r4), 0, qr0
/* 801D27D8 001CF8B8  E3 44 02 98 */	psq_l f26, 0x298(r4), 0, qr0
/* 801D27DC 001CF8BC  E3 64 02 A0 */	psq_l f27, 0x2a0(r4), 0, qr0
/* 801D27E0 001CF8C0  E3 84 02 A8 */	psq_l f28, 0x2a8(r4), 0, qr0
/* 801D27E4 001CF8C4  E3 A4 02 B0 */	psq_l f29, 0x2b0(r4), 0, qr0
/* 801D27E8 001CF8C8  E3 C4 02 B8 */	psq_l f30, 0x2b8(r4), 0, qr0
/* 801D27EC 001CF8CC  E3 E4 02 C0 */	psq_l f31, 0x2c0(r4), 0, qr0
.L_801D27F0:
/* 801D27F0 001CF8D0  C8 04 00 90 */	lfd f0, 0x90(r4)
/* 801D27F4 001CF8D4  C8 24 00 98 */	lfd f1, 0x98(r4)
/* 801D27F8 001CF8D8  C8 44 00 A0 */	lfd f2, 0xa0(r4)
/* 801D27FC 001CF8DC  C8 64 00 A8 */	lfd f3, 0xa8(r4)
/* 801D2800 001CF8E0  C8 84 00 B0 */	lfd f4, 0xb0(r4)
/* 801D2804 001CF8E4  C8 A4 00 B8 */	lfd f5, 0xb8(r4)
/* 801D2808 001CF8E8  C8 C4 00 C0 */	lfd f6, 0xc0(r4)
/* 801D280C 001CF8EC  C8 E4 00 C8 */	lfd f7, 0xc8(r4)
/* 801D2810 001CF8F0  C9 04 00 D0 */	lfd f8, 0xd0(r4)
/* 801D2814 001CF8F4  C9 24 00 D8 */	lfd f9, 0xd8(r4)
/* 801D2818 001CF8F8  C9 44 00 E0 */	lfd f10, 0xe0(r4)
/* 801D281C 001CF8FC  C9 64 00 E8 */	lfd f11, 0xe8(r4)
/* 801D2820 001CF900  C9 84 00 F0 */	lfd f12, 0xf0(r4)
/* 801D2824 001CF904  C9 A4 00 F8 */	lfd f13, 0xf8(r4)
/* 801D2828 001CF908  C9 C4 01 00 */	lfd f14, 0x100(r4)
/* 801D282C 001CF90C  C9 E4 01 08 */	lfd f15, 0x108(r4)
/* 801D2830 001CF910  CA 04 01 10 */	lfd f16, 0x110(r4)
/* 801D2834 001CF914  CA 24 01 18 */	lfd f17, 0x118(r4)
/* 801D2838 001CF918  CA 44 01 20 */	lfd f18, 0x120(r4)
/* 801D283C 001CF91C  CA 64 01 28 */	lfd f19, 0x128(r4)
/* 801D2840 001CF920  CA 84 01 30 */	lfd f20, 0x130(r4)
/* 801D2844 001CF924  CA A4 01 38 */	lfd f21, 0x138(r4)
/* 801D2848 001CF928  CA C4 01 40 */	lfd f22, 0x140(r4)
/* 801D284C 001CF92C  CA E4 01 48 */	lfd f23, 0x148(r4)
/* 801D2850 001CF930  CB 04 01 50 */	lfd f24, 0x150(r4)
/* 801D2854 001CF934  CB 24 01 58 */	lfd f25, 0x158(r4)
/* 801D2858 001CF938  CB 44 01 60 */	lfd f26, 0x160(r4)
/* 801D285C 001CF93C  CB 64 01 68 */	lfd f27, 0x168(r4)
/* 801D2860 001CF940  CB 84 01 70 */	lfd f28, 0x170(r4)
/* 801D2864 001CF944  CB A4 01 78 */	lfd f29, 0x178(r4)
/* 801D2868 001CF948  CB C4 01 80 */	lfd f30, 0x180(r4)
/* 801D286C 001CF94C  CB E4 01 88 */	lfd f31, 0x188(r4)
.L_801D2870:
/* 801D2870 001CF950  4E 80 00 20 */	blr
.endfn __OSLoadFPUContext

.fn __OSSaveFPUContext, local
/* 801D2874 001CF954  A0 65 01 A2 */	lhz r3, 0x1a2(r5)
/* 801D2878 001CF958  60 63 00 01 */	ori r3, r3, 0x1
/* 801D287C 001CF95C  B0 65 01 A2 */	sth r3, 0x1a2(r5)
/* 801D2880 001CF960  D8 05 00 90 */	stfd f0, 0x90(r5)
/* 801D2884 001CF964  D8 25 00 98 */	stfd f1, 0x98(r5)
/* 801D2888 001CF968  D8 45 00 A0 */	stfd f2, 0xa0(r5)
/* 801D288C 001CF96C  D8 65 00 A8 */	stfd f3, 0xa8(r5)
/* 801D2890 001CF970  D8 85 00 B0 */	stfd f4, 0xb0(r5)
/* 801D2894 001CF974  D8 A5 00 B8 */	stfd f5, 0xb8(r5)
/* 801D2898 001CF978  D8 C5 00 C0 */	stfd f6, 0xc0(r5)
/* 801D289C 001CF97C  D8 E5 00 C8 */	stfd f7, 0xc8(r5)
/* 801D28A0 001CF980  D9 05 00 D0 */	stfd f8, 0xd0(r5)
/* 801D28A4 001CF984  D9 25 00 D8 */	stfd f9, 0xd8(r5)
/* 801D28A8 001CF988  D9 45 00 E0 */	stfd f10, 0xe0(r5)
/* 801D28AC 001CF98C  D9 65 00 E8 */	stfd f11, 0xe8(r5)
/* 801D28B0 001CF990  D9 85 00 F0 */	stfd f12, 0xf0(r5)
/* 801D28B4 001CF994  D9 A5 00 F8 */	stfd f13, 0xf8(r5)
/* 801D28B8 001CF998  D9 C5 01 00 */	stfd f14, 0x100(r5)
/* 801D28BC 001CF99C  D9 E5 01 08 */	stfd f15, 0x108(r5)
/* 801D28C0 001CF9A0  DA 05 01 10 */	stfd f16, 0x110(r5)
/* 801D28C4 001CF9A4  DA 25 01 18 */	stfd f17, 0x118(r5)
/* 801D28C8 001CF9A8  DA 45 01 20 */	stfd f18, 0x120(r5)
/* 801D28CC 001CF9AC  DA 65 01 28 */	stfd f19, 0x128(r5)
/* 801D28D0 001CF9B0  DA 85 01 30 */	stfd f20, 0x130(r5)
/* 801D28D4 001CF9B4  DA A5 01 38 */	stfd f21, 0x138(r5)
/* 801D28D8 001CF9B8  DA C5 01 40 */	stfd f22, 0x140(r5)
/* 801D28DC 001CF9BC  DA E5 01 48 */	stfd f23, 0x148(r5)
/* 801D28E0 001CF9C0  DB 05 01 50 */	stfd f24, 0x150(r5)
/* 801D28E4 001CF9C4  DB 25 01 58 */	stfd f25, 0x158(r5)
/* 801D28E8 001CF9C8  DB 45 01 60 */	stfd f26, 0x160(r5)
/* 801D28EC 001CF9CC  DB 65 01 68 */	stfd f27, 0x168(r5)
/* 801D28F0 001CF9D0  DB 85 01 70 */	stfd f28, 0x170(r5)
/* 801D28F4 001CF9D4  DB A5 01 78 */	stfd f29, 0x178(r5)
/* 801D28F8 001CF9D8  DB C5 01 80 */	stfd f30, 0x180(r5)
/* 801D28FC 001CF9DC  DB E5 01 88 */	stfd f31, 0x188(r5)
/* 801D2900 001CF9E0  FC 00 04 8E */	mffs f0
/* 801D2904 001CF9E4  D8 05 01 90 */	stfd f0, 0x190(r5)
/* 801D2908 001CF9E8  C8 05 00 90 */	lfd f0, 0x90(r5)
/* 801D290C 001CF9EC  7C 78 E2 A6 */	mfspr r3, HID2
/* 801D2910 001CF9F0  54 63 1F FF */	extrwi. r3, r3, 1, 2
/* 801D2914 001CF9F4  41 82 00 84 */	beq .L_801D2998
/* 801D2918 001CF9F8  F0 05 01 C8 */	psq_st f0, 0x1c8(r5), 0, qr0
/* 801D291C 001CF9FC  F0 25 01 D0 */	psq_st f1, 0x1d0(r5), 0, qr0
/* 801D2920 001CFA00  F0 45 01 D8 */	psq_st f2, 0x1d8(r5), 0, qr0
/* 801D2924 001CFA04  F0 65 01 E0 */	psq_st f3, 0x1e0(r5), 0, qr0
/* 801D2928 001CFA08  F0 85 01 E8 */	psq_st f4, 0x1e8(r5), 0, qr0
/* 801D292C 001CFA0C  F0 A5 01 F0 */	psq_st f5, 0x1f0(r5), 0, qr0
/* 801D2930 001CFA10  F0 C5 01 F8 */	psq_st f6, 0x1f8(r5), 0, qr0
/* 801D2934 001CFA14  F0 E5 02 00 */	psq_st f7, 0x200(r5), 0, qr0
/* 801D2938 001CFA18  F1 05 02 08 */	psq_st f8, 0x208(r5), 0, qr0
/* 801D293C 001CFA1C  F1 25 02 10 */	psq_st f9, 0x210(r5), 0, qr0
/* 801D2940 001CFA20  F1 45 02 18 */	psq_st f10, 0x218(r5), 0, qr0
/* 801D2944 001CFA24  F1 65 02 20 */	psq_st f11, 0x220(r5), 0, qr0
/* 801D2948 001CFA28  F1 85 02 28 */	psq_st f12, 0x228(r5), 0, qr0
/* 801D294C 001CFA2C  F1 A5 02 30 */	psq_st f13, 0x230(r5), 0, qr0
/* 801D2950 001CFA30  F1 C5 02 38 */	psq_st f14, 0x238(r5), 0, qr0
/* 801D2954 001CFA34  F1 E5 02 40 */	psq_st f15, 0x240(r5), 0, qr0
/* 801D2958 001CFA38  F2 05 02 48 */	psq_st f16, 0x248(r5), 0, qr0
/* 801D295C 001CFA3C  F2 25 02 50 */	psq_st f17, 0x250(r5), 0, qr0
/* 801D2960 001CFA40  F2 45 02 58 */	psq_st f18, 0x258(r5), 0, qr0
/* 801D2964 001CFA44  F2 65 02 60 */	psq_st f19, 0x260(r5), 0, qr0
/* 801D2968 001CFA48  F2 85 02 68 */	psq_st f20, 0x268(r5), 0, qr0
/* 801D296C 001CFA4C  F2 A5 02 70 */	psq_st f21, 0x270(r5), 0, qr0
/* 801D2970 001CFA50  F2 C5 02 78 */	psq_st f22, 0x278(r5), 0, qr0
/* 801D2974 001CFA54  F2 E5 02 80 */	psq_st f23, 0x280(r5), 0, qr0
/* 801D2978 001CFA58  F3 05 02 88 */	psq_st f24, 0x288(r5), 0, qr0
/* 801D297C 001CFA5C  F3 25 02 90 */	psq_st f25, 0x290(r5), 0, qr0
/* 801D2980 001CFA60  F3 45 02 98 */	psq_st f26, 0x298(r5), 0, qr0
/* 801D2984 001CFA64  F3 65 02 A0 */	psq_st f27, 0x2a0(r5), 0, qr0
/* 801D2988 001CFA68  F3 85 02 A8 */	psq_st f28, 0x2a8(r5), 0, qr0
/* 801D298C 001CFA6C  F3 A5 02 B0 */	psq_st f29, 0x2b0(r5), 0, qr0
/* 801D2990 001CFA70  F3 C5 02 B8 */	psq_st f30, 0x2b8(r5), 0, qr0
/* 801D2994 001CFA74  F3 E5 02 C0 */	psq_st f31, 0x2c0(r5), 0, qr0
.L_801D2998:
/* 801D2998 001CFA78  4E 80 00 20 */	blr
.endfn __OSSaveFPUContext

.fn OSSaveFPUContext, global
/* 801D299C 001CFA7C  38 A3 00 00 */	addi r5, r3, 0x0
/* 801D29A0 001CFA80  4B FF FE D4 */	b __OSSaveFPUContext
.endfn OSSaveFPUContext

.fn OSSetCurrentContext, global
/* 801D29A4 001CFA84  3C 80 80 00 */	lis r4, 0x8000
/* 801D29A8 001CFA88  90 64 00 D4 */	stw r3, 0xd4(r4)
/* 801D29AC 001CFA8C  54 65 00 BE */	clrlwi r5, r3, 2
/* 801D29B0 001CFA90  90 A4 00 C0 */	stw r5, 0xc0(r4)
/* 801D29B4 001CFA94  80 A4 00 D8 */	lwz r5, 0xd8(r4)
/* 801D29B8 001CFA98  7C 05 18 00 */	cmpw r5, r3
/* 801D29BC 001CFA9C  40 82 00 20 */	bne .L_801D29DC
/* 801D29C0 001CFAA0  80 C3 01 9C */	lwz r6, 0x19c(r3)
/* 801D29C4 001CFAA4  60 C6 20 00 */	ori r6, r6, 0x2000
/* 801D29C8 001CFAA8  90 C3 01 9C */	stw r6, 0x19c(r3)
/* 801D29CC 001CFAAC  7C C0 00 A6 */	mfmsr r6
/* 801D29D0 001CFAB0  60 C6 00 02 */	ori r6, r6, 0x2
/* 801D29D4 001CFAB4  7C C0 01 24 */	mtmsr r6
/* 801D29D8 001CFAB8  4E 80 00 20 */	blr
.L_801D29DC:
/* 801D29DC 001CFABC  80 C3 01 9C */	lwz r6, 0x19c(r3)
/* 801D29E0 001CFAC0  54 C6 04 E2 */	rlwinm r6, r6, 0, 19, 17
/* 801D29E4 001CFAC4  90 C3 01 9C */	stw r6, 0x19c(r3)
/* 801D29E8 001CFAC8  7C C0 00 A6 */	mfmsr r6
/* 801D29EC 001CFACC  54 C6 04 E2 */	rlwinm r6, r6, 0, 19, 17
/* 801D29F0 001CFAD0  60 C6 00 02 */	ori r6, r6, 0x2
/* 801D29F4 001CFAD4  7C C0 01 24 */	mtmsr r6
/* 801D29F8 001CFAD8  4C 00 01 2C */	isync
/* 801D29FC 001CFADC  4E 80 00 20 */	blr
.endfn OSSetCurrentContext

.fn OSGetCurrentContext, global
/* 801D2A00 001CFAE0  3C 60 80 00 */	lis r3, 0x8000
/* 801D2A04 001CFAE4  80 63 00 D4 */	lwz r3, 0xd4(r3)
/* 801D2A08 001CFAE8  4E 80 00 20 */	blr
.endfn OSGetCurrentContext

.fn OSSaveContext, global
/* 801D2A0C 001CFAEC  BD A3 00 34 */	stmw r13, 0x34(r3)
/* 801D2A10 001CFAF0  7C 11 E2 A6 */	mfspr r0, GQR1
/* 801D2A14 001CFAF4  90 03 01 A8 */	stw r0, 0x1a8(r3)
/* 801D2A18 001CFAF8  7C 12 E2 A6 */	mfspr r0, GQR2
/* 801D2A1C 001CFAFC  90 03 01 AC */	stw r0, 0x1ac(r3)
/* 801D2A20 001CFB00  7C 13 E2 A6 */	mfspr r0, GQR3
/* 801D2A24 001CFB04  90 03 01 B0 */	stw r0, 0x1b0(r3)
/* 801D2A28 001CFB08  7C 14 E2 A6 */	mfspr r0, GQR4
/* 801D2A2C 001CFB0C  90 03 01 B4 */	stw r0, 0x1b4(r3)
/* 801D2A30 001CFB10  7C 15 E2 A6 */	mfspr r0, GQR5
/* 801D2A34 001CFB14  90 03 01 B8 */	stw r0, 0x1b8(r3)
/* 801D2A38 001CFB18  7C 16 E2 A6 */	mfspr r0, GQR6
/* 801D2A3C 001CFB1C  90 03 01 BC */	stw r0, 0x1bc(r3)
/* 801D2A40 001CFB20  7C 17 E2 A6 */	mfspr r0, GQR7
/* 801D2A44 001CFB24  90 03 01 C0 */	stw r0, 0x1c0(r3)
/* 801D2A48 001CFB28  7C 00 00 26 */	mfcr r0
/* 801D2A4C 001CFB2C  90 03 00 80 */	stw r0, 0x80(r3)
/* 801D2A50 001CFB30  7C 08 02 A6 */	mflr r0
/* 801D2A54 001CFB34  90 03 00 84 */	stw r0, 0x84(r3)
/* 801D2A58 001CFB38  90 03 01 98 */	stw r0, 0x198(r3)
/* 801D2A5C 001CFB3C  7C 00 00 A6 */	mfmsr r0
/* 801D2A60 001CFB40  90 03 01 9C */	stw r0, 0x19c(r3)
/* 801D2A64 001CFB44  7C 09 02 A6 */	mfctr r0
/* 801D2A68 001CFB48  90 03 00 88 */	stw r0, 0x88(r3)
/* 801D2A6C 001CFB4C  7C 01 02 A6 */	mfxer r0
/* 801D2A70 001CFB50  90 03 00 8C */	stw r0, 0x8c(r3)
/* 801D2A74 001CFB54  90 23 00 04 */	stw r1, 0x4(r3)
/* 801D2A78 001CFB58  90 43 00 08 */	stw r2, 0x8(r3)
/* 801D2A7C 001CFB5C  38 00 00 01 */	li r0, 0x1
/* 801D2A80 001CFB60  90 03 00 0C */	stw r0, 0xc(r3)
/* 801D2A84 001CFB64  38 60 00 00 */	li r3, 0x0
/* 801D2A88 001CFB68  4E 80 00 20 */	blr
.endfn OSSaveContext

.fn OSLoadContext, global
/* 801D2A8C 001CFB6C  3C 80 80 1D */	lis r4, __RAS_OSDisableInterrupts_begin@ha
/* 801D2A90 001CFB70  80 C3 01 98 */	lwz r6, 0x198(r3)
/* 801D2A94 001CFB74  38 A4 43 10 */	addi r5, r4, __RAS_OSDisableInterrupts_begin@l
/* 801D2A98 001CFB78  7C 06 28 40 */	cmplw r6, r5
/* 801D2A9C 001CFB7C  40 81 00 18 */	ble .L_801D2AB4
/* 801D2AA0 001CFB80  3C 80 80 1D */	lis r4, __RAS_OSDisableInterrupts_end@ha
/* 801D2AA4 001CFB84  38 04 43 1C */	addi r0, r4, __RAS_OSDisableInterrupts_end@l
/* 801D2AA8 001CFB88  7C 06 00 40 */	cmplw r6, r0
/* 801D2AAC 001CFB8C  40 80 00 08 */	bge .L_801D2AB4
/* 801D2AB0 001CFB90  90 A3 01 98 */	stw r5, 0x198(r3)
.L_801D2AB4:
/* 801D2AB4 001CFB94  80 03 00 00 */	lwz r0, 0x0(r3)
/* 801D2AB8 001CFB98  80 23 00 04 */	lwz r1, 0x4(r3)
/* 801D2ABC 001CFB9C  80 43 00 08 */	lwz r2, 0x8(r3)
/* 801D2AC0 001CFBA0  A0 83 01 A2 */	lhz r4, 0x1a2(r3)
/* 801D2AC4 001CFBA4  54 85 07 BD */	rlwinm. r5, r4, 0, 30, 30
/* 801D2AC8 001CFBA8  41 82 00 14 */	beq .L_801D2ADC
/* 801D2ACC 001CFBAC  54 84 07 FA */	rlwinm r4, r4, 0, 31, 29
/* 801D2AD0 001CFBB0  B0 83 01 A2 */	sth r4, 0x1a2(r3)
/* 801D2AD4 001CFBB4  B8 A3 00 14 */	lmw r5, 0x14(r3)
/* 801D2AD8 001CFBB8  48 00 00 08 */	b .L_801D2AE0
.L_801D2ADC:
/* 801D2ADC 001CFBBC  B9 A3 00 34 */	lmw r13, 0x34(r3)
.L_801D2AE0:
/* 801D2AE0 001CFBC0  80 83 01 A8 */	lwz r4, 0x1a8(r3)
/* 801D2AE4 001CFBC4  7C 91 E3 A6 */	mtspr GQR1, r4
/* 801D2AE8 001CFBC8  80 83 01 AC */	lwz r4, 0x1ac(r3)
/* 801D2AEC 001CFBCC  7C 92 E3 A6 */	mtspr GQR2, r4
/* 801D2AF0 001CFBD0  80 83 01 B0 */	lwz r4, 0x1b0(r3)
/* 801D2AF4 001CFBD4  7C 93 E3 A6 */	mtspr GQR3, r4
/* 801D2AF8 001CFBD8  80 83 01 B4 */	lwz r4, 0x1b4(r3)
/* 801D2AFC 001CFBDC  7C 94 E3 A6 */	mtspr GQR4, r4
/* 801D2B00 001CFBE0  80 83 01 B8 */	lwz r4, 0x1b8(r3)
/* 801D2B04 001CFBE4  7C 95 E3 A6 */	mtspr GQR5, r4
/* 801D2B08 001CFBE8  80 83 01 BC */	lwz r4, 0x1bc(r3)
/* 801D2B0C 001CFBEC  7C 96 E3 A6 */	mtspr GQR6, r4
/* 801D2B10 001CFBF0  80 83 01 C0 */	lwz r4, 0x1c0(r3)
/* 801D2B14 001CFBF4  7C 97 E3 A6 */	mtspr GQR7, r4
/* 801D2B18 001CFBF8  80 83 00 80 */	lwz r4, 0x80(r3)
/* 801D2B1C 001CFBFC  7C 8F F1 20 */	mtcrf 255, r4
/* 801D2B20 001CFC00  80 83 00 84 */	lwz r4, 0x84(r3)
/* 801D2B24 001CFC04  7C 88 03 A6 */	mtlr r4
/* 801D2B28 001CFC08  80 83 00 88 */	lwz r4, 0x88(r3)
/* 801D2B2C 001CFC0C  7C 89 03 A6 */	mtctr r4
/* 801D2B30 001CFC10  80 83 00 8C */	lwz r4, 0x8c(r3)
/* 801D2B34 001CFC14  7C 81 03 A6 */	mtxer r4
/* 801D2B38 001CFC18  7C 80 00 A6 */	mfmsr r4
/* 801D2B3C 001CFC1C  54 84 04 5E */	rlwinm r4, r4, 0, 17, 15
/* 801D2B40 001CFC20  54 84 07 FA */	rlwinm r4, r4, 0, 31, 29
/* 801D2B44 001CFC24  7C 80 01 24 */	mtmsr r4
/* 801D2B48 001CFC28  80 83 01 98 */	lwz r4, 0x198(r3)
/* 801D2B4C 001CFC2C  7C 9A 03 A6 */	mtsrr0 r4
/* 801D2B50 001CFC30  80 83 01 9C */	lwz r4, 0x19c(r3)
/* 801D2B54 001CFC34  7C 9B 03 A6 */	mtsrr1 r4
/* 801D2B58 001CFC38  80 83 00 10 */	lwz r4, 0x10(r3)
/* 801D2B5C 001CFC3C  80 63 00 0C */	lwz r3, 0xc(r3)
/* 801D2B60 001CFC40  4C 00 00 64 */	rfi
.endfn OSLoadContext

.fn OSGetStackPointer, global
/* 801D2B64 001CFC44  7C 23 0B 78 */	mr r3, r1
/* 801D2B68 001CFC48  4E 80 00 20 */	blr
.endfn OSGetStackPointer

.fn OSClearContext, global
/* 801D2B6C 001CFC4C  38 A0 00 00 */	li r5, 0x0
/* 801D2B70 001CFC50  B0 A3 01 A0 */	sth r5, 0x1a0(r3)
/* 801D2B74 001CFC54  3C 80 80 00 */	lis r4, 0x8000
/* 801D2B78 001CFC58  B0 A3 01 A2 */	sth r5, 0x1a2(r3)
/* 801D2B7C 001CFC5C  80 04 00 D8 */	lwz r0, 0xd8(r4)
/* 801D2B80 001CFC60  7C 03 00 40 */	cmplw r3, r0
/* 801D2B84 001CFC64  40 82 00 08 */	bne .L_801D2B8C
/* 801D2B88 001CFC68  90 A4 00 D8 */	stw r5, 0xd8(r4)
.L_801D2B8C:
/* 801D2B8C 001CFC6C  4E 80 00 20 */	blr
.endfn OSClearContext

.fn OSDumpContext, global
/* 801D2B90 001CFC70  7C 08 02 A6 */	mflr r0
/* 801D2B94 001CFC74  90 01 00 04 */	stw r0, 0x4(r1)
/* 801D2B98 001CFC78  94 21 FD 08 */	stwu r1, -0x2f8(r1)
/* 801D2B9C 001CFC7C  BF 21 02 DC */	stmw r25, 0x2dc(r1)
/* 801D2BA0 001CFC80  7C 7C 1B 78 */	mr r28, r3
/* 801D2BA4 001CFC84  3C 60 80 2B */	lis r3, ...data.0@ha
/* 801D2BA8 001CFC88  4C C6 31 82 */	crclr 4*cr1+eq
/* 801D2BAC 001CFC8C  3B E3 54 88 */	addi r31, r3, ...data.0@l
/* 801D2BB0 001CFC90  7F E3 FB 78 */	mr r3, r31
/* 801D2BB4 001CFC94  7F 84 E3 78 */	mr r4, r28
/* 801D2BB8 001CFC98  48 00 03 4D */	bl OSReport
/* 801D2BBC 001CFC9C  3B 20 00 00 */	li r25, 0x0
/* 801D2BC0 001CFCA0  57 20 10 3A */	slwi r0, r25, 2
/* 801D2BC4 001CFCA4  7F 7C 02 14 */	add r27, r28, r0
/* 801D2BC8 001CFCA8  48 00 00 04 */	b .L_801D2BCC
.L_801D2BCC:
/* 801D2BCC 001CFCAC  48 00 00 04 */	b .L_801D2BD0
.L_801D2BD0:
/* 801D2BD0 001CFCB0  48 00 00 04 */	b .L_801D2BD4
.L_801D2BD4:
/* 801D2BD4 001CFCB4  81 1B 00 40 */	lwz r8, 0x40(r27)
/* 801D2BD8 001CFCB8  7F 24 CB 78 */	mr r4, r25
/* 801D2BDC 001CFCBC  80 BB 00 00 */	lwz r5, 0x0(r27)
/* 801D2BE0 001CFCC0  38 7F 00 44 */	addi r3, r31, 0x44
/* 801D2BE4 001CFCC4  4C C6 31 82 */	crclr 4*cr1+eq
/* 801D2BE8 001CFCC8  7C A6 2B 78 */	mr r6, r5
/* 801D2BEC 001CFCCC  7D 09 43 78 */	mr r9, r8
/* 801D2BF0 001CFCD0  38 F9 00 10 */	addi r7, r25, 0x10
/* 801D2BF4 001CFCD4  48 00 03 11 */	bl OSReport
/* 801D2BF8 001CFCD8  3B 7B 00 04 */	addi r27, r27, 0x4
/* 801D2BFC 001CFCDC  3B 39 00 01 */	addi r25, r25, 0x1
/* 801D2C00 001CFCE0  28 19 00 10 */	cmplwi r25, 0x10
/* 801D2C04 001CFCE4  41 80 FF D0 */	blt .L_801D2BD4
/* 801D2C08 001CFCE8  80 9C 00 84 */	lwz r4, 0x84(r28)
/* 801D2C0C 001CFCEC  38 7F 00 74 */	addi r3, r31, 0x74
/* 801D2C10 001CFCF0  80 BC 00 80 */	lwz r5, 0x80(r28)
/* 801D2C14 001CFCF4  4C C6 31 82 */	crclr 4*cr1+eq
/* 801D2C18 001CFCF8  48 00 02 ED */	bl OSReport
/* 801D2C1C 001CFCFC  80 9C 01 98 */	lwz r4, 0x198(r28)
/* 801D2C20 001CFD00  38 7F 00 A4 */	addi r3, r31, 0xa4
/* 801D2C24 001CFD04  80 BC 01 9C */	lwz r5, 0x19c(r28)
/* 801D2C28 001CFD08  4C C6 31 82 */	crclr 4*cr1+eq
/* 801D2C2C 001CFD0C  48 00 02 D9 */	bl OSReport
/* 801D2C30 001CFD10  38 7F 00 D4 */	addi r3, r31, 0xd4
/* 801D2C34 001CFD14  4C C6 31 82 */	crclr 4*cr1+eq
/* 801D2C38 001CFD18  48 00 02 CD */	bl OSReport
/* 801D2C3C 001CFD1C  3B 20 00 00 */	li r25, 0x0
/* 801D2C40 001CFD20  57 20 10 3A */	slwi r0, r25, 2
/* 801D2C44 001CFD24  7F 7C 02 14 */	add r27, r28, r0
/* 801D2C48 001CFD28  48 00 00 04 */	b .L_801D2C4C
.L_801D2C4C:
/* 801D2C4C 001CFD2C  48 00 00 04 */	b .L_801D2C50
.L_801D2C50:
/* 801D2C50 001CFD30  48 00 00 04 */	b .L_801D2C54
.L_801D2C54:
/* 801D2C54 001CFD34  80 BB 01 A4 */	lwz r5, 0x1a4(r27)
/* 801D2C58 001CFD38  7F 24 CB 78 */	mr r4, r25
/* 801D2C5C 001CFD3C  80 FB 01 B4 */	lwz r7, 0x1b4(r27)
/* 801D2C60 001CFD40  38 7F 00 E8 */	addi r3, r31, 0xe8
/* 801D2C64 001CFD44  38 D9 00 04 */	addi r6, r25, 0x4
/* 801D2C68 001CFD48  4C C6 31 82 */	crclr 4*cr1+eq
/* 801D2C6C 001CFD4C  48 00 02 99 */	bl OSReport
/* 801D2C70 001CFD50  3B 7B 00 04 */	addi r27, r27, 0x4
/* 801D2C74 001CFD54  3B 39 00 01 */	addi r25, r25, 0x1
/* 801D2C78 001CFD58  28 19 00 04 */	cmplwi r25, 0x4
/* 801D2C7C 001CFD5C  41 80 FF D8 */	blt .L_801D2C54
/* 801D2C80 001CFD60  A0 1C 01 A2 */	lhz r0, 0x1a2(r28)
/* 801D2C84 001CFD64  54 00 07 FE */	clrlwi r0, r0, 31
/* 801D2C88 001CFD68  28 00 00 00 */	cmplwi r0, 0x0
/* 801D2C8C 001CFD6C  41 82 01 3C */	beq .L_801D2DC8
/* 801D2C90 001CFD70  48 00 16 81 */	bl OSDisableInterrupts
/* 801D2C94 001CFD74  3C C0 80 00 */	lis r6, 0x8000
/* 801D2C98 001CFD78  80 06 00 D4 */	lwz r0, 0xd4(r6)
/* 801D2C9C 001CFD7C  38 A0 00 00 */	li r5, 0x0
/* 801D2CA0 001CFD80  38 81 00 10 */	addi r4, r1, 0x10
/* 801D2CA4 001CFD84  B0 A1 01 B0 */	sth r5, 0x1b0(r1)
/* 801D2CA8 001CFD88  7C 1E 03 78 */	mr r30, r0
/* 801D2CAC 001CFD8C  7C 7D 1B 78 */	mr r29, r3
/* 801D2CB0 001CFD90  B0 A1 01 B2 */	sth r5, 0x1b2(r1)
/* 801D2CB4 001CFD94  80 06 00 D8 */	lwz r0, 0xd8(r6)
/* 801D2CB8 001CFD98  7C 04 00 40 */	cmplw r4, r0
/* 801D2CBC 001CFD9C  40 82 00 08 */	bne .L_801D2CC4
/* 801D2CC0 001CFDA0  90 A6 00 D8 */	stw r5, 0xd8(r6)
.L_801D2CC4:
/* 801D2CC4 001CFDA4  38 61 00 10 */	addi r3, r1, 0x10
/* 801D2CC8 001CFDA8  4B FF FC DD */	bl OSSetCurrentContext
/* 801D2CCC 001CFDAC  38 7F 01 0C */	addi r3, r31, 0x10c
/* 801D2CD0 001CFDB0  4C C6 31 82 */	crclr 4*cr1+eq
/* 801D2CD4 001CFDB4  48 00 02 31 */	bl OSReport
/* 801D2CD8 001CFDB8  3B 20 00 00 */	li r25, 0x0
/* 801D2CDC 001CFDBC  57 20 18 38 */	slwi r0, r25, 3
/* 801D2CE0 001CFDC0  7F 5C 02 14 */	add r26, r28, r0
/* 801D2CE4 001CFDC4  48 00 00 04 */	b .L_801D2CE8
.L_801D2CE8:
/* 801D2CE8 001CFDC8  48 00 00 04 */	b .L_801D2CEC
.L_801D2CEC:
/* 801D2CEC 001CFDCC  48 00 00 04 */	b .L_801D2CF0
.L_801D2CF0:
/* 801D2CF0 001CFDD0  C8 3A 00 98 */	lfd f1, 0x98(r26)
/* 801D2CF4 001CFDD4  48 01 A6 E9 */	bl __cvt_fp2unsigned
/* 801D2CF8 001CFDD8  7C 7B 1B 78 */	mr r27, r3
/* 801D2CFC 001CFDDC  C8 3A 00 90 */	lfd f1, 0x90(r26)
/* 801D2D00 001CFDE0  48 01 A6 DD */	bl __cvt_fp2unsigned
/* 801D2D04 001CFDE4  7C 65 1B 78 */	mr r5, r3
/* 801D2D08 001CFDE8  4C C6 31 82 */	crclr 4*cr1+eq
/* 801D2D0C 001CFDEC  7F 24 CB 78 */	mr r4, r25
/* 801D2D10 001CFDF0  7F 67 DB 78 */	mr r7, r27
/* 801D2D14 001CFDF4  38 7F 01 20 */	addi r3, r31, 0x120
/* 801D2D18 001CFDF8  38 D9 00 01 */	addi r6, r25, 0x1
/* 801D2D1C 001CFDFC  48 00 01 E9 */	bl OSReport
/* 801D2D20 001CFE00  3B 5A 00 10 */	addi r26, r26, 0x10
/* 801D2D24 001CFE04  3B 39 00 02 */	addi r25, r25, 0x2
/* 801D2D28 001CFE08  28 19 00 20 */	cmplwi r25, 0x20
/* 801D2D2C 001CFE0C  41 80 FF C4 */	blt .L_801D2CF0
/* 801D2D30 001CFE10  38 7F 01 3C */	addi r3, r31, 0x13c
/* 801D2D34 001CFE14  4C C6 31 82 */	crclr 4*cr1+eq
/* 801D2D38 001CFE18  48 00 01 CD */	bl OSReport
/* 801D2D3C 001CFE1C  3B 20 00 00 */	li r25, 0x0
/* 801D2D40 001CFE20  57 20 18 38 */	slwi r0, r25, 3
/* 801D2D44 001CFE24  7F 5C 02 14 */	add r26, r28, r0
/* 801D2D48 001CFE28  48 00 00 04 */	b .L_801D2D4C
.L_801D2D4C:
/* 801D2D4C 001CFE2C  48 00 00 04 */	b .L_801D2D50
.L_801D2D50:
/* 801D2D50 001CFE30  48 00 00 04 */	b .L_801D2D54
.L_801D2D54:
/* 801D2D54 001CFE34  C8 3A 01 D0 */	lfd f1, 0x1d0(r26)
/* 801D2D58 001CFE38  48 01 A6 85 */	bl __cvt_fp2unsigned
/* 801D2D5C 001CFE3C  7C 7B 1B 78 */	mr r27, r3
/* 801D2D60 001CFE40  C8 3A 01 C8 */	lfd f1, 0x1c8(r26)
/* 801D2D64 001CFE44  48 01 A6 79 */	bl __cvt_fp2unsigned
/* 801D2D68 001CFE48  7C 65 1B 78 */	mr r5, r3
/* 801D2D6C 001CFE4C  4C C6 31 82 */	crclr 4*cr1+eq
/* 801D2D70 001CFE50  7F 24 CB 78 */	mr r4, r25
/* 801D2D74 001CFE54  7F 67 DB 78 */	mr r7, r27
/* 801D2D78 001CFE58  38 7F 01 50 */	addi r3, r31, 0x150
/* 801D2D7C 001CFE5C  38 D9 00 01 */	addi r6, r25, 0x1
/* 801D2D80 001CFE60  48 00 01 85 */	bl OSReport
/* 801D2D84 001CFE64  3B 5A 00 10 */	addi r26, r26, 0x10
/* 801D2D88 001CFE68  3B 39 00 02 */	addi r25, r25, 0x2
/* 801D2D8C 001CFE6C  28 19 00 20 */	cmplwi r25, 0x20
/* 801D2D90 001CFE70  41 80 FF C4 */	blt .L_801D2D54
/* 801D2D94 001CFE74  38 A0 00 00 */	li r5, 0x0
/* 801D2D98 001CFE78  B0 A1 01 B0 */	sth r5, 0x1b0(r1)
/* 801D2D9C 001CFE7C  3C 60 80 00 */	lis r3, 0x8000
/* 801D2DA0 001CFE80  38 81 00 10 */	addi r4, r1, 0x10
/* 801D2DA4 001CFE84  B0 A1 01 B2 */	sth r5, 0x1b2(r1)
/* 801D2DA8 001CFE88  80 03 00 D8 */	lwz r0, 0xd8(r3)
/* 801D2DAC 001CFE8C  7C 04 00 40 */	cmplw r4, r0
/* 801D2DB0 001CFE90  40 82 00 08 */	bne .L_801D2DB8
/* 801D2DB4 001CFE94  90 A3 00 D8 */	stw r5, 0xd8(r3)
.L_801D2DB8:
/* 801D2DB8 001CFE98  7F C3 F3 78 */	mr r3, r30
/* 801D2DBC 001CFE9C  4B FF FB E9 */	bl OSSetCurrentContext
/* 801D2DC0 001CFEA0  7F A3 EB 78 */	mr r3, r29
/* 801D2DC4 001CFEA4  48 00 15 75 */	bl OSRestoreInterrupts
.L_801D2DC8:
/* 801D2DC8 001CFEA8  38 7F 01 70 */	addi r3, r31, 0x170
/* 801D2DCC 001CFEAC  4C C6 31 82 */	crclr 4*cr1+eq
/* 801D2DD0 001CFEB0  48 00 01 35 */	bl OSReport
/* 801D2DD4 001CFEB4  83 3C 00 04 */	lwz r25, 0x4(r28)
/* 801D2DD8 001CFEB8  3B 40 00 00 */	li r26, 0x0
/* 801D2DDC 001CFEBC  48 00 00 04 */	b .L_801D2DE0
.L_801D2DE0:
/* 801D2DE0 001CFEC0  48 00 00 04 */	b .L_801D2DE4
.L_801D2DE4:
/* 801D2DE4 001CFEC4  48 00 00 20 */	b .L_801D2E04
.L_801D2DE8:
/* 801D2DE8 001CFEC8  80 B9 00 00 */	lwz r5, 0x0(r25)
/* 801D2DEC 001CFECC  7F 24 CB 78 */	mr r4, r25
/* 801D2DF0 001CFED0  80 D9 00 04 */	lwz r6, 0x4(r25)
/* 801D2DF4 001CFED4  38 7F 01 98 */	addi r3, r31, 0x198
/* 801D2DF8 001CFED8  4C C6 31 82 */	crclr 4*cr1+eq
/* 801D2DFC 001CFEDC  48 00 01 09 */	bl OSReport
/* 801D2E00 001CFEE0  83 39 00 00 */	lwz r25, 0x0(r25)
.L_801D2E04:
/* 801D2E04 001CFEE4  28 19 00 00 */	cmplwi r25, 0x0
/* 801D2E08 001CFEE8  41 82 00 1C */	beq .L_801D2E24
/* 801D2E0C 001CFEEC  3C 19 00 01 */	addis r0, r25, 0x1
/* 801D2E10 001CFEF0  28 00 FF FF */	cmplwi r0, 0xffff
/* 801D2E14 001CFEF4  41 82 00 10 */	beq .L_801D2E24
/* 801D2E18 001CFEF8  28 1A 00 10 */	cmplwi r26, 0x10
/* 801D2E1C 001CFEFC  3B 5A 00 01 */	addi r26, r26, 0x1
/* 801D2E20 001CFF00  41 80 FF C8 */	blt .L_801D2DE8
.L_801D2E24:
/* 801D2E24 001CFF04  BB 21 02 DC */	lmw r25, 0x2dc(r1)
/* 801D2E28 001CFF08  80 01 02 FC */	lwz r0, 0x2fc(r1)
/* 801D2E2C 001CFF0C  38 21 02 F8 */	addi r1, r1, 0x2f8
/* 801D2E30 001CFF10  7C 08 03 A6 */	mtlr r0
/* 801D2E34 001CFF14  4E 80 00 20 */	blr
.endfn OSDumpContext

.fn OSSwitchFPUContext, local
/* 801D2E38 001CFF18  7C A0 00 A6 */	mfmsr r5
/* 801D2E3C 001CFF1C  60 A5 20 00 */	ori r5, r5, 0x2000
/* 801D2E40 001CFF20  7C A0 01 24 */	mtmsr r5
/* 801D2E44 001CFF24  4C 00 01 2C */	isync
/* 801D2E48 001CFF28  80 A4 01 9C */	lwz r5, 0x19c(r4)
/* 801D2E4C 001CFF2C  60 A5 20 00 */	ori r5, r5, 0x2000
/* 801D2E50 001CFF30  7C BB 03 A6 */	mtsrr1 r5
/* 801D2E54 001CFF34  3C 60 80 00 */	lis r3, 0x8000
/* 801D2E58 001CFF38  80 A3 00 D8 */	lwz r5, 0xd8(r3)
/* 801D2E5C 001CFF3C  90 83 00 D8 */	stw r4, 0xd8(r3)
/* 801D2E60 001CFF40  7C 05 20 00 */	cmpw r5, r4
/* 801D2E64 001CFF44  41 82 00 14 */	beq .L_801D2E78
/* 801D2E68 001CFF48  2C 05 00 00 */	cmpwi r5, 0x0
/* 801D2E6C 001CFF4C  41 82 00 08 */	beq .L_801D2E74
/* 801D2E70 001CFF50  4B FF FA 05 */	bl __OSSaveFPUContext
.L_801D2E74:
/* 801D2E74 001CFF54  4B FF F8 DD */	bl __OSLoadFPUContext
.L_801D2E78:
/* 801D2E78 001CFF58  80 64 00 80 */	lwz r3, 0x80(r4)
/* 801D2E7C 001CFF5C  7C 6F F1 20 */	mtcrf 255, r3
/* 801D2E80 001CFF60  80 64 00 84 */	lwz r3, 0x84(r4)
/* 801D2E84 001CFF64  7C 68 03 A6 */	mtlr r3
/* 801D2E88 001CFF68  80 64 01 98 */	lwz r3, 0x198(r4)
/* 801D2E8C 001CFF6C  7C 7A 03 A6 */	mtsrr0 r3
/* 801D2E90 001CFF70  80 64 00 88 */	lwz r3, 0x88(r4)
/* 801D2E94 001CFF74  7C 69 03 A6 */	mtctr r3
/* 801D2E98 001CFF78  80 64 00 8C */	lwz r3, 0x8c(r4)
/* 801D2E9C 001CFF7C  7C 61 03 A6 */	mtxer r3
/* 801D2EA0 001CFF80  A0 64 01 A2 */	lhz r3, 0x1a2(r4)
/* 801D2EA4 001CFF84  54 63 07 FA */	rlwinm r3, r3, 0, 31, 29
/* 801D2EA8 001CFF88  B0 64 01 A2 */	sth r3, 0x1a2(r4)
/* 801D2EAC 001CFF8C  80 A4 00 14 */	lwz r5, 0x14(r4)
/* 801D2EB0 001CFF90  80 64 00 0C */	lwz r3, 0xc(r4)
/* 801D2EB4 001CFF94  80 84 00 10 */	lwz r4, 0x10(r4)
/* 801D2EB8 001CFF98  4C 00 00 64 */	rfi
.endfn OSSwitchFPUContext

.fn __OSContextInit, global
/* 801D2EBC 001CFF9C  7C 08 02 A6 */	mflr r0
/* 801D2EC0 001CFFA0  90 01 00 04 */	stw r0, 0x4(r1)
/* 801D2EC4 001CFFA4  94 21 FF F8 */	stwu r1, -0x8(r1)
/* 801D2EC8 001CFFA8  3C 60 80 1D */	lis r3, OSSwitchFPUContext@ha
/* 801D2ECC 001CFFAC  38 83 2E 38 */	addi r4, r3, OSSwitchFPUContext@l
/* 801D2ED0 001CFFB0  38 60 00 07 */	li r3, 0x7
/* 801D2ED4 001CFFB4  4B FF E5 9D */	bl __OSSetExceptionHandler
/* 801D2ED8 001CFFB8  38 00 00 00 */	li r0, 0x0
/* 801D2EDC 001CFFBC  4C C6 31 82 */	crclr 4*cr1+eq
/* 801D2EE0 001CFFC0  3C 80 80 00 */	lis r4, 0x8000
/* 801D2EE4 001CFFC4  3C 60 80 2B */	lis r3, "@76"@ha
/* 801D2EE8 001CFFC8  90 04 00 D8 */	stw r0, 0xd8(r4)
/* 801D2EEC 001CFFCC  38 63 56 3C */	addi r3, r3, "@76"@l
/* 801D2EF0 001CFFD0  4B FE EE 9D */	bl DBPrintf
/* 801D2EF4 001CFFD4  80 01 00 0C */	lwz r0, 0xc(r1)
/* 801D2EF8 001CFFD8  38 21 00 08 */	addi r1, r1, 0x8
/* 801D2EFC 001CFFDC  7C 08 03 A6 */	mtlr r0
/* 801D2F00 001CFFE0  4E 80 00 20 */	blr
.endfn __OSContextInit

# 0x802B5488 - 0x802B5660
.data
.balign 8
.sym ...data.0, local

.obj "@61", local
	.4byte 0x2D2D2D2D
	.4byte 0x2D2D2D2D
	.4byte 0x2D2D2D2D
	.4byte 0x2D2D2D2D
	.4byte 0x2D2D2D2D
	.4byte 0x2D2D2D2D
	.4byte 0x2D20436F
	.4byte 0x6E746578
	.4byte 0x74203078
	.4byte 0x25303878
	.4byte 0x202D2D2D
	.4byte 0x2D2D2D2D
	.4byte 0x2D2D2D2D
	.4byte 0x2D2D2D2D
	.4byte 0x2D2D2D2D
	.4byte 0x2D2D2D2D
	.4byte 0x2D2D0A00
.endobj "@61"

.obj "@62", local
	.4byte 0x72252D32
	.4byte 0x6420203D
	.4byte 0x20307825
	.4byte 0x30387820
	.4byte 0x28253134
	.4byte 0x64292020
	.4byte 0x72252D32
	.4byte 0x6420203D
	.4byte 0x20307825
	.4byte 0x30387820
	.4byte 0x28253134
	.4byte 0x64290A00
.endobj "@62"

.obj "@63", local
	.4byte 0x4C522020
	.4byte 0x203D2030
	.4byte 0x78253038
	.4byte 0x78202020
	.4byte 0x20202020
	.4byte 0x20202020
	.4byte 0x20202020
	.4byte 0x20202020
	.4byte 0x43522020
	.4byte 0x203D2030
	.4byte 0x78253038
	.byte 0x78, 0x0A, 0x00
.endobj "@63"
	.byte 0x00

.obj "@64", local
	.4byte 0x53525230
	.4byte 0x203D2030
	.4byte 0x78253038
	.4byte 0x78202020
	.4byte 0x20202020
	.4byte 0x20202020
	.4byte 0x20202020
	.4byte 0x20202020
	.4byte 0x53525231
	.4byte 0x203D2030
	.4byte 0x78253038
	.byte 0x78, 0x0A, 0x00
.endobj "@64"
	.byte 0x00

.obj "@65", local
	.4byte 0x0A475152
	.4byte 0x732D2D2D
	.4byte 0x2D2D2D2D
	.4byte 0x2D2D2D0A
	.byte 0x00
.endobj "@65"
	.byte 0x00, 0x00, 0x00

.obj "@66", local
	.4byte 0x67717225
	.4byte 0x64203D20
	.4byte 0x30782530
	.4byte 0x38782009
	.4byte 0x20677172
	.4byte 0x2564203D
	.4byte 0x20307825
	.4byte 0x3038780A
	.byte 0x00
.endobj "@66"
	.byte 0x00, 0x00, 0x00

.obj "@67", local
	.4byte 0x0A0A4650
	.4byte 0x52732D2D
	.4byte 0x2D2D2D2D
	.4byte 0x2D2D2D2D
	.2byte 0x0A00
.endobj "@67"
	.2byte 0x0000

.obj "@68", local
	.4byte 0x66722564
	.4byte 0x20093D20
	.4byte 0x25642009
	.4byte 0x20667225
	.4byte 0x6420093D
	.4byte 0x2025640A
	.byte 0x00
.endobj "@68"
	.byte 0x00, 0x00, 0x00

.obj "@69", local
	.4byte 0x0A0A5053
	.4byte 0x46732D2D
	.4byte 0x2D2D2D2D
	.4byte 0x2D2D2D2D
	.2byte 0x0A00
.endobj "@69"
	.2byte 0x0000

.obj "@70", local
	.4byte 0x70732564
	.4byte 0x20093D20
	.4byte 0x30782578
	.4byte 0x20092070
	.4byte 0x73256420
	.4byte 0x093D2030
	.4byte 0x7825780A
	.byte 0x00
.endobj "@70"
	.byte 0x00, 0x00, 0x00

.obj "@71", local
	.4byte 0x0A416464
	.4byte 0x72657373
	.4byte 0x3A202020
	.4byte 0x20202042
	.4byte 0x61636B20
	.4byte 0x43686169
	.4byte 0x6E202020
	.4byte 0x204C5220
	.4byte 0x53617665
	.2byte 0x0A00
.endobj "@71"
	.2byte 0x0000

.obj "@72", local
	.4byte 0x30782530
	.4byte 0x38783A20
	.4byte 0x20203078
	.4byte 0x25303878
	.4byte 0x20202020
	.4byte 0x30782530
	.4byte 0x38780A00
.endobj "@72"

.obj "@76", local
	.4byte 0x4650552D
	.4byte 0x756E6176
	.4byte 0x61696C61
	.4byte 0x626C6520
	.4byte 0x68616E64
	.4byte 0x6C657220
	.4byte 0x696E7374
	.4byte 0x616C6C65
	.byte 0x64, 0x0A, 0x00
.endobj "@76"
	.byte 0x00
