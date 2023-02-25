.include "macros.inc"
.file "zRumble.cpp"

# 0x800ACDE0 - 0x800AD20C
.text
.balign 4

# zRumbleStart(int, _tagSDRumbleType, xEnt*)
.fn zRumbleStart__Fi16_tagSDRumbleTypeP4xEnt, global
/* 800ACDE0 000A9EC0  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 800ACDE4 000A9EC4  7C 08 02 A6 */	mflr r0
/* 800ACDE8 000A9EC8  3C C0 80 3C */	lis r6, globals@ha
/* 800ACDEC 000A9ECC  90 01 00 14 */	stw r0, 0x14(r1)
/* 800ACDF0 000A9ED0  38 C6 05 58 */	addi r6, r6, globals@l
/* 800ACDF4 000A9ED4  93 E1 00 0C */	stw r31, 0xc(r1)
/* 800ACDF8 000A9ED8  7C 7F 1B 78 */	mr r31, r3
/* 800ACDFC 000A9EDC  80 06 06 C0 */	lwz r0, 0x6c0(r6)
/* 800ACE00 000A9EE0  2C 00 00 00 */	cmpwi r0, 0x0
/* 800ACE04 000A9EE4  41 82 02 18 */	beq .L_800AD01C
/* 800ACE08 000A9EE8  28 04 00 12 */	cmplwi r4, 0x12
/* 800ACE0C 000A9EEC  41 81 02 10 */	bgt .L_800AD01C
/* 800ACE10 000A9EF0  3C C0 80 29 */	lis r6, "@686"@ha
/* 800ACE14 000A9EF4  54 80 10 3A */	slwi r0, r4, 2
/* 800ACE18 000A9EF8  38 86 00 90 */	addi r4, r6, "@686"@l
/* 800ACE1C 000A9EFC  7C 04 00 2E */	lwzx r0, r4, r0
/* 800ACE20 000A9F00  7C 09 03 A6 */	mtctr r0
/* 800ACE24 000A9F04  4E 80 04 20 */	bctr
.L_800ACE28:
/* 800ACE28 000A9F08  C0 22 94 B0 */	lfs f1, "@674"@sda21(r2)
/* 800ACE2C 000A9F0C  38 80 00 07 */	li r4, 0x7
/* 800ACE30 000A9F10  38 A0 00 01 */	li r5, 0x1
/* 800ACE34 000A9F14  38 C0 00 00 */	li r6, 0x0
/* 800ACE38 000A9F18  4B F8 98 79 */	bl xPadAddRumble__Fi14_tagRumbleTypefiUi
/* 800ACE3C 000A9F1C  48 00 01 E0 */	b .L_800AD01C
.L_800ACE40:
/* 800ACE40 000A9F20  C0 22 94 B4 */	lfs f1, "@675"@sda21(r2)
/* 800ACE44 000A9F24  38 80 00 07 */	li r4, 0x7
/* 800ACE48 000A9F28  38 A0 00 00 */	li r5, 0x0
/* 800ACE4C 000A9F2C  38 C0 00 00 */	li r6, 0x0
/* 800ACE50 000A9F30  4B F8 98 61 */	bl xPadAddRumble__Fi14_tagRumbleTypefiUi
/* 800ACE54 000A9F34  48 00 01 C8 */	b .L_800AD01C
.L_800ACE58:
/* 800ACE58 000A9F38  C0 22 94 B8 */	lfs f1, "@676"@sda21(r2)
/* 800ACE5C 000A9F3C  38 80 00 09 */	li r4, 0x9
/* 800ACE60 000A9F40  38 A0 00 00 */	li r5, 0x0
/* 800ACE64 000A9F44  38 C0 00 00 */	li r6, 0x0
/* 800ACE68 000A9F48  4B F8 98 49 */	bl xPadAddRumble__Fi14_tagRumbleTypefiUi
/* 800ACE6C 000A9F4C  48 00 01 B0 */	b .L_800AD01C
.L_800ACE70:
/* 800ACE70 000A9F50  C0 22 94 BC */	lfs f1, "@677"@sda21(r2)
/* 800ACE74 000A9F54  7C A3 2B 78 */	mr r3, r5
/* 800ACE78 000A9F58  C0 42 94 B0 */	lfs f2, "@674"@sda21(r2)
/* 800ACE7C 000A9F5C  38 80 00 07 */	li r4, 0x7
/* 800ACE80 000A9F60  48 00 02 9D */	bl zRumbleStartEntDistance__FP4xEntf14_tagRumbleTypef
/* 800ACE84 000A9F64  48 00 01 98 */	b .L_800AD01C
.L_800ACE88:
/* 800ACE88 000A9F68  C0 22 94 B8 */	lfs f1, "@676"@sda21(r2)
/* 800ACE8C 000A9F6C  38 80 00 09 */	li r4, 0x9
/* 800ACE90 000A9F70  38 A0 00 00 */	li r5, 0x0
/* 800ACE94 000A9F74  38 C0 00 00 */	li r6, 0x0
/* 800ACE98 000A9F78  4B F8 98 19 */	bl xPadAddRumble__Fi14_tagRumbleTypefiUi
/* 800ACE9C 000A9F7C  48 00 01 80 */	b .L_800AD01C
.L_800ACEA0:
/* 800ACEA0 000A9F80  C0 22 94 C0 */	lfs f1, "@678"@sda21(r2)
/* 800ACEA4 000A9F84  38 80 00 03 */	li r4, 0x3
/* 800ACEA8 000A9F88  38 A0 00 01 */	li r5, 0x1
/* 800ACEAC 000A9F8C  38 C0 00 01 */	li r6, 0x1
/* 800ACEB0 000A9F90  4B F8 98 01 */	bl xPadAddRumble__Fi14_tagRumbleTypefiUi
/* 800ACEB4 000A9F94  48 00 01 68 */	b .L_800AD01C
.L_800ACEB8:
/* 800ACEB8 000A9F98  C0 22 94 B4 */	lfs f1, "@675"@sda21(r2)
/* 800ACEBC 000A9F9C  38 80 00 02 */	li r4, 0x2
/* 800ACEC0 000A9FA0  38 A0 00 01 */	li r5, 0x1
/* 800ACEC4 000A9FA4  38 C0 00 00 */	li r6, 0x0
/* 800ACEC8 000A9FA8  4B F8 97 E9 */	bl xPadAddRumble__Fi14_tagRumbleTypefiUi
/* 800ACECC 000A9FAC  C0 22 94 C4 */	lfs f1, "@679"@sda21(r2)
/* 800ACED0 000A9FB0  7F E3 FB 78 */	mr r3, r31
/* 800ACED4 000A9FB4  38 80 00 0B */	li r4, 0xb
/* 800ACED8 000A9FB8  38 A0 00 00 */	li r5, 0x0
/* 800ACEDC 000A9FBC  38 C0 00 01 */	li r6, 0x1
/* 800ACEE0 000A9FC0  4B F8 97 D1 */	bl xPadAddRumble__Fi14_tagRumbleTypefiUi
/* 800ACEE4 000A9FC4  48 00 01 38 */	b .L_800AD01C
.L_800ACEE8:
/* 800ACEE8 000A9FC8  C0 22 94 B4 */	lfs f1, "@675"@sda21(r2)
/* 800ACEEC 000A9FCC  38 80 00 06 */	li r4, 0x6
/* 800ACEF0 000A9FD0  38 A0 00 01 */	li r5, 0x1
/* 800ACEF4 000A9FD4  38 C0 00 00 */	li r6, 0x0
/* 800ACEF8 000A9FD8  4B F8 97 B9 */	bl xPadAddRumble__Fi14_tagRumbleTypefiUi
/* 800ACEFC 000A9FDC  48 00 01 20 */	b .L_800AD01C
.L_800ACF00:
/* 800ACF00 000A9FE0  C0 22 94 B4 */	lfs f1, "@675"@sda21(r2)
/* 800ACF04 000A9FE4  38 80 00 03 */	li r4, 0x3
/* 800ACF08 000A9FE8  38 A0 00 01 */	li r5, 0x1
/* 800ACF0C 000A9FEC  38 C0 00 00 */	li r6, 0x0
/* 800ACF10 000A9FF0  4B F8 97 A1 */	bl xPadAddRumble__Fi14_tagRumbleTypefiUi
/* 800ACF14 000A9FF4  48 00 01 08 */	b .L_800AD01C
.L_800ACF18:
/* 800ACF18 000A9FF8  C0 22 94 B4 */	lfs f1, "@675"@sda21(r2)
/* 800ACF1C 000A9FFC  38 80 00 07 */	li r4, 0x7
/* 800ACF20 000AA000  38 A0 00 01 */	li r5, 0x1
/* 800ACF24 000AA004  38 C0 00 00 */	li r6, 0x0
/* 800ACF28 000AA008  4B F8 97 89 */	bl xPadAddRumble__Fi14_tagRumbleTypefiUi
/* 800ACF2C 000AA00C  C0 22 94 B4 */	lfs f1, "@675"@sda21(r2)
/* 800ACF30 000AA010  7F E3 FB 78 */	mr r3, r31
/* 800ACF34 000AA014  38 80 00 09 */	li r4, 0x9
/* 800ACF38 000AA018  38 A0 00 00 */	li r5, 0x0
/* 800ACF3C 000AA01C  38 C0 00 01 */	li r6, 0x1
/* 800ACF40 000AA020  4B F8 97 71 */	bl xPadAddRumble__Fi14_tagRumbleTypefiUi
/* 800ACF44 000AA024  48 00 00 D8 */	b .L_800AD01C
.L_800ACF48:
/* 800ACF48 000AA028  C0 22 94 C8 */	lfs f1, "@680"@sda21(r2)
/* 800ACF4C 000AA02C  38 80 00 05 */	li r4, 0x5
/* 800ACF50 000AA030  38 A0 00 01 */	li r5, 0x1
/* 800ACF54 000AA034  38 C0 00 00 */	li r6, 0x0
/* 800ACF58 000AA038  4B F8 97 59 */	bl xPadAddRumble__Fi14_tagRumbleTypefiUi
/* 800ACF5C 000AA03C  C0 22 94 CC */	lfs f1, "@681"@sda21(r2)
/* 800ACF60 000AA040  7F E3 FB 78 */	mr r3, r31
/* 800ACF64 000AA044  38 80 00 07 */	li r4, 0x7
/* 800ACF68 000AA048  38 A0 00 00 */	li r5, 0x0
/* 800ACF6C 000AA04C  38 C0 00 01 */	li r6, 0x1
/* 800ACF70 000AA050  4B F8 97 41 */	bl xPadAddRumble__Fi14_tagRumbleTypefiUi
/* 800ACF74 000AA054  48 00 00 A8 */	b .L_800AD01C
.L_800ACF78:
/* 800ACF78 000AA058  C0 22 94 C0 */	lfs f1, "@678"@sda21(r2)
/* 800ACF7C 000AA05C  38 80 00 02 */	li r4, 0x2
/* 800ACF80 000AA060  38 A0 00 01 */	li r5, 0x1
/* 800ACF84 000AA064  38 C0 00 01 */	li r6, 0x1
/* 800ACF88 000AA068  4B F8 97 29 */	bl xPadAddRumble__Fi14_tagRumbleTypefiUi
/* 800ACF8C 000AA06C  48 00 00 90 */	b .L_800AD01C
.L_800ACF90:
/* 800ACF90 000AA070  C0 22 94 D0 */	lfs f1, "@682"@sda21(r2)
/* 800ACF94 000AA074  38 80 00 05 */	li r4, 0x5
/* 800ACF98 000AA078  38 A0 00 01 */	li r5, 0x1
/* 800ACF9C 000AA07C  38 C0 00 01 */	li r6, 0x1
/* 800ACFA0 000AA080  4B F8 97 11 */	bl xPadAddRumble__Fi14_tagRumbleTypefiUi
/* 800ACFA4 000AA084  48 00 00 78 */	b .L_800AD01C
.L_800ACFA8:
/* 800ACFA8 000AA088  C0 22 94 D0 */	lfs f1, "@682"@sda21(r2)
/* 800ACFAC 000AA08C  38 80 00 07 */	li r4, 0x7
/* 800ACFB0 000AA090  38 A0 00 01 */	li r5, 0x1
/* 800ACFB4 000AA094  38 C0 00 01 */	li r6, 0x1
/* 800ACFB8 000AA098  4B F8 96 F9 */	bl xPadAddRumble__Fi14_tagRumbleTypefiUi
/* 800ACFBC 000AA09C  48 00 00 60 */	b .L_800AD01C
.L_800ACFC0:
/* 800ACFC0 000AA0A0  C0 22 94 D0 */	lfs f1, "@682"@sda21(r2)
/* 800ACFC4 000AA0A4  38 80 00 09 */	li r4, 0x9
/* 800ACFC8 000AA0A8  38 A0 00 01 */	li r5, 0x1
/* 800ACFCC 000AA0AC  38 C0 00 01 */	li r6, 0x1
/* 800ACFD0 000AA0B0  4B F8 96 E1 */	bl xPadAddRumble__Fi14_tagRumbleTypefiUi
/* 800ACFD4 000AA0B4  48 00 00 48 */	b .L_800AD01C
.L_800ACFD8:
/* 800ACFD8 000AA0B8  C0 22 94 D4 */	lfs f1, "@683"@sda21(r2)
/* 800ACFDC 000AA0BC  38 80 00 03 */	li r4, 0x3
/* 800ACFE0 000AA0C0  38 A0 00 01 */	li r5, 0x1
/* 800ACFE4 000AA0C4  38 C0 00 00 */	li r6, 0x0
/* 800ACFE8 000AA0C8  4B F8 96 C9 */	bl xPadAddRumble__Fi14_tagRumbleTypefiUi
/* 800ACFEC 000AA0CC  48 00 00 30 */	b .L_800AD01C
.L_800ACFF0:
/* 800ACFF0 000AA0D0  C0 22 94 D8 */	lfs f1, "@684"@sda21(r2)
/* 800ACFF4 000AA0D4  38 80 00 06 */	li r4, 0x6
/* 800ACFF8 000AA0D8  38 A0 00 01 */	li r5, 0x1
/* 800ACFFC 000AA0DC  38 C0 00 00 */	li r6, 0x0
/* 800AD000 000AA0E0  4B F8 96 B1 */	bl xPadAddRumble__Fi14_tagRumbleTypefiUi
/* 800AD004 000AA0E4  48 00 00 18 */	b .L_800AD01C
.L_800AD008:
/* 800AD008 000AA0E8  C0 22 94 DC */	lfs f1, "@685"@sda21(r2)
/* 800AD00C 000AA0EC  38 80 00 0A */	li r4, 0xa
/* 800AD010 000AA0F0  38 A0 00 01 */	li r5, 0x1
/* 800AD014 000AA0F4  38 C0 00 00 */	li r6, 0x0
/* 800AD018 000AA0F8  4B F8 96 99 */	bl xPadAddRumble__Fi14_tagRumbleTypefiUi
.L_800AD01C:
/* 800AD01C 000AA0FC  80 01 00 14 */	lwz r0, 0x14(r1)
/* 800AD020 000AA100  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 800AD024 000AA104  7C 08 03 A6 */	mtlr r0
/* 800AD028 000AA108  38 21 00 10 */	addi r1, r1, 0x10
/* 800AD02C 000AA10C  4E 80 00 20 */	blr
.endfn zRumbleStart__Fi16_tagSDRumbleTypeP4xEnt

