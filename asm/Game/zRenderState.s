.include "macros.inc"
.file "zRenderState.cpp"

# 0x800AC9E8 - 0x800ACDE0
.text
.balign 4

# zRenderStateInit()
.fn zRenderStateInit__Fv, global
/* 800AC9E8 000A9AC8  38 00 00 00 */	li r0, 0x0
/* 800AC9EC 000A9ACC  90 0D 90 78 */	stw r0, sRS@sda21(r13)
/* 800AC9F0 000A9AD0  4E 80 00 20 */	blr
.endfn zRenderStateInit__Fv

# zRenderStateCurrent()
.fn zRenderStateCurrent__Fv, global
/* 800AC9F4 000A9AD4  80 6D 90 78 */	lwz r3, sRS@sda21(r13)
/* 800AC9F8 000A9AD8  4E 80 00 20 */	blr
.endfn zRenderStateCurrent__Fv

# zRenderState(_SDRenderState)
.fn zRenderState__F14_SDRenderState, global
/* 800AC9FC 000A9ADC  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 800ACA00 000A9AE0  7C 08 02 A6 */	mflr r0
/* 800ACA04 000A9AE4  90 01 00 14 */	stw r0, 0x14(r1)
/* 800ACA08 000A9AE8  93 E1 00 0C */	stw r31, 0xc(r1)
/* 800ACA0C 000A9AEC  7C 7F 1B 78 */	mr r31, r3
/* 800ACA10 000A9AF0  80 0D 90 78 */	lwz r0, sRS@sda21(r13)
/* 800ACA14 000A9AF4  7C 1F 00 00 */	cmpw r31, r0
/* 800ACA18 000A9AF8  41 82 03 B4 */	beq .L_800ACDCC
/* 800ACA1C 000A9AFC  38 60 00 09 */	li r3, 0x9
/* 800ACA20 000A9B00  38 80 00 02 */	li r4, 0x2
/* 800ACA24 000A9B04  48 18 2D B9 */	bl RwRenderStateSet
/* 800ACA28 000A9B08  48 01 42 2D */	bl iCameraSetFogRenderStates__Fv
/* 800ACA2C 000A9B0C  38 60 00 0C */	li r3, 0xc
/* 800ACA30 000A9B10  38 80 00 01 */	li r4, 0x1
/* 800ACA34 000A9B14  48 18 2D A9 */	bl RwRenderStateSet
/* 800ACA38 000A9B18  38 60 00 14 */	li r3, 0x14
/* 800ACA3C 000A9B1C  38 80 00 01 */	li r4, 0x1
/* 800ACA40 000A9B20  48 18 2D 9D */	bl RwRenderStateSet
/* 800ACA44 000A9B24  38 60 00 02 */	li r3, 0x2
/* 800ACA48 000A9B28  38 80 00 01 */	li r4, 0x1
/* 800ACA4C 000A9B2C  48 18 2D 91 */	bl RwRenderStateSet
/* 800ACA50 000A9B30  38 60 00 0A */	li r3, 0xa
/* 800ACA54 000A9B34  38 80 00 05 */	li r4, 0x5
/* 800ACA58 000A9B38  48 18 2D 85 */	bl RwRenderStateSet
/* 800ACA5C 000A9B3C  38 60 00 0B */	li r3, 0xb
/* 800ACA60 000A9B40  38 80 00 06 */	li r4, 0x6
/* 800ACA64 000A9B44  48 18 2D 79 */	bl RwRenderStateSet
/* 800ACA68 000A9B48  38 60 00 07 */	li r3, 0x7
/* 800ACA6C 000A9B4C  38 80 00 02 */	li r4, 0x2
/* 800ACA70 000A9B50  48 18 2D 6D */	bl RwRenderStateSet
/* 800ACA74 000A9B54  38 60 00 08 */	li r3, 0x8
/* 800ACA78 000A9B58  38 80 00 01 */	li r4, 0x1
/* 800ACA7C 000A9B5C  48 18 2D 61 */	bl RwRenderStateSet
/* 800ACA80 000A9B60  38 60 00 06 */	li r3, 0x6
/* 800ACA84 000A9B64  38 80 00 01 */	li r4, 0x1
/* 800ACA88 000A9B68  48 18 2D 55 */	bl RwRenderStateSet
/* 800ACA8C 000A9B6C  93 ED 90 78 */	stw r31, sRS@sda21(r13)
/* 800ACA90 000A9B70  80 0D 90 78 */	lwz r0, sRS@sda21(r13)
/* 800ACA94 000A9B74  28 00 00 16 */	cmplwi r0, 0x16
/* 800ACA98 000A9B78  41 81 03 34 */	bgt .L_800ACDCC
/* 800ACA9C 000A9B7C  3C 60 80 29 */	lis r3, "@558"@ha
/* 800ACAA0 000A9B80  54 00 10 3A */	slwi r0, r0, 2
/* 800ACAA4 000A9B84  38 63 00 30 */	addi r3, r3, "@558"@l
/* 800ACAA8 000A9B88  7C 03 00 2E */	lwzx r0, r3, r0
/* 800ACAAC 000A9B8C  7C 09 03 A6 */	mtctr r0
/* 800ACAB0 000A9B90  4E 80 04 20 */	bctr
.L_800ACAB4:
/* 800ACAB4 000A9B94  38 60 00 08 */	li r3, 0x8
/* 800ACAB8 000A9B98  38 80 00 00 */	li r4, 0x0
/* 800ACABC 000A9B9C  48 18 2D 21 */	bl RwRenderStateSet
/* 800ACAC0 000A9BA0  38 60 00 0E */	li r3, 0xe
/* 800ACAC4 000A9BA4  38 80 00 00 */	li r4, 0x0
/* 800ACAC8 000A9BA8  48 18 2D 15 */	bl RwRenderStateSet
/* 800ACACC 000A9BAC  38 60 00 07 */	li r3, 0x7
/* 800ACAD0 000A9BB0  38 80 00 01 */	li r4, 0x1
/* 800ACAD4 000A9BB4  48 18 2D 09 */	bl RwRenderStateSet
/* 800ACAD8 000A9BB8  48 00 02 F4 */	b .L_800ACDCC
.L_800ACADC:
/* 800ACADC 000A9BBC  38 60 00 0C */	li r3, 0xc
/* 800ACAE0 000A9BC0  38 80 00 00 */	li r4, 0x0
/* 800ACAE4 000A9BC4  48 18 2C F9 */	bl RwRenderStateSet
/* 800ACAE8 000A9BC8  48 00 02 E4 */	b .L_800ACDCC
.L_800ACAEC:
/* 800ACAEC 000A9BCC  38 60 00 0C */	li r3, 0xc
/* 800ACAF0 000A9BD0  38 80 00 00 */	li r4, 0x0
/* 800ACAF4 000A9BD4  48 18 2C E9 */	bl RwRenderStateSet
/* 800ACAF8 000A9BD8  38 60 00 14 */	li r3, 0x14
/* 800ACAFC 000A9BDC  38 80 00 02 */	li r4, 0x2
/* 800ACB00 000A9BE0  48 18 2C DD */	bl RwRenderStateSet
/* 800ACB04 000A9BE4  48 00 02 C8 */	b .L_800ACDCC
.L_800ACB08:
/* 800ACB08 000A9BE8  38 60 00 08 */	li r3, 0x8
/* 800ACB0C 000A9BEC  38 80 00 00 */	li r4, 0x0
/* 800ACB10 000A9BF0  48 18 2C CD */	bl RwRenderStateSet
/* 800ACB14 000A9BF4  38 60 00 0B */	li r3, 0xb
/* 800ACB18 000A9BF8  38 80 00 02 */	li r4, 0x2
/* 800ACB1C 000A9BFC  48 18 2C C1 */	bl RwRenderStateSet
/* 800ACB20 000A9C00  48 00 02 AC */	b .L_800ACDCC
.L_800ACB24:
/* 800ACB24 000A9C04  38 60 00 08 */	li r3, 0x8
/* 800ACB28 000A9C08  38 80 00 00 */	li r4, 0x0
/* 800ACB2C 000A9C0C  48 18 2C B1 */	bl RwRenderStateSet
/* 800ACB30 000A9C10  48 00 02 9C */	b .L_800ACDCC
.L_800ACB34:
/* 800ACB34 000A9C14  38 60 00 08 */	li r3, 0x8
/* 800ACB38 000A9C18  38 80 00 00 */	li r4, 0x0
/* 800ACB3C 000A9C1C  48 18 2C A1 */	bl RwRenderStateSet
/* 800ACB40 000A9C20  48 00 02 8C */	b .L_800ACDCC
.L_800ACB44:
/* 800ACB44 000A9C24  38 60 00 08 */	li r3, 0x8
/* 800ACB48 000A9C28  38 80 00 00 */	li r4, 0x0
/* 800ACB4C 000A9C2C  48 18 2C 91 */	bl RwRenderStateSet
/* 800ACB50 000A9C30  38 60 00 06 */	li r3, 0x6
/* 800ACB54 000A9C34  38 80 00 00 */	li r4, 0x0
/* 800ACB58 000A9C38  48 18 2C 85 */	bl RwRenderStateSet
/* 800ACB5C 000A9C3C  38 60 00 0E */	li r3, 0xe
/* 800ACB60 000A9C40  38 80 00 00 */	li r4, 0x0
/* 800ACB64 000A9C44  48 18 2C 79 */	bl RwRenderStateSet
/* 800ACB68 000A9C48  38 60 00 0B */	li r3, 0xb
/* 800ACB6C 000A9C4C  38 80 00 02 */	li r4, 0x2
/* 800ACB70 000A9C50  48 18 2C 6D */	bl RwRenderStateSet
/* 800ACB74 000A9C54  48 00 02 58 */	b .L_800ACDCC
.L_800ACB78:
/* 800ACB78 000A9C58  38 60 00 08 */	li r3, 0x8
/* 800ACB7C 000A9C5C  38 80 00 00 */	li r4, 0x0
/* 800ACB80 000A9C60  48 18 2C 5D */	bl RwRenderStateSet
/* 800ACB84 000A9C64  38 60 00 06 */	li r3, 0x6
/* 800ACB88 000A9C68  38 80 00 00 */	li r4, 0x0
/* 800ACB8C 000A9C6C  48 18 2C 51 */	bl RwRenderStateSet
/* 800ACB90 000A9C70  38 60 00 0E */	li r3, 0xe
/* 800ACB94 000A9C74  38 80 00 00 */	li r4, 0x0
/* 800ACB98 000A9C78  48 18 2C 45 */	bl RwRenderStateSet
/* 800ACB9C 000A9C7C  38 60 00 0C */	li r3, 0xc
/* 800ACBA0 000A9C80  38 80 00 00 */	li r4, 0x0
/* 800ACBA4 000A9C84  48 18 2C 39 */	bl RwRenderStateSet
/* 800ACBA8 000A9C88  38 60 00 0A */	li r3, 0xa
/* 800ACBAC 000A9C8C  38 80 00 02 */	li r4, 0x2
/* 800ACBB0 000A9C90  48 18 2C 2D */	bl RwRenderStateSet
/* 800ACBB4 000A9C94  38 60 00 0B */	li r3, 0xb
/* 800ACBB8 000A9C98  38 80 00 01 */	li r4, 0x1
/* 800ACBBC 000A9C9C  48 18 2C 21 */	bl RwRenderStateSet
/* 800ACBC0 000A9CA0  48 00 02 0C */	b .L_800ACDCC
.L_800ACBC4:
/* 800ACBC4 000A9CA4  38 60 00 0E */	li r3, 0xe
/* 800ACBC8 000A9CA8  38 80 00 00 */	li r4, 0x0
/* 800ACBCC 000A9CAC  48 18 2C 11 */	bl RwRenderStateSet
/* 800ACBD0 000A9CB0  48 00 01 FC */	b .L_800ACDCC
.L_800ACBD4:
/* 800ACBD4 000A9CB4  38 60 00 0E */	li r3, 0xe
/* 800ACBD8 000A9CB8  38 80 00 00 */	li r4, 0x0
/* 800ACBDC 000A9CBC  48 18 2C 01 */	bl RwRenderStateSet
/* 800ACBE0 000A9CC0  38 60 00 0C */	li r3, 0xc
/* 800ACBE4 000A9CC4  38 80 00 00 */	li r4, 0x0
/* 800ACBE8 000A9CC8  48 18 2B F5 */	bl RwRenderStateSet
/* 800ACBEC 000A9CCC  38 60 00 14 */	li r3, 0x14
/* 800ACBF0 000A9CD0  38 80 00 02 */	li r4, 0x2
/* 800ACBF4 000A9CD4  48 18 2B E9 */	bl RwRenderStateSet
/* 800ACBF8 000A9CD8  48 00 01 D4 */	b .L_800ACDCC
.L_800ACBFC:
/* 800ACBFC 000A9CDC  38 60 00 08 */	li r3, 0x8
/* 800ACC00 000A9CE0  38 80 00 00 */	li r4, 0x0
/* 800ACC04 000A9CE4  48 18 2B D9 */	bl RwRenderStateSet
/* 800ACC08 000A9CE8  38 60 00 06 */	li r3, 0x6
/* 800ACC0C 000A9CEC  38 80 00 00 */	li r4, 0x0
/* 800ACC10 000A9CF0  48 18 2B CD */	bl RwRenderStateSet
/* 800ACC14 000A9CF4  38 60 00 0E */	li r3, 0xe
/* 800ACC18 000A9CF8  38 80 00 00 */	li r4, 0x0
/* 800ACC1C 000A9CFC  48 18 2B C1 */	bl RwRenderStateSet
/* 800ACC20 000A9D00  48 00 01 AC */	b .L_800ACDCC
.L_800ACC24:
/* 800ACC24 000A9D04  38 60 00 08 */	li r3, 0x8
/* 800ACC28 000A9D08  38 80 00 00 */	li r4, 0x0
/* 800ACC2C 000A9D0C  48 18 2B B1 */	bl RwRenderStateSet
/* 800ACC30 000A9D10  38 60 00 06 */	li r3, 0x6
/* 800ACC34 000A9D14  38 80 00 00 */	li r4, 0x0
/* 800ACC38 000A9D18  48 18 2B A5 */	bl RwRenderStateSet
/* 800ACC3C 000A9D1C  38 60 00 0E */	li r3, 0xe
/* 800ACC40 000A9D20  38 80 00 00 */	li r4, 0x0
/* 800ACC44 000A9D24  48 18 2B 99 */	bl RwRenderStateSet
/* 800ACC48 000A9D28  38 60 00 0C */	li r3, 0xc
/* 800ACC4C 000A9D2C  38 80 00 00 */	li r4, 0x0
/* 800ACC50 000A9D30  48 18 2B 8D */	bl RwRenderStateSet
/* 800ACC54 000A9D34  38 60 00 0A */	li r3, 0xa
/* 800ACC58 000A9D38  38 80 00 02 */	li r4, 0x2
/* 800ACC5C 000A9D3C  48 18 2B 81 */	bl RwRenderStateSet
/* 800ACC60 000A9D40  38 60 00 0B */	li r3, 0xb
/* 800ACC64 000A9D44  38 80 00 01 */	li r4, 0x1
/* 800ACC68 000A9D48  48 18 2B 75 */	bl RwRenderStateSet
/* 800ACC6C 000A9D4C  38 60 00 07 */	li r3, 0x7
/* 800ACC70 000A9D50  38 80 00 01 */	li r4, 0x1
/* 800ACC74 000A9D54  48 18 2B 69 */	bl RwRenderStateSet
/* 800ACC78 000A9D58  48 00 01 54 */	b .L_800ACDCC
.L_800ACC7C:
/* 800ACC7C 000A9D5C  38 60 00 06 */	li r3, 0x6
/* 800ACC80 000A9D60  38 80 00 00 */	li r4, 0x0
/* 800ACC84 000A9D64  48 18 2B 59 */	bl RwRenderStateSet
/* 800ACC88 000A9D68  38 60 00 0E */	li r3, 0xe
/* 800ACC8C 000A9D6C  38 80 00 00 */	li r4, 0x0
/* 800ACC90 000A9D70  48 18 2B 4D */	bl RwRenderStateSet
/* 800ACC94 000A9D74  38 60 00 07 */	li r3, 0x7
/* 800ACC98 000A9D78  38 80 00 01 */	li r4, 0x1
/* 800ACC9C 000A9D7C  48 18 2B 41 */	bl RwRenderStateSet
/* 800ACCA0 000A9D80  48 00 01 2C */	b .L_800ACDCC
.L_800ACCA4:
/* 800ACCA4 000A9D84  38 60 00 0C */	li r3, 0xc
/* 800ACCA8 000A9D88  38 80 00 00 */	li r4, 0x0
/* 800ACCAC 000A9D8C  48 18 2B 31 */	bl RwRenderStateSet
/* 800ACCB0 000A9D90  38 60 00 07 */	li r3, 0x7
/* 800ACCB4 000A9D94  38 80 00 01 */	li r4, 0x1
/* 800ACCB8 000A9D98  48 18 2B 25 */	bl RwRenderStateSet
/* 800ACCBC 000A9D9C  38 60 00 0A */	li r3, 0xa
/* 800ACCC0 000A9DA0  38 80 00 02 */	li r4, 0x2
/* 800ACCC4 000A9DA4  48 18 2B 19 */	bl RwRenderStateSet
/* 800ACCC8 000A9DA8  38 60 00 0B */	li r3, 0xb
/* 800ACCCC 000A9DAC  38 80 00 01 */	li r4, 0x1
/* 800ACCD0 000A9DB0  48 18 2B 0D */	bl RwRenderStateSet
/* 800ACCD4 000A9DB4  48 00 00 F8 */	b .L_800ACDCC
.L_800ACCD8:
/* 800ACCD8 000A9DB8  38 60 00 0C */	li r3, 0xc
/* 800ACCDC 000A9DBC  38 80 00 00 */	li r4, 0x0
/* 800ACCE0 000A9DC0  48 18 2A FD */	bl RwRenderStateSet
/* 800ACCE4 000A9DC4  38 60 00 0B */	li r3, 0xb
/* 800ACCE8 000A9DC8  38 80 00 02 */	li r4, 0x2
/* 800ACCEC 000A9DCC  48 18 2A F1 */	bl RwRenderStateSet
/* 800ACCF0 000A9DD0  48 00 00 DC */	b .L_800ACDCC
.L_800ACCF4:
/* 800ACCF4 000A9DD4  38 60 00 08 */	li r3, 0x8
/* 800ACCF8 000A9DD8  38 80 00 00 */	li r4, 0x0
/* 800ACCFC 000A9DDC  48 18 2A E1 */	bl RwRenderStateSet
/* 800ACD00 000A9DE0  38 60 00 06 */	li r3, 0x6
/* 800ACD04 000A9DE4  38 80 00 00 */	li r4, 0x0
/* 800ACD08 000A9DE8  48 18 2A D5 */	bl RwRenderStateSet
/* 800ACD0C 000A9DEC  38 60 00 0E */	li r3, 0xe
/* 800ACD10 000A9DF0  38 80 00 00 */	li r4, 0x0
/* 800ACD14 000A9DF4  48 18 2A C9 */	bl RwRenderStateSet
/* 800ACD18 000A9DF8  38 60 00 0C */	li r3, 0xc
/* 800ACD1C 000A9DFC  38 80 00 00 */	li r4, 0x0
/* 800ACD20 000A9E00  48 18 2A BD */	bl RwRenderStateSet
/* 800ACD24 000A9E04  38 60 00 0A */	li r3, 0xa
/* 800ACD28 000A9E08  38 80 00 02 */	li r4, 0x2
/* 800ACD2C 000A9E0C  48 18 2A B1 */	bl RwRenderStateSet
/* 800ACD30 000A9E10  38 60 00 0B */	li r3, 0xb
/* 800ACD34 000A9E14  38 80 00 01 */	li r4, 0x1
/* 800ACD38 000A9E18  48 18 2A A5 */	bl RwRenderStateSet
/* 800ACD3C 000A9E1C  48 00 00 90 */	b .L_800ACDCC
.L_800ACD40:
/* 800ACD40 000A9E20  38 60 00 06 */	li r3, 0x6
/* 800ACD44 000A9E24  38 80 00 00 */	li r4, 0x0
/* 800ACD48 000A9E28  48 18 2A 95 */	bl RwRenderStateSet
/* 800ACD4C 000A9E2C  38 60 00 0E */	li r3, 0xe
/* 800ACD50 000A9E30  38 80 00 00 */	li r4, 0x0
/* 800ACD54 000A9E34  48 18 2A 89 */	bl RwRenderStateSet
/* 800ACD58 000A9E38  38 60 00 0C */	li r3, 0xc
/* 800ACD5C 000A9E3C  38 80 00 00 */	li r4, 0x0
/* 800ACD60 000A9E40  48 18 2A 7D */	bl RwRenderStateSet
/* 800ACD64 000A9E44  38 60 00 0A */	li r3, 0xa
/* 800ACD68 000A9E48  38 80 00 02 */	li r4, 0x2
/* 800ACD6C 000A9E4C  48 18 2A 71 */	bl RwRenderStateSet
/* 800ACD70 000A9E50  38 60 00 0B */	li r3, 0xb
/* 800ACD74 000A9E54  38 80 00 01 */	li r4, 0x1
/* 800ACD78 000A9E58  48 18 2A 65 */	bl RwRenderStateSet
/* 800ACD7C 000A9E5C  48 00 00 50 */	b .L_800ACDCC
.L_800ACD80:
/* 800ACD80 000A9E60  38 60 00 08 */	li r3, 0x8
/* 800ACD84 000A9E64  38 80 00 00 */	li r4, 0x0
/* 800ACD88 000A9E68  48 18 2A 55 */	bl RwRenderStateSet
/* 800ACD8C 000A9E6C  38 60 00 06 */	li r3, 0x6
/* 800ACD90 000A9E70  38 80 00 00 */	li r4, 0x0
/* 800ACD94 000A9E74  48 18 2A 49 */	bl RwRenderStateSet
/* 800ACD98 000A9E78  38 60 00 0E */	li r3, 0xe
/* 800ACD9C 000A9E7C  38 80 00 00 */	li r4, 0x0
/* 800ACDA0 000A9E80  48 18 2A 3D */	bl RwRenderStateSet
/* 800ACDA4 000A9E84  48 00 00 28 */	b .L_800ACDCC
.L_800ACDA8:
/* 800ACDA8 000A9E88  38 60 00 08 */	li r3, 0x8
/* 800ACDAC 000A9E8C  38 80 00 00 */	li r4, 0x0
/* 800ACDB0 000A9E90  48 18 2A 2D */	bl RwRenderStateSet
/* 800ACDB4 000A9E94  38 60 00 0E */	li r3, 0xe
/* 800ACDB8 000A9E98  38 80 00 00 */	li r4, 0x0
/* 800ACDBC 000A9E9C  48 18 2A 21 */	bl RwRenderStateSet
/* 800ACDC0 000A9EA0  38 60 00 0B */	li r3, 0xb
/* 800ACDC4 000A9EA4  38 80 00 02 */	li r4, 0x2
/* 800ACDC8 000A9EA8  48 18 2A 15 */	bl RwRenderStateSet
.L_800ACDCC:
/* 800ACDCC 000A9EAC  80 01 00 14 */	lwz r0, 0x14(r1)
/* 800ACDD0 000A9EB0  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 800ACDD4 000A9EB4  7C 08 03 A6 */	mtlr r0
/* 800ACDD8 000A9EB8  38 21 00 10 */	addi r1, r1, 0x10
/* 800ACDDC 000A9EBC  4E 80 00 20 */	blr
.endfn zRenderState__F14_SDRenderState

