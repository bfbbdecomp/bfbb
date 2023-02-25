.include "macros.inc"
.file "e_asin.c"

# 0x801E9514 - 0x801E9778
.text
.balign 4

.fn __ieee754_asin, global
/* 801E9514 001E65F4  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 801E9518 001E65F8  3C 00 3F F0 */	lis r0, 0x3ff0
/* 801E951C 001E65FC  D8 21 00 08 */	stfd f1, 0x8(r1)
/* 801E9520 001E6600  80 81 00 08 */	lwz r4, 0x8(r1)
/* 801E9524 001E6604  54 85 00 7E */	clrlwi r5, r4, 1
/* 801E9528 001E6608  7C 05 00 00 */	cmpw r5, r0
/* 801E952C 001E660C  41 80 00 34 */	blt .L_801E9560
/* 801E9530 001E6610  80 01 00 0C */	lwz r0, 0xc(r1)
/* 801E9534 001E6614  3C 65 C0 10 */	addis r3, r5, 0xc010
/* 801E9538 001E6618  7C 60 03 79 */	or. r0, r3, r0
/* 801E953C 001E661C  40 82 00 18 */	bne .L_801E9554
/* 801E9540 001E6620  C8 02 B4 F8 */	lfd f0, "@106"@sda21(r2)
/* 801E9544 001E6624  C8 42 B4 F0 */	lfd f2, "@105"@sda21(r2)
/* 801E9548 001E6628  FC 00 00 72 */	fmul f0, f0, f1
/* 801E954C 001E662C  FC 22 00 7A */	fmadd f1, f2, f1, f0
/* 801E9550 001E6630  48 00 02 20 */	b .L_801E9770
.L_801E9554:
/* 801E9554 001E6634  3C 60 80 3D */	lis r3, __float_nan@ha
/* 801E9558 001E6638  C0 23 AF B8 */	lfs f1, __float_nan@l(r3)
/* 801E955C 001E663C  48 00 02 14 */	b .L_801E9770
.L_801E9560:
/* 801E9560 001E6640  3C 00 3F E0 */	lis r0, 0x3fe0
/* 801E9564 001E6644  7C 05 00 00 */	cmpw r5, r0
/* 801E9568 001E6648  40 80 00 94 */	bge .L_801E95FC
/* 801E956C 001E664C  3C 00 3E 40 */	lis r0, 0x3e40
/* 801E9570 001E6650  7C 05 00 00 */	cmpw r5, r0
/* 801E9574 001E6654  40 80 00 1C */	bge .L_801E9590
/* 801E9578 001E6658  C8 62 B5 00 */	lfd f3, "@107"@sda21(r2)
/* 801E957C 001E665C  C8 02 B5 08 */	lfd f0, "@108"@sda21(r2)
/* 801E9580 001E6660  FC 63 08 2A */	fadd f3, f3, f1
/* 801E9584 001E6664  FC 03 00 40 */	fcmpo cr0, f3, f0
/* 801E9588 001E6668  40 81 00 0C */	ble .L_801E9594
/* 801E958C 001E666C  48 00 01 E4 */	b .L_801E9770
.L_801E9590:
/* 801E9590 001E6670  FC 41 00 72 */	fmul f2, f1, f1
.L_801E9594:
/* 801E9594 001E6674  C8 22 B5 38 */	lfd f1, "@114"@sda21(r2)
/* 801E9598 001E6678  C8 02 B5 30 */	lfd f0, "@113"@sda21(r2)
/* 801E959C 001E667C  C8 62 B5 28 */	lfd f3, "@112"@sda21(r2)
/* 801E95A0 001E6680  FC 81 00 BA */	fmadd f4, f1, f2, f0
/* 801E95A4 001E6684  C8 E2 B5 20 */	lfd f7, "@111"@sda21(r2)
/* 801E95A8 001E6688  C8 22 B5 58 */	lfd f1, "@118"@sda21(r2)
/* 801E95AC 001E668C  C8 02 B5 50 */	lfd f0, "@117"@sda21(r2)
/* 801E95B0 001E6690  C8 C2 B5 18 */	lfd f6, "@110"@sda21(r2)
/* 801E95B4 001E6694  FD 02 19 3A */	fmadd f8, f2, f4, f3
/* 801E95B8 001E6698  C8 62 B5 48 */	lfd f3, "@116"@sda21(r2)
/* 801E95BC 001E669C  FC 81 00 BA */	fmadd f4, f1, f2, f0
/* 801E95C0 001E66A0  C8 A2 B5 10 */	lfd f5, "@109"@sda21(r2)
/* 801E95C4 001E66A4  C8 22 B5 40 */	lfd f1, "@115"@sda21(r2)
/* 801E95C8 001E66A8  FC E2 3A 3A */	fmadd f7, f2, f8, f7
/* 801E95CC 001E66AC  C8 02 B5 08 */	lfd f0, "@108"@sda21(r2)
/* 801E95D0 001E66B0  FC 62 19 3A */	fmadd f3, f2, f4, f3
/* 801E95D4 001E66B4  C9 01 00 08 */	lfd f8, 0x8(r1)
/* 801E95D8 001E66B8  FC 82 31 FA */	fmadd f4, f2, f7, f6
/* 801E95DC 001E66BC  FC 22 08 FA */	fmadd f1, f2, f3, f1
/* 801E95E0 001E66C0  FC 62 29 3A */	fmadd f3, f2, f4, f5
/* 801E95E4 001E66C4  FC 02 00 7A */	fmadd f0, f2, f1, f0
/* 801E95E8 001E66C8  FC 22 00 F2 */	fmul f1, f2, f3
/* 801E95EC 001E66CC  FC 01 00 24 */	fdiv f0, f1, f0
/* 801E95F0 001E66D0  FC 28 40 3A */	fmadd f1, f8, f0, f8
/* 801E95F4 001E66D4  D8 01 00 10 */	stfd f0, 0x10(r1)
/* 801E95F8 001E66D8  48 00 01 78 */	b .L_801E9770
.L_801E95FC:
/* 801E95FC 001E66DC  FC 20 0A 10 */	fabs f1, f1
/* 801E9600 001E66E0  C9 82 B5 08 */	lfd f12, "@108"@sda21(r2)
/* 801E9604 001E66E4  C8 02 B5 60 */	lfd f0, "@119"@sda21(r2)
/* 801E9608 001E66E8  C8 C2 B5 38 */	lfd f6, "@114"@sda21(r2)
/* 801E960C 001E66EC  FD 6C 08 28 */	fsub f11, f12, f1
/* 801E9610 001E66F0  C8 82 B5 30 */	lfd f4, "@113"@sda21(r2)
/* 801E9614 001E66F4  C9 22 B5 28 */	lfd f9, "@112"@sda21(r2)
/* 801E9618 001E66F8  C9 02 B5 20 */	lfd f8, "@111"@sda21(r2)
/* 801E961C 001E66FC  FC 40 02 F2 */	fmul f2, f0, f11
/* 801E9620 001E6700  C8 22 B5 68 */	lfd f1, "@120"@sda21(r2)
/* 801E9624 001E6704  C8 A2 B5 58 */	lfd f5, "@118"@sda21(r2)
/* 801E9628 001E6708  C8 62 B5 50 */	lfd f3, "@117"@sda21(r2)
/* 801E962C 001E670C  C8 E2 B5 18 */	lfd f7, "@110"@sda21(r2)
/* 801E9630 001E6710  FD 46 20 BA */	fmadd f10, f6, f2, f4
/* 801E9634 001E6714  C8 82 B5 48 */	lfd f4, "@116"@sda21(r2)
/* 801E9638 001E6718  FC A5 18 BA */	fmadd f5, f5, f2, f3
/* 801E963C 001E671C  C8 C2 B5 10 */	lfd f6, "@109"@sda21(r2)
/* 801E9640 001E6720  C8 62 B5 40 */	lfd f3, "@115"@sda21(r2)
/* 801E9644 001E6724  FD 22 4A BA */	fmadd f9, f2, f10, f9
/* 801E9648 001E6728  D9 61 00 10 */	stfd f11, 0x10(r1)
/* 801E964C 001E672C  FC 82 21 7A */	fmadd f4, f2, f5, f4
/* 801E9650 001E6730  FC A2 42 7A */	fmadd f5, f2, f9, f8
/* 801E9654 001E6734  FC 62 19 3A */	fmadd f3, f2, f4, f3
/* 801E9658 001E6738  FC 82 39 7A */	fmadd f4, f2, f5, f7
/* 801E965C 001E673C  FD 02 60 FA */	fmadd f8, f2, f3, f12
/* 801E9660 001E6740  FC 62 31 3A */	fmadd f3, f2, f4, f6
/* 801E9664 001E6744  FC 02 08 40 */	fcmpo cr0, f2, f1
/* 801E9668 001E6748  FC A2 00 F2 */	fmul f5, f2, f3
/* 801E966C 001E674C  40 81 00 54 */	ble .L_801E96C0
/* 801E9670 001E6750  FC 60 10 34 */	frsqrte f3, f2
/* 801E9674 001E6754  C8 82 B5 70 */	lfd f4, "@121"@sda21(r2)
/* 801E9678 001E6758  FC 23 00 F2 */	fmul f1, f3, f3
/* 801E967C 001E675C  FC 60 00 F2 */	fmul f3, f0, f3
/* 801E9680 001E6760  FC 22 20 7C */	fnmsub f1, f2, f1, f4
/* 801E9684 001E6764  FC 63 00 72 */	fmul f3, f3, f1
/* 801E9688 001E6768  FC 23 00 F2 */	fmul f1, f3, f3
/* 801E968C 001E676C  FC 60 00 F2 */	fmul f3, f0, f3
/* 801E9690 001E6770  FC 22 20 7C */	fnmsub f1, f2, f1, f4
/* 801E9694 001E6774  FC 63 00 72 */	fmul f3, f3, f1
/* 801E9698 001E6778  FC 23 00 F2 */	fmul f1, f3, f3
/* 801E969C 001E677C  FC 60 00 F2 */	fmul f3, f0, f3
/* 801E96A0 001E6780  FC 22 20 7C */	fnmsub f1, f2, f1, f4
/* 801E96A4 001E6784  FC 63 00 72 */	fmul f3, f3, f1
/* 801E96A8 001E6788  FC 23 00 F2 */	fmul f1, f3, f3
/* 801E96AC 001E678C  FC 60 00 F2 */	fmul f3, f0, f3
/* 801E96B0 001E6790  FC 02 20 7C */	fnmsub f0, f2, f1, f4
/* 801E96B4 001E6794  FC 03 00 32 */	fmul f0, f3, f0
/* 801E96B8 001E6798  FC 22 00 32 */	fmul f1, f2, f0
/* 801E96BC 001E679C  48 00 00 2C */	b .L_801E96E8
.L_801E96C0:
/* 801E96C0 001E67A0  FC 01 10 00 */	fcmpu cr0, f1, f2
/* 801E96C4 001E67A4  40 82 00 08 */	bne .L_801E96CC
/* 801E96C8 001E67A8  48 00 00 20 */	b .L_801E96E8
.L_801E96CC:
/* 801E96CC 001E67AC  FC 02 08 00 */	fcmpu cr0, f2, f1
/* 801E96D0 001E67B0  41 82 00 10 */	beq .L_801E96E0
/* 801E96D4 001E67B4  3C 60 80 3D */	lis r3, __float_nan@ha
/* 801E96D8 001E67B8  C0 23 AF B8 */	lfs f1, __float_nan@l(r3)
/* 801E96DC 001E67BC  48 00 00 0C */	b .L_801E96E8
.L_801E96E0:
/* 801E96E0 001E67C0  3C 60 80 3D */	lis r3, __float_huge@ha
/* 801E96E4 001E67C4  C0 23 AF BC */	lfs f1, __float_huge@l(r3)
.L_801E96E8:
/* 801E96E8 001E67C8  3C 60 3F EF */	lis r3, 0x3fef
/* 801E96EC 001E67CC  38 03 33 33 */	addi r0, r3, 0x3333
/* 801E96F0 001E67D0  7C 05 00 00 */	cmpw r5, r0
/* 801E96F4 001E67D4  41 80 00 28 */	blt .L_801E971C
/* 801E96F8 001E67D8  FC 85 40 24 */	fdiv f4, f5, f8
/* 801E96FC 001E67DC  C8 42 B5 78 */	lfd f2, "@122"@sda21(r2)
/* 801E9700 001E67E0  C8 02 B4 F8 */	lfd f0, "@106"@sda21(r2)
/* 801E9704 001E67E4  C8 62 B4 F0 */	lfd f3, "@105"@sda21(r2)
/* 801E9708 001E67E8  FC 21 09 3A */	fmadd f1, f1, f4, f1
/* 801E970C 001E67EC  D8 81 00 10 */	stfd f4, 0x10(r1)
/* 801E9710 001E67F0  FC 02 00 78 */	fmsub f0, f2, f1, f0
/* 801E9714 001E67F4  FC 23 00 28 */	fsub f1, f3, f0
/* 801E9718 001E67F8  48 00 00 48 */	b .L_801E9760
.L_801E971C:
/* 801E971C 001E67FC  D8 21 00 10 */	stfd f1, 0x10(r1)
/* 801E9720 001E6800  38 00 00 00 */	li r0, 0x0
/* 801E9724 001E6804  C8 E2 B5 78 */	lfd f7, "@122"@sda21(r2)
/* 801E9728 001E6808  FC A5 40 24 */	fdiv f5, f5, f8
/* 801E972C 001E680C  90 01 00 14 */	stw r0, 0x14(r1)
/* 801E9730 001E6810  C8 02 B4 F8 */	lfd f0, "@106"@sda21(r2)
/* 801E9734 001E6814  C9 01 00 10 */	lfd f8, 0x10(r1)
/* 801E9738 001E6818  C8 62 B5 80 */	lfd f3, "@123"@sda21(r2)
/* 801E973C 001E681C  FC 88 12 3C */	fnmsub f4, f8, f8, f2
/* 801E9740 001E6820  FC 41 40 2A */	fadd f2, f1, f8
/* 801E9744 001E6824  FC C7 00 72 */	fmul f6, f7, f1
/* 801E9748 001E6828  FC 24 10 24 */	fdiv f1, f4, f2
/* 801E974C 001E682C  FC 27 00 7C */	fnmsub f1, f7, f1, f0
/* 801E9750 001E6830  FC 07 1A 3C */	fnmsub f0, f7, f8, f3
/* 801E9754 001E6834  FC 26 09 78 */	fmsub f1, f6, f5, f1
/* 801E9758 001E6838  FC 01 00 28 */	fsub f0, f1, f0
/* 801E975C 001E683C  FC 23 00 28 */	fsub f1, f3, f0
.L_801E9760:
/* 801E9760 001E6840  2C 04 00 00 */	cmpwi r4, 0x0
/* 801E9764 001E6844  40 81 00 08 */	ble .L_801E976C
/* 801E9768 001E6848  48 00 00 08 */	b .L_801E9770
.L_801E976C:
/* 801E976C 001E684C  FC 20 08 50 */	fneg f1, f1
.L_801E9770:
/* 801E9770 001E6850  38 21 00 20 */	addi r1, r1, 0x20
/* 801E9774 001E6854  4E 80 00 20 */	blr
.endfn __ieee754_asin