# zRumbleStart(int, _tagSDRumbleType)
.fn zRumbleStart__Fi16_tagSDRumbleType, global
/* 800AD030 000AA110  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 800AD034 000AA114  7C 08 02 A6 */	mflr r0
/* 800AD038 000AA118  38 A0 00 00 */	li r5, 0x0
/* 800AD03C 000AA11C  90 01 00 14 */	stw r0, 0x14(r1)
/* 800AD040 000AA120  4B FF FD A1 */	bl zRumbleStart__Fi16_tagSDRumbleTypeP4xEnt
/* 800AD044 000AA124  80 01 00 14 */	lwz r0, 0x14(r1)
/* 800AD048 000AA128  7C 08 03 A6 */	mtlr r0
/* 800AD04C 000AA12C  38 21 00 10 */	addi r1, r1, 0x10
/* 800AD050 000AA130  4E 80 00 20 */	blr
.endfn zRumbleStart__Fi16_tagSDRumbleType

# zRumbleStart(_tagSDRumbleType)
.fn zRumbleStart__F16_tagSDRumbleType, global
/* 800AD054 000AA134  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 800AD058 000AA138  7C 08 02 A6 */	mflr r0
/* 800AD05C 000AA13C  3C A0 80 3C */	lis r5, globals@ha
/* 800AD060 000AA140  7C 64 1B 78 */	mr r4, r3
/* 800AD064 000AA144  90 01 00 14 */	stw r0, 0x14(r1)
/* 800AD068 000AA148  38 65 05 58 */	addi r3, r5, globals@l
/* 800AD06C 000AA14C  88 63 06 D1 */	lbz r3, 0x6d1(r3)
/* 800AD070 000AA150  4B FF FF C1 */	bl zRumbleStart__Fi16_tagSDRumbleType
/* 800AD074 000AA154  80 01 00 14 */	lwz r0, 0x14(r1)
/* 800AD078 000AA158  7C 08 03 A6 */	mtlr r0
/* 800AD07C 000AA15C  38 21 00 10 */	addi r1, r1, 0x10
/* 800AD080 000AA160  4E 80 00 20 */	blr
.endfn zRumbleStart__F16_tagSDRumbleType

