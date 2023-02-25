.include "macros.inc"
.file "zPickupTable.cpp"

# 0x800A8DF0 - 0x800A8EC8
.text
.balign 4

# zPickupTableInit()
.fn zPickupTableInit__Fv, global
/* 800A8DF0 000A5ED0  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 800A8DF4 000A5ED4  7C 08 02 A6 */	mflr r0
/* 800A8DF8 000A5ED8  3C 80 80 3C */	lis r4, globals@ha
/* 800A8DFC 000A5EDC  3C 60 80 29 */	lis r3, ptranstbl@ha
/* 800A8E00 000A5EE0  90 01 00 24 */	stw r0, 0x24(r1)
/* 800A8E04 000A5EE4  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 800A8E08 000A5EE8  3B E4 05 58 */	addi r31, r4, globals@l
/* 800A8E0C 000A5EEC  93 C1 00 18 */	stw r30, 0x18(r1)
/* 800A8E10 000A5EF0  3B C3 FF 40 */	addi r30, r3, ptranstbl@l
/* 800A8E14 000A5EF4  93 A1 00 14 */	stw r29, 0x14(r1)
/* 800A8E18 000A5EF8  93 81 00 10 */	stw r28, 0x10(r1)
/* 800A8E1C 000A5EFC  3B 80 00 00 */	li r28, 0x0
/* 800A8E20 000A5F00  80 9F 1F B8 */	lwz r4, 0x1fb8(r31)
/* 800A8E24 000A5F04  3B A4 00 08 */	addi r29, r4, 0x8
/* 800A8E28 000A5F08  48 00 00 74 */	b .L_800A8E9C
.L_800A8E2C:
/* 800A8E2C 000A5F0C  80 7E 00 00 */	lwz r3, 0x0(r30)
/* 800A8E30 000A5F10  4B FA 33 E5 */	bl xStrHash__FPCc
/* 800A8E34 000A5F14  90 7E 00 04 */	stw r3, 0x4(r30)
/* 800A8E38 000A5F18  7F A4 EB 78 */	mr r4, r29
/* 800A8E3C 000A5F1C  80 7F 1F B8 */	lwz r3, 0x1fb8(r31)
/* 800A8E40 000A5F20  38 BE 00 04 */	addi r5, r30, 0x4
/* 800A8E44 000A5F24  38 E0 00 00 */	li r7, 0x0
/* 800A8E48 000A5F28  80 C3 00 04 */	lwz r6, 0x4(r3)
/* 800A8E4C 000A5F2C  7C C9 03 A6 */	mtctr r6
/* 800A8E50 000A5F30  28 06 00 00 */	cmplwi r6, 0x0
/* 800A8E54 000A5F34  40 81 00 20 */	ble .L_800A8E74
.L_800A8E58:
/* 800A8E58 000A5F38  80 64 00 00 */	lwz r3, 0x0(r4)
/* 800A8E5C 000A5F3C  80 05 00 00 */	lwz r0, 0x0(r5)
/* 800A8E60 000A5F40  7C 03 00 40 */	cmplw r3, r0
/* 800A8E64 000A5F44  41 82 00 10 */	beq .L_800A8E74
/* 800A8E68 000A5F48  38 84 00 14 */	addi r4, r4, 0x14
/* 800A8E6C 000A5F4C  38 E7 00 01 */	addi r7, r7, 0x1
/* 800A8E70 000A5F50  42 00 FF E8 */	bdnz .L_800A8E58
.L_800A8E74:
/* 800A8E74 000A5F54  7C 07 30 40 */	cmplw r7, r6
/* 800A8E78 000A5F58  41 82 00 1C */	beq .L_800A8E94
/* 800A8E7C 000A5F5C  1C 07 00 14 */	mulli r0, r7, 0x14
/* 800A8E80 000A5F60  88 7E 00 08 */	lbz r3, 0x8(r30)
/* 800A8E84 000A5F64  7C 9D 02 14 */	add r4, r29, r0
/* 800A8E88 000A5F68  98 64 00 04 */	stb r3, 0x4(r4)
/* 800A8E8C 000A5F6C  88 1E 00 09 */	lbz r0, 0x9(r30)
/* 800A8E90 000A5F70  98 04 00 05 */	stb r0, 0x5(r4)
.L_800A8E94:
/* 800A8E94 000A5F74  3B DE 00 0C */	addi r30, r30, 0xc
/* 800A8E98 000A5F78  3B 9C 00 01 */	addi r28, r28, 0x1
.L_800A8E9C:
/* 800A8E9C 000A5F7C  80 0D 82 E0 */	lwz r0, ptranstbl_size@sda21(r13)
/* 800A8EA0 000A5F80  7C 1C 00 40 */	cmplw r28, r0
/* 800A8EA4 000A5F84  41 80 FF 88 */	blt .L_800A8E2C
/* 800A8EA8 000A5F88  80 01 00 24 */	lwz r0, 0x24(r1)
/* 800A8EAC 000A5F8C  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 800A8EB0 000A5F90  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 800A8EB4 000A5F94  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 800A8EB8 000A5F98  83 81 00 10 */	lwz r28, 0x10(r1)
/* 800A8EBC 000A5F9C  7C 08 03 A6 */	mtlr r0
/* 800A8EC0 000A5FA0  38 21 00 20 */	addi r1, r1, 0x20
/* 800A8EC4 000A5FA4  4E 80 00 20 */	blr
.endfn zPickupTableInit__Fv

