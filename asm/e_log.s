.include "macros.inc"
.file "e_log.c"

# 0x801E9F68 - 0x801EA1E4
.text
.balign 4

.fn __ieee754_log, global
/* 801E9F68 001E7048  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 801E9F6C 001E704C  3C 00 00 10 */	lis r0, 0x10
/* 801E9F70 001E7050  39 00 00 00 */	li r8, 0x0
/* 801E9F74 001E7054  D8 21 00 08 */	stfd f1, 0x8(r1)
/* 801E9F78 001E7058  80 61 00 08 */	lwz r3, 0x8(r1)
/* 801E9F7C 001E705C  80 81 00 0C */	lwz r4, 0xc(r1)
/* 801E9F80 001E7060  7C 03 00 00 */	cmpw r3, r0
/* 801E9F84 001E7064  40 80 00 54 */	bge .L_801E9FD8
/* 801E9F88 001E7068  54 60 00 7E */	clrlwi r0, r3, 1
/* 801E9F8C 001E706C  7C 00 23 79 */	or. r0, r0, r4
/* 801E9F90 001E7070  40 82 00 14 */	bne .L_801E9FA4
/* 801E9F94 001E7074  C8 22 B6 58 */	lfd f1, "@111"@sda21(r2)
/* 801E9F98 001E7078  C8 0D 9D A8 */	lfd f0, zero@sda21(r13)
/* 801E9F9C 001E707C  FC 21 00 24 */	fdiv f1, f1, f0
/* 801E9FA0 001E7080  48 00 02 3C */	b .L_801EA1DC
.L_801E9FA4:
/* 801E9FA4 001E7084  2C 03 00 00 */	cmpwi r3, 0x0
/* 801E9FA8 001E7088  40 80 00 1C */	bge .L_801E9FC4
/* 801E9FAC 001E708C  FC 21 08 28 */	fsub f1, f1, f1
/* 801E9FB0 001E7090  C8 0D 9D A8 */	lfd f0, zero@sda21(r13)
/* 801E9FB4 001E7094  38 00 00 21 */	li r0, 0x21
/* 801E9FB8 001E7098  90 0D 9D 98 */	stw r0, errno@sda21(r13)
/* 801E9FBC 001E709C  FC 21 00 24 */	fdiv f1, f1, f0
/* 801E9FC0 001E70A0  48 00 02 1C */	b .L_801EA1DC
.L_801E9FC4:
/* 801E9FC4 001E70A4  C8 02 B6 60 */	lfd f0, "@112"@sda21(r2)
/* 801E9FC8 001E70A8  39 00 FF CA */	li r8, -0x36
/* 801E9FCC 001E70AC  FC 01 00 32 */	fmul f0, f1, f0
/* 801E9FD0 001E70B0  D8 01 00 08 */	stfd f0, 0x8(r1)
/* 801E9FD4 001E70B4  80 61 00 08 */	lwz r3, 0x8(r1)
.L_801E9FD8:
/* 801E9FD8 001E70B8  3C 00 7F F0 */	lis r0, 0x7ff0
/* 801E9FDC 001E70BC  7C 03 00 00 */	cmpw r3, r0
/* 801E9FE0 001E70C0  41 80 00 10 */	blt .L_801E9FF0
/* 801E9FE4 001E70C4  C8 01 00 08 */	lfd f0, 0x8(r1)
/* 801E9FE8 001E70C8  FC 20 00 2A */	fadd f1, f0, f0
/* 801E9FEC 001E70CC  48 00 01 F0 */	b .L_801EA1DC
.L_801E9FF0:
/* 801E9FF0 001E70D0  54 66 03 3E */	clrlwi r6, r3, 12
/* 801E9FF4 001E70D4  7C 64 A6 70 */	srawi r4, r3, 20
/* 801E9FF8 001E70D8  3C 66 00 09 */	addis r3, r6, 0x9
/* 801E9FFC 001E70DC  C8 02 B6 68 */	lfd f0, "@113"@sda21(r2)
/* 801EA000 001E70E0  38 A3 5F 64 */	addi r5, r3, 0x5f64
/* 801EA004 001E70E4  7D 04 42 14 */	add r8, r4, r8
/* 801EA008 001E70E8  54 A3 02 D6 */	rlwinm r3, r5, 0, 11, 11
/* 801EA00C 001E70EC  38 06 00 02 */	addi r0, r6, 0x2
/* 801EA010 001E70F0  6C 63 3F F0 */	xoris r3, r3, 0x3ff0
/* 801EA014 001E70F4  39 08 FC 01 */	addi r8, r8, -0x3ff
/* 801EA018 001E70F8  7C C4 1B 78 */	or r4, r6, r3
/* 801EA01C 001E70FC  54 00 03 3E */	clrlwi r0, r0, 12
/* 801EA020 001E7100  90 81 00 08 */	stw r4, 0x8(r1)
/* 801EA024 001E7104  54 A3 67 FE */	extrwi r3, r5, 1, 11
/* 801EA028 001E7108  2C 00 00 03 */	cmpwi r0, 0x3
/* 801EA02C 001E710C  C8 21 00 08 */	lfd f1, 0x8(r1)
/* 801EA030 001E7110  7D 08 1A 14 */	add r8, r8, r3
/* 801EA034 001E7114  FC 01 00 28 */	fsub f0, f1, f0
/* 801EA038 001E7118  40 80 00 A4 */	bge .L_801EA0DC
/* 801EA03C 001E711C  C8 2D 9D A8 */	lfd f1, zero@sda21(r13)
/* 801EA040 001E7120  FC 00 08 00 */	fcmpu cr0, f0, f1
/* 801EA044 001E7124  40 82 00 40 */	bne .L_801EA084
/* 801EA048 001E7128  2C 08 00 00 */	cmpwi r8, 0x0
/* 801EA04C 001E712C  40 82 00 08 */	bne .L_801EA054
/* 801EA050 001E7130  48 00 01 8C */	b .L_801EA1DC
.L_801EA054:
/* 801EA054 001E7134  6D 03 80 00 */	xoris r3, r8, 0x8000
/* 801EA058 001E7138  3C 00 43 30 */	lis r0, 0x4330
/* 801EA05C 001E713C  90 61 00 14 */	stw r3, 0x14(r1)
/* 801EA060 001E7140  C8 62 B6 D0 */	lfd f3, "@127"@sda21(r2)
/* 801EA064 001E7144  90 01 00 10 */	stw r0, 0x10(r1)
/* 801EA068 001E7148  C8 02 B6 78 */	lfd f0, "@115"@sda21(r2)
/* 801EA06C 001E714C  C8 41 00 10 */	lfd f2, 0x10(r1)
/* 801EA070 001E7150  C8 22 B6 70 */	lfd f1, "@114"@sda21(r2)
/* 801EA074 001E7154  FC 42 18 28 */	fsub f2, f2, f3
/* 801EA078 001E7158  FC 00 00 B2 */	fmul f0, f0, f2
/* 801EA07C 001E715C  FC 21 00 BA */	fmadd f1, f1, f2, f0
/* 801EA080 001E7160  48 00 01 5C */	b .L_801EA1DC
.L_801EA084:
/* 801EA084 001E7164  C8 62 B6 88 */	lfd f3, "@117"@sda21(r2)
/* 801EA088 001E7168  FC 20 00 32 */	fmul f1, f0, f0
/* 801EA08C 001E716C  C8 42 B6 80 */	lfd f2, "@116"@sda21(r2)
/* 801EA090 001E7170  2C 08 00 00 */	cmpwi r8, 0x0
/* 801EA094 001E7174  FC 43 10 3C */	fnmsub f2, f3, f0, f2
/* 801EA098 001E7178  FC A2 00 72 */	fmul f5, f2, f1
/* 801EA09C 001E717C  40 82 00 0C */	bne .L_801EA0A8
/* 801EA0A0 001E7180  FC 20 28 28 */	fsub f1, f0, f5
/* 801EA0A4 001E7184  48 00 01 38 */	b .L_801EA1DC
.L_801EA0A8:
/* 801EA0A8 001E7188  6D 03 80 00 */	xoris r3, r8, 0x8000
/* 801EA0AC 001E718C  3C 00 43 30 */	lis r0, 0x4330
/* 801EA0B0 001E7190  90 61 00 14 */	stw r3, 0x14(r1)
/* 801EA0B4 001E7194  C8 82 B6 D0 */	lfd f4, "@127"@sda21(r2)
/* 801EA0B8 001E7198  90 01 00 10 */	stw r0, 0x10(r1)
/* 801EA0BC 001E719C  C8 22 B6 78 */	lfd f1, "@115"@sda21(r2)
/* 801EA0C0 001E71A0  C8 61 00 10 */	lfd f3, 0x10(r1)
/* 801EA0C4 001E71A4  C8 42 B6 70 */	lfd f2, "@114"@sda21(r2)
/* 801EA0C8 001E71A8  FC 63 20 28 */	fsub f3, f3, f4
/* 801EA0CC 001E71AC  FC 21 28 FC */	fnmsub f1, f1, f3, f5
/* 801EA0D0 001E71B0  FC 01 00 28 */	fsub f0, f1, f0
/* 801EA0D4 001E71B4  FC 22 00 F8 */	fmsub f1, f2, f3, f0
/* 801EA0D8 001E71B8  48 00 01 04 */	b .L_801EA1DC
.L_801EA0DC:
/* 801EA0DC 001E71BC  C8 22 B6 90 */	lfd f1, "@118"@sda21(r2)
/* 801EA0E0 001E71C0  6D 05 80 00 */	xoris r5, r8, 0x8000
/* 801EA0E4 001E71C4  3C 80 43 30 */	lis r4, 0x4330
/* 801EA0E8 001E71C8  3C 60 00 07 */	lis r3, 0x7
/* 801EA0EC 001E71CC  FC 21 00 2A */	fadd f1, f1, f0
/* 801EA0F0 001E71D0  3C E6 FF FA */	addis r7, r6, 0xfffa
/* 801EA0F4 001E71D4  38 03 B8 51 */	addi r0, r3, -0x47af
/* 801EA0F8 001E71D8  C9 02 B6 B0 */	lfd f8, "@122"@sda21(r2)
/* 801EA0FC 001E71DC  C8 E2 B6 A8 */	lfd f7, "@121"@sda21(r2)
/* 801EA100 001E71E0  7C 06 00 50 */	subf r0, r6, r0
/* 801EA104 001E71E4  FC 20 08 24 */	fdiv f1, f0, f1
/* 801EA108 001E71E8  38 E7 EB 86 */	addi r7, r7, -0x147a
/* 801EA10C 001E71EC  C8 C2 B6 A0 */	lfd f6, "@120"@sda21(r2)
/* 801EA110 001E71F0  7C E7 03 79 */	or. r7, r7, r0
/* 801EA114 001E71F4  C8 82 B6 C8 */	lfd f4, "@125"@sda21(r2)
/* 801EA118 001E71F8  C8 62 B6 C0 */	lfd f3, "@124"@sda21(r2)
/* 801EA11C 001E71FC  FD 61 00 72 */	fmul f11, f1, f1
/* 801EA120 001E7200  C8 A2 B6 98 */	lfd f5, "@119"@sda21(r2)
/* 801EA124 001E7204  C8 42 B6 B8 */	lfd f2, "@123"@sda21(r2)
/* 801EA128 001E7208  90 A1 00 14 */	stw r5, 0x14(r1)
/* 801EA12C 001E720C  C9 42 B6 D0 */	lfd f10, "@127"@sda21(r2)
/* 801EA130 001E7210  FD 8B 02 F2 */	fmul f12, f11, f11
/* 801EA134 001E7214  90 81 00 10 */	stw r4, 0x10(r1)
/* 801EA138 001E7218  C9 21 00 10 */	lfd f9, 0x10(r1)
/* 801EA13C 001E721C  FC E8 3B 3A */	fmadd f7, f8, f12, f7
/* 801EA140 001E7220  FC 64 1B 3A */	fmadd f3, f4, f12, f3
/* 801EA144 001E7224  FC 8C 31 FA */	fmadd f4, f12, f7, f6
/* 801EA148 001E7228  FC 4C 10 FA */	fmadd f2, f12, f3, f2
/* 801EA14C 001E722C  FC 6C 29 3A */	fmadd f3, f12, f4, f5
/* 801EA150 001E7230  FC 4C 00 B2 */	fmul f2, f12, f2
/* 801EA154 001E7234  FC 6B 00 F2 */	fmul f3, f11, f3
/* 801EA158 001E7238  FC A9 50 28 */	fsub f5, f9, f10
/* 801EA15C 001E723C  FC 63 10 2A */	fadd f3, f3, f2
/* 801EA160 001E7240  40 81 00 4C */	ble .L_801EA1AC
/* 801EA164 001E7244  C8 42 B6 80 */	lfd f2, "@116"@sda21(r2)
/* 801EA168 001E7248  2C 08 00 00 */	cmpwi r8, 0x0
/* 801EA16C 001E724C  FC 42 00 32 */	fmul f2, f2, f0
/* 801EA170 001E7250  FC C2 00 32 */	fmul f6, f2, f0
/* 801EA174 001E7254  40 82 00 14 */	bne .L_801EA188
/* 801EA178 001E7258  FC 46 18 2A */	fadd f2, f6, f3
/* 801EA17C 001E725C  FC 21 30 BC */	fnmsub f1, f1, f2, f6
/* 801EA180 001E7260  FC 20 08 28 */	fsub f1, f0, f1
/* 801EA184 001E7264  48 00 00 58 */	b .L_801EA1DC
.L_801EA188:
/* 801EA188 001E7268  C8 42 B6 78 */	lfd f2, "@115"@sda21(r2)
/* 801EA18C 001E726C  FC 66 18 2A */	fadd f3, f6, f3
/* 801EA190 001E7270  C8 82 B6 70 */	lfd f4, "@114"@sda21(r2)
/* 801EA194 001E7274  FC 42 01 72 */	fmul f2, f2, f5
/* 801EA198 001E7278  FC 21 10 FA */	fmadd f1, f1, f3, f2
/* 801EA19C 001E727C  FC 26 08 28 */	fsub f1, f6, f1
/* 801EA1A0 001E7280  FC 01 00 28 */	fsub f0, f1, f0
/* 801EA1A4 001E7284  FC 24 01 78 */	fmsub f1, f4, f5, f0
/* 801EA1A8 001E7288  48 00 00 34 */	b .L_801EA1DC
.L_801EA1AC:
/* 801EA1AC 001E728C  2C 08 00 00 */	cmpwi r8, 0x0
/* 801EA1B0 001E7290  40 82 00 10 */	bne .L_801EA1C0
/* 801EA1B4 001E7294  FC 40 18 28 */	fsub f2, f0, f3
/* 801EA1B8 001E7298  FC 21 00 BC */	fnmsub f1, f1, f2, f0
/* 801EA1BC 001E729C  48 00 00 20 */	b .L_801EA1DC
.L_801EA1C0:
/* 801EA1C0 001E72A0  C8 42 B6 78 */	lfd f2, "@115"@sda21(r2)
/* 801EA1C4 001E72A4  FC 60 18 28 */	fsub f3, f0, f3
/* 801EA1C8 001E72A8  C8 82 B6 70 */	lfd f4, "@114"@sda21(r2)
/* 801EA1CC 001E72AC  FC 42 01 72 */	fmul f2, f2, f5
/* 801EA1D0 001E72B0  FC 21 10 F8 */	fmsub f1, f1, f3, f2
/* 801EA1D4 001E72B4  FC 01 00 28 */	fsub f0, f1, f0
/* 801EA1D8 001E72B8  FC 24 01 78 */	fmsub f1, f4, f5, f0
.L_801EA1DC:
/* 801EA1DC 001E72BC  38 21 00 20 */	addi r1, r1, 0x20
/* 801EA1E0 001E72C0  4E 80 00 20 */	blr
.endfn __ieee754_log