# zRumbleStart(_tagSDRumbleType, xEnt*)
.fn zRumbleStart__F16_tagSDRumbleTypeP4xEnt, global
/* 800AD084 000AA164  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 800AD088 000AA168  7C 08 02 A6 */	mflr r0
/* 800AD08C 000AA16C  3C C0 80 3C */	lis r6, globals@ha
/* 800AD090 000AA170  7C 85 23 78 */	mr r5, r4
/* 800AD094 000AA174  90 01 00 14 */	stw r0, 0x14(r1)
/* 800AD098 000AA178  38 C6 05 58 */	addi r6, r6, globals@l
/* 800AD09C 000AA17C  7C 64 1B 78 */	mr r4, r3
/* 800AD0A0 000AA180  88 66 06 D1 */	lbz r3, 0x6d1(r6)
/* 800AD0A4 000AA184  4B FF FD 3D */	bl zRumbleStart__Fi16_tagSDRumbleTypeP4xEnt
/* 800AD0A8 000AA188  80 01 00 14 */	lwz r0, 0x14(r1)
/* 800AD0AC 000AA18C  7C 08 03 A6 */	mtlr r0
/* 800AD0B0 000AA190  38 21 00 10 */	addi r1, r1, 0x10
/* 800AD0B4 000AA194  4E 80 00 20 */	blr
.endfn zRumbleStart__F16_tagSDRumbleTypeP4xEnt

