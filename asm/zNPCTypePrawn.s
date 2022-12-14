.include "macros.inc"
.file "zNPCTypePrawn.cpp"

# 0x8014F76C - 0x801547BC
.text
.balign 4

# @unnamed@zNPCTypePrawn_cpp@::init_sound()
.fn "init_sound__27@unnamed@zNPCTypePrawn_cpp@Fv", local
/* 8014F76C 0014C84C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8014F770 0014C850  7C 08 02 A6 */	mflr r0
/* 8014F774 0014C854  3C 60 80 33 */	lis r3, ...bss.0@ha
/* 8014F778 0014C858  38 80 00 00 */	li r4, 0x0
/* 8014F77C 0014C85C  90 01 00 14 */	stw r0, 0x14(r1)
/* 8014F780 0014C860  38 A0 00 10 */	li r5, 0x10
/* 8014F784 0014C864  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8014F788 0014C868  3B E3 94 D0 */	addi r31, r3, ...bss.0@l
/* 8014F78C 0014C86C  38 7F 00 C0 */	addi r3, r31, 0xc0
/* 8014F790 0014C870  4B EB 3C C9 */	bl memset
/* 8014F794 0014C874  3C 60 80 27 */	lis r3, "sound_assets__27@unnamed@zNPCTypePrawn_cpp@"@ha
/* 8014F798 0014C878  38 00 00 07 */	li r0, 0x7
/* 8014F79C 0014C87C  39 03 E8 38 */	addi r8, r3, "sound_assets__27@unnamed@zNPCTypePrawn_cpp@"@l
/* 8014F7A0 0014C880  39 7F 00 C0 */	addi r11, r31, 0xc0
/* 8014F7A4 0014C884  38 DF 00 00 */	addi r6, r31, 0x0
/* 8014F7A8 0014C888  38 7F 00 60 */	addi r3, r31, 0x60
/* 8014F7AC 0014C88C  39 40 00 00 */	li r10, 0x0
/* 8014F7B0 0014C890  7C 09 03 A6 */	mtctr r0
.L_8014F7B4:
/* 8014F7B4 0014C894  81 28 00 04 */	lwz r9, 0x4(r8)
/* 8014F7B8 0014C898  28 09 00 00 */	cmplwi r9, 0x0
/* 8014F7BC 0014C89C  41 82 00 2C */	beq .L_8014F7E8
/* 8014F7C0 0014C8A0  80 08 00 00 */	lwz r0, 0x0(r8)
/* 8014F7C4 0014C8A4  54 07 10 3A */	slwi r7, r0, 2
/* 8014F7C8 0014C8A8  7C AB 38 2E */	lwzx r5, r11, r7
/* 8014F7CC 0014C8AC  1C 80 00 18 */	mulli r4, r0, 0x18
/* 8014F7D0 0014C8B0  54 A0 10 3A */	slwi r0, r5, 2
/* 8014F7D4 0014C8B4  7C 84 02 14 */	add r4, r4, r0
/* 8014F7D8 0014C8B8  38 05 00 01 */	addi r0, r5, 0x1
/* 8014F7DC 0014C8BC  7D 26 21 2E */	stwx r9, r6, r4
/* 8014F7E0 0014C8C0  7D 43 21 2E */	stwx r10, r3, r4
/* 8014F7E4 0014C8C4  7C 0B 39 2E */	stwx r0, r11, r7
.L_8014F7E8:
/* 8014F7E8 0014C8C8  81 28 00 14 */	lwz r9, 0x14(r8)
/* 8014F7EC 0014C8CC  39 4A 00 01 */	addi r10, r10, 0x1
/* 8014F7F0 0014C8D0  39 08 00 10 */	addi r8, r8, 0x10
/* 8014F7F4 0014C8D4  28 09 00 00 */	cmplwi r9, 0x0
/* 8014F7F8 0014C8D8  41 82 00 2C */	beq .L_8014F824
/* 8014F7FC 0014C8DC  80 08 00 00 */	lwz r0, 0x0(r8)
/* 8014F800 0014C8E0  54 07 10 3A */	slwi r7, r0, 2
/* 8014F804 0014C8E4  7C AB 38 2E */	lwzx r5, r11, r7
/* 8014F808 0014C8E8  1C 80 00 18 */	mulli r4, r0, 0x18
/* 8014F80C 0014C8EC  54 A0 10 3A */	slwi r0, r5, 2
/* 8014F810 0014C8F0  7C 84 02 14 */	add r4, r4, r0
/* 8014F814 0014C8F4  38 05 00 01 */	addi r0, r5, 0x1
/* 8014F818 0014C8F8  7D 26 21 2E */	stwx r9, r6, r4
/* 8014F81C 0014C8FC  7D 43 21 2E */	stwx r10, r3, r4
/* 8014F820 0014C900  7C 0B 39 2E */	stwx r0, r11, r7
.L_8014F824:
/* 8014F824 0014C904  39 08 00 10 */	addi r8, r8, 0x10
/* 8014F828 0014C908  39 4A 00 01 */	addi r10, r10, 0x1
/* 8014F82C 0014C90C  42 00 FF 88 */	bdnz .L_8014F7B4
/* 8014F830 0014C910  38 7F 00 D0 */	addi r3, r31, 0xd0
/* 8014F834 0014C914  38 80 00 00 */	li r4, 0x0
/* 8014F838 0014C918  38 A0 00 40 */	li r5, 0x40
/* 8014F83C 0014C91C  4B EB 3C 1D */	bl memset
/* 8014F840 0014C920  38 00 00 00 */	li r0, 0x0
/* 8014F844 0014C924  38 7F 00 D0 */	addi r3, r31, 0xd0
/* 8014F848 0014C928  90 1F 00 D0 */	stw r0, 0xd0(r31)
/* 8014F84C 0014C92C  90 03 00 04 */	stw r0, 0x4(r3)
/* 8014F850 0014C930  90 03 00 10 */	stw r0, 0x10(r3)
/* 8014F854 0014C934  90 03 00 14 */	stw r0, 0x14(r3)
/* 8014F858 0014C938  90 03 00 20 */	stw r0, 0x20(r3)
/* 8014F85C 0014C93C  90 03 00 24 */	stw r0, 0x24(r3)
/* 8014F860 0014C940  90 03 00 30 */	stw r0, 0x30(r3)
/* 8014F864 0014C944  90 03 00 34 */	stw r0, 0x34(r3)
/* 8014F868 0014C948  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8014F86C 0014C94C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8014F870 0014C950  7C 08 03 A6 */	mtlr r0
/* 8014F874 0014C954  38 21 00 10 */	addi r1, r1, 0x10
/* 8014F878 0014C958  4E 80 00 20 */	blr
.endfn "init_sound__27@unnamed@zNPCTypePrawn_cpp@Fv"

# @unnamed@zNPCTypePrawn_cpp@::reset_sound()
.fn "reset_sound__27@unnamed@zNPCTypePrawn_cpp@Fv", local
/* 8014F87C 0014C95C  3C 60 80 33 */	lis r3, "sound_data__27@unnamed@zNPCTypePrawn_cpp@"@ha
/* 8014F880 0014C960  38 00 00 00 */	li r0, 0x0
/* 8014F884 0014C964  38 63 95 A0 */	addi r3, r3, "sound_data__27@unnamed@zNPCTypePrawn_cpp@"@l
/* 8014F888 0014C968  90 03 00 04 */	stw r0, 0x4(r3)
/* 8014F88C 0014C96C  90 03 00 14 */	stw r0, 0x14(r3)
/* 8014F890 0014C970  90 03 00 24 */	stw r0, 0x24(r3)
/* 8014F894 0014C974  90 03 00 34 */	stw r0, 0x34(r3)
/* 8014F898 0014C978  4E 80 00 20 */	blr
.endfn "reset_sound__27@unnamed@zNPCTypePrawn_cpp@Fv"

# @unnamed@zNPCTypePrawn_cpp@::play_sound(int, const xVec3*, float)
.fn "play_sound__27@unnamed@zNPCTypePrawn_cpp@FiPC5xVec3f", local
/* 8014F89C 0014C97C  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 8014F8A0 0014C980  7C 08 02 A6 */	mflr r0
/* 8014F8A4 0014C984  90 01 00 24 */	stw r0, 0x24(r1)
/* 8014F8A8 0014C988  DB E1 00 10 */	stfd f31, 0x10(r1)
/* 8014F8AC 0014C98C  F3 E1 00 18 */	psq_st f31, 0x18(r1), 0, qr0
/* 8014F8B0 0014C990  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8014F8B4 0014C994  93 C1 00 08 */	stw r30, 0x8(r1)
/* 8014F8B8 0014C998  1C E3 00 18 */	mulli r7, r3, 0x18
/* 8014F8BC 0014C99C  3C C0 80 33 */	lis r6, "tweak__27@unnamed@zNPCTypePrawn_cpp@"@ha
/* 8014F8C0 0014C9A0  3C A0 80 27 */	lis r5, "sound_assets__27@unnamed@zNPCTypePrawn_cpp@"@ha
/* 8014F8C4 0014C9A4  FF E0 08 90 */	fmr f31, f1
/* 8014F8C8 0014C9A8  38 06 95 E0 */	addi r0, r6, "tweak__27@unnamed@zNPCTypePrawn_cpp@"@l
/* 8014F8CC 0014C9AC  7C C0 3A 14 */	add r6, r0, r7
/* 8014F8D0 0014C9B0  39 26 01 AC */	addi r9, r6, 0x1ac
/* 8014F8D4 0014C9B4  80 C6 01 AC */	lwz r6, 0x1ac(r6)
/* 8014F8D8 0014C9B8  54 68 20 36 */	slwi r8, r3, 4
/* 8014F8DC 0014C9BC  3C E0 80 33 */	lis r7, "sound_data__27@unnamed@zNPCTypePrawn_cpp@"@ha
/* 8014F8E0 0014C9C0  38 05 E8 38 */	addi r0, r5, "sound_assets__27@unnamed@zNPCTypePrawn_cpp@"@l
/* 8014F8E4 0014C9C4  54 C3 20 36 */	slwi r3, r6, 4
/* 8014F8E8 0014C9C8  38 A7 95 A0 */	addi r5, r7, "sound_data__27@unnamed@zNPCTypePrawn_cpp@"@l
/* 8014F8EC 0014C9CC  7C 9E 23 78 */	mr r30, r4
/* 8014F8F0 0014C9D0  7C E0 1A 14 */	add r7, r0, r3
/* 8014F8F4 0014C9D4  80 87 00 0C */	lwz r4, 0xc(r7)
/* 8014F8F8 0014C9D8  7F E5 42 14 */	add r31, r5, r8
/* 8014F8FC 0014C9DC  54 80 07 BD */	rlwinm. r0, r4, 0, 30, 30
/* 8014F900 0014C9E0  41 82 00 14 */	beq .L_8014F914
/* 8014F904 0014C9E4  80 7F 00 04 */	lwz r3, 0x4(r31)
/* 8014F908 0014C9E8  28 03 00 00 */	cmplwi r3, 0x0
/* 8014F90C 0014C9EC  41 82 00 08 */	beq .L_8014F914
/* 8014F910 0014C9F0  48 00 00 88 */	b .L_8014F998
.L_8014F914:
/* 8014F914 0014C9F4  54 80 07 FF */	clrlwi. r0, r4, 31
/* 8014F918 0014C9F8  41 82 00 40 */	beq .L_8014F958
/* 8014F91C 0014C9FC  C0 09 00 04 */	lfs f0, 0x4(r9)
/* 8014F920 0014CA00  7F C6 F3 78 */	mr r6, r30
/* 8014F924 0014CA04  80 7F 00 00 */	lwz r3, 0x0(r31)
/* 8014F928 0014CA08  38 A0 08 00 */	li r5, 0x800
/* 8014F92C 0014CA0C  EC 3F 00 32 */	fmuls f1, f31, f0
/* 8014F930 0014CA10  C0 42 A7 68 */	lfs f2, "@1052"@sda21(r2)
/* 8014F934 0014CA14  80 87 00 08 */	lwz r4, 0x8(r7)
/* 8014F938 0014CA18  38 E0 00 00 */	li r7, 0x0
/* 8014F93C 0014CA1C  C0 69 00 08 */	lfs f3, 0x8(r9)
/* 8014F940 0014CA20  C0 89 00 0C */	lfs f4, 0xc(r9)
/* 8014F944 0014CA24  C0 A2 A7 6C */	lfs f5, "@1053"@sda21(r2)
/* 8014F948 0014CA28  C0 C9 00 10 */	lfs f6, 0x10(r9)
/* 8014F94C 0014CA2C  4B EF 9C 21 */	bl xSndPlay3DFade__FUiffUiUiPC5xVec3ff14sound_categoryff
/* 8014F950 0014CA30  90 7F 00 04 */	stw r3, 0x4(r31)
/* 8014F954 0014CA34  48 00 00 38 */	b .L_8014F98C
.L_8014F958:
/* 8014F958 0014CA38  C0 09 00 04 */	lfs f0, 0x4(r9)
/* 8014F95C 0014CA3C  7F C6 F3 78 */	mr r6, r30
/* 8014F960 0014CA40  80 7F 00 00 */	lwz r3, 0x0(r31)
/* 8014F964 0014CA44  38 A0 08 00 */	li r5, 0x800
/* 8014F968 0014CA48  EC 3F 00 32 */	fmuls f1, f31, f0
/* 8014F96C 0014CA4C  C0 42 A7 68 */	lfs f2, "@1052"@sda21(r2)
/* 8014F970 0014CA50  80 87 00 08 */	lwz r4, 0x8(r7)
/* 8014F974 0014CA54  38 E0 00 00 */	li r7, 0x0
/* 8014F978 0014CA58  C0 69 00 08 */	lfs f3, 0x8(r9)
/* 8014F97C 0014CA5C  C0 89 00 0C */	lfs f4, 0xc(r9)
/* 8014F980 0014CA60  C0 A9 00 10 */	lfs f5, 0x10(r9)
/* 8014F984 0014CA64  4B EF 91 11 */	bl xSndPlay3D__FUiffUiUiPC5xVec3ff14sound_categoryf
/* 8014F988 0014CA68  90 7F 00 04 */	stw r3, 0x4(r31)
.L_8014F98C:
/* 8014F98C 0014CA6C  93 DF 00 08 */	stw r30, 0x8(r31)
/* 8014F990 0014CA70  D3 FF 00 0C */	stfs f31, 0xc(r31)
/* 8014F994 0014CA74  80 7F 00 04 */	lwz r3, 0x4(r31)
.L_8014F998:
/* 8014F998 0014CA78  E3 E1 00 18 */	psq_l f31, 0x18(r1), 0, qr0
/* 8014F99C 0014CA7C  80 01 00 24 */	lwz r0, 0x24(r1)
/* 8014F9A0 0014CA80  CB E1 00 10 */	lfd f31, 0x10(r1)
/* 8014F9A4 0014CA84  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8014F9A8 0014CA88  83 C1 00 08 */	lwz r30, 0x8(r1)
/* 8014F9AC 0014CA8C  7C 08 03 A6 */	mtlr r0
/* 8014F9B0 0014CA90  38 21 00 20 */	addi r1, r1, 0x20
/* 8014F9B4 0014CA94  4E 80 00 20 */	blr
.endfn "play_sound__27@unnamed@zNPCTypePrawn_cpp@FiPC5xVec3f"

# @unnamed@zNPCTypePrawn_cpp@::kill_sound(int, unsigned int)
.fn "kill_sound__27@unnamed@zNPCTypePrawn_cpp@FiUi", local
/* 8014F9B8 0014CA98  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8014F9BC 0014CA9C  7C 08 02 A6 */	mflr r0
/* 8014F9C0 0014CAA0  1C E3 00 18 */	mulli r7, r3, 0x18
/* 8014F9C4 0014CAA4  3C C0 80 33 */	lis r6, "tweak__27@unnamed@zNPCTypePrawn_cpp@"@ha
/* 8014F9C8 0014CAA8  90 01 00 14 */	stw r0, 0x14(r1)
/* 8014F9CC 0014CAAC  3C A0 80 27 */	lis r5, "sound_assets__27@unnamed@zNPCTypePrawn_cpp@"@ha
/* 8014F9D0 0014CAB0  38 06 95 E0 */	addi r0, r6, "tweak__27@unnamed@zNPCTypePrawn_cpp@"@l
/* 8014F9D4 0014CAB4  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8014F9D8 0014CAB8  7C C0 3A 14 */	add r6, r0, r7
/* 8014F9DC 0014CABC  38 05 E8 38 */	addi r0, r5, "sound_assets__27@unnamed@zNPCTypePrawn_cpp@"@l
/* 8014F9E0 0014CAC0  80 A6 01 AC */	lwz r5, 0x1ac(r6)
/* 8014F9E4 0014CAC4  54 68 20 36 */	slwi r8, r3, 4
/* 8014F9E8 0014CAC8  3C E0 80 33 */	lis r7, "sound_data__27@unnamed@zNPCTypePrawn_cpp@"@ha
/* 8014F9EC 0014CACC  39 26 01 AC */	addi r9, r6, 0x1ac
/* 8014F9F0 0014CAD0  54 A3 20 36 */	slwi r3, r5, 4
/* 8014F9F4 0014CAD4  7C 60 1A 14 */	add r3, r0, r3
/* 8014F9F8 0014CAD8  38 C7 95 A0 */	addi r6, r7, "sound_data__27@unnamed@zNPCTypePrawn_cpp@"@l
/* 8014F9FC 0014CADC  80 03 00 0C */	lwz r0, 0xc(r3)
/* 8014FA00 0014CAE0  7F E6 42 14 */	add r31, r6, r8
/* 8014FA04 0014CAE4  54 00 07 FF */	clrlwi. r0, r0, 31
/* 8014FA08 0014CAE8  41 82 00 14 */	beq .L_8014FA1C
/* 8014FA0C 0014CAEC  C0 29 00 14 */	lfs f1, 0x14(r9)
/* 8014FA10 0014CAF0  7C 83 23 78 */	mr r3, r4
/* 8014FA14 0014CAF4  4B EF 9C 31 */	bl xSndStopFade__FUif
/* 8014FA18 0014CAF8  48 00 00 0C */	b .L_8014FA24
.L_8014FA1C:
/* 8014FA1C 0014CAFC  7C 83 23 78 */	mr r3, r4
/* 8014FA20 0014CB00  4B EF 97 E1 */	bl xSndStop__FUi
.L_8014FA24:
/* 8014FA24 0014CB04  38 00 00 00 */	li r0, 0x0
/* 8014FA28 0014CB08  90 1F 00 04 */	stw r0, 0x4(r31)
/* 8014FA2C 0014CB0C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8014FA30 0014CB10  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8014FA34 0014CB14  7C 08 03 A6 */	mtlr r0
/* 8014FA38 0014CB18  38 21 00 10 */	addi r1, r1, 0x10
/* 8014FA3C 0014CB1C  4E 80 00 20 */	blr
.endfn "kill_sound__27@unnamed@zNPCTypePrawn_cpp@FiUi"

# @unnamed@zNPCTypePrawn_cpp@::kill_sound(int)
.fn "kill_sound__27@unnamed@zNPCTypePrawn_cpp@Fi", local
/* 8014FA40 0014CB20  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8014FA44 0014CB24  7C 08 02 A6 */	mflr r0
/* 8014FA48 0014CB28  3C 80 80 33 */	lis r4, "sound_data__27@unnamed@zNPCTypePrawn_cpp@"@ha
/* 8014FA4C 0014CB2C  54 65 20 36 */	slwi r5, r3, 4
/* 8014FA50 0014CB30  90 01 00 14 */	stw r0, 0x14(r1)
/* 8014FA54 0014CB34  38 04 95 A0 */	addi r0, r4, "sound_data__27@unnamed@zNPCTypePrawn_cpp@"@l
/* 8014FA58 0014CB38  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8014FA5C 0014CB3C  7F E0 2A 14 */	add r31, r0, r5
/* 8014FA60 0014CB40  80 DF 00 04 */	lwz r6, 0x4(r31)
/* 8014FA64 0014CB44  28 06 00 00 */	cmplwi r6, 0x0
/* 8014FA68 0014CB48  41 82 00 54 */	beq .L_8014FABC
/* 8014FA6C 0014CB4C  1C A3 00 18 */	mulli r5, r3, 0x18
/* 8014FA70 0014CB50  3C 80 80 33 */	lis r4, "tweak__27@unnamed@zNPCTypePrawn_cpp@"@ha
/* 8014FA74 0014CB54  3C 60 80 27 */	lis r3, "sound_assets__27@unnamed@zNPCTypePrawn_cpp@"@ha
/* 8014FA78 0014CB58  38 04 95 E0 */	addi r0, r4, "tweak__27@unnamed@zNPCTypePrawn_cpp@"@l
/* 8014FA7C 0014CB5C  7C 80 2A 14 */	add r4, r0, r5
/* 8014FA80 0014CB60  38 03 E8 38 */	addi r0, r3, "sound_assets__27@unnamed@zNPCTypePrawn_cpp@"@l
/* 8014FA84 0014CB64  84 64 01 AC */	lwzu r3, 0x1ac(r4)
/* 8014FA88 0014CB68  54 63 20 36 */	slwi r3, r3, 4
/* 8014FA8C 0014CB6C  7C 60 1A 14 */	add r3, r0, r3
/* 8014FA90 0014CB70  80 03 00 0C */	lwz r0, 0xc(r3)
/* 8014FA94 0014CB74  54 00 07 FF */	clrlwi. r0, r0, 31
/* 8014FA98 0014CB78  41 82 00 14 */	beq .L_8014FAAC
/* 8014FA9C 0014CB7C  C0 24 00 14 */	lfs f1, 0x14(r4)
/* 8014FAA0 0014CB80  7C C3 33 78 */	mr r3, r6
/* 8014FAA4 0014CB84  4B EF 9B A1 */	bl xSndStopFade__FUif
/* 8014FAA8 0014CB88  48 00 00 0C */	b .L_8014FAB4
.L_8014FAAC:
/* 8014FAAC 0014CB8C  7C C3 33 78 */	mr r3, r6
/* 8014FAB0 0014CB90  4B EF 97 51 */	bl xSndStop__FUi
.L_8014FAB4:
/* 8014FAB4 0014CB94  38 00 00 00 */	li r0, 0x0
/* 8014FAB8 0014CB98  90 1F 00 04 */	stw r0, 0x4(r31)
.L_8014FABC:
/* 8014FABC 0014CB9C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8014FAC0 0014CBA0  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8014FAC4 0014CBA4  7C 08 03 A6 */	mtlr r0
/* 8014FAC8 0014CBA8  38 21 00 10 */	addi r1, r1, 0x10
/* 8014FACC 0014CBAC  4E 80 00 20 */	blr
.endfn "kill_sound__27@unnamed@zNPCTypePrawn_cpp@Fi"

# aqua_beam::load(const aqua_beam::config&, unsigned int)
.fn load__9aqua_beamFRCQ29aqua_beam6configUi, global
/* 8014FAD0 0014CBB0  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8014FAD4 0014CBB4  7C 08 02 A6 */	mflr r0
/* 8014FAD8 0014CBB8  90 01 00 14 */	stw r0, 0x14(r1)
/* 8014FADC 0014CBBC  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8014FAE0 0014CBC0  7C 9F 23 78 */	mr r31, r4
/* 8014FAE4 0014CBC4  38 80 00 00 */	li r4, 0x0
/* 8014FAE8 0014CBC8  93 C1 00 08 */	stw r30, 0x8(r1)
/* 8014FAEC 0014CBCC  7C 7E 1B 78 */	mr r30, r3
/* 8014FAF0 0014CBD0  7C A3 2B 78 */	mr r3, r5
/* 8014FAF4 0014CBD4  4B EF BC 19 */	bl xSTFindAsset__FUiPUi
/* 8014FAF8 0014CBD8  7C 60 1B 78 */	mr r0, r3
/* 8014FAFC 0014CBDC  7F C3 F3 78 */	mr r3, r30
/* 8014FB00 0014CBE0  7C 05 03 78 */	mr r5, r0
/* 8014FB04 0014CBE4  7F E4 FB 78 */	mr r4, r31
/* 8014FB08 0014CBE8  48 00 00 1D */	bl load__9aqua_beamFRCQ29aqua_beam6configR8RpAtomic
/* 8014FB0C 0014CBEC  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8014FB10 0014CBF0  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8014FB14 0014CBF4  83 C1 00 08 */	lwz r30, 0x8(r1)
/* 8014FB18 0014CBF8  7C 08 03 A6 */	mtlr r0
/* 8014FB1C 0014CBFC  38 21 00 10 */	addi r1, r1, 0x10
/* 8014FB20 0014CC00  4E 80 00 20 */	blr
.endfn load__9aqua_beamFRCQ29aqua_beam6configUi

# aqua_beam::load(const aqua_beam::config&, RpAtomic&)
.fn load__9aqua_beamFRCQ29aqua_beam6configR8RpAtomic, global
/* 8014FB24 0014CC04  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8014FB28 0014CC08  7C 08 02 A6 */	mflr r0
/* 8014FB2C 0014CC0C  90 01 00 14 */	stw r0, 0x14(r1)
/* 8014FB30 0014CC10  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8014FB34 0014CC14  7C 7F 1B 78 */	mr r31, r3
/* 8014FB38 0014CC18  90 A3 00 9C */	stw r5, 0x9c(r3)
/* 8014FB3C 0014CC1C  48 00 4C B1 */	bl __as__Q29aqua_beam6configFRCQ29aqua_beam6config
/* 8014FB40 0014CC20  38 7F 00 A4 */	addi r3, r31, 0xa4
/* 8014FB44 0014CC24  48 00 4C 79 */	bl "reset__42fixed_queue<Q29aqua_beam12ring_segment,31>Fv"
/* 8014FB48 0014CC28  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8014FB4C 0014CC2C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8014FB50 0014CC30  7C 08 03 A6 */	mtlr r0
/* 8014FB54 0014CC34  38 21 00 10 */	addi r1, r1, 0x10
/* 8014FB58 0014CC38  4E 80 00 20 */	blr
.endfn load__9aqua_beamFRCQ29aqua_beam6configR8RpAtomic

# aqua_beam::reset()
.fn reset__9aqua_beamFv, global
/* 8014FB5C 0014CC3C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8014FB60 0014CC40  7C 08 02 A6 */	mflr r0
/* 8014FB64 0014CC44  90 01 00 14 */	stw r0, 0x14(r1)
/* 8014FB68 0014CC48  38 00 00 00 */	li r0, 0x0
/* 8014FB6C 0014CC4C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8014FB70 0014CC50  7C 7F 1B 78 */	mr r31, r3
/* 8014FB74 0014CC54  98 03 00 3C */	stb r0, 0x3c(r3)
/* 8014FB78 0014CC58  48 00 00 0C */	b .L_8014FB84
.L_8014FB7C:
/* 8014FB7C 0014CC5C  7F E3 FB 78 */	mr r3, r31
/* 8014FB80 0014CC60  48 00 05 15 */	bl kill_ring__9aqua_beamFv
.L_8014FB84:
/* 8014FB84 0014CC64  38 7F 00 A4 */	addi r3, r31, 0xa4
/* 8014FB88 0014CC68  48 00 4C E1 */	bl "empty__42fixed_queue<Q29aqua_beam12ring_segment,31>CFv"
/* 8014FB8C 0014CC6C  54 60 06 3F */	clrlwi. r0, r3, 24
/* 8014FB90 0014CC70  41 82 FF EC */	beq .L_8014FB7C
/* 8014FB94 0014CC74  38 00 00 00 */	li r0, 0x0
/* 8014FB98 0014CC78  90 1F 0F 54 */	stw r0, 0xf54(r31)
/* 8014FB9C 0014CC7C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8014FBA0 0014CC80  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8014FBA4 0014CC84  7C 08 03 A6 */	mtlr r0
/* 8014FBA8 0014CC88  38 21 00 10 */	addi r1, r1, 0x10
/* 8014FBAC 0014CC8C  4E 80 00 20 */	blr
.endfn reset__9aqua_beamFv

# aqua_beam::start()
.fn start__9aqua_beamFv, global
/* 8014FBB0 0014CC90  38 00 00 01 */	li r0, 0x1
/* 8014FBB4 0014CC94  98 03 00 3C */	stb r0, 0x3c(r3)
/* 8014FBB8 0014CC98  C0 02 A7 6C */	lfs f0, "@1053"@sda21(r2)
/* 8014FBBC 0014CC9C  D0 03 00 98 */	stfs f0, 0x98(r3)
/* 8014FBC0 0014CCA0  C0 02 A7 70 */	lfs f0, "@1113"@sda21(r2)
/* 8014FBC4 0014CCA4  D0 03 00 A0 */	stfs f0, 0xa0(r3)
/* 8014FBC8 0014CCA8  4E 80 00 20 */	blr
.endfn start__9aqua_beamFv

# aqua_beam::stop()
.fn stop__9aqua_beamFv, global
/* 8014FBCC 0014CCAC  38 00 00 00 */	li r0, 0x0
/* 8014FBD0 0014CCB0  98 03 00 3C */	stb r0, 0x3c(r3)
/* 8014FBD4 0014CCB4  4E 80 00 20 */	blr
.endfn stop__9aqua_beamFv

# aqua_beam::update(float)
.fn update__9aqua_beamFf, global
/* 8014FBD8 0014CCB8  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8014FBDC 0014CCBC  7C 08 02 A6 */	mflr r0
/* 8014FBE0 0014CCC0  90 01 00 14 */	stw r0, 0x14(r1)
/* 8014FBE4 0014CCC4  C0 03 00 98 */	lfs f0, 0x98(r3)
/* 8014FBE8 0014CCC8  EC 00 08 2A */	fadds f0, f0, f1
/* 8014FBEC 0014CCCC  D0 03 00 98 */	stfs f0, 0x98(r3)
/* 8014FBF0 0014CCD0  C0 43 00 00 */	lfs f2, 0x0(r3)
/* 8014FBF4 0014CCD4  C0 02 A7 6C */	lfs f0, "@1053"@sda21(r2)
/* 8014FBF8 0014CCD8  FC 02 00 40 */	fcmpo cr0, f2, f0
/* 8014FBFC 0014CCDC  4C 41 13 82 */	cror eq, gt, eq
/* 8014FC00 0014CCE0  40 82 00 1C */	bne .L_8014FC1C
/* 8014FC04 0014CCE4  C0 03 00 98 */	lfs f0, 0x98(r3)
/* 8014FC08 0014CCE8  FC 00 10 40 */	fcmpo cr0, f0, f2
/* 8014FC0C 0014CCEC  4C 41 13 82 */	cror eq, gt, eq
/* 8014FC10 0014CCF0  40 82 00 0C */	bne .L_8014FC1C
/* 8014FC14 0014CCF4  38 00 00 00 */	li r0, 0x0
/* 8014FC18 0014CCF8  98 03 00 3C */	stb r0, 0x3c(r3)
.L_8014FC1C:
/* 8014FC1C 0014CCFC  48 00 01 FD */	bl update_rings__9aqua_beamFf
/* 8014FC20 0014CD00  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8014FC24 0014CD04  7C 08 03 A6 */	mtlr r0
/* 8014FC28 0014CD08  38 21 00 10 */	addi r1, r1, 0x10
/* 8014FC2C 0014CD0C  4E 80 00 20 */	blr
.endfn update__9aqua_beamFf

# aqua_beam::render()
.fn render__9aqua_beamFv, global
/* 8014FC30 0014CD10  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 8014FC34 0014CD14  7C 08 02 A6 */	mflr r0
/* 8014FC38 0014CD18  90 01 00 24 */	stw r0, 0x24(r1)
/* 8014FC3C 0014CD1C  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 8014FC40 0014CD20  7C 7F 1B 78 */	mr r31, r3
/* 8014FC44 0014CD24  38 7F 00 A4 */	addi r3, r31, 0xa4
/* 8014FC48 0014CD28  48 00 4C FD */	bl "begin__42fixed_queue<Q29aqua_beam12ring_segment,31>CFv"
/* 8014FC4C 0014CD2C  90 81 00 14 */	stw r4, 0x14(r1)
/* 8014FC50 0014CD30  90 61 00 10 */	stw r3, 0x10(r1)
/* 8014FC54 0014CD34  48 00 00 20 */	b .L_8014FC74
.L_8014FC58:
/* 8014FC58 0014CD38  38 61 00 10 */	addi r3, r1, 0x10
/* 8014FC5C 0014CD3C  48 00 4C D1 */	bl "__ml__Q242fixed_queue<Q29aqua_beam12ring_segment,31>8iteratorCFv"
/* 8014FC60 0014CD40  7C 64 1B 78 */	mr r4, r3
/* 8014FC64 0014CD44  7F E3 FB 78 */	mr r3, r31
/* 8014FC68 0014CD48  48 00 05 41 */	bl render_ring__9aqua_beamFRQ29aqua_beam12ring_segment
/* 8014FC6C 0014CD4C  38 61 00 10 */	addi r3, r1, 0x10
/* 8014FC70 0014CD50  48 00 4C 71 */	bl "__pp__Q242fixed_queue<Q29aqua_beam12ring_segment,31>8iteratorFv"
.L_8014FC74:
/* 8014FC74 0014CD54  38 7F 00 A4 */	addi r3, r31, 0xa4
/* 8014FC78 0014CD58  48 00 4C 25 */	bl "end__42fixed_queue<Q29aqua_beam12ring_segment,31>CFv"
/* 8014FC7C 0014CD5C  90 81 00 0C */	stw r4, 0xc(r1)
/* 8014FC80 0014CD60  38 81 00 08 */	addi r4, r1, 0x8
/* 8014FC84 0014CD64  90 61 00 08 */	stw r3, 0x8(r1)
/* 8014FC88 0014CD68  38 61 00 10 */	addi r3, r1, 0x10
/* 8014FC8C 0014CD6C  48 00 4B F5 */	bl "__ne__Q242fixed_queue<Q29aqua_beam12ring_segment,31>8iteratorCFRCQ242fixed_queue<Q29aqua_beam12ring_segment,31>8iterator"
/* 8014FC90 0014CD70  54 60 06 3F */	clrlwi. r0, r3, 24
/* 8014FC94 0014CD74  40 82 FF C4 */	bne .L_8014FC58
/* 8014FC98 0014CD78  80 01 00 24 */	lwz r0, 0x24(r1)
/* 8014FC9C 0014CD7C  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 8014FCA0 0014CD80  7C 08 03 A6 */	mtlr r0
/* 8014FCA4 0014CD84  38 21 00 20 */	addi r1, r1, 0x20
/* 8014FCA8 0014CD88  4E 80 00 20 */	blr
.endfn render__9aqua_beamFv

# aqua_beam::hits_sphere(const xSphere&) const
.fn hits_sphere__9aqua_beamCFRC7xSphere, global
/* 8014FCAC 0014CD8C  94 21 FF 70 */	stwu r1, -0x90(r1)
/* 8014FCB0 0014CD90  7C 08 02 A6 */	mflr r0
/* 8014FCB4 0014CD94  90 01 00 94 */	stw r0, 0x94(r1)
/* 8014FCB8 0014CD98  DB E1 00 80 */	stfd f31, 0x80(r1)
/* 8014FCBC 0014CD9C  F3 E1 00 88 */	psq_st f31, 0x88(r1), 0, qr0
/* 8014FCC0 0014CDA0  DB C1 00 70 */	stfd f30, 0x70(r1)
/* 8014FCC4 0014CDA4  F3 C1 00 78 */	psq_st f30, 0x78(r1), 0, qr0
/* 8014FCC8 0014CDA8  DB A1 00 60 */	stfd f29, 0x60(r1)
/* 8014FCCC 0014CDAC  F3 A1 00 68 */	psq_st f29, 0x68(r1), 0, qr0
/* 8014FCD0 0014CDB0  DB 81 00 50 */	stfd f28, 0x50(r1)
/* 8014FCD4 0014CDB4  F3 81 00 58 */	psq_st f28, 0x58(r1), 0, qr0
/* 8014FCD8 0014CDB8  93 E1 00 4C */	stw r31, 0x4c(r1)
/* 8014FCDC 0014CDBC  93 C1 00 48 */	stw r30, 0x48(r1)
/* 8014FCE0 0014CDC0  7C 7E 1B 78 */	mr r30, r3
/* 8014FCE4 0014CDC4  7C 9F 23 78 */	mr r31, r4
/* 8014FCE8 0014CDC8  38 61 00 24 */	addi r3, r1, 0x24
/* 8014FCEC 0014CDCC  38 BE 00 30 */	addi r5, r30, 0x30
/* 8014FCF0 0014CDD0  4B EB B4 DD */	bl __mi__5xVec3CFRC5xVec3
/* 8014FCF4 0014CDD4  80 A1 00 24 */	lwz r5, 0x24(r1)
/* 8014FCF8 0014CDD8  38 7E 00 A4 */	addi r3, r30, 0xa4
/* 8014FCFC 0014CDDC  80 81 00 28 */	lwz r4, 0x28(r1)
/* 8014FD00 0014CDE0  80 01 00 2C */	lwz r0, 0x2c(r1)
/* 8014FD04 0014CDE4  90 A1 00 3C */	stw r5, 0x3c(r1)
/* 8014FD08 0014CDE8  90 81 00 40 */	stw r4, 0x40(r1)
/* 8014FD0C 0014CDEC  90 01 00 44 */	stw r0, 0x44(r1)
/* 8014FD10 0014CDF0  48 00 4C 35 */	bl "begin__42fixed_queue<Q29aqua_beam12ring_segment,31>CFv"
/* 8014FD14 0014CDF4  90 81 00 14 */	stw r4, 0x14(r1)
/* 8014FD18 0014CDF8  C3 BE 00 2C */	lfs f29, 0x2c(r30)
/* 8014FD1C 0014CDFC  90 61 00 10 */	stw r3, 0x10(r1)
/* 8014FD20 0014CE00  C3 DE 00 1C */	lfs f30, 0x1c(r30)
/* 8014FD24 0014CE04  C3 FF 00 0C */	lfs f31, 0xc(r31)
/* 8014FD28 0014CE08  48 00 00 90 */	b .L_8014FDB8
.L_8014FD2C:
/* 8014FD2C 0014CE0C  38 61 00 10 */	addi r3, r1, 0x10
/* 8014FD30 0014CE10  48 00 4B FD */	bl "__ml__Q242fixed_queue<Q29aqua_beam12ring_segment,31>8iteratorCFv"
/* 8014FD34 0014CE14  7C 7F 1B 78 */	mr r31, r3
/* 8014FD38 0014CE18  C0 02 A7 68 */	lfs f0, "@1052"@sda21(r2)
/* 8014FD3C 0014CE1C  C0 23 00 10 */	lfs f1, 0x10(r3)
/* 8014FD40 0014CE20  38 61 00 18 */	addi r3, r1, 0x18
/* 8014FD44 0014CE24  80 BF 00 00 */	lwz r5, 0x0(r31)
/* 8014FD48 0014CE28  38 81 00 3C */	addi r4, r1, 0x3c
/* 8014FD4C 0014CE2C  EC 1E 00 7A */	fmadds f0, f30, f1, f0
/* 8014FD50 0014CE30  80 A5 00 4C */	lwz r5, 0x4c(r5)
/* 8014FD54 0014CE34  EF 9D F8 3A */	fmadds f28, f29, f0, f31
/* 8014FD58 0014CE38  38 A5 00 30 */	addi r5, r5, 0x30
/* 8014FD5C 0014CE3C  4B EB B4 71 */	bl __mi__5xVec3CFRC5xVec3
/* 8014FD60 0014CE40  80 A1 00 18 */	lwz r5, 0x18(r1)
/* 8014FD64 0014CE44  38 61 00 30 */	addi r3, r1, 0x30
/* 8014FD68 0014CE48  80 81 00 1C */	lwz r4, 0x1c(r1)
/* 8014FD6C 0014CE4C  80 01 00 20 */	lwz r0, 0x20(r1)
/* 8014FD70 0014CE50  90 A1 00 30 */	stw r5, 0x30(r1)
/* 8014FD74 0014CE54  90 81 00 34 */	stw r4, 0x34(r1)
/* 8014FD78 0014CE58  90 01 00 38 */	stw r0, 0x38(r1)
/* 8014FD7C 0014CE5C  4B EB B3 81 */	bl length2__5xVec3CFv
/* 8014FD80 0014CE60  EC 1C 07 32 */	fmuls f0, f28, f28
/* 8014FD84 0014CE64  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8014FD88 0014CE68  41 81 00 28 */	bgt .L_8014FDB0
/* 8014FD8C 0014CE6C  38 61 00 30 */	addi r3, r1, 0x30
/* 8014FD90 0014CE70  38 9F 00 3C */	addi r4, r31, 0x3c
/* 8014FD94 0014CE74  4B EC 57 79 */	bl dot__5xVec3CFRC5xVec3
/* 8014FD98 0014CE78  FC 00 0A 10 */	fabs f0, f1
/* 8014FD9C 0014CE7C  FC 00 00 18 */	frsp f0, f0
/* 8014FDA0 0014CE80  FC 00 E0 40 */	fcmpo cr0, f0, f28
/* 8014FDA4 0014CE84  40 80 00 0C */	bge .L_8014FDB0
/* 8014FDA8 0014CE88  38 60 00 01 */	li r3, 0x1
/* 8014FDAC 0014CE8C  48 00 00 34 */	b .L_8014FDE0
.L_8014FDB0:
/* 8014FDB0 0014CE90  38 61 00 10 */	addi r3, r1, 0x10
/* 8014FDB4 0014CE94  48 00 4B 2D */	bl "__pp__Q242fixed_queue<Q29aqua_beam12ring_segment,31>8iteratorFv"
.L_8014FDB8:
/* 8014FDB8 0014CE98  38 7E 00 A4 */	addi r3, r30, 0xa4
/* 8014FDBC 0014CE9C  48 00 4A E1 */	bl "end__42fixed_queue<Q29aqua_beam12ring_segment,31>CFv"
/* 8014FDC0 0014CEA0  90 81 00 0C */	stw r4, 0xc(r1)
/* 8014FDC4 0014CEA4  38 81 00 08 */	addi r4, r1, 0x8
/* 8014FDC8 0014CEA8  90 61 00 08 */	stw r3, 0x8(r1)
/* 8014FDCC 0014CEAC  38 61 00 10 */	addi r3, r1, 0x10
/* 8014FDD0 0014CEB0  48 00 4A B1 */	bl "__ne__Q242fixed_queue<Q29aqua_beam12ring_segment,31>8iteratorCFRCQ242fixed_queue<Q29aqua_beam12ring_segment,31>8iterator"
/* 8014FDD4 0014CEB4  54 60 06 3F */	clrlwi. r0, r3, 24
/* 8014FDD8 0014CEB8  40 82 FF 54 */	bne .L_8014FD2C
/* 8014FDDC 0014CEBC  38 60 00 00 */	li r3, 0x0
.L_8014FDE0:
/* 8014FDE0 0014CEC0  E3 E1 00 88 */	psq_l f31, 0x88(r1), 0, qr0
/* 8014FDE4 0014CEC4  CB E1 00 80 */	lfd f31, 0x80(r1)
/* 8014FDE8 0014CEC8  E3 C1 00 78 */	psq_l f30, 0x78(r1), 0, qr0
/* 8014FDEC 0014CECC  CB C1 00 70 */	lfd f30, 0x70(r1)
/* 8014FDF0 0014CED0  E3 A1 00 68 */	psq_l f29, 0x68(r1), 0, qr0
/* 8014FDF4 0014CED4  CB A1 00 60 */	lfd f29, 0x60(r1)
/* 8014FDF8 0014CED8  E3 81 00 58 */	psq_l f28, 0x58(r1), 0, qr0
/* 8014FDFC 0014CEDC  CB 81 00 50 */	lfd f28, 0x50(r1)
/* 8014FE00 0014CEE0  83 E1 00 4C */	lwz r31, 0x4c(r1)
/* 8014FE04 0014CEE4  80 01 00 94 */	lwz r0, 0x94(r1)
/* 8014FE08 0014CEE8  83 C1 00 48 */	lwz r30, 0x48(r1)
/* 8014FE0C 0014CEEC  7C 08 03 A6 */	mtlr r0
/* 8014FE10 0014CEF0  38 21 00 90 */	addi r1, r1, 0x90
/* 8014FE14 0014CEF4  4E 80 00 20 */	blr
.endfn hits_sphere__9aqua_beamCFRC7xSphere

# aqua_beam::update_rings(float)
.fn update_rings__9aqua_beamFf, global
/* 8014FE18 0014CEF8  94 21 FF C0 */	stwu r1, -0x40(r1)
/* 8014FE1C 0014CEFC  7C 08 02 A6 */	mflr r0
/* 8014FE20 0014CF00  90 01 00 44 */	stw r0, 0x44(r1)
/* 8014FE24 0014CF04  DB E1 00 30 */	stfd f31, 0x30(r1)
/* 8014FE28 0014CF08  F3 E1 00 38 */	psq_st f31, 0x38(r1), 0, qr0
/* 8014FE2C 0014CF0C  93 E1 00 2C */	stw r31, 0x2c(r1)
/* 8014FE30 0014CF10  7C 7F 1B 78 */	mr r31, r3
/* 8014FE34 0014CF14  FF E0 08 90 */	fmr f31, f1
/* 8014FE38 0014CF18  88 03 00 3C */	lbz r0, 0x3c(r3)
/* 8014FE3C 0014CF1C  28 00 00 00 */	cmplwi r0, 0x0
/* 8014FE40 0014CF20  40 82 00 14 */	bne .L_8014FE54
/* 8014FE44 0014CF24  38 7F 00 A4 */	addi r3, r31, 0xa4
/* 8014FE48 0014CF28  48 00 4A 21 */	bl "empty__42fixed_queue<Q29aqua_beam12ring_segment,31>CFv"
/* 8014FE4C 0014CF2C  54 60 06 3F */	clrlwi. r0, r3, 24
/* 8014FE50 0014CF30  40 82 00 F8 */	bne .L_8014FF48
.L_8014FE54:
/* 8014FE54 0014CF34  88 1F 00 3C */	lbz r0, 0x3c(r31)
/* 8014FE58 0014CF38  28 00 00 00 */	cmplwi r0, 0x0
/* 8014FE5C 0014CF3C  41 82 00 4C */	beq .L_8014FEA8
/* 8014FE60 0014CF40  C0 1F 00 A0 */	lfs f0, 0xa0(r31)
/* 8014FE64 0014CF44  C0 5F 00 18 */	lfs f2, 0x18(r31)
/* 8014FE68 0014CF48  C0 3F 00 98 */	lfs f1, 0x98(r31)
/* 8014FE6C 0014CF4C  EC 00 10 2A */	fadds f0, f0, f2
/* 8014FE70 0014CF50  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8014FE74 0014CF54  4C 41 13 82 */	cror eq, gt, eq
/* 8014FE78 0014CF58  40 82 00 30 */	bne .L_8014FEA8
/* 8014FE7C 0014CF5C  D0 1F 00 A0 */	stfs f0, 0xa0(r31)
/* 8014FE80 0014CF60  C0 3F 00 A0 */	lfs f1, 0xa0(r31)
/* 8014FE84 0014CF64  C0 1F 00 18 */	lfs f0, 0x18(r31)
/* 8014FE88 0014CF68  C0 5F 00 98 */	lfs f2, 0x98(r31)
/* 8014FE8C 0014CF6C  EC 01 00 2A */	fadds f0, f1, f0
/* 8014FE90 0014CF70  FC 02 00 40 */	fcmpo cr0, f2, f0
/* 8014FE94 0014CF74  4C 41 13 82 */	cror eq, gt, eq
/* 8014FE98 0014CF78  40 82 00 08 */	bne .L_8014FEA0
/* 8014FE9C 0014CF7C  D0 5F 00 A0 */	stfs f2, 0xa0(r31)
.L_8014FEA0:
/* 8014FEA0 0014CF80  7F E3 FB 78 */	mr r3, r31
/* 8014FEA4 0014CF84  48 00 00 C1 */	bl emit_ring__9aqua_beamFv
.L_8014FEA8:
/* 8014FEA8 0014CF88  38 7F 00 A4 */	addi r3, r31, 0xa4
/* 8014FEAC 0014CF8C  48 00 4A 99 */	bl "begin__42fixed_queue<Q29aqua_beam12ring_segment,31>CFv"
/* 8014FEB0 0014CF90  90 81 00 1C */	stw r4, 0x1c(r1)
/* 8014FEB4 0014CF94  90 61 00 18 */	stw r3, 0x18(r1)
/* 8014FEB8 0014CF98  48 00 00 2C */	b .L_8014FEE4
.L_8014FEBC:
/* 8014FEBC 0014CF9C  80 81 00 18 */	lwz r4, 0x18(r1)
/* 8014FEC0 0014CFA0  FC 20 F8 90 */	fmr f1, f31
/* 8014FEC4 0014CFA4  80 01 00 1C */	lwz r0, 0x1c(r1)
/* 8014FEC8 0014CFA8  7F E3 FB 78 */	mr r3, r31
/* 8014FECC 0014CFAC  90 81 00 10 */	stw r4, 0x10(r1)
/* 8014FED0 0014CFB0  38 81 00 10 */	addi r4, r1, 0x10
/* 8014FED4 0014CFB4  90 01 00 14 */	stw r0, 0x14(r1)
/* 8014FED8 0014CFB8  48 00 02 1D */	bl "update_ring__9aqua_beamFQ242fixed_queue<Q29aqua_beam12ring_segment,31>8iteratorf"
/* 8014FEDC 0014CFBC  38 61 00 18 */	addi r3, r1, 0x18
/* 8014FEE0 0014CFC0  48 00 4A 01 */	bl "__pp__Q242fixed_queue<Q29aqua_beam12ring_segment,31>8iteratorFv"
.L_8014FEE4:
/* 8014FEE4 0014CFC4  38 7F 00 A4 */	addi r3, r31, 0xa4
/* 8014FEE8 0014CFC8  48 00 49 B5 */	bl "end__42fixed_queue<Q29aqua_beam12ring_segment,31>CFv"
/* 8014FEEC 0014CFCC  90 81 00 0C */	stw r4, 0xc(r1)
/* 8014FEF0 0014CFD0  38 81 00 08 */	addi r4, r1, 0x8
/* 8014FEF4 0014CFD4  90 61 00 08 */	stw r3, 0x8(r1)
/* 8014FEF8 0014CFD8  38 61 00 18 */	addi r3, r1, 0x18
/* 8014FEFC 0014CFDC  48 00 49 85 */	bl "__ne__Q242fixed_queue<Q29aqua_beam12ring_segment,31>8iteratorCFRCQ242fixed_queue<Q29aqua_beam12ring_segment,31>8iterator"
/* 8014FF00 0014CFE0  54 60 06 3F */	clrlwi. r0, r3, 24
/* 8014FF04 0014CFE4  40 82 FF B8 */	bne .L_8014FEBC
/* 8014FF08 0014CFE8  48 00 00 0C */	b .L_8014FF14
.L_8014FF0C:
/* 8014FF0C 0014CFEC  7F E3 FB 78 */	mr r3, r31
/* 8014FF10 0014CFF0  48 00 01 85 */	bl kill_ring__9aqua_beamFv
.L_8014FF14:
/* 8014FF14 0014CFF4  38 7F 00 A4 */	addi r3, r31, 0xa4
/* 8014FF18 0014CFF8  48 00 49 51 */	bl "empty__42fixed_queue<Q29aqua_beam12ring_segment,31>CFv"
/* 8014FF1C 0014CFFC  54 60 06 3F */	clrlwi. r0, r3, 24
/* 8014FF20 0014D000  40 82 00 28 */	bne .L_8014FF48
/* 8014FF24 0014D004  38 7F 00 A4 */	addi r3, r31, 0xa4
/* 8014FF28 0014D008  48 00 4A 41 */	bl "back__42fixed_queue<Q29aqua_beam12ring_segment,31>Fv"
/* 8014FF2C 0014D00C  C0 23 00 10 */	lfs f1, 0x10(r3)
/* 8014FF30 0014D010  C0 1F 00 24 */	lfs f0, 0x24(r31)
/* 8014FF34 0014D014  FC 20 0A 10 */	fabs f1, f1
/* 8014FF38 0014D018  FC 20 08 18 */	frsp f1, f1
/* 8014FF3C 0014D01C  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8014FF40 0014D020  4C 41 13 82 */	cror eq, gt, eq
/* 8014FF44 0014D024  41 82 FF C8 */	beq .L_8014FF0C
.L_8014FF48:
/* 8014FF48 0014D028  E3 E1 00 38 */	psq_l f31, 0x38(r1), 0, qr0
/* 8014FF4C 0014D02C  80 01 00 44 */	lwz r0, 0x44(r1)
/* 8014FF50 0014D030  CB E1 00 30 */	lfd f31, 0x30(r1)
/* 8014FF54 0014D034  83 E1 00 2C */	lwz r31, 0x2c(r1)
/* 8014FF58 0014D038  7C 08 03 A6 */	mtlr r0
/* 8014FF5C 0014D03C  38 21 00 40 */	addi r1, r1, 0x40
/* 8014FF60 0014D040  4E 80 00 20 */	blr
.endfn update_rings__9aqua_beamFf

# aqua_beam::emit_ring()
.fn emit_ring__9aqua_beamFv, global
/* 8014FF64 0014D044  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 8014FF68 0014D048  7C 08 02 A6 */	mflr r0
/* 8014FF6C 0014D04C  90 01 00 24 */	stw r0, 0x24(r1)
/* 8014FF70 0014D050  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 8014FF74 0014D054  93 C1 00 18 */	stw r30, 0x18(r1)
/* 8014FF78 0014D058  7C 7E 1B 78 */	mr r30, r3
/* 8014FF7C 0014D05C  38 7E 00 A4 */	addi r3, r30, 0xa4
/* 8014FF80 0014D060  48 00 4A DD */	bl "full__42fixed_queue<Q29aqua_beam12ring_segment,31>CFv"
/* 8014FF84 0014D064  54 60 06 3F */	clrlwi. r0, r3, 24
/* 8014FF88 0014D068  41 82 00 0C */	beq .L_8014FF94
/* 8014FF8C 0014D06C  7F C3 F3 78 */	mr r3, r30
/* 8014FF90 0014D070  48 00 01 05 */	bl kill_ring__9aqua_beamFv
.L_8014FF94:
/* 8014FF94 0014D074  38 7E 00 A4 */	addi r3, r30, 0xa4
/* 8014FF98 0014D078  48 00 4A B1 */	bl "push_front__42fixed_queue<Q29aqua_beam12ring_segment,31>Fv"
/* 8014FF9C 0014D07C  38 7E 00 A4 */	addi r3, r30, 0xa4
/* 8014FFA0 0014D080  48 00 4A 79 */	bl "front__42fixed_queue<Q29aqua_beam12ring_segment,31>Fv"
/* 8014FFA4 0014D084  7C 7F 1B 78 */	mr r31, r3
/* 8014FFA8 0014D088  38 9E 00 40 */	addi r4, r30, 0x40
/* 8014FFAC 0014D08C  38 7F 00 04 */	addi r3, r31, 0x4
/* 8014FFB0 0014D090  4B EB B2 B5 */	bl __as__5xVec3FRC5xVec3
/* 8014FFB4 0014D094  C0 02 A7 6C */	lfs f0, "@1053"@sda21(r2)
/* 8014FFB8 0014D098  38 7F 00 1C */	addi r3, r31, 0x1c
/* 8014FFBC 0014D09C  D0 1F 00 10 */	stfs f0, 0x10(r31)
/* 8014FFC0 0014D0A0  C0 1E 00 10 */	lfs f0, 0x10(r30)
/* 8014FFC4 0014D0A4  D0 1F 00 14 */	stfs f0, 0x14(r31)
/* 8014FFC8 0014D0A8  C0 1E 00 4C */	lfs f0, 0x4c(r30)
/* 8014FFCC 0014D0AC  C0 3E 00 54 */	lfs f1, 0x54(r30)
/* 8014FFD0 0014D0B0  FC 60 00 50 */	fneg f3, f0
/* 8014FFD4 0014D0B4  C0 42 A7 6C */	lfs f2, "@1053"@sda21(r2)
/* 8014FFD8 0014D0B8  4B EB B1 15 */	bl assign__5xVec3Ffff
/* 8014FFDC 0014D0BC  4B EC 55 D5 */	bl normalize__5xVec3Fv
/* 8014FFE0 0014D0C0  38 61 00 08 */	addi r3, r1, 0x8
/* 8014FFE4 0014D0C4  38 9E 00 4C */	addi r4, r30, 0x4c
/* 8014FFE8 0014D0C8  38 BF 00 1C */	addi r5, r31, 0x1c
/* 8014FFEC 0014D0CC  4B EC 55 49 */	bl cross__5xVec3CFRC5xVec3
/* 8014FFF0 0014D0D0  38 7F 00 2C */	addi r3, r31, 0x2c
/* 8014FFF4 0014D0D4  38 81 00 08 */	addi r4, r1, 0x8
/* 8014FFF8 0014D0D8  4B EB B2 6D */	bl __as__5xVec3FRC5xVec3
/* 8014FFFC 0014D0DC  38 7F 00 3C */	addi r3, r31, 0x3c
/* 80150000 0014D0E0  38 9E 00 4C */	addi r4, r30, 0x4c
/* 80150004 0014D0E4  4B EB B2 61 */	bl __as__5xVec3FRC5xVec3
/* 80150008 0014D0E8  38 7F 00 4C */	addi r3, r31, 0x4c
/* 8015000C 0014D0EC  38 9F 00 04 */	addi r4, r31, 0x4
/* 80150010 0014D0F0  4B EB B2 55 */	bl __as__5xVec3FRC5xVec3
/* 80150014 0014D0F4  80 7E 00 9C */	lwz r3, 0x9c(r30)
/* 80150018 0014D0F8  38 80 00 00 */	li r4, 0x0
/* 8015001C 0014D0FC  38 A0 00 00 */	li r5, 0x0
/* 80150020 0014D100  38 C0 00 00 */	li r6, 0x0
/* 80150024 0014D104  38 E0 00 00 */	li r7, 0x0
/* 80150028 0014D108  4B EE 40 C9 */	bl xModelInstanceAlloc__FP8RpAtomicPvUsUcPUc
/* 8015002C 0014D10C  90 7F 00 00 */	stw r3, 0x0(r31)
/* 80150030 0014D110  80 7E 0F 54 */	lwz r3, 0xf54(r30)
/* 80150034 0014D114  38 03 00 01 */	addi r0, r3, 0x1
/* 80150038 0014D118  90 1E 0F 54 */	stw r0, 0xf54(r30)
/* 8015003C 0014D11C  80 9E 0F 54 */	lwz r4, 0xf54(r30)
/* 80150040 0014D120  80 7E 00 04 */	lwz r3, 0x4(r30)
/* 80150044 0014D124  7C 04 1B D6 */	divw r0, r4, r3
/* 80150048 0014D128  7C 00 19 D6 */	mullw r0, r0, r3
/* 8015004C 0014D12C  7C 00 20 51 */	subf. r0, r0, r4
/* 80150050 0014D130  40 82 00 24 */	bne .L_80150074
/* 80150054 0014D134  38 00 00 00 */	li r0, 0x0
/* 80150058 0014D138  38 9F 00 4C */	addi r4, r31, 0x4c
/* 8015005C 0014D13C  90 1E 0F 54 */	stw r0, 0xf54(r30)
/* 80150060 0014D140  38 60 00 03 */	li r3, 0x3
/* 80150064 0014D144  C0 22 A7 68 */	lfs f1, "@1052"@sda21(r2)
/* 80150068 0014D148  4B FF F8 35 */	bl "play_sound__27@unnamed@zNPCTypePrawn_cpp@FiPC5xVec3f"
/* 8015006C 0014D14C  90 7F 00 18 */	stw r3, 0x18(r31)
/* 80150070 0014D150  48 00 00 0C */	b .L_8015007C
.L_80150074:
/* 80150074 0014D154  38 00 00 00 */	li r0, 0x0
/* 80150078 0014D158  90 1F 00 18 */	stw r0, 0x18(r31)
.L_8015007C:
/* 8015007C 0014D15C  80 01 00 24 */	lwz r0, 0x24(r1)
/* 80150080 0014D160  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 80150084 0014D164  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 80150088 0014D168  7C 08 03 A6 */	mtlr r0
/* 8015008C 0014D16C  38 21 00 20 */	addi r1, r1, 0x20
/* 80150090 0014D170  4E 80 00 20 */	blr
.endfn emit_ring__9aqua_beamFv

# aqua_beam::kill_ring()
.fn kill_ring__9aqua_beamFv, global
/* 80150094 0014D174  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80150098 0014D178  7C 08 02 A6 */	mflr r0
/* 8015009C 0014D17C  90 01 00 14 */	stw r0, 0x14(r1)
/* 801500A0 0014D180  93 E1 00 0C */	stw r31, 0xc(r1)
/* 801500A4 0014D184  93 C1 00 08 */	stw r30, 0x8(r1)
/* 801500A8 0014D188  7C 7E 1B 78 */	mr r30, r3
/* 801500AC 0014D18C  38 7E 00 A4 */	addi r3, r30, 0xa4
/* 801500B0 0014D190  48 00 48 B9 */	bl "back__42fixed_queue<Q29aqua_beam12ring_segment,31>Fv"
/* 801500B4 0014D194  7C 7F 1B 78 */	mr r31, r3
/* 801500B8 0014D198  80 63 00 00 */	lwz r3, 0x0(r3)
/* 801500BC 0014D19C  4B EE 42 BD */	bl xModelInstanceFree__FP14xModelInstance
/* 801500C0 0014D1A0  80 9F 00 18 */	lwz r4, 0x18(r31)
/* 801500C4 0014D1A4  28 04 00 00 */	cmplwi r4, 0x0
/* 801500C8 0014D1A8  41 82 00 0C */	beq .L_801500D4
/* 801500CC 0014D1AC  38 60 00 03 */	li r3, 0x3
/* 801500D0 0014D1B0  4B FF F8 E9 */	bl "kill_sound__27@unnamed@zNPCTypePrawn_cpp@FiUi"
.L_801500D4:
/* 801500D4 0014D1B4  38 7E 00 A4 */	addi r3, r30, 0xa4
/* 801500D8 0014D1B8  48 00 49 F1 */	bl "pop_back__42fixed_queue<Q29aqua_beam12ring_segment,31>Fv"
/* 801500DC 0014D1BC  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801500E0 0014D1C0  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 801500E4 0014D1C4  83 C1 00 08 */	lwz r30, 0x8(r1)
/* 801500E8 0014D1C8  7C 08 03 A6 */	mtlr r0
/* 801500EC 0014D1CC  38 21 00 10 */	addi r1, r1, 0x10
/* 801500F0 0014D1D0  4E 80 00 20 */	blr
.endfn kill_ring__9aqua_beamFv

# aqua_beam::update_ring(fixed_queue<aqua_beam::ring_segment, 31>::iterator, float)
.fn "update_ring__9aqua_beamFQ242fixed_queue<Q29aqua_beam12ring_segment,31>8iteratorf", global
/* 801500F4 0014D1D4  94 21 FF C0 */	stwu r1, -0x40(r1)
/* 801500F8 0014D1D8  7C 08 02 A6 */	mflr r0
/* 801500FC 0014D1DC  90 01 00 44 */	stw r0, 0x44(r1)
/* 80150100 0014D1E0  DB E1 00 30 */	stfd f31, 0x30(r1)
/* 80150104 0014D1E4  F3 E1 00 38 */	psq_st f31, 0x38(r1), 0, qr0
/* 80150108 0014D1E8  93 E1 00 2C */	stw r31, 0x2c(r1)
/* 8015010C 0014D1EC  93 C1 00 28 */	stw r30, 0x28(r1)
/* 80150110 0014D1F0  FF E0 08 90 */	fmr f31, f1
/* 80150114 0014D1F4  7C 7E 1B 78 */	mr r30, r3
/* 80150118 0014D1F8  7C 83 23 78 */	mr r3, r4
/* 8015011C 0014D1FC  48 00 48 11 */	bl "__ml__Q242fixed_queue<Q29aqua_beam12ring_segment,31>8iteratorCFv"
/* 80150120 0014D200  7C 7F 1B 78 */	mr r31, r3
/* 80150124 0014D204  C0 3E 00 14 */	lfs f1, 0x14(r30)
/* 80150128 0014D208  C0 03 00 14 */	lfs f0, 0x14(r3)
/* 8015012C 0014D20C  38 61 00 08 */	addi r3, r1, 0x8
/* 80150130 0014D210  38 9F 00 3C */	addi r4, r31, 0x3c
/* 80150134 0014D214  EC 01 07 FA */	fmadds f0, f1, f31, f0
/* 80150138 0014D218  D0 1F 00 14 */	stfs f0, 0x14(r31)
/* 8015013C 0014D21C  C0 42 A7 74 */	lfs f2, "@1282"@sda21(r2)
/* 80150140 0014D220  C0 3E 00 14 */	lfs f1, 0x14(r30)
/* 80150144 0014D224  C0 1F 00 14 */	lfs f0, 0x14(r31)
/* 80150148 0014D228  EC 22 00 72 */	fmuls f1, f2, f1
/* 8015014C 0014D22C  C0 5F 00 10 */	lfs f2, 0x10(r31)
/* 80150150 0014D230  EC 00 07 F2 */	fmuls f0, f0, f31
/* 80150154 0014D234  EC 21 07 F2 */	fmuls f1, f1, f31
/* 80150158 0014D238  EC 1F 00 7A */	fmadds f0, f31, f1, f0
/* 8015015C 0014D23C  EC 02 00 2A */	fadds f0, f2, f0
/* 80150160 0014D240  D0 1F 00 10 */	stfs f0, 0x10(r31)
/* 80150164 0014D244  C0 3F 00 10 */	lfs f1, 0x10(r31)
/* 80150168 0014D248  4B EB AF B9 */	bl __ml__5xVec3CFf
/* 8015016C 0014D24C  38 61 00 14 */	addi r3, r1, 0x14
/* 80150170 0014D250  38 9F 00 04 */	addi r4, r31, 0x4
/* 80150174 0014D254  38 A1 00 08 */	addi r5, r1, 0x8
/* 80150178 0014D258  4B EC 52 69 */	bl __pl__5xVec3CFRC5xVec3
/* 8015017C 0014D25C  38 7F 00 4C */	addi r3, r31, 0x4c
/* 80150180 0014D260  38 81 00 14 */	addi r4, r1, 0x14
/* 80150184 0014D264  4B EB B0 E1 */	bl __as__5xVec3FRC5xVec3
/* 80150188 0014D268  E3 E1 00 38 */	psq_l f31, 0x38(r1), 0, qr0
/* 8015018C 0014D26C  80 01 00 44 */	lwz r0, 0x44(r1)
/* 80150190 0014D270  CB E1 00 30 */	lfd f31, 0x30(r1)
/* 80150194 0014D274  83 E1 00 2C */	lwz r31, 0x2c(r1)
/* 80150198 0014D278  83 C1 00 28 */	lwz r30, 0x28(r1)
/* 8015019C 0014D27C  7C 08 03 A6 */	mtlr r0
/* 801501A0 0014D280  38 21 00 40 */	addi r1, r1, 0x40
/* 801501A4 0014D284  4E 80 00 20 */	blr
.endfn "update_ring__9aqua_beamFQ242fixed_queue<Q29aqua_beam12ring_segment,31>8iteratorf"

# aqua_beam::render_ring(aqua_beam::ring_segment&)
.fn render_ring__9aqua_beamFRQ29aqua_beam12ring_segment, global
/* 801501A8 0014D288  94 21 FF D0 */	stwu r1, -0x30(r1)
/* 801501AC 0014D28C  7C 08 02 A6 */	mflr r0
/* 801501B0 0014D290  90 01 00 34 */	stw r0, 0x34(r1)
/* 801501B4 0014D294  DB E1 00 20 */	stfd f31, 0x20(r1)
/* 801501B8 0014D298  F3 E1 00 28 */	psq_st f31, 0x28(r1), 0, qr0
/* 801501BC 0014D29C  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 801501C0 0014D2A0  93 C1 00 18 */	stw r30, 0x18(r1)
/* 801501C4 0014D2A4  93 A1 00 14 */	stw r29, 0x14(r1)
/* 801501C8 0014D2A8  7C 9E 23 78 */	mr r30, r4
/* 801501CC 0014D2AC  7C 7D 1B 78 */	mr r29, r3
/* 801501D0 0014D2B0  80 64 00 00 */	lwz r3, 0x0(r4)
/* 801501D4 0014D2B4  38 9E 00 1C */	addi r4, r30, 0x1c
/* 801501D8 0014D2B8  C0 5E 00 10 */	lfs f2, 0x10(r30)
/* 801501DC 0014D2BC  83 E3 00 4C */	lwz r31, 0x4c(r3)
/* 801501E0 0014D2C0  C0 3D 00 1C */	lfs f1, 0x1c(r29)
/* 801501E4 0014D2C4  C0 1D 00 08 */	lfs f0, 0x8(r29)
/* 801501E8 0014D2C8  7F E3 FB 78 */	mr r3, r31
/* 801501EC 0014D2CC  EF E2 00 7A */	fmadds f31, f2, f1, f0
/* 801501F0 0014D2D0  4B EB B3 7D */	bl __as__7xMat4x3FRC7xMat4x3
/* 801501F4 0014D2D4  FC 20 F8 90 */	fmr f1, f31
/* 801501F8 0014D2D8  7F E3 FB 78 */	mr r3, r31
/* 801501FC 0014D2DC  4B EB AF 85 */	bl __amu__5xVec3Ff
/* 80150200 0014D2E0  FC 20 F8 90 */	fmr f1, f31
/* 80150204 0014D2E4  38 7F 00 10 */	addi r3, r31, 0x10
/* 80150208 0014D2E8  4B EB AF 79 */	bl __amu__5xVec3Ff
/* 8015020C 0014D2EC  FC 20 F8 90 */	fmr f1, f31
/* 80150210 0014D2F0  38 7F 00 20 */	addi r3, r31, 0x20
/* 80150214 0014D2F4  4B EB AF 6D */	bl __amu__5xVec3Ff
/* 80150218 0014D2F8  80 7E 00 00 */	lwz r3, 0x0(r30)
/* 8015021C 0014D2FC  C0 1D 00 0C */	lfs f0, 0xc(r29)
/* 80150220 0014D300  D0 03 00 24 */	stfs f0, 0x24(r3)
/* 80150224 0014D304  C0 1E 00 10 */	lfs f0, 0x10(r30)
/* 80150228 0014D308  C0 5D 00 20 */	lfs f2, 0x20(r29)
/* 8015022C 0014D30C  FC 00 02 10 */	fabs f0, f0
/* 80150230 0014D310  C0 22 A7 6C */	lfs f1, "@1053"@sda21(r2)
/* 80150234 0014D314  FC 00 00 18 */	frsp f0, f0
/* 80150238 0014D318  EC 60 10 28 */	fsubs f3, f0, f2
/* 8015023C 0014D31C  FC 03 08 40 */	fcmpo cr0, f3, f1
/* 80150240 0014D320  40 81 00 38 */	ble .L_80150278
/* 80150244 0014D324  C0 1D 00 24 */	lfs f0, 0x24(r29)
/* 80150248 0014D328  EC 00 10 28 */	fsubs f0, f0, f2
/* 8015024C 0014D32C  FC 03 00 40 */	fcmpo cr0, f3, f0
/* 80150250 0014D330  4C 41 13 82 */	cror eq, gt, eq
/* 80150254 0014D334  40 82 00 0C */	bne .L_80150260
/* 80150258 0014D338  D0 23 00 24 */	stfs f1, 0x24(r3)
/* 8015025C 0014D33C  48 00 00 1C */	b .L_80150278
.L_80150260:
/* 80150260 0014D340  EC 03 00 24 */	fdivs f0, f3, f0
/* 80150264 0014D344  C0 22 A7 68 */	lfs f1, "@1052"@sda21(r2)
/* 80150268 0014D348  C0 43 00 24 */	lfs f2, 0x24(r3)
/* 8015026C 0014D34C  EC 01 00 28 */	fsubs f0, f1, f0
/* 80150270 0014D350  EC 02 00 32 */	fmuls f0, f2, f0
/* 80150274 0014D354  D0 03 00 24 */	stfs f0, 0x24(r3)
.L_80150278:
/* 80150278 0014D358  80 7E 00 00 */	lwz r3, 0x0(r30)
/* 8015027C 0014D35C  4B EE 46 C9 */	bl xModelRender__FP14xModelInstance
/* 80150280 0014D360  E3 E1 00 28 */	psq_l f31, 0x28(r1), 0, qr0
/* 80150284 0014D364  80 01 00 34 */	lwz r0, 0x34(r1)
/* 80150288 0014D368  CB E1 00 20 */	lfd f31, 0x20(r1)
/* 8015028C 0014D36C  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 80150290 0014D370  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 80150294 0014D374  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 80150298 0014D378  7C 08 03 A6 */	mtlr r0
/* 8015029C 0014D37C  38 21 00 30 */	addi r1, r1, 0x30
/* 801502A0 0014D380  4E 80 00 20 */	blr
.endfn render_ring__9aqua_beamFRQ29aqua_beam12ring_segment

# ZNPC_AnimTable_Prawn()
.fn ZNPC_AnimTable_Prawn__Fv, global
/* 801502A4 0014D384  94 21 FF A0 */	stwu r1, -0x60(r1)
/* 801502A8 0014D388  7C 08 02 A6 */	mflr r0
/* 801502AC 0014D38C  3C 60 80 27 */	lis r3, "@stringBase0"@ha
/* 801502B0 0014D390  3C 80 80 27 */	lis r4, "@1446"@ha
/* 801502B4 0014D394  90 01 00 64 */	stw r0, 0x64(r1)
/* 801502B8 0014D398  38 63 E9 F0 */	addi r3, r3, "@stringBase0"@l
/* 801502BC 0014D39C  38 63 00 85 */	addi r3, r3, 0x85
/* 801502C0 0014D3A0  38 A0 00 00 */	li r5, 0x0
/* 801502C4 0014D3A4  BF 61 00 4C */	stmw r27, 0x4c(r1)
/* 801502C8 0014D3A8  3B A4 E9 18 */	addi r29, r4, "@1446"@l
/* 801502CC 0014D3AC  38 80 00 00 */	li r4, 0x0
/* 801502D0 0014D3B0  83 9D 00 00 */	lwz r28, 0x0(r29)
/* 801502D4 0014D3B4  83 7D 00 04 */	lwz r27, 0x4(r29)
/* 801502D8 0014D3B8  81 9D 00 08 */	lwz r12, 0x8(r29)
/* 801502DC 0014D3BC  81 7D 00 0C */	lwz r11, 0xc(r29)
/* 801502E0 0014D3C0  81 5D 00 10 */	lwz r10, 0x10(r29)
/* 801502E4 0014D3C4  81 3D 00 14 */	lwz r9, 0x14(r29)
/* 801502E8 0014D3C8  81 1D 00 18 */	lwz r8, 0x18(r29)
/* 801502EC 0014D3CC  80 FD 00 1C */	lwz r7, 0x1c(r29)
/* 801502F0 0014D3D0  80 DD 00 20 */	lwz r6, 0x20(r29)
/* 801502F4 0014D3D4  80 1D 00 24 */	lwz r0, 0x24(r29)
/* 801502F8 0014D3D8  93 81 00 18 */	stw r28, 0x18(r1)
/* 801502FC 0014D3DC  93 61 00 1C */	stw r27, 0x1c(r1)
/* 80150300 0014D3E0  91 81 00 20 */	stw r12, 0x20(r1)
/* 80150304 0014D3E4  91 61 00 24 */	stw r11, 0x24(r1)
/* 80150308 0014D3E8  91 41 00 28 */	stw r10, 0x28(r1)
/* 8015030C 0014D3EC  91 21 00 2C */	stw r9, 0x2c(r1)
/* 80150310 0014D3F0  91 01 00 30 */	stw r8, 0x30(r1)
/* 80150314 0014D3F4  90 E1 00 34 */	stw r7, 0x34(r1)
/* 80150318 0014D3F8  90 C1 00 38 */	stw r6, 0x38(r1)
/* 8015031C 0014D3FC  90 01 00 3C */	stw r0, 0x3c(r1)
/* 80150320 0014D400  4B EB 69 51 */	bl xAnimTableNew__FPCcPP10xAnimTableUi
/* 80150324 0014D404  3C A0 80 00 */	lis r5, xAnimDefaultBeforeEnter__FP9xAnimPlayP10xAnimState@ha
/* 80150328 0014D408  3C 80 80 2A */	lis r4, g_strz_subbanim@ha
/* 8015032C 0014D40C  38 05 6C FC */	addi r0, r5, xAnimDefaultBeforeEnter__FP9xAnimPlayP10xAnimState@l
/* 80150330 0014D410  7C 7B 1B 78 */	mr r27, r3
/* 80150334 0014D414  90 01 00 08 */	stw r0, 0x8(r1)
/* 80150338 0014D418  38 00 00 00 */	li r0, 0x0
/* 8015033C 0014D41C  3B 84 91 3C */	addi r28, r4, g_strz_subbanim@l
/* 80150340 0014D420  38 A0 00 10 */	li r5, 0x10
/* 80150344 0014D424  90 01 00 0C */	stw r0, 0xc(r1)
/* 80150348 0014D428  38 C0 00 00 */	li r6, 0x0
/* 8015034C 0014D42C  38 E0 00 00 */	li r7, 0x0
/* 80150350 0014D430  39 00 00 00 */	li r8, 0x0
/* 80150354 0014D434  90 01 00 10 */	stw r0, 0x10(r1)
/* 80150358 0014D438  39 20 00 00 */	li r9, 0x0
/* 8015035C 0014D43C  39 40 00 00 */	li r10, 0x0
/* 80150360 0014D440  80 9C 00 04 */	lwz r4, 0x4(r28)
/* 80150364 0014D444  C0 22 A7 68 */	lfs f1, "@1052"@sda21(r2)
/* 80150368 0014D448  C0 42 A7 6C */	lfs f2, "@1053"@sda21(r2)
/* 8015036C 0014D44C  4B EB 69 ED */	bl xAnimTableNewState__FP10xAnimTablePCcUiUifPfPffPUsPvPFP9xAnimPlayP10xAnimState_vPFP10xAnimStateP11xAnimSinglePv_vPFP9xAnimPlayP5xQuatP5xVec3i_v
/* 80150370 0014D450  3C 80 80 00 */	lis r4, xAnimDefaultBeforeEnter__FP9xAnimPlayP10xAnimState@ha
/* 80150374 0014D454  3C 60 80 2A */	lis r3, g_strz_subbanim@ha
/* 80150378 0014D458  38 84 6C FC */	addi r4, r4, xAnimDefaultBeforeEnter__FP9xAnimPlayP10xAnimState@l
/* 8015037C 0014D45C  38 00 00 00 */	li r0, 0x0
/* 80150380 0014D460  90 81 00 08 */	stw r4, 0x8(r1)
/* 80150384 0014D464  38 83 91 3C */	addi r4, r3, g_strz_subbanim@l
/* 80150388 0014D468  7F 63 DB 78 */	mr r3, r27
/* 8015038C 0014D46C  38 A0 00 20 */	li r5, 0x20
/* 80150390 0014D470  90 01 00 0C */	stw r0, 0xc(r1)
/* 80150394 0014D474  38 C0 00 00 */	li r6, 0x0
/* 80150398 0014D478  38 E0 00 00 */	li r7, 0x0
/* 8015039C 0014D47C  39 00 00 00 */	li r8, 0x0
/* 801503A0 0014D480  90 01 00 10 */	stw r0, 0x10(r1)
/* 801503A4 0014D484  39 20 00 00 */	li r9, 0x0
/* 801503A8 0014D488  39 40 00 00 */	li r10, 0x0
/* 801503AC 0014D48C  80 84 00 10 */	lwz r4, 0x10(r4)
/* 801503B0 0014D490  C0 22 A7 68 */	lfs f1, "@1052"@sda21(r2)
/* 801503B4 0014D494  C0 42 A7 6C */	lfs f2, "@1053"@sda21(r2)
/* 801503B8 0014D498  4B EB 69 A1 */	bl xAnimTableNewState__FP10xAnimTablePCcUiUifPfPffPUsPvPFP9xAnimPlayP10xAnimState_vPFP10xAnimStateP11xAnimSinglePv_vPFP9xAnimPlayP5xQuatP5xVec3i_v
/* 801503BC 0014D49C  3C 80 80 00 */	lis r4, xAnimDefaultBeforeEnter__FP9xAnimPlayP10xAnimState@ha
/* 801503C0 0014D4A0  3C 60 80 2A */	lis r3, g_strz_subbanim@ha
/* 801503C4 0014D4A4  38 84 6C FC */	addi r4, r4, xAnimDefaultBeforeEnter__FP9xAnimPlayP10xAnimState@l
/* 801503C8 0014D4A8  38 00 00 00 */	li r0, 0x0
/* 801503CC 0014D4AC  90 81 00 08 */	stw r4, 0x8(r1)
/* 801503D0 0014D4B0  38 83 91 3C */	addi r4, r3, g_strz_subbanim@l
/* 801503D4 0014D4B4  7F 63 DB 78 */	mr r3, r27
/* 801503D8 0014D4B8  38 A0 00 20 */	li r5, 0x20
/* 801503DC 0014D4BC  90 01 00 0C */	stw r0, 0xc(r1)
/* 801503E0 0014D4C0  38 C0 00 00 */	li r6, 0x0
/* 801503E4 0014D4C4  38 E0 00 00 */	li r7, 0x0
/* 801503E8 0014D4C8  39 00 00 00 */	li r8, 0x0
/* 801503EC 0014D4CC  90 01 00 10 */	stw r0, 0x10(r1)
/* 801503F0 0014D4D0  39 20 00 00 */	li r9, 0x0
/* 801503F4 0014D4D4  39 40 00 00 */	li r10, 0x0
/* 801503F8 0014D4D8  80 84 00 14 */	lwz r4, 0x14(r4)
/* 801503FC 0014D4DC  C0 22 A7 68 */	lfs f1, "@1052"@sda21(r2)
/* 80150400 0014D4E0  C0 42 A7 6C */	lfs f2, "@1053"@sda21(r2)
/* 80150404 0014D4E4  4B EB 69 55 */	bl xAnimTableNewState__FP10xAnimTablePCcUiUifPfPffPUsPvPFP9xAnimPlayP10xAnimState_vPFP10xAnimStateP11xAnimSinglePv_vPFP9xAnimPlayP5xQuatP5xVec3i_v
/* 80150408 0014D4E8  3C 80 80 00 */	lis r4, xAnimDefaultBeforeEnter__FP9xAnimPlayP10xAnimState@ha
/* 8015040C 0014D4EC  3C 60 80 2A */	lis r3, g_strz_subbanim@ha
/* 80150410 0014D4F0  38 84 6C FC */	addi r4, r4, xAnimDefaultBeforeEnter__FP9xAnimPlayP10xAnimState@l
/* 80150414 0014D4F4  38 00 00 00 */	li r0, 0x0
/* 80150418 0014D4F8  90 81 00 08 */	stw r4, 0x8(r1)
/* 8015041C 0014D4FC  38 83 91 3C */	addi r4, r3, g_strz_subbanim@l
/* 80150420 0014D500  7F 63 DB 78 */	mr r3, r27
/* 80150424 0014D504  38 A0 00 20 */	li r5, 0x20
/* 80150428 0014D508  90 01 00 0C */	stw r0, 0xc(r1)
/* 8015042C 0014D50C  38 C0 00 00 */	li r6, 0x0
/* 80150430 0014D510  38 E0 00 00 */	li r7, 0x0
/* 80150434 0014D514  39 00 00 00 */	li r8, 0x0
/* 80150438 0014D518  90 01 00 10 */	stw r0, 0x10(r1)
/* 8015043C 0014D51C  39 20 00 00 */	li r9, 0x0
/* 80150440 0014D520  39 40 00 00 */	li r10, 0x0
/* 80150444 0014D524  80 84 00 1C */	lwz r4, 0x1c(r4)
/* 80150448 0014D528  C0 22 A7 68 */	lfs f1, "@1052"@sda21(r2)
/* 8015044C 0014D52C  C0 42 A7 6C */	lfs f2, "@1053"@sda21(r2)
/* 80150450 0014D530  4B EB 69 09 */	bl xAnimTableNewState__FP10xAnimTablePCcUiUifPfPffPUsPvPFP9xAnimPlayP10xAnimState_vPFP10xAnimStateP11xAnimSinglePv_vPFP9xAnimPlayP5xQuatP5xVec3i_v
/* 80150454 0014D534  3C 80 80 00 */	lis r4, xAnimDefaultBeforeEnter__FP9xAnimPlayP10xAnimState@ha
/* 80150458 0014D538  3C 60 80 2A */	lis r3, g_strz_subbanim@ha
/* 8015045C 0014D53C  38 84 6C FC */	addi r4, r4, xAnimDefaultBeforeEnter__FP9xAnimPlayP10xAnimState@l
/* 80150460 0014D540  38 00 00 00 */	li r0, 0x0
/* 80150464 0014D544  90 81 00 08 */	stw r4, 0x8(r1)
/* 80150468 0014D548  3B A3 91 3C */	addi r29, r3, g_strz_subbanim@l
/* 8015046C 0014D54C  7F 63 DB 78 */	mr r3, r27
/* 80150470 0014D550  38 A0 00 20 */	li r5, 0x20
/* 80150474 0014D554  90 01 00 0C */	stw r0, 0xc(r1)
/* 80150478 0014D558  38 C0 00 00 */	li r6, 0x0
/* 8015047C 0014D55C  38 E0 00 00 */	li r7, 0x0
/* 80150480 0014D560  39 00 00 00 */	li r8, 0x0
/* 80150484 0014D564  90 01 00 10 */	stw r0, 0x10(r1)
/* 80150488 0014D568  39 20 00 00 */	li r9, 0x0
/* 8015048C 0014D56C  39 40 00 00 */	li r10, 0x0
/* 80150490 0014D570  80 9D 00 30 */	lwz r4, 0x30(r29)
/* 80150494 0014D574  C0 22 A7 68 */	lfs f1, "@1052"@sda21(r2)
/* 80150498 0014D578  C0 42 A7 6C */	lfs f2, "@1053"@sda21(r2)
/* 8015049C 0014D57C  4B EB 68 BD */	bl xAnimTableNewState__FP10xAnimTablePCcUiUifPfPffPUsPvPFP9xAnimPlayP10xAnimState_vPFP10xAnimStateP11xAnimSinglePv_vPFP9xAnimPlayP5xQuatP5xVec3i_v
/* 801504A0 0014D580  3C 80 80 00 */	lis r4, xAnimDefaultBeforeEnter__FP9xAnimPlayP10xAnimState@ha
/* 801504A4 0014D584  3C 60 80 2A */	lis r3, g_strz_subbanim@ha
/* 801504A8 0014D588  38 84 6C FC */	addi r4, r4, xAnimDefaultBeforeEnter__FP9xAnimPlayP10xAnimState@l
/* 801504AC 0014D58C  38 00 00 00 */	li r0, 0x0
/* 801504B0 0014D590  90 81 00 08 */	stw r4, 0x8(r1)
/* 801504B4 0014D594  3B C3 91 3C */	addi r30, r3, g_strz_subbanim@l
/* 801504B8 0014D598  7F 63 DB 78 */	mr r3, r27
/* 801504BC 0014D59C  38 A0 00 10 */	li r5, 0x10
/* 801504C0 0014D5A0  90 01 00 0C */	stw r0, 0xc(r1)
/* 801504C4 0014D5A4  38 C0 00 00 */	li r6, 0x0
/* 801504C8 0014D5A8  38 E0 00 00 */	li r7, 0x0
/* 801504CC 0014D5AC  39 00 00 00 */	li r8, 0x0
/* 801504D0 0014D5B0  90 01 00 10 */	stw r0, 0x10(r1)
/* 801504D4 0014D5B4  39 20 00 00 */	li r9, 0x0
/* 801504D8 0014D5B8  39 40 00 00 */	li r10, 0x0
/* 801504DC 0014D5BC  80 9E 00 34 */	lwz r4, 0x34(r30)
/* 801504E0 0014D5C0  C0 22 A7 68 */	lfs f1, "@1052"@sda21(r2)
/* 801504E4 0014D5C4  C0 42 A7 6C */	lfs f2, "@1053"@sda21(r2)
/* 801504E8 0014D5C8  4B EB 68 71 */	bl xAnimTableNewState__FP10xAnimTablePCcUiUifPfPffPUsPvPFP9xAnimPlayP10xAnimState_vPFP10xAnimStateP11xAnimSinglePv_vPFP9xAnimPlayP5xQuatP5xVec3i_v
/* 801504EC 0014D5CC  3C 80 80 00 */	lis r4, xAnimDefaultBeforeEnter__FP9xAnimPlayP10xAnimState@ha
/* 801504F0 0014D5D0  3C 60 80 2A */	lis r3, g_strz_subbanim@ha
/* 801504F4 0014D5D4  38 84 6C FC */	addi r4, r4, xAnimDefaultBeforeEnter__FP9xAnimPlayP10xAnimState@l
/* 801504F8 0014D5D8  38 00 00 00 */	li r0, 0x0
/* 801504FC 0014D5DC  90 81 00 08 */	stw r4, 0x8(r1)
/* 80150500 0014D5E0  3B E3 91 3C */	addi r31, r3, g_strz_subbanim@l
/* 80150504 0014D5E4  7F 63 DB 78 */	mr r3, r27
/* 80150508 0014D5E8  38 A0 00 20 */	li r5, 0x20
/* 8015050C 0014D5EC  90 01 00 0C */	stw r0, 0xc(r1)
/* 80150510 0014D5F0  38 C0 00 00 */	li r6, 0x0
/* 80150514 0014D5F4  38 E0 00 00 */	li r7, 0x0
/* 80150518 0014D5F8  39 00 00 00 */	li r8, 0x0
/* 8015051C 0014D5FC  90 01 00 10 */	stw r0, 0x10(r1)
/* 80150520 0014D600  39 20 00 00 */	li r9, 0x0
/* 80150524 0014D604  39 40 00 00 */	li r10, 0x0
/* 80150528 0014D608  80 9F 00 38 */	lwz r4, 0x38(r31)
/* 8015052C 0014D60C  C0 22 A7 68 */	lfs f1, "@1052"@sda21(r2)
/* 80150530 0014D610  C0 42 A7 6C */	lfs f2, "@1053"@sda21(r2)
/* 80150534 0014D614  4B EB 68 25 */	bl xAnimTableNewState__FP10xAnimTablePCcUiUifPfPffPUsPvPFP9xAnimPlayP10xAnimState_vPFP10xAnimStateP11xAnimSinglePv_vPFP9xAnimPlayP5xQuatP5xVec3i_v
/* 80150538 0014D618  3C 80 80 00 */	lis r4, xAnimDefaultBeforeEnter__FP9xAnimPlayP10xAnimState@ha
/* 8015053C 0014D61C  3C 60 80 2A */	lis r3, g_strz_subbanim@ha
/* 80150540 0014D620  38 84 6C FC */	addi r4, r4, xAnimDefaultBeforeEnter__FP9xAnimPlayP10xAnimState@l
/* 80150544 0014D624  38 00 00 00 */	li r0, 0x0
/* 80150548 0014D628  90 81 00 08 */	stw r4, 0x8(r1)
/* 8015054C 0014D62C  38 83 91 3C */	addi r4, r3, g_strz_subbanim@l
/* 80150550 0014D630  7F 63 DB 78 */	mr r3, r27
/* 80150554 0014D634  38 A0 00 20 */	li r5, 0x20
/* 80150558 0014D638  90 01 00 0C */	stw r0, 0xc(r1)
/* 8015055C 0014D63C  38 C0 00 00 */	li r6, 0x0
/* 80150560 0014D640  38 E0 00 00 */	li r7, 0x0
/* 80150564 0014D644  39 00 00 00 */	li r8, 0x0
/* 80150568 0014D648  90 01 00 10 */	stw r0, 0x10(r1)
/* 8015056C 0014D64C  39 20 00 00 */	li r9, 0x0
/* 80150570 0014D650  39 40 00 00 */	li r10, 0x0
/* 80150574 0014D654  80 84 00 24 */	lwz r4, 0x24(r4)
/* 80150578 0014D658  C0 22 A7 68 */	lfs f1, "@1052"@sda21(r2)
/* 8015057C 0014D65C  C0 42 A7 6C */	lfs f2, "@1053"@sda21(r2)
/* 80150580 0014D660  4B EB 67 D9 */	bl xAnimTableNewState__FP10xAnimTablePCcUiUifPfPffPUsPvPFP9xAnimPlayP10xAnimState_vPFP10xAnimStateP11xAnimSinglePv_vPFP9xAnimPlayP5xQuatP5xVec3i_v
/* 80150584 0014D664  3C 80 80 00 */	lis r4, xAnimDefaultBeforeEnter__FP9xAnimPlayP10xAnimState@ha
/* 80150588 0014D668  3C 60 80 2A */	lis r3, g_strz_subbanim@ha
/* 8015058C 0014D66C  38 84 6C FC */	addi r4, r4, xAnimDefaultBeforeEnter__FP9xAnimPlayP10xAnimState@l
/* 80150590 0014D670  38 00 00 00 */	li r0, 0x0
/* 80150594 0014D674  90 81 00 08 */	stw r4, 0x8(r1)
/* 80150598 0014D678  38 83 91 3C */	addi r4, r3, g_strz_subbanim@l
/* 8015059C 0014D67C  7F 63 DB 78 */	mr r3, r27
/* 801505A0 0014D680  38 A0 00 20 */	li r5, 0x20
/* 801505A4 0014D684  90 01 00 0C */	stw r0, 0xc(r1)
/* 801505A8 0014D688  38 C0 00 00 */	li r6, 0x0
/* 801505AC 0014D68C  38 E0 00 00 */	li r7, 0x0
/* 801505B0 0014D690  39 00 00 00 */	li r8, 0x0
/* 801505B4 0014D694  90 01 00 10 */	stw r0, 0x10(r1)
/* 801505B8 0014D698  39 20 00 00 */	li r9, 0x0
/* 801505BC 0014D69C  39 40 00 00 */	li r10, 0x0
/* 801505C0 0014D6A0  80 84 00 28 */	lwz r4, 0x28(r4)
/* 801505C4 0014D6A4  C0 22 A7 68 */	lfs f1, "@1052"@sda21(r2)
/* 801505C8 0014D6A8  C0 42 A7 6C */	lfs f2, "@1053"@sda21(r2)
/* 801505CC 0014D6AC  4B EB 67 8D */	bl xAnimTableNewState__FP10xAnimTablePCcUiUifPfPffPUsPvPFP9xAnimPlayP10xAnimState_vPFP10xAnimStateP11xAnimSinglePv_vPFP9xAnimPlayP5xQuatP5xVec3i_v
/* 801505D0 0014D6B0  3C 60 80 2A */	lis r3, g_strz_subbanim@ha
/* 801505D4 0014D6B4  C0 22 A7 88 */	lfs f1, "@1454"@sda21(r2)
/* 801505D8 0014D6B8  38 83 91 3C */	addi r4, r3, g_strz_subbanim@l
/* 801505DC 0014D6BC  38 A1 00 18 */	addi r5, r1, 0x18
/* 801505E0 0014D6C0  7F 63 DB 78 */	mr r3, r27
/* 801505E4 0014D6C4  38 C0 00 01 */	li r6, 0x1
/* 801505E8 0014D6C8  4B FA 3E 11 */	bl NPCC_BuildStandardAnimTran__FP10xAnimTablePPcPiif
/* 801505EC 0014D6CC  38 00 00 00 */	li r0, 0x0
/* 801505F0 0014D6D0  7F 63 DB 78 */	mr r3, r27
/* 801505F4 0014D6D4  90 01 00 08 */	stw r0, 0x8(r1)
/* 801505F8 0014D6D8  38 C0 00 00 */	li r6, 0x0
/* 801505FC 0014D6DC  38 E0 00 00 */	li r7, 0x0
/* 80150600 0014D6E0  39 00 00 10 */	li r8, 0x10
/* 80150604 0014D6E4  90 01 00 0C */	stw r0, 0xc(r1)
/* 80150608 0014D6E8  39 20 00 00 */	li r9, 0x0
/* 8015060C 0014D6EC  39 40 00 00 */	li r10, 0x0
/* 80150610 0014D6F0  C0 22 A7 6C */	lfs f1, "@1053"@sda21(r2)
/* 80150614 0014D6F4  80 9D 00 30 */	lwz r4, 0x30(r29)
/* 80150618 0014D6F8  FC 40 08 90 */	fmr f2, f1
/* 8015061C 0014D6FC  80 BE 00 34 */	lwz r5, 0x34(r30)
/* 80150620 0014D700  C0 62 A7 8C */	lfs f3, "@1455"@sda21(r2)
/* 80150624 0014D704  4B EB 6D 9D */	bl xAnimTableNewTransition__FP10xAnimTablePCcPCcPFP15xAnimTransitionP11xAnimSinglePv_UiPFP15xAnimTransitionP11xAnimSinglePv_UiUiUiffUsUsfPUs
/* 80150628 0014D708  38 00 00 00 */	li r0, 0x0
/* 8015062C 0014D70C  7F 63 DB 78 */	mr r3, r27
/* 80150630 0014D710  90 01 00 08 */	stw r0, 0x8(r1)
/* 80150634 0014D714  38 C0 00 00 */	li r6, 0x0
/* 80150638 0014D718  38 E0 00 00 */	li r7, 0x0
/* 8015063C 0014D71C  39 00 00 00 */	li r8, 0x0
/* 80150640 0014D720  90 01 00 0C */	stw r0, 0xc(r1)
/* 80150644 0014D724  39 20 00 00 */	li r9, 0x0
/* 80150648 0014D728  39 40 00 00 */	li r10, 0x0
/* 8015064C 0014D72C  C0 22 A7 6C */	lfs f1, "@1053"@sda21(r2)
/* 80150650 0014D730  80 9E 00 34 */	lwz r4, 0x34(r30)
/* 80150654 0014D734  FC 40 08 90 */	fmr f2, f1
/* 80150658 0014D738  80 BF 00 38 */	lwz r5, 0x38(r31)
/* 8015065C 0014D73C  C0 62 A7 8C */	lfs f3, "@1455"@sda21(r2)
/* 80150660 0014D740  4B EB 6D 61 */	bl xAnimTableNewTransition__FP10xAnimTablePCcPCcPFP15xAnimTransitionP11xAnimSinglePv_UiPFP15xAnimTransitionP11xAnimSinglePv_UiUiUiffUsUsfPUs
/* 80150664 0014D744  38 00 00 00 */	li r0, 0x0
/* 80150668 0014D748  7F 63 DB 78 */	mr r3, r27
/* 8015066C 0014D74C  90 01 00 08 */	stw r0, 0x8(r1)
/* 80150670 0014D750  38 C0 00 00 */	li r6, 0x0
/* 80150674 0014D754  38 E0 00 00 */	li r7, 0x0
/* 80150678 0014D758  39 00 00 10 */	li r8, 0x10
/* 8015067C 0014D75C  90 01 00 0C */	stw r0, 0xc(r1)
/* 80150680 0014D760  39 20 00 00 */	li r9, 0x0
/* 80150684 0014D764  39 40 00 00 */	li r10, 0x0
/* 80150688 0014D768  C0 22 A7 6C */	lfs f1, "@1053"@sda21(r2)
/* 8015068C 0014D76C  80 9F 00 38 */	lwz r4, 0x38(r31)
/* 80150690 0014D770  FC 40 08 90 */	fmr f2, f1
/* 80150694 0014D774  80 BC 00 04 */	lwz r5, 0x4(r28)
/* 80150698 0014D778  C0 62 A7 8C */	lfs f3, "@1455"@sda21(r2)
/* 8015069C 0014D77C  4B EB 6D 25 */	bl xAnimTableNewTransition__FP10xAnimTablePCcPCcPFP15xAnimTransitionP11xAnimSinglePv_UiPFP15xAnimTransitionP11xAnimSinglePv_UiUiUiffUsUsfPUs
/* 801506A0 0014D780  7F 63 DB 78 */	mr r3, r27
/* 801506A4 0014D784  BB 61 00 4C */	lmw r27, 0x4c(r1)
/* 801506A8 0014D788  80 01 00 64 */	lwz r0, 0x64(r1)
/* 801506AC 0014D78C  7C 08 03 A6 */	mtlr r0
/* 801506B0 0014D790  38 21 00 60 */	addi r1, r1, 0x60
/* 801506B4 0014D794  4E 80 00 20 */	blr
.endfn ZNPC_AnimTable_Prawn__Fv

# zNPCPrawn::zNPCPrawn(int)
.fn __ct__9zNPCPrawnFi, global
/* 801506B8 0014D798  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801506BC 0014D79C  7C 08 02 A6 */	mflr r0
/* 801506C0 0014D7A0  90 01 00 14 */	stw r0, 0x14(r1)
/* 801506C4 0014D7A4  93 E1 00 0C */	stw r31, 0xc(r1)
/* 801506C8 0014D7A8  7C 7F 1B 78 */	mr r31, r3
/* 801506CC 0014D7AC  4B FE 59 FD */	bl __ct__11zNPCSubBossFi
/* 801506D0 0014D7B0  3C 60 80 2A */	lis r3, __vt__9zNPCPrawn@ha
/* 801506D4 0014D7B4  38 00 00 00 */	li r0, 0x0
/* 801506D8 0014D7B8  38 83 A3 C0 */	addi r4, r3, __vt__9zNPCPrawn@l
/* 801506DC 0014D7BC  7F E3 FB 78 */	mr r3, r31
/* 801506E0 0014D7C0  90 9F 01 B8 */	stw r4, 0x1b8(r31)
/* 801506E4 0014D7C4  98 1F 02 F5 */	stb r0, 0x2f5(r31)
/* 801506E8 0014D7C8  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 801506EC 0014D7CC  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801506F0 0014D7D0  7C 08 03 A6 */	mtlr r0
/* 801506F4 0014D7D4  38 21 00 10 */	addi r1, r1, 0x10
/* 801506F8 0014D7D8  4E 80 00 20 */	blr
.endfn __ct__9zNPCPrawnFi

# zNPCPrawn::Init(xEntAsset*)
.fn Init__9zNPCPrawnFP9xEntAsset, global
/* 801506FC 0014D7DC  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80150700 0014D7E0  7C 08 02 A6 */	mflr r0
/* 80150704 0014D7E4  3C A0 80 2A */	lis r5, "boss_cam__27@unnamed@zNPCTypePrawn_cpp@"@ha
/* 80150708 0014D7E8  90 01 00 14 */	stw r0, 0x14(r1)
/* 8015070C 0014D7EC  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80150710 0014D7F0  7C 9F 23 78 */	mr r31, r4
/* 80150714 0014D7F4  93 C1 00 08 */	stw r30, 0x8(r1)
/* 80150718 0014D7F8  7C 7E 1B 78 */	mr r30, r3
/* 8015071C 0014D7FC  38 65 A2 40 */	addi r3, r5, "boss_cam__27@unnamed@zNPCTypePrawn_cpp@"@l
/* 80150720 0014D800  4B EB D7 81 */	bl init__13xBinaryCameraFv
/* 80150724 0014D804  4B FF F0 49 */	bl "init_sound__27@unnamed@zNPCTypePrawn_cpp@Fv"
/* 80150728 0014D808  7F C3 F3 78 */	mr r3, r30
/* 8015072C 0014D80C  7F E4 FB 78 */	mr r4, r31
/* 80150730 0014D810  4B F9 E9 6D */	bl Init__10zNPCCommonFP9xEntAsset
/* 80150734 0014D814  38 7E 02 B4 */	addi r3, r30, 0x2b4
/* 80150738 0014D818  38 80 00 00 */	li r4, 0x0
/* 8015073C 0014D81C  38 A0 00 01 */	li r5, 0x1
/* 80150740 0014D820  4B EB 2D 19 */	bl memset
/* 80150744 0014D824  38 00 00 01 */	li r0, 0x1
/* 80150748 0014D828  3C 60 00 10 */	lis r3, 0x10
/* 8015074C 0014D82C  90 1E 01 CC */	stw r0, 0x1cc(r30)
/* 80150750 0014D830  38 83 00 01 */	addi r4, r3, 0x1
/* 80150754 0014D834  3C 60 80 27 */	lis r3, "@stringBase0"@ha
/* 80150758 0014D838  38 00 00 10 */	li r0, 0x10
/* 8015075C 0014D83C  90 9E 01 C8 */	stw r4, 0x1c8(r30)
/* 80150760 0014D840  38 63 E9 F0 */	addi r3, r3, "@stringBase0"@l
/* 80150764 0014D844  38 63 00 8F */	addi r3, r3, 0x8f
/* 80150768 0014D848  98 1E 00 22 */	stb r0, 0x22(r30)
/* 8015076C 0014D84C  98 1E 00 23 */	stb r0, 0x23(r30)
/* 80150770 0014D850  4B EF BA A5 */	bl xStrHash__FPCc
/* 80150774 0014D854  3C 80 80 33 */	lis r4, "tweak__27@unnamed@zNPCTypePrawn_cpp@"@ha
/* 80150778 0014D858  7C 65 1B 78 */	mr r5, r3
/* 8015077C 0014D85C  38 84 95 E0 */	addi r4, r4, "tweak__27@unnamed@zNPCTypePrawn_cpp@"@l
/* 80150780 0014D860  38 7E 03 28 */	addi r3, r30, 0x328
/* 80150784 0014D864  38 84 00 64 */	addi r4, r4, 0x64
/* 80150788 0014D868  4B FF F3 49 */	bl load__9aqua_beamFRCQ29aqua_beam6configUi
/* 8015078C 0014D86C  3C 60 80 33 */	lis r3, "closeup__27@unnamed@zNPCTypePrawn_cpp@"@ha
/* 80150790 0014D870  38 80 01 00 */	li r4, 0x100
/* 80150794 0014D874  38 63 98 40 */	addi r3, r3, "closeup__27@unnamed@zNPCTypePrawn_cpp@"@l
/* 80150798 0014D878  38 A0 01 00 */	li r5, 0x100
/* 8015079C 0014D87C  48 00 00 1D */	bl "create__Q227@unnamed@zNPCTypePrawn_cpp@10televisionFii"
/* 801507A0 0014D880  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801507A4 0014D884  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 801507A8 0014D888  83 C1 00 08 */	lwz r30, 0x8(r1)
/* 801507AC 0014D88C  7C 08 03 A6 */	mtlr r0
/* 801507B0 0014D890  38 21 00 10 */	addi r1, r1, 0x10
/* 801507B4 0014D894  4E 80 00 20 */	blr
.endfn Init__9zNPCPrawnFP9xEntAsset

# @unnamed@zNPCTypePrawn_cpp@::television::create(int, int)
.fn "create__Q227@unnamed@zNPCTypePrawn_cpp@10televisionFii", local
/* 801507B8 0014D898  94 21 FF B0 */	stwu r1, -0x50(r1)
/* 801507BC 0014D89C  7C 08 02 A6 */	mflr r0
/* 801507C0 0014D8A0  90 01 00 54 */	stw r0, 0x54(r1)
/* 801507C4 0014D8A4  38 00 00 00 */	li r0, 0x0
/* 801507C8 0014D8A8  93 E1 00 4C */	stw r31, 0x4c(r1)
/* 801507CC 0014D8AC  7C 7F 1B 78 */	mr r31, r3
/* 801507D0 0014D8B0  93 C1 00 48 */	stw r30, 0x48(r1)
/* 801507D4 0014D8B4  7C BE 2B 78 */	mr r30, r5
/* 801507D8 0014D8B8  38 A0 00 04 */	li r5, 0x4
/* 801507DC 0014D8BC  93 A1 00 44 */	stw r29, 0x44(r1)
/* 801507E0 0014D8C0  7C 9D 23 78 */	mr r29, r4
/* 801507E4 0014D8C4  38 80 00 00 */	li r4, 0x0
/* 801507E8 0014D8C8  90 03 00 00 */	stw r0, 0x0(r3)
/* 801507EC 0014D8CC  38 7F 00 18 */	addi r3, r31, 0x18
/* 801507F0 0014D8D0  90 1F 00 08 */	stw r0, 0x8(r31)
/* 801507F4 0014D8D4  90 1F 00 04 */	stw r0, 0x4(r31)
/* 801507F8 0014D8D8  90 1F 00 0C */	stw r0, 0xc(r31)
/* 801507FC 0014D8DC  4B EB 2C 5D */	bl memset
/* 80150800 0014D8E0  3C 60 43 30 */	lis r3, 0x4330
/* 80150804 0014D8E4  6F A0 80 00 */	xoris r0, r29, 0x8000
/* 80150808 0014D8E8  90 01 00 2C */	stw r0, 0x2c(r1)
/* 8015080C 0014D8EC  6F C0 80 00 */	xoris r0, r30, 0x8000
/* 80150810 0014D8F0  C8 22 A7 A0 */	lfd f1, "@1496"@sda21(r2)
/* 80150814 0014D8F4  90 61 00 28 */	stw r3, 0x28(r1)
/* 80150818 0014D8F8  C8 01 00 28 */	lfd f0, 0x28(r1)
/* 8015081C 0014D8FC  90 01 00 34 */	stw r0, 0x34(r1)
/* 80150820 0014D900  EC 00 08 28 */	fsubs f0, f0, f1
/* 80150824 0014D904  90 61 00 30 */	stw r3, 0x30(r1)
/* 80150828 0014D908  D0 1F 00 20 */	stfs f0, 0x20(r31)
/* 8015082C 0014D90C  C8 01 00 30 */	lfd f0, 0x30(r1)
/* 80150830 0014D910  C8 22 A7 A0 */	lfd f1, "@1496"@sda21(r2)
/* 80150834 0014D914  EC 00 08 28 */	fsubs f0, f0, f1
/* 80150838 0014D918  D0 1F 00 24 */	stfs f0, 0x24(r31)
/* 8015083C 0014D91C  48 0E 73 25 */	bl RwCameraCreate
/* 80150840 0014D920  90 7F 00 00 */	stw r3, 0x0(r31)
/* 80150844 0014D924  80 1F 00 00 */	lwz r0, 0x0(r31)
/* 80150848 0014D928  28 00 00 00 */	cmplwi r0, 0x0
/* 8015084C 0014D92C  40 82 00 14 */	bne .L_80150860
/* 80150850 0014D930  7F E3 FB 78 */	mr r3, r31
/* 80150854 0014D934  48 00 01 7D */	bl "destroy__Q227@unnamed@zNPCTypePrawn_cpp@10televisionFv"
/* 80150858 0014D938  38 60 00 00 */	li r3, 0x0
/* 8015085C 0014D93C  48 00 01 58 */	b .L_801509B4
.L_80150860:
/* 80150860 0014D940  C0 02 A7 78 */	lfs f0, "@1284"@sda21(r2)
/* 80150864 0014D944  38 61 00 10 */	addi r3, r1, 0x10
/* 80150868 0014D948  D0 01 00 18 */	stfs f0, 0x18(r1)
/* 8015086C 0014D94C  D0 01 00 14 */	stfs f0, 0x14(r1)
/* 80150870 0014D950  D0 01 00 10 */	stfs f0, 0x10(r1)
/* 80150874 0014D954  C0 02 A7 90 */	lfs f0, "@1492"@sda21(r2)
/* 80150878 0014D958  D0 01 00 24 */	stfs f0, 0x24(r1)
/* 8015087C 0014D95C  D0 01 00 20 */	stfs f0, 0x20(r1)
/* 80150880 0014D960  D0 01 00 1C */	stfs f0, 0x1c(r1)
/* 80150884 0014D964  48 0C C8 1D */	bl RpWorldCreate
/* 80150888 0014D968  90 7F 00 0C */	stw r3, 0xc(r31)
/* 8015088C 0014D96C  80 7F 00 0C */	lwz r3, 0xc(r31)
/* 80150890 0014D970  28 03 00 00 */	cmplwi r3, 0x0
/* 80150894 0014D974  40 82 00 14 */	bne .L_801508A8
/* 80150898 0014D978  7F E3 FB 78 */	mr r3, r31
/* 8015089C 0014D97C  48 00 01 35 */	bl "destroy__Q227@unnamed@zNPCTypePrawn_cpp@10televisionFv"
/* 801508A0 0014D980  38 60 00 00 */	li r3, 0x0
/* 801508A4 0014D984  48 00 01 10 */	b .L_801509B4
.L_801508A8:
/* 801508A8 0014D988  80 9F 00 00 */	lwz r4, 0x0(r31)
/* 801508AC 0014D98C  48 0C E6 49 */	bl RpWorldAddCamera
/* 801508B0 0014D990  48 0E 81 D9 */	bl RwFrameCreate
/* 801508B4 0014D994  7C 64 1B 78 */	mr r4, r3
/* 801508B8 0014D998  80 7F 00 00 */	lwz r3, 0x0(r31)
/* 801508BC 0014D99C  48 0E E9 39 */	bl _rwObjectHasFrameSetFrame
/* 801508C0 0014D9A0  80 62 A7 80 */	lwz r3, "@1431"@sda21(r2)
/* 801508C4 0014D9A4  38 81 00 08 */	addi r4, r1, 0x8
/* 801508C8 0014D9A8  80 02 A7 84 */	lwz r0, "@1431"+0x4@sda21(r2)
/* 801508CC 0014D9AC  90 61 00 08 */	stw r3, 0x8(r1)
/* 801508D0 0014D9B0  80 7F 00 00 */	lwz r3, 0x0(r31)
/* 801508D4 0014D9B4  90 01 00 0C */	stw r0, 0xc(r1)
/* 801508D8 0014D9B8  48 0E 71 7D */	bl RwCameraSetViewWindow
/* 801508DC 0014D9BC  80 7F 00 00 */	lwz r3, 0x0(r31)
/* 801508E0 0014D9C0  38 80 00 01 */	li r4, 0x1
/* 801508E4 0014D9C4  48 0E 70 5D */	bl RwCameraSetProjection
/* 801508E8 0014D9C8  80 7F 00 00 */	lwz r3, 0x0(r31)
/* 801508EC 0014D9CC  80 03 00 04 */	lwz r0, 0x4(r3)
/* 801508F0 0014D9D0  28 00 00 00 */	cmplwi r0, 0x0
/* 801508F4 0014D9D4  40 82 00 14 */	bne .L_80150908
/* 801508F8 0014D9D8  7F E3 FB 78 */	mr r3, r31
/* 801508FC 0014D9DC  48 00 00 D5 */	bl "destroy__Q227@unnamed@zNPCTypePrawn_cpp@10televisionFv"
/* 80150900 0014D9E0  38 60 00 00 */	li r3, 0x0
/* 80150904 0014D9E4  48 00 00 B0 */	b .L_801509B4
.L_80150908:
/* 80150908 0014D9E8  7F A3 EB 78 */	mr r3, r29
/* 8015090C 0014D9EC  7F C4 F3 78 */	mr r4, r30
/* 80150910 0014D9F0  38 A0 00 20 */	li r5, 0x20
/* 80150914 0014D9F4  38 C0 00 05 */	li r6, 0x5
/* 80150918 0014D9F8  48 0E AF C5 */	bl RwRasterCreate
/* 8015091C 0014D9FC  90 7F 00 04 */	stw r3, 0x4(r31)
/* 80150920 0014DA00  80 1F 00 04 */	lwz r0, 0x4(r31)
/* 80150924 0014DA04  28 00 00 00 */	cmplwi r0, 0x0
/* 80150928 0014DA08  40 82 00 14 */	bne .L_8015093C
/* 8015092C 0014DA0C  7F E3 FB 78 */	mr r3, r31
/* 80150930 0014DA10  48 00 00 A1 */	bl "destroy__Q227@unnamed@zNPCTypePrawn_cpp@10televisionFv"
/* 80150934 0014DA14  38 60 00 00 */	li r3, 0x0
/* 80150938 0014DA18  48 00 00 7C */	b .L_801509B4
.L_8015093C:
/* 8015093C 0014DA1C  80 7F 00 00 */	lwz r3, 0x0(r31)
/* 80150940 0014DA20  90 03 00 60 */	stw r0, 0x60(r3)
/* 80150944 0014DA24  80 1F 00 00 */	lwz r0, 0x0(r31)
/* 80150948 0014DA28  28 00 00 00 */	cmplwi r0, 0x0
/* 8015094C 0014DA2C  40 82 00 14 */	bne .L_80150960
/* 80150950 0014DA30  7F E3 FB 78 */	mr r3, r31
/* 80150954 0014DA34  48 00 00 7D */	bl "destroy__Q227@unnamed@zNPCTypePrawn_cpp@10televisionFv"
/* 80150958 0014DA38  38 60 00 00 */	li r3, 0x0
/* 8015095C 0014DA3C  48 00 00 58 */	b .L_801509B4
.L_80150960:
/* 80150960 0014DA40  80 7F 00 04 */	lwz r3, 0x4(r31)
/* 80150964 0014DA44  48 0E DD A9 */	bl RwTextureCreate
/* 80150968 0014DA48  90 7F 00 10 */	stw r3, 0x10(r31)
/* 8015096C 0014DA4C  80 7F 00 10 */	lwz r3, 0x10(r31)
/* 80150970 0014DA50  28 03 00 00 */	cmplwi r3, 0x0
/* 80150974 0014DA54  40 82 00 14 */	bne .L_80150988
/* 80150978 0014DA58  7F E3 FB 78 */	mr r3, r31
/* 8015097C 0014DA5C  48 00 00 55 */	bl "destroy__Q227@unnamed@zNPCTypePrawn_cpp@10televisionFv"
/* 80150980 0014DA60  38 60 00 00 */	li r3, 0x0
/* 80150984 0014DA64  48 00 00 30 */	b .L_801509B4
.L_80150988:
/* 80150988 0014DA68  80 03 00 50 */	lwz r0, 0x50(r3)
/* 8015098C 0014DA6C  54 00 00 2E */	clrrwi r0, r0, 8
/* 80150990 0014DA70  60 00 00 02 */	ori r0, r0, 0x2
/* 80150994 0014DA74  90 03 00 50 */	stw r0, 0x50(r3)
/* 80150998 0014DA78  80 7F 00 00 */	lwz r3, 0x0(r31)
/* 8015099C 0014DA7C  C0 22 A7 94 */	lfs f1, "@1493"@sda21(r2)
/* 801509A0 0014DA80  48 0E 6C 85 */	bl RwCameraSetNearClipPlane
/* 801509A4 0014DA84  80 7F 00 00 */	lwz r3, 0x0(r31)
/* 801509A8 0014DA88  C0 22 A7 98 */	lfs f1, "@1494"@sda21(r2)
/* 801509AC 0014DA8C  48 0E 6D 45 */	bl RwCameraSetFarClipPlane
/* 801509B0 0014DA90  38 60 00 01 */	li r3, 0x1
.L_801509B4:
/* 801509B4 0014DA94  80 01 00 54 */	lwz r0, 0x54(r1)
/* 801509B8 0014DA98  83 E1 00 4C */	lwz r31, 0x4c(r1)
/* 801509BC 0014DA9C  83 C1 00 48 */	lwz r30, 0x48(r1)
/* 801509C0 0014DAA0  83 A1 00 44 */	lwz r29, 0x44(r1)
/* 801509C4 0014DAA4  7C 08 03 A6 */	mtlr r0
/* 801509C8 0014DAA8  38 21 00 50 */	addi r1, r1, 0x50
/* 801509CC 0014DAAC  4E 80 00 20 */	blr
.endfn "create__Q227@unnamed@zNPCTypePrawn_cpp@10televisionFii"

# @unnamed@zNPCTypePrawn_cpp@::television::destroy()
.fn "destroy__Q227@unnamed@zNPCTypePrawn_cpp@10televisionFv", local
/* 801509D0 0014DAB0  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801509D4 0014DAB4  7C 08 02 A6 */	mflr r0
/* 801509D8 0014DAB8  90 01 00 14 */	stw r0, 0x14(r1)
/* 801509DC 0014DABC  93 E1 00 0C */	stw r31, 0xc(r1)
/* 801509E0 0014DAC0  93 C1 00 08 */	stw r30, 0x8(r1)
/* 801509E4 0014DAC4  7C 7E 1B 78 */	mr r30, r3
/* 801509E8 0014DAC8  80 63 00 10 */	lwz r3, 0x10(r3)
/* 801509EC 0014DACC  28 03 00 00 */	cmplwi r3, 0x0
/* 801509F0 0014DAD0  41 82 00 0C */	beq .L_801509FC
/* 801509F4 0014DAD4  48 0E DD C1 */	bl RwTextureDestroy
/* 801509F8 0014DAD8  48 00 00 14 */	b .L_80150A0C
.L_801509FC:
/* 801509FC 0014DADC  80 7E 00 04 */	lwz r3, 0x4(r30)
/* 80150A00 0014DAE0  28 03 00 00 */	cmplwi r3, 0x0
/* 80150A04 0014DAE4  41 82 00 08 */	beq .L_80150A0C
/* 80150A08 0014DAE8  48 0E AC ED */	bl RwRasterDestroy
.L_80150A0C:
/* 80150A0C 0014DAEC  80 7E 00 00 */	lwz r3, 0x0(r30)
/* 80150A10 0014DAF0  28 03 00 00 */	cmplwi r3, 0x0
/* 80150A14 0014DAF4  41 82 00 34 */	beq .L_80150A48
/* 80150A18 0014DAF8  83 E3 00 04 */	lwz r31, 0x4(r3)
/* 80150A1C 0014DAFC  28 1F 00 00 */	cmplwi r31, 0x0
/* 80150A20 0014DB00  41 82 00 14 */	beq .L_80150A34
/* 80150A24 0014DB04  38 80 00 00 */	li r4, 0x0
/* 80150A28 0014DB08  48 0E E7 CD */	bl _rwObjectHasFrameSetFrame
/* 80150A2C 0014DB0C  7F E3 FB 78 */	mr r3, r31
/* 80150A30 0014DB10  48 0E 81 95 */	bl RwFrameDestroy
.L_80150A34:
/* 80150A34 0014DB14  80 7E 00 0C */	lwz r3, 0xc(r30)
/* 80150A38 0014DB18  80 9E 00 00 */	lwz r4, 0x0(r30)
/* 80150A3C 0014DB1C  48 0C E5 0D */	bl RpWorldRemoveCamera
/* 80150A40 0014DB20  80 7E 00 00 */	lwz r3, 0x0(r30)
/* 80150A44 0014DB24  48 0E 70 BD */	bl RwCameraDestroy
.L_80150A48:
/* 80150A48 0014DB28  80 7E 00 0C */	lwz r3, 0xc(r30)
/* 80150A4C 0014DB2C  28 03 00 00 */	cmplwi r3, 0x0
/* 80150A50 0014DB30  41 82 00 08 */	beq .L_80150A58
/* 80150A54 0014DB34  48 0C C4 CD */	bl RpWorldDestroy
.L_80150A58:
/* 80150A58 0014DB38  38 00 00 00 */	li r0, 0x0
/* 80150A5C 0014DB3C  90 1E 00 00 */	stw r0, 0x0(r30)
/* 80150A60 0014DB40  90 1E 00 04 */	stw r0, 0x4(r30)
/* 80150A64 0014DB44  90 1E 00 0C */	stw r0, 0xc(r30)
/* 80150A68 0014DB48  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80150A6C 0014DB4C  83 C1 00 08 */	lwz r30, 0x8(r1)
/* 80150A70 0014DB50  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80150A74 0014DB54  7C 08 03 A6 */	mtlr r0
/* 80150A78 0014DB58  38 21 00 10 */	addi r1, r1, 0x10
/* 80150A7C 0014DB5C  4E 80 00 20 */	blr
.endfn "destroy__Q227@unnamed@zNPCTypePrawn_cpp@10televisionFv"

# zNPCPrawn::Setup()
.fn Setup__9zNPCPrawnFv, global
/* 80150A80 0014DB60  94 21 FF 80 */	stwu r1, -0x80(r1)
/* 80150A84 0014DB64  7C 08 02 A6 */	mflr r0
/* 80150A88 0014DB68  3C 80 80 27 */	lis r4, "@stringBase0"@ha
/* 80150A8C 0014DB6C  90 01 00 84 */	stw r0, 0x84(r1)
/* 80150A90 0014DB70  BE E1 00 5C */	stmw r23, 0x5c(r1)
/* 80150A94 0014DB74  7C 7E 1B 78 */	mr r30, r3
/* 80150A98 0014DB78  38 64 E9 F0 */	addi r3, r4, "@stringBase0"@l
/* 80150A9C 0014DB7C  38 63 00 A1 */	addi r3, r3, 0xa1
/* 80150AA0 0014DB80  4B EF B7 75 */	bl xStrHash__FPCc
/* 80150AA4 0014DB84  4B F6 3F 99 */	bl zSceneFindObject__FUi
/* 80150AA8 0014DB88  90 7E 02 CC */	stw r3, 0x2cc(r30)
/* 80150AAC 0014DB8C  38 00 00 00 */	li r0, 0x0
/* 80150AB0 0014DB90  3C 60 80 27 */	lis r3, "@stringBase0"@ha
/* 80150AB4 0014DB94  3B E0 00 00 */	li r31, 0x0
/* 80150AB8 0014DB98  90 1E 14 20 */	stw r0, 0x1420(r30)
/* 80150ABC 0014DB9C  3B 83 E9 F0 */	addi r28, r3, "@stringBase0"@l
.L_80150AC0:
/* 80150AC0 0014DBA0  7F E5 FB 78 */	mr r5, r31
/* 80150AC4 0014DBA4  38 61 00 0C */	addi r3, r1, 0xc
/* 80150AC8 0014DBA8  38 9C 00 AD */	addi r4, r28, 0xad
/* 80150ACC 0014DBAC  4C C6 31 82 */	crclr 4*cr1+eq
/* 80150AD0 0014DBB0  48 09 34 65 */	bl sprintf
/* 80150AD4 0014DBB4  38 61 00 0C */	addi r3, r1, 0xc
/* 80150AD8 0014DBB8  4B EF B7 3D */	bl xStrHash__FPCc
/* 80150ADC 0014DBBC  4B F6 3F 61 */	bl zSceneFindObject__FUi
/* 80150AE0 0014DBC0  7C 7D 1B 79 */	mr. r29, r3
/* 80150AE4 0014DBC4  41 82 00 C8 */	beq .L_80150BAC
/* 80150AE8 0014DBC8  88 7D 00 04 */	lbz r3, 0x4(r29)
/* 80150AEC 0014DBCC  4B EC A8 D1 */	bl xEntValidType__FUc
/* 80150AF0 0014DBD0  54 60 06 3F */	clrlwi. r0, r3, 24
/* 80150AF4 0014DBD4  41 82 00 B8 */	beq .L_80150BAC
/* 80150AF8 0014DBD8  80 9D 00 24 */	lwz r4, 0x24(r29)
/* 80150AFC 0014DBDC  28 04 00 00 */	cmplwi r4, 0x0
/* 80150B00 0014DBE0  41 82 00 AC */	beq .L_80150BAC
/* 80150B04 0014DBE4  80 1E 14 20 */	lwz r0, 0x1420(r30)
/* 80150B08 0014DBE8  54 03 10 3A */	slwi r3, r0, 2
/* 80150B0C 0014DBEC  38 03 14 00 */	addi r0, r3, 0x1400
/* 80150B10 0014DBF0  7C 9E 01 2E */	stwx r4, r30, r0
/* 80150B14 0014DBF4  80 9D 00 24 */	lwz r4, 0x24(r29)
/* 80150B18 0014DBF8  80 64 00 10 */	lwz r3, 0x10(r4)
/* 80150B1C 0014DBFC  80 A3 00 18 */	lwz r5, 0x18(r3)
/* 80150B20 0014DC00  28 05 00 00 */	cmplwi r5, 0x0
/* 80150B24 0014DC04  41 82 00 88 */	beq .L_80150BAC
/* 80150B28 0014DC08  80 65 00 5C */	lwz r3, 0x5c(r5)
/* 80150B2C 0014DC0C  28 03 00 00 */	cmplwi r3, 0x0
/* 80150B30 0014DC10  41 82 00 7C */	beq .L_80150BAC
/* 80150B34 0014DC14  83 43 00 14 */	lwz r26, 0x14(r3)
/* 80150B38 0014DC18  28 1A 00 00 */	cmplwi r26, 0x0
/* 80150B3C 0014DC1C  41 82 00 70 */	beq .L_80150BAC
/* 80150B40 0014DC20  80 1E 14 20 */	lwz r0, 0x1420(r30)
/* 80150B44 0014DC24  3C 60 80 27 */	lis r3, vert_index$1513@ha
/* 80150B48 0014DC28  3B A3 E9 40 */	addi r29, r3, vert_index$1513@l
/* 80150B4C 0014DC2C  83 24 00 4C */	lwz r25, 0x4c(r4)
/* 80150B50 0014DC30  1C 60 00 30 */	mulli r3, r0, 0x30
/* 80150B54 0014DC34  83 05 00 14 */	lwz r24, 0x14(r5)
/* 80150B58 0014DC38  3A E0 00 00 */	li r23, 0x0
/* 80150B5C 0014DC3C  3B 63 12 80 */	addi r27, r3, 0x1280
/* 80150B60 0014DC40  7F 7E DA 14 */	add r27, r30, r27
.L_80150B64:
/* 80150B64 0014DC44  80 1D 00 00 */	lwz r0, 0x0(r29)
/* 80150B68 0014DC48  7C 00 C0 00 */	cmpw r0, r24
/* 80150B6C 0014DC4C  40 80 00 2C */	bge .L_80150B98
/* 80150B70 0014DC50  1C 00 00 0C */	mulli r0, r0, 0xc
/* 80150B74 0014DC54  7F 63 DB 78 */	mr r3, r27
/* 80150B78 0014DC58  7F 24 CB 78 */	mr r4, r25
/* 80150B7C 0014DC5C  7C BA 02 14 */	add r5, r26, r0
/* 80150B80 0014DC60  4B EB A3 F1 */	bl xMat4x3Toworld__FP5xVec3PC7xMat4x3PC5xVec3
/* 80150B84 0014DC64  3A F7 00 01 */	addi r23, r23, 0x1
/* 80150B88 0014DC68  3B 7B 00 0C */	addi r27, r27, 0xc
/* 80150B8C 0014DC6C  2C 17 00 04 */	cmpwi r23, 0x4
/* 80150B90 0014DC70  3B BD 00 04 */	addi r29, r29, 0x4
/* 80150B94 0014DC74  41 80 FF D0 */	blt .L_80150B64
.L_80150B98:
/* 80150B98 0014DC78  2C 17 00 04 */	cmpwi r23, 0x4
/* 80150B9C 0014DC7C  41 80 00 10 */	blt .L_80150BAC
/* 80150BA0 0014DC80  80 7E 14 20 */	lwz r3, 0x1420(r30)
/* 80150BA4 0014DC84  38 03 00 01 */	addi r0, r3, 0x1
/* 80150BA8 0014DC88  90 1E 14 20 */	stw r0, 0x1420(r30)
.L_80150BAC:
/* 80150BAC 0014DC8C  3B FF 00 01 */	addi r31, r31, 0x1
/* 80150BB0 0014DC90  2C 1F 00 08 */	cmpwi r31, 0x8
/* 80150BB4 0014DC94  41 80 FF 0C */	blt .L_80150AC0
/* 80150BB8 0014DC98  80 1E 14 20 */	lwz r0, 0x1420(r30)
/* 80150BBC 0014DC9C  28 00 00 00 */	cmplwi r0, 0x0
/* 80150BC0 0014DCA0  41 82 00 2C */	beq .L_80150BEC
/* 80150BC4 0014DCA4  38 60 00 00 */	li r3, 0x0
/* 80150BC8 0014DCA8  38 80 00 00 */	li r4, 0x0
/* 80150BCC 0014DCAC  38 A0 00 00 */	li r5, 0x0
/* 80150BD0 0014DCB0  38 C0 00 FF */	li r6, 0xff
/* 80150BD4 0014DCB4  4B ED E4 15 */	bl xColorFromRGBA__FUcUcUcUc
/* 80150BD8 0014DCB8  3C 80 80 33 */	lis r4, "closeup__27@unnamed@zNPCTypePrawn_cpp@"@ha
/* 80150BDC 0014DCBC  90 61 00 08 */	stw r3, 0x8(r1)
/* 80150BE0 0014DCC0  38 64 98 40 */	addi r3, r4, "closeup__27@unnamed@zNPCTypePrawn_cpp@"@l
/* 80150BE4 0014DCC4  38 81 00 08 */	addi r4, r1, 0x8
/* 80150BE8 0014DCC8  48 00 00 21 */	bl "set_background__Q227@unnamed@zNPCTypePrawn_cpp@10televisionF10iColor_tag"
.L_80150BEC:
/* 80150BEC 0014DCCC  7F C3 F3 78 */	mr r3, r30
/* 80150BF0 0014DCD0  4B FE 54 61 */	bl Setup__11zNPCSubBossFv
/* 80150BF4 0014DCD4  BA E1 00 5C */	lmw r23, 0x5c(r1)
/* 80150BF8 0014DCD8  80 01 00 84 */	lwz r0, 0x84(r1)
/* 80150BFC 0014DCDC  7C 08 03 A6 */	mtlr r0
/* 80150C00 0014DCE0  38 21 00 80 */	addi r1, r1, 0x80
/* 80150C04 0014DCE4  4E 80 00 20 */	blr
.endfn Setup__9zNPCPrawnFv

# @unnamed@zNPCTypePrawn_cpp@::television::set_background(iColor_tag)
.fn "set_background__Q227@unnamed@zNPCTypePrawn_cpp@10televisionF10iColor_tag", local
/* 80150C08 0014DCE8  38 00 00 00 */	li r0, 0x0
/* 80150C0C 0014DCEC  90 03 00 08 */	stw r0, 0x8(r3)
/* 80150C10 0014DCF0  88 04 00 00 */	lbz r0, 0x0(r4)
/* 80150C14 0014DCF4  98 03 00 18 */	stb r0, 0x18(r3)
/* 80150C18 0014DCF8  88 04 00 01 */	lbz r0, 0x1(r4)
/* 80150C1C 0014DCFC  98 03 00 19 */	stb r0, 0x19(r3)
/* 80150C20 0014DD00  88 04 00 02 */	lbz r0, 0x2(r4)
/* 80150C24 0014DD04  98 03 00 1A */	stb r0, 0x1a(r3)
/* 80150C28 0014DD08  88 04 00 03 */	lbz r0, 0x3(r4)
/* 80150C2C 0014DD0C  98 03 00 1B */	stb r0, 0x1b(r3)
/* 80150C30 0014DD10  4E 80 00 20 */	blr
.endfn "set_background__Q227@unnamed@zNPCTypePrawn_cpp@10televisionF10iColor_tag"

# zNPCPrawn::Reset()
.fn Reset__9zNPCPrawnFv, global
/* 80150C34 0014DD14  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 80150C38 0014DD18  7C 08 02 A6 */	mflr r0
/* 80150C3C 0014DD1C  90 01 00 24 */	stw r0, 0x24(r1)
/* 80150C40 0014DD20  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 80150C44 0014DD24  7C 7F 1B 78 */	mr r31, r3
/* 80150C48 0014DD28  93 C1 00 18 */	stw r30, 0x18(r1)
/* 80150C4C 0014DD2C  93 A1 00 14 */	stw r29, 0x14(r1)
/* 80150C50 0014DD30  4B FF EC 2D */	bl "reset_sound__27@unnamed@zNPCTypePrawn_cpp@Fv"
/* 80150C54 0014DD34  7F E3 FB 78 */	mr r3, r31
/* 80150C58 0014DD38  4B F9 EC 4D */	bl Reset__10zNPCCommonFv
/* 80150C5C 0014DD3C  38 7F 02 B4 */	addi r3, r31, 0x2b4
/* 80150C60 0014DD40  38 80 00 00 */	li r4, 0x0
/* 80150C64 0014DD44  38 A0 00 01 */	li r5, 0x1
/* 80150C68 0014DD48  4B EB 27 F1 */	bl memset
/* 80150C6C 0014DD4C  7F E3 FB 78 */	mr r3, r31
/* 80150C70 0014DD50  48 00 18 61 */	bl decompose__9zNPCPrawnFv
/* 80150C74 0014DD54  7F E3 FB 78 */	mr r3, r31
/* 80150C78 0014DD58  48 00 26 2D */	bl reappear__9zNPCPrawnFv
/* 80150C7C 0014DD5C  7F E3 FB 78 */	mr r3, r31
/* 80150C80 0014DD60  48 00 2F 35 */	bl show_model__9zNPCPrawnFv
/* 80150C84 0014DD64  80 7F 01 D8 */	lwz r3, 0x1d8(r31)
/* 80150C88 0014DD68  38 00 00 01 */	li r0, 0x1
/* 80150C8C 0014DD6C  7F FE FB 78 */	mr r30, r31
/* 80150C90 0014DD70  3B A0 00 00 */	li r29, 0x0
/* 80150C94 0014DD74  80 63 00 2C */	lwz r3, 0x2c(r3)
/* 80150C98 0014DD78  90 7F 02 B8 */	stw r3, 0x2b8(r31)
/* 80150C9C 0014DD7C  98 1F 02 C0 */	stb r0, 0x2c0(r31)
.L_80150CA0:
/* 80150CA0 0014DD80  80 7E 02 D0 */	lwz r3, 0x2d0(r30)
/* 80150CA4 0014DD84  28 03 00 00 */	cmplwi r3, 0x0
/* 80150CA8 0014DD88  41 82 00 08 */	beq .L_80150CB0
/* 80150CAC 0014DD8C  4B FD 9D 05 */	bl Reset__11zNPCSpawnerFv
.L_80150CB0:
/* 80150CB0 0014DD90  3B BD 00 01 */	addi r29, r29, 0x1
/* 80150CB4 0014DD94  3B DE 00 04 */	addi r30, r30, 0x4
/* 80150CB8 0014DD98  2C 1D 00 03 */	cmpwi r29, 0x3
/* 80150CBC 0014DD9C  41 80 FF E4 */	blt .L_80150CA0
/* 80150CC0 0014DDA0  7F E3 FB 78 */	mr r3, r31
/* 80150CC4 0014DDA4  48 00 17 61 */	bl update_round__9zNPCPrawnFv
/* 80150CC8 0014DDA8  3C 60 80 33 */	lis r3, "tweak__27@unnamed@zNPCTypePrawn_cpp@"@ha
/* 80150CCC 0014DDAC  38 80 00 00 */	li r4, 0x0
/* 80150CD0 0014DDB0  C0 03 95 E0 */	lfs f0, "tweak__27@unnamed@zNPCTypePrawn_cpp@"@l(r3)
/* 80150CD4 0014DDB4  38 00 00 01 */	li r0, 0x1
/* 80150CD8 0014DDB8  38 7F 03 28 */	addi r3, r31, 0x328
/* 80150CDC 0014DDBC  D0 1F 03 20 */	stfs f0, 0x320(r31)
/* 80150CE0 0014DDC0  80 BF 01 D8 */	lwz r5, 0x1d8(r31)
/* 80150CE4 0014DDC4  C0 05 00 14 */	lfs f0, 0x14(r5)
/* 80150CE8 0014DDC8  D0 1F 03 24 */	stfs f0, 0x324(r31)
/* 80150CEC 0014DDCC  90 9F 02 E4 */	stw r4, 0x2e4(r31)
/* 80150CF0 0014DDD0  98 9F 02 F5 */	stb r4, 0x2f5(r31)
/* 80150CF4 0014DDD4  98 1F 02 F4 */	stb r0, 0x2f4(r31)
/* 80150CF8 0014DDD8  4B FF EE 65 */	bl reset__9aqua_beamFv
/* 80150CFC 0014DDDC  3C 60 80 27 */	lis r3, "@stringBase0"@ha
/* 80150D00 0014DDE0  38 63 E9 F0 */	addi r3, r3, "@stringBase0"@l
/* 80150D04 0014DDE4  38 63 00 BC */	addi r3, r3, 0xbc
/* 80150D08 0014DDE8  4B F5 7B 3D */	bl zParEmitterFind__FPCc
/* 80150D0C 0014DDEC  3C 80 80 33 */	lis r4, "exhaust_emitter_settings__27@unnamed@zNPCTypePrawn_cpp@"@ha
/* 80150D10 0014DDF0  90 6D 96 C8 */	stw r3, "exhaust_emitter__27@unnamed@zNPCTypePrawn_cpp@"@sda21(r13)
/* 80150D14 0014DDF4  38 A4 98 68 */	addi r5, r4, "exhaust_emitter_settings__27@unnamed@zNPCTypePrawn_cpp@"@l
/* 80150D18 0014DDF8  38 00 03 00 */	li r0, 0x300
/* 80150D1C 0014DDFC  3C 60 80 25 */	lis r3, g_O3@ha
/* 80150D20 0014DE00  90 05 01 38 */	stw r0, 0x138(r5)
/* 80150D24 0014DE04  38 83 30 18 */	addi r4, r3, g_O3@l
/* 80150D28 0014DE08  38 65 01 40 */	addi r3, r5, 0x140
/* 80150D2C 0014DE0C  4B EB A5 39 */	bl __as__5xVec3FRC5xVec3
/* 80150D30 0014DE10  3C 80 80 33 */	lis r4, "exhaust_emitter_settings__27@unnamed@zNPCTypePrawn_cpp@"@ha
/* 80150D34 0014DE14  3C 60 80 25 */	lis r3, g_O3@ha
/* 80150D38 0014DE18  38 A4 98 68 */	addi r5, r4, "exhaust_emitter_settings__27@unnamed@zNPCTypePrawn_cpp@"@l
/* 80150D3C 0014DE1C  38 83 30 18 */	addi r4, r3, g_O3@l
/* 80150D40 0014DE20  38 65 01 4C */	addi r3, r5, 0x14c
/* 80150D44 0014DE24  4B EB A5 21 */	bl __as__5xVec3FRC5xVec3
/* 80150D48 0014DE28  3C 80 4E 47 */	lis r4, 0x4e47
/* 80150D4C 0014DE2C  80 7F 02 28 */	lwz r3, 0x228(r31)
/* 80150D50 0014DE30  38 84 4D 38 */	addi r4, r4, 0x4d38
/* 80150D54 0014DE34  38 A0 00 01 */	li r5, 0x1
/* 80150D58 0014DE38  4B FB C9 D9 */	bl GoalSet__7xPsycheFii
/* 80150D5C 0014DE3C  80 01 00 24 */	lwz r0, 0x24(r1)
/* 80150D60 0014DE40  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 80150D64 0014DE44  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 80150D68 0014DE48  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 80150D6C 0014DE4C  7C 08 03 A6 */	mtlr r0
/* 80150D70 0014DE50  38 21 00 20 */	addi r1, r1, 0x20
/* 80150D74 0014DE54  4E 80 00 20 */	blr
.endfn Reset__9zNPCPrawnFv

# zNPCPrawn::Destroy()
.fn Destroy__9zNPCPrawnFv, global
/* 80150D78 0014DE58  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80150D7C 0014DE5C  7C 08 02 A6 */	mflr r0
/* 80150D80 0014DE60  90 01 00 14 */	stw r0, 0x14(r1)
/* 80150D84 0014DE64  4B F9 EC 8D */	bl Destroy__10zNPCCommonFv
/* 80150D88 0014DE68  3C 60 80 33 */	lis r3, "closeup__27@unnamed@zNPCTypePrawn_cpp@"@ha
/* 80150D8C 0014DE6C  38 63 98 40 */	addi r3, r3, "closeup__27@unnamed@zNPCTypePrawn_cpp@"@l
/* 80150D90 0014DE70  4B FF FC 41 */	bl "destroy__Q227@unnamed@zNPCTypePrawn_cpp@10televisionFv"
/* 80150D94 0014DE74  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80150D98 0014DE78  7C 08 03 A6 */	mtlr r0
/* 80150D9C 0014DE7C  38 21 00 10 */	addi r1, r1, 0x10
/* 80150DA0 0014DE80  4E 80 00 20 */	blr
.endfn Destroy__9zNPCPrawnFv

# zNPCPrawn::Process(xScene*, float)
.fn Process__9zNPCPrawnFP6xScenef, global
/* 80150DA4 0014DE84  94 21 FF D0 */	stwu r1, -0x30(r1)
/* 80150DA8 0014DE88  7C 08 02 A6 */	mflr r0
/* 80150DAC 0014DE8C  90 01 00 34 */	stw r0, 0x34(r1)
/* 80150DB0 0014DE90  DB E1 00 20 */	stfd f31, 0x20(r1)
/* 80150DB4 0014DE94  F3 E1 00 28 */	psq_st f31, 0x28(r1), 0, qr0
/* 80150DB8 0014DE98  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 80150DBC 0014DE9C  93 C1 00 18 */	stw r30, 0x18(r1)
/* 80150DC0 0014DEA0  93 A1 00 14 */	stw r29, 0x14(r1)
/* 80150DC4 0014DEA4  93 81 00 10 */	stw r28, 0x10(r1)
/* 80150DC8 0014DEA8  7C 7C 1B 78 */	mr r28, r3
/* 80150DCC 0014DEAC  FF E0 08 90 */	fmr f31, f1
/* 80150DD0 0014DEB0  88 03 02 F4 */	lbz r0, 0x2f4(r3)
/* 80150DD4 0014DEB4  7C 9D 23 78 */	mr r29, r4
/* 80150DD8 0014DEB8  28 00 00 00 */	cmplwi r0, 0x0
/* 80150DDC 0014DEBC  41 82 00 1C */	beq .L_80150DF8
/* 80150DE0 0014DEC0  38 80 00 00 */	li r4, 0x0
/* 80150DE4 0014DEC4  38 A0 00 01 */	li r5, 0x1
/* 80150DE8 0014DEC8  38 C0 00 01 */	li r6, 0x1
/* 80150DEC 0014DECC  48 00 23 B9 */	bl set_floor_state__9zNPCPrawnFQ29zNPCPrawn16floor_state_enumbb
/* 80150DF0 0014DED0  38 00 00 00 */	li r0, 0x0
/* 80150DF4 0014DED4  98 1C 02 F4 */	stb r0, 0x2f4(r28)
.L_80150DF8:
/* 80150DF8 0014DED8  7F 83 E3 78 */	mr r3, r28
/* 80150DFC 0014DEDC  48 00 2C 31 */	bl repel_player__9zNPCPrawnCFv
/* 80150E00 0014DEE0  3B C0 00 00 */	li r30, 0x0
/* 80150E04 0014DEE4  7F 9F E3 78 */	mr r31, r28
.L_80150E08:
/* 80150E08 0014DEE8  80 7F 02 D0 */	lwz r3, 0x2d0(r31)
/* 80150E0C 0014DEEC  28 03 00 00 */	cmplwi r3, 0x0
/* 80150E10 0014DEF0  41 82 00 0C */	beq .L_80150E1C
/* 80150E14 0014DEF4  FC 20 F8 90 */	fmr f1, f31
/* 80150E18 0014DEF8  4B FD 9C 91 */	bl Timestep__11zNPCSpawnerFf
.L_80150E1C:
/* 80150E1C 0014DEFC  3B DE 00 01 */	addi r30, r30, 0x1
/* 80150E20 0014DF00  3B FF 00 04 */	addi r31, r31, 0x4
/* 80150E24 0014DF04  2C 1E 00 03 */	cmpwi r30, 0x3
/* 80150E28 0014DF08  41 80 FF E0 */	blt .L_80150E08
/* 80150E2C 0014DF0C  88 1C 02 F5 */	lbz r0, 0x2f5(r28)
/* 80150E30 0014DF10  28 00 00 00 */	cmplwi r0, 0x0
/* 80150E34 0014DF14  41 82 00 18 */	beq .L_80150E4C
/* 80150E38 0014DF18  80 7C 02 28 */	lwz r3, 0x228(r28)
/* 80150E3C 0014DF1C  4B FB C7 89 */	bl GIDOfActive__7xPsycheCFv
/* 80150E40 0014DF20  3C 03 B1 B9 */	addis r0, r3, 0xb1b9
/* 80150E44 0014DF24  28 00 4E 37 */	cmplwi r0, 0x4e37
/* 80150E48 0014DF28  40 82 00 18 */	bne .L_80150E60
.L_80150E4C:
/* 80150E4C 0014DF2C  FC 20 F8 90 */	fmr f1, f31
/* 80150E50 0014DF30  7F 83 E3 78 */	mr r3, r28
/* 80150E54 0014DF34  7F A4 EB 78 */	mr r4, r29
/* 80150E58 0014DF38  4B F9 F2 99 */	bl Process__10zNPCCommonFP6xScenef
/* 80150E5C 0014DF3C  48 00 00 D0 */	b .L_80150F2C
.L_80150E60:
/* 80150E60 0014DF40  C0 1C 02 F0 */	lfs f0, 0x2f0(r28)
/* 80150E64 0014DF44  FC 20 F8 90 */	fmr f1, f31
/* 80150E68 0014DF48  38 80 00 00 */	li r4, 0x0
/* 80150E6C 0014DF4C  EC 00 F8 2A */	fadds f0, f0, f31
/* 80150E70 0014DF50  D0 1C 02 F0 */	stfs f0, 0x2f0(r28)
/* 80150E74 0014DF54  80 7C 02 28 */	lwz r3, 0x228(r28)
/* 80150E78 0014DF58  4B FB D1 E9 */	bl Timestep__7xPsycheFfPv
/* 80150E7C 0014DF5C  88 1C 02 C0 */	lbz r0, 0x2c0(r28)
/* 80150E80 0014DF60  28 00 00 00 */	cmplwi r0, 0x0
/* 80150E84 0014DF64  41 82 00 48 */	beq .L_80150ECC
/* 80150E88 0014DF68  3C 80 80 3C */	lis r4, globals@ha
/* 80150E8C 0014DF6C  7F 83 E3 78 */	mr r3, r28
/* 80150E90 0014DF70  38 84 05 58 */	addi r4, r4, globals@l
/* 80150E94 0014DF74  80 84 07 04 */	lwz r4, 0x704(r4)
/* 80150E98 0014DF78  83 E4 00 4C */	lwz r31, 0x4c(r4)
/* 80150E9C 0014DF7C  48 00 3C 41 */	bl get_center__9zNPCPrawnCFv
/* 80150EA0 0014DF80  7C 64 1B 78 */	mr r4, r3
/* 80150EA4 0014DF84  C0 7F 00 30 */	lfs f3, 0x30(r31)
/* 80150EA8 0014DF88  C0 23 00 00 */	lfs f1, 0x0(r3)
/* 80150EAC 0014DF8C  38 7C 02 C4 */	addi r3, r28, 0x2c4
/* 80150EB0 0014DF90  C0 5F 00 38 */	lfs f2, 0x38(r31)
/* 80150EB4 0014DF94  C0 04 00 08 */	lfs f0, 0x8(r4)
/* 80150EB8 0014DF98  EC 23 08 28 */	fsubs f1, f3, f1
/* 80150EBC 0014DF9C  EC 42 00 28 */	fsubs f2, f2, f0
/* 80150EC0 0014DFA0  4B ED 54 59 */	bl assign__5xVec2Fff
/* 80150EC4 0014DFA4  38 7C 02 C4 */	addi r3, r28, 0x2c4
/* 80150EC8 0014DFA8  4B FC C6 55 */	bl normalize__5xVec2Fv
.L_80150ECC:
/* 80150ECC 0014DFAC  FC 20 F8 90 */	fmr f1, f31
/* 80150ED0 0014DFB0  7F 83 E3 78 */	mr r3, r28
/* 80150ED4 0014DFB4  48 00 18 89 */	bl update_turn__9zNPCPrawnFf
/* 80150ED8 0014DFB8  FC 20 F8 90 */	fmr f1, f31
/* 80150EDC 0014DFBC  7F 83 E3 78 */	mr r3, r28
/* 80150EE0 0014DFC0  48 00 1B 8D */	bl update_animation__9zNPCPrawnFf
/* 80150EE4 0014DFC4  FC 20 F8 90 */	fmr f1, f31
/* 80150EE8 0014DFC8  7F 83 E3 78 */	mr r3, r28
/* 80150EEC 0014DFCC  48 00 1C 91 */	bl update_floor__9zNPCPrawnFf
/* 80150EF0 0014DFD0  FC 20 F8 90 */	fmr f1, f31
/* 80150EF4 0014DFD4  7F 83 E3 78 */	mr r3, r28
/* 80150EF8 0014DFD8  48 00 1D 2D */	bl update_beam__9zNPCPrawnFf
/* 80150EFC 0014DFDC  FC 20 F8 90 */	fmr f1, f31
/* 80150F00 0014DFE0  7F 83 E3 78 */	mr r3, r28
/* 80150F04 0014DFE4  48 00 1F 31 */	bl update_particles__9zNPCPrawnFf
/* 80150F08 0014DFE8  7F 83 E3 78 */	mr r3, r28
/* 80150F0C 0014DFEC  48 00 29 A5 */	bl check_player_damage__9zNPCPrawnFv
/* 80150F10 0014DFF0  FC 20 F8 90 */	fmr f1, f31
/* 80150F14 0014DFF4  7F 83 E3 78 */	mr r3, r28
/* 80150F18 0014DFF8  48 00 1F 21 */	bl update_camera__9zNPCPrawnFf
/* 80150F1C 0014DFFC  FC 20 F8 90 */	fmr f1, f31
/* 80150F20 0014E000  7F 83 E3 78 */	mr r3, r28
/* 80150F24 0014E004  7F A4 EB 78 */	mr r4, r29
/* 80150F28 0014E008  4B F9 F1 C9 */	bl Process__10zNPCCommonFP6xScenef
.L_80150F2C:
/* 80150F2C 0014E00C  E3 E1 00 28 */	psq_l f31, 0x28(r1), 0, qr0
/* 80150F30 0014E010  80 01 00 34 */	lwz r0, 0x34(r1)
/* 80150F34 0014E014  CB E1 00 20 */	lfd f31, 0x20(r1)
/* 80150F38 0014E018  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 80150F3C 0014E01C  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 80150F40 0014E020  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 80150F44 0014E024  83 81 00 10 */	lwz r28, 0x10(r1)
/* 80150F48 0014E028  7C 08 03 A6 */	mtlr r0
/* 80150F4C 0014E02C  38 21 00 30 */	addi r1, r1, 0x30
/* 80150F50 0014E030  4E 80 00 20 */	blr
.endfn Process__9zNPCPrawnFP6xScenef

# zNPCPrawn::NewTime(xScene*, float)
.fn NewTime__9zNPCPrawnFP6xScenef, global
/* 80150F54 0014E034  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80150F58 0014E038  7C 08 02 A6 */	mflr r0
/* 80150F5C 0014E03C  90 01 00 14 */	stw r0, 0x14(r1)
/* 80150F60 0014E040  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80150F64 0014E044  7C 7F 1B 78 */	mr r31, r3
/* 80150F68 0014E048  4B F9 F3 E1 */	bl NewTime__10zNPCCommonFP6xScenef
/* 80150F6C 0014E04C  7F E3 FB 78 */	mr r3, r31
/* 80150F70 0014E050  48 00 23 81 */	bl render_closeup__9zNPCPrawnFv
/* 80150F74 0014E054  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80150F78 0014E058  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80150F7C 0014E05C  7C 08 03 A6 */	mtlr r0
/* 80150F80 0014E060  38 21 00 10 */	addi r1, r1, 0x10
/* 80150F84 0014E064  4E 80 00 20 */	blr
.endfn NewTime__9zNPCPrawnFP6xScenef

# zNPCPrawn::SysEvent(xBase*, xBase*, unsigned int, const float*, xBase*, int*)
.fn SysEvent__9zNPCPrawnFP5xBaseP5xBaseUiPCfP5xBasePi, global
/* 80150F88 0014E068  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80150F8C 0014E06C  7C 08 02 A6 */	mflr r0
/* 80150F90 0014E070  2C 06 01 B5 */	cmpwi r6, 0x1b5
/* 80150F94 0014E074  90 01 00 14 */	stw r0, 0x14(r1)
/* 80150F98 0014E078  41 82 00 28 */	beq .L_80150FC0
/* 80150F9C 0014E07C  40 80 00 18 */	bge .L_80150FB4
/* 80150FA0 0014E080  2C 06 01 39 */	cmpwi r6, 0x139
/* 80150FA4 0014E084  40 80 00 3C */	bge .L_80150FE0
/* 80150FA8 0014E088  2C 06 01 34 */	cmpwi r6, 0x134
/* 80150FAC 0014E08C  40 80 00 44 */	bge .L_80150FF0
/* 80150FB0 0014E090  48 00 00 30 */	b .L_80150FE0
.L_80150FB4:
/* 80150FB4 0014E094  2C 06 01 D9 */	cmpwi r6, 0x1d9
/* 80150FB8 0014E098  41 82 00 10 */	beq .L_80150FC8
/* 80150FBC 0014E09C  48 00 00 24 */	b .L_80150FE0
.L_80150FC0:
/* 80150FC0 0014E0A0  48 00 1E C5 */	bl start_fight__9zNPCPrawnFv
/* 80150FC4 0014E0A4  48 00 00 2C */	b .L_80150FF0
.L_80150FC8:
/* 80150FC8 0014E0A8  3C 80 4E 47 */	lis r4, 0x4e47
/* 80150FCC 0014E0AC  80 63 02 28 */	lwz r3, 0x228(r3)
/* 80150FD0 0014E0B0  38 84 4D 3C */	addi r4, r4, 0x4d3c
/* 80150FD4 0014E0B4  38 A0 00 01 */	li r5, 0x1
/* 80150FD8 0014E0B8  4B FB C7 59 */	bl GoalSet__7xPsycheFii
/* 80150FDC 0014E0BC  48 00 00 14 */	b .L_80150FF0
.L_80150FE0:
/* 80150FE0 0014E0C0  38 00 00 00 */	li r0, 0x0
/* 80150FE4 0014E0C4  90 09 00 00 */	stw r0, 0x0(r9)
/* 80150FE8 0014E0C8  4B F9 F3 E9 */	bl SysEvent__10zNPCCommonFP5xBaseP5xBaseUiPCfP5xBasePi
/* 80150FEC 0014E0CC  48 00 00 08 */	b .L_80150FF4
.L_80150FF0:
/* 80150FF0 0014E0D0  38 60 00 01 */	li r3, 0x1
.L_80150FF4:
/* 80150FF4 0014E0D4  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80150FF8 0014E0D8  7C 08 03 A6 */	mtlr r0
/* 80150FFC 0014E0DC  38 21 00 10 */	addi r1, r1, 0x10
/* 80151000 0014E0E0  4E 80 00 20 */	blr
.endfn SysEvent__9zNPCPrawnFP5xBaseP5xBaseUiPCfP5xBasePi

# @unnamed@zNPCTypePrawn_cpp@::load_patterns(xModelAssetParam*, unsigned int, const char*, zNPCPrawn::range_type*, int)
.fn "load_patterns__27@unnamed@zNPCTypePrawn_cpp@FP16xModelAssetParamUiPCcPQ29zNPCPrawn10range_typei", local
/* 80151004 0014E0E4  94 21 FF 50 */	stwu r1, -0xb0(r1)
/* 80151008 0014E0E8  7C 08 02 A6 */	mflr r0
/* 8015100C 0014E0EC  3D 00 80 27 */	lis r8, "@stringBase0"@ha
/* 80151010 0014E0F0  90 01 00 B4 */	stw r0, 0xb4(r1)
/* 80151014 0014E0F4  BF 21 00 94 */	stmw r25, 0x94(r1)
/* 80151018 0014E0F8  7C 79 1B 78 */	mr r25, r3
/* 8015101C 0014E0FC  7C 9A 23 78 */	mr r26, r4
/* 80151020 0014E100  7C BB 2B 78 */	mr r27, r5
/* 80151024 0014E104  7C FC 3B 78 */	mr r28, r7
/* 80151028 0014E108  7C DE 33 78 */	mr r30, r6
/* 8015102C 0014E10C  3B E8 E9 F0 */	addi r31, r8, "@stringBase0"@l
/* 80151030 0014E110  3B A0 00 00 */	li r29, 0x0
/* 80151034 0014E114  48 00 00 94 */	b .L_801510C8
.L_80151038:
/* 80151038 0014E118  7F 64 DB 78 */	mr r4, r27
/* 8015103C 0014E11C  7F A5 EB 78 */	mr r5, r29
/* 80151040 0014E120  38 61 00 08 */	addi r3, r1, 0x8
/* 80151044 0014E124  4C C6 31 82 */	crclr 4*cr1+eq
/* 80151048 0014E128  48 09 2E ED */	bl sprintf
/* 8015104C 0014E12C  38 61 00 08 */	addi r3, r1, 0x8
/* 80151050 0014E130  38 9F 00 D2 */	addi r4, r31, 0xd2
/* 80151054 0014E134  48 09 66 3D */	bl strcat
/* 80151058 0014E138  80 DE 00 00 */	lwz r6, 0x0(r30)
/* 8015105C 0014E13C  7F 23 CB 78 */	mr r3, r25
/* 80151060 0014E140  7F 44 D3 78 */	mr r4, r26
/* 80151064 0014E144  38 A1 00 08 */	addi r5, r1, 0x8
/* 80151068 0014E148  4B F0 4F BD */	bl zParamGetInt__FP16xModelAssetParamUiPci
/* 8015106C 0014E14C  90 7E 00 00 */	stw r3, 0x0(r30)
/* 80151070 0014E150  7F 64 DB 78 */	mr r4, r27
/* 80151074 0014E154  7F A5 EB 78 */	mr r5, r29
/* 80151078 0014E158  38 61 00 08 */	addi r3, r1, 0x8
/* 8015107C 0014E15C  4C C6 31 82 */	crclr 4*cr1+eq
/* 80151080 0014E160  48 09 2E B5 */	bl sprintf
/* 80151084 0014E164  38 61 00 08 */	addi r3, r1, 0x8
/* 80151088 0014E168  38 9F 00 D7 */	addi r4, r31, 0xd7
/* 8015108C 0014E16C  48 09 66 05 */	bl strcat
/* 80151090 0014E170  80 DE 00 04 */	lwz r6, 0x4(r30)
/* 80151094 0014E174  7F 23 CB 78 */	mr r3, r25
/* 80151098 0014E178  7F 44 D3 78 */	mr r4, r26
/* 8015109C 0014E17C  38 A1 00 08 */	addi r5, r1, 0x8
/* 801510A0 0014E180  4B F0 4F 85 */	bl zParamGetInt__FP16xModelAssetParamUiPci
/* 801510A4 0014E184  90 7E 00 04 */	stw r3, 0x4(r30)
/* 801510A8 0014E188  80 1E 00 00 */	lwz r0, 0x0(r30)
/* 801510AC 0014E18C  2C 00 00 00 */	cmpwi r0, 0x0
/* 801510B0 0014E190  41 80 00 20 */	blt .L_801510D0
/* 801510B4 0014E194  80 1E 00 04 */	lwz r0, 0x4(r30)
/* 801510B8 0014E198  2C 00 00 00 */	cmpwi r0, 0x0
/* 801510BC 0014E19C  41 80 00 14 */	blt .L_801510D0
/* 801510C0 0014E1A0  3B DE 00 08 */	addi r30, r30, 0x8
/* 801510C4 0014E1A4  3B BD 00 01 */	addi r29, r29, 0x1
.L_801510C8:
/* 801510C8 0014E1A8  7C 1D E0 00 */	cmpw r29, r28
/* 801510CC 0014E1AC  41 80 FF 6C */	blt .L_80151038
.L_801510D0:
/* 801510D0 0014E1B0  7F A3 EB 78 */	mr r3, r29
/* 801510D4 0014E1B4  BB 21 00 94 */	lmw r25, 0x94(r1)
/* 801510D8 0014E1B8  80 01 00 B4 */	lwz r0, 0xb4(r1)
/* 801510DC 0014E1BC  7C 08 03 A6 */	mtlr r0
/* 801510E0 0014E1C0  38 21 00 B0 */	addi r1, r1, 0xb0
/* 801510E4 0014E1C4  4E 80 00 20 */	blr
.endfn "load_patterns__27@unnamed@zNPCTypePrawn_cpp@FP16xModelAssetParamUiPCcPQ29zNPCPrawn10range_typei"

# zNPCPrawn::ParseINI()
.fn ParseINI__9zNPCPrawnFv, global
/* 801510E8 0014E1C8  94 21 FF C0 */	stwu r1, -0x40(r1)
/* 801510EC 0014E1CC  7C 08 02 A6 */	mflr r0
/* 801510F0 0014E1D0  90 01 00 44 */	stw r0, 0x44(r1)
/* 801510F4 0014E1D4  93 E1 00 3C */	stw r31, 0x3c(r1)
/* 801510F8 0014E1D8  7C 7F 1B 78 */	mr r31, r3
/* 801510FC 0014E1DC  93 C1 00 38 */	stw r30, 0x38(r1)
/* 80151100 0014E1E0  4B FA 03 31 */	bl ParseINI__10zNPCCommonFv
/* 80151104 0014E1E4  3C 60 80 33 */	lis r3, "tweak__27@unnamed@zNPCTypePrawn_cpp@"@ha
/* 80151108 0014E1E8  80 9F 02 44 */	lwz r4, 0x244(r31)
/* 8015110C 0014E1EC  80 BF 02 48 */	lwz r5, 0x248(r31)
/* 80151110 0014E1F0  38 63 95 E0 */	addi r3, r3, "tweak__27@unnamed@zNPCTypePrawn_cpp@"@l
/* 80151114 0014E1F4  48 00 0A 59 */	bl "load__Q227@unnamed@zNPCTypePrawn_cpp@11tweak_groupFP16xModelAssetParamUi"
/* 80151118 0014E1F8  3C 80 80 27 */	lis r4, "@stringBase0"@ha
/* 8015111C 0014E1FC  80 7F 02 44 */	lwz r3, 0x244(r31)
/* 80151120 0014E200  38 A4 E9 F0 */	addi r5, r4, "@stringBase0"@l
/* 80151124 0014E204  80 9F 02 48 */	lwz r4, 0x248(r31)
/* 80151128 0014E208  C0 22 A7 A8 */	lfs f1, "@1656"@sda21(r2)
/* 8015112C 0014E20C  38 A5 00 DC */	addi r5, r5, 0xdc
/* 80151130 0014E210  4B F0 4F 39 */	bl zParamGetFloat__FP16xModelAssetParamUiPCcf
/* 80151134 0014E214  3C 80 80 33 */	lis r4, "tweak__27@unnamed@zNPCTypePrawn_cpp@"@ha
/* 80151138 0014E218  3C 60 80 27 */	lis r3, "@stringBase0"@ha
/* 8015113C 0014E21C  D0 24 95 E0 */	stfs f1, "tweak__27@unnamed@zNPCTypePrawn_cpp@"@l(r4)
/* 80151140 0014E220  38 63 E9 F0 */	addi r3, r3, "@stringBase0"@l
/* 80151144 0014E224  38 A3 00 E7 */	addi r5, r3, 0xe7
/* 80151148 0014E228  80 7F 02 44 */	lwz r3, 0x244(r31)
/* 8015114C 0014E22C  80 9F 02 48 */	lwz r4, 0x248(r31)
/* 80151150 0014E230  C0 22 A7 68 */	lfs f1, "@1052"@sda21(r2)
/* 80151154 0014E234  4B F0 4F 15 */	bl zParamGetFloat__FP16xModelAssetParamUiPCcf
/* 80151158 0014E238  3C 80 80 33 */	lis r4, "tweak__27@unnamed@zNPCTypePrawn_cpp@"@ha
/* 8015115C 0014E23C  3C 60 80 27 */	lis r3, "@stringBase0"@ha
/* 80151160 0014E240  38 84 95 E0 */	addi r4, r4, "tweak__27@unnamed@zNPCTypePrawn_cpp@"@l
/* 80151164 0014E244  D0 24 00 04 */	stfs f1, 0x4(r4)
/* 80151168 0014E248  38 63 E9 F0 */	addi r3, r3, "@stringBase0"@l
/* 8015116C 0014E24C  38 A3 00 F3 */	addi r5, r3, 0xf3
/* 80151170 0014E250  80 7F 02 44 */	lwz r3, 0x244(r31)
/* 80151174 0014E254  80 9F 02 48 */	lwz r4, 0x248(r31)
/* 80151178 0014E258  C0 22 A7 AC */	lfs f1, "@1657"@sda21(r2)
/* 8015117C 0014E25C  4B F0 4E ED */	bl zParamGetFloat__FP16xModelAssetParamUiPCcf
/* 80151180 0014E260  3C 80 80 33 */	lis r4, "tweak__27@unnamed@zNPCTypePrawn_cpp@"@ha
/* 80151184 0014E264  3C 60 80 27 */	lis r3, "@stringBase0"@ha
/* 80151188 0014E268  38 84 95 E0 */	addi r4, r4, "tweak__27@unnamed@zNPCTypePrawn_cpp@"@l
/* 8015118C 0014E26C  38 C0 00 00 */	li r6, 0x0
/* 80151190 0014E270  D0 24 00 08 */	stfs f1, 0x8(r4)
/* 80151194 0014E274  38 63 E9 F0 */	addi r3, r3, "@stringBase0"@l
/* 80151198 0014E278  38 A3 01 00 */	addi r5, r3, 0x100
/* 8015119C 0014E27C  80 7F 02 44 */	lwz r3, 0x244(r31)
/* 801511A0 0014E280  80 9F 02 48 */	lwz r4, 0x248(r31)
/* 801511A4 0014E284  4B F0 4E 61 */	bl zParamGetInt__FP16xModelAssetParamUiPCci
/* 801511A8 0014E288  3C A0 80 33 */	lis r5, "tweak__27@unnamed@zNPCTypePrawn_cpp@"@ha
/* 801511AC 0014E28C  3C 80 80 27 */	lis r4, "@stringBase0"@ha
/* 801511B0 0014E290  38 A5 95 E0 */	addi r5, r5, "tweak__27@unnamed@zNPCTypePrawn_cpp@"@l
/* 801511B4 0014E294  38 C0 00 00 */	li r6, 0x0
/* 801511B8 0014E298  90 65 00 0C */	stw r3, 0xc(r5)
/* 801511BC 0014E29C  38 64 E9 F0 */	addi r3, r4, "@stringBase0"@l
/* 801511C0 0014E2A0  38 A3 01 11 */	addi r5, r3, 0x111
/* 801511C4 0014E2A4  80 7F 02 44 */	lwz r3, 0x244(r31)
/* 801511C8 0014E2A8  80 9F 02 48 */	lwz r4, 0x248(r31)
/* 801511CC 0014E2AC  4B F0 4E 39 */	bl zParamGetInt__FP16xModelAssetParamUiPCci
/* 801511D0 0014E2B0  3C A0 80 33 */	lis r5, "tweak__27@unnamed@zNPCTypePrawn_cpp@"@ha
/* 801511D4 0014E2B4  3C 80 80 27 */	lis r4, "@stringBase0"@ha
/* 801511D8 0014E2B8  38 A5 95 E0 */	addi r5, r5, "tweak__27@unnamed@zNPCTypePrawn_cpp@"@l
/* 801511DC 0014E2BC  38 C0 00 00 */	li r6, 0x0
/* 801511E0 0014E2C0  90 65 00 10 */	stw r3, 0x10(r5)
/* 801511E4 0014E2C4  38 64 E9 F0 */	addi r3, r4, "@stringBase0"@l
/* 801511E8 0014E2C8  38 A3 01 22 */	addi r5, r3, 0x122
/* 801511EC 0014E2CC  80 7F 02 44 */	lwz r3, 0x244(r31)
/* 801511F0 0014E2D0  80 9F 02 48 */	lwz r4, 0x248(r31)
/* 801511F4 0014E2D4  4B F0 4E 11 */	bl zParamGetInt__FP16xModelAssetParamUiPCci
/* 801511F8 0014E2D8  3C A0 80 33 */	lis r5, "tweak__27@unnamed@zNPCTypePrawn_cpp@"@ha
/* 801511FC 0014E2DC  3C 80 80 27 */	lis r4, "@stringBase0"@ha
/* 80151200 0014E2E0  38 A5 95 E0 */	addi r5, r5, "tweak__27@unnamed@zNPCTypePrawn_cpp@"@l
/* 80151204 0014E2E4  38 C0 00 01 */	li r6, 0x1
/* 80151208 0014E2E8  90 65 00 14 */	stw r3, 0x14(r5)
/* 8015120C 0014E2EC  38 64 E9 F0 */	addi r3, r4, "@stringBase0"@l
/* 80151210 0014E2F0  38 A3 01 34 */	addi r5, r3, 0x134
/* 80151214 0014E2F4  80 7F 02 44 */	lwz r3, 0x244(r31)
/* 80151218 0014E2F8  80 9F 02 48 */	lwz r4, 0x248(r31)
/* 8015121C 0014E2FC  4B F0 4D E9 */	bl zParamGetInt__FP16xModelAssetParamUiPCci
/* 80151220 0014E300  3C A0 80 33 */	lis r5, "tweak__27@unnamed@zNPCTypePrawn_cpp@"@ha
/* 80151224 0014E304  3C 80 80 27 */	lis r4, "@stringBase0"@ha
/* 80151228 0014E308  38 A5 95 E0 */	addi r5, r5, "tweak__27@unnamed@zNPCTypePrawn_cpp@"@l
/* 8015122C 0014E30C  90 65 00 18 */	stw r3, 0x18(r5)
/* 80151230 0014E310  38 64 E9 F0 */	addi r3, r4, "@stringBase0"@l
/* 80151234 0014E314  38 A3 01 46 */	addi r5, r3, 0x146
/* 80151238 0014E318  80 7F 02 44 */	lwz r3, 0x244(r31)
/* 8015123C 0014E31C  80 9F 02 48 */	lwz r4, 0x248(r31)
/* 80151240 0014E320  C0 22 A7 6C */	lfs f1, "@1053"@sda21(r2)
/* 80151244 0014E324  4B F0 4E 25 */	bl zParamGetFloat__FP16xModelAssetParamUiPCcf
/* 80151248 0014E328  3C 80 80 33 */	lis r4, "tweak__27@unnamed@zNPCTypePrawn_cpp@"@ha
/* 8015124C 0014E32C  3C 60 80 27 */	lis r3, "@stringBase0"@ha
/* 80151250 0014E330  38 84 95 E0 */	addi r4, r4, "tweak__27@unnamed@zNPCTypePrawn_cpp@"@l
/* 80151254 0014E334  D0 24 00 1C */	stfs f1, 0x1c(r4)
/* 80151258 0014E338  38 63 E9 F0 */	addi r3, r3, "@stringBase0"@l
/* 8015125C 0014E33C  38 A3 01 58 */	addi r5, r3, 0x158
/* 80151260 0014E340  80 7F 02 44 */	lwz r3, 0x244(r31)
/* 80151264 0014E344  80 9F 02 48 */	lwz r4, 0x248(r31)
/* 80151268 0014E348  C0 22 A7 68 */	lfs f1, "@1052"@sda21(r2)
/* 8015126C 0014E34C  4B F0 4D FD */	bl zParamGetFloat__FP16xModelAssetParamUiPCcf
/* 80151270 0014E350  3C 80 80 33 */	lis r4, "tweak__27@unnamed@zNPCTypePrawn_cpp@"@ha
/* 80151274 0014E354  3C 60 80 27 */	lis r3, "@stringBase0"@ha
/* 80151278 0014E358  38 84 95 E0 */	addi r4, r4, "tweak__27@unnamed@zNPCTypePrawn_cpp@"@l
/* 8015127C 0014E35C  D0 24 00 20 */	stfs f1, 0x20(r4)
/* 80151280 0014E360  38 63 E9 F0 */	addi r3, r3, "@stringBase0"@l
/* 80151284 0014E364  38 A3 01 6F */	addi r5, r3, 0x16f
/* 80151288 0014E368  80 7F 02 44 */	lwz r3, 0x244(r31)
/* 8015128C 0014E36C  80 9F 02 48 */	lwz r4, 0x248(r31)
/* 80151290 0014E370  C0 22 A7 B0 */	lfs f1, "@1658"@sda21(r2)
/* 80151294 0014E374  4B F0 4D D5 */	bl zParamGetFloat__FP16xModelAssetParamUiPCcf
/* 80151298 0014E378  3C 80 80 33 */	lis r4, "tweak__27@unnamed@zNPCTypePrawn_cpp@"@ha
/* 8015129C 0014E37C  3C 60 80 27 */	lis r3, "@stringBase0"@ha
/* 801512A0 0014E380  38 84 95 E0 */	addi r4, r4, "tweak__27@unnamed@zNPCTypePrawn_cpp@"@l
/* 801512A4 0014E384  D0 24 00 24 */	stfs f1, 0x24(r4)
/* 801512A8 0014E388  38 63 E9 F0 */	addi r3, r3, "@stringBase0"@l
/* 801512AC 0014E38C  38 A3 01 7D */	addi r5, r3, 0x17d
/* 801512B0 0014E390  80 7F 02 44 */	lwz r3, 0x244(r31)
/* 801512B4 0014E394  80 9F 02 48 */	lwz r4, 0x248(r31)
/* 801512B8 0014E398  C0 22 A7 B4 */	lfs f1, "@1659"@sda21(r2)
/* 801512BC 0014E39C  4B F0 4D AD */	bl zParamGetFloat__FP16xModelAssetParamUiPCcf
/* 801512C0 0014E3A0  3C 80 80 33 */	lis r4, "tweak__27@unnamed@zNPCTypePrawn_cpp@"@ha
/* 801512C4 0014E3A4  3C 60 80 27 */	lis r3, "@stringBase0"@ha
/* 801512C8 0014E3A8  38 84 95 E0 */	addi r4, r4, "tweak__27@unnamed@zNPCTypePrawn_cpp@"@l
/* 801512CC 0014E3AC  D0 24 00 28 */	stfs f1, 0x28(r4)
/* 801512D0 0014E3B0  38 63 E9 F0 */	addi r3, r3, "@stringBase0"@l
/* 801512D4 0014E3B4  38 A3 01 8B */	addi r5, r3, 0x18b
/* 801512D8 0014E3B8  80 7F 02 44 */	lwz r3, 0x244(r31)
/* 801512DC 0014E3BC  80 9F 02 48 */	lwz r4, 0x248(r31)
/* 801512E0 0014E3C0  C0 22 A7 B8 */	lfs f1, "@1660"@sda21(r2)
/* 801512E4 0014E3C4  4B F0 4D 85 */	bl zParamGetFloat__FP16xModelAssetParamUiPCcf
/* 801512E8 0014E3C8  3C 80 80 33 */	lis r4, "tweak__27@unnamed@zNPCTypePrawn_cpp@"@ha
/* 801512EC 0014E3CC  3C 60 80 27 */	lis r3, "@stringBase0"@ha
/* 801512F0 0014E3D0  38 84 95 E0 */	addi r4, r4, "tweak__27@unnamed@zNPCTypePrawn_cpp@"@l
/* 801512F4 0014E3D4  38 C0 00 03 */	li r6, 0x3
/* 801512F8 0014E3D8  D0 24 00 2C */	stfs f1, 0x2c(r4)
/* 801512FC 0014E3DC  38 63 E9 F0 */	addi r3, r3, "@stringBase0"@l
/* 80151300 0014E3E0  38 A3 01 99 */	addi r5, r3, 0x199
/* 80151304 0014E3E4  80 7F 02 44 */	lwz r3, 0x244(r31)
/* 80151308 0014E3E8  80 9F 02 48 */	lwz r4, 0x248(r31)
/* 8015130C 0014E3EC  4B F0 4C F9 */	bl zParamGetInt__FP16xModelAssetParamUiPCci
/* 80151310 0014E3F0  3C A0 80 33 */	lis r5, "tweak__27@unnamed@zNPCTypePrawn_cpp@"@ha
/* 80151314 0014E3F4  3C 80 80 27 */	lis r4, "@stringBase0"@ha
/* 80151318 0014E3F8  38 A5 95 E0 */	addi r5, r5, "tweak__27@unnamed@zNPCTypePrawn_cpp@"@l
/* 8015131C 0014E3FC  38 C0 00 13 */	li r6, 0x13
/* 80151320 0014E400  90 65 00 30 */	stw r3, 0x30(r5)
/* 80151324 0014E404  38 64 E9 F0 */	addi r3, r4, "@stringBase0"@l
/* 80151328 0014E408  38 A3 01 AA */	addi r5, r3, 0x1aa
/* 8015132C 0014E40C  80 7F 02 44 */	lwz r3, 0x244(r31)
/* 80151330 0014E410  80 9F 02 48 */	lwz r4, 0x248(r31)
/* 80151334 0014E414  4B F0 4C D1 */	bl zParamGetInt__FP16xModelAssetParamUiPCci
/* 80151338 0014E418  3C A0 80 33 */	lis r5, "tweak__27@unnamed@zNPCTypePrawn_cpp@"@ha
/* 8015133C 0014E41C  3C 80 80 27 */	lis r4, "@stringBase0"@ha
/* 80151340 0014E420  38 A5 95 E0 */	addi r5, r5, "tweak__27@unnamed@zNPCTypePrawn_cpp@"@l
/* 80151344 0014E424  90 65 00 34 */	stw r3, 0x34(r5)
/* 80151348 0014E428  38 64 E9 F0 */	addi r3, r4, "@stringBase0"@l
/* 8015134C 0014E42C  38 A3 01 BB */	addi r5, r3, 0x1bb
/* 80151350 0014E430  80 7F 02 44 */	lwz r3, 0x244(r31)
/* 80151354 0014E434  80 9F 02 48 */	lwz r4, 0x248(r31)
/* 80151358 0014E438  C0 22 A7 BC */	lfs f1, "@1661"@sda21(r2)
/* 8015135C 0014E43C  4B F0 4D 0D */	bl zParamGetFloat__FP16xModelAssetParamUiPCcf
/* 80151360 0014E440  3C 80 80 33 */	lis r4, "tweak__27@unnamed@zNPCTypePrawn_cpp@"@ha
/* 80151364 0014E444  3C 60 80 27 */	lis r3, "@stringBase0"@ha
/* 80151368 0014E448  38 84 95 E0 */	addi r4, r4, "tweak__27@unnamed@zNPCTypePrawn_cpp@"@l
/* 8015136C 0014E44C  D0 24 00 38 */	stfs f1, 0x38(r4)
/* 80151370 0014E450  38 63 E9 F0 */	addi r3, r3, "@stringBase0"@l
/* 80151374 0014E454  38 A3 01 CC */	addi r5, r3, 0x1cc
/* 80151378 0014E458  80 7F 02 44 */	lwz r3, 0x244(r31)
/* 8015137C 0014E45C  80 9F 02 48 */	lwz r4, 0x248(r31)
/* 80151380 0014E460  C0 22 A7 BC */	lfs f1, "@1661"@sda21(r2)
/* 80151384 0014E464  4B F0 4C E5 */	bl zParamGetFloat__FP16xModelAssetParamUiPCcf
/* 80151388 0014E468  3C 80 80 33 */	lis r4, "tweak__27@unnamed@zNPCTypePrawn_cpp@"@ha
/* 8015138C 0014E46C  3C 60 80 27 */	lis r3, "@stringBase0"@ha
/* 80151390 0014E470  38 84 95 E0 */	addi r4, r4, "tweak__27@unnamed@zNPCTypePrawn_cpp@"@l
/* 80151394 0014E474  D0 24 00 3C */	stfs f1, 0x3c(r4)
/* 80151398 0014E478  38 63 E9 F0 */	addi r3, r3, "@stringBase0"@l
/* 8015139C 0014E47C  38 A3 01 E2 */	addi r5, r3, 0x1e2
/* 801513A0 0014E480  80 7F 02 44 */	lwz r3, 0x244(r31)
/* 801513A4 0014E484  80 9F 02 48 */	lwz r4, 0x248(r31)
/* 801513A8 0014E488  C0 22 A7 C0 */	lfs f1, "@1662"@sda21(r2)
/* 801513AC 0014E48C  4B F0 4C BD */	bl zParamGetFloat__FP16xModelAssetParamUiPCcf
/* 801513B0 0014E490  3C 80 80 33 */	lis r4, "tweak__27@unnamed@zNPCTypePrawn_cpp@"@ha
/* 801513B4 0014E494  3C 60 80 27 */	lis r3, "@stringBase0"@ha
/* 801513B8 0014E498  38 84 95 E0 */	addi r4, r4, "tweak__27@unnamed@zNPCTypePrawn_cpp@"@l
/* 801513BC 0014E49C  D0 24 00 40 */	stfs f1, 0x40(r4)
/* 801513C0 0014E4A0  38 63 E9 F0 */	addi r3, r3, "@stringBase0"@l
/* 801513C4 0014E4A4  38 A3 01 F3 */	addi r5, r3, 0x1f3
/* 801513C8 0014E4A8  80 7F 02 44 */	lwz r3, 0x244(r31)
/* 801513CC 0014E4AC  80 9F 02 48 */	lwz r4, 0x248(r31)
/* 801513D0 0014E4B0  C0 22 A7 68 */	lfs f1, "@1052"@sda21(r2)
/* 801513D4 0014E4B4  4B F0 4C 95 */	bl zParamGetFloat__FP16xModelAssetParamUiPCcf
/* 801513D8 0014E4B8  3C 80 80 33 */	lis r4, "tweak__27@unnamed@zNPCTypePrawn_cpp@"@ha
/* 801513DC 0014E4BC  3C 60 80 27 */	lis r3, "@stringBase0"@ha
/* 801513E0 0014E4C0  38 84 95 E0 */	addi r4, r4, "tweak__27@unnamed@zNPCTypePrawn_cpp@"@l
/* 801513E4 0014E4C4  38 C0 00 02 */	li r6, 0x2
/* 801513E8 0014E4C8  D0 24 00 44 */	stfs f1, 0x44(r4)
/* 801513EC 0014E4CC  38 63 E9 F0 */	addi r3, r3, "@stringBase0"@l
/* 801513F0 0014E4D0  38 A3 02 03 */	addi r5, r3, 0x203
/* 801513F4 0014E4D4  80 7F 02 44 */	lwz r3, 0x244(r31)
/* 801513F8 0014E4D8  80 9F 02 48 */	lwz r4, 0x248(r31)
/* 801513FC 0014E4DC  4B F0 4C 09 */	bl zParamGetInt__FP16xModelAssetParamUiPCci
/* 80151400 0014E4E0  3C A0 80 33 */	lis r5, "tweak__27@unnamed@zNPCTypePrawn_cpp@"@ha
/* 80151404 0014E4E4  3C 80 80 27 */	lis r4, "@stringBase0"@ha
/* 80151408 0014E4E8  38 A5 95 E0 */	addi r5, r5, "tweak__27@unnamed@zNPCTypePrawn_cpp@"@l
/* 8015140C 0014E4EC  38 C0 00 03 */	li r6, 0x3
/* 80151410 0014E4F0  90 65 00 48 */	stw r3, 0x48(r5)
/* 80151414 0014E4F4  38 64 E9 F0 */	addi r3, r4, "@stringBase0"@l
/* 80151418 0014E4F8  38 A3 02 18 */	addi r5, r3, 0x218
/* 8015141C 0014E4FC  80 7F 02 44 */	lwz r3, 0x244(r31)
/* 80151420 0014E500  80 9F 02 48 */	lwz r4, 0x248(r31)
/* 80151424 0014E504  4B F0 4B E1 */	bl zParamGetInt__FP16xModelAssetParamUiPCci
/* 80151428 0014E508  3C A0 80 33 */	lis r5, "tweak__27@unnamed@zNPCTypePrawn_cpp@"@ha
/* 8015142C 0014E50C  3C 80 80 27 */	lis r4, "@stringBase0"@ha
/* 80151430 0014E510  38 A5 95 E0 */	addi r5, r5, "tweak__27@unnamed@zNPCTypePrawn_cpp@"@l
/* 80151434 0014E514  38 C0 00 04 */	li r6, 0x4
/* 80151438 0014E518  90 65 00 4C */	stw r3, 0x4c(r5)
/* 8015143C 0014E51C  38 64 E9 F0 */	addi r3, r4, "@stringBase0"@l
/* 80151440 0014E520  38 A3 02 2D */	addi r5, r3, 0x22d
/* 80151444 0014E524  80 7F 02 44 */	lwz r3, 0x244(r31)
/* 80151448 0014E528  80 9F 02 48 */	lwz r4, 0x248(r31)
/* 8015144C 0014E52C  4B F0 4B B9 */	bl zParamGetInt__FP16xModelAssetParamUiPCci
/* 80151450 0014E530  3C A0 80 33 */	lis r5, "tweak__27@unnamed@zNPCTypePrawn_cpp@"@ha
/* 80151454 0014E534  3C 80 80 27 */	lis r4, "@stringBase0"@ha
/* 80151458 0014E538  38 A5 95 E0 */	addi r5, r5, "tweak__27@unnamed@zNPCTypePrawn_cpp@"@l
/* 8015145C 0014E53C  90 65 00 50 */	stw r3, 0x50(r5)
/* 80151460 0014E540  38 64 E9 F0 */	addi r3, r4, "@stringBase0"@l
/* 80151464 0014E544  38 A3 02 42 */	addi r5, r3, 0x242
/* 80151468 0014E548  80 7F 02 44 */	lwz r3, 0x244(r31)
/* 8015146C 0014E54C  80 9F 02 48 */	lwz r4, 0x248(r31)
/* 80151470 0014E550  C0 22 A7 C8 */	lfs f1, "@1664"@sda21(r2)
/* 80151474 0014E554  4B F0 4B F5 */	bl zParamGetFloat__FP16xModelAssetParamUiPCcf
/* 80151478 0014E558  C0 02 A7 C4 */	lfs f0, "@1663"@sda21(r2)
/* 8015147C 0014E55C  3C 80 80 33 */	lis r4, "tweak__27@unnamed@zNPCTypePrawn_cpp@"@ha
/* 80151480 0014E560  3C 60 80 27 */	lis r3, "@stringBase0"@ha
/* 80151484 0014E564  EC 00 00 72 */	fmuls f0, f0, f1
/* 80151488 0014E568  38 84 95 E0 */	addi r4, r4, "tweak__27@unnamed@zNPCTypePrawn_cpp@"@l
/* 8015148C 0014E56C  38 63 E9 F0 */	addi r3, r3, "@stringBase0"@l
/* 80151490 0014E570  38 A3 02 51 */	addi r5, r3, 0x251
/* 80151494 0014E574  D0 04 00 54 */	stfs f0, 0x54(r4)
/* 80151498 0014E578  80 7F 02 44 */	lwz r3, 0x244(r31)
/* 8015149C 0014E57C  80 9F 02 48 */	lwz r4, 0x248(r31)
/* 801514A0 0014E580  C0 22 A7 74 */	lfs f1, "@1282"@sda21(r2)
/* 801514A4 0014E584  4B F0 4B C5 */	bl zParamGetFloat__FP16xModelAssetParamUiPCcf
/* 801514A8 0014E588  3C 80 80 33 */	lis r4, "tweak__27@unnamed@zNPCTypePrawn_cpp@"@ha
/* 801514AC 0014E58C  3C 60 80 27 */	lis r3, "@stringBase0"@ha
/* 801514B0 0014E590  38 84 95 E0 */	addi r4, r4, "tweak__27@unnamed@zNPCTypePrawn_cpp@"@l
/* 801514B4 0014E594  D0 24 00 58 */	stfs f1, 0x58(r4)
/* 801514B8 0014E598  38 63 E9 F0 */	addi r3, r3, "@stringBase0"@l
/* 801514BC 0014E59C  38 A3 02 62 */	addi r5, r3, 0x262
/* 801514C0 0014E5A0  80 7F 02 44 */	lwz r3, 0x244(r31)
/* 801514C4 0014E5A4  80 9F 02 48 */	lwz r4, 0x248(r31)
/* 801514C8 0014E5A8  C0 22 A7 CC */	lfs f1, "@1665"@sda21(r2)
/* 801514CC 0014E5AC  4B F0 4B 9D */	bl zParamGetFloat__FP16xModelAssetParamUiPCcf
/* 801514D0 0014E5B0  C0 02 A7 C4 */	lfs f0, "@1663"@sda21(r2)
/* 801514D4 0014E5B4  3C 80 80 33 */	lis r4, "tweak__27@unnamed@zNPCTypePrawn_cpp@"@ha
/* 801514D8 0014E5B8  3C 60 80 27 */	lis r3, "@stringBase0"@ha
/* 801514DC 0014E5BC  EC 00 00 72 */	fmuls f0, f0, f1
/* 801514E0 0014E5C0  38 84 95 E0 */	addi r4, r4, "tweak__27@unnamed@zNPCTypePrawn_cpp@"@l
/* 801514E4 0014E5C4  38 63 E9 F0 */	addi r3, r3, "@stringBase0"@l
/* 801514E8 0014E5C8  38 A3 02 73 */	addi r5, r3, 0x273
/* 801514EC 0014E5CC  D0 04 00 5C */	stfs f0, 0x5c(r4)
/* 801514F0 0014E5D0  80 7F 02 44 */	lwz r3, 0x244(r31)
/* 801514F4 0014E5D4  80 9F 02 48 */	lwz r4, 0x248(r31)
/* 801514F8 0014E5D8  C0 22 A7 D0 */	lfs f1, "@1666"@sda21(r2)
/* 801514FC 0014E5DC  4B F0 4B 6D */	bl zParamGetFloat__FP16xModelAssetParamUiPCcf
/* 80151500 0014E5E0  C0 02 A7 C4 */	lfs f0, "@1663"@sda21(r2)
/* 80151504 0014E5E4  3C 80 80 33 */	lis r4, "tweak__27@unnamed@zNPCTypePrawn_cpp@"@ha
/* 80151508 0014E5E8  3C 60 80 27 */	lis r3, "@stringBase0"@ha
/* 8015150C 0014E5EC  EC 00 00 72 */	fmuls f0, f0, f1
/* 80151510 0014E5F0  38 84 95 E0 */	addi r4, r4, "tweak__27@unnamed@zNPCTypePrawn_cpp@"@l
/* 80151514 0014E5F4  38 63 E9 F0 */	addi r3, r3, "@stringBase0"@l
/* 80151518 0014E5F8  38 A3 02 86 */	addi r5, r3, 0x286
/* 8015151C 0014E5FC  D0 04 00 60 */	stfs f0, 0x60(r4)
/* 80151520 0014E600  C0 02 A7 D4 */	lfs f0, "@1667"@sda21(r2)
/* 80151524 0014E604  D0 04 00 64 */	stfs f0, 0x64(r4)
/* 80151528 0014E608  80 7F 02 44 */	lwz r3, 0x244(r31)
/* 8015152C 0014E60C  80 9F 02 48 */	lwz r4, 0x248(r31)
/* 80151530 0014E610  C0 22 A7 D8 */	lfs f1, "@1668"@sda21(r2)
/* 80151534 0014E614  4B F0 4B 35 */	bl zParamGetFloat__FP16xModelAssetParamUiPCcf
/* 80151538 0014E618  3C 80 80 33 */	lis r4, "tweak__27@unnamed@zNPCTypePrawn_cpp@"@ha
/* 8015153C 0014E61C  3C 60 80 27 */	lis r3, "@stringBase0"@ha
/* 80151540 0014E620  38 84 95 E0 */	addi r4, r4, "tweak__27@unnamed@zNPCTypePrawn_cpp@"@l
/* 80151544 0014E624  D0 24 00 6C */	stfs f1, 0x6c(r4)
/* 80151548 0014E628  38 63 E9 F0 */	addi r3, r3, "@stringBase0"@l
/* 8015154C 0014E62C  38 A3 02 9A */	addi r5, r3, 0x29a
/* 80151550 0014E630  80 7F 02 44 */	lwz r3, 0x244(r31)
/* 80151554 0014E634  80 9F 02 48 */	lwz r4, 0x248(r31)
/* 80151558 0014E638  C0 22 A7 68 */	lfs f1, "@1052"@sda21(r2)
/* 8015155C 0014E63C  4B F0 4B 0D */	bl zParamGetFloat__FP16xModelAssetParamUiPCcf
/* 80151560 0014E640  3C 80 80 33 */	lis r4, "tweak__27@unnamed@zNPCTypePrawn_cpp@"@ha
/* 80151564 0014E644  3C 60 80 27 */	lis r3, "@stringBase0"@ha
/* 80151568 0014E648  38 84 95 E0 */	addi r4, r4, "tweak__27@unnamed@zNPCTypePrawn_cpp@"@l
/* 8015156C 0014E64C  D0 24 00 70 */	stfs f1, 0x70(r4)
/* 80151570 0014E650  38 63 E9 F0 */	addi r3, r3, "@stringBase0"@l
/* 80151574 0014E654  38 A3 02 AF */	addi r5, r3, 0x2af
/* 80151578 0014E658  80 7F 02 44 */	lwz r3, 0x244(r31)
/* 8015157C 0014E65C  80 9F 02 48 */	lwz r4, 0x248(r31)
/* 80151580 0014E660  C0 22 A7 DC */	lfs f1, "@1669"@sda21(r2)
/* 80151584 0014E664  4B F0 4A E5 */	bl zParamGetFloat__FP16xModelAssetParamUiPCcf
/* 80151588 0014E668  3C 80 80 33 */	lis r4, "tweak__27@unnamed@zNPCTypePrawn_cpp@"@ha
/* 8015158C 0014E66C  3C 60 80 27 */	lis r3, "@stringBase0"@ha
/* 80151590 0014E670  38 84 95 E0 */	addi r4, r4, "tweak__27@unnamed@zNPCTypePrawn_cpp@"@l
/* 80151594 0014E674  D0 24 00 74 */	stfs f1, 0x74(r4)
/* 80151598 0014E678  38 63 E9 F0 */	addi r3, r3, "@stringBase0"@l
/* 8015159C 0014E67C  38 A3 02 C2 */	addi r5, r3, 0x2c2
/* 801515A0 0014E680  80 7F 02 44 */	lwz r3, 0x244(r31)
/* 801515A4 0014E684  80 9F 02 48 */	lwz r4, 0x248(r31)
/* 801515A8 0014E688  C0 22 A7 E0 */	lfs f1, "@1670"@sda21(r2)
/* 801515AC 0014E68C  4B F0 4A BD */	bl zParamGetFloat__FP16xModelAssetParamUiPCcf
/* 801515B0 0014E690  3C 80 80 33 */	lis r4, "tweak__27@unnamed@zNPCTypePrawn_cpp@"@ha
/* 801515B4 0014E694  3C 60 80 27 */	lis r3, "@stringBase0"@ha
/* 801515B8 0014E698  38 84 95 E0 */	addi r4, r4, "tweak__27@unnamed@zNPCTypePrawn_cpp@"@l
/* 801515BC 0014E69C  D0 24 00 78 */	stfs f1, 0x78(r4)
/* 801515C0 0014E6A0  38 63 E9 F0 */	addi r3, r3, "@stringBase0"@l
/* 801515C4 0014E6A4  38 A3 02 D7 */	addi r5, r3, 0x2d7
/* 801515C8 0014E6A8  80 7F 02 44 */	lwz r3, 0x244(r31)
/* 801515CC 0014E6AC  80 9F 02 48 */	lwz r4, 0x248(r31)
/* 801515D0 0014E6B0  C0 22 A7 8C */	lfs f1, "@1455"@sda21(r2)
/* 801515D4 0014E6B4  4B F0 4A 95 */	bl zParamGetFloat__FP16xModelAssetParamUiPCcf
/* 801515D8 0014E6B8  3C 80 80 33 */	lis r4, "tweak__27@unnamed@zNPCTypePrawn_cpp@"@ha
/* 801515DC 0014E6BC  3C 60 80 27 */	lis r3, "@stringBase0"@ha
/* 801515E0 0014E6C0  38 84 95 E0 */	addi r4, r4, "tweak__27@unnamed@zNPCTypePrawn_cpp@"@l
/* 801515E4 0014E6C4  D0 24 00 7C */	stfs f1, 0x7c(r4)
/* 801515E8 0014E6C8  38 63 E9 F0 */	addi r3, r3, "@stringBase0"@l
/* 801515EC 0014E6CC  38 A3 02 F1 */	addi r5, r3, 0x2f1
/* 801515F0 0014E6D0  80 7F 02 44 */	lwz r3, 0x244(r31)
/* 801515F4 0014E6D4  80 9F 02 48 */	lwz r4, 0x248(r31)
/* 801515F8 0014E6D8  C0 22 A7 E4 */	lfs f1, "@1671"@sda21(r2)
/* 801515FC 0014E6DC  4B F0 4A 6D */	bl zParamGetFloat__FP16xModelAssetParamUiPCcf
/* 80151600 0014E6E0  3C 80 80 33 */	lis r4, "tweak__27@unnamed@zNPCTypePrawn_cpp@"@ha
/* 80151604 0014E6E4  3C 60 80 27 */	lis r3, "@stringBase0"@ha
/* 80151608 0014E6E8  38 84 95 E0 */	addi r4, r4, "tweak__27@unnamed@zNPCTypePrawn_cpp@"@l
/* 8015160C 0014E6EC  D0 24 00 80 */	stfs f1, 0x80(r4)
/* 80151610 0014E6F0  38 63 E9 F0 */	addi r3, r3, "@stringBase0"@l
/* 80151614 0014E6F4  38 A3 03 05 */	addi r5, r3, 0x305
/* 80151618 0014E6F8  80 7F 02 44 */	lwz r3, 0x244(r31)
/* 8015161C 0014E6FC  80 9F 02 48 */	lwz r4, 0x248(r31)
/* 80151620 0014E700  C0 22 A7 C0 */	lfs f1, "@1662"@sda21(r2)
/* 80151624 0014E704  4B F0 4A 45 */	bl zParamGetFloat__FP16xModelAssetParamUiPCcf
/* 80151628 0014E708  3C 80 80 33 */	lis r4, "tweak__27@unnamed@zNPCTypePrawn_cpp@"@ha
/* 8015162C 0014E70C  3C 60 80 27 */	lis r3, "@stringBase0"@ha
/* 80151630 0014E710  38 84 95 E0 */	addi r4, r4, "tweak__27@unnamed@zNPCTypePrawn_cpp@"@l
/* 80151634 0014E714  D0 24 00 84 */	stfs f1, 0x84(r4)
/* 80151638 0014E718  38 63 E9 F0 */	addi r3, r3, "@stringBase0"@l
/* 8015163C 0014E71C  38 A3 03 1E */	addi r5, r3, 0x31e
/* 80151640 0014E720  80 7F 02 44 */	lwz r3, 0x244(r31)
/* 80151644 0014E724  80 9F 02 48 */	lwz r4, 0x248(r31)
/* 80151648 0014E728  C0 22 A7 C8 */	lfs f1, "@1664"@sda21(r2)
/* 8015164C 0014E72C  4B F0 4A 1D */	bl zParamGetFloat__FP16xModelAssetParamUiPCcf
/* 80151650 0014E730  3C 80 80 33 */	lis r4, "tweak__27@unnamed@zNPCTypePrawn_cpp@"@ha
/* 80151654 0014E734  3C 60 80 27 */	lis r3, "@stringBase0"@ha
/* 80151658 0014E738  38 84 95 E0 */	addi r4, r4, "tweak__27@unnamed@zNPCTypePrawn_cpp@"@l
/* 8015165C 0014E73C  D0 24 00 88 */	stfs f1, 0x88(r4)
/* 80151660 0014E740  38 63 E9 F0 */	addi r3, r3, "@stringBase0"@l
/* 80151664 0014E744  38 A3 03 37 */	addi r5, r3, 0x337
/* 80151668 0014E748  80 7F 02 44 */	lwz r3, 0x244(r31)
/* 8015166C 0014E74C  80 9F 02 48 */	lwz r4, 0x248(r31)
/* 80151670 0014E750  C0 22 A7 6C */	lfs f1, "@1053"@sda21(r2)
/* 80151674 0014E754  4B F0 49 F5 */	bl zParamGetFloat__FP16xModelAssetParamUiPCcf
/* 80151678 0014E758  3C 80 80 33 */	lis r4, "tweak__27@unnamed@zNPCTypePrawn_cpp@"@ha
/* 8015167C 0014E75C  3C 60 80 27 */	lis r3, "@stringBase0"@ha
/* 80151680 0014E760  38 84 95 E0 */	addi r4, r4, "tweak__27@unnamed@zNPCTypePrawn_cpp@"@l
/* 80151684 0014E764  D0 24 00 8C */	stfs f1, 0x8c(r4)
/* 80151688 0014E768  38 63 E9 F0 */	addi r3, r3, "@stringBase0"@l
/* 8015168C 0014E76C  38 A3 03 4D */	addi r5, r3, 0x34d
/* 80151690 0014E770  80 7F 02 44 */	lwz r3, 0x244(r31)
/* 80151694 0014E774  80 9F 02 48 */	lwz r4, 0x248(r31)
/* 80151698 0014E778  C0 22 A7 94 */	lfs f1, "@1493"@sda21(r2)
/* 8015169C 0014E77C  4B F0 49 CD */	bl zParamGetFloat__FP16xModelAssetParamUiPCcf
/* 801516A0 0014E780  3C 80 80 33 */	lis r4, "tweak__27@unnamed@zNPCTypePrawn_cpp@"@ha
/* 801516A4 0014E784  38 61 00 20 */	addi r3, r1, 0x20
/* 801516A8 0014E788  38 84 95 E0 */	addi r4, r4, "tweak__27@unnamed@zNPCTypePrawn_cpp@"@l
/* 801516AC 0014E78C  D0 24 00 90 */	stfs f1, 0x90(r4)
/* 801516B0 0014E790  C0 22 A7 6C */	lfs f1, "@1053"@sda21(r2)
/* 801516B4 0014E794  FC 40 08 90 */	fmr f2, f1
/* 801516B8 0014E798  FC 60 08 90 */	fmr f3, f1
/* 801516BC 0014E79C  4B F0 E8 CD */	bl create__5xVec3Ffff
/* 801516C0 0014E7A0  80 A1 00 20 */	lwz r5, 0x20(r1)
/* 801516C4 0014E7A4  3C 80 80 27 */	lis r4, "@stringBase0"@ha
/* 801516C8 0014E7A8  80 E1 00 24 */	lwz r7, 0x24(r1)
/* 801516CC 0014E7AC  3C 60 80 33 */	lis r3, "tweak__27@unnamed@zNPCTypePrawn_cpp@"@ha
/* 801516D0 0014E7B0  80 01 00 28 */	lwz r0, 0x28(r1)
/* 801516D4 0014E7B4  38 84 E9 F0 */	addi r4, r4, "@stringBase0"@l
/* 801516D8 0014E7B8  90 A1 00 2C */	stw r5, 0x2c(r1)
/* 801516DC 0014E7BC  38 63 95 E0 */	addi r3, r3, "tweak__27@unnamed@zNPCTypePrawn_cpp@"@l
/* 801516E0 0014E7C0  38 A4 03 67 */	addi r5, r4, 0x367
/* 801516E4 0014E7C4  38 C1 00 2C */	addi r6, r1, 0x2c
/* 801516E8 0014E7C8  90 E1 00 30 */	stw r7, 0x30(r1)
/* 801516EC 0014E7CC  38 E3 00 94 */	addi r7, r3, 0x94
/* 801516F0 0014E7D0  90 01 00 34 */	stw r0, 0x34(r1)
/* 801516F4 0014E7D4  80 7F 02 44 */	lwz r3, 0x244(r31)
/* 801516F8 0014E7D8  80 9F 02 48 */	lwz r4, 0x248(r31)
/* 801516FC 0014E7DC  4B F0 4B 11 */	bl zParamGetVector__FP16xModelAssetParamUiPCc5xVec3P5xVec3
/* 80151700 0014E7E0  3C 80 80 27 */	lis r4, "@stringBase0"@ha
/* 80151704 0014E7E4  80 7F 02 44 */	lwz r3, 0x244(r31)
/* 80151708 0014E7E8  38 A4 E9 F0 */	addi r5, r4, "@stringBase0"@l
/* 8015170C 0014E7EC  80 9F 02 48 */	lwz r4, 0x248(r31)
/* 80151710 0014E7F0  38 A5 03 81 */	addi r5, r5, 0x381
/* 80151714 0014E7F4  38 C0 00 2B */	li r6, 0x2b
/* 80151718 0014E7F8  4B F0 48 ED */	bl zParamGetInt__FP16xModelAssetParamUiPCci
/* 8015171C 0014E7FC  3C 80 80 33 */	lis r4, "tweak__27@unnamed@zNPCTypePrawn_cpp@"@ha
/* 80151720 0014E800  38 84 95 E0 */	addi r4, r4, "tweak__27@unnamed@zNPCTypePrawn_cpp@"@l
/* 80151724 0014E804  90 64 00 A0 */	stw r3, 0xa0(r4)
/* 80151728 0014E808  38 61 00 08 */	addi r3, r1, 0x8
/* 8015172C 0014E80C  C0 22 A7 6C */	lfs f1, "@1053"@sda21(r2)
/* 80151730 0014E810  C0 42 A7 E4 */	lfs f2, "@1671"@sda21(r2)
/* 80151734 0014E814  FC 60 08 90 */	fmr f3, f1
/* 80151738 0014E818  4B F0 E8 51 */	bl create__5xVec3Ffff
/* 8015173C 0014E81C  80 A1 00 08 */	lwz r5, 0x8(r1)
/* 80151740 0014E820  3C 80 80 27 */	lis r4, "@stringBase0"@ha
/* 80151744 0014E824  80 E1 00 0C */	lwz r7, 0xc(r1)
/* 80151748 0014E828  3C 60 80 33 */	lis r3, "tweak__27@unnamed@zNPCTypePrawn_cpp@"@ha
/* 8015174C 0014E82C  80 01 00 10 */	lwz r0, 0x10(r1)
/* 80151750 0014E830  38 84 E9 F0 */	addi r4, r4, "@stringBase0"@l
/* 80151754 0014E834  90 A1 00 14 */	stw r5, 0x14(r1)
/* 80151758 0014E838  38 63 95 E0 */	addi r3, r3, "tweak__27@unnamed@zNPCTypePrawn_cpp@"@l
/* 8015175C 0014E83C  38 A4 03 95 */	addi r5, r4, 0x395
/* 80151760 0014E840  38 C1 00 14 */	addi r6, r1, 0x14
/* 80151764 0014E844  90 E1 00 18 */	stw r7, 0x18(r1)
/* 80151768 0014E848  38 E3 00 A4 */	addi r7, r3, 0xa4
/* 8015176C 0014E84C  90 01 00 1C */	stw r0, 0x1c(r1)
/* 80151770 0014E850  80 7F 02 44 */	lwz r3, 0x244(r31)
/* 80151774 0014E854  80 9F 02 48 */	lwz r4, 0x248(r31)
/* 80151778 0014E858  4B F0 4A 95 */	bl zParamGetVector__FP16xModelAssetParamUiPCc5xVec3P5xVec3
/* 8015177C 0014E85C  3C 80 80 27 */	lis r4, "@stringBase0"@ha
/* 80151780 0014E860  80 7F 02 44 */	lwz r3, 0x244(r31)
/* 80151784 0014E864  38 A4 E9 F0 */	addi r5, r4, "@stringBase0"@l
/* 80151788 0014E868  80 9F 02 48 */	lwz r4, 0x248(r31)
/* 8015178C 0014E86C  C0 22 A7 6C */	lfs f1, "@1053"@sda21(r2)
/* 80151790 0014E870  38 A5 03 A6 */	addi r5, r5, 0x3a6
/* 80151794 0014E874  4B F0 48 D5 */	bl zParamGetFloat__FP16xModelAssetParamUiPCcf
/* 80151798 0014E878  C0 02 A7 C4 */	lfs f0, "@1663"@sda21(r2)
/* 8015179C 0014E87C  3C 80 80 33 */	lis r4, "tweak__27@unnamed@zNPCTypePrawn_cpp@"@ha
/* 801517A0 0014E880  3C 60 80 27 */	lis r3, "@stringBase0"@ha
/* 801517A4 0014E884  EC 00 00 72 */	fmuls f0, f0, f1
/* 801517A8 0014E888  38 84 95 E0 */	addi r4, r4, "tweak__27@unnamed@zNPCTypePrawn_cpp@"@l
/* 801517AC 0014E88C  38 63 E9 F0 */	addi r3, r3, "@stringBase0"@l
/* 801517B0 0014E890  38 A3 03 B4 */	addi r5, r3, 0x3b4
/* 801517B4 0014E894  D0 04 00 B0 */	stfs f0, 0xb0(r4)
/* 801517B8 0014E898  80 7F 02 44 */	lwz r3, 0x244(r31)
/* 801517BC 0014E89C  80 9F 02 48 */	lwz r4, 0x248(r31)
/* 801517C0 0014E8A0  C0 22 A7 E8 */	lfs f1, "@1672"@sda21(r2)
/* 801517C4 0014E8A4  4B F0 48 A5 */	bl zParamGetFloat__FP16xModelAssetParamUiPCcf
/* 801517C8 0014E8A8  C0 02 A7 C4 */	lfs f0, "@1663"@sda21(r2)
/* 801517CC 0014E8AC  3C 60 80 33 */	lis r3, "tweak__27@unnamed@zNPCTypePrawn_cpp@"@ha
/* 801517D0 0014E8B0  3B C3 95 E0 */	addi r30, r3, "tweak__27@unnamed@zNPCTypePrawn_cpp@"@l
/* 801517D4 0014E8B4  EC 20 00 72 */	fmuls f1, f0, f1
/* 801517D8 0014E8B8  D0 3E 00 B4 */	stfs f1, 0xb4(r30)
/* 801517DC 0014E8BC  4B F7 36 71 */	bl isin__Ff
/* 801517E0 0014E8C0  D0 3F 03 14 */	stfs f1, 0x314(r31)
/* 801517E4 0014E8C4  C0 3E 00 B4 */	lfs f1, 0xb4(r30)
/* 801517E8 0014E8C8  4B F7 36 A9 */	bl icos__Ff
/* 801517EC 0014E8CC  D0 3F 03 18 */	stfs f1, 0x318(r31)
/* 801517F0 0014E8D0  3C 60 80 27 */	lis r3, "@stringBase0"@ha
/* 801517F4 0014E8D4  38 83 E9 F0 */	addi r4, r3, "@stringBase0"@l
/* 801517F8 0014E8D8  80 7F 02 44 */	lwz r3, 0x244(r31)
/* 801517FC 0014E8DC  38 A4 03 C4 */	addi r5, r4, 0x3c4
/* 80151800 0014E8E0  80 9F 02 48 */	lwz r4, 0x248(r31)
/* 80151804 0014E8E4  C0 22 A7 EC */	lfs f1, "@1673"@sda21(r2)
/* 80151808 0014E8E8  4B F0 48 61 */	bl zParamGetFloat__FP16xModelAssetParamUiPCcf
/* 8015180C 0014E8EC  3C 80 80 33 */	lis r4, "tweak__27@unnamed@zNPCTypePrawn_cpp@"@ha
/* 80151810 0014E8F0  3C 60 80 27 */	lis r3, "@stringBase0"@ha
/* 80151814 0014E8F4  38 84 95 E0 */	addi r4, r4, "tweak__27@unnamed@zNPCTypePrawn_cpp@"@l
/* 80151818 0014E8F8  D0 24 00 B8 */	stfs f1, 0xb8(r4)
/* 8015181C 0014E8FC  38 63 E9 F0 */	addi r3, r3, "@stringBase0"@l
/* 80151820 0014E900  38 A3 03 D6 */	addi r5, r3, 0x3d6
/* 80151824 0014E904  80 7F 02 44 */	lwz r3, 0x244(r31)
/* 80151828 0014E908  80 9F 02 48 */	lwz r4, 0x248(r31)
/* 8015182C 0014E90C  C0 22 A7 8C */	lfs f1, "@1455"@sda21(r2)
/* 80151830 0014E910  4B F0 48 39 */	bl zParamGetFloat__FP16xModelAssetParamUiPCcf
/* 80151834 0014E914  3C 80 80 33 */	lis r4, "tweak__27@unnamed@zNPCTypePrawn_cpp@"@ha
/* 80151838 0014E918  3C 60 80 27 */	lis r3, "@stringBase0"@ha
/* 8015183C 0014E91C  38 84 95 E0 */	addi r4, r4, "tweak__27@unnamed@zNPCTypePrawn_cpp@"@l
/* 80151840 0014E920  D0 24 00 BC */	stfs f1, 0xbc(r4)
/* 80151844 0014E924  38 63 E9 F0 */	addi r3, r3, "@stringBase0"@l
/* 80151848 0014E928  38 A3 03 EB */	addi r5, r3, 0x3eb
/* 8015184C 0014E92C  80 7F 02 44 */	lwz r3, 0x244(r31)
/* 80151850 0014E930  80 9F 02 48 */	lwz r4, 0x248(r31)
/* 80151854 0014E934  C0 22 A7 8C */	lfs f1, "@1455"@sda21(r2)
/* 80151858 0014E938  4B F0 48 11 */	bl zParamGetFloat__FP16xModelAssetParamUiPCcf
/* 8015185C 0014E93C  3C 80 80 33 */	lis r4, "tweak__27@unnamed@zNPCTypePrawn_cpp@"@ha
/* 80151860 0014E940  3C 60 80 27 */	lis r3, "@stringBase0"@ha
/* 80151864 0014E944  38 84 95 E0 */	addi r4, r4, "tweak__27@unnamed@zNPCTypePrawn_cpp@"@l
/* 80151868 0014E948  38 C0 00 15 */	li r6, 0x15
/* 8015186C 0014E94C  D0 24 00 C0 */	stfs f1, 0xc0(r4)
/* 80151870 0014E950  38 63 E9 F0 */	addi r3, r3, "@stringBase0"@l
/* 80151874 0014E954  38 A3 04 05 */	addi r5, r3, 0x405
/* 80151878 0014E958  80 7F 02 44 */	lwz r3, 0x244(r31)
/* 8015187C 0014E95C  80 9F 02 48 */	lwz r4, 0x248(r31)
/* 80151880 0014E960  4B F0 47 85 */	bl zParamGetInt__FP16xModelAssetParamUiPCci
/* 80151884 0014E964  3C A0 80 33 */	lis r5, "tweak__27@unnamed@zNPCTypePrawn_cpp@"@ha
/* 80151888 0014E968  3C 80 80 27 */	lis r4, "@stringBase0"@ha
/* 8015188C 0014E96C  38 A5 95 E0 */	addi r5, r5, "tweak__27@unnamed@zNPCTypePrawn_cpp@"@l
/* 80151890 0014E970  38 C0 00 08 */	li r6, 0x8
/* 80151894 0014E974  90 65 00 C4 */	stw r3, 0xc4(r5)
/* 80151898 0014E978  38 64 E9 F0 */	addi r3, r4, "@stringBase0"@l
/* 8015189C 0014E97C  38 A3 04 1C */	addi r5, r3, 0x41c
/* 801518A0 0014E980  80 7F 02 44 */	lwz r3, 0x244(r31)
/* 801518A4 0014E984  80 9F 02 48 */	lwz r4, 0x248(r31)
/* 801518A8 0014E988  4B F0 47 5D */	bl zParamGetInt__FP16xModelAssetParamUiPCci
/* 801518AC 0014E98C  3C A0 80 33 */	lis r5, "tweak__27@unnamed@zNPCTypePrawn_cpp@"@ha
/* 801518B0 0014E990  3C 80 80 27 */	lis r4, "@stringBase0"@ha
/* 801518B4 0014E994  38 A5 95 E0 */	addi r5, r5, "tweak__27@unnamed@zNPCTypePrawn_cpp@"@l
/* 801518B8 0014E998  38 C0 00 09 */	li r6, 0x9
/* 801518BC 0014E99C  90 65 00 C8 */	stw r3, 0xc8(r5)
/* 801518C0 0014E9A0  38 64 E9 F0 */	addi r3, r4, "@stringBase0"@l
/* 801518C4 0014E9A4  38 A3 04 33 */	addi r5, r3, 0x433
/* 801518C8 0014E9A8  80 7F 02 44 */	lwz r3, 0x244(r31)
/* 801518CC 0014E9AC  80 9F 02 48 */	lwz r4, 0x248(r31)
/* 801518D0 0014E9B0  4B F0 47 35 */	bl zParamGetInt__FP16xModelAssetParamUiPCci
/* 801518D4 0014E9B4  3C A0 80 33 */	lis r5, "tweak__27@unnamed@zNPCTypePrawn_cpp@"@ha
/* 801518D8 0014E9B8  3C 80 80 27 */	lis r4, "@stringBase0"@ha
/* 801518DC 0014E9BC  38 A5 95 E0 */	addi r5, r5, "tweak__27@unnamed@zNPCTypePrawn_cpp@"@l
/* 801518E0 0014E9C0  38 C0 00 04 */	li r6, 0x4
/* 801518E4 0014E9C4  90 65 00 CC */	stw r3, 0xcc(r5)
/* 801518E8 0014E9C8  38 64 E9 F0 */	addi r3, r4, "@stringBase0"@l
/* 801518EC 0014E9CC  38 A3 04 4B */	addi r5, r3, 0x44b
/* 801518F0 0014E9D0  80 7F 02 44 */	lwz r3, 0x244(r31)
/* 801518F4 0014E9D4  80 9F 02 48 */	lwz r4, 0x248(r31)
/* 801518F8 0014E9D8  4B F0 47 0D */	bl zParamGetInt__FP16xModelAssetParamUiPCci
/* 801518FC 0014E9DC  3C A0 80 33 */	lis r5, "tweak__27@unnamed@zNPCTypePrawn_cpp@"@ha
/* 80151900 0014E9E0  3C 80 80 27 */	lis r4, "@stringBase0"@ha
/* 80151904 0014E9E4  38 A5 95 E0 */	addi r5, r5, "tweak__27@unnamed@zNPCTypePrawn_cpp@"@l
/* 80151908 0014E9E8  90 65 00 D0 */	stw r3, 0xd0(r5)
/* 8015190C 0014E9EC  38 64 E9 F0 */	addi r3, r4, "@stringBase0"@l
/* 80151910 0014E9F0  38 A3 04 61 */	addi r5, r3, 0x461
/* 80151914 0014E9F4  80 7F 02 44 */	lwz r3, 0x244(r31)
/* 80151918 0014E9F8  80 9F 02 48 */	lwz r4, 0x248(r31)
/* 8015191C 0014E9FC  C0 22 A7 F0 */	lfs f1, "@1674"@sda21(r2)
/* 80151920 0014EA00  4B F0 47 49 */	bl zParamGetFloat__FP16xModelAssetParamUiPCcf
/* 80151924 0014EA04  3C 80 80 33 */	lis r4, "tweak__27@unnamed@zNPCTypePrawn_cpp@"@ha
/* 80151928 0014EA08  3C 60 80 27 */	lis r3, "@stringBase0"@ha
/* 8015192C 0014EA0C  38 84 95 E0 */	addi r4, r4, "tweak__27@unnamed@zNPCTypePrawn_cpp@"@l
/* 80151930 0014EA10  D0 24 00 D4 */	stfs f1, 0xd4(r4)
/* 80151934 0014EA14  38 63 E9 F0 */	addi r3, r3, "@stringBase0"@l
/* 80151938 0014EA18  38 A3 04 72 */	addi r5, r3, 0x472
/* 8015193C 0014EA1C  80 7F 02 44 */	lwz r3, 0x244(r31)
/* 80151940 0014EA20  80 9F 02 48 */	lwz r4, 0x248(r31)
/* 80151944 0014EA24  C0 22 A7 F4 */	lfs f1, "@1675"@sda21(r2)
/* 80151948 0014EA28  4B F0 47 21 */	bl zParamGetFloat__FP16xModelAssetParamUiPCcf
/* 8015194C 0014EA2C  3C 80 80 33 */	lis r4, "tweak__27@unnamed@zNPCTypePrawn_cpp@"@ha
/* 80151950 0014EA30  3C 60 80 27 */	lis r3, "@stringBase0"@ha
/* 80151954 0014EA34  38 84 95 E0 */	addi r4, r4, "tweak__27@unnamed@zNPCTypePrawn_cpp@"@l
/* 80151958 0014EA38  D0 24 00 D8 */	stfs f1, 0xd8(r4)
/* 8015195C 0014EA3C  38 63 E9 F0 */	addi r3, r3, "@stringBase0"@l
/* 80151960 0014EA40  38 A3 04 83 */	addi r5, r3, 0x483
/* 80151964 0014EA44  80 7F 02 44 */	lwz r3, 0x244(r31)
/* 80151968 0014EA48  80 9F 02 48 */	lwz r4, 0x248(r31)
/* 8015196C 0014EA4C  C0 22 A7 F8 */	lfs f1, "@1676"@sda21(r2)
/* 80151970 0014EA50  4B F0 46 F9 */	bl zParamGetFloat__FP16xModelAssetParamUiPCcf
/* 80151974 0014EA54  3C 80 80 33 */	lis r4, "tweak__27@unnamed@zNPCTypePrawn_cpp@"@ha
/* 80151978 0014EA58  3C 60 80 27 */	lis r3, "@stringBase0"@ha
/* 8015197C 0014EA5C  38 84 95 E0 */	addi r4, r4, "tweak__27@unnamed@zNPCTypePrawn_cpp@"@l
/* 80151980 0014EA60  D0 24 00 DC */	stfs f1, 0xdc(r4)
/* 80151984 0014EA64  38 63 E9 F0 */	addi r3, r3, "@stringBase0"@l
/* 80151988 0014EA68  38 A3 04 94 */	addi r5, r3, 0x494
/* 8015198C 0014EA6C  80 7F 02 44 */	lwz r3, 0x244(r31)
/* 80151990 0014EA70  80 9F 02 48 */	lwz r4, 0x248(r31)
/* 80151994 0014EA74  C0 22 A7 6C */	lfs f1, "@1053"@sda21(r2)
/* 80151998 0014EA78  4B F0 46 D1 */	bl zParamGetFloat__FP16xModelAssetParamUiPCcf
/* 8015199C 0014EA7C  3C 80 80 33 */	lis r4, "tweak__27@unnamed@zNPCTypePrawn_cpp@"@ha
/* 801519A0 0014EA80  3C 60 80 27 */	lis r3, "@stringBase0"@ha
/* 801519A4 0014EA84  38 84 95 E0 */	addi r4, r4, "tweak__27@unnamed@zNPCTypePrawn_cpp@"@l
/* 801519A8 0014EA88  D0 24 00 E0 */	stfs f1, 0xe0(r4)
/* 801519AC 0014EA8C  38 63 E9 F0 */	addi r3, r3, "@stringBase0"@l
/* 801519B0 0014EA90  38 A3 04 A5 */	addi r5, r3, 0x4a5
/* 801519B4 0014EA94  80 7F 02 44 */	lwz r3, 0x244(r31)
/* 801519B8 0014EA98  80 9F 02 48 */	lwz r4, 0x248(r31)
/* 801519BC 0014EA9C  C0 22 A7 8C */	lfs f1, "@1455"@sda21(r2)
/* 801519C0 0014EAA0  4B F0 46 A9 */	bl zParamGetFloat__FP16xModelAssetParamUiPCcf
/* 801519C4 0014EAA4  3C 80 80 33 */	lis r4, "tweak__27@unnamed@zNPCTypePrawn_cpp@"@ha
/* 801519C8 0014EAA8  3C 60 80 27 */	lis r3, "@stringBase0"@ha
/* 801519CC 0014EAAC  38 84 95 E0 */	addi r4, r4, "tweak__27@unnamed@zNPCTypePrawn_cpp@"@l
/* 801519D0 0014EAB0  38 C0 00 39 */	li r6, 0x39
/* 801519D4 0014EAB4  D0 24 00 E4 */	stfs f1, 0xe4(r4)
/* 801519D8 0014EAB8  38 63 E9 F0 */	addi r3, r3, "@stringBase0"@l
/* 801519DC 0014EABC  38 A3 04 BB */	addi r5, r3, 0x4bb
/* 801519E0 0014EAC0  80 7F 02 44 */	lwz r3, 0x244(r31)
/* 801519E4 0014EAC4  80 9F 02 48 */	lwz r4, 0x248(r31)
/* 801519E8 0014EAC8  4B F0 46 1D */	bl zParamGetInt__FP16xModelAssetParamUiPCci
/* 801519EC 0014EACC  3C A0 80 33 */	lis r5, "tweak__27@unnamed@zNPCTypePrawn_cpp@"@ha
/* 801519F0 0014EAD0  3C 80 80 27 */	lis r4, "@stringBase0"@ha
/* 801519F4 0014EAD4  38 A5 95 E0 */	addi r5, r5, "tweak__27@unnamed@zNPCTypePrawn_cpp@"@l
/* 801519F8 0014EAD8  38 C0 00 08 */	li r6, 0x8
/* 801519FC 0014EADC  90 65 00 E8 */	stw r3, 0xe8(r5)
/* 80151A00 0014EAE0  38 64 E9 F0 */	addi r3, r4, "@stringBase0"@l
/* 80151A04 0014EAE4  38 A3 04 CE */	addi r5, r3, 0x4ce
/* 80151A08 0014EAE8  80 7F 02 44 */	lwz r3, 0x244(r31)
/* 80151A0C 0014EAEC  80 9F 02 48 */	lwz r4, 0x248(r31)
/* 80151A10 0014EAF0  4B F0 45 F5 */	bl zParamGetInt__FP16xModelAssetParamUiPCci
/* 80151A14 0014EAF4  3C A0 80 33 */	lis r5, "tweak__27@unnamed@zNPCTypePrawn_cpp@"@ha
/* 80151A18 0014EAF8  3C 80 80 27 */	lis r4, "@stringBase0"@ha
/* 80151A1C 0014EAFC  38 A5 95 E0 */	addi r5, r5, "tweak__27@unnamed@zNPCTypePrawn_cpp@"@l
/* 80151A20 0014EB00  38 C0 00 09 */	li r6, 0x9
/* 80151A24 0014EB04  90 65 00 EC */	stw r3, 0xec(r5)
/* 80151A28 0014EB08  38 64 E9 F0 */	addi r3, r4, "@stringBase0"@l
/* 80151A2C 0014EB0C  38 A3 04 E1 */	addi r5, r3, 0x4e1
/* 80151A30 0014EB10  80 7F 02 44 */	lwz r3, 0x244(r31)
/* 80151A34 0014EB14  80 9F 02 48 */	lwz r4, 0x248(r31)
/* 80151A38 0014EB18  4B F0 45 CD */	bl zParamGetInt__FP16xModelAssetParamUiPCci
/* 80151A3C 0014EB1C  3C A0 80 33 */	lis r5, "tweak__27@unnamed@zNPCTypePrawn_cpp@"@ha
/* 80151A40 0014EB20  3C 80 80 27 */	lis r4, "@stringBase0"@ha
/* 80151A44 0014EB24  38 A5 95 E0 */	addi r5, r5, "tweak__27@unnamed@zNPCTypePrawn_cpp@"@l
/* 80151A48 0014EB28  38 C0 00 04 */	li r6, 0x4
/* 80151A4C 0014EB2C  90 65 00 F0 */	stw r3, 0xf0(r5)
/* 80151A50 0014EB30  38 64 E9 F0 */	addi r3, r4, "@stringBase0"@l
/* 80151A54 0014EB34  38 A3 04 F5 */	addi r5, r3, 0x4f5
/* 80151A58 0014EB38  80 7F 02 44 */	lwz r3, 0x244(r31)
/* 80151A5C 0014EB3C  80 9F 02 48 */	lwz r4, 0x248(r31)
/* 80151A60 0014EB40  4B F0 45 A5 */	bl zParamGetInt__FP16xModelAssetParamUiPCci
/* 80151A64 0014EB44  3C A0 80 33 */	lis r5, "tweak__27@unnamed@zNPCTypePrawn_cpp@"@ha
/* 80151A68 0014EB48  3C 80 80 27 */	lis r4, "@stringBase0"@ha
/* 80151A6C 0014EB4C  38 A5 95 E0 */	addi r5, r5, "tweak__27@unnamed@zNPCTypePrawn_cpp@"@l
/* 80151A70 0014EB50  90 65 00 F4 */	stw r3, 0xf4(r5)
/* 80151A74 0014EB54  38 64 E9 F0 */	addi r3, r4, "@stringBase0"@l
/* 80151A78 0014EB58  38 A3 05 07 */	addi r5, r3, 0x507
/* 80151A7C 0014EB5C  80 7F 02 44 */	lwz r3, 0x244(r31)
/* 80151A80 0014EB60  80 9F 02 48 */	lwz r4, 0x248(r31)
/* 80151A84 0014EB64  C0 22 A7 88 */	lfs f1, "@1454"@sda21(r2)
/* 80151A88 0014EB68  4B F0 45 E1 */	bl zParamGetFloat__FP16xModelAssetParamUiPCcf
/* 80151A8C 0014EB6C  3C 80 80 33 */	lis r4, "tweak__27@unnamed@zNPCTypePrawn_cpp@"@ha
/* 80151A90 0014EB70  3C 60 80 27 */	lis r3, "@stringBase0"@ha
/* 80151A94 0014EB74  38 84 95 E0 */	addi r4, r4, "tweak__27@unnamed@zNPCTypePrawn_cpp@"@l
/* 80151A98 0014EB78  D0 24 00 F8 */	stfs f1, 0xf8(r4)
/* 80151A9C 0014EB7C  38 63 E9 F0 */	addi r3, r3, "@stringBase0"@l
/* 80151AA0 0014EB80  38 A3 05 1A */	addi r5, r3, 0x51a
/* 80151AA4 0014EB84  80 7F 02 44 */	lwz r3, 0x244(r31)
/* 80151AA8 0014EB88  80 9F 02 48 */	lwz r4, 0x248(r31)
/* 80151AAC 0014EB8C  C0 22 A7 88 */	lfs f1, "@1454"@sda21(r2)
/* 80151AB0 0014EB90  4B F0 45 B9 */	bl zParamGetFloat__FP16xModelAssetParamUiPCcf
/* 80151AB4 0014EB94  3C 80 80 33 */	lis r4, "tweak__27@unnamed@zNPCTypePrawn_cpp@"@ha
/* 80151AB8 0014EB98  3C 60 80 27 */	lis r3, "@stringBase0"@ha
/* 80151ABC 0014EB9C  38 84 95 E0 */	addi r4, r4, "tweak__27@unnamed@zNPCTypePrawn_cpp@"@l
/* 80151AC0 0014EBA0  D0 24 00 FC */	stfs f1, 0xfc(r4)
/* 80151AC4 0014EBA4  38 63 E9 F0 */	addi r3, r3, "@stringBase0"@l
/* 80151AC8 0014EBA8  38 A3 05 32 */	addi r5, r3, 0x532
/* 80151ACC 0014EBAC  80 7F 02 44 */	lwz r3, 0x244(r31)
/* 80151AD0 0014EBB0  80 9F 02 48 */	lwz r4, 0x248(r31)
/* 80151AD4 0014EBB4  C0 22 A7 F8 */	lfs f1, "@1676"@sda21(r2)
/* 80151AD8 0014EBB8  4B F0 45 91 */	bl zParamGetFloat__FP16xModelAssetParamUiPCcf
/* 80151ADC 0014EBBC  3C 80 80 33 */	lis r4, "tweak__27@unnamed@zNPCTypePrawn_cpp@"@ha
/* 80151AE0 0014EBC0  3C 60 80 27 */	lis r3, "@stringBase0"@ha
/* 80151AE4 0014EBC4  38 84 95 E0 */	addi r4, r4, "tweak__27@unnamed@zNPCTypePrawn_cpp@"@l
/* 80151AE8 0014EBC8  38 C0 00 5D */	li r6, 0x5d
/* 80151AEC 0014EBCC  D0 24 01 00 */	stfs f1, 0x100(r4)
/* 80151AF0 0014EBD0  38 63 E9 F0 */	addi r3, r3, "@stringBase0"@l
/* 80151AF4 0014EBD4  38 A3 05 45 */	addi r5, r3, 0x545
/* 80151AF8 0014EBD8  80 7F 02 44 */	lwz r3, 0x244(r31)
/* 80151AFC 0014EBDC  80 9F 02 48 */	lwz r4, 0x248(r31)
/* 80151B00 0014EBE0  4B F0 45 05 */	bl zParamGetInt__FP16xModelAssetParamUiPCci
/* 80151B04 0014EBE4  3C A0 80 33 */	lis r5, "tweak__27@unnamed@zNPCTypePrawn_cpp@"@ha
/* 80151B08 0014EBE8  3C 80 80 27 */	lis r4, default_pattern$1647@ha
/* 80151B0C 0014EBEC  38 C5 95 E0 */	addi r6, r5, "tweak__27@unnamed@zNPCTypePrawn_cpp@"@l
/* 80151B10 0014EBF0  90 66 01 04 */	stw r3, 0x104(r6)
/* 80151B14 0014EBF4  3B C6 01 0C */	addi r30, r6, 0x10c
/* 80151B18 0014EBF8  38 A0 00 A0 */	li r5, 0xa0
/* 80151B1C 0014EBFC  38 84 E9 50 */	addi r4, r4, default_pattern$1647@l
/* 80151B20 0014EC00  7F C3 F3 78 */	mr r3, r30
/* 80151B24 0014EC04  4B EB 1A 1D */	bl memcpy
/* 80151B28 0014EC08  3C 80 80 27 */	lis r4, "@stringBase0"@ha
/* 80151B2C 0014EC0C  80 7F 02 44 */	lwz r3, 0x244(r31)
/* 80151B30 0014EC10  38 A4 E9 F0 */	addi r5, r4, "@stringBase0"@l
/* 80151B34 0014EC14  80 9F 02 48 */	lwz r4, 0x248(r31)
/* 80151B38 0014EC18  7F C6 F3 78 */	mr r6, r30
/* 80151B3C 0014EC1C  38 E0 00 14 */	li r7, 0x14
/* 80151B40 0014EC20  38 A5 05 5B */	addi r5, r5, 0x55b
/* 80151B44 0014EC24  4B FF F4 C1 */	bl "load_patterns__27@unnamed@zNPCTypePrawn_cpp@FP16xModelAssetParamUiPCcPQ29zNPCPrawn10range_typei"
/* 80151B48 0014EC28  3C 80 80 33 */	lis r4, "tweak__27@unnamed@zNPCTypePrawn_cpp@"@ha
/* 80151B4C 0014EC2C  38 84 95 E0 */	addi r4, r4, "tweak__27@unnamed@zNPCTypePrawn_cpp@"@l
/* 80151B50 0014EC30  90 64 01 08 */	stw r3, 0x108(r4)
/* 80151B54 0014EC34  83 E1 00 3C */	lwz r31, 0x3c(r1)
/* 80151B58 0014EC38  83 C1 00 38 */	lwz r30, 0x38(r1)
/* 80151B5C 0014EC3C  80 01 00 44 */	lwz r0, 0x44(r1)
/* 80151B60 0014EC40  7C 08 03 A6 */	mtlr r0
/* 80151B64 0014EC44  38 21 00 40 */	addi r1, r1, 0x40
/* 80151B68 0014EC48  4E 80 00 20 */	blr
.endfn ParseINI__9zNPCPrawnFv

# @unnamed@zNPCTypePrawn_cpp@::tweak_group::load(xModelAssetParam*, unsigned int)
.fn "load__Q227@unnamed@zNPCTypePrawn_cpp@11tweak_groupFP16xModelAssetParamUi", local
/* 80151B6C 0014EC4C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80151B70 0014EC50  7C 08 02 A6 */	mflr r0
/* 80151B74 0014EC54  7C A6 2B 78 */	mr r6, r5
/* 80151B78 0014EC58  7C 85 23 78 */	mr r5, r4
/* 80151B7C 0014EC5C  90 01 00 14 */	stw r0, 0x14(r1)
/* 80151B80 0014EC60  38 80 00 01 */	li r4, 0x1
/* 80151B84 0014EC64  38 E0 00 00 */	li r7, 0x0
/* 80151B88 0014EC68  48 00 00 15 */	bl "register_tweaks__Q227@unnamed@zNPCTypePrawn_cpp@11tweak_groupFbP16xModelAssetParamUiPCc"
/* 80151B8C 0014EC6C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80151B90 0014EC70  7C 08 03 A6 */	mtlr r0
/* 80151B94 0014EC74  38 21 00 10 */	addi r1, r1, 0x10
/* 80151B98 0014EC78  4E 80 00 20 */	blr
.endfn "load__Q227@unnamed@zNPCTypePrawn_cpp@11tweak_groupFP16xModelAssetParamUi"

# @unnamed@zNPCTypePrawn_cpp@::tweak_group::register_tweaks(bool, xModelAssetParam*, unsigned int, const char*)
.fn "register_tweaks__Q227@unnamed@zNPCTypePrawn_cpp@11tweak_groupFbP16xModelAssetParamUiPCc", local
/* 80151B9C 0014EC7C  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 80151BA0 0014EC80  7C 08 02 A6 */	mflr r0
/* 80151BA4 0014EC84  90 01 00 24 */	stw r0, 0x24(r1)
/* 80151BA8 0014EC88  54 80 06 3F */	clrlwi. r0, r4, 24
/* 80151BAC 0014EC8C  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 80151BB0 0014EC90  7C DF 33 78 */	mr r31, r6
/* 80151BB4 0014EC94  93 C1 00 18 */	stw r30, 0x18(r1)
/* 80151BB8 0014EC98  7C BE 2B 78 */	mr r30, r5
/* 80151BBC 0014EC9C  93 A1 00 14 */	stw r29, 0x14(r1)
/* 80151BC0 0014ECA0  7C 9D 23 78 */	mr r29, r4
/* 80151BC4 0014ECA4  93 81 00 10 */	stw r28, 0x10(r1)
/* 80151BC8 0014ECA8  7C 7C 1B 78 */	mr r28, r3
/* 80151BCC 0014ECAC  41 82 00 34 */	beq .L_80151C00
/* 80151BD0 0014ECB0  38 00 00 02 */	li r0, 0x2
/* 80151BD4 0014ECB4  3C 60 80 27 */	lis r3, "@stringBase0"@ha
/* 80151BD8 0014ECB8  38 83 E9 F0 */	addi r4, r3, "@stringBase0"@l
/* 80151BDC 0014ECBC  90 1C 00 68 */	stw r0, 0x68(r28)
/* 80151BE0 0014ECC0  7F C7 F3 78 */	mr r7, r30
/* 80151BE4 0014ECC4  7F E8 FB 78 */	mr r8, r31
/* 80151BE8 0014ECC8  38 7C 00 68 */	addi r3, r28, 0x68
/* 80151BEC 0014ECCC  39 24 05 74 */	addi r9, r4, 0x574
/* 80151BF0 0014ECD0  38 80 00 01 */	li r4, 0x1
/* 80151BF4 0014ECD4  38 A0 00 01 */	li r5, 0x1
/* 80151BF8 0014ECD8  38 C0 00 0A */	li r6, 0xa
/* 80151BFC 0014ECDC  48 00 31 55 */	bl "load_param<i,i>__10auto_tweakFRiiiiP16xModelAssetParamUiPCc"
.L_80151C00:
/* 80151C00 0014ECE0  57 A0 06 3F */	clrlwi. r0, r29, 24
/* 80151C04 0014ECE4  41 82 00 34 */	beq .L_80151C38
/* 80151C08 0014ECE8  C0 02 A7 68 */	lfs f0, "@1052"@sda21(r2)
/* 80151C0C 0014ECEC  3C 60 80 27 */	lis r3, "@stringBase0"@ha
/* 80151C10 0014ECF0  38 C3 E9 F0 */	addi r6, r3, "@stringBase0"@l
/* 80151C14 0014ECF4  7F C4 F3 78 */	mr r4, r30
/* 80151C18 0014ECF8  D0 1C 01 B0 */	stfs f0, 0x1b0(r28)
/* 80151C1C 0014ECFC  7F E5 FB 78 */	mr r5, r31
/* 80151C20 0014ED00  38 7C 01 B0 */	addi r3, r28, 0x1b0
/* 80151C24 0014ED04  38 C6 05 8D */	addi r6, r6, 0x58d
/* 80151C28 0014ED08  C0 22 A7 68 */	lfs f1, "@1052"@sda21(r2)
/* 80151C2C 0014ED0C  C0 42 A7 6C */	lfs f2, "@1053"@sda21(r2)
/* 80151C30 0014ED10  FC 60 08 90 */	fmr f3, f1
/* 80151C34 0014ED14  48 00 30 75 */	bl "load_param<f,f>__10auto_tweakFRffffP16xModelAssetParamUiPCc"
.L_80151C38:
/* 80151C38 0014ED18  57 A0 06 3F */	clrlwi. r0, r29, 24
/* 80151C3C 0014ED1C  41 82 00 34 */	beq .L_80151C70
/* 80151C40 0014ED20  C0 02 A7 C8 */	lfs f0, "@1664"@sda21(r2)
/* 80151C44 0014ED24  3C 60 80 27 */	lis r3, "@stringBase0"@ha
/* 80151C48 0014ED28  38 C3 E9 F0 */	addi r6, r3, "@stringBase0"@l
/* 80151C4C 0014ED2C  7F C4 F3 78 */	mr r4, r30
/* 80151C50 0014ED30  D0 1C 01 B4 */	stfs f0, 0x1b4(r28)
/* 80151C54 0014ED34  7F E5 FB 78 */	mr r5, r31
/* 80151C58 0014ED38  38 7C 01 B4 */	addi r3, r28, 0x1b4
/* 80151C5C 0014ED3C  38 C6 05 A5 */	addi r6, r6, 0x5a5
/* 80151C60 0014ED40  C0 22 A7 68 */	lfs f1, "@1052"@sda21(r2)
/* 80151C64 0014ED44  C0 42 A7 6C */	lfs f2, "@1053"@sda21(r2)
/* 80151C68 0014ED48  C0 62 A7 78 */	lfs f3, "@1284"@sda21(r2)
/* 80151C6C 0014ED4C  48 00 30 3D */	bl "load_param<f,f>__10auto_tweakFRffffP16xModelAssetParamUiPCc"
.L_80151C70:
/* 80151C70 0014ED50  57 A0 06 3F */	clrlwi. r0, r29, 24
/* 80151C74 0014ED54  41 82 00 34 */	beq .L_80151CA8
/* 80151C78 0014ED58  C0 02 A7 FC */	lfs f0, "@1704"@sda21(r2)
/* 80151C7C 0014ED5C  3C 60 80 27 */	lis r3, "@stringBase0"@ha
/* 80151C80 0014ED60  38 C3 E9 F0 */	addi r6, r3, "@stringBase0"@l
/* 80151C84 0014ED64  7F C4 F3 78 */	mr r4, r30
/* 80151C88 0014ED68  D0 1C 01 B8 */	stfs f0, 0x1b8(r28)
/* 80151C8C 0014ED6C  7F E5 FB 78 */	mr r5, r31
/* 80151C90 0014ED70  38 7C 01 B8 */	addi r3, r28, 0x1b8
/* 80151C94 0014ED74  38 C6 05 C2 */	addi r6, r6, 0x5c2
/* 80151C98 0014ED78  C0 22 A7 68 */	lfs f1, "@1052"@sda21(r2)
/* 80151C9C 0014ED7C  C0 42 A7 6C */	lfs f2, "@1053"@sda21(r2)
/* 80151CA0 0014ED80  C0 62 A7 78 */	lfs f3, "@1284"@sda21(r2)
/* 80151CA4 0014ED84  48 00 30 05 */	bl "load_param<f,f>__10auto_tweakFRffffP16xModelAssetParamUiPCc"
.L_80151CA8:
/* 80151CA8 0014ED88  57 A0 06 3F */	clrlwi. r0, r29, 24
/* 80151CAC 0014ED8C  41 82 00 34 */	beq .L_80151CE0
/* 80151CB0 0014ED90  C0 02 A7 6C */	lfs f0, "@1053"@sda21(r2)
/* 80151CB4 0014ED94  3C 60 80 27 */	lis r3, "@stringBase0"@ha
/* 80151CB8 0014ED98  38 C3 E9 F0 */	addi r6, r3, "@stringBase0"@l
/* 80151CBC 0014ED9C  7F C4 F3 78 */	mr r4, r30
/* 80151CC0 0014EDA0  D0 1C 01 BC */	stfs f0, 0x1bc(r28)
/* 80151CC4 0014EDA4  7F E5 FB 78 */	mr r5, r31
/* 80151CC8 0014EDA8  38 7C 01 BC */	addi r3, r28, 0x1bc
/* 80151CCC 0014EDAC  38 C6 05 DF */	addi r6, r6, 0x5df
/* 80151CD0 0014EDB0  C0 22 A7 68 */	lfs f1, "@1052"@sda21(r2)
/* 80151CD4 0014EDB4  C0 42 A7 6C */	lfs f2, "@1053"@sda21(r2)
/* 80151CD8 0014EDB8  C0 62 A7 78 */	lfs f3, "@1284"@sda21(r2)
/* 80151CDC 0014EDBC  48 00 2F CD */	bl "load_param<f,f>__10auto_tweakFRffffP16xModelAssetParamUiPCc"
.L_80151CE0:
/* 80151CE0 0014EDC0  57 A0 06 3F */	clrlwi. r0, r29, 24
/* 80151CE4 0014EDC4  41 82 00 34 */	beq .L_80151D18
/* 80151CE8 0014EDC8  C0 02 A7 68 */	lfs f0, "@1052"@sda21(r2)
/* 80151CEC 0014EDCC  3C 60 80 27 */	lis r3, "@stringBase0"@ha
/* 80151CF0 0014EDD0  38 C3 E9 F0 */	addi r6, r3, "@stringBase0"@l
/* 80151CF4 0014EDD4  7F C4 F3 78 */	mr r4, r30
/* 80151CF8 0014EDD8  D0 1C 01 C8 */	stfs f0, 0x1c8(r28)
/* 80151CFC 0014EDDC  7F E5 FB 78 */	mr r5, r31
/* 80151D00 0014EDE0  38 7C 01 C8 */	addi r3, r28, 0x1c8
/* 80151D04 0014EDE4  38 C6 05 F6 */	addi r6, r6, 0x5f6
/* 80151D08 0014EDE8  C0 22 A7 68 */	lfs f1, "@1052"@sda21(r2)
/* 80151D0C 0014EDEC  C0 42 A7 6C */	lfs f2, "@1053"@sda21(r2)
/* 80151D10 0014EDF0  FC 60 08 90 */	fmr f3, f1
/* 80151D14 0014EDF4  48 00 2F 95 */	bl "load_param<f,f>__10auto_tweakFRffffP16xModelAssetParamUiPCc"
.L_80151D18:
/* 80151D18 0014EDF8  57 A0 06 3F */	clrlwi. r0, r29, 24
/* 80151D1C 0014EDFC  41 82 00 34 */	beq .L_80151D50
/* 80151D20 0014EE00  C0 02 A7 C8 */	lfs f0, "@1664"@sda21(r2)
/* 80151D24 0014EE04  3C 60 80 27 */	lis r3, "@stringBase0"@ha
/* 80151D28 0014EE08  38 C3 E9 F0 */	addi r6, r3, "@stringBase0"@l
/* 80151D2C 0014EE0C  7F C4 F3 78 */	mr r4, r30
/* 80151D30 0014EE10  D0 1C 01 CC */	stfs f0, 0x1cc(r28)
/* 80151D34 0014EE14  7F E5 FB 78 */	mr r5, r31
/* 80151D38 0014EE18  38 7C 01 CC */	addi r3, r28, 0x1cc
/* 80151D3C 0014EE1C  38 C6 06 15 */	addi r6, r6, 0x615
/* 80151D40 0014EE20  C0 22 A7 68 */	lfs f1, "@1052"@sda21(r2)
/* 80151D44 0014EE24  C0 42 A7 6C */	lfs f2, "@1053"@sda21(r2)
/* 80151D48 0014EE28  C0 62 A7 78 */	lfs f3, "@1284"@sda21(r2)
/* 80151D4C 0014EE2C  48 00 2F 5D */	bl "load_param<f,f>__10auto_tweakFRffffP16xModelAssetParamUiPCc"
.L_80151D50:
/* 80151D50 0014EE30  57 A0 06 3F */	clrlwi. r0, r29, 24
/* 80151D54 0014EE34  41 82 00 34 */	beq .L_80151D88
/* 80151D58 0014EE38  C0 02 A7 FC */	lfs f0, "@1704"@sda21(r2)
/* 80151D5C 0014EE3C  3C 60 80 27 */	lis r3, "@stringBase0"@ha
/* 80151D60 0014EE40  38 C3 E9 F0 */	addi r6, r3, "@stringBase0"@l
/* 80151D64 0014EE44  7F C4 F3 78 */	mr r4, r30
/* 80151D68 0014EE48  D0 1C 01 D0 */	stfs f0, 0x1d0(r28)
/* 80151D6C 0014EE4C  7F E5 FB 78 */	mr r5, r31
/* 80151D70 0014EE50  38 7C 01 D0 */	addi r3, r28, 0x1d0
/* 80151D74 0014EE54  38 C6 06 39 */	addi r6, r6, 0x639
/* 80151D78 0014EE58  C0 22 A7 68 */	lfs f1, "@1052"@sda21(r2)
/* 80151D7C 0014EE5C  C0 42 A7 6C */	lfs f2, "@1053"@sda21(r2)
/* 80151D80 0014EE60  C0 62 A7 78 */	lfs f3, "@1284"@sda21(r2)
/* 80151D84 0014EE64  48 00 2F 25 */	bl "load_param<f,f>__10auto_tweakFRffffP16xModelAssetParamUiPCc"
.L_80151D88:
/* 80151D88 0014EE68  57 A0 06 3F */	clrlwi. r0, r29, 24
/* 80151D8C 0014EE6C  41 82 00 34 */	beq .L_80151DC0
/* 80151D90 0014EE70  C0 02 A7 94 */	lfs f0, "@1493"@sda21(r2)
/* 80151D94 0014EE74  3C 60 80 27 */	lis r3, "@stringBase0"@ha
/* 80151D98 0014EE78  38 C3 E9 F0 */	addi r6, r3, "@stringBase0"@l
/* 80151D9C 0014EE7C  7F C4 F3 78 */	mr r4, r30
/* 80151DA0 0014EE80  D0 1C 01 D4 */	stfs f0, 0x1d4(r28)
/* 80151DA4 0014EE84  7F E5 FB 78 */	mr r5, r31
/* 80151DA8 0014EE88  38 7C 01 D4 */	addi r3, r28, 0x1d4
/* 80151DAC 0014EE8C  38 C6 06 5D */	addi r6, r6, 0x65d
/* 80151DB0 0014EE90  C0 22 A7 68 */	lfs f1, "@1052"@sda21(r2)
/* 80151DB4 0014EE94  C0 42 A7 6C */	lfs f2, "@1053"@sda21(r2)
/* 80151DB8 0014EE98  C0 62 A7 78 */	lfs f3, "@1284"@sda21(r2)
/* 80151DBC 0014EE9C  48 00 2E ED */	bl "load_param<f,f>__10auto_tweakFRffffP16xModelAssetParamUiPCc"
.L_80151DC0:
/* 80151DC0 0014EEA0  57 A0 06 3F */	clrlwi. r0, r29, 24
/* 80151DC4 0014EEA4  41 82 00 34 */	beq .L_80151DF8
/* 80151DC8 0014EEA8  C0 02 A7 D8 */	lfs f0, "@1668"@sda21(r2)
/* 80151DCC 0014EEAC  3C 60 80 27 */	lis r3, "@stringBase0"@ha
/* 80151DD0 0014EEB0  38 C3 E9 F0 */	addi r6, r3, "@stringBase0"@l
/* 80151DD4 0014EEB4  7F C4 F3 78 */	mr r4, r30
/* 80151DD8 0014EEB8  D0 1C 01 E0 */	stfs f0, 0x1e0(r28)
/* 80151DDC 0014EEBC  7F E5 FB 78 */	mr r5, r31
/* 80151DE0 0014EEC0  38 7C 01 E0 */	addi r3, r28, 0x1e0
/* 80151DE4 0014EEC4  38 C6 06 7B */	addi r6, r6, 0x67b
/* 80151DE8 0014EEC8  C0 22 A7 68 */	lfs f1, "@1052"@sda21(r2)
/* 80151DEC 0014EECC  C0 42 A7 6C */	lfs f2, "@1053"@sda21(r2)
/* 80151DF0 0014EED0  FC 60 08 90 */	fmr f3, f1
/* 80151DF4 0014EED4  48 00 2E B5 */	bl "load_param<f,f>__10auto_tweakFRffffP16xModelAssetParamUiPCc"
.L_80151DF8:
/* 80151DF8 0014EED8  57 A0 06 3F */	clrlwi. r0, r29, 24
/* 80151DFC 0014EEDC  41 82 00 34 */	beq .L_80151E30
/* 80151E00 0014EEE0  C0 02 A7 E0 */	lfs f0, "@1670"@sda21(r2)
/* 80151E04 0014EEE4  3C 60 80 27 */	lis r3, "@stringBase0"@ha
/* 80151E08 0014EEE8  38 C3 E9 F0 */	addi r6, r3, "@stringBase0"@l
/* 80151E0C 0014EEEC  7F C4 F3 78 */	mr r4, r30
/* 80151E10 0014EEF0  D0 1C 01 E4 */	stfs f0, 0x1e4(r28)
/* 80151E14 0014EEF4  7F E5 FB 78 */	mr r5, r31
/* 80151E18 0014EEF8  38 7C 01 E4 */	addi r3, r28, 0x1e4
/* 80151E1C 0014EEFC  38 C6 06 99 */	addi r6, r6, 0x699
/* 80151E20 0014EF00  C0 22 A7 68 */	lfs f1, "@1052"@sda21(r2)
/* 80151E24 0014EF04  C0 42 A7 6C */	lfs f2, "@1053"@sda21(r2)
/* 80151E28 0014EF08  C0 62 A7 78 */	lfs f3, "@1284"@sda21(r2)
/* 80151E2C 0014EF0C  48 00 2E 7D */	bl "load_param<f,f>__10auto_tweakFRffffP16xModelAssetParamUiPCc"
.L_80151E30:
/* 80151E30 0014EF10  57 A0 06 3F */	clrlwi. r0, r29, 24
/* 80151E34 0014EF14  41 82 00 34 */	beq .L_80151E68
/* 80151E38 0014EF18  C0 02 A8 00 */	lfs f0, "@1705"@sda21(r2)
/* 80151E3C 0014EF1C  3C 60 80 27 */	lis r3, "@stringBase0"@ha
/* 80151E40 0014EF20  38 C3 E9 F0 */	addi r6, r3, "@stringBase0"@l
/* 80151E44 0014EF24  7F C4 F3 78 */	mr r4, r30
/* 80151E48 0014EF28  D0 1C 01 E8 */	stfs f0, 0x1e8(r28)
/* 80151E4C 0014EF2C  7F E5 FB 78 */	mr r5, r31
/* 80151E50 0014EF30  38 7C 01 E8 */	addi r3, r28, 0x1e8
/* 80151E54 0014EF34  38 C6 06 BC */	addi r6, r6, 0x6bc
/* 80151E58 0014EF38  C0 22 A7 68 */	lfs f1, "@1052"@sda21(r2)
/* 80151E5C 0014EF3C  C0 42 A7 6C */	lfs f2, "@1053"@sda21(r2)
/* 80151E60 0014EF40  C0 62 A7 78 */	lfs f3, "@1284"@sda21(r2)
/* 80151E64 0014EF44  48 00 2E 45 */	bl "load_param<f,f>__10auto_tweakFRffffP16xModelAssetParamUiPCc"
.L_80151E68:
/* 80151E68 0014EF48  57 A0 06 3F */	clrlwi. r0, r29, 24
/* 80151E6C 0014EF4C  41 82 00 34 */	beq .L_80151EA0
/* 80151E70 0014EF50  C0 02 A8 04 */	lfs f0, "@1706"@sda21(r2)
/* 80151E74 0014EF54  3C 60 80 27 */	lis r3, "@stringBase0"@ha
/* 80151E78 0014EF58  38 C3 E9 F0 */	addi r6, r3, "@stringBase0"@l
/* 80151E7C 0014EF5C  7F C4 F3 78 */	mr r4, r30
/* 80151E80 0014EF60  D0 1C 01 EC */	stfs f0, 0x1ec(r28)
/* 80151E84 0014EF64  7F E5 FB 78 */	mr r5, r31
/* 80151E88 0014EF68  38 7C 01 EC */	addi r3, r28, 0x1ec
/* 80151E8C 0014EF6C  38 C6 06 DF */	addi r6, r6, 0x6df
/* 80151E90 0014EF70  C0 22 A7 68 */	lfs f1, "@1052"@sda21(r2)
/* 80151E94 0014EF74  C0 42 A7 6C */	lfs f2, "@1053"@sda21(r2)
/* 80151E98 0014EF78  C0 62 A7 78 */	lfs f3, "@1284"@sda21(r2)
/* 80151E9C 0014EF7C  48 00 2E 0D */	bl "load_param<f,f>__10auto_tweakFRffffP16xModelAssetParamUiPCc"
.L_80151EA0:
/* 80151EA0 0014EF80  57 A0 06 3F */	clrlwi. r0, r29, 24
/* 80151EA4 0014EF84  41 82 00 34 */	beq .L_80151ED8
/* 80151EA8 0014EF88  C0 02 A8 04 */	lfs f0, "@1706"@sda21(r2)
/* 80151EAC 0014EF8C  3C 60 80 27 */	lis r3, "@stringBase0"@ha
/* 80151EB0 0014EF90  38 C3 E9 F0 */	addi r6, r3, "@stringBase0"@l
/* 80151EB4 0014EF94  7F C4 F3 78 */	mr r4, r30
/* 80151EB8 0014EF98  D0 1C 01 F0 */	stfs f0, 0x1f0(r28)
/* 80151EBC 0014EF9C  7F E5 FB 78 */	mr r5, r31
/* 80151EC0 0014EFA0  38 7C 01 F0 */	addi r3, r28, 0x1f0
/* 80151EC4 0014EFA4  38 C6 06 FC */	addi r6, r6, 0x6fc
/* 80151EC8 0014EFA8  C0 22 A7 68 */	lfs f1, "@1052"@sda21(r2)
/* 80151ECC 0014EFAC  C0 42 A7 6C */	lfs f2, "@1053"@sda21(r2)
/* 80151ED0 0014EFB0  C0 62 A7 78 */	lfs f3, "@1284"@sda21(r2)
/* 80151ED4 0014EFB4  48 00 2D D5 */	bl "load_param<f,f>__10auto_tweakFRffffP16xModelAssetParamUiPCc"
.L_80151ED8:
/* 80151ED8 0014EFB8  57 A0 06 3F */	clrlwi. r0, r29, 24
/* 80151EDC 0014EFBC  41 82 00 34 */	beq .L_80151F10
/* 80151EE0 0014EFC0  C0 02 A7 74 */	lfs f0, "@1282"@sda21(r2)
/* 80151EE4 0014EFC4  3C 60 80 27 */	lis r3, "@stringBase0"@ha
/* 80151EE8 0014EFC8  38 C3 E9 F0 */	addi r6, r3, "@stringBase0"@l
/* 80151EEC 0014EFCC  7F C4 F3 78 */	mr r4, r30
/* 80151EF0 0014EFD0  D0 1C 01 F8 */	stfs f0, 0x1f8(r28)
/* 80151EF4 0014EFD4  7F E5 FB 78 */	mr r5, r31
/* 80151EF8 0014EFD8  38 7C 01 F8 */	addi r3, r28, 0x1f8
/* 80151EFC 0014EFDC  38 C6 07 1D */	addi r6, r6, 0x71d
/* 80151F00 0014EFE0  C0 22 A7 68 */	lfs f1, "@1052"@sda21(r2)
/* 80151F04 0014EFE4  C0 42 A7 6C */	lfs f2, "@1053"@sda21(r2)
/* 80151F08 0014EFE8  FC 60 08 90 */	fmr f3, f1
/* 80151F0C 0014EFEC  48 00 2D 9D */	bl "load_param<f,f>__10auto_tweakFRffffP16xModelAssetParamUiPCc"
.L_80151F10:
/* 80151F10 0014EFF0  57 A0 06 3F */	clrlwi. r0, r29, 24
/* 80151F14 0014EFF4  41 82 00 34 */	beq .L_80151F48
/* 80151F18 0014EFF8  C0 02 A7 6C */	lfs f0, "@1053"@sda21(r2)
/* 80151F1C 0014EFFC  3C 60 80 27 */	lis r3, "@stringBase0"@ha
/* 80151F20 0014F000  38 C3 E9 F0 */	addi r6, r3, "@stringBase0"@l
/* 80151F24 0014F004  7F C4 F3 78 */	mr r4, r30
/* 80151F28 0014F008  D0 1C 01 FC */	stfs f0, 0x1fc(r28)
/* 80151F2C 0014F00C  7F E5 FB 78 */	mr r5, r31
/* 80151F30 0014F010  38 7C 01 FC */	addi r3, r28, 0x1fc
/* 80151F34 0014F014  38 C6 07 36 */	addi r6, r6, 0x736
/* 80151F38 0014F018  C0 22 A7 68 */	lfs f1, "@1052"@sda21(r2)
/* 80151F3C 0014F01C  C0 42 A7 6C */	lfs f2, "@1053"@sda21(r2)
/* 80151F40 0014F020  C0 62 A7 78 */	lfs f3, "@1284"@sda21(r2)
/* 80151F44 0014F024  48 00 2D 65 */	bl "load_param<f,f>__10auto_tweakFRffffP16xModelAssetParamUiPCc"
.L_80151F48:
/* 80151F48 0014F028  57 A0 06 3F */	clrlwi. r0, r29, 24
/* 80151F4C 0014F02C  41 82 00 34 */	beq .L_80151F80
/* 80151F50 0014F030  C0 02 A7 E0 */	lfs f0, "@1670"@sda21(r2)
/* 80151F54 0014F034  3C 60 80 27 */	lis r3, "@stringBase0"@ha
/* 80151F58 0014F038  38 C3 E9 F0 */	addi r6, r3, "@stringBase0"@l
/* 80151F5C 0014F03C  7F C4 F3 78 */	mr r4, r30
/* 80151F60 0014F040  D0 1C 02 00 */	stfs f0, 0x200(r28)
/* 80151F64 0014F044  7F E5 FB 78 */	mr r5, r31
/* 80151F68 0014F048  38 7C 02 00 */	addi r3, r28, 0x200
/* 80151F6C 0014F04C  38 C6 07 54 */	addi r6, r6, 0x754
/* 80151F70 0014F050  C0 22 A7 68 */	lfs f1, "@1052"@sda21(r2)
/* 80151F74 0014F054  C0 42 A7 6C */	lfs f2, "@1053"@sda21(r2)
/* 80151F78 0014F058  C0 62 A7 78 */	lfs f3, "@1284"@sda21(r2)
/* 80151F7C 0014F05C  48 00 2D 2D */	bl "load_param<f,f>__10auto_tweakFRffffP16xModelAssetParamUiPCc"
.L_80151F80:
/* 80151F80 0014F060  57 A0 06 3F */	clrlwi. r0, r29, 24
/* 80151F84 0014F064  41 82 00 34 */	beq .L_80151FB8
/* 80151F88 0014F068  C0 02 A7 8C */	lfs f0, "@1455"@sda21(r2)
/* 80151F8C 0014F06C  3C 60 80 27 */	lis r3, "@stringBase0"@ha
/* 80151F90 0014F070  38 C3 E9 F0 */	addi r6, r3, "@stringBase0"@l
/* 80151F94 0014F074  7F C4 F3 78 */	mr r4, r30
/* 80151F98 0014F078  D0 1C 02 04 */	stfs f0, 0x204(r28)
/* 80151F9C 0014F07C  7F E5 FB 78 */	mr r5, r31
/* 80151FA0 0014F080  38 7C 02 04 */	addi r3, r28, 0x204
/* 80151FA4 0014F084  38 C6 07 72 */	addi r6, r6, 0x772
/* 80151FA8 0014F088  C0 22 A7 68 */	lfs f1, "@1052"@sda21(r2)
/* 80151FAC 0014F08C  C0 42 A7 6C */	lfs f2, "@1053"@sda21(r2)
/* 80151FB0 0014F090  C0 62 A7 78 */	lfs f3, "@1284"@sda21(r2)
/* 80151FB4 0014F094  48 00 2C F5 */	bl "load_param<f,f>__10auto_tweakFRffffP16xModelAssetParamUiPCc"
.L_80151FB8:
/* 80151FB8 0014F098  57 A0 06 3F */	clrlwi. r0, r29, 24
/* 80151FBC 0014F09C  41 82 00 34 */	beq .L_80151FF0
/* 80151FC0 0014F0A0  C0 02 A7 8C */	lfs f0, "@1455"@sda21(r2)
/* 80151FC4 0014F0A4  3C 60 80 27 */	lis r3, "@stringBase0"@ha
/* 80151FC8 0014F0A8  38 C3 E9 F0 */	addi r6, r3, "@stringBase0"@l
/* 80151FCC 0014F0AC  7F C4 F3 78 */	mr r4, r30
/* 80151FD0 0014F0B0  D0 1C 02 08 */	stfs f0, 0x208(r28)
/* 80151FD4 0014F0B4  7F E5 FB 78 */	mr r5, r31
/* 80151FD8 0014F0B8  38 7C 02 08 */	addi r3, r28, 0x208
/* 80151FDC 0014F0BC  38 C6 07 8A */	addi r6, r6, 0x78a
/* 80151FE0 0014F0C0  C0 22 A7 68 */	lfs f1, "@1052"@sda21(r2)
/* 80151FE4 0014F0C4  C0 42 A7 6C */	lfs f2, "@1053"@sda21(r2)
/* 80151FE8 0014F0C8  C0 62 A7 78 */	lfs f3, "@1284"@sda21(r2)
/* 80151FEC 0014F0CC  48 00 2C BD */	bl "load_param<f,f>__10auto_tweakFRffffP16xModelAssetParamUiPCc"
.L_80151FF0:
/* 80151FF0 0014F0D0  57 A0 06 3F */	clrlwi. r0, r29, 24
/* 80151FF4 0014F0D4  41 82 00 38 */	beq .L_8015202C
/* 80151FF8 0014F0D8  3C 80 80 33 */	lis r4, "sound_asset_ids__27@unnamed@zNPCTypePrawn_cpp@"@ha
/* 80151FFC 0014F0DC  3C 60 80 27 */	lis r3, "sound_assets__27@unnamed@zNPCTypePrawn_cpp@"@ha
/* 80152000 0014F0E0  38 84 95 30 */	addi r4, r4, "sound_asset_ids__27@unnamed@zNPCTypePrawn_cpp@"@l
/* 80152004 0014F0E4  80 84 00 00 */	lwz r4, 0x0(r4)
/* 80152008 0014F0E8  38 03 E8 38 */	addi r0, r3, "sound_assets__27@unnamed@zNPCTypePrawn_cpp@"@l
/* 8015200C 0014F0EC  90 9C 01 AC */	stw r4, 0x1ac(r28)
/* 80152010 0014F0F0  80 7C 01 AC */	lwz r3, 0x1ac(r28)
/* 80152014 0014F0F4  54 63 20 36 */	slwi r3, r3, 4
/* 80152018 0014F0F8  7C 60 1A 14 */	add r3, r0, r3
/* 8015201C 0014F0FC  80 63 00 04 */	lwz r3, 0x4(r3)
/* 80152020 0014F100  4B EF A1 F5 */	bl xStrHash__FPCc
/* 80152024 0014F104  3C 80 80 33 */	lis r4, "sound_data__27@unnamed@zNPCTypePrawn_cpp@"@ha
/* 80152028 0014F108  90 64 95 A0 */	stw r3, "sound_data__27@unnamed@zNPCTypePrawn_cpp@"@l(r4)
.L_8015202C:
/* 8015202C 0014F10C  57 A0 06 3F */	clrlwi. r0, r29, 24
/* 80152030 0014F110  41 82 00 3C */	beq .L_8015206C
/* 80152034 0014F114  3C 80 80 33 */	lis r4, "sound_asset_ids__27@unnamed@zNPCTypePrawn_cpp@"@ha
/* 80152038 0014F118  3C 60 80 27 */	lis r3, "sound_assets__27@unnamed@zNPCTypePrawn_cpp@"@ha
/* 8015203C 0014F11C  38 84 95 30 */	addi r4, r4, "sound_asset_ids__27@unnamed@zNPCTypePrawn_cpp@"@l
/* 80152040 0014F120  80 84 00 18 */	lwz r4, 0x18(r4)
/* 80152044 0014F124  38 03 E8 38 */	addi r0, r3, "sound_assets__27@unnamed@zNPCTypePrawn_cpp@"@l
/* 80152048 0014F128  90 9C 01 C4 */	stw r4, 0x1c4(r28)
/* 8015204C 0014F12C  80 7C 01 C4 */	lwz r3, 0x1c4(r28)
/* 80152050 0014F130  54 63 20 36 */	slwi r3, r3, 4
/* 80152054 0014F134  7C 60 1A 14 */	add r3, r0, r3
/* 80152058 0014F138  80 63 00 04 */	lwz r3, 0x4(r3)
/* 8015205C 0014F13C  4B EF A1 B9 */	bl xStrHash__FPCc
/* 80152060 0014F140  3C 80 80 33 */	lis r4, "sound_data__27@unnamed@zNPCTypePrawn_cpp@"@ha
/* 80152064 0014F144  38 84 95 A0 */	addi r4, r4, "sound_data__27@unnamed@zNPCTypePrawn_cpp@"@l
/* 80152068 0014F148  90 64 00 10 */	stw r3, 0x10(r4)
.L_8015206C:
/* 8015206C 0014F14C  57 A0 06 3F */	clrlwi. r0, r29, 24
/* 80152070 0014F150  41 82 00 3C */	beq .L_801520AC
/* 80152074 0014F154  3C 80 80 33 */	lis r4, "sound_asset_ids__27@unnamed@zNPCTypePrawn_cpp@"@ha
/* 80152078 0014F158  3C 60 80 27 */	lis r3, "sound_assets__27@unnamed@zNPCTypePrawn_cpp@"@ha
/* 8015207C 0014F15C  38 84 95 30 */	addi r4, r4, "sound_asset_ids__27@unnamed@zNPCTypePrawn_cpp@"@l
/* 80152080 0014F160  80 84 00 30 */	lwz r4, 0x30(r4)
/* 80152084 0014F164  38 03 E8 38 */	addi r0, r3, "sound_assets__27@unnamed@zNPCTypePrawn_cpp@"@l
/* 80152088 0014F168  90 9C 01 DC */	stw r4, 0x1dc(r28)
/* 8015208C 0014F16C  80 7C 01 DC */	lwz r3, 0x1dc(r28)
/* 80152090 0014F170  54 63 20 36 */	slwi r3, r3, 4
/* 80152094 0014F174  7C 60 1A 14 */	add r3, r0, r3
/* 80152098 0014F178  80 63 00 04 */	lwz r3, 0x4(r3)
/* 8015209C 0014F17C  4B EF A1 79 */	bl xStrHash__FPCc
/* 801520A0 0014F180  3C 80 80 33 */	lis r4, "sound_data__27@unnamed@zNPCTypePrawn_cpp@"@ha
/* 801520A4 0014F184  38 84 95 A0 */	addi r4, r4, "sound_data__27@unnamed@zNPCTypePrawn_cpp@"@l
/* 801520A8 0014F188  90 64 00 20 */	stw r3, 0x20(r4)
.L_801520AC:
/* 801520AC 0014F18C  57 A0 06 3F */	clrlwi. r0, r29, 24
/* 801520B0 0014F190  41 82 00 3C */	beq .L_801520EC
/* 801520B4 0014F194  3C 80 80 33 */	lis r4, "sound_asset_ids__27@unnamed@zNPCTypePrawn_cpp@"@ha
/* 801520B8 0014F198  3C 60 80 27 */	lis r3, "sound_assets__27@unnamed@zNPCTypePrawn_cpp@"@ha
/* 801520BC 0014F19C  38 84 95 30 */	addi r4, r4, "sound_asset_ids__27@unnamed@zNPCTypePrawn_cpp@"@l
/* 801520C0 0014F1A0  80 84 00 48 */	lwz r4, 0x48(r4)
/* 801520C4 0014F1A4  38 03 E8 38 */	addi r0, r3, "sound_assets__27@unnamed@zNPCTypePrawn_cpp@"@l
/* 801520C8 0014F1A8  90 9C 01 F4 */	stw r4, 0x1f4(r28)
/* 801520CC 0014F1AC  80 7C 01 F4 */	lwz r3, 0x1f4(r28)
/* 801520D0 0014F1B0  54 63 20 36 */	slwi r3, r3, 4
/* 801520D4 0014F1B4  7C 60 1A 14 */	add r3, r0, r3
/* 801520D8 0014F1B8  80 63 00 04 */	lwz r3, 0x4(r3)
/* 801520DC 0014F1BC  4B EF A1 39 */	bl xStrHash__FPCc
/* 801520E0 0014F1C0  3C 80 80 33 */	lis r4, "sound_data__27@unnamed@zNPCTypePrawn_cpp@"@ha
/* 801520E4 0014F1C4  38 84 95 A0 */	addi r4, r4, "sound_data__27@unnamed@zNPCTypePrawn_cpp@"@l
/* 801520E8 0014F1C8  90 64 00 30 */	stw r3, 0x30(r4)
.L_801520EC:
/* 801520EC 0014F1CC  80 01 00 24 */	lwz r0, 0x24(r1)
/* 801520F0 0014F1D0  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 801520F4 0014F1D4  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 801520F8 0014F1D8  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 801520FC 0014F1DC  83 81 00 10 */	lwz r28, 0x10(r1)
/* 80152100 0014F1E0  7C 08 03 A6 */	mtlr r0
/* 80152104 0014F1E4  38 21 00 20 */	addi r1, r1, 0x20
/* 80152108 0014F1E8  4E 80 00 20 */	blr
.endfn "register_tweaks__Q227@unnamed@zNPCTypePrawn_cpp@11tweak_groupFbP16xModelAssetParamUiPCc"

# zNPCPrawn::ParseLinks()
.fn ParseLinks__9zNPCPrawnFv, global
/* 8015210C 0014F1EC  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 80152110 0014F1F0  7C 08 02 A6 */	mflr r0
/* 80152114 0014F1F4  90 01 00 24 */	stw r0, 0x24(r1)
/* 80152118 0014F1F8  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 8015211C 0014F1FC  93 C1 00 18 */	stw r30, 0x18(r1)
/* 80152120 0014F200  93 A1 00 14 */	stw r29, 0x14(r1)
/* 80152124 0014F204  7C 7D 1B 78 */	mr r29, r3
/* 80152128 0014F208  4B F9 F2 6D */	bl ParseLinks__10zNPCCommonFv
/* 8015212C 0014F20C  88 1D 00 05 */	lbz r0, 0x5(r29)
/* 80152130 0014F210  83 FD 00 08 */	lwz r31, 0x8(r29)
/* 80152134 0014F214  54 00 28 34 */	slwi r0, r0, 5
/* 80152138 0014F218  7F DF 02 14 */	add r30, r31, r0
/* 8015213C 0014F21C  48 00 00 38 */	b .L_80152174
.L_80152140:
/* 80152140 0014F220  A0 1F 00 02 */	lhz r0, 0x2(r31)
/* 80152144 0014F224  28 00 01 33 */	cmplwi r0, 0x133
/* 80152148 0014F228  40 82 00 28 */	bne .L_80152170
/* 8015214C 0014F22C  80 7F 00 04 */	lwz r3, 0x4(r31)
/* 80152150 0014F230  4B F6 28 ED */	bl zSceneFindObject__FUi
/* 80152154 0014F234  C0 1F 00 08 */	lfs f0, 0x8(r31)
/* 80152158 0014F238  7C 64 1B 78 */	mr r4, r3
/* 8015215C 0014F23C  7F A3 EB 78 */	mr r3, r29
/* 80152160 0014F240  FC 00 00 1E */	fctiwz f0, f0
/* 80152164 0014F244  D8 01 00 08 */	stfd f0, 0x8(r1)
/* 80152168 0014F248  80 A1 00 0C */	lwz r5, 0xc(r1)
/* 8015216C 0014F24C  48 00 04 95 */	bl add_child__9zNPCPrawnFR5xBasei
.L_80152170:
/* 80152170 0014F250  3B FF 00 20 */	addi r31, r31, 0x20
.L_80152174:
/* 80152174 0014F254  7C 1F F0 40 */	cmplw r31, r30
/* 80152178 0014F258  40 82 FF C8 */	bne .L_80152140
/* 8015217C 0014F25C  80 01 00 24 */	lwz r0, 0x24(r1)
/* 80152180 0014F260  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 80152184 0014F264  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 80152188 0014F268  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 8015218C 0014F26C  7C 08 03 A6 */	mtlr r0
/* 80152190 0014F270  38 21 00 20 */	addi r1, r1, 0x20
/* 80152194 0014F274  4E 80 00 20 */	blr
.endfn ParseLinks__9zNPCPrawnFv

# zNPCPrawn::SelfSetup()
.fn SelfSetup__9zNPCPrawnFv, global
/* 80152198 0014F278  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8015219C 0014F27C  7C 08 02 A6 */	mflr r0
/* 801521A0 0014F280  90 01 00 14 */	stw r0, 0x14(r1)
/* 801521A4 0014F284  93 E1 00 0C */	stw r31, 0xc(r1)
/* 801521A8 0014F288  7C 7F 1B 78 */	mr r31, r3
/* 801521AC 0014F28C  4B FB AD 29 */	bl xBehaveMgr_GetSelf__Fv
/* 801521B0 0014F290  7F E4 FB 78 */	mr r4, r31
/* 801521B4 0014F294  38 A0 00 00 */	li r5, 0x0
/* 801521B8 0014F298  4B FB AE 85 */	bl Subscribe__10xBehaveMgrFP5xBasei
/* 801521BC 0014F29C  90 7F 02 28 */	stw r3, 0x228(r31)
/* 801521C0 0014F2A0  83 FF 02 28 */	lwz r31, 0x228(r31)
/* 801521C4 0014F2A4  7F E3 FB 78 */	mr r3, r31
/* 801521C8 0014F2A8  4B FB AF C1 */	bl BrainBegin__7xPsycheFv
/* 801521CC 0014F2AC  3C 80 4E 47 */	lis r4, 0x4e47
/* 801521D0 0014F2B0  7F E3 FB 78 */	mr r3, r31
/* 801521D4 0014F2B4  38 84 4D 38 */	addi r4, r4, 0x4d38
/* 801521D8 0014F2B8  38 A0 00 00 */	li r5, 0x0
/* 801521DC 0014F2BC  4B FB B0 65 */	bl AddGoal__7xPsycheFiPv
/* 801521E0 0014F2C0  3C 80 4E 47 */	lis r4, 0x4e47
/* 801521E4 0014F2C4  7F E3 FB 78 */	mr r3, r31
/* 801521E8 0014F2C8  38 84 4D 39 */	addi r4, r4, 0x4d39
/* 801521EC 0014F2CC  38 A0 00 00 */	li r5, 0x0
/* 801521F0 0014F2D0  4B FB B0 51 */	bl AddGoal__7xPsycheFiPv
/* 801521F4 0014F2D4  3C 80 4E 47 */	lis r4, 0x4e47
/* 801521F8 0014F2D8  7F E3 FB 78 */	mr r3, r31
/* 801521FC 0014F2DC  38 84 4D 3A */	addi r4, r4, 0x4d3a
/* 80152200 0014F2E0  38 A0 00 00 */	li r5, 0x0
/* 80152204 0014F2E4  4B FB B0 3D */	bl AddGoal__7xPsycheFiPv
/* 80152208 0014F2E8  3C 80 4E 47 */	lis r4, 0x4e47
/* 8015220C 0014F2EC  7F E3 FB 78 */	mr r3, r31
/* 80152210 0014F2F0  38 84 4D 3B */	addi r4, r4, 0x4d3b
/* 80152214 0014F2F4  38 A0 00 00 */	li r5, 0x0
/* 80152218 0014F2F8  4B FB B0 29 */	bl AddGoal__7xPsycheFiPv
/* 8015221C 0014F2FC  3C 80 4E 47 */	lis r4, 0x4e47
/* 80152220 0014F300  7F E3 FB 78 */	mr r3, r31
/* 80152224 0014F304  38 84 4D 3C */	addi r4, r4, 0x4d3c
/* 80152228 0014F308  38 A0 00 00 */	li r5, 0x0
/* 8015222C 0014F30C  4B FB B0 15 */	bl AddGoal__7xPsycheFiPv
/* 80152230 0014F310  3C 80 4E 47 */	lis r4, 0x4e47
/* 80152234 0014F314  7F E3 FB 78 */	mr r3, r31
/* 80152238 0014F318  38 84 4E 37 */	addi r4, r4, 0x4e37
/* 8015223C 0014F31C  38 A0 00 00 */	li r5, 0x0
/* 80152240 0014F320  4B FB B0 01 */	bl AddGoal__7xPsycheFiPv
/* 80152244 0014F324  7F E3 FB 78 */	mr r3, r31
/* 80152248 0014F328  4B FB AF C1 */	bl BrainEnd__7xPsycheFv
/* 8015224C 0014F32C  3C 80 4E 47 */	lis r4, 0x4e47
/* 80152250 0014F330  7F E3 FB 78 */	mr r3, r31
/* 80152254 0014F334  38 84 4D 38 */	addi r4, r4, 0x4d38
/* 80152258 0014F338  4B FB 07 25 */	bl SetSafety__7xPsycheFi
/* 8015225C 0014F33C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80152260 0014F340  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80152264 0014F344  7C 08 03 A6 */	mtlr r0
/* 80152268 0014F348  38 21 00 10 */	addi r1, r1, 0x10
/* 8015226C 0014F34C  4E 80 00 20 */	blr
.endfn SelfSetup__9zNPCPrawnFv

# zNPCPrawn::Damage(en_NPC_DAMAGE_TYPE, xBase*, const xVec3*)
.fn Damage__9zNPCPrawnF18en_NPC_DAMAGE_TYPEP5xBasePC5xVec3, global
/* 80152270 0014F350  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80152274 0014F354  7C 08 02 A6 */	mflr r0
/* 80152278 0014F358  90 01 00 14 */	stw r0, 0x14(r1)
/* 8015227C 0014F35C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80152280 0014F360  7C 9F 23 78 */	mr r31, r4
/* 80152284 0014F364  93 C1 00 08 */	stw r30, 0x8(r1)
/* 80152288 0014F368  7C 7E 1B 78 */	mr r30, r3
/* 8015228C 0014F36C  80 63 02 28 */	lwz r3, 0x228(r3)
/* 80152290 0014F370  4B FB B3 35 */	bl GIDOfActive__7xPsycheCFv
/* 80152294 0014F374  2C 1F 00 0D */	cmpwi r31, 0xd
/* 80152298 0014F378  40 80 00 2C */	bge .L_801522C4
/* 8015229C 0014F37C  2C 1F 00 0B */	cmpwi r31, 0xb
/* 801522A0 0014F380  40 80 00 08 */	bge .L_801522A8
/* 801522A4 0014F384  48 00 00 20 */	b .L_801522C4
.L_801522A8:
/* 801522A8 0014F388  3C 03 B1 B9 */	addis r0, r3, 0xb1b9
/* 801522AC 0014F38C  28 00 4D 3A */	cmplwi r0, 0x4d3a
/* 801522B0 0014F390  40 82 00 14 */	bne .L_801522C4
/* 801522B4 0014F394  80 9E 02 B8 */	lwz r4, 0x2b8(r30)
/* 801522B8 0014F398  7F C3 F3 78 */	mr r3, r30
/* 801522BC 0014F39C  38 84 FF FF */	addi r4, r4, -0x1
/* 801522C0 0014F3A0  48 00 15 05 */	bl set_life__9zNPCPrawnFi
.L_801522C4:
/* 801522C4 0014F3A4  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801522C8 0014F3A8  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 801522CC 0014F3AC  83 C1 00 08 */	lwz r30, 0x8(r1)
/* 801522D0 0014F3B0  7C 08 03 A6 */	mtlr r0
/* 801522D4 0014F3B4  38 21 00 10 */	addi r1, r1, 0x10
/* 801522D8 0014F3B8  4E 80 00 20 */	blr
.endfn Damage__9zNPCPrawnF18en_NPC_DAMAGE_TYPEP5xBasePC5xVec3

# zNPCPrawn::DuploNotice(en_SM_NOTICES, void*)
.fn DuploNotice__9zNPCPrawnF13en_SM_NOTICESPv, global
/* 801522DC 0014F3BC  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 801522E0 0014F3C0  7C 08 02 A6 */	mflr r0
/* 801522E4 0014F3C4  90 01 00 24 */	stw r0, 0x24(r1)
/* 801522E8 0014F3C8  BF 61 00 0C */	stmw r27, 0xc(r1)
/* 801522EC 0014F3CC  7C 7B 1B 78 */	mr r27, r3
/* 801522F0 0014F3D0  7C 9C 23 78 */	mr r28, r4
/* 801522F4 0014F3D4  7C BD 2B 78 */	mr r29, r5
/* 801522F8 0014F3D8  3B C0 00 00 */	li r30, 0x0
/* 801522FC 0014F3DC  7F 7F DB 78 */	mr r31, r27
.L_80152300:
/* 80152300 0014F3E0  80 7F 02 D0 */	lwz r3, 0x2d0(r31)
/* 80152304 0014F3E4  28 03 00 00 */	cmplwi r3, 0x0
/* 80152308 0014F3E8  41 82 00 34 */	beq .L_8015233C
/* 8015230C 0014F3EC  7F 84 E3 78 */	mr r4, r28
/* 80152310 0014F3F0  7F A5 EB 78 */	mr r5, r29
/* 80152314 0014F3F4  4B FD 8F C5 */	bl Receivable__11zNPCSpawnerCF13en_SM_NOTICESPv
/* 80152318 0014F3F8  54 60 06 3F */	clrlwi. r0, r3, 24
/* 8015231C 0014F3FC  41 82 00 20 */	beq .L_8015233C
/* 80152320 0014F400  57 C0 10 3A */	slwi r0, r30, 2
/* 80152324 0014F404  7F 84 E3 78 */	mr r4, r28
/* 80152328 0014F408  7C 7B 02 14 */	add r3, r27, r0
/* 8015232C 0014F40C  7F A5 EB 78 */	mr r5, r29
/* 80152330 0014F410  80 63 02 D0 */	lwz r3, 0x2d0(r3)
/* 80152334 0014F414  4B FD 8D 89 */	bl Notify__11zNPCSpawnerF13en_SM_NOTICESPv
/* 80152338 0014F418  48 00 00 14 */	b .L_8015234C
.L_8015233C:
/* 8015233C 0014F41C  3B DE 00 01 */	addi r30, r30, 0x1
/* 80152340 0014F420  3B FF 00 04 */	addi r31, r31, 0x4
/* 80152344 0014F424  2C 1E 00 03 */	cmpwi r30, 0x3
/* 80152348 0014F428  41 80 FF B8 */	blt .L_80152300
.L_8015234C:
/* 8015234C 0014F42C  BB 61 00 0C */	lmw r27, 0xc(r1)
/* 80152350 0014F430  80 01 00 24 */	lwz r0, 0x24(r1)
/* 80152354 0014F434  7C 08 03 A6 */	mtlr r0
/* 80152358 0014F438  38 21 00 20 */	addi r1, r1, 0x20
/* 8015235C 0014F43C  4E 80 00 20 */	blr
.endfn DuploNotice__9zNPCPrawnF13en_SM_NOTICESPv

# zNPCPrawn::AnimPick(int, en_NPC_GOAL_SPOT, xGoal*)
.fn AnimPick__9zNPCPrawnFi16en_NPC_GOAL_SPOTP5xGoal, global
/* 80152360 0014F440  3C A0 4E 47 */	lis r5, 0x4e47
/* 80152364 0014F444  38 60 00 00 */	li r3, 0x0
/* 80152368 0014F448  38 05 4D 3A */	addi r0, r5, 0x4d3a
/* 8015236C 0014F44C  7C 04 00 00 */	cmpw r4, r0
/* 80152370 0014F450  41 82 00 30 */	beq .L_801523A0
/* 80152374 0014F454  40 80 00 18 */	bge .L_8015238C
/* 80152378 0014F458  38 05 4D 38 */	addi r0, r5, 0x4d38
/* 8015237C 0014F45C  7C 04 00 00 */	cmpw r4, r0
/* 80152380 0014F460  41 82 00 20 */	beq .L_801523A0
/* 80152384 0014F464  40 80 00 24 */	bge .L_801523A8
/* 80152388 0014F468  48 00 00 38 */	b .L_801523C0
.L_8015238C:
/* 8015238C 0014F46C  38 05 4D 3C */	addi r0, r5, 0x4d3c
/* 80152390 0014F470  7C 04 00 00 */	cmpw r4, r0
/* 80152394 0014F474  41 82 00 24 */	beq .L_801523B8
/* 80152398 0014F478  40 80 00 28 */	bge .L_801523C0
/* 8015239C 0014F47C  48 00 00 14 */	b .L_801523B0
.L_801523A0:
/* 801523A0 0014F480  38 00 00 01 */	li r0, 0x1
/* 801523A4 0014F484  48 00 00 20 */	b .L_801523C4
.L_801523A8:
/* 801523A8 0014F488  38 00 00 0C */	li r0, 0xc
/* 801523AC 0014F48C  48 00 00 18 */	b .L_801523C4
.L_801523B0:
/* 801523B0 0014F490  38 00 00 09 */	li r0, 0x9
/* 801523B4 0014F494  48 00 00 10 */	b .L_801523C4
.L_801523B8:
/* 801523B8 0014F498  38 00 FF FF */	li r0, -0x1
/* 801523BC 0014F49C  48 00 00 08 */	b .L_801523C4
.L_801523C0:
/* 801523C0 0014F4A0  38 00 00 01 */	li r0, 0x1
.L_801523C4:
/* 801523C4 0014F4A4  2C 00 FF FF */	cmpwi r0, -0x1
/* 801523C8 0014F4A8  4C 81 00 20 */	blelr
/* 801523CC 0014F4AC  3C 60 80 2A */	lis r3, g_hash_subbanim@ha
/* 801523D0 0014F4B0  54 00 10 3A */	slwi r0, r0, 2
/* 801523D4 0014F4B4  38 63 90 E0 */	addi r3, r3, g_hash_subbanim@l
/* 801523D8 0014F4B8  7C 63 00 2E */	lwzx r3, r3, r0
/* 801523DC 0014F4BC  4E 80 00 20 */	blr
.endfn AnimPick__9zNPCPrawnFi16en_NPC_GOAL_SPOTP5xGoal

# zNPCPrawn::Render()
.fn Render__9zNPCPrawnFv, global
/* 801523E0 0014F4C0  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801523E4 0014F4C4  7C 08 02 A6 */	mflr r0
/* 801523E8 0014F4C8  90 01 00 14 */	stw r0, 0x14(r1)
/* 801523EC 0014F4CC  93 E1 00 0C */	stw r31, 0xc(r1)
/* 801523F0 0014F4D0  7C 7F 1B 78 */	mr r31, r3
/* 801523F4 0014F4D4  4B FA 23 49 */	bl Render__9xNPCBasicFv
/* 801523F8 0014F4D8  38 00 00 00 */	li r0, 0x0
/* 801523FC 0014F4DC  38 7F 03 28 */	addi r3, r31, 0x328
/* 80152400 0014F4E0  98 1F 00 1D */	stb r0, 0x1d(r31)
/* 80152404 0014F4E4  4B FF D8 2D */	bl render__9aqua_beamFv
/* 80152408 0014F4E8  7F E3 FB 78 */	mr r3, r31
/* 8015240C 0014F4EC  48 00 26 E1 */	bl render_debug__9zNPCPrawnFv
/* 80152410 0014F4F0  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80152414 0014F4F4  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80152418 0014F4F8  7C 08 03 A6 */	mtlr r0
/* 8015241C 0014F4FC  38 21 00 10 */	addi r1, r1, 0x10
/* 80152420 0014F500  4E 80 00 20 */	blr
.endfn Render__9zNPCPrawnFv

# zNPCPrawn::update_round()
.fn update_round__9zNPCPrawnFv, global
/* 80152424 0014F504  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 80152428 0014F508  7C 08 02 A6 */	mflr r0
/* 8015242C 0014F50C  90 01 00 24 */	stw r0, 0x24(r1)
/* 80152430 0014F510  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 80152434 0014F514  93 C1 00 18 */	stw r30, 0x18(r1)
/* 80152438 0014F518  93 A1 00 14 */	stw r29, 0x14(r1)
/* 8015243C 0014F51C  7C 7D 1B 78 */	mr r29, r3
/* 80152440 0014F520  80 63 02 B8 */	lwz r3, 0x2b8(r3)
/* 80152444 0014F524  2C 03 00 00 */	cmpwi r3, 0x0
/* 80152448 0014F528  40 82 00 10 */	bne .L_80152458
/* 8015244C 0014F52C  38 00 00 03 */	li r0, 0x3
/* 80152450 0014F530  90 1D 02 BC */	stw r0, 0x2bc(r29)
/* 80152454 0014F534  48 00 00 20 */	b .L_80152474
.L_80152458:
/* 80152458 0014F538  38 03 FF FF */	addi r0, r3, -0x1
/* 8015245C 0014F53C  80 7D 01 D8 */	lwz r3, 0x1d8(r29)
/* 80152460 0014F540  1C 80 00 03 */	mulli r4, r0, 0x3
/* 80152464 0014F544  80 03 00 2C */	lwz r0, 0x2c(r3)
/* 80152468 0014F548  7C 04 03 D6 */	divw r0, r4, r0
/* 8015246C 0014F54C  20 00 00 02 */	subfic r0, r0, 0x2
/* 80152470 0014F550  90 1D 02 BC */	stw r0, 0x2bc(r29)
.L_80152474:
/* 80152474 0014F554  3B C0 00 00 */	li r30, 0x0
/* 80152478 0014F558  7F BF EB 78 */	mr r31, r29
.L_8015247C:
/* 8015247C 0014F55C  80 7F 02 D0 */	lwz r3, 0x2d0(r31)
/* 80152480 0014F560  28 03 00 00 */	cmplwi r3, 0x0
/* 80152484 0014F564  41 82 00 20 */	beq .L_801524A4
/* 80152488 0014F568  80 1D 02 BC */	lwz r0, 0x2bc(r29)
/* 8015248C 0014F56C  38 80 00 04 */	li r4, 0x4
/* 80152490 0014F570  7C 1E 00 00 */	cmpw r30, r0
/* 80152494 0014F574  40 81 00 08 */	ble .L_8015249C
/* 80152498 0014F578  38 80 00 03 */	li r4, 0x3
.L_8015249C:
/* 8015249C 0014F57C  38 A0 00 00 */	li r5, 0x0
/* 801524A0 0014F580  4B FD 8C 1D */	bl Notify__11zNPCSpawnerF13en_SM_NOTICESPv
.L_801524A4:
/* 801524A4 0014F584  3B DE 00 01 */	addi r30, r30, 0x1
/* 801524A8 0014F588  3B FF 00 04 */	addi r31, r31, 0x4
/* 801524AC 0014F58C  2C 1E 00 03 */	cmpwi r30, 0x3
/* 801524B0 0014F590  41 80 FF CC */	blt .L_8015247C
/* 801524B4 0014F594  80 01 00 24 */	lwz r0, 0x24(r1)
/* 801524B8 0014F598  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 801524BC 0014F59C  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 801524C0 0014F5A0  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 801524C4 0014F5A4  7C 08 03 A6 */	mtlr r0
/* 801524C8 0014F5A8  38 21 00 20 */	addi r1, r1, 0x20
/* 801524CC 0014F5AC  4E 80 00 20 */	blr
.endfn update_round__9zNPCPrawnFv

# zNPCPrawn::decompose()
.fn decompose__9zNPCPrawnFv, global
/* 801524D0 0014F5B0  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801524D4 0014F5B4  7C 08 02 A6 */	mflr r0
/* 801524D8 0014F5B8  90 01 00 14 */	stw r0, 0x14(r1)
/* 801524DC 0014F5BC  93 E1 00 0C */	stw r31, 0xc(r1)
/* 801524E0 0014F5C0  7C 7F 1B 78 */	mr r31, r3
/* 801524E4 0014F5C4  93 C1 00 08 */	stw r30, 0x8(r1)
/* 801524E8 0014F5C8  48 00 0D 75 */	bl vanish__9zNPCPrawnFv
/* 801524EC 0014F5CC  88 1F 02 F5 */	lbz r0, 0x2f5(r31)
/* 801524F0 0014F5D0  28 00 00 00 */	cmplwi r0, 0x0
/* 801524F4 0014F5D4  41 82 00 78 */	beq .L_8015256C
/* 801524F8 0014F5D8  38 00 00 00 */	li r0, 0x0
/* 801524FC 0014F5DC  7F E3 FB 78 */	mr r3, r31
/* 80152500 0014F5E0  98 1F 02 F5 */	stb r0, 0x2f5(r31)
/* 80152504 0014F5E4  38 80 00 00 */	li r4, 0x0
/* 80152508 0014F5E8  38 A0 00 01 */	li r5, 0x1
/* 8015250C 0014F5EC  38 C0 00 01 */	li r6, 0x1
/* 80152510 0014F5F0  48 00 0C 95 */	bl set_floor_state__9zNPCPrawnFQ29zNPCPrawn16floor_state_enumbb
/* 80152514 0014F5F4  7F E3 FB 78 */	mr r3, r31
/* 80152518 0014F5F8  48 00 16 C1 */	bl hide_model__9zNPCPrawnFv
/* 8015251C 0014F5FC  3B C0 00 00 */	li r30, 0x0
.L_80152520:
/* 80152520 0014F600  80 7F 02 D0 */	lwz r3, 0x2d0(r31)
/* 80152524 0014F604  28 03 00 00 */	cmplwi r3, 0x0
/* 80152528 0014F608  41 82 00 20 */	beq .L_80152548
/* 8015252C 0014F60C  38 80 00 06 */	li r4, 0x6
/* 80152530 0014F610  38 A0 00 00 */	li r5, 0x0
/* 80152534 0014F614  4B FD 8B 89 */	bl Notify__11zNPCSpawnerF13en_SM_NOTICESPv
/* 80152538 0014F618  80 7F 02 D0 */	lwz r3, 0x2d0(r31)
/* 8015253C 0014F61C  38 80 00 07 */	li r4, 0x7
/* 80152540 0014F620  38 A0 00 00 */	li r5, 0x0
/* 80152544 0014F624  4B FD 8B 79 */	bl Notify__11zNPCSpawnerF13en_SM_NOTICESPv
.L_80152548:
/* 80152548 0014F628  3B DE 00 01 */	addi r30, r30, 0x1
/* 8015254C 0014F62C  3B FF 00 04 */	addi r31, r31, 0x4
/* 80152550 0014F630  2C 1E 00 03 */	cmpwi r30, 0x3
/* 80152554 0014F634  41 80 FF CC */	blt .L_80152520
/* 80152558 0014F638  38 60 00 08 */	li r3, 0x8
/* 8015255C 0014F63C  4B EF FB B5 */	bl zCameraEnableTracking__F17camera_owner_enum
/* 80152560 0014F640  3C 60 80 2A */	lis r3, "boss_cam__27@unnamed@zNPCTypePrawn_cpp@"@ha
/* 80152564 0014F644  38 63 A2 40 */	addi r3, r3, "boss_cam__27@unnamed@zNPCTypePrawn_cpp@"@l
/* 80152568 0014F648  4B EB B9 91 */	bl stop__13xBinaryCameraFv
.L_8015256C:
/* 8015256C 0014F64C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80152570 0014F650  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80152574 0014F654  83 C1 00 08 */	lwz r30, 0x8(r1)
/* 80152578 0014F658  7C 08 03 A6 */	mtlr r0
/* 8015257C 0014F65C  38 21 00 10 */	addi r1, r1, 0x10
/* 80152580 0014F660  4E 80 00 20 */	blr
.endfn decompose__9zNPCPrawnFv

# zNPCPrawn::make_spawner(int)
.fn make_spawner__9zNPCPrawnFi, global
/* 80152584 0014F664  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80152588 0014F668  7C 08 02 A6 */	mflr r0
/* 8015258C 0014F66C  90 01 00 14 */	stw r0, 0x14(r1)
/* 80152590 0014F670  54 80 10 3A */	slwi r0, r4, 2
/* 80152594 0014F674  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80152598 0014F678  93 C1 00 08 */	stw r30, 0x8(r1)
/* 8015259C 0014F67C  7C 7E 1B 78 */	mr r30, r3
/* 801525A0 0014F680  7F FE 02 14 */	add r31, r30, r0
/* 801525A4 0014F684  80 7F 02 D0 */	lwz r3, 0x2d0(r31)
/* 801525A8 0014F688  28 03 00 00 */	cmplwi r3, 0x0
/* 801525AC 0014F68C  41 82 00 08 */	beq .L_801525B4
/* 801525B0 0014F690  48 00 00 38 */	b .L_801525E8
.L_801525B4:
/* 801525B4 0014F694  4B FD 82 75 */	bl zNPCSpawner_GetInstance__Fv
/* 801525B8 0014F698  90 7F 02 D0 */	stw r3, 0x2d0(r31)
/* 801525BC 0014F69C  7F C4 F3 78 */	mr r4, r30
/* 801525C0 0014F6A0  80 7F 02 D0 */	lwz r3, 0x2d0(r31)
/* 801525C4 0014F6A4  4B FD 82 AD */	bl Subscribe__11zNPCSpawnerFP10zNPCCommon
/* 801525C8 0014F6A8  3C 80 80 33 */	lis r4, "tweak__27@unnamed@zNPCTypePrawn_cpp@"@ha
/* 801525CC 0014F6AC  80 7F 02 D0 */	lwz r3, 0x2d0(r31)
/* 801525D0 0014F6B0  38 A4 95 E0 */	addi r5, r4, "tweak__27@unnamed@zNPCTypePrawn_cpp@"@l
/* 801525D4 0014F6B4  38 80 00 00 */	li r4, 0x0
/* 801525D8 0014F6B8  C0 25 00 04 */	lfs f1, 0x4(r5)
/* 801525DC 0014F6BC  38 A0 FF FF */	li r5, -0x1
/* 801525E0 0014F6C0  4B FD 82 F5 */	bl SetWaveMode__11zNPCSpawnerF15en_SM_WAVE_MODEfi
/* 801525E4 0014F6C4  80 7F 02 D0 */	lwz r3, 0x2d0(r31)
.L_801525E8:
/* 801525E8 0014F6C8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801525EC 0014F6CC  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 801525F0 0014F6D0  83 C1 00 08 */	lwz r30, 0x8(r1)
/* 801525F4 0014F6D4  7C 08 03 A6 */	mtlr r0
/* 801525F8 0014F6D8  38 21 00 10 */	addi r1, r1, 0x10
/* 801525FC 0014F6DC  4E 80 00 20 */	blr
.endfn make_spawner__9zNPCPrawnFi

# zNPCPrawn::add_child(xBase&, int)
.fn add_child__9zNPCPrawnFR5xBasei, global
/* 80152600 0014F6E0  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 80152604 0014F6E4  7C 08 02 A6 */	mflr r0
/* 80152608 0014F6E8  90 01 00 24 */	stw r0, 0x24(r1)
/* 8015260C 0014F6EC  BF 61 00 0C */	stmw r27, 0xc(r1)
/* 80152610 0014F6F0  7C 9C 23 78 */	mr r28, r4
/* 80152614 0014F6F4  7C 7B 1B 78 */	mr r27, r3
/* 80152618 0014F6F8  7C BD 2B 78 */	mr r29, r5
/* 8015261C 0014F6FC  88 04 00 04 */	lbz r0, 0x4(r4)
/* 80152620 0014F700  2C 00 00 11 */	cmpwi r0, 0x11
/* 80152624 0014F704  41 82 00 48 */	beq .L_8015266C
/* 80152628 0014F708  40 80 00 10 */	bge .L_80152638
/* 8015262C 0014F70C  2C 00 00 0D */	cmpwi r0, 0xd
/* 80152630 0014F710  41 82 00 28 */	beq .L_80152658
/* 80152634 0014F714  48 00 00 78 */	b .L_801526AC
.L_80152638:
/* 80152638 0014F718  2C 00 00 2B */	cmpwi r0, 0x2b
/* 8015263C 0014F71C  41 82 00 08 */	beq .L_80152644
/* 80152640 0014F720  48 00 00 6C */	b .L_801526AC
.L_80152644:
/* 80152644 0014F724  7F A4 EB 78 */	mr r4, r29
/* 80152648 0014F728  4B FF FF 3D */	bl make_spawner__9zNPCPrawnFi
/* 8015264C 0014F72C  7F 84 E3 78 */	mr r4, r28
/* 80152650 0014F730  4B FD 82 D1 */	bl AddSpawnNPC__11zNPCSpawnerFP10zNPCCommon
/* 80152654 0014F734  48 00 00 58 */	b .L_801526AC
.L_80152658:
/* 80152658 0014F738  7F A4 EB 78 */	mr r4, r29
/* 8015265C 0014F73C  4B FF FF 29 */	bl make_spawner__9zNPCPrawnFi
/* 80152660 0014F740  7F 84 E3 78 */	mr r4, r28
/* 80152664 0014F744  4B FD 82 81 */	bl AddSpawnPoint__11zNPCSpawnerFP10zMovePoint
/* 80152668 0014F748  48 00 00 44 */	b .L_801526AC
.L_8015266C:
/* 8015266C 0014F74C  7F 83 E3 78 */	mr r3, r28
/* 80152670 0014F750  3B C0 00 00 */	li r30, 0x0
/* 80152674 0014F754  4B ED A8 09 */	bl xGroupGetCount__FP6xGroup
/* 80152678 0014F758  7C 7F 1B 78 */	mr r31, r3
/* 8015267C 0014F75C  48 00 00 28 */	b .L_801526A4
.L_80152680:
/* 80152680 0014F760  7F 83 E3 78 */	mr r3, r28
/* 80152684 0014F764  7F C4 F3 78 */	mr r4, r30
/* 80152688 0014F768  4B ED A8 01 */	bl xGroupGetItemPtr__FP6xGroupUi
/* 8015268C 0014F76C  7C 60 1B 78 */	mr r0, r3
/* 80152690 0014F770  7F 63 DB 78 */	mr r3, r27
/* 80152694 0014F774  7C 04 03 78 */	mr r4, r0
/* 80152698 0014F778  7F A5 EB 78 */	mr r5, r29
/* 8015269C 0014F77C  4B FF FF 65 */	bl add_child__9zNPCPrawnFR5xBasei
/* 801526A0 0014F780  3B DE 00 01 */	addi r30, r30, 0x1
.L_801526A4:
/* 801526A4 0014F784  7C 1E F8 40 */	cmplw r30, r31
/* 801526A8 0014F788  41 80 FF D8 */	blt .L_80152680
.L_801526AC:
/* 801526AC 0014F78C  BB 61 00 0C */	lmw r27, 0xc(r1)
/* 801526B0 0014F790  80 01 00 24 */	lwz r0, 0x24(r1)
/* 801526B4 0014F794  7C 08 03 A6 */	mtlr r0
/* 801526B8 0014F798  38 21 00 20 */	addi r1, r1, 0x20
/* 801526BC 0014F79C  4E 80 00 20 */	blr
.endfn add_child__9zNPCPrawnFR5xBasei

# @unnamed@zNPCTypePrawn_cpp@::set_yaw_matrix(xMat3x3&, float)
.fn "set_yaw_matrix__27@unnamed@zNPCTypePrawn_cpp@FR7xMat3x3f", local
/* 801526C0 0014F7A0  94 21 FF D0 */	stwu r1, -0x30(r1)
/* 801526C4 0014F7A4  7C 08 02 A6 */	mflr r0
/* 801526C8 0014F7A8  90 01 00 34 */	stw r0, 0x34(r1)
/* 801526CC 0014F7AC  DB E1 00 20 */	stfd f31, 0x20(r1)
/* 801526D0 0014F7B0  F3 E1 00 28 */	psq_st f31, 0x28(r1), 0, qr0
/* 801526D4 0014F7B4  DB C1 00 10 */	stfd f30, 0x10(r1)
/* 801526D8 0014F7B8  F3 C1 00 18 */	psq_st f30, 0x18(r1), 0, qr0
/* 801526DC 0014F7BC  93 E1 00 0C */	stw r31, 0xc(r1)
/* 801526E0 0014F7C0  7C 7F 1B 78 */	mr r31, r3
/* 801526E4 0014F7C4  FF C0 08 90 */	fmr f30, f1
/* 801526E8 0014F7C8  4B F7 27 65 */	bl isin__Ff
/* 801526EC 0014F7CC  FC 00 08 90 */	fmr f0, f1
/* 801526F0 0014F7D0  FC 20 F0 90 */	fmr f1, f30
/* 801526F4 0014F7D4  FF E0 00 90 */	fmr f31, f0
/* 801526F8 0014F7D8  4B F7 27 99 */	bl icos__Ff
/* 801526FC 0014F7DC  FC 60 F8 50 */	fneg f3, f31
/* 80152700 0014F7E0  C0 42 A7 6C */	lfs f2, "@1053"@sda21(r2)
/* 80152704 0014F7E4  FF C0 08 90 */	fmr f30, f1
/* 80152708 0014F7E8  7F E3 FB 78 */	mr r3, r31
/* 8015270C 0014F7EC  4B EB 89 E1 */	bl assign__5xVec3Ffff
/* 80152710 0014F7F0  C0 22 A7 6C */	lfs f1, "@1053"@sda21(r2)
/* 80152714 0014F7F4  38 7F 00 10 */	addi r3, r31, 0x10
/* 80152718 0014F7F8  C0 42 A7 68 */	lfs f2, "@1052"@sda21(r2)
/* 8015271C 0014F7FC  FC 60 08 90 */	fmr f3, f1
/* 80152720 0014F800  4B EB 89 CD */	bl assign__5xVec3Ffff
/* 80152724 0014F804  FC 20 F8 90 */	fmr f1, f31
/* 80152728 0014F808  C0 42 A7 6C */	lfs f2, "@1053"@sda21(r2)
/* 8015272C 0014F80C  FC 60 F0 90 */	fmr f3, f30
/* 80152730 0014F810  38 7F 00 20 */	addi r3, r31, 0x20
/* 80152734 0014F814  4B EB 89 B9 */	bl assign__5xVec3Ffff
/* 80152738 0014F818  E3 E1 00 28 */	psq_l f31, 0x28(r1), 0, qr0
/* 8015273C 0014F81C  CB E1 00 20 */	lfd f31, 0x20(r1)
/* 80152740 0014F820  E3 C1 00 18 */	psq_l f30, 0x18(r1), 0, qr0
/* 80152744 0014F824  CB C1 00 10 */	lfd f30, 0x10(r1)
/* 80152748 0014F828  80 01 00 34 */	lwz r0, 0x34(r1)
/* 8015274C 0014F82C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80152750 0014F830  7C 08 03 A6 */	mtlr r0
/* 80152754 0014F834  38 21 00 30 */	addi r1, r1, 0x30
/* 80152758 0014F838  4E 80 00 20 */	blr
.endfn "set_yaw_matrix__27@unnamed@zNPCTypePrawn_cpp@FR7xMat3x3f"

# zNPCPrawn::update_turn(float)
.fn update_turn__9zNPCPrawnFf, global
/* 8015275C 0014F83C  94 21 FF 90 */	stwu r1, -0x70(r1)
/* 80152760 0014F840  7C 08 02 A6 */	mflr r0
/* 80152764 0014F844  90 01 00 74 */	stw r0, 0x74(r1)
/* 80152768 0014F848  DB E1 00 60 */	stfd f31, 0x60(r1)
/* 8015276C 0014F84C  F3 E1 00 68 */	psq_st f31, 0x68(r1), 0, qr0
/* 80152770 0014F850  DB C1 00 50 */	stfd f30, 0x50(r1)
/* 80152774 0014F854  F3 C1 00 58 */	psq_st f30, 0x58(r1), 0, qr0
/* 80152778 0014F858  DB A1 00 40 */	stfd f29, 0x40(r1)
/* 8015277C 0014F85C  F3 A1 00 48 */	psq_st f29, 0x48(r1), 0, qr0
/* 80152780 0014F860  DB 81 00 30 */	stfd f28, 0x30(r1)
/* 80152784 0014F864  F3 81 00 38 */	psq_st f28, 0x38(r1), 0, qr0
/* 80152788 0014F868  DB 61 00 20 */	stfd f27, 0x20(r1)
/* 8015278C 0014F86C  F3 61 00 28 */	psq_st f27, 0x28(r1), 0, qr0
/* 80152790 0014F870  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 80152794 0014F874  7C 7F 1B 78 */	mr r31, r3
/* 80152798 0014F878  FF 60 08 90 */	fmr f27, f1
/* 8015279C 0014F87C  48 00 23 41 */	bl get_center__9zNPCPrawnCFv
/* 801527A0 0014F880  80 BF 00 24 */	lwz r5, 0x24(r31)
/* 801527A4 0014F884  7F E3 FB 78 */	mr r3, r31
/* 801527A8 0014F888  80 82 BF 78 */	lwz r4, "@1844"@sda21(r2)
/* 801527AC 0014F88C  80 A5 00 4C */	lwz r5, 0x4c(r5)
/* 801527B0 0014F890  80 02 BF 7C */	lwz r0, "@1844"+0x4@sda21(r2)
/* 801527B4 0014F894  90 81 00 08 */	stw r4, 0x8(r1)
/* 801527B8 0014F898  C0 25 00 20 */	lfs f1, 0x20(r5)
/* 801527BC 0014F89C  90 01 00 0C */	stw r0, 0xc(r1)
/* 801527C0 0014F8A0  C0 05 00 28 */	lfs f0, 0x28(r5)
/* 801527C4 0014F8A4  D0 21 00 08 */	stfs f1, 0x8(r1)
/* 801527C8 0014F8A8  D0 01 00 0C */	stfs f0, 0xc(r1)
/* 801527CC 0014F8AC  48 00 23 25 */	bl turning__9zNPCPrawnCFv
/* 801527D0 0014F8B0  54 60 06 3F */	clrlwi. r0, r3, 24
/* 801527D4 0014F8B4  41 82 02 5C */	beq .L_80152A30
/* 801527D8 0014F8B8  C0 21 00 08 */	lfs f1, 0x8(r1)
/* 801527DC 0014F8BC  C0 41 00 0C */	lfs f2, 0xc(r1)
/* 801527E0 0014F8C0  4B EB 38 91 */	bl xatan2__Fff
/* 801527E4 0014F8C4  FF E0 08 90 */	fmr f31, f1
/* 801527E8 0014F8C8  C0 3F 02 C4 */	lfs f1, 0x2c4(r31)
/* 801527EC 0014F8CC  C0 5F 02 C8 */	lfs f2, 0x2c8(r31)
/* 801527F0 0014F8D0  4B EB 38 81 */	bl xatan2__Fff
/* 801527F4 0014F8D4  EF A1 F8 28 */	fsubs f29, f1, f31
/* 801527F8 0014F8D8  C0 02 A8 08 */	lfs f0, "@1909"@sda21(r2)
/* 801527FC 0014F8DC  FC 1D 00 40 */	fcmpo cr0, f29, f0
/* 80152800 0014F8E0  40 81 00 10 */	ble .L_80152810
/* 80152804 0014F8E4  C0 02 A8 0C */	lfs f0, "@1910"@sda21(r2)
/* 80152808 0014F8E8  EF BD 00 28 */	fsubs f29, f29, f0
/* 8015280C 0014F8EC  48 00 00 18 */	b .L_80152824
.L_80152810:
/* 80152810 0014F8F0  C0 02 A8 10 */	lfs f0, "@1911"@sda21(r2)
/* 80152814 0014F8F4  FC 1D 00 40 */	fcmpo cr0, f29, f0
/* 80152818 0014F8F8  40 80 00 0C */	bge .L_80152824
/* 8015281C 0014F8FC  C0 02 A8 0C */	lfs f0, "@1910"@sda21(r2)
/* 80152820 0014F900  EF BD 00 2A */	fadds f29, f29, f0
.L_80152824:
/* 80152824 0014F904  C0 5F 03 1C */	lfs f2, 0x31c(r31)
/* 80152828 0014F908  38 60 00 01 */	li r3, 0x1
/* 8015282C 0014F90C  C0 02 A8 14 */	lfs f0, "@1912"@sda21(r2)
/* 80152830 0014F910  FC 20 12 10 */	fabs f1, f2
/* 80152834 0014F914  FC 20 08 18 */	frsp f1, f1
/* 80152838 0014F918  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8015283C 0014F91C  41 80 00 40 */	blt .L_8015287C
/* 80152840 0014F920  C0 02 A7 6C */	lfs f0, "@1053"@sda21(r2)
/* 80152844 0014F924  FC 02 00 40 */	fcmpo cr0, f2, f0
/* 80152848 0014F928  40 80 00 0C */	bge .L_80152854
/* 8015284C 0014F92C  7C 64 1B 78 */	mr r4, r3
/* 80152850 0014F930  48 00 00 08 */	b .L_80152858
.L_80152854:
/* 80152854 0014F934  38 80 00 00 */	li r4, 0x0
.L_80152858:
/* 80152858 0014F938  C0 02 A7 6C */	lfs f0, "@1053"@sda21(r2)
/* 8015285C 0014F93C  FC 1D 00 40 */	fcmpo cr0, f29, f0
/* 80152860 0014F940  40 80 00 0C */	bge .L_8015286C
/* 80152864 0014F944  38 00 00 01 */	li r0, 0x1
/* 80152868 0014F948  48 00 00 08 */	b .L_80152870
.L_8015286C:
/* 8015286C 0014F94C  38 00 00 00 */	li r0, 0x0
.L_80152870:
/* 80152870 0014F950  7C 00 20 00 */	cmpw r0, r4
/* 80152874 0014F954  40 82 00 08 */	bne .L_8015287C
/* 80152878 0014F958  38 60 00 00 */	li r3, 0x0
.L_8015287C:
/* 8015287C 0014F95C  54 60 06 3F */	clrlwi. r0, r3, 24
/* 80152880 0014F960  41 82 00 0C */	beq .L_8015288C
/* 80152884 0014F964  C3 C2 A8 18 */	lfs f30, "@1913"@sda21(r2)
/* 80152888 0014F968  48 00 00 0C */	b .L_80152894
.L_8015288C:
/* 8015288C 0014F96C  C0 1F 03 1C */	lfs f0, 0x31c(r31)
/* 80152890 0014F970  EF DD 00 24 */	fdivs f30, f29, f0
.L_80152894:
/* 80152894 0014F974  C0 3F 03 1C */	lfs f1, 0x31c(r31)
/* 80152898 0014F978  C0 1F 03 20 */	lfs f0, 0x320(r31)
/* 8015289C 0014F97C  EC 01 00 24 */	fdivs f0, f1, f0
/* 801528A0 0014F980  FF 80 02 10 */	fabs f28, f0
/* 801528A4 0014F984  FF 80 E0 18 */	frsp f28, f28
/* 801528A8 0014F988  FC 1E E0 40 */	fcmpo cr0, f30, f28
/* 801528AC 0014F98C  40 81 00 0C */	ble .L_801528B8
/* 801528B0 0014F990  C0 42 A7 68 */	lfs f2, "@1052"@sda21(r2)
/* 801528B4 0014F994  48 00 00 08 */	b .L_801528BC
.L_801528B8:
/* 801528B8 0014F998  C0 42 A7 D4 */	lfs f2, "@1667"@sda21(r2)
.L_801528BC:
/* 801528BC 0014F99C  C0 02 A7 6C */	lfs f0, "@1053"@sda21(r2)
/* 801528C0 0014F9A0  C0 3F 03 20 */	lfs f1, 0x320(r31)
/* 801528C4 0014F9A4  FC 1D 00 40 */	fcmpo cr0, f29, f0
/* 801528C8 0014F9A8  4C 41 13 82 */	cror eq, gt, eq
/* 801528CC 0014F9AC  40 82 00 0C */	bne .L_801528D8
/* 801528D0 0014F9B0  C0 02 A7 68 */	lfs f0, "@1052"@sda21(r2)
/* 801528D4 0014F9B4  48 00 00 08 */	b .L_801528DC
.L_801528D8:
/* 801528D8 0014F9B8  C0 02 A7 D4 */	lfs f0, "@1667"@sda21(r2)
.L_801528DC:
/* 801528DC 0014F9BC  EC 02 00 32 */	fmuls f0, f2, f0
/* 801528E0 0014F9C0  C0 5F 03 1C */	lfs f2, 0x31c(r31)
/* 801528E4 0014F9C4  C0 7F 03 24 */	lfs f3, 0x324(r31)
/* 801528E8 0014F9C8  EC 01 00 32 */	fmuls f0, f1, f0
/* 801528EC 0014F9CC  EC 80 06 F2 */	fmuls f4, f0, f27
/* 801528F0 0014F9D0  EC 22 20 2A */	fadds f1, f2, f4
/* 801528F4 0014F9D4  FC 00 0A 10 */	fabs f0, f1
/* 801528F8 0014F9D8  FC 00 00 18 */	frsp f0, f0
/* 801528FC 0014F9DC  FC 00 18 40 */	fcmpo cr0, f0, f3
/* 80152900 0014F9E0  4C 40 13 82 */	cror eq, lt, eq
/* 80152904 0014F9E4  40 82 00 0C */	bne .L_80152910
/* 80152908 0014F9E8  D0 3F 03 1C */	stfs f1, 0x31c(r31)
/* 8015290C 0014F9EC  48 00 00 64 */	b .L_80152970
.L_80152910:
/* 80152910 0014F9F0  FC 00 12 10 */	fabs f0, f2
/* 80152914 0014F9F4  FC 00 00 18 */	frsp f0, f0
/* 80152918 0014F9F8  FC 00 18 40 */	fcmpo cr0, f0, f3
/* 8015291C 0014F9FC  4C 40 13 82 */	cror eq, lt, eq
/* 80152920 0014FA00  40 82 00 14 */	bne .L_80152934
/* 80152924 0014FA04  FC 40 18 50 */	fneg f2, f3
/* 80152928 0014FA08  4B EB C0 11 */	bl "range_limit<f>__Ffff"
/* 8015292C 0014FA0C  D0 3F 03 1C */	stfs f1, 0x31c(r31)
/* 80152930 0014FA10  48 00 00 40 */	b .L_80152970
.L_80152934:
/* 80152934 0014FA14  C0 02 A7 6C */	lfs f0, "@1053"@sda21(r2)
/* 80152938 0014FA18  FC 04 00 40 */	fcmpo cr0, f4, f0
/* 8015293C 0014FA1C  40 80 00 0C */	bge .L_80152948
/* 80152940 0014FA20  38 60 00 01 */	li r3, 0x1
/* 80152944 0014FA24  48 00 00 08 */	b .L_8015294C
.L_80152948:
/* 80152948 0014FA28  38 60 00 00 */	li r3, 0x0
.L_8015294C:
/* 8015294C 0014FA2C  C0 02 A7 6C */	lfs f0, "@1053"@sda21(r2)
/* 80152950 0014FA30  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80152954 0014FA34  40 80 00 0C */	bge .L_80152960
/* 80152958 0014FA38  38 00 00 01 */	li r0, 0x1
/* 8015295C 0014FA3C  48 00 00 08 */	b .L_80152964
.L_80152960:
/* 80152960 0014FA40  38 00 00 00 */	li r0, 0x0
.L_80152964:
/* 80152964 0014FA44  7C 00 18 00 */	cmpw r0, r3
/* 80152968 0014FA48  41 82 00 08 */	beq .L_80152970
/* 8015296C 0014FA4C  D0 3F 03 1C */	stfs f1, 0x31c(r31)
.L_80152970:
/* 80152970 0014FA50  C0 1F 03 1C */	lfs f0, 0x31c(r31)
/* 80152974 0014FA54  FC 1E E0 40 */	fcmpo cr0, f30, f28
/* 80152978 0014FA58  EC 40 06 F2 */	fmuls f2, f0, f27
/* 8015297C 0014FA5C  40 81 00 64 */	ble .L_801529E0
/* 80152980 0014FA60  C0 02 A7 6C */	lfs f0, "@1053"@sda21(r2)
/* 80152984 0014FA64  FC 1D 00 40 */	fcmpo cr0, f29, f0
/* 80152988 0014FA68  40 80 00 0C */	bge .L_80152994
/* 8015298C 0014FA6C  38 60 00 01 */	li r3, 0x1
/* 80152990 0014FA70  48 00 00 08 */	b .L_80152998
.L_80152994:
/* 80152994 0014FA74  38 60 00 00 */	li r3, 0x0
.L_80152998:
/* 80152998 0014FA78  C0 02 A7 6C */	lfs f0, "@1053"@sda21(r2)
/* 8015299C 0014FA7C  FC 02 00 40 */	fcmpo cr0, f2, f0
/* 801529A0 0014FA80  40 80 00 0C */	bge .L_801529AC
/* 801529A4 0014FA84  38 00 00 01 */	li r0, 0x1
/* 801529A8 0014FA88  48 00 00 08 */	b .L_801529B0
.L_801529AC:
/* 801529AC 0014FA8C  38 00 00 00 */	li r0, 0x0
.L_801529B0:
/* 801529B0 0014FA90  7C 00 18 00 */	cmpw r0, r3
/* 801529B4 0014FA94  40 82 00 70 */	bne .L_80152A24
/* 801529B8 0014FA98  FC 20 12 10 */	fabs f1, f2
/* 801529BC 0014FA9C  FC 00 EA 10 */	fabs f0, f29
/* 801529C0 0014FAA0  FC 20 08 18 */	frsp f1, f1
/* 801529C4 0014FAA4  FC 00 00 18 */	frsp f0, f0
/* 801529C8 0014FAA8  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 801529CC 0014FAAC  40 81 00 58 */	ble .L_80152A24
/* 801529D0 0014FAB0  C0 02 A7 6C */	lfs f0, "@1053"@sda21(r2)
/* 801529D4 0014FAB4  FC 40 E8 90 */	fmr f2, f29
/* 801529D8 0014FAB8  D0 1F 03 1C */	stfs f0, 0x31c(r31)
/* 801529DC 0014FABC  48 00 00 48 */	b .L_80152A24
.L_801529E0:
/* 801529E0 0014FAC0  C0 02 A7 6C */	lfs f0, "@1053"@sda21(r2)
/* 801529E4 0014FAC4  FC 1D 00 40 */	fcmpo cr0, f29, f0
/* 801529E8 0014FAC8  40 80 00 0C */	bge .L_801529F4
/* 801529EC 0014FACC  38 60 00 01 */	li r3, 0x1
/* 801529F0 0014FAD0  48 00 00 08 */	b .L_801529F8
.L_801529F4:
/* 801529F4 0014FAD4  38 60 00 00 */	li r3, 0x0
.L_801529F8:
/* 801529F8 0014FAD8  C0 02 A7 6C */	lfs f0, "@1053"@sda21(r2)
/* 801529FC 0014FADC  FC 02 00 40 */	fcmpo cr0, f2, f0
/* 80152A00 0014FAE0  40 80 00 0C */	bge .L_80152A0C
/* 80152A04 0014FAE4  38 00 00 01 */	li r0, 0x1
/* 80152A08 0014FAE8  48 00 00 08 */	b .L_80152A10
.L_80152A0C:
/* 80152A0C 0014FAEC  38 00 00 00 */	li r0, 0x0
.L_80152A10:
/* 80152A10 0014FAF0  7C 00 18 00 */	cmpw r0, r3
/* 80152A14 0014FAF4  41 82 00 10 */	beq .L_80152A24
/* 80152A18 0014FAF8  C0 02 A7 6C */	lfs f0, "@1053"@sda21(r2)
/* 80152A1C 0014FAFC  FC 40 E8 90 */	fmr f2, f29
/* 80152A20 0014FB00  D0 1F 03 1C */	stfs f0, 0x31c(r31)
.L_80152A24:
/* 80152A24 0014FB04  EC 3F 10 2A */	fadds f1, f31, f2
/* 80152A28 0014FB08  80 7F 00 48 */	lwz r3, 0x48(r31)
/* 80152A2C 0014FB0C  4B FF FC 95 */	bl "set_yaw_matrix__27@unnamed@zNPCTypePrawn_cpp@FR7xMat3x3f"
.L_80152A30:
/* 80152A30 0014FB10  E3 E1 00 68 */	psq_l f31, 0x68(r1), 0, qr0
/* 80152A34 0014FB14  CB E1 00 60 */	lfd f31, 0x60(r1)
/* 80152A38 0014FB18  E3 C1 00 58 */	psq_l f30, 0x58(r1), 0, qr0
/* 80152A3C 0014FB1C  CB C1 00 50 */	lfd f30, 0x50(r1)
/* 80152A40 0014FB20  E3 A1 00 48 */	psq_l f29, 0x48(r1), 0, qr0
/* 80152A44 0014FB24  CB A1 00 40 */	lfd f29, 0x40(r1)
/* 80152A48 0014FB28  E3 81 00 38 */	psq_l f28, 0x38(r1), 0, qr0
/* 80152A4C 0014FB2C  CB 81 00 30 */	lfd f28, 0x30(r1)
/* 80152A50 0014FB30  E3 61 00 28 */	psq_l f27, 0x28(r1), 0, qr0
/* 80152A54 0014FB34  CB 61 00 20 */	lfd f27, 0x20(r1)
/* 80152A58 0014FB38  80 01 00 74 */	lwz r0, 0x74(r1)
/* 80152A5C 0014FB3C  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 80152A60 0014FB40  7C 08 03 A6 */	mtlr r0
/* 80152A64 0014FB44  38 21 00 70 */	addi r1, r1, 0x70
/* 80152A68 0014FB48  4E 80 00 20 */	blr
.endfn update_turn__9zNPCPrawnFf

# zNPCPrawn::update_animation(float)
.fn update_animation__9zNPCPrawnFf, global
/* 80152A6C 0014FB4C  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 80152A70 0014FB50  7C 08 02 A6 */	mflr r0
/* 80152A74 0014FB54  3C 80 80 2A */	lis r4, g_hash_subbanim@ha
/* 80152A78 0014FB58  90 01 00 24 */	stw r0, 0x24(r1)
/* 80152A7C 0014FB5C  38 84 90 E0 */	addi r4, r4, g_hash_subbanim@l
/* 80152A80 0014FB60  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 80152A84 0014FB64  93 C1 00 18 */	stw r30, 0x18(r1)
/* 80152A88 0014FB68  93 A1 00 14 */	stw r29, 0x14(r1)
/* 80152A8C 0014FB6C  7C 7D 1B 78 */	mr r29, r3
/* 80152A90 0014FB70  83 E4 00 04 */	lwz r31, 0x4(r4)
/* 80152A94 0014FB74  83 C4 00 34 */	lwz r30, 0x34(r4)
/* 80152A98 0014FB78  4B FA 05 69 */	bl AnimCurStateID__10zNPCCommonFv
/* 80152A9C 0014FB7C  7C 03 F8 40 */	cmplw r3, r31
/* 80152AA0 0014FB80  41 82 00 0C */	beq .L_80152AAC
/* 80152AA4 0014FB84  7C 03 F0 40 */	cmplw r3, r30
/* 80152AA8 0014FB88  40 82 00 B8 */	bne .L_80152B60
.L_80152AAC:
/* 80152AAC 0014FB8C  C0 3D 03 24 */	lfs f1, 0x324(r29)
/* 80152AB0 0014FB90  C0 02 A8 14 */	lfs f0, "@1912"@sda21(r2)
/* 80152AB4 0014FB94  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80152AB8 0014FB98  40 80 00 0C */	bge .L_80152AC4
/* 80152ABC 0014FB9C  C0 22 A7 6C */	lfs f1, "@1053"@sda21(r2)
/* 80152AC0 0014FBA0  48 00 00 0C */	b .L_80152ACC
.L_80152AC4:
/* 80152AC4 0014FBA4  C0 1D 03 1C */	lfs f0, 0x31c(r29)
/* 80152AC8 0014FBA8  EC 20 08 24 */	fdivs f1, f0, f1
.L_80152ACC:
/* 80152ACC 0014FBAC  C0 42 A7 D4 */	lfs f2, "@1667"@sda21(r2)
/* 80152AD0 0014FBB0  C0 62 A7 68 */	lfs f3, "@1052"@sda21(r2)
/* 80152AD4 0014FBB4  4B EB BE 65 */	bl "range_limit<f>__Ffff"
/* 80152AD8 0014FBB8  80 7D 00 24 */	lwz r3, 0x24(r29)
/* 80152ADC 0014FBBC  88 0D 96 CD */	lbz r0, init$1948@sda21(r13)
/* 80152AE0 0014FBC0  80 63 00 0C */	lwz r3, 0xc(r3)
/* 80152AE4 0014FBC4  7C 00 07 75 */	extsb. r0, r0
/* 80152AE8 0014FBC8  83 C3 00 08 */	lwz r30, 0x8(r3)
/* 80152AEC 0014FBCC  40 82 00 14 */	bne .L_80152B00
/* 80152AF0 0014FBD0  38 60 00 00 */	li r3, 0x0
/* 80152AF4 0014FBD4  38 00 00 01 */	li r0, 0x1
/* 80152AF8 0014FBD8  98 6D 96 CC */	stb r3, registered$1947@sda21(r13)
/* 80152AFC 0014FBDC  98 0D 96 CD */	stb r0, init$1948@sda21(r13)
.L_80152B00:
/* 80152B00 0014FBE0  88 0D 96 D4 */	lbz r0, init$1951@sda21(r13)
/* 80152B04 0014FBE4  7C 00 07 75 */	extsb. r0, r0
/* 80152B08 0014FBE8  40 82 00 14 */	bne .L_80152B1C
/* 80152B0C 0014FBEC  C0 02 A7 68 */	lfs f0, "@1052"@sda21(r2)
/* 80152B10 0014FBF0  38 00 00 01 */	li r0, 0x1
/* 80152B14 0014FBF4  D0 0D 96 D0 */	stfs f0, lerp$1950@sda21(r13)
/* 80152B18 0014FBF8  98 0D 96 D4 */	stb r0, init$1951@sda21(r13)
.L_80152B1C:
/* 80152B1C 0014FBFC  88 0D 96 CC */	lbz r0, registered$1947@sda21(r13)
/* 80152B20 0014FC00  28 00 00 00 */	cmplwi r0, 0x0
/* 80152B24 0014FC04  40 82 00 34 */	bne .L_80152B58
/* 80152B28 0014FC08  38 00 00 01 */	li r0, 0x1
/* 80152B2C 0014FC0C  3C 60 80 27 */	lis r3, "@stringBase0"@ha
/* 80152B30 0014FC10  98 0D 96 CC */	stb r0, registered$1947@sda21(r13)
/* 80152B34 0014FC14  38 63 E9 F0 */	addi r3, r3, "@stringBase0"@l
/* 80152B38 0014FC18  38 63 07 A6 */	addi r3, r3, 0x7a6
/* 80152B3C 0014FC1C  38 8D 96 D0 */	addi r4, r13, lerp$1950@sda21
/* 80152B40 0014FC20  C0 22 A7 6C */	lfs f1, "@1053"@sda21(r2)
/* 80152B44 0014FC24  38 A0 00 00 */	li r5, 0x0
/* 80152B48 0014FC28  C0 42 A7 EC */	lfs f2, "@1673"@sda21(r2)
/* 80152B4C 0014FC2C  38 C0 00 00 */	li r6, 0x0
/* 80152B50 0014FC30  38 E0 00 00 */	li r7, 0x0
/* 80152B54 0014FC34  4B ED DA D9 */	bl xDebugAddTweak__FPCcPfffPC14tweak_callbackPvUi
.L_80152B58:
/* 80152B58 0014FC38  C0 0D 96 D0 */	lfs f0, lerp$1950@sda21(r13)
/* 80152B5C 0014FC3C  D0 1E 00 10 */	stfs f0, 0x10(r30)
.L_80152B60:
/* 80152B60 0014FC40  80 01 00 24 */	lwz r0, 0x24(r1)
/* 80152B64 0014FC44  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 80152B68 0014FC48  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 80152B6C 0014FC4C  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 80152B70 0014FC50  7C 08 03 A6 */	mtlr r0
/* 80152B74 0014FC54  38 21 00 20 */	addi r1, r1, 0x20
/* 80152B78 0014FC58  4E 80 00 20 */	blr
.endfn update_animation__9zNPCPrawnFf

# zNPCPrawn::update_floor(float)
.fn update_floor__9zNPCPrawnFf, global
/* 80152B7C 0014FC5C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80152B80 0014FC60  7C 08 02 A6 */	mflr r0
/* 80152B84 0014FC64  90 01 00 14 */	stw r0, 0x14(r1)
/* 80152B88 0014FC68  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80152B8C 0014FC6C  7C 7F 1B 78 */	mr r31, r3
/* 80152B90 0014FC70  80 03 02 E0 */	lwz r0, 0x2e0(r3)
/* 80152B94 0014FC74  2C 00 00 05 */	cmpwi r0, 0x5
/* 80152B98 0014FC78  40 82 00 50 */	bne .L_80152BE8
/* 80152B9C 0014FC7C  88 1F 02 F8 */	lbz r0, 0x2f8(r31)
/* 80152BA0 0014FC80  28 00 00 00 */	cmplwi r0, 0x0
/* 80152BA4 0014FC84  40 82 00 44 */	bne .L_80152BE8
/* 80152BA8 0014FC88  C0 1F 02 EC */	lfs f0, 0x2ec(r31)
/* 80152BAC 0014FC8C  3C 80 80 33 */	lis r4, "tweak__27@unnamed@zNPCTypePrawn_cpp@"@ha
/* 80152BB0 0014FC90  38 84 95 E0 */	addi r4, r4, "tweak__27@unnamed@zNPCTypePrawn_cpp@"@l
/* 80152BB4 0014FC94  EC 00 08 2A */	fadds f0, f0, f1
/* 80152BB8 0014FC98  D0 1F 02 EC */	stfs f0, 0x2ec(r31)
/* 80152BBC 0014FC9C  C0 3F 02 EC */	lfs f1, 0x2ec(r31)
/* 80152BC0 0014FCA0  C0 04 01 00 */	lfs f0, 0x100(r4)
/* 80152BC4 0014FCA4  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80152BC8 0014FCA8  4C 41 13 82 */	cror eq, gt, eq
/* 80152BCC 0014FCAC  40 82 00 1C */	bne .L_80152BE8
/* 80152BD0 0014FCB0  38 80 00 05 */	li r4, 0x5
/* 80152BD4 0014FCB4  38 A0 00 00 */	li r5, 0x0
/* 80152BD8 0014FCB8  38 C0 00 01 */	li r6, 0x1
/* 80152BDC 0014FCBC  48 00 05 C9 */	bl set_floor_state__9zNPCPrawnFQ29zNPCPrawn16floor_state_enumbb
/* 80152BE0 0014FCC0  C0 02 A7 6C */	lfs f0, "@1053"@sda21(r2)
/* 80152BE4 0014FCC4  D0 1F 02 EC */	stfs f0, 0x2ec(r31)
.L_80152BE8:
/* 80152BE8 0014FCC8  88 1F 02 F8 */	lbz r0, 0x2f8(r31)
/* 80152BEC 0014FCCC  28 00 00 00 */	cmplwi r0, 0x0
/* 80152BF0 0014FCD0  41 82 00 20 */	beq .L_80152C10
/* 80152BF4 0014FCD4  80 7F 02 CC */	lwz r3, 0x2cc(r31)
/* 80152BF8 0014FCD8  80 1F 03 00 */	lwz r0, 0x300(r31)
/* 80152BFC 0014FCDC  80 63 00 50 */	lwz r3, 0x50(r3)
/* 80152C00 0014FCE0  7C 03 00 40 */	cmplw r3, r0
/* 80152C04 0014FCE4  41 80 00 0C */	blt .L_80152C10
/* 80152C08 0014FCE8  7F E3 FB 78 */	mr r3, r31
/* 80152C0C 0014FCEC  48 00 05 3D */	bl apply_pending__9zNPCPrawnFv
.L_80152C10:
/* 80152C10 0014FCF0  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80152C14 0014FCF4  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80152C18 0014FCF8  7C 08 03 A6 */	mtlr r0
/* 80152C1C 0014FCFC  38 21 00 10 */	addi r1, r1, 0x10
/* 80152C20 0014FD00  4E 80 00 20 */	blr
.endfn update_floor__9zNPCPrawnFf

# zNPCPrawn::update_beam(float)
.fn update_beam__9zNPCPrawnFf, global
/* 80152C24 0014FD04  94 21 FF 70 */	stwu r1, -0x90(r1)
/* 80152C28 0014FD08  7C 08 02 A6 */	mflr r0
/* 80152C2C 0014FD0C  90 01 00 94 */	stw r0, 0x94(r1)
/* 80152C30 0014FD10  DB E1 00 80 */	stfd f31, 0x80(r1)
/* 80152C34 0014FD14  F3 E1 00 88 */	psq_st f31, 0x88(r1), 0, qr0
/* 80152C38 0014FD18  DB C1 00 70 */	stfd f30, 0x70(r1)
/* 80152C3C 0014FD1C  F3 C1 00 78 */	psq_st f30, 0x78(r1), 0, qr0
/* 80152C40 0014FD20  DB A1 00 60 */	stfd f29, 0x60(r1)
/* 80152C44 0014FD24  F3 A1 00 68 */	psq_st f29, 0x68(r1), 0, qr0
/* 80152C48 0014FD28  93 E1 00 5C */	stw r31, 0x5c(r1)
/* 80152C4C 0014FD2C  93 C1 00 58 */	stw r30, 0x58(r1)
/* 80152C50 0014FD30  93 A1 00 54 */	stw r29, 0x54(r1)
/* 80152C54 0014FD34  7C 7D 1B 78 */	mr r29, r3
/* 80152C58 0014FD38  3C 60 80 33 */	lis r3, "tweak__27@unnamed@zNPCTypePrawn_cpp@"@ha
/* 80152C5C 0014FD3C  38 63 95 E0 */	addi r3, r3, "tweak__27@unnamed@zNPCTypePrawn_cpp@"@l
/* 80152C60 0014FD40  80 9D 00 24 */	lwz r4, 0x24(r29)
/* 80152C64 0014FD44  80 03 00 A0 */	lwz r0, 0xa0(r3)
/* 80152C68 0014FD48  FF A0 08 90 */	fmr f29, f1
/* 80152C6C 0014FD4C  80 84 00 4C */	lwz r4, 0x4c(r4)
/* 80152C70 0014FD50  38 61 00 14 */	addi r3, r1, 0x14
/* 80152C74 0014FD54  54 00 30 32 */	slwi r0, r0, 6
/* 80152C78 0014FD58  7F C4 02 14 */	add r30, r4, r0
/* 80152C7C 0014FD5C  7C 9F 23 78 */	mr r31, r4
/* 80152C80 0014FD60  38 84 00 30 */	addi r4, r4, 0x30
/* 80152C84 0014FD64  38 BE 00 30 */	addi r5, r30, 0x30
/* 80152C88 0014FD68  4B EC 27 59 */	bl __pl__5xVec3CFRC5xVec3
/* 80152C8C 0014FD6C  3C 80 80 33 */	lis r4, "tweak__27@unnamed@zNPCTypePrawn_cpp@"@ha
/* 80152C90 0014FD70  38 61 00 20 */	addi r3, r1, 0x20
/* 80152C94 0014FD74  38 A4 95 E0 */	addi r5, r4, "tweak__27@unnamed@zNPCTypePrawn_cpp@"@l
/* 80152C98 0014FD78  38 81 00 14 */	addi r4, r1, 0x14
/* 80152C9C 0014FD7C  38 A5 00 A4 */	addi r5, r5, 0xa4
/* 80152CA0 0014FD80  4B EC 27 41 */	bl __pl__5xVec3CFRC5xVec3
/* 80152CA4 0014FD84  80 E1 00 20 */	lwz r7, 0x20(r1)
/* 80152CA8 0014FD88  7F E4 FB 78 */	mr r4, r31
/* 80152CAC 0014FD8C  80 C1 00 24 */	lwz r6, 0x24(r1)
/* 80152CB0 0014FD90  7F C5 F3 78 */	mr r5, r30
/* 80152CB4 0014FD94  80 01 00 28 */	lwz r0, 0x28(r1)
/* 80152CB8 0014FD98  38 61 00 2C */	addi r3, r1, 0x2c
/* 80152CBC 0014FD9C  90 E1 00 38 */	stw r7, 0x38(r1)
/* 80152CC0 0014FDA0  90 C1 00 3C */	stw r6, 0x3c(r1)
/* 80152CC4 0014FDA4  90 01 00 40 */	stw r0, 0x40(r1)
/* 80152CC8 0014FDA8  48 00 01 09 */	bl "mulat__27@unnamed@zNPCTypePrawn_cpp@FR5xVec3RC7xMat3x3RC7xMat3x3"
/* 80152CCC 0014FDAC  C0 1D 03 14 */	lfs f0, 0x314(r29)
/* 80152CD0 0014FDB0  C0 21 00 2C */	lfs f1, 0x2c(r1)
/* 80152CD4 0014FDB4  FC 00 00 50 */	fneg f0, f0
/* 80152CD8 0014FDB8  C0 41 00 34 */	lfs f2, 0x34(r1)
/* 80152CDC 0014FDBC  D0 01 00 30 */	stfs f0, 0x30(r1)
/* 80152CE0 0014FDC0  4B EB 33 91 */	bl xatan2__Fff
/* 80152CE4 0014FDC4  3C 60 80 33 */	lis r3, "tweak__27@unnamed@zNPCTypePrawn_cpp@"@ha
/* 80152CE8 0014FDC8  38 63 95 E0 */	addi r3, r3, "tweak__27@unnamed@zNPCTypePrawn_cpp@"@l
/* 80152CEC 0014FDCC  C0 03 00 B0 */	lfs f0, 0xb0(r3)
/* 80152CF0 0014FDD0  EF C0 08 2A */	fadds f30, f0, f1
/* 80152CF4 0014FDD4  FC 20 F0 90 */	fmr f1, f30
/* 80152CF8 0014FDD8  4B F7 21 55 */	bl isin__Ff
/* 80152CFC 0014FDDC  FF E0 08 90 */	fmr f31, f1
/* 80152D00 0014FDE0  FC 20 F0 90 */	fmr f1, f30
/* 80152D04 0014FDE4  4B F7 21 8D */	bl icos__Ff
/* 80152D08 0014FDE8  C0 1D 03 18 */	lfs f0, 0x318(r29)
/* 80152D0C 0014FDEC  38 7D 03 28 */	addi r3, r29, 0x328
/* 80152D10 0014FDF0  38 81 00 38 */	addi r4, r1, 0x38
/* 80152D14 0014FDF4  38 A1 00 2C */	addi r5, r1, 0x2c
/* 80152D18 0014FDF8  EC 5F 00 32 */	fmuls f2, f31, f0
/* 80152D1C 0014FDFC  EC 01 00 32 */	fmuls f0, f1, f0
/* 80152D20 0014FE00  D0 41 00 2C */	stfs f2, 0x2c(r1)
/* 80152D24 0014FE04  D0 01 00 34 */	stfs f0, 0x34(r1)
/* 80152D28 0014FE08  48 00 1E ED */	bl move__9aqua_beamFRC5xVec3RC5xVec3
/* 80152D2C 0014FE0C  38 7D 03 28 */	addi r3, r29, 0x328
/* 80152D30 0014FE10  48 00 1E 99 */	bl active__9aqua_beamCFv
/* 80152D34 0014FE14  54 60 06 3F */	clrlwi. r0, r3, 24
/* 80152D38 0014FE18  41 82 00 64 */	beq .L_80152D9C
/* 80152D3C 0014FE1C  FC 20 E8 90 */	fmr f1, f29
/* 80152D40 0014FE20  38 7D 03 28 */	addi r3, r29, 0x328
/* 80152D44 0014FE24  4B FF CE 95 */	bl update__9aqua_beamFf
/* 80152D48 0014FE28  3C 60 80 33 */	lis r3, "exhaust_emitter_settings__27@unnamed@zNPCTypePrawn_cpp@"@ha
/* 80152D4C 0014FE2C  38 81 00 38 */	addi r4, r1, 0x38
/* 80152D50 0014FE30  38 63 98 68 */	addi r3, r3, "exhaust_emitter_settings__27@unnamed@zNPCTypePrawn_cpp@"@l
/* 80152D54 0014FE34  38 63 01 40 */	addi r3, r3, 0x140
/* 80152D58 0014FE38  4B EB 85 0D */	bl __as__5xVec3FRC5xVec3
/* 80152D5C 0014FE3C  3C 80 80 33 */	lis r4, "tweak__27@unnamed@zNPCTypePrawn_cpp@"@ha
/* 80152D60 0014FE40  38 61 00 08 */	addi r3, r1, 0x8
/* 80152D64 0014FE44  38 A4 95 E0 */	addi r5, r4, "tweak__27@unnamed@zNPCTypePrawn_cpp@"@l
/* 80152D68 0014FE48  38 81 00 2C */	addi r4, r1, 0x2c
/* 80152D6C 0014FE4C  C0 25 00 40 */	lfs f1, 0x40(r5)
/* 80152D70 0014FE50  4B EB 83 B1 */	bl __ml__5xVec3CFf
/* 80152D74 0014FE54  3C 60 80 33 */	lis r3, "exhaust_emitter_settings__27@unnamed@zNPCTypePrawn_cpp@"@ha
/* 80152D78 0014FE58  38 81 00 08 */	addi r4, r1, 0x8
/* 80152D7C 0014FE5C  38 63 98 68 */	addi r3, r3, "exhaust_emitter_settings__27@unnamed@zNPCTypePrawn_cpp@"@l
/* 80152D80 0014FE60  38 63 01 4C */	addi r3, r3, 0x14c
/* 80152D84 0014FE64  4B EB 84 E1 */	bl __as__5xVec3FRC5xVec3
/* 80152D88 0014FE68  3C 60 80 33 */	lis r3, "exhaust_emitter_settings__27@unnamed@zNPCTypePrawn_cpp@"@ha
/* 80152D8C 0014FE6C  FC 20 E8 90 */	fmr f1, f29
/* 80152D90 0014FE70  38 83 98 68 */	addi r4, r3, "exhaust_emitter_settings__27@unnamed@zNPCTypePrawn_cpp@"@l
/* 80152D94 0014FE74  80 6D 96 C8 */	lwz r3, "exhaust_emitter__27@unnamed@zNPCTypePrawn_cpp@"@sda21(r13)
/* 80152D98 0014FE78  4B FC 4E 31 */	bl xParEmitterEmitCustom__FP11xParEmitterfP25xParEmitterCustomSettings
.L_80152D9C:
/* 80152D9C 0014FE7C  E3 E1 00 88 */	psq_l f31, 0x88(r1), 0, qr0
/* 80152DA0 0014FE80  CB E1 00 80 */	lfd f31, 0x80(r1)
/* 80152DA4 0014FE84  E3 C1 00 78 */	psq_l f30, 0x78(r1), 0, qr0
/* 80152DA8 0014FE88  CB C1 00 70 */	lfd f30, 0x70(r1)
/* 80152DAC 0014FE8C  E3 A1 00 68 */	psq_l f29, 0x68(r1), 0, qr0
/* 80152DB0 0014FE90  CB A1 00 60 */	lfd f29, 0x60(r1)
/* 80152DB4 0014FE94  83 E1 00 5C */	lwz r31, 0x5c(r1)
/* 80152DB8 0014FE98  83 C1 00 58 */	lwz r30, 0x58(r1)
/* 80152DBC 0014FE9C  80 01 00 94 */	lwz r0, 0x94(r1)
/* 80152DC0 0014FEA0  83 A1 00 54 */	lwz r29, 0x54(r1)
/* 80152DC4 0014FEA4  7C 08 03 A6 */	mtlr r0
/* 80152DC8 0014FEA8  38 21 00 90 */	addi r1, r1, 0x90
/* 80152DCC 0014FEAC  4E 80 00 20 */	blr
.endfn update_beam__9zNPCPrawnFf

# @unnamed@zNPCTypePrawn_cpp@::mulat(xVec3&, const xMat3x3&, const xMat3x3&)
.fn "mulat__27@unnamed@zNPCTypePrawn_cpp@FR5xVec3RC7xMat3x3RC7xMat3x3", local
/* 80152DD0 0014FEB0  C0 A4 00 24 */	lfs f5, 0x24(r4)
/* 80152DD4 0014FEB4  C0 25 00 10 */	lfs f1, 0x10(r5)
/* 80152DD8 0014FEB8  C0 05 00 14 */	lfs f0, 0x14(r5)
/* 80152DDC 0014FEBC  EC 25 00 72 */	fmuls f1, f5, f1
/* 80152DE0 0014FEC0  C0 C4 00 20 */	lfs f6, 0x20(r4)
/* 80152DE4 0014FEC4  C0 85 00 00 */	lfs f4, 0x0(r5)
/* 80152DE8 0014FEC8  EC 45 00 32 */	fmuls f2, f5, f0
/* 80152DEC 0014FECC  C0 05 00 18 */	lfs f0, 0x18(r5)
/* 80152DF0 0014FED0  C0 65 00 04 */	lfs f3, 0x4(r5)
/* 80152DF4 0014FED4  EC 86 09 3A */	fmadds f4, f6, f4, f1
/* 80152DF8 0014FED8  C1 04 00 28 */	lfs f8, 0x28(r4)
/* 80152DFC 0014FEDC  C0 E5 00 20 */	lfs f7, 0x20(r5)
/* 80152E00 0014FEE0  EC 05 00 32 */	fmuls f0, f5, f0
/* 80152E04 0014FEE4  C0 25 00 08 */	lfs f1, 0x8(r5)
/* 80152E08 0014FEE8  EC 46 10 FA */	fmadds f2, f6, f3, f2
/* 80152E0C 0014FEEC  EC 88 21 FA */	fmadds f4, f8, f7, f4
/* 80152E10 0014FEF0  C0 65 00 24 */	lfs f3, 0x24(r5)
/* 80152E14 0014FEF4  EC 06 00 7A */	fmadds f0, f6, f1, f0
/* 80152E18 0014FEF8  C0 25 00 28 */	lfs f1, 0x28(r5)
/* 80152E1C 0014FEFC  EC 48 10 FA */	fmadds f2, f8, f3, f2
/* 80152E20 0014FF00  D0 83 00 00 */	stfs f4, 0x0(r3)
/* 80152E24 0014FF04  EC 08 00 7A */	fmadds f0, f8, f1, f0
/* 80152E28 0014FF08  D0 43 00 04 */	stfs f2, 0x4(r3)
/* 80152E2C 0014FF0C  D0 03 00 08 */	stfs f0, 0x8(r3)
/* 80152E30 0014FF10  4E 80 00 20 */	blr
.endfn "mulat__27@unnamed@zNPCTypePrawn_cpp@FR5xVec3RC7xMat3x3RC7xMat3x3"

# zNPCPrawn::update_particles(float)
.fn update_particles__9zNPCPrawnFf, global
/* 80152E34 0014FF14  4E 80 00 20 */	blr
.endfn update_particles__9zNPCPrawnFf

# zNPCPrawn::update_camera(float)
.fn update_camera__9zNPCPrawnFf, global
/* 80152E38 0014FF18  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80152E3C 0014FF1C  7C 08 02 A6 */	mflr r0
/* 80152E40 0014FF20  38 60 00 08 */	li r3, 0x8
/* 80152E44 0014FF24  90 01 00 14 */	stw r0, 0x14(r1)
/* 80152E48 0014FF28  DB E1 00 08 */	stfd f31, 0x8(r1)
/* 80152E4C 0014FF2C  FF E0 08 90 */	fmr f31, f1
/* 80152E50 0014FF30  4B EF F2 B1 */	bl zCameraDisableTracking__F17camera_owner_enum
/* 80152E54 0014FF34  4B EF F2 CD */	bl zCameraIsTrackingDisabled__Fv
/* 80152E58 0014FF38  54 60 07 77 */	rlwinm. r0, r3, 0, 29, 27
/* 80152E5C 0014FF3C  40 82 00 14 */	bne .L_80152E70
/* 80152E60 0014FF40  FC 20 F8 90 */	fmr f1, f31
/* 80152E64 0014FF44  3C 60 80 2A */	lis r3, "boss_cam__27@unnamed@zNPCTypePrawn_cpp@"@ha
/* 80152E68 0014FF48  38 63 A2 40 */	addi r3, r3, "boss_cam__27@unnamed@zNPCTypePrawn_cpp@"@l
/* 80152E6C 0014FF4C  4B EB B0 99 */	bl update__13xBinaryCameraFf
.L_80152E70:
/* 80152E70 0014FF50  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80152E74 0014FF54  CB E1 00 08 */	lfd f31, 0x8(r1)
/* 80152E78 0014FF58  7C 08 03 A6 */	mtlr r0
/* 80152E7C 0014FF5C  38 21 00 10 */	addi r1, r1, 0x10
/* 80152E80 0014FF60  4E 80 00 20 */	blr
.endfn update_camera__9zNPCPrawnFf

# zNPCPrawn::start_fight()
.fn start_fight__9zNPCPrawnFv, global
/* 80152E84 0014FF64  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80152E88 0014FF68  7C 08 02 A6 */	mflr r0
/* 80152E8C 0014FF6C  90 01 00 14 */	stw r0, 0x14(r1)
/* 80152E90 0014FF70  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80152E94 0014FF74  7C 7F 1B 78 */	mr r31, r3
/* 80152E98 0014FF78  88 03 02 F5 */	lbz r0, 0x2f5(r3)
/* 80152E9C 0014FF7C  28 00 00 00 */	cmplwi r0, 0x0
/* 80152EA0 0014FF80  40 82 00 60 */	bne .L_80152F00
/* 80152EA4 0014FF84  38 00 00 01 */	li r0, 0x1
/* 80152EA8 0014FF88  38 80 00 01 */	li r4, 0x1
/* 80152EAC 0014FF8C  98 1F 02 F5 */	stb r0, 0x2f5(r31)
/* 80152EB0 0014FF90  38 A0 00 01 */	li r5, 0x1
/* 80152EB4 0014FF94  38 C0 00 00 */	li r6, 0x0
/* 80152EB8 0014FF98  48 00 02 ED */	bl set_floor_state__9zNPCPrawnFQ29zNPCPrawn16floor_state_enumbb
/* 80152EBC 0014FF9C  38 60 00 08 */	li r3, 0x8
/* 80152EC0 0014FFA0  4B EF F2 41 */	bl zCameraDisableTracking__F17camera_owner_enum
/* 80152EC4 0014FFA4  3C 60 80 2A */	lis r3, "boss_cam__27@unnamed@zNPCTypePrawn_cpp@"@ha
/* 80152EC8 0014FFA8  3C 80 80 3C */	lis r4, globals@ha
/* 80152ECC 0014FFAC  38 63 A2 40 */	addi r3, r3, "boss_cam__27@unnamed@zNPCTypePrawn_cpp@"@l
/* 80152ED0 0014FFB0  38 84 05 58 */	addi r4, r4, globals@l
/* 80152ED4 0014FFB4  4B EB AF E1 */	bl start__13xBinaryCameraFR7xCamera
/* 80152ED8 0014FFB8  3C 60 80 3C */	lis r3, globals@ha
/* 80152EDC 0014FFBC  3C A0 80 2A */	lis r5, "boss_cam__27@unnamed@zNPCTypePrawn_cpp@"@ha
/* 80152EE0 0014FFC0  38 63 05 58 */	addi r3, r3, globals@l
/* 80152EE4 0014FFC4  C0 3F 00 94 */	lfs f1, 0x94(r31)
/* 80152EE8 0014FFC8  80 83 07 04 */	lwz r4, 0x704(r3)
/* 80152EEC 0014FFCC  38 65 A2 40 */	addi r3, r5, "boss_cam__27@unnamed@zNPCTypePrawn_cpp@"@l
/* 80152EF0 0014FFD0  38 BF 00 88 */	addi r5, r31, 0x88
/* 80152EF4 0014FFD4  80 84 00 4C */	lwz r4, 0x4c(r4)
/* 80152EF8 0014FFD8  38 84 00 30 */	addi r4, r4, 0x30
/* 80152EFC 0014FFDC  4B FF 36 85 */	bl set_targets__13xBinaryCameraFRC5xVec3RC5xVec3f
.L_80152F00:
/* 80152F00 0014FFE0  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80152F04 0014FFE4  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80152F08 0014FFE8  7C 08 03 A6 */	mtlr r0
/* 80152F0C 0014FFEC  38 21 00 10 */	addi r1, r1, 0x10
/* 80152F10 0014FFF0  4E 80 00 20 */	blr
.endfn start_fight__9zNPCPrawnFv

# zNPCPrawn::get_floor_info(zNPCPrawn::floor_state_enum, zNPCPrawn::range_type&, float&, float&)
.fn get_floor_info__9zNPCPrawnFQ29zNPCPrawn16floor_state_enumRQ29zNPCPrawn10range_typeRfRf, global
/* 80152F14 0014FFF4  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 80152F18 0014FFF8  7C 08 02 A6 */	mflr r0
/* 80152F1C 0014FFFC  2C 04 00 03 */	cmpwi r4, 0x3
/* 80152F20 00150000  90 01 00 24 */	stw r0, 0x24(r1)
/* 80152F24 00150004  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 80152F28 00150008  7C FF 3B 78 */	mr r31, r7
/* 80152F2C 0015000C  93 C1 00 18 */	stw r30, 0x18(r1)
/* 80152F30 00150010  7C DE 33 78 */	mr r30, r6
/* 80152F34 00150014  93 A1 00 14 */	stw r29, 0x14(r1)
/* 80152F38 00150018  7C BD 2B 78 */	mr r29, r5
/* 80152F3C 0015001C  93 81 00 10 */	stw r28, 0x10(r1)
/* 80152F40 00150020  7C 7C 1B 78 */	mr r28, r3
/* 80152F44 00150024  41 82 00 B8 */	beq .L_80152FFC
/* 80152F48 00150028  40 80 00 1C */	bge .L_80152F64
/* 80152F4C 0015002C  2C 04 00 01 */	cmpwi r4, 0x1
/* 80152F50 00150030  41 82 00 4C */	beq .L_80152F9C
/* 80152F54 00150034  40 80 00 78 */	bge .L_80152FCC
/* 80152F58 00150038  2C 04 00 00 */	cmpwi r4, 0x0
/* 80152F5C 0015003C  40 80 00 18 */	bge .L_80152F74
/* 80152F60 00150040  48 00 01 B4 */	b .L_80153114
.L_80152F64:
/* 80152F64 00150044  2C 04 00 05 */	cmpwi r4, 0x5
/* 80152F68 00150048  41 82 01 3C */	beq .L_801530A4
/* 80152F6C 0015004C  40 80 01 A8 */	bge .L_80153114
/* 80152F70 00150050  48 00 00 EC */	b .L_8015305C
.L_80152F74:
/* 80152F74 00150054  3C 80 80 33 */	lis r4, "tweak__27@unnamed@zNPCTypePrawn_cpp@"@ha
/* 80152F78 00150058  7F A3 EB 78 */	mr r3, r29
/* 80152F7C 0015005C  38 84 95 E0 */	addi r4, r4, "tweak__27@unnamed@zNPCTypePrawn_cpp@"@l
/* 80152F80 00150060  38 84 00 0C */	addi r4, r4, 0xc
/* 80152F84 00150064  48 00 01 B1 */	bl __as__Q29zNPCPrawn10range_typeFRCQ29zNPCPrawn10range_type
/* 80152F88 00150068  C0 02 A7 6C */	lfs f0, "@1053"@sda21(r2)
/* 80152F8C 0015006C  D0 1E 00 00 */	stfs f0, 0x0(r30)
/* 80152F90 00150070  C0 02 A8 20 */	lfs f0, "@2034"@sda21(r2)
/* 80152F94 00150074  D0 1F 00 00 */	stfs f0, 0x0(r31)
/* 80152F98 00150078  48 00 01 7C */	b .L_80153114
.L_80152F9C:
/* 80152F9C 0015007C  3C 80 80 33 */	lis r4, "tweak__27@unnamed@zNPCTypePrawn_cpp@"@ha
/* 80152FA0 00150080  7F A3 EB 78 */	mr r3, r29
/* 80152FA4 00150084  38 84 95 E0 */	addi r4, r4, "tweak__27@unnamed@zNPCTypePrawn_cpp@"@l
/* 80152FA8 00150088  38 84 00 14 */	addi r4, r4, 0x14
/* 80152FAC 0015008C  48 00 01 89 */	bl __as__Q29zNPCPrawn10range_typeFRCQ29zNPCPrawn10range_type
/* 80152FB0 00150090  3C 60 80 33 */	lis r3, "tweak__27@unnamed@zNPCTypePrawn_cpp@"@ha
/* 80152FB4 00150094  38 63 95 E0 */	addi r3, r3, "tweak__27@unnamed@zNPCTypePrawn_cpp@"@l
/* 80152FB8 00150098  C0 03 00 20 */	lfs f0, 0x20(r3)
/* 80152FBC 0015009C  D0 1E 00 00 */	stfs f0, 0x0(r30)
/* 80152FC0 001500A0  C0 03 00 1C */	lfs f0, 0x1c(r3)
/* 80152FC4 001500A4  D0 1F 00 00 */	stfs f0, 0x0(r31)
/* 80152FC8 001500A8  48 00 01 4C */	b .L_80153114
.L_80152FCC:
/* 80152FCC 001500AC  3C 80 80 33 */	lis r4, "tweak__27@unnamed@zNPCTypePrawn_cpp@"@ha
/* 80152FD0 001500B0  7F A3 EB 78 */	mr r3, r29
/* 80152FD4 001500B4  38 84 95 E0 */	addi r4, r4, "tweak__27@unnamed@zNPCTypePrawn_cpp@"@l
/* 80152FD8 001500B8  38 84 00 30 */	addi r4, r4, 0x30
/* 80152FDC 001500BC  48 00 01 59 */	bl __as__Q29zNPCPrawn10range_typeFRCQ29zNPCPrawn10range_type
/* 80152FE0 001500C0  3C 60 80 33 */	lis r3, "tweak__27@unnamed@zNPCTypePrawn_cpp@"@ha
/* 80152FE4 001500C4  38 63 95 E0 */	addi r3, r3, "tweak__27@unnamed@zNPCTypePrawn_cpp@"@l
/* 80152FE8 001500C8  C0 03 00 3C */	lfs f0, 0x3c(r3)
/* 80152FEC 001500CC  D0 1E 00 00 */	stfs f0, 0x0(r30)
/* 80152FF0 001500D0  C0 03 00 38 */	lfs f0, 0x38(r3)
/* 80152FF4 001500D4  D0 1F 00 00 */	stfs f0, 0x0(r31)
/* 80152FF8 001500D8  48 00 01 1C */	b .L_80153114
.L_80152FFC:
/* 80152FFC 001500DC  4B ED DC 6D */	bl xrand__Fv
/* 80153000 001500E0  3C 80 80 33 */	lis r4, "tweak__27@unnamed@zNPCTypePrawn_cpp@"@ha
/* 80153004 001500E4  38 A4 95 E0 */	addi r5, r4, "tweak__27@unnamed@zNPCTypePrawn_cpp@"@l
/* 80153008 001500E8  80 85 00 D0 */	lwz r4, 0xd0(r5)
/* 8015300C 001500EC  7C 03 23 96 */	divwu r0, r3, r4
/* 80153010 001500F0  7C 00 21 D6 */	mullw r0, r0, r4
/* 80153014 001500F4  7C 00 18 50 */	subf r0, r0, r3
/* 80153018 001500F8  90 1C 02 E4 */	stw r0, 0x2e4(r28)
/* 8015301C 001500FC  80 7C 02 E4 */	lwz r3, 0x2e4(r28)
/* 80153020 00150100  80 05 00 CC */	lwz r0, 0xcc(r5)
/* 80153024 00150104  80 85 00 C4 */	lwz r4, 0xc4(r5)
/* 80153028 00150108  7C 03 01 D6 */	mullw r0, r3, r0
/* 8015302C 0015010C  7C 04 02 14 */	add r0, r4, r0
/* 80153030 00150110  90 1D 00 00 */	stw r0, 0x0(r29)
/* 80153034 00150114  80 65 00 C8 */	lwz r3, 0xc8(r5)
/* 80153038 00150118  80 9D 00 00 */	lwz r4, 0x0(r29)
/* 8015303C 0015011C  38 03 FF FF */	addi r0, r3, -0x1
/* 80153040 00150120  7C 04 02 14 */	add r0, r4, r0
/* 80153044 00150124  90 1D 00 04 */	stw r0, 0x4(r29)
/* 80153048 00150128  C0 05 00 C0 */	lfs f0, 0xc0(r5)
/* 8015304C 0015012C  D0 1E 00 00 */	stfs f0, 0x0(r30)
/* 80153050 00150130  C0 05 00 BC */	lfs f0, 0xbc(r5)
/* 80153054 00150134  D0 1F 00 00 */	stfs f0, 0x0(r31)
/* 80153058 00150138  48 00 00 BC */	b .L_80153114
.L_8015305C:
/* 8015305C 0015013C  3C 80 80 33 */	lis r4, "tweak__27@unnamed@zNPCTypePrawn_cpp@"@ha
/* 80153060 00150140  80 7C 02 E4 */	lwz r3, 0x2e4(r28)
/* 80153064 00150144  38 A4 95 E0 */	addi r5, r4, "tweak__27@unnamed@zNPCTypePrawn_cpp@"@l
/* 80153068 00150148  80 05 00 F0 */	lwz r0, 0xf0(r5)
/* 8015306C 0015014C  80 85 00 E8 */	lwz r4, 0xe8(r5)
/* 80153070 00150150  7C 03 01 D6 */	mullw r0, r3, r0
/* 80153074 00150154  7C 04 02 14 */	add r0, r4, r0
/* 80153078 00150158  90 1D 00 00 */	stw r0, 0x0(r29)
/* 8015307C 0015015C  80 65 00 EC */	lwz r3, 0xec(r5)
/* 80153080 00150160  80 9D 00 00 */	lwz r4, 0x0(r29)
/* 80153084 00150164  38 03 FF FF */	addi r0, r3, -0x1
/* 80153088 00150168  7C 04 02 14 */	add r0, r4, r0
/* 8015308C 0015016C  90 1D 00 04 */	stw r0, 0x4(r29)
/* 80153090 00150170  C0 05 00 E4 */	lfs f0, 0xe4(r5)
/* 80153094 00150174  D0 1E 00 00 */	stfs f0, 0x0(r30)
/* 80153098 00150178  C0 05 00 E0 */	lfs f0, 0xe0(r5)
/* 8015309C 0015017C  D0 1F 00 00 */	stfs f0, 0x0(r31)
/* 801530A0 00150180  48 00 00 74 */	b .L_80153114
.L_801530A4:
/* 801530A4 00150184  4B ED DB C5 */	bl xrand__Fv
/* 801530A8 00150188  3C 80 80 33 */	lis r4, "tweak__27@unnamed@zNPCTypePrawn_cpp@"@ha
/* 801530AC 0015018C  38 A4 95 E0 */	addi r5, r4, "tweak__27@unnamed@zNPCTypePrawn_cpp@"@l
/* 801530B0 00150190  80 85 01 08 */	lwz r4, 0x108(r5)
/* 801530B4 00150194  7C 03 23 96 */	divwu r0, r3, r4
/* 801530B8 00150198  7C 00 21 D6 */	mullw r0, r0, r4
/* 801530BC 0015019C  7C 00 18 50 */	subf r0, r0, r3
/* 801530C0 001501A0  7F A3 EB 78 */	mr r3, r29
/* 801530C4 001501A4  90 1C 02 E4 */	stw r0, 0x2e4(r28)
/* 801530C8 001501A8  80 1C 02 E4 */	lwz r0, 0x2e4(r28)
/* 801530CC 001501AC  54 00 18 38 */	slwi r0, r0, 3
/* 801530D0 001501B0  7C 85 02 14 */	add r4, r5, r0
/* 801530D4 001501B4  38 84 01 0C */	addi r4, r4, 0x10c
/* 801530D8 001501B8  48 00 00 5D */	bl __as__Q29zNPCPrawn10range_typeFRCQ29zNPCPrawn10range_type
/* 801530DC 001501BC  3C 60 80 33 */	lis r3, "tweak__27@unnamed@zNPCTypePrawn_cpp@"@ha
/* 801530E0 001501C0  80 BD 00 00 */	lwz r5, 0x0(r29)
/* 801530E4 001501C4  38 83 95 E0 */	addi r4, r3, "tweak__27@unnamed@zNPCTypePrawn_cpp@"@l
/* 801530E8 001501C8  80 04 01 04 */	lwz r0, 0x104(r4)
/* 801530EC 001501CC  7C 05 02 14 */	add r0, r5, r0
/* 801530F0 001501D0  90 1D 00 00 */	stw r0, 0x0(r29)
/* 801530F4 001501D4  80 7D 00 04 */	lwz r3, 0x4(r29)
/* 801530F8 001501D8  80 04 01 04 */	lwz r0, 0x104(r4)
/* 801530FC 001501DC  7C 03 02 14 */	add r0, r3, r0
/* 80153100 001501E0  90 1D 00 04 */	stw r0, 0x4(r29)
/* 80153104 001501E4  C0 04 00 FC */	lfs f0, 0xfc(r4)
/* 80153108 001501E8  D0 1E 00 00 */	stfs f0, 0x0(r30)
/* 8015310C 001501EC  C0 04 00 F8 */	lfs f0, 0xf8(r4)
/* 80153110 001501F0  D0 1F 00 00 */	stfs f0, 0x0(r31)
.L_80153114:
/* 80153114 001501F4  80 01 00 24 */	lwz r0, 0x24(r1)
/* 80153118 001501F8  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 8015311C 001501FC  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 80153120 00150200  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 80153124 00150204  83 81 00 10 */	lwz r28, 0x10(r1)
/* 80153128 00150208  7C 08 03 A6 */	mtlr r0
/* 8015312C 0015020C  38 21 00 20 */	addi r1, r1, 0x20
/* 80153130 00150210  4E 80 00 20 */	blr
.endfn get_floor_info__9zNPCPrawnFQ29zNPCPrawn16floor_state_enumRQ29zNPCPrawn10range_typeRfRf

# zNPCPrawn::range_type::operator=(const zNPCPrawn::range_type&)
.fn __as__Q29zNPCPrawn10range_typeFRCQ29zNPCPrawn10range_type, weak
/* 80153134 00150214  80 A4 00 00 */	lwz r5, 0x0(r4)
/* 80153138 00150218  80 04 00 04 */	lwz r0, 0x4(r4)
/* 8015313C 0015021C  90 A3 00 00 */	stw r5, 0x0(r3)
/* 80153140 00150220  90 03 00 04 */	stw r0, 0x4(r3)
/* 80153144 00150224  4E 80 00 20 */	blr
.endfn __as__Q29zNPCPrawn10range_typeFRCQ29zNPCPrawn10range_type

# zNPCPrawn::apply_pending()
.fn apply_pending__9zNPCPrawnFv, global
/* 80153148 00150228  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8015314C 0015022C  7C 08 02 A6 */	mflr r0
/* 80153150 00150230  38 C0 00 00 */	li r6, 0x0
/* 80153154 00150234  90 01 00 14 */	stw r0, 0x14(r1)
/* 80153158 00150238  38 00 00 00 */	li r0, 0x0
/* 8015315C 0015023C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80153160 00150240  7C 7F 1B 78 */	mr r31, r3
/* 80153164 00150244  98 03 02 F8 */	stb r0, 0x2f8(r3)
/* 80153168 00150248  80 63 02 CC */	lwz r3, 0x2cc(r3)
/* 8015316C 0015024C  80 9F 03 04 */	lwz r4, 0x304(r31)
/* 80153170 00150250  80 BF 03 08 */	lwz r5, 0x308(r31)
/* 80153174 00150254  4B FE 94 85 */	bl set_state_range__13z_disco_floorFiib
/* 80153178 00150258  80 7F 02 CC */	lwz r3, 0x2cc(r31)
/* 8015317C 0015025C  C0 3F 03 0C */	lfs f1, 0x30c(r31)
/* 80153180 00150260  4B FE 95 61 */	bl set_transition_delay__13z_disco_floorFf
/* 80153184 00150264  80 7F 02 CC */	lwz r3, 0x2cc(r31)
/* 80153188 00150268  C0 3F 03 10 */	lfs f1, 0x310(r31)
/* 8015318C 0015026C  4B FE 95 5D */	bl set_state_delay__13z_disco_floorFf
/* 80153190 00150270  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80153194 00150274  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80153198 00150278  7C 08 03 A6 */	mtlr r0
/* 8015319C 0015027C  38 21 00 10 */	addi r1, r1, 0x10
/* 801531A0 00150280  4E 80 00 20 */	blr
.endfn apply_pending__9zNPCPrawnFv

# zNPCPrawn::set_floor_state(zNPCPrawn::floor_state_enum, bool, bool)
.fn set_floor_state__9zNPCPrawnFQ29zNPCPrawn16floor_state_enumbb, global
/* 801531A4 00150284  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801531A8 00150288  7C 08 02 A6 */	mflr r0
/* 801531AC 0015028C  90 01 00 14 */	stw r0, 0x14(r1)
/* 801531B0 00150290  93 E1 00 0C */	stw r31, 0xc(r1)
/* 801531B4 00150294  7C BF 2B 78 */	mr r31, r5
/* 801531B8 00150298  93 C1 00 08 */	stw r30, 0x8(r1)
/* 801531BC 0015029C  7C 7E 1B 78 */	mr r30, r3
/* 801531C0 001502A0  80 03 02 E0 */	lwz r0, 0x2e0(r3)
/* 801531C4 001502A4  7C 04 00 00 */	cmpw r4, r0
/* 801531C8 001502A8  40 82 00 0C */	bne .L_801531D4
/* 801531CC 001502AC  54 C0 06 3F */	clrlwi. r0, r6, 24
/* 801531D0 001502B0  41 82 00 74 */	beq .L_80153244
.L_801531D4:
/* 801531D4 001502B4  90 9E 02 FC */	stw r4, 0x2fc(r30)
/* 801531D8 001502B8  7F C3 F3 78 */	mr r3, r30
/* 801531DC 001502BC  38 BE 03 04 */	addi r5, r30, 0x304
/* 801531E0 001502C0  38 DE 03 0C */	addi r6, r30, 0x30c
/* 801531E4 001502C4  38 FE 03 10 */	addi r7, r30, 0x310
/* 801531E8 001502C8  4B FF FD 2D */	bl get_floor_info__9zNPCPrawnFQ29zNPCPrawn16floor_state_enumRQ29zNPCPrawn10range_typeRfRf
/* 801531EC 001502CC  57 E0 06 3F */	clrlwi. r0, r31, 24
/* 801531F0 001502D0  41 82 00 10 */	beq .L_80153200
/* 801531F4 001502D4  7F C3 F3 78 */	mr r3, r30
/* 801531F8 001502D8  4B FF FF 51 */	bl apply_pending__9zNPCPrawnFv
/* 801531FC 001502DC  48 00 00 48 */	b .L_80153244
.L_80153200:
/* 80153200 001502E0  80 9E 02 CC */	lwz r4, 0x2cc(r30)
/* 80153204 001502E4  80 64 00 48 */	lwz r3, 0x48(r4)
/* 80153208 001502E8  80 04 00 40 */	lwz r0, 0x40(r4)
/* 8015320C 001502EC  7C 03 00 40 */	cmplw r3, r0
/* 80153210 001502F0  41 80 00 10 */	blt .L_80153220
/* 80153214 001502F4  80 04 00 44 */	lwz r0, 0x44(r4)
/* 80153218 001502F8  7C 03 00 40 */	cmplw r3, r0
/* 8015321C 001502FC  40 81 00 0C */	ble .L_80153228
.L_80153220:
/* 80153220 00150300  38 A0 00 01 */	li r5, 0x1
/* 80153224 00150304  48 00 00 0C */	b .L_80153230
.L_80153228:
/* 80153228 00150308  7C 63 00 50 */	subf r3, r3, r0
/* 8015322C 0015030C  38 A3 00 01 */	addi r5, r3, 0x1
.L_80153230:
/* 80153230 00150310  80 64 00 50 */	lwz r3, 0x50(r4)
/* 80153234 00150314  38 00 00 01 */	li r0, 0x1
/* 80153238 00150318  7C 63 2A 14 */	add r3, r3, r5
/* 8015323C 0015031C  90 7E 03 00 */	stw r3, 0x300(r30)
/* 80153240 00150320  98 1E 02 F8 */	stb r0, 0x2f8(r30)
.L_80153244:
/* 80153244 00150324  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80153248 00150328  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8015324C 0015032C  83 C1 00 08 */	lwz r30, 0x8(r1)
/* 80153250 00150330  7C 08 03 A6 */	mtlr r0
/* 80153254 00150334  38 21 00 10 */	addi r1, r1, 0x10
/* 80153258 00150338  4E 80 00 20 */	blr
.endfn set_floor_state__9zNPCPrawnFQ29zNPCPrawn16floor_state_enumbb

# zNPCPrawn::vanish()
.fn vanish__9zNPCPrawnFv, global
/* 8015325C 0015033C  80 A3 00 24 */	lwz r5, 0x24(r3)
/* 80153260 00150340  38 00 00 00 */	li r0, 0x0
/* 80153264 00150344  A0 85 00 44 */	lhz r4, 0x44(r5)
/* 80153268 00150348  54 84 04 3A */	rlwinm r4, r4, 0, 16, 29
/* 8015326C 0015034C  B0 85 00 44 */	sth r4, 0x44(r5)
/* 80153270 00150350  88 83 00 18 */	lbz r4, 0x18(r3)
/* 80153274 00150354  54 84 06 3C */	rlwinm r4, r4, 0, 24, 30
/* 80153278 00150358  98 83 00 18 */	stb r4, 0x18(r3)
/* 8015327C 0015035C  88 83 00 18 */	lbz r4, 0x18(r3)
/* 80153280 00150360  60 84 00 40 */	ori r4, r4, 0x40
/* 80153284 00150364  98 83 00 18 */	stb r4, 0x18(r3)
/* 80153288 00150368  98 03 00 1B */	stb r0, 0x1b(r3)
/* 8015328C 0015036C  98 03 00 1C */	stb r0, 0x1c(r3)
/* 80153290 00150370  98 03 00 22 */	stb r0, 0x22(r3)
/* 80153294 00150374  98 03 00 23 */	stb r0, 0x23(r3)
/* 80153298 00150378  98 03 00 F0 */	stb r0, 0xf0(r3)
/* 8015329C 0015037C  98 03 00 F1 */	stb r0, 0xf1(r3)
/* 801532A0 00150380  4E 80 00 20 */	blr
.endfn vanish__9zNPCPrawnFv

# zNPCPrawn::reappear()
.fn reappear__9zNPCPrawnFv, global
/* 801532A4 00150384  80 C3 00 24 */	lwz r6, 0x24(r3)
/* 801532A8 00150388  38 80 00 00 */	li r4, 0x0
/* 801532AC 0015038C  38 00 00 10 */	li r0, 0x10
/* 801532B0 00150390  A0 A6 00 44 */	lhz r5, 0x44(r6)
/* 801532B4 00150394  60 A5 00 03 */	ori r5, r5, 0x3
/* 801532B8 00150398  B0 A6 00 44 */	sth r5, 0x44(r6)
/* 801532BC 0015039C  88 A3 00 18 */	lbz r5, 0x18(r3)
/* 801532C0 001503A0  60 A5 00 01 */	ori r5, r5, 0x1
/* 801532C4 001503A4  98 A3 00 18 */	stb r5, 0x18(r3)
/* 801532C8 001503A8  88 A3 00 18 */	lbz r5, 0x18(r3)
/* 801532CC 001503AC  70 A5 00 BF */	andi. r5, r5, 0xbf
/* 801532D0 001503B0  98 A3 00 18 */	stb r5, 0x18(r3)
/* 801532D4 001503B4  98 83 00 1B */	stb r4, 0x1b(r3)
/* 801532D8 001503B8  98 03 00 1C */	stb r0, 0x1c(r3)
/* 801532DC 001503BC  98 03 00 22 */	stb r0, 0x22(r3)
/* 801532E0 001503C0  98 03 00 23 */	stb r0, 0x23(r3)
/* 801532E4 001503C4  98 83 00 F0 */	stb r4, 0xf0(r3)
/* 801532E8 001503C8  98 83 00 F1 */	stb r4, 0xf1(r3)
/* 801532EC 001503CC  4E 80 00 20 */	blr
.endfn reappear__9zNPCPrawnFv

# zNPCPrawn::render_closeup()
.fn render_closeup__9zNPCPrawnFv, global
/* 801532F0 001503D0  94 21 FF D0 */	stwu r1, -0x30(r1)
/* 801532F4 001503D4  7C 08 02 A6 */	mflr r0
/* 801532F8 001503D8  90 01 00 34 */	stw r0, 0x34(r1)
/* 801532FC 001503DC  93 E1 00 2C */	stw r31, 0x2c(r1)
/* 80153300 001503E0  7C 7F 1B 78 */	mr r31, r3
/* 80153304 001503E4  93 C1 00 28 */	stw r30, 0x28(r1)
/* 80153308 001503E8  93 A1 00 24 */	stw r29, 0x24(r1)
/* 8015330C 001503EC  93 81 00 20 */	stw r28, 0x20(r1)
/* 80153310 001503F0  80 03 14 20 */	lwz r0, 0x1420(r3)
/* 80153314 001503F4  28 00 00 00 */	cmplwi r0, 0x0
/* 80153318 001503F8  41 82 01 24 */	beq .L_8015343C
/* 8015331C 001503FC  88 0D 96 D6 */	lbz r0, init$2074@sda21(r13)
/* 80153320 00150400  7C 00 07 75 */	extsb. r0, r0
/* 80153324 00150404  40 82 00 14 */	bne .L_80153338
/* 80153328 00150408  38 60 00 00 */	li r3, 0x0
/* 8015332C 0015040C  38 00 00 01 */	li r0, 0x1
/* 80153330 00150410  98 6D 96 D5 */	stb r3, registered$2073@sda21(r13)
/* 80153334 00150414  98 0D 96 D6 */	stb r0, init$2074@sda21(r13)
.L_80153338:
/* 80153338 00150418  88 0D 96 DC */	lbz r0, init$2077@sda21(r13)
/* 8015333C 0015041C  7C 00 07 75 */	extsb. r0, r0
/* 80153340 00150420  40 82 00 14 */	bne .L_80153354
/* 80153344 00150424  C0 02 A7 68 */	lfs f0, "@1052"@sda21(r2)
/* 80153348 00150428  38 00 00 01 */	li r0, 0x1
/* 8015334C 0015042C  D0 0D 96 D8 */	stfs f0, lerp$2076@sda21(r13)
/* 80153350 00150430  98 0D 96 DC */	stb r0, init$2077@sda21(r13)
.L_80153354:
/* 80153354 00150434  88 0D 96 D5 */	lbz r0, registered$2073@sda21(r13)
/* 80153358 00150438  28 00 00 00 */	cmplwi r0, 0x0
/* 8015335C 0015043C  40 82 00 54 */	bne .L_801533B0
/* 80153360 00150440  38 00 00 01 */	li r0, 0x1
/* 80153364 00150444  3C 80 80 27 */	lis r4, "@stringBase0"@ha
/* 80153368 00150448  3C 60 80 2A */	lis r3, from$2071@ha
/* 8015336C 0015044C  98 0D 96 D5 */	stb r0, registered$2073@sda21(r13)
/* 80153370 00150450  38 E4 E9 F0 */	addi r7, r4, "@stringBase0"@l
/* 80153374 00150454  38 A0 00 00 */	li r5, 0x0
/* 80153378 00150458  38 83 A2 A4 */	addi r4, r3, from$2071@l
/* 8015337C 0015045C  38 C0 00 00 */	li r6, 0x0
/* 80153380 00150460  38 67 07 BB */	addi r3, r7, 0x7bb
/* 80153384 00150464  38 E0 00 00 */	li r7, 0x0
/* 80153388 00150468  48 00 1A 4D */	bl xDebugAddTweak__FPCcP5xVec3PC14tweak_callbackPvUi
/* 8015338C 0015046C  3C 80 80 27 */	lis r4, "@stringBase0"@ha
/* 80153390 00150470  3C 60 80 2A */	lis r3, to$2072@ha
/* 80153394 00150474  38 E4 E9 F0 */	addi r7, r4, "@stringBase0"@l
/* 80153398 00150478  38 A0 00 00 */	li r5, 0x0
/* 8015339C 0015047C  38 83 A2 B0 */	addi r4, r3, to$2072@l
/* 801533A0 00150480  38 C0 00 00 */	li r6, 0x0
/* 801533A4 00150484  38 67 07 D5 */	addi r3, r7, 0x7d5
/* 801533A8 00150488  38 E0 00 00 */	li r7, 0x0
/* 801533AC 0015048C  48 00 1A 29 */	bl xDebugAddTweak__FPCcP5xVec3PC14tweak_callbackPvUi
.L_801533B0:
/* 801533B0 00150490  80 9F 00 24 */	lwz r4, 0x24(r31)
/* 801533B4 00150494  3C 60 80 2A */	lis r3, from$2071@ha
/* 801533B8 00150498  38 A3 A2 A4 */	addi r5, r3, from$2071@l
/* 801533BC 0015049C  83 A4 00 4C */	lwz r29, 0x4c(r4)
/* 801533C0 001504A0  38 61 00 14 */	addi r3, r1, 0x14
/* 801533C4 001504A4  7F A4 EB 78 */	mr r4, r29
/* 801533C8 001504A8  4B EB 7B A9 */	bl xMat4x3Toworld__FP5xVec3PC7xMat4x3PC5xVec3
/* 801533CC 001504AC  3C 60 80 2A */	lis r3, to$2072@ha
/* 801533D0 001504B0  7F A4 EB 78 */	mr r4, r29
/* 801533D4 001504B4  38 A3 A2 B0 */	addi r5, r3, to$2072@l
/* 801533D8 001504B8  38 61 00 08 */	addi r3, r1, 0x8
/* 801533DC 001504BC  4B EB 7B 95 */	bl xMat4x3Toworld__FP5xVec3PC7xMat4x3PC5xVec3
/* 801533E0 001504C0  3C 60 80 33 */	lis r3, "closeup__27@unnamed@zNPCTypePrawn_cpp@"@ha
/* 801533E4 001504C4  38 81 00 14 */	addi r4, r1, 0x14
/* 801533E8 001504C8  38 63 98 40 */	addi r3, r3, "closeup__27@unnamed@zNPCTypePrawn_cpp@"@l
/* 801533EC 001504CC  38 A1 00 08 */	addi r5, r1, 0x8
/* 801533F0 001504D0  48 00 03 4D */	bl "move__Q227@unnamed@zNPCTypePrawn_cpp@10televisionFRC5xVec3RC5xVec3"
/* 801533F4 001504D4  3C 60 80 33 */	lis r3, "closeup__27@unnamed@zNPCTypePrawn_cpp@"@ha
/* 801533F8 001504D8  80 9F 00 24 */	lwz r4, 0x24(r31)
/* 801533FC 001504DC  80 BF 00 30 */	lwz r5, 0x30(r31)
/* 80153400 001504E0  38 63 98 40 */	addi r3, r3, "closeup__27@unnamed@zNPCTypePrawn_cpp@"@l
/* 80153404 001504E4  48 00 00 E9 */	bl "update__Q227@unnamed@zNPCTypePrawn_cpp@10televisionFR14xModelInstanceP9xLightKit"
/* 80153408 001504E8  3C 60 80 33 */	lis r3, "closeup__27@unnamed@zNPCTypePrawn_cpp@"@ha
/* 8015340C 001504EC  7F FD FB 78 */	mr r29, r31
/* 80153410 001504F0  3B C3 98 40 */	addi r30, r3, "closeup__27@unnamed@zNPCTypePrawn_cpp@"@l
/* 80153414 001504F4  3B 80 00 00 */	li r28, 0x0
/* 80153418 001504F8  48 00 00 18 */	b .L_80153430
.L_8015341C:
/* 8015341C 001504FC  80 9D 14 00 */	lwz r4, 0x1400(r29)
/* 80153420 00150500  7F C3 F3 78 */	mr r3, r30
/* 80153424 00150504  48 00 00 39 */	bl "set_model_texture__Q227@unnamed@zNPCTypePrawn_cpp@10televisionFR14xModelInstance"
/* 80153428 00150508  3B BD 00 04 */	addi r29, r29, 0x4
/* 8015342C 0015050C  3B 9C 00 01 */	addi r28, r28, 0x1
.L_80153430:
/* 80153430 00150510  80 1F 14 20 */	lwz r0, 0x1420(r31)
/* 80153434 00150514  7C 1C 00 40 */	cmplw r28, r0
/* 80153438 00150518  41 80 FF E4 */	blt .L_8015341C
.L_8015343C:
/* 8015343C 0015051C  80 01 00 34 */	lwz r0, 0x34(r1)
/* 80153440 00150520  83 E1 00 2C */	lwz r31, 0x2c(r1)
/* 80153444 00150524  83 C1 00 28 */	lwz r30, 0x28(r1)
/* 80153448 00150528  83 A1 00 24 */	lwz r29, 0x24(r1)
/* 8015344C 0015052C  83 81 00 20 */	lwz r28, 0x20(r1)
/* 80153450 00150530  7C 08 03 A6 */	mtlr r0
/* 80153454 00150534  38 21 00 30 */	addi r1, r1, 0x30
/* 80153458 00150538  4E 80 00 20 */	blr
.endfn render_closeup__9zNPCPrawnFv

# @unnamed@zNPCTypePrawn_cpp@::television::set_model_texture(xModelInstance&)
.fn "set_model_texture__Q227@unnamed@zNPCTypePrawn_cpp@10televisionFR14xModelInstance", local
/* 8015345C 0015053C  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 80153460 00150540  7C 08 02 A6 */	mflr r0
/* 80153464 00150544  90 01 00 24 */	stw r0, 0x24(r1)
/* 80153468 00150548  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 8015346C 0015054C  3B E0 00 00 */	li r31, 0x0
/* 80153470 00150550  93 C1 00 18 */	stw r30, 0x18(r1)
/* 80153474 00150554  3B C0 00 00 */	li r30, 0x0
/* 80153478 00150558  93 A1 00 14 */	stw r29, 0x14(r1)
/* 8015347C 0015055C  7C 9D 23 78 */	mr r29, r4
/* 80153480 00150560  93 81 00 10 */	stw r28, 0x10(r1)
/* 80153484 00150564  7C 7C 1B 78 */	mr r28, r3
.L_80153488:
/* 80153488 00150568  80 7D 00 34 */	lwz r3, 0x34(r29)
/* 8015348C 0015056C  7C 63 F8 2E */	lwzx r3, r3, r31
/* 80153490 00150570  80 63 00 00 */	lwz r3, 0x0(r3)
/* 80153494 00150574  80 63 00 18 */	lwz r3, 0x18(r3)
/* 80153498 00150578  28 03 00 00 */	cmplwi r3, 0x0
/* 8015349C 0015057C  41 82 00 30 */	beq .L_801534CC
/* 801534A0 00150580  80 03 00 24 */	lwz r0, 0x24(r3)
/* 801534A4 00150584  2C 00 00 00 */	cmpwi r0, 0x0
/* 801534A8 00150588  40 81 00 24 */	ble .L_801534CC
/* 801534AC 0015058C  80 63 00 20 */	lwz r3, 0x20(r3)
/* 801534B0 00150590  80 9C 00 10 */	lwz r4, 0x10(r28)
/* 801534B4 00150594  80 63 00 00 */	lwz r3, 0x0(r3)
/* 801534B8 00150598  48 0C 47 E1 */	bl RpMaterialSetTexture
/* 801534BC 0015059C  3B DE 00 01 */	addi r30, r30, 0x1
/* 801534C0 001505A0  3B FF 00 04 */	addi r31, r31, 0x4
/* 801534C4 001505A4  2C 1E 00 02 */	cmpwi r30, 0x2
/* 801534C8 001505A8  41 80 FF C0 */	blt .L_80153488
.L_801534CC:
/* 801534CC 001505AC  80 01 00 24 */	lwz r0, 0x24(r1)
/* 801534D0 001505B0  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 801534D4 001505B4  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 801534D8 001505B8  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 801534DC 001505BC  83 81 00 10 */	lwz r28, 0x10(r1)
/* 801534E0 001505C0  7C 08 03 A6 */	mtlr r0
/* 801534E4 001505C4  38 21 00 20 */	addi r1, r1, 0x20
/* 801534E8 001505C8  4E 80 00 20 */	blr
.endfn "set_model_texture__Q227@unnamed@zNPCTypePrawn_cpp@10televisionFR14xModelInstance"

# @unnamed@zNPCTypePrawn_cpp@::television::update(xModelInstance&, xLightKit*)
.fn "update__Q227@unnamed@zNPCTypePrawn_cpp@10televisionFR14xModelInstanceP9xLightKit", local
/* 801534EC 001505CC  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 801534F0 001505D0  7C 08 02 A6 */	mflr r0
/* 801534F4 001505D4  90 01 00 24 */	stw r0, 0x24(r1)
/* 801534F8 001505D8  BF 61 00 0C */	stmw r27, 0xc(r1)
/* 801534FC 001505DC  7C 7B 1B 78 */	mr r27, r3
/* 80153500 001505E0  7C 9C 23 78 */	mr r28, r4
/* 80153504 001505E4  7C BD 2B 78 */	mr r29, r5
/* 80153508 001505E8  80 CD 9F 7C */	lwz r6, RwEngineInstance@sda21(r13)
/* 8015350C 001505EC  83 E6 00 00 */	lwz r31, 0x0(r6)
/* 80153510 001505F0  28 1F 00 00 */	cmplwi r31, 0x0
/* 80153514 001505F4  41 82 00 18 */	beq .L_8015352C
/* 80153518 001505F8  7F E3 FB 78 */	mr r3, r31
/* 8015351C 001505FC  48 0E 40 6D */	bl RwCameraEndUpdate
/* 80153520 00150600  80 7F 00 60 */	lwz r3, 0x60(r31)
/* 80153524 00150604  38 80 00 00 */	li r4, 0x0
/* 80153528 00150608  48 0F 32 69 */	bl RwGameCubeCameraTextureFlush
.L_8015352C:
/* 8015352C 0015060C  80 1B 00 08 */	lwz r0, 0x8(r27)
/* 80153530 00150610  28 00 00 00 */	cmplwi r0, 0x0
/* 80153534 00150614  40 82 00 18 */	bne .L_8015354C
/* 80153538 00150618  80 7B 00 00 */	lwz r3, 0x0(r27)
/* 8015353C 0015061C  38 9B 00 18 */	addi r4, r27, 0x18
/* 80153540 00150620  38 A0 00 03 */	li r5, 0x3
/* 80153544 00150624  48 0E 43 6D */	bl RwCameraClear
/* 80153548 00150628  48 00 00 14 */	b .L_8015355C
.L_8015354C:
/* 8015354C 0015062C  80 7B 00 00 */	lwz r3, 0x0(r27)
/* 80153550 00150630  38 9B 00 18 */	addi r4, r27, 0x18
/* 80153554 00150634  38 A0 00 02 */	li r5, 0x2
/* 80153558 00150638  48 0E 43 59 */	bl RwCameraClear
.L_8015355C:
/* 8015355C 0015063C  80 7B 00 00 */	lwz r3, 0x0(r27)
/* 80153560 00150640  48 0E 40 51 */	bl RwCameraBeginUpdate
/* 80153564 00150644  80 1B 00 08 */	lwz r0, 0x8(r27)
/* 80153568 00150648  28 00 00 00 */	cmplwi r0, 0x0
/* 8015356C 0015064C  41 82 00 0C */	beq .L_80153578
/* 80153570 00150650  7F 63 DB 78 */	mr r3, r27
/* 80153574 00150654  48 00 00 A9 */	bl "render_background__Q227@unnamed@zNPCTypePrawn_cpp@10televisionFv"
.L_80153578:
/* 80153578 00150658  38 60 00 01 */	li r3, 0x1
/* 8015357C 0015065C  4B F5 94 81 */	bl zRenderState__F14_SDRenderState
/* 80153580 00150660  28 1D 00 00 */	cmplwi r29, 0x0
/* 80153584 00150664  41 82 00 10 */	beq .L_80153594
/* 80153588 00150668  80 9B 00 0C */	lwz r4, 0xc(r27)
/* 8015358C 0015066C  7F A3 EB 78 */	mr r3, r29
/* 80153590 00150670  4B FC FF 31 */	bl xLightKit_Enable__FP9xLightKitP7RpWorld
.L_80153594:
/* 80153594 00150674  7F 9E E3 78 */	mr r30, r28
/* 80153598 00150678  48 00 00 20 */	b .L_801535B8
.L_8015359C:
/* 8015359C 0015067C  A0 1C 00 44 */	lhz r0, 0x44(r28)
/* 801535A0 00150680  54 00 07 FF */	clrlwi. r0, r0, 31
/* 801535A4 00150684  41 82 00 10 */	beq .L_801535B4
/* 801535A8 00150688  80 7E 00 10 */	lwz r3, 0x10(r30)
/* 801535AC 0015068C  80 9E 00 4C */	lwz r4, 0x4c(r30)
/* 801535B0 00150690  4B F7 4B 41 */	bl iModelRender__FP8RpAtomicP11RwMatrixTag
.L_801535B4:
/* 801535B4 00150694  83 DE 00 00 */	lwz r30, 0x0(r30)
.L_801535B8:
/* 801535B8 00150698  28 1E 00 00 */	cmplwi r30, 0x0
/* 801535BC 0015069C  40 82 FF E0 */	bne .L_8015359C
/* 801535C0 001506A0  28 1D 00 00 */	cmplwi r29, 0x0
/* 801535C4 001506A4  41 82 00 10 */	beq .L_801535D4
/* 801535C8 001506A8  80 9B 00 0C */	lwz r4, 0xc(r27)
/* 801535CC 001506AC  38 60 00 00 */	li r3, 0x0
/* 801535D0 001506B0  4B FC FE F1 */	bl xLightKit_Enable__FP9xLightKitP7RpWorld
.L_801535D4:
/* 801535D4 001506B4  7F 63 DB 78 */	mr r3, r27
/* 801535D8 001506B8  48 00 00 41 */	bl "render_static__Q227@unnamed@zNPCTypePrawn_cpp@10televisionFv"
/* 801535DC 001506BC  80 7B 00 00 */	lwz r3, 0x0(r27)
/* 801535E0 001506C0  48 0E 3F A9 */	bl RwCameraEndUpdate
/* 801535E4 001506C4  80 7B 00 00 */	lwz r3, 0x0(r27)
/* 801535E8 001506C8  38 80 00 00 */	li r4, 0x0
/* 801535EC 001506CC  80 63 00 60 */	lwz r3, 0x60(r3)
/* 801535F0 001506D0  48 0F 31 A1 */	bl RwGameCubeCameraTextureFlush
/* 801535F4 001506D4  28 1F 00 00 */	cmplwi r31, 0x0
/* 801535F8 001506D8  41 82 00 0C */	beq .L_80153604
/* 801535FC 001506DC  7F E3 FB 78 */	mr r3, r31
/* 80153600 001506E0  48 0E 3F B1 */	bl RwCameraBeginUpdate
.L_80153604:
/* 80153604 001506E4  BB 61 00 0C */	lmw r27, 0xc(r1)
/* 80153608 001506E8  80 01 00 24 */	lwz r0, 0x24(r1)
/* 8015360C 001506EC  7C 08 03 A6 */	mtlr r0
/* 80153610 001506F0  38 21 00 20 */	addi r1, r1, 0x20
/* 80153614 001506F4  4E 80 00 20 */	blr
.endfn "update__Q227@unnamed@zNPCTypePrawn_cpp@10televisionFR14xModelInstanceP9xLightKit"

# @unnamed@zNPCTypePrawn_cpp@::television::render_static()
.fn "render_static__Q227@unnamed@zNPCTypePrawn_cpp@10televisionFv", local
/* 80153618 001506F8  4E 80 00 20 */	blr
.endfn "render_static__Q227@unnamed@zNPCTypePrawn_cpp@10televisionFv"

# @unnamed@zNPCTypePrawn_cpp@::television::render_background()
.fn "render_background__Q227@unnamed@zNPCTypePrawn_cpp@10televisionFv", local
/* 8015361C 001506FC  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80153620 00150700  7C 08 02 A6 */	mflr r0
/* 80153624 00150704  90 01 00 14 */	stw r0, 0x14(r1)
/* 80153628 00150708  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8015362C 0015070C  93 C1 00 08 */	stw r30, 0x8(r1)
/* 80153630 00150710  7C 7E 1B 78 */	mr r30, r3
/* 80153634 00150714  38 60 00 0D */	li r3, 0xd
/* 80153638 00150718  4B F5 93 C5 */	bl zRenderState__F14_SDRenderState
/* 8015363C 0015071C  80 9E 00 08 */	lwz r4, 0x8(r30)
/* 80153640 00150720  38 60 00 01 */	li r3, 0x1
/* 80153644 00150724  48 0D C1 99 */	bl RwRenderStateSet
/* 80153648 00150728  38 60 00 90 */	li r3, 0x90
/* 8015364C 0015072C  4B EE 04 0D */	bl xMemPushTemp__FUi
/* 80153650 00150730  C0 22 A7 6C */	lfs f1, "@1053"@sda21(r2)
/* 80153654 00150734  7C 7F 1B 78 */	mr r31, r3
/* 80153658 00150738  7F C3 F3 78 */	mr r3, r30
/* 8015365C 0015073C  FC 40 08 90 */	fmr f2, f1
/* 80153660 00150740  7F E4 FB 78 */	mr r4, r31
/* 80153664 00150744  FC 60 08 90 */	fmr f3, f1
/* 80153668 00150748  FC 80 08 90 */	fmr f4, f1
/* 8015366C 0015074C  48 00 00 A1 */	bl "set_vert__Q227@unnamed@zNPCTypePrawn_cpp@10televisionFR18rwGameCube2DVertexffff"
/* 80153670 00150750  C0 22 A7 6C */	lfs f1, "@1053"@sda21(r2)
/* 80153674 00150754  7F C3 F3 78 */	mr r3, r30
/* 80153678 00150758  C0 5E 00 24 */	lfs f2, 0x24(r30)
/* 8015367C 0015075C  38 9F 00 18 */	addi r4, r31, 0x18
/* 80153680 00150760  FC 60 08 90 */	fmr f3, f1
/* 80153684 00150764  C0 82 A7 68 */	lfs f4, "@1052"@sda21(r2)
/* 80153688 00150768  48 00 00 85 */	bl "set_vert__Q227@unnamed@zNPCTypePrawn_cpp@10televisionFR18rwGameCube2DVertexffff"
/* 8015368C 0015076C  C0 42 A7 6C */	lfs f2, "@1053"@sda21(r2)
/* 80153690 00150770  7F C3 F3 78 */	mr r3, r30
/* 80153694 00150774  C0 3E 00 20 */	lfs f1, 0x20(r30)
/* 80153698 00150778  38 9F 00 30 */	addi r4, r31, 0x30
/* 8015369C 0015077C  FC 80 10 90 */	fmr f4, f2
/* 801536A0 00150780  C0 62 A7 68 */	lfs f3, "@1052"@sda21(r2)
/* 801536A4 00150784  48 00 00 69 */	bl "set_vert__Q227@unnamed@zNPCTypePrawn_cpp@10televisionFR18rwGameCube2DVertexffff"
/* 801536A8 00150788  38 7F 00 48 */	addi r3, r31, 0x48
/* 801536AC 0015078C  38 9F 00 30 */	addi r4, r31, 0x30
/* 801536B0 00150790  4B EC D5 19 */	bl __as__18rwGameCube2DVertexFRC18rwGameCube2DVertex
/* 801536B4 00150794  38 7F 00 60 */	addi r3, r31, 0x60
/* 801536B8 00150798  38 9F 00 18 */	addi r4, r31, 0x18
/* 801536BC 0015079C  4B EC D5 0D */	bl __as__18rwGameCube2DVertexFRC18rwGameCube2DVertex
/* 801536C0 001507A0  C0 62 A7 68 */	lfs f3, "@1052"@sda21(r2)
/* 801536C4 001507A4  7F C3 F3 78 */	mr r3, r30
/* 801536C8 001507A8  C0 3E 00 20 */	lfs f1, 0x20(r30)
/* 801536CC 001507AC  38 9F 00 78 */	addi r4, r31, 0x78
/* 801536D0 001507B0  FC 80 18 90 */	fmr f4, f3
/* 801536D4 001507B4  C0 5E 00 24 */	lfs f2, 0x24(r30)
/* 801536D8 001507B8  48 00 00 35 */	bl "set_vert__Q227@unnamed@zNPCTypePrawn_cpp@10televisionFR18rwGameCube2DVertexffff"
/* 801536DC 001507BC  7F E4 FB 78 */	mr r4, r31
/* 801536E0 001507C0  38 60 00 03 */	li r3, 0x3
/* 801536E4 001507C4  38 A0 00 06 */	li r5, 0x6
/* 801536E8 001507C8  48 0D C1 AD */	bl RwIm2DRenderPrimitive
/* 801536EC 001507CC  7F E3 FB 78 */	mr r3, r31
/* 801536F0 001507D0  4B EE 03 95 */	bl xMemPopTemp__FPv
/* 801536F4 001507D4  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801536F8 001507D8  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 801536FC 001507DC  83 C1 00 08 */	lwz r30, 0x8(r1)
/* 80153700 001507E0  7C 08 03 A6 */	mtlr r0
/* 80153704 001507E4  38 21 00 10 */	addi r1, r1, 0x10
/* 80153708 001507E8  4E 80 00 20 */	blr
.endfn "render_background__Q227@unnamed@zNPCTypePrawn_cpp@10televisionFv"

# @unnamed@zNPCTypePrawn_cpp@::television::set_vert(rwGameCube2DVertex&, float, float, float, float)
.fn "set_vert__Q227@unnamed@zNPCTypePrawn_cpp@10televisionFR18rwGameCube2DVertexffff", local
/* 8015370C 001507EC  D0 24 00 00 */	stfs f1, 0x0(r4)
/* 80153710 001507F0  38 00 00 FF */	li r0, 0xff
/* 80153714 001507F4  D0 44 00 04 */	stfs f2, 0x4(r4)
/* 80153718 001507F8  C0 02 A7 68 */	lfs f0, "@1052"@sda21(r2)
/* 8015371C 001507FC  D0 04 00 08 */	stfs f0, 0x8(r4)
/* 80153720 00150800  D0 64 00 10 */	stfs f3, 0x10(r4)
/* 80153724 00150804  D0 84 00 14 */	stfs f4, 0x14(r4)
/* 80153728 00150808  98 04 00 0C */	stb r0, 0xc(r4)
/* 8015372C 0015080C  98 04 00 0D */	stb r0, 0xd(r4)
/* 80153730 00150810  98 04 00 0E */	stb r0, 0xe(r4)
/* 80153734 00150814  98 04 00 0F */	stb r0, 0xf(r4)
/* 80153738 00150818  4E 80 00 20 */	blr
.endfn "set_vert__Q227@unnamed@zNPCTypePrawn_cpp@10televisionFR18rwGameCube2DVertexffff"

# @unnamed@zNPCTypePrawn_cpp@::television::move(const xVec3&, const xVec3&)
.fn "move__Q227@unnamed@zNPCTypePrawn_cpp@10televisionFRC5xVec3RC5xVec3", local
/* 8015373C 0015081C  94 21 FF B0 */	stwu r1, -0x50(r1)
/* 80153740 00150820  7C 08 02 A6 */	mflr r0
/* 80153744 00150824  90 01 00 54 */	stw r0, 0x54(r1)
/* 80153748 00150828  93 E1 00 4C */	stw r31, 0x4c(r1)
/* 8015374C 0015082C  93 C1 00 48 */	stw r30, 0x48(r1)
/* 80153750 00150830  7C BE 2B 78 */	mr r30, r5
/* 80153754 00150834  38 A0 00 00 */	li r5, 0x0
/* 80153758 00150838  93 A1 00 44 */	stw r29, 0x44(r1)
/* 8015375C 0015083C  7C 9D 23 78 */	mr r29, r4
/* 80153760 00150840  80 63 00 00 */	lwz r3, 0x0(r3)
/* 80153764 00150844  83 E3 00 04 */	lwz r31, 0x4(r3)
/* 80153768 00150848  7F E3 FB 78 */	mr r3, r31
/* 8015376C 0015084C  48 0E 5B 75 */	bl RwFrameTranslate
/* 80153770 00150850  7F C4 F3 78 */	mr r4, r30
/* 80153774 00150854  7F A5 EB 78 */	mr r5, r29
/* 80153778 00150858  38 61 00 08 */	addi r3, r1, 0x8
/* 8015377C 0015085C  4B EB AD BD */	bl xMat3x3LookAt__FP7xMat3x3PC5xVec3PC5xVec3
/* 80153780 00150860  3B FF 00 10 */	addi r31, r31, 0x10
/* 80153784 00150864  38 81 00 08 */	addi r4, r1, 0x8
/* 80153788 00150868  7F E3 FB 78 */	mr r3, r31
/* 8015378C 0015086C  4B EB CA 9D */	bl __as__5RwV3dFRC5RwV3d
/* 80153790 00150870  38 7F 00 20 */	addi r3, r31, 0x20
/* 80153794 00150874  38 81 00 28 */	addi r4, r1, 0x28
/* 80153798 00150878  4B EB CA 91 */	bl __as__5RwV3dFRC5RwV3d
/* 8015379C 0015087C  38 7F 00 10 */	addi r3, r31, 0x10
/* 801537A0 00150880  38 81 00 18 */	addi r4, r1, 0x18
/* 801537A4 00150884  4B EB CA 85 */	bl __as__5RwV3dFRC5RwV3d
/* 801537A8 00150888  80 01 00 54 */	lwz r0, 0x54(r1)
/* 801537AC 0015088C  83 E1 00 4C */	lwz r31, 0x4c(r1)
/* 801537B0 00150890  83 C1 00 48 */	lwz r30, 0x48(r1)
/* 801537B4 00150894  83 A1 00 44 */	lwz r29, 0x44(r1)
/* 801537B8 00150898  7C 08 03 A6 */	mtlr r0
/* 801537BC 0015089C  38 21 00 50 */	addi r1, r1, 0x50
/* 801537C0 001508A0  4E 80 00 20 */	blr
.endfn "move__Q227@unnamed@zNPCTypePrawn_cpp@10televisionFRC5xVec3RC5xVec3"

# zNPCPrawn::set_life(int)
.fn set_life__9zNPCPrawnFi, global
/* 801537C4 001508A4  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 801537C8 001508A8  7C 08 02 A6 */	mflr r0
/* 801537CC 001508AC  90 01 00 24 */	stw r0, 0x24(r1)
/* 801537D0 001508B0  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 801537D4 001508B4  93 C1 00 18 */	stw r30, 0x18(r1)
/* 801537D8 001508B8  93 A1 00 14 */	stw r29, 0x14(r1)
/* 801537DC 001508BC  7C 7D 1B 78 */	mr r29, r3
/* 801537E0 001508C0  80 A3 01 D8 */	lwz r5, 0x1d8(r3)
/* 801537E4 001508C4  7C 83 23 78 */	mr r3, r4
/* 801537E8 001508C8  83 FD 02 B8 */	lwz r31, 0x2b8(r29)
/* 801537EC 001508CC  38 80 00 00 */	li r4, 0x0
/* 801537F0 001508D0  80 A5 00 2C */	lwz r5, 0x2c(r5)
/* 801537F4 001508D4  4B FE 98 41 */	bl "range_limit<i>__Fiii"
/* 801537F8 001508D8  90 7D 02 B8 */	stw r3, 0x2b8(r29)
/* 801537FC 001508DC  80 7D 02 28 */	lwz r3, 0x228(r29)
/* 80153800 001508E0  4B FB 9D C5 */	bl GIDOfActive__7xPsycheCFv
/* 80153804 001508E4  3C 03 B1 B9 */	addis r0, r3, 0xb1b9
/* 80153808 001508E8  28 00 4D 3B */	cmplwi r0, 0x4d3b
/* 8015380C 001508EC  41 82 00 80 */	beq .L_8015388C
/* 80153810 001508F0  28 00 4D 3C */	cmplwi r0, 0x4d3c
/* 80153814 001508F4  41 82 00 78 */	beq .L_8015388C
/* 80153818 001508F8  80 1D 02 B8 */	lwz r0, 0x2b8(r29)
/* 8015381C 001508FC  7C 00 F8 00 */	cmpw r0, r31
/* 80153820 00150900  40 80 00 6C */	bge .L_8015388C
/* 80153824 00150904  3C 80 4E 47 */	lis r4, 0x4e47
/* 80153828 00150908  80 7D 02 28 */	lwz r3, 0x228(r29)
/* 8015382C 0015090C  38 84 4D 3B */	addi r4, r4, 0x4d3b
/* 80153830 00150910  38 A0 00 01 */	li r5, 0x1
/* 80153834 00150914  4B FB 9E FD */	bl GoalSet__7xPsycheFii
/* 80153838 00150918  C0 22 A7 68 */	lfs f1, "@1052"@sda21(r2)
/* 8015383C 0015091C  38 9D 00 88 */	addi r4, r29, 0x88
/* 80153840 00150920  38 60 00 00 */	li r3, 0x0
/* 80153844 00150924  4B FF C0 59 */	bl "play_sound__27@unnamed@zNPCTypePrawn_cpp@FiPC5xVec3f"
/* 80153848 00150928  83 DD 02 B8 */	lwz r30, 0x2b8(r29)
/* 8015384C 0015092C  48 00 00 18 */	b .L_80153864
.L_80153850:
/* 80153850 00150930  7F A3 EB 78 */	mr r3, r29
/* 80153854 00150934  7F A4 EB 78 */	mr r4, r29
/* 80153858 00150938  38 A0 01 D7 */	li r5, 0x1d7
/* 8015385C 0015093C  4B EC BE 85 */	bl zEntEvent__FP5xBaseP5xBaseUi
/* 80153860 00150940  3B DE 00 01 */	addi r30, r30, 0x1
.L_80153864:
/* 80153864 00150944  7C 1E F8 00 */	cmpw r30, r31
/* 80153868 00150948  41 80 FF E8 */	blt .L_80153850
/* 8015386C 0015094C  80 1D 02 B8 */	lwz r0, 0x2b8(r29)
/* 80153870 00150950  2C 00 00 00 */	cmpwi r0, 0x0
/* 80153874 00150954  41 81 00 20 */	bgt .L_80153894
/* 80153878 00150958  7F A3 EB 78 */	mr r3, r29
/* 8015387C 0015095C  7F A4 EB 78 */	mr r4, r29
/* 80153880 00150960  38 A0 00 24 */	li r5, 0x24
/* 80153884 00150964  4B EC BE 5D */	bl zEntEvent__FP5xBaseP5xBaseUi
/* 80153888 00150968  48 00 00 0C */	b .L_80153894
.L_8015388C:
/* 8015388C 0015096C  7F A3 EB 78 */	mr r3, r29
/* 80153890 00150970  4B FF EB 95 */	bl update_round__9zNPCPrawnFv
.L_80153894:
/* 80153894 00150974  80 01 00 24 */	lwz r0, 0x24(r1)
/* 80153898 00150978  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 8015389C 0015097C  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 801538A0 00150980  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 801538A4 00150984  7C 08 03 A6 */	mtlr r0
/* 801538A8 00150988  38 21 00 20 */	addi r1, r1, 0x20
/* 801538AC 0015098C  4E 80 00 20 */	blr
.endfn set_life__9zNPCPrawnFi

# zNPCPrawn::check_player_damage()
.fn check_player_damage__9zNPCPrawnFv, global
/* 801538B0 00150990  94 21 FF C0 */	stwu r1, -0x40(r1)
/* 801538B4 00150994  7C 08 02 A6 */	mflr r0
/* 801538B8 00150998  3C 80 80 3C */	lis r4, globals@ha
/* 801538BC 0015099C  90 01 00 44 */	stw r0, 0x44(r1)
/* 801538C0 001509A0  38 84 05 58 */	addi r4, r4, globals@l
/* 801538C4 001509A4  93 E1 00 3C */	stw r31, 0x3c(r1)
/* 801538C8 001509A8  7C 7F 1B 78 */	mr r31, r3
/* 801538CC 001509AC  80 04 1A FC */	lwz r0, 0x1afc(r4)
/* 801538D0 001509B0  2C 00 00 00 */	cmpwi r0, 0x0
/* 801538D4 001509B4  41 82 00 0C */	beq .L_801538E0
/* 801538D8 001509B8  38 60 00 00 */	li r3, 0x0
/* 801538DC 001509BC  48 00 00 70 */	b .L_8015394C
.L_801538E0:
/* 801538E0 001509C0  38 7F 03 28 */	addi r3, r31, 0x328
/* 801538E4 001509C4  38 84 07 68 */	addi r4, r4, 0x768
/* 801538E8 001509C8  4B FF C3 C5 */	bl hits_sphere__9aqua_beamCFRC7xSphere
/* 801538EC 001509CC  54 60 06 3F */	clrlwi. r0, r3, 24
/* 801538F0 001509D0  40 82 00 0C */	bne .L_801538FC
/* 801538F4 001509D4  38 60 00 00 */	li r3, 0x0
/* 801538F8 001509D8  48 00 00 54 */	b .L_8015394C
.L_801538FC:
/* 801538FC 001509DC  7F E4 FB 78 */	mr r4, r31
/* 80153900 001509E0  38 61 00 08 */	addi r3, r1, 0x8
/* 80153904 001509E4  48 00 00 5D */	bl get_away__9zNPCPrawnCFv
/* 80153908 001509E8  3C 80 80 33 */	lis r4, "tweak__27@unnamed@zNPCTypePrawn_cpp@"@ha
/* 8015390C 001509EC  38 61 00 14 */	addi r3, r1, 0x14
/* 80153910 001509F0  38 A4 95 E0 */	addi r5, r4, "tweak__27@unnamed@zNPCTypePrawn_cpp@"@l
/* 80153914 001509F4  38 81 00 08 */	addi r4, r1, 0x8
/* 80153918 001509F8  C0 25 00 44 */	lfs f1, 0x44(r5)
/* 8015391C 001509FC  4B EB 78 05 */	bl __ml__5xVec3CFf
/* 80153920 00150A00  80 E1 00 14 */	lwz r7, 0x14(r1)
/* 80153924 00150A04  7F E3 FB 78 */	mr r3, r31
/* 80153928 00150A08  80 C1 00 18 */	lwz r6, 0x18(r1)
/* 8015392C 00150A0C  38 A1 00 20 */	addi r5, r1, 0x20
/* 80153930 00150A10  80 01 00 1C */	lwz r0, 0x1c(r1)
/* 80153934 00150A14  38 80 00 01 */	li r4, 0x1
/* 80153938 00150A18  90 E1 00 20 */	stw r7, 0x20(r1)
/* 8015393C 00150A1C  90 C1 00 24 */	stw r6, 0x24(r1)
/* 80153940 00150A20  90 01 00 28 */	stw r0, 0x28(r1)
/* 80153944 00150A24  4B F2 28 F1 */	bl zEntPlayer_Damage__FP5xBaseUiPC5xVec3
/* 80153948 00150A28  38 60 00 01 */	li r3, 0x1
.L_8015394C:
/* 8015394C 00150A2C  80 01 00 44 */	lwz r0, 0x44(r1)
/* 80153950 00150A30  83 E1 00 3C */	lwz r31, 0x3c(r1)
/* 80153954 00150A34  7C 08 03 A6 */	mtlr r0
/* 80153958 00150A38  38 21 00 40 */	addi r1, r1, 0x40
/* 8015395C 00150A3C  4E 80 00 20 */	blr
.endfn check_player_damage__9zNPCPrawnFv

# zNPCPrawn::get_away() const
.fn get_away__9zNPCPrawnCFv, global
/* 80153960 00150A40  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 80153964 00150A44  7C 08 02 A6 */	mflr r0
/* 80153968 00150A48  3C A0 80 3C */	lis r5, globals@ha
/* 8015396C 00150A4C  C0 44 00 88 */	lfs f2, 0x88(r4)
/* 80153970 00150A50  90 01 00 24 */	stw r0, 0x24(r1)
/* 80153974 00150A54  38 A5 05 58 */	addi r5, r5, globals@l
/* 80153978 00150A58  C0 04 00 90 */	lfs f0, 0x90(r4)
/* 8015397C 00150A5C  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 80153980 00150A60  7C 7F 1B 78 */	mr r31, r3
/* 80153984 00150A64  C0 65 07 68 */	lfs f3, 0x768(r5)
/* 80153988 00150A68  C0 25 07 70 */	lfs f1, 0x770(r5)
/* 8015398C 00150A6C  EC 43 10 28 */	fsubs f2, f3, f2
/* 80153990 00150A70  EC 21 00 28 */	fsubs f1, f1, f0
/* 80153994 00150A74  D0 41 00 08 */	stfs f2, 0x8(r1)
/* 80153998 00150A78  EC 42 00 B2 */	fmuls f2, f2, f2
/* 8015399C 00150A7C  EC 01 00 72 */	fmuls f0, f1, f1
/* 801539A0 00150A80  D0 21 00 10 */	stfs f1, 0x10(r1)
/* 801539A4 00150A84  C0 22 A7 6C */	lfs f1, "@1053"@sda21(r2)
/* 801539A8 00150A88  EC 42 00 2A */	fadds f2, f2, f0
/* 801539AC 00150A8C  D0 21 00 0C */	stfs f1, 0xc(r1)
/* 801539B0 00150A90  C0 02 A8 14 */	lfs f0, "@1912"@sda21(r2)
/* 801539B4 00150A94  FC 02 00 40 */	fcmpo cr0, f2, f0
/* 801539B8 00150A98  40 80 00 18 */	bge .L_801539D0
/* 801539BC 00150A9C  FC 60 08 90 */	fmr f3, f1
/* 801539C0 00150AA0  C0 42 A7 68 */	lfs f2, "@1052"@sda21(r2)
/* 801539C4 00150AA4  38 61 00 08 */	addi r3, r1, 0x8
/* 801539C8 00150AA8  4B EB 77 25 */	bl assign__5xVec3Ffff
/* 801539CC 00150AAC  48 00 00 34 */	b .L_80153A00
.L_801539D0:
/* 801539D0 00150AB0  FC 20 10 90 */	fmr f1, f2
/* 801539D4 00150AB4  4B EB 6E 29 */	bl xsqrt__Ff
/* 801539D8 00150AB8  C0 02 A7 68 */	lfs f0, "@1052"@sda21(r2)
/* 801539DC 00150ABC  38 61 00 08 */	addi r3, r1, 0x8
/* 801539E0 00150AC0  C0 42 A8 24 */	lfs f2, "@2160"@sda21(r2)
/* 801539E4 00150AC4  EC 60 08 24 */	fdivs f3, f0, f1
/* 801539E8 00150AC8  C0 21 00 08 */	lfs f1, 0x8(r1)
/* 801539EC 00150ACC  C0 01 00 10 */	lfs f0, 0x10(r1)
/* 801539F0 00150AD0  EC 62 00 F2 */	fmuls f3, f2, f3
/* 801539F4 00150AD4  EC 21 00 F2 */	fmuls f1, f1, f3
/* 801539F8 00150AD8  EC 60 00 F2 */	fmuls f3, f0, f3
/* 801539FC 00150ADC  4B EB 76 F1 */	bl assign__5xVec3Ffff
.L_80153A00:
/* 80153A00 00150AE0  80 61 00 08 */	lwz r3, 0x8(r1)
/* 80153A04 00150AE4  80 01 00 0C */	lwz r0, 0xc(r1)
/* 80153A08 00150AE8  90 7F 00 00 */	stw r3, 0x0(r31)
/* 80153A0C 00150AEC  90 1F 00 04 */	stw r0, 0x4(r31)
/* 80153A10 00150AF0  80 01 00 10 */	lwz r0, 0x10(r1)
/* 80153A14 00150AF4  90 1F 00 08 */	stw r0, 0x8(r31)
/* 80153A18 00150AF8  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 80153A1C 00150AFC  80 01 00 24 */	lwz r0, 0x24(r1)
/* 80153A20 00150B00  7C 08 03 A6 */	mtlr r0
/* 80153A24 00150B04  38 21 00 20 */	addi r1, r1, 0x20
/* 80153A28 00150B08  4E 80 00 20 */	blr
.endfn get_away__9zNPCPrawnCFv

# zNPCPrawn::repel_player() const
.fn repel_player__9zNPCPrawnCFv, global
/* 80153A2C 00150B0C  94 21 FF 90 */	stwu r1, -0x70(r1)
/* 80153A30 00150B10  7C 08 02 A6 */	mflr r0
/* 80153A34 00150B14  90 01 00 74 */	stw r0, 0x74(r1)
/* 80153A38 00150B18  DB E1 00 60 */	stfd f31, 0x60(r1)
/* 80153A3C 00150B1C  F3 E1 00 68 */	psq_st f31, 0x68(r1), 0, qr0
/* 80153A40 00150B20  93 E1 00 5C */	stw r31, 0x5c(r1)
/* 80153A44 00150B24  93 C1 00 58 */	stw r30, 0x58(r1)
/* 80153A48 00150B28  93 A1 00 54 */	stw r29, 0x54(r1)
/* 80153A4C 00150B2C  3C 80 80 3C */	lis r4, globals@ha
/* 80153A50 00150B30  38 84 05 58 */	addi r4, r4, globals@l
/* 80153A54 00150B34  80 04 1A FC */	lwz r0, 0x1afc(r4)
/* 80153A58 00150B38  2C 00 00 00 */	cmpwi r0, 0x0
/* 80153A5C 00150B3C  40 82 01 34 */	bne .L_80153B90
/* 80153A60 00150B40  48 00 10 7D */	bl get_center__9zNPCPrawnCFv
/* 80153A64 00150B44  80 E3 00 00 */	lwz r7, 0x0(r3)
/* 80153A68 00150B48  3C 80 80 3C */	lis r4, globals@ha
/* 80153A6C 00150B4C  80 03 00 04 */	lwz r0, 0x4(r3)
/* 80153A70 00150B50  38 C4 05 58 */	addi r6, r4, globals@l
/* 80153A74 00150B54  80 86 07 28 */	lwz r4, 0x728(r6)
/* 80153A78 00150B58  38 A1 00 44 */	addi r5, r1, 0x44
/* 80153A7C 00150B5C  90 E1 00 44 */	stw r7, 0x44(r1)
/* 80153A80 00150B60  80 C6 07 04 */	lwz r6, 0x704(r6)
/* 80153A84 00150B64  3B A4 00 D4 */	addi r29, r4, 0xd4
/* 80153A88 00150B68  90 01 00 48 */	stw r0, 0x48(r1)
/* 80153A8C 00150B6C  80 03 00 08 */	lwz r0, 0x8(r3)
/* 80153A90 00150B70  38 61 00 20 */	addi r3, r1, 0x20
/* 80153A94 00150B74  90 01 00 4C */	stw r0, 0x4c(r1)
/* 80153A98 00150B78  80 86 00 4C */	lwz r4, 0x4c(r6)
/* 80153A9C 00150B7C  3B C4 00 30 */	addi r30, r4, 0x30
/* 80153AA0 00150B80  7F C4 F3 78 */	mr r4, r30
/* 80153AA4 00150B84  4B EB 77 29 */	bl __mi__5xVec3CFRC5xVec3
/* 80153AA8 00150B88  80 A1 00 20 */	lwz r5, 0x20(r1)
/* 80153AAC 00150B8C  38 61 00 38 */	addi r3, r1, 0x38
/* 80153AB0 00150B90  80 81 00 24 */	lwz r4, 0x24(r1)
/* 80153AB4 00150B94  80 01 00 28 */	lwz r0, 0x28(r1)
/* 80153AB8 00150B98  90 A1 00 38 */	stw r5, 0x38(r1)
/* 80153ABC 00150B9C  90 81 00 3C */	stw r4, 0x3c(r1)
/* 80153AC0 00150BA0  90 01 00 40 */	stw r0, 0x40(r1)
/* 80153AC4 00150BA4  C0 02 A7 6C */	lfs f0, "@1053"@sda21(r2)
/* 80153AC8 00150BA8  D0 01 00 3C */	stfs f0, 0x3c(r1)
/* 80153ACC 00150BAC  4B EB 76 31 */	bl length2__5xVec3CFv
/* 80153AD0 00150BB0  C0 02 A8 1C */	lfs f0, "@1938"@sda21(r2)
/* 80153AD4 00150BB4  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80153AD8 00150BB8  4C 41 13 82 */	cror eq, gt, eq
/* 80153ADC 00150BBC  40 82 00 14 */	bne .L_80153AF0
/* 80153AE0 00150BC0  C0 02 A7 7C */	lfs f0, "@1285"@sda21(r2)
/* 80153AE4 00150BC4  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80153AE8 00150BC8  4C 40 13 82 */	cror eq, lt, eq
/* 80153AEC 00150BCC  41 82 00 A4 */	beq .L_80153B90
.L_80153AF0:
/* 80153AF0 00150BD0  3C 60 80 33 */	lis r3, "tweak__27@unnamed@zNPCTypePrawn_cpp@"@ha
/* 80153AF4 00150BD4  3B E3 95 E0 */	addi r31, r3, "tweak__27@unnamed@zNPCTypePrawn_cpp@"@l
/* 80153AF8 00150BD8  C0 1F 00 08 */	lfs f0, 0x8(r31)
/* 80153AFC 00150BDC  EC 00 00 32 */	fmuls f0, f0, f0
/* 80153B00 00150BE0  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80153B04 00150BE4  4C 41 13 82 */	cror eq, gt, eq
/* 80153B08 00150BE8  40 82 00 08 */	bne .L_80153B10
/* 80153B0C 00150BEC  48 00 00 84 */	b .L_80153B90
.L_80153B10:
/* 80153B10 00150BF0  4B EB 6C ED */	bl xsqrt__Ff
/* 80153B14 00150BF4  80 A1 00 38 */	lwz r5, 0x38(r1)
/* 80153B18 00150BF8  FF E0 08 90 */	fmr f31, f1
/* 80153B1C 00150BFC  80 81 00 3C */	lwz r4, 0x3c(r1)
/* 80153B20 00150C00  38 61 00 2C */	addi r3, r1, 0x2c
/* 80153B24 00150C04  80 01 00 40 */	lwz r0, 0x40(r1)
/* 80153B28 00150C08  90 A1 00 2C */	stw r5, 0x2c(r1)
/* 80153B2C 00150C0C  90 81 00 30 */	stw r4, 0x30(r1)
/* 80153B30 00150C10  90 01 00 34 */	stw r0, 0x34(r1)
/* 80153B34 00150C14  C0 02 A7 68 */	lfs f0, "@1052"@sda21(r2)
/* 80153B38 00150C18  EC 20 F8 24 */	fdivs f1, f0, f31
/* 80153B3C 00150C1C  4B EB 76 45 */	bl __amu__5xVec3Ff
/* 80153B40 00150C20  7F A3 EB 78 */	mr r3, r29
/* 80153B44 00150C24  38 81 00 2C */	addi r4, r1, 0x2c
/* 80153B48 00150C28  4B EC 19 C5 */	bl dot__5xVec3CFRC5xVec3
/* 80153B4C 00150C2C  C0 02 A7 6C */	lfs f0, "@1053"@sda21(r2)
/* 80153B50 00150C30  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80153B54 00150C34  40 80 00 1C */	bge .L_80153B70
/* 80153B58 00150C38  38 61 00 14 */	addi r3, r1, 0x14
/* 80153B5C 00150C3C  38 81 00 2C */	addi r4, r1, 0x2c
/* 80153B60 00150C40  4B EB 75 C1 */	bl __ml__5xVec3CFf
/* 80153B64 00150C44  7F A3 EB 78 */	mr r3, r29
/* 80153B68 00150C48  38 81 00 14 */	addi r4, r1, 0x14
/* 80153B6C 00150C4C  4B EB 76 C5 */	bl __ami__5xVec3FRC5xVec3
.L_80153B70:
/* 80153B70 00150C50  C0 1F 00 08 */	lfs f0, 0x8(r31)
/* 80153B74 00150C54  38 61 00 08 */	addi r3, r1, 0x8
/* 80153B78 00150C58  38 81 00 2C */	addi r4, r1, 0x2c
/* 80153B7C 00150C5C  EC 20 F8 28 */	fsubs f1, f0, f31
/* 80153B80 00150C60  4B EB 75 A1 */	bl __ml__5xVec3CFf
/* 80153B84 00150C64  7F C3 F3 78 */	mr r3, r30
/* 80153B88 00150C68  38 81 00 08 */	addi r4, r1, 0x8
/* 80153B8C 00150C6C  4B EC 18 B9 */	bl __apl__5xVec3FRC5xVec3
.L_80153B90:
/* 80153B90 00150C70  E3 E1 00 68 */	psq_l f31, 0x68(r1), 0, qr0
/* 80153B94 00150C74  80 01 00 74 */	lwz r0, 0x74(r1)
/* 80153B98 00150C78  CB E1 00 60 */	lfd f31, 0x60(r1)
/* 80153B9C 00150C7C  83 E1 00 5C */	lwz r31, 0x5c(r1)
/* 80153BA0 00150C80  83 C1 00 58 */	lwz r30, 0x58(r1)
/* 80153BA4 00150C84  83 A1 00 54 */	lwz r29, 0x54(r1)
/* 80153BA8 00150C88  7C 08 03 A6 */	mtlr r0
/* 80153BAC 00150C8C  38 21 00 70 */	addi r1, r1, 0x70
/* 80153BB0 00150C90  4E 80 00 20 */	blr
.endfn repel_player__9zNPCPrawnCFv

# zNPCPrawn::show_model()
.fn show_model__9zNPCPrawnFv, global
/* 80153BB4 00150C94  80 63 00 24 */	lwz r3, 0x24(r3)
/* 80153BB8 00150C98  48 00 00 14 */	b .L_80153BCC
.L_80153BBC:
/* 80153BBC 00150C9C  A0 03 00 44 */	lhz r0, 0x44(r3)
/* 80153BC0 00150CA0  60 00 00 03 */	ori r0, r0, 0x3
/* 80153BC4 00150CA4  B0 03 00 44 */	sth r0, 0x44(r3)
/* 80153BC8 00150CA8  80 63 00 00 */	lwz r3, 0x0(r3)
.L_80153BCC:
/* 80153BCC 00150CAC  28 03 00 00 */	cmplwi r3, 0x0
/* 80153BD0 00150CB0  40 82 FF EC */	bne .L_80153BBC
/* 80153BD4 00150CB4  4E 80 00 20 */	blr
.endfn show_model__9zNPCPrawnFv

# zNPCPrawn::hide_model()
.fn hide_model__9zNPCPrawnFv, global
/* 80153BD8 00150CB8  80 63 00 24 */	lwz r3, 0x24(r3)
/* 80153BDC 00150CBC  48 00 00 14 */	b .L_80153BF0
.L_80153BE0:
/* 80153BE0 00150CC0  A0 03 00 44 */	lhz r0, 0x44(r3)
/* 80153BE4 00150CC4  54 00 04 3A */	rlwinm r0, r0, 0, 16, 29
/* 80153BE8 00150CC8  B0 03 00 44 */	sth r0, 0x44(r3)
/* 80153BEC 00150CCC  80 63 00 00 */	lwz r3, 0x0(r3)
.L_80153BF0:
/* 80153BF0 00150CD0  28 03 00 00 */	cmplwi r3, 0x0
/* 80153BF4 00150CD4  40 82 FF EC */	bne .L_80153BE0
/* 80153BF8 00150CD8  4E 80 00 20 */	blr
.endfn hide_model__9zNPCPrawnFv

# zNPCGoalPrawnIdle::Enter(float, void*)
.fn Enter__17zNPCGoalPrawnIdleFfPv, global
/* 80153BFC 00150CDC  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 80153C00 00150CE0  7C 08 02 A6 */	mflr r0
/* 80153C04 00150CE4  90 01 00 24 */	stw r0, 0x24(r1)
/* 80153C08 00150CE8  DB E1 00 10 */	stfd f31, 0x10(r1)
/* 80153C0C 00150CEC  F3 E1 00 18 */	psq_st f31, 0x18(r1), 0, qr0
/* 80153C10 00150CF0  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80153C14 00150CF4  93 C1 00 08 */	stw r30, 0x8(r1)
/* 80153C18 00150CF8  7C 7E 1B 78 */	mr r30, r3
/* 80153C1C 00150CFC  80 63 00 18 */	lwz r3, 0x18(r3)
/* 80153C20 00150D00  7C 9F 23 78 */	mr r31, r4
/* 80153C24 00150D04  38 00 00 01 */	li r0, 0x1
/* 80153C28 00150D08  80 63 00 00 */	lwz r3, 0x0(r3)
/* 80153C2C 00150D0C  FF E0 08 90 */	fmr f31, f1
/* 80153C30 00150D10  38 80 00 05 */	li r4, 0x5
/* 80153C34 00150D14  38 A0 00 00 */	li r5, 0x0
/* 80153C38 00150D18  98 03 02 C0 */	stb r0, 0x2c0(r3)
/* 80153C3C 00150D1C  38 C0 00 00 */	li r6, 0x0
/* 80153C40 00150D20  C0 02 A7 6C */	lfs f0, "@1053"@sda21(r2)
/* 80153C44 00150D24  D0 03 02 F0 */	stfs f0, 0x2f0(r3)
/* 80153C48 00150D28  4B FF F5 5D */	bl set_floor_state__9zNPCPrawnFQ29zNPCPrawn16floor_state_enumbb
/* 80153C4C 00150D2C  FC 20 F8 90 */	fmr f1, f31
/* 80153C50 00150D30  7F C3 F3 78 */	mr r3, r30
/* 80153C54 00150D34  7F E4 FB 78 */	mr r4, r31
/* 80153C58 00150D38  4B F8 14 BD */	bl Enter__14zNPCGoalCommonFfPv
/* 80153C5C 00150D3C  E3 E1 00 18 */	psq_l f31, 0x18(r1), 0, qr0
/* 80153C60 00150D40  80 01 00 24 */	lwz r0, 0x24(r1)
/* 80153C64 00150D44  CB E1 00 10 */	lfd f31, 0x10(r1)
/* 80153C68 00150D48  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80153C6C 00150D4C  83 C1 00 08 */	lwz r30, 0x8(r1)
/* 80153C70 00150D50  7C 08 03 A6 */	mtlr r0
/* 80153C74 00150D54  38 21 00 20 */	addi r1, r1, 0x20
/* 80153C78 00150D58  4E 80 00 20 */	blr
.endfn Enter__17zNPCGoalPrawnIdleFfPv

# zNPCGoalPrawnIdle::Exit(float, void*)
.fn Exit__17zNPCGoalPrawnIdleFfPv, global
/* 80153C7C 00150D5C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80153C80 00150D60  7C 08 02 A6 */	mflr r0
/* 80153C84 00150D64  90 01 00 14 */	stw r0, 0x14(r1)
/* 80153C88 00150D68  4B F8 17 95 */	bl Exit__5xGoalFfPv
/* 80153C8C 00150D6C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80153C90 00150D70  7C 08 03 A6 */	mtlr r0
/* 80153C94 00150D74  38 21 00 10 */	addi r1, r1, 0x10
/* 80153C98 00150D78  4E 80 00 20 */	blr
.endfn Exit__17zNPCGoalPrawnIdleFfPv

# zNPCGoalPrawnIdle::Process(en_trantype*, float, void*, xScene*)
.fn Process__17zNPCGoalPrawnIdleFP11en_trantypefPvP6xScene, global
/* 80153C9C 00150D7C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80153CA0 00150D80  7C 08 02 A6 */	mflr r0
/* 80153CA4 00150D84  3C E0 80 33 */	lis r7, "tweak__27@unnamed@zNPCTypePrawn_cpp@"@ha
/* 80153CA8 00150D88  90 01 00 14 */	stw r0, 0x14(r1)
/* 80153CAC 00150D8C  38 E7 95 E0 */	addi r7, r7, "tweak__27@unnamed@zNPCTypePrawn_cpp@"@l
/* 80153CB0 00150D90  81 03 00 18 */	lwz r8, 0x18(r3)
/* 80153CB4 00150D94  81 08 00 00 */	lwz r8, 0x0(r8)
/* 80153CB8 00150D98  80 08 02 BC */	lwz r0, 0x2bc(r8)
/* 80153CBC 00150D9C  C0 48 02 F0 */	lfs f2, 0x2f0(r8)
/* 80153CC0 00150DA0  54 00 10 3A */	slwi r0, r0, 2
/* 80153CC4 00150DA4  7C E7 02 14 */	add r7, r7, r0
/* 80153CC8 00150DA8  C0 07 00 24 */	lfs f0, 0x24(r7)
/* 80153CCC 00150DAC  FC 02 00 40 */	fcmpo cr0, f2, f0
/* 80153CD0 00150DB0  4C 41 13 82 */	cror eq, gt, eq
/* 80153CD4 00150DB4  40 82 00 18 */	bne .L_80153CEC
/* 80153CD8 00150DB8  38 00 00 01 */	li r0, 0x1
/* 80153CDC 00150DBC  3C 60 4E 47 */	lis r3, 0x4e47
/* 80153CE0 00150DC0  90 04 00 00 */	stw r0, 0x0(r4)
/* 80153CE4 00150DC4  38 63 4D 39 */	addi r3, r3, 0x4d39
/* 80153CE8 00150DC8  48 00 00 08 */	b .L_80153CF0
.L_80153CEC:
/* 80153CEC 00150DCC  4B FB AE 5D */	bl Process__5xGoalFP11en_trantypefPvP6xScene
.L_80153CF0:
/* 80153CF0 00150DD0  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80153CF4 00150DD4  7C 08 03 A6 */	mtlr r0
/* 80153CF8 00150DD8  38 21 00 10 */	addi r1, r1, 0x10
/* 80153CFC 00150DDC  4E 80 00 20 */	blr
.endfn Process__17zNPCGoalPrawnIdleFP11en_trantypefPvP6xScene

# zNPCGoalPrawnBeam::Enter(float, void*)
.fn Enter__17zNPCGoalPrawnBeamFfPv, global
/* 80153D00 00150DE0  94 21 FF D0 */	stwu r1, -0x30(r1)
/* 80153D04 00150DE4  7C 08 02 A6 */	mflr r0
/* 80153D08 00150DE8  90 01 00 34 */	stw r0, 0x34(r1)
/* 80153D0C 00150DEC  DB E1 00 20 */	stfd f31, 0x20(r1)
/* 80153D10 00150DF0  F3 E1 00 28 */	psq_st f31, 0x28(r1), 0, qr0
/* 80153D14 00150DF4  BF 61 00 0C */	stmw r27, 0xc(r1)
/* 80153D18 00150DF8  7C 7B 1B 78 */	mr r27, r3
/* 80153D1C 00150DFC  7C 9C 23 78 */	mr r28, r4
/* 80153D20 00150E00  80 63 00 18 */	lwz r3, 0x18(r3)
/* 80153D24 00150E04  FF E0 08 90 */	fmr f31, f1
/* 80153D28 00150E08  38 00 00 00 */	li r0, 0x0
/* 80153D2C 00150E0C  38 80 00 02 */	li r4, 0x2
/* 80153D30 00150E10  83 C3 00 00 */	lwz r30, 0x0(r3)
/* 80153D34 00150E14  38 A0 00 01 */	li r5, 0x1
/* 80153D38 00150E18  38 C0 00 00 */	li r6, 0x0
/* 80153D3C 00150E1C  98 1E 02 C0 */	stb r0, 0x2c0(r30)
/* 80153D40 00150E20  7F C3 F3 78 */	mr r3, r30
/* 80153D44 00150E24  4B FF F4 61 */	bl set_floor_state__9zNPCPrawnFQ29zNPCPrawn16floor_state_enumbb
/* 80153D48 00150E28  38 00 00 00 */	li r0, 0x0
/* 80153D4C 00150E2C  7F C3 F3 78 */	mr r3, r30
/* 80153D50 00150E30  90 1B 00 50 */	stw r0, 0x50(r27)
/* 80153D54 00150E34  90 1B 00 4C */	stw r0, 0x4c(r27)
/* 80153D58 00150E38  48 00 0F 05 */	bl get_facing__9zNPCPrawnCFv
/* 80153D5C 00150E3C  3C 80 80 3C */	lis r4, globals@ha
/* 80153D60 00150E40  7C 7F 1B 78 */	mr r31, r3
/* 80153D64 00150E44  38 64 05 58 */	addi r3, r4, globals@l
/* 80153D68 00150E48  80 63 07 04 */	lwz r3, 0x704(r3)
/* 80153D6C 00150E4C  80 63 00 4C */	lwz r3, 0x4c(r3)
/* 80153D70 00150E50  3B A3 00 20 */	addi r29, r3, 0x20
/* 80153D74 00150E54  7F A3 EB 78 */	mr r3, r29
/* 80153D78 00150E58  4B EB 73 85 */	bl length2__5xVec3CFv
/* 80153D7C 00150E5C  C0 02 A8 14 */	lfs f0, "@1912"@sda21(r2)
/* 80153D80 00150E60  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80153D84 00150E64  40 80 00 24 */	bge .L_80153DA8
/* 80153D88 00150E68  4B ED CE E1 */	bl xrand__Fv
/* 80153D8C 00150E6C  54 60 7F FF */	extrwi. r0, r3, 1, 14
/* 80153D90 00150E70  41 82 00 0C */	beq .L_80153D9C
/* 80153D94 00150E74  C0 02 A7 D4 */	lfs f0, "@1667"@sda21(r2)
/* 80153D98 00150E78  48 00 00 08 */	b .L_80153DA0
.L_80153D9C:
/* 80153D9C 00150E7C  C0 02 A7 68 */	lfs f0, "@1052"@sda21(r2)
.L_80153DA0:
/* 80153DA0 00150E80  D0 1B 00 54 */	stfs f0, 0x54(r27)
/* 80153DA4 00150E84  48 00 00 38 */	b .L_80153DDC
.L_80153DA8:
/* 80153DA8 00150E88  C0 3D 00 08 */	lfs f1, 0x8(r29)
/* 80153DAC 00150E8C  C0 1F 00 00 */	lfs f0, 0x0(r31)
/* 80153DB0 00150E90  C0 7F 00 08 */	lfs f3, 0x8(r31)
/* 80153DB4 00150E94  EC 21 00 32 */	fmuls f1, f1, f0
/* 80153DB8 00150E98  C0 5D 00 00 */	lfs f2, 0x0(r29)
/* 80153DBC 00150E9C  C0 02 A7 6C */	lfs f0, "@1053"@sda21(r2)
/* 80153DC0 00150EA0  EC 23 08 B8 */	fmsubs f1, f3, f2, f1
/* 80153DC4 00150EA4  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80153DC8 00150EA8  40 80 00 0C */	bge .L_80153DD4
/* 80153DCC 00150EAC  C0 02 A7 D4 */	lfs f0, "@1667"@sda21(r2)
/* 80153DD0 00150EB0  48 00 00 08 */	b .L_80153DD8
.L_80153DD4:
/* 80153DD4 00150EB4  C0 02 A7 68 */	lfs f0, "@1052"@sda21(r2)
.L_80153DD8:
/* 80153DD8 00150EB8  D0 1B 00 54 */	stfs f0, 0x54(r27)
.L_80153DDC:
/* 80153DDC 00150EBC  7F 63 DB 78 */	mr r3, r27
/* 80153DE0 00150EC0  48 00 04 E9 */	bl init_look_dir__17zNPCGoalPrawnBeamFv
/* 80153DE4 00150EC4  C0 22 A7 68 */	lfs f1, "@1052"@sda21(r2)
/* 80153DE8 00150EC8  38 9E 03 68 */	addi r4, r30, 0x368
/* 80153DEC 00150ECC  38 60 00 01 */	li r3, 0x1
/* 80153DF0 00150ED0  4B FF BA AD */	bl "play_sound__27@unnamed@zNPCTypePrawn_cpp@FiPC5xVec3f"
/* 80153DF4 00150ED4  C0 22 A7 68 */	lfs f1, "@1052"@sda21(r2)
/* 80153DF8 00150ED8  38 9E 03 68 */	addi r4, r30, 0x368
/* 80153DFC 00150EDC  38 60 00 02 */	li r3, 0x2
/* 80153E00 00150EE0  4B FF BA 9D */	bl "play_sound__27@unnamed@zNPCTypePrawn_cpp@FiPC5xVec3f"
/* 80153E04 00150EE4  FC 20 F8 90 */	fmr f1, f31
/* 80153E08 00150EE8  7F 63 DB 78 */	mr r3, r27
/* 80153E0C 00150EEC  7F 84 E3 78 */	mr r4, r28
/* 80153E10 00150EF0  4B F8 13 05 */	bl Enter__14zNPCGoalCommonFfPv
/* 80153E14 00150EF4  E3 E1 00 28 */	psq_l f31, 0x28(r1), 0, qr0
/* 80153E18 00150EF8  CB E1 00 20 */	lfd f31, 0x20(r1)
/* 80153E1C 00150EFC  BB 61 00 0C */	lmw r27, 0xc(r1)
/* 80153E20 00150F00  80 01 00 34 */	lwz r0, 0x34(r1)
/* 80153E24 00150F04  7C 08 03 A6 */	mtlr r0
/* 80153E28 00150F08  38 21 00 30 */	addi r1, r1, 0x30
/* 80153E2C 00150F0C  4E 80 00 20 */	blr
.endfn Enter__17zNPCGoalPrawnBeamFfPv

# zNPCGoalPrawnBeam::Exit(float, void*)
.fn Exit__17zNPCGoalPrawnBeamFfPv, global
/* 80153E30 00150F10  94 21 FF D0 */	stwu r1, -0x30(r1)
/* 80153E34 00150F14  7C 08 02 A6 */	mflr r0
/* 80153E38 00150F18  90 01 00 34 */	stw r0, 0x34(r1)
/* 80153E3C 00150F1C  DB E1 00 20 */	stfd f31, 0x20(r1)
/* 80153E40 00150F20  F3 E1 00 28 */	psq_st f31, 0x28(r1), 0, qr0
/* 80153E44 00150F24  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 80153E48 00150F28  93 C1 00 18 */	stw r30, 0x18(r1)
/* 80153E4C 00150F2C  93 A1 00 14 */	stw r29, 0x14(r1)
/* 80153E50 00150F30  7C 7D 1B 78 */	mr r29, r3
/* 80153E54 00150F34  FF E0 08 90 */	fmr f31, f1
/* 80153E58 00150F38  80 63 00 18 */	lwz r3, 0x18(r3)
/* 80153E5C 00150F3C  7C 9E 23 78 */	mr r30, r4
/* 80153E60 00150F40  83 E3 00 00 */	lwz r31, 0x0(r3)
/* 80153E64 00150F44  38 7F 03 28 */	addi r3, r31, 0x328
/* 80153E68 00150F48  4B FF BD 65 */	bl stop__9aqua_beamFv
/* 80153E6C 00150F4C  3C 80 80 33 */	lis r4, "tweak__27@unnamed@zNPCTypePrawn_cpp@"@ha
/* 80153E70 00150F50  38 60 00 02 */	li r3, 0x2
/* 80153E74 00150F54  C0 04 95 E0 */	lfs f0, "tweak__27@unnamed@zNPCTypePrawn_cpp@"@l(r4)
/* 80153E78 00150F58  D0 1F 03 20 */	stfs f0, 0x320(r31)
/* 80153E7C 00150F5C  80 9F 01 D8 */	lwz r4, 0x1d8(r31)
/* 80153E80 00150F60  C0 04 00 14 */	lfs f0, 0x14(r4)
/* 80153E84 00150F64  D0 1F 03 24 */	stfs f0, 0x324(r31)
/* 80153E88 00150F68  4B FF BB B9 */	bl "kill_sound__27@unnamed@zNPCTypePrawn_cpp@Fi"
/* 80153E8C 00150F6C  FC 20 F8 90 */	fmr f1, f31
/* 80153E90 00150F70  7F A3 EB 78 */	mr r3, r29
/* 80153E94 00150F74  7F C4 F3 78 */	mr r4, r30
/* 80153E98 00150F78  4B F8 15 85 */	bl Exit__5xGoalFfPv
/* 80153E9C 00150F7C  E3 E1 00 28 */	psq_l f31, 0x28(r1), 0, qr0
/* 80153EA0 00150F80  80 01 00 34 */	lwz r0, 0x34(r1)
/* 80153EA4 00150F84  CB E1 00 20 */	lfd f31, 0x20(r1)
/* 80153EA8 00150F88  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 80153EAC 00150F8C  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 80153EB0 00150F90  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 80153EB4 00150F94  7C 08 03 A6 */	mtlr r0
/* 80153EB8 00150F98  38 21 00 30 */	addi r1, r1, 0x30
/* 80153EBC 00150F9C  4E 80 00 20 */	blr
.endfn Exit__17zNPCGoalPrawnBeamFfPv

# zNPCGoalPrawnBeam::Process(en_trantype*, float, void*, xScene*)
.fn Process__17zNPCGoalPrawnBeamFP11en_trantypefPvP6xScene, global
/* 80153EC0 00150FA0  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 80153EC4 00150FA4  7C 08 02 A6 */	mflr r0
/* 80153EC8 00150FA8  90 01 00 24 */	stw r0, 0x24(r1)
/* 80153ECC 00150FAC  DB E1 00 18 */	stfd f31, 0x18(r1)
/* 80153ED0 00150FB0  FF E0 08 90 */	fmr f31, f1
/* 80153ED4 00150FB4  93 E1 00 14 */	stw r31, 0x14(r1)
/* 80153ED8 00150FB8  7C DF 33 78 */	mr r31, r6
/* 80153EDC 00150FBC  93 C1 00 10 */	stw r30, 0x10(r1)
/* 80153EE0 00150FC0  7C BE 2B 78 */	mr r30, r5
/* 80153EE4 00150FC4  93 A1 00 0C */	stw r29, 0xc(r1)
/* 80153EE8 00150FC8  7C 9D 23 78 */	mr r29, r4
/* 80153EEC 00150FCC  93 81 00 08 */	stw r28, 0x8(r1)
/* 80153EF0 00150FD0  7C 7C 1B 78 */	mr r28, r3
/* 80153EF4 00150FD4  80 03 00 4C */	lwz r0, 0x4c(r3)
/* 80153EF8 00150FD8  2C 00 00 02 */	cmpwi r0, 0x2
/* 80153EFC 00150FDC  41 82 00 40 */	beq .L_80153F3C
/* 80153F00 00150FE0  40 80 00 14 */	bge .L_80153F14
/* 80153F04 00150FE4  2C 00 00 00 */	cmpwi r0, 0x0
/* 80153F08 00150FE8  41 82 00 1C */	beq .L_80153F24
/* 80153F0C 00150FEC  40 80 00 24 */	bge .L_80153F30
/* 80153F10 00150FF0  48 00 00 4C */	b .L_80153F5C
.L_80153F14:
/* 80153F14 00150FF4  2C 00 00 04 */	cmpwi r0, 0x4
/* 80153F18 00150FF8  41 82 00 3C */	beq .L_80153F54
/* 80153F1C 00150FFC  40 80 00 40 */	bge .L_80153F5C
/* 80153F20 00151000  48 00 00 28 */	b .L_80153F48
.L_80153F24:
/* 80153F24 00151004  48 00 00 95 */	bl update_aim__17zNPCGoalPrawnBeamFf
/* 80153F28 00151008  90 7C 00 4C */	stw r3, 0x4c(r28)
/* 80153F2C 0015100C  48 00 00 30 */	b .L_80153F5C
.L_80153F30:
/* 80153F30 00151010  48 00 00 BD */	bl update_fire__17zNPCGoalPrawnBeamFf
/* 80153F34 00151014  90 7C 00 4C */	stw r3, 0x4c(r28)
/* 80153F38 00151018  48 00 00 24 */	b .L_80153F5C
.L_80153F3C:
/* 80153F3C 0015101C  48 00 01 09 */	bl update_hold__17zNPCGoalPrawnBeamFf
/* 80153F40 00151020  90 7C 00 4C */	stw r3, 0x4c(r28)
/* 80153F44 00151024  48 00 00 18 */	b .L_80153F5C
.L_80153F48:
/* 80153F48 00151028  48 00 01 99 */	bl update_sweep__17zNPCGoalPrawnBeamFf
/* 80153F4C 0015102C  90 7C 00 4C */	stw r3, 0x4c(r28)
/* 80153F50 00151030  48 00 00 0C */	b .L_80153F5C
.L_80153F54:
/* 80153F54 00151034  48 00 02 F1 */	bl update_stop__17zNPCGoalPrawnBeamFf
/* 80153F58 00151038  90 7C 00 4C */	stw r3, 0x4c(r28)
.L_80153F5C:
/* 80153F5C 0015103C  80 1C 00 4C */	lwz r0, 0x4c(r28)
/* 80153F60 00151040  2C 00 00 05 */	cmpwi r0, 0x5
/* 80153F64 00151044  41 80 00 18 */	blt .L_80153F7C
/* 80153F68 00151048  38 00 00 01 */	li r0, 0x1
/* 80153F6C 0015104C  3C 60 4E 47 */	lis r3, 0x4e47
/* 80153F70 00151050  90 1D 00 00 */	stw r0, 0x0(r29)
/* 80153F74 00151054  38 63 4D 3A */	addi r3, r3, 0x4d3a
/* 80153F78 00151058  48 00 00 1C */	b .L_80153F94
.L_80153F7C:
/* 80153F7C 0015105C  FC 20 F8 90 */	fmr f1, f31
/* 80153F80 00151060  7F 83 E3 78 */	mr r3, r28
/* 80153F84 00151064  7F A4 EB 78 */	mr r4, r29
/* 80153F88 00151068  7F C5 F3 78 */	mr r5, r30
/* 80153F8C 0015106C  7F E6 FB 78 */	mr r6, r31
/* 80153F90 00151070  4B FB AB B9 */	bl Process__5xGoalFP11en_trantypefPvP6xScene
.L_80153F94:
/* 80153F94 00151074  80 01 00 24 */	lwz r0, 0x24(r1)
/* 80153F98 00151078  CB E1 00 18 */	lfd f31, 0x18(r1)
/* 80153F9C 0015107C  83 E1 00 14 */	lwz r31, 0x14(r1)
/* 80153FA0 00151080  83 C1 00 10 */	lwz r30, 0x10(r1)
/* 80153FA4 00151084  83 A1 00 0C */	lwz r29, 0xc(r1)
/* 80153FA8 00151088  83 81 00 08 */	lwz r28, 0x8(r1)
/* 80153FAC 0015108C  7C 08 03 A6 */	mtlr r0
/* 80153FB0 00151090  38 21 00 20 */	addi r1, r1, 0x20
/* 80153FB4 00151094  4E 80 00 20 */	blr
.endfn Process__17zNPCGoalPrawnBeamFP11en_trantypefPvP6xScene

# zNPCGoalPrawnBeam::update_aim(float)
.fn update_aim__17zNPCGoalPrawnBeamFf, global
/* 80153FB8 00151098  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80153FBC 0015109C  7C 08 02 A6 */	mflr r0
/* 80153FC0 001510A0  90 01 00 14 */	stw r0, 0x14(r1)
/* 80153FC4 001510A4  80 63 00 18 */	lwz r3, 0x18(r3)
/* 80153FC8 001510A8  80 63 00 00 */	lwz r3, 0x0(r3)
/* 80153FCC 001510AC  48 00 0B 25 */	bl turning__9zNPCPrawnCFv
/* 80153FD0 001510B0  54 60 06 3E */	clrlwi r0, r3, 24
/* 80153FD4 001510B4  7C 00 00 34 */	cntlzw r0, r0
/* 80153FD8 001510B8  54 03 D9 7E */	srwi r3, r0, 5
/* 80153FDC 001510BC  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80153FE0 001510C0  7C 08 03 A6 */	mtlr r0
/* 80153FE4 001510C4  38 21 00 10 */	addi r1, r1, 0x10
/* 80153FE8 001510C8  4E 80 00 20 */	blr
.endfn update_aim__17zNPCGoalPrawnBeamFf

# zNPCGoalPrawnBeam::update_fire(float)
.fn update_fire__17zNPCGoalPrawnBeamFf, global
/* 80153FEC 001510CC  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80153FF0 001510D0  7C 08 02 A6 */	mflr r0
/* 80153FF4 001510D4  90 01 00 14 */	stw r0, 0x14(r1)
/* 80153FF8 001510D8  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80153FFC 001510DC  80 63 00 18 */	lwz r3, 0x18(r3)
/* 80154000 001510E0  83 E3 00 00 */	lwz r31, 0x0(r3)
/* 80154004 001510E4  38 7F 03 28 */	addi r3, r31, 0x328
/* 80154008 001510E8  4B FF BB A9 */	bl start__9aqua_beamFv
/* 8015400C 001510EC  C0 02 A7 6C */	lfs f0, "@1053"@sda21(r2)
/* 80154010 001510F0  3C 60 80 33 */	lis r3, "tweak__27@unnamed@zNPCTypePrawn_cpp@"@ha
/* 80154014 001510F4  38 83 95 E0 */	addi r4, r3, "tweak__27@unnamed@zNPCTypePrawn_cpp@"@l
/* 80154018 001510F8  38 60 00 02 */	li r3, 0x2
/* 8015401C 001510FC  D0 1F 02 F0 */	stfs f0, 0x2f0(r31)
/* 80154020 00151100  C0 04 00 5C */	lfs f0, 0x5c(r4)
/* 80154024 00151104  D0 1F 03 20 */	stfs f0, 0x320(r31)
/* 80154028 00151108  C0 04 00 60 */	lfs f0, 0x60(r4)
/* 8015402C 0015110C  D0 1F 03 24 */	stfs f0, 0x324(r31)
/* 80154030 00151110  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80154034 00151114  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80154038 00151118  7C 08 03 A6 */	mtlr r0
/* 8015403C 0015111C  38 21 00 10 */	addi r1, r1, 0x10
/* 80154040 00151120  4E 80 00 20 */	blr
.endfn update_fire__17zNPCGoalPrawnBeamFf

# zNPCGoalPrawnBeam::update_hold(float)
.fn update_hold__17zNPCGoalPrawnBeamFf, global
/* 80154044 00151124  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80154048 00151128  7C 08 02 A6 */	mflr r0
/* 8015404C 0015112C  3C 80 80 33 */	lis r4, "tweak__27@unnamed@zNPCTypePrawn_cpp@"@ha
/* 80154050 00151130  90 01 00 14 */	stw r0, 0x14(r1)
/* 80154054 00151134  38 84 95 E0 */	addi r4, r4, "tweak__27@unnamed@zNPCTypePrawn_cpp@"@l
/* 80154058 00151138  80 A3 00 18 */	lwz r5, 0x18(r3)
/* 8015405C 0015113C  C0 04 00 58 */	lfs f0, 0x58(r4)
/* 80154060 00151140  80 C5 00 00 */	lwz r6, 0x0(r5)
/* 80154064 00151144  C0 26 02 F0 */	lfs f1, 0x2f0(r6)
/* 80154068 00151148  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8015406C 0015114C  40 80 00 0C */	bge .L_80154078
/* 80154070 00151150  38 60 00 02 */	li r3, 0x2
/* 80154074 00151154  48 00 00 5C */	b .L_801540D0
.L_80154078:
/* 80154078 00151158  80 06 02 BC */	lwz r0, 0x2bc(r6)
/* 8015407C 0015115C  80 A3 00 50 */	lwz r5, 0x50(r3)
/* 80154080 00151160  54 00 10 3A */	slwi r0, r0, 2
/* 80154084 00151164  7C 84 02 14 */	add r4, r4, r0
/* 80154088 00151168  80 04 00 48 */	lwz r0, 0x48(r4)
/* 8015408C 0015116C  7C 05 00 00 */	cmpw r5, r0
/* 80154090 00151170  41 80 00 24 */	blt .L_801540B4
/* 80154094 00151174  3C 80 80 2A */	lis r4, g_hash_subbanim@ha
/* 80154098 00151178  7C C3 33 78 */	mr r3, r6
/* 8015409C 0015117C  38 84 90 E0 */	addi r4, r4, g_hash_subbanim@l
/* 801540A0 00151180  38 A0 00 00 */	li r5, 0x0
/* 801540A4 00151184  80 84 00 38 */	lwz r4, 0x38(r4)
/* 801540A8 00151188  4B F9 EC E9 */	bl AnimStart__10zNPCCommonFUii
/* 801540AC 0015118C  38 60 00 04 */	li r3, 0x4
/* 801540B0 00151190  48 00 00 20 */	b .L_801540D0
.L_801540B4:
/* 801540B4 00151194  38 05 00 01 */	addi r0, r5, 0x1
/* 801540B8 00151198  90 03 00 50 */	stw r0, 0x50(r3)
/* 801540BC 0015119C  C0 23 00 54 */	lfs f1, 0x54(r3)
/* 801540C0 001511A0  C0 02 A7 D4 */	lfs f0, "@1667"@sda21(r2)
/* 801540C4 001511A4  EC 01 00 32 */	fmuls f0, f1, f0
/* 801540C8 001511A8  D0 03 00 54 */	stfs f0, 0x54(r3)
/* 801540CC 001511AC  38 60 00 03 */	li r3, 0x3
.L_801540D0:
/* 801540D0 001511B0  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801540D4 001511B4  7C 08 03 A6 */	mtlr r0
/* 801540D8 001511B8  38 21 00 10 */	addi r1, r1, 0x10
/* 801540DC 001511BC  4E 80 00 20 */	blr
.endfn update_hold__17zNPCGoalPrawnBeamFf

# zNPCGoalPrawnBeam::update_sweep(float)
.fn update_sweep__17zNPCGoalPrawnBeamFf, global
/* 801540E0 001511C0  94 21 FF C0 */	stwu r1, -0x40(r1)
/* 801540E4 001511C4  7C 08 02 A6 */	mflr r0
/* 801540E8 001511C8  90 01 00 44 */	stw r0, 0x44(r1)
/* 801540EC 001511CC  DB E1 00 30 */	stfd f31, 0x30(r1)
/* 801540F0 001511D0  F3 E1 00 38 */	psq_st f31, 0x38(r1), 0, qr0
/* 801540F4 001511D4  BF 61 00 1C */	stmw r27, 0x1c(r1)
/* 801540F8 001511D8  7C 7B 1B 78 */	mr r27, r3
/* 801540FC 001511DC  3C 60 80 3C */	lis r3, globals@ha
/* 80154100 001511E0  38 63 05 58 */	addi r3, r3, globals@l
/* 80154104 001511E4  80 9B 00 18 */	lwz r4, 0x18(r27)
/* 80154108 001511E8  80 63 07 04 */	lwz r3, 0x704(r3)
/* 8015410C 001511EC  83 84 00 00 */	lwz r28, 0x0(r4)
/* 80154110 001511F0  83 A3 00 4C */	lwz r29, 0x4c(r3)
/* 80154114 001511F4  7F 83 E3 78 */	mr r3, r28
/* 80154118 001511F8  48 00 09 C5 */	bl get_center__9zNPCPrawnCFv
/* 8015411C 001511FC  7C 7F 1B 78 */	mr r31, r3
/* 80154120 00151200  7F 83 E3 78 */	mr r3, r28
/* 80154124 00151204  48 00 0B 39 */	bl get_facing__9zNPCPrawnCFv
/* 80154128 00151208  C0 3D 00 30 */	lfs f1, 0x30(r29)
/* 8015412C 0015120C  7C 7E 1B 78 */	mr r30, r3
/* 80154130 00151210  C0 1F 00 00 */	lfs f0, 0x0(r31)
/* 80154134 00151214  C0 5D 00 38 */	lfs f2, 0x38(r29)
/* 80154138 00151218  EC 21 00 28 */	fsubs f1, f1, f0
/* 8015413C 0015121C  C0 1F 00 08 */	lfs f0, 0x8(r31)
/* 80154140 00151220  80 62 BF 80 */	lwz r3, "@2266"@sda21(r2)
/* 80154144 00151224  80 02 BF 84 */	lwz r0, "@2266"+0x4@sda21(r2)
/* 80154148 00151228  EC 42 00 28 */	fsubs f2, f2, f0
/* 8015414C 0015122C  90 61 00 08 */	stw r3, 0x8(r1)
/* 80154150 00151230  90 01 00 0C */	stw r0, 0xc(r1)
/* 80154154 00151234  D0 21 00 08 */	stfs f1, 0x8(r1)
/* 80154158 00151238  D0 41 00 0C */	stfs f2, 0xc(r1)
/* 8015415C 0015123C  4B EB 1F 15 */	bl xatan2__Fff
/* 80154160 00151240  3C 60 80 33 */	lis r3, "tweak__27@unnamed@zNPCTypePrawn_cpp@"@ha
/* 80154164 00151244  C0 7B 00 54 */	lfs f3, 0x54(r27)
/* 80154168 00151248  3B E3 95 E0 */	addi r31, r3, "tweak__27@unnamed@zNPCTypePrawn_cpp@"@l
/* 8015416C 0015124C  C0 5E 00 08 */	lfs f2, 0x8(r30)
/* 80154170 00151250  C0 1F 00 54 */	lfs f0, 0x54(r31)
/* 80154174 00151254  EF E3 08 3A */	fmadds f31, f3, f0, f1
/* 80154178 00151258  C0 3E 00 00 */	lfs f1, 0x0(r30)
/* 8015417C 0015125C  4B EB 1E F5 */	bl xatan2__Fff
/* 80154180 00151260  EC 1F 08 28 */	fsubs f0, f31, f1
/* 80154184 00151264  C0 22 A8 08 */	lfs f1, "@1909"@sda21(r2)
/* 80154188 00151268  EC 21 00 2A */	fadds f1, f1, f0
/* 8015418C 0015126C  4B EB A6 69 */	bl xrmod__Ff
/* 80154190 00151270  C0 42 A8 08 */	lfs f2, "@1909"@sda21(r2)
/* 80154194 00151274  C0 7B 00 54 */	lfs f3, 0x54(r27)
/* 80154198 00151278  C0 02 A7 6C */	lfs f0, "@1053"@sda21(r2)
/* 8015419C 0015127C  EC 21 10 28 */	fsubs f1, f1, f2
/* 801541A0 00151280  FC 03 00 40 */	fcmpo cr0, f3, f0
/* 801541A4 00151284  40 80 00 0C */	bge .L_801541B0
/* 801541A8 00151288  38 60 00 01 */	li r3, 0x1
/* 801541AC 0015128C  48 00 00 08 */	b .L_801541B4
.L_801541B0:
/* 801541B0 00151290  38 60 00 00 */	li r3, 0x0
.L_801541B4:
/* 801541B4 00151294  C0 02 A7 6C */	lfs f0, "@1053"@sda21(r2)
/* 801541B8 00151298  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 801541BC 0015129C  40 80 00 0C */	bge .L_801541C8
/* 801541C0 001512A0  38 00 00 01 */	li r0, 0x1
/* 801541C4 001512A4  48 00 00 08 */	b .L_801541CC
.L_801541C8:
/* 801541C8 001512A8  38 00 00 00 */	li r0, 0x0
.L_801541CC:
/* 801541CC 001512AC  7C 00 18 00 */	cmpw r0, r3
/* 801541D0 001512B0  40 82 00 34 */	bne .L_80154204
/* 801541D4 001512B4  C0 22 A7 74 */	lfs f1, "@1282"@sda21(r2)
/* 801541D8 001512B8  C0 1F 00 54 */	lfs f0, 0x54(r31)
/* 801541DC 001512BC  EC 21 00 F2 */	fmuls f1, f1, f3
/* 801541E0 001512C0  EF E1 F8 3A */	fmadds f31, f1, f0, f31
/* 801541E4 001512C4  FC 20 F8 90 */	fmr f1, f31
/* 801541E8 001512C8  4B F7 0C 65 */	bl isin__Ff
/* 801541EC 001512CC  D0 3C 02 C4 */	stfs f1, 0x2c4(r28)
/* 801541F0 001512D0  FC 20 F8 90 */	fmr f1, f31
/* 801541F4 001512D4  4B F7 0C 9D */	bl icos__Ff
/* 801541F8 001512D8  D0 3C 02 C8 */	stfs f1, 0x2c8(r28)
/* 801541FC 001512DC  38 60 00 03 */	li r3, 0x3
/* 80154200 001512E0  48 00 00 28 */	b .L_80154228
.L_80154204:
/* 80154204 001512E4  C0 02 A7 6C */	lfs f0, "@1053"@sda21(r2)
/* 80154208 001512E8  38 7C 02 C4 */	addi r3, r28, 0x2c4
/* 8015420C 001512EC  D0 1C 02 F0 */	stfs f0, 0x2f0(r28)
/* 80154210 001512F0  C0 3E 00 00 */	lfs f1, 0x0(r30)
/* 80154214 001512F4  C0 5E 00 08 */	lfs f2, 0x8(r30)
/* 80154218 001512F8  4B ED 21 01 */	bl assign__5xVec2Fff
/* 8015421C 001512FC  38 7C 02 C4 */	addi r3, r28, 0x2c4
/* 80154220 00151300  4B FC 92 FD */	bl normalize__5xVec2Fv
/* 80154224 00151304  38 60 00 02 */	li r3, 0x2
.L_80154228:
/* 80154228 00151308  E3 E1 00 38 */	psq_l f31, 0x38(r1), 0, qr0
/* 8015422C 0015130C  CB E1 00 30 */	lfd f31, 0x30(r1)
/* 80154230 00151310  BB 61 00 1C */	lmw r27, 0x1c(r1)
/* 80154234 00151314  80 01 00 44 */	lwz r0, 0x44(r1)
/* 80154238 00151318  7C 08 03 A6 */	mtlr r0
/* 8015423C 0015131C  38 21 00 40 */	addi r1, r1, 0x40
/* 80154240 00151320  4E 80 00 20 */	blr
.endfn update_sweep__17zNPCGoalPrawnBeamFf

# zNPCGoalPrawnBeam::update_stop(float)
.fn update_stop__17zNPCGoalPrawnBeamFf, global
/* 80154244 00151324  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 80154248 00151328  7C 08 02 A6 */	mflr r0
/* 8015424C 0015132C  90 01 00 24 */	stw r0, 0x24(r1)
/* 80154250 00151330  DB E1 00 10 */	stfd f31, 0x10(r1)
/* 80154254 00151334  F3 E1 00 18 */	psq_st f31, 0x18(r1), 0, qr0
/* 80154258 00151338  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8015425C 0015133C  80 63 00 18 */	lwz r3, 0x18(r3)
/* 80154260 00151340  FF E0 08 90 */	fmr f31, f1
/* 80154264 00151344  83 E3 00 00 */	lwz r31, 0x0(r3)
/* 80154268 00151348  7F E3 FB 78 */	mr r3, r31
/* 8015426C 0015134C  4B F9 ED 95 */	bl AnimCurStateID__10zNPCCommonFv
/* 80154270 00151350  3C 80 80 2A */	lis r4, g_hash_subbanim@ha
/* 80154274 00151354  38 84 90 E0 */	addi r4, r4, g_hash_subbanim@l
/* 80154278 00151358  80 04 00 38 */	lwz r0, 0x38(r4)
/* 8015427C 0015135C  7C 00 18 40 */	cmplw r0, r3
/* 80154280 00151360  40 82 00 28 */	bne .L_801542A8
/* 80154284 00151364  7F E3 FB 78 */	mr r3, r31
/* 80154288 00151368  38 80 00 00 */	li r4, 0x0
/* 8015428C 0015136C  4B F9 ED ED */	bl AnimTimeRemain__10zNPCCommonFP10xAnimState
/* 80154290 00151370  C0 02 A8 14 */	lfs f0, "@1912"@sda21(r2)
/* 80154294 00151374  EC 00 F8 2A */	fadds f0, f0, f31
/* 80154298 00151378  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8015429C 0015137C  40 80 00 0C */	bge .L_801542A8
/* 801542A0 00151380  38 60 00 04 */	li r3, 0x4
/* 801542A4 00151384  48 00 00 08 */	b .L_801542AC
.L_801542A8:
/* 801542A8 00151388  38 60 00 05 */	li r3, 0x5
.L_801542AC:
/* 801542AC 0015138C  E3 E1 00 18 */	psq_l f31, 0x18(r1), 0, qr0
/* 801542B0 00151390  80 01 00 24 */	lwz r0, 0x24(r1)
/* 801542B4 00151394  CB E1 00 10 */	lfd f31, 0x10(r1)
/* 801542B8 00151398  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 801542BC 0015139C  7C 08 03 A6 */	mtlr r0
/* 801542C0 001513A0  38 21 00 20 */	addi r1, r1, 0x20
/* 801542C4 001513A4  4E 80 00 20 */	blr
.endfn update_stop__17zNPCGoalPrawnBeamFf

# zNPCGoalPrawnBeam::init_look_dir()
.fn init_look_dir__17zNPCGoalPrawnBeamFv, global
/* 801542C8 001513A8  94 21 FF D0 */	stwu r1, -0x30(r1)
/* 801542CC 001513AC  7C 08 02 A6 */	mflr r0
/* 801542D0 001513B0  90 01 00 34 */	stw r0, 0x34(r1)
/* 801542D4 001513B4  DB E1 00 20 */	stfd f31, 0x20(r1)
/* 801542D8 001513B8  F3 E1 00 28 */	psq_st f31, 0x28(r1), 0, qr0
/* 801542DC 001513BC  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 801542E0 001513C0  93 C1 00 18 */	stw r30, 0x18(r1)
/* 801542E4 001513C4  93 A1 00 14 */	stw r29, 0x14(r1)
/* 801542E8 001513C8  7C 7D 1B 78 */	mr r29, r3
/* 801542EC 001513CC  3C 60 80 3C */	lis r3, globals@ha
/* 801542F0 001513D0  38 63 05 58 */	addi r3, r3, globals@l
/* 801542F4 001513D4  80 9D 00 18 */	lwz r4, 0x18(r29)
/* 801542F8 001513D8  80 63 07 04 */	lwz r3, 0x704(r3)
/* 801542FC 001513DC  83 C4 00 00 */	lwz r30, 0x0(r4)
/* 80154300 001513E0  83 E3 00 4C */	lwz r31, 0x4c(r3)
/* 80154304 001513E4  7F C3 F3 78 */	mr r3, r30
/* 80154308 001513E8  48 00 07 D5 */	bl get_center__9zNPCPrawnCFv
/* 8015430C 001513EC  C0 3F 00 30 */	lfs f1, 0x30(r31)
/* 80154310 001513F0  C0 03 00 00 */	lfs f0, 0x0(r3)
/* 80154314 001513F4  C0 5F 00 38 */	lfs f2, 0x38(r31)
/* 80154318 001513F8  EC 21 00 28 */	fsubs f1, f1, f0
/* 8015431C 001513FC  C0 03 00 08 */	lfs f0, 0x8(r3)
/* 80154320 00151400  80 82 BF 88 */	lwz r4, "@2297"@sda21(r2)
/* 80154324 00151404  80 02 BF 8C */	lwz r0, "@2297"+0x4@sda21(r2)
/* 80154328 00151408  EC 42 00 28 */	fsubs f2, f2, f0
/* 8015432C 0015140C  90 81 00 08 */	stw r4, 0x8(r1)
/* 80154330 00151410  90 01 00 0C */	stw r0, 0xc(r1)
/* 80154334 00151414  D0 21 00 08 */	stfs f1, 0x8(r1)
/* 80154338 00151418  D0 41 00 0C */	stfs f2, 0xc(r1)
/* 8015433C 0015141C  4B EB 1D 35 */	bl xatan2__Fff
/* 80154340 00151420  3C 60 80 33 */	lis r3, "tweak__27@unnamed@zNPCTypePrawn_cpp@"@ha
/* 80154344 00151424  C0 5D 00 54 */	lfs f2, 0x54(r29)
/* 80154348 00151428  38 63 95 E0 */	addi r3, r3, "tweak__27@unnamed@zNPCTypePrawn_cpp@"@l
/* 8015434C 0015142C  C0 03 00 54 */	lfs f0, 0x54(r3)
/* 80154350 00151430  EF E2 08 3A */	fmadds f31, f2, f0, f1
/* 80154354 00151434  FC 20 F8 90 */	fmr f1, f31
/* 80154358 00151438  4B F7 0A F5 */	bl isin__Ff
/* 8015435C 0015143C  D0 3E 02 C4 */	stfs f1, 0x2c4(r30)
/* 80154360 00151440  FC 20 F8 90 */	fmr f1, f31
/* 80154364 00151444  4B F7 0B 2D */	bl icos__Ff
/* 80154368 00151448  D0 3E 02 C8 */	stfs f1, 0x2c8(r30)
/* 8015436C 0015144C  E3 E1 00 28 */	psq_l f31, 0x28(r1), 0, qr0
/* 80154370 00151450  80 01 00 34 */	lwz r0, 0x34(r1)
/* 80154374 00151454  CB E1 00 20 */	lfd f31, 0x20(r1)
/* 80154378 00151458  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 8015437C 0015145C  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 80154380 00151460  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 80154384 00151464  7C 08 03 A6 */	mtlr r0
/* 80154388 00151468  38 21 00 30 */	addi r1, r1, 0x30
/* 8015438C 0015146C  4E 80 00 20 */	blr
.endfn init_look_dir__17zNPCGoalPrawnBeamFv

# zNPCGoalPrawnBowl::Enter(float, void*)
.fn Enter__17zNPCGoalPrawnBowlFfPv, global
/* 80154390 00151470  94 21 FF D0 */	stwu r1, -0x30(r1)
/* 80154394 00151474  7C 08 02 A6 */	mflr r0
/* 80154398 00151478  90 01 00 34 */	stw r0, 0x34(r1)
/* 8015439C 0015147C  DB E1 00 20 */	stfd f31, 0x20(r1)
/* 801543A0 00151480  F3 E1 00 28 */	psq_st f31, 0x28(r1), 0, qr0
/* 801543A4 00151484  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 801543A8 00151488  93 C1 00 18 */	stw r30, 0x18(r1)
/* 801543AC 0015148C  93 A1 00 14 */	stw r29, 0x14(r1)
/* 801543B0 00151490  7C 7D 1B 78 */	mr r29, r3
/* 801543B4 00151494  7C 9E 23 78 */	mr r30, r4
/* 801543B8 00151498  80 63 00 18 */	lwz r3, 0x18(r3)
/* 801543BC 0015149C  FF E0 08 90 */	fmr f31, f1
/* 801543C0 001514A0  38 00 00 01 */	li r0, 0x1
/* 801543C4 001514A4  38 80 00 03 */	li r4, 0x3
/* 801543C8 001514A8  83 E3 00 00 */	lwz r31, 0x0(r3)
/* 801543CC 001514AC  38 A0 00 00 */	li r5, 0x0
/* 801543D0 001514B0  38 C0 00 00 */	li r6, 0x0
/* 801543D4 001514B4  98 1F 02 C0 */	stb r0, 0x2c0(r31)
/* 801543D8 001514B8  7F E3 FB 78 */	mr r3, r31
/* 801543DC 001514BC  4B FF ED C9 */	bl set_floor_state__9zNPCPrawnFQ29zNPCPrawn16floor_state_enumbb
/* 801543E0 001514C0  C0 02 A7 6C */	lfs f0, "@1053"@sda21(r2)
/* 801543E4 001514C4  FC 20 F8 90 */	fmr f1, f31
/* 801543E8 001514C8  38 00 00 01 */	li r0, 0x1
/* 801543EC 001514CC  7F A3 EB 78 */	mr r3, r29
/* 801543F0 001514D0  D0 1F 02 F0 */	stfs f0, 0x2f0(r31)
/* 801543F4 001514D4  7F C4 F3 78 */	mr r4, r30
/* 801543F8 001514D8  98 1D 00 4C */	stb r0, 0x4c(r29)
/* 801543FC 001514DC  4B F8 0D 19 */	bl Enter__14zNPCGoalCommonFfPv
/* 80154400 001514E0  E3 E1 00 28 */	psq_l f31, 0x28(r1), 0, qr0
/* 80154404 001514E4  80 01 00 34 */	lwz r0, 0x34(r1)
/* 80154408 001514E8  CB E1 00 20 */	lfd f31, 0x20(r1)
/* 8015440C 001514EC  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 80154410 001514F0  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 80154414 001514F4  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 80154418 001514F8  7C 08 03 A6 */	mtlr r0
/* 8015441C 001514FC  38 21 00 30 */	addi r1, r1, 0x30
/* 80154420 00151500  4E 80 00 20 */	blr
.endfn Enter__17zNPCGoalPrawnBowlFfPv

# zNPCGoalPrawnBowl::Exit(float, void*)
.fn Exit__17zNPCGoalPrawnBowlFfPv, global
/* 80154424 00151504  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 80154428 00151508  7C 08 02 A6 */	mflr r0
/* 8015442C 0015150C  38 A0 00 01 */	li r5, 0x1
/* 80154430 00151510  38 C0 00 00 */	li r6, 0x0
/* 80154434 00151514  90 01 00 24 */	stw r0, 0x24(r1)
/* 80154438 00151518  DB E1 00 18 */	stfd f31, 0x18(r1)
/* 8015443C 0015151C  FF E0 08 90 */	fmr f31, f1
/* 80154440 00151520  93 E1 00 14 */	stw r31, 0x14(r1)
/* 80154444 00151524  7C 9F 23 78 */	mr r31, r4
/* 80154448 00151528  38 80 00 01 */	li r4, 0x1
/* 8015444C 0015152C  93 C1 00 10 */	stw r30, 0x10(r1)
/* 80154450 00151530  7C 7E 1B 78 */	mr r30, r3
/* 80154454 00151534  80 63 00 18 */	lwz r3, 0x18(r3)
/* 80154458 00151538  80 63 00 00 */	lwz r3, 0x0(r3)
/* 8015445C 0015153C  4B FF ED 49 */	bl set_floor_state__9zNPCPrawnFQ29zNPCPrawn16floor_state_enumbb
/* 80154460 00151540  FC 20 F8 90 */	fmr f1, f31
/* 80154464 00151544  7F C3 F3 78 */	mr r3, r30
/* 80154468 00151548  7F E4 FB 78 */	mr r4, r31
/* 8015446C 0015154C  4B F8 0F B1 */	bl Exit__5xGoalFfPv
/* 80154470 00151550  80 01 00 24 */	lwz r0, 0x24(r1)
/* 80154474 00151554  CB E1 00 18 */	lfd f31, 0x18(r1)
/* 80154478 00151558  83 E1 00 14 */	lwz r31, 0x14(r1)
/* 8015447C 0015155C  83 C1 00 10 */	lwz r30, 0x10(r1)
/* 80154480 00151560  7C 08 03 A6 */	mtlr r0
/* 80154484 00151564  38 21 00 20 */	addi r1, r1, 0x20
/* 80154488 00151568  4E 80 00 20 */	blr
.endfn Exit__17zNPCGoalPrawnBowlFfPv

# zNPCGoalPrawnBowl::Process(en_trantype*, float, void*, xScene*)
.fn Process__17zNPCGoalPrawnBowlFP11en_trantypefPvP6xScene, global
/* 8015448C 0015156C  94 21 FF D0 */	stwu r1, -0x30(r1)
/* 80154490 00151570  7C 08 02 A6 */	mflr r0
/* 80154494 00151574  90 01 00 34 */	stw r0, 0x34(r1)
/* 80154498 00151578  DB E1 00 20 */	stfd f31, 0x20(r1)
/* 8015449C 0015157C  F3 E1 00 28 */	psq_st f31, 0x28(r1), 0, qr0
/* 801544A0 00151580  BF 61 00 0C */	stmw r27, 0xc(r1)
/* 801544A4 00151584  7C 7B 1B 78 */	mr r27, r3
/* 801544A8 00151588  FF E0 08 90 */	fmr f31, f1
/* 801544AC 0015158C  88 03 00 4C */	lbz r0, 0x4c(r3)
/* 801544B0 00151590  7C 9C 23 78 */	mr r28, r4
/* 801544B4 00151594  80 63 00 18 */	lwz r3, 0x18(r3)
/* 801544B8 00151598  7C BD 2B 78 */	mr r29, r5
/* 801544BC 0015159C  28 00 00 00 */	cmplwi r0, 0x0
/* 801544C0 001515A0  83 E3 00 00 */	lwz r31, 0x0(r3)
/* 801544C4 001515A4  7C DE 33 78 */	mr r30, r6
/* 801544C8 001515A8  41 82 00 48 */	beq .L_80154510
/* 801544CC 001515AC  3C 60 80 33 */	lis r3, "tweak__27@unnamed@zNPCTypePrawn_cpp@"@ha
/* 801544D0 001515B0  C0 3F 02 F0 */	lfs f1, 0x2f0(r31)
/* 801544D4 001515B4  38 63 95 E0 */	addi r3, r3, "tweak__27@unnamed@zNPCTypePrawn_cpp@"@l
/* 801544D8 001515B8  C0 03 00 B8 */	lfs f0, 0xb8(r3)
/* 801544DC 001515BC  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 801544E0 001515C0  4C 41 13 82 */	cror eq, gt, eq
/* 801544E4 001515C4  40 82 00 68 */	bne .L_8015454C
/* 801544E8 001515C8  7F E3 FB 78 */	mr r3, r31
/* 801544EC 001515CC  38 80 00 04 */	li r4, 0x4
/* 801544F0 001515D0  38 A0 00 00 */	li r5, 0x0
/* 801544F4 001515D4  38 C0 00 00 */	li r6, 0x0
/* 801544F8 001515D8  4B FF EC AD */	bl set_floor_state__9zNPCPrawnFQ29zNPCPrawn16floor_state_enumbb
/* 801544FC 001515DC  38 00 00 00 */	li r0, 0x0
/* 80154500 001515E0  98 1B 00 4C */	stb r0, 0x4c(r27)
/* 80154504 001515E4  C0 02 A7 6C */	lfs f0, "@1053"@sda21(r2)
/* 80154508 001515E8  D0 1F 02 F0 */	stfs f0, 0x2f0(r31)
/* 8015450C 001515EC  48 00 00 40 */	b .L_8015454C
.L_80154510:
/* 80154510 001515F0  80 1F 02 BC */	lwz r0, 0x2bc(r31)
/* 80154514 001515F4  3C 60 80 33 */	lis r3, "tweak__27@unnamed@zNPCTypePrawn_cpp@"@ha
/* 80154518 001515F8  38 63 95 E0 */	addi r3, r3, "tweak__27@unnamed@zNPCTypePrawn_cpp@"@l
/* 8015451C 001515FC  C0 3F 02 F0 */	lfs f1, 0x2f0(r31)
/* 80154520 00151600  54 00 10 3A */	slwi r0, r0, 2
/* 80154524 00151604  7C 63 02 14 */	add r3, r3, r0
/* 80154528 00151608  C0 03 00 D4 */	lfs f0, 0xd4(r3)
/* 8015452C 0015160C  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80154530 00151610  4C 41 13 82 */	cror eq, gt, eq
/* 80154534 00151614  40 82 00 18 */	bne .L_8015454C
/* 80154538 00151618  38 00 00 01 */	li r0, 0x1
/* 8015453C 0015161C  3C 60 4E 47 */	lis r3, 0x4e47
/* 80154540 00151620  90 1C 00 00 */	stw r0, 0x0(r28)
/* 80154544 00151624  38 63 4D 38 */	addi r3, r3, 0x4d38
/* 80154548 00151628  48 00 00 1C */	b .L_80154564
.L_8015454C:
/* 8015454C 0015162C  FC 20 F8 90 */	fmr f1, f31
/* 80154550 00151630  7F 63 DB 78 */	mr r3, r27
/* 80154554 00151634  7F 84 E3 78 */	mr r4, r28
/* 80154558 00151638  7F A5 EB 78 */	mr r5, r29
/* 8015455C 0015163C  7F C6 F3 78 */	mr r6, r30
/* 80154560 00151640  4B FB A5 E9 */	bl Process__5xGoalFP11en_trantypefPvP6xScene
.L_80154564:
/* 80154564 00151644  E3 E1 00 28 */	psq_l f31, 0x28(r1), 0, qr0
/* 80154568 00151648  CB E1 00 20 */	lfd f31, 0x20(r1)
/* 8015456C 0015164C  BB 61 00 0C */	lmw r27, 0xc(r1)
/* 80154570 00151650  80 01 00 34 */	lwz r0, 0x34(r1)
/* 80154574 00151654  7C 08 03 A6 */	mtlr r0
/* 80154578 00151658  38 21 00 30 */	addi r1, r1, 0x30
/* 8015457C 0015165C  4E 80 00 20 */	blr
.endfn Process__17zNPCGoalPrawnBowlFP11en_trantypefPvP6xScene

# zNPCGoalPrawnDamage::Enter(float, void*)
.fn Enter__19zNPCGoalPrawnDamageFfPv, global
/* 80154580 00151660  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 80154584 00151664  7C 08 02 A6 */	mflr r0
/* 80154588 00151668  38 A0 00 00 */	li r5, 0x0
/* 8015458C 0015166C  38 C0 00 00 */	li r6, 0x0
/* 80154590 00151670  90 01 00 24 */	stw r0, 0x24(r1)
/* 80154594 00151674  DB E1 00 18 */	stfd f31, 0x18(r1)
/* 80154598 00151678  FF E0 08 90 */	fmr f31, f1
/* 8015459C 0015167C  93 E1 00 14 */	stw r31, 0x14(r1)
/* 801545A0 00151680  7C 9F 23 78 */	mr r31, r4
/* 801545A4 00151684  38 80 00 05 */	li r4, 0x5
/* 801545A8 00151688  93 C1 00 10 */	stw r30, 0x10(r1)
/* 801545AC 0015168C  7C 7E 1B 78 */	mr r30, r3
/* 801545B0 00151690  80 63 00 18 */	lwz r3, 0x18(r3)
/* 801545B4 00151694  80 63 00 00 */	lwz r3, 0x0(r3)
/* 801545B8 00151698  4B FF EB ED */	bl set_floor_state__9zNPCPrawnFQ29zNPCPrawn16floor_state_enumbb
/* 801545BC 0015169C  FC 20 F8 90 */	fmr f1, f31
/* 801545C0 001516A0  7F C3 F3 78 */	mr r3, r30
/* 801545C4 001516A4  7F E4 FB 78 */	mr r4, r31
/* 801545C8 001516A8  4B F8 0B 4D */	bl Enter__14zNPCGoalCommonFfPv
/* 801545CC 001516AC  80 01 00 24 */	lwz r0, 0x24(r1)
/* 801545D0 001516B0  CB E1 00 18 */	lfd f31, 0x18(r1)
/* 801545D4 001516B4  83 E1 00 14 */	lwz r31, 0x14(r1)
/* 801545D8 001516B8  83 C1 00 10 */	lwz r30, 0x10(r1)
/* 801545DC 001516BC  7C 08 03 A6 */	mtlr r0
/* 801545E0 001516C0  38 21 00 20 */	addi r1, r1, 0x20
/* 801545E4 001516C4  4E 80 00 20 */	blr
.endfn Enter__19zNPCGoalPrawnDamageFfPv

# zNPCGoalPrawnDamage::Exit(float, void*)
.fn Exit__19zNPCGoalPrawnDamageFfPv, global
/* 801545E8 001516C8  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 801545EC 001516CC  7C 08 02 A6 */	mflr r0
/* 801545F0 001516D0  90 01 00 24 */	stw r0, 0x24(r1)
/* 801545F4 001516D4  DB E1 00 18 */	stfd f31, 0x18(r1)
/* 801545F8 001516D8  FF E0 08 90 */	fmr f31, f1
/* 801545FC 001516DC  93 E1 00 14 */	stw r31, 0x14(r1)
/* 80154600 001516E0  7C 9F 23 78 */	mr r31, r4
/* 80154604 001516E4  93 C1 00 10 */	stw r30, 0x10(r1)
/* 80154608 001516E8  7C 7E 1B 78 */	mr r30, r3
/* 8015460C 001516EC  80 63 00 18 */	lwz r3, 0x18(r3)
/* 80154610 001516F0  80 63 00 00 */	lwz r3, 0x0(r3)
/* 80154614 001516F4  4B FF DE 11 */	bl update_round__9zNPCPrawnFv
/* 80154618 001516F8  FC 20 F8 90 */	fmr f1, f31
/* 8015461C 001516FC  7F C3 F3 78 */	mr r3, r30
/* 80154620 00151700  7F E4 FB 78 */	mr r4, r31
/* 80154624 00151704  4B F8 0D F9 */	bl Exit__5xGoalFfPv
/* 80154628 00151708  80 01 00 24 */	lwz r0, 0x24(r1)
/* 8015462C 0015170C  CB E1 00 18 */	lfd f31, 0x18(r1)
/* 80154630 00151710  83 E1 00 14 */	lwz r31, 0x14(r1)
/* 80154634 00151714  83 C1 00 10 */	lwz r30, 0x10(r1)
/* 80154638 00151718  7C 08 03 A6 */	mtlr r0
/* 8015463C 0015171C  38 21 00 20 */	addi r1, r1, 0x20
/* 80154640 00151720  4E 80 00 20 */	blr
.endfn Exit__19zNPCGoalPrawnDamageFfPv

# zNPCGoalPrawnDamage::Process(en_trantype*, float, void*, xScene*)
.fn Process__19zNPCGoalPrawnDamageFP11en_trantypefPvP6xScene, global
/* 80154644 00151724  94 21 FF D0 */	stwu r1, -0x30(r1)
/* 80154648 00151728  7C 08 02 A6 */	mflr r0
/* 8015464C 0015172C  90 01 00 34 */	stw r0, 0x34(r1)
/* 80154650 00151730  DB E1 00 20 */	stfd f31, 0x20(r1)
/* 80154654 00151734  F3 E1 00 28 */	psq_st f31, 0x28(r1), 0, qr0
/* 80154658 00151738  BF 61 00 0C */	stmw r27, 0xc(r1)
/* 8015465C 0015173C  7C 7B 1B 78 */	mr r27, r3
/* 80154660 00151740  FF E0 08 90 */	fmr f31, f1
/* 80154664 00151744  80 63 00 18 */	lwz r3, 0x18(r3)
/* 80154668 00151748  7C 9C 23 78 */	mr r28, r4
/* 8015466C 0015174C  7C BD 2B 78 */	mr r29, r5
/* 80154670 00151750  7C DE 33 78 */	mr r30, r6
/* 80154674 00151754  83 E3 00 00 */	lwz r31, 0x0(r3)
/* 80154678 00151758  7F E3 FB 78 */	mr r3, r31
/* 8015467C 0015175C  4B F9 E9 21 */	bl AnimCurState__10zNPCCommonFv
/* 80154680 00151760  3C 80 80 2A */	lis r4, g_hash_subbanim@ha
/* 80154684 00151764  80 A3 00 08 */	lwz r5, 0x8(r3)
/* 80154688 00151768  38 64 90 E0 */	addi r3, r4, g_hash_subbanim@l
/* 8015468C 0015176C  80 03 00 24 */	lwz r0, 0x24(r3)
/* 80154690 00151770  7C 05 00 40 */	cmplw r5, r0
/* 80154694 00151774  41 82 00 10 */	beq .L_801546A4
/* 80154698 00151778  80 03 00 28 */	lwz r0, 0x28(r3)
/* 8015469C 0015177C  7C 05 00 40 */	cmplw r5, r0
/* 801546A0 00151780  40 82 00 20 */	bne .L_801546C0
.L_801546A4:
/* 801546A4 00151784  7F E3 FB 78 */	mr r3, r31
/* 801546A8 00151788  38 80 00 00 */	li r4, 0x0
/* 801546AC 0015178C  4B F9 E9 CD */	bl AnimTimeRemain__10zNPCCommonFP10xAnimState
/* 801546B0 00151790  C0 02 A8 14 */	lfs f0, "@1912"@sda21(r2)
/* 801546B4 00151794  EC 00 F8 2A */	fadds f0, f0, f31
/* 801546B8 00151798  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 801546BC 0015179C  40 80 00 30 */	bge .L_801546EC
.L_801546C0:
/* 801546C0 001517A0  38 00 00 01 */	li r0, 0x1
/* 801546C4 001517A4  90 1C 00 00 */	stw r0, 0x0(r28)
/* 801546C8 001517A8  80 1F 02 B8 */	lwz r0, 0x2b8(r31)
/* 801546CC 001517AC  2C 00 00 00 */	cmpwi r0, 0x0
/* 801546D0 001517B0  41 81 00 10 */	bgt .L_801546E0
/* 801546D4 001517B4  3C 60 4E 47 */	lis r3, 0x4e47
/* 801546D8 001517B8  38 63 4D 3C */	addi r3, r3, 0x4d3c
/* 801546DC 001517BC  48 00 00 28 */	b .L_80154704
.L_801546E0:
/* 801546E0 001517C0  3C 60 4E 47 */	lis r3, 0x4e47
/* 801546E4 001517C4  38 63 4D 38 */	addi r3, r3, 0x4d38
/* 801546E8 001517C8  48 00 00 1C */	b .L_80154704
.L_801546EC:
/* 801546EC 001517CC  FC 20 F8 90 */	fmr f1, f31
/* 801546F0 001517D0  7F 63 DB 78 */	mr r3, r27
/* 801546F4 001517D4  7F 84 E3 78 */	mr r4, r28
/* 801546F8 001517D8  7F A5 EB 78 */	mr r5, r29
/* 801546FC 001517DC  7F C6 F3 78 */	mr r6, r30
/* 80154700 001517E0  4B FB A4 49 */	bl Process__5xGoalFP11en_trantypefPvP6xScene
.L_80154704:
/* 80154704 001517E4  E3 E1 00 28 */	psq_l f31, 0x28(r1), 0, qr0
/* 80154708 001517E8  CB E1 00 20 */	lfd f31, 0x20(r1)
/* 8015470C 001517EC  BB 61 00 0C */	lmw r27, 0xc(r1)
/* 80154710 001517F0  80 01 00 34 */	lwz r0, 0x34(r1)
/* 80154714 001517F4  7C 08 03 A6 */	mtlr r0
/* 80154718 001517F8  38 21 00 30 */	addi r1, r1, 0x30
/* 8015471C 001517FC  4E 80 00 20 */	blr
.endfn Process__19zNPCGoalPrawnDamageFP11en_trantypefPvP6xScene

# zNPCGoalPrawnDeath::Enter(float, void*)
.fn Enter__18zNPCGoalPrawnDeathFfPv, global
/* 80154720 00151800  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 80154724 00151804  7C 08 02 A6 */	mflr r0
/* 80154728 00151808  90 01 00 24 */	stw r0, 0x24(r1)
/* 8015472C 0015180C  DB E1 00 18 */	stfd f31, 0x18(r1)
/* 80154730 00151810  FF E0 08 90 */	fmr f31, f1
/* 80154734 00151814  93 E1 00 14 */	stw r31, 0x14(r1)
/* 80154738 00151818  7C 9F 23 78 */	mr r31, r4
/* 8015473C 0015181C  93 C1 00 10 */	stw r30, 0x10(r1)
/* 80154740 00151820  7C 7E 1B 78 */	mr r30, r3
/* 80154744 00151824  80 63 00 18 */	lwz r3, 0x18(r3)
/* 80154748 00151828  80 63 00 00 */	lwz r3, 0x0(r3)
/* 8015474C 0015182C  4B FF DD 85 */	bl decompose__9zNPCPrawnFv
/* 80154750 00151830  FC 20 F8 90 */	fmr f1, f31
/* 80154754 00151834  7F C3 F3 78 */	mr r3, r30
/* 80154758 00151838  7F E4 FB 78 */	mr r4, r31
/* 8015475C 0015183C  4B F8 09 B9 */	bl Enter__14zNPCGoalCommonFfPv
/* 80154760 00151840  80 01 00 24 */	lwz r0, 0x24(r1)
/* 80154764 00151844  CB E1 00 18 */	lfd f31, 0x18(r1)
/* 80154768 00151848  83 E1 00 14 */	lwz r31, 0x14(r1)
/* 8015476C 0015184C  83 C1 00 10 */	lwz r30, 0x10(r1)
/* 80154770 00151850  7C 08 03 A6 */	mtlr r0
/* 80154774 00151854  38 21 00 20 */	addi r1, r1, 0x20
/* 80154778 00151858  4E 80 00 20 */	blr
.endfn Enter__18zNPCGoalPrawnDeathFfPv

# zNPCGoalPrawnDeath::Exit(float, void*)
.fn Exit__18zNPCGoalPrawnDeathFfPv, global
/* 8015477C 0015185C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80154780 00151860  7C 08 02 A6 */	mflr r0
/* 80154784 00151864  90 01 00 14 */	stw r0, 0x14(r1)
/* 80154788 00151868  4B F8 0C 95 */	bl Exit__5xGoalFfPv
/* 8015478C 0015186C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80154790 00151870  7C 08 03 A6 */	mtlr r0
/* 80154794 00151874  38 21 00 10 */	addi r1, r1, 0x10
/* 80154798 00151878  4E 80 00 20 */	blr
.endfn Exit__18zNPCGoalPrawnDeathFfPv

# zNPCGoalPrawnDeath::Process(en_trantype*, float, void*, xScene*)
.fn Process__18zNPCGoalPrawnDeathFP11en_trantypefPvP6xScene, global
/* 8015479C 0015187C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801547A0 00151880  7C 08 02 A6 */	mflr r0
/* 801547A4 00151884  90 01 00 14 */	stw r0, 0x14(r1)
/* 801547A8 00151888  4B FB A3 A1 */	bl Process__5xGoalFP11en_trantypefPvP6xScene
/* 801547AC 0015188C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801547B0 00151890  7C 08 03 A6 */	mtlr r0
/* 801547B4 00151894  38 21 00 10 */	addi r1, r1, 0x10
/* 801547B8 00151898  4E 80 00 20 */	blr
.endfn Process__18zNPCGoalPrawnDeathFP11en_trantypefPvP6xScene

# 0x801547BC - 0x80154ADC
.section .text, "ax", unique, 1
.balign 4

# fixed_queue<aqua_beam::ring_segment, 31>::reset()
.fn "reset__42fixed_queue<Q29aqua_beam12ring_segment,31>Fv", weak
/* 801547BC 0015189C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801547C0 001518A0  7C 08 02 A6 */	mflr r0
/* 801547C4 001518A4  90 01 00 14 */	stw r0, 0x14(r1)
/* 801547C8 001518A8  48 00 00 15 */	bl "clear__42fixed_queue<Q29aqua_beam12ring_segment,31>Fv"
/* 801547CC 001518AC  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801547D0 001518B0  7C 08 03 A6 */	mtlr r0
/* 801547D4 001518B4  38 21 00 10 */	addi r1, r1, 0x10
/* 801547D8 001518B8  4E 80 00 20 */	blr
.endfn "reset__42fixed_queue<Q29aqua_beam12ring_segment,31>Fv"

# fixed_queue<aqua_beam::ring_segment, 31>::clear()
.fn "clear__42fixed_queue<Q29aqua_beam12ring_segment,31>Fv", weak
/* 801547DC 001518BC  38 00 00 00 */	li r0, 0x0
/* 801547E0 001518C0  90 03 00 04 */	stw r0, 0x4(r3)
/* 801547E4 001518C4  90 03 00 00 */	stw r0, 0x0(r3)
/* 801547E8 001518C8  4E 80 00 20 */	blr
.endfn "clear__42fixed_queue<Q29aqua_beam12ring_segment,31>Fv"

# aqua_beam::config::operator=(const aqua_beam::config&)
.fn __as__Q29aqua_beam6configFRCQ29aqua_beam6config, weak
/* 801547EC 001518CC  C0 04 00 00 */	lfs f0, 0x0(r4)
/* 801547F0 001518D0  80 A4 00 04 */	lwz r5, 0x4(r4)
/* 801547F4 001518D4  D0 03 00 00 */	stfs f0, 0x0(r3)
/* 801547F8 001518D8  80 04 00 08 */	lwz r0, 0x8(r4)
/* 801547FC 001518DC  90 A3 00 04 */	stw r5, 0x4(r3)
/* 80154800 001518E0  80 A4 00 0C */	lwz r5, 0xc(r4)
/* 80154804 001518E4  90 03 00 08 */	stw r0, 0x8(r3)
/* 80154808 001518E8  80 04 00 10 */	lwz r0, 0x10(r4)
/* 8015480C 001518EC  90 A3 00 0C */	stw r5, 0xc(r3)
/* 80154810 001518F0  80 A4 00 14 */	lwz r5, 0x14(r4)
/* 80154814 001518F4  90 03 00 10 */	stw r0, 0x10(r3)
/* 80154818 001518F8  80 04 00 18 */	lwz r0, 0x18(r4)
/* 8015481C 001518FC  90 A3 00 14 */	stw r5, 0x14(r3)
/* 80154820 00151900  80 A4 00 1C */	lwz r5, 0x1c(r4)
/* 80154824 00151904  90 03 00 18 */	stw r0, 0x18(r3)
/* 80154828 00151908  80 04 00 20 */	lwz r0, 0x20(r4)
/* 8015482C 0015190C  90 A3 00 1C */	stw r5, 0x1c(r3)
/* 80154830 00151910  80 A4 00 24 */	lwz r5, 0x24(r4)
/* 80154834 00151914  90 03 00 20 */	stw r0, 0x20(r3)
/* 80154838 00151918  80 04 00 28 */	lwz r0, 0x28(r4)
/* 8015483C 0015191C  90 A3 00 24 */	stw r5, 0x24(r3)
/* 80154840 00151920  80 A4 00 2C */	lwz r5, 0x2c(r4)
/* 80154844 00151924  90 03 00 28 */	stw r0, 0x28(r3)
/* 80154848 00151928  80 04 00 30 */	lwz r0, 0x30(r4)
/* 8015484C 0015192C  90 A3 00 2C */	stw r5, 0x2c(r3)
/* 80154850 00151930  80 A4 00 34 */	lwz r5, 0x34(r4)
/* 80154854 00151934  90 03 00 30 */	stw r0, 0x30(r3)
/* 80154858 00151938  80 04 00 38 */	lwz r0, 0x38(r4)
/* 8015485C 0015193C  90 A3 00 34 */	stw r5, 0x34(r3)
/* 80154860 00151940  90 03 00 38 */	stw r0, 0x38(r3)
/* 80154864 00151944  4E 80 00 20 */	blr
.endfn __as__Q29aqua_beam6configFRCQ29aqua_beam6config

# fixed_queue<aqua_beam::ring_segment, 31>::empty() const
.fn "empty__42fixed_queue<Q29aqua_beam12ring_segment,31>CFv", weak
/* 80154868 00151948  80 83 00 04 */	lwz r4, 0x4(r3)
/* 8015486C 0015194C  80 03 00 00 */	lwz r0, 0x0(r3)
/* 80154870 00151950  7C 04 00 50 */	subf r0, r4, r0
/* 80154874 00151954  7C 00 00 34 */	cntlzw r0, r0
/* 80154878 00151958  54 03 D9 7E */	srwi r3, r0, 5
/* 8015487C 0015195C  4E 80 00 20 */	blr
.endfn "empty__42fixed_queue<Q29aqua_beam12ring_segment,31>CFv"

# fixed_queue<aqua_beam::ring_segment, 31>::iterator::operator!=(const fixed_queue<aqua_beam::ring_segment, 31>::iterator&) const
.fn "__ne__Q242fixed_queue<Q29aqua_beam12ring_segment,31>8iteratorCFRCQ242fixed_queue<Q29aqua_beam12ring_segment,31>8iterator", weak
/* 80154880 00151960  80 A3 00 00 */	lwz r5, 0x0(r3)
/* 80154884 00151964  80 04 00 00 */	lwz r0, 0x0(r4)
/* 80154888 00151968  7C 65 00 50 */	subf r3, r5, r0
/* 8015488C 0015196C  7C 00 28 50 */	subf r0, r0, r5
/* 80154890 00151970  7C 60 03 78 */	or r0, r3, r0
/* 80154894 00151974  54 03 0F FE */	srwi r3, r0, 31
/* 80154898 00151978  4E 80 00 20 */	blr
.endfn "__ne__Q242fixed_queue<Q29aqua_beam12ring_segment,31>8iteratorCFRCQ242fixed_queue<Q29aqua_beam12ring_segment,31>8iterator"

# fixed_queue<aqua_beam::ring_segment, 31>::end() const
.fn "end__42fixed_queue<Q29aqua_beam12ring_segment,31>CFv", weak
/* 8015489C 0015197C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801548A0 00151980  7C 08 02 A6 */	mflr r0
/* 801548A4 00151984  80 83 00 04 */	lwz r4, 0x4(r3)
/* 801548A8 00151988  90 01 00 14 */	stw r0, 0x14(r1)
/* 801548AC 0015198C  48 00 00 15 */	bl "create_iterator__42fixed_queue<Q29aqua_beam12ring_segment,31>CFUl"
/* 801548B0 00151990  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801548B4 00151994  7C 08 03 A6 */	mtlr r0
/* 801548B8 00151998  38 21 00 10 */	addi r1, r1, 0x10
/* 801548BC 0015199C  4E 80 00 20 */	blr
.endfn "end__42fixed_queue<Q29aqua_beam12ring_segment,31>CFv"

# fixed_queue<aqua_beam::ring_segment, 31>::create_iterator(unsigned long) const
.fn "create_iterator__42fixed_queue<Q29aqua_beam12ring_segment,31>CFUl", weak
/* 801548C0 001519A0  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801548C4 001519A4  7C 60 1B 78 */	mr r0, r3
/* 801548C8 001519A8  7C 83 23 78 */	mr r3, r4
/* 801548CC 001519AC  90 81 00 08 */	stw r4, 0x8(r1)
/* 801548D0 001519B0  7C 04 03 78 */	mr r4, r0
/* 801548D4 001519B4  90 01 00 0C */	stw r0, 0xc(r1)
/* 801548D8 001519B8  38 21 00 10 */	addi r1, r1, 0x10
/* 801548DC 001519BC  4E 80 00 20 */	blr
.endfn "create_iterator__42fixed_queue<Q29aqua_beam12ring_segment,31>CFUl"

# fixed_queue<aqua_beam::ring_segment, 31>::iterator::operator++()
.fn "__pp__Q242fixed_queue<Q29aqua_beam12ring_segment,31>8iteratorFv", weak
/* 801548E0 001519C0  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801548E4 001519C4  7C 08 02 A6 */	mflr r0
/* 801548E8 001519C8  38 80 00 01 */	li r4, 0x1
/* 801548EC 001519CC  90 01 00 14 */	stw r0, 0x14(r1)
/* 801548F0 001519D0  93 E1 00 0C */	stw r31, 0xc(r1)
/* 801548F4 001519D4  7C 7F 1B 78 */	mr r31, r3
/* 801548F8 001519D8  48 00 00 1D */	bl "__apl__Q242fixed_queue<Q29aqua_beam12ring_segment,31>8iteratorFi"
/* 801548FC 001519DC  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80154900 001519E0  7F E3 FB 78 */	mr r3, r31
/* 80154904 001519E4  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80154908 001519E8  7C 08 03 A6 */	mtlr r0
/* 8015490C 001519EC  38 21 00 10 */	addi r1, r1, 0x10
/* 80154910 001519F0  4E 80 00 20 */	blr
.endfn "__pp__Q242fixed_queue<Q29aqua_beam12ring_segment,31>8iteratorFv"

# fixed_queue<aqua_beam::ring_segment, 31>::iterator::operator+=(int)
.fn "__apl__Q242fixed_queue<Q29aqua_beam12ring_segment,31>8iteratorFi", weak
/* 80154914 001519F4  80 03 00 00 */	lwz r0, 0x0(r3)
/* 80154918 001519F8  7C 80 22 14 */	add r4, r0, r4
/* 8015491C 001519FC  38 04 00 20 */	addi r0, r4, 0x20
/* 80154920 00151A00  54 00 06 FE */	clrlwi r0, r0, 27
/* 80154924 00151A04  90 03 00 00 */	stw r0, 0x0(r3)
/* 80154928 00151A08  4E 80 00 20 */	blr
.endfn "__apl__Q242fixed_queue<Q29aqua_beam12ring_segment,31>8iteratorFi"

# fixed_queue<aqua_beam::ring_segment, 31>::iterator::operator*() const
.fn "__ml__Q242fixed_queue<Q29aqua_beam12ring_segment,31>8iteratorCFv", weak
/* 8015492C 00151A0C  80 03 00 00 */	lwz r0, 0x0(r3)
/* 80154930 00151A10  80 83 00 04 */	lwz r4, 0x4(r3)
/* 80154934 00151A14  1C 60 00 5C */	mulli r3, r0, 0x5c
/* 80154938 00151A18  38 63 00 08 */	addi r3, r3, 0x8
/* 8015493C 00151A1C  7C 64 1A 14 */	add r3, r4, r3
/* 80154940 00151A20  4E 80 00 20 */	blr
.endfn "__ml__Q242fixed_queue<Q29aqua_beam12ring_segment,31>8iteratorCFv"

# fixed_queue<aqua_beam::ring_segment, 31>::begin() const
.fn "begin__42fixed_queue<Q29aqua_beam12ring_segment,31>CFv", weak
/* 80154944 00151A24  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80154948 00151A28  7C 08 02 A6 */	mflr r0
/* 8015494C 00151A2C  80 83 00 00 */	lwz r4, 0x0(r3)
/* 80154950 00151A30  90 01 00 14 */	stw r0, 0x14(r1)
/* 80154954 00151A34  4B FF FF 6D */	bl "create_iterator__42fixed_queue<Q29aqua_beam12ring_segment,31>CFUl"
/* 80154958 00151A38  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8015495C 00151A3C  7C 08 03 A6 */	mtlr r0
/* 80154960 00151A40  38 21 00 10 */	addi r1, r1, 0x10
/* 80154964 00151A44  4E 80 00 20 */	blr
.endfn "begin__42fixed_queue<Q29aqua_beam12ring_segment,31>CFv"

# fixed_queue<aqua_beam::ring_segment, 31>::back()
.fn "back__42fixed_queue<Q29aqua_beam12ring_segment,31>Fv", weak
/* 80154968 00151A48  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 8015496C 00151A4C  7C 08 02 A6 */	mflr r0
/* 80154970 00151A50  90 01 00 24 */	stw r0, 0x24(r1)
/* 80154974 00151A54  4B FF FF 29 */	bl "end__42fixed_queue<Q29aqua_beam12ring_segment,31>CFv"
/* 80154978 00151A58  90 81 00 0C */	stw r4, 0xc(r1)
/* 8015497C 00151A5C  38 80 00 01 */	li r4, 0x1
/* 80154980 00151A60  90 61 00 08 */	stw r3, 0x8(r1)
/* 80154984 00151A64  38 61 00 08 */	addi r3, r1, 0x8
/* 80154988 00151A68  48 00 00 25 */	bl "__mi__Q242fixed_queue<Q29aqua_beam12ring_segment,31>8iteratorCFi"
/* 8015498C 00151A6C  90 61 00 10 */	stw r3, 0x10(r1)
/* 80154990 00151A70  38 61 00 10 */	addi r3, r1, 0x10
/* 80154994 00151A74  90 81 00 14 */	stw r4, 0x14(r1)
/* 80154998 00151A78  4B FF FF 95 */	bl "__ml__Q242fixed_queue<Q29aqua_beam12ring_segment,31>8iteratorCFv"
/* 8015499C 00151A7C  80 01 00 24 */	lwz r0, 0x24(r1)
/* 801549A0 00151A80  7C 08 03 A6 */	mtlr r0
/* 801549A4 00151A84  38 21 00 20 */	addi r1, r1, 0x20
/* 801549A8 00151A88  4E 80 00 20 */	blr
.endfn "back__42fixed_queue<Q29aqua_beam12ring_segment,31>Fv"

# fixed_queue<aqua_beam::ring_segment, 31>::iterator::operator-(int) const
.fn "__mi__Q242fixed_queue<Q29aqua_beam12ring_segment,31>8iteratorCFi", weak
/* 801549AC 00151A8C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801549B0 00151A90  7C 08 02 A6 */	mflr r0
/* 801549B4 00151A94  80 A3 00 00 */	lwz r5, 0x0(r3)
/* 801549B8 00151A98  90 01 00 14 */	stw r0, 0x14(r1)
/* 801549BC 00151A9C  80 03 00 04 */	lwz r0, 0x4(r3)
/* 801549C0 00151AA0  38 61 00 08 */	addi r3, r1, 0x8
/* 801549C4 00151AA4  90 A1 00 08 */	stw r5, 0x8(r1)
/* 801549C8 00151AA8  90 01 00 0C */	stw r0, 0xc(r1)
/* 801549CC 00151AAC  48 00 00 1D */	bl "__ami__Q242fixed_queue<Q29aqua_beam12ring_segment,31>8iteratorFi"
/* 801549D0 00151AB0  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801549D4 00151AB4  80 61 00 08 */	lwz r3, 0x8(r1)
/* 801549D8 00151AB8  80 81 00 0C */	lwz r4, 0xc(r1)
/* 801549DC 00151ABC  7C 08 03 A6 */	mtlr r0
/* 801549E0 00151AC0  38 21 00 10 */	addi r1, r1, 0x10
/* 801549E4 00151AC4  4E 80 00 20 */	blr
.endfn "__mi__Q242fixed_queue<Q29aqua_beam12ring_segment,31>8iteratorCFi"

# fixed_queue<aqua_beam::ring_segment, 31>::iterator::operator-=(int)
.fn "__ami__Q242fixed_queue<Q29aqua_beam12ring_segment,31>8iteratorFi", weak
/* 801549E8 00151AC8  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801549EC 00151ACC  7C 08 02 A6 */	mflr r0
/* 801549F0 00151AD0  7C 84 00 D0 */	neg r4, r4
/* 801549F4 00151AD4  90 01 00 14 */	stw r0, 0x14(r1)
/* 801549F8 00151AD8  4B FF FF 1D */	bl "__apl__Q242fixed_queue<Q29aqua_beam12ring_segment,31>8iteratorFi"
/* 801549FC 00151ADC  7C 64 1B 78 */	mr r4, r3
/* 80154A00 00151AE0  80 63 00 00 */	lwz r3, 0x0(r3)
/* 80154A04 00151AE4  80 84 00 04 */	lwz r4, 0x4(r4)
/* 80154A08 00151AE8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80154A0C 00151AEC  7C 08 03 A6 */	mtlr r0
/* 80154A10 00151AF0  38 21 00 10 */	addi r1, r1, 0x10
/* 80154A14 00151AF4  4E 80 00 20 */	blr
.endfn "__ami__Q242fixed_queue<Q29aqua_beam12ring_segment,31>8iteratorFi"

# fixed_queue<aqua_beam::ring_segment, 31>::front()
.fn "front__42fixed_queue<Q29aqua_beam12ring_segment,31>Fv", weak
/* 80154A18 00151AF8  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80154A1C 00151AFC  7C 08 02 A6 */	mflr r0
/* 80154A20 00151B00  90 01 00 14 */	stw r0, 0x14(r1)
/* 80154A24 00151B04  4B FF FF 21 */	bl "begin__42fixed_queue<Q29aqua_beam12ring_segment,31>CFv"
/* 80154A28 00151B08  90 61 00 08 */	stw r3, 0x8(r1)
/* 80154A2C 00151B0C  38 61 00 08 */	addi r3, r1, 0x8
/* 80154A30 00151B10  90 81 00 0C */	stw r4, 0xc(r1)
/* 80154A34 00151B14  4B FF FE F9 */	bl "__ml__Q242fixed_queue<Q29aqua_beam12ring_segment,31>8iteratorCFv"
/* 80154A38 00151B18  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80154A3C 00151B1C  7C 08 03 A6 */	mtlr r0
/* 80154A40 00151B20  38 21 00 10 */	addi r1, r1, 0x10
/* 80154A44 00151B24  4E 80 00 20 */	blr
.endfn "front__42fixed_queue<Q29aqua_beam12ring_segment,31>Fv"

# fixed_queue<aqua_beam::ring_segment, 31>::push_front()
.fn "push_front__42fixed_queue<Q29aqua_beam12ring_segment,31>Fv", weak
/* 80154A48 00151B28  80 83 00 00 */	lwz r4, 0x0(r3)
/* 80154A4C 00151B2C  38 04 00 1F */	addi r0, r4, 0x1f
/* 80154A50 00151B30  54 00 06 FE */	clrlwi r0, r0, 27
/* 80154A54 00151B34  90 03 00 00 */	stw r0, 0x0(r3)
/* 80154A58 00151B38  4E 80 00 20 */	blr
.endfn "push_front__42fixed_queue<Q29aqua_beam12ring_segment,31>Fv"

# fixed_queue<aqua_beam::ring_segment, 31>::full() const
.fn "full__42fixed_queue<Q29aqua_beam12ring_segment,31>CFv", weak
/* 80154A5C 00151B3C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80154A60 00151B40  7C 08 02 A6 */	mflr r0
/* 80154A64 00151B44  90 01 00 14 */	stw r0, 0x14(r1)
/* 80154A68 00151B48  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80154A6C 00151B4C  93 C1 00 08 */	stw r30, 0x8(r1)
/* 80154A70 00151B50  7C 7E 1B 78 */	mr r30, r3
/* 80154A74 00151B54  48 00 00 35 */	bl "max_size__42fixed_queue<Q29aqua_beam12ring_segment,31>CFv"
/* 80154A78 00151B58  7C 7F 1B 78 */	mr r31, r3
/* 80154A7C 00151B5C  7F C3 F3 78 */	mr r3, r30
/* 80154A80 00151B60  48 00 00 31 */	bl "size__42fixed_queue<Q29aqua_beam12ring_segment,31>CFv"
/* 80154A84 00151B64  7C 03 F8 50 */	subf r0, r3, r31
/* 80154A88 00151B68  7C 00 00 34 */	cntlzw r0, r0
/* 80154A8C 00151B6C  54 03 D9 7E */	srwi r3, r0, 5
/* 80154A90 00151B70  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80154A94 00151B74  83 C1 00 08 */	lwz r30, 0x8(r1)
/* 80154A98 00151B78  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80154A9C 00151B7C  7C 08 03 A6 */	mtlr r0
/* 80154AA0 00151B80  38 21 00 10 */	addi r1, r1, 0x10
/* 80154AA4 00151B84  4E 80 00 20 */	blr
.endfn "full__42fixed_queue<Q29aqua_beam12ring_segment,31>CFv"

# fixed_queue<aqua_beam::ring_segment, 31>::max_size() const
.fn "max_size__42fixed_queue<Q29aqua_beam12ring_segment,31>CFv", weak
/* 80154AA8 00151B88  38 60 00 1F */	li r3, 0x1f
/* 80154AAC 00151B8C  4E 80 00 20 */	blr
.endfn "max_size__42fixed_queue<Q29aqua_beam12ring_segment,31>CFv"

# fixed_queue<aqua_beam::ring_segment, 31>::size() const
.fn "size__42fixed_queue<Q29aqua_beam12ring_segment,31>CFv", weak
/* 80154AB0 00151B90  80 83 00 04 */	lwz r4, 0x4(r3)
/* 80154AB4 00151B94  80 63 00 00 */	lwz r3, 0x0(r3)
/* 80154AB8 00151B98  38 04 00 20 */	addi r0, r4, 0x20
/* 80154ABC 00151B9C  7C 03 00 50 */	subf r0, r3, r0
/* 80154AC0 00151BA0  54 03 06 FE */	clrlwi r3, r0, 27
/* 80154AC4 00151BA4  4E 80 00 20 */	blr
.endfn "size__42fixed_queue<Q29aqua_beam12ring_segment,31>CFv"

# fixed_queue<aqua_beam::ring_segment, 31>::pop_back()
.fn "pop_back__42fixed_queue<Q29aqua_beam12ring_segment,31>Fv", weak
/* 80154AC8 00151BA8  80 83 00 04 */	lwz r4, 0x4(r3)
/* 80154ACC 00151BAC  38 04 00 1F */	addi r0, r4, 0x1f
/* 80154AD0 00151BB0  54 00 06 FE */	clrlwi r0, r0, 27
/* 80154AD4 00151BB4  90 03 00 04 */	stw r0, 0x4(r3)
/* 80154AD8 00151BB8  4E 80 00 20 */	blr
.endfn "pop_back__42fixed_queue<Q29aqua_beam12ring_segment,31>Fv"

# 0x80154ADC - 0x80154CA8
.section .text, "ax", unique, 2
.balign 4

# zNPCPrawn::get_center() const
.fn get_center__9zNPCPrawnCFv, weak
/* 80154ADC 00151BBC  80 63 00 24 */	lwz r3, 0x24(r3)
/* 80154AE0 00151BC0  80 63 00 4C */	lwz r3, 0x4c(r3)
/* 80154AE4 00151BC4  38 63 00 30 */	addi r3, r3, 0x30
/* 80154AE8 00151BC8  4E 80 00 20 */	blr
.endfn get_center__9zNPCPrawnCFv

# zNPCPrawn::render_debug()
.fn render_debug__9zNPCPrawnFv, weak
/* 80154AEC 00151BCC  4E 80 00 20 */	blr
.endfn render_debug__9zNPCPrawnFv

# zNPCPrawn::turning() const
.fn turning__9zNPCPrawnCFv, weak
/* 80154AF0 00151BD0  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80154AF4 00151BD4  38 00 00 00 */	li r0, 0x0
/* 80154AF8 00151BD8  80 83 00 24 */	lwz r4, 0x24(r3)
/* 80154AFC 00151BDC  80 A2 BF 70 */	lwz r5, "@784"@sda21(r2)
/* 80154B00 00151BE0  80 C4 00 4C */	lwz r6, 0x4c(r4)
/* 80154B04 00151BE4  80 82 BF 74 */	lwz r4, "@784"+0x4@sda21(r2)
/* 80154B08 00151BE8  C0 63 03 1C */	lfs f3, 0x31c(r3)
/* 80154B0C 00151BEC  C0 22 A8 1C */	lfs f1, "@1938"@sda21(r2)
/* 80154B10 00151BF0  90 A1 00 08 */	stw r5, 0x8(r1)
/* 80154B14 00151BF4  C0 46 00 20 */	lfs f2, 0x20(r6)
/* 80154B18 00151BF8  FC 03 08 40 */	fcmpo cr0, f3, f1
/* 80154B1C 00151BFC  90 81 00 0C */	stw r4, 0xc(r1)
/* 80154B20 00151C00  C0 06 00 28 */	lfs f0, 0x28(r6)
/* 80154B24 00151C04  D0 41 00 08 */	stfs f2, 0x8(r1)
/* 80154B28 00151C08  D0 01 00 0C */	stfs f0, 0xc(r1)
/* 80154B2C 00151C0C  4C 41 13 82 */	cror eq, gt, eq
/* 80154B30 00151C10  40 82 00 88 */	bne .L_80154BB8
/* 80154B34 00151C14  C0 02 A7 7C */	lfs f0, "@1285"@sda21(r2)
/* 80154B38 00151C18  FC 03 00 40 */	fcmpo cr0, f3, f0
/* 80154B3C 00151C1C  4C 40 13 82 */	cror eq, lt, eq
/* 80154B40 00151C20  40 82 00 78 */	bne .L_80154BB8
/* 80154B44 00151C24  C0 43 03 20 */	lfs f2, 0x320(r3)
/* 80154B48 00151C28  FC 02 08 40 */	fcmpo cr0, f2, f1
/* 80154B4C 00151C2C  4C 41 13 82 */	cror eq, gt, eq
/* 80154B50 00151C30  40 82 00 10 */	bne .L_80154B60
/* 80154B54 00151C34  FC 02 00 40 */	fcmpo cr0, f2, f0
/* 80154B58 00151C38  4C 40 13 82 */	cror eq, lt, eq
/* 80154B5C 00151C3C  41 82 00 60 */	beq .L_80154BBC
.L_80154B60:
/* 80154B60 00151C40  C0 43 02 C4 */	lfs f2, 0x2c4(r3)
/* 80154B64 00151C44  C0 03 02 C8 */	lfs f0, 0x2c8(r3)
/* 80154B68 00151C48  FC 02 00 40 */	fcmpo cr0, f2, f0
/* 80154B6C 00151C4C  40 81 00 20 */	ble .L_80154B8C
/* 80154B70 00151C50  C0 21 00 08 */	lfs f1, 0x8(r1)
/* 80154B74 00151C54  C0 02 A8 14 */	lfs f0, "@1912"@sda21(r2)
/* 80154B78 00151C58  EC 22 08 28 */	fsubs f1, f2, f1
/* 80154B7C 00151C5C  FC 20 0A 10 */	fabs f1, f1
/* 80154B80 00151C60  FC 20 08 18 */	frsp f1, f1
/* 80154B84 00151C64  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80154B88 00151C68  41 80 00 34 */	blt .L_80154BBC
.L_80154B8C:
/* 80154B8C 00151C6C  C0 03 02 C4 */	lfs f0, 0x2c4(r3)
/* 80154B90 00151C70  C0 43 02 C8 */	lfs f2, 0x2c8(r3)
/* 80154B94 00151C74  FC 00 10 40 */	fcmpo cr0, f0, f2
/* 80154B98 00151C78  40 80 00 20 */	bge .L_80154BB8
/* 80154B9C 00151C7C  C0 21 00 0C */	lfs f1, 0xc(r1)
/* 80154BA0 00151C80  C0 02 A8 14 */	lfs f0, "@1912"@sda21(r2)
/* 80154BA4 00151C84  EC 22 08 28 */	fsubs f1, f2, f1
/* 80154BA8 00151C88  FC 20 0A 10 */	fabs f1, f1
/* 80154BAC 00151C8C  FC 20 08 18 */	frsp f1, f1
/* 80154BB0 00151C90  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80154BB4 00151C94  41 80 00 08 */	blt .L_80154BBC
.L_80154BB8:
/* 80154BB8 00151C98  38 00 00 01 */	li r0, 0x1
.L_80154BBC:
/* 80154BBC 00151C9C  7C 03 03 78 */	mr r3, r0
/* 80154BC0 00151CA0  38 21 00 10 */	addi r1, r1, 0x10
/* 80154BC4 00151CA4  4E 80 00 20 */	blr
.endfn turning__9zNPCPrawnCFv

# aqua_beam::active() const
.fn active__9aqua_beamCFv, weak
/* 80154BC8 00151CA8  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80154BCC 00151CAC  7C 08 02 A6 */	mflr r0
/* 80154BD0 00151CB0  90 01 00 14 */	stw r0, 0x14(r1)
/* 80154BD4 00151CB4  88 03 00 3C */	lbz r0, 0x3c(r3)
/* 80154BD8 00151CB8  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80154BDC 00151CBC  3B E0 00 00 */	li r31, 0x0
/* 80154BE0 00151CC0  28 00 00 00 */	cmplwi r0, 0x0
/* 80154BE4 00151CC4  40 82 00 14 */	bne .L_80154BF8
/* 80154BE8 00151CC8  38 63 00 A4 */	addi r3, r3, 0xa4
/* 80154BEC 00151CCC  4B FF FC 7D */	bl "empty__42fixed_queue<Q29aqua_beam12ring_segment,31>CFv"
/* 80154BF0 00151CD0  54 60 06 3F */	clrlwi. r0, r3, 24
/* 80154BF4 00151CD4  40 82 00 08 */	bne .L_80154BFC
.L_80154BF8:
/* 80154BF8 00151CD8  3B E0 00 01 */	li r31, 0x1
.L_80154BFC:
/* 80154BFC 00151CDC  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80154C00 00151CE0  7F E3 FB 78 */	mr r3, r31
/* 80154C04 00151CE4  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80154C08 00151CE8  7C 08 03 A6 */	mtlr r0
/* 80154C0C 00151CEC  38 21 00 10 */	addi r1, r1, 0x10
/* 80154C10 00151CF0  4E 80 00 20 */	blr
.endfn active__9aqua_beamCFv

# aqua_beam::move(const xVec3&, const xVec3&)
.fn move__9aqua_beamFRC5xVec3RC5xVec3, weak
/* 80154C14 00151CF4  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80154C18 00151CF8  7C 08 02 A6 */	mflr r0
/* 80154C1C 00151CFC  90 01 00 14 */	stw r0, 0x14(r1)
/* 80154C20 00151D00  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80154C24 00151D04  7C BF 2B 78 */	mr r31, r5
/* 80154C28 00151D08  93 C1 00 08 */	stw r30, 0x8(r1)
/* 80154C2C 00151D0C  7C 7E 1B 78 */	mr r30, r3
/* 80154C30 00151D10  38 7E 00 40 */	addi r3, r30, 0x40
/* 80154C34 00151D14  4B EB 66 31 */	bl __as__5xVec3FRC5xVec3
/* 80154C38 00151D18  7F E4 FB 78 */	mr r4, r31
/* 80154C3C 00151D1C  38 7E 00 4C */	addi r3, r30, 0x4c
/* 80154C40 00151D20  4B EB 66 25 */	bl __as__5xVec3FRC5xVec3
/* 80154C44 00151D24  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80154C48 00151D28  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80154C4C 00151D2C  83 C1 00 08 */	lwz r30, 0x8(r1)
/* 80154C50 00151D30  7C 08 03 A6 */	mtlr r0
/* 80154C54 00151D34  38 21 00 10 */	addi r1, r1, 0x10
/* 80154C58 00151D38  4E 80 00 20 */	blr
.endfn move__9aqua_beamFRC5xVec3RC5xVec3

# zNPCPrawn::get_facing() const
.fn get_facing__9zNPCPrawnCFv, weak
/* 80154C5C 00151D3C  80 63 00 24 */	lwz r3, 0x24(r3)
/* 80154C60 00151D40  80 63 00 4C */	lwz r3, 0x4c(r3)
/* 80154C64 00151D44  38 63 00 20 */	addi r3, r3, 0x20
/* 80154C68 00151D48  4E 80 00 20 */	blr
.endfn get_facing__9zNPCPrawnCFv

# zNPCPrawn::ColChkFlags() const
.fn ColChkFlags__9zNPCPrawnCFv, weak
/* 80154C6C 00151D4C  38 60 00 00 */	li r3, 0x0
/* 80154C70 00151D50  4E 80 00 20 */	blr
.endfn ColChkFlags__9zNPCPrawnCFv

# zNPCPrawn::ColPenFlags() const
.fn ColPenFlags__9zNPCPrawnCFv, weak
/* 80154C74 00151D54  38 60 00 00 */	li r3, 0x0
/* 80154C78 00151D58  4E 80 00 20 */	blr
.endfn ColPenFlags__9zNPCPrawnCFv

# zNPCPrawn::ColChkByFlags() const
.fn ColChkByFlags__9zNPCPrawnCFv, weak
/* 80154C7C 00151D5C  38 60 00 10 */	li r3, 0x10
/* 80154C80 00151D60  4E 80 00 20 */	blr
.endfn ColChkByFlags__9zNPCPrawnCFv

# zNPCPrawn::ColPenByFlags() const
.fn ColPenByFlags__9zNPCPrawnCFv, weak
/* 80154C84 00151D64  38 60 00 10 */	li r3, 0x10
/* 80154C88 00151D68  4E 80 00 20 */	blr
.endfn ColPenByFlags__9zNPCPrawnCFv

# zNPCPrawn::PhysicsFlags() const
.fn PhysicsFlags__9zNPCPrawnCFv, weak
/* 80154C8C 00151D6C  38 60 00 03 */	li r3, 0x3
/* 80154C90 00151D70  4E 80 00 20 */	blr
.endfn PhysicsFlags__9zNPCPrawnCFv

# zNPCPrawn::IsAlive()
.fn IsAlive__9zNPCPrawnFv, weak
/* 80154C94 00151D74  80 63 02 B8 */	lwz r3, 0x2b8(r3)
/* 80154C98 00151D78  7C 03 00 D0 */	neg r0, r3
/* 80154C9C 00151D7C  7C 00 18 78 */	andc r0, r0, r3
/* 80154CA0 00151D80  54 03 0F FE */	srwi r3, r0, 31
/* 80154CA4 00151D84  4E 80 00 20 */	blr
.endfn IsAlive__9zNPCPrawnFv

# 0x80154CA8 - 0x80154DD4
.section .text, "ax", unique, 3
.balign 4

# auto_tweak::load_param<float, float>(float&, float, float, float, xModelAssetParam*, unsigned int, const char*)
.fn "load_param<f,f>__10auto_tweakFRffffP16xModelAssetParamUiPCc", local
/* 80154CA8 00151D88  94 21 FF C0 */	stwu r1, -0x40(r1)
/* 80154CAC 00151D8C  7C 08 02 A6 */	mflr r0
/* 80154CB0 00151D90  90 01 00 44 */	stw r0, 0x44(r1)
/* 80154CB4 00151D94  DB E1 00 30 */	stfd f31, 0x30(r1)
/* 80154CB8 00151D98  F3 E1 00 38 */	psq_st f31, 0x38(r1), 0, qr0
/* 80154CBC 00151D9C  DB C1 00 20 */	stfd f30, 0x20(r1)
/* 80154CC0 00151DA0  F3 C1 00 28 */	psq_st f30, 0x28(r1), 0, qr0
/* 80154CC4 00151DA4  DB A1 00 10 */	stfd f29, 0x10(r1)
/* 80154CC8 00151DA8  F3 A1 00 18 */	psq_st f29, 0x18(r1), 0, qr0
/* 80154CCC 00151DAC  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80154CD0 00151DB0  FF A0 08 90 */	fmr f29, f1
/* 80154CD4 00151DB4  C0 23 00 00 */	lfs f1, 0x0(r3)
/* 80154CD8 00151DB8  FF C0 10 90 */	fmr f30, f2
/* 80154CDC 00151DBC  7C 7F 1B 78 */	mr r31, r3
/* 80154CE0 00151DC0  7C 83 23 78 */	mr r3, r4
/* 80154CE4 00151DC4  7C A4 2B 78 */	mr r4, r5
/* 80154CE8 00151DC8  FF E0 18 90 */	fmr f31, f3
/* 80154CEC 00151DCC  7C C5 33 78 */	mr r5, r6
/* 80154CF0 00151DD0  4B F0 13 79 */	bl zParamGetFloat__FP16xModelAssetParamUiPCcf
/* 80154CF4 00151DD4  D0 3F 00 00 */	stfs f1, 0x0(r31)
/* 80154CF8 00151DD8  C0 1F 00 00 */	lfs f0, 0x0(r31)
/* 80154CFC 00151DDC  FC 00 F0 40 */	fcmpo cr0, f0, f30
/* 80154D00 00151DE0  40 80 00 0C */	bge .L_80154D0C
/* 80154D04 00151DE4  D3 DF 00 00 */	stfs f30, 0x0(r31)
/* 80154D08 00151DE8  48 00 00 10 */	b .L_80154D18
.L_80154D0C:
/* 80154D0C 00151DEC  FC 00 F8 40 */	fcmpo cr0, f0, f31
/* 80154D10 00151DF0  40 81 00 08 */	ble .L_80154D18
/* 80154D14 00151DF4  D3 FF 00 00 */	stfs f31, 0x0(r31)
.L_80154D18:
/* 80154D18 00151DF8  C0 1F 00 00 */	lfs f0, 0x0(r31)
/* 80154D1C 00151DFC  EC 00 07 72 */	fmuls f0, f0, f29
/* 80154D20 00151E00  D0 1F 00 00 */	stfs f0, 0x0(r31)
/* 80154D24 00151E04  E3 E1 00 38 */	psq_l f31, 0x38(r1), 0, qr0
/* 80154D28 00151E08  CB E1 00 30 */	lfd f31, 0x30(r1)
/* 80154D2C 00151E0C  E3 C1 00 28 */	psq_l f30, 0x28(r1), 0, qr0
/* 80154D30 00151E10  CB C1 00 20 */	lfd f30, 0x20(r1)
/* 80154D34 00151E14  E3 A1 00 18 */	psq_l f29, 0x18(r1), 0, qr0
/* 80154D38 00151E18  CB A1 00 10 */	lfd f29, 0x10(r1)
/* 80154D3C 00151E1C  80 01 00 44 */	lwz r0, 0x44(r1)
/* 80154D40 00151E20  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80154D44 00151E24  7C 08 03 A6 */	mtlr r0
/* 80154D48 00151E28  38 21 00 40 */	addi r1, r1, 0x40
/* 80154D4C 00151E2C  4E 80 00 20 */	blr
.endfn "load_param<f,f>__10auto_tweakFRffffP16xModelAssetParamUiPCc"

# auto_tweak::load_param<int, int>(int&, int, int, int, xModelAssetParam*, unsigned int, const char*)
.fn "load_param<i,i>__10auto_tweakFRiiiiP16xModelAssetParamUiPCc", local
/* 80154D50 00151E30  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 80154D54 00151E34  7C 08 02 A6 */	mflr r0
/* 80154D58 00151E38  90 01 00 24 */	stw r0, 0x24(r1)
/* 80154D5C 00151E3C  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 80154D60 00151E40  7C DF 33 78 */	mr r31, r6
/* 80154D64 00151E44  93 C1 00 18 */	stw r30, 0x18(r1)
/* 80154D68 00151E48  7C BE 2B 78 */	mr r30, r5
/* 80154D6C 00151E4C  7D 25 4B 78 */	mr r5, r9
/* 80154D70 00151E50  93 A1 00 14 */	stw r29, 0x14(r1)
/* 80154D74 00151E54  7C 9D 23 78 */	mr r29, r4
/* 80154D78 00151E58  7D 04 43 78 */	mr r4, r8
/* 80154D7C 00151E5C  93 81 00 10 */	stw r28, 0x10(r1)
/* 80154D80 00151E60  7C 7C 1B 78 */	mr r28, r3
/* 80154D84 00151E64  80 C3 00 00 */	lwz r6, 0x0(r3)
/* 80154D88 00151E68  7C E3 3B 78 */	mr r3, r7
/* 80154D8C 00151E6C  4B F0 12 79 */	bl zParamGetInt__FP16xModelAssetParamUiPCci
/* 80154D90 00151E70  7C 03 F0 00 */	cmpw r3, r30
/* 80154D94 00151E74  40 80 00 0C */	bge .L_80154DA0
/* 80154D98 00151E78  7F C3 F3 78 */	mr r3, r30
/* 80154D9C 00151E7C  48 00 00 10 */	b .L_80154DAC
.L_80154DA0:
/* 80154DA0 00151E80  7C 03 F8 00 */	cmpw r3, r31
/* 80154DA4 00151E84  40 81 00 08 */	ble .L_80154DAC
/* 80154DA8 00151E88  7F E3 FB 78 */	mr r3, r31
.L_80154DAC:
/* 80154DAC 00151E8C  7C 63 E9 D6 */	mullw r3, r3, r29
/* 80154DB0 00151E90  90 7C 00 00 */	stw r3, 0x0(r28)
/* 80154DB4 00151E94  80 01 00 24 */	lwz r0, 0x24(r1)
/* 80154DB8 00151E98  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 80154DBC 00151E9C  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 80154DC0 00151EA0  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 80154DC4 00151EA4  83 81 00 10 */	lwz r28, 0x10(r1)
/* 80154DC8 00151EA8  7C 08 03 A6 */	mtlr r0
/* 80154DCC 00151EAC  38 21 00 20 */	addi r1, r1, 0x20
/* 80154DD0 00151EB0  4E 80 00 20 */	blr
.endfn "load_param<i,i>__10auto_tweakFRiiiiP16xModelAssetParamUiPCc"

# 0x80154DD4 - 0x80154DD8
.section .text, "ax", unique, 4
.balign 4

# xDebugAddTweak(const char*, xVec3*, const tweak_callback*, void*, unsigned int)
.fn xDebugAddTweak__FPCcP5xVec3PC14tweak_callbackPvUi, weak
/* 80154DD4 00151EB4  4E 80 00 20 */	blr
.endfn xDebugAddTweak__FPCcP5xVec3PC14tweak_callbackPvUi

# 0x8026E838 - 0x8026F1E0
.rodata
.balign 8

# @unnamed@zNPCTypePrawn_cpp@::sound_assets
.obj "sound_assets__27@unnamed@zNPCTypePrawn_cpp@", local
	.4byte 0x00000000
	.4byte "@stringBase0"
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte "@stringBase0"+0xA
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000001
	.4byte "@stringBase0"+0x17
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000001
	.4byte "@stringBase0"+0xA
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000001
	.4byte "@stringBase0"+0x24
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000001
	.4byte "@stringBase0"+0x2C
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000001
	.4byte "@stringBase0"+0x30
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000002
	.4byte "@stringBase0"+0x3A
	.4byte 0x00000000
.L_8026E8B4:
	.4byte 0x00000003
	.4byte 0x00000002
	.4byte "@stringBase0"+0x48
	.4byte 0x00000000
	.4byte 0x00000003
	.4byte 0x00000002
	.4byte "@stringBase0"+0x57
	.4byte 0x00000000
	.4byte 0x00000003
	.4byte 0x00000002
	.4byte "@stringBase0"+0x69
	.4byte 0x00000000
	.4byte 0x00000003
	.4byte 0x00000002
	.4byte "@stringBase0"+0x77
	.4byte 0x00000000
	.4byte 0x00000003
	.4byte 0x00000003
	.4byte "@stringBase0"+0x48
	.4byte 0x00000000
	.4byte 0x00000001
	.4byte 0x00000003
	.4byte "@stringBase0"+0x57
	.4byte 0x00000000
	.4byte 0x00000001
.endobj "sound_assets__27@unnamed@zNPCTypePrawn_cpp@"

.obj "@1446", local
	.4byte 0x00000001
	.4byte 0x00000004
	.4byte 0x00000005
	.4byte 0x00000007
	.4byte 0x0000000C
	.4byte 0x0000000D
	.4byte 0x0000000E
	.4byte 0x00000009
	.4byte 0x0000000A
	.4byte 0x00000000
.endobj "@1446"

.obj vert_index$1513, local
	.4byte 0x00000002
	.4byte 0x00000000
	.4byte 0x00000001
	.4byte 0x00000003
.endobj vert_index$1513

.obj default_pattern$1647, local
	.4byte 0x00000000
	.4byte 0x00000001
	.4byte 0x00000003
	.4byte 0x00000004
	.4byte 0x00000006
	.4byte 0x0000000B
	.4byte 0x0000000D
	.4byte 0x00000016
	.4byte 0x00000018
	.4byte 0x0000001B
	.4byte 0x0000001D
	.4byte 0x00000023
	.4byte 0x00000025
	.4byte 0x00000026
	.4byte 0x00000028
	.4byte 0x0000002D
	.4byte 0xFFFFFFFF
	.4byte 0xFFFFFFFF
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
.endobj default_pattern$1647

.obj "@stringBase0", local
	.4byte 0x50726177
	.4byte 0x6E5F6869
	.4byte 0x74005072
	.4byte 0x61776E5F
	.4byte 0x46465F68
	.4byte 0x69740042
	.4byte 0x3130315F
	.4byte 0x53435F6A
	.4byte 0x756D7000
	.4byte 0x66616E66
	.4byte 0x61726500
	.4byte 0x73617800
	.4byte 0x4D6F6E5F
	.4byte 0x616C6572
	.4byte 0x74005250
	.4byte 0x5F776869
	.4byte 0x72725F6C
	.4byte 0x6F6F7000
	.4byte 0x50525F61
	.4byte 0x74746163
	.4byte 0x6B5F6C6F
	.4byte 0x6F700050
	.4byte 0x7261776E
	.4byte 0x5F417474
	.4byte 0x61636B5F
	.4byte 0x6C6F6F70
	.4byte 0x00437279
	.4byte 0x7374616C
	.4byte 0x735F6C6F
	.4byte 0x6F700052
	.4byte 0x53425F66
	.4byte 0x6F6F745F
	.4byte 0x6C6F6F70
	.4byte 0x007A4E50
	.4byte 0x43507261
	.4byte 0x776E0067
	.4byte 0x6C6F775F
	.4byte 0x72696E67
	.4byte 0x5F616464
	.4byte 0x2E646666
	.4byte 0x00444953
	.4byte 0x434F5F50
	.4byte 0x5241574E
	.4byte 0x004A554D
	.4byte 0x424F5452
	.4byte 0x4F4E5F25
	.4byte 0x30326400
	.4byte 0x50415245
	.4byte 0x4D49545F
	.4byte 0x50524157
	.4byte 0x4E5F4558
	.4byte 0x48415553
	.4byte 0x54002E6D
	.4byte 0x696E002E
	.4byte 0x6D617800
	.4byte 0x7475726E
	.4byte 0x5F616363
	.4byte 0x656C0073
	.4byte 0x7061776E
	.4byte 0x5F64656C
	.4byte 0x61790072
	.4byte 0x6570656C
	.4byte 0x5F726164
	.4byte 0x69757300
	.4byte 0x73616665
	.4byte 0x2E706174
	.4byte 0x7465726E
	.4byte 0x2E6D696E
	.4byte 0x00736166
	.4byte 0x652E7061
	.4byte 0x74746572
	.4byte 0x6E2E6D61
	.4byte 0x78006265
	.4byte 0x67696E2E
	.4byte 0x70617474
	.4byte 0x65726E2E
	.4byte 0x6D696E00
	.4byte 0x62656769
	.4byte 0x6E2E7061
	.4byte 0x74746572
	.4byte 0x6E2E6D61
	.4byte 0x78006265
	.4byte 0x67696E2E
	.4byte 0x73746174
	.4byte 0x655F6465
	.4byte 0x6C617900
	.4byte 0x62656769
	.4byte 0x6E2E7472
	.4byte 0x616E7369
	.4byte 0x74696F6E
	.4byte 0x5F64656C
	.4byte 0x61790062
	.4byte 0x65616D2E
	.4byte 0x64656C61
	.4byte 0x795B305D
	.4byte 0x00626561
	.4byte 0x6D2E6465
	.4byte 0x6C61795B
	.4byte 0x315D0062
	.4byte 0x65616D2E
	.4byte 0x64656C61
	.4byte 0x795B325D
	.4byte 0x00626561
	.4byte 0x6D2E7061
	.4byte 0x74746572
	.4byte 0x6E2E6D69
	.4byte 0x6E006265
	.4byte 0x616D2E70
	.4byte 0x61747465
	.4byte 0x726E2E6D
	.4byte 0x61780062
	.4byte 0x65616D2E
	.4byte 0x73746174
	.4byte 0x655F6465
	.4byte 0x6C617900
	.4byte 0x6265616D
	.4byte 0x2E747261
	.4byte 0x6E736974
	.4byte 0x696F6E5F
	.4byte 0x64656C61
	.4byte 0x79006265
	.4byte 0x616D2E65
	.4byte 0x78686175
	.4byte 0x73745F76
	.4byte 0x656C0062
	.4byte 0x65616D2E
	.4byte 0x6B6E6F63
	.4byte 0x6B5F6261
	.4byte 0x636B0062
	.4byte 0x65616D2E
	.4byte 0x73776565
	.4byte 0x702E616D
	.4byte 0x6F756E74
	.4byte 0x5B305D00
	.4byte 0x6265616D
	.4byte 0x2E737765
	.4byte 0x65702E61
	.4byte 0x6D6F756E
	.4byte 0x745B315D
	.4byte 0x00626561
	.4byte 0x6D2E7377
	.4byte 0x6565702E
	.4byte 0x616D6F75
	.4byte 0x6E745B32
	.4byte 0x5D006265
	.4byte 0x616D2E73
	.4byte 0x77656570
	.4byte 0x2E617263
	.4byte 0x00626561
	.4byte 0x6D2E7377
	.4byte 0x6565702E
	.4byte 0x64656C61
	.4byte 0x79006265
	.4byte 0x616D2E73
	.4byte 0x77656570
	.4byte 0x2E616363
	.4byte 0x656C0062
	.4byte 0x65616D2E
	.4byte 0x73776565
	.4byte 0x702E6D61
	.4byte 0x785F7665
	.4byte 0x6C006265
	.4byte 0x616D2E66
	.4byte 0x6972652E
	.4byte 0x72696E67
	.4byte 0x2E73697A
	.4byte 0x65006265
	.4byte 0x616D2E66
	.4byte 0x6972652E
	.4byte 0x72696E67
	.4byte 0x2E616C70
.L_8026EC9C:
	.4byte 0x68610062
	.4byte 0x65616D2E
	.4byte 0x66697265
	.4byte 0x2E72696E
	.4byte 0x672E7665
	.4byte 0x6C006265
	.4byte 0x616D2E66
	.4byte 0x6972652E
	.4byte 0x72696E67
	.4byte 0x2E616363
	.4byte 0x656C0062
	.4byte 0x65616D2E
	.4byte 0x66697265
	.4byte 0x2E72696E
	.4byte 0x672E656D
	.4byte 0x69745F64
	.4byte 0x656C6179
.L_8026ECE0:
	.4byte 0x00626561
	.4byte 0x6D2E6669
	.4byte 0x72652E72
	.4byte 0x696E672E
	.4byte 0x67726F77
	.4byte 0x00626561
	.4byte 0x6D2E6669
	.4byte 0x72652E72
	.4byte 0x696E672E
	.4byte 0x66616465
	.4byte 0x5F646973
	.4byte 0x74006265
	.4byte 0x616D2E66
	.4byte 0x6972652E
	.4byte 0x72696E67
	.4byte 0x2E6B696C
	.4byte 0x6C5F6469
	.4byte 0x73740062
	.4byte 0x65616D2E
	.4byte 0x66697265
	.4byte 0x2E72696E
	.4byte 0x672E666F
	.4byte 0x6C6C6F77
	.4byte 0x00626561
	.4byte 0x6D2E6669
	.4byte 0x72652E72
	.4byte 0x696E672E
	.4byte 0x6869745F
	.4byte 0x72616469
	.4byte 0x75730062
	.4byte 0x65616D2E
	.4byte 0x66697265
	.4byte 0x2E72696E
	.4byte 0x672E6869
	.4byte 0x745F6F66
	.4byte 0x66736574
	.4byte 0x00626561
	.4byte 0x6D2E6669
	.4byte 0x72652E65
	.4byte 0x6D69745F
	.4byte 0x626F6E65
	.4byte 0x00626561
	.4byte 0x6D2E6669
	.4byte 0x72652E6F
	.4byte 0x66667365
	.4byte 0x74006265
	.4byte 0x616D2E66
	.4byte 0x6972652E
	.4byte 0x79617700
	.4byte 0x6265616D
	.4byte 0x2E666972
	.4byte 0x652E7069
	.4byte 0x74636800
	.4byte 0x61696D5F
	.4byte 0x6C616E65
	.4byte 0x2E647572
	.4byte 0x6174696F
	.4byte 0x6E006169
	.4byte 0x6D5F6C61
	.4byte 0x6E652E73
	.4byte 0x74617465
	.4byte 0x5F64656C
	.4byte 0x61790061
	.4byte 0x696D5F6C
	.4byte 0x616E652E
	.4byte 0x7472616E
	.4byte 0x73697469
	.4byte 0x6F6E5F64
	.4byte 0x656C6179
	.4byte 0x0061696D
	.4byte 0x5F6C616E
	.4byte 0x652E7061
	.4byte 0x74746572
	.4byte 0x6E2E6669
	.4byte 0x72737400
	.4byte 0x61696D5F
	.4byte 0x6C616E65
	.4byte 0x2E706174
	.4byte 0x7465726E
	.4byte 0x2E72616E
	.4byte 0x67650061
	.4byte 0x696D5F6C
	.4byte 0x616E652E
	.4byte 0x70617474
	.4byte 0x65726E2E
	.4byte 0x6F666673
	.4byte 0x65740061
	.4byte 0x696D5F6C
	.4byte 0x616E652E
	.4byte 0x70617474
	.4byte 0x65726E2E
.L_8026EE4C:
	.4byte 0x73697A65
	.4byte 0x006C616E
	.4byte 0x652E6475
	.4byte 0x72617469
	.4byte 0x6F6E5B30
	.4byte 0x5D006C61
	.4byte 0x6E652E64
	.4byte 0x75726174
	.4byte 0x696F6E5B
	.4byte 0x315D006C
	.4byte 0x616E652E
	.4byte 0x64757261
	.4byte 0x74696F6E
	.4byte 0x5B325D00
	.4byte 0x6C616E65
	.4byte 0x2E737461
	.4byte 0x74655F64
	.4byte 0x656C6179
	.4byte 0x006C616E
	.4byte 0x652E7472
	.4byte 0x616E7369
	.4byte 0x74696F6E
	.4byte 0x5F64656C
	.4byte 0x6179006C
	.4byte 0x616E652E
	.4byte 0x70617474
	.4byte 0x65726E2E
	.4byte 0x66697273
	.4byte 0x74006C61
	.4byte 0x6E652E70
	.4byte 0x61747465
	.4byte 0x726E2E72
	.4byte 0x616E6765
	.4byte 0x006C616E
	.4byte 0x652E7061
	.4byte 0x74746572
	.4byte 0x6E2E6F66
	.4byte 0x66736574
	.4byte 0x006C616E
	.4byte 0x652E7061
	.4byte 0x74746572
	.4byte 0x6E2E7369
	.4byte 0x7A650064
	.4byte 0x616E6765
	.4byte 0x722E7374
	.4byte 0x6174655F
	.4byte 0x64656C61
	.4byte 0x79006461
	.4byte 0x6E676572
	.4byte 0x2E747261
	.4byte 0x6E736974
	.4byte 0x696F6E5F
	.4byte 0x64656C61
	.4byte 0x79006461
	.4byte 0x6E676572
	.4byte 0x2E637963
	.4byte 0x6C655F64
	.4byte 0x656C6179
	.4byte 0x0064616E
	.4byte 0x6765722E
	.4byte 0x70617474
	.4byte 0x65726E5F
	.4byte 0x6F666673
	.4byte 0x65740074
	.4byte 0x7765616B
	.4byte 0x2E64616E
	.4byte 0x6765722E
	.4byte 0x70617474
	.4byte 0x65726E5B
	.4byte 0x25645D00
	.4byte 0x6265616D
	.4byte 0x2E666972
	.4byte 0x652E736F
	.4byte 0x756E645F
	.4byte 0x696E7465
	.4byte 0x7276616C
	.4byte 0x00736F75
	.4byte 0x6E645B53
	.4byte 0x4F554E44
	.4byte 0x5F484954
	.4byte 0x5D2E766F
	.4byte 0x6C756D65
	.4byte 0x00736F75
	.4byte 0x6E645B53
	.4byte 0x4F554E44
	.4byte 0x5F484954
	.4byte 0x5D2E7261
	.4byte 0x6E67655F
	.4byte 0x696E6E65
	.4byte 0x7200736F
	.4byte 0x756E645B
	.4byte 0x534F554E
	.4byte 0x445F4849
	.4byte 0x545D2E72
	.4byte 0x616E6765
	.4byte 0x5F6F7574
	.4byte 0x65720073
	.4byte 0x6F756E64
	.4byte 0x5B534F55
	.4byte 0x4E445F48
	.4byte 0x49545D2E
	.4byte 0x64656C61
	.4byte 0x7900736F
	.4byte 0x756E645B
	.4byte 0x534F554E
	.4byte 0x445F4245
	.4byte 0x414D5F42
	.4byte 0x4547494E
	.4byte 0x5D2E766F
	.4byte 0x6C756D65
	.4byte 0x00736F75
	.4byte 0x6E645B53
	.4byte 0x4F554E44
	.4byte 0x5F424541
	.4byte 0x4D5F4245
	.4byte 0x47494E5D
	.4byte 0x2E72616E
	.4byte 0x67655F69
	.4byte 0x6E6E6572
	.4byte 0x00736F75
	.4byte 0x6E645B53
	.4byte 0x4F554E44
	.4byte 0x5F424541
	.4byte 0x4D5F4245
	.4byte 0x47494E5D
	.4byte 0x2E72616E
	.4byte 0x67655F6F
	.4byte 0x75746572
	.4byte 0x00736F75
	.4byte 0x6E645B53
	.4byte 0x4F554E44
	.4byte 0x5F424541
	.4byte 0x4D5F4245
	.4byte 0x47494E5D
	.4byte 0x2E64656C
	.4byte 0x61790073
	.4byte 0x6F756E64
	.4byte 0x5B534F55
	.4byte 0x4E445F42
	.4byte 0x45414D5F
	.4byte 0x4C4F4F50
	.4byte 0x5D2E766F
	.4byte 0x6C756D65
	.4byte 0x00736F75
	.4byte 0x6E645B53
	.4byte 0x4F554E44
	.4byte 0x5F424541
	.4byte 0x4D5F4C4F
	.4byte 0x4F505D2E
	.4byte 0x72616E67
	.4byte 0x655F696E
	.4byte 0x6E657200
	.4byte 0x736F756E
	.4byte 0x645B534F
	.4byte 0x554E445F
	.4byte 0x4245414D
	.4byte 0x5F4C4F4F
	.4byte 0x505D2E72
	.4byte 0x616E6765
	.4byte 0x5F6F7574
	.4byte 0x65720073
	.4byte 0x6F756E64
	.4byte 0x5B534F55
	.4byte 0x4E445F42
	.4byte 0x45414D5F
	.4byte 0x4C4F4F50
	.4byte 0x5D2E6465
	.4byte 0x6C617900
	.4byte 0x736F756E
	.4byte 0x645B534F
	.4byte 0x554E445F
	.4byte 0x4245414D
	.4byte 0x5F4C4F4F
	.4byte 0x505D2E66
	.4byte 0x6164655F
	.4byte 0x74696D65
	.4byte 0x00736F75
	.4byte 0x6E645B53
	.4byte 0x4F554E44
	.4byte 0x5F52494E
	.4byte 0x475D2E76
	.4byte 0x6F6C756D
	.4byte 0x6500736F
	.4byte 0x756E645B
	.4byte 0x534F554E
	.4byte 0x445F5249
	.4byte 0x4E475D2E
	.4byte 0x72616E67
	.4byte 0x655F696E
	.4byte 0x6E657200
	.4byte 0x736F756E
	.4byte 0x645B534F
	.4byte 0x554E445F
	.4byte 0x52494E47
	.4byte 0x5D2E7261
	.4byte 0x6E67655F
	.4byte 0x6F757465
	.4byte 0x7200736F
	.4byte 0x756E645B
	.4byte 0x534F554E
	.4byte 0x445F5249
	.4byte 0x4E475D2E
	.4byte 0x64656C61
	.4byte 0x7900736F
	.4byte 0x756E645B
	.4byte 0x534F554E
	.4byte 0x445F5249
	.4byte 0x4E475D2E
	.4byte 0x66616465
	.4byte 0x5F74696D
	.4byte 0x65005465
	.4byte 0x6D707C50
	.4byte 0x7261776E
	.4byte 0x20416E69
	.4byte 0x6D204C65
	.4byte 0x72700054
	.4byte 0x656D707C
	.4byte 0x50726177
	.4byte 0x6E205265
	.4byte 0x6E646572
	.4byte 0x20324420
	.4byte 0x46726F6D
	.4byte 0x0054656D
	.4byte 0x707C5072
	.4byte 0x61776E20
	.4byte 0x52656E64
	.4byte 0x65722032
	.4byte 0x4420546F
	.byte 0x00
.endobj "@stringBase0"
	.byte 0x00, 0x00, 0x00

# 0x8029A240 - 0x8029A490
.data
.balign 8

# @unnamed@zNPCTypePrawn_cpp@::boss_cam
.obj "boss_cam__27@unnamed@zNPCTypePrawn_cpp@", local
	.4byte 0x40C00000
.L_8029A244:
	.4byte 0x40400000
.L_8029A248:
	.4byte 0x40000000
	.4byte 0x3E4CCCCD
	.4byte 0x400CCCCD
	.4byte 0xBF800000
	.4byte 0x3F800000
	.4byte 0x3E4CCCCD
	.4byte 0x3FC00000
.L_8029A264:
	.4byte 0x41200000
.L_8029A268:
	.4byte 0x41200000
.L_8029A26C:
	.4byte 0x41200000
.L_8029A270:
	.4byte 0x41200000
.L_8029A274:
	.4byte 0x42480000
	.4byte 0xC0490FDB
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
.endobj "boss_cam__27@unnamed@zNPCTypePrawn_cpp@"

.obj from$2071, local
	.4byte 0x3E800000
	.4byte 0x3F400000
	.4byte 0x3F000000
.endobj from$2071

.obj to$2072, local
	.4byte 0x00000000
	.4byte 0x3F000000
	.4byte 0x00000000
.endobj to$2072

# zNPCGoalPrawnDeath::__vtable
.obj __vt__18zNPCGoalPrawnDeath, global
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte Clear__14zNPCGoalCommonFv
	.4byte Enter__18zNPCGoalPrawnDeathFfPv
	.4byte Exit__18zNPCGoalPrawnDeathFfPv
	.4byte Suspend__5xGoalFfPv
	.4byte Resume__14zNPCGoalCommonFfPv
	.4byte PreCalc__14zNPCGoalCommonFfPv
	.4byte EvalRules__5xGoalFP11en_trantypefPv
	.4byte Process__18zNPCGoalPrawnDeathFP11en_trantypefPvP6xScene
	.4byte SysEvent__5xGoalFP5xBaseP5xBaseUiPCfP5xBasePi
	.4byte NPCMessage__14zNPCGoalCommonFP6NPCMsg
	.4byte CollReview__14zNPCGoalCommonFPv
.endobj __vt__18zNPCGoalPrawnDeath

# zNPCGoalPrawnDamage::__vtable
.obj __vt__19zNPCGoalPrawnDamage, global
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte Clear__14zNPCGoalCommonFv
	.4byte Enter__19zNPCGoalPrawnDamageFfPv
	.4byte Exit__19zNPCGoalPrawnDamageFfPv
	.4byte Suspend__5xGoalFfPv
	.4byte Resume__14zNPCGoalCommonFfPv
	.4byte PreCalc__14zNPCGoalCommonFfPv
	.4byte EvalRules__5xGoalFP11en_trantypefPv
	.4byte Process__19zNPCGoalPrawnDamageFP11en_trantypefPvP6xScene
	.4byte SysEvent__5xGoalFP5xBaseP5xBaseUiPCfP5xBasePi
	.4byte NPCMessage__14zNPCGoalCommonFP6NPCMsg
	.4byte CollReview__14zNPCGoalCommonFPv
.endobj __vt__19zNPCGoalPrawnDamage

# zNPCGoalPrawnBowl::__vtable
.obj __vt__17zNPCGoalPrawnBowl, global
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte Clear__14zNPCGoalCommonFv
	.4byte Enter__17zNPCGoalPrawnBowlFfPv
	.4byte Exit__17zNPCGoalPrawnBowlFfPv
	.4byte Suspend__5xGoalFfPv
	.4byte Resume__14zNPCGoalCommonFfPv
	.4byte PreCalc__14zNPCGoalCommonFfPv
	.4byte EvalRules__5xGoalFP11en_trantypefPv
	.4byte Process__17zNPCGoalPrawnBowlFP11en_trantypefPvP6xScene
	.4byte SysEvent__5xGoalFP5xBaseP5xBaseUiPCfP5xBasePi
.L_8029A350:
	.4byte NPCMessage__14zNPCGoalCommonFP6NPCMsg
	.4byte CollReview__14zNPCGoalCommonFPv
.endobj __vt__17zNPCGoalPrawnBowl

# zNPCGoalPrawnBeam::__vtable
.obj __vt__17zNPCGoalPrawnBeam, global
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte Clear__14zNPCGoalCommonFv
	.4byte Enter__17zNPCGoalPrawnBeamFfPv
	.4byte Exit__17zNPCGoalPrawnBeamFfPv
	.4byte Suspend__5xGoalFfPv
	.4byte Resume__14zNPCGoalCommonFfPv
	.4byte PreCalc__14zNPCGoalCommonFfPv
	.4byte EvalRules__5xGoalFP11en_trantypefPv
	.4byte Process__17zNPCGoalPrawnBeamFP11en_trantypefPvP6xScene
	.4byte SysEvent__5xGoalFP5xBaseP5xBaseUiPCfP5xBasePi
	.4byte NPCMessage__14zNPCGoalCommonFP6NPCMsg
	.4byte CollReview__14zNPCGoalCommonFPv
.endobj __vt__17zNPCGoalPrawnBeam

# zNPCGoalPrawnIdle::__vtable
.obj __vt__17zNPCGoalPrawnIdle, global
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte Clear__14zNPCGoalCommonFv
	.4byte Enter__17zNPCGoalPrawnIdleFfPv
	.4byte Exit__17zNPCGoalPrawnIdleFfPv
	.4byte Suspend__5xGoalFfPv
	.4byte Resume__14zNPCGoalCommonFfPv
	.4byte PreCalc__14zNPCGoalCommonFfPv
	.4byte EvalRules__5xGoalFP11en_trantypefPv
	.4byte Process__17zNPCGoalPrawnIdleFP11en_trantypefPvP6xScene
	.4byte SysEvent__5xGoalFP5xBaseP5xBaseUiPCfP5xBasePi
	.4byte NPCMessage__14zNPCGoalCommonFP6NPCMsg
	.4byte CollReview__14zNPCGoalCommonFPv
.endobj __vt__17zNPCGoalPrawnIdle

# zNPCPrawn::__vtable
.obj __vt__9zNPCPrawn, global
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte Init__9zNPCPrawnFP9xEntAsset
	.4byte PostInit__9xNPCBasicFv
	.4byte Setup__9zNPCPrawnFv
	.4byte PostSetup__9xNPCBasicFv
	.4byte Reset__9zNPCPrawnFv
	.4byte Process__9zNPCPrawnFP6xScenef
	.4byte BUpdate__10zNPCCommonFP5xVec3
	.4byte NewTime__9zNPCPrawnFP6xScenef
	.4byte Move__10zNPCCommonFP6xScenefP9xEntFrame
	.4byte SysEvent__9zNPCPrawnFP5xBaseP5xBaseUiPCfP5xBasePi
	.4byte Render__9zNPCPrawnFv
	.4byte Save__9xNPCBasicCFP7xSerial
	.4byte Load__9xNPCBasicFP7xSerial
	.4byte CollideReview__10zNPCCommonFv
	.4byte ColChkFlags__9zNPCPrawnCFv
	.4byte ColPenFlags__9zNPCPrawnCFv
	.4byte ColChkByFlags__9zNPCPrawnCFv
	.4byte ColPenByFlags__9zNPCPrawnCFv
	.4byte PhysicsFlags__9zNPCPrawnCFv
	.4byte Destroy__9zNPCPrawnFv
	.4byte NPCMessage__10zNPCCommonFP6NPCMsg
	.4byte RenderExtra__10zNPCCommonFv
	.4byte RenderExtraPostParticles__10zNPCCommonFv
	.4byte ParseINI__9zNPCPrawnFv
	.4byte ParseLinks__9zNPCPrawnFv
	.4byte ParseProps__10zNPCCommonFv
	.4byte SelfSetup__9zNPCPrawnFv
	.4byte SelfDestroy__10zNPCCommonFv
	.4byte IsHealthy__10zNPCCommonFv
	.4byte IsAlive__9zNPCPrawnFv
	.4byte Damage__9zNPCPrawnF18en_NPC_DAMAGE_TYPEP5xBasePC5xVec3
	.4byte Respawn__10zNPCCommonFPC5xVec3P10zMovePointP10zMovePoint
.L_8029A448:
	.4byte DuploOwner__10zNPCCommonFP10zNPCCommon
	.4byte DuploNotice__9zNPCPrawnF13en_SM_NOTICESPv
	.4byte CanRope__10zNPCCommonFv
	.4byte LassoNotify__10zNPCCommonF14en_LASSO_EVENT
	.4byte SetCarryState__10zNPCCommonF18en_NPC_CARRY_STATE
	.4byte Stun__10zNPCCommonFf
	.4byte SpeakBegin__10zNPCCommonFv
	.4byte SpeakEnd__10zNPCCommonFv
	.4byte SpeakStart__10zNPCCommonFUiUii
	.4byte SpeakStop__10zNPCCommonFv
.L_8029A470:
	.4byte AnimPick__9zNPCPrawnFi16en_NPC_GOAL_SPOTP5xGoal
	.4byte GetParm__10zNPCCommonF10en_npcparmPv
	.4byte GetParmDefault__10zNPCCommonF10en_npcparmPv
	.4byte GenShadCacheRad__10zNPCCommonFv
	.4byte PRIV_GetDriverData__10zNPCCommonFv
	.4byte PRIV_GetLassoData__10zNPCCommonFv
	.4byte LassoSetup__10zNPCCommonFv
.endobj __vt__9zNPCPrawn
	.4byte 0x00000000

# 0x803294D0 - 0x803299D8
.section .bss, "wa", @nobits
.balign 8

# @unnamed@zNPCTypePrawn_cpp@::sound_asset_names
.obj "sound_asset_names__27@unnamed@zNPCTypePrawn_cpp@", local
.sym ...bss.0, local
	.skip 0x60
.endobj "sound_asset_names__27@unnamed@zNPCTypePrawn_cpp@"

# @unnamed@zNPCTypePrawn_cpp@::sound_asset_ids
.obj "sound_asset_ids__27@unnamed@zNPCTypePrawn_cpp@", local
	.skip 0x60
.endobj "sound_asset_ids__27@unnamed@zNPCTypePrawn_cpp@"

# @unnamed@zNPCTypePrawn_cpp@::sound_asset_names_size
.obj "sound_asset_names_size__27@unnamed@zNPCTypePrawn_cpp@", local
	.skip 0x10
.endobj "sound_asset_names_size__27@unnamed@zNPCTypePrawn_cpp@"

# @unnamed@zNPCTypePrawn_cpp@::sound_data
.obj "sound_data__27@unnamed@zNPCTypePrawn_cpp@", local
	.skip 0x40
.endobj "sound_data__27@unnamed@zNPCTypePrawn_cpp@"

# @unnamed@zNPCTypePrawn_cpp@::tweak
.obj "tweak__27@unnamed@zNPCTypePrawn_cpp@", local
	.skip 0x260
.endobj "tweak__27@unnamed@zNPCTypePrawn_cpp@"

# @unnamed@zNPCTypePrawn_cpp@::closeup
.obj "closeup__27@unnamed@zNPCTypePrawn_cpp@", local
	.skip 0x28
.endobj "closeup__27@unnamed@zNPCTypePrawn_cpp@"

# @unnamed@zNPCTypePrawn_cpp@::exhaust_emitter_settings
.obj "exhaust_emitter_settings__27@unnamed@zNPCTypePrawn_cpp@", local
	.skip 0x16C
.endobj "exhaust_emitter_settings__27@unnamed@zNPCTypePrawn_cpp@"
	.skip 0x4

# 0x803CBFC8 - 0x803CBFE0
.section .sbss, "wa", @nobits
.balign 8

# @unnamed@zNPCTypePrawn_cpp@::exhaust_emitter
.obj "exhaust_emitter__27@unnamed@zNPCTypePrawn_cpp@", local
	.skip 0x4
.endobj "exhaust_emitter__27@unnamed@zNPCTypePrawn_cpp@"

.obj registered$1947, local
	.skip 0x1
.endobj registered$1947

.obj init$1948, local
	.skip 0x1
.endobj init$1948
	.skip 0x2

.obj lerp$1950, local
	.skip 0x4
.endobj lerp$1950

.obj init$1951, local
	.skip 0x1
.endobj init$1951

.obj registered$2073, local
	.skip 0x1
.endobj registered$2073

.obj init$2074, local
	.skip 0x1
.endobj init$2074
	.skip 0x1

.obj lerp$2076, local
	.skip 0x4
.endobj lerp$2076

.obj init$2077, local
	.skip 0x1
.endobj init$2077
	.skip 0x3

# 0x803CF0E8 - 0x803CF1A8
.section .sdata2, "a"
.balign 8

.obj "@1052", local
	.4byte 0x3F800000
.endobj "@1052"

.obj "@1053", local
	.4byte 0x00000000
.endobj "@1053"

.obj "@1113", local
	.4byte 0xCE6E6B28
.endobj "@1113"

.obj "@1282", local
	.4byte 0x3F000000
.endobj "@1282"

.obj "@1284", local
	.4byte 0x47C35000
.endobj "@1284"

.obj "@1285", local
	.4byte 0x3727C5AC
.endobj "@1285"

.obj "@1431", local
	.4byte 0x3F800000
	.4byte 0x3F800000
.endobj "@1431"

.obj "@1454", local
	.4byte 0x3E4CCCCD
.endobj "@1454"

.obj "@1455", local
	.4byte 0x3DCCCCCD
.endobj "@1455"

.obj "@1492", local
	.4byte 0xC7C35000
.endobj "@1492"

.obj "@1493", local
	.4byte 0x3E99999A
.endobj "@1493"

.obj "@1494", local
	.4byte 0x461C4000
.endobj "@1494"
	.4byte 0x00000000

.obj "@1496", local
	.4byte 0x43300000
	.4byte 0x80000000
.endobj "@1496"

.obj "@1656", local
	.4byte 0x40A00000
.endobj "@1656"

.obj "@1657", local
	.4byte 0x40866666
.endobj "@1657"

.obj "@1658", local
	.4byte 0x40200000
.endobj "@1658"

.obj "@1659", local
	.4byte 0x40900000
.endobj "@1659"

.obj "@1660", local
	.4byte 0x40D00000
.endobj "@1660"

.obj "@1661", local
	.4byte 0x3D4CCCCD
.endobj "@1661"

.obj "@1662", local
	.4byte 0x41700000
.endobj "@1662"

.obj "@1663", local
	.4byte 0x3C8EFA35
.endobj "@1663"

.obj "@1664", local
	.4byte 0x41A00000
.endobj "@1664"

.obj "@1665", local
	.4byte 0x42700000
.endobj "@1665"

.obj "@1666", local
	.4byte 0x41D40000
.endobj "@1666"

.obj "@1667", local
	.4byte 0xBF800000
.endobj "@1667"

.obj "@1668", local
	.4byte 0x3ECCCCCD
.endobj "@1668"

.obj "@1669", local
	.4byte 0x41100000
.endobj "@1669"

.obj "@1670", local
	.4byte 0x41200000
.endobj "@1670"

.obj "@1671", local
	.4byte 0x3E19999A
.endobj "@1671"

.obj "@1672", local
	.4byte 0x40B00000
.endobj "@1672"

.obj "@1673", local
	.4byte 0x40000000
.endobj "@1673"

.obj "@1674", local
	.4byte 0x41000000
.endobj "@1674"

.obj "@1675", local
	.4byte 0x40E00000
.endobj "@1675"

.obj "@1676", local
	.4byte 0x40C00000
.endobj "@1676"

.obj "@1704", local
	.4byte 0x42200000
.endobj "@1704"

.obj "@1705", local
	.4byte 0x41F00000
.endobj "@1705"

.obj "@1706", local
	.4byte 0x3FA00000
.endobj "@1706"

.obj "@1909", local
	.4byte 0x40490FDB
.endobj "@1909"

.obj "@1910", local
	.4byte 0x40C90FDB
.endobj "@1910"

.obj "@1911", local
	.4byte 0xC0490FDB
.endobj "@1911"

.obj "@1912", local
	.4byte 0x3A83126F
.endobj "@1912"

.obj "@1913", local
	.4byte 0x7E967699
.endobj "@1913"

.obj "@1938", local
	.4byte 0xB727C5AC
.endobj "@1938"

.obj "@2034", local
	.4byte 0x4E6E6B28
.endobj "@2034"

.obj "@2160", local
	.4byte 0x3F3504F3
.endobj "@2160"

# 0x803D08F0 - 0x803D0910
.section .sbss2, "a", @nobits
.balign 8

.obj "@784", local
	.skip 0x8
.endobj "@784"

.obj "@1844", local
	.skip 0x8
.endobj "@1844"

.obj "@2266", local
	.skip 0x8
.endobj "@2266"

.obj "@2297", local
	.skip 0x8
.endobj "@2297"
