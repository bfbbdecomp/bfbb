.include "macros.inc"
.file "extras.c"

# 0x801ECC44 - 0x801ECD5C
.text
.balign 4

.fn strcmpi, global
/* 801ECC44 001E9D24  88 03 00 00 */	lbz r0, 0x0(r3)
/* 801ECC48 001E9D28  38 63 00 01 */	addi r3, r3, 0x1
/* 801ECC4C 001E9D2C  7C 00 07 74 */	extsb r0, r0
/* 801ECC50 001E9D30  2C 00 FF FF */	cmpwi r0, -0x1
/* 801ECC54 001E9D34  40 82 00 0C */	bne .L_801ECC60
/* 801ECC58 001E9D38  38 A0 FF FF */	li r5, -0x1
/* 801ECC5C 001E9D3C  48 00 00 14 */	b .L_801ECC70
.L_801ECC60:
/* 801ECC60 001E9D40  3C A0 80 2B */	lis r5, __lower_map@ha
/* 801ECC64 001E9D44  54 00 06 3E */	clrlwi r0, r0, 24
/* 801ECC68 001E9D48  38 A5 6E B0 */	addi r5, r5, __lower_map@l
/* 801ECC6C 001E9D4C  7C A5 00 AE */	lbzx r5, r5, r0
.L_801ECC70:
/* 801ECC70 001E9D50  88 04 00 00 */	lbz r0, 0x0(r4)
/* 801ECC74 001E9D54  7C A6 07 74 */	extsb r6, r5
/* 801ECC78 001E9D58  38 84 00 01 */	addi r4, r4, 0x1
/* 801ECC7C 001E9D5C  7C 00 07 74 */	extsb r0, r0
/* 801ECC80 001E9D60  2C 00 FF FF */	cmpwi r0, -0x1
/* 801ECC84 001E9D64  40 82 00 0C */	bne .L_801ECC90
/* 801ECC88 001E9D68  38 00 FF FF */	li r0, -0x1
/* 801ECC8C 001E9D6C  48 00 00 14 */	b .L_801ECCA0
.L_801ECC90:
/* 801ECC90 001E9D70  3C A0 80 2B */	lis r5, __lower_map@ha
/* 801ECC94 001E9D74  54 00 06 3E */	clrlwi r0, r0, 24
/* 801ECC98 001E9D78  38 A5 6E B0 */	addi r5, r5, __lower_map@l
/* 801ECC9C 001E9D7C  7C 05 00 AE */	lbzx r0, r5, r0
.L_801ECCA0:
/* 801ECCA0 001E9D80  7C 00 07 74 */	extsb r0, r0
/* 801ECCA4 001E9D84  7C 06 00 00 */	cmpw r6, r0
/* 801ECCA8 001E9D88  40 80 00 0C */	bge .L_801ECCB4
/* 801ECCAC 001E9D8C  38 60 FF FF */	li r3, -0x1
/* 801ECCB0 001E9D90  4E 80 00 20 */	blr
.L_801ECCB4:
/* 801ECCB4 001E9D94  40 81 00 0C */	ble .L_801ECCC0
/* 801ECCB8 001E9D98  38 60 00 01 */	li r3, 0x1
/* 801ECCBC 001E9D9C  4E 80 00 20 */	blr
.L_801ECCC0:
/* 801ECCC0 001E9DA0  7C C0 07 75 */	extsb. r0, r6
/* 801ECCC4 001E9DA4  40 82 FF 80 */	bne strcmpi
/* 801ECCC8 001E9DA8  38 60 00 00 */	li r3, 0x0
/* 801ECCCC 001E9DAC  4E 80 00 20 */	blr
.endfn strcmpi

.fn stricmp, global
/* 801ECCD0 001E9DB0  88 03 00 00 */	lbz r0, 0x0(r3)
/* 801ECCD4 001E9DB4  38 63 00 01 */	addi r3, r3, 0x1
/* 801ECCD8 001E9DB8  7C 00 07 74 */	extsb r0, r0
/* 801ECCDC 001E9DBC  2C 00 FF FF */	cmpwi r0, -0x1
/* 801ECCE0 001E9DC0  40 82 00 0C */	bne .L_801ECCEC
/* 801ECCE4 001E9DC4  38 A0 FF FF */	li r5, -0x1
/* 801ECCE8 001E9DC8  48 00 00 14 */	b .L_801ECCFC
.L_801ECCEC:
/* 801ECCEC 001E9DCC  3C A0 80 2B */	lis r5, __lower_map@ha
/* 801ECCF0 001E9DD0  54 00 06 3E */	clrlwi r0, r0, 24
/* 801ECCF4 001E9DD4  38 A5 6E B0 */	addi r5, r5, __lower_map@l
/* 801ECCF8 001E9DD8  7C A5 00 AE */	lbzx r5, r5, r0
.L_801ECCFC:
/* 801ECCFC 001E9DDC  88 04 00 00 */	lbz r0, 0x0(r4)
/* 801ECD00 001E9DE0  7C A6 07 74 */	extsb r6, r5
/* 801ECD04 001E9DE4  38 84 00 01 */	addi r4, r4, 0x1
/* 801ECD08 001E9DE8  7C 00 07 74 */	extsb r0, r0
/* 801ECD0C 001E9DEC  2C 00 FF FF */	cmpwi r0, -0x1
/* 801ECD10 001E9DF0  40 82 00 0C */	bne .L_801ECD1C
/* 801ECD14 001E9DF4  38 00 FF FF */	li r0, -0x1
/* 801ECD18 001E9DF8  48 00 00 14 */	b .L_801ECD2C
.L_801ECD1C:
/* 801ECD1C 001E9DFC  3C A0 80 2B */	lis r5, __lower_map@ha
/* 801ECD20 001E9E00  54 00 06 3E */	clrlwi r0, r0, 24
/* 801ECD24 001E9E04  38 A5 6E B0 */	addi r5, r5, __lower_map@l
/* 801ECD28 001E9E08  7C 05 00 AE */	lbzx r0, r5, r0
.L_801ECD2C:
/* 801ECD2C 001E9E0C  7C 00 07 74 */	extsb r0, r0
/* 801ECD30 001E9E10  7C 06 00 00 */	cmpw r6, r0
/* 801ECD34 001E9E14  40 80 00 0C */	bge .L_801ECD40
/* 801ECD38 001E9E18  38 60 FF FF */	li r3, -0x1
/* 801ECD3C 001E9E1C  4E 80 00 20 */	blr
.L_801ECD40:
/* 801ECD40 001E9E20  40 81 00 0C */	ble .L_801ECD4C
/* 801ECD44 001E9E24  38 60 00 01 */	li r3, 0x1
/* 801ECD48 001E9E28  4E 80 00 20 */	blr
.L_801ECD4C:
/* 801ECD4C 001E9E2C  7C C0 07 75 */	extsb. r0, r6
/* 801ECD50 001E9E30  40 82 FF 80 */	bne stricmp
/* 801ECD54 001E9E34  38 60 00 00 */	li r3, 0x0
/* 801ECD58 001E9E38  4E 80 00 20 */	blr
.endfn stricmp