# zRumbleStartDistance(int, float, float, _tagRumbleType, float)
.fn zRumbleStartDistance__Fiff14_tagRumbleTypef, global
/* 800AD0B8 000AA198  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 800AD0BC 000AA19C  7C 08 02 A6 */	mflr r0
/* 800AD0C0 000AA1A0  90 01 00 14 */	stw r0, 0x14(r1)
/* 800AD0C4 000AA1A4  C0 02 94 E0 */	lfs f0, "@710"@sda21(r2)
/* 800AD0C8 000AA1A8  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 800AD0CC 000AA1AC  40 80 00 0C */	bge .L_800AD0D8
/* 800AD0D0 000AA1B0  FC 20 00 90 */	fmr f1, f0
/* 800AD0D4 000AA1B4  48 00 00 10 */	b .L_800AD0E4
.L_800AD0D8:
/* 800AD0D8 000AA1B8  FC 01 10 40 */	fcmpo cr0, f1, f2
/* 800AD0DC 000AA1BC  40 81 00 08 */	ble .L_800AD0E4
/* 800AD0E0 000AA1C0  FC 20 10 90 */	fmr f1, f2
.L_800AD0E4:
/* 800AD0E4 000AA1C4  EC 21 10 24 */	fdivs f1, f1, f2
/* 800AD0E8 000AA1C8  C0 42 94 E4 */	lfs f2, "@711"@sda21(r2)
/* 800AD0EC 000AA1CC  C0 02 94 E0 */	lfs f0, "@710"@sda21(r2)
/* 800AD0F0 000AA1D0  EC 22 08 28 */	fsubs f1, f2, f1
/* 800AD0F4 000AA1D4  EC 23 00 72 */	fmuls f1, f3, f1
/* 800AD0F8 000AA1D8  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 800AD0FC 000AA1DC  40 81 00 10 */	ble .L_800AD10C
/* 800AD100 000AA1E0  38 A0 00 01 */	li r5, 0x1
/* 800AD104 000AA1E4  38 C0 00 01 */	li r6, 0x1
/* 800AD108 000AA1E8  4B F8 95 A9 */	bl xPadAddRumble__Fi14_tagRumbleTypefiUi
.L_800AD10C:
/* 800AD10C 000AA1EC  80 01 00 14 */	lwz r0, 0x14(r1)
/* 800AD110 000AA1F0  7C 08 03 A6 */	mtlr r0
/* 800AD114 000AA1F4  38 21 00 10 */	addi r1, r1, 0x10
/* 800AD118 000AA1F8  4E 80 00 20 */	blr
.endfn zRumbleStartDistance__Fiff14_tagRumbleTypef