# 0x803CFE70 - 0x803CFF08
.section .sdata2, "a"
.balign 8

.obj "@105", local
	.4byte 0x3FF921FB
	.4byte 0x54442D18
.endobj "@105"

.obj "@106", local
	.4byte 0x3C91A626
	.4byte 0x33145C07
.endobj "@106"

.obj "@107", local
	.4byte 0x7E37E43C
	.4byte 0x8800759C
.endobj "@107"

.obj "@108", local
	.4byte 0x3FF00000
	.4byte 0x00000000
.endobj "@108"

.obj "@109", local
	.4byte 0x3FC55555
	.4byte 0x55555555
.endobj "@109"

.obj "@110", local
	.4byte 0xBFD4D612
	.4byte 0x03EB6F7D
.endobj "@110"

.obj "@111", local
	.4byte 0x3FC9C155
	.4byte 0x0E884455
.endobj "@111"

.obj "@112", local
	.4byte 0xBFA48228
	.4byte 0xB5688F3B
.endobj "@112"

.obj "@113", local
	.4byte 0x3F49EFE0
	.4byte 0x7501B288
.endobj "@113"

.obj "@114", local
	.4byte 0x3F023DE1
	.4byte 0x0DFDF709
.endobj "@114"

.obj "@115", local
	.4byte 0xC0033A27
	.4byte 0x1C8A2D4B
.endobj "@115"

.obj "@116", local
	.4byte 0x40002AE5
	.4byte 0x9C598AC8
.endobj "@116"

.obj "@117", local
	.4byte 0xBFE6066C
	.4byte 0x1B8D0159
.endobj "@117"

.obj "@118", local
	.4byte 0x3FB3B8C5
	.4byte 0xB12E9282
.endobj "@118"

.obj "@119", local
	.4byte 0x3FE00000
	.4byte 0x00000000
.endobj "@119"

.obj "@120", local
	.4byte 0x00000000
	.4byte 0x00000000
.endobj "@120"

.obj "@121", local
	.4byte 0x40080000
	.4byte 0x00000000
.endobj "@121"

.obj "@122", local
	.4byte 0x40000000
	.4byte 0x00000000
.endobj "@122"

.obj "@123", local
	.4byte 0x3FE921FB
	.4byte 0x54442D18
.endobj "@123"
