.include "macros.inc"
.file "s_atan.c"

# 0x801EC034 - 0x801EC24C
.text
.balign 4

.fn atan, global
/* 801EC034 001E9114  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801EC038 001E9118  3C 60 80 28 */	lis r3, ...rodata.0@ha
/* 801EC03C 001E911C  3C 00 44 10 */	lis r0, 0x4410
/* 801EC040 001E9120  D8 21 00 08 */	stfd f1, 0x8(r1)
/* 801EC044 001E9124  38 A3 A0 F8 */	addi r5, r3, ...rodata.0@l
/* 801EC048 001E9128  80 C1 00 08 */	lwz r6, 0x8(r1)
/* 801EC04C 001E912C  54 C4 00 7E */	clrlwi r4, r6, 1
/* 801EC050 001E9130  7C 04 00 00 */	cmpw r4, r0
/* 801EC054 001E9134  41 80 00 70 */	blt .L_801EC0C4
/* 801EC058 001E9138  3C 00 7F F0 */	lis r0, 0x7ff0
/* 801EC05C 001E913C  7C 04 00 00 */	cmpw r4, r0
/* 801EC060 001E9140  41 81 00 1C */	bgt .L_801EC07C
/* 801EC064 001E9144  3C 04 80 10 */	addis r0, r4, 0x8010
/* 801EC068 001E9148  28 00 00 00 */	cmplwi r0, 0x0
/* 801EC06C 001E914C  40 82 00 1C */	bne .L_801EC088
/* 801EC070 001E9150  80 01 00 0C */	lwz r0, 0xc(r1)
/* 801EC074 001E9154  2C 00 00 00 */	cmpwi r0, 0x0
/* 801EC078 001E9158  41 82 00 10 */	beq .L_801EC088
.L_801EC07C:
/* 801EC07C 001E915C  C8 01 00 08 */	lfd f0, 0x8(r1)
/* 801EC080 001E9160  FC 20 00 2A */	fadd f1, f0, f0
/* 801EC084 001E9164  48 00 01 C0 */	b .L_801EC244
.L_801EC088:
/* 801EC088 001E9168  2C 06 00 00 */	cmpwi r6, 0x0
/* 801EC08C 001E916C  40 81 00 1C */	ble .L_801EC0A8
/* 801EC090 001E9170  38 85 00 00 */	addi r4, r5, 0x0
/* 801EC094 001E9174  38 65 00 20 */	addi r3, r5, 0x20
/* 801EC098 001E9178  C8 24 00 18 */	lfd f1, 0x18(r4)
/* 801EC09C 001E917C  C8 03 00 18 */	lfd f0, 0x18(r3)
/* 801EC0A0 001E9180  FC 21 00 2A */	fadd f1, f1, f0
/* 801EC0A4 001E9184  48 00 01 A0 */	b .L_801EC244
.L_801EC0A8:
/* 801EC0A8 001E9188  38 85 00 00 */	addi r4, r5, 0x0
/* 801EC0AC 001E918C  38 65 00 20 */	addi r3, r5, 0x20
/* 801EC0B0 001E9190  C8 24 00 18 */	lfd f1, 0x18(r4)
/* 801EC0B4 001E9194  C8 03 00 18 */	lfd f0, 0x18(r3)
/* 801EC0B8 001E9198  FC 20 08 50 */	fneg f1, f1
/* 801EC0BC 001E919C  FC 21 00 28 */	fsub f1, f1, f0
/* 801EC0C0 001E91A0  48 00 01 84 */	b .L_801EC244
.L_801EC0C4:
/* 801EC0C4 001E91A4  3C 00 3F DC */	lis r0, 0x3fdc
/* 801EC0C8 001E91A8  7C 04 00 00 */	cmpw r4, r0
/* 801EC0CC 001E91AC  40 80 00 30 */	bge .L_801EC0FC
/* 801EC0D0 001E91B0  3C 00 3E 20 */	lis r0, 0x3e20
/* 801EC0D4 001E91B4  7C 04 00 00 */	cmpw r4, r0
/* 801EC0D8 001E91B8  40 80 00 1C */	bge .L_801EC0F4
/* 801EC0DC 001E91BC  C8 42 B9 38 */	lfd f2, "@116"@sda21(r2)
/* 801EC0E0 001E91C0  C8 02 B9 40 */	lfd f0, "@117"@sda21(r2)
/* 801EC0E4 001E91C4  FC 42 08 2A */	fadd f2, f2, f1
/* 801EC0E8 001E91C8  FC 02 00 40 */	fcmpo cr0, f2, f0
/* 801EC0EC 001E91CC  40 81 00 08 */	ble .L_801EC0F4
/* 801EC0F0 001E91D0  48 00 01 54 */	b .L_801EC244
.L_801EC0F4:
/* 801EC0F4 001E91D4  38 00 FF FF */	li r0, -0x1
/* 801EC0F8 001E91D8  48 00 00 A0 */	b .L_801EC198
.L_801EC0FC:
/* 801EC0FC 001E91DC  FC 60 0A 10 */	fabs f3, f1
/* 801EC100 001E91E0  3C 00 3F F3 */	lis r0, 0x3ff3
/* 801EC104 001E91E4  7C 04 00 00 */	cmpw r4, r0
/* 801EC108 001E91E8  D8 61 00 08 */	stfd f3, 0x8(r1)
/* 801EC10C 001E91EC  40 80 00 4C */	bge .L_801EC158
/* 801EC110 001E91F0  3C 00 3F E6 */	lis r0, 0x3fe6
/* 801EC114 001E91F4  7C 04 00 00 */	cmpw r4, r0
/* 801EC118 001E91F8  40 80 00 24 */	bge .L_801EC13C
/* 801EC11C 001E91FC  C8 42 B9 48 */	lfd f2, "@118"@sda21(r2)
/* 801EC120 001E9200  38 00 00 00 */	li r0, 0x0
/* 801EC124 001E9204  C8 22 B9 40 */	lfd f1, "@117"@sda21(r2)
/* 801EC128 001E9208  FC 02 18 2A */	fadd f0, f2, f3
/* 801EC12C 001E920C  FC 22 08 F8 */	fmsub f1, f2, f3, f1
/* 801EC130 001E9210  FC 01 00 24 */	fdiv f0, f1, f0
/* 801EC134 001E9214  D8 01 00 08 */	stfd f0, 0x8(r1)
/* 801EC138 001E9218  48 00 00 60 */	b .L_801EC198
.L_801EC13C:
/* 801EC13C 001E921C  C8 02 B9 40 */	lfd f0, "@117"@sda21(r2)
/* 801EC140 001E9220  38 00 00 01 */	li r0, 0x1
/* 801EC144 001E9224  FC 23 00 28 */	fsub f1, f3, f0
/* 801EC148 001E9228  FC 00 18 2A */	fadd f0, f0, f3
/* 801EC14C 001E922C  FC 01 00 24 */	fdiv f0, f1, f0
/* 801EC150 001E9230  D8 01 00 08 */	stfd f0, 0x8(r1)
/* 801EC154 001E9234  48 00 00 44 */	b .L_801EC198
.L_801EC158:
/* 801EC158 001E9238  3C 60 40 04 */	lis r3, 0x4004
/* 801EC15C 001E923C  38 03 80 00 */	addi r0, r3, -0x8000
/* 801EC160 001E9240  7C 04 00 00 */	cmpw r4, r0
/* 801EC164 001E9244  40 80 00 24 */	bge .L_801EC188
/* 801EC168 001E9248  C8 42 B9 50 */	lfd f2, "@119"@sda21(r2)
/* 801EC16C 001E924C  38 00 00 02 */	li r0, 0x2
/* 801EC170 001E9250  C8 02 B9 40 */	lfd f0, "@117"@sda21(r2)
/* 801EC174 001E9254  FC 23 10 28 */	fsub f1, f3, f2
/* 801EC178 001E9258  FC 02 00 FA */	fmadd f0, f2, f3, f0
/* 801EC17C 001E925C  FC 01 00 24 */	fdiv f0, f1, f0
/* 801EC180 001E9260  D8 01 00 08 */	stfd f0, 0x8(r1)
/* 801EC184 001E9264  48 00 00 14 */	b .L_801EC198
.L_801EC188:
/* 801EC188 001E9268  C8 02 B9 58 */	lfd f0, "@120"@sda21(r2)
/* 801EC18C 001E926C  38 00 00 03 */	li r0, 0x3
/* 801EC190 001E9270  FC 00 18 24 */	fdiv f0, f0, f3
/* 801EC194 001E9274  D8 01 00 08 */	stfd f0, 0x8(r1)
.L_801EC198:
/* 801EC198 001E9278  C9 21 00 08 */	lfd f9, 0x8(r1)
/* 801EC19C 001E927C  38 65 00 40 */	addi r3, r5, 0x40
/* 801EC1A0 001E9280  C8 83 00 50 */	lfd f4, 0x50(r3)
/* 801EC1A4 001E9284  2C 00 00 00 */	cmpwi r0, 0x0
/* 801EC1A8 001E9288  FD 69 02 72 */	fmul f11, f9, f9
/* 801EC1AC 001E928C  C8 23 00 40 */	lfd f1, 0x40(r3)
/* 801EC1B0 001E9290  C8 E3 00 30 */	lfd f7, 0x30(r3)
/* 801EC1B4 001E9294  C8 63 00 48 */	lfd f3, 0x48(r3)
/* 801EC1B8 001E9298  C8 03 00 38 */	lfd f0, 0x38(r3)
/* 801EC1BC 001E929C  FD 4B 02 F2 */	fmul f10, f11, f11
/* 801EC1C0 001E92A0  C8 C3 00 20 */	lfd f6, 0x20(r3)
/* 801EC1C4 001E92A4  C8 43 00 28 */	lfd f2, 0x28(r3)
/* 801EC1C8 001E92A8  C8 A3 00 10 */	lfd f5, 0x10(r3)
/* 801EC1CC 001E92AC  FD 0A 09 3A */	fmadd f8, f10, f4, f1
/* 801EC1D0 001E92B0  C8 23 00 18 */	lfd f1, 0x18(r3)
/* 801EC1D4 001E92B4  C8 85 00 40 */	lfd f4, 0x40(r5)
/* 801EC1D8 001E92B8  FC 6A 00 FA */	fmadd f3, f10, f3, f0
/* 801EC1DC 001E92BC  C8 03 00 08 */	lfd f0, 0x8(r3)
/* 801EC1E0 001E92C0  FC EA 3A 3A */	fmadd f7, f10, f8, f7
/* 801EC1E4 001E92C4  FC 4A 10 FA */	fmadd f2, f10, f3, f2
/* 801EC1E8 001E92C8  FC 6A 31 FA */	fmadd f3, f10, f7, f6
/* 801EC1EC 001E92CC  FC 2A 08 BA */	fmadd f1, f10, f2, f1
/* 801EC1F0 001E92D0  FC 4A 28 FA */	fmadd f2, f10, f3, f5
/* 801EC1F4 001E92D4  FC 0A 00 7A */	fmadd f0, f10, f1, f0
/* 801EC1F8 001E92D8  FC 2A 20 BA */	fmadd f1, f10, f2, f4
/* 801EC1FC 001E92DC  FC 4A 00 32 */	fmul f2, f10, f0
/* 801EC200 001E92E0  FC 0B 00 72 */	fmul f0, f11, f1
/* 801EC204 001E92E4  40 80 00 10 */	bge .L_801EC214
/* 801EC208 001E92E8  FC 00 10 2A */	fadd f0, f0, f2
/* 801EC20C 001E92EC  FC 29 48 3C */	fnmsub f1, f9, f0, f9
/* 801EC210 001E92F0  48 00 00 34 */	b .L_801EC244
.L_801EC214:
/* 801EC214 001E92F4  54 00 18 38 */	slwi r0, r0, 3
/* 801EC218 001E92F8  38 65 00 20 */	addi r3, r5, 0x20
/* 801EC21C 001E92FC  FC 20 10 2A */	fadd f1, f0, f2
/* 801EC220 001E9300  7C 03 04 AE */	lfdx f0, r3, r0
/* 801EC224 001E9304  38 65 00 00 */	addi r3, r5, 0x0
/* 801EC228 001E9308  2C 06 00 00 */	cmpwi r6, 0x0
/* 801EC22C 001E930C  7C 43 04 AE */	lfdx f2, r3, r0
/* 801EC230 001E9310  FC 09 00 78 */	fmsub f0, f9, f1, f0
/* 801EC234 001E9314  FC 00 48 28 */	fsub f0, f0, f9
/* 801EC238 001E9318  FC 22 00 28 */	fsub f1, f2, f0
/* 801EC23C 001E931C  40 80 00 08 */	bge .L_801EC244
/* 801EC240 001E9320  FC 20 08 50 */	fneg f1, f1
.L_801EC244:
/* 801EC244 001E9324  38 21 00 10 */	addi r1, r1, 0x10
/* 801EC248 001E9328  4E 80 00 20 */	blr
.endfn atan