# zRumbleStartEntDistance(xEnt*, float, _tagRumbleType, float)
.fn zRumbleStartEntDistance__FP4xEntf14_tagRumbleTypef, global
/* 800AD11C 000AA1FC  94 21 FF C0 */	stwu r1, -0x40(r1)
/* 800AD120 000AA200  7C 08 02 A6 */	mflr r0
/* 800AD124 000AA204  90 01 00 44 */	stw r0, 0x44(r1)
/* 800AD128 000AA208  DB E1 00 30 */	stfd f31, 0x30(r1)
/* 800AD12C 000AA20C  F3 E1 00 38 */	psq_st f31, 0x38(r1), 0, qr0
/* 800AD130 000AA210  DB C1 00 20 */	stfd f30, 0x20(r1)
/* 800AD134 000AA214  F3 C1 00 28 */	psq_st f30, 0x28(r1), 0, qr0
/* 800AD138 000AA218  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 800AD13C 000AA21C  93 C1 00 18 */	stw r30, 0x18(r1)
/* 800AD140 000AA220  FF C0 08 90 */	fmr f30, f1
/* 800AD144 000AA224  7C 9E 23 78 */	mr r30, r4
/* 800AD148 000AA228  FF E0 10 90 */	fmr f31, f2
/* 800AD14C 000AA22C  4B F6 E6 BD */	bl xEntGetPos__FPC4xEnt
/* 800AD150 000AA230  3C 80 80 3C */	lis r4, globals@ha
/* 800AD154 000AA234  7C 7F 1B 78 */	mr r31, r3
/* 800AD158 000AA238  38 64 05 58 */	addi r3, r4, globals@l
/* 800AD15C 000AA23C  38 63 06 E0 */	addi r3, r3, 0x6e0
/* 800AD160 000AA240  4B F6 E6 A9 */	bl xEntGetPos__FPC4xEnt
/* 800AD164 000AA244  7C 64 1B 78 */	mr r4, r3
/* 800AD168 000AA248  7F E5 FB 78 */	mr r5, r31
/* 800AD16C 000AA24C  38 61 00 08 */	addi r3, r1, 0x8
/* 800AD170 000AA250  4B F6 15 21 */	bl xVec3Sub__FP5xVec3PC5xVec3PC5xVec3
/* 800AD174 000AA254  C0 21 00 08 */	lfs f1, 0x8(r1)
/* 800AD178 000AA258  3C 60 80 3C */	lis r3, globals@ha
/* 800AD17C 000AA25C  C0 01 00 10 */	lfs f0, 0x10(r1)
/* 800AD180 000AA260  38 63 05 58 */	addi r3, r3, globals@l
/* 800AD184 000AA264  EC 21 00 72 */	fmuls f1, f1, f1
/* 800AD188 000AA268  88 63 06 D1 */	lbz r3, 0x6d1(r3)
/* 800AD18C 000AA26C  EC 00 00 32 */	fmuls f0, f0, f0
/* 800AD190 000AA270  7F C4 F3 78 */	mr r4, r30
/* 800AD194 000AA274  FC 60 F8 90 */	fmr f3, f31
/* 800AD198 000AA278  EC 5E 07 B2 */	fmuls f2, f30, f30
/* 800AD19C 000AA27C  EC 21 00 2A */	fadds f1, f1, f0
/* 800AD1A0 000AA280  4B FF FF 19 */	bl zRumbleStartDistance__Fiff14_tagRumbleTypef
/* 800AD1A4 000AA284  E3 E1 00 38 */	psq_l f31, 0x38(r1), 0, qr0
/* 800AD1A8 000AA288  CB E1 00 30 */	lfd f31, 0x30(r1)
/* 800AD1AC 000AA28C  E3 C1 00 28 */	psq_l f30, 0x28(r1), 0, qr0
/* 800AD1B0 000AA290  CB C1 00 20 */	lfd f30, 0x20(r1)
/* 800AD1B4 000AA294  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 800AD1B8 000AA298  80 01 00 44 */	lwz r0, 0x44(r1)
/* 800AD1BC 000AA29C  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 800AD1C0 000AA2A0  7C 08 03 A6 */	mtlr r0
/* 800AD1C4 000AA2A4  38 21 00 40 */	addi r1, r1, 0x40
/* 800AD1C8 000AA2A8  4E 80 00 20 */	blr
.endfn zRumbleStartEntDistance__FP4xEntf14_tagRumbleTypef

