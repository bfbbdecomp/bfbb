.include "macros.inc"
.file "CARDStatEx.c"

# 0x801C1884 - 0x801C1BC4
.text
.balign 4

.fn __CARDGetStatusEx, global
/* 801C1884 001BE964  7C 08 02 A6 */	mflr r0
/* 801C1888 001BE968  90 01 00 04 */	stw r0, 0x4(r1)
/* 801C188C 001BE96C  94 21 FF D8 */	stwu r1, -0x28(r1)
/* 801C1890 001BE970  93 E1 00 24 */	stw r31, 0x24(r1)
/* 801C1894 001BE974  93 C1 00 20 */	stw r30, 0x20(r1)
/* 801C1898 001BE978  7C 9E 23 79 */	mr. r30, r4
/* 801C189C 001BE97C  93 A1 00 1C */	stw r29, 0x1c(r1)
/* 801C18A0 001BE980  3B A5 00 00 */	addi r29, r5, 0x0
/* 801C18A4 001BE984  41 80 00 0C */	blt .L_801C18B0
/* 801C18A8 001BE988  2C 1E 00 7F */	cmpwi r30, 0x7f
/* 801C18AC 001BE98C  41 80 00 0C */	blt .L_801C18B8
.L_801C18B0:
/* 801C18B0 001BE990  38 60 FF 80 */	li r3, -0x80
/* 801C18B4 001BE994  48 00 00 58 */	b .L_801C190C
.L_801C18B8:
/* 801C18B8 001BE998  38 81 00 14 */	addi r4, r1, 0x14
/* 801C18BC 001BE99C  4B FF A4 29 */	bl __CARDGetControlBlock
/* 801C18C0 001BE9A0  2C 03 00 00 */	cmpwi r3, 0x0
/* 801C18C4 001BE9A4  40 80 00 08 */	bge .L_801C18CC
/* 801C18C8 001BE9A8  48 00 00 44 */	b .L_801C190C
.L_801C18CC:
/* 801C18CC 001BE9AC  80 61 00 14 */	lwz r3, 0x14(r1)
/* 801C18D0 001BE9B0  4B FF C1 A1 */	bl __CARDGetDirBlock
/* 801C18D4 001BE9B4  57 C0 30 32 */	slwi r0, r30, 6
/* 801C18D8 001BE9B8  7F C3 02 14 */	add r30, r3, r0
/* 801C18DC 001BE9BC  80 61 00 14 */	lwz r3, 0x14(r1)
/* 801C18E0 001BE9C0  7F C4 F3 78 */	mr r4, r30
/* 801C18E4 001BE9C4  4B FF E8 DD */	bl __CARDIsReadable
/* 801C18E8 001BE9C8  7C 7F 1B 79 */	mr. r31, r3
/* 801C18EC 001BE9CC  41 80 00 14 */	blt .L_801C1900
/* 801C18F0 001BE9D0  38 7D 00 00 */	addi r3, r29, 0x0
/* 801C18F4 001BE9D4  38 9E 00 00 */	addi r4, r30, 0x0
/* 801C18F8 001BE9D8  38 A0 00 40 */	li r5, 0x40
/* 801C18FC 001BE9DC  4B E4 1C 45 */	bl memcpy
.L_801C1900:
/* 801C1900 001BE9E0  80 61 00 14 */	lwz r3, 0x14(r1)
/* 801C1904 001BE9E4  7F E4 FB 78 */	mr r4, r31
/* 801C1908 001BE9E8  4B FF A4 95 */	bl __CARDPutControlBlock
.L_801C190C:
/* 801C190C 001BE9EC  80 01 00 2C */	lwz r0, 0x2c(r1)
/* 801C1910 001BE9F0  83 E1 00 24 */	lwz r31, 0x24(r1)
/* 801C1914 001BE9F4  83 C1 00 20 */	lwz r30, 0x20(r1)
/* 801C1918 001BE9F8  83 A1 00 1C */	lwz r29, 0x1c(r1)
/* 801C191C 001BE9FC  38 21 00 28 */	addi r1, r1, 0x28
/* 801C1920 001BEA00  7C 08 03 A6 */	mtlr r0
/* 801C1924 001BEA04  4E 80 00 20 */	blr
.endfn __CARDGetStatusEx