# 0x8027A0F8 - 0x8027A190
.rodata
.balign 8

.obj atanhi, local
.sym ...rodata.0, local
	.4byte 0x3FDDAC67
	.4byte 0x0561BB4F
	.4byte 0x3FE921FB
	.4byte 0x54442D18
	.4byte 0x3FEF730B
	.4byte 0xD281F69B
	.4byte 0x3FF921FB
	.4byte 0x54442D18
.endobj atanhi

.obj atanlo, local
	.4byte 0x3C7A2B7F
	.4byte 0x222F65E2
	.4byte 0x3C81A626
	.4byte 0x33145C07
	.4byte 0x3C700788
	.4byte 0x7AF0CBBD
	.4byte 0x3C91A626
	.4byte 0x33145C07
.endobj atanlo

.obj aT, local
	.4byte 0x3FD55555
	.4byte 0x5555550D
	.4byte 0xBFC99999
	.4byte 0x9998EBC4
	.4byte 0x3FC24924
	.4byte 0x920083FF
	.4byte 0xBFBC71C6
	.4byte 0xFE231671
	.4byte 0x3FB745CD
	.4byte 0xC54C206E
	.4byte 0xBFB3B0F2
	.4byte 0xAF749A6D
	.4byte 0x3FB10D66
	.4byte 0xA0D03D51
	.4byte 0xBFADDE2D
	.4byte 0x52DEFD9A
	.4byte 0x3FA97B4B
	.4byte 0x24760DEB
	.4byte 0xBFA2B444
	.4byte 0x2C6A6C2F
	.4byte 0x3F90AD3A
	.4byte 0xE322DA11
.endobj aT

# 0x803D02B8 - 0x803D02E0
.section .sdata2, "a"
.balign 8

.obj "@116", local
	.4byte 0x7E37E43C
	.4byte 0x8800759C
.endobj "@116"

.obj "@117", local
	.4byte 0x3FF00000
	.4byte 0x00000000
.endobj "@117"

.obj "@118", local
	.4byte 0x40000000
	.4byte 0x00000000
.endobj "@118"

.obj "@119", local
	.4byte 0x3FF80000
	.4byte 0x00000000
.endobj "@119"

.obj "@120", local
	.4byte 0xBFF00000
	.4byte 0x00000000
.endobj "@120"