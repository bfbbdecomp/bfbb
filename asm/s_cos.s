.include "macros.inc"
.file "s_cos.c"

# 0x801EC3B8 - 0x801EC48C
.text
.balign 4

.fn cos, global
/* 801EC3B8 001E9498  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 801EC3BC 001E949C  7C 08 02 A6 */	mflr r0
/* 801EC3C0 001E94A0  3C 60 3F E9 */	lis r3, 0x3fe9
/* 801EC3C4 001E94A4  D8 21 00 08 */	stfd f1, 0x8(r1)
/* 801EC3C8 001E94A8  90 01 00 24 */	stw r0, 0x24(r1)
/* 801EC3CC 001E94AC  38 03 21 FB */	addi r0, r3, 0x21fb
/* 801EC3D0 001E94B0  80 61 00 08 */	lwz r3, 0x8(r1)
/* 801EC3D4 001E94B4  54 63 00 7E */	clrlwi r3, r3, 1
/* 801EC3D8 001E94B8  7C 03 00 00 */	cmpw r3, r0
/* 801EC3DC 001E94BC  41 81 00 10 */	bgt .L_801EC3EC
/* 801EC3E0 001E94C0  C8 42 B9 70 */	lfd f2, "@68"@sda21(r2)
/* 801EC3E4 001E94C4  4B FF EA 55 */	bl __kernel_cos
/* 801EC3E8 001E94C8  48 00 00 94 */	b .L_801EC47C
.L_801EC3EC:
/* 801EC3EC 001E94CC  3C 00 7F F0 */	lis r0, 0x7ff0
/* 801EC3F0 001E94D0  7C 03 00 00 */	cmpw r3, r0
/* 801EC3F4 001E94D4  41 80 00 0C */	blt .L_801EC400
/* 801EC3F8 001E94D8  FC 21 08 28 */	fsub f1, f1, f1
/* 801EC3FC 001E94DC  48 00 00 80 */	b .L_801EC47C
.L_801EC400:
/* 801EC400 001E94E0  38 61 00 10 */	addi r3, r1, 0x10
/* 801EC404 001E94E4  4B FF E6 95 */	bl __ieee754_rem_pio2
/* 801EC408 001E94E8  54 60 07 BE */	clrlwi r0, r3, 30
/* 801EC40C 001E94EC  2C 00 00 01 */	cmpwi r0, 0x1
/* 801EC410 001E94F0  41 82 00 30 */	beq .L_801EC440
/* 801EC414 001E94F4  40 80 00 10 */	bge .L_801EC424
/* 801EC418 001E94F8  2C 00 00 00 */	cmpwi r0, 0x0
/* 801EC41C 001E94FC  40 80 00 14 */	bge .L_801EC430
/* 801EC420 001E9500  48 00 00 4C */	b .L_801EC46C
.L_801EC424:
/* 801EC424 001E9504  2C 00 00 03 */	cmpwi r0, 0x3
/* 801EC428 001E9508  40 80 00 44 */	bge .L_801EC46C
/* 801EC42C 001E950C  48 00 00 2C */	b .L_801EC458
.L_801EC430:
/* 801EC430 001E9510  C8 21 00 10 */	lfd f1, 0x10(r1)
/* 801EC434 001E9514  C8 41 00 18 */	lfd f2, 0x18(r1)
/* 801EC438 001E9518  4B FF EA 01 */	bl __kernel_cos
/* 801EC43C 001E951C  48 00 00 40 */	b .L_801EC47C
.L_801EC440:
/* 801EC440 001E9520  C8 21 00 10 */	lfd f1, 0x10(r1)
/* 801EC444 001E9524  38 60 00 01 */	li r3, 0x1
/* 801EC448 001E9528  C8 41 00 18 */	lfd f2, 0x18(r1)
/* 801EC44C 001E952C  4B FF F9 35 */	bl __kernel_sin
/* 801EC450 001E9530  FC 20 08 50 */	fneg f1, f1
/* 801EC454 001E9534  48 00 00 28 */	b .L_801EC47C
.L_801EC458:
/* 801EC458 001E9538  C8 21 00 10 */	lfd f1, 0x10(r1)
/* 801EC45C 001E953C  C8 41 00 18 */	lfd f2, 0x18(r1)
/* 801EC460 001E9540  4B FF E9 D9 */	bl __kernel_cos
/* 801EC464 001E9544  FC 20 08 50 */	fneg f1, f1
/* 801EC468 001E9548  48 00 00 14 */	b .L_801EC47C
.L_801EC46C:
/* 801EC46C 001E954C  C8 21 00 10 */	lfd f1, 0x10(r1)
/* 801EC470 001E9550  38 60 00 01 */	li r3, 0x1
/* 801EC474 001E9554  C8 41 00 18 */	lfd f2, 0x18(r1)
/* 801EC478 001E9558  4B FF F9 09 */	bl __kernel_sin
.L_801EC47C:
/* 801EC47C 001E955C  80 01 00 24 */	lwz r0, 0x24(r1)
/* 801EC480 001E9560  7C 08 03 A6 */	mtlr r0
/* 801EC484 001E9564  38 21 00 20 */	addi r1, r1, 0x20
/* 801EC488 001E9568  4E 80 00 20 */	blr
.endfn cos

# 0x803D02F0 - 0x803D02F8
.section .sdata2, "a"
.balign 8

.obj "@68", local
	.4byte 0x00000000
	.4byte 0x00000000
.endobj "@68"