.fn __CARDSetStatusExAsync, global
/* 801C1928 001BEA08  7C 08 02 A6 */	mflr r0
/* 801C192C 001BEA0C  90 01 00 04 */	stw r0, 0x4(r1)
/* 801C1930 001BEA10  94 21 FF C0 */	stwu r1, -0x40(r1)
/* 801C1934 001BEA14  BF 21 00 24 */	stmw r25, 0x24(r1)
/* 801C1938 001BEA18  7C 9B 23 79 */	mr. r27, r4
/* 801C193C 001BEA1C  3B 43 00 00 */	addi r26, r3, 0x0
/* 801C1940 001BEA20  3B 85 00 00 */	addi r28, r5, 0x0
/* 801C1944 001BEA24  3B A6 00 00 */	addi r29, r6, 0x0
/* 801C1948 001BEA28  41 80 00 20 */	blt .L_801C1968
/* 801C194C 001BEA2C  2C 1B 00 7F */	cmpwi r27, 0x7f
/* 801C1950 001BEA30  40 80 00 18 */	bge .L_801C1968
/* 801C1954 001BEA34  88 1C 00 08 */	lbz r0, 0x8(r28)
/* 801C1958 001BEA38  28 00 00 FF */	cmplwi r0, 0xff
/* 801C195C 001BEA3C  41 82 00 0C */	beq .L_801C1968
/* 801C1960 001BEA40  28 00 00 00 */	cmplwi r0, 0x0
/* 801C1964 001BEA44  40 82 00 0C */	bne .L_801C1970
.L_801C1968:
/* 801C1968 001BEA48  38 60 FF 80 */	li r3, -0x80
/* 801C196C 001BEA4C  48 00 02 44 */	b .L_801C1BB0
.L_801C1970:
/* 801C1970 001BEA50  38 7A 00 00 */	addi r3, r26, 0x0
/* 801C1974 001BEA54  38 81 00 18 */	addi r4, r1, 0x18
/* 801C1978 001BEA58  4B FF A3 6D */	bl __CARDGetControlBlock
/* 801C197C 001BEA5C  2C 03 00 00 */	cmpwi r3, 0x0
/* 801C1980 001BEA60  40 80 00 08 */	bge .L_801C1988
/* 801C1984 001BEA64  48 00 02 2C */	b .L_801C1BB0
.L_801C1988:
/* 801C1988 001BEA68  80 61 00 18 */	lwz r3, 0x18(r1)
/* 801C198C 001BEA6C  4B FF C0 E5 */	bl __CARDGetDirBlock
/* 801C1990 001BEA70  7C 60 1B 78 */	mr r0, r3
/* 801C1994 001BEA74  80 61 00 18 */	lwz r3, 0x18(r1)
/* 801C1998 001BEA78  7C 1F 03 78 */	mr r31, r0
/* 801C199C 001BEA7C  57 60 30 32 */	slwi r0, r27, 6
/* 801C19A0 001BEA80  7F DF 02 14 */	add r30, r31, r0
/* 801C19A4 001BEA84  38 9E 00 00 */	addi r4, r30, 0x0
/* 801C19A8 001BEA88  4B FF E6 E5 */	bl __CARDIsWritable
/* 801C19AC 001BEA8C  7C 64 1B 79 */	mr. r4, r3
/* 801C19B0 001BEA90  40 80 00 10 */	bge .L_801C19C0
/* 801C19B4 001BEA94  80 61 00 18 */	lwz r3, 0x18(r1)
/* 801C19B8 001BEA98  4B FF A3 E5 */	bl __CARDPutControlBlock
/* 801C19BC 001BEA9C  48 00 01 F4 */	b .L_801C1BB0
.L_801C19C0:
/* 801C19C0 001BEAA0  38 9C 00 08 */	addi r4, r28, 0x8
/* 801C19C4 001BEAA4  38 7C 00 28 */	addi r3, r28, 0x28
/* 801C19C8 001BEAA8  7C 04 18 50 */	subf r0, r4, r3
/* 801C19CC 001BEAAC  7C 04 18 40 */	cmplw r4, r3
/* 801C19D0 001BEAB0  7C 09 03 A6 */	mtctr r0
/* 801C19D4 001BEAB4  40 80 00 38 */	bge .L_801C1A0C
.L_801C19D8:
/* 801C19D8 001BEAB8  88 04 00 00 */	lbz r0, 0x0(r4)
/* 801C19DC 001BEABC  28 00 00 00 */	cmplwi r0, 0x0
/* 801C19E0 001BEAC0  40 82 00 24 */	bne .L_801C1A04
/* 801C19E4 001BEAC4  38 1C 00 28 */	addi r0, r28, 0x28
/* 801C19E8 001BEAC8  38 60 00 00 */	li r3, 0x0
/* 801C19EC 001BEACC  48 00 00 08 */	b .L_801C19F4
.L_801C19F0:
/* 801C19F0 001BEAD0  98 64 00 00 */	stb r3, 0x0(r4)
.L_801C19F4:
/* 801C19F4 001BEAD4  38 84 00 01 */	addi r4, r4, 0x1
/* 801C19F8 001BEAD8  7C 04 00 40 */	cmplw r4, r0
/* 801C19FC 001BEADC  41 80 FF F4 */	blt .L_801C19F0
/* 801C1A00 001BEAE0  48 00 00 0C */	b .L_801C1A0C
.L_801C1A04:
/* 801C1A04 001BEAE4  38 84 00 01 */	addi r4, r4, 0x1
/* 801C1A08 001BEAE8  42 00 FF D0 */	bdnz .L_801C19D8
.L_801C1A0C:
/* 801C1A0C 001BEAEC  88 1C 00 34 */	lbz r0, 0x34(r28)
/* 801C1A10 001BEAF0  54 00 06 B5 */	rlwinm. r0, r0, 0, 26, 26
/* 801C1A14 001BEAF4  41 82 00 24 */	beq .L_801C1A38
/* 801C1A18 001BEAF8  38 7C 00 00 */	addi r3, r28, 0x0
/* 801C1A1C 001BEAFC  38 80 00 00 */	li r4, 0x0
/* 801C1A20 001BEB00  38 A0 00 04 */	li r5, 0x4
/* 801C1A24 001BEB04  4B E4 1A 35 */	bl memset
/* 801C1A28 001BEB08  38 7C 00 04 */	addi r3, r28, 0x4
/* 801C1A2C 001BEB0C  38 80 00 00 */	li r4, 0x0
/* 801C1A30 001BEB10  38 A0 00 02 */	li r5, 0x2
/* 801C1A34 001BEB14  4B E4 1A 25 */	bl memset
.L_801C1A38:
/* 801C1A38 001BEB18  88 1C 00 34 */	lbz r0, 0x34(r28)
/* 801C1A3C 001BEB1C  54 00 06 73 */	rlwinm. r0, r0, 0, 25, 25
/* 801C1A40 001BEB20  41 82 00 14 */	beq .L_801C1A54
/* 801C1A44 001BEB24  38 7C 00 00 */	addi r3, r28, 0x0
/* 801C1A48 001BEB28  38 80 00 00 */	li r4, 0x0
/* 801C1A4C 001BEB2C  38 A0 00 04 */	li r5, 0x4
/* 801C1A50 001BEB30  4B E4 1A 09 */	bl memset
.L_801C1A54:
/* 801C1A54 001BEB34  38 7E 00 08 */	addi r3, r30, 0x8
/* 801C1A58 001BEB38  38 9C 00 08 */	addi r4, r28, 0x8
/* 801C1A5C 001BEB3C  38 A0 00 20 */	li r5, 0x20
/* 801C1A60 001BEB40  48 02 20 6D */	bl memcmp
/* 801C1A64 001BEB44  2C 03 00 00 */	cmpwi r3, 0x0
/* 801C1A68 001BEB48  40 82 00 34 */	bne .L_801C1A9C
/* 801C1A6C 001BEB4C  38 7E 00 00 */	addi r3, r30, 0x0
/* 801C1A70 001BEB50  38 9C 00 00 */	addi r4, r28, 0x0
/* 801C1A74 001BEB54  38 A0 00 04 */	li r5, 0x4
/* 801C1A78 001BEB58  48 02 20 55 */	bl memcmp
/* 801C1A7C 001BEB5C  2C 03 00 00 */	cmpwi r3, 0x0
/* 801C1A80 001BEB60  40 82 00 1C */	bne .L_801C1A9C
/* 801C1A84 001BEB64  38 7E 00 04 */	addi r3, r30, 0x4
/* 801C1A88 001BEB68  38 9C 00 04 */	addi r4, r28, 0x4
/* 801C1A8C 001BEB6C  38 A0 00 02 */	li r5, 0x2
/* 801C1A90 001BEB70  48 02 20 3D */	bl memcmp
/* 801C1A94 001BEB74  2C 03 00 00 */	cmpwi r3, 0x0
/* 801C1A98 001BEB78  41 82 00 B4 */	beq .L_801C1B4C
.L_801C1A9C:
/* 801C1A9C 001BEB7C  3B 20 00 00 */	li r25, 0x0
.L_801C1AA0:
/* 801C1AA0 001BEB80  7C 19 D8 00 */	cmpw r25, r27
/* 801C1AA4 001BEB84  41 82 00 68 */	beq .L_801C1B0C
/* 801C1AA8 001BEB88  88 1F 00 00 */	lbz r0, 0x0(r31)
/* 801C1AAC 001BEB8C  28 00 00 FF */	cmplwi r0, 0xff
/* 801C1AB0 001BEB90  41 82 00 5C */	beq .L_801C1B0C
/* 801C1AB4 001BEB94  38 7F 00 00 */	addi r3, r31, 0x0
/* 801C1AB8 001BEB98  38 9C 00 00 */	addi r4, r28, 0x0
/* 801C1ABC 001BEB9C  38 A0 00 04 */	li r5, 0x4
/* 801C1AC0 001BEBA0  48 02 20 0D */	bl memcmp
/* 801C1AC4 001BEBA4  2C 03 00 00 */	cmpwi r3, 0x0
/* 801C1AC8 001BEBA8  40 82 00 44 */	bne .L_801C1B0C
/* 801C1ACC 001BEBAC  38 7F 00 04 */	addi r3, r31, 0x4
/* 801C1AD0 001BEBB0  38 9C 00 04 */	addi r4, r28, 0x4
/* 801C1AD4 001BEBB4  38 A0 00 02 */	li r5, 0x2
/* 801C1AD8 001BEBB8  48 02 1F F5 */	bl memcmp
/* 801C1ADC 001BEBBC  2C 03 00 00 */	cmpwi r3, 0x0
/* 801C1AE0 001BEBC0  40 82 00 2C */	bne .L_801C1B0C
/* 801C1AE4 001BEBC4  38 7F 00 08 */	addi r3, r31, 0x8
/* 801C1AE8 001BEBC8  38 9C 00 08 */	addi r4, r28, 0x8
/* 801C1AEC 001BEBCC  38 A0 00 20 */	li r5, 0x20
/* 801C1AF0 001BEBD0  48 02 1F DD */	bl memcmp
/* 801C1AF4 001BEBD4  2C 03 00 00 */	cmpwi r3, 0x0
/* 801C1AF8 001BEBD8  40 82 00 14 */	bne .L_801C1B0C
/* 801C1AFC 001BEBDC  80 61 00 18 */	lwz r3, 0x18(r1)
/* 801C1B00 001BEBE0  38 80 FF F9 */	li r4, -0x7
/* 801C1B04 001BEBE4  4B FF A2 99 */	bl __CARDPutControlBlock
/* 801C1B08 001BEBE8  48 00 00 A8 */	b .L_801C1BB0
.L_801C1B0C:
/* 801C1B0C 001BEBEC  3B 39 00 01 */	addi r25, r25, 0x1
/* 801C1B10 001BEBF0  2C 19 00 7F */	cmpwi r25, 0x7f
/* 801C1B14 001BEBF4  3B FF 00 40 */	addi r31, r31, 0x40
/* 801C1B18 001BEBF8  41 80 FF 88 */	blt .L_801C1AA0
/* 801C1B1C 001BEBFC  38 7E 00 08 */	addi r3, r30, 0x8
/* 801C1B20 001BEC00  38 9C 00 08 */	addi r4, r28, 0x8
/* 801C1B24 001BEC04  38 A0 00 20 */	li r5, 0x20
/* 801C1B28 001BEC08  4B E4 1A 19 */	bl memcpy
/* 801C1B2C 001BEC0C  38 7E 00 00 */	addi r3, r30, 0x0
/* 801C1B30 001BEC10  38 9C 00 00 */	addi r4, r28, 0x0
/* 801C1B34 001BEC14  38 A0 00 04 */	li r5, 0x4
/* 801C1B38 001BEC18  4B E4 1A 09 */	bl memcpy
/* 801C1B3C 001BEC1C  38 7E 00 04 */	addi r3, r30, 0x4
/* 801C1B40 001BEC20  38 9C 00 04 */	addi r4, r28, 0x4
/* 801C1B44 001BEC24  38 A0 00 02 */	li r5, 0x2
/* 801C1B48 001BEC28  4B E4 19 F9 */	bl memcpy
.L_801C1B4C:
/* 801C1B4C 001BEC2C  80 1C 00 28 */	lwz r0, 0x28(r28)
/* 801C1B50 001BEC30  38 7A 00 00 */	addi r3, r26, 0x0
/* 801C1B54 001BEC34  38 9D 00 00 */	addi r4, r29, 0x0
/* 801C1B58 001BEC38  90 1E 00 28 */	stw r0, 0x28(r30)
/* 801C1B5C 001BEC3C  88 1C 00 07 */	lbz r0, 0x7(r28)
/* 801C1B60 001BEC40  98 1E 00 07 */	stb r0, 0x7(r30)
/* 801C1B64 001BEC44  80 1C 00 2C */	lwz r0, 0x2c(r28)
/* 801C1B68 001BEC48  90 1E 00 2C */	stw r0, 0x2c(r30)
/* 801C1B6C 001BEC4C  A0 1C 00 30 */	lhz r0, 0x30(r28)
/* 801C1B70 001BEC50  B0 1E 00 30 */	sth r0, 0x30(r30)
/* 801C1B74 001BEC54  A0 1C 00 32 */	lhz r0, 0x32(r28)
/* 801C1B78 001BEC58  B0 1E 00 32 */	sth r0, 0x32(r30)
/* 801C1B7C 001BEC5C  80 1C 00 3C */	lwz r0, 0x3c(r28)
/* 801C1B80 001BEC60  90 1E 00 3C */	stw r0, 0x3c(r30)
/* 801C1B84 001BEC64  88 1C 00 34 */	lbz r0, 0x34(r28)
/* 801C1B88 001BEC68  98 1E 00 34 */	stb r0, 0x34(r30)
/* 801C1B8C 001BEC6C  88 1C 00 35 */	lbz r0, 0x35(r28)
/* 801C1B90 001BEC70  98 1E 00 35 */	stb r0, 0x35(r30)
/* 801C1B94 001BEC74  4B FF C0 7D */	bl __CARDUpdateDir
/* 801C1B98 001BEC78  7C 7A 1B 79 */	mr. r26, r3
/* 801C1B9C 001BEC7C  40 80 00 10 */	bge .L_801C1BAC
/* 801C1BA0 001BEC80  80 61 00 18 */	lwz r3, 0x18(r1)
/* 801C1BA4 001BEC84  7F 44 D3 78 */	mr r4, r26
/* 801C1BA8 001BEC88  4B FF A1 F5 */	bl __CARDPutControlBlock
.L_801C1BAC:
/* 801C1BAC 001BEC8C  7F 43 D3 78 */	mr r3, r26
.L_801C1BB0:
/* 801C1BB0 001BEC90  BB 21 00 24 */	lmw r25, 0x24(r1)
/* 801C1BB4 001BEC94  80 01 00 44 */	lwz r0, 0x44(r1)
/* 801C1BB8 001BEC98  38 21 00 40 */	addi r1, r1, 0x40
/* 801C1BBC 001BEC9C  7C 08 03 A6 */	mtlr r0
/* 801C1BC0 001BECA0  4E 80 00 20 */	blr
.endfn __CARDSetStatusExAsync