# zPadAddRumble(_tagRumbleType, float, int, unsigned int)
.fn zPadAddRumble__F14_tagRumbleTypefiUi, global
/* 800AD1CC 000AA2AC  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 800AD1D0 000AA2B0  7C 08 02 A6 */	mflr r0
/* 800AD1D4 000AA2B4  3C C0 80 3C */	lis r6, globals@ha
/* 800AD1D8 000AA2B8  7C 67 1B 78 */	mr r7, r3
/* 800AD1DC 000AA2BC  90 01 00 14 */	stw r0, 0x14(r1)
/* 800AD1E0 000AA2C0  38 C6 05 58 */	addi r6, r6, globals@l
/* 800AD1E4 000AA2C4  7C 80 23 78 */	mr r0, r4
/* 800AD1E8 000AA2C8  7C E4 3B 78 */	mr r4, r7
/* 800AD1EC 000AA2CC  88 66 06 D1 */	lbz r3, 0x6d1(r6)
/* 800AD1F0 000AA2D0  7C A6 2B 78 */	mr r6, r5
/* 800AD1F4 000AA2D4  7C 05 03 78 */	mr r5, r0
/* 800AD1F8 000AA2D8  4B F8 94 B9 */	bl xPadAddRumble__Fi14_tagRumbleTypefiUi
/* 800AD1FC 000AA2DC  80 01 00 14 */	lwz r0, 0x14(r1)
/* 800AD200 000AA2E0  7C 08 03 A6 */	mtlr r0
/* 800AD204 000AA2E4  38 21 00 10 */	addi r1, r1, 0x10
/* 800AD208 000AA2E8  4E 80 00 20 */	blr
.endfn zPadAddRumble__F14_tagRumbleTypefiUi