# 0x8025E710 - 0x8025E7F0
.rodata
.balign 8

.obj "@stringBase0", local
	.4byte 0x50757270
	.4byte 0x6C655368
	.4byte 0x696E7900
.L_8025E71C:
	.4byte 0x426C7565
	.4byte 0x5368696E
	.2byte 0x7900
.L_8025E726:
	.4byte 0x47726565
	.4byte 0x6E536869
	.byte 0x6E, 0x79, 0x00
.L_8025E731:
	.4byte 0x59656C6C
	.4byte 0x6F775368
	.4byte 0x696E7900
.L_8025E73D:
	.4byte 0x52656453
	.4byte 0x68696E79
	.byte 0x00
.L_8025E746:
	.4byte 0x476F6C64
	.4byte 0x656E5370
	.4byte 0x6174756C
	.2byte 0x6100
.L_8025E754:
	.4byte 0x556E6465
	.4byte 0x72776561
	.2byte 0x7200
.L_8025E75E:
	.4byte 0x476F6C64
	.4byte 0x656E556E
	.4byte 0x64657277
	.4byte 0x65617200
.L_8025E76E:
	.4byte 0x50617473
	.4byte 0x536F636B
	.byte 0x00
.L_8025E777:
	.4byte 0x42757354
	.4byte 0x69636B65
	.2byte 0x7400
.L_8025E781:
	.4byte 0x5374616C
	.4byte 0x6C4B6579
	.byte 0x00
.L_8025E78A:
	.4byte 0x53756E64
	.byte 0x61, 0x65, 0x00
.L_8025E791:
	.4byte 0x53706F6E
	.4byte 0x67654261
	.byte 0x6C, 0x6C, 0x00
.L_8025E79C:
	.4byte 0x4A46416E
	.4byte 0x7469646F
	.byte 0x74, 0x65, 0x00
.L_8025E7A7:
	.4byte 0x42425374
	.4byte 0x65657269
	.4byte 0x6E675768
	.4byte 0x65656C00
.L_8025E7B7:
	.4byte 0x474C4261
	.4byte 0x6C6C6F6F
	.2byte 0x6E00
.L_8025E7C1:
	.4byte 0x52424172
	.4byte 0x74506965
	.4byte 0x63657300
.L_8025E7CD:
	.4byte 0x42435365
	.4byte 0x63757269
	.byte 0x74, 0x79, 0x00
.L_8025E7D8:
	.4byte 0x4B464372
	.4byte 0x79737461
	.2byte 0x6C00
.L_8025E7E2:
	.4byte 0x47594361
	.4byte 0x6E6E6F6E
	.2byte 0x7300
.endobj "@stringBase0"
	.4byte 0x00000000

# 0x8028FF40 - 0x80290030
.data
.balign 8

.obj ptranstbl, local
	.4byte "@stringBase0"
	.4byte 0x00000000
	.4byte 0x00000000
	.rel "@stringBase0", .L_8025E71C
	.4byte 0x00000000
	.4byte 0x00010000
	.rel "@stringBase0", .L_8025E726
	.4byte 0x00000000
	.4byte 0x00020000
	.rel "@stringBase0", .L_8025E731
	.4byte 0x00000000
	.4byte 0x00030000
	.rel "@stringBase0", .L_8025E73D
	.4byte 0x00000000
	.4byte 0x00040000
	.rel "@stringBase0", .L_8025E746
	.4byte 0x00000000
	.4byte 0x01000000
	.rel "@stringBase0", .L_8025E754
	.4byte 0x00000000
	.4byte 0x01010000
	.rel "@stringBase0", .L_8025E75E
	.4byte 0x00000000
	.4byte 0x01020000
	.rel "@stringBase0", .L_8025E76E
	.4byte 0x00000000
	.4byte 0x01060000
	.rel "@stringBase0", .L_8025E777
	.4byte 0x00000000
	.4byte 0x01030000
	.rel "@stringBase0", .L_8025E781
	.4byte 0x00000000
	.4byte 0x01040000
	.rel "@stringBase0", .L_8025E78A
	.4byte 0x00000000
	.4byte 0x01050000
	.rel "@stringBase0", .L_8025E791
	.4byte 0x00000000
	.4byte 0x01070000
	.rel "@stringBase0", .L_8025E79C
	.4byte 0x00000000
	.4byte 0x01080000
	.rel "@stringBase0", .L_8025E7A7
	.4byte 0x00000000
	.4byte 0x01090000
	.rel "@stringBase0", .L_8025E7B7
	.4byte 0x00000000
	.4byte 0x010A0000
	.rel "@stringBase0", .L_8025E7C1
	.4byte 0x00000000
	.4byte 0x010B0000
	.rel "@stringBase0", .L_8025E7CD
	.4byte 0x00000000
	.4byte 0x010C0000
	.rel "@stringBase0", .L_8025E7D8
	.4byte 0x00000000
	.4byte 0x010D0000
	.rel "@stringBase0", .L_8025E7E2
	.4byte 0x00000000
	.4byte 0x010E0000
.endobj ptranstbl

# 0x803CABE0 - 0x803CABE8
.section .sdata, "wa"
.balign 8

.obj ptranstbl_size, local
	.4byte 0x00000014
.endobj ptranstbl_size
	.4byte 0x00000000