# 0x803CC6A8 - 0x803CC6B0
.section .sbss, "wa", @nobits
.balign 8

.obj zero, local
	.skip 0x8
.endobj zero

# 0x803CFFD8 - 0x803D0058
.section .sdata2, "a"
.balign 8

.obj "@111", local
	.4byte 0xC3500000
	.4byte 0x00000000
.endobj "@111"

.obj "@112", local
	.4byte 0x43500000
	.4byte 0x00000000
.endobj "@112"

.obj "@113", local
	.4byte 0x3FF00000
	.4byte 0x00000000
.endobj "@113"

.obj "@114", local
	.4byte 0x3FE62E42
	.4byte 0xFEE00000
.endobj "@114"

.obj "@115", local
	.4byte 0x3DEA39EF
	.4byte 0x35793C76
.endobj "@115"

.obj "@116", local
	.4byte 0x3FE00000
	.4byte 0x00000000
.endobj "@116"

.obj "@117", local
	.4byte 0x3FD55555
	.4byte 0x55555555
.endobj "@117"

.obj "@118", local
	.4byte 0x40000000
	.4byte 0x00000000
.endobj "@118"

.obj "@119", local
	.4byte 0x3FE55555
	.4byte 0x55555593
.endobj "@119"

.obj "@120", local
	.4byte 0x3FD24924
	.4byte 0x94229359
.endobj "@120"

.obj "@121", local
	.4byte 0x3FC74664
	.4byte 0x96CB03DE
.endobj "@121"

.obj "@122", local
	.4byte 0x3FC2F112
	.4byte 0xDF3E5244
.endobj "@122"

.obj "@123", local
	.4byte 0x3FD99999
	.4byte 0x9997FA04
.endobj "@123"

.obj "@124", local
	.4byte 0x3FCC71C5
	.4byte 0x1D8E78AF
.endobj "@124"

.obj "@125", local
	.4byte 0x3FC39A09
	.4byte 0xD078C69F
.endobj "@125"

.obj "@127", local
	.4byte 0x43300000
	.4byte 0x80000000
.endobj "@127"