# 0x80290090 - 0x802900E0
.data
.balign 8

.obj "@686", local
	.rel zRumbleStart__Fi16_tagSDRumbleTypeP4xEnt, .L_800AD01C
	.rel zRumbleStart__Fi16_tagSDRumbleTypeP4xEnt, .L_800ACF78
	.rel zRumbleStart__Fi16_tagSDRumbleTypeP4xEnt, .L_800ACE28
	.rel zRumbleStart__Fi16_tagSDRumbleTypeP4xEnt, .L_800ACE58
	.rel zRumbleStart__Fi16_tagSDRumbleTypeP4xEnt, .L_800ACF90
	.rel zRumbleStart__Fi16_tagSDRumbleTypeP4xEnt, .L_800ACFA8
	.rel zRumbleStart__Fi16_tagSDRumbleTypeP4xEnt, .L_800ACFC0
	.rel zRumbleStart__Fi16_tagSDRumbleTypeP4xEnt, .L_800ACF48
	.rel zRumbleStart__Fi16_tagSDRumbleTypeP4xEnt, .L_800ACF18
	.rel zRumbleStart__Fi16_tagSDRumbleTypeP4xEnt, .L_800ACF00
	.rel zRumbleStart__Fi16_tagSDRumbleTypeP4xEnt, .L_800ACE70
	.rel zRumbleStart__Fi16_tagSDRumbleTypeP4xEnt, .L_800ACE88
	.rel zRumbleStart__Fi16_tagSDRumbleTypeP4xEnt, .L_800ACEE8
	.rel zRumbleStart__Fi16_tagSDRumbleTypeP4xEnt, .L_800ACE40
	.rel zRumbleStart__Fi16_tagSDRumbleTypeP4xEnt, .L_800ACEA0
	.rel zRumbleStart__Fi16_tagSDRumbleTypeP4xEnt, .L_800ACEB8
	.rel zRumbleStart__Fi16_tagSDRumbleTypeP4xEnt, .L_800ACFD8
	.rel zRumbleStart__Fi16_tagSDRumbleTypeP4xEnt, .L_800ACFF0
	.rel zRumbleStart__Fi16_tagSDRumbleTypeP4xEnt, .L_800AD008
