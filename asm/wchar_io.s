.include "macros.inc"
.file "wchar_io.c"

# 0x801E917C - 0x801E9204
.text
.balign 4

.fn fwide, global
/* 801E917C 001E625C  28 03 00 00 */	cmplwi r3, 0x0
/* 801E9180 001E6260  41 82 00 10 */	beq .L_801E9190
/* 801E9184 001E6264  A0 03 00 04 */	lhz r0, 0x4(r3)
/* 801E9188 001E6268  54 00 D7 7F */	extrwi. r0, r0, 3, 23
/* 801E918C 001E626C  40 82 00 0C */	bne .L_801E9198
.L_801E9190:
/* 801E9190 001E6270  38 60 00 00 */	li r3, 0x0
/* 801E9194 001E6274  4E 80 00 20 */	blr
.L_801E9198:
/* 801E9198 001E6278  88 A3 00 05 */	lbz r5, 0x5(r3)
/* 801E919C 001E627C  54 A0 E7 BE */	extrwi r0, r5, 2, 26
/* 801E91A0 001E6280  2C 00 00 01 */	cmpwi r0, 0x1
/* 801E91A4 001E6284  41 82 00 58 */	beq .L_801E91FC
/* 801E91A8 001E6288  40 80 00 10 */	bge .L_801E91B8
/* 801E91AC 001E628C  2C 00 00 00 */	cmpwi r0, 0x0
/* 801E91B0 001E6290  40 80 00 14 */	bge .L_801E91C4
/* 801E91B4 001E6294  4E 80 00 20 */	blr
.L_801E91B8:
/* 801E91B8 001E6298  2C 00 00 03 */	cmpwi r0, 0x3
/* 801E91BC 001E629C  4C 80 00 20 */	bgelr
/* 801E91C0 001E62A0  48 00 00 34 */	b .L_801E91F4
.L_801E91C4:
/* 801E91C4 001E62A4  2C 04 00 00 */	cmpwi r4, 0x0
/* 801E91C8 001E62A8  40 81 00 14 */	ble .L_801E91DC
/* 801E91CC 001E62AC  38 00 00 02 */	li r0, 0x2
/* 801E91D0 001E62B0  50 05 26 B6 */	rlwimi r5, r0, 4, 26, 27
/* 801E91D4 001E62B4  98 A3 00 05 */	stb r5, 0x5(r3)
/* 801E91D8 001E62B8  48 00 00 14 */	b .L_801E91EC
.L_801E91DC:
/* 801E91DC 001E62BC  40 80 00 10 */	bge .L_801E91EC
/* 801E91E0 001E62C0  38 00 00 01 */	li r0, 0x1
/* 801E91E4 001E62C4  50 05 26 B6 */	rlwimi r5, r0, 4, 26, 27
/* 801E91E8 001E62C8  98 A3 00 05 */	stb r5, 0x5(r3)
.L_801E91EC:
/* 801E91EC 001E62CC  7C 83 23 78 */	mr r3, r4
/* 801E91F0 001E62D0  4E 80 00 20 */	blr
.L_801E91F4:
/* 801E91F4 001E62D4  38 60 00 01 */	li r3, 0x1
/* 801E91F8 001E62D8  4E 80 00 20 */	blr
.L_801E91FC:
/* 801E91FC 001E62DC  38 60 FF FF */	li r3, -0x1
/* 801E9200 001E62E0  4E 80 00 20 */	blr
.endfn fwide