# 0x80290030 - 0x80290090
.data
.balign 8

.obj "@558", local
	.rel zRenderState__F14_SDRenderState, .L_800ACDCC
	.rel zRenderState__F14_SDRenderState, .L_800ACDCC
	.rel zRenderState__F14_SDRenderState, .L_800ACADC
	.rel zRenderState__F14_SDRenderState, .L_800ACDCC
	.rel zRenderState__F14_SDRenderState, .L_800ACBD4
	.rel zRenderState__F14_SDRenderState, .L_800ACDCC
	.rel zRenderState__F14_SDRenderState, .L_800ACB78
	.rel zRenderState__F14_SDRenderState, .L_800ACBC4
	.rel zRenderState__F14_SDRenderState, .L_800ACAB4
	.rel zRenderState__F14_SDRenderState, .L_800ACB08
	.rel zRenderState__F14_SDRenderState, .L_800ACB24
	.rel zRenderState__F14_SDRenderState, .L_800ACBFC
	.rel zRenderState__F14_SDRenderState, .L_800ACAEC
	.rel zRenderState__F14_SDRenderState, .L_800ACC24
	.rel zRenderState__F14_SDRenderState, .L_800ACB34
	.rel zRenderState__F14_SDRenderState, .L_800ACC7C
	.rel zRenderState__F14_SDRenderState, .L_800ACCA4
	.rel zRenderState__F14_SDRenderState, .L_800ACCD8
	.rel zRenderState__F14_SDRenderState, .L_800ACCF4
	.rel zRenderState__F14_SDRenderState, .L_800ACB44
	.rel zRenderState__F14_SDRenderState, .L_800ACD40
	.rel zRenderState__F14_SDRenderState, .L_800ACD80
	.rel zRenderState__F14_SDRenderState, .L_800ACDA8
.endobj "@558"
	.4byte 0x00000000

# 0x803CB978 - 0x803CB980
.section .sbss, "wa", @nobits
.balign 8

.obj sRS, local
	.skip 0x4
.endobj sRS
	.skip 0x4