.endobj "@686"
	.4byte 0x00000000

# 0x803CDE30 - 0x803CDE68
.section .sdata2, "a"
.balign 8

.obj "@674", local
	.4byte 0x3E4CCCCD
.endobj "@674"

.obj "@675", local
	.4byte 0x3DCCCCCD
.endobj "@675"

.obj "@676", local
	.4byte 0x3D75C28F
.endobj "@676"

.obj "@677", local
	.4byte 0x40A00000
.endobj "@677"

.obj "@678", local
	.4byte 0x3F000000
.endobj "@678"

.obj "@679", local
	.4byte 0x3E99999A
.endobj "@679"

.obj "@680", local
	.4byte 0x3D4CCCCD
.endobj "@680"

.obj "@681", local
	.4byte 0x3E19999A
.endobj "@681"

.obj "@682", local
	.4byte 0x3EB33333
.endobj "@682"

.obj "@683", local
	.4byte 0x3F19999A
.endobj "@683"

.obj "@684", local
	.4byte 0x3D23D70A
.endobj "@684"

.obj "@685", local
	.4byte 0x3DB851EC
.endobj "@685"

.obj "@710", local
	.4byte 0x00000000
.endobj "@710"

.obj "@711", local
	.4byte 0x3F800000
.endobj "@711"
