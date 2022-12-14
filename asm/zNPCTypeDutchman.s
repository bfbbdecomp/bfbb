.include "macros.inc"
.file "zNPCTypeDutchman.cpp"

# 0x80172664 - 0x8017AFD8
.text
.balign 4

# @unnamed@zNPCTypeDutchman_cpp@::look_at(xMat3x3&, const xVec3&)
.fn "look_at__30@unnamed@zNPCTypeDutchman_cpp@FR7xMat3x3RC5xVec3", local
/* 80172664 0016F744  94 21 FF D0 */	stwu r1, -0x30(r1)
/* 80172668 0016F748  7C 08 02 A6 */	mflr r0
/* 8017266C 0016F74C  90 01 00 34 */	stw r0, 0x34(r1)
/* 80172670 0016F750  DB E1 00 20 */	stfd f31, 0x20(r1)
/* 80172674 0016F754  F3 E1 00 28 */	psq_st f31, 0x28(r1), 0, qr0
/* 80172678 0016F758  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 8017267C 0016F75C  93 C1 00 18 */	stw r30, 0x18(r1)
/* 80172680 0016F760  7C 9F 23 78 */	mr r31, r4
/* 80172684 0016F764  7C 7E 1B 78 */	mr r30, r3
/* 80172688 0016F768  7F E3 FB 78 */	mr r3, r31
/* 8017268C 0016F76C  4B E9 8B 1D */	bl length__5xVec3CFv
/* 80172690 0016F770  FF E0 08 90 */	fmr f31, f1
/* 80172694 0016F774  C0 02 AC B0 */	lfs f0, "@1603"@sda21(r2)
/* 80172698 0016F778  FC 1F 00 40 */	fcmpo cr0, f31, f0
/* 8017269C 0016F77C  4C 41 13 82 */	cror eq, gt, eq
/* 801726A0 0016F780  40 82 00 2C */	bne .L_801726CC
/* 801726A4 0016F784  C0 02 AC B4 */	lfs f0, "@1604"@sda21(r2)
/* 801726A8 0016F788  FC 1F 00 40 */	fcmpo cr0, f31, f0
/* 801726AC 0016F78C  4C 40 13 82 */	cror eq, lt, eq
/* 801726B0 0016F790  40 82 00 1C */	bne .L_801726CC
/* 801726B4 0016F794  3C 80 80 39 */	lis r4, g_I3@ha
/* 801726B8 0016F798  7F C3 F3 78 */	mr r3, r30
/* 801726BC 0016F79C  38 84 C2 E0 */	addi r4, r4, g_I3@l
/* 801726C0 0016F7A0  4B E9 8F 09 */	bl __as__7xMat3x3FRC7xMat3x3
/* 801726C4 0016F7A4  C0 22 AC B8 */	lfs f1, "@1605"@sda21(r2)
/* 801726C8 0016F7A8  48 00 00 CC */	b .L_80172794
.L_801726CC:
/* 801726CC 0016F7AC  7F E4 FB 78 */	mr r4, r31
/* 801726D0 0016F7B0  38 7E 00 20 */	addi r3, r30, 0x20
/* 801726D4 0016F7B4  4B E9 8B 91 */	bl __as__5xVec3FRC5xVec3
/* 801726D8 0016F7B8  C0 02 AC BC */	lfs f0, "@1606"@sda21(r2)
/* 801726DC 0016F7BC  38 7E 00 20 */	addi r3, r30, 0x20
/* 801726E0 0016F7C0  EC 20 F8 24 */	fdivs f1, f0, f31
/* 801726E4 0016F7C4  4B E9 8A 9D */	bl __amu__5xVec3Ff
/* 801726E8 0016F7C8  C0 3E 00 20 */	lfs f1, 0x20(r30)
/* 801726EC 0016F7CC  C0 1E 00 24 */	lfs f0, 0x24(r30)
/* 801726F0 0016F7D0  FC 20 0A 10 */	fabs f1, f1
/* 801726F4 0016F7D4  C0 5E 00 28 */	lfs f2, 0x28(r30)
/* 801726F8 0016F7D8  FC 60 02 10 */	fabs f3, f0
/* 801726FC 0016F7DC  FC 80 12 10 */	fabs f4, f2
/* 80172700 0016F7E0  FC 20 08 18 */	frsp f1, f1
/* 80172704 0016F7E4  FC 60 18 18 */	frsp f3, f3
/* 80172708 0016F7E8  FC 80 20 18 */	frsp f4, f4
/* 8017270C 0016F7EC  FC 01 18 40 */	fcmpo cr0, f1, f3
/* 80172710 0016F7F0  40 80 00 20 */	bge .L_80172730
/* 80172714 0016F7F4  FC 01 20 40 */	fcmpo cr0, f1, f4
/* 80172718 0016F7F8  40 80 00 18 */	bge .L_80172730
/* 8017271C 0016F7FC  FC 60 00 50 */	fneg f3, f0
/* 80172720 0016F800  C0 22 AC B8 */	lfs f1, "@1605"@sda21(r2)
/* 80172724 0016F804  7F C3 F3 78 */	mr r3, r30
/* 80172728 0016F808  4B E9 89 C5 */	bl assign__5xVec3Ffff
/* 8017272C 0016F80C  48 00 00 40 */	b .L_8017276C
.L_80172730:
/* 80172730 0016F810  FC 03 20 40 */	fcmpo cr0, f3, f4
/* 80172734 0016F814  40 80 00 20 */	bge .L_80172754
/* 80172738 0016F818  C0 1E 00 28 */	lfs f0, 0x28(r30)
/* 8017273C 0016F81C  7F C3 F3 78 */	mr r3, r30
/* 80172740 0016F820  C0 42 AC B8 */	lfs f2, "@1605"@sda21(r2)
/* 80172744 0016F824  FC 20 00 50 */	fneg f1, f0
/* 80172748 0016F828  C0 7E 00 20 */	lfs f3, 0x20(r30)
/* 8017274C 0016F82C  4B E9 89 A1 */	bl assign__5xVec3Ffff
/* 80172750 0016F830  48 00 00 1C */	b .L_8017276C
.L_80172754:
/* 80172754 0016F834  C0 1E 00 20 */	lfs f0, 0x20(r30)
/* 80172758 0016F838  7F C3 F3 78 */	mr r3, r30
/* 8017275C 0016F83C  C0 3E 00 24 */	lfs f1, 0x24(r30)
/* 80172760 0016F840  FC 40 00 50 */	fneg f2, f0
/* 80172764 0016F844  C0 62 AC B8 */	lfs f3, "@1605"@sda21(r2)
/* 80172768 0016F848  4B E9 89 85 */	bl assign__5xVec3Ffff
.L_8017276C:
/* 8017276C 0016F84C  7F C3 F3 78 */	mr r3, r30
/* 80172770 0016F850  4B EA 2E 41 */	bl normalize__5xVec3Fv
/* 80172774 0016F854  7F C4 F3 78 */	mr r4, r30
/* 80172778 0016F858  38 61 00 08 */	addi r3, r1, 0x8
/* 8017277C 0016F85C  38 BE 00 20 */	addi r5, r30, 0x20
/* 80172780 0016F860  4B EA 2D B5 */	bl cross__5xVec3CFRC5xVec3
/* 80172784 0016F864  38 7E 00 10 */	addi r3, r30, 0x10
/* 80172788 0016F868  38 81 00 08 */	addi r4, r1, 0x8
/* 8017278C 0016F86C  4B E9 8A D9 */	bl __as__5xVec3FRC5xVec3
/* 80172790 0016F870  FC 20 F8 90 */	fmr f1, f31
.L_80172794:
/* 80172794 0016F874  E3 E1 00 28 */	psq_l f31, 0x28(r1), 0, qr0
/* 80172798 0016F878  80 01 00 34 */	lwz r0, 0x34(r1)
/* 8017279C 0016F87C  CB E1 00 20 */	lfd f31, 0x20(r1)
/* 801727A0 0016F880  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 801727A4 0016F884  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 801727A8 0016F888  7C 08 03 A6 */	mtlr r0
/* 801727AC 0016F88C  38 21 00 30 */	addi r1, r1, 0x30
/* 801727B0 0016F890  4E 80 00 20 */	blr
.endfn "look_at__30@unnamed@zNPCTypeDutchman_cpp@FR7xMat3x3RC5xVec3"

# @unnamed@zNPCTypeDutchman_cpp@::init_sound()
.fn "init_sound__30@unnamed@zNPCTypeDutchman_cpp@Fv", local
/* 801727B4 0016F894  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 801727B8 0016F898  7C 08 02 A6 */	mflr r0
/* 801727BC 0016F89C  3C 60 80 33 */	lis r3, "sound_data__30@unnamed@zNPCTypeDutchman_cpp@"@ha
/* 801727C0 0016F8A0  38 80 00 00 */	li r4, 0x0
/* 801727C4 0016F8A4  90 01 00 24 */	stw r0, 0x24(r1)
/* 801727C8 0016F8A8  38 63 B4 14 */	addi r3, r3, "sound_data__30@unnamed@zNPCTypeDutchman_cpp@"@l
/* 801727CC 0016F8AC  38 A0 00 30 */	li r5, 0x30
/* 801727D0 0016F8B0  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 801727D4 0016F8B4  93 C1 00 18 */	stw r30, 0x18(r1)
/* 801727D8 0016F8B8  93 A1 00 14 */	stw r29, 0x14(r1)
/* 801727DC 0016F8BC  4B E9 0C 7D */	bl memset
/* 801727E0 0016F8C0  3C 80 80 27 */	lis r4, "sound_assets__30@unnamed@zNPCTypeDutchman_cpp@"@ha
/* 801727E4 0016F8C4  3C 60 80 33 */	lis r3, "sound_data__30@unnamed@zNPCTypeDutchman_cpp@"@ha
/* 801727E8 0016F8C8  3B E4 20 2C */	addi r31, r4, "sound_assets__30@unnamed@zNPCTypeDutchman_cpp@"@l
/* 801727EC 0016F8CC  3B A0 00 00 */	li r29, 0x0
/* 801727F0 0016F8D0  3B C3 B4 14 */	addi r30, r3, "sound_data__30@unnamed@zNPCTypeDutchman_cpp@"@l
.L_801727F4:
/* 801727F4 0016F8D4  80 7F 00 00 */	lwz r3, 0x0(r31)
/* 801727F8 0016F8D8  4B ED 9A 1D */	bl xStrHash__FPCc
/* 801727FC 0016F8DC  3B BD 00 01 */	addi r29, r29, 0x1
/* 80172800 0016F8E0  90 7E 00 00 */	stw r3, 0x0(r30)
/* 80172804 0016F8E4  2C 1D 00 06 */	cmpwi r29, 0x6
/* 80172808 0016F8E8  3B FF 00 0C */	addi r31, r31, 0xc
/* 8017280C 0016F8EC  3B DE 00 08 */	addi r30, r30, 0x8
/* 80172810 0016F8F0  41 80 FF E4 */	blt .L_801727F4
/* 80172814 0016F8F4  80 01 00 24 */	lwz r0, 0x24(r1)
/* 80172818 0016F8F8  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 8017281C 0016F8FC  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 80172820 0016F900  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 80172824 0016F904  7C 08 03 A6 */	mtlr r0
/* 80172828 0016F908  38 21 00 20 */	addi r1, r1, 0x20
/* 8017282C 0016F90C  4E 80 00 20 */	blr
.endfn "init_sound__30@unnamed@zNPCTypeDutchman_cpp@Fv"

# @unnamed@zNPCTypeDutchman_cpp@::play_sound(int, const xVec3*, float)
.fn "play_sound__30@unnamed@zNPCTypeDutchman_cpp@FiPC5xVec3f", local
/* 80172830 0016F910  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80172834 0016F914  7C 08 02 A6 */	mflr r0
/* 80172838 0016F918  1C E3 00 0C */	mulli r7, r3, 0xc
/* 8017283C 0016F91C  3C C0 80 27 */	lis r6, "sound_assets__30@unnamed@zNPCTypeDutchman_cpp@"@ha
/* 80172840 0016F920  90 01 00 14 */	stw r0, 0x14(r1)
/* 80172844 0016F924  3C A0 80 33 */	lis r5, "tweak__30@unnamed@zNPCTypeDutchman_cpp@"@ha
/* 80172848 0016F928  38 06 20 2C */	addi r0, r6, "sound_assets__30@unnamed@zNPCTypeDutchman_cpp@"@l
/* 8017284C 0016F92C  7D 00 3A 14 */	add r8, r0, r7
/* 80172850 0016F930  80 08 00 08 */	lwz r0, 0x8(r8)
/* 80172854 0016F934  1C C3 00 14 */	mulli r6, r3, 0x14
/* 80172858 0016F938  38 A5 A5 78 */	addi r5, r5, "tweak__30@unnamed@zNPCTypeDutchman_cpp@"@l
/* 8017285C 0016F93C  54 00 07 FF */	clrlwi. r0, r0, 31
/* 80172860 0016F940  7C A5 32 14 */	add r5, r5, r6
/* 80172864 0016F944  3C E0 80 33 */	lis r7, "sound_data__30@unnamed@zNPCTypeDutchman_cpp@"@ha
/* 80172868 0016F948  54 60 18 38 */	slwi r0, r3, 3
/* 8017286C 0016F94C  38 67 B4 14 */	addi r3, r7, "sound_data__30@unnamed@zNPCTypeDutchman_cpp@"@l
/* 80172870 0016F950  39 25 01 A4 */	addi r9, r5, 0x1a4
/* 80172874 0016F954  41 82 00 3C */	beq .L_801728B0
/* 80172878 0016F958  C0 09 00 00 */	lfs f0, 0x0(r9)
/* 8017287C 0016F95C  7C 86 23 78 */	mr r6, r4
/* 80172880 0016F960  7C 63 00 2E */	lwzx r3, r3, r0
/* 80172884 0016F964  38 A0 08 00 */	li r5, 0x800
/* 80172888 0016F968  EC 21 00 32 */	fmuls f1, f1, f0
/* 8017288C 0016F96C  C0 42 AC BC */	lfs f2, "@1606"@sda21(r2)
/* 80172890 0016F970  80 88 00 04 */	lwz r4, 0x4(r8)
/* 80172894 0016F974  38 E0 00 00 */	li r7, 0x0
/* 80172898 0016F978  C0 69 00 04 */	lfs f3, 0x4(r9)
/* 8017289C 0016F97C  C0 89 00 08 */	lfs f4, 0x8(r9)
/* 801728A0 0016F980  C0 A2 AC B8 */	lfs f5, "@1605"@sda21(r2)
/* 801728A4 0016F984  C0 C9 00 0C */	lfs f6, 0xc(r9)
/* 801728A8 0016F988  4B ED 6C C5 */	bl xSndPlay3DFade__FUiffUiUiPC5xVec3ff14sound_categoryff
/* 801728AC 0016F98C  48 00 00 34 */	b .L_801728E0
.L_801728B0:
/* 801728B0 0016F990  C0 09 00 00 */	lfs f0, 0x0(r9)
/* 801728B4 0016F994  7C 86 23 78 */	mr r6, r4
/* 801728B8 0016F998  7C 63 00 2E */	lwzx r3, r3, r0
/* 801728BC 0016F99C  38 A0 08 00 */	li r5, 0x800
/* 801728C0 0016F9A0  EC 21 00 32 */	fmuls f1, f1, f0
/* 801728C4 0016F9A4  C0 42 AC BC */	lfs f2, "@1606"@sda21(r2)
/* 801728C8 0016F9A8  80 88 00 04 */	lwz r4, 0x4(r8)
/* 801728CC 0016F9AC  38 E0 00 00 */	li r7, 0x0
/* 801728D0 0016F9B0  C0 69 00 04 */	lfs f3, 0x4(r9)
/* 801728D4 0016F9B4  C0 89 00 08 */	lfs f4, 0x8(r9)
/* 801728D8 0016F9B8  C0 A9 00 0C */	lfs f5, 0xc(r9)
/* 801728DC 0016F9BC  4B ED 61 B9 */	bl xSndPlay3D__FUiffUiUiPC5xVec3ff14sound_categoryf
.L_801728E0:
/* 801728E0 0016F9C0  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801728E4 0016F9C4  7C 08 03 A6 */	mtlr r0
/* 801728E8 0016F9C8  38 21 00 10 */	addi r1, r1, 0x10
/* 801728EC 0016F9CC  4E 80 00 20 */	blr
.endfn "play_sound__30@unnamed@zNPCTypeDutchman_cpp@FiPC5xVec3f"

# @unnamed@zNPCTypeDutchman_cpp@::kill_sound(int, unsigned int)
.fn "kill_sound__30@unnamed@zNPCTypeDutchman_cpp@FiUi", local
/* 801728F0 0016F9D0  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801728F4 0016F9D4  7C 08 02 A6 */	mflr r0
/* 801728F8 0016F9D8  1C C3 00 0C */	mulli r6, r3, 0xc
/* 801728FC 0016F9DC  3C A0 80 27 */	lis r5, "sound_assets__30@unnamed@zNPCTypeDutchman_cpp@"@ha
/* 80172900 0016F9E0  90 01 00 14 */	stw r0, 0x14(r1)
/* 80172904 0016F9E4  3C E0 80 33 */	lis r7, "tweak__30@unnamed@zNPCTypeDutchman_cpp@"@ha
/* 80172908 0016F9E8  38 05 20 2C */	addi r0, r5, "sound_assets__30@unnamed@zNPCTypeDutchman_cpp@"@l
/* 8017290C 0016F9EC  7C A0 32 14 */	add r5, r0, r6
/* 80172910 0016F9F0  80 05 00 08 */	lwz r0, 0x8(r5)
/* 80172914 0016F9F4  1C 63 00 14 */	mulli r3, r3, 0x14
/* 80172918 0016F9F8  38 C7 A5 78 */	addi r6, r7, "tweak__30@unnamed@zNPCTypeDutchman_cpp@"@l
/* 8017291C 0016F9FC  54 00 07 FF */	clrlwi. r0, r0, 31
/* 80172920 0016FA00  7C 66 1A 14 */	add r3, r6, r3
/* 80172924 0016FA04  38 63 01 A4 */	addi r3, r3, 0x1a4
/* 80172928 0016FA08  41 82 00 14 */	beq .L_8017293C
/* 8017292C 0016FA0C  C0 23 00 10 */	lfs f1, 0x10(r3)
/* 80172930 0016FA10  7C 83 23 78 */	mr r3, r4
/* 80172934 0016FA14  4B ED 6D 11 */	bl xSndStopFade__FUif
/* 80172938 0016FA18  48 00 00 0C */	b .L_80172944
.L_8017293C:
/* 8017293C 0016FA1C  7C 83 23 78 */	mr r3, r4
/* 80172940 0016FA20  4B ED 68 C1 */	bl xSndStop__FUi
.L_80172944:
/* 80172944 0016FA24  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80172948 0016FA28  7C 08 03 A6 */	mtlr r0
/* 8017294C 0016FA2C  38 21 00 10 */	addi r1, r1, 0x10
/* 80172950 0016FA30  4E 80 00 20 */	blr
.endfn "kill_sound__30@unnamed@zNPCTypeDutchman_cpp@FiUi"

# @unnamed@zNPCTypeDutchman_cpp@::set_volume(int, unsigned int, float)
.fn "set_volume__30@unnamed@zNPCTypeDutchman_cpp@FiUif", local
/* 80172954 0016FA34  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80172958 0016FA38  7C 08 02 A6 */	mflr r0
/* 8017295C 0016FA3C  3C A0 80 33 */	lis r5, "tweak__30@unnamed@zNPCTypeDutchman_cpp@"@ha
/* 80172960 0016FA40  90 01 00 14 */	stw r0, 0x14(r1)
/* 80172964 0016FA44  1C 03 00 14 */	mulli r0, r3, 0x14
/* 80172968 0016FA48  38 A5 A5 78 */	addi r5, r5, "tweak__30@unnamed@zNPCTypeDutchman_cpp@"@l
/* 8017296C 0016FA4C  7C 83 23 78 */	mr r3, r4
/* 80172970 0016FA50  7C 85 02 14 */	add r4, r5, r0
/* 80172974 0016FA54  C0 04 01 A4 */	lfs f0, 0x1a4(r4)
/* 80172978 0016FA58  EC 20 00 72 */	fmuls f1, f0, f1
/* 8017297C 0016FA5C  4B ED 6A 2D */	bl xSndSetVol__FUif
/* 80172980 0016FA60  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80172984 0016FA64  7C 08 03 A6 */	mtlr r0
/* 80172988 0016FA68  38 21 00 10 */	addi r1, r1, 0x10
/* 8017298C 0016FA6C  4E 80 00 20 */	blr
.endfn "set_volume__30@unnamed@zNPCTypeDutchman_cpp@FiUif"

# ZNPC_AnimTable_Dutchman()
.fn ZNPC_AnimTable_Dutchman__Fv, global
/* 80172990 0016FA70  94 21 FF 80 */	stwu r1, -0x80(r1)
/* 80172994 0016FA74  7C 08 02 A6 */	mflr r0
/* 80172998 0016FA78  3C 60 80 27 */	lis r3, "@stringBase0"@ha
/* 8017299C 0016FA7C  3C 80 80 27 */	lis r4, "@1674"@ha
/* 801729A0 0016FA80  90 01 00 84 */	stw r0, 0x84(r1)
/* 801729A4 0016FA84  38 63 20 F0 */	addi r3, r3, "@stringBase0"@l
/* 801729A8 0016FA88  38 63 00 4B */	addi r3, r3, 0x4b
/* 801729AC 0016FA8C  38 A0 00 00 */	li r5, 0x0
/* 801729B0 0016FA90  BE 81 00 50 */	stmw r20, 0x50(r1)
/* 801729B4 0016FA94  3B 24 20 74 */	addi r25, r4, "@1674"@l
/* 801729B8 0016FA98  38 80 00 00 */	li r4, 0x0
/* 801729BC 0016FA9C  83 19 00 00 */	lwz r24, 0x0(r25)
/* 801729C0 0016FAA0  82 F9 00 04 */	lwz r23, 0x4(r25)
/* 801729C4 0016FAA4  82 D9 00 08 */	lwz r22, 0x8(r25)
/* 801729C8 0016FAA8  82 B9 00 0C */	lwz r21, 0xc(r25)
/* 801729CC 0016FAAC  82 99 00 10 */	lwz r20, 0x10(r25)
/* 801729D0 0016FAB0  81 99 00 14 */	lwz r12, 0x14(r25)
/* 801729D4 0016FAB4  81 79 00 18 */	lwz r11, 0x18(r25)
/* 801729D8 0016FAB8  81 59 00 1C */	lwz r10, 0x1c(r25)
/* 801729DC 0016FABC  81 39 00 20 */	lwz r9, 0x20(r25)
/* 801729E0 0016FAC0  81 19 00 24 */	lwz r8, 0x24(r25)
/* 801729E4 0016FAC4  80 F9 00 28 */	lwz r7, 0x28(r25)
/* 801729E8 0016FAC8  80 D9 00 2C */	lwz r6, 0x2c(r25)
/* 801729EC 0016FACC  80 19 00 30 */	lwz r0, 0x30(r25)
/* 801729F0 0016FAD0  93 01 00 18 */	stw r24, 0x18(r1)
/* 801729F4 0016FAD4  92 E1 00 1C */	stw r23, 0x1c(r1)
/* 801729F8 0016FAD8  92 C1 00 20 */	stw r22, 0x20(r1)
/* 801729FC 0016FADC  92 A1 00 24 */	stw r21, 0x24(r1)
/* 80172A00 0016FAE0  92 81 00 28 */	stw r20, 0x28(r1)
/* 80172A04 0016FAE4  91 81 00 2C */	stw r12, 0x2c(r1)
/* 80172A08 0016FAE8  91 61 00 30 */	stw r11, 0x30(r1)
/* 80172A0C 0016FAEC  91 41 00 34 */	stw r10, 0x34(r1)
/* 80172A10 0016FAF0  91 21 00 38 */	stw r9, 0x38(r1)
/* 80172A14 0016FAF4  91 01 00 3C */	stw r8, 0x3c(r1)
/* 80172A18 0016FAF8  90 E1 00 40 */	stw r7, 0x40(r1)
/* 80172A1C 0016FAFC  90 C1 00 44 */	stw r6, 0x44(r1)
/* 80172A20 0016FB00  90 01 00 48 */	stw r0, 0x48(r1)
/* 80172A24 0016FB04  4B E9 42 4D */	bl xAnimTableNew__FPCcPP10xAnimTableUi
/* 80172A28 0016FB08  3C A0 80 00 */	lis r5, xAnimDefaultBeforeEnter__FP9xAnimPlayP10xAnimState@ha
/* 80172A2C 0016FB0C  3C 80 80 2A */	lis r4, g_strz_subbanim@ha
/* 80172A30 0016FB10  38 05 6C FC */	addi r0, r5, xAnimDefaultBeforeEnter__FP9xAnimPlayP10xAnimState@l
/* 80172A34 0016FB14  7C 74 1B 78 */	mr r20, r3
/* 80172A38 0016FB18  90 01 00 08 */	stw r0, 0x8(r1)
/* 80172A3C 0016FB1C  38 00 00 00 */	li r0, 0x0
/* 80172A40 0016FB20  3A A4 91 3C */	addi r21, r4, g_strz_subbanim@l
/* 80172A44 0016FB24  38 A0 00 10 */	li r5, 0x10
/* 80172A48 0016FB28  90 01 00 0C */	stw r0, 0xc(r1)
/* 80172A4C 0016FB2C  38 C0 00 00 */	li r6, 0x0
/* 80172A50 0016FB30  38 E0 00 00 */	li r7, 0x0
/* 80172A54 0016FB34  39 00 00 00 */	li r8, 0x0
/* 80172A58 0016FB38  90 01 00 10 */	stw r0, 0x10(r1)
/* 80172A5C 0016FB3C  39 20 00 00 */	li r9, 0x0
/* 80172A60 0016FB40  39 40 00 00 */	li r10, 0x0
/* 80172A64 0016FB44  80 95 00 04 */	lwz r4, 0x4(r21)
/* 80172A68 0016FB48  C0 22 AC BC */	lfs f1, "@1606"@sda21(r2)
/* 80172A6C 0016FB4C  C0 42 AC B8 */	lfs f2, "@1605"@sda21(r2)
/* 80172A70 0016FB50  4B E9 42 E9 */	bl xAnimTableNewState__FP10xAnimTablePCcUiUifPfPffPUsPvPFP9xAnimPlayP10xAnimState_vPFP10xAnimStateP11xAnimSinglePv_vPFP9xAnimPlayP5xQuatP5xVec3i_v
/* 80172A74 0016FB54  3C 80 80 00 */	lis r4, xAnimDefaultBeforeEnter__FP9xAnimPlayP10xAnimState@ha
/* 80172A78 0016FB58  3C 60 80 2A */	lis r3, g_strz_subbanim@ha
/* 80172A7C 0016FB5C  38 84 6C FC */	addi r4, r4, xAnimDefaultBeforeEnter__FP9xAnimPlayP10xAnimState@l
/* 80172A80 0016FB60  38 00 00 00 */	li r0, 0x0
/* 80172A84 0016FB64  90 81 00 08 */	stw r4, 0x8(r1)
/* 80172A88 0016FB68  3A C3 91 3C */	addi r22, r3, g_strz_subbanim@l
/* 80172A8C 0016FB6C  7E 83 A3 78 */	mr r3, r20
/* 80172A90 0016FB70  38 A0 00 00 */	li r5, 0x0
/* 80172A94 0016FB74  90 01 00 0C */	stw r0, 0xc(r1)
/* 80172A98 0016FB78  38 C0 00 00 */	li r6, 0x0
/* 80172A9C 0016FB7C  38 E0 00 00 */	li r7, 0x0
/* 80172AA0 0016FB80  39 00 00 00 */	li r8, 0x0
/* 80172AA4 0016FB84  90 01 00 10 */	stw r0, 0x10(r1)
/* 80172AA8 0016FB88  39 20 00 00 */	li r9, 0x0
/* 80172AAC 0016FB8C  39 40 00 00 */	li r10, 0x0
/* 80172AB0 0016FB90  80 96 00 2C */	lwz r4, 0x2c(r22)
/* 80172AB4 0016FB94  C0 22 AC BC */	lfs f1, "@1606"@sda21(r2)
/* 80172AB8 0016FB98  C0 42 AC B8 */	lfs f2, "@1605"@sda21(r2)
/* 80172ABC 0016FB9C  4B E9 42 9D */	bl xAnimTableNewState__FP10xAnimTablePCcUiUifPfPffPUsPvPFP9xAnimPlayP10xAnimState_vPFP10xAnimStateP11xAnimSinglePv_vPFP9xAnimPlayP5xQuatP5xVec3i_v
/* 80172AC0 0016FBA0  3C 80 80 00 */	lis r4, xAnimDefaultBeforeEnter__FP9xAnimPlayP10xAnimState@ha
/* 80172AC4 0016FBA4  3C 60 80 2A */	lis r3, g_strz_subbanim@ha
/* 80172AC8 0016FBA8  38 84 6C FC */	addi r4, r4, xAnimDefaultBeforeEnter__FP9xAnimPlayP10xAnimState@l
/* 80172ACC 0016FBAC  38 00 00 00 */	li r0, 0x0
/* 80172AD0 0016FBB0  90 81 00 08 */	stw r4, 0x8(r1)
/* 80172AD4 0016FBB4  3A E3 91 3C */	addi r23, r3, g_strz_subbanim@l
/* 80172AD8 0016FBB8  7E 83 A3 78 */	mr r3, r20
/* 80172ADC 0016FBBC  38 A0 00 20 */	li r5, 0x20
/* 80172AE0 0016FBC0  90 01 00 0C */	stw r0, 0xc(r1)
/* 80172AE4 0016FBC4  38 C0 00 00 */	li r6, 0x0
/* 80172AE8 0016FBC8  38 E0 00 00 */	li r7, 0x0
/* 80172AEC 0016FBCC  39 00 00 00 */	li r8, 0x0
/* 80172AF0 0016FBD0  90 01 00 10 */	stw r0, 0x10(r1)
/* 80172AF4 0016FBD4  39 20 00 00 */	li r9, 0x0
/* 80172AF8 0016FBD8  39 40 00 00 */	li r10, 0x0
/* 80172AFC 0016FBDC  80 97 00 10 */	lwz r4, 0x10(r23)
/* 80172B00 0016FBE0  C0 22 AC BC */	lfs f1, "@1606"@sda21(r2)
/* 80172B04 0016FBE4  C0 42 AC B8 */	lfs f2, "@1605"@sda21(r2)
/* 80172B08 0016FBE8  4B E9 42 51 */	bl xAnimTableNewState__FP10xAnimTablePCcUiUifPfPffPUsPvPFP9xAnimPlayP10xAnimState_vPFP10xAnimStateP11xAnimSinglePv_vPFP9xAnimPlayP5xQuatP5xVec3i_v
/* 80172B0C 0016FBEC  3C 80 80 00 */	lis r4, xAnimDefaultBeforeEnter__FP9xAnimPlayP10xAnimState@ha
/* 80172B10 0016FBF0  3C 60 80 2A */	lis r3, g_strz_subbanim@ha
/* 80172B14 0016FBF4  38 84 6C FC */	addi r4, r4, xAnimDefaultBeforeEnter__FP9xAnimPlayP10xAnimState@l
/* 80172B18 0016FBF8  38 00 00 00 */	li r0, 0x0
/* 80172B1C 0016FBFC  90 81 00 08 */	stw r4, 0x8(r1)
/* 80172B20 0016FC00  3B 03 91 3C */	addi r24, r3, g_strz_subbanim@l
/* 80172B24 0016FC04  7E 83 A3 78 */	mr r3, r20
/* 80172B28 0016FC08  38 A0 00 20 */	li r5, 0x20
/* 80172B2C 0016FC0C  90 01 00 0C */	stw r0, 0xc(r1)
/* 80172B30 0016FC10  38 C0 00 00 */	li r6, 0x0
/* 80172B34 0016FC14  38 E0 00 00 */	li r7, 0x0
/* 80172B38 0016FC18  39 00 00 00 */	li r8, 0x0
/* 80172B3C 0016FC1C  90 01 00 10 */	stw r0, 0x10(r1)
/* 80172B40 0016FC20  39 20 00 00 */	li r9, 0x0
/* 80172B44 0016FC24  39 40 00 00 */	li r10, 0x0
/* 80172B48 0016FC28  80 98 00 14 */	lwz r4, 0x14(r24)
/* 80172B4C 0016FC2C  C0 22 AC BC */	lfs f1, "@1606"@sda21(r2)
/* 80172B50 0016FC30  C0 42 AC B8 */	lfs f2, "@1605"@sda21(r2)
/* 80172B54 0016FC34  4B E9 42 05 */	bl xAnimTableNewState__FP10xAnimTablePCcUiUifPfPffPUsPvPFP9xAnimPlayP10xAnimState_vPFP10xAnimStateP11xAnimSinglePv_vPFP9xAnimPlayP5xQuatP5xVec3i_v
/* 80172B58 0016FC38  3C 80 80 00 */	lis r4, xAnimDefaultBeforeEnter__FP9xAnimPlayP10xAnimState@ha
/* 80172B5C 0016FC3C  3C 60 80 2A */	lis r3, g_strz_subbanim@ha
/* 80172B60 0016FC40  38 84 6C FC */	addi r4, r4, xAnimDefaultBeforeEnter__FP9xAnimPlayP10xAnimState@l
/* 80172B64 0016FC44  38 00 00 00 */	li r0, 0x0
/* 80172B68 0016FC48  90 81 00 08 */	stw r4, 0x8(r1)
/* 80172B6C 0016FC4C  38 83 91 3C */	addi r4, r3, g_strz_subbanim@l
/* 80172B70 0016FC50  7E 83 A3 78 */	mr r3, r20
/* 80172B74 0016FC54  38 A0 00 20 */	li r5, 0x20
/* 80172B78 0016FC58  90 01 00 0C */	stw r0, 0xc(r1)
/* 80172B7C 0016FC5C  38 C0 00 00 */	li r6, 0x0
/* 80172B80 0016FC60  38 E0 00 00 */	li r7, 0x0
/* 80172B84 0016FC64  39 00 00 00 */	li r8, 0x0
/* 80172B88 0016FC68  90 01 00 10 */	stw r0, 0x10(r1)
/* 80172B8C 0016FC6C  39 20 00 00 */	li r9, 0x0
/* 80172B90 0016FC70  39 40 00 00 */	li r10, 0x0
/* 80172B94 0016FC74  80 84 00 18 */	lwz r4, 0x18(r4)
/* 80172B98 0016FC78  C0 22 AC BC */	lfs f1, "@1606"@sda21(r2)
/* 80172B9C 0016FC7C  C0 42 AC B8 */	lfs f2, "@1605"@sda21(r2)
/* 80172BA0 0016FC80  4B E9 41 B9 */	bl xAnimTableNewState__FP10xAnimTablePCcUiUifPfPffPUsPvPFP9xAnimPlayP10xAnimState_vPFP10xAnimStateP11xAnimSinglePv_vPFP9xAnimPlayP5xQuatP5xVec3i_v
/* 80172BA4 0016FC84  3C 80 80 00 */	lis r4, xAnimDefaultBeforeEnter__FP9xAnimPlayP10xAnimState@ha
/* 80172BA8 0016FC88  3C 60 80 2A */	lis r3, g_strz_subbanim@ha
/* 80172BAC 0016FC8C  38 84 6C FC */	addi r4, r4, xAnimDefaultBeforeEnter__FP9xAnimPlayP10xAnimState@l
/* 80172BB0 0016FC90  38 00 00 00 */	li r0, 0x0
/* 80172BB4 0016FC94  90 81 00 08 */	stw r4, 0x8(r1)
/* 80172BB8 0016FC98  38 83 91 3C */	addi r4, r3, g_strz_subbanim@l
/* 80172BBC 0016FC9C  7E 83 A3 78 */	mr r3, r20
/* 80172BC0 0016FCA0  38 A0 00 20 */	li r5, 0x20
/* 80172BC4 0016FCA4  90 01 00 0C */	stw r0, 0xc(r1)
/* 80172BC8 0016FCA8  38 C0 00 00 */	li r6, 0x0
/* 80172BCC 0016FCAC  38 E0 00 00 */	li r7, 0x0
/* 80172BD0 0016FCB0  39 00 00 00 */	li r8, 0x0
/* 80172BD4 0016FCB4  90 01 00 10 */	stw r0, 0x10(r1)
/* 80172BD8 0016FCB8  39 20 00 00 */	li r9, 0x0
/* 80172BDC 0016FCBC  39 40 00 00 */	li r10, 0x0
/* 80172BE0 0016FCC0  80 84 00 1C */	lwz r4, 0x1c(r4)
/* 80172BE4 0016FCC4  C0 22 AC BC */	lfs f1, "@1606"@sda21(r2)
/* 80172BE8 0016FCC8  C0 42 AC B8 */	lfs f2, "@1605"@sda21(r2)
/* 80172BEC 0016FCCC  4B E9 41 6D */	bl xAnimTableNewState__FP10xAnimTablePCcUiUifPfPffPUsPvPFP9xAnimPlayP10xAnimState_vPFP10xAnimStateP11xAnimSinglePv_vPFP9xAnimPlayP5xQuatP5xVec3i_v
/* 80172BF0 0016FCD0  3C 80 80 00 */	lis r4, xAnimDefaultBeforeEnter__FP9xAnimPlayP10xAnimState@ha
/* 80172BF4 0016FCD4  3C 60 80 2A */	lis r3, g_strz_subbanim@ha
/* 80172BF8 0016FCD8  38 84 6C FC */	addi r4, r4, xAnimDefaultBeforeEnter__FP9xAnimPlayP10xAnimState@l
/* 80172BFC 0016FCDC  38 00 00 00 */	li r0, 0x0
/* 80172C00 0016FCE0  90 81 00 08 */	stw r4, 0x8(r1)
/* 80172C04 0016FCE4  3B 23 91 3C */	addi r25, r3, g_strz_subbanim@l
/* 80172C08 0016FCE8  7E 83 A3 78 */	mr r3, r20
/* 80172C0C 0016FCEC  38 A0 00 20 */	li r5, 0x20
/* 80172C10 0016FCF0  90 01 00 0C */	stw r0, 0xc(r1)
/* 80172C14 0016FCF4  38 C0 00 00 */	li r6, 0x0
/* 80172C18 0016FCF8  38 E0 00 00 */	li r7, 0x0
/* 80172C1C 0016FCFC  39 00 00 00 */	li r8, 0x0
/* 80172C20 0016FD00  90 01 00 10 */	stw r0, 0x10(r1)
/* 80172C24 0016FD04  39 20 00 00 */	li r9, 0x0
/* 80172C28 0016FD08  39 40 00 00 */	li r10, 0x0
/* 80172C2C 0016FD0C  80 99 00 30 */	lwz r4, 0x30(r25)
/* 80172C30 0016FD10  C0 22 AC BC */	lfs f1, "@1606"@sda21(r2)
/* 80172C34 0016FD14  C0 42 AC B8 */	lfs f2, "@1605"@sda21(r2)
/* 80172C38 0016FD18  4B E9 41 21 */	bl xAnimTableNewState__FP10xAnimTablePCcUiUifPfPffPUsPvPFP9xAnimPlayP10xAnimState_vPFP10xAnimStateP11xAnimSinglePv_vPFP9xAnimPlayP5xQuatP5xVec3i_v
/* 80172C3C 0016FD1C  3C 80 80 00 */	lis r4, xAnimDefaultBeforeEnter__FP9xAnimPlayP10xAnimState@ha
/* 80172C40 0016FD20  3C 60 80 2A */	lis r3, g_strz_subbanim@ha
/* 80172C44 0016FD24  38 84 6C FC */	addi r4, r4, xAnimDefaultBeforeEnter__FP9xAnimPlayP10xAnimState@l
/* 80172C48 0016FD28  38 00 00 00 */	li r0, 0x0
/* 80172C4C 0016FD2C  90 81 00 08 */	stw r4, 0x8(r1)
/* 80172C50 0016FD30  3B 43 91 3C */	addi r26, r3, g_strz_subbanim@l
/* 80172C54 0016FD34  7E 83 A3 78 */	mr r3, r20
/* 80172C58 0016FD38  38 A0 00 10 */	li r5, 0x10
/* 80172C5C 0016FD3C  90 01 00 0C */	stw r0, 0xc(r1)
/* 80172C60 0016FD40  38 C0 00 00 */	li r6, 0x0
/* 80172C64 0016FD44  38 E0 00 00 */	li r7, 0x0
/* 80172C68 0016FD48  39 00 00 00 */	li r8, 0x0
/* 80172C6C 0016FD4C  90 01 00 10 */	stw r0, 0x10(r1)
/* 80172C70 0016FD50  39 20 00 00 */	li r9, 0x0
/* 80172C74 0016FD54  39 40 00 00 */	li r10, 0x0
/* 80172C78 0016FD58  80 9A 00 34 */	lwz r4, 0x34(r26)
/* 80172C7C 0016FD5C  C0 22 AC BC */	lfs f1, "@1606"@sda21(r2)
/* 80172C80 0016FD60  C0 42 AC B8 */	lfs f2, "@1605"@sda21(r2)
/* 80172C84 0016FD64  4B E9 40 D5 */	bl xAnimTableNewState__FP10xAnimTablePCcUiUifPfPffPUsPvPFP9xAnimPlayP10xAnimState_vPFP10xAnimStateP11xAnimSinglePv_vPFP9xAnimPlayP5xQuatP5xVec3i_v
/* 80172C88 0016FD68  3C 80 80 00 */	lis r4, xAnimDefaultBeforeEnter__FP9xAnimPlayP10xAnimState@ha
/* 80172C8C 0016FD6C  3C 60 80 2A */	lis r3, g_strz_subbanim@ha
/* 80172C90 0016FD70  38 84 6C FC */	addi r4, r4, xAnimDefaultBeforeEnter__FP9xAnimPlayP10xAnimState@l
/* 80172C94 0016FD74  38 00 00 00 */	li r0, 0x0
/* 80172C98 0016FD78  90 81 00 08 */	stw r4, 0x8(r1)
/* 80172C9C 0016FD7C  3B 63 91 3C */	addi r27, r3, g_strz_subbanim@l
/* 80172CA0 0016FD80  7E 83 A3 78 */	mr r3, r20
/* 80172CA4 0016FD84  38 A0 00 20 */	li r5, 0x20
/* 80172CA8 0016FD88  90 01 00 0C */	stw r0, 0xc(r1)
/* 80172CAC 0016FD8C  38 C0 00 00 */	li r6, 0x0
/* 80172CB0 0016FD90  38 E0 00 00 */	li r7, 0x0
/* 80172CB4 0016FD94  39 00 00 00 */	li r8, 0x0
/* 80172CB8 0016FD98  90 01 00 10 */	stw r0, 0x10(r1)
/* 80172CBC 0016FD9C  39 20 00 00 */	li r9, 0x0
/* 80172CC0 0016FDA0  39 40 00 00 */	li r10, 0x0
/* 80172CC4 0016FDA4  80 9B 00 38 */	lwz r4, 0x38(r27)
/* 80172CC8 0016FDA8  C0 22 AC BC */	lfs f1, "@1606"@sda21(r2)
/* 80172CCC 0016FDAC  C0 42 AC B8 */	lfs f2, "@1605"@sda21(r2)
/* 80172CD0 0016FDB0  4B E9 40 89 */	bl xAnimTableNewState__FP10xAnimTablePCcUiUifPfPffPUsPvPFP9xAnimPlayP10xAnimState_vPFP10xAnimStateP11xAnimSinglePv_vPFP9xAnimPlayP5xQuatP5xVec3i_v
/* 80172CD4 0016FDB4  3C 80 80 00 */	lis r4, xAnimDefaultBeforeEnter__FP9xAnimPlayP10xAnimState@ha
/* 80172CD8 0016FDB8  3C 60 80 2A */	lis r3, g_strz_subbanim@ha
/* 80172CDC 0016FDBC  38 84 6C FC */	addi r4, r4, xAnimDefaultBeforeEnter__FP9xAnimPlayP10xAnimState@l
/* 80172CE0 0016FDC0  38 00 00 00 */	li r0, 0x0
/* 80172CE4 0016FDC4  90 81 00 08 */	stw r4, 0x8(r1)
/* 80172CE8 0016FDC8  3B 83 91 3C */	addi r28, r3, g_strz_subbanim@l
/* 80172CEC 0016FDCC  7E 83 A3 78 */	mr r3, r20
/* 80172CF0 0016FDD0  38 A0 00 20 */	li r5, 0x20
/* 80172CF4 0016FDD4  90 01 00 0C */	stw r0, 0xc(r1)
/* 80172CF8 0016FDD8  38 C0 00 00 */	li r6, 0x0
/* 80172CFC 0016FDDC  38 E0 00 00 */	li r7, 0x0
/* 80172D00 0016FDE0  39 00 00 00 */	li r8, 0x0
/* 80172D04 0016FDE4  90 01 00 10 */	stw r0, 0x10(r1)
/* 80172D08 0016FDE8  39 20 00 00 */	li r9, 0x0
/* 80172D0C 0016FDEC  39 40 00 00 */	li r10, 0x0
/* 80172D10 0016FDF0  80 9C 00 40 */	lwz r4, 0x40(r28)
/* 80172D14 0016FDF4  C0 22 AC BC */	lfs f1, "@1606"@sda21(r2)
/* 80172D18 0016FDF8  C0 42 AC B8 */	lfs f2, "@1605"@sda21(r2)
/* 80172D1C 0016FDFC  4B E9 40 3D */	bl xAnimTableNewState__FP10xAnimTablePCcUiUifPfPffPUsPvPFP9xAnimPlayP10xAnimState_vPFP10xAnimStateP11xAnimSinglePv_vPFP9xAnimPlayP5xQuatP5xVec3i_v
/* 80172D20 0016FE00  3C 80 80 00 */	lis r4, xAnimDefaultBeforeEnter__FP9xAnimPlayP10xAnimState@ha
/* 80172D24 0016FE04  3C 60 80 2A */	lis r3, g_strz_subbanim@ha
/* 80172D28 0016FE08  38 84 6C FC */	addi r4, r4, xAnimDefaultBeforeEnter__FP9xAnimPlayP10xAnimState@l
/* 80172D2C 0016FE0C  38 00 00 00 */	li r0, 0x0
/* 80172D30 0016FE10  90 81 00 08 */	stw r4, 0x8(r1)
/* 80172D34 0016FE14  3B A3 91 3C */	addi r29, r3, g_strz_subbanim@l
/* 80172D38 0016FE18  7E 83 A3 78 */	mr r3, r20
/* 80172D3C 0016FE1C  38 A0 00 10 */	li r5, 0x10
/* 80172D40 0016FE20  90 01 00 0C */	stw r0, 0xc(r1)
/* 80172D44 0016FE24  38 C0 00 00 */	li r6, 0x0
/* 80172D48 0016FE28  38 E0 00 00 */	li r7, 0x0
/* 80172D4C 0016FE2C  39 00 00 00 */	li r8, 0x0
/* 80172D50 0016FE30  90 01 00 10 */	stw r0, 0x10(r1)
/* 80172D54 0016FE34  39 20 00 00 */	li r9, 0x0
/* 80172D58 0016FE38  39 40 00 00 */	li r10, 0x0
/* 80172D5C 0016FE3C  80 9D 00 44 */	lwz r4, 0x44(r29)
/* 80172D60 0016FE40  C0 22 AC BC */	lfs f1, "@1606"@sda21(r2)
/* 80172D64 0016FE44  C0 42 AC B8 */	lfs f2, "@1605"@sda21(r2)
/* 80172D68 0016FE48  4B E9 3F F1 */	bl xAnimTableNewState__FP10xAnimTablePCcUiUifPfPffPUsPvPFP9xAnimPlayP10xAnimState_vPFP10xAnimStateP11xAnimSinglePv_vPFP9xAnimPlayP5xQuatP5xVec3i_v
/* 80172D6C 0016FE4C  3C 80 80 00 */	lis r4, xAnimDefaultBeforeEnter__FP9xAnimPlayP10xAnimState@ha
/* 80172D70 0016FE50  3C 60 80 2A */	lis r3, g_strz_subbanim@ha
/* 80172D74 0016FE54  38 84 6C FC */	addi r4, r4, xAnimDefaultBeforeEnter__FP9xAnimPlayP10xAnimState@l
/* 80172D78 0016FE58  38 00 00 00 */	li r0, 0x0
/* 80172D7C 0016FE5C  90 81 00 08 */	stw r4, 0x8(r1)
/* 80172D80 0016FE60  3B C3 91 3C */	addi r30, r3, g_strz_subbanim@l
/* 80172D84 0016FE64  7E 83 A3 78 */	mr r3, r20
/* 80172D88 0016FE68  38 A0 00 20 */	li r5, 0x20
/* 80172D8C 0016FE6C  90 01 00 0C */	stw r0, 0xc(r1)
/* 80172D90 0016FE70  38 C0 00 00 */	li r6, 0x0
/* 80172D94 0016FE74  38 E0 00 00 */	li r7, 0x0
/* 80172D98 0016FE78  39 00 00 00 */	li r8, 0x0
/* 80172D9C 0016FE7C  90 01 00 10 */	stw r0, 0x10(r1)
/* 80172DA0 0016FE80  39 20 00 00 */	li r9, 0x0
/* 80172DA4 0016FE84  39 40 00 00 */	li r10, 0x0
/* 80172DA8 0016FE88  80 9E 00 48 */	lwz r4, 0x48(r30)
/* 80172DAC 0016FE8C  C0 22 AC BC */	lfs f1, "@1606"@sda21(r2)
/* 80172DB0 0016FE90  C0 42 AC B8 */	lfs f2, "@1605"@sda21(r2)
/* 80172DB4 0016FE94  4B E9 3F A5 */	bl xAnimTableNewState__FP10xAnimTablePCcUiUifPfPffPUsPvPFP9xAnimPlayP10xAnimState_vPFP10xAnimStateP11xAnimSinglePv_vPFP9xAnimPlayP5xQuatP5xVec3i_v
/* 80172DB8 0016FE98  3C 80 80 00 */	lis r4, xAnimDefaultBeforeEnter__FP9xAnimPlayP10xAnimState@ha
/* 80172DBC 0016FE9C  3C 60 80 2A */	lis r3, g_strz_subbanim@ha
/* 80172DC0 0016FEA0  38 84 6C FC */	addi r4, r4, xAnimDefaultBeforeEnter__FP9xAnimPlayP10xAnimState@l
/* 80172DC4 0016FEA4  38 00 00 00 */	li r0, 0x0
/* 80172DC8 0016FEA8  90 81 00 08 */	stw r4, 0x8(r1)
/* 80172DCC 0016FEAC  3B E3 91 3C */	addi r31, r3, g_strz_subbanim@l
/* 80172DD0 0016FEB0  7E 83 A3 78 */	mr r3, r20
/* 80172DD4 0016FEB4  38 A0 00 20 */	li r5, 0x20
/* 80172DD8 0016FEB8  90 01 00 0C */	stw r0, 0xc(r1)
/* 80172DDC 0016FEBC  3C C0 02 00 */	lis r6, 0x200
/* 80172DE0 0016FEC0  38 E0 00 00 */	li r7, 0x0
/* 80172DE4 0016FEC4  39 00 00 00 */	li r8, 0x0
/* 80172DE8 0016FEC8  90 01 00 10 */	stw r0, 0x10(r1)
/* 80172DEC 0016FECC  39 20 00 00 */	li r9, 0x0
/* 80172DF0 0016FED0  39 40 00 00 */	li r10, 0x0
/* 80172DF4 0016FED4  80 9F 00 4C */	lwz r4, 0x4c(r31)
/* 80172DF8 0016FED8  C0 22 AC BC */	lfs f1, "@1606"@sda21(r2)
/* 80172DFC 0016FEDC  C0 42 AC B8 */	lfs f2, "@1605"@sda21(r2)
/* 80172E00 0016FEE0  4B E9 3F 59 */	bl xAnimTableNewState__FP10xAnimTablePCcUiUifPfPffPUsPvPFP9xAnimPlayP10xAnimState_vPFP10xAnimStateP11xAnimSinglePv_vPFP9xAnimPlayP5xQuatP5xVec3i_v
/* 80172E04 0016FEE4  3C 60 80 2A */	lis r3, g_strz_subbanim@ha
/* 80172E08 0016FEE8  C0 22 AC CC */	lfs f1, "@1689"@sda21(r2)
/* 80172E0C 0016FEEC  38 83 91 3C */	addi r4, r3, g_strz_subbanim@l
/* 80172E10 0016FEF0  38 A1 00 18 */	addi r5, r1, 0x18
/* 80172E14 0016FEF4  7E 83 A3 78 */	mr r3, r20
/* 80172E18 0016FEF8  38 C0 00 01 */	li r6, 0x1
/* 80172E1C 0016FEFC  4B F8 15 DD */	bl NPCC_BuildStandardAnimTran__FP10xAnimTablePPcPiif
/* 80172E20 0016FF00  38 00 00 00 */	li r0, 0x0
/* 80172E24 0016FF04  7E 83 A3 78 */	mr r3, r20
/* 80172E28 0016FF08  90 01 00 08 */	stw r0, 0x8(r1)
/* 80172E2C 0016FF0C  38 C0 00 00 */	li r6, 0x0
/* 80172E30 0016FF10  38 E0 00 00 */	li r7, 0x0
/* 80172E34 0016FF14  39 00 00 10 */	li r8, 0x10
/* 80172E38 0016FF18  90 01 00 0C */	stw r0, 0xc(r1)
/* 80172E3C 0016FF1C  39 20 00 00 */	li r9, 0x0
/* 80172E40 0016FF20  39 40 00 00 */	li r10, 0x0
/* 80172E44 0016FF24  C0 22 AC B8 */	lfs f1, "@1605"@sda21(r2)
/* 80172E48 0016FF28  80 99 00 30 */	lwz r4, 0x30(r25)
/* 80172E4C 0016FF2C  FC 40 08 90 */	fmr f2, f1
/* 80172E50 0016FF30  80 BA 00 34 */	lwz r5, 0x34(r26)
/* 80172E54 0016FF34  C0 62 AC D0 */	lfs f3, "@1690"@sda21(r2)
/* 80172E58 0016FF38  4B E9 45 69 */	bl xAnimTableNewTransition__FP10xAnimTablePCcPCcPFP15xAnimTransitionP11xAnimSinglePv_UiPFP15xAnimTransitionP11xAnimSinglePv_UiUiUiffUsUsfPUs
/* 80172E5C 0016FF3C  38 00 00 00 */	li r0, 0x0
/* 80172E60 0016FF40  7E 83 A3 78 */	mr r3, r20
/* 80172E64 0016FF44  90 01 00 08 */	stw r0, 0x8(r1)
/* 80172E68 0016FF48  38 C0 00 00 */	li r6, 0x0
/* 80172E6C 0016FF4C  38 E0 00 00 */	li r7, 0x0
/* 80172E70 0016FF50  39 00 00 00 */	li r8, 0x0
/* 80172E74 0016FF54  90 01 00 0C */	stw r0, 0xc(r1)
/* 80172E78 0016FF58  39 20 00 00 */	li r9, 0x0
/* 80172E7C 0016FF5C  39 40 00 00 */	li r10, 0x0
/* 80172E80 0016FF60  C0 22 AC B8 */	lfs f1, "@1605"@sda21(r2)
/* 80172E84 0016FF64  80 9A 00 34 */	lwz r4, 0x34(r26)
/* 80172E88 0016FF68  FC 40 08 90 */	fmr f2, f1
/* 80172E8C 0016FF6C  80 BB 00 38 */	lwz r5, 0x38(r27)
/* 80172E90 0016FF70  C0 62 AC D0 */	lfs f3, "@1690"@sda21(r2)
/* 80172E94 0016FF74  4B E9 45 2D */	bl xAnimTableNewTransition__FP10xAnimTablePCcPCcPFP15xAnimTransitionP11xAnimSinglePv_UiPFP15xAnimTransitionP11xAnimSinglePv_UiUiUiffUsUsfPUs
/* 80172E98 0016FF78  38 00 00 00 */	li r0, 0x0
/* 80172E9C 0016FF7C  7E 83 A3 78 */	mr r3, r20
/* 80172EA0 0016FF80  90 01 00 08 */	stw r0, 0x8(r1)
/* 80172EA4 0016FF84  38 C0 00 00 */	li r6, 0x0
/* 80172EA8 0016FF88  38 E0 00 00 */	li r7, 0x0
/* 80172EAC 0016FF8C  39 00 00 10 */	li r8, 0x10
/* 80172EB0 0016FF90  90 01 00 0C */	stw r0, 0xc(r1)
/* 80172EB4 0016FF94  39 20 00 00 */	li r9, 0x0
/* 80172EB8 0016FF98  39 40 00 00 */	li r10, 0x0
/* 80172EBC 0016FF9C  C0 22 AC B8 */	lfs f1, "@1605"@sda21(r2)
/* 80172EC0 0016FFA0  80 9C 00 40 */	lwz r4, 0x40(r28)
/* 80172EC4 0016FFA4  FC 40 08 90 */	fmr f2, f1
/* 80172EC8 0016FFA8  80 BD 00 44 */	lwz r5, 0x44(r29)
/* 80172ECC 0016FFAC  C0 62 AC D0 */	lfs f3, "@1690"@sda21(r2)
/* 80172ED0 0016FFB0  4B E9 44 F1 */	bl xAnimTableNewTransition__FP10xAnimTablePCcPCcPFP15xAnimTransitionP11xAnimSinglePv_UiPFP15xAnimTransitionP11xAnimSinglePv_UiUiUiffUsUsfPUs
/* 80172ED4 0016FFB4  38 00 00 00 */	li r0, 0x0
/* 80172ED8 0016FFB8  7E 83 A3 78 */	mr r3, r20
/* 80172EDC 0016FFBC  90 01 00 08 */	stw r0, 0x8(r1)
/* 80172EE0 0016FFC0  38 C0 00 00 */	li r6, 0x0
/* 80172EE4 0016FFC4  38 E0 00 00 */	li r7, 0x0
/* 80172EE8 0016FFC8  39 00 00 00 */	li r8, 0x0
/* 80172EEC 0016FFCC  90 01 00 0C */	stw r0, 0xc(r1)
/* 80172EF0 0016FFD0  39 20 00 00 */	li r9, 0x0
/* 80172EF4 0016FFD4  39 40 00 00 */	li r10, 0x0
/* 80172EF8 0016FFD8  C0 22 AC B8 */	lfs f1, "@1605"@sda21(r2)
/* 80172EFC 0016FFDC  80 9D 00 44 */	lwz r4, 0x44(r29)
/* 80172F00 0016FFE0  FC 40 08 90 */	fmr f2, f1
/* 80172F04 0016FFE4  80 BE 00 48 */	lwz r5, 0x48(r30)
/* 80172F08 0016FFE8  C0 62 AC D0 */	lfs f3, "@1690"@sda21(r2)
/* 80172F0C 0016FFEC  4B E9 44 B5 */	bl xAnimTableNewTransition__FP10xAnimTablePCcPCcPFP15xAnimTransitionP11xAnimSinglePv_UiPFP15xAnimTransitionP11xAnimSinglePv_UiUiUiffUsUsfPUs
/* 80172F10 0016FFF0  38 00 00 00 */	li r0, 0x0
/* 80172F14 0016FFF4  7E 83 A3 78 */	mr r3, r20
/* 80172F18 0016FFF8  90 01 00 08 */	stw r0, 0x8(r1)
/* 80172F1C 0016FFFC  38 C0 00 00 */	li r6, 0x0
/* 80172F20 00170000  38 E0 00 00 */	li r7, 0x0
/* 80172F24 00170004  39 00 00 10 */	li r8, 0x10
/* 80172F28 00170008  90 01 00 0C */	stw r0, 0xc(r1)
/* 80172F2C 0017000C  39 20 00 00 */	li r9, 0x0
/* 80172F30 00170010  39 40 00 00 */	li r10, 0x0
/* 80172F34 00170014  C0 22 AC B8 */	lfs f1, "@1605"@sda21(r2)
/* 80172F38 00170018  80 98 00 14 */	lwz r4, 0x14(r24)
/* 80172F3C 0017001C  FC 40 08 90 */	fmr f2, f1
/* 80172F40 00170020  80 B5 00 04 */	lwz r5, 0x4(r21)
/* 80172F44 00170024  C0 62 AC D0 */	lfs f3, "@1690"@sda21(r2)
/* 80172F48 00170028  4B E9 44 79 */	bl xAnimTableNewTransition__FP10xAnimTablePCcPCcPFP15xAnimTransitionP11xAnimSinglePv_UiPFP15xAnimTransitionP11xAnimSinglePv_UiUiUiffUsUsfPUs
/* 80172F4C 0017002C  38 00 00 00 */	li r0, 0x0
/* 80172F50 00170030  7E 83 A3 78 */	mr r3, r20
/* 80172F54 00170034  90 01 00 08 */	stw r0, 0x8(r1)
/* 80172F58 00170038  38 C0 00 00 */	li r6, 0x0
/* 80172F5C 0017003C  38 E0 00 00 */	li r7, 0x0
/* 80172F60 00170040  39 00 00 00 */	li r8, 0x0
/* 80172F64 00170044  90 01 00 0C */	stw r0, 0xc(r1)
/* 80172F68 00170048  39 20 00 00 */	li r9, 0x0
/* 80172F6C 0017004C  39 40 00 00 */	li r10, 0x0
/* 80172F70 00170050  C0 22 AC B8 */	lfs f1, "@1605"@sda21(r2)
/* 80172F74 00170054  80 98 00 14 */	lwz r4, 0x14(r24)
/* 80172F78 00170058  FC 40 08 90 */	fmr f2, f1
/* 80172F7C 0017005C  80 B9 00 30 */	lwz r5, 0x30(r25)
/* 80172F80 00170060  C0 62 AC D0 */	lfs f3, "@1690"@sda21(r2)
/* 80172F84 00170064  4B E9 44 3D */	bl xAnimTableNewTransition__FP10xAnimTablePCcPCcPFP15xAnimTransitionP11xAnimSinglePv_UiPFP15xAnimTransitionP11xAnimSinglePv_UiUiUiffUsUsfPUs
/* 80172F88 00170068  38 00 00 00 */	li r0, 0x0
/* 80172F8C 0017006C  7E 83 A3 78 */	mr r3, r20
/* 80172F90 00170070  90 01 00 08 */	stw r0, 0x8(r1)
/* 80172F94 00170074  38 C0 00 00 */	li r6, 0x0
/* 80172F98 00170078  38 E0 00 00 */	li r7, 0x0
/* 80172F9C 0017007C  39 00 00 00 */	li r8, 0x0
/* 80172FA0 00170080  90 01 00 0C */	stw r0, 0xc(r1)
/* 80172FA4 00170084  39 20 00 00 */	li r9, 0x0
/* 80172FA8 00170088  39 40 00 00 */	li r10, 0x0
/* 80172FAC 0017008C  C0 22 AC B8 */	lfs f1, "@1605"@sda21(r2)
/* 80172FB0 00170090  80 98 00 14 */	lwz r4, 0x14(r24)
/* 80172FB4 00170094  FC 40 08 90 */	fmr f2, f1
/* 80172FB8 00170098  80 B7 00 10 */	lwz r5, 0x10(r23)
/* 80172FBC 0017009C  C0 62 AC D0 */	lfs f3, "@1690"@sda21(r2)
/* 80172FC0 001700A0  4B E9 44 01 */	bl xAnimTableNewTransition__FP10xAnimTablePCcPCcPFP15xAnimTransitionP11xAnimSinglePv_UiPFP15xAnimTransitionP11xAnimSinglePv_UiUiUiffUsUsfPUs
/* 80172FC4 001700A4  38 00 00 00 */	li r0, 0x0
/* 80172FC8 001700A8  7E 83 A3 78 */	mr r3, r20
/* 80172FCC 001700AC  90 01 00 08 */	stw r0, 0x8(r1)
/* 80172FD0 001700B0  38 C0 00 00 */	li r6, 0x0
/* 80172FD4 001700B4  38 E0 00 00 */	li r7, 0x0
/* 80172FD8 001700B8  39 00 00 00 */	li r8, 0x0
/* 80172FDC 001700BC  90 01 00 0C */	stw r0, 0xc(r1)
/* 80172FE0 001700C0  39 20 00 00 */	li r9, 0x0
/* 80172FE4 001700C4  39 40 00 00 */	li r10, 0x0
/* 80172FE8 001700C8  C0 22 AC B8 */	lfs f1, "@1605"@sda21(r2)
/* 80172FEC 001700CC  80 9F 00 4C */	lwz r4, 0x4c(r31)
/* 80172FF0 001700D0  FC 40 08 90 */	fmr f2, f1
/* 80172FF4 001700D4  80 B6 00 2C */	lwz r5, 0x2c(r22)
/* 80172FF8 001700D8  C0 62 AC D0 */	lfs f3, "@1690"@sda21(r2)
/* 80172FFC 001700DC  4B E9 43 C5 */	bl xAnimTableNewTransition__FP10xAnimTablePCcPCcPFP15xAnimTransitionP11xAnimSinglePv_UiPFP15xAnimTransitionP11xAnimSinglePv_UiUiUiffUsUsfPUs
/* 80173000 001700E0  7E 83 A3 78 */	mr r3, r20
/* 80173004 001700E4  BA 81 00 50 */	lmw r20, 0x50(r1)
/* 80173008 001700E8  80 01 00 84 */	lwz r0, 0x84(r1)
/* 8017300C 001700EC  7C 08 03 A6 */	mtlr r0
/* 80173010 001700F0  38 21 00 80 */	addi r1, r1, 0x80
/* 80173014 001700F4  4E 80 00 20 */	blr
.endfn ZNPC_AnimTable_Dutchman__Fv

# zNPCDutchman::zNPCDutchman(int)
.fn __ct__12zNPCDutchmanFi, global
/* 80173018 001700F8  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8017301C 001700FC  7C 08 02 A6 */	mflr r0
/* 80173020 00170100  90 01 00 14 */	stw r0, 0x14(r1)
/* 80173024 00170104  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80173028 00170108  7C 7F 1B 78 */	mr r31, r3
/* 8017302C 0017010C  4B FC 30 9D */	bl __ct__11zNPCSubBossFi
/* 80173030 00170110  3C 80 80 2A */	lis r4, __vt__12zNPCDutchman@ha
/* 80173034 00170114  38 7F 02 B4 */	addi r3, r31, 0x2b4
/* 80173038 00170118  38 04 B7 64 */	addi r0, r4, __vt__12zNPCDutchman@l
/* 8017303C 0017011C  38 80 00 00 */	li r4, 0x0
/* 80173040 00170120  90 1F 01 B8 */	stw r0, 0x1b8(r31)
/* 80173044 00170124  38 A0 00 10 */	li r5, 0x10
/* 80173048 00170128  4B E9 04 11 */	bl memset
/* 8017304C 0017012C  93 ED 97 A4 */	stw r31, dutchman_reticle_ent@sda21(r13)
/* 80173050 00170130  7F E3 FB 78 */	mr r3, r31
/* 80173054 00170134  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80173058 00170138  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8017305C 0017013C  7C 08 03 A6 */	mtlr r0
/* 80173060 00170140  38 21 00 10 */	addi r1, r1, 0x10
/* 80173064 00170144  4E 80 00 20 */	blr
.endfn __ct__12zNPCDutchmanFi

# zNPCDutchman::Init(xEntAsset*)
.fn Init__12zNPCDutchmanFP9xEntAsset, global
/* 80173068 00170148  94 21 FF D0 */	stwu r1, -0x30(r1)
/* 8017306C 0017014C  7C 08 02 A6 */	mflr r0
/* 80173070 00170150  3C A0 80 2A */	lis r5, "boss_cam__30@unnamed@zNPCTypeDutchman_cpp@"@ha
/* 80173074 00170154  90 01 00 34 */	stw r0, 0x34(r1)
/* 80173078 00170158  38 05 B4 60 */	addi r0, r5, "boss_cam__30@unnamed@zNPCTypeDutchman_cpp@"@l
/* 8017307C 0017015C  BF 41 00 18 */	stmw r26, 0x18(r1)
/* 80173080 00170160  7C 7F 1B 78 */	mr r31, r3
/* 80173084 00170164  7C 9A 23 78 */	mr r26, r4
/* 80173088 00170168  80 CD 97 AC */	lwz r6, dutchman_count@sda21(r13)
/* 8017308C 0017016C  38 66 00 01 */	addi r3, r6, 0x1
/* 80173090 00170170  90 6D 97 AC */	stw r3, dutchman_count@sda21(r13)
/* 80173094 00170174  7C 03 03 78 */	mr r3, r0
/* 80173098 00170178  4B E9 AE 09 */	bl init__13xBinaryCameraFv
/* 8017309C 0017017C  7F E3 FB 78 */	mr r3, r31
/* 801730A0 00170180  7F 44 D3 78 */	mr r4, r26
/* 801730A4 00170184  4B F7 BF F9 */	bl Init__10zNPCCommonFP9xEntAsset
/* 801730A8 00170188  38 00 00 01 */	li r0, 0x1
/* 801730AC 0017018C  3C 80 80 27 */	lis r4, "burn_ribbon_curve__30@unnamed@zNPCTypeDutchman_cpp@"@ha
/* 801730B0 00170190  90 1F 01 CC */	stw r0, 0x1cc(r31)
/* 801730B4 00170194  3C 60 80 33 */	lis r3, "eye_scorch__30@unnamed@zNPCTypeDutchman_cpp@"@ha
/* 801730B8 00170198  3B 63 B1 94 */	addi r27, r3, "eye_scorch__30@unnamed@zNPCTypeDutchman_cpp@"@l
/* 801730BC 0017019C  3B A4 1F D8 */	addi r29, r4, "burn_ribbon_curve__30@unnamed@zNPCTypeDutchman_cpp@"@l
/* 801730C0 001701A0  90 1F 01 C8 */	stw r0, 0x1c8(r31)
/* 801730C4 001701A4  3C 60 80 27 */	lis r3, "@stringBase0"@ha
/* 801730C8 001701A8  3B 81 00 08 */	addi r28, r1, 0x8
/* 801730CC 001701AC  3B 40 00 00 */	li r26, 0x0
/* 801730D0 001701B0  80 82 AC D4 */	lwz r4, "@1713"@sda21(r2)
/* 801730D4 001701B4  3B C3 20 F0 */	addi r30, r3, "@stringBase0"@l
/* 801730D8 001701B8  80 02 AC D8 */	lwz r0, "@1713"+0x4@sda21(r2)
/* 801730DC 001701BC  90 81 00 08 */	stw r4, 0x8(r1)
/* 801730E0 001701C0  90 01 00 0C */	stw r0, 0xc(r1)
.L_801730E4:
/* 801730E4 001701C4  80 BC 00 00 */	lwz r5, 0x0(r28)
/* 801730E8 001701C8  7F 63 DB 78 */	mr r3, r27
/* 801730EC 001701CC  38 80 01 FF */	li r4, 0x1ff
/* 801730F0 001701D0  48 00 86 C1 */	bl init__9xFXRibbonFiPCc
/* 801730F4 001701D4  7F 63 DB 78 */	mr r3, r27
/* 801730F8 001701D8  4B EB 73 0D */	bl set_default_config__9xFXRibbonFv
/* 801730FC 001701DC  7F 63 DB 78 */	mr r3, r27
/* 80173100 001701E0  7F A4 EB 78 */	mr r4, r29
/* 80173104 001701E4  38 A0 00 07 */	li r5, 0x7
/* 80173108 001701E8  4B EB 73 9D */	bl set_curve__9xFXRibbonFPCQ29xFXRibbon10curve_nodeUl
/* 8017310C 001701EC  7F 63 DB 78 */	mr r3, r27
/* 80173110 001701F0  38 9E 00 7F */	addi r4, r30, 0x7f
/* 80173114 001701F4  4B EB 78 F9 */	bl set_texture__9xFXRibbonFPCc
/* 80173118 001701F8  C0 02 AC DC */	lfs f0, "@1753"@sda21(r2)
/* 8017311C 001701FC  7F 63 DB 78 */	mr r3, r27
/* 80173120 00170200  D0 1B 00 00 */	stfs f0, 0x0(r27)
/* 80173124 00170204  4B EB 73 21 */	bl refresh_config__9xFXRibbonFv
/* 80173128 00170208  3B 5A 00 01 */	addi r26, r26, 0x1
/* 8017312C 0017020C  3B 7B 01 40 */	addi r27, r27, 0x140
/* 80173130 00170210  2C 1A 00 02 */	cmpwi r26, 0x2
/* 80173134 00170214  3B 9C 00 04 */	addi r28, r28, 0x4
/* 80173138 00170218  41 80 FF AC */	blt .L_801730E4
/* 8017313C 0017021C  3C 60 80 27 */	lis r3, "@stringBase0"@ha
/* 80173140 00170220  38 63 20 F0 */	addi r3, r3, "@stringBase0"@l
/* 80173144 00170224  38 63 00 8A */	addi r3, r3, 0x8a
/* 80173148 00170228  4B ED 90 CD */	bl xStrHash__FPCc
/* 8017314C 0017022C  38 80 00 00 */	li r4, 0x0
/* 80173150 00170230  4B ED 85 BD */	bl xSTFindAsset__FUiPUi
/* 80173154 00170234  80 03 00 00 */	lwz r0, 0x0(r3)
/* 80173158 00170238  38 7F 05 58 */	addi r3, r31, 0x558
/* 8017315C 0017023C  38 80 00 0F */	li r4, 0xf
/* 80173160 00170240  90 1F 06 48 */	stw r0, 0x648(r31)
/* 80173164 00170244  48 00 7F 01 */	bl "init__40static_queue<Q212zNPCDutchman9wave_data>FUl"
/* 80173168 00170248  38 7F 06 00 */	addi r3, r31, 0x600
/* 8017316C 0017024C  38 80 00 3F */	li r4, 0x3f
/* 80173170 00170250  48 00 7E 69 */	bl "init__43static_queue<Q212zNPCDutchman11slime_slice>FUl"
/* 80173174 00170254  4B FF F6 41 */	bl "init_sound__30@unnamed@zNPCTypeDutchman_cpp@Fv"
/* 80173178 00170258  80 9F 00 24 */	lwz r4, 0x24(r31)
/* 8017317C 0017025C  38 60 00 00 */	li r3, 0x0
/* 80173180 00170260  48 00 00 24 */	b .L_801731A4
.L_80173184:
/* 80173184 00170264  2C 03 00 01 */	cmpwi r3, 0x1
/* 80173188 00170268  40 82 00 14 */	bne .L_8017319C
/* 8017318C 0017026C  A0 04 00 44 */	lhz r0, 0x44(r4)
/* 80173190 00170270  60 00 80 00 */	ori r0, r0, 0x8000
/* 80173194 00170274  B0 04 00 44 */	sth r0, 0x44(r4)
/* 80173198 00170278  48 00 00 14 */	b .L_801731AC
.L_8017319C:
/* 8017319C 0017027C  80 84 00 00 */	lwz r4, 0x0(r4)
/* 801731A0 00170280  38 63 00 01 */	addi r3, r3, 0x1
.L_801731A4:
/* 801731A4 00170284  28 04 00 00 */	cmplwi r4, 0x0
/* 801731A8 00170288  40 82 FF DC */	bne .L_80173184
.L_801731AC:
/* 801731AC 0017028C  BB 41 00 18 */	lmw r26, 0x18(r1)
/* 801731B0 00170290  80 01 00 34 */	lwz r0, 0x34(r1)
/* 801731B4 00170294  7C 08 03 A6 */	mtlr r0
/* 801731B8 00170298  38 21 00 30 */	addi r1, r1, 0x30
/* 801731BC 0017029C  4E 80 00 20 */	blr
.endfn Init__12zNPCDutchmanFP9xEntAsset

# zNPCDutchman::Setup()
.fn Setup__12zNPCDutchmanFv, global
/* 801731C0 001702A0  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801731C4 001702A4  7C 08 02 A6 */	mflr r0
/* 801731C8 001702A8  90 01 00 14 */	stw r0, 0x14(r1)
/* 801731CC 001702AC  4B FC 2E 85 */	bl Setup__11zNPCSubBossFv
/* 801731D0 001702B0  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801731D4 001702B4  7C 08 03 A6 */	mtlr r0
/* 801731D8 001702B8  38 21 00 10 */	addi r1, r1, 0x10
/* 801731DC 001702BC  4E 80 00 20 */	blr
.endfn Setup__12zNPCDutchmanFv

# zNPCDutchman::Reset()
.fn Reset__12zNPCDutchmanFv, global
/* 801731E0 001702C0  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801731E4 001702C4  7C 08 02 A6 */	mflr r0
/* 801731E8 001702C8  3C 80 80 33 */	lis r4, ...bss.0@ha
/* 801731EC 001702CC  90 01 00 14 */	stw r0, 0x14(r1)
/* 801731F0 001702D0  93 E1 00 0C */	stw r31, 0xc(r1)
/* 801731F4 001702D4  3B E4 A5 78 */	addi r31, r4, ...bss.0@l
/* 801731F8 001702D8  93 C1 00 08 */	stw r30, 0x8(r1)
/* 801731FC 001702DC  7C 7E 1B 78 */	mr r30, r3
/* 80173200 001702E0  4B F7 C6 A5 */	bl Reset__10zNPCCommonFv
/* 80173204 001702E4  38 7E 02 B4 */	addi r3, r30, 0x2b4
/* 80173208 001702E8  38 80 00 00 */	li r4, 0x0
/* 8017320C 001702EC  38 A0 00 10 */	li r5, 0x10
/* 80173210 001702F0  4B E9 02 49 */	bl memset
/* 80173214 001702F4  7F C3 F3 78 */	mr r3, r30
/* 80173218 001702F8  48 00 25 5D */	bl decompose__12zNPCDutchmanFv
/* 8017321C 001702FC  38 00 00 03 */	li r0, 0x3
/* 80173220 00170300  38 80 00 00 */	li r4, 0x0
/* 80173224 00170304  90 1E 02 C4 */	stw r0, 0x2c4(r30)
/* 80173228 00170308  38 00 FF FF */	li r0, -0x1
/* 8017322C 0017030C  7F C3 F3 78 */	mr r3, r30
/* 80173230 00170310  90 9E 02 C8 */	stw r4, 0x2c8(r30)
/* 80173234 00170314  90 1E 02 CC */	stw r0, 0x2cc(r30)
/* 80173238 00170318  C0 02 AC BC */	lfs f0, "@1606"@sda21(r2)
/* 8017323C 0017031C  D0 1E 02 D4 */	stfs f0, 0x2d4(r30)
/* 80173240 00170320  48 00 24 4D */	bl update_round__12zNPCDutchmanFv
/* 80173244 00170324  7F C3 F3 78 */	mr r3, r30
/* 80173248 00170328  48 00 85 E5 */	bl face_player__12zNPCDutchmanFv
/* 8017324C 0017032C  38 00 00 01 */	li r0, 0x1
/* 80173250 00170330  7F C3 F3 78 */	mr r3, r30
/* 80173254 00170334  90 1E 01 C8 */	stw r0, 0x1c8(r30)
/* 80173258 00170338  48 00 4B 0D */	bl reset_speed__12zNPCDutchmanFv
/* 8017325C 0017033C  C0 22 AC B8 */	lfs f1, "@1605"@sda21(r2)
/* 80173260 00170340  38 7E 02 F8 */	addi r3, r30, 0x2f8
/* 80173264 00170344  4B EA 96 15 */	bl __as__5xVec3Ff
/* 80173268 00170348  7F C3 F3 78 */	mr r3, r30
/* 8017326C 0017034C  48 00 85 B1 */	bl get_center__12zNPCDutchmanCFv
/* 80173270 00170350  7C 64 1B 78 */	mr r4, r3
/* 80173274 00170354  38 7E 02 EC */	addi r3, r30, 0x2ec
/* 80173278 00170358  4B E9 7F ED */	bl __as__5xVec3FRC5xVec3
/* 8017327C 0017035C  38 00 00 01 */	li r0, 0x1
/* 80173280 00170360  38 9F 00 00 */	addi r4, r31, 0x0
/* 80173284 00170364  90 1E 02 BC */	stw r0, 0x2bc(r30)
/* 80173288 00170368  7F C3 F3 78 */	mr r3, r30
/* 8017328C 0017036C  C0 22 AC BC */	lfs f1, "@1606"@sda21(r2)
/* 80173290 00170370  C0 04 00 28 */	lfs f0, 0x28(r4)
/* 80173294 00170374  EC 01 00 24 */	fdivs f0, f1, f0
/* 80173298 00170378  D0 1E 05 98 */	stfs f0, 0x598(r30)
/* 8017329C 0017037C  48 00 35 9D */	bl reset_blob_mat__12zNPCDutchmanFv
/* 801732A0 00170380  38 7E 05 58 */	addi r3, r30, 0x558
/* 801732A4 00170384  48 00 7E 3D */	bl "clear__40static_queue<Q212zNPCDutchman9wave_data>Fv"
/* 801732A8 00170388  38 7E 06 00 */	addi r3, r30, 0x600
/* 801732AC 0017038C  48 00 7D A9 */	bl "clear__43static_queue<Q212zNPCDutchman11slime_slice>Fv"
/* 801732B0 00170390  38 7F 0C 1C */	addi r3, r31, 0xc1c
/* 801732B4 00170394  48 00 85 25 */	bl clear__9xFXRibbonFv
/* 801732B8 00170398  38 7F 0C 1C */	addi r3, r31, 0xc1c
/* 801732BC 0017039C  38 63 01 40 */	addi r3, r3, 0x140
/* 801732C0 001703A0  48 00 85 19 */	bl clear__9xFXRibbonFv
/* 801732C4 001703A4  38 00 00 00 */	li r0, 0x0
/* 801732C8 001703A8  7F C3 F3 78 */	mr r3, r30
/* 801732CC 001703AC  90 1E 05 FC */	stw r0, 0x5fc(r30)
/* 801732D0 001703B0  48 00 47 C9 */	bl vanish__12zNPCDutchmanFv
/* 801732D4 001703B4  7F C3 F3 78 */	mr r3, r30
/* 801732D8 001703B8  48 00 36 15 */	bl refresh_reticle__12zNPCDutchmanFv
/* 801732DC 001703BC  38 00 00 00 */	li r0, 0x0
/* 801732E0 001703C0  3C 60 80 27 */	lis r3, "@stringBase0"@ha
/* 801732E4 001703C4  38 63 20 F0 */	addi r3, r3, "@stringBase0"@l
/* 801732E8 001703C8  98 1E 02 B5 */	stb r0, 0x2b5(r30)
/* 801732EC 001703CC  38 63 00 A0 */	addi r3, r3, 0xa0
/* 801732F0 001703D0  4B F3 55 55 */	bl zParEmitterFind__FPCc
/* 801732F4 001703D4  90 6D 97 70 */	stw r3, "plasma_emitter__30@unnamed@zNPCTypeDutchman_cpp@"@sda21(r13)
/* 801732F8 001703D8  3C 80 80 25 */	lis r4, g_O3@ha
/* 801732FC 001703DC  38 7F 03 88 */	addi r3, r31, 0x388
/* 80173300 001703E0  38 00 01 00 */	li r0, 0x100
/* 80173304 001703E4  90 03 01 38 */	stw r0, 0x138(r3)
/* 80173308 001703E8  38 84 30 18 */	addi r4, r4, g_O3@l
/* 8017330C 001703EC  38 63 01 40 */	addi r3, r3, 0x140
/* 80173310 001703F0  4B E9 7F 55 */	bl __as__5xVec3FRC5xVec3
/* 80173314 001703F4  3C 60 80 27 */	lis r3, "@stringBase0"@ha
/* 80173318 001703F8  38 63 20 F0 */	addi r3, r3, "@stringBase0"@l
/* 8017331C 001703FC  38 63 00 B8 */	addi r3, r3, 0xb8
/* 80173320 00170400  4B F3 55 25 */	bl zParEmitterFind__FPCc
/* 80173324 00170404  90 6D 97 74 */	stw r3, "spark_emitter__30@unnamed@zNPCTypeDutchman_cpp@"@sda21(r13)
/* 80173328 00170408  3C 80 80 25 */	lis r4, g_O3@ha
/* 8017332C 0017040C  38 7F 04 F4 */	addi r3, r31, 0x4f4
/* 80173330 00170410  38 00 01 00 */	li r0, 0x100
/* 80173334 00170414  90 03 01 38 */	stw r0, 0x138(r3)
/* 80173338 00170418  38 84 30 18 */	addi r4, r4, g_O3@l
/* 8017333C 0017041C  38 63 01 40 */	addi r3, r3, 0x140
/* 80173340 00170420  4B E9 7F 25 */	bl __as__5xVec3FRC5xVec3
/* 80173344 00170424  3C 60 80 27 */	lis r3, "@stringBase0"@ha
/* 80173348 00170428  38 63 20 F0 */	addi r3, r3, "@stringBase0"@l
/* 8017334C 0017042C  38 63 00 D0 */	addi r3, r3, 0xd0
/* 80173350 00170430  4B F3 54 F5 */	bl zParEmitterFind__FPCc
/* 80173354 00170434  90 6D 97 78 */	stw r3, "light_emitter__30@unnamed@zNPCTypeDutchman_cpp@"@sda21(r13)
/* 80173358 00170438  3C 80 80 25 */	lis r4, g_O3@ha
/* 8017335C 0017043C  38 7F 06 60 */	addi r3, r31, 0x660
/* 80173360 00170440  38 00 01 10 */	li r0, 0x110
/* 80173364 00170444  90 03 01 38 */	stw r0, 0x138(r3)
/* 80173368 00170448  38 84 30 18 */	addi r4, r4, g_O3@l
/* 8017336C 0017044C  38 63 01 40 */	addi r3, r3, 0x140
/* 80173370 00170450  4B E9 7E F5 */	bl __as__5xVec3FRC5xVec3
/* 80173374 00170454  38 9F 00 00 */	addi r4, r31, 0x0
/* 80173378 00170458  38 7F 06 60 */	addi r3, r31, 0x660
/* 8017337C 0017045C  C0 22 AC E0 */	lfs f1, "@1772"@sda21(r2)
/* 80173380 00170460  38 63 00 0C */	addi r3, r3, 0xc
/* 80173384 00170464  C0 04 00 90 */	lfs f0, 0x90(r4)
/* 80173388 00170468  EC 21 00 32 */	fmuls f1, f1, f0
/* 8017338C 0017046C  48 00 84 71 */	bl set__10xParInterpFf
/* 80173390 00170470  3C 60 80 27 */	lis r3, "@stringBase0"@ha
/* 80173394 00170474  38 63 20 F0 */	addi r3, r3, "@stringBase0"@l
/* 80173398 00170478  38 63 00 E7 */	addi r3, r3, 0xe7
/* 8017339C 0017047C  4B F3 54 A9 */	bl zParEmitterFind__FPCc
/* 801733A0 00170480  3C 80 80 27 */	lis r4, "@stringBase0"@ha
/* 801733A4 00170484  90 6D 97 7C */	stw r3, "eyeglow_emitter__30@unnamed@zNPCTypeDutchman_cpp@"@sda21(r13)
/* 801733A8 00170488  38 64 20 F0 */	addi r3, r4, "@stringBase0"@l
/* 801733AC 0017048C  38 63 01 01 */	addi r3, r3, 0x101
/* 801733B0 00170490  4B F3 54 95 */	bl zParEmitterFind__FPCc
/* 801733B4 00170494  38 AD 97 7C */	addi r5, r13, "eyeglow_emitter__30@unnamed@zNPCTypeDutchman_cpp@"@sda21
/* 801733B8 00170498  3C 80 80 27 */	lis r4, "@stringBase0"@ha
/* 801733BC 0017049C  90 65 00 04 */	stw r3, 0x4(r5)
/* 801733C0 001704A0  38 64 20 F0 */	addi r3, r4, "@stringBase0"@l
/* 801733C4 001704A4  38 63 01 1B */	addi r3, r3, 0x11b
/* 801733C8 001704A8  4B F3 54 7D */	bl zParEmitterFind__FPCc
/* 801733CC 001704AC  3C 80 80 27 */	lis r4, "@stringBase0"@ha
/* 801733D0 001704B0  90 6D 97 84 */	stw r3, "death_emitter__30@unnamed@zNPCTypeDutchman_cpp@"@sda21(r13)
/* 801733D4 001704B4  38 64 20 F0 */	addi r3, r4, "@stringBase0"@l
/* 801733D8 001704B8  38 63 01 32 */	addi r3, r3, 0x132
/* 801733DC 001704BC  4B F3 54 69 */	bl zParEmitterFind__FPCc
/* 801733E0 001704C0  3C 80 80 27 */	lis r4, "@stringBase0"@ha
/* 801733E4 001704C4  90 6D 97 88 */	stw r3, "dissolve_emitter__30@unnamed@zNPCTypeDutchman_cpp@"@sda21(r13)
/* 801733E8 001704C8  38 64 20 F0 */	addi r3, r4, "@stringBase0"@l
/* 801733EC 001704CC  38 63 01 4C */	addi r3, r3, 0x14c
/* 801733F0 001704D0  4B F3 54 55 */	bl zParEmitterFind__FPCc
/* 801733F4 001704D4  3C 80 80 27 */	lis r4, "@stringBase0"@ha
/* 801733F8 001704D8  90 6D 97 8C */	stw r3, "fadeout_emitter__30@unnamed@zNPCTypeDutchman_cpp@"@sda21(r13)
/* 801733FC 001704DC  38 64 20 F0 */	addi r3, r4, "@stringBase0"@l
/* 80173400 001704E0  38 63 01 65 */	addi r3, r3, 0x165
/* 80173404 001704E4  4B F3 54 41 */	bl zParEmitterFind__FPCc
/* 80173408 001704E8  3C 80 80 27 */	lis r4, "@stringBase0"@ha
/* 8017340C 001704EC  90 6D 97 90 */	stw r3, "fadein_emitter__30@unnamed@zNPCTypeDutchman_cpp@"@sda21(r13)
/* 80173410 001704F0  38 64 20 F0 */	addi r3, r4, "@stringBase0"@l
/* 80173414 001704F4  38 63 01 7D */	addi r3, r3, 0x17d
/* 80173418 001704F8  4B F3 54 2D */	bl zParEmitterFind__FPCc
/* 8017341C 001704FC  3C 80 80 27 */	lis r4, "@stringBase0"@ha
/* 80173420 00170500  90 7F 07 CC */	stw r3, 0x7cc(r31)
/* 80173424 00170504  38 64 20 F0 */	addi r3, r4, "@stringBase0"@l
/* 80173428 00170508  38 63 01 9A */	addi r3, r3, 0x19a
/* 8017342C 0017050C  4B F3 54 19 */	bl zParEmitterFind__FPCc
/* 80173430 00170510  38 BF 07 CC */	addi r5, r31, 0x7cc
/* 80173434 00170514  3C 80 80 27 */	lis r4, "@stringBase0"@ha
/* 80173438 00170518  90 65 00 04 */	stw r3, 0x4(r5)
/* 8017343C 0017051C  38 64 20 F0 */	addi r3, r4, "@stringBase0"@l
/* 80173440 00170520  38 63 01 B8 */	addi r3, r3, 0x1b8
/* 80173444 00170524  4B F3 54 01 */	bl zParEmitterFind__FPCc
/* 80173448 00170528  38 DF 07 CC */	addi r6, r31, 0x7cc
/* 8017344C 0017052C  38 BF 07 D8 */	addi r5, r31, 0x7d8
/* 80173450 00170530  38 00 01 10 */	li r0, 0x110
/* 80173454 00170534  3C 80 80 25 */	lis r4, g_O3@ha
/* 80173458 00170538  90 66 00 08 */	stw r3, 0x8(r6)
/* 8017345C 0017053C  7C A3 2B 78 */	mr r3, r5
/* 80173460 00170540  38 84 30 18 */	addi r4, r4, g_O3@l
/* 80173464 00170544  90 05 01 38 */	stw r0, 0x138(r5)
/* 80173468 00170548  38 63 01 40 */	addi r3, r3, 0x140
/* 8017346C 0017054C  4B E9 7D F9 */	bl __as__5xVec3FRC5xVec3
/* 80173470 00170550  38 7F 07 D8 */	addi r3, r31, 0x7d8
/* 80173474 00170554  C0 22 AC E4 */	lfs f1, "@1773"@sda21(r2)
/* 80173478 00170558  38 63 00 0C */	addi r3, r3, 0xc
/* 8017347C 0017055C  48 00 83 81 */	bl set__10xParInterpFf
/* 80173480 00170560  3C 60 80 27 */	lis r3, "@stringBase0"@ha
/* 80173484 00170564  38 63 20 F0 */	addi r3, r3, "@stringBase0"@l
/* 80173488 00170568  38 63 01 D5 */	addi r3, r3, 0x1d5
/* 8017348C 0017056C  4B F3 53 B9 */	bl zParEmitterFind__FPCc
/* 80173490 00170570  90 6D 97 94 */	stw r3, "snot_emitter__30@unnamed@zNPCTypeDutchman_cpp@"@sda21(r13)
/* 80173494 00170574  3C 60 80 27 */	lis r3, "@stringBase0"@ha
/* 80173498 00170578  38 9F 09 44 */	addi r4, r31, 0x944
/* 8017349C 0017057C  38 00 03 00 */	li r0, 0x300
/* 801734A0 00170580  38 63 20 F0 */	addi r3, r3, "@stringBase0"@l
/* 801734A4 00170584  90 04 01 38 */	stw r0, 0x138(r4)
/* 801734A8 00170588  38 63 01 F1 */	addi r3, r3, 0x1f1
/* 801734AC 0017058C  4B F3 53 99 */	bl zParEmitterFind__FPCc
/* 801734B0 00170590  90 6D 97 98 */	stw r3, "slime_emitter__30@unnamed@zNPCTypeDutchman_cpp@"@sda21(r13)
/* 801734B4 00170594  3C 60 80 27 */	lis r3, "@stringBase0"@ha
/* 801734B8 00170598  38 9F 0A B0 */	addi r4, r31, 0xab0
/* 801734BC 0017059C  38 00 01 00 */	li r0, 0x100
/* 801734C0 001705A0  38 63 20 F0 */	addi r3, r3, "@stringBase0"@l
/* 801734C4 001705A4  90 04 01 38 */	stw r0, 0x138(r4)
/* 801734C8 001705A8  38 63 02 0E */	addi r3, r3, 0x20e
/* 801734CC 001705AC  4B F3 53 79 */	bl zParEmitterFind__FPCc
/* 801734D0 001705B0  3C 80 80 27 */	lis r4, "@stringBase0"@ha
/* 801734D4 001705B4  90 6D 97 9C */	stw r3, "hand_trail_emitter__30@unnamed@zNPCTypeDutchman_cpp@"@sda21(r13)
/* 801734D8 001705B8  38 64 20 F0 */	addi r3, r4, "@stringBase0"@l
/* 801734DC 001705BC  38 63 02 2A */	addi r3, r3, 0x22a
/* 801734E0 001705C0  4B F3 53 65 */	bl zParEmitterFind__FPCc
/* 801734E4 001705C4  90 6D 97 A0 */	stw r3, "blob_emitter__30@unnamed@zNPCTypeDutchman_cpp@"@sda21(r13)
/* 801734E8 001705C8  3C 60 4E 47 */	lis r3, 0x4e47
/* 801734EC 001705CC  38 83 4D 3D */	addi r4, r3, 0x4d3d
/* 801734F0 001705D0  38 A0 00 01 */	li r5, 0x1
/* 801734F4 001705D4  80 7E 02 28 */	lwz r3, 0x228(r30)
/* 801734F8 001705D8  4B F9 A2 39 */	bl GoalSet__7xPsycheFii
/* 801734FC 001705DC  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80173500 001705E0  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80173504 001705E4  83 C1 00 08 */	lwz r30, 0x8(r1)
/* 80173508 001705E8  7C 08 03 A6 */	mtlr r0
/* 8017350C 001705EC  38 21 00 10 */	addi r1, r1, 0x10
/* 80173510 001705F0  4E 80 00 20 */	blr
.endfn Reset__12zNPCDutchmanFv

# zNPCDutchman::Destroy()
.fn Destroy__12zNPCDutchmanFv, global
/* 80173514 001705F4  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80173518 001705F8  7C 08 02 A6 */	mflr r0
/* 8017351C 001705FC  90 01 00 14 */	stw r0, 0x14(r1)
/* 80173520 00170600  4B F7 C4 F1 */	bl Destroy__10zNPCCommonFv
/* 80173524 00170604  80 6D 97 AC */	lwz r3, dutchman_count@sda21(r13)
/* 80173528 00170608  38 03 FF FF */	addi r0, r3, -0x1
/* 8017352C 0017060C  90 0D 97 AC */	stw r0, dutchman_count@sda21(r13)
/* 80173530 00170610  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80173534 00170614  7C 08 03 A6 */	mtlr r0
/* 80173538 00170618  38 21 00 10 */	addi r1, r1, 0x10
/* 8017353C 0017061C  4E 80 00 20 */	blr
.endfn Destroy__12zNPCDutchmanFv

# zNPCDutchman::Process(xScene*, float)
.fn Process__12zNPCDutchmanFP6xScenef, global
/* 80173540 00170620  94 21 FF D0 */	stwu r1, -0x30(r1)
/* 80173544 00170624  7C 08 02 A6 */	mflr r0
/* 80173548 00170628  90 01 00 34 */	stw r0, 0x34(r1)
/* 8017354C 0017062C  DB E1 00 20 */	stfd f31, 0x20(r1)
/* 80173550 00170630  F3 E1 00 28 */	psq_st f31, 0x28(r1), 0, qr0
/* 80173554 00170634  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 80173558 00170638  93 C1 00 18 */	stw r30, 0x18(r1)
/* 8017355C 0017063C  93 A1 00 14 */	stw r29, 0x14(r1)
/* 80173560 00170640  7C 7D 1B 78 */	mr r29, r3
/* 80173564 00170644  FF E0 08 90 */	fmr f31, f1
/* 80173568 00170648  88 03 02 B5 */	lbz r0, 0x2b5(r3)
/* 8017356C 0017064C  7C 9E 23 78 */	mr r30, r4
/* 80173570 00170650  28 00 00 00 */	cmplwi r0, 0x0
/* 80173574 00170654  40 82 00 0C */	bne .L_80173580
/* 80173578 00170658  4B F7 CB 79 */	bl Process__10zNPCCommonFP6xScenef
/* 8017357C 0017065C  48 00 01 38 */	b .L_801736B4
.L_80173580:
/* 80173580 00170660  C0 1D 02 D0 */	lfs f0, 0x2d0(r29)
/* 80173584 00170664  38 80 00 00 */	li r4, 0x0
/* 80173588 00170668  EC 00 F8 2A */	fadds f0, f0, f31
/* 8017358C 0017066C  D0 1D 02 D0 */	stfs f0, 0x2d0(r29)
/* 80173590 00170670  80 7D 02 28 */	lwz r3, 0x228(r29)
/* 80173594 00170674  4B F9 AA CD */	bl Timestep__7xPsycheFfPv
/* 80173598 00170678  88 1D 02 B5 */	lbz r0, 0x2b5(r29)
/* 8017359C 0017067C  28 00 00 00 */	cmplwi r0, 0x0
/* 801735A0 00170680  40 82 00 18 */	bne .L_801735B8
/* 801735A4 00170684  FC 20 F8 90 */	fmr f1, f31
/* 801735A8 00170688  7F A3 EB 78 */	mr r3, r29
/* 801735AC 0017068C  7F C4 F3 78 */	mr r4, r30
/* 801735B0 00170690  4B F7 CB 41 */	bl Process__10zNPCCommonFP6xScenef
/* 801735B4 00170694  48 00 01 00 */	b .L_801736B4
.L_801735B8:
/* 801735B8 00170698  88 1D 02 B4 */	lbz r0, 0x2b4(r29)
/* 801735BC 0017069C  28 00 00 00 */	cmplwi r0, 0x0
/* 801735C0 001706A0  41 82 00 48 */	beq .L_80173608
/* 801735C4 001706A4  3C 80 80 3C */	lis r4, globals@ha
/* 801735C8 001706A8  7F A3 EB 78 */	mr r3, r29
/* 801735CC 001706AC  38 84 05 58 */	addi r4, r4, globals@l
/* 801735D0 001706B0  80 84 07 04 */	lwz r4, 0x704(r4)
/* 801735D4 001706B4  83 E4 00 4C */	lwz r31, 0x4c(r4)
/* 801735D8 001706B8  48 00 82 45 */	bl get_center__12zNPCDutchmanCFv
/* 801735DC 001706BC  7C 64 1B 78 */	mr r4, r3
/* 801735E0 001706C0  C0 7F 00 30 */	lfs f3, 0x30(r31)
/* 801735E4 001706C4  C0 23 00 00 */	lfs f1, 0x0(r3)
/* 801735E8 001706C8  38 7D 02 D8 */	addi r3, r29, 0x2d8
/* 801735EC 001706CC  C0 5F 00 38 */	lfs f2, 0x38(r31)
/* 801735F0 001706D0  C0 04 00 08 */	lfs f0, 0x8(r4)
/* 801735F4 001706D4  EC 23 08 28 */	fsubs f1, f3, f1
/* 801735F8 001706D8  EC 42 00 28 */	fsubs f2, f2, f0
/* 801735FC 001706DC  4B EB 2D 1D */	bl assign__5xVec2Fff
/* 80173600 001706E0  38 7D 02 D8 */	addi r3, r29, 0x2d8
/* 80173604 001706E4  4B FA 9F 19 */	bl normalize__5xVec2Fv
.L_80173608:
/* 80173608 001706E8  FC 20 F8 90 */	fmr f1, f31
/* 8017360C 001706EC  7F A3 EB 78 */	mr r3, r29
/* 80173610 001706F0  48 00 24 ED */	bl update_turn__12zNPCDutchmanFf
/* 80173614 001706F4  FC 20 F8 90 */	fmr f1, f31
/* 80173618 001706F8  7F A3 EB 78 */	mr r3, r29
/* 8017361C 001706FC  48 00 25 E5 */	bl update_move__12zNPCDutchmanFf
/* 80173620 00170700  FC 20 F8 90 */	fmr f1, f31
/* 80173624 00170704  7F A3 EB 78 */	mr r3, r29
/* 80173628 00170708  48 00 26 6D */	bl update_animation__12zNPCDutchmanFf
/* 8017362C 0017070C  FC 20 F8 90 */	fmr f1, f31
/* 80173630 00170710  7F A3 EB 78 */	mr r3, r29
/* 80173634 00170714  48 00 3A 2D */	bl update_flames__12zNPCDutchmanFf
/* 80173638 00170718  FC 20 F8 90 */	fmr f1, f31
/* 8017363C 0017071C  7F A3 EB 78 */	mr r3, r29
/* 80173640 00170720  48 00 2D 05 */	bl update_eye_glow__12zNPCDutchmanFf
/* 80173644 00170724  FC 20 F8 90 */	fmr f1, f31
/* 80173648 00170728  7F A3 EB 78 */	mr r3, r29
/* 8017364C 0017072C  48 00 2E F1 */	bl update_hand_trail__12zNPCDutchmanFf
/* 80173650 00170730  FC 20 F8 90 */	fmr f1, f31
/* 80173654 00170734  7F A3 EB 78 */	mr r3, r29
/* 80173658 00170738  48 00 33 2D */	bl update_fade__12zNPCDutchmanFf
/* 8017365C 0017073C  FC 20 F8 90 */	fmr f1, f31
/* 80173660 00170740  7F A3 EB 78 */	mr r3, r29
/* 80173664 00170744  48 00 34 9D */	bl update_slime__12zNPCDutchmanFf
/* 80173668 00170748  7F A3 EB 78 */	mr r3, r29
/* 8017366C 0017074C  48 00 3F 6D */	bl check_player_damage__12zNPCDutchmanFv
/* 80173670 00170750  54 60 06 3F */	clrlwi. r0, r3, 24
/* 80173674 00170754  41 82 00 10 */	beq .L_80173684
/* 80173678 00170758  7F A3 EB 78 */	mr r3, r29
/* 8017367C 0017075C  38 80 00 01 */	li r4, 0x1
/* 80173680 00170760  4B F0 2D B1 */	bl zEntPlayer_Damage__FP5xBaseUi
.L_80173684:
/* 80173684 00170764  FC 20 F8 90 */	fmr f1, f31
/* 80173688 00170768  7F A3 EB 78 */	mr r3, r29
/* 8017368C 0017076C  48 00 26 0D */	bl update_camera__12zNPCDutchmanFf
/* 80173690 00170770  7F A3 EB 78 */	mr r3, r29
/* 80173694 00170774  48 00 32 59 */	bl refresh_reticle__12zNPCDutchmanFv
/* 80173698 00170778  80 1D 02 34 */	lwz r0, 0x234(r29)
/* 8017369C 0017077C  FC 20 F8 90 */	fmr f1, f31
/* 801736A0 00170780  7F A3 EB 78 */	mr r3, r29
/* 801736A4 00170784  7F C4 F3 78 */	mr r4, r30
/* 801736A8 00170788  60 00 00 01 */	ori r0, r0, 0x1
/* 801736AC 0017078C  90 1D 02 34 */	stw r0, 0x234(r29)
/* 801736B0 00170790  4B F7 CA 41 */	bl Process__10zNPCCommonFP6xScenef
.L_801736B4:
/* 801736B4 00170794  E3 E1 00 28 */	psq_l f31, 0x28(r1), 0, qr0
/* 801736B8 00170798  80 01 00 34 */	lwz r0, 0x34(r1)
/* 801736BC 0017079C  CB E1 00 20 */	lfd f31, 0x20(r1)
/* 801736C0 001707A0  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 801736C4 001707A4  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 801736C8 001707A8  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 801736CC 001707AC  7C 08 03 A6 */	mtlr r0
/* 801736D0 001707B0  38 21 00 30 */	addi r1, r1, 0x30
/* 801736D4 001707B4  4E 80 00 20 */	blr
.endfn Process__12zNPCDutchmanFP6xScenef

# zNPCDutchman::SysEvent(xBase*, xBase*, unsigned int, const float*, xBase*, int*)
.fn SysEvent__12zNPCDutchmanFP5xBaseP5xBaseUiPCfP5xBasePi, global
/* 801736D8 001707B8  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801736DC 001707BC  7C 08 02 A6 */	mflr r0
/* 801736E0 001707C0  2C 06 01 D9 */	cmpwi r6, 0x1d9
/* 801736E4 001707C4  90 01 00 14 */	stw r0, 0x14(r1)
/* 801736E8 001707C8  41 82 00 1C */	beq .L_80173704
/* 801736EC 001707CC  40 80 00 30 */	bge .L_8017371C
/* 801736F0 001707D0  2C 06 01 B5 */	cmpwi r6, 0x1b5
/* 801736F4 001707D4  41 82 00 08 */	beq .L_801736FC
/* 801736F8 001707D8  48 00 00 24 */	b .L_8017371C
.L_801736FC:
/* 801736FC 001707DC  48 00 3C D1 */	bl start_fight__12zNPCDutchmanFv
/* 80173700 001707E0  48 00 00 2C */	b .L_8017372C
.L_80173704:
/* 80173704 001707E4  3C 80 4E 47 */	lis r4, 0x4e47
/* 80173708 001707E8  80 63 02 28 */	lwz r3, 0x228(r3)
/* 8017370C 001707EC  38 84 4D 48 */	addi r4, r4, 0x4d48
/* 80173710 001707F0  38 A0 00 01 */	li r5, 0x1
/* 80173714 001707F4  4B F9 A0 1D */	bl GoalSet__7xPsycheFii
/* 80173718 001707F8  48 00 00 14 */	b .L_8017372C
.L_8017371C:
/* 8017371C 001707FC  38 00 00 00 */	li r0, 0x0
/* 80173720 00170800  90 09 00 00 */	stw r0, 0x0(r9)
/* 80173724 00170804  4B F7 CC AD */	bl SysEvent__10zNPCCommonFP5xBaseP5xBaseUiPCfP5xBasePi
/* 80173728 00170808  48 00 00 08 */	b .L_80173730
.L_8017372C:
/* 8017372C 0017080C  38 60 00 01 */	li r3, 0x1
.L_80173730:
/* 80173730 00170810  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80173734 00170814  7C 08 03 A6 */	mtlr r0
/* 80173738 00170818  38 21 00 10 */	addi r1, r1, 0x10
/* 8017373C 0017081C  4E 80 00 20 */	blr
.endfn SysEvent__12zNPCDutchmanFP5xBaseP5xBaseUiPCfP5xBasePi

# zNPCDutchman::Render()
.fn Render__12zNPCDutchmanFv, global
/* 80173740 00170820  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80173744 00170824  7C 08 02 A6 */	mflr r0
/* 80173748 00170828  90 01 00 14 */	stw r0, 0x14(r1)
/* 8017374C 0017082C  48 00 80 ED */	bl render_debug__12zNPCDutchmanFv
/* 80173750 00170830  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80173754 00170834  7C 08 03 A6 */	mtlr r0
/* 80173758 00170838  38 21 00 10 */	addi r1, r1, 0x10
/* 8017375C 0017083C  4E 80 00 20 */	blr
.endfn Render__12zNPCDutchmanFv

# zNPCDutchman::RenderExtra()
.fn RenderExtra__12zNPCDutchmanFv, global
/* 80173760 00170840  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 80173764 00170844  7C 08 02 A6 */	mflr r0
/* 80173768 00170848  90 01 00 24 */	stw r0, 0x24(r1)
/* 8017376C 0017084C  38 81 00 14 */	addi r4, r1, 0x14
/* 80173770 00170850  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 80173774 00170854  93 C1 00 18 */	stw r30, 0x18(r1)
/* 80173778 00170858  7C 7E 1B 78 */	mr r30, r3
/* 8017377C 0017085C  38 60 00 08 */	li r3, 0x8
/* 80173780 00170860  48 0B C0 BD */	bl RwRenderStateGet
/* 80173784 00170864  38 81 00 10 */	addi r4, r1, 0x10
/* 80173788 00170868  38 60 00 06 */	li r3, 0x6
/* 8017378C 0017086C  48 0B C0 B1 */	bl RwRenderStateGet
/* 80173790 00170870  38 81 00 0C */	addi r4, r1, 0xc
/* 80173794 00170874  38 60 00 0A */	li r3, 0xa
/* 80173798 00170878  48 0B C0 A5 */	bl RwRenderStateGet
/* 8017379C 0017087C  38 81 00 08 */	addi r4, r1, 0x8
/* 801737A0 00170880  38 60 00 0B */	li r3, 0xb
/* 801737A4 00170884  48 0B C0 99 */	bl RwRenderStateGet
/* 801737A8 00170888  38 60 00 08 */	li r3, 0x8
/* 801737AC 0017088C  38 80 00 01 */	li r4, 0x1
/* 801737B0 00170890  48 0B C0 2D */	bl RwRenderStateSet
/* 801737B4 00170894  38 60 00 06 */	li r3, 0x6
/* 801737B8 00170898  38 80 00 01 */	li r4, 0x1
/* 801737BC 0017089C  48 0B C0 21 */	bl RwRenderStateSet
/* 801737C0 001708A0  38 60 00 0A */	li r3, 0xa
/* 801737C4 001708A4  38 80 00 05 */	li r4, 0x5
/* 801737C8 001708A8  48 0B C0 15 */	bl RwRenderStateSet
/* 801737CC 001708AC  38 60 00 0B */	li r3, 0xb
/* 801737D0 001708B0  38 80 00 02 */	li r4, 0x2
/* 801737D4 001708B4  48 0B C0 09 */	bl RwRenderStateSet
/* 801737D8 001708B8  38 60 FF FF */	li r3, -0x1
/* 801737DC 001708BC  4B F4 F6 61 */	bl iDrawSetFBMSK__FUi
/* 801737E0 001708C0  83 FE 00 24 */	lwz r31, 0x24(r30)
/* 801737E4 001708C4  48 00 00 10 */	b .L_801737F4
.L_801737E8:
/* 801737E8 001708C8  7F E3 FB 78 */	mr r3, r31
/* 801737EC 001708CC  4B EC 0F 05 */	bl xModelRenderSingle__FP14xModelInstance
/* 801737F0 001708D0  83 FF 00 00 */	lwz r31, 0x0(r31)
.L_801737F4:
/* 801737F4 001708D4  28 1F 00 00 */	cmplwi r31, 0x0
/* 801737F8 001708D8  40 82 FF F0 */	bne .L_801737E8
/* 801737FC 001708DC  38 60 00 00 */	li r3, 0x0
/* 80173800 001708E0  4B F4 F6 3D */	bl iDrawSetFBMSK__FUi
/* 80173804 001708E4  83 FE 00 24 */	lwz r31, 0x24(r30)
/* 80173808 001708E8  48 00 00 10 */	b .L_80173818
.L_8017380C:
/* 8017380C 001708EC  7F E3 FB 78 */	mr r3, r31
/* 80173810 001708F0  4B EC 0E E1 */	bl xModelRenderSingle__FP14xModelInstance
/* 80173814 001708F4  83 FF 00 00 */	lwz r31, 0x0(r31)
.L_80173818:
/* 80173818 001708F8  28 1F 00 00 */	cmplwi r31, 0x0
/* 8017381C 001708FC  40 82 FF F0 */	bne .L_8017380C
/* 80173820 00170900  38 60 00 08 */	li r3, 0x8
/* 80173824 00170904  38 80 00 00 */	li r4, 0x0
/* 80173828 00170908  48 0B BF B5 */	bl RwRenderStateSet
/* 8017382C 0017090C  88 1E 02 B6 */	lbz r0, 0x2b6(r30)
/* 80173830 00170910  38 A0 00 00 */	li r5, 0x0
/* 80173834 00170914  28 00 00 00 */	cmplwi r0, 0x0
/* 80173838 00170918  41 82 00 18 */	beq .L_80173850
/* 8017383C 0017091C  80 7E 04 30 */	lwz r3, 0x430(r30)
/* 80173840 00170920  80 1E 05 4C */	lwz r0, 0x54c(r30)
/* 80173844 00170924  7C 03 02 15 */	add. r0, r3, r0
/* 80173848 00170928  41 82 00 08 */	beq .L_80173850
/* 8017384C 0017092C  38 A0 00 01 */	li r5, 0x1
.L_80173850:
/* 80173850 00170930  80 9E 02 C0 */	lwz r4, 0x2c0(r30)
/* 80173854 00170934  54 A0 06 3F */	clrlwi. r0, r5, 24
/* 80173858 00170938  20 64 00 02 */	subfic r3, r4, 0x2
/* 8017385C 0017093C  38 04 FF FE */	addi r0, r4, -0x2
/* 80173860 00170940  7C 60 03 78 */	or r0, r3, r0
/* 80173864 00170944  54 1F 0F FE */	srwi r31, r0, 31
/* 80173868 00170948  41 82 00 0C */	beq .L_80173874
/* 8017386C 0017094C  7F C3 F3 78 */	mr r3, r30
/* 80173870 00170950  48 00 4A 61 */	bl render_beam__12zNPCDutchmanFv
.L_80173874:
/* 80173874 00170954  28 1F 00 00 */	cmplwi r31, 0x0
/* 80173878 00170958  41 82 00 0C */	beq .L_80173884
/* 8017387C 0017095C  7F C3 F3 78 */	mr r3, r30
/* 80173880 00170960  48 00 4A F9 */	bl render_halo__12zNPCDutchmanFv
.L_80173884:
/* 80173884 00170964  80 81 00 14 */	lwz r4, 0x14(r1)
/* 80173888 00170968  38 60 00 08 */	li r3, 0x8
/* 8017388C 0017096C  48 0B BF 51 */	bl RwRenderStateSet
/* 80173890 00170970  80 81 00 10 */	lwz r4, 0x10(r1)
/* 80173894 00170974  38 60 00 06 */	li r3, 0x6
/* 80173898 00170978  48 0B BF 45 */	bl RwRenderStateSet
/* 8017389C 0017097C  80 81 00 0C */	lwz r4, 0xc(r1)
/* 801738A0 00170980  38 60 00 0A */	li r3, 0xa
/* 801738A4 00170984  48 0B BF 39 */	bl RwRenderStateSet
/* 801738A8 00170988  80 81 00 08 */	lwz r4, 0x8(r1)
/* 801738AC 0017098C  38 60 00 0B */	li r3, 0xb
/* 801738B0 00170990  48 0B BF 2D */	bl RwRenderStateSet
/* 801738B4 00170994  80 01 00 24 */	lwz r0, 0x24(r1)
/* 801738B8 00170998  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 801738BC 0017099C  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 801738C0 001709A0  7C 08 03 A6 */	mtlr r0
/* 801738C4 001709A4  38 21 00 20 */	addi r1, r1, 0x20
/* 801738C8 001709A8  4E 80 00 20 */	blr
.endfn RenderExtra__12zNPCDutchmanFv

# zNPCDutchman::ParseINI()
.fn ParseINI__12zNPCDutchmanFv, global
/* 801738CC 001709AC  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801738D0 001709B0  7C 08 02 A6 */	mflr r0
/* 801738D4 001709B4  90 01 00 14 */	stw r0, 0x14(r1)
/* 801738D8 001709B8  93 E1 00 0C */	stw r31, 0xc(r1)
/* 801738DC 001709BC  7C 7F 1B 78 */	mr r31, r3
/* 801738E0 001709C0  4B F7 DB 51 */	bl ParseINI__10zNPCCommonFv
/* 801738E4 001709C4  3C 60 80 2A */	lis r3, g_sndTrax_Dutchman@ha
/* 801738E8 001709C8  80 9F 01 D8 */	lwz r4, 0x1d8(r31)
/* 801738EC 001709CC  38 63 8A 64 */	addi r3, r3, g_sndTrax_Dutchman@l
/* 801738F0 001709D0  90 64 03 A0 */	stw r3, 0x3a0(r4)
/* 801738F4 001709D4  4B FB 14 51 */	bl NPCS_SndTablePrepare__FP10NPCSndTrax
/* 801738F8 001709D8  3C 60 80 2A */	lis r3, g_sndTrax_Dutchman@ha
/* 801738FC 001709DC  80 9F 01 D8 */	lwz r4, 0x1d8(r31)
/* 80173900 001709E0  38 63 8A 64 */	addi r3, r3, g_sndTrax_Dutchman@l
/* 80173904 001709E4  90 64 03 9C */	stw r3, 0x39c(r4)
/* 80173908 001709E8  4B FB 14 3D */	bl NPCS_SndTablePrepare__FP10NPCSndTrax
/* 8017390C 001709EC  3C 60 80 33 */	lis r3, "tweak__30@unnamed@zNPCTypeDutchman_cpp@"@ha
/* 80173910 001709F0  80 9F 02 44 */	lwz r4, 0x244(r31)
/* 80173914 001709F4  80 BF 02 48 */	lwz r5, 0x248(r31)
/* 80173918 001709F8  38 63 A5 78 */	addi r3, r3, "tweak__30@unnamed@zNPCTypeDutchman_cpp@"@l
/* 8017391C 001709FC  48 00 00 19 */	bl "load__Q230@unnamed@zNPCTypeDutchman_cpp@11tweak_groupFP16xModelAssetParamUi"
/* 80173920 00170A00  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80173924 00170A04  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80173928 00170A08  7C 08 03 A6 */	mtlr r0
/* 8017392C 00170A0C  38 21 00 10 */	addi r1, r1, 0x10
/* 80173930 00170A10  4E 80 00 20 */	blr
.endfn ParseINI__12zNPCDutchmanFv

# @unnamed@zNPCTypeDutchman_cpp@::tweak_group::load(xModelAssetParam*, unsigned int)
.fn "load__Q230@unnamed@zNPCTypeDutchman_cpp@11tweak_groupFP16xModelAssetParamUi", local
/* 80173934 00170A14  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80173938 00170A18  7C 08 02 A6 */	mflr r0
/* 8017393C 00170A1C  7C A6 2B 78 */	mr r6, r5
/* 80173940 00170A20  7C 85 23 78 */	mr r5, r4
/* 80173944 00170A24  90 01 00 14 */	stw r0, 0x14(r1)
/* 80173948 00170A28  38 80 00 01 */	li r4, 0x1
/* 8017394C 00170A2C  38 E0 00 00 */	li r7, 0x0
/* 80173950 00170A30  48 00 00 15 */	bl "register_tweaks__Q230@unnamed@zNPCTypeDutchman_cpp@11tweak_groupFbP16xModelAssetParamUiPCc"
/* 80173954 00170A34  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80173958 00170A38  7C 08 03 A6 */	mtlr r0
/* 8017395C 00170A3C  38 21 00 10 */	addi r1, r1, 0x10
/* 80173960 00170A40  4E 80 00 20 */	blr
.endfn "load__Q230@unnamed@zNPCTypeDutchman_cpp@11tweak_groupFP16xModelAssetParamUi"

# @unnamed@zNPCTypeDutchman_cpp@::tweak_group::register_tweaks(bool, xModelAssetParam*, unsigned int, const char*)
.fn "register_tweaks__Q230@unnamed@zNPCTypeDutchman_cpp@11tweak_groupFbP16xModelAssetParamUiPCc", local
/* 80173964 00170A44  94 21 FF A0 */	stwu r1, -0x60(r1)
/* 80173968 00170A48  7C 08 02 A6 */	mflr r0
/* 8017396C 00170A4C  90 01 00 64 */	stw r0, 0x64(r1)
/* 80173970 00170A50  54 80 06 3F */	clrlwi. r0, r4, 24
/* 80173974 00170A54  93 E1 00 5C */	stw r31, 0x5c(r1)
/* 80173978 00170A58  7C DF 33 78 */	mr r31, r6
/* 8017397C 00170A5C  93 C1 00 58 */	stw r30, 0x58(r1)
/* 80173980 00170A60  7C BE 2B 78 */	mr r30, r5
/* 80173984 00170A64  93 A1 00 54 */	stw r29, 0x54(r1)
/* 80173988 00170A68  7C 9D 23 78 */	mr r29, r4
/* 8017398C 00170A6C  93 81 00 50 */	stw r28, 0x50(r1)
/* 80173990 00170A70  7C 7C 1B 78 */	mr r28, r3
/* 80173994 00170A74  41 82 00 30 */	beq .L_801739C4
/* 80173998 00170A78  C0 02 AC E8 */	lfs f0, "@1976"@sda21(r2)
/* 8017399C 00170A7C  3C 80 80 27 */	lis r4, "@stringBase0"@ha
/* 801739A0 00170A80  38 C4 20 F0 */	addi r6, r4, "@stringBase0"@l
/* 801739A4 00170A84  7F C4 F3 78 */	mr r4, r30
/* 801739A8 00170A88  D0 1C 00 00 */	stfs f0, 0x0(r28)
/* 801739AC 00170A8C  7F E5 FB 78 */	mr r5, r31
/* 801739B0 00170A90  38 C6 02 40 */	addi r6, r6, 0x240
/* 801739B4 00170A94  C0 22 AC BC */	lfs f1, "@1606"@sda21(r2)
/* 801739B8 00170A98  C0 42 AC EC */	lfs f2, "@1977"@sda21(r2)
/* 801739BC 00170A9C  C0 62 AC F0 */	lfs f3, "@1978"@sda21(r2)
/* 801739C0 00170AA0  48 00 85 AD */	bl "load_param<f,f>__10auto_tweakFRffffP16xModelAssetParamUiPCc"
.L_801739C4:
/* 801739C4 00170AA4  57 A0 06 3F */	clrlwi. r0, r29, 24
/* 801739C8 00170AA8  41 82 00 4C */	beq .L_80173A14
/* 801739CC 00170AAC  C0 22 AC BC */	lfs f1, "@1606"@sda21(r2)
/* 801739D0 00170AB0  38 61 00 44 */	addi r3, r1, 0x44
/* 801739D4 00170AB4  C0 42 AC C4 */	lfs f2, "@1633"@sda21(r2)
/* 801739D8 00170AB8  C0 62 AC F4 */	lfs f3, "@1979"@sda21(r2)
/* 801739DC 00170ABC  4B EE C5 AD */	bl create__5xVec3Ffff
/* 801739E0 00170AC0  38 7C 00 04 */	addi r3, r28, 0x4
/* 801739E4 00170AC4  38 81 00 44 */	addi r4, r1, 0x44
/* 801739E8 00170AC8  4B E9 78 7D */	bl __as__5xVec3FRC5xVec3
/* 801739EC 00170ACC  3C 60 80 27 */	lis r3, "@stringBase0"@ha
/* 801739F0 00170AD0  7F C7 F3 78 */	mr r7, r30
/* 801739F4 00170AD4  38 A3 20 F0 */	addi r5, r3, "@stringBase0"@l
/* 801739F8 00170AD8  7F E8 FB 78 */	mr r8, r31
/* 801739FC 00170ADC  38 7C 00 04 */	addi r3, r28, 0x4
/* 80173A00 00170AE0  38 80 00 00 */	li r4, 0x0
/* 80173A04 00170AE4  39 25 02 4D */	addi r9, r5, 0x24d
/* 80173A08 00170AE8  38 A0 00 00 */	li r5, 0x0
/* 80173A0C 00170AEC  38 C0 00 00 */	li r6, 0x0
/* 80173A10 00170AF0  48 00 85 0D */	bl "load_param<5xVec3,i>__10auto_tweakFR5xVec3iiiP16xModelAssetParamUiPCc"
.L_80173A14:
/* 80173A14 00170AF4  57 A0 06 3F */	clrlwi. r0, r29, 24
/* 80173A18 00170AF8  41 82 00 4C */	beq .L_80173A64
/* 80173A1C 00170AFC  C0 22 AC BC */	lfs f1, "@1606"@sda21(r2)
/* 80173A20 00170B00  38 61 00 38 */	addi r3, r1, 0x38
/* 80173A24 00170B04  C0 42 AC C4 */	lfs f2, "@1633"@sda21(r2)
/* 80173A28 00170B08  C0 62 AC F4 */	lfs f3, "@1979"@sda21(r2)
/* 80173A2C 00170B0C  4B EE C5 5D */	bl create__5xVec3Ffff
/* 80173A30 00170B10  38 7C 00 10 */	addi r3, r28, 0x10
/* 80173A34 00170B14  38 81 00 38 */	addi r4, r1, 0x38
/* 80173A38 00170B18  4B E9 78 2D */	bl __as__5xVec3FRC5xVec3
/* 80173A3C 00170B1C  3C 60 80 27 */	lis r3, "@stringBase0"@ha
/* 80173A40 00170B20  7F C7 F3 78 */	mr r7, r30
/* 80173A44 00170B24  38 A3 20 F0 */	addi r5, r3, "@stringBase0"@l
/* 80173A48 00170B28  7F E8 FB 78 */	mr r8, r31
/* 80173A4C 00170B2C  38 7C 00 10 */	addi r3, r28, 0x10
/* 80173A50 00170B30  38 80 00 00 */	li r4, 0x0
/* 80173A54 00170B34  39 25 02 53 */	addi r9, r5, 0x253
/* 80173A58 00170B38  38 A0 00 00 */	li r5, 0x0
/* 80173A5C 00170B3C  38 C0 00 00 */	li r6, 0x0
/* 80173A60 00170B40  48 00 84 BD */	bl "load_param<5xVec3,i>__10auto_tweakFR5xVec3iiiP16xModelAssetParamUiPCc"
.L_80173A64:
/* 80173A64 00170B44  57 A0 06 3F */	clrlwi. r0, r29, 24
/* 80173A68 00170B48  41 82 00 34 */	beq .L_80173A9C
/* 80173A6C 00170B4C  C0 02 AC F8 */	lfs f0, "@1980"@sda21(r2)
/* 80173A70 00170B50  3C 60 80 27 */	lis r3, "@stringBase0"@ha
/* 80173A74 00170B54  38 C3 20 F0 */	addi r6, r3, "@stringBase0"@l
/* 80173A78 00170B58  7F C4 F3 78 */	mr r4, r30
/* 80173A7C 00170B5C  D0 1C 00 1C */	stfs f0, 0x1c(r28)
/* 80173A80 00170B60  7F E5 FB 78 */	mr r5, r31
/* 80173A84 00170B64  38 7C 00 1C */	addi r3, r28, 0x1c
/* 80173A88 00170B68  38 C6 02 5B */	addi r6, r6, 0x25b
/* 80173A8C 00170B6C  C0 22 AC FC */	lfs f1, "@1981"@sda21(r2)
/* 80173A90 00170B70  C0 42 AC EC */	lfs f2, "@1977"@sda21(r2)
/* 80173A94 00170B74  C0 62 AD 00 */	lfs f3, "@1982"@sda21(r2)
/* 80173A98 00170B78  48 00 84 D5 */	bl "load_param<f,f>__10auto_tweakFRffffP16xModelAssetParamUiPCc"
.L_80173A9C:
/* 80173A9C 00170B7C  57 A0 06 3F */	clrlwi. r0, r29, 24
/* 80173AA0 00170B80  41 82 00 34 */	beq .L_80173AD4
/* 80173AA4 00170B84  C0 02 AD 04 */	lfs f0, "@1983"@sda21(r2)
/* 80173AA8 00170B88  3C 60 80 27 */	lis r3, "@stringBase0"@ha
/* 80173AAC 00170B8C  38 C3 20 F0 */	addi r6, r3, "@stringBase0"@l
/* 80173AB0 00170B90  7F C4 F3 78 */	mr r4, r30
/* 80173AB4 00170B94  D0 1C 00 20 */	stfs f0, 0x20(r28)
/* 80173AB8 00170B98  7F E5 FB 78 */	mr r5, r31
/* 80173ABC 00170B9C  38 7C 00 20 */	addi r3, r28, 0x20
/* 80173AC0 00170BA0  38 C6 02 66 */	addi r6, r6, 0x266
/* 80173AC4 00170BA4  C0 22 AC FC */	lfs f1, "@1981"@sda21(r2)
/* 80173AC8 00170BA8  C0 42 AC EC */	lfs f2, "@1977"@sda21(r2)
/* 80173ACC 00170BAC  C0 62 AD 00 */	lfs f3, "@1982"@sda21(r2)
/* 80173AD0 00170BB0  48 00 84 9D */	bl "load_param<f,f>__10auto_tweakFRffffP16xModelAssetParamUiPCc"
.L_80173AD4:
/* 80173AD4 00170BB4  57 A0 06 3F */	clrlwi. r0, r29, 24
/* 80173AD8 00170BB8  41 82 00 34 */	beq .L_80173B0C
/* 80173ADC 00170BBC  C0 02 AD 08 */	lfs f0, "@1984"@sda21(r2)
/* 80173AE0 00170BC0  3C 60 80 27 */	lis r3, "@stringBase0"@ha
/* 80173AE4 00170BC4  38 C3 20 F0 */	addi r6, r3, "@stringBase0"@l
/* 80173AE8 00170BC8  7F C4 F3 78 */	mr r4, r30
/* 80173AEC 00170BCC  D0 1C 00 24 */	stfs f0, 0x24(r28)
/* 80173AF0 00170BD0  7F E5 FB 78 */	mr r5, r31
/* 80173AF4 00170BD4  38 7C 00 24 */	addi r3, r28, 0x24
/* 80173AF8 00170BD8  38 C6 02 73 */	addi r6, r6, 0x273
/* 80173AFC 00170BDC  C0 22 AC BC */	lfs f1, "@1606"@sda21(r2)
/* 80173B00 00170BE0  C0 42 AD 0C */	lfs f2, "@1985"@sda21(r2)
/* 80173B04 00170BE4  C0 62 AD 00 */	lfs f3, "@1982"@sda21(r2)
/* 80173B08 00170BE8  48 00 84 65 */	bl "load_param<f,f>__10auto_tweakFRffffP16xModelAssetParamUiPCc"
.L_80173B0C:
/* 80173B0C 00170BEC  57 A0 06 3F */	clrlwi. r0, r29, 24
/* 80173B10 00170BF0  41 82 00 34 */	beq .L_80173B44
/* 80173B14 00170BF4  C0 02 AD 10 */	lfs f0, "@1986"@sda21(r2)
/* 80173B18 00170BF8  3C 60 80 27 */	lis r3, "@stringBase0"@ha
/* 80173B1C 00170BFC  38 C3 20 F0 */	addi r6, r3, "@stringBase0"@l
/* 80173B20 00170C00  7F C4 F3 78 */	mr r4, r30
/* 80173B24 00170C04  D0 1C 00 28 */	stfs f0, 0x28(r28)
/* 80173B28 00170C08  7F E5 FB 78 */	mr r5, r31
/* 80173B2C 00170C0C  38 7C 00 28 */	addi r3, r28, 0x28
/* 80173B30 00170C10  38 C6 02 7C */	addi r6, r6, 0x27c
/* 80173B34 00170C14  C0 22 AC BC */	lfs f1, "@1606"@sda21(r2)
/* 80173B38 00170C18  C0 42 AC B8 */	lfs f2, "@1605"@sda21(r2)
/* 80173B3C 00170C1C  C0 62 AD 00 */	lfs f3, "@1982"@sda21(r2)
/* 80173B40 00170C20  48 00 84 2D */	bl "load_param<f,f>__10auto_tweakFRffffP16xModelAssetParamUiPCc"
.L_80173B44:
/* 80173B44 00170C24  57 A0 06 3F */	clrlwi. r0, r29, 24
/* 80173B48 00170C28  41 82 00 34 */	beq .L_80173B7C
/* 80173B4C 00170C2C  C0 02 AC BC */	lfs f0, "@1606"@sda21(r2)
/* 80173B50 00170C30  3C 60 80 27 */	lis r3, "@stringBase0"@ha
/* 80173B54 00170C34  38 C3 20 F0 */	addi r6, r3, "@stringBase0"@l
/* 80173B58 00170C38  7F C4 F3 78 */	mr r4, r30
/* 80173B5C 00170C3C  D0 1C 00 2C */	stfs f0, 0x2c(r28)
/* 80173B60 00170C40  7F E5 FB 78 */	mr r5, r31
/* 80173B64 00170C44  38 7C 00 2C */	addi r3, r28, 0x2c
/* 80173B68 00170C48  38 C6 02 8A */	addi r6, r6, 0x28a
/* 80173B6C 00170C4C  C0 22 AC BC */	lfs f1, "@1606"@sda21(r2)
/* 80173B70 00170C50  C0 42 AC B8 */	lfs f2, "@1605"@sda21(r2)
/* 80173B74 00170C54  FC 60 08 90 */	fmr f3, f1
/* 80173B78 00170C58  48 00 83 F5 */	bl "load_param<f,f>__10auto_tweakFRffffP16xModelAssetParamUiPCc"
.L_80173B7C:
/* 80173B7C 00170C5C  57 A0 06 3F */	clrlwi. r0, r29, 24
/* 80173B80 00170C60  41 82 00 34 */	beq .L_80173BB4
/* 80173B84 00170C64  C0 02 AC BC */	lfs f0, "@1606"@sda21(r2)
/* 80173B88 00170C68  3C 60 80 27 */	lis r3, "@stringBase0"@ha
/* 80173B8C 00170C6C  38 C3 20 F0 */	addi r6, r3, "@stringBase0"@l
/* 80173B90 00170C70  7F C4 F3 78 */	mr r4, r30
/* 80173B94 00170C74  D0 1C 00 30 */	stfs f0, 0x30(r28)
/* 80173B98 00170C78  7F E5 FB 78 */	mr r5, r31
/* 80173B9C 00170C7C  38 7C 00 30 */	addi r3, r28, 0x30
/* 80173BA0 00170C80  38 C6 02 90 */	addi r6, r6, 0x290
/* 80173BA4 00170C84  C0 22 AC BC */	lfs f1, "@1606"@sda21(r2)
/* 80173BA8 00170C88  C0 42 AC EC */	lfs f2, "@1977"@sda21(r2)
/* 80173BAC 00170C8C  C0 62 AD 14 */	lfs f3, "@1987"@sda21(r2)
/* 80173BB0 00170C90  48 00 83 BD */	bl "load_param<f,f>__10auto_tweakFRffffP16xModelAssetParamUiPCc"
.L_80173BB4:
/* 80173BB4 00170C94  57 A0 06 3F */	clrlwi. r0, r29, 24
/* 80173BB8 00170C98  41 82 00 34 */	beq .L_80173BEC
/* 80173BBC 00170C9C  C0 02 AD 18 */	lfs f0, "@1988"@sda21(r2)
/* 80173BC0 00170CA0  3C 60 80 27 */	lis r3, "@stringBase0"@ha
/* 80173BC4 00170CA4  38 C3 20 F0 */	addi r6, r3, "@stringBase0"@l
/* 80173BC8 00170CA8  7F C4 F3 78 */	mr r4, r30
/* 80173BCC 00170CAC  D0 1C 00 34 */	stfs f0, 0x34(r28)
/* 80173BD0 00170CB0  7F E5 FB 78 */	mr r5, r31
/* 80173BD4 00170CB4  38 7C 00 34 */	addi r3, r28, 0x34
/* 80173BD8 00170CB8  38 C6 02 9E */	addi r6, r6, 0x29e
/* 80173BDC 00170CBC  C0 22 AC BC */	lfs f1, "@1606"@sda21(r2)
/* 80173BE0 00170CC0  C0 42 AC EC */	lfs f2, "@1977"@sda21(r2)
/* 80173BE4 00170CC4  C0 62 AD 14 */	lfs f3, "@1987"@sda21(r2)
/* 80173BE8 00170CC8  48 00 83 85 */	bl "load_param<f,f>__10auto_tweakFRffffP16xModelAssetParamUiPCc"
.L_80173BEC:
/* 80173BEC 00170CCC  57 A0 06 3F */	clrlwi. r0, r29, 24
/* 80173BF0 00170CD0  41 82 00 34 */	beq .L_80173C24
/* 80173BF4 00170CD4  C0 02 AD 1C */	lfs f0, "@1989"@sda21(r2)
/* 80173BF8 00170CD8  3C 60 80 27 */	lis r3, "@stringBase0"@ha
/* 80173BFC 00170CDC  38 C3 20 F0 */	addi r6, r3, "@stringBase0"@l
/* 80173C00 00170CE0  7F C4 F3 78 */	mr r4, r30
/* 80173C04 00170CE4  D0 1C 00 38 */	stfs f0, 0x38(r28)
/* 80173C08 00170CE8  7F E5 FB 78 */	mr r5, r31
/* 80173C0C 00170CEC  38 7C 00 38 */	addi r3, r28, 0x38
/* 80173C10 00170CF0  38 C6 02 AC */	addi r6, r6, 0x2ac
/* 80173C14 00170CF4  C0 22 AC BC */	lfs f1, "@1606"@sda21(r2)
/* 80173C18 00170CF8  C0 42 AC EC */	lfs f2, "@1977"@sda21(r2)
/* 80173C1C 00170CFC  C0 62 AD 14 */	lfs f3, "@1987"@sda21(r2)
/* 80173C20 00170D00  48 00 83 4D */	bl "load_param<f,f>__10auto_tweakFRffffP16xModelAssetParamUiPCc"
.L_80173C24:
/* 80173C24 00170D04  57 A0 06 3F */	clrlwi. r0, r29, 24
/* 80173C28 00170D08  41 82 00 34 */	beq .L_80173C5C
/* 80173C2C 00170D0C  C0 02 AC B8 */	lfs f0, "@1605"@sda21(r2)
/* 80173C30 00170D10  3C 60 80 27 */	lis r3, "@stringBase0"@ha
/* 80173C34 00170D14  38 C3 20 F0 */	addi r6, r3, "@stringBase0"@l
/* 80173C38 00170D18  7F C4 F3 78 */	mr r4, r30
/* 80173C3C 00170D1C  D0 1C 00 3C */	stfs f0, 0x3c(r28)
/* 80173C40 00170D20  7F E5 FB 78 */	mr r5, r31
/* 80173C44 00170D24  38 7C 00 3C */	addi r3, r28, 0x3c
/* 80173C48 00170D28  38 C6 02 BA */	addi r6, r6, 0x2ba
/* 80173C4C 00170D2C  C0 22 AC BC */	lfs f1, "@1606"@sda21(r2)
/* 80173C50 00170D30  C0 42 AD 20 */	lfs f2, "@1990"@sda21(r2)
/* 80173C54 00170D34  C0 62 AD 24 */	lfs f3, "@1991"@sda21(r2)
/* 80173C58 00170D38  48 00 83 15 */	bl "load_param<f,f>__10auto_tweakFRffffP16xModelAssetParamUiPCc"
.L_80173C5C:
/* 80173C5C 00170D3C  57 A0 06 3F */	clrlwi. r0, r29, 24
/* 80173C60 00170D40  41 82 00 34 */	beq .L_80173C94
/* 80173C64 00170D44  C0 02 AC BC */	lfs f0, "@1606"@sda21(r2)
/* 80173C68 00170D48  3C 60 80 27 */	lis r3, "@stringBase0"@ha
/* 80173C6C 00170D4C  38 C3 20 F0 */	addi r6, r3, "@stringBase0"@l
/* 80173C70 00170D50  7F C4 F3 78 */	mr r4, r30
/* 80173C74 00170D54  D0 1C 00 40 */	stfs f0, 0x40(r28)
/* 80173C78 00170D58  7F E5 FB 78 */	mr r5, r31
/* 80173C7C 00170D5C  38 7C 00 40 */	addi r3, r28, 0x40
/* 80173C80 00170D60  38 C6 02 C4 */	addi r6, r6, 0x2c4
/* 80173C84 00170D64  C0 22 AC BC */	lfs f1, "@1606"@sda21(r2)
/* 80173C88 00170D68  C0 42 AD 20 */	lfs f2, "@1990"@sda21(r2)
/* 80173C8C 00170D6C  C0 62 AD 24 */	lfs f3, "@1991"@sda21(r2)
/* 80173C90 00170D70  48 00 82 DD */	bl "load_param<f,f>__10auto_tweakFRffffP16xModelAssetParamUiPCc"
.L_80173C94:
/* 80173C94 00170D74  57 A0 06 3F */	clrlwi. r0, r29, 24
/* 80173C98 00170D78  41 82 00 34 */	beq .L_80173CCC
/* 80173C9C 00170D7C  C0 02 AC B8 */	lfs f0, "@1605"@sda21(r2)
/* 80173CA0 00170D80  3C 60 80 27 */	lis r3, "@stringBase0"@ha
/* 80173CA4 00170D84  38 C3 20 F0 */	addi r6, r3, "@stringBase0"@l
/* 80173CA8 00170D88  7F C4 F3 78 */	mr r4, r30
/* 80173CAC 00170D8C  D0 1C 00 44 */	stfs f0, 0x44(r28)
/* 80173CB0 00170D90  7F E5 FB 78 */	mr r5, r31
/* 80173CB4 00170D94  38 7C 00 44 */	addi r3, r28, 0x44
/* 80173CB8 00170D98  38 C6 02 D3 */	addi r6, r6, 0x2d3
/* 80173CBC 00170D9C  C0 22 AC BC */	lfs f1, "@1606"@sda21(r2)
/* 80173CC0 00170DA0  C0 42 AC B8 */	lfs f2, "@1605"@sda21(r2)
/* 80173CC4 00170DA4  FC 60 08 90 */	fmr f3, f1
/* 80173CC8 00170DA8  48 00 82 A5 */	bl "load_param<f,f>__10auto_tweakFRffffP16xModelAssetParamUiPCc"
.L_80173CCC:
/* 80173CCC 00170DAC  57 A0 06 3F */	clrlwi. r0, r29, 24
/* 80173CD0 00170DB0  41 82 00 34 */	beq .L_80173D04
/* 80173CD4 00170DB4  C0 02 AC BC */	lfs f0, "@1606"@sda21(r2)
/* 80173CD8 00170DB8  3C 60 80 27 */	lis r3, "@stringBase0"@ha
/* 80173CDC 00170DBC  38 C3 20 F0 */	addi r6, r3, "@stringBase0"@l
/* 80173CE0 00170DC0  7F C4 F3 78 */	mr r4, r30
/* 80173CE4 00170DC4  D0 1C 00 48 */	stfs f0, 0x48(r28)
/* 80173CE8 00170DC8  7F E5 FB 78 */	mr r5, r31
/* 80173CEC 00170DCC  38 7C 00 48 */	addi r3, r28, 0x48
/* 80173CF0 00170DD0  38 C6 02 DE */	addi r6, r6, 0x2de
/* 80173CF4 00170DD4  C0 22 AC BC */	lfs f1, "@1606"@sda21(r2)
/* 80173CF8 00170DD8  C0 42 AC B8 */	lfs f2, "@1605"@sda21(r2)
/* 80173CFC 00170DDC  C0 62 AD 24 */	lfs f3, "@1991"@sda21(r2)
/* 80173D00 00170DE0  48 00 82 6D */	bl "load_param<f,f>__10auto_tweakFRffffP16xModelAssetParamUiPCc"
.L_80173D04:
/* 80173D04 00170DE4  57 A0 06 3F */	clrlwi. r0, r29, 24
/* 80173D08 00170DE8  41 82 00 34 */	beq .L_80173D3C
/* 80173D0C 00170DEC  C0 02 AC BC */	lfs f0, "@1606"@sda21(r2)
/* 80173D10 00170DF0  3C 60 80 27 */	lis r3, "@stringBase0"@ha
/* 80173D14 00170DF4  38 C3 20 F0 */	addi r6, r3, "@stringBase0"@l
/* 80173D18 00170DF8  7F C4 F3 78 */	mr r4, r30
/* 80173D1C 00170DFC  D0 1C 00 4C */	stfs f0, 0x4c(r28)
/* 80173D20 00170E00  7F E5 FB 78 */	mr r5, r31
/* 80173D24 00170E04  38 7C 00 4C */	addi r3, r28, 0x4c
/* 80173D28 00170E08  38 C6 02 E9 */	addi r6, r6, 0x2e9
/* 80173D2C 00170E0C  C0 22 AC BC */	lfs f1, "@1606"@sda21(r2)
/* 80173D30 00170E10  C0 42 AD 28 */	lfs f2, "@1992"@sda21(r2)
/* 80173D34 00170E14  C0 62 AD 14 */	lfs f3, "@1987"@sda21(r2)
/* 80173D38 00170E18  48 00 82 35 */	bl "load_param<f,f>__10auto_tweakFRffffP16xModelAssetParamUiPCc"
.L_80173D3C:
/* 80173D3C 00170E1C  57 A0 06 3F */	clrlwi. r0, r29, 24
/* 80173D40 00170E20  41 82 00 34 */	beq .L_80173D74
/* 80173D44 00170E24  C0 02 AC B8 */	lfs f0, "@1605"@sda21(r2)
/* 80173D48 00170E28  3C 60 80 27 */	lis r3, "@stringBase0"@ha
/* 80173D4C 00170E2C  38 C3 20 F0 */	addi r6, r3, "@stringBase0"@l
/* 80173D50 00170E30  7F C4 F3 78 */	mr r4, r30
/* 80173D54 00170E34  D0 1C 00 50 */	stfs f0, 0x50(r28)
/* 80173D58 00170E38  7F E5 FB 78 */	mr r5, r31
/* 80173D5C 00170E3C  38 7C 00 50 */	addi r3, r28, 0x50
/* 80173D60 00170E40  38 C6 02 F6 */	addi r6, r6, 0x2f6
/* 80173D64 00170E44  C0 22 AC BC */	lfs f1, "@1606"@sda21(r2)
/* 80173D68 00170E48  C0 42 AD 0C */	lfs f2, "@1985"@sda21(r2)
/* 80173D6C 00170E4C  C0 62 AD 00 */	lfs f3, "@1982"@sda21(r2)
/* 80173D70 00170E50  48 00 81 FD */	bl "load_param<f,f>__10auto_tweakFRffffP16xModelAssetParamUiPCc"
.L_80173D74:
/* 80173D74 00170E54  57 A0 06 3F */	clrlwi. r0, r29, 24
/* 80173D78 00170E58  41 82 00 34 */	beq .L_80173DAC
/* 80173D7C 00170E5C  C0 02 AC B8 */	lfs f0, "@1605"@sda21(r2)
/* 80173D80 00170E60  3C 60 80 27 */	lis r3, "@stringBase0"@ha
/* 80173D84 00170E64  38 C3 20 F0 */	addi r6, r3, "@stringBase0"@l
/* 80173D88 00170E68  7F C4 F3 78 */	mr r4, r30
/* 80173D8C 00170E6C  D0 1C 00 54 */	stfs f0, 0x54(r28)
/* 80173D90 00170E70  7F E5 FB 78 */	mr r5, r31
/* 80173D94 00170E74  38 7C 00 54 */	addi r3, r28, 0x54
/* 80173D98 00170E78  38 C6 03 01 */	addi r6, r6, 0x301
/* 80173D9C 00170E7C  C0 22 AC BC */	lfs f1, "@1606"@sda21(r2)
/* 80173DA0 00170E80  C0 42 AD 0C */	lfs f2, "@1985"@sda21(r2)
/* 80173DA4 00170E84  C0 62 AD 00 */	lfs f3, "@1982"@sda21(r2)
/* 80173DA8 00170E88  48 00 81 C5 */	bl "load_param<f,f>__10auto_tweakFRffffP16xModelAssetParamUiPCc"
.L_80173DAC:
/* 80173DAC 00170E8C  57 A0 06 3F */	clrlwi. r0, r29, 24
/* 80173DB0 00170E90  41 82 00 34 */	beq .L_80173DE4
/* 80173DB4 00170E94  C0 02 AD 2C */	lfs f0, "@1993"@sda21(r2)
/* 80173DB8 00170E98  3C 60 80 27 */	lis r3, "@stringBase0"@ha
/* 80173DBC 00170E9C  38 C3 20 F0 */	addi r6, r3, "@stringBase0"@l
/* 80173DC0 00170EA0  7F C4 F3 78 */	mr r4, r30
/* 80173DC4 00170EA4  D0 1C 00 58 */	stfs f0, 0x58(r28)
/* 80173DC8 00170EA8  7F E5 FB 78 */	mr r5, r31
/* 80173DCC 00170EAC  38 7C 00 58 */	addi r3, r28, 0x58
/* 80173DD0 00170EB0  38 C6 03 0C */	addi r6, r6, 0x30c
/* 80173DD4 00170EB4  C0 22 AC FC */	lfs f1, "@1981"@sda21(r2)
/* 80173DD8 00170EB8  C0 42 AD 0C */	lfs f2, "@1985"@sda21(r2)
/* 80173DDC 00170EBC  C0 62 AD 00 */	lfs f3, "@1982"@sda21(r2)
/* 80173DE0 00170EC0  48 00 81 8D */	bl "load_param<f,f>__10auto_tweakFRffffP16xModelAssetParamUiPCc"
.L_80173DE4:
/* 80173DE4 00170EC4  57 A0 06 3F */	clrlwi. r0, r29, 24
/* 80173DE8 00170EC8  41 82 00 34 */	beq .L_80173E1C
/* 80173DEC 00170ECC  C0 02 AD 04 */	lfs f0, "@1983"@sda21(r2)
/* 80173DF0 00170ED0  3C 60 80 27 */	lis r3, "@stringBase0"@ha
/* 80173DF4 00170ED4  38 C3 20 F0 */	addi r6, r3, "@stringBase0"@l
/* 80173DF8 00170ED8  7F C4 F3 78 */	mr r4, r30
/* 80173DFC 00170EDC  D0 1C 00 5C */	stfs f0, 0x5c(r28)
/* 80173E00 00170EE0  7F E5 FB 78 */	mr r5, r31
/* 80173E04 00170EE4  38 7C 00 5C */	addi r3, r28, 0x5c
/* 80173E08 00170EE8  38 C6 03 1E */	addi r6, r6, 0x31e
/* 80173E0C 00170EEC  C0 22 AC FC */	lfs f1, "@1981"@sda21(r2)
/* 80173E10 00170EF0  C0 42 AC EC */	lfs f2, "@1977"@sda21(r2)
/* 80173E14 00170EF4  C0 62 AD 00 */	lfs f3, "@1982"@sda21(r2)
/* 80173E18 00170EF8  48 00 81 55 */	bl "load_param<f,f>__10auto_tweakFRffffP16xModelAssetParamUiPCc"
.L_80173E1C:
/* 80173E1C 00170EFC  57 A0 06 3F */	clrlwi. r0, r29, 24
/* 80173E20 00170F00  41 82 00 34 */	beq .L_80173E54
/* 80173E24 00170F04  C0 02 AD 14 */	lfs f0, "@1987"@sda21(r2)
/* 80173E28 00170F08  3C 60 80 27 */	lis r3, "@stringBase0"@ha
/* 80173E2C 00170F0C  38 C3 20 F0 */	addi r6, r3, "@stringBase0"@l
/* 80173E30 00170F10  7F C4 F3 78 */	mr r4, r30
/* 80173E34 00170F14  D0 1C 00 60 */	stfs f0, 0x60(r28)
/* 80173E38 00170F18  7F E5 FB 78 */	mr r5, r31
/* 80173E3C 00170F1C  38 7C 00 60 */	addi r3, r28, 0x60
/* 80173E40 00170F20  38 C6 03 32 */	addi r6, r6, 0x332
/* 80173E44 00170F24  C0 22 AC BC */	lfs f1, "@1606"@sda21(r2)
/* 80173E48 00170F28  C0 42 AD 30 */	lfs f2, "@1994"@sda21(r2)
/* 80173E4C 00170F2C  C0 62 AC C8 */	lfs f3, "@1634"@sda21(r2)
/* 80173E50 00170F30  48 00 81 1D */	bl "load_param<f,f>__10auto_tweakFRffffP16xModelAssetParamUiPCc"
.L_80173E54:
/* 80173E54 00170F34  57 A0 06 3F */	clrlwi. r0, r29, 24
/* 80173E58 00170F38  41 82 00 34 */	beq .L_80173E8C
/* 80173E5C 00170F3C  C0 02 AC BC */	lfs f0, "@1606"@sda21(r2)
/* 80173E60 00170F40  3C 60 80 27 */	lis r3, "@stringBase0"@ha
/* 80173E64 00170F44  38 C3 20 F0 */	addi r6, r3, "@stringBase0"@l
/* 80173E68 00170F48  7F C4 F3 78 */	mr r4, r30
/* 80173E6C 00170F4C  D0 1C 00 80 */	stfs f0, 0x80(r28)
/* 80173E70 00170F50  7F E5 FB 78 */	mr r5, r31
/* 80173E74 00170F54  38 7C 00 80 */	addi r3, r28, 0x80
/* 80173E78 00170F58  38 C6 03 42 */	addi r6, r6, 0x342
/* 80173E7C 00170F5C  C0 22 AC BC */	lfs f1, "@1606"@sda21(r2)
/* 80173E80 00170F60  C0 42 AC B8 */	lfs f2, "@1605"@sda21(r2)
/* 80173E84 00170F64  C0 62 AC C8 */	lfs f3, "@1634"@sda21(r2)
/* 80173E88 00170F68  48 00 80 E5 */	bl "load_param<f,f>__10auto_tweakFRffffP16xModelAssetParamUiPCc"
.L_80173E8C:
/* 80173E8C 00170F6C  57 A0 06 3F */	clrlwi. r0, r29, 24
/* 80173E90 00170F70  41 82 00 34 */	beq .L_80173EC4
/* 80173E94 00170F74  C0 02 AD 34 */	lfs f0, "@1995"@sda21(r2)
/* 80173E98 00170F78  3C 60 80 27 */	lis r3, "@stringBase0"@ha
/* 80173E9C 00170F7C  38 C3 20 F0 */	addi r6, r3, "@stringBase0"@l
/* 80173EA0 00170F80  7F C4 F3 78 */	mr r4, r30
/* 80173EA4 00170F84  D0 1C 00 84 */	stfs f0, 0x84(r28)
/* 80173EA8 00170F88  7F E5 FB 78 */	mr r5, r31
/* 80173EAC 00170F8C  38 7C 00 84 */	addi r3, r28, 0x84
/* 80173EB0 00170F90  38 C6 03 52 */	addi r6, r6, 0x352
/* 80173EB4 00170F94  C0 22 AC BC */	lfs f1, "@1606"@sda21(r2)
/* 80173EB8 00170F98  C0 42 AD 38 */	lfs f2, "@1996"@sda21(r2)
/* 80173EBC 00170F9C  C0 62 AD 14 */	lfs f3, "@1987"@sda21(r2)
/* 80173EC0 00170FA0  48 00 80 AD */	bl "load_param<f,f>__10auto_tweakFRffffP16xModelAssetParamUiPCc"
.L_80173EC4:
/* 80173EC4 00170FA4  57 A0 06 3F */	clrlwi. r0, r29, 24
/* 80173EC8 00170FA8  41 82 00 34 */	beq .L_80173EFC
/* 80173ECC 00170FAC  C0 02 AC CC */	lfs f0, "@1689"@sda21(r2)
/* 80173ED0 00170FB0  3C 60 80 27 */	lis r3, "@stringBase0"@ha
/* 80173ED4 00170FB4  38 C3 20 F0 */	addi r6, r3, "@stringBase0"@l
/* 80173ED8 00170FB8  7F C4 F3 78 */	mr r4, r30
/* 80173EDC 00170FBC  D0 1C 00 88 */	stfs f0, 0x88(r28)
/* 80173EE0 00170FC0  7F E5 FB 78 */	mr r5, r31
/* 80173EE4 00170FC4  38 7C 00 88 */	addi r3, r28, 0x88
/* 80173EE8 00170FC8  38 C6 03 61 */	addi r6, r6, 0x361
/* 80173EEC 00170FCC  C0 22 AC BC */	lfs f1, "@1606"@sda21(r2)
/* 80173EF0 00170FD0  C0 42 AC EC */	lfs f2, "@1977"@sda21(r2)
/* 80173EF4 00170FD4  C0 62 AD 14 */	lfs f3, "@1987"@sda21(r2)
/* 80173EF8 00170FD8  48 00 80 75 */	bl "load_param<f,f>__10auto_tweakFRffffP16xModelAssetParamUiPCc"
.L_80173EFC:
/* 80173EFC 00170FDC  57 A0 06 3F */	clrlwi. r0, r29, 24
/* 80173F00 00170FE0  41 82 00 34 */	beq .L_80173F34
/* 80173F04 00170FE4  C0 02 AC CC */	lfs f0, "@1689"@sda21(r2)
/* 80173F08 00170FE8  3C 60 80 27 */	lis r3, "@stringBase0"@ha
/* 80173F0C 00170FEC  38 C3 20 F0 */	addi r6, r3, "@stringBase0"@l
/* 80173F10 00170FF0  7F C4 F3 78 */	mr r4, r30
/* 80173F14 00170FF4  D0 1C 00 8C */	stfs f0, 0x8c(r28)
/* 80173F18 00170FF8  7F E5 FB 78 */	mr r5, r31
/* 80173F1C 00170FFC  38 7C 00 8C */	addi r3, r28, 0x8c
/* 80173F20 00171000  38 C6 03 71 */	addi r6, r6, 0x371
/* 80173F24 00171004  C0 22 AC BC */	lfs f1, "@1606"@sda21(r2)
/* 80173F28 00171008  C0 42 AD 38 */	lfs f2, "@1996"@sda21(r2)
/* 80173F2C 0017100C  C0 62 AD 14 */	lfs f3, "@1987"@sda21(r2)
/* 80173F30 00171010  48 00 80 3D */	bl "load_param<f,f>__10auto_tweakFRffffP16xModelAssetParamUiPCc"
.L_80173F34:
/* 80173F34 00171014  57 A0 06 3F */	clrlwi. r0, r29, 24
/* 80173F38 00171018  41 82 00 34 */	beq .L_80173F6C
/* 80173F3C 0017101C  C0 02 AD 3C */	lfs f0, "@1997"@sda21(r2)
/* 80173F40 00171020  3C 60 80 27 */	lis r3, "@stringBase0"@ha
/* 80173F44 00171024  38 C3 20 F0 */	addi r6, r3, "@stringBase0"@l
/* 80173F48 00171028  7F C4 F3 78 */	mr r4, r30
/* 80173F4C 0017102C  D0 1C 00 64 */	stfs f0, 0x64(r28)
/* 80173F50 00171030  7F E5 FB 78 */	mr r5, r31
/* 80173F54 00171034  38 7C 00 64 */	addi r3, r28, 0x64
/* 80173F58 00171038  38 C6 03 84 */	addi r6, r6, 0x384
/* 80173F5C 0017103C  C0 22 AC BC */	lfs f1, "@1606"@sda21(r2)
/* 80173F60 00171040  C0 42 AC EC */	lfs f2, "@1977"@sda21(r2)
/* 80173F64 00171044  C0 62 AD 00 */	lfs f3, "@1982"@sda21(r2)
/* 80173F68 00171048  48 00 80 05 */	bl "load_param<f,f>__10auto_tweakFRffffP16xModelAssetParamUiPCc"
.L_80173F6C:
/* 80173F6C 0017104C  57 A0 06 3F */	clrlwi. r0, r29, 24
/* 80173F70 00171050  41 82 00 34 */	beq .L_80173FA4
/* 80173F74 00171054  C0 02 AD 40 */	lfs f0, "@1998"@sda21(r2)
/* 80173F78 00171058  3C 60 80 27 */	lis r3, "@stringBase0"@ha
/* 80173F7C 0017105C  38 C3 20 F0 */	addi r6, r3, "@stringBase0"@l
/* 80173F80 00171060  7F C4 F3 78 */	mr r4, r30
/* 80173F84 00171064  D0 1C 00 68 */	stfs f0, 0x68(r28)
/* 80173F88 00171068  7F E5 FB 78 */	mr r5, r31
/* 80173F8C 0017106C  38 7C 00 68 */	addi r3, r28, 0x68
/* 80173F90 00171070  38 C6 03 8F */	addi r6, r6, 0x38f
/* 80173F94 00171074  C0 22 AC BC */	lfs f1, "@1606"@sda21(r2)
/* 80173F98 00171078  C0 42 AC EC */	lfs f2, "@1977"@sda21(r2)
/* 80173F9C 0017107C  C0 62 AD 00 */	lfs f3, "@1982"@sda21(r2)
/* 80173FA0 00171080  48 00 7F CD */	bl "load_param<f,f>__10auto_tweakFRffffP16xModelAssetParamUiPCc"
.L_80173FA4:
/* 80173FA4 00171084  57 A0 06 3F */	clrlwi. r0, r29, 24
/* 80173FA8 00171088  41 82 00 34 */	beq .L_80173FDC
/* 80173FAC 0017108C  C0 02 AC BC */	lfs f0, "@1606"@sda21(r2)
/* 80173FB0 00171090  3C 60 80 27 */	lis r3, "@stringBase0"@ha
/* 80173FB4 00171094  38 C3 20 F0 */	addi r6, r3, "@stringBase0"@l
/* 80173FB8 00171098  7F C4 F3 78 */	mr r4, r30
/* 80173FBC 0017109C  D0 1C 00 6C */	stfs f0, 0x6c(r28)
/* 80173FC0 001710A0  7F E5 FB 78 */	mr r5, r31
/* 80173FC4 001710A4  38 7C 00 6C */	addi r3, r28, 0x6c
/* 80173FC8 001710A8  38 C6 03 9C */	addi r6, r6, 0x39c
/* 80173FCC 001710AC  C0 22 AC BC */	lfs f1, "@1606"@sda21(r2)
/* 80173FD0 001710B0  C0 42 AC B8 */	lfs f2, "@1605"@sda21(r2)
/* 80173FD4 001710B4  C0 62 AD 24 */	lfs f3, "@1991"@sda21(r2)
/* 80173FD8 001710B8  48 00 7F 95 */	bl "load_param<f,f>__10auto_tweakFRffffP16xModelAssetParamUiPCc"
.L_80173FDC:
/* 80173FDC 001710BC  57 A0 06 3F */	clrlwi. r0, r29, 24
/* 80173FE0 001710C0  41 82 00 34 */	beq .L_80174014
/* 80173FE4 001710C4  C0 02 AD 44 */	lfs f0, "@1999"@sda21(r2)
/* 80173FE8 001710C8  3C 60 80 27 */	lis r3, "@stringBase0"@ha
/* 80173FEC 001710CC  38 C3 20 F0 */	addi r6, r3, "@stringBase0"@l
/* 80173FF0 001710D0  7F C4 F3 78 */	mr r4, r30
/* 80173FF4 001710D4  D0 1C 00 70 */	stfs f0, 0x70(r28)
/* 80173FF8 001710D8  7F E5 FB 78 */	mr r5, r31
/* 80173FFC 001710DC  38 7C 00 70 */	addi r3, r28, 0x70
/* 80174000 001710E0  38 C6 03 AC */	addi r6, r6, 0x3ac
/* 80174004 001710E4  C0 22 AC BC */	lfs f1, "@1606"@sda21(r2)
/* 80174008 001710E8  C0 42 AC B8 */	lfs f2, "@1605"@sda21(r2)
/* 8017400C 001710EC  C0 62 AD 24 */	lfs f3, "@1991"@sda21(r2)
/* 80174010 001710F0  48 00 7F 5D */	bl "load_param<f,f>__10auto_tweakFRffffP16xModelAssetParamUiPCc"
.L_80174014:
/* 80174014 001710F4  57 A0 06 3F */	clrlwi. r0, r29, 24
/* 80174018 001710F8  41 82 00 34 */	beq .L_8017404C
/* 8017401C 001710FC  C0 02 AC DC */	lfs f0, "@1753"@sda21(r2)
/* 80174020 00171100  3C 60 80 27 */	lis r3, "@stringBase0"@ha
/* 80174024 00171104  38 C3 20 F0 */	addi r6, r3, "@stringBase0"@l
/* 80174028 00171108  7F C4 F3 78 */	mr r4, r30
/* 8017402C 0017110C  D0 1C 00 74 */	stfs f0, 0x74(r28)
/* 80174030 00171110  7F E5 FB 78 */	mr r5, r31
/* 80174034 00171114  38 7C 00 74 */	addi r3, r28, 0x74
/* 80174038 00171118  38 C6 03 BA */	addi r6, r6, 0x3ba
/* 8017403C 0017111C  C0 22 AC BC */	lfs f1, "@1606"@sda21(r2)
/* 80174040 00171120  C0 42 AC B8 */	lfs f2, "@1605"@sda21(r2)
/* 80174044 00171124  C0 62 AD 00 */	lfs f3, "@1982"@sda21(r2)
/* 80174048 00171128  48 00 7F 25 */	bl "load_param<f,f>__10auto_tweakFRffffP16xModelAssetParamUiPCc"
.L_8017404C:
/* 8017404C 0017112C  57 A0 06 3F */	clrlwi. r0, r29, 24
/* 80174050 00171130  41 82 00 34 */	beq .L_80174084
/* 80174054 00171134  C0 02 AC C0 */	lfs f0, "@1632"@sda21(r2)
/* 80174058 00171138  3C 60 80 27 */	lis r3, "@stringBase0"@ha
/* 8017405C 0017113C  38 C3 20 F0 */	addi r6, r3, "@stringBase0"@l
/* 80174060 00171140  7F C4 F3 78 */	mr r4, r30
/* 80174064 00171144  D0 1C 00 78 */	stfs f0, 0x78(r28)
/* 80174068 00171148  7F E5 FB 78 */	mr r5, r31
/* 8017406C 0017114C  38 7C 00 78 */	addi r3, r28, 0x78
/* 80174070 00171150  38 C6 03 C9 */	addi r6, r6, 0x3c9
/* 80174074 00171154  C0 22 AC BC */	lfs f1, "@1606"@sda21(r2)
/* 80174078 00171158  C0 42 AC B8 */	lfs f2, "@1605"@sda21(r2)
/* 8017407C 0017115C  C0 62 AD 24 */	lfs f3, "@1991"@sda21(r2)
/* 80174080 00171160  48 00 7E ED */	bl "load_param<f,f>__10auto_tweakFRffffP16xModelAssetParamUiPCc"
.L_80174084:
/* 80174084 00171164  57 A0 06 3F */	clrlwi. r0, r29, 24
/* 80174088 00171168  41 82 00 34 */	beq .L_801740BC
/* 8017408C 0017116C  C0 02 AD 1C */	lfs f0, "@1989"@sda21(r2)
/* 80174090 00171170  3C 60 80 27 */	lis r3, "@stringBase0"@ha
/* 80174094 00171174  38 C3 20 F0 */	addi r6, r3, "@stringBase0"@l
/* 80174098 00171178  7F C4 F3 78 */	mr r4, r30
/* 8017409C 0017117C  D0 1C 00 7C */	stfs f0, 0x7c(r28)
/* 801740A0 00171180  7F E5 FB 78 */	mr r5, r31
/* 801740A4 00171184  38 7C 00 7C */	addi r3, r28, 0x7c
/* 801740A8 00171188  38 C6 03 D7 */	addi r6, r6, 0x3d7
/* 801740AC 0017118C  C0 22 AC BC */	lfs f1, "@1606"@sda21(r2)
/* 801740B0 00171190  C0 42 AC B8 */	lfs f2, "@1605"@sda21(r2)
/* 801740B4 00171194  C0 62 AD 24 */	lfs f3, "@1991"@sda21(r2)
/* 801740B8 00171198  48 00 7E B5 */	bl "load_param<f,f>__10auto_tweakFRffffP16xModelAssetParamUiPCc"
.L_801740BC:
/* 801740BC 0017119C  57 A0 06 3F */	clrlwi. r0, r29, 24
/* 801740C0 001711A0  41 82 00 34 */	beq .L_801740F4
/* 801740C4 001711A4  C0 02 AC D0 */	lfs f0, "@1690"@sda21(r2)
/* 801740C8 001711A8  3C 60 80 27 */	lis r3, "@stringBase0"@ha
/* 801740CC 001711AC  38 C3 20 F0 */	addi r6, r3, "@stringBase0"@l
/* 801740D0 001711B0  7F C4 F3 78 */	mr r4, r30
/* 801740D4 001711B4  D0 1C 00 90 */	stfs f0, 0x90(r28)
/* 801740D8 001711B8  7F E5 FB 78 */	mr r5, r31
/* 801740DC 001711BC  38 7C 00 90 */	addi r3, r28, 0x90
/* 801740E0 001711C0  38 C6 03 E5 */	addi r6, r6, 0x3e5
/* 801740E4 001711C4  C0 22 AC BC */	lfs f1, "@1606"@sda21(r2)
/* 801740E8 001711C8  C0 42 AC B8 */	lfs f2, "@1605"@sda21(r2)
/* 801740EC 001711CC  FC 60 08 90 */	fmr f3, f1
/* 801740F0 001711D0  48 00 7E 7D */	bl "load_param<f,f>__10auto_tweakFRffffP16xModelAssetParamUiPCc"
.L_801740F4:
/* 801740F4 001711D4  57 A0 06 3F */	clrlwi. r0, r29, 24
/* 801740F8 001711D8  41 82 00 34 */	beq .L_8017412C
/* 801740FC 001711DC  C0 02 AD 48 */	lfs f0, "@2000"@sda21(r2)
/* 80174100 001711E0  3C 60 80 27 */	lis r3, "@stringBase0"@ha
/* 80174104 001711E4  38 C3 20 F0 */	addi r6, r3, "@stringBase0"@l
/* 80174108 001711E8  7F C4 F3 78 */	mr r4, r30
/* 8017410C 001711EC  D0 1C 00 94 */	stfs f0, 0x94(r28)
/* 80174110 001711F0  7F E5 FB 78 */	mr r5, r31
/* 80174114 001711F4  38 7C 00 94 */	addi r3, r28, 0x94
/* 80174118 001711F8  38 C6 03 F5 */	addi r6, r6, 0x3f5
/* 8017411C 001711FC  C0 22 AC BC */	lfs f1, "@1606"@sda21(r2)
/* 80174120 00171200  C0 42 AC B8 */	lfs f2, "@1605"@sda21(r2)
/* 80174124 00171204  C0 62 AD 14 */	lfs f3, "@1987"@sda21(r2)
/* 80174128 00171208  48 00 7E 45 */	bl "load_param<f,f>__10auto_tweakFRffffP16xModelAssetParamUiPCc"
.L_8017412C:
/* 8017412C 0017120C  57 A0 06 3F */	clrlwi. r0, r29, 24
/* 80174130 00171210  41 82 00 34 */	beq .L_80174164
/* 80174134 00171214  38 00 00 02 */	li r0, 0x2
/* 80174138 00171218  3C 60 80 27 */	lis r3, "@stringBase0"@ha
/* 8017413C 0017121C  38 83 20 F0 */	addi r4, r3, "@stringBase0"@l
/* 80174140 00171220  90 1C 00 98 */	stw r0, 0x98(r28)
/* 80174144 00171224  7F C7 F3 78 */	mr r7, r30
/* 80174148 00171228  7F E8 FB 78 */	mr r8, r31
/* 8017414C 0017122C  38 7C 00 98 */	addi r3, r28, 0x98
/* 80174150 00171230  39 24 04 04 */	addi r9, r4, 0x404
/* 80174154 00171234  38 80 00 01 */	li r4, 0x1
/* 80174158 00171238  38 A0 00 01 */	li r5, 0x1
/* 8017415C 0017123C  38 C0 03 E8 */	li r6, 0x3e8
/* 80174160 00171240  48 00 7D 39 */	bl "load_param<i,i>__10auto_tweakFRiiiiP16xModelAssetParamUiPCc"
.L_80174164:
/* 80174164 00171244  57 A0 06 3F */	clrlwi. r0, r29, 24
/* 80174168 00171248  41 82 00 34 */	beq .L_8017419C
/* 8017416C 0017124C  38 00 00 03 */	li r0, 0x3
/* 80174170 00171250  3C 60 80 27 */	lis r3, "@stringBase0"@ha
/* 80174174 00171254  38 83 20 F0 */	addi r4, r3, "@stringBase0"@l
/* 80174178 00171258  90 1C 00 9C */	stw r0, 0x9c(r28)
/* 8017417C 0017125C  7F C7 F3 78 */	mr r7, r30
/* 80174180 00171260  7F E8 FB 78 */	mr r8, r31
/* 80174184 00171264  38 7C 00 9C */	addi r3, r28, 0x9c
/* 80174188 00171268  39 24 04 12 */	addi r9, r4, 0x412
/* 8017418C 0017126C  38 80 00 01 */	li r4, 0x1
/* 80174190 00171270  38 A0 00 01 */	li r5, 0x1
/* 80174194 00171274  38 C0 03 E8 */	li r6, 0x3e8
/* 80174198 00171278  48 00 7D 01 */	bl "load_param<i,i>__10auto_tweakFRiiiiP16xModelAssetParamUiPCc"
.L_8017419C:
/* 8017419C 0017127C  57 A0 06 3F */	clrlwi. r0, r29, 24
/* 801741A0 00171280  41 82 00 34 */	beq .L_801741D4
/* 801741A4 00171284  38 00 00 04 */	li r0, 0x4
/* 801741A8 00171288  3C 60 80 27 */	lis r3, "@stringBase0"@ha
/* 801741AC 0017128C  38 83 20 F0 */	addi r4, r3, "@stringBase0"@l
/* 801741B0 00171290  90 1C 00 A0 */	stw r0, 0xa0(r28)
/* 801741B4 00171294  7F C7 F3 78 */	mr r7, r30
/* 801741B8 00171298  7F E8 FB 78 */	mr r8, r31
/* 801741BC 0017129C  38 7C 00 A0 */	addi r3, r28, 0xa0
/* 801741C0 001712A0  39 24 04 20 */	addi r9, r4, 0x420
/* 801741C4 001712A4  38 80 00 01 */	li r4, 0x1
/* 801741C8 001712A8  38 A0 00 01 */	li r5, 0x1
/* 801741CC 001712AC  38 C0 03 E8 */	li r6, 0x3e8
/* 801741D0 001712B0  48 00 7C C9 */	bl "load_param<i,i>__10auto_tweakFRiiiiP16xModelAssetParamUiPCc"
.L_801741D4:
/* 801741D4 001712B4  57 A0 06 3F */	clrlwi. r0, r29, 24
/* 801741D8 001712B8  41 82 00 34 */	beq .L_8017420C
/* 801741DC 001712BC  C0 02 AD 4C */	lfs f0, "@2001"@sda21(r2)
/* 801741E0 001712C0  3C 60 80 27 */	lis r3, "@stringBase0"@ha
/* 801741E4 001712C4  38 C3 20 F0 */	addi r6, r3, "@stringBase0"@l
/* 801741E8 001712C8  7F C4 F3 78 */	mr r4, r30
/* 801741EC 001712CC  D0 1C 00 A4 */	stfs f0, 0xa4(r28)
/* 801741F0 001712D0  7F E5 FB 78 */	mr r5, r31
/* 801741F4 001712D4  38 7C 00 A4 */	addi r3, r28, 0xa4
/* 801741F8 001712D8  38 C6 04 2E */	addi r6, r6, 0x42e
/* 801741FC 001712DC  C0 22 AC BC */	lfs f1, "@1606"@sda21(r2)
/* 80174200 001712E0  C0 42 AC B8 */	lfs f2, "@1605"@sda21(r2)
/* 80174204 001712E4  C0 62 AC C8 */	lfs f3, "@1634"@sda21(r2)
/* 80174208 001712E8  48 00 7D 65 */	bl "load_param<f,f>__10auto_tweakFRffffP16xModelAssetParamUiPCc"
.L_8017420C:
/* 8017420C 001712EC  57 A0 06 3F */	clrlwi. r0, r29, 24
/* 80174210 001712F0  41 82 00 4C */	beq .L_8017425C
/* 80174214 001712F4  C0 22 AD 4C */	lfs f1, "@2001"@sda21(r2)
/* 80174218 001712F8  38 61 00 2C */	addi r3, r1, 0x2c
/* 8017421C 001712FC  FC 40 08 90 */	fmr f2, f1
/* 80174220 00171300  FC 60 08 90 */	fmr f3, f1
/* 80174224 00171304  4B EE BD 65 */	bl create__5xVec3Ffff
/* 80174228 00171308  38 7C 00 A8 */	addi r3, r28, 0xa8
/* 8017422C 0017130C  38 81 00 2C */	addi r4, r1, 0x2c
/* 80174230 00171310  4B E9 70 35 */	bl __as__5xVec3FRC5xVec3
/* 80174234 00171314  3C 60 80 27 */	lis r3, "@stringBase0"@ha
/* 80174238 00171318  7F C7 F3 78 */	mr r7, r30
/* 8017423C 0017131C  38 A3 20 F0 */	addi r5, r3, "@stringBase0"@l
/* 80174240 00171320  7F E8 FB 78 */	mr r8, r31
/* 80174244 00171324  38 7C 00 A8 */	addi r3, r28, 0xa8
/* 80174248 00171328  38 80 00 00 */	li r4, 0x0
/* 8017424C 0017132C  39 25 04 3D */	addi r9, r5, 0x43d
/* 80174250 00171330  38 A0 00 00 */	li r5, 0x0
/* 80174254 00171334  38 C0 00 00 */	li r6, 0x0
/* 80174258 00171338  48 00 7C C5 */	bl "load_param<5xVec3,i>__10auto_tweakFR5xVec3iiiP16xModelAssetParamUiPCc"
.L_8017425C:
/* 8017425C 0017133C  57 A0 06 3F */	clrlwi. r0, r29, 24
/* 80174260 00171340  41 82 00 4C */	beq .L_801742AC
/* 80174264 00171344  C0 22 AD 4C */	lfs f1, "@2001"@sda21(r2)
/* 80174268 00171348  38 61 00 20 */	addi r3, r1, 0x20
/* 8017426C 0017134C  FC 40 08 90 */	fmr f2, f1
/* 80174270 00171350  FC 60 08 90 */	fmr f3, f1
/* 80174274 00171354  4B EE BD 15 */	bl create__5xVec3Ffff
/* 80174278 00171358  38 7C 00 B4 */	addi r3, r28, 0xb4
/* 8017427C 0017135C  38 81 00 20 */	addi r4, r1, 0x20
/* 80174280 00171360  4B E9 6F E5 */	bl __as__5xVec3FRC5xVec3
/* 80174284 00171364  3C 60 80 27 */	lis r3, "@stringBase0"@ha
/* 80174288 00171368  7F C7 F3 78 */	mr r7, r30
/* 8017428C 0017136C  38 A3 20 F0 */	addi r5, r3, "@stringBase0"@l
/* 80174290 00171370  7F E8 FB 78 */	mr r8, r31
/* 80174294 00171374  38 7C 00 B4 */	addi r3, r28, 0xb4
/* 80174298 00171378  38 80 00 00 */	li r4, 0x0
/* 8017429C 0017137C  39 25 04 4C */	addi r9, r5, 0x44c
/* 801742A0 00171380  38 A0 00 00 */	li r5, 0x0
/* 801742A4 00171384  38 C0 00 00 */	li r6, 0x0
/* 801742A8 00171388  48 00 7C 75 */	bl "load_param<5xVec3,i>__10auto_tweakFR5xVec3iiiP16xModelAssetParamUiPCc"
.L_801742AC:
/* 801742AC 0017138C  57 A0 06 3F */	clrlwi. r0, r29, 24
/* 801742B0 00171390  41 82 00 34 */	beq .L_801742E4
/* 801742B4 00171394  C0 02 AD 50 */	lfs f0, "@2002"@sda21(r2)
/* 801742B8 00171398  3C 60 80 27 */	lis r3, "@stringBase0"@ha
/* 801742BC 0017139C  38 C3 20 F0 */	addi r6, r3, "@stringBase0"@l
/* 801742C0 001713A0  7F C4 F3 78 */	mr r4, r30
/* 801742C4 001713A4  D0 1C 00 C0 */	stfs f0, 0xc0(r28)
/* 801742C8 001713A8  7F E5 FB 78 */	mr r5, r31
/* 801742CC 001713AC  38 7C 00 C0 */	addi r3, r28, 0xc0
/* 801742D0 001713B0  38 C6 04 5D */	addi r6, r6, 0x45d
/* 801742D4 001713B4  C0 22 AC FC */	lfs f1, "@1981"@sda21(r2)
/* 801742D8 001713B8  C0 42 AC EC */	lfs f2, "@1977"@sda21(r2)
/* 801742DC 001713BC  C0 62 AD 00 */	lfs f3, "@1982"@sda21(r2)
/* 801742E0 001713C0  48 00 7C 8D */	bl "load_param<f,f>__10auto_tweakFRffffP16xModelAssetParamUiPCc"
.L_801742E4:
/* 801742E4 001713C4  57 A0 06 3F */	clrlwi. r0, r29, 24
/* 801742E8 001713C8  41 82 00 34 */	beq .L_8017431C
/* 801742EC 001713CC  C0 02 AD 54 */	lfs f0, "@2003"@sda21(r2)
/* 801742F0 001713D0  3C 60 80 27 */	lis r3, "@stringBase0"@ha
/* 801742F4 001713D4  38 C3 20 F0 */	addi r6, r3, "@stringBase0"@l
/* 801742F8 001713D8  7F C4 F3 78 */	mr r4, r30
/* 801742FC 001713DC  D0 1C 00 C4 */	stfs f0, 0xc4(r28)
/* 80174300 001713E0  7F E5 FB 78 */	mr r5, r31
/* 80174304 001713E4  38 7C 00 C4 */	addi r3, r28, 0xc4
/* 80174308 001713E8  38 C6 04 71 */	addi r6, r6, 0x471
/* 8017430C 001713EC  C0 22 AC FC */	lfs f1, "@1981"@sda21(r2)
/* 80174310 001713F0  C0 42 AC EC */	lfs f2, "@1977"@sda21(r2)
/* 80174314 001713F4  C0 62 AD 00 */	lfs f3, "@1982"@sda21(r2)
/* 80174318 001713F8  48 00 7C 55 */	bl "load_param<f,f>__10auto_tweakFRffffP16xModelAssetParamUiPCc"
.L_8017431C:
/* 8017431C 001713FC  57 A0 06 3F */	clrlwi. r0, r29, 24
/* 80174320 00171400  41 82 00 34 */	beq .L_80174354
/* 80174324 00171404  C0 02 AC C0 */	lfs f0, "@1632"@sda21(r2)
/* 80174328 00171408  3C 60 80 27 */	lis r3, "@stringBase0"@ha
/* 8017432C 0017140C  38 C3 20 F0 */	addi r6, r3, "@stringBase0"@l
/* 80174330 00171410  7F C4 F3 78 */	mr r4, r30
/* 80174334 00171414  D0 1C 00 C8 */	stfs f0, 0xc8(r28)
/* 80174338 00171418  7F E5 FB 78 */	mr r5, r31
/* 8017433C 0017141C  38 7C 00 C8 */	addi r3, r28, 0xc8
/* 80174340 00171420  38 C6 04 87 */	addi r6, r6, 0x487
/* 80174344 00171424  C0 22 AC BC */	lfs f1, "@1606"@sda21(r2)
/* 80174348 00171428  C0 42 AC EC */	lfs f2, "@1977"@sda21(r2)
/* 8017434C 0017142C  C0 62 AD 14 */	lfs f3, "@1987"@sda21(r2)
/* 80174350 00171430  48 00 7C 1D */	bl "load_param<f,f>__10auto_tweakFRffffP16xModelAssetParamUiPCc"
.L_80174354:
/* 80174354 00171434  57 A0 06 3F */	clrlwi. r0, r29, 24
/* 80174358 00171438  41 82 00 34 */	beq .L_8017438C
/* 8017435C 0017143C  C0 02 AC B8 */	lfs f0, "@1605"@sda21(r2)
/* 80174360 00171440  3C 60 80 27 */	lis r3, "@stringBase0"@ha
/* 80174364 00171444  38 C3 20 F0 */	addi r6, r3, "@stringBase0"@l
/* 80174368 00171448  7F C4 F3 78 */	mr r4, r30
/* 8017436C 0017144C  D0 1C 00 CC */	stfs f0, 0xcc(r28)
/* 80174370 00171450  7F E5 FB 78 */	mr r5, r31
/* 80174374 00171454  38 7C 00 CC */	addi r3, r28, 0xcc
/* 80174378 00171458  38 C6 04 9A */	addi r6, r6, 0x49a
/* 8017437C 0017145C  C0 22 AC BC */	lfs f1, "@1606"@sda21(r2)
/* 80174380 00171460  C0 42 AC B8 */	lfs f2, "@1605"@sda21(r2)
/* 80174384 00171464  C0 62 AD 14 */	lfs f3, "@1987"@sda21(r2)
/* 80174388 00171468  48 00 7B E5 */	bl "load_param<f,f>__10auto_tweakFRffffP16xModelAssetParamUiPCc"
.L_8017438C:
/* 8017438C 0017146C  57 A0 06 3F */	clrlwi. r0, r29, 24
/* 80174390 00171470  41 82 00 34 */	beq .L_801743C4
/* 80174394 00171474  C0 02 AD 3C */	lfs f0, "@1997"@sda21(r2)
/* 80174398 00171478  3C 60 80 27 */	lis r3, "@stringBase0"@ha
/* 8017439C 0017147C  38 C3 20 F0 */	addi r6, r3, "@stringBase0"@l
/* 801743A0 00171480  7F C4 F3 78 */	mr r4, r30
/* 801743A4 00171484  D0 1C 00 D0 */	stfs f0, 0xd0(r28)
/* 801743A8 00171488  7F E5 FB 78 */	mr r5, r31
/* 801743AC 0017148C  38 7C 00 D0 */	addi r3, r28, 0xd0
/* 801743B0 00171490  38 C6 04 AF */	addi r6, r6, 0x4af
/* 801743B4 00171494  C0 22 AC BC */	lfs f1, "@1606"@sda21(r2)
/* 801743B8 00171498  C0 42 AC B8 */	lfs f2, "@1605"@sda21(r2)
/* 801743BC 0017149C  C0 62 AD 00 */	lfs f3, "@1982"@sda21(r2)
/* 801743C0 001714A0  48 00 7B AD */	bl "load_param<f,f>__10auto_tweakFRffffP16xModelAssetParamUiPCc"
.L_801743C4:
/* 801743C4 001714A4  57 A0 06 3F */	clrlwi. r0, r29, 24
/* 801743C8 001714A8  41 82 00 34 */	beq .L_801743FC
/* 801743CC 001714AC  C0 02 AD 14 */	lfs f0, "@1987"@sda21(r2)
/* 801743D0 001714B0  3C 60 80 27 */	lis r3, "@stringBase0"@ha
/* 801743D4 001714B4  38 C3 20 F0 */	addi r6, r3, "@stringBase0"@l
/* 801743D8 001714B8  7F C4 F3 78 */	mr r4, r30
/* 801743DC 001714BC  D0 1C 00 D4 */	stfs f0, 0xd4(r28)
/* 801743E0 001714C0  7F E5 FB 78 */	mr r5, r31
/* 801743E4 001714C4  38 7C 00 D4 */	addi r3, r28, 0xd4
/* 801743E8 001714C8  38 C6 04 BB */	addi r6, r6, 0x4bb
/* 801743EC 001714CC  C0 22 AC BC */	lfs f1, "@1606"@sda21(r2)
/* 801743F0 001714D0  C0 42 AC B8 */	lfs f2, "@1605"@sda21(r2)
/* 801743F4 001714D4  C0 62 AD 00 */	lfs f3, "@1982"@sda21(r2)
/* 801743F8 001714D8  48 00 7B 75 */	bl "load_param<f,f>__10auto_tweakFRffffP16xModelAssetParamUiPCc"
.L_801743FC:
/* 801743FC 001714DC  57 A0 06 3F */	clrlwi. r0, r29, 24
/* 80174400 001714E0  41 82 00 34 */	beq .L_80174434
/* 80174404 001714E4  C0 02 AC C0 */	lfs f0, "@1632"@sda21(r2)
/* 80174408 001714E8  3C 60 80 27 */	lis r3, "@stringBase0"@ha
/* 8017440C 001714EC  38 C3 20 F0 */	addi r6, r3, "@stringBase0"@l
/* 80174410 001714F0  7F C4 F3 78 */	mr r4, r30
/* 80174414 001714F4  D0 1C 00 D8 */	stfs f0, 0xd8(r28)
/* 80174418 001714F8  7F E5 FB 78 */	mr r5, r31
/* 8017441C 001714FC  38 7C 00 D8 */	addi r3, r28, 0xd8
/* 80174420 00171500  38 C6 04 C9 */	addi r6, r6, 0x4c9
/* 80174424 00171504  C0 22 AC BC */	lfs f1, "@1606"@sda21(r2)
/* 80174428 00171508  C0 42 AC EC */	lfs f2, "@1977"@sda21(r2)
/* 8017442C 0017150C  C0 62 AD 14 */	lfs f3, "@1987"@sda21(r2)
/* 80174430 00171510  48 00 7B 3D */	bl "load_param<f,f>__10auto_tweakFRffffP16xModelAssetParamUiPCc"
.L_80174434:
/* 80174434 00171514  57 A0 06 3F */	clrlwi. r0, r29, 24
/* 80174438 00171518  41 82 00 34 */	beq .L_8017446C
/* 8017443C 0017151C  C0 02 AD 1C */	lfs f0, "@1989"@sda21(r2)
/* 80174440 00171520  3C 60 80 27 */	lis r3, "@stringBase0"@ha
/* 80174444 00171524  38 C3 20 F0 */	addi r6, r3, "@stringBase0"@l
/* 80174448 00171528  7F C4 F3 78 */	mr r4, r30
/* 8017444C 0017152C  D0 1C 00 DC */	stfs f0, 0xdc(r28)
/* 80174450 00171530  7F E5 FB 78 */	mr r5, r31
/* 80174454 00171534  38 7C 00 DC */	addi r3, r28, 0xdc
/* 80174458 00171538  38 C6 04 DB */	addi r6, r6, 0x4db
/* 8017445C 0017153C  C0 22 AC BC */	lfs f1, "@1606"@sda21(r2)
/* 80174460 00171540  C0 42 AC EC */	lfs f2, "@1977"@sda21(r2)
/* 80174464 00171544  C0 62 AD 24 */	lfs f3, "@1991"@sda21(r2)
/* 80174468 00171548  48 00 7B 05 */	bl "load_param<f,f>__10auto_tweakFRffffP16xModelAssetParamUiPCc"
.L_8017446C:
/* 8017446C 0017154C  57 A0 06 3F */	clrlwi. r0, r29, 24
/* 80174470 00171550  41 82 00 34 */	beq .L_801744A4
/* 80174474 00171554  C0 02 AD 58 */	lfs f0, "@2004"@sda21(r2)
/* 80174478 00171558  3C 60 80 27 */	lis r3, "@stringBase0"@ha
/* 8017447C 0017155C  38 C3 20 F0 */	addi r6, r3, "@stringBase0"@l
/* 80174480 00171560  7F C4 F3 78 */	mr r4, r30
/* 80174484 00171564  D0 1C 00 E0 */	stfs f0, 0xe0(r28)
/* 80174488 00171568  7F E5 FB 78 */	mr r5, r31
/* 8017448C 0017156C  38 7C 00 E0 */	addi r3, r28, 0xe0
/* 80174490 00171570  38 C6 04 EB */	addi r6, r6, 0x4eb
/* 80174494 00171574  C0 22 AC BC */	lfs f1, "@1606"@sda21(r2)
/* 80174498 00171578  C0 42 AC EC */	lfs f2, "@1977"@sda21(r2)
/* 8017449C 0017157C  C0 62 AD 24 */	lfs f3, "@1991"@sda21(r2)
/* 801744A0 00171580  48 00 7A CD */	bl "load_param<f,f>__10auto_tweakFRffffP16xModelAssetParamUiPCc"
.L_801744A4:
/* 801744A4 00171584  57 A0 06 3F */	clrlwi. r0, r29, 24
/* 801744A8 00171588  41 82 00 34 */	beq .L_801744DC
/* 801744AC 0017158C  C0 02 AC B8 */	lfs f0, "@1605"@sda21(r2)
/* 801744B0 00171590  3C 60 80 27 */	lis r3, "@stringBase0"@ha
/* 801744B4 00171594  38 C3 20 F0 */	addi r6, r3, "@stringBase0"@l
/* 801744B8 00171598  7F C4 F3 78 */	mr r4, r30
/* 801744BC 0017159C  D0 1C 00 E4 */	stfs f0, 0xe4(r28)
/* 801744C0 001715A0  7F E5 FB 78 */	mr r5, r31
/* 801744C4 001715A4  38 7C 00 E4 */	addi r3, r28, 0xe4
/* 801744C8 001715A8  38 C6 04 FB */	addi r6, r6, 0x4fb
/* 801744CC 001715AC  C0 22 AC BC */	lfs f1, "@1606"@sda21(r2)
/* 801744D0 001715B0  C0 42 AC B8 */	lfs f2, "@1605"@sda21(r2)
/* 801744D4 001715B4  C0 62 AD 14 */	lfs f3, "@1987"@sda21(r2)
/* 801744D8 001715B8  48 00 7A 95 */	bl "load_param<f,f>__10auto_tweakFRffffP16xModelAssetParamUiPCc"
.L_801744DC:
/* 801744DC 001715BC  57 A0 06 3F */	clrlwi. r0, r29, 24
/* 801744E0 001715C0  41 82 00 34 */	beq .L_80174514
/* 801744E4 001715C4  C0 02 AD 1C */	lfs f0, "@1989"@sda21(r2)
/* 801744E8 001715C8  3C 60 80 27 */	lis r3, "@stringBase0"@ha
/* 801744EC 001715CC  38 C3 20 F0 */	addi r6, r3, "@stringBase0"@l
/* 801744F0 001715D0  7F C4 F3 78 */	mr r4, r30
/* 801744F4 001715D4  D0 1C 00 E8 */	stfs f0, 0xe8(r28)
/* 801744F8 001715D8  7F E5 FB 78 */	mr r5, r31
/* 801744FC 001715DC  38 7C 00 E8 */	addi r3, r28, 0xe8
/* 80174500 001715E0  38 C6 05 0C */	addi r6, r6, 0x50c
/* 80174504 001715E4  C0 22 AC BC */	lfs f1, "@1606"@sda21(r2)
/* 80174508 001715E8  C0 42 AD 28 */	lfs f2, "@1992"@sda21(r2)
/* 8017450C 001715EC  C0 62 AD 14 */	lfs f3, "@1987"@sda21(r2)
/* 80174510 001715F0  48 00 7A 5D */	bl "load_param<f,f>__10auto_tweakFRffffP16xModelAssetParamUiPCc"
.L_80174514:
/* 80174514 001715F4  57 A0 06 3F */	clrlwi. r0, r29, 24
/* 80174518 001715F8  41 82 00 34 */	beq .L_8017454C
/* 8017451C 001715FC  C0 02 AD 1C */	lfs f0, "@1989"@sda21(r2)
/* 80174520 00171600  3C 60 80 27 */	lis r3, "@stringBase0"@ha
/* 80174524 00171604  38 C3 20 F0 */	addi r6, r3, "@stringBase0"@l
/* 80174528 00171608  7F C4 F3 78 */	mr r4, r30
/* 8017452C 0017160C  D0 1C 00 EC */	stfs f0, 0xec(r28)
/* 80174530 00171610  7F E5 FB 78 */	mr r5, r31
/* 80174534 00171614  38 7C 00 EC */	addi r3, r28, 0xec
/* 80174538 00171618  38 C6 05 1C */	addi r6, r6, 0x51c
/* 8017453C 0017161C  C0 22 AC BC */	lfs f1, "@1606"@sda21(r2)
/* 80174540 00171620  C0 42 AC B8 */	lfs f2, "@1605"@sda21(r2)
/* 80174544 00171624  C0 62 AD 5C */	lfs f3, "@2005"@sda21(r2)
/* 80174548 00171628  48 00 7A 25 */	bl "load_param<f,f>__10auto_tweakFRffffP16xModelAssetParamUiPCc"
.L_8017454C:
/* 8017454C 0017162C  57 A0 06 3F */	clrlwi. r0, r29, 24
/* 80174550 00171630  41 82 00 34 */	beq .L_80174584
/* 80174554 00171634  C0 02 AD 60 */	lfs f0, "@2006"@sda21(r2)
/* 80174558 00171638  3C 60 80 27 */	lis r3, "@stringBase0"@ha
/* 8017455C 0017163C  38 C3 20 F0 */	addi r6, r3, "@stringBase0"@l
/* 80174560 00171640  7F C4 F3 78 */	mr r4, r30
/* 80174564 00171644  D0 1C 00 F0 */	stfs f0, 0xf0(r28)
/* 80174568 00171648  7F E5 FB 78 */	mr r5, r31
/* 8017456C 0017164C  38 7C 00 F0 */	addi r3, r28, 0xf0
/* 80174570 00171650  38 C6 05 2F */	addi r6, r6, 0x52f
/* 80174574 00171654  C0 22 AC BC */	lfs f1, "@1606"@sda21(r2)
/* 80174578 00171658  C0 42 AC B8 */	lfs f2, "@1605"@sda21(r2)
/* 8017457C 0017165C  C0 62 AD 5C */	lfs f3, "@2005"@sda21(r2)
/* 80174580 00171660  48 00 79 ED */	bl "load_param<f,f>__10auto_tweakFRffffP16xModelAssetParamUiPCc"
.L_80174584:
/* 80174584 00171664  57 A0 06 3F */	clrlwi. r0, r29, 24
/* 80174588 00171668  41 82 00 34 */	beq .L_801745BC
/* 8017458C 0017166C  C0 02 AD 14 */	lfs f0, "@1987"@sda21(r2)
/* 80174590 00171670  3C 60 80 27 */	lis r3, "@stringBase0"@ha
/* 80174594 00171674  38 C3 20 F0 */	addi r6, r3, "@stringBase0"@l
/* 80174598 00171678  7F C4 F3 78 */	mr r4, r30
/* 8017459C 0017167C  D0 1C 00 F4 */	stfs f0, 0xf4(r28)
/* 801745A0 00171680  7F E5 FB 78 */	mr r5, r31
/* 801745A4 00171684  38 7C 00 F4 */	addi r3, r28, 0xf4
/* 801745A8 00171688  38 C6 05 42 */	addi r6, r6, 0x542
/* 801745AC 0017168C  C0 22 AC BC */	lfs f1, "@1606"@sda21(r2)
/* 801745B0 00171690  C0 42 AC B8 */	lfs f2, "@1605"@sda21(r2)
/* 801745B4 00171694  C0 62 AD 5C */	lfs f3, "@2005"@sda21(r2)
/* 801745B8 00171698  48 00 79 B5 */	bl "load_param<f,f>__10auto_tweakFRffffP16xModelAssetParamUiPCc"
.L_801745BC:
/* 801745BC 0017169C  57 A0 06 3F */	clrlwi. r0, r29, 24
/* 801745C0 001716A0  41 82 00 34 */	beq .L_801745F4
/* 801745C4 001716A4  C0 02 AC D0 */	lfs f0, "@1690"@sda21(r2)
/* 801745C8 001716A8  3C 60 80 27 */	lis r3, "@stringBase0"@ha
/* 801745CC 001716AC  38 C3 20 F0 */	addi r6, r3, "@stringBase0"@l
/* 801745D0 001716B0  7F C4 F3 78 */	mr r4, r30
/* 801745D4 001716B4  D0 1C 00 F8 */	stfs f0, 0xf8(r28)
/* 801745D8 001716B8  7F E5 FB 78 */	mr r5, r31
/* 801745DC 001716BC  38 7C 00 F8 */	addi r3, r28, 0xf8
/* 801745E0 001716C0  38 C6 05 55 */	addi r6, r6, 0x555
/* 801745E4 001716C4  C0 22 AC BC */	lfs f1, "@1606"@sda21(r2)
/* 801745E8 001716C8  C0 42 AC B8 */	lfs f2, "@1605"@sda21(r2)
/* 801745EC 001716CC  C0 62 AD 14 */	lfs f3, "@1987"@sda21(r2)
/* 801745F0 001716D0  48 00 79 7D */	bl "load_param<f,f>__10auto_tweakFRffffP16xModelAssetParamUiPCc"
.L_801745F4:
/* 801745F4 001716D4  57 A0 06 3F */	clrlwi. r0, r29, 24
/* 801745F8 001716D8  41 82 00 34 */	beq .L_8017462C
/* 801745FC 001716DC  C0 02 AD 64 */	lfs f0, "@2007"@sda21(r2)
/* 80174600 001716E0  3C 60 80 27 */	lis r3, "@stringBase0"@ha
/* 80174604 001716E4  38 C3 20 F0 */	addi r6, r3, "@stringBase0"@l
/* 80174608 001716E8  7F C4 F3 78 */	mr r4, r30
/* 8017460C 001716EC  D0 1C 00 FC */	stfs f0, 0xfc(r28)
/* 80174610 001716F0  7F E5 FB 78 */	mr r5, r31
/* 80174614 001716F4  38 7C 00 FC */	addi r3, r28, 0xfc
/* 80174618 001716F8  38 C6 05 69 */	addi r6, r6, 0x569
/* 8017461C 001716FC  C0 22 AC BC */	lfs f1, "@1606"@sda21(r2)
/* 80174620 00171700  C0 42 AC B8 */	lfs f2, "@1605"@sda21(r2)
/* 80174624 00171704  C0 62 AD 14 */	lfs f3, "@1987"@sda21(r2)
/* 80174628 00171708  48 00 79 45 */	bl "load_param<f,f>__10auto_tweakFRffffP16xModelAssetParamUiPCc"
.L_8017462C:
/* 8017462C 0017170C  57 A0 06 3F */	clrlwi. r0, r29, 24
/* 80174630 00171710  41 82 00 34 */	beq .L_80174664
/* 80174634 00171714  C0 02 AC BC */	lfs f0, "@1606"@sda21(r2)
/* 80174638 00171718  3C 60 80 27 */	lis r3, "@stringBase0"@ha
/* 8017463C 0017171C  38 C3 20 F0 */	addi r6, r3, "@stringBase0"@l
/* 80174640 00171720  7F C4 F3 78 */	mr r4, r30
/* 80174644 00171724  D0 1C 01 00 */	stfs f0, 0x100(r28)
/* 80174648 00171728  7F E5 FB 78 */	mr r5, r31
/* 8017464C 0017172C  38 7C 01 00 */	addi r3, r28, 0x100
/* 80174650 00171730  38 C6 05 7D */	addi r6, r6, 0x57d
/* 80174654 00171734  C0 22 AC BC */	lfs f1, "@1606"@sda21(r2)
/* 80174658 00171738  C0 42 AC B8 */	lfs f2, "@1605"@sda21(r2)
/* 8017465C 0017173C  C0 62 AD 14 */	lfs f3, "@1987"@sda21(r2)
/* 80174660 00171740  48 00 79 0D */	bl "load_param<f,f>__10auto_tweakFRffffP16xModelAssetParamUiPCc"
.L_80174664:
/* 80174664 00171744  57 A0 06 3F */	clrlwi. r0, r29, 24
/* 80174668 00171748  41 82 00 34 */	beq .L_8017469C
/* 8017466C 0017174C  C0 02 AC CC */	lfs f0, "@1689"@sda21(r2)
/* 80174670 00171750  3C 60 80 27 */	lis r3, "@stringBase0"@ha
/* 80174674 00171754  38 C3 20 F0 */	addi r6, r3, "@stringBase0"@l
/* 80174678 00171758  7F C4 F3 78 */	mr r4, r30
/* 8017467C 0017175C  D0 1C 01 04 */	stfs f0, 0x104(r28)
/* 80174680 00171760  7F E5 FB 78 */	mr r5, r31
/* 80174684 00171764  38 7C 01 04 */	addi r3, r28, 0x104
/* 80174688 00171768  38 C6 05 91 */	addi r6, r6, 0x591
/* 8017468C 0017176C  C0 22 AC BC */	lfs f1, "@1606"@sda21(r2)
/* 80174690 00171770  C0 42 AD 28 */	lfs f2, "@1992"@sda21(r2)
/* 80174694 00171774  C0 62 AD 14 */	lfs f3, "@1987"@sda21(r2)
/* 80174698 00171778  48 00 78 D5 */	bl "load_param<f,f>__10auto_tweakFRffffP16xModelAssetParamUiPCc"
.L_8017469C:
/* 8017469C 0017177C  57 A0 06 3F */	clrlwi. r0, r29, 24
/* 801746A0 00171780  41 82 00 34 */	beq .L_801746D4
/* 801746A4 00171784  C0 02 AD 1C */	lfs f0, "@1989"@sda21(r2)
/* 801746A8 00171788  3C 60 80 27 */	lis r3, "@stringBase0"@ha
/* 801746AC 0017178C  38 C3 20 F0 */	addi r6, r3, "@stringBase0"@l
/* 801746B0 00171790  7F C4 F3 78 */	mr r4, r30
/* 801746B4 00171794  D0 1C 01 08 */	stfs f0, 0x108(r28)
/* 801746B8 00171798  7F E5 FB 78 */	mr r5, r31
/* 801746BC 0017179C  38 7C 01 08 */	addi r3, r28, 0x108
/* 801746C0 001717A0  38 C6 05 A1 */	addi r6, r6, 0x5a1
/* 801746C4 001717A4  C0 22 AC BC */	lfs f1, "@1606"@sda21(r2)
/* 801746C8 001717A8  C0 42 AD 20 */	lfs f2, "@1990"@sda21(r2)
/* 801746CC 001717AC  C0 62 AD 24 */	lfs f3, "@1991"@sda21(r2)
/* 801746D0 001717B0  48 00 78 9D */	bl "load_param<f,f>__10auto_tweakFRffffP16xModelAssetParamUiPCc"
.L_801746D4:
/* 801746D4 001717B4  57 A0 06 3F */	clrlwi. r0, r29, 24
/* 801746D8 001717B8  41 82 00 34 */	beq .L_8017470C
/* 801746DC 001717BC  C0 02 AD 68 */	lfs f0, "@2008"@sda21(r2)
/* 801746E0 001717C0  3C 60 80 27 */	lis r3, "@stringBase0"@ha
/* 801746E4 001717C4  38 C3 20 F0 */	addi r6, r3, "@stringBase0"@l
/* 801746E8 001717C8  7F C4 F3 78 */	mr r4, r30
/* 801746EC 001717CC  D0 1C 01 0C */	stfs f0, 0x10c(r28)
/* 801746F0 001717D0  7F E5 FB 78 */	mr r5, r31
/* 801746F4 001717D4  38 7C 01 0C */	addi r3, r28, 0x10c
/* 801746F8 001717D8  38 C6 05 B0 */	addi r6, r6, 0x5b0
/* 801746FC 001717DC  C0 22 AC BC */	lfs f1, "@1606"@sda21(r2)
/* 80174700 001717E0  C0 42 AD 28 */	lfs f2, "@1992"@sda21(r2)
/* 80174704 001717E4  C0 62 AD 14 */	lfs f3, "@1987"@sda21(r2)
/* 80174708 001717E8  48 00 78 65 */	bl "load_param<f,f>__10auto_tweakFRffffP16xModelAssetParamUiPCc"
.L_8017470C:
/* 8017470C 001717EC  57 A0 06 3F */	clrlwi. r0, r29, 24
/* 80174710 001717F0  41 82 00 34 */	beq .L_80174744
/* 80174714 001717F4  C0 02 AC D0 */	lfs f0, "@1690"@sda21(r2)
/* 80174718 001717F8  3C 60 80 27 */	lis r3, "@stringBase0"@ha
/* 8017471C 001717FC  38 C3 20 F0 */	addi r6, r3, "@stringBase0"@l
/* 80174720 00171800  7F C4 F3 78 */	mr r4, r30
/* 80174724 00171804  D0 1C 01 10 */	stfs f0, 0x110(r28)
/* 80174728 00171808  7F E5 FB 78 */	mr r5, r31
/* 8017472C 0017180C  38 7C 01 10 */	addi r3, r28, 0x110
/* 80174730 00171810  38 C6 05 C2 */	addi r6, r6, 0x5c2
/* 80174734 00171814  C0 22 AC BC */	lfs f1, "@1606"@sda21(r2)
/* 80174738 00171818  C0 42 AC B8 */	lfs f2, "@1605"@sda21(r2)
/* 8017473C 0017181C  C0 62 AD 14 */	lfs f3, "@1987"@sda21(r2)
/* 80174740 00171820  48 00 78 2D */	bl "load_param<f,f>__10auto_tweakFRffffP16xModelAssetParamUiPCc"
.L_80174744:
/* 80174744 00171824  57 A0 06 3F */	clrlwi. r0, r29, 24
/* 80174748 00171828  41 82 00 34 */	beq .L_8017477C
/* 8017474C 0017182C  C0 02 AD 6C */	lfs f0, "@2009"@sda21(r2)
/* 80174750 00171830  3C 60 80 27 */	lis r3, "@stringBase0"@ha
/* 80174754 00171834  38 C3 20 F0 */	addi r6, r3, "@stringBase0"@l
/* 80174758 00171838  7F C4 F3 78 */	mr r4, r30
/* 8017475C 0017183C  D0 1C 01 14 */	stfs f0, 0x114(r28)
/* 80174760 00171840  7F E5 FB 78 */	mr r5, r31
/* 80174764 00171844  38 7C 01 14 */	addi r3, r28, 0x114
/* 80174768 00171848  38 C6 05 D5 */	addi r6, r6, 0x5d5
/* 8017476C 0017184C  C0 22 AC BC */	lfs f1, "@1606"@sda21(r2)
/* 80174770 00171850  C0 42 AC B8 */	lfs f2, "@1605"@sda21(r2)
/* 80174774 00171854  FC 60 08 90 */	fmr f3, f1
/* 80174778 00171858  48 00 77 F5 */	bl "load_param<f,f>__10auto_tweakFRffffP16xModelAssetParamUiPCc"
.L_8017477C:
/* 8017477C 0017185C  57 A0 06 3F */	clrlwi. r0, r29, 24
/* 80174780 00171860  41 82 00 34 */	beq .L_801747B4
/* 80174784 00171864  C0 02 AD 70 */	lfs f0, "@2010"@sda21(r2)
/* 80174788 00171868  3C 60 80 27 */	lis r3, "@stringBase0"@ha
/* 8017478C 0017186C  38 C3 20 F0 */	addi r6, r3, "@stringBase0"@l
/* 80174790 00171870  7F C4 F3 78 */	mr r4, r30
/* 80174794 00171874  D0 1C 01 18 */	stfs f0, 0x118(r28)
/* 80174798 00171878  7F E5 FB 78 */	mr r5, r31
/* 8017479C 0017187C  38 7C 01 18 */	addi r3, r28, 0x118
/* 801747A0 00171880  38 C6 05 E1 */	addi r6, r6, 0x5e1
/* 801747A4 00171884  C0 22 AC FC */	lfs f1, "@1981"@sda21(r2)
/* 801747A8 00171888  C0 42 AD 74 */	lfs f2, "@2011"@sda21(r2)
/* 801747AC 0017188C  C0 62 AD 78 */	lfs f3, "@2012"@sda21(r2)
/* 801747B0 00171890  48 00 77 BD */	bl "load_param<f,f>__10auto_tweakFRffffP16xModelAssetParamUiPCc"
.L_801747B4:
/* 801747B4 00171894  57 A0 06 3F */	clrlwi. r0, r29, 24
/* 801747B8 00171898  41 82 00 34 */	beq .L_801747EC
/* 801747BC 0017189C  C0 02 AC D0 */	lfs f0, "@1690"@sda21(r2)
/* 801747C0 001718A0  3C 60 80 27 */	lis r3, "@stringBase0"@ha
/* 801747C4 001718A4  38 C3 20 F0 */	addi r6, r3, "@stringBase0"@l
/* 801747C8 001718A8  7F C4 F3 78 */	mr r4, r30
/* 801747CC 001718AC  D0 1C 01 1C */	stfs f0, 0x11c(r28)
/* 801747D0 001718B0  7F E5 FB 78 */	mr r5, r31
/* 801747D4 001718B4  38 7C 01 1C */	addi r3, r28, 0x11c
/* 801747D8 001718B8  38 C6 05 F2 */	addi r6, r6, 0x5f2
/* 801747DC 001718BC  C0 22 AC BC */	lfs f1, "@1606"@sda21(r2)
/* 801747E0 001718C0  C0 42 AC B8 */	lfs f2, "@1605"@sda21(r2)
/* 801747E4 001718C4  C0 62 AD 14 */	lfs f3, "@1987"@sda21(r2)
/* 801747E8 001718C8  48 00 77 85 */	bl "load_param<f,f>__10auto_tweakFRffffP16xModelAssetParamUiPCc"
.L_801747EC:
/* 801747EC 001718CC  57 A0 06 3F */	clrlwi. r0, r29, 24
/* 801747F0 001718D0  41 82 00 34 */	beq .L_80174824
/* 801747F4 001718D4  C0 02 AD 34 */	lfs f0, "@1995"@sda21(r2)
/* 801747F8 001718D8  3C 60 80 27 */	lis r3, "@stringBase0"@ha
/* 801747FC 001718DC  38 C3 20 F0 */	addi r6, r3, "@stringBase0"@l
/* 80174800 001718E0  7F C4 F3 78 */	mr r4, r30
/* 80174804 001718E4  D0 1C 01 20 */	stfs f0, 0x120(r28)
/* 80174808 001718E8  7F E5 FB 78 */	mr r5, r31
/* 8017480C 001718EC  38 7C 01 20 */	addi r3, r28, 0x120
/* 80174810 001718F0  38 C6 06 04 */	addi r6, r6, 0x604
/* 80174814 001718F4  C0 22 AC BC */	lfs f1, "@1606"@sda21(r2)
/* 80174818 001718F8  C0 42 AC EC */	lfs f2, "@1977"@sda21(r2)
/* 8017481C 001718FC  C0 62 AD 14 */	lfs f3, "@1987"@sda21(r2)
/* 80174820 00171900  48 00 77 4D */	bl "load_param<f,f>__10auto_tweakFRffffP16xModelAssetParamUiPCc"
.L_80174824:
/* 80174824 00171904  57 A0 06 3F */	clrlwi. r0, r29, 24
/* 80174828 00171908  41 82 00 34 */	beq .L_8017485C
/* 8017482C 0017190C  C0 02 AD 14 */	lfs f0, "@1987"@sda21(r2)
/* 80174830 00171910  3C 60 80 27 */	lis r3, "@stringBase0"@ha
/* 80174834 00171914  38 C3 20 F0 */	addi r6, r3, "@stringBase0"@l
/* 80174838 00171918  7F C4 F3 78 */	mr r4, r30
/* 8017483C 0017191C  D0 1C 01 24 */	stfs f0, 0x124(r28)
/* 80174840 00171920  7F E5 FB 78 */	mr r5, r31
/* 80174844 00171924  38 7C 01 24 */	addi r3, r28, 0x124
/* 80174848 00171928  38 C6 06 17 */	addi r6, r6, 0x617
/* 8017484C 0017192C  C0 22 AC BC */	lfs f1, "@1606"@sda21(r2)
/* 80174850 00171930  C0 62 AD 24 */	lfs f3, "@1991"@sda21(r2)
/* 80174854 00171934  FC 40 08 90 */	fmr f2, f1
/* 80174858 00171938  48 00 77 15 */	bl "load_param<f,f>__10auto_tweakFRffffP16xModelAssetParamUiPCc"
.L_8017485C:
/* 8017485C 0017193C  57 A0 06 3F */	clrlwi. r0, r29, 24
/* 80174860 00171940  41 82 00 34 */	beq .L_80174894
/* 80174864 00171944  C0 02 AD 1C */	lfs f0, "@1989"@sda21(r2)
/* 80174868 00171948  3C 60 80 27 */	lis r3, "@stringBase0"@ha
/* 8017486C 0017194C  38 C3 20 F0 */	addi r6, r3, "@stringBase0"@l
/* 80174870 00171950  7F C4 F3 78 */	mr r4, r30
/* 80174874 00171954  D0 1C 01 2C */	stfs f0, 0x12c(r28)
/* 80174878 00171958  7F E5 FB 78 */	mr r5, r31
/* 8017487C 0017195C  38 7C 01 2C */	addi r3, r28, 0x12c
/* 80174880 00171960  38 C6 06 29 */	addi r6, r6, 0x629
/* 80174884 00171964  C0 22 AC BC */	lfs f1, "@1606"@sda21(r2)
/* 80174888 00171968  C0 42 AC B8 */	lfs f2, "@1605"@sda21(r2)
/* 8017488C 0017196C  C0 62 AD 24 */	lfs f3, "@1991"@sda21(r2)
/* 80174890 00171970  48 00 76 DD */	bl "load_param<f,f>__10auto_tweakFRffffP16xModelAssetParamUiPCc"
.L_80174894:
/* 80174894 00171974  57 A0 06 3F */	clrlwi. r0, r29, 24
/* 80174898 00171978  41 82 00 34 */	beq .L_801748CC
/* 8017489C 0017197C  C0 02 AC C0 */	lfs f0, "@1632"@sda21(r2)
/* 801748A0 00171980  3C 60 80 27 */	lis r3, "@stringBase0"@ha
/* 801748A4 00171984  38 C3 20 F0 */	addi r6, r3, "@stringBase0"@l
/* 801748A8 00171988  7F C4 F3 78 */	mr r4, r30
/* 801748AC 0017198C  D0 1C 01 30 */	stfs f0, 0x130(r28)
/* 801748B0 00171990  7F E5 FB 78 */	mr r5, r31
/* 801748B4 00171994  38 7C 01 30 */	addi r3, r28, 0x130
/* 801748B8 00171998  38 C6 06 3F */	addi r6, r6, 0x63f
/* 801748BC 0017199C  C0 22 AC BC */	lfs f1, "@1606"@sda21(r2)
/* 801748C0 001719A0  C0 42 AC B8 */	lfs f2, "@1605"@sda21(r2)
/* 801748C4 001719A4  C0 62 AD 24 */	lfs f3, "@1991"@sda21(r2)
/* 801748C8 001719A8  48 00 76 A5 */	bl "load_param<f,f>__10auto_tweakFRffffP16xModelAssetParamUiPCc"
.L_801748CC:
/* 801748CC 001719AC  57 A0 06 3F */	clrlwi. r0, r29, 24
/* 801748D0 001719B0  41 82 00 34 */	beq .L_80174904
/* 801748D4 001719B4  C0 02 AD 70 */	lfs f0, "@2010"@sda21(r2)
/* 801748D8 001719B8  3C 60 80 27 */	lis r3, "@stringBase0"@ha
/* 801748DC 001719BC  38 C3 20 F0 */	addi r6, r3, "@stringBase0"@l
/* 801748E0 001719C0  7F C4 F3 78 */	mr r4, r30
/* 801748E4 001719C4  D0 1C 01 34 */	stfs f0, 0x134(r28)
/* 801748E8 001719C8  7F E5 FB 78 */	mr r5, r31
/* 801748EC 001719CC  38 7C 01 34 */	addi r3, r28, 0x134
/* 801748F0 001719D0  38 C6 06 56 */	addi r6, r6, 0x656
/* 801748F4 001719D4  C0 22 AC FC */	lfs f1, "@1981"@sda21(r2)
/* 801748F8 001719D8  C0 42 AC EC */	lfs f2, "@1977"@sda21(r2)
/* 801748FC 001719DC  C0 62 AD 00 */	lfs f3, "@1982"@sda21(r2)
/* 80174900 001719E0  48 00 76 6D */	bl "load_param<f,f>__10auto_tweakFRffffP16xModelAssetParamUiPCc"
.L_80174904:
/* 80174904 001719E4  57 A0 06 3F */	clrlwi. r0, r29, 24
/* 80174908 001719E8  41 82 00 34 */	beq .L_8017493C
/* 8017490C 001719EC  C0 02 AD 78 */	lfs f0, "@2012"@sda21(r2)
/* 80174910 001719F0  3C 60 80 27 */	lis r3, "@stringBase0"@ha
/* 80174914 001719F4  38 C3 20 F0 */	addi r6, r3, "@stringBase0"@l
/* 80174918 001719F8  7F C4 F3 78 */	mr r4, r30
/* 8017491C 001719FC  D0 1C 01 38 */	stfs f0, 0x138(r28)
/* 80174920 00171A00  7F E5 FB 78 */	mr r5, r31
/* 80174924 00171A04  38 7C 01 38 */	addi r3, r28, 0x138
/* 80174928 00171A08  38 C6 06 6D */	addi r6, r6, 0x66d
/* 8017492C 00171A0C  C0 22 AC FC */	lfs f1, "@1981"@sda21(r2)
/* 80174930 00171A10  C0 42 AC EC */	lfs f2, "@1977"@sda21(r2)
/* 80174934 00171A14  C0 62 AD 00 */	lfs f3, "@1982"@sda21(r2)
/* 80174938 00171A18  48 00 76 35 */	bl "load_param<f,f>__10auto_tweakFRffffP16xModelAssetParamUiPCc"
.L_8017493C:
/* 8017493C 00171A1C  57 A0 06 3F */	clrlwi. r0, r29, 24
/* 80174940 00171A20  41 82 00 34 */	beq .L_80174974
/* 80174944 00171A24  C0 02 AD 1C */	lfs f0, "@1989"@sda21(r2)
/* 80174948 00171A28  3C 60 80 27 */	lis r3, "@stringBase0"@ha
/* 8017494C 00171A2C  38 C3 20 F0 */	addi r6, r3, "@stringBase0"@l
/* 80174950 00171A30  7F C4 F3 78 */	mr r4, r30
/* 80174954 00171A34  D0 1C 01 3C */	stfs f0, 0x13c(r28)
/* 80174958 00171A38  7F E5 FB 78 */	mr r5, r31
/* 8017495C 00171A3C  38 7C 01 3C */	addi r3, r28, 0x13c
/* 80174960 00171A40  38 C6 06 85 */	addi r6, r6, 0x685
/* 80174964 00171A44  C0 22 AC BC */	lfs f1, "@1606"@sda21(r2)
/* 80174968 00171A48  C0 42 AC B8 */	lfs f2, "@1605"@sda21(r2)
/* 8017496C 00171A4C  C0 62 AD 24 */	lfs f3, "@1991"@sda21(r2)
/* 80174970 00171A50  48 00 75 FD */	bl "load_param<f,f>__10auto_tweakFRffffP16xModelAssetParamUiPCc"
.L_80174974:
/* 80174974 00171A54  57 A0 06 3F */	clrlwi. r0, r29, 24
/* 80174978 00171A58  41 82 00 34 */	beq .L_801749AC
/* 8017497C 00171A5C  C0 02 AD 4C */	lfs f0, "@2001"@sda21(r2)
/* 80174980 00171A60  3C 60 80 27 */	lis r3, "@stringBase0"@ha
/* 80174984 00171A64  38 C3 20 F0 */	addi r6, r3, "@stringBase0"@l
/* 80174988 00171A68  7F C4 F3 78 */	mr r4, r30
/* 8017498C 00171A6C  D0 1C 01 40 */	stfs f0, 0x140(r28)
/* 80174990 00171A70  7F E5 FB 78 */	mr r5, r31
/* 80174994 00171A74  38 7C 01 40 */	addi r3, r28, 0x140
/* 80174998 00171A78  38 C6 06 97 */	addi r6, r6, 0x697
/* 8017499C 00171A7C  C0 22 AC BC */	lfs f1, "@1606"@sda21(r2)
/* 801749A0 00171A80  C0 42 AC B8 */	lfs f2, "@1605"@sda21(r2)
/* 801749A4 00171A84  C0 62 AD 7C */	lfs f3, "@2013"@sda21(r2)
/* 801749A8 00171A88  48 00 75 C5 */	bl "load_param<f,f>__10auto_tweakFRffffP16xModelAssetParamUiPCc"
.L_801749AC:
/* 801749AC 00171A8C  57 A0 06 3F */	clrlwi. r0, r29, 24
/* 801749B0 00171A90  41 82 00 34 */	beq .L_801749E4
/* 801749B4 00171A94  C0 02 AC BC */	lfs f0, "@1606"@sda21(r2)
/* 801749B8 00171A98  3C 60 80 27 */	lis r3, "@stringBase0"@ha
/* 801749BC 00171A9C  38 C3 20 F0 */	addi r6, r3, "@stringBase0"@l
/* 801749C0 00171AA0  7F C4 F3 78 */	mr r4, r30
/* 801749C4 00171AA4  D0 1C 01 44 */	stfs f0, 0x144(r28)
/* 801749C8 00171AA8  7F E5 FB 78 */	mr r5, r31
/* 801749CC 00171AAC  38 7C 01 44 */	addi r3, r28, 0x144
/* 801749D0 00171AB0  38 C6 06 A3 */	addi r6, r6, 0x6a3
/* 801749D4 00171AB4  C0 22 AC BC */	lfs f1, "@1606"@sda21(r2)
/* 801749D8 00171AB8  C0 42 AC B8 */	lfs f2, "@1605"@sda21(r2)
/* 801749DC 00171ABC  C0 62 AD 24 */	lfs f3, "@1991"@sda21(r2)
/* 801749E0 00171AC0  48 00 75 8D */	bl "load_param<f,f>__10auto_tweakFRffffP16xModelAssetParamUiPCc"
.L_801749E4:
/* 801749E4 00171AC4  57 A0 06 3F */	clrlwi. r0, r29, 24
/* 801749E8 00171AC8  41 82 00 34 */	beq .L_80174A1C
/* 801749EC 00171ACC  C0 02 AC D0 */	lfs f0, "@1690"@sda21(r2)
/* 801749F0 00171AD0  3C 60 80 27 */	lis r3, "@stringBase0"@ha
/* 801749F4 00171AD4  38 C3 20 F0 */	addi r6, r3, "@stringBase0"@l
/* 801749F8 00171AD8  7F C4 F3 78 */	mr r4, r30
/* 801749FC 00171ADC  D0 1C 01 48 */	stfs f0, 0x148(r28)
/* 80174A00 00171AE0  7F E5 FB 78 */	mr r5, r31
/* 80174A04 00171AE4  38 7C 01 48 */	addi r3, r28, 0x148
/* 80174A08 00171AE8  38 C6 06 B6 */	addi r6, r6, 0x6b6
/* 80174A0C 00171AEC  C0 22 AC BC */	lfs f1, "@1606"@sda21(r2)
/* 80174A10 00171AF0  C0 42 AC B8 */	lfs f2, "@1605"@sda21(r2)
/* 80174A14 00171AF4  C0 62 AD 14 */	lfs f3, "@1987"@sda21(r2)
/* 80174A18 00171AF8  48 00 75 55 */	bl "load_param<f,f>__10auto_tweakFRffffP16xModelAssetParamUiPCc"
.L_80174A1C:
/* 80174A1C 00171AFC  57 A0 06 3F */	clrlwi. r0, r29, 24
/* 80174A20 00171B00  41 82 00 34 */	beq .L_80174A54
/* 80174A24 00171B04  C0 02 AD 34 */	lfs f0, "@1995"@sda21(r2)
/* 80174A28 00171B08  3C 60 80 27 */	lis r3, "@stringBase0"@ha
/* 80174A2C 00171B0C  38 C3 20 F0 */	addi r6, r3, "@stringBase0"@l
/* 80174A30 00171B10  7F C4 F3 78 */	mr r4, r30
/* 80174A34 00171B14  D0 1C 01 4C */	stfs f0, 0x14c(r28)
/* 80174A38 00171B18  7F E5 FB 78 */	mr r5, r31
/* 80174A3C 00171B1C  38 7C 01 4C */	addi r3, r28, 0x14c
/* 80174A40 00171B20  38 C6 06 C9 */	addi r6, r6, 0x6c9
/* 80174A44 00171B24  C0 22 AC BC */	lfs f1, "@1606"@sda21(r2)
/* 80174A48 00171B28  C0 42 AC B8 */	lfs f2, "@1605"@sda21(r2)
/* 80174A4C 00171B2C  C0 62 AD 14 */	lfs f3, "@1987"@sda21(r2)
/* 80174A50 00171B30  48 00 75 1D */	bl "load_param<f,f>__10auto_tweakFRffffP16xModelAssetParamUiPCc"
.L_80174A54:
/* 80174A54 00171B34  57 A0 06 3F */	clrlwi. r0, r29, 24
/* 80174A58 00171B38  41 82 00 4C */	beq .L_80174AA4
/* 80174A5C 00171B3C  C0 22 AD 34 */	lfs f1, "@1995"@sda21(r2)
/* 80174A60 00171B40  38 61 00 14 */	addi r3, r1, 0x14
/* 80174A64 00171B44  C0 42 AD 18 */	lfs f2, "@1988"@sda21(r2)
/* 80174A68 00171B48  C0 62 AC C4 */	lfs f3, "@1633"@sda21(r2)
/* 80174A6C 00171B4C  4B EE B5 1D */	bl create__5xVec3Ffff
/* 80174A70 00171B50  38 7C 01 50 */	addi r3, r28, 0x150
/* 80174A74 00171B54  38 81 00 14 */	addi r4, r1, 0x14
/* 80174A78 00171B58  4B E9 67 ED */	bl __as__5xVec3FRC5xVec3
/* 80174A7C 00171B5C  3C 60 80 27 */	lis r3, "@stringBase0"@ha
/* 80174A80 00171B60  7F C7 F3 78 */	mr r7, r30
/* 80174A84 00171B64  38 A3 20 F0 */	addi r5, r3, "@stringBase0"@l
/* 80174A88 00171B68  7F E8 FB 78 */	mr r8, r31
/* 80174A8C 00171B6C  38 7C 01 50 */	addi r3, r28, 0x150
/* 80174A90 00171B70  38 80 00 00 */	li r4, 0x0
/* 80174A94 00171B74  39 25 06 E2 */	addi r9, r5, 0x6e2
/* 80174A98 00171B78  38 A0 00 00 */	li r5, 0x0
/* 80174A9C 00171B7C  38 C0 00 00 */	li r6, 0x0
/* 80174AA0 00171B80  48 00 74 7D */	bl "load_param<5xVec3,i>__10auto_tweakFR5xVec3iiiP16xModelAssetParamUiPCc"
.L_80174AA4:
/* 80174AA4 00171B84  57 A0 06 3F */	clrlwi. r0, r29, 24
/* 80174AA8 00171B88  41 82 00 4C */	beq .L_80174AF4
/* 80174AAC 00171B8C  C0 22 AD 1C */	lfs f1, "@1989"@sda21(r2)
/* 80174AB0 00171B90  38 61 00 08 */	addi r3, r1, 0x8
/* 80174AB4 00171B94  C0 62 AC F4 */	lfs f3, "@1979"@sda21(r2)
/* 80174AB8 00171B98  FC 40 08 90 */	fmr f2, f1
/* 80174ABC 00171B9C  4B EE B4 CD */	bl create__5xVec3Ffff
/* 80174AC0 00171BA0  38 7C 01 5C */	addi r3, r28, 0x15c
/* 80174AC4 00171BA4  38 81 00 08 */	addi r4, r1, 0x8
/* 80174AC8 00171BA8  4B E9 67 9D */	bl __as__5xVec3FRC5xVec3
/* 80174ACC 00171BAC  3C 60 80 27 */	lis r3, "@stringBase0"@ha
/* 80174AD0 00171BB0  7F C7 F3 78 */	mr r7, r30
/* 80174AD4 00171BB4  38 A3 20 F0 */	addi r5, r3, "@stringBase0"@l
/* 80174AD8 00171BB8  7F E8 FB 78 */	mr r8, r31
/* 80174ADC 00171BBC  38 7C 01 5C */	addi r3, r28, 0x15c
/* 80174AE0 00171BC0  38 80 00 00 */	li r4, 0x0
/* 80174AE4 00171BC4  39 25 06 F4 */	addi r9, r5, 0x6f4
/* 80174AE8 00171BC8  38 A0 00 00 */	li r5, 0x0
/* 80174AEC 00171BCC  38 C0 00 00 */	li r6, 0x0
/* 80174AF0 00171BD0  48 00 74 2D */	bl "load_param<5xVec3,i>__10auto_tweakFR5xVec3iiiP16xModelAssetParamUiPCc"
.L_80174AF4:
/* 80174AF4 00171BD4  57 A0 06 3F */	clrlwi. r0, r29, 24
/* 80174AF8 00171BD8  41 82 00 34 */	beq .L_80174B2C
/* 80174AFC 00171BDC  C0 02 AC C0 */	lfs f0, "@1632"@sda21(r2)
/* 80174B00 00171BE0  3C 60 80 27 */	lis r3, "@stringBase0"@ha
/* 80174B04 00171BE4  38 C3 20 F0 */	addi r6, r3, "@stringBase0"@l
/* 80174B08 00171BE8  7F C4 F3 78 */	mr r4, r30
/* 80174B0C 00171BEC  D0 1C 01 68 */	stfs f0, 0x168(r28)
/* 80174B10 00171BF0  7F E5 FB 78 */	mr r5, r31
/* 80174B14 00171BF4  38 7C 01 68 */	addi r3, r28, 0x168
/* 80174B18 00171BF8  38 C6 07 05 */	addi r6, r6, 0x705
/* 80174B1C 00171BFC  C0 22 AC BC */	lfs f1, "@1606"@sda21(r2)
/* 80174B20 00171C00  C0 42 AC B8 */	lfs f2, "@1605"@sda21(r2)
/* 80174B24 00171C04  C0 62 AD 14 */	lfs f3, "@1987"@sda21(r2)
/* 80174B28 00171C08  48 00 74 45 */	bl "load_param<f,f>__10auto_tweakFRffffP16xModelAssetParamUiPCc"
.L_80174B2C:
/* 80174B2C 00171C0C  57 A0 06 3F */	clrlwi. r0, r29, 24
/* 80174B30 00171C10  41 82 00 34 */	beq .L_80174B64
/* 80174B34 00171C14  C0 02 AC BC */	lfs f0, "@1606"@sda21(r2)
/* 80174B38 00171C18  3C 60 80 27 */	lis r3, "@stringBase0"@ha
/* 80174B3C 00171C1C  38 C3 20 F0 */	addi r6, r3, "@stringBase0"@l
/* 80174B40 00171C20  7F C4 F3 78 */	mr r4, r30
/* 80174B44 00171C24  D0 1C 01 6C */	stfs f0, 0x16c(r28)
/* 80174B48 00171C28  7F E5 FB 78 */	mr r5, r31
/* 80174B4C 00171C2C  38 7C 01 6C */	addi r3, r28, 0x16c
/* 80174B50 00171C30  38 C6 07 18 */	addi r6, r6, 0x718
/* 80174B54 00171C34  C0 22 AC BC */	lfs f1, "@1606"@sda21(r2)
/* 80174B58 00171C38  C0 42 AC B8 */	lfs f2, "@1605"@sda21(r2)
/* 80174B5C 00171C3C  C0 62 AD 14 */	lfs f3, "@1987"@sda21(r2)
/* 80174B60 00171C40  48 00 74 0D */	bl "load_param<f,f>__10auto_tweakFRffffP16xModelAssetParamUiPCc"
.L_80174B64:
/* 80174B64 00171C44  57 A0 06 3F */	clrlwi. r0, r29, 24
/* 80174B68 00171C48  41 82 00 34 */	beq .L_80174B9C
/* 80174B6C 00171C4C  C0 02 AD 80 */	lfs f0, "@2014"@sda21(r2)
/* 80174B70 00171C50  3C 60 80 27 */	lis r3, "@stringBase0"@ha
/* 80174B74 00171C54  38 C3 20 F0 */	addi r6, r3, "@stringBase0"@l
/* 80174B78 00171C58  7F C4 F3 78 */	mr r4, r30
/* 80174B7C 00171C5C  D0 1C 01 70 */	stfs f0, 0x170(r28)
/* 80174B80 00171C60  7F E5 FB 78 */	mr r5, r31
/* 80174B84 00171C64  38 7C 01 70 */	addi r3, r28, 0x170
/* 80174B88 00171C68  38 C6 07 2B */	addi r6, r6, 0x72b
/* 80174B8C 00171C6C  C0 22 AC BC */	lfs f1, "@1606"@sda21(r2)
/* 80174B90 00171C70  C0 42 AC B8 */	lfs f2, "@1605"@sda21(r2)
/* 80174B94 00171C74  C0 62 AD 4C */	lfs f3, "@2001"@sda21(r2)
/* 80174B98 00171C78  48 00 73 D5 */	bl "load_param<f,f>__10auto_tweakFRffffP16xModelAssetParamUiPCc"
.L_80174B9C:
/* 80174B9C 00171C7C  57 A0 06 3F */	clrlwi. r0, r29, 24
/* 80174BA0 00171C80  41 82 00 34 */	beq .L_80174BD4
/* 80174BA4 00171C84  C0 02 AD 84 */	lfs f0, "@2015"@sda21(r2)
/* 80174BA8 00171C88  3C 60 80 27 */	lis r3, "@stringBase0"@ha
/* 80174BAC 00171C8C  38 C3 20 F0 */	addi r6, r3, "@stringBase0"@l
/* 80174BB0 00171C90  7F C4 F3 78 */	mr r4, r30
/* 80174BB4 00171C94  D0 1C 01 74 */	stfs f0, 0x174(r28)
/* 80174BB8 00171C98  7F E5 FB 78 */	mr r5, r31
/* 80174BBC 00171C9C  38 7C 01 74 */	addi r3, r28, 0x174
/* 80174BC0 00171CA0  38 C6 07 3D */	addi r6, r6, 0x73d
/* 80174BC4 00171CA4  C0 22 AC BC */	lfs f1, "@1606"@sda21(r2)
/* 80174BC8 00171CA8  C0 42 AC B8 */	lfs f2, "@1605"@sda21(r2)
/* 80174BCC 00171CAC  C0 62 AD 14 */	lfs f3, "@1987"@sda21(r2)
/* 80174BD0 00171CB0  48 00 73 9D */	bl "load_param<f,f>__10auto_tweakFRffffP16xModelAssetParamUiPCc"
.L_80174BD4:
/* 80174BD4 00171CB4  57 A0 06 3F */	clrlwi. r0, r29, 24
/* 80174BD8 00171CB8  41 82 00 34 */	beq .L_80174C0C
/* 80174BDC 00171CBC  C0 02 AD 64 */	lfs f0, "@2007"@sda21(r2)
/* 80174BE0 00171CC0  3C 60 80 27 */	lis r3, "@stringBase0"@ha
/* 80174BE4 00171CC4  38 C3 20 F0 */	addi r6, r3, "@stringBase0"@l
/* 80174BE8 00171CC8  7F C4 F3 78 */	mr r4, r30
/* 80174BEC 00171CCC  D0 1C 01 78 */	stfs f0, 0x178(r28)
/* 80174BF0 00171CD0  7F E5 FB 78 */	mr r5, r31
/* 80174BF4 00171CD4  38 7C 01 78 */	addi r3, r28, 0x178
/* 80174BF8 00171CD8  38 C6 07 48 */	addi r6, r6, 0x748
/* 80174BFC 00171CDC  C0 22 AC BC */	lfs f1, "@1606"@sda21(r2)
/* 80174C00 00171CE0  C0 42 AC B8 */	lfs f2, "@1605"@sda21(r2)
/* 80174C04 00171CE4  C0 62 AD 14 */	lfs f3, "@1987"@sda21(r2)
/* 80174C08 00171CE8  48 00 73 65 */	bl "load_param<f,f>__10auto_tweakFRffffP16xModelAssetParamUiPCc"
.L_80174C0C:
/* 80174C0C 00171CEC  57 A0 06 3F */	clrlwi. r0, r29, 24
/* 80174C10 00171CF0  41 82 00 34 */	beq .L_80174C44
/* 80174C14 00171CF4  C0 02 AD 1C */	lfs f0, "@1989"@sda21(r2)
/* 80174C18 00171CF8  3C 60 80 27 */	lis r3, "@stringBase0"@ha
/* 80174C1C 00171CFC  38 C3 20 F0 */	addi r6, r3, "@stringBase0"@l
/* 80174C20 00171D00  7F C4 F3 78 */	mr r4, r30
/* 80174C24 00171D04  D0 1C 01 7C */	stfs f0, 0x17c(r28)
/* 80174C28 00171D08  7F E5 FB 78 */	mr r5, r31
/* 80174C2C 00171D0C  38 7C 01 7C */	addi r3, r28, 0x17c
/* 80174C30 00171D10  38 C6 07 56 */	addi r6, r6, 0x756
/* 80174C34 00171D14  C0 22 AC BC */	lfs f1, "@1606"@sda21(r2)
/* 80174C38 00171D18  C0 42 AC B8 */	lfs f2, "@1605"@sda21(r2)
/* 80174C3C 00171D1C  C0 62 AD 24 */	lfs f3, "@1991"@sda21(r2)
/* 80174C40 00171D20  48 00 73 2D */	bl "load_param<f,f>__10auto_tweakFRffffP16xModelAssetParamUiPCc"
.L_80174C44:
/* 80174C44 00171D24  57 A0 06 3F */	clrlwi. r0, r29, 24
/* 80174C48 00171D28  41 82 00 34 */	beq .L_80174C7C
/* 80174C4C 00171D2C  C0 02 AC B8 */	lfs f0, "@1605"@sda21(r2)
/* 80174C50 00171D30  3C 60 80 27 */	lis r3, "@stringBase0"@ha
/* 80174C54 00171D34  38 C3 20 F0 */	addi r6, r3, "@stringBase0"@l
/* 80174C58 00171D38  7F C4 F3 78 */	mr r4, r30
/* 80174C5C 00171D3C  D0 1C 01 80 */	stfs f0, 0x180(r28)
/* 80174C60 00171D40  7F E5 FB 78 */	mr r5, r31
/* 80174C64 00171D44  38 7C 01 80 */	addi r3, r28, 0x180
/* 80174C68 00171D48  38 C6 07 65 */	addi r6, r6, 0x765
/* 80174C6C 00171D4C  C0 22 AC BC */	lfs f1, "@1606"@sda21(r2)
/* 80174C70 00171D50  C0 42 AD 28 */	lfs f2, "@1992"@sda21(r2)
/* 80174C74 00171D54  C0 62 AD 14 */	lfs f3, "@1987"@sda21(r2)
/* 80174C78 00171D58  48 00 72 F5 */	bl "load_param<f,f>__10auto_tweakFRffffP16xModelAssetParamUiPCc"
.L_80174C7C:
/* 80174C7C 00171D5C  57 A0 06 3F */	clrlwi. r0, r29, 24
/* 80174C80 00171D60  41 82 00 34 */	beq .L_80174CB4
/* 80174C84 00171D64  C0 02 AC DC */	lfs f0, "@1753"@sda21(r2)
/* 80174C88 00171D68  3C 60 80 27 */	lis r3, "@stringBase0"@ha
/* 80174C8C 00171D6C  38 C3 20 F0 */	addi r6, r3, "@stringBase0"@l
/* 80174C90 00171D70  7F C4 F3 78 */	mr r4, r30
/* 80174C94 00171D74  D0 1C 01 84 */	stfs f0, 0x184(r28)
/* 80174C98 00171D78  7F E5 FB 78 */	mr r5, r31
/* 80174C9C 00171D7C  38 7C 01 84 */	addi r3, r28, 0x184
/* 80174CA0 00171D80  38 C6 07 72 */	addi r6, r6, 0x772
/* 80174CA4 00171D84  C0 22 AC BC */	lfs f1, "@1606"@sda21(r2)
/* 80174CA8 00171D88  C0 42 AC EC */	lfs f2, "@1977"@sda21(r2)
/* 80174CAC 00171D8C  C0 62 AD 24 */	lfs f3, "@1991"@sda21(r2)
/* 80174CB0 00171D90  48 00 72 BD */	bl "load_param<f,f>__10auto_tweakFRffffP16xModelAssetParamUiPCc"
.L_80174CB4:
/* 80174CB4 00171D94  57 A0 06 3F */	clrlwi. r0, r29, 24
/* 80174CB8 00171D98  41 82 00 34 */	beq .L_80174CEC
/* 80174CBC 00171D9C  C0 02 AC BC */	lfs f0, "@1606"@sda21(r2)
/* 80174CC0 00171DA0  3C 60 80 27 */	lis r3, "@stringBase0"@ha
/* 80174CC4 00171DA4  38 C3 20 F0 */	addi r6, r3, "@stringBase0"@l
/* 80174CC8 00171DA8  7F C4 F3 78 */	mr r4, r30
/* 80174CCC 00171DAC  D0 1C 01 88 */	stfs f0, 0x188(r28)
/* 80174CD0 00171DB0  7F E5 FB 78 */	mr r5, r31
/* 80174CD4 00171DB4  38 7C 01 88 */	addi r3, r28, 0x188
/* 80174CD8 00171DB8  38 C6 07 86 */	addi r6, r6, 0x786
/* 80174CDC 00171DBC  C0 22 AC BC */	lfs f1, "@1606"@sda21(r2)
/* 80174CE0 00171DC0  C0 42 AC EC */	lfs f2, "@1977"@sda21(r2)
/* 80174CE4 00171DC4  C0 62 AD 24 */	lfs f3, "@1991"@sda21(r2)
/* 80174CE8 00171DC8  48 00 72 85 */	bl "load_param<f,f>__10auto_tweakFRffffP16xModelAssetParamUiPCc"
.L_80174CEC:
/* 80174CEC 00171DCC  57 A0 06 3F */	clrlwi. r0, r29, 24
/* 80174CF0 00171DD0  41 82 00 34 */	beq .L_80174D24
/* 80174CF4 00171DD4  C0 02 AD 88 */	lfs f0, "@2016"@sda21(r2)
/* 80174CF8 00171DD8  3C 60 80 27 */	lis r3, "@stringBase0"@ha
/* 80174CFC 00171DDC  38 C3 20 F0 */	addi r6, r3, "@stringBase0"@l
/* 80174D00 00171DE0  7F C4 F3 78 */	mr r4, r30
/* 80174D04 00171DE4  D0 1C 01 8C */	stfs f0, 0x18c(r28)
/* 80174D08 00171DE8  7F E5 FB 78 */	mr r5, r31
/* 80174D0C 00171DEC  38 7C 01 8C */	addi r3, r28, 0x18c
/* 80174D10 00171DF0  38 C6 07 9A */	addi r6, r6, 0x79a
/* 80174D14 00171DF4  C0 22 AC BC */	lfs f1, "@1606"@sda21(r2)
/* 80174D18 00171DF8  C0 42 AD 20 */	lfs f2, "@1990"@sda21(r2)
/* 80174D1C 00171DFC  C0 62 AD 24 */	lfs f3, "@1991"@sda21(r2)
/* 80174D20 00171E00  48 00 72 4D */	bl "load_param<f,f>__10auto_tweakFRffffP16xModelAssetParamUiPCc"
.L_80174D24:
/* 80174D24 00171E04  57 A0 06 3F */	clrlwi. r0, r29, 24
/* 80174D28 00171E08  41 82 00 34 */	beq .L_80174D5C
/* 80174D2C 00171E0C  C0 02 AD 8C */	lfs f0, "@2017"@sda21(r2)
/* 80174D30 00171E10  3C 60 80 27 */	lis r3, "@stringBase0"@ha
/* 80174D34 00171E14  38 C3 20 F0 */	addi r6, r3, "@stringBase0"@l
/* 80174D38 00171E18  7F C4 F3 78 */	mr r4, r30
/* 80174D3C 00171E1C  D0 1C 01 90 */	stfs f0, 0x190(r28)
/* 80174D40 00171E20  7F E5 FB 78 */	mr r5, r31
/* 80174D44 00171E24  38 7C 01 90 */	addi r3, r28, 0x190
/* 80174D48 00171E28  38 C6 07 A8 */	addi r6, r6, 0x7a8
/* 80174D4C 00171E2C  C0 22 AC BC */	lfs f1, "@1606"@sda21(r2)
/* 80174D50 00171E30  C0 42 AD 20 */	lfs f2, "@1990"@sda21(r2)
/* 80174D54 00171E34  C0 62 AD 24 */	lfs f3, "@1991"@sda21(r2)
/* 80174D58 00171E38  48 00 72 15 */	bl "load_param<f,f>__10auto_tweakFRffffP16xModelAssetParamUiPCc"
.L_80174D5C:
/* 80174D5C 00171E3C  57 A0 06 3F */	clrlwi. r0, r29, 24
/* 80174D60 00171E40  41 82 00 34 */	beq .L_80174D94
/* 80174D64 00171E44  C0 02 AD 1C */	lfs f0, "@1989"@sda21(r2)
/* 80174D68 00171E48  3C 60 80 27 */	lis r3, "@stringBase0"@ha
/* 80174D6C 00171E4C  38 C3 20 F0 */	addi r6, r3, "@stringBase0"@l
/* 80174D70 00171E50  7F C4 F3 78 */	mr r4, r30
/* 80174D74 00171E54  D0 1C 01 94 */	stfs f0, 0x194(r28)
/* 80174D78 00171E58  7F E5 FB 78 */	mr r5, r31
/* 80174D7C 00171E5C  38 7C 01 94 */	addi r3, r28, 0x194
/* 80174D80 00171E60  38 C6 07 B4 */	addi r6, r6, 0x7b4
/* 80174D84 00171E64  C0 22 AC BC */	lfs f1, "@1606"@sda21(r2)
/* 80174D88 00171E68  C0 42 AC B8 */	lfs f2, "@1605"@sda21(r2)
/* 80174D8C 00171E6C  C0 62 AD 00 */	lfs f3, "@1982"@sda21(r2)
/* 80174D90 00171E70  48 00 71 DD */	bl "load_param<f,f>__10auto_tweakFRffffP16xModelAssetParamUiPCc"
.L_80174D94:
/* 80174D94 00171E74  57 A0 06 3F */	clrlwi. r0, r29, 24
/* 80174D98 00171E78  41 82 00 34 */	beq .L_80174DCC
/* 80174D9C 00171E7C  C0 02 AD 1C */	lfs f0, "@1989"@sda21(r2)
/* 80174DA0 00171E80  3C 60 80 27 */	lis r3, "@stringBase0"@ha
/* 80174DA4 00171E84  38 C3 20 F0 */	addi r6, r3, "@stringBase0"@l
/* 80174DA8 00171E88  7F C4 F3 78 */	mr r4, r30
/* 80174DAC 00171E8C  D0 1C 01 98 */	stfs f0, 0x198(r28)
/* 80174DB0 00171E90  7F E5 FB 78 */	mr r5, r31
/* 80174DB4 00171E94  38 7C 01 98 */	addi r3, r28, 0x198
/* 80174DB8 00171E98  38 C6 07 C3 */	addi r6, r6, 0x7c3
/* 80174DBC 00171E9C  C0 22 AC BC */	lfs f1, "@1606"@sda21(r2)
/* 80174DC0 00171EA0  C0 42 AC EC */	lfs f2, "@1977"@sda21(r2)
/* 80174DC4 00171EA4  C0 62 AD 00 */	lfs f3, "@1982"@sda21(r2)
/* 80174DC8 00171EA8  48 00 71 A5 */	bl "load_param<f,f>__10auto_tweakFRffffP16xModelAssetParamUiPCc"
.L_80174DCC:
/* 80174DCC 00171EAC  57 A0 06 3F */	clrlwi. r0, r29, 24
/* 80174DD0 00171EB0  41 82 00 34 */	beq .L_80174E04
/* 80174DD4 00171EB4  C0 02 AC B8 */	lfs f0, "@1605"@sda21(r2)
/* 80174DD8 00171EB8  3C 60 80 27 */	lis r3, "@stringBase0"@ha
/* 80174DDC 00171EBC  38 C3 20 F0 */	addi r6, r3, "@stringBase0"@l
/* 80174DE0 00171EC0  7F C4 F3 78 */	mr r4, r30
/* 80174DE4 00171EC4  D0 1C 01 9C */	stfs f0, 0x19c(r28)
/* 80174DE8 00171EC8  7F E5 FB 78 */	mr r5, r31
/* 80174DEC 00171ECC  38 7C 01 9C */	addi r3, r28, 0x19c
/* 80174DF0 00171ED0  38 C6 07 D8 */	addi r6, r6, 0x7d8
/* 80174DF4 00171ED4  C0 22 AC BC */	lfs f1, "@1606"@sda21(r2)
/* 80174DF8 00171ED8  C0 42 AD 0C */	lfs f2, "@1985"@sda21(r2)
/* 80174DFC 00171EDC  C0 62 AD 00 */	lfs f3, "@1982"@sda21(r2)
/* 80174E00 00171EE0  48 00 71 6D */	bl "load_param<f,f>__10auto_tweakFRffffP16xModelAssetParamUiPCc"
.L_80174E04:
/* 80174E04 00171EE4  57 A0 06 3F */	clrlwi. r0, r29, 24
/* 80174E08 00171EE8  41 82 00 34 */	beq .L_80174E3C
/* 80174E0C 00171EEC  C0 02 AD 14 */	lfs f0, "@1987"@sda21(r2)
/* 80174E10 00171EF0  3C 60 80 27 */	lis r3, "@stringBase0"@ha
/* 80174E14 00171EF4  38 C3 20 F0 */	addi r6, r3, "@stringBase0"@l
/* 80174E18 00171EF8  7F C4 F3 78 */	mr r4, r30
/* 80174E1C 00171EFC  D0 1C 01 A0 */	stfs f0, 0x1a0(r28)
/* 80174E20 00171F00  7F E5 FB 78 */	mr r5, r31
/* 80174E24 00171F04  38 7C 01 A0 */	addi r3, r28, 0x1a0
/* 80174E28 00171F08  38 C6 07 EA */	addi r6, r6, 0x7ea
/* 80174E2C 00171F0C  C0 22 AC BC */	lfs f1, "@1606"@sda21(r2)
/* 80174E30 00171F10  C0 42 AD 0C */	lfs f2, "@1985"@sda21(r2)
/* 80174E34 00171F14  C0 62 AD 00 */	lfs f3, "@1982"@sda21(r2)
/* 80174E38 00171F18  48 00 71 35 */	bl "load_param<f,f>__10auto_tweakFRffffP16xModelAssetParamUiPCc"
.L_80174E3C:
/* 80174E3C 00171F1C  57 A0 06 3F */	clrlwi. r0, r29, 24
/* 80174E40 00171F20  41 82 00 34 */	beq .L_80174E74
/* 80174E44 00171F24  C0 02 AC C0 */	lfs f0, "@1632"@sda21(r2)
/* 80174E48 00171F28  3C 60 80 27 */	lis r3, "@stringBase0"@ha
/* 80174E4C 00171F2C  38 C3 20 F0 */	addi r6, r3, "@stringBase0"@l
/* 80174E50 00171F30  7F C4 F3 78 */	mr r4, r30
/* 80174E54 00171F34  D0 1C 01 A4 */	stfs f0, 0x1a4(r28)
/* 80174E58 00171F38  7F E5 FB 78 */	mr r5, r31
/* 80174E5C 00171F3C  38 7C 01 A4 */	addi r3, r28, 0x1a4
/* 80174E60 00171F40  38 C6 07 FF */	addi r6, r6, 0x7ff
/* 80174E64 00171F44  C0 22 AC BC */	lfs f1, "@1606"@sda21(r2)
/* 80174E68 00171F48  C0 42 AC B8 */	lfs f2, "@1605"@sda21(r2)
/* 80174E6C 00171F4C  FC 60 08 90 */	fmr f3, f1
/* 80174E70 00171F50  48 00 70 FD */	bl "load_param<f,f>__10auto_tweakFRffffP16xModelAssetParamUiPCc"
.L_80174E74:
/* 80174E74 00171F54  57 A0 06 3F */	clrlwi. r0, r29, 24
/* 80174E78 00171F58  41 82 00 34 */	beq .L_80174EAC
/* 80174E7C 00171F5C  C0 02 AC B8 */	lfs f0, "@1605"@sda21(r2)
/* 80174E80 00171F60  3C 60 80 27 */	lis r3, "@stringBase0"@ha
/* 80174E84 00171F64  38 C3 20 F0 */	addi r6, r3, "@stringBase0"@l
/* 80174E88 00171F68  7F C4 F3 78 */	mr r4, r30
/* 80174E8C 00171F6C  D0 1C 01 A8 */	stfs f0, 0x1a8(r28)
/* 80174E90 00171F70  7F E5 FB 78 */	mr r5, r31
/* 80174E94 00171F74  38 7C 01 A8 */	addi r3, r28, 0x1a8
/* 80174E98 00171F78  38 C6 08 18 */	addi r6, r6, 0x818
/* 80174E9C 00171F7C  C0 22 AC BC */	lfs f1, "@1606"@sda21(r2)
/* 80174EA0 00171F80  C0 42 AC B8 */	lfs f2, "@1605"@sda21(r2)
/* 80174EA4 00171F84  C0 62 AC C8 */	lfs f3, "@1634"@sda21(r2)
/* 80174EA8 00171F88  48 00 70 C5 */	bl "load_param<f,f>__10auto_tweakFRffffP16xModelAssetParamUiPCc"
.L_80174EAC:
/* 80174EAC 00171F8C  57 A0 06 3F */	clrlwi. r0, r29, 24
/* 80174EB0 00171F90  41 82 00 34 */	beq .L_80174EE4
/* 80174EB4 00171F94  C0 02 AD 4C */	lfs f0, "@2001"@sda21(r2)
/* 80174EB8 00171F98  3C 60 80 27 */	lis r3, "@stringBase0"@ha
/* 80174EBC 00171F9C  38 C3 20 F0 */	addi r6, r3, "@stringBase0"@l
/* 80174EC0 00171FA0  7F C4 F3 78 */	mr r4, r30
/* 80174EC4 00171FA4  D0 1C 01 AC */	stfs f0, 0x1ac(r28)
/* 80174EC8 00171FA8  7F E5 FB 78 */	mr r5, r31
/* 80174ECC 00171FAC  38 7C 01 AC */	addi r3, r28, 0x1ac
/* 80174ED0 00171FB0  38 C6 08 36 */	addi r6, r6, 0x836
/* 80174ED4 00171FB4  C0 22 AC BC */	lfs f1, "@1606"@sda21(r2)
/* 80174ED8 00171FB8  C0 42 AC B8 */	lfs f2, "@1605"@sda21(r2)
/* 80174EDC 00171FBC  C0 62 AC C8 */	lfs f3, "@1634"@sda21(r2)
/* 80174EE0 00171FC0  48 00 70 8D */	bl "load_param<f,f>__10auto_tweakFRffffP16xModelAssetParamUiPCc"
.L_80174EE4:
/* 80174EE4 00171FC4  57 A0 06 3F */	clrlwi. r0, r29, 24
/* 80174EE8 00171FC8  41 82 00 34 */	beq .L_80174F1C
/* 80174EEC 00171FCC  C0 02 AC B8 */	lfs f0, "@1605"@sda21(r2)
/* 80174EF0 00171FD0  3C 60 80 27 */	lis r3, "@stringBase0"@ha
/* 80174EF4 00171FD4  38 C3 20 F0 */	addi r6, r3, "@stringBase0"@l
/* 80174EF8 00171FD8  7F C4 F3 78 */	mr r4, r30
/* 80174EFC 00171FDC  D0 1C 01 B0 */	stfs f0, 0x1b0(r28)
/* 80174F00 00171FE0  7F E5 FB 78 */	mr r5, r31
/* 80174F04 00171FE4  38 7C 01 B0 */	addi r3, r28, 0x1b0
/* 80174F08 00171FE8  38 C6 08 54 */	addi r6, r6, 0x854
/* 80174F0C 00171FEC  C0 22 AC BC */	lfs f1, "@1606"@sda21(r2)
/* 80174F10 00171FF0  C0 42 AC B8 */	lfs f2, "@1605"@sda21(r2)
/* 80174F14 00171FF4  C0 62 AC C8 */	lfs f3, "@1634"@sda21(r2)
/* 80174F18 00171FF8  48 00 70 55 */	bl "load_param<f,f>__10auto_tweakFRffffP16xModelAssetParamUiPCc"
.L_80174F1C:
/* 80174F1C 00171FFC  57 A0 06 3F */	clrlwi. r0, r29, 24
/* 80174F20 00172000  41 82 00 34 */	beq .L_80174F54
/* 80174F24 00172004  C0 02 AC B8 */	lfs f0, "@1605"@sda21(r2)
/* 80174F28 00172008  3C 60 80 27 */	lis r3, "@stringBase0"@ha
/* 80174F2C 0017200C  38 C3 20 F0 */	addi r6, r3, "@stringBase0"@l
/* 80174F30 00172010  7F C4 F3 78 */	mr r4, r30
/* 80174F34 00172014  D0 1C 01 B4 */	stfs f0, 0x1b4(r28)
/* 80174F38 00172018  7F E5 FB 78 */	mr r5, r31
/* 80174F3C 0017201C  38 7C 01 B4 */	addi r3, r28, 0x1b4
/* 80174F40 00172020  38 C6 08 6C */	addi r6, r6, 0x86c
/* 80174F44 00172024  C0 22 AC BC */	lfs f1, "@1606"@sda21(r2)
/* 80174F48 00172028  C0 42 AC B8 */	lfs f2, "@1605"@sda21(r2)
/* 80174F4C 0017202C  C0 62 AC C8 */	lfs f3, "@1634"@sda21(r2)
/* 80174F50 00172030  48 00 70 1D */	bl "load_param<f,f>__10auto_tweakFRffffP16xModelAssetParamUiPCc"
.L_80174F54:
/* 80174F54 00172034  57 A0 06 3F */	clrlwi. r0, r29, 24
/* 80174F58 00172038  41 82 00 34 */	beq .L_80174F8C
/* 80174F5C 0017203C  C0 02 AC C0 */	lfs f0, "@1632"@sda21(r2)
/* 80174F60 00172040  3C 60 80 27 */	lis r3, "@stringBase0"@ha
/* 80174F64 00172044  38 C3 20 F0 */	addi r6, r3, "@stringBase0"@l
/* 80174F68 00172048  7F C4 F3 78 */	mr r4, r30
/* 80174F6C 0017204C  D0 1C 01 B8 */	stfs f0, 0x1b8(r28)
/* 80174F70 00172050  7F E5 FB 78 */	mr r5, r31
/* 80174F74 00172054  38 7C 01 B8 */	addi r3, r28, 0x1b8
/* 80174F78 00172058  38 C6 08 88 */	addi r6, r6, 0x888
/* 80174F7C 0017205C  C0 22 AC BC */	lfs f1, "@1606"@sda21(r2)
/* 80174F80 00172060  C0 42 AC B8 */	lfs f2, "@1605"@sda21(r2)
/* 80174F84 00172064  FC 60 08 90 */	fmr f3, f1
/* 80174F88 00172068  48 00 6F E5 */	bl "load_param<f,f>__10auto_tweakFRffffP16xModelAssetParamUiPCc"
.L_80174F8C:
/* 80174F8C 0017206C  57 A0 06 3F */	clrlwi. r0, r29, 24
/* 80174F90 00172070  41 82 00 34 */	beq .L_80174FC4
/* 80174F94 00172074  C0 02 AC B8 */	lfs f0, "@1605"@sda21(r2)
/* 80174F98 00172078  3C 60 80 27 */	lis r3, "@stringBase0"@ha
/* 80174F9C 0017207C  38 C3 20 F0 */	addi r6, r3, "@stringBase0"@l
/* 80174FA0 00172080  7F C4 F3 78 */	mr r4, r30
/* 80174FA4 00172084  D0 1C 01 BC */	stfs f0, 0x1bc(r28)
/* 80174FA8 00172088  7F E5 FB 78 */	mr r5, r31
/* 80174FAC 0017208C  38 7C 01 BC */	addi r3, r28, 0x1bc
/* 80174FB0 00172090  38 C6 08 A2 */	addi r6, r6, 0x8a2
/* 80174FB4 00172094  C0 22 AC BC */	lfs f1, "@1606"@sda21(r2)
/* 80174FB8 00172098  C0 42 AC B8 */	lfs f2, "@1605"@sda21(r2)
/* 80174FBC 0017209C  C0 62 AC C8 */	lfs f3, "@1634"@sda21(r2)
/* 80174FC0 001720A0  48 00 6F AD */	bl "load_param<f,f>__10auto_tweakFRffffP16xModelAssetParamUiPCc"
.L_80174FC4:
/* 80174FC4 001720A4  57 A0 06 3F */	clrlwi. r0, r29, 24
/* 80174FC8 001720A8  41 82 00 34 */	beq .L_80174FFC
/* 80174FCC 001720AC  C0 02 AD 4C */	lfs f0, "@2001"@sda21(r2)
/* 80174FD0 001720B0  3C 60 80 27 */	lis r3, "@stringBase0"@ha
/* 80174FD4 001720B4  38 C3 20 F0 */	addi r6, r3, "@stringBase0"@l
/* 80174FD8 001720B8  7F C4 F3 78 */	mr r4, r30
/* 80174FDC 001720BC  D0 1C 01 C0 */	stfs f0, 0x1c0(r28)
/* 80174FE0 001720C0  7F E5 FB 78 */	mr r5, r31
/* 80174FE4 001720C4  38 7C 01 C0 */	addi r3, r28, 0x1c0
/* 80174FE8 001720C8  38 C6 08 C1 */	addi r6, r6, 0x8c1
/* 80174FEC 001720CC  C0 22 AC BC */	lfs f1, "@1606"@sda21(r2)
/* 80174FF0 001720D0  C0 42 AC B8 */	lfs f2, "@1605"@sda21(r2)
/* 80174FF4 001720D4  C0 62 AC C8 */	lfs f3, "@1634"@sda21(r2)
/* 80174FF8 001720D8  48 00 6F 75 */	bl "load_param<f,f>__10auto_tweakFRffffP16xModelAssetParamUiPCc"
.L_80174FFC:
/* 80174FFC 001720DC  57 A0 06 3F */	clrlwi. r0, r29, 24
/* 80175000 001720E0  41 82 00 34 */	beq .L_80175034
/* 80175004 001720E4  C0 02 AC CC */	lfs f0, "@1689"@sda21(r2)
/* 80175008 001720E8  3C 60 80 27 */	lis r3, "@stringBase0"@ha
/* 8017500C 001720EC  38 C3 20 F0 */	addi r6, r3, "@stringBase0"@l
/* 80175010 001720F0  7F C4 F3 78 */	mr r4, r30
/* 80175014 001720F4  D0 1C 01 C4 */	stfs f0, 0x1c4(r28)
/* 80175018 001720F8  7F E5 FB 78 */	mr r5, r31
/* 8017501C 001720FC  38 7C 01 C4 */	addi r3, r28, 0x1c4
/* 80175020 00172100  38 C6 08 E0 */	addi r6, r6, 0x8e0
/* 80175024 00172104  C0 22 AC BC */	lfs f1, "@1606"@sda21(r2)
/* 80175028 00172108  C0 42 AC B8 */	lfs f2, "@1605"@sda21(r2)
/* 8017502C 0017210C  C0 62 AC C8 */	lfs f3, "@1634"@sda21(r2)
/* 80175030 00172110  48 00 6F 3D */	bl "load_param<f,f>__10auto_tweakFRffffP16xModelAssetParamUiPCc"
.L_80175034:
/* 80175034 00172114  57 A0 06 3F */	clrlwi. r0, r29, 24
/* 80175038 00172118  41 82 00 34 */	beq .L_8017506C
/* 8017503C 0017211C  C0 02 AC BC */	lfs f0, "@1606"@sda21(r2)
/* 80175040 00172120  3C 60 80 27 */	lis r3, "@stringBase0"@ha
/* 80175044 00172124  38 C3 20 F0 */	addi r6, r3, "@stringBase0"@l
/* 80175048 00172128  7F C4 F3 78 */	mr r4, r30
/* 8017504C 0017212C  D0 1C 01 C8 */	stfs f0, 0x1c8(r28)
/* 80175050 00172130  7F E5 FB 78 */	mr r5, r31
/* 80175054 00172134  38 7C 01 C8 */	addi r3, r28, 0x1c8
/* 80175058 00172138  38 C6 08 F9 */	addi r6, r6, 0x8f9
/* 8017505C 0017213C  C0 22 AC BC */	lfs f1, "@1606"@sda21(r2)
/* 80175060 00172140  C0 42 AC B8 */	lfs f2, "@1605"@sda21(r2)
/* 80175064 00172144  C0 62 AC C8 */	lfs f3, "@1634"@sda21(r2)
/* 80175068 00172148  48 00 6F 05 */	bl "load_param<f,f>__10auto_tweakFRffffP16xModelAssetParamUiPCc"
.L_8017506C:
/* 8017506C 0017214C  57 A0 06 3F */	clrlwi. r0, r29, 24
/* 80175070 00172150  41 82 00 34 */	beq .L_801750A4
/* 80175074 00172154  C0 02 AC BC */	lfs f0, "@1606"@sda21(r2)
/* 80175078 00172158  3C 60 80 27 */	lis r3, "@stringBase0"@ha
/* 8017507C 0017215C  38 C3 20 F0 */	addi r6, r3, "@stringBase0"@l
/* 80175080 00172160  7F C4 F3 78 */	mr r4, r30
/* 80175084 00172164  D0 1C 01 CC */	stfs f0, 0x1cc(r28)
/* 80175088 00172168  7F E5 FB 78 */	mr r5, r31
/* 8017508C 0017216C  38 7C 01 CC */	addi r3, r28, 0x1cc
/* 80175090 00172170  38 C6 09 16 */	addi r6, r6, 0x916
/* 80175094 00172174  C0 22 AC BC */	lfs f1, "@1606"@sda21(r2)
/* 80175098 00172178  C0 42 AC B8 */	lfs f2, "@1605"@sda21(r2)
/* 8017509C 0017217C  FC 60 08 90 */	fmr f3, f1
/* 801750A0 00172180  48 00 6E CD */	bl "load_param<f,f>__10auto_tweakFRffffP16xModelAssetParamUiPCc"
.L_801750A4:
/* 801750A4 00172184  57 A0 06 3F */	clrlwi. r0, r29, 24
/* 801750A8 00172188  41 82 00 34 */	beq .L_801750DC
/* 801750AC 0017218C  C0 02 AD 14 */	lfs f0, "@1987"@sda21(r2)
/* 801750B0 00172190  3C 60 80 27 */	lis r3, "@stringBase0"@ha
/* 801750B4 00172194  38 C3 20 F0 */	addi r6, r3, "@stringBase0"@l
/* 801750B8 00172198  7F C4 F3 78 */	mr r4, r30
/* 801750BC 0017219C  D0 1C 01 D0 */	stfs f0, 0x1d0(r28)
/* 801750C0 001721A0  7F E5 FB 78 */	mr r5, r31
/* 801750C4 001721A4  38 7C 01 D0 */	addi r3, r28, 0x1d0
/* 801750C8 001721A8  38 C6 09 30 */	addi r6, r6, 0x930
/* 801750CC 001721AC  C0 22 AC BC */	lfs f1, "@1606"@sda21(r2)
/* 801750D0 001721B0  C0 42 AC B8 */	lfs f2, "@1605"@sda21(r2)
/* 801750D4 001721B4  C0 62 AC C8 */	lfs f3, "@1634"@sda21(r2)
/* 801750D8 001721B8  48 00 6E 95 */	bl "load_param<f,f>__10auto_tweakFRffffP16xModelAssetParamUiPCc"
.L_801750DC:
/* 801750DC 001721BC  57 A0 06 3F */	clrlwi. r0, r29, 24
/* 801750E0 001721C0  41 82 00 34 */	beq .L_80175114
/* 801750E4 001721C4  C0 02 AD 90 */	lfs f0, "@2018"@sda21(r2)
/* 801750E8 001721C8  3C 60 80 27 */	lis r3, "@stringBase0"@ha
/* 801750EC 001721CC  38 C3 20 F0 */	addi r6, r3, "@stringBase0"@l
/* 801750F0 001721D0  7F C4 F3 78 */	mr r4, r30
/* 801750F4 001721D4  D0 1C 01 D4 */	stfs f0, 0x1d4(r28)
/* 801750F8 001721D8  7F E5 FB 78 */	mr r5, r31
/* 801750FC 001721DC  38 7C 01 D4 */	addi r3, r28, 0x1d4
/* 80175100 001721E0  38 C6 09 4F */	addi r6, r6, 0x94f
/* 80175104 001721E4  C0 22 AC BC */	lfs f1, "@1606"@sda21(r2)
/* 80175108 001721E8  C0 42 AC B8 */	lfs f2, "@1605"@sda21(r2)
/* 8017510C 001721EC  C0 62 AC C8 */	lfs f3, "@1634"@sda21(r2)
/* 80175110 001721F0  48 00 6E 5D */	bl "load_param<f,f>__10auto_tweakFRffffP16xModelAssetParamUiPCc"
.L_80175114:
/* 80175114 001721F4  57 A0 06 3F */	clrlwi. r0, r29, 24
/* 80175118 001721F8  41 82 00 34 */	beq .L_8017514C
/* 8017511C 001721FC  C0 02 AC B8 */	lfs f0, "@1605"@sda21(r2)
/* 80175120 00172200  3C 60 80 27 */	lis r3, "@stringBase0"@ha
/* 80175124 00172204  38 C3 20 F0 */	addi r6, r3, "@stringBase0"@l
/* 80175128 00172208  7F C4 F3 78 */	mr r4, r30
/* 8017512C 0017220C  D0 1C 01 D8 */	stfs f0, 0x1d8(r28)
/* 80175130 00172210  7F E5 FB 78 */	mr r5, r31
/* 80175134 00172214  38 7C 01 D8 */	addi r3, r28, 0x1d8
/* 80175138 00172218  38 C6 09 6E */	addi r6, r6, 0x96e
/* 8017513C 0017221C  C0 22 AC BC */	lfs f1, "@1606"@sda21(r2)
/* 80175140 00172220  C0 42 AC B8 */	lfs f2, "@1605"@sda21(r2)
/* 80175144 00172224  C0 62 AC C8 */	lfs f3, "@1634"@sda21(r2)
/* 80175148 00172228  48 00 6E 25 */	bl "load_param<f,f>__10auto_tweakFRffffP16xModelAssetParamUiPCc"
.L_8017514C:
/* 8017514C 0017222C  57 A0 06 3F */	clrlwi. r0, r29, 24
/* 80175150 00172230  41 82 00 34 */	beq .L_80175184
/* 80175154 00172234  C0 02 AC B8 */	lfs f0, "@1605"@sda21(r2)
/* 80175158 00172238  3C 60 80 27 */	lis r3, "@stringBase0"@ha
/* 8017515C 0017223C  38 C3 20 F0 */	addi r6, r3, "@stringBase0"@l
/* 80175160 00172240  7F C4 F3 78 */	mr r4, r30
/* 80175164 00172244  D0 1C 01 DC */	stfs f0, 0x1dc(r28)
/* 80175168 00172248  7F E5 FB 78 */	mr r5, r31
/* 8017516C 0017224C  38 7C 01 DC */	addi r3, r28, 0x1dc
/* 80175170 00172250  38 C6 09 87 */	addi r6, r6, 0x987
/* 80175174 00172254  C0 22 AC BC */	lfs f1, "@1606"@sda21(r2)
/* 80175178 00172258  C0 42 AC B8 */	lfs f2, "@1605"@sda21(r2)
/* 8017517C 0017225C  C0 62 AC C8 */	lfs f3, "@1634"@sda21(r2)
/* 80175180 00172260  48 00 6D ED */	bl "load_param<f,f>__10auto_tweakFRffffP16xModelAssetParamUiPCc"
.L_80175184:
/* 80175184 00172264  57 A0 06 3F */	clrlwi. r0, r29, 24
/* 80175188 00172268  41 82 00 34 */	beq .L_801751BC
/* 8017518C 0017226C  C0 02 AC BC */	lfs f0, "@1606"@sda21(r2)
/* 80175190 00172270  3C 60 80 27 */	lis r3, "@stringBase0"@ha
/* 80175194 00172274  38 C3 20 F0 */	addi r6, r3, "@stringBase0"@l
/* 80175198 00172278  7F C4 F3 78 */	mr r4, r30
/* 8017519C 0017227C  D0 1C 01 E0 */	stfs f0, 0x1e0(r28)
/* 801751A0 00172280  7F E5 FB 78 */	mr r5, r31
/* 801751A4 00172284  38 7C 01 E0 */	addi r3, r28, 0x1e0
/* 801751A8 00172288  38 C6 09 A4 */	addi r6, r6, 0x9a4
/* 801751AC 0017228C  C0 22 AC BC */	lfs f1, "@1606"@sda21(r2)
/* 801751B0 00172290  C0 42 AC B8 */	lfs f2, "@1605"@sda21(r2)
/* 801751B4 00172294  FC 60 08 90 */	fmr f3, f1
/* 801751B8 00172298  48 00 6D B5 */	bl "load_param<f,f>__10auto_tweakFRffffP16xModelAssetParamUiPCc"
.L_801751BC:
/* 801751BC 0017229C  57 A0 06 3F */	clrlwi. r0, r29, 24
/* 801751C0 001722A0  41 82 00 34 */	beq .L_801751F4
/* 801751C4 001722A4  C0 02 AC B8 */	lfs f0, "@1605"@sda21(r2)
/* 801751C8 001722A8  3C 60 80 27 */	lis r3, "@stringBase0"@ha
/* 801751CC 001722AC  38 C3 20 F0 */	addi r6, r3, "@stringBase0"@l
/* 801751D0 001722B0  7F C4 F3 78 */	mr r4, r30
/* 801751D4 001722B4  D0 1C 01 E4 */	stfs f0, 0x1e4(r28)
/* 801751D8 001722B8  7F E5 FB 78 */	mr r5, r31
/* 801751DC 001722BC  38 7C 01 E4 */	addi r3, r28, 0x1e4
/* 801751E0 001722C0  38 C6 09 C2 */	addi r6, r6, 0x9c2
/* 801751E4 001722C4  C0 22 AC BC */	lfs f1, "@1606"@sda21(r2)
/* 801751E8 001722C8  C0 42 AC B8 */	lfs f2, "@1605"@sda21(r2)
/* 801751EC 001722CC  C0 62 AC C8 */	lfs f3, "@1634"@sda21(r2)
/* 801751F0 001722D0  48 00 6D 7D */	bl "load_param<f,f>__10auto_tweakFRffffP16xModelAssetParamUiPCc"
.L_801751F4:
/* 801751F4 001722D4  57 A0 06 3F */	clrlwi. r0, r29, 24
/* 801751F8 001722D8  41 82 00 34 */	beq .L_8017522C
/* 801751FC 001722DC  C0 02 AD 14 */	lfs f0, "@1987"@sda21(r2)
/* 80175200 001722E0  3C 60 80 27 */	lis r3, "@stringBase0"@ha
/* 80175204 001722E4  38 C3 20 F0 */	addi r6, r3, "@stringBase0"@l
/* 80175208 001722E8  7F C4 F3 78 */	mr r4, r30
/* 8017520C 001722EC  D0 1C 01 E8 */	stfs f0, 0x1e8(r28)
/* 80175210 001722F0  7F E5 FB 78 */	mr r5, r31
/* 80175214 001722F4  38 7C 01 E8 */	addi r3, r28, 0x1e8
/* 80175218 001722F8  38 C6 09 E5 */	addi r6, r6, 0x9e5
/* 8017521C 001722FC  C0 22 AC BC */	lfs f1, "@1606"@sda21(r2)
/* 80175220 00172300  C0 42 AC B8 */	lfs f2, "@1605"@sda21(r2)
/* 80175224 00172304  C0 62 AC C8 */	lfs f3, "@1634"@sda21(r2)
/* 80175228 00172308  48 00 6D 45 */	bl "load_param<f,f>__10auto_tweakFRffffP16xModelAssetParamUiPCc"
.L_8017522C:
/* 8017522C 0017230C  57 A0 06 3F */	clrlwi. r0, r29, 24
/* 80175230 00172310  41 82 00 34 */	beq .L_80175264
/* 80175234 00172314  C0 02 AC D0 */	lfs f0, "@1690"@sda21(r2)
/* 80175238 00172318  3C 60 80 27 */	lis r3, "@stringBase0"@ha
/* 8017523C 0017231C  38 C3 20 F0 */	addi r6, r3, "@stringBase0"@l
/* 80175240 00172320  7F C4 F3 78 */	mr r4, r30
/* 80175244 00172324  D0 1C 01 EC */	stfs f0, 0x1ec(r28)
/* 80175248 00172328  7F E5 FB 78 */	mr r5, r31
/* 8017524C 0017232C  38 7C 01 EC */	addi r3, r28, 0x1ec
/* 80175250 00172330  38 C6 0A 08 */	addi r6, r6, 0xa08
/* 80175254 00172334  C0 22 AC BC */	lfs f1, "@1606"@sda21(r2)
/* 80175258 00172338  C0 42 AC B8 */	lfs f2, "@1605"@sda21(r2)
/* 8017525C 0017233C  C0 62 AC C8 */	lfs f3, "@1634"@sda21(r2)
/* 80175260 00172340  48 00 6D 0D */	bl "load_param<f,f>__10auto_tweakFRffffP16xModelAssetParamUiPCc"
.L_80175264:
/* 80175264 00172344  57 A0 06 3F */	clrlwi. r0, r29, 24
/* 80175268 00172348  41 82 00 34 */	beq .L_8017529C
/* 8017526C 0017234C  C0 02 AC C0 */	lfs f0, "@1632"@sda21(r2)
/* 80175270 00172350  3C 60 80 27 */	lis r3, "@stringBase0"@ha
/* 80175274 00172354  38 C3 20 F0 */	addi r6, r3, "@stringBase0"@l
/* 80175278 00172358  7F C4 F3 78 */	mr r4, r30
/* 8017527C 0017235C  D0 1C 01 F0 */	stfs f0, 0x1f0(r28)
/* 80175280 00172360  7F E5 FB 78 */	mr r5, r31
/* 80175284 00172364  38 7C 01 F0 */	addi r3, r28, 0x1f0
/* 80175288 00172368  38 C6 0A 25 */	addi r6, r6, 0xa25
/* 8017528C 0017236C  C0 22 AC BC */	lfs f1, "@1606"@sda21(r2)
/* 80175290 00172370  C0 42 AC B8 */	lfs f2, "@1605"@sda21(r2)
/* 80175294 00172374  C0 62 AC C8 */	lfs f3, "@1634"@sda21(r2)
/* 80175298 00172378  48 00 6C D5 */	bl "load_param<f,f>__10auto_tweakFRffffP16xModelAssetParamUiPCc"
.L_8017529C:
/* 8017529C 0017237C  57 A0 06 3F */	clrlwi. r0, r29, 24
/* 801752A0 00172380  41 82 00 34 */	beq .L_801752D4
/* 801752A4 00172384  C0 02 AC BC */	lfs f0, "@1606"@sda21(r2)
/* 801752A8 00172388  3C 60 80 27 */	lis r3, "@stringBase0"@ha
/* 801752AC 0017238C  38 C3 20 F0 */	addi r6, r3, "@stringBase0"@l
/* 801752B0 00172390  7F C4 F3 78 */	mr r4, r30
/* 801752B4 00172394  D0 1C 01 F4 */	stfs f0, 0x1f4(r28)
/* 801752B8 00172398  7F E5 FB 78 */	mr r5, r31
/* 801752BC 0017239C  38 7C 01 F4 */	addi r3, r28, 0x1f4
/* 801752C0 001723A0  38 C6 0A 46 */	addi r6, r6, 0xa46
/* 801752C4 001723A4  C0 22 AC BC */	lfs f1, "@1606"@sda21(r2)
/* 801752C8 001723A8  C0 42 AC B8 */	lfs f2, "@1605"@sda21(r2)
/* 801752CC 001723AC  FC 60 08 90 */	fmr f3, f1
/* 801752D0 001723B0  48 00 6C 9D */	bl "load_param<f,f>__10auto_tweakFRffffP16xModelAssetParamUiPCc"
.L_801752D4:
/* 801752D4 001723B4  57 A0 06 3F */	clrlwi. r0, r29, 24
/* 801752D8 001723B8  41 82 00 34 */	beq .L_8017530C
/* 801752DC 001723BC  C0 02 AD 14 */	lfs f0, "@1987"@sda21(r2)
/* 801752E0 001723C0  3C 60 80 27 */	lis r3, "@stringBase0"@ha
/* 801752E4 001723C4  38 C3 20 F0 */	addi r6, r3, "@stringBase0"@l
/* 801752E8 001723C8  7F C4 F3 78 */	mr r4, r30
/* 801752EC 001723CC  D0 1C 01 F8 */	stfs f0, 0x1f8(r28)
/* 801752F0 001723D0  7F E5 FB 78 */	mr r5, r31
/* 801752F4 001723D4  38 7C 01 F8 */	addi r3, r28, 0x1f8
/* 801752F8 001723D8  38 C6 0A 62 */	addi r6, r6, 0xa62
/* 801752FC 001723DC  C0 22 AC BC */	lfs f1, "@1606"@sda21(r2)
/* 80175300 001723E0  C0 42 AC B8 */	lfs f2, "@1605"@sda21(r2)
/* 80175304 001723E4  C0 62 AC C8 */	lfs f3, "@1634"@sda21(r2)
/* 80175308 001723E8  48 00 6C 65 */	bl "load_param<f,f>__10auto_tweakFRffffP16xModelAssetParamUiPCc"
.L_8017530C:
/* 8017530C 001723EC  57 A0 06 3F */	clrlwi. r0, r29, 24
/* 80175310 001723F0  41 82 00 34 */	beq .L_80175344
/* 80175314 001723F4  C0 02 AD 40 */	lfs f0, "@1998"@sda21(r2)
/* 80175318 001723F8  3C 60 80 27 */	lis r3, "@stringBase0"@ha
/* 8017531C 001723FC  38 C3 20 F0 */	addi r6, r3, "@stringBase0"@l
/* 80175320 00172400  7F C4 F3 78 */	mr r4, r30
/* 80175324 00172404  D0 1C 01 FC */	stfs f0, 0x1fc(r28)
/* 80175328 00172408  7F E5 FB 78 */	mr r5, r31
/* 8017532C 0017240C  38 7C 01 FC */	addi r3, r28, 0x1fc
/* 80175330 00172410  38 C6 0A 83 */	addi r6, r6, 0xa83
/* 80175334 00172414  C0 22 AC BC */	lfs f1, "@1606"@sda21(r2)
/* 80175338 00172418  C0 42 AC B8 */	lfs f2, "@1605"@sda21(r2)
/* 8017533C 0017241C  C0 62 AC C8 */	lfs f3, "@1634"@sda21(r2)
/* 80175340 00172420  48 00 6C 2D */	bl "load_param<f,f>__10auto_tweakFRffffP16xModelAssetParamUiPCc"
.L_80175344:
/* 80175344 00172424  57 A0 06 3F */	clrlwi. r0, r29, 24
/* 80175348 00172428  41 82 00 34 */	beq .L_8017537C
/* 8017534C 0017242C  C0 02 AC B8 */	lfs f0, "@1605"@sda21(r2)
/* 80175350 00172430  3C 60 80 27 */	lis r3, "@stringBase0"@ha
/* 80175354 00172434  38 C3 20 F0 */	addi r6, r3, "@stringBase0"@l
/* 80175358 00172438  7F C4 F3 78 */	mr r4, r30
/* 8017535C 0017243C  D0 1C 02 00 */	stfs f0, 0x200(r28)
/* 80175360 00172440  7F E5 FB 78 */	mr r5, r31
/* 80175364 00172444  38 7C 02 00 */	addi r3, r28, 0x200
/* 80175368 00172448  38 C6 0A A4 */	addi r6, r6, 0xaa4
/* 8017536C 0017244C  C0 22 AC BC */	lfs f1, "@1606"@sda21(r2)
/* 80175370 00172450  C0 42 AC B8 */	lfs f2, "@1605"@sda21(r2)
/* 80175374 00172454  C0 62 AD 14 */	lfs f3, "@1987"@sda21(r2)
/* 80175378 00172458  48 00 6B F5 */	bl "load_param<f,f>__10auto_tweakFRffffP16xModelAssetParamUiPCc"
.L_8017537C:
/* 8017537C 0017245C  57 A0 06 3F */	clrlwi. r0, r29, 24
/* 80175380 00172460  41 82 00 34 */	beq .L_801753B4
/* 80175384 00172464  C0 02 AC BC */	lfs f0, "@1606"@sda21(r2)
/* 80175388 00172468  3C 60 80 27 */	lis r3, "@stringBase0"@ha
/* 8017538C 0017246C  38 C3 20 F0 */	addi r6, r3, "@stringBase0"@l
/* 80175390 00172470  7F C4 F3 78 */	mr r4, r30
/* 80175394 00172474  D0 1C 02 08 */	stfs f0, 0x208(r28)
/* 80175398 00172478  7F E5 FB 78 */	mr r5, r31
/* 8017539C 0017247C  38 7C 02 08 */	addi r3, r28, 0x208
/* 801753A0 00172480  38 C6 0A BF */	addi r6, r6, 0xabf
/* 801753A4 00172484  C0 22 AC BC */	lfs f1, "@1606"@sda21(r2)
/* 801753A8 00172488  C0 42 AC B8 */	lfs f2, "@1605"@sda21(r2)
/* 801753AC 0017248C  FC 60 08 90 */	fmr f3, f1
/* 801753B0 00172490  48 00 6B BD */	bl "load_param<f,f>__10auto_tweakFRffffP16xModelAssetParamUiPCc"
.L_801753B4:
/* 801753B4 00172494  57 A0 06 3F */	clrlwi. r0, r29, 24
/* 801753B8 00172498  41 82 00 34 */	beq .L_801753EC
/* 801753BC 0017249C  C0 02 AD 14 */	lfs f0, "@1987"@sda21(r2)
/* 801753C0 001724A0  3C 60 80 27 */	lis r3, "@stringBase0"@ha
/* 801753C4 001724A4  38 C3 20 F0 */	addi r6, r3, "@stringBase0"@l
/* 801753C8 001724A8  7F C4 F3 78 */	mr r4, r30
/* 801753CC 001724AC  D0 1C 02 0C */	stfs f0, 0x20c(r28)
/* 801753D0 001724B0  7F E5 FB 78 */	mr r5, r31
/* 801753D4 001724B4  38 7C 02 0C */	addi r3, r28, 0x20c
/* 801753D8 001724B8  38 C6 0A E0 */	addi r6, r6, 0xae0
/* 801753DC 001724BC  C0 22 AC BC */	lfs f1, "@1606"@sda21(r2)
/* 801753E0 001724C0  C0 42 AC B8 */	lfs f2, "@1605"@sda21(r2)
/* 801753E4 001724C4  C0 62 AC C8 */	lfs f3, "@1634"@sda21(r2)
/* 801753E8 001724C8  48 00 6B 85 */	bl "load_param<f,f>__10auto_tweakFRffffP16xModelAssetParamUiPCc"
.L_801753EC:
/* 801753EC 001724CC  57 A0 06 3F */	clrlwi. r0, r29, 24
/* 801753F0 001724D0  41 82 00 34 */	beq .L_80175424
/* 801753F4 001724D4  C0 02 AD 40 */	lfs f0, "@1998"@sda21(r2)
/* 801753F8 001724D8  3C 60 80 27 */	lis r3, "@stringBase0"@ha
/* 801753FC 001724DC  38 C3 20 F0 */	addi r6, r3, "@stringBase0"@l
/* 80175400 001724E0  7F C4 F3 78 */	mr r4, r30
/* 80175404 001724E4  D0 1C 02 10 */	stfs f0, 0x210(r28)
/* 80175408 001724E8  7F E5 FB 78 */	mr r5, r31
/* 8017540C 001724EC  38 7C 02 10 */	addi r3, r28, 0x210
/* 80175410 001724F0  38 C6 0B 06 */	addi r6, r6, 0xb06
/* 80175414 001724F4  C0 22 AC BC */	lfs f1, "@1606"@sda21(r2)
/* 80175418 001724F8  C0 42 AC B8 */	lfs f2, "@1605"@sda21(r2)
/* 8017541C 001724FC  C0 62 AC C8 */	lfs f3, "@1634"@sda21(r2)
/* 80175420 00172500  48 00 6B 4D */	bl "load_param<f,f>__10auto_tweakFRffffP16xModelAssetParamUiPCc"
.L_80175424:
/* 80175424 00172504  57 A0 06 3F */	clrlwi. r0, r29, 24
/* 80175428 00172508  41 82 00 34 */	beq .L_8017545C
/* 8017542C 0017250C  C0 02 AC B8 */	lfs f0, "@1605"@sda21(r2)
/* 80175430 00172510  3C 60 80 27 */	lis r3, "@stringBase0"@ha
/* 80175434 00172514  38 C3 20 F0 */	addi r6, r3, "@stringBase0"@l
/* 80175438 00172518  7F C4 F3 78 */	mr r4, r30
/* 8017543C 0017251C  D0 1C 02 14 */	stfs f0, 0x214(r28)
/* 80175440 00172520  7F E5 FB 78 */	mr r5, r31
/* 80175444 00172524  38 7C 02 14 */	addi r3, r28, 0x214
/* 80175448 00172528  38 C6 0B 2C */	addi r6, r6, 0xb2c
/* 8017544C 0017252C  C0 22 AC BC */	lfs f1, "@1606"@sda21(r2)
/* 80175450 00172530  C0 42 AC B8 */	lfs f2, "@1605"@sda21(r2)
/* 80175454 00172534  C0 62 AD 14 */	lfs f3, "@1987"@sda21(r2)
/* 80175458 00172538  48 00 6B 15 */	bl "load_param<f,f>__10auto_tweakFRffffP16xModelAssetParamUiPCc"
.L_8017545C:
/* 8017545C 0017253C  80 01 00 64 */	lwz r0, 0x64(r1)
/* 80175460 00172540  83 E1 00 5C */	lwz r31, 0x5c(r1)
/* 80175464 00172544  83 C1 00 58 */	lwz r30, 0x58(r1)
/* 80175468 00172548  83 A1 00 54 */	lwz r29, 0x54(r1)
/* 8017546C 0017254C  83 81 00 50 */	lwz r28, 0x50(r1)
/* 80175470 00172550  7C 08 03 A6 */	mtlr r0
/* 80175474 00172554  38 21 00 60 */	addi r1, r1, 0x60
/* 80175478 00172558  4E 80 00 20 */	blr
.endfn "register_tweaks__Q230@unnamed@zNPCTypeDutchman_cpp@11tweak_groupFbP16xModelAssetParamUiPCc"

# zNPCDutchman::SelfSetup()
.fn SelfSetup__12zNPCDutchmanFv, global
/* 8017547C 0017255C  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 80175480 00172560  7C 08 02 A6 */	mflr r0
/* 80175484 00172564  90 01 00 24 */	stw r0, 0x24(r1)
/* 80175488 00172568  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 8017548C 0017256C  93 C1 00 18 */	stw r30, 0x18(r1)
/* 80175490 00172570  93 A1 00 14 */	stw r29, 0x14(r1)
/* 80175494 00172574  93 81 00 10 */	stw r28, 0x10(r1)
/* 80175498 00172578  7C 7C 1B 78 */	mr r28, r3
/* 8017549C 0017257C  4B F9 7A 39 */	bl xBehaveMgr_GetSelf__Fv
/* 801754A0 00172580  7F 84 E3 78 */	mr r4, r28
/* 801754A4 00172584  38 A0 00 00 */	li r5, 0x0
/* 801754A8 00172588  4B F9 7B 95 */	bl Subscribe__10xBehaveMgrFP5xBasei
/* 801754AC 0017258C  90 7C 02 28 */	stw r3, 0x228(r28)
/* 801754B0 00172590  83 DC 02 28 */	lwz r30, 0x228(r28)
/* 801754B4 00172594  7F C3 F3 78 */	mr r3, r30
/* 801754B8 00172598  4B F9 7C D1 */	bl BrainBegin__7xPsycheFv
/* 801754BC 0017259C  3C 60 4E 47 */	lis r3, 0x4e47
/* 801754C0 001725A0  3B A3 4D 3D */	addi r29, r3, 0x4d3d
/* 801754C4 001725A4  3B E3 4D 48 */	addi r31, r3, 0x4d48
/* 801754C8 001725A8  48 00 00 18 */	b .L_801754E0
.L_801754CC:
/* 801754CC 001725AC  7F C3 F3 78 */	mr r3, r30
/* 801754D0 001725B0  7F A4 EB 78 */	mr r4, r29
/* 801754D4 001725B4  7F 85 E3 78 */	mr r5, r28
/* 801754D8 001725B8  4B F9 7D 69 */	bl AddGoal__7xPsycheFiPv
/* 801754DC 001725BC  3B BD 00 01 */	addi r29, r29, 0x1
.L_801754E0:
/* 801754E0 001725C0  7C 1D F8 00 */	cmpw r29, r31
/* 801754E4 001725C4  40 81 FF E8 */	ble .L_801754CC
/* 801754E8 001725C8  7F C3 F3 78 */	mr r3, r30
/* 801754EC 001725CC  4B F9 7D 1D */	bl BrainEnd__7xPsycheFv
/* 801754F0 001725D0  3C 80 4E 47 */	lis r4, 0x4e47
/* 801754F4 001725D4  7F C3 F3 78 */	mr r3, r30
/* 801754F8 001725D8  38 84 4D 3F */	addi r4, r4, 0x4d3f
/* 801754FC 001725DC  4B F8 D4 81 */	bl SetSafety__7xPsycheFi
/* 80175500 001725E0  80 01 00 24 */	lwz r0, 0x24(r1)
/* 80175504 001725E4  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 80175508 001725E8  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 8017550C 001725EC  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 80175510 001725F0  83 81 00 10 */	lwz r28, 0x10(r1)
/* 80175514 001725F4  7C 08 03 A6 */	mtlr r0
/* 80175518 001725F8  38 21 00 20 */	addi r1, r1, 0x20
/* 8017551C 001725FC  4E 80 00 20 */	blr
.endfn SelfSetup__12zNPCDutchmanFv

# zNPCDutchman::Damage(en_NPC_DAMAGE_TYPE, xBase*, const xVec3*)
.fn Damage__12zNPCDutchmanF18en_NPC_DAMAGE_TYPEP5xBasePC5xVec3, global
/* 80175520 00172600  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80175524 00172604  7C 08 02 A6 */	mflr r0
/* 80175528 00172608  90 01 00 14 */	stw r0, 0x14(r1)
/* 8017552C 0017260C  80 63 02 28 */	lwz r3, 0x228(r3)
/* 80175530 00172610  4B F9 80 95 */	bl GIDOfActive__7xPsycheCFv
/* 80175534 00172614  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80175538 00172618  7C 08 03 A6 */	mtlr r0
/* 8017553C 0017261C  38 21 00 10 */	addi r1, r1, 0x10
/* 80175540 00172620  4E 80 00 20 */	blr
.endfn Damage__12zNPCDutchmanF18en_NPC_DAMAGE_TYPEP5xBasePC5xVec3

# zNPCDutchman::AnimPick(int, en_NPC_GOAL_SPOT, xGoal*)
.fn AnimPick__12zNPCDutchmanFi16en_NPC_GOAL_SPOTP5xGoal, global
/* 80175544 00172624  3C A4 B1 B9 */	addis r5, r4, 0xb1b9
/* 80175548 00172628  38 C0 00 00 */	li r6, 0x0
/* 8017554C 0017262C  38 A5 B2 C3 */	addi r5, r5, -0x4d3d
/* 80175550 00172630  28 05 00 0B */	cmplwi r5, 0xb
/* 80175554 00172634  41 81 00 68 */	bgt .L_801755BC
/* 80175558 00172638  3C 80 80 2A */	lis r4, "@2074"@ha
/* 8017555C 0017263C  54 A5 10 3A */	slwi r5, r5, 2
/* 80175560 00172640  38 84 B4 C4 */	addi r4, r4, "@2074"@l
/* 80175564 00172644  7C 04 28 2E */	lwzx r0, r4, r5
/* 80175568 00172648  7C 09 03 A6 */	mtctr r0
/* 8017556C 0017264C  4E 80 04 20 */	bctr
.L_80175570:
/* 80175570 00172650  38 00 FF FF */	li r0, -0x1
/* 80175574 00172654  48 00 00 4C */	b .L_801755C0
.L_80175578:
/* 80175578 00172658  38 00 00 01 */	li r0, 0x1
/* 8017557C 0017265C  48 00 00 44 */	b .L_801755C0
.L_80175580:
/* 80175580 00172660  38 00 00 05 */	li r0, 0x5
/* 80175584 00172664  48 00 00 3C */	b .L_801755C0
.L_80175588:
/* 80175588 00172668  38 00 00 0C */	li r0, 0xc
/* 8017558C 0017266C  48 00 00 34 */	b .L_801755C0
.L_80175590:
/* 80175590 00172670  38 00 00 10 */	li r0, 0x10
/* 80175594 00172674  48 00 00 2C */	b .L_801755C0
.L_80175598:
/* 80175598 00172678  88 03 02 B8 */	lbz r0, 0x2b8(r3)
/* 8017559C 0017267C  28 00 00 00 */	cmplwi r0, 0x0
/* 801755A0 00172680  41 82 00 0C */	beq .L_801755AC
/* 801755A4 00172684  38 00 00 04 */	li r0, 0x4
/* 801755A8 00172688  48 00 00 18 */	b .L_801755C0
.L_801755AC:
/* 801755AC 0017268C  38 00 00 06 */	li r0, 0x6
/* 801755B0 00172690  48 00 00 10 */	b .L_801755C0
.L_801755B4:
/* 801755B4 00172694  38 00 00 13 */	li r0, 0x13
/* 801755B8 00172698  48 00 00 08 */	b .L_801755C0
.L_801755BC:
/* 801755BC 0017269C  38 00 00 01 */	li r0, 0x1
.L_801755C0:
/* 801755C0 001726A0  2C 00 FF FF */	cmpwi r0, -0x1
/* 801755C4 001726A4  40 81 00 14 */	ble .L_801755D8
/* 801755C8 001726A8  3C 60 80 2A */	lis r3, g_hash_subbanim@ha
/* 801755CC 001726AC  54 00 10 3A */	slwi r0, r0, 2
/* 801755D0 001726B0  38 63 90 E0 */	addi r3, r3, g_hash_subbanim@l
/* 801755D4 001726B4  7C C3 00 2E */	lwzx r6, r3, r0
.L_801755D8:
/* 801755D8 001726B8  7C C3 33 78 */	mr r3, r6
/* 801755DC 001726BC  4E 80 00 20 */	blr
.endfn AnimPick__12zNPCDutchmanFi16en_NPC_GOAL_SPOTP5xGoal

# zNPCDutchman::LassoNotify(en_LASSO_EVENT)
.fn LassoNotify__12zNPCDutchmanF14en_LASSO_EVENT, global
/* 801755E0 001726C0  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801755E4 001726C4  7C 08 02 A6 */	mflr r0
/* 801755E8 001726C8  90 01 00 14 */	stw r0, 0x14(r1)
/* 801755EC 001726CC  93 E1 00 0C */	stw r31, 0xc(r1)
/* 801755F0 001726D0  7C 9F 23 78 */	mr r31, r4
/* 801755F4 001726D4  2C 1F 00 03 */	cmpwi r31, 0x3
/* 801755F8 001726D8  93 C1 00 08 */	stw r30, 0x8(r1)
/* 801755FC 001726DC  7C 7E 1B 78 */	mr r30, r3
/* 80175600 001726E0  41 82 00 2C */	beq .L_8017562C
/* 80175604 001726E4  40 80 00 28 */	bge .L_8017562C
/* 80175608 001726E8  2C 1F 00 02 */	cmpwi r31, 0x2
/* 8017560C 001726EC  40 80 00 0C */	bge .L_80175618
/* 80175610 001726F0  48 00 00 1C */	b .L_8017562C
/* 80175614 001726F4  48 00 00 18 */	b .L_8017562C
.L_80175618:
/* 80175618 001726F8  3C 80 4E 47 */	lis r4, 0x4e47
/* 8017561C 001726FC  80 7E 02 28 */	lwz r3, 0x228(r30)
/* 80175620 00172700  38 84 4D 46 */	addi r4, r4, 0x4d46
/* 80175624 00172704  38 A0 00 01 */	li r5, 0x1
/* 80175628 00172708  4B F9 81 09 */	bl GoalSet__7xPsycheFii
.L_8017562C:
/* 8017562C 0017270C  7F C3 F3 78 */	mr r3, r30
/* 80175630 00172710  7F E4 FB 78 */	mr r4, r31
/* 80175634 00172714  4B F7 E8 F1 */	bl LassoNotify__10zNPCCommonF14en_LASSO_EVENT
/* 80175638 00172718  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8017563C 0017271C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80175640 00172720  83 C1 00 08 */	lwz r30, 0x8(r1)
/* 80175644 00172724  7C 08 03 A6 */	mtlr r0
/* 80175648 00172728  38 21 00 10 */	addi r1, r1, 0x10
/* 8017564C 0017272C  4E 80 00 20 */	blr
.endfn LassoNotify__12zNPCDutchmanF14en_LASSO_EVENT

# zNPCDutchman::LassoSetup()
.fn LassoSetup__12zNPCDutchmanFv, global
/* 80175650 00172730  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80175654 00172734  7C 08 02 A6 */	mflr r0
/* 80175658 00172738  38 80 00 01 */	li r4, 0x1
/* 8017565C 0017273C  38 A0 00 01 */	li r5, 0x1
/* 80175660 00172740  90 01 00 14 */	stw r0, 0x14(r1)
/* 80175664 00172744  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80175668 00172748  7C 7F 1B 78 */	mr r31, r3
/* 8017566C 0017274C  4B F7 E5 E1 */	bl LassoUseGuides__10zNPCCommonFii
/* 80175670 00172750  7F E3 FB 78 */	mr r3, r31
/* 80175674 00172754  4B F7 E4 F5 */	bl LassoSetup__10zNPCCommonFv
/* 80175678 00172758  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8017567C 0017275C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80175680 00172760  7C 08 03 A6 */	mtlr r0
/* 80175684 00172764  38 21 00 10 */	addi r1, r1, 0x10
/* 80175688 00172768  4E 80 00 20 */	blr
.endfn LassoSetup__12zNPCDutchmanFv

# zNPCDutchman::update_round()
.fn update_round__12zNPCDutchmanFv, global
/* 8017568C 0017276C  80 83 02 C4 */	lwz r4, 0x2c4(r3)
/* 80175690 00172770  80 A3 02 C8 */	lwz r5, 0x2c8(r3)
/* 80175694 00172774  2C 04 00 00 */	cmpwi r4, 0x0
/* 80175698 00172778  40 82 00 10 */	bne .L_801756A8
/* 8017569C 0017277C  38 00 00 03 */	li r0, 0x3
/* 801756A0 00172780  90 03 02 C8 */	stw r0, 0x2c8(r3)
/* 801756A4 00172784  48 00 00 28 */	b .L_801756CC
.L_801756A8:
/* 801756A8 00172788  38 04 FF FF */	addi r0, r4, -0x1
/* 801756AC 0017278C  3C 80 55 55 */	lis r4, 0x5555
/* 801756B0 00172790  1C 00 00 03 */	mulli r0, r0, 0x3
/* 801756B4 00172794  38 84 55 56 */	addi r4, r4, 0x5556
/* 801756B8 00172798  7C 84 00 96 */	mulhw r4, r4, r0
/* 801756BC 0017279C  54 80 0F FE */	srwi r0, r4, 31
/* 801756C0 001727A0  7C 04 02 14 */	add r0, r4, r0
/* 801756C4 001727A4  20 00 00 02 */	subfic r0, r0, 0x2
/* 801756C8 001727A8  90 03 02 C8 */	stw r0, 0x2c8(r3)
.L_801756CC:
/* 801756CC 001727AC  80 03 02 C8 */	lwz r0, 0x2c8(r3)
/* 801756D0 001727B0  7C 00 28 00 */	cmpw r0, r5
/* 801756D4 001727B4  4D 82 00 20 */	beqlr
/* 801756D8 001727B8  38 00 FF FF */	li r0, -0x1
/* 801756DC 001727BC  90 03 02 CC */	stw r0, 0x2cc(r3)
/* 801756E0 001727C0  4E 80 00 20 */	blr
.endfn update_round__12zNPCDutchmanFv

# zNPCDutchman::next_goal()
.fn next_goal__12zNPCDutchmanFv, global
/* 801756E4 001727C4  80 A3 02 CC */	lwz r5, 0x2cc(r3)
/* 801756E8 001727C8  3C 80 80 27 */	lis r4, "sequence__30@unnamed@zNPCTypeDutchman_cpp@"@ha
/* 801756EC 001727CC  38 84 1E 58 */	addi r4, r4, "sequence__30@unnamed@zNPCTypeDutchman_cpp@"@l
/* 801756F0 001727D0  38 05 00 01 */	addi r0, r5, 0x1
/* 801756F4 001727D4  90 03 02 CC */	stw r0, 0x2cc(r3)
/* 801756F8 001727D8  80 A3 02 C8 */	lwz r5, 0x2c8(r3)
/* 801756FC 001727DC  80 03 02 CC */	lwz r0, 0x2cc(r3)
/* 80175700 001727E0  54 A5 38 30 */	slwi r5, r5, 7
/* 80175704 001727E4  7C 84 2A 14 */	add r4, r4, r5
/* 80175708 001727E8  54 00 18 38 */	slwi r0, r0, 3
/* 8017570C 001727EC  7C 04 00 2E */	lwzx r0, r4, r0
/* 80175710 001727F0  2C 00 00 00 */	cmpwi r0, 0x0
/* 80175714 001727F4  40 82 00 0C */	bne .L_80175720
/* 80175718 001727F8  38 00 00 00 */	li r0, 0x0
/* 8017571C 001727FC  90 03 02 CC */	stw r0, 0x2cc(r3)
.L_80175720:
/* 80175720 00172800  C0 02 AC B8 */	lfs f0, "@1605"@sda21(r2)
/* 80175724 00172804  3C 80 80 27 */	lis r4, "sequence__30@unnamed@zNPCTypeDutchman_cpp@"@ha
/* 80175728 00172808  38 84 1E 58 */	addi r4, r4, "sequence__30@unnamed@zNPCTypeDutchman_cpp@"@l
/* 8017572C 0017280C  D0 03 02 D0 */	stfs f0, 0x2d0(r3)
/* 80175730 00172810  80 A3 02 C8 */	lwz r5, 0x2c8(r3)
/* 80175734 00172814  80 03 02 CC */	lwz r0, 0x2cc(r3)
/* 80175738 00172818  54 A3 38 30 */	slwi r3, r5, 7
/* 8017573C 0017281C  7C 64 1A 14 */	add r3, r4, r3
/* 80175740 00172820  54 00 18 38 */	slwi r0, r0, 3
/* 80175744 00172824  7C 63 00 2E */	lwzx r3, r3, r0
/* 80175748 00172828  4E 80 00 20 */	blr
.endfn next_goal__12zNPCDutchmanFv

# zNPCDutchman::goal_delay()
.fn goal_delay__12zNPCDutchmanFv, global
/* 8017574C 0017282C  80 83 02 C8 */	lwz r4, 0x2c8(r3)
/* 80175750 00172830  3C A0 80 27 */	lis r5, "sequence__30@unnamed@zNPCTypeDutchman_cpp@"@ha
/* 80175754 00172834  80 03 02 CC */	lwz r0, 0x2cc(r3)
/* 80175758 00172838  38 A5 1E 58 */	addi r5, r5, "sequence__30@unnamed@zNPCTypeDutchman_cpp@"@l
/* 8017575C 0017283C  54 83 38 30 */	slwi r3, r4, 7
/* 80175760 00172840  7C 65 1A 14 */	add r3, r5, r3
/* 80175764 00172844  54 00 18 38 */	slwi r0, r0, 3
/* 80175768 00172848  7C 63 02 14 */	add r3, r3, r0
/* 8017576C 0017284C  C0 23 00 04 */	lfs f1, 0x4(r3)
/* 80175770 00172850  4E 80 00 20 */	blr
.endfn goal_delay__12zNPCDutchmanFv

# zNPCDutchman::decompose()
.fn decompose__12zNPCDutchmanFv, global
/* 80175774 00172854  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80175778 00172858  7C 08 02 A6 */	mflr r0
/* 8017577C 0017285C  90 01 00 14 */	stw r0, 0x14(r1)
/* 80175780 00172860  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80175784 00172864  7C 7F 1B 78 */	mr r31, r3
/* 80175788 00172868  88 03 02 B5 */	lbz r0, 0x2b5(r3)
/* 8017578C 0017286C  28 00 00 00 */	cmplwi r0, 0x0
/* 80175790 00172870  41 82 00 40 */	beq .L_801757D0
/* 80175794 00172874  38 00 00 00 */	li r0, 0x0
/* 80175798 00172878  98 1F 02 B5 */	stb r0, 0x2b5(r31)
/* 8017579C 0017287C  80 8D 97 88 */	lwz r4, "dissolve_emitter__30@unnamed@zNPCTypeDutchman_cpp@"@sda21(r13)
/* 801757A0 00172880  48 00 60 9D */	bl disable_emitter__12zNPCDutchmanCFR11zParEmitter
/* 801757A4 00172884  80 8D 97 90 */	lwz r4, "fadein_emitter__30@unnamed@zNPCTypeDutchman_cpp@"@sda21(r13)
/* 801757A8 00172888  7F E3 FB 78 */	mr r3, r31
/* 801757AC 0017288C  48 00 60 91 */	bl disable_emitter__12zNPCDutchmanCFR11zParEmitter
/* 801757B0 00172890  80 8D 97 8C */	lwz r4, "fadeout_emitter__30@unnamed@zNPCTypeDutchman_cpp@"@sda21(r13)
/* 801757B4 00172894  7F E3 FB 78 */	mr r3, r31
/* 801757B8 00172898  48 00 60 85 */	bl disable_emitter__12zNPCDutchmanCFR11zParEmitter
/* 801757BC 0017289C  38 60 00 08 */	li r3, 0x8
/* 801757C0 001728A0  4B ED C9 51 */	bl zCameraEnableTracking__F17camera_owner_enum
/* 801757C4 001728A4  3C 60 80 2A */	lis r3, "boss_cam__30@unnamed@zNPCTypeDutchman_cpp@"@ha
/* 801757C8 001728A8  38 63 B4 60 */	addi r3, r3, "boss_cam__30@unnamed@zNPCTypeDutchman_cpp@"@l
/* 801757CC 001728AC  4B E9 87 2D */	bl stop__13xBinaryCameraFv
.L_801757D0:
/* 801757D0 001728B0  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801757D4 001728B4  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 801757D8 001728B8  7C 08 03 A6 */	mtlr r0
/* 801757DC 001728BC  38 21 00 10 */	addi r1, r1, 0x10
/* 801757E0 001728C0  4E 80 00 20 */	blr
.endfn decompose__12zNPCDutchmanFv

# @unnamed@zNPCTypeDutchman_cpp@::set_yaw_matrix(xMat3x3&, float)
.fn "set_yaw_matrix__30@unnamed@zNPCTypeDutchman_cpp@FR7xMat3x3f", local
/* 801757E4 001728C4  94 21 FF D0 */	stwu r1, -0x30(r1)
/* 801757E8 001728C8  7C 08 02 A6 */	mflr r0
/* 801757EC 001728CC  90 01 00 34 */	stw r0, 0x34(r1)
/* 801757F0 001728D0  DB E1 00 20 */	stfd f31, 0x20(r1)
/* 801757F4 001728D4  F3 E1 00 28 */	psq_st f31, 0x28(r1), 0, qr0
/* 801757F8 001728D8  DB C1 00 10 */	stfd f30, 0x10(r1)
/* 801757FC 001728DC  F3 C1 00 18 */	psq_st f30, 0x18(r1), 0, qr0
/* 80175800 001728E0  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80175804 001728E4  7C 7F 1B 78 */	mr r31, r3
/* 80175808 001728E8  FF C0 08 90 */	fmr f30, f1
/* 8017580C 001728EC  4B F4 F6 41 */	bl isin__Ff
/* 80175810 001728F0  FC 00 08 90 */	fmr f0, f1
/* 80175814 001728F4  FC 20 F0 90 */	fmr f1, f30
/* 80175818 001728F8  FF E0 00 90 */	fmr f31, f0
/* 8017581C 001728FC  4B F4 F6 75 */	bl icos__Ff
/* 80175820 00172900  FC 60 F8 50 */	fneg f3, f31
/* 80175824 00172904  C0 42 AC B8 */	lfs f2, "@1605"@sda21(r2)
/* 80175828 00172908  FF C0 08 90 */	fmr f30, f1
/* 8017582C 0017290C  7F E3 FB 78 */	mr r3, r31
/* 80175830 00172910  4B E9 58 BD */	bl assign__5xVec3Ffff
/* 80175834 00172914  C0 22 AC B8 */	lfs f1, "@1605"@sda21(r2)
/* 80175838 00172918  38 7F 00 10 */	addi r3, r31, 0x10
/* 8017583C 0017291C  C0 42 AC BC */	lfs f2, "@1606"@sda21(r2)
/* 80175840 00172920  FC 60 08 90 */	fmr f3, f1
/* 80175844 00172924  4B E9 58 A9 */	bl assign__5xVec3Ffff
/* 80175848 00172928  FC 20 F8 90 */	fmr f1, f31
/* 8017584C 0017292C  C0 42 AC B8 */	lfs f2, "@1605"@sda21(r2)
/* 80175850 00172930  FC 60 F0 90 */	fmr f3, f30
/* 80175854 00172934  38 7F 00 20 */	addi r3, r31, 0x20
/* 80175858 00172938  4B E9 58 95 */	bl assign__5xVec3Ffff
/* 8017585C 0017293C  E3 E1 00 28 */	psq_l f31, 0x28(r1), 0, qr0
/* 80175860 00172940  CB E1 00 20 */	lfd f31, 0x20(r1)
/* 80175864 00172944  E3 C1 00 18 */	psq_l f30, 0x18(r1), 0, qr0
/* 80175868 00172948  CB C1 00 10 */	lfd f30, 0x10(r1)
/* 8017586C 0017294C  80 01 00 34 */	lwz r0, 0x34(r1)
/* 80175870 00172950  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80175874 00172954  7C 08 03 A6 */	mtlr r0
/* 80175878 00172958  38 21 00 30 */	addi r1, r1, 0x30
/* 8017587C 0017295C  4E 80 00 20 */	blr
.endfn "set_yaw_matrix__30@unnamed@zNPCTypeDutchman_cpp@FR7xMat3x3f"

# @unnamed@zNPCTypeDutchman_cpp@::update_move_follow(xVec3&, zNPCDutchman::move_info&, const xMat3x3&, float)
.fn "update_move_follow__30@unnamed@zNPCTypeDutchman_cpp@FR5xVec3RQ212zNPCDutchman9move_infoRC7xMat3x3f", local
/* 80175880 00172960  94 21 FF B0 */	stwu r1, -0x50(r1)
/* 80175884 00172964  7C 08 02 A6 */	mflr r0
/* 80175888 00172968  90 01 00 54 */	stw r0, 0x54(r1)
/* 8017588C 0017296C  DB E1 00 40 */	stfd f31, 0x40(r1)
/* 80175890 00172970  F3 E1 00 48 */	psq_st f31, 0x48(r1), 0, qr0
/* 80175894 00172974  93 E1 00 3C */	stw r31, 0x3c(r1)
/* 80175898 00172978  93 C1 00 38 */	stw r30, 0x38(r1)
/* 8017589C 0017297C  93 A1 00 34 */	stw r29, 0x34(r1)
/* 801758A0 00172980  FF E0 08 90 */	fmr f31, f1
/* 801758A4 00172984  7C 7D 1B 78 */	mr r29, r3
/* 801758A8 00172988  7C BF 2B 78 */	mr r31, r5
/* 801758AC 0017298C  7C 9E 23 78 */	mr r30, r4
/* 801758B0 00172990  7F A5 EB 78 */	mr r5, r29
/* 801758B4 00172994  38 61 00 08 */	addi r3, r1, 0x8
/* 801758B8 00172998  4B E9 59 15 */	bl __mi__5xVec3CFRC5xVec3
/* 801758BC 0017299C  80 E1 00 08 */	lwz r7, 0x8(r1)
/* 801758C0 001729A0  38 61 00 20 */	addi r3, r1, 0x20
/* 801758C4 001729A4  80 C1 00 0C */	lwz r6, 0xc(r1)
/* 801758C8 001729A8  7F E4 FB 78 */	mr r4, r31
/* 801758CC 001729AC  80 01 00 10 */	lwz r0, 0x10(r1)
/* 801758D0 001729B0  7C 65 1B 78 */	mr r5, r3
/* 801758D4 001729B4  90 E1 00 20 */	stw r7, 0x20(r1)
/* 801758D8 001729B8  90 C1 00 24 */	stw r6, 0x24(r1)
/* 801758DC 001729BC  90 01 00 28 */	stw r0, 0x28(r1)
/* 801758E0 001729C0  4B EB D1 7D */	bl xMat3x3LMulVec__FP5xVec3PC7xMat3x3PC5xVec3
/* 801758E4 001729C4  3C 60 80 27 */	lis r3, "@2124"@ha
/* 801758E8 001729C8  FC 40 F8 90 */	fmr f2, f31
/* 801758EC 001729CC  38 83 20 A8 */	addi r4, r3, "@2124"@l
/* 801758F0 001729D0  C0 61 00 20 */	lfs f3, 0x20(r1)
/* 801758F4 001729D4  80 C4 00 00 */	lwz r6, 0x0(r4)
/* 801758F8 001729D8  38 61 00 14 */	addi r3, r1, 0x14
/* 801758FC 001729DC  80 A4 00 04 */	lwz r5, 0x4(r4)
/* 80175900 001729E0  80 04 00 08 */	lwz r0, 0x8(r4)
/* 80175904 001729E4  38 9E 00 0C */	addi r4, r30, 0xc
/* 80175908 001729E8  90 C1 00 14 */	stw r6, 0x14(r1)
/* 8017590C 001729EC  90 A1 00 18 */	stw r5, 0x18(r1)
/* 80175910 001729F0  90 01 00 1C */	stw r0, 0x1c(r1)
/* 80175914 001729F4  C0 3E 00 18 */	lfs f1, 0x18(r30)
/* 80175918 001729F8  C0 9E 00 24 */	lfs f4, 0x24(r30)
/* 8017591C 001729FC  4B EB B8 39 */	bl xAccelMove__FRfRfffff
/* 80175920 00172A00  FC 40 F8 90 */	fmr f2, f31
/* 80175924 00172A04  C0 3E 00 1C */	lfs f1, 0x1c(r30)
/* 80175928 00172A08  C0 61 00 24 */	lfs f3, 0x24(r1)
/* 8017592C 00172A0C  38 61 00 18 */	addi r3, r1, 0x18
/* 80175930 00172A10  C0 9E 00 28 */	lfs f4, 0x28(r30)
/* 80175934 00172A14  38 9E 00 10 */	addi r4, r30, 0x10
/* 80175938 00172A18  4B EB B8 1D */	bl xAccelMove__FRfRfffff
/* 8017593C 00172A1C  FC 40 F8 90 */	fmr f2, f31
/* 80175940 00172A20  C0 3E 00 20 */	lfs f1, 0x20(r30)
/* 80175944 00172A24  C0 61 00 28 */	lfs f3, 0x28(r1)
/* 80175948 00172A28  38 61 00 1C */	addi r3, r1, 0x1c
/* 8017594C 00172A2C  C0 9E 00 2C */	lfs f4, 0x2c(r30)
/* 80175950 00172A30  38 9E 00 14 */	addi r4, r30, 0x14
/* 80175954 00172A34  4B EB B8 01 */	bl xAccelMove__FRfRfffff
/* 80175958 00172A38  38 61 00 14 */	addi r3, r1, 0x14
/* 8017595C 00172A3C  7F E4 FB 78 */	mr r4, r31
/* 80175960 00172A40  7C 65 1B 78 */	mr r5, r3
/* 80175964 00172A44  48 00 66 B1 */	bl xMat3x3RMulVec__FP5xVec3PC7xMat3x3PC5xVec3
/* 80175968 00172A48  7F A3 EB 78 */	mr r3, r29
/* 8017596C 00172A4C  38 81 00 14 */	addi r4, r1, 0x14
/* 80175970 00172A50  4B E9 FA D5 */	bl __apl__5xVec3FRC5xVec3
/* 80175974 00172A54  E3 E1 00 48 */	psq_l f31, 0x48(r1), 0, qr0
/* 80175978 00172A58  80 01 00 54 */	lwz r0, 0x54(r1)
/* 8017597C 00172A5C  CB E1 00 40 */	lfd f31, 0x40(r1)
/* 80175980 00172A60  83 E1 00 3C */	lwz r31, 0x3c(r1)
/* 80175984 00172A64  83 C1 00 38 */	lwz r30, 0x38(r1)
/* 80175988 00172A68  83 A1 00 34 */	lwz r29, 0x34(r1)
/* 8017598C 00172A6C  7C 08 03 A6 */	mtlr r0
/* 80175990 00172A70  38 21 00 50 */	addi r1, r1, 0x50
/* 80175994 00172A74  4E 80 00 20 */	blr
.endfn "update_move_follow__30@unnamed@zNPCTypeDutchman_cpp@FR5xVec3RQ212zNPCDutchman9move_infoRC7xMat3x3f"

# @unnamed@zNPCTypeDutchman_cpp@::update_move_accel(xVec3&, zNPCDutchman::move_info&, float)
.fn "update_move_accel__30@unnamed@zNPCTypeDutchman_cpp@FR5xVec3RQ212zNPCDutchman9move_infof", local
/* 80175998 00172A78  94 21 FF B0 */	stwu r1, -0x50(r1)
/* 8017599C 00172A7C  7C 08 02 A6 */	mflr r0
/* 801759A0 00172A80  90 01 00 54 */	stw r0, 0x54(r1)
/* 801759A4 00172A84  DB E1 00 40 */	stfd f31, 0x40(r1)
/* 801759A8 00172A88  F3 E1 00 48 */	psq_st f31, 0x48(r1), 0, qr0
/* 801759AC 00172A8C  93 E1 00 3C */	stw r31, 0x3c(r1)
/* 801759B0 00172A90  93 C1 00 38 */	stw r30, 0x38(r1)
/* 801759B4 00172A94  FF E0 08 90 */	fmr f31, f1
/* 801759B8 00172A98  7C 9F 23 78 */	mr r31, r4
/* 801759BC 00172A9C  7C 7E 1B 78 */	mr r30, r3
/* 801759C0 00172AA0  38 61 00 14 */	addi r3, r1, 0x14
/* 801759C4 00172AA4  38 9F 00 0C */	addi r4, r31, 0xc
/* 801759C8 00172AA8  4B E9 57 59 */	bl __ml__5xVec3CFf
/* 801759CC 00172AAC  C0 02 AC C0 */	lfs f0, "@1632"@sda21(r2)
/* 801759D0 00172AB0  38 61 00 20 */	addi r3, r1, 0x20
/* 801759D4 00172AB4  38 9F 00 18 */	addi r4, r31, 0x18
/* 801759D8 00172AB8  EC 00 07 F2 */	fmuls f0, f0, f31
/* 801759DC 00172ABC  EC 20 07 F2 */	fmuls f1, f0, f31
/* 801759E0 00172AC0  4B E9 57 41 */	bl __ml__5xVec3CFf
/* 801759E4 00172AC4  38 61 00 2C */	addi r3, r1, 0x2c
/* 801759E8 00172AC8  38 81 00 20 */	addi r4, r1, 0x20
/* 801759EC 00172ACC  38 A1 00 14 */	addi r5, r1, 0x14
/* 801759F0 00172AD0  4B E9 F9 F1 */	bl __pl__5xVec3CFRC5xVec3
/* 801759F4 00172AD4  7F C3 F3 78 */	mr r3, r30
/* 801759F8 00172AD8  38 81 00 2C */	addi r4, r1, 0x2c
/* 801759FC 00172ADC  4B E9 FA 49 */	bl __apl__5xVec3FRC5xVec3
/* 80175A00 00172AE0  FC 20 F8 90 */	fmr f1, f31
/* 80175A04 00172AE4  38 61 00 08 */	addi r3, r1, 0x8
/* 80175A08 00172AE8  38 9F 00 18 */	addi r4, r31, 0x18
/* 80175A0C 00172AEC  4B E9 57 15 */	bl __ml__5xVec3CFf
/* 80175A10 00172AF0  38 7F 00 0C */	addi r3, r31, 0xc
/* 80175A14 00172AF4  38 81 00 08 */	addi r4, r1, 0x8
/* 80175A18 00172AF8  4B E9 FA 2D */	bl __apl__5xVec3FRC5xVec3
/* 80175A1C 00172AFC  E3 E1 00 48 */	psq_l f31, 0x48(r1), 0, qr0
/* 80175A20 00172B00  80 01 00 54 */	lwz r0, 0x54(r1)
/* 80175A24 00172B04  CB E1 00 40 */	lfd f31, 0x40(r1)
/* 80175A28 00172B08  83 E1 00 3C */	lwz r31, 0x3c(r1)
/* 80175A2C 00172B0C  83 C1 00 38 */	lwz r30, 0x38(r1)
/* 80175A30 00172B10  7C 08 03 A6 */	mtlr r0
/* 80175A34 00172B14  38 21 00 50 */	addi r1, r1, 0x50
/* 80175A38 00172B18  4E 80 00 20 */	blr
.endfn "update_move_accel__30@unnamed@zNPCTypeDutchman_cpp@FR5xVec3RQ212zNPCDutchman9move_infof"

# @unnamed@zNPCTypeDutchman_cpp@::update_move_vel(xVec3&, zNPCDutchman::move_info&, float)
.fn "update_move_vel__30@unnamed@zNPCTypeDutchman_cpp@FR5xVec3RQ212zNPCDutchman9move_infof", local
/* 80175A3C 00172B1C  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 80175A40 00172B20  7C 08 02 A6 */	mflr r0
/* 80175A44 00172B24  38 84 00 0C */	addi r4, r4, 0xc
/* 80175A48 00172B28  90 01 00 24 */	stw r0, 0x24(r1)
/* 80175A4C 00172B2C  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 80175A50 00172B30  7C 7F 1B 78 */	mr r31, r3
/* 80175A54 00172B34  38 61 00 08 */	addi r3, r1, 0x8
/* 80175A58 00172B38  4B E9 56 C9 */	bl __ml__5xVec3CFf
/* 80175A5C 00172B3C  7F E3 FB 78 */	mr r3, r31
/* 80175A60 00172B40  38 81 00 08 */	addi r4, r1, 0x8
/* 80175A64 00172B44  4B E9 F9 E1 */	bl __apl__5xVec3FRC5xVec3
/* 80175A68 00172B48  80 01 00 24 */	lwz r0, 0x24(r1)
/* 80175A6C 00172B4C  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 80175A70 00172B50  7C 08 03 A6 */	mtlr r0
/* 80175A74 00172B54  38 21 00 20 */	addi r1, r1, 0x20
/* 80175A78 00172B58  4E 80 00 20 */	blr
.endfn "update_move_vel__30@unnamed@zNPCTypeDutchman_cpp@FR5xVec3RQ212zNPCDutchman9move_infof"

# @unnamed@zNPCTypeDutchman_cpp@::update_move_stop(xVec3&, zNPCDutchman::move_info&, float)
.fn "update_move_stop__30@unnamed@zNPCTypeDutchman_cpp@FR5xVec3RQ212zNPCDutchman9move_infof", local
/* 80175A7C 00172B5C  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 80175A80 00172B60  7C 08 02 A6 */	mflr r0
/* 80175A84 00172B64  90 01 00 24 */	stw r0, 0x24(r1)
/* 80175A88 00172B68  DB E1 00 10 */	stfd f31, 0x10(r1)
/* 80175A8C 00172B6C  F3 E1 00 18 */	psq_st f31, 0x18(r1), 0, qr0
/* 80175A90 00172B70  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80175A94 00172B74  93 C1 00 08 */	stw r30, 0x8(r1)
/* 80175A98 00172B78  FF E0 08 90 */	fmr f31, f1
/* 80175A9C 00172B7C  7C 9F 23 78 */	mr r31, r4
/* 80175AA0 00172B80  C0 24 00 18 */	lfs f1, 0x18(r4)
/* 80175AA4 00172B84  7C 7E 1B 78 */	mr r30, r3
/* 80175AA8 00172B88  38 9F 00 0C */	addi r4, r31, 0xc
/* 80175AAC 00172B8C  FC 40 F8 90 */	fmr f2, f31
/* 80175AB0 00172B90  4B EB BA CD */	bl xAccelStop__FRfRfff
/* 80175AB4 00172B94  FC 40 F8 90 */	fmr f2, f31
/* 80175AB8 00172B98  C0 3F 00 1C */	lfs f1, 0x1c(r31)
/* 80175ABC 00172B9C  38 7E 00 04 */	addi r3, r30, 0x4
/* 80175AC0 00172BA0  38 9F 00 10 */	addi r4, r31, 0x10
/* 80175AC4 00172BA4  4B EB BA B9 */	bl xAccelStop__FRfRfff
/* 80175AC8 00172BA8  FC 40 F8 90 */	fmr f2, f31
/* 80175ACC 00172BAC  C0 3F 00 20 */	lfs f1, 0x20(r31)
/* 80175AD0 00172BB0  38 7E 00 08 */	addi r3, r30, 0x8
/* 80175AD4 00172BB4  38 9F 00 14 */	addi r4, r31, 0x14
/* 80175AD8 00172BB8  4B EB BA A5 */	bl xAccelStop__FRfRfff
/* 80175ADC 00172BBC  E3 E1 00 18 */	psq_l f31, 0x18(r1), 0, qr0
/* 80175AE0 00172BC0  80 01 00 24 */	lwz r0, 0x24(r1)
/* 80175AE4 00172BC4  CB E1 00 10 */	lfd f31, 0x10(r1)
/* 80175AE8 00172BC8  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80175AEC 00172BCC  83 C1 00 08 */	lwz r30, 0x8(r1)
/* 80175AF0 00172BD0  7C 08 03 A6 */	mtlr r0
/* 80175AF4 00172BD4  38 21 00 20 */	addi r1, r1, 0x20
/* 80175AF8 00172BD8  4E 80 00 20 */	blr
.endfn "update_move_stop__30@unnamed@zNPCTypeDutchman_cpp@FR5xVec3RQ212zNPCDutchman9move_infof"

# zNPCDutchman::update_turn(float)
.fn update_turn__12zNPCDutchmanFf, global
/* 80175AFC 00172BDC  94 21 FF C0 */	stwu r1, -0x40(r1)
/* 80175B00 00172BE0  7C 08 02 A6 */	mflr r0
/* 80175B04 00172BE4  90 01 00 44 */	stw r0, 0x44(r1)
/* 80175B08 00172BE8  DB E1 00 30 */	stfd f31, 0x30(r1)
/* 80175B0C 00172BEC  F3 E1 00 38 */	psq_st f31, 0x38(r1), 0, qr0
/* 80175B10 00172BF0  DB C1 00 20 */	stfd f30, 0x20(r1)
/* 80175B14 00172BF4  F3 C1 00 28 */	psq_st f30, 0x28(r1), 0, qr0
/* 80175B18 00172BF8  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 80175B1C 00172BFC  7C 7F 1B 78 */	mr r31, r3
/* 80175B20 00172C00  FF C0 08 90 */	fmr f30, f1
/* 80175B24 00172C04  48 00 5C F9 */	bl get_center__12zNPCDutchmanCFv
/* 80175B28 00172C08  80 BF 00 24 */	lwz r5, 0x24(r31)
/* 80175B2C 00172C0C  7F E3 FB 78 */	mr r3, r31
/* 80175B30 00172C10  80 82 C0 40 */	lwz r4, "@2168"@sda21(r2)
/* 80175B34 00172C14  80 A5 00 4C */	lwz r5, 0x4c(r5)
/* 80175B38 00172C18  80 02 C0 44 */	lwz r0, "@2168"+0x4@sda21(r2)
/* 80175B3C 00172C1C  90 81 00 0C */	stw r4, 0xc(r1)
/* 80175B40 00172C20  C0 25 00 20 */	lfs f1, 0x20(r5)
/* 80175B44 00172C24  90 01 00 10 */	stw r0, 0x10(r1)
/* 80175B48 00172C28  C0 05 00 28 */	lfs f0, 0x28(r5)
/* 80175B4C 00172C2C  D0 21 00 0C */	stfs f1, 0xc(r1)
/* 80175B50 00172C30  D0 01 00 10 */	stfs f0, 0x10(r1)
/* 80175B54 00172C34  48 00 5C F9 */	bl turning__12zNPCDutchmanCFv
/* 80175B58 00172C38  54 60 06 3F */	clrlwi. r0, r3, 24
/* 80175B5C 00172C3C  41 82 00 80 */	beq .L_80175BDC
/* 80175B60 00172C40  C0 21 00 0C */	lfs f1, 0xc(r1)
/* 80175B64 00172C44  C0 41 00 10 */	lfs f2, 0x10(r1)
/* 80175B68 00172C48  4B E9 05 09 */	bl xatan2__Fff
/* 80175B6C 00172C4C  FF E0 08 90 */	fmr f31, f1
/* 80175B70 00172C50  C0 3F 02 D8 */	lfs f1, 0x2d8(r31)
/* 80175B74 00172C54  C0 5F 02 DC */	lfs f2, 0x2dc(r31)
/* 80175B78 00172C58  4B E9 04 F9 */	bl xatan2__Fff
/* 80175B7C 00172C5C  EC 61 F8 28 */	fsubs f3, f1, f31
/* 80175B80 00172C60  C0 02 AD 94 */	lfs f0, "@2180"@sda21(r2)
/* 80175B84 00172C64  FC 03 00 40 */	fcmpo cr0, f3, f0
/* 80175B88 00172C68  40 81 00 10 */	ble .L_80175B98
/* 80175B8C 00172C6C  C0 02 AD 98 */	lfs f0, "@2181"@sda21(r2)
/* 80175B90 00172C70  EC 63 00 28 */	fsubs f3, f3, f0
/* 80175B94 00172C74  48 00 00 18 */	b .L_80175BAC
.L_80175B98:
/* 80175B98 00172C78  C0 02 AD 9C */	lfs f0, "@2182"@sda21(r2)
/* 80175B9C 00172C7C  FC 03 00 40 */	fcmpo cr0, f3, f0
/* 80175BA0 00172C80  40 80 00 0C */	bge .L_80175BAC
/* 80175BA4 00172C84  C0 02 AD 98 */	lfs f0, "@2181"@sda21(r2)
/* 80175BA8 00172C88  EC 63 00 2A */	fadds f3, f3, f0
.L_80175BAC:
/* 80175BAC 00172C8C  FC 00 F8 18 */	frsp f0, f31
/* 80175BB0 00172C90  D3 E1 00 08 */	stfs f31, 0x8(r1)
/* 80175BB4 00172C94  FC 40 F0 90 */	fmr f2, f30
/* 80175BB8 00172C98  38 61 00 08 */	addi r3, r1, 0x8
/* 80175BBC 00172C9C  C0 3F 02 E4 */	lfs f1, 0x2e4(r31)
/* 80175BC0 00172CA0  38 9F 02 E0 */	addi r4, r31, 0x2e0
/* 80175BC4 00172CA4  EC 60 18 2A */	fadds f3, f0, f3
/* 80175BC8 00172CA8  C0 9F 02 E8 */	lfs f4, 0x2e8(r31)
/* 80175BCC 00172CAC  4B EB B5 89 */	bl xAccelMove__FRfRfffff
/* 80175BD0 00172CB0  80 7F 00 48 */	lwz r3, 0x48(r31)
/* 80175BD4 00172CB4  C0 21 00 08 */	lfs f1, 0x8(r1)
/* 80175BD8 00172CB8  4B FF FC 0D */	bl "set_yaw_matrix__30@unnamed@zNPCTypeDutchman_cpp@FR7xMat3x3f"
.L_80175BDC:
/* 80175BDC 00172CBC  E3 E1 00 38 */	psq_l f31, 0x38(r1), 0, qr0
/* 80175BE0 00172CC0  CB E1 00 30 */	lfd f31, 0x30(r1)
/* 80175BE4 00172CC4  E3 C1 00 28 */	psq_l f30, 0x28(r1), 0, qr0
/* 80175BE8 00172CC8  CB C1 00 20 */	lfd f30, 0x20(r1)
/* 80175BEC 00172CCC  80 01 00 44 */	lwz r0, 0x44(r1)
/* 80175BF0 00172CD0  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 80175BF4 00172CD4  7C 08 03 A6 */	mtlr r0
/* 80175BF8 00172CD8  38 21 00 40 */	addi r1, r1, 0x40
/* 80175BFC 00172CDC  4E 80 00 20 */	blr
.endfn update_turn__12zNPCDutchmanFf

# zNPCDutchman::update_move(float)
.fn update_move__12zNPCDutchmanFf, global
/* 80175C00 00172CE0  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80175C04 00172CE4  7C 08 02 A6 */	mflr r0
/* 80175C08 00172CE8  90 01 00 14 */	stw r0, 0x14(r1)
/* 80175C0C 00172CEC  80 03 02 BC */	lwz r0, 0x2bc(r3)
/* 80175C10 00172CF0  2C 00 00 03 */	cmpwi r0, 0x3
/* 80175C14 00172CF4  41 82 00 4C */	beq .L_80175C60
/* 80175C18 00172CF8  40 80 00 14 */	bge .L_80175C2C
/* 80175C1C 00172CFC  2C 00 00 01 */	cmpwi r0, 0x1
/* 80175C20 00172D00  41 82 00 18 */	beq .L_80175C38
/* 80175C24 00172D04  40 80 00 28 */	bge .L_80175C4C
/* 80175C28 00172D08  48 00 00 5C */	b .L_80175C84
.L_80175C2C:
/* 80175C2C 00172D0C  2C 00 00 05 */	cmpwi r0, 0x5
/* 80175C30 00172D10  40 80 00 54 */	bge .L_80175C84
/* 80175C34 00172D14  48 00 00 40 */	b .L_80175C74
.L_80175C38:
/* 80175C38 00172D18  80 A3 00 48 */	lwz r5, 0x48(r3)
/* 80175C3C 00172D1C  38 83 02 EC */	addi r4, r3, 0x2ec
/* 80175C40 00172D20  38 65 00 30 */	addi r3, r5, 0x30
/* 80175C44 00172D24  4B FF FC 3D */	bl "update_move_follow__30@unnamed@zNPCTypeDutchman_cpp@FR5xVec3RQ212zNPCDutchman9move_infoRC7xMat3x3f"
/* 80175C48 00172D28  48 00 00 3C */	b .L_80175C84
.L_80175C4C:
/* 80175C4C 00172D2C  80 A3 00 48 */	lwz r5, 0x48(r3)
/* 80175C50 00172D30  38 83 02 EC */	addi r4, r3, 0x2ec
/* 80175C54 00172D34  38 65 00 30 */	addi r3, r5, 0x30
/* 80175C58 00172D38  4B FF FD 41 */	bl "update_move_accel__30@unnamed@zNPCTypeDutchman_cpp@FR5xVec3RQ212zNPCDutchman9move_infof"
/* 80175C5C 00172D3C  48 00 00 28 */	b .L_80175C84
.L_80175C60:
/* 80175C60 00172D40  80 A3 00 48 */	lwz r5, 0x48(r3)
/* 80175C64 00172D44  38 83 02 EC */	addi r4, r3, 0x2ec
/* 80175C68 00172D48  38 65 00 30 */	addi r3, r5, 0x30
/* 80175C6C 00172D4C  4B FF FD D1 */	bl "update_move_vel__30@unnamed@zNPCTypeDutchman_cpp@FR5xVec3RQ212zNPCDutchman9move_infof"
/* 80175C70 00172D50  48 00 00 14 */	b .L_80175C84
.L_80175C74:
/* 80175C74 00172D54  80 A3 00 48 */	lwz r5, 0x48(r3)
/* 80175C78 00172D58  38 83 02 EC */	addi r4, r3, 0x2ec
/* 80175C7C 00172D5C  38 65 00 30 */	addi r3, r5, 0x30
/* 80175C80 00172D60  4B FF FD FD */	bl "update_move_stop__30@unnamed@zNPCTypeDutchman_cpp@FR5xVec3RQ212zNPCDutchman9move_infof"
.L_80175C84:
/* 80175C84 00172D64  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80175C88 00172D68  7C 08 03 A6 */	mtlr r0
/* 80175C8C 00172D6C  38 21 00 10 */	addi r1, r1, 0x10
/* 80175C90 00172D70  4E 80 00 20 */	blr
.endfn update_move__12zNPCDutchmanFf

# zNPCDutchman::update_animation(float)
.fn update_animation__12zNPCDutchmanFf, global
/* 80175C94 00172D74  4E 80 00 20 */	blr
.endfn update_animation__12zNPCDutchmanFf

# zNPCDutchman::update_camera(float)
.fn update_camera__12zNPCDutchmanFf, global
/* 80175C98 00172D78  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80175C9C 00172D7C  7C 08 02 A6 */	mflr r0
/* 80175CA0 00172D80  38 60 00 08 */	li r3, 0x8
/* 80175CA4 00172D84  90 01 00 14 */	stw r0, 0x14(r1)
/* 80175CA8 00172D88  DB E1 00 08 */	stfd f31, 0x8(r1)
/* 80175CAC 00172D8C  FF E0 08 90 */	fmr f31, f1
/* 80175CB0 00172D90  4B ED C4 51 */	bl zCameraDisableTracking__F17camera_owner_enum
/* 80175CB4 00172D94  4B ED C4 6D */	bl zCameraIsTrackingDisabled__Fv
/* 80175CB8 00172D98  54 60 07 77 */	rlwinm. r0, r3, 0, 29, 27
/* 80175CBC 00172D9C  40 82 00 14 */	bne .L_80175CD0
/* 80175CC0 00172DA0  FC 20 F8 90 */	fmr f1, f31
/* 80175CC4 00172DA4  3C 60 80 2A */	lis r3, "boss_cam__30@unnamed@zNPCTypeDutchman_cpp@"@ha
/* 80175CC8 00172DA8  38 63 B4 60 */	addi r3, r3, "boss_cam__30@unnamed@zNPCTypeDutchman_cpp@"@l
/* 80175CCC 00172DAC  4B E9 82 39 */	bl update__13xBinaryCameraFf
.L_80175CD0:
/* 80175CD0 00172DB0  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80175CD4 00172DB4  CB E1 00 08 */	lfd f31, 0x8(r1)
/* 80175CD8 00172DB8  7C 08 03 A6 */	mtlr r0
/* 80175CDC 00172DBC  38 21 00 10 */	addi r1, r1, 0x10
/* 80175CE0 00172DC0  4E 80 00 20 */	blr
.endfn update_camera__12zNPCDutchmanFf

# @unnamed@zNPCTypeDutchman_cpp@::clip_outside_circle(float&, const xVec2&, const xVec2&, float, float, const xVec2&, float)
.fn "clip_outside_circle__30@unnamed@zNPCTypeDutchman_cpp@FRfRC5xVec2RC5xVec2ffRC5xVec2f", local
/* 80175CE4 00172DC4  94 21 FF 70 */	stwu r1, -0x90(r1)
/* 80175CE8 00172DC8  7C 08 02 A6 */	mflr r0
/* 80175CEC 00172DCC  90 01 00 94 */	stw r0, 0x94(r1)
/* 80175CF0 00172DD0  DB E1 00 80 */	stfd f31, 0x80(r1)
/* 80175CF4 00172DD4  F3 E1 00 88 */	psq_st f31, 0x88(r1), 0, qr0
/* 80175CF8 00172DD8  DB C1 00 70 */	stfd f30, 0x70(r1)
/* 80175CFC 00172DDC  F3 C1 00 78 */	psq_st f30, 0x78(r1), 0, qr0
/* 80175D00 00172DE0  DB A1 00 60 */	stfd f29, 0x60(r1)
/* 80175D04 00172DE4  F3 A1 00 68 */	psq_st f29, 0x68(r1), 0, qr0
/* 80175D08 00172DE8  DB 81 00 50 */	stfd f28, 0x50(r1)
/* 80175D0C 00172DEC  F3 81 00 58 */	psq_st f28, 0x58(r1), 0, qr0
/* 80175D10 00172DF0  93 E1 00 4C */	stw r31, 0x4c(r1)
/* 80175D14 00172DF4  93 C1 00 48 */	stw r30, 0x48(r1)
/* 80175D18 00172DF8  93 A1 00 44 */	stw r29, 0x44(r1)
/* 80175D1C 00172DFC  93 81 00 40 */	stw r28, 0x40(r1)
/* 80175D20 00172E00  FF 80 08 90 */	fmr f28, f1
/* 80175D24 00172E04  7C BE 2B 78 */	mr r30, r5
/* 80175D28 00172E08  7C 7C 1B 78 */	mr r28, r3
/* 80175D2C 00172E0C  EF C3 00 F2 */	fmuls f30, f3, f3
/* 80175D30 00172E10  7C 9D 23 78 */	mr r29, r4
/* 80175D34 00172E14  7C DF 33 78 */	mr r31, r6
/* 80175D38 00172E18  EF A2 E0 28 */	fsubs f29, f2, f28
/* 80175D3C 00172E1C  7F C3 F3 78 */	mr r3, r30
/* 80175D40 00172E20  FC 20 E8 90 */	fmr f1, f29
/* 80175D44 00172E24  4B EE A3 81 */	bl __ml__5xVec2CFf
/* 80175D48 00172E28  FC 20 E0 90 */	fmr f1, f28
/* 80175D4C 00172E2C  90 61 00 30 */	stw r3, 0x30(r1)
/* 80175D50 00172E30  7F C3 F3 78 */	mr r3, r30
/* 80175D54 00172E34  90 81 00 34 */	stw r4, 0x34(r1)
/* 80175D58 00172E38  4B EE A3 6D */	bl __ml__5xVec2CFf
/* 80175D5C 00172E3C  90 81 00 0C */	stw r4, 0xc(r1)
/* 80175D60 00172E40  38 81 00 08 */	addi r4, r1, 0x8
/* 80175D64 00172E44  90 61 00 08 */	stw r3, 0x8(r1)
/* 80175D68 00172E48  7F A3 EB 78 */	mr r3, r29
/* 80175D6C 00172E4C  4B FE A1 55 */	bl __pl__5xVec2CFRC5xVec2
/* 80175D70 00172E50  90 81 00 2C */	stw r4, 0x2c(r1)
/* 80175D74 00172E54  38 81 00 30 */	addi r4, r1, 0x30
/* 80175D78 00172E58  90 61 00 28 */	stw r3, 0x28(r1)
/* 80175D7C 00172E5C  38 61 00 28 */	addi r3, r1, 0x28
/* 80175D80 00172E60  4B FE A1 41 */	bl __pl__5xVec2CFRC5xVec2
/* 80175D84 00172E64  90 81 00 24 */	stw r4, 0x24(r1)
/* 80175D88 00172E68  7F E4 FB 78 */	mr r4, r31
/* 80175D8C 00172E6C  90 61 00 20 */	stw r3, 0x20(r1)
/* 80175D90 00172E70  38 61 00 20 */	addi r3, r1, 0x20
/* 80175D94 00172E74  4B E9 FB E1 */	bl __mi__5xVec2CFRC5xVec2
/* 80175D98 00172E78  90 61 00 18 */	stw r3, 0x18(r1)
/* 80175D9C 00172E7C  38 61 00 18 */	addi r3, r1, 0x18
/* 80175DA0 00172E80  90 81 00 1C */	stw r4, 0x1c(r1)
/* 80175DA4 00172E84  4B E9 FB B9 */	bl length2__5xVec2CFv
/* 80175DA8 00172E88  FF E0 08 90 */	fmr f31, f1
/* 80175DAC 00172E8C  FC 1F F0 40 */	fcmpo cr0, f31, f30
/* 80175DB0 00172E90  4C 40 13 82 */	cror eq, lt, eq
/* 80175DB4 00172E94  40 82 00 0C */	bne .L_80175DC0
/* 80175DB8 00172E98  38 60 00 00 */	li r3, 0x0
/* 80175DBC 00172E9C  48 00 00 94 */	b .L_80175E50
.L_80175DC0:
/* 80175DC0 00172EA0  7F E4 FB 78 */	mr r4, r31
/* 80175DC4 00172EA4  38 61 00 28 */	addi r3, r1, 0x28
/* 80175DC8 00172EA8  4B E9 FB AD */	bl __mi__5xVec2CFRC5xVec2
/* 80175DCC 00172EAC  90 61 00 10 */	stw r3, 0x10(r1)
/* 80175DD0 00172EB0  38 61 00 10 */	addi r3, r1, 0x10
/* 80175DD4 00172EB4  90 81 00 14 */	stw r4, 0x14(r1)
/* 80175DD8 00172EB8  4B E9 FB 85 */	bl length2__5xVec2CFv
/* 80175DDC 00172EBC  FC 01 F0 40 */	fcmpo cr0, f1, f30
/* 80175DE0 00172EC0  40 81 00 10 */	ble .L_80175DF0
/* 80175DE4 00172EC4  D3 9C 00 00 */	stfs f28, 0x0(r28)
/* 80175DE8 00172EC8  38 60 00 01 */	li r3, 0x1
/* 80175DEC 00172ECC  48 00 00 64 */	b .L_80175E50
.L_80175DF0:
/* 80175DF0 00172ED0  EF BD 07 72 */	fmuls f29, f29, f29
/* 80175DF4 00172ED4  38 61 00 30 */	addi r3, r1, 0x30
/* 80175DF8 00172ED8  38 81 00 18 */	addi r4, r1, 0x18
/* 80175DFC 00172EDC  4B FA 76 C5 */	bl dot__5xVec2CFRC5xVec2
/* 80175E00 00172EE0  C0 02 AD 60 */	lfs f0, "@2006"@sda21(r2)
/* 80175E04 00172EE4  EC 5F F0 28 */	fsubs f2, f31, f30
/* 80175E08 00172EE8  C0 82 AD 1C */	lfs f4, "@1989"@sda21(r2)
/* 80175E0C 00172EEC  EC 60 07 72 */	fmuls f3, f0, f29
/* 80175E10 00172EF0  C0 02 AC B8 */	lfs f0, "@1605"@sda21(r2)
/* 80175E14 00172EF4  EF C4 00 72 */	fmuls f30, f4, f1
/* 80175E18 00172EF8  EC 23 00 B2 */	fmuls f1, f3, f2
/* 80175E1C 00172EFC  EC 3E 0F B8 */	fmsubs f1, f30, f30, f1
/* 80175E20 00172F00  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80175E24 00172F04  40 80 00 0C */	bge .L_80175E30
/* 80175E28 00172F08  38 60 00 00 */	li r3, 0x0
/* 80175E2C 00172F0C  48 00 00 24 */	b .L_80175E50
.L_80175E30:
/* 80175E30 00172F10  4B E9 49 CD */	bl xsqrt__Ff
/* 80175E34 00172F14  C0 42 AC C0 */	lfs f2, "@1632"@sda21(r2)
/* 80175E38 00172F18  FC 00 F0 50 */	fneg f0, f30
/* 80175E3C 00172F1C  38 60 00 01 */	li r3, 0x1
/* 80175E40 00172F20  EC 42 E8 24 */	fdivs f2, f2, f29
/* 80175E44 00172F24  EC 00 08 2A */	fadds f0, f0, f1
/* 80175E48 00172F28  EC 02 00 32 */	fmuls f0, f2, f0
/* 80175E4C 00172F2C  D0 1C 00 00 */	stfs f0, 0x0(r28)
.L_80175E50:
/* 80175E50 00172F30  E3 E1 00 88 */	psq_l f31, 0x88(r1), 0, qr0
/* 80175E54 00172F34  CB E1 00 80 */	lfd f31, 0x80(r1)
/* 80175E58 00172F38  E3 C1 00 78 */	psq_l f30, 0x78(r1), 0, qr0
/* 80175E5C 00172F3C  CB C1 00 70 */	lfd f30, 0x70(r1)
/* 80175E60 00172F40  E3 A1 00 68 */	psq_l f29, 0x68(r1), 0, qr0
/* 80175E64 00172F44  CB A1 00 60 */	lfd f29, 0x60(r1)
/* 80175E68 00172F48  E3 81 00 58 */	psq_l f28, 0x58(r1), 0, qr0
/* 80175E6C 00172F4C  CB 81 00 50 */	lfd f28, 0x50(r1)
/* 80175E70 00172F50  83 E1 00 4C */	lwz r31, 0x4c(r1)
/* 80175E74 00172F54  83 C1 00 48 */	lwz r30, 0x48(r1)
/* 80175E78 00172F58  83 A1 00 44 */	lwz r29, 0x44(r1)
/* 80175E7C 00172F5C  80 01 00 94 */	lwz r0, 0x94(r1)
/* 80175E80 00172F60  83 81 00 40 */	lwz r28, 0x40(r1)
/* 80175E84 00172F64  7C 08 03 A6 */	mtlr r0
/* 80175E88 00172F68  38 21 00 90 */	addi r1, r1, 0x90
/* 80175E8C 00172F6C  4E 80 00 20 */	blr
.endfn "clip_outside_circle__30@unnamed@zNPCTypeDutchman_cpp@FRfRC5xVec2RC5xVec2ffRC5xVec2f"

# @unnamed@zNPCTypeDutchman_cpp@::clip_outside_circle(float&, const xVec3&, const xVec3&, float, float, const xVec3&, float)
.fn "clip_outside_circle__30@unnamed@zNPCTypeDutchman_cpp@FRfRC5xVec3RC5xVec3ffRC5xVec3f", local
/* 80175E90 00172F70  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 80175E94 00172F74  7C 08 02 A6 */	mflr r0
/* 80175E98 00172F78  C1 04 00 00 */	lfs f8, 0x0(r4)
/* 80175E9C 00172F7C  90 01 00 24 */	stw r0, 0x24(r1)
/* 80175EA0 00172F80  C0 E4 00 08 */	lfs f7, 0x8(r4)
/* 80175EA4 00172F84  38 81 00 18 */	addi r4, r1, 0x18
/* 80175EA8 00172F88  81 62 C0 48 */	lwz r11, "@2275"@sda21(r2)
/* 80175EAC 00172F8C  81 42 C0 4C */	lwz r10, "@2275"+0x4@sda21(r2)
/* 80175EB0 00172F90  81 22 C0 50 */	lwz r9, "@2276"@sda21(r2)
/* 80175EB4 00172F94  81 02 C0 54 */	lwz r8, "@2276"+0x4@sda21(r2)
/* 80175EB8 00172F98  80 E2 C0 58 */	lwz r7, "@2277"@sda21(r2)
/* 80175EBC 00172F9C  80 02 C0 5C */	lwz r0, "@2277"+0x4@sda21(r2)
/* 80175EC0 00172FA0  91 61 00 18 */	stw r11, 0x18(r1)
/* 80175EC4 00172FA4  C0 C5 00 00 */	lfs f6, 0x0(r5)
/* 80175EC8 00172FA8  91 41 00 1C */	stw r10, 0x1c(r1)
/* 80175ECC 00172FAC  C0 A5 00 08 */	lfs f5, 0x8(r5)
/* 80175ED0 00172FB0  38 A1 00 10 */	addi r5, r1, 0x10
/* 80175ED4 00172FB4  91 21 00 10 */	stw r9, 0x10(r1)
/* 80175ED8 00172FB8  C0 86 00 00 */	lfs f4, 0x0(r6)
/* 80175EDC 00172FBC  91 01 00 14 */	stw r8, 0x14(r1)
/* 80175EE0 00172FC0  C0 06 00 08 */	lfs f0, 0x8(r6)
/* 80175EE4 00172FC4  38 C1 00 08 */	addi r6, r1, 0x8
/* 80175EE8 00172FC8  90 E1 00 08 */	stw r7, 0x8(r1)
/* 80175EEC 00172FCC  90 01 00 0C */	stw r0, 0xc(r1)
/* 80175EF0 00172FD0  D1 01 00 18 */	stfs f8, 0x18(r1)
/* 80175EF4 00172FD4  D0 E1 00 1C */	stfs f7, 0x1c(r1)
/* 80175EF8 00172FD8  D0 C1 00 10 */	stfs f6, 0x10(r1)
/* 80175EFC 00172FDC  D0 A1 00 14 */	stfs f5, 0x14(r1)
/* 80175F00 00172FE0  D0 81 00 08 */	stfs f4, 0x8(r1)
/* 80175F04 00172FE4  D0 01 00 0C */	stfs f0, 0xc(r1)
/* 80175F08 00172FE8  4B FF FD DD */	bl "clip_outside_circle__30@unnamed@zNPCTypeDutchman_cpp@FRfRC5xVec2RC5xVec2ffRC5xVec2f"
/* 80175F0C 00172FEC  80 01 00 24 */	lwz r0, 0x24(r1)
/* 80175F10 00172FF0  7C 08 03 A6 */	mtlr r0
/* 80175F14 00172FF4  38 21 00 20 */	addi r1, r1, 0x20
/* 80175F18 00172FF8  4E 80 00 20 */	blr
.endfn "clip_outside_circle__30@unnamed@zNPCTypeDutchman_cpp@FRfRC5xVec3RC5xVec3ffRC5xVec3f"

# zNPCDutchman::update_wave(zNPCDutchman::wave_data&, float)
.fn update_wave__12zNPCDutchmanFRQ212zNPCDutchman9wave_dataf, global
/* 80175F1C 00172FFC  94 21 FF 10 */	stwu r1, -0xf0(r1)
/* 80175F20 00173000  7C 08 02 A6 */	mflr r0
/* 80175F24 00173004  90 01 00 F4 */	stw r0, 0xf4(r1)
/* 80175F28 00173008  DB E1 00 E0 */	stfd f31, 0xe0(r1)
/* 80175F2C 0017300C  F3 E1 00 E8 */	psq_st f31, 0xe8(r1), 0, qr0
/* 80175F30 00173010  DB C1 00 D0 */	stfd f30, 0xd0(r1)
/* 80175F34 00173014  F3 C1 00 D8 */	psq_st f30, 0xd8(r1), 0, qr0
/* 80175F38 00173018  DB A1 00 C0 */	stfd f29, 0xc0(r1)
/* 80175F3C 0017301C  F3 A1 00 C8 */	psq_st f29, 0xc8(r1), 0, qr0
/* 80175F40 00173020  DB 81 00 B0 */	stfd f28, 0xb0(r1)
/* 80175F44 00173024  F3 81 00 B8 */	psq_st f28, 0xb8(r1), 0, qr0
/* 80175F48 00173028  DB 61 00 A0 */	stfd f27, 0xa0(r1)
/* 80175F4C 0017302C  F3 61 00 A8 */	psq_st f27, 0xa8(r1), 0, qr0
/* 80175F50 00173030  BE A1 00 74 */	stmw r21, 0x74(r1)
/* 80175F54 00173034  7C 97 23 78 */	mr r23, r4
/* 80175F58 00173038  3C 80 80 33 */	lis r4, ...bss.0@ha
/* 80175F5C 0017303C  3B E4 A5 78 */	addi r31, r4, ...bss.0@l
/* 80175F60 00173040  7C 76 1B 78 */	mr r22, r3
/* 80175F64 00173044  38 9F 00 00 */	addi r4, r31, 0x0
/* 80175F68 00173048  FC 40 08 90 */	fmr f2, f1
/* 80175F6C 0017304C  C3 F7 00 1C */	lfs f31, 0x1c(r23)
/* 80175F70 00173050  38 77 00 1C */	addi r3, r23, 0x1c
/* 80175F74 00173054  C0 24 00 D0 */	lfs f1, 0xd0(r4)
/* 80175F78 00173058  C0 64 00 D4 */	lfs f3, 0xd4(r4)
/* 80175F7C 0017305C  38 97 00 24 */	addi r4, r23, 0x24
/* 80175F80 00173060  4B EB B5 11 */	bl xAccelMove__FRfRffff
/* 80175F84 00173064  88 17 00 00 */	lbz r0, 0x0(r23)
/* 80175F88 00173068  28 00 00 00 */	cmplwi r0, 0x0
/* 80175F8C 0017306C  40 82 02 6C */	bne .L_801761F8
/* 80175F90 00173070  7E C3 B3 78 */	mr r3, r22
/* 80175F94 00173074  48 00 59 B9 */	bl get_orbit__12zNPCDutchmanCFv
/* 80175F98 00173078  38 9F 00 00 */	addi r4, r31, 0x0
/* 80175F9C 0017307C  FC 20 F8 90 */	fmr f1, f31
/* 80175FA0 00173080  C0 64 00 28 */	lfs f3, 0x28(r4)
/* 80175FA4 00173084  7C 66 1B 78 */	mr r6, r3
/* 80175FA8 00173088  C0 57 00 1C */	lfs f2, 0x1c(r23)
/* 80175FAC 0017308C  38 77 00 20 */	addi r3, r23, 0x20
/* 80175FB0 00173090  38 97 00 04 */	addi r4, r23, 0x4
/* 80175FB4 00173094  38 B7 00 10 */	addi r5, r23, 0x10
/* 80175FB8 00173098  4B FF FE D9 */	bl "clip_outside_circle__30@unnamed@zNPCTypeDutchman_cpp@FRfRC5xVec3RC5xVec3ffRC5xVec3f"
/* 80175FBC 0017309C  54 60 06 3F */	clrlwi. r0, r3, 24
/* 80175FC0 001730A0  41 82 00 30 */	beq .L_80175FF0
/* 80175FC4 001730A4  38 00 00 01 */	li r0, 0x1
/* 80175FC8 001730A8  98 17 00 00 */	stb r0, 0x0(r23)
/* 80175FCC 001730AC  80 97 00 34 */	lwz r4, 0x34(r23)
/* 80175FD0 001730B0  C3 D7 00 20 */	lfs f30, 0x20(r23)
/* 80175FD4 001730B4  28 04 00 00 */	cmplwi r4, 0x0
/* 80175FD8 001730B8  41 82 00 1C */	beq .L_80175FF4
/* 80175FDC 001730BC  38 60 00 01 */	li r3, 0x1
/* 80175FE0 001730C0  4B FF C9 11 */	bl "kill_sound__30@unnamed@zNPCTypeDutchman_cpp@FiUi"
/* 80175FE4 001730C4  38 00 00 00 */	li r0, 0x0
/* 80175FE8 001730C8  90 17 00 34 */	stw r0, 0x34(r23)
/* 80175FEC 001730CC  48 00 00 08 */	b .L_80175FF4
.L_80175FF0:
/* 80175FF0 001730D0  C3 D7 00 1C */	lfs f30, 0x1c(r23)
.L_80175FF4:
/* 80175FF4 001730D4  C0 36 05 98 */	lfs f1, 0x598(r22)
/* 80175FF8 001730D8  3C 60 80 27 */	lis r3, "@2295"@ha
/* 80175FFC 001730DC  84 83 20 B4 */	lwzu r4, "@2295"@l(r3)
/* 80176000 001730E0  3B 9F 00 00 */	addi r28, r31, 0x0
/* 80176004 001730E4  C0 17 00 10 */	lfs f0, 0x10(r23)
/* 80176008 001730E8  EC 9E 00 72 */	fmuls f4, f30, f1
/* 8017600C 001730EC  80 03 00 08 */	lwz r0, 0x8(r3)
/* 80176010 001730F0  3B 5F 07 D8 */	addi r26, r31, 0x7d8
/* 80176014 001730F4  80 63 00 04 */	lwz r3, 0x4(r3)
/* 80176018 001730F8  FC 00 00 50 */	fneg f0, f0
/* 8017601C 001730FC  90 01 00 58 */	stw r0, 0x58(r1)
/* 80176020 00173100  C0 7C 01 14 */	lfs f3, 0x114(r28)
/* 80176024 00173104  EF 9E F8 28 */	fsubs f28, f30, f31
/* 80176028 00173108  C0 42 AC BC */	lfs f2, "@1606"@sda21(r2)
/* 8017602C 0017310C  7E FB BB 78 */	mr r27, r23
/* 80176030 00173110  90 81 00 50 */	stw r4, 0x50(r1)
/* 80176034 00173114  3B 5A 01 40 */	addi r26, r26, 0x140
/* 80176038 00173118  C0 37 00 18 */	lfs f1, 0x18(r23)
/* 8017603C 0017311C  EF A4 10 FC */	fnmsubs f29, f4, f3, f2
/* 80176040 00173120  90 61 00 54 */	stw r3, 0x54(r1)
/* 80176044 00173124  3B BF 07 CC */	addi r29, r31, 0x7cc
/* 80176048 00173128  3B 20 00 00 */	li r25, 0x0
/* 8017604C 0017312C  D0 21 00 50 */	stfs f1, 0x50(r1)
/* 80176050 00173130  D0 01 00 58 */	stfs f0, 0x58(r1)
.L_80176054:
/* 80176054 00173134  80 7D 00 00 */	lwz r3, 0x0(r29)
/* 80176058 00173138  3B DC 00 F8 */	addi r30, r28, 0xf8
/* 8017605C 0017313C  80 E2 C0 60 */	lwz r7, "@2300"@sda21(r2)
/* 80176060 00173140  83 03 00 18 */	lwz r24, 0x18(r3)
/* 80176064 00173144  80 C2 C0 64 */	lwz r6, "@2300"+0x4@sda21(r2)
/* 80176068 00173148  C0 D8 00 20 */	lfs f6, 0x20(r24)
/* 8017606C 0017314C  80 A2 C0 68 */	lwz r5, "@2301"@sda21(r2)
/* 80176070 00173150  EC 06 07 72 */	fmuls f0, f6, f29
/* 80176074 00173154  80 82 C0 6C */	lwz r4, "@2301"+0x4@sda21(r2)
/* 80176078 00173158  80 62 C0 70 */	lwz r3, "@2302"@sda21(r2)
/* 8017607C 0017315C  80 02 C0 74 */	lwz r0, "@2302"+0x4@sda21(r2)
/* 80176080 00173160  C0 B8 00 24 */	lfs f5, 0x24(r24)
/* 80176084 00173164  C0 98 00 34 */	lfs f4, 0x34(r24)
/* 80176088 00173168  C0 78 00 38 */	lfs f3, 0x38(r24)
/* 8017608C 0017316C  C0 58 00 48 */	lfs f2, 0x48(r24)
/* 80176090 00173170  C0 38 00 4C */	lfs f1, 0x4c(r24)
/* 80176094 00173174  90 E1 00 18 */	stw r7, 0x18(r1)
/* 80176098 00173178  D0 18 00 20 */	stfs f0, 0x20(r24)
/* 8017609C 0017317C  C0 18 00 24 */	lfs f0, 0x24(r24)
/* 801760A0 00173180  90 C1 00 1C */	stw r6, 0x1c(r1)
/* 801760A4 00173184  EC 00 07 72 */	fmuls f0, f0, f29
/* 801760A8 00173188  90 A1 00 10 */	stw r5, 0x10(r1)
/* 801760AC 0017318C  D0 18 00 24 */	stfs f0, 0x24(r24)
/* 801760B0 00173190  C0 18 00 34 */	lfs f0, 0x34(r24)
/* 801760B4 00173194  90 81 00 14 */	stw r4, 0x14(r1)
/* 801760B8 00173198  EC 00 07 72 */	fmuls f0, f0, f29
/* 801760BC 0017319C  90 61 00 08 */	stw r3, 0x8(r1)
/* 801760C0 001731A0  D0 18 00 34 */	stfs f0, 0x34(r24)
/* 801760C4 001731A4  C0 18 00 38 */	lfs f0, 0x38(r24)
/* 801760C8 001731A8  90 01 00 0C */	stw r0, 0xc(r1)
/* 801760CC 001731AC  EC 00 07 72 */	fmuls f0, f0, f29
/* 801760D0 001731B0  D0 C1 00 18 */	stfs f6, 0x18(r1)
/* 801760D4 001731B4  D0 18 00 38 */	stfs f0, 0x38(r24)
/* 801760D8 001731B8  C0 18 00 48 */	lfs f0, 0x48(r24)
/* 801760DC 001731BC  D0 A1 00 1C */	stfs f5, 0x1c(r1)
/* 801760E0 001731C0  EC 00 07 72 */	fmuls f0, f0, f29
/* 801760E4 001731C4  D0 81 00 10 */	stfs f4, 0x10(r1)
/* 801760E8 001731C8  D0 18 00 48 */	stfs f0, 0x48(r24)
/* 801760EC 001731CC  C0 18 00 4C */	lfs f0, 0x4c(r24)
/* 801760F0 001731D0  D0 61 00 14 */	stfs f3, 0x14(r1)
/* 801760F4 001731D4  EC 00 07 72 */	fmuls f0, f0, f29
/* 801760F8 001731D8  D0 41 00 08 */	stfs f2, 0x8(r1)
/* 801760FC 001731DC  D0 18 00 4C */	stfs f0, 0x4c(r24)
/* 80176100 001731E0  C0 1C 00 EC */	lfs f0, 0xec(r28)
/* 80176104 001731E4  D0 21 00 0C */	stfs f1, 0xc(r1)
/* 80176108 001731E8  EC 1E 00 32 */	fmuls f0, f30, f0
/* 8017610C 001731EC  FC 00 00 1E */	fctiwz f0, f0
/* 80176110 001731F0  D8 01 00 60 */	stfd f0, 0x60(r1)
/* 80176114 001731F4  80 61 00 64 */	lwz r3, 0x64(r1)
/* 80176118 001731F8  3A A3 00 01 */	addi r21, r3, 0x1
/* 8017611C 001731FC  48 00 00 88 */	b .L_801761A4
.L_80176120:
/* 80176120 00173200  4B EB AB 69 */	bl xurand__Fv
/* 80176124 00173204  EF 7C F8 7A */	fmadds f27, f28, f1, f31
/* 80176128 00173208  4B EB AB 61 */	bl xurand__Fv
/* 8017612C 0017320C  C0 42 AC C0 */	lfs f2, "@1632"@sda21(r2)
/* 80176130 00173210  38 61 00 20 */	addi r3, r1, 0x20
/* 80176134 00173214  C0 1E 00 00 */	lfs f0, 0x0(r30)
/* 80176138 00173218  38 81 00 50 */	addi r4, r1, 0x50
/* 8017613C 0017321C  EC 21 10 28 */	fsubs f1, f1, f2
/* 80176140 00173220  EC 20 00 72 */	fmuls f1, f0, f1
/* 80176144 00173224  4B E9 4F DD */	bl __ml__5xVec3CFf
/* 80176148 00173228  FC 20 D8 90 */	fmr f1, f27
/* 8017614C 0017322C  38 61 00 2C */	addi r3, r1, 0x2c
/* 80176150 00173230  38 97 00 10 */	addi r4, r23, 0x10
/* 80176154 00173234  4B E9 4F CD */	bl __ml__5xVec3CFf
/* 80176158 00173238  38 61 00 38 */	addi r3, r1, 0x38
/* 8017615C 0017323C  38 97 00 04 */	addi r4, r23, 0x4
/* 80176160 00173240  38 A1 00 2C */	addi r5, r1, 0x2c
/* 80176164 00173244  4B E9 F2 7D */	bl __pl__5xVec3CFRC5xVec3
/* 80176168 00173248  38 61 00 44 */	addi r3, r1, 0x44
/* 8017616C 0017324C  38 81 00 38 */	addi r4, r1, 0x38
/* 80176170 00173250  38 A1 00 20 */	addi r5, r1, 0x20
/* 80176174 00173254  4B E9 F2 6D */	bl __pl__5xVec3CFRC5xVec3
/* 80176178 00173258  7F 43 D3 78 */	mr r3, r26
/* 8017617C 0017325C  38 81 00 44 */	addi r4, r1, 0x44
/* 80176180 00173260  4B E9 50 E5 */	bl __as__5xVec3FRC5xVec3
/* 80176184 00173264  80 9D 00 00 */	lwz r4, 0x0(r29)
/* 80176188 00173268  7E C3 B3 78 */	mr r3, r22
/* 8017618C 0017326C  C0 22 AD A0 */	lfs f1, "@2333"@sda21(r2)
/* 80176190 00173270  38 BF 07 D8 */	addi r5, r31, 0x7d8
/* 80176194 00173274  48 00 57 91 */	bl emit_particles__12zNPCDutchmanCFR11zParEmitterfR25xParEmitterCustomSettings
/* 80176198 00173278  80 7B 00 38 */	lwz r3, 0x38(r27)
/* 8017619C 0017327C  38 03 00 01 */	addi r0, r3, 0x1
/* 801761A0 00173280  90 1B 00 38 */	stw r0, 0x38(r27)
.L_801761A4:
/* 801761A4 00173284  80 1B 00 38 */	lwz r0, 0x38(r27)
/* 801761A8 00173288  7C 00 A8 00 */	cmpw r0, r21
/* 801761AC 0017328C  41 80 FF 74 */	blt .L_80176120
/* 801761B0 00173290  C0 21 00 18 */	lfs f1, 0x18(r1)
/* 801761B4 00173294  3B 39 00 01 */	addi r25, r25, 0x1
/* 801761B8 00173298  C0 01 00 1C */	lfs f0, 0x1c(r1)
/* 801761BC 0017329C  2C 19 00 03 */	cmpwi r25, 0x3
/* 801761C0 001732A0  D0 38 00 20 */	stfs f1, 0x20(r24)
/* 801761C4 001732A4  3B BD 00 04 */	addi r29, r29, 0x4
/* 801761C8 001732A8  C0 21 00 10 */	lfs f1, 0x10(r1)
/* 801761CC 001732AC  3B 9C 00 04 */	addi r28, r28, 0x4
/* 801761D0 001732B0  D0 18 00 24 */	stfs f0, 0x24(r24)
/* 801761D4 001732B4  3B 7B 00 04 */	addi r27, r27, 0x4
/* 801761D8 001732B8  C0 01 00 14 */	lfs f0, 0x14(r1)
/* 801761DC 001732BC  D0 38 00 34 */	stfs f1, 0x34(r24)
/* 801761E0 001732C0  C0 21 00 08 */	lfs f1, 0x8(r1)
/* 801761E4 001732C4  D0 18 00 38 */	stfs f0, 0x38(r24)
/* 801761E8 001732C8  C0 01 00 0C */	lfs f0, 0xc(r1)
/* 801761EC 001732CC  D0 38 00 48 */	stfs f1, 0x48(r24)
/* 801761F0 001732D0  D0 18 00 4C */	stfs f0, 0x4c(r24)
/* 801761F4 001732D4  41 80 FE 60 */	blt .L_80176054
.L_801761F8:
/* 801761F8 001732D8  E3 E1 00 E8 */	psq_l f31, 0xe8(r1), 0, qr0
/* 801761FC 001732DC  CB E1 00 E0 */	lfd f31, 0xe0(r1)
/* 80176200 001732E0  E3 C1 00 D8 */	psq_l f30, 0xd8(r1), 0, qr0
/* 80176204 001732E4  CB C1 00 D0 */	lfd f30, 0xd0(r1)
/* 80176208 001732E8  E3 A1 00 C8 */	psq_l f29, 0xc8(r1), 0, qr0
/* 8017620C 001732EC  CB A1 00 C0 */	lfd f29, 0xc0(r1)
/* 80176210 001732F0  E3 81 00 B8 */	psq_l f28, 0xb8(r1), 0, qr0
/* 80176214 001732F4  CB 81 00 B0 */	lfd f28, 0xb0(r1)
/* 80176218 001732F8  E3 61 00 A8 */	psq_l f27, 0xa8(r1), 0, qr0
/* 8017621C 001732FC  CB 61 00 A0 */	lfd f27, 0xa0(r1)
/* 80176220 00173300  BA A1 00 74 */	lmw r21, 0x74(r1)
/* 80176224 00173304  80 01 00 F4 */	lwz r0, 0xf4(r1)
/* 80176228 00173308  7C 08 03 A6 */	mtlr r0
/* 8017622C 0017330C  38 21 00 F0 */	addi r1, r1, 0xf0
/* 80176230 00173310  4E 80 00 20 */	blr
.endfn update_wave__12zNPCDutchmanFRQ212zNPCDutchman9wave_dataf

# zNPCDutchman::init_wave(zNPCDutchman::wave_data&, const xVec3&, const xVec3&)
.fn init_wave__12zNPCDutchmanFRQ212zNPCDutchman9wave_dataRC5xVec3RC5xVec3, global
/* 80176234 00173314  94 21 FF D0 */	stwu r1, -0x30(r1)
/* 80176238 00173318  7C 08 02 A6 */	mflr r0
/* 8017623C 0017331C  3C 60 80 33 */	lis r3, "tweak__30@unnamed@zNPCTypeDutchman_cpp@"@ha
/* 80176240 00173320  90 01 00 34 */	stw r0, 0x34(r1)
/* 80176244 00173324  38 00 00 00 */	li r0, 0x0
/* 80176248 00173328  38 63 A5 78 */	addi r3, r3, "tweak__30@unnamed@zNPCTypeDutchman_cpp@"@l
/* 8017624C 0017332C  93 E1 00 2C */	stw r31, 0x2c(r1)
/* 80176250 00173330  7C DF 33 78 */	mr r31, r6
/* 80176254 00173334  93 C1 00 28 */	stw r30, 0x28(r1)
/* 80176258 00173338  7C BE 2B 78 */	mr r30, r5
/* 8017625C 0017333C  93 A1 00 24 */	stw r29, 0x24(r1)
/* 80176260 00173340  7C 9D 23 78 */	mr r29, r4
/* 80176264 00173344  98 04 00 00 */	stb r0, 0x0(r4)
/* 80176268 00173348  7F E4 FB 78 */	mr r4, r31
/* 8017626C 0017334C  C0 23 00 E4 */	lfs f1, 0xe4(r3)
/* 80176270 00173350  38 61 00 08 */	addi r3, r1, 0x8
/* 80176274 00173354  4B E9 4E AD */	bl __ml__5xVec3CFf
/* 80176278 00173358  7F C4 F3 78 */	mr r4, r30
/* 8017627C 0017335C  38 61 00 14 */	addi r3, r1, 0x14
/* 80176280 00173360  38 A1 00 08 */	addi r5, r1, 0x8
/* 80176284 00173364  4B E9 F1 5D */	bl __pl__5xVec3CFRC5xVec3
/* 80176288 00173368  38 7D 00 04 */	addi r3, r29, 0x4
/* 8017628C 0017336C  38 81 00 14 */	addi r4, r1, 0x14
/* 80176290 00173370  4B E9 4F D5 */	bl __as__5xVec3FRC5xVec3
/* 80176294 00173374  7F E4 FB 78 */	mr r4, r31
/* 80176298 00173378  38 7D 00 10 */	addi r3, r29, 0x10
/* 8017629C 0017337C  4B E9 4F C9 */	bl __as__5xVec3FRC5xVec3
/* 801762A0 00173380  C0 02 AC B8 */	lfs f0, "@1605"@sda21(r2)
/* 801762A4 00173384  38 7D 00 28 */	addi r3, r29, 0x28
/* 801762A8 00173388  38 9D 00 04 */	addi r4, r29, 0x4
/* 801762AC 0017338C  D0 1D 00 1C */	stfs f0, 0x1c(r29)
/* 801762B0 00173390  C0 02 AC B8 */	lfs f0, "@1605"@sda21(r2)
/* 801762B4 00173394  D0 1D 00 24 */	stfs f0, 0x24(r29)
/* 801762B8 00173398  4B E9 4F AD */	bl __as__5xVec3FRC5xVec3
/* 801762BC 0017339C  C0 22 AC BC */	lfs f1, "@1606"@sda21(r2)
/* 801762C0 001733A0  38 9D 00 28 */	addi r4, r29, 0x28
/* 801762C4 001733A4  38 60 00 01 */	li r3, 0x1
/* 801762C8 001733A8  4B FF C5 69 */	bl "play_sound__30@unnamed@zNPCTypeDutchman_cpp@FiPC5xVec3f"
/* 801762CC 001733AC  90 7D 00 34 */	stw r3, 0x34(r29)
/* 801762D0 001733B0  38 00 00 00 */	li r0, 0x0
/* 801762D4 001733B4  90 1D 00 38 */	stw r0, 0x38(r29)
/* 801762D8 001733B8  90 1D 00 3C */	stw r0, 0x3c(r29)
/* 801762DC 001733BC  90 1D 00 40 */	stw r0, 0x40(r29)
/* 801762E0 001733C0  83 E1 00 2C */	lwz r31, 0x2c(r1)
/* 801762E4 001733C4  83 C1 00 28 */	lwz r30, 0x28(r1)
/* 801762E8 001733C8  83 A1 00 24 */	lwz r29, 0x24(r1)
/* 801762EC 001733CC  80 01 00 34 */	lwz r0, 0x34(r1)
/* 801762F0 001733D0  7C 08 03 A6 */	mtlr r0
/* 801762F4 001733D4  38 21 00 30 */	addi r1, r1, 0x30
/* 801762F8 001733D8  4E 80 00 20 */	blr
.endfn init_wave__12zNPCDutchmanFRQ212zNPCDutchman9wave_dataRC5xVec3RC5xVec3

# zNPCDutchman::kill_wave(zNPCDutchman::wave_data&)
.fn kill_wave__12zNPCDutchmanFRQ212zNPCDutchman9wave_data, global
/* 801762FC 001733DC  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80176300 001733E0  7C 08 02 A6 */	mflr r0
/* 80176304 001733E4  38 60 00 01 */	li r3, 0x1
/* 80176308 001733E8  90 01 00 14 */	stw r0, 0x14(r1)
/* 8017630C 001733EC  80 84 00 34 */	lwz r4, 0x34(r4)
/* 80176310 001733F0  4B FF C5 E1 */	bl "kill_sound__30@unnamed@zNPCTypeDutchman_cpp@FiUi"
/* 80176314 001733F4  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80176318 001733F8  7C 08 03 A6 */	mtlr r0
/* 8017631C 001733FC  38 21 00 10 */	addi r1, r1, 0x10
/* 80176320 00173400  4E 80 00 20 */	blr
.endfn kill_wave__12zNPCDutchmanFRQ212zNPCDutchman9wave_data

# zNPCDutchman::start_eye_glow()
.fn start_eye_glow__12zNPCDutchmanFv, global
/* 80176324 00173404  38 00 00 01 */	li r0, 0x1
/* 80176328 00173408  98 03 02 BA */	stb r0, 0x2ba(r3)
/* 8017632C 0017340C  C0 02 AC BC */	lfs f0, "@1606"@sda21(r2)
/* 80176330 00173410  D0 03 06 2C */	stfs f0, 0x62c(r3)
/* 80176334 00173414  4E 80 00 20 */	blr
.endfn start_eye_glow__12zNPCDutchmanFv

# zNPCDutchman::stop_eye_glow()
.fn stop_eye_glow__12zNPCDutchmanFv, global
/* 80176338 00173418  38 00 00 00 */	li r0, 0x0
/* 8017633C 0017341C  98 03 02 BA */	stb r0, 0x2ba(r3)
/* 80176340 00173420  4E 80 00 20 */	blr
.endfn stop_eye_glow__12zNPCDutchmanFv

# zNPCDutchman::update_eye_glow(float)
.fn update_eye_glow__12zNPCDutchmanFf, global
/* 80176344 00173424  94 21 FF 90 */	stwu r1, -0x70(r1)
/* 80176348 00173428  7C 08 02 A6 */	mflr r0
/* 8017634C 0017342C  90 01 00 74 */	stw r0, 0x74(r1)
/* 80176350 00173430  DB E1 00 60 */	stfd f31, 0x60(r1)
/* 80176354 00173434  F3 E1 00 68 */	psq_st f31, 0x68(r1), 0, qr0
/* 80176358 00173438  BF 61 00 4C */	stmw r27, 0x4c(r1)
/* 8017635C 0017343C  7C 7B 1B 78 */	mr r27, r3
/* 80176360 00173440  FF E0 08 90 */	fmr f31, f1
/* 80176364 00173444  88 03 02 BA */	lbz r0, 0x2ba(r3)
/* 80176368 00173448  28 00 00 00 */	cmplwi r0, 0x0
/* 8017636C 0017344C  41 82 01 34 */	beq .L_801764A0
/* 80176370 00173450  48 00 56 0D */	bl get_facing__12zNPCDutchmanCFv
/* 80176374 00173454  3C A0 80 33 */	lis r5, "tweak__30@unnamed@zNPCTypeDutchman_cpp@"@ha
/* 80176378 00173458  7C 64 1B 78 */	mr r4, r3
/* 8017637C 0017345C  38 A5 A5 78 */	addi r5, r5, "tweak__30@unnamed@zNPCTypeDutchman_cpp@"@l
/* 80176380 00173460  38 61 00 30 */	addi r3, r1, 0x30
/* 80176384 00173464  C0 25 00 94 */	lfs f1, 0x94(r5)
/* 80176388 00173468  4B E9 4D 99 */	bl __ml__5xVec3CFf
/* 8017638C 0017346C  80 81 00 30 */	lwz r4, 0x30(r1)
/* 80176390 00173470  3B C0 00 00 */	li r30, 0x0
/* 80176394 00173474  80 61 00 34 */	lwz r3, 0x34(r1)
/* 80176398 00173478  3B ED 97 7C */	addi r31, r13, "eyeglow_emitter__30@unnamed@zNPCTypeDutchman_cpp@"@sda21
/* 8017639C 0017347C  80 01 00 38 */	lwz r0, 0x38(r1)
/* 801763A0 00173480  90 81 00 3C */	stw r4, 0x3c(r1)
/* 801763A4 00173484  90 61 00 40 */	stw r3, 0x40(r1)
/* 801763A8 00173488  90 01 00 44 */	stw r0, 0x44(r1)
.L_801763AC:
/* 801763AC 0017348C  80 DF 00 00 */	lwz r6, 0x0(r31)
/* 801763B0 00173490  7F 64 DB 78 */	mr r4, r27
/* 801763B4 00173494  7F C5 F3 78 */	mr r5, r30
/* 801763B8 00173498  38 61 00 18 */	addi r3, r1, 0x18
/* 801763BC 0017349C  83 A6 00 10 */	lwz r29, 0x10(r6)
/* 801763C0 001734A0  83 86 00 18 */	lwz r28, 0x18(r6)
/* 801763C4 001734A4  48 00 15 89 */	bl get_eye_loc__12zNPCDutchmanCFi
/* 801763C8 001734A8  38 61 00 24 */	addi r3, r1, 0x24
/* 801763CC 001734AC  38 81 00 18 */	addi r4, r1, 0x18
/* 801763D0 001734B0  38 A1 00 3C */	addi r5, r1, 0x3c
/* 801763D4 001734B4  4B E9 F0 0D */	bl __pl__5xVec3CFRC5xVec3
/* 801763D8 001734B8  38 7D 00 30 */	addi r3, r29, 0x30
/* 801763DC 001734BC  38 81 00 24 */	addi r4, r1, 0x24
/* 801763E0 001734C0  4B E9 4E 85 */	bl __as__5xVec3FRC5xVec3
/* 801763E4 001734C4  C0 DC 00 34 */	lfs f6, 0x34(r28)
/* 801763E8 001734C8  FC 20 F8 90 */	fmr f1, f31
/* 801763EC 001734CC  C0 1B 06 2C */	lfs f0, 0x62c(r27)
/* 801763F0 001734D0  7F 63 DB 78 */	mr r3, r27
/* 801763F4 001734D4  80 C2 C0 78 */	lwz r6, "@2378"@sda21(r2)
/* 801763F8 001734D8  80 A2 C0 7C */	lwz r5, "@2378"+0x4@sda21(r2)
/* 801763FC 001734DC  EC 06 00 32 */	fmuls f0, f6, f0
/* 80176400 001734E0  80 82 C0 80 */	lwz r4, "@2379"@sda21(r2)
/* 80176404 001734E4  80 02 C0 84 */	lwz r0, "@2379"+0x4@sda21(r2)
/* 80176408 001734E8  C0 BC 00 38 */	lfs f5, 0x38(r28)
/* 8017640C 001734EC  C0 9C 00 48 */	lfs f4, 0x48(r28)
/* 80176410 001734F0  C0 7C 00 4C */	lfs f3, 0x4c(r28)
/* 80176414 001734F4  90 C1 00 10 */	stw r6, 0x10(r1)
/* 80176418 001734F8  D0 1C 00 34 */	stfs f0, 0x34(r28)
/* 8017641C 001734FC  C0 5C 00 38 */	lfs f2, 0x38(r28)
/* 80176420 00173500  C0 1B 06 2C */	lfs f0, 0x62c(r27)
/* 80176424 00173504  90 A1 00 14 */	stw r5, 0x14(r1)
/* 80176428 00173508  EC 02 00 32 */	fmuls f0, f2, f0
/* 8017642C 0017350C  90 81 00 08 */	stw r4, 0x8(r1)
/* 80176430 00173510  D0 1C 00 38 */	stfs f0, 0x38(r28)
/* 80176434 00173514  C0 5C 00 48 */	lfs f2, 0x48(r28)
/* 80176438 00173518  C0 1B 06 2C */	lfs f0, 0x62c(r27)
/* 8017643C 0017351C  90 01 00 0C */	stw r0, 0xc(r1)
/* 80176440 00173520  EC 02 00 32 */	fmuls f0, f2, f0
/* 80176444 00173524  D0 C1 00 10 */	stfs f6, 0x10(r1)
/* 80176448 00173528  D0 1C 00 48 */	stfs f0, 0x48(r28)
/* 8017644C 0017352C  C0 5C 00 4C */	lfs f2, 0x4c(r28)
/* 80176450 00173530  C0 1B 06 2C */	lfs f0, 0x62c(r27)
/* 80176454 00173534  D0 A1 00 14 */	stfs f5, 0x14(r1)
/* 80176458 00173538  EC 02 00 32 */	fmuls f0, f2, f0
/* 8017645C 0017353C  D0 81 00 08 */	stfs f4, 0x8(r1)
/* 80176460 00173540  D0 1C 00 4C */	stfs f0, 0x4c(r28)
/* 80176464 00173544  D0 61 00 0C */	stfs f3, 0xc(r1)
/* 80176468 00173548  80 9F 00 00 */	lwz r4, 0x0(r31)
/* 8017646C 0017354C  48 00 54 ED */	bl emit_particles__12zNPCDutchmanCFR11zParEmitterf
/* 80176470 00173550  C0 21 00 10 */	lfs f1, 0x10(r1)
/* 80176474 00173554  3B DE 00 01 */	addi r30, r30, 0x1
/* 80176478 00173558  C0 01 00 14 */	lfs f0, 0x14(r1)
/* 8017647C 0017355C  2C 1E 00 02 */	cmpwi r30, 0x2
/* 80176480 00173560  D0 3C 00 34 */	stfs f1, 0x34(r28)
/* 80176484 00173564  3B FF 00 04 */	addi r31, r31, 0x4
/* 80176488 00173568  C0 21 00 08 */	lfs f1, 0x8(r1)
/* 8017648C 0017356C  D0 1C 00 38 */	stfs f0, 0x38(r28)
/* 80176490 00173570  C0 01 00 0C */	lfs f0, 0xc(r1)
/* 80176494 00173574  D0 3C 00 48 */	stfs f1, 0x48(r28)
/* 80176498 00173578  D0 1C 00 4C */	stfs f0, 0x4c(r28)
/* 8017649C 0017357C  41 80 FF 10 */	blt .L_801763AC
.L_801764A0:
/* 801764A0 00173580  E3 E1 00 68 */	psq_l f31, 0x68(r1), 0, qr0
/* 801764A4 00173584  CB E1 00 60 */	lfd f31, 0x60(r1)
/* 801764A8 00173588  BB 61 00 4C */	lmw r27, 0x4c(r1)
/* 801764AC 0017358C  80 01 00 74 */	lwz r0, 0x74(r1)
/* 801764B0 00173590  7C 08 03 A6 */	mtlr r0
/* 801764B4 00173594  38 21 00 70 */	addi r1, r1, 0x70
/* 801764B8 00173598  4E 80 00 20 */	blr
.endfn update_eye_glow__12zNPCDutchmanFf

# zNPCDutchman::start_hand_trail()
.fn start_hand_trail__12zNPCDutchmanFv, global
/* 801764BC 0017359C  94 21 FF D0 */	stwu r1, -0x30(r1)
/* 801764C0 001735A0  7C 08 02 A6 */	mflr r0
/* 801764C4 001735A4  90 01 00 34 */	stw r0, 0x34(r1)
/* 801764C8 001735A8  38 00 00 01 */	li r0, 0x1
/* 801764CC 001735AC  93 E1 00 2C */	stw r31, 0x2c(r1)
/* 801764D0 001735B0  93 C1 00 28 */	stw r30, 0x28(r1)
/* 801764D4 001735B4  3B C0 00 00 */	li r30, 0x0
/* 801764D8 001735B8  93 A1 00 24 */	stw r29, 0x24(r1)
/* 801764DC 001735BC  7C 7D 1B 78 */	mr r29, r3
/* 801764E0 001735C0  7F BF EB 78 */	mr r31, r29
/* 801764E4 001735C4  98 03 02 BB */	stb r0, 0x2bb(r3)
.L_801764E8:
/* 801764E8 001735C8  7F A4 EB 78 */	mr r4, r29
/* 801764EC 001735CC  7F C5 F3 78 */	mr r5, r30
/* 801764F0 001735D0  38 61 00 08 */	addi r3, r1, 0x8
/* 801764F4 001735D4  48 00 14 95 */	bl get_hand_loc__12zNPCDutchmanCFi
/* 801764F8 001735D8  38 7F 05 CC */	addi r3, r31, 0x5cc
/* 801764FC 001735DC  38 81 00 08 */	addi r4, r1, 0x8
/* 80176500 001735E0  4B E9 4D 65 */	bl __as__5xVec3FRC5xVec3
/* 80176504 001735E4  3B DE 00 01 */	addi r30, r30, 0x1
/* 80176508 001735E8  3B FF 00 0C */	addi r31, r31, 0xc
/* 8017650C 001735EC  2C 1E 00 02 */	cmpwi r30, 0x2
/* 80176510 001735F0  41 80 FF D8 */	blt .L_801764E8
/* 80176514 001735F4  80 01 00 34 */	lwz r0, 0x34(r1)
/* 80176518 001735F8  83 E1 00 2C */	lwz r31, 0x2c(r1)
/* 8017651C 001735FC  83 C1 00 28 */	lwz r30, 0x28(r1)
/* 80176520 00173600  83 A1 00 24 */	lwz r29, 0x24(r1)
/* 80176524 00173604  7C 08 03 A6 */	mtlr r0
/* 80176528 00173608  38 21 00 30 */	addi r1, r1, 0x30
/* 8017652C 0017360C  4E 80 00 20 */	blr
.endfn start_hand_trail__12zNPCDutchmanFv

# zNPCDutchman::stop_hand_trail()
.fn stop_hand_trail__12zNPCDutchmanFv, global
/* 80176530 00173610  38 00 00 00 */	li r0, 0x0
/* 80176534 00173614  98 03 02 BB */	stb r0, 0x2bb(r3)
/* 80176538 00173618  4E 80 00 20 */	blr
.endfn stop_hand_trail__12zNPCDutchmanFv

# zNPCDutchman::update_hand_trail(float)
.fn update_hand_trail__12zNPCDutchmanFf, global
/* 8017653C 0017361C  94 21 FF C0 */	stwu r1, -0x40(r1)
/* 80176540 00173620  7C 08 02 A6 */	mflr r0
/* 80176544 00173624  90 01 00 44 */	stw r0, 0x44(r1)
/* 80176548 00173628  DB E1 00 30 */	stfd f31, 0x30(r1)
/* 8017654C 0017362C  F3 E1 00 38 */	psq_st f31, 0x38(r1), 0, qr0
/* 80176550 00173630  93 E1 00 2C */	stw r31, 0x2c(r1)
/* 80176554 00173634  93 C1 00 28 */	stw r30, 0x28(r1)
/* 80176558 00173638  93 A1 00 24 */	stw r29, 0x24(r1)
/* 8017655C 0017363C  93 81 00 20 */	stw r28, 0x20(r1)
/* 80176560 00173640  7C 7C 1B 78 */	mr r28, r3
/* 80176564 00173644  FF E0 08 90 */	fmr f31, f1
/* 80176568 00173648  88 03 02 BB */	lbz r0, 0x2bb(r3)
/* 8017656C 0017364C  28 00 00 00 */	cmplwi r0, 0x0
/* 80176570 00173650  41 82 00 80 */	beq .L_801765F0
/* 80176574 00173654  80 8D 97 9C */	lwz r4, "hand_trail_emitter__30@unnamed@zNPCTypeDutchman_cpp@"@sda21(r13)
/* 80176578 00173658  3C 60 80 33 */	lis r3, "tweak__30@unnamed@zNPCTypeDutchman_cpp@"@ha
/* 8017657C 0017365C  38 00 00 05 */	li r0, 0x5
/* 80176580 00173660  7F 9F E3 78 */	mr r31, r28
/* 80176584 00173664  83 C4 00 10 */	lwz r30, 0x10(r4)
/* 80176588 00173668  38 63 A5 78 */	addi r3, r3, "tweak__30@unnamed@zNPCTypeDutchman_cpp@"@l
/* 8017658C 0017366C  3B A0 00 00 */	li r29, 0x0
/* 80176590 00173670  98 1E 00 09 */	stb r0, 0x9(r30)
/* 80176594 00173674  C0 03 00 CC */	lfs f0, 0xcc(r3)
/* 80176598 00173678  D0 1E 00 28 */	stfs f0, 0x28(r30)
.L_8017659C:
/* 8017659C 0017367C  38 7E 00 10 */	addi r3, r30, 0x10
/* 801765A0 00173680  38 9F 05 CC */	addi r4, r31, 0x5cc
/* 801765A4 00173684  4B E9 4C C1 */	bl __as__5xVec3FRC5xVec3
/* 801765A8 00173688  7F 84 E3 78 */	mr r4, r28
/* 801765AC 0017368C  7F A5 EB 78 */	mr r5, r29
/* 801765B0 00173690  38 61 00 08 */	addi r3, r1, 0x8
/* 801765B4 00173694  48 00 13 D5 */	bl get_hand_loc__12zNPCDutchmanCFi
/* 801765B8 00173698  38 7F 05 CC */	addi r3, r31, 0x5cc
/* 801765BC 0017369C  38 81 00 08 */	addi r4, r1, 0x8
/* 801765C0 001736A0  4B E9 4C A5 */	bl __as__5xVec3FRC5xVec3
/* 801765C4 001736A4  38 7E 00 1C */	addi r3, r30, 0x1c
/* 801765C8 001736A8  38 9F 05 CC */	addi r4, r31, 0x5cc
/* 801765CC 001736AC  4B E9 4C 99 */	bl __as__5xVec3FRC5xVec3
/* 801765D0 001736B0  FC 20 F8 90 */	fmr f1, f31
/* 801765D4 001736B4  80 8D 97 9C */	lwz r4, "hand_trail_emitter__30@unnamed@zNPCTypeDutchman_cpp@"@sda21(r13)
/* 801765D8 001736B8  7F 83 E3 78 */	mr r3, r28
/* 801765DC 001736BC  48 00 53 7D */	bl emit_particles__12zNPCDutchmanCFR11zParEmitterf
/* 801765E0 001736C0  3B BD 00 01 */	addi r29, r29, 0x1
/* 801765E4 001736C4  3B FF 00 0C */	addi r31, r31, 0xc
/* 801765E8 001736C8  2C 1D 00 02 */	cmpwi r29, 0x2
/* 801765EC 001736CC  41 80 FF B0 */	blt .L_8017659C
.L_801765F0:
/* 801765F0 001736D0  E3 E1 00 38 */	psq_l f31, 0x38(r1), 0, qr0
/* 801765F4 001736D4  80 01 00 44 */	lwz r0, 0x44(r1)
/* 801765F8 001736D8  CB E1 00 30 */	lfd f31, 0x30(r1)
/* 801765FC 001736DC  83 E1 00 2C */	lwz r31, 0x2c(r1)
/* 80176600 001736E0  83 C1 00 28 */	lwz r30, 0x28(r1)
/* 80176604 001736E4  83 A1 00 24 */	lwz r29, 0x24(r1)
/* 80176608 001736E8  83 81 00 20 */	lwz r28, 0x20(r1)
/* 8017660C 001736EC  7C 08 03 A6 */	mtlr r0
/* 80176610 001736F0  38 21 00 40 */	addi r1, r1, 0x40
/* 80176614 001736F4  4E 80 00 20 */	blr
.endfn update_hand_trail__12zNPCDutchmanFf

# zNPCDutchman::dissolve(float)
.fn dissolve__12zNPCDutchmanFf, global
/* 80176618 001736F8  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 8017661C 001736FC  7C 08 02 A6 */	mflr r0
/* 80176620 00173700  90 01 00 24 */	stw r0, 0x24(r1)
/* 80176624 00173704  DB E1 00 10 */	stfd f31, 0x10(r1)
/* 80176628 00173708  F3 E1 00 18 */	psq_st f31, 0x18(r1), 0, qr0
/* 8017662C 0017370C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80176630 00173710  C0 02 AC B8 */	lfs f0, "@1605"@sda21(r2)
/* 80176634 00173714  7C 7F 1B 78 */	mr r31, r3
/* 80176638 00173718  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8017663C 0017371C  4C 40 13 82 */	cror eq, lt, eq
/* 80176640 00173720  40 82 00 30 */	bne .L_80176670
/* 80176644 00173724  38 00 00 02 */	li r0, 0x2
/* 80176648 00173728  90 1F 02 C0 */	stw r0, 0x2c0(r31)
/* 8017664C 0017372C  80 8D 97 8C */	lwz r4, "fadeout_emitter__30@unnamed@zNPCTypeDutchman_cpp@"@sda21(r13)
/* 80176650 00173730  48 00 51 ED */	bl disable_emitter__12zNPCDutchmanCFR11zParEmitter
/* 80176654 00173734  C0 22 AC B8 */	lfs f1, "@1605"@sda21(r2)
/* 80176658 00173738  7F E3 FB 78 */	mr r3, r31
/* 8017665C 0017373C  48 00 0E D1 */	bl set_alpha__12zNPCDutchmanFf
/* 80176660 00173740  7F E3 FB 78 */	mr r3, r31
/* 80176664 00173744  48 00 14 35 */	bl vanish__12zNPCDutchmanFv
/* 80176668 00173748  C3 E2 AC BC */	lfs f31, "@1606"@sda21(r2)
/* 8017666C 0017374C  48 00 00 48 */	b .L_801766B4
.L_80176670:
/* 80176670 00173750  38 00 00 01 */	li r0, 0x1
/* 80176674 00173754  90 1F 02 C0 */	stw r0, 0x2c0(r31)
/* 80176678 00173758  C0 02 AC B8 */	lfs f0, "@1605"@sda21(r2)
/* 8017667C 0017375C  D0 1F 05 E4 */	stfs f0, 0x5e4(r31)
/* 80176680 00173760  D0 3F 05 E8 */	stfs f1, 0x5e8(r31)
/* 80176684 00173764  C0 22 AC BC */	lfs f1, "@1606"@sda21(r2)
/* 80176688 00173768  C0 1F 05 E8 */	lfs f0, 0x5e8(r31)
/* 8017668C 0017376C  EC 01 00 24 */	fdivs f0, f1, f0
/* 80176690 00173770  D0 1F 05 EC */	stfs f0, 0x5ec(r31)
/* 80176694 00173774  80 8D 97 8C */	lwz r4, "fadeout_emitter__30@unnamed@zNPCTypeDutchman_cpp@"@sda21(r13)
/* 80176698 00173778  48 00 52 F5 */	bl enable_emitter__12zNPCDutchmanCFR11zParEmitter
/* 8017669C 0017377C  C0 22 AC BC */	lfs f1, "@1606"@sda21(r2)
/* 801766A0 00173780  7F E3 FB 78 */	mr r3, r31
/* 801766A4 00173784  48 00 0E 89 */	bl set_alpha__12zNPCDutchmanFf
/* 801766A8 00173788  7F E3 FB 78 */	mr r3, r31
/* 801766AC 0017378C  48 00 14 31 */	bl reappear__12zNPCDutchmanFv
/* 801766B0 00173790  C3 E2 AC B8 */	lfs f31, "@1605"@sda21(r2)
.L_801766B4:
/* 801766B4 00173794  80 8D 97 88 */	lwz r4, "dissolve_emitter__30@unnamed@zNPCTypeDutchman_cpp@"@sda21(r13)
/* 801766B8 00173798  7F E3 FB 78 */	mr r3, r31
/* 801766BC 0017379C  48 00 52 D1 */	bl enable_emitter__12zNPCDutchmanCFR11zParEmitter
/* 801766C0 001737A0  7F E3 FB 78 */	mr r3, r31
/* 801766C4 001737A4  4B FF FC 61 */	bl start_eye_glow__12zNPCDutchmanFv
/* 801766C8 001737A8  7F E3 FB 78 */	mr r3, r31
/* 801766CC 001737AC  4B FF FD F1 */	bl start_hand_trail__12zNPCDutchmanFv
/* 801766D0 001737B0  80 9F 05 FC */	lwz r4, 0x5fc(r31)
/* 801766D4 001737B4  28 04 00 00 */	cmplwi r4, 0x0
/* 801766D8 001737B8  40 82 00 1C */	bne .L_801766F4
/* 801766DC 001737BC  FC 20 F8 90 */	fmr f1, f31
/* 801766E0 001737C0  38 9F 00 88 */	addi r4, r31, 0x88
/* 801766E4 001737C4  38 60 00 02 */	li r3, 0x2
/* 801766E8 001737C8  4B FF C1 49 */	bl "play_sound__30@unnamed@zNPCTypeDutchman_cpp@FiPC5xVec3f"
/* 801766EC 001737CC  90 7F 05 FC */	stw r3, 0x5fc(r31)
/* 801766F0 001737D0  48 00 00 10 */	b .L_80176700
.L_801766F4:
/* 801766F4 001737D4  FC 20 F8 90 */	fmr f1, f31
/* 801766F8 001737D8  38 60 00 02 */	li r3, 0x2
/* 801766FC 001737DC  4B FF C2 59 */	bl "set_volume__30@unnamed@zNPCTypeDutchman_cpp@FiUif"
.L_80176700:
/* 80176700 001737E0  E3 E1 00 18 */	psq_l f31, 0x18(r1), 0, qr0
/* 80176704 001737E4  80 01 00 24 */	lwz r0, 0x24(r1)
/* 80176708 001737E8  CB E1 00 10 */	lfd f31, 0x10(r1)
/* 8017670C 001737EC  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80176710 001737F0  7C 08 03 A6 */	mtlr r0
/* 80176714 001737F4  38 21 00 20 */	addi r1, r1, 0x20
/* 80176718 001737F8  4E 80 00 20 */	blr
.endfn dissolve__12zNPCDutchmanFf

# zNPCDutchman::coalesce(float)
.fn coalesce__12zNPCDutchmanFf, global
/* 8017671C 001737FC  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 80176720 00173800  7C 08 02 A6 */	mflr r0
/* 80176724 00173804  90 01 00 24 */	stw r0, 0x24(r1)
/* 80176728 00173808  DB E1 00 10 */	stfd f31, 0x10(r1)
/* 8017672C 0017380C  F3 E1 00 18 */	psq_st f31, 0x18(r1), 0, qr0
/* 80176730 00173810  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80176734 00173814  7C 7F 1B 78 */	mr r31, r3
/* 80176738 00173818  FF E0 08 90 */	fmr f31, f1
/* 8017673C 0017381C  48 00 13 A1 */	bl reappear__12zNPCDutchmanFv
/* 80176740 00173820  C0 02 AC B8 */	lfs f0, "@1605"@sda21(r2)
/* 80176744 00173824  FC 1F 00 40 */	fcmpo cr0, f31, f0
/* 80176748 00173828  4C 40 13 82 */	cror eq, lt, eq
/* 8017674C 0017382C  40 82 00 60 */	bne .L_801767AC
/* 80176750 00173830  38 00 00 00 */	li r0, 0x0
/* 80176754 00173834  7F E3 FB 78 */	mr r3, r31
/* 80176758 00173838  90 1F 02 C0 */	stw r0, 0x2c0(r31)
/* 8017675C 0017383C  80 8D 97 90 */	lwz r4, "fadein_emitter__30@unnamed@zNPCTypeDutchman_cpp@"@sda21(r13)
/* 80176760 00173840  48 00 50 DD */	bl disable_emitter__12zNPCDutchmanCFR11zParEmitter
/* 80176764 00173844  80 8D 97 88 */	lwz r4, "dissolve_emitter__30@unnamed@zNPCTypeDutchman_cpp@"@sda21(r13)
/* 80176768 00173848  7F E3 FB 78 */	mr r3, r31
/* 8017676C 0017384C  48 00 50 D1 */	bl disable_emitter__12zNPCDutchmanCFR11zParEmitter
/* 80176770 00173850  C0 22 AC BC */	lfs f1, "@1606"@sda21(r2)
/* 80176774 00173854  7F E3 FB 78 */	mr r3, r31
/* 80176778 00173858  48 00 0D B5 */	bl set_alpha__12zNPCDutchmanFf
/* 8017677C 0017385C  7F E3 FB 78 */	mr r3, r31
/* 80176780 00173860  4B FF FB B9 */	bl stop_eye_glow__12zNPCDutchmanFv
/* 80176784 00173864  7F E3 FB 78 */	mr r3, r31
/* 80176788 00173868  4B FF FD A9 */	bl stop_hand_trail__12zNPCDutchmanFv
/* 8017678C 0017386C  80 9F 05 FC */	lwz r4, 0x5fc(r31)
/* 80176790 00173870  28 04 00 00 */	cmplwi r4, 0x0
/* 80176794 00173874  41 82 00 88 */	beq .L_8017681C
/* 80176798 00173878  38 60 00 02 */	li r3, 0x2
/* 8017679C 0017387C  4B FF C1 55 */	bl "kill_sound__30@unnamed@zNPCTypeDutchman_cpp@FiUi"
/* 801767A0 00173880  38 00 00 00 */	li r0, 0x0
/* 801767A4 00173884  90 1F 05 FC */	stw r0, 0x5fc(r31)
/* 801767A8 00173888  48 00 00 74 */	b .L_8017681C
.L_801767AC:
/* 801767AC 0017388C  38 00 00 03 */	li r0, 0x3
/* 801767B0 00173890  7F E3 FB 78 */	mr r3, r31
/* 801767B4 00173894  90 1F 02 C0 */	stw r0, 0x2c0(r31)
/* 801767B8 00173898  C0 02 AC B8 */	lfs f0, "@1605"@sda21(r2)
/* 801767BC 0017389C  D0 1F 05 E4 */	stfs f0, 0x5e4(r31)
/* 801767C0 001738A0  D3 FF 05 E8 */	stfs f31, 0x5e8(r31)
/* 801767C4 001738A4  C0 22 AC BC */	lfs f1, "@1606"@sda21(r2)
/* 801767C8 001738A8  C0 1F 05 E8 */	lfs f0, 0x5e8(r31)
/* 801767CC 001738AC  EC 01 00 24 */	fdivs f0, f1, f0
/* 801767D0 001738B0  D0 1F 05 EC */	stfs f0, 0x5ec(r31)
/* 801767D4 001738B4  80 8D 97 90 */	lwz r4, "fadein_emitter__30@unnamed@zNPCTypeDutchman_cpp@"@sda21(r13)
/* 801767D8 001738B8  48 00 51 B5 */	bl enable_emitter__12zNPCDutchmanCFR11zParEmitter
/* 801767DC 001738BC  80 8D 97 88 */	lwz r4, "dissolve_emitter__30@unnamed@zNPCTypeDutchman_cpp@"@sda21(r13)
/* 801767E0 001738C0  7F E3 FB 78 */	mr r3, r31
/* 801767E4 001738C4  48 00 51 A9 */	bl enable_emitter__12zNPCDutchmanCFR11zParEmitter
/* 801767E8 001738C8  C0 22 AC B8 */	lfs f1, "@1605"@sda21(r2)
/* 801767EC 001738CC  7F E3 FB 78 */	mr r3, r31
/* 801767F0 001738D0  48 00 0D 3D */	bl set_alpha__12zNPCDutchmanFf
/* 801767F4 001738D4  7F E3 FB 78 */	mr r3, r31
/* 801767F8 001738D8  4B FF FB 2D */	bl start_eye_glow__12zNPCDutchmanFv
/* 801767FC 001738DC  7F E3 FB 78 */	mr r3, r31
/* 80176800 001738E0  4B FF FC BD */	bl start_hand_trail__12zNPCDutchmanFv
/* 80176804 001738E4  80 9F 05 FC */	lwz r4, 0x5fc(r31)
/* 80176808 001738E8  28 04 00 00 */	cmplwi r4, 0x0
/* 8017680C 001738EC  41 82 00 10 */	beq .L_8017681C
/* 80176810 001738F0  C0 22 AC BC */	lfs f1, "@1606"@sda21(r2)
/* 80176814 001738F4  38 60 00 02 */	li r3, 0x2
/* 80176818 001738F8  4B FF C1 3D */	bl "set_volume__30@unnamed@zNPCTypeDutchman_cpp@FiUif"
.L_8017681C:
/* 8017681C 001738FC  E3 E1 00 18 */	psq_l f31, 0x18(r1), 0, qr0
/* 80176820 00173900  80 01 00 24 */	lwz r0, 0x24(r1)
/* 80176824 00173904  CB E1 00 10 */	lfd f31, 0x10(r1)
/* 80176828 00173908  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8017682C 0017390C  7C 08 03 A6 */	mtlr r0
/* 80176830 00173910  38 21 00 20 */	addi r1, r1, 0x20
/* 80176834 00173914  4E 80 00 20 */	blr
.endfn coalesce__12zNPCDutchmanFf

# zNPCDutchman::reset_blob_mat()
.fn reset_blob_mat__12zNPCDutchmanFv, global
/* 80176838 00173918  94 21 FF D0 */	stwu r1, -0x30(r1)
/* 8017683C 0017391C  7C 08 02 A6 */	mflr r0
/* 80176840 00173920  90 01 00 34 */	stw r0, 0x34(r1)
/* 80176844 00173924  DB E1 00 20 */	stfd f31, 0x20(r1)
/* 80176848 00173928  F3 E1 00 28 */	psq_st f31, 0x28(r1), 0, qr0
/* 8017684C 0017392C  DB C1 00 10 */	stfd f30, 0x10(r1)
/* 80176850 00173930  F3 C1 00 18 */	psq_st f30, 0x18(r1), 0, qr0
/* 80176854 00173934  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80176858 00173938  93 C1 00 08 */	stw r30, 0x8(r1)
/* 8017685C 0017393C  3C 80 80 33 */	lis r4, "tweak__30@unnamed@zNPCTypeDutchman_cpp@"@ha
/* 80176860 00173940  3B C3 05 9C */	addi r30, r3, 0x59c
/* 80176864 00173944  3B E4 A5 78 */	addi r31, r4, "tweak__30@unnamed@zNPCTypeDutchman_cpp@"@l
/* 80176868 00173948  C0 3F 01 18 */	lfs f1, 0x118(r31)
/* 8017686C 0017394C  4B F4 E5 E1 */	bl isin__Ff
/* 80176870 00173950  FC 00 08 90 */	fmr f0, f1
/* 80176874 00173954  C0 3F 01 18 */	lfs f1, 0x118(r31)
/* 80176878 00173958  FF E0 00 90 */	fmr f31, f0
/* 8017687C 0017395C  4B F4 E6 15 */	bl icos__Ff
/* 80176880 00173960  FC 00 08 90 */	fmr f0, f1
/* 80176884 00173964  C0 42 AC B8 */	lfs f2, "@1605"@sda21(r2)
/* 80176888 00173968  C0 22 AC BC */	lfs f1, "@1606"@sda21(r2)
/* 8017688C 0017396C  7F C3 F3 78 */	mr r3, r30
/* 80176890 00173970  FC 60 10 90 */	fmr f3, f2
/* 80176894 00173974  FF C0 00 90 */	fmr f30, f0
/* 80176898 00173978  4B E9 48 55 */	bl assign__5xVec3Ffff
/* 8017689C 0017397C  FC 40 F0 90 */	fmr f2, f30
/* 801768A0 00173980  C0 22 AC B8 */	lfs f1, "@1605"@sda21(r2)
/* 801768A4 00173984  FC 60 F8 90 */	fmr f3, f31
/* 801768A8 00173988  38 7E 00 10 */	addi r3, r30, 0x10
/* 801768AC 0017398C  4B E9 48 41 */	bl assign__5xVec3Ffff
/* 801768B0 00173990  FC 60 F0 90 */	fmr f3, f30
/* 801768B4 00173994  C0 22 AC B8 */	lfs f1, "@1605"@sda21(r2)
/* 801768B8 00173998  FC 40 F8 50 */	fneg f2, f31
/* 801768BC 0017399C  38 7E 00 20 */	addi r3, r30, 0x20
/* 801768C0 001739A0  4B E9 48 2D */	bl assign__5xVec3Ffff
/* 801768C4 001739A4  E3 E1 00 28 */	psq_l f31, 0x28(r1), 0, qr0
/* 801768C8 001739A8  CB E1 00 20 */	lfd f31, 0x20(r1)
/* 801768CC 001739AC  E3 C1 00 18 */	psq_l f30, 0x18(r1), 0, qr0
/* 801768D0 001739B0  CB C1 00 10 */	lfd f30, 0x10(r1)
/* 801768D4 001739B4  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 801768D8 001739B8  80 01 00 34 */	lwz r0, 0x34(r1)
/* 801768DC 001739BC  83 C1 00 08 */	lwz r30, 0x8(r1)
/* 801768E0 001739C0  7C 08 03 A6 */	mtlr r0
/* 801768E4 001739C4  38 21 00 30 */	addi r1, r1, 0x30
/* 801768E8 001739C8  4E 80 00 20 */	blr
.endfn reset_blob_mat__12zNPCDutchmanFv

# zNPCDutchman::refresh_reticle()
.fn refresh_reticle__12zNPCDutchmanFv, global
/* 801768EC 001739CC  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 801768F0 001739D0  7C 08 02 A6 */	mflr r0
/* 801768F4 001739D4  7C 64 1B 78 */	mr r4, r3
/* 801768F8 001739D8  38 A0 00 2F */	li r5, 0x2f
/* 801768FC 001739DC  90 01 00 24 */	stw r0, 0x24(r1)
/* 80176900 001739E0  38 61 00 08 */	addi r3, r1, 0x8
/* 80176904 001739E4  80 84 00 24 */	lwz r4, 0x24(r4)
/* 80176908 001739E8  4B EB E6 71 */	bl xModelGetBoneLocation__FRC14xModelInstanceUl
/* 8017690C 001739EC  3C 60 80 3D */	lis r3, dutchman_reticle_center@ha
/* 80176910 001739F0  38 81 00 08 */	addi r4, r1, 0x8
/* 80176914 001739F4  38 63 A7 DC */	addi r3, r3, dutchman_reticle_center@l
/* 80176918 001739F8  4B E9 49 4D */	bl __as__5xVec3FRC5xVec3
/* 8017691C 001739FC  3C 80 80 3D */	lis r4, dutchman_reticle_center@ha
/* 80176920 00173A00  3C 60 80 33 */	lis r3, "tweak__30@unnamed@zNPCTypeDutchman_cpp@"@ha
/* 80176924 00173A04  38 84 A7 DC */	addi r4, r4, dutchman_reticle_center@l
/* 80176928 00173A08  38 63 A5 78 */	addi r3, r3, "tweak__30@unnamed@zNPCTypeDutchman_cpp@"@l
/* 8017692C 00173A0C  C0 24 00 04 */	lfs f1, 0x4(r4)
/* 80176930 00173A10  C0 03 00 3C */	lfs f0, 0x3c(r3)
/* 80176934 00173A14  EC 01 00 2A */	fadds f0, f1, f0
/* 80176938 00173A18  D0 04 00 04 */	stfs f0, 0x4(r4)
/* 8017693C 00173A1C  80 01 00 24 */	lwz r0, 0x24(r1)
/* 80176940 00173A20  7C 08 03 A6 */	mtlr r0
/* 80176944 00173A24  38 21 00 20 */	addi r1, r1, 0x20
/* 80176948 00173A28  4E 80 00 20 */	blr
.endfn refresh_reticle__12zNPCDutchmanFv

# zNPCDutchman::reset_lasso_anim()
.fn reset_lasso_anim__12zNPCDutchmanFv, global
/* 8017694C 00173A2C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80176950 00173A30  7C 08 02 A6 */	mflr r0
/* 80176954 00173A34  90 01 00 14 */	stw r0, 0x14(r1)
/* 80176958 00173A38  80 83 02 4C */	lwz r4, 0x24c(r3)
/* 8017695C 00173A3C  C0 22 AC B8 */	lfs f1, "@1605"@sda21(r2)
/* 80176960 00173A40  80 64 00 14 */	lwz r3, 0x14(r4)
/* 80176964 00173A44  80 84 00 10 */	lwz r4, 0x10(r4)
/* 80176968 00173A48  80 63 00 0C */	lwz r3, 0xc(r3)
/* 8017696C 00173A4C  80 63 00 08 */	lwz r3, 0x8(r3)
/* 80176970 00173A50  4B E9 15 AD */	bl xAnimPlaySetState__FP11xAnimSingleP10xAnimStatef
/* 80176974 00173A54  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80176978 00173A58  7C 08 03 A6 */	mtlr r0
/* 8017697C 00173A5C  38 21 00 10 */	addi r1, r1, 0x10
/* 80176980 00173A60  4E 80 00 20 */	blr
.endfn reset_lasso_anim__12zNPCDutchmanFv

# zNPCDutchman::update_fade(float)
.fn update_fade__12zNPCDutchmanFf, global
/* 80176984 00173A64  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 80176988 00173A68  7C 08 02 A6 */	mflr r0
/* 8017698C 00173A6C  90 01 00 24 */	stw r0, 0x24(r1)
/* 80176990 00173A70  DB E1 00 10 */	stfd f31, 0x10(r1)
/* 80176994 00173A74  F3 E1 00 18 */	psq_st f31, 0x18(r1), 0, qr0
/* 80176998 00173A78  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8017699C 00173A7C  7C 7F 1B 78 */	mr r31, r3
/* 801769A0 00173A80  80 03 02 C0 */	lwz r0, 0x2c0(r3)
/* 801769A4 00173A84  2C 00 00 02 */	cmpwi r0, 0x2
/* 801769A8 00173A88  41 82 01 3C */	beq .L_80176AE4
/* 801769AC 00173A8C  40 80 00 10 */	bge .L_801769BC
/* 801769B0 00173A90  2C 00 00 01 */	cmpwi r0, 0x1
/* 801769B4 00173A94  40 80 00 14 */	bge .L_801769C8
/* 801769B8 00173A98  48 00 01 2C */	b .L_80176AE4
.L_801769BC:
/* 801769BC 00173A9C  2C 00 00 04 */	cmpwi r0, 0x4
/* 801769C0 00173AA0  40 80 01 24 */	bge .L_80176AE4
/* 801769C4 00173AA4  48 00 00 84 */	b .L_80176A48
.L_801769C8:
/* 801769C8 00173AA8  C0 1F 05 E4 */	lfs f0, 0x5e4(r31)
/* 801769CC 00173AAC  EC 00 08 2A */	fadds f0, f0, f1
/* 801769D0 00173AB0  D0 1F 05 E4 */	stfs f0, 0x5e4(r31)
/* 801769D4 00173AB4  C0 5F 05 E4 */	lfs f2, 0x5e4(r31)
/* 801769D8 00173AB8  C0 1F 05 E8 */	lfs f0, 0x5e8(r31)
/* 801769DC 00173ABC  FC 02 00 40 */	fcmpo cr0, f2, f0
/* 801769E0 00173AC0  4C 41 13 82 */	cror eq, gt, eq
/* 801769E4 00173AC4  40 82 00 3C */	bne .L_80176A20
/* 801769E8 00173AC8  38 00 00 02 */	li r0, 0x2
/* 801769EC 00173ACC  90 1F 02 C0 */	stw r0, 0x2c0(r31)
/* 801769F0 00173AD0  80 8D 97 8C */	lwz r4, "fadeout_emitter__30@unnamed@zNPCTypeDutchman_cpp@"@sda21(r13)
/* 801769F4 00173AD4  48 00 4E 49 */	bl disable_emitter__12zNPCDutchmanCFR11zParEmitter
/* 801769F8 00173AD8  C0 22 AC B8 */	lfs f1, "@1605"@sda21(r2)
/* 801769FC 00173ADC  7F E3 FB 78 */	mr r3, r31
/* 80176A00 00173AE0  48 00 0B 2D */	bl set_alpha__12zNPCDutchmanFf
/* 80176A04 00173AE4  7F E3 FB 78 */	mr r3, r31
/* 80176A08 00173AE8  48 00 10 91 */	bl vanish__12zNPCDutchmanFv
/* 80176A0C 00173AEC  80 9F 05 FC */	lwz r4, 0x5fc(r31)
/* 80176A10 00173AF0  38 60 00 02 */	li r3, 0x2
/* 80176A14 00173AF4  C0 22 AC BC */	lfs f1, "@1606"@sda21(r2)
/* 80176A18 00173AF8  4B FF BF 3D */	bl "set_volume__30@unnamed@zNPCTypeDutchman_cpp@FiUif"
/* 80176A1C 00173AFC  48 00 00 C8 */	b .L_80176AE4
.L_80176A20:
/* 80176A20 00173B00  C0 3F 05 EC */	lfs f1, 0x5ec(r31)
/* 80176A24 00173B04  C0 02 AC BC */	lfs f0, "@1606"@sda21(r2)
/* 80176A28 00173B08  EF E2 00 72 */	fmuls f31, f2, f1
/* 80176A2C 00173B0C  EC 20 F8 28 */	fsubs f1, f0, f31
/* 80176A30 00173B10  48 00 0A FD */	bl set_alpha__12zNPCDutchmanFf
/* 80176A34 00173B14  FC 20 F8 90 */	fmr f1, f31
/* 80176A38 00173B18  80 9F 05 FC */	lwz r4, 0x5fc(r31)
/* 80176A3C 00173B1C  38 60 00 02 */	li r3, 0x2
/* 80176A40 00173B20  4B FF BF 15 */	bl "set_volume__30@unnamed@zNPCTypeDutchman_cpp@FiUif"
/* 80176A44 00173B24  48 00 00 A0 */	b .L_80176AE4
.L_80176A48:
/* 80176A48 00173B28  C0 1F 05 E4 */	lfs f0, 0x5e4(r31)
/* 80176A4C 00173B2C  EC 00 08 2A */	fadds f0, f0, f1
/* 80176A50 00173B30  D0 1F 05 E4 */	stfs f0, 0x5e4(r31)
/* 80176A54 00173B34  C0 3F 05 E4 */	lfs f1, 0x5e4(r31)
/* 80176A58 00173B38  C0 1F 05 E8 */	lfs f0, 0x5e8(r31)
/* 80176A5C 00173B3C  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80176A60 00173B40  4C 41 13 82 */	cror eq, gt, eq
/* 80176A64 00173B44  40 82 00 5C */	bne .L_80176AC0
/* 80176A68 00173B48  38 00 00 00 */	li r0, 0x0
/* 80176A6C 00173B4C  90 1F 02 C0 */	stw r0, 0x2c0(r31)
/* 80176A70 00173B50  80 8D 97 90 */	lwz r4, "fadein_emitter__30@unnamed@zNPCTypeDutchman_cpp@"@sda21(r13)
/* 80176A74 00173B54  48 00 4D C9 */	bl disable_emitter__12zNPCDutchmanCFR11zParEmitter
/* 80176A78 00173B58  80 8D 97 88 */	lwz r4, "dissolve_emitter__30@unnamed@zNPCTypeDutchman_cpp@"@sda21(r13)
/* 80176A7C 00173B5C  7F E3 FB 78 */	mr r3, r31
/* 80176A80 00173B60  48 00 4D BD */	bl disable_emitter__12zNPCDutchmanCFR11zParEmitter
/* 80176A84 00173B64  C0 22 AC BC */	lfs f1, "@1606"@sda21(r2)
/* 80176A88 00173B68  7F E3 FB 78 */	mr r3, r31
/* 80176A8C 00173B6C  48 00 0A A1 */	bl set_alpha__12zNPCDutchmanFf
/* 80176A90 00173B70  7F E3 FB 78 */	mr r3, r31
/* 80176A94 00173B74  4B FF F8 A5 */	bl stop_eye_glow__12zNPCDutchmanFv
/* 80176A98 00173B78  7F E3 FB 78 */	mr r3, r31
/* 80176A9C 00173B7C  4B FF FA 95 */	bl stop_hand_trail__12zNPCDutchmanFv
/* 80176AA0 00173B80  7F E3 FB 78 */	mr r3, r31
/* 80176AA4 00173B84  48 00 10 39 */	bl reappear__12zNPCDutchmanFv
/* 80176AA8 00173B88  80 9F 05 FC */	lwz r4, 0x5fc(r31)
/* 80176AAC 00173B8C  38 60 00 02 */	li r3, 0x2
/* 80176AB0 00173B90  4B FF BE 41 */	bl "kill_sound__30@unnamed@zNPCTypeDutchman_cpp@FiUi"
/* 80176AB4 00173B94  38 00 00 00 */	li r0, 0x0
/* 80176AB8 00173B98  90 1F 05 FC */	stw r0, 0x5fc(r31)
/* 80176ABC 00173B9C  48 00 00 28 */	b .L_80176AE4
.L_80176AC0:
/* 80176AC0 00173BA0  C0 1F 05 EC */	lfs f0, 0x5ec(r31)
/* 80176AC4 00173BA4  EF E1 00 32 */	fmuls f31, f1, f0
/* 80176AC8 00173BA8  FC 20 F8 90 */	fmr f1, f31
/* 80176ACC 00173BAC  48 00 0A 61 */	bl set_alpha__12zNPCDutchmanFf
/* 80176AD0 00173BB0  C0 02 AC BC */	lfs f0, "@1606"@sda21(r2)
/* 80176AD4 00173BB4  38 60 00 02 */	li r3, 0x2
/* 80176AD8 00173BB8  80 9F 05 FC */	lwz r4, 0x5fc(r31)
/* 80176ADC 00173BBC  EC 20 F8 28 */	fsubs f1, f0, f31
/* 80176AE0 00173BC0  4B FF BE 75 */	bl "set_volume__30@unnamed@zNPCTypeDutchman_cpp@FiUif"
.L_80176AE4:
/* 80176AE4 00173BC4  E3 E1 00 18 */	psq_l f31, 0x18(r1), 0, qr0
/* 80176AE8 00173BC8  80 01 00 24 */	lwz r0, 0x24(r1)
/* 80176AEC 00173BCC  CB E1 00 10 */	lfd f31, 0x10(r1)
/* 80176AF0 00173BD0  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80176AF4 00173BD4  7C 08 03 A6 */	mtlr r0
/* 80176AF8 00173BD8  38 21 00 20 */	addi r1, r1, 0x20
/* 80176AFC 00173BDC  4E 80 00 20 */	blr
.endfn update_fade__12zNPCDutchmanFf

# zNPCDutchman::update_slime(float)
.fn update_slime__12zNPCDutchmanFf, global
/* 80176B00 00173BE0  94 21 FF C0 */	stwu r1, -0x40(r1)
/* 80176B04 00173BE4  7C 08 02 A6 */	mflr r0
/* 80176B08 00173BE8  90 01 00 44 */	stw r0, 0x44(r1)
/* 80176B0C 00173BEC  DB E1 00 30 */	stfd f31, 0x30(r1)
/* 80176B10 00173BF0  F3 E1 00 38 */	psq_st f31, 0x38(r1), 0, qr0
/* 80176B14 00173BF4  93 E1 00 2C */	stw r31, 0x2c(r1)
/* 80176B18 00173BF8  93 C1 00 28 */	stw r30, 0x28(r1)
/* 80176B1C 00173BFC  FF E0 08 90 */	fmr f31, f1
/* 80176B20 00173C00  7C 7E 1B 78 */	mr r30, r3
/* 80176B24 00173C04  38 7E 06 00 */	addi r3, r30, 0x600
/* 80176B28 00173C08  48 00 47 55 */	bl "begin__43static_queue<Q212zNPCDutchman11slime_slice>CFv"
/* 80176B2C 00173C0C  3C A0 80 33 */	lis r5, "tweak__30@unnamed@zNPCTypeDutchman_cpp@"@ha
/* 80176B30 00173C10  90 81 00 1C */	stw r4, 0x1c(r1)
/* 80176B34 00173C14  3B E5 A5 78 */	addi r31, r5, "tweak__30@unnamed@zNPCTypeDutchman_cpp@"@l
/* 80176B38 00173C18  90 61 00 18 */	stw r3, 0x18(r1)
/* 80176B3C 00173C1C  48 00 00 54 */	b .L_80176B90
.L_80176B40:
/* 80176B40 00173C20  38 61 00 18 */	addi r3, r1, 0x18
/* 80176B44 00173C24  48 00 47 21 */	bl "__ml__Q243static_queue<Q212zNPCDutchman11slime_slice>8iteratorCFv"
/* 80176B48 00173C28  C0 03 00 00 */	lfs f0, 0x0(r3)
/* 80176B4C 00173C2C  EC 00 F8 2A */	fadds f0, f0, f31
/* 80176B50 00173C30  D0 03 00 00 */	stfs f0, 0x0(r3)
/* 80176B54 00173C34  C0 23 00 00 */	lfs f1, 0x0(r3)
/* 80176B58 00173C38  C0 1F 01 70 */	lfs f0, 0x170(r31)
/* 80176B5C 00173C3C  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80176B60 00173C40  40 81 00 28 */	ble .L_80176B88
/* 80176B64 00173C44  38 7E 06 00 */	addi r3, r30, 0x600
/* 80176B68 00173C48  48 00 46 99 */	bl "end__43static_queue<Q212zNPCDutchman11slime_slice>CFv"
/* 80176B6C 00173C4C  90 81 00 14 */	stw r4, 0x14(r1)
/* 80176B70 00173C50  38 81 00 18 */	addi r4, r1, 0x18
/* 80176B74 00173C54  38 A1 00 10 */	addi r5, r1, 0x10
/* 80176B78 00173C58  90 61 00 10 */	stw r3, 0x10(r1)
/* 80176B7C 00173C5C  38 7E 06 00 */	addi r3, r30, 0x600
/* 80176B80 00173C60  48 00 46 0D */	bl "erase__43static_queue<Q212zNPCDutchman11slime_slice>FRCQ243static_queue<Q212zNPCDutchman11slime_slice>8iteratorRCQ243static_queue<Q212zNPCDutchman11slime_slice>8iterator"
/* 80176B84 00173C64  48 00 00 30 */	b .L_80176BB4
.L_80176B88:
/* 80176B88 00173C68  38 61 00 18 */	addi r3, r1, 0x18
/* 80176B8C 00173C6C  48 00 45 81 */	bl "__pp__Q243static_queue<Q212zNPCDutchman11slime_slice>8iteratorFv"
.L_80176B90:
/* 80176B90 00173C70  38 7E 06 00 */	addi r3, r30, 0x600
/* 80176B94 00173C74  48 00 46 6D */	bl "end__43static_queue<Q212zNPCDutchman11slime_slice>CFv"
/* 80176B98 00173C78  90 81 00 0C */	stw r4, 0xc(r1)
/* 80176B9C 00173C7C  38 81 00 08 */	addi r4, r1, 0x8
/* 80176BA0 00173C80  90 61 00 08 */	stw r3, 0x8(r1)
/* 80176BA4 00173C84  38 61 00 18 */	addi r3, r1, 0x18
/* 80176BA8 00173C88  48 00 45 49 */	bl "__ne__Q243static_queue<Q212zNPCDutchman11slime_slice>8iteratorCFRCQ243static_queue<Q212zNPCDutchman11slime_slice>8iterator"
/* 80176BAC 00173C8C  54 60 06 3F */	clrlwi. r0, r3, 24
/* 80176BB0 00173C90  40 82 FF 90 */	bne .L_80176B40
.L_80176BB4:
/* 80176BB4 00173C94  E3 E1 00 38 */	psq_l f31, 0x38(r1), 0, qr0
/* 80176BB8 00173C98  80 01 00 44 */	lwz r0, 0x44(r1)
/* 80176BBC 00173C9C  CB E1 00 30 */	lfd f31, 0x30(r1)
/* 80176BC0 00173CA0  83 E1 00 2C */	lwz r31, 0x2c(r1)
/* 80176BC4 00173CA4  83 C1 00 28 */	lwz r30, 0x28(r1)
/* 80176BC8 00173CA8  7C 08 03 A6 */	mtlr r0
/* 80176BCC 00173CAC  38 21 00 40 */	addi r1, r1, 0x40
/* 80176BD0 00173CB0  4E 80 00 20 */	blr
.endfn update_slime__12zNPCDutchmanFf

# zNPCDutchman::add_slime(const xVec3&, float)
.fn add_slime__12zNPCDutchmanFRC5xVec3f, global
/* 80176BD4 00173CB4  94 21 FF C0 */	stwu r1, -0x40(r1)
/* 80176BD8 00173CB8  7C 08 02 A6 */	mflr r0
/* 80176BDC 00173CBC  90 01 00 44 */	stw r0, 0x44(r1)
/* 80176BE0 00173CC0  DB E1 00 30 */	stfd f31, 0x30(r1)
/* 80176BE4 00173CC4  F3 E1 00 38 */	psq_st f31, 0x38(r1), 0, qr0
/* 80176BE8 00173CC8  93 E1 00 2C */	stw r31, 0x2c(r1)
/* 80176BEC 00173CCC  93 C1 00 28 */	stw r30, 0x28(r1)
/* 80176BF0 00173CD0  93 A1 00 24 */	stw r29, 0x24(r1)
/* 80176BF4 00173CD4  3C A0 80 33 */	lis r5, "slime_emitter_settings__30@unnamed@zNPCTypeDutchman_cpp@"@ha
/* 80176BF8 00173CD8  FF E0 08 90 */	fmr f31, f1
/* 80176BFC 00173CDC  38 A5 B0 28 */	addi r5, r5, "slime_emitter_settings__30@unnamed@zNPCTypeDutchman_cpp@"@l
/* 80176C00 00173CE0  7C 7D 1B 78 */	mr r29, r3
/* 80176C04 00173CE4  7C 9E 23 78 */	mr r30, r4
/* 80176C08 00173CE8  38 65 01 40 */	addi r3, r5, 0x140
/* 80176C0C 00173CEC  4B E9 46 59 */	bl __as__5xVec3FRC5xVec3
/* 80176C10 00173CF0  FC 20 F8 90 */	fmr f1, f31
/* 80176C14 00173CF4  3C 60 80 33 */	lis r3, "slime_emitter_settings__30@unnamed@zNPCTypeDutchman_cpp@"@ha
/* 80176C18 00173CF8  80 8D 97 98 */	lwz r4, "slime_emitter__30@unnamed@zNPCTypeDutchman_cpp@"@sda21(r13)
/* 80176C1C 00173CFC  38 A3 B0 28 */	addi r5, r3, "slime_emitter_settings__30@unnamed@zNPCTypeDutchman_cpp@"@l
/* 80176C20 00173D00  7F A3 EB 78 */	mr r3, r29
/* 80176C24 00173D04  48 00 4D 01 */	bl emit_particles__12zNPCDutchmanCFR11zParEmitterfR25xParEmitterCustomSettings
/* 80176C28 00173D08  38 7D 06 00 */	addi r3, r29, 0x600
/* 80176C2C 00173D0C  48 00 47 61 */	bl "empty__43static_queue<Q212zNPCDutchman11slime_slice>CFv"
/* 80176C30 00173D10  54 60 06 3F */	clrlwi. r0, r3, 24
/* 80176C34 00173D14  41 82 00 70 */	beq .L_80176CA4
/* 80176C38 00173D18  3C 60 80 33 */	lis r3, "tweak__30@unnamed@zNPCTypeDutchman_cpp@"@ha
/* 80176C3C 00173D1C  C0 3E 00 00 */	lfs f1, 0x0(r30)
/* 80176C40 00173D20  38 63 A5 78 */	addi r3, r3, "tweak__30@unnamed@zNPCTypeDutchman_cpp@"@l
/* 80176C44 00173D24  C0 7E 00 08 */	lfs f3, 0x8(r30)
/* 80176C48 00173D28  C0 43 00 24 */	lfs f2, 0x24(r3)
/* 80176C4C 00173D2C  38 7D 06 14 */	addi r3, r29, 0x614
/* 80176C50 00173D30  4B E9 44 9D */	bl assign__5xVec3Ffff
/* 80176C54 00173D34  C0 5D 02 EC */	lfs f2, 0x2ec(r29)
/* 80176C58 00173D38  38 7D 06 20 */	addi r3, r29, 0x620
/* 80176C5C 00173D3C  C0 3E 00 00 */	lfs f1, 0x0(r30)
/* 80176C60 00173D40  C0 7D 02 F4 */	lfs f3, 0x2f4(r29)
/* 80176C64 00173D44  C0 1E 00 08 */	lfs f0, 0x8(r30)
/* 80176C68 00173D48  EC 22 08 28 */	fsubs f1, f2, f1
/* 80176C6C 00173D4C  C0 42 AC B8 */	lfs f2, "@1605"@sda21(r2)
/* 80176C70 00173D50  EC 63 00 28 */	fsubs f3, f3, f0
/* 80176C74 00173D54  4B E9 44 79 */	bl assign__5xVec3Ffff
/* 80176C78 00173D58  38 7D 06 20 */	addi r3, r29, 0x620
/* 80176C7C 00173D5C  4B E9 E9 35 */	bl normalize__5xVec3Fv
/* 80176C80 00173D60  38 7D 06 00 */	addi r3, r29, 0x600
/* 80176C84 00173D64  48 00 46 BD */	bl "push_front__43static_queue<Q212zNPCDutchman11slime_slice>Fv"
/* 80176C88 00173D68  38 7D 06 00 */	addi r3, r29, 0x600
/* 80176C8C 00173D6C  48 00 46 85 */	bl "front__43static_queue<Q212zNPCDutchman11slime_slice>Fv"
/* 80176C90 00173D70  C0 02 AC B8 */	lfs f0, "@1605"@sda21(r2)
/* 80176C94 00173D74  D0 03 00 00 */	stfs f0, 0x0(r3)
/* 80176C98 00173D78  C0 02 AC B8 */	lfs f0, "@1605"@sda21(r2)
/* 80176C9C 00173D7C  D0 03 00 04 */	stfs f0, 0x4(r3)
/* 80176CA0 00173D80  48 00 00 88 */	b .L_80176D28
.L_80176CA4:
/* 80176CA4 00173D84  38 7D 06 00 */	addi r3, r29, 0x600
/* 80176CA8 00173D88  48 00 46 69 */	bl "front__43static_queue<Q212zNPCDutchman11slime_slice>Fv"
/* 80176CAC 00173D8C  7C 7F 1B 78 */	mr r31, r3
/* 80176CB0 00173D90  7F C4 F3 78 */	mr r4, r30
/* 80176CB4 00173D94  38 61 00 08 */	addi r3, r1, 0x8
/* 80176CB8 00173D98  38 BD 06 14 */	addi r5, r29, 0x614
/* 80176CBC 00173D9C  4B E9 45 11 */	bl __mi__5xVec3CFRC5xVec3
/* 80176CC0 00173DA0  38 61 00 08 */	addi r3, r1, 0x8
/* 80176CC4 00173DA4  4B E9 44 39 */	bl length2__5xVec3CFv
/* 80176CC8 00173DA8  C0 42 AC C0 */	lfs f2, "@1632"@sda21(r2)
/* 80176CCC 00173DAC  FF E0 08 90 */	fmr f31, f1
/* 80176CD0 00173DB0  C0 1F 00 04 */	lfs f0, 0x4(r31)
/* 80176CD4 00173DB4  EC 02 00 2A */	fadds f0, f2, f0
/* 80176CD8 00173DB8  EC 00 00 32 */	fmuls f0, f0, f0
/* 80176CDC 00173DBC  FC 1F 00 40 */	fcmpo cr0, f31, f0
/* 80176CE0 00173DC0  4C 41 13 82 */	cror eq, gt, eq
/* 80176CE4 00173DC4  40 82 00 44 */	bne .L_80176D28
/* 80176CE8 00173DC8  38 7D 06 00 */	addi r3, r29, 0x600
/* 80176CEC 00173DCC  48 00 45 C5 */	bl "full__43static_queue<Q212zNPCDutchman11slime_slice>CFv"
/* 80176CF0 00173DD0  54 60 06 3F */	clrlwi. r0, r3, 24
/* 80176CF4 00173DD4  41 82 00 0C */	beq .L_80176D00
/* 80176CF8 00173DD8  38 7D 06 00 */	addi r3, r29, 0x600
/* 80176CFC 00173DDC  48 00 45 A5 */	bl "pop_back__43static_queue<Q212zNPCDutchman11slime_slice>Fv"
.L_80176D00:
/* 80176D00 00173DE0  38 7D 06 00 */	addi r3, r29, 0x600
/* 80176D04 00173DE4  48 00 46 3D */	bl "push_front__43static_queue<Q212zNPCDutchman11slime_slice>Fv"
/* 80176D08 00173DE8  38 7D 06 00 */	addi r3, r29, 0x600
/* 80176D0C 00173DEC  48 00 46 05 */	bl "front__43static_queue<Q212zNPCDutchman11slime_slice>Fv"
/* 80176D10 00173DF0  C0 02 AC B8 */	lfs f0, "@1605"@sda21(r2)
/* 80176D14 00173DF4  7C 7F 1B 78 */	mr r31, r3
/* 80176D18 00173DF8  FC 20 F8 90 */	fmr f1, f31
/* 80176D1C 00173DFC  D0 03 00 00 */	stfs f0, 0x0(r3)
/* 80176D20 00173E00  4B E9 3A DD */	bl xsqrt__Ff
/* 80176D24 00173E04  D0 3F 00 04 */	stfs f1, 0x4(r31)
.L_80176D28:
/* 80176D28 00173E08  E3 E1 00 38 */	psq_l f31, 0x38(r1), 0, qr0
/* 80176D2C 00173E0C  80 01 00 44 */	lwz r0, 0x44(r1)
/* 80176D30 00173E10  CB E1 00 30 */	lfd f31, 0x30(r1)
/* 80176D34 00173E14  83 E1 00 2C */	lwz r31, 0x2c(r1)
/* 80176D38 00173E18  83 C1 00 28 */	lwz r30, 0x28(r1)
/* 80176D3C 00173E1C  83 A1 00 24 */	lwz r29, 0x24(r1)
/* 80176D40 00173E20  7C 08 03 A6 */	mtlr r0
/* 80176D44 00173E24  38 21 00 40 */	addi r1, r1, 0x40
/* 80176D48 00173E28  4E 80 00 20 */	blr
.endfn add_slime__12zNPCDutchmanFRC5xVec3f

# zNPCDutchman::add_spray(const xVec3&, float)
.fn add_spray__12zNPCDutchmanFRC5xVec3f, global
/* 80176D4C 00173E2C  94 21 FF 60 */	stwu r1, -0xa0(r1)
/* 80176D50 00173E30  7C 08 02 A6 */	mflr r0
/* 80176D54 00173E34  90 01 00 A4 */	stw r0, 0xa4(r1)
/* 80176D58 00173E38  DB E1 00 90 */	stfd f31, 0x90(r1)
/* 80176D5C 00173E3C  F3 E1 00 98 */	psq_st f31, 0x98(r1), 0, qr0
/* 80176D60 00173E40  DB C1 00 80 */	stfd f30, 0x80(r1)
/* 80176D64 00173E44  F3 C1 00 88 */	psq_st f30, 0x88(r1), 0, qr0
/* 80176D68 00173E48  93 E1 00 7C */	stw r31, 0x7c(r1)
/* 80176D6C 00173E4C  93 C1 00 78 */	stw r30, 0x78(r1)
/* 80176D70 00173E50  93 A1 00 74 */	stw r29, 0x74(r1)
/* 80176D74 00173E54  93 81 00 70 */	stw r28, 0x70(r1)
/* 80176D78 00173E58  FF E0 08 90 */	fmr f31, f1
/* 80176D7C 00173E5C  7C 7E 1B 78 */	mr r30, r3
/* 80176D80 00173E60  7C 9C 23 78 */	mr r28, r4
/* 80176D84 00173E64  48 00 4B F9 */	bl get_facing__12zNPCDutchmanCFv
/* 80176D88 00173E68  3C 80 80 33 */	lis r4, "tweak__30@unnamed@zNPCTypeDutchman_cpp@"@ha
/* 80176D8C 00173E6C  7C 60 1B 78 */	mr r0, r3
/* 80176D90 00173E70  38 84 A5 78 */	addi r4, r4, "tweak__30@unnamed@zNPCTypeDutchman_cpp@"@l
/* 80176D94 00173E74  38 61 00 40 */	addi r3, r1, 0x40
/* 80176D98 00173E78  7C 1F 03 78 */	mr r31, r0
/* 80176D9C 00173E7C  C0 24 01 04 */	lfs f1, 0x104(r4)
/* 80176DA0 00173E80  7F E4 FB 78 */	mr r4, r31
/* 80176DA4 00173E84  4B E9 43 7D */	bl __ml__5xVec3CFf
/* 80176DA8 00173E88  7F 84 E3 78 */	mr r4, r28
/* 80176DAC 00173E8C  38 61 00 4C */	addi r3, r1, 0x4c
/* 80176DB0 00173E90  38 A1 00 40 */	addi r5, r1, 0x40
/* 80176DB4 00173E94  4B E9 E6 2D */	bl __pl__5xVec3CFRC5xVec3
/* 80176DB8 00173E98  80 01 00 50 */	lwz r0, 0x50(r1)
/* 80176DBC 00173E9C  3C 60 80 33 */	lis r3, "tweak__30@unnamed@zNPCTypeDutchman_cpp@"@ha
/* 80176DC0 00173EA0  38 83 A5 78 */	addi r4, r3, "tweak__30@unnamed@zNPCTypeDutchman_cpp@"@l
/* 80176DC4 00173EA4  80 A1 00 4C */	lwz r5, 0x4c(r1)
/* 80176DC8 00173EA8  90 01 00 68 */	stw r0, 0x68(r1)
/* 80176DCC 00173EAC  3C 60 80 33 */	lis r3, "snot_emitter_settings__30@unnamed@zNPCTypeDutchman_cpp@"@ha
/* 80176DD0 00173EB0  80 01 00 54 */	lwz r0, 0x54(r1)
/* 80176DD4 00173EB4  38 63 AE BC */	addi r3, r3, "snot_emitter_settings__30@unnamed@zNPCTypeDutchman_cpp@"@l
/* 80176DD8 00173EB8  C0 21 00 68 */	lfs f1, 0x68(r1)
/* 80176DDC 00173EBC  38 63 01 40 */	addi r3, r3, 0x140
/* 80176DE0 00173EC0  C0 04 01 0C */	lfs f0, 0x10c(r4)
/* 80176DE4 00173EC4  38 81 00 64 */	addi r4, r1, 0x64
/* 80176DE8 00173EC8  90 A1 00 64 */	stw r5, 0x64(r1)
/* 80176DEC 00173ECC  EC 01 00 2A */	fadds f0, f1, f0
/* 80176DF0 00173ED0  90 01 00 6C */	stw r0, 0x6c(r1)
/* 80176DF4 00173ED4  D0 01 00 68 */	stfs f0, 0x68(r1)
/* 80176DF8 00173ED8  4B E9 44 6D */	bl __as__5xVec3FRC5xVec3
/* 80176DFC 00173EDC  3C 60 80 33 */	lis r3, "tweak__30@unnamed@zNPCTypeDutchman_cpp@"@ha
/* 80176E00 00173EE0  7F E4 FB 78 */	mr r4, r31
/* 80176E04 00173EE4  38 A3 A5 78 */	addi r5, r3, "tweak__30@unnamed@zNPCTypeDutchman_cpp@"@l
/* 80176E08 00173EE8  38 61 00 34 */	addi r3, r1, 0x34
/* 80176E0C 00173EEC  C0 25 01 08 */	lfs f1, 0x108(r5)
/* 80176E10 00173EF0  4B E9 43 11 */	bl __ml__5xVec3CFf
/* 80176E14 00173EF4  3C 60 80 33 */	lis r3, "snot_emitter_settings__30@unnamed@zNPCTypeDutchman_cpp@"@ha
/* 80176E18 00173EF8  38 81 00 34 */	addi r4, r1, 0x34
/* 80176E1C 00173EFC  38 63 AE BC */	addi r3, r3, "snot_emitter_settings__30@unnamed@zNPCTypeDutchman_cpp@"@l
/* 80176E20 00173F00  38 63 01 4C */	addi r3, r3, 0x14c
/* 80176E24 00173F04  4B E9 44 41 */	bl __as__5xVec3FRC5xVec3
/* 80176E28 00173F08  3C 60 80 33 */	lis r3, "tweak__30@unnamed@zNPCTypeDutchman_cpp@"@ha
/* 80176E2C 00173F0C  C0 3E 05 70 */	lfs f1, 0x570(r30)
/* 80176E30 00173F10  3B A3 A5 78 */	addi r29, r3, "tweak__30@unnamed@zNPCTypeDutchman_cpp@"@l
/* 80176E34 00173F14  C0 1D 01 20 */	lfs f0, 0x120(r29)
/* 80176E38 00173F18  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80176E3C 00173F1C  40 80 00 70 */	bge .L_80176EAC
/* 80176E40 00173F20  80 CD 97 94 */	lwz r6, "snot_emitter__30@unnamed@zNPCTypeDutchman_cpp@"@sda21(r13)
/* 80176E44 00173F24  3C 60 80 33 */	lis r3, "snot_emitter_settings__30@unnamed@zNPCTypeDutchman_cpp@"@ha
/* 80176E48 00173F28  80 82 C0 88 */	lwz r4, "@2571"@sda21(r2)
/* 80176E4C 00173F2C  38 A3 AE BC */	addi r5, r3, "snot_emitter_settings__30@unnamed@zNPCTypeDutchman_cpp@"@l
/* 80176E50 00173F30  83 86 00 18 */	lwz r28, 0x18(r6)
/* 80176E54 00173F34  FC 20 F8 90 */	fmr f1, f31
/* 80176E58 00173F38  80 02 C0 8C */	lwz r0, "@2571"+0x4@sda21(r2)
/* 80176E5C 00173F3C  7F C3 F3 78 */	mr r3, r30
/* 80176E60 00173F40  C0 9D 01 24 */	lfs f4, 0x124(r29)
/* 80176E64 00173F44  C0 7C 00 0C */	lfs f3, 0xc(r28)
/* 80176E68 00173F48  90 81 00 08 */	stw r4, 0x8(r1)
/* 80176E6C 00173F4C  EC 03 01 32 */	fmuls f0, f3, f4
/* 80176E70 00173F50  C0 5C 00 10 */	lfs f2, 0x10(r28)
/* 80176E74 00173F54  90 01 00 0C */	stw r0, 0xc(r1)
/* 80176E78 00173F58  D0 1C 00 0C */	stfs f0, 0xc(r28)
/* 80176E7C 00173F5C  C0 1C 00 10 */	lfs f0, 0x10(r28)
/* 80176E80 00173F60  D0 61 00 08 */	stfs f3, 0x8(r1)
/* 80176E84 00173F64  EC 00 01 32 */	fmuls f0, f0, f4
/* 80176E88 00173F68  D0 41 00 0C */	stfs f2, 0xc(r1)
/* 80176E8C 00173F6C  D0 1C 00 10 */	stfs f0, 0x10(r28)
/* 80176E90 00173F70  80 8D 97 94 */	lwz r4, "snot_emitter__30@unnamed@zNPCTypeDutchman_cpp@"@sda21(r13)
/* 80176E94 00173F74  48 00 4A 91 */	bl emit_particles__12zNPCDutchmanCFR11zParEmitterfR25xParEmitterCustomSettings
/* 80176E98 00173F78  C0 21 00 08 */	lfs f1, 0x8(r1)
/* 80176E9C 00173F7C  C0 01 00 0C */	lfs f0, 0xc(r1)
/* 80176EA0 00173F80  D0 3C 00 0C */	stfs f1, 0xc(r28)
/* 80176EA4 00173F84  D0 1C 00 10 */	stfs f0, 0x10(r28)
/* 80176EA8 00173F88  48 00 00 1C */	b .L_80176EC4
.L_80176EAC:
/* 80176EAC 00173F8C  FC 20 F8 90 */	fmr f1, f31
/* 80176EB0 00173F90  3C 60 80 33 */	lis r3, "snot_emitter_settings__30@unnamed@zNPCTypeDutchman_cpp@"@ha
/* 80176EB4 00173F94  80 8D 97 94 */	lwz r4, "snot_emitter__30@unnamed@zNPCTypeDutchman_cpp@"@sda21(r13)
/* 80176EB8 00173F98  38 A3 AE BC */	addi r5, r3, "snot_emitter_settings__30@unnamed@zNPCTypeDutchman_cpp@"@l
/* 80176EBC 00173F9C  7F C3 F3 78 */	mr r3, r30
/* 80176EC0 00173FA0  48 00 4A 65 */	bl emit_particles__12zNPCDutchmanCFR11zParEmitterfR25xParEmitterCustomSettings
.L_80176EC4:
/* 80176EC4 00173FA4  C0 3E 05 70 */	lfs f1, 0x570(r30)
/* 80176EC8 00173FA8  C0 1D 01 20 */	lfs f0, 0x120(r29)
/* 80176ECC 00173FAC  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80176ED0 00173FB0  4C 41 13 82 */	cror eq, gt, eq
/* 80176ED4 00173FB4  40 82 01 58 */	bne .L_8017702C
/* 80176ED8 00173FB8  80 8D 97 A0 */	lwz r4, "blob_emitter__30@unnamed@zNPCTypeDutchman_cpp@"@sda21(r13)
/* 80176EDC 00173FBC  3C 60 80 33 */	lis r3, "tweak__30@unnamed@zNPCTypeDutchman_cpp@"@ha
/* 80176EE0 00173FC0  38 00 00 05 */	li r0, 0x5
/* 80176EE4 00173FC4  83 84 00 10 */	lwz r28, 0x10(r4)
/* 80176EE8 00173FC8  38 63 A5 78 */	addi r3, r3, "tweak__30@unnamed@zNPCTypeDutchman_cpp@"@l
/* 80176EEC 00173FCC  C3 DC 00 40 */	lfs f30, 0x40(r28)
/* 80176EF0 00173FD0  98 1C 00 09 */	stb r0, 0x9(r28)
/* 80176EF4 00173FD4  C0 03 01 1C */	lfs f0, 0x11c(r3)
/* 80176EF8 00173FD8  D0 1C 00 28 */	stfs f0, 0x28(r28)
/* 80176EFC 00173FDC  88 1E 05 88 */	lbz r0, 0x588(r30)
/* 80176F00 00173FE0  28 00 00 00 */	cmplwi r0, 0x0
/* 80176F04 00173FE4  41 82 00 40 */	beq .L_80176F44
/* 80176F08 00173FE8  C0 22 AC B8 */	lfs f1, "@1605"@sda21(r2)
/* 80176F0C 00173FEC  38 7C 00 3C */	addi r3, r28, 0x3c
/* 80176F10 00173FF0  4B EA 59 69 */	bl __as__5xVec3Ff
/* 80176F14 00173FF4  38 7E 05 8C */	addi r3, r30, 0x58c
/* 80176F18 00173FF8  38 81 00 64 */	addi r4, r1, 0x64
/* 80176F1C 00173FFC  4B E9 43 49 */	bl __as__5xVec3FRC5xVec3
/* 80176F20 00174000  7C 64 1B 78 */	mr r4, r3
/* 80176F24 00174004  38 7C 00 1C */	addi r3, r28, 0x1c
/* 80176F28 00174008  4B E9 43 3D */	bl __as__5xVec3FRC5xVec3
/* 80176F2C 0017400C  7C 64 1B 78 */	mr r4, r3
/* 80176F30 00174010  38 7C 00 10 */	addi r3, r28, 0x10
/* 80176F34 00174014  4B E9 43 31 */	bl __as__5xVec3FRC5xVec3
/* 80176F38 00174018  38 00 00 00 */	li r0, 0x0
/* 80176F3C 0017401C  98 1E 05 88 */	stb r0, 0x588(r30)
/* 80176F40 00174020  48 00 00 78 */	b .L_80176FB8
.L_80176F44:
/* 80176F44 00174024  38 61 00 1C */	addi r3, r1, 0x1c
/* 80176F48 00174028  38 81 00 64 */	addi r4, r1, 0x64
/* 80176F4C 0017402C  38 BE 05 8C */	addi r5, r30, 0x58c
/* 80176F50 00174030  4B E9 42 7D */	bl __mi__5xVec3CFRC5xVec3
/* 80176F54 00174034  FC 20 F8 90 */	fmr f1, f31
/* 80176F58 00174038  38 61 00 28 */	addi r3, r1, 0x28
/* 80176F5C 0017403C  38 81 00 1C */	addi r4, r1, 0x1c
/* 80176F60 00174040  4B E9 E6 89 */	bl __dv__5xVec3CFf
/* 80176F64 00174044  38 7C 00 3C */	addi r3, r28, 0x3c
/* 80176F68 00174048  38 81 00 28 */	addi r4, r1, 0x28
/* 80176F6C 0017404C  4B E9 42 F9 */	bl __as__5xVec3FRC5xVec3
/* 80176F70 00174050  38 7C 00 10 */	addi r3, r28, 0x10
/* 80176F74 00174054  38 9E 05 8C */	addi r4, r30, 0x58c
/* 80176F78 00174058  4B E9 42 ED */	bl __as__5xVec3FRC5xVec3
/* 80176F7C 0017405C  38 7E 05 8C */	addi r3, r30, 0x58c
/* 80176F80 00174060  38 81 00 64 */	addi r4, r1, 0x64
/* 80176F84 00174064  4B E9 42 E1 */	bl __as__5xVec3FRC5xVec3
/* 80176F88 00174068  38 7C 00 1C */	addi r3, r28, 0x1c
/* 80176F8C 0017406C  38 9E 05 8C */	addi r4, r30, 0x58c
/* 80176F90 00174070  4B E9 42 D5 */	bl __as__5xVec3FRC5xVec3
/* 80176F94 00174074  38 7C 00 3C */	addi r3, r28, 0x3c
/* 80176F98 00174078  4B E9 41 65 */	bl length2__5xVec3CFv
/* 80176F9C 0017407C  EC 1E 07 B2 */	fmuls f0, f30, f30
/* 80176FA0 00174080  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80176FA4 00174084  40 81 00 14 */	ble .L_80176FB8
/* 80176FA8 00174088  4B E9 38 55 */	bl xsqrt__Ff
/* 80176FAC 0017408C  EC 3E 08 24 */	fdivs f1, f30, f1
/* 80176FB0 00174090  38 7C 00 3C */	addi r3, r28, 0x3c
/* 80176FB4 00174094  4B E9 41 CD */	bl __amu__5xVec3Ff
.L_80176FB8:
/* 80176FB8 00174098  FC 20 F0 90 */	fmr f1, f30
/* 80176FBC 0017409C  7F E4 FB 78 */	mr r4, r31
/* 80176FC0 001740A0  38 61 00 10 */	addi r3, r1, 0x10
/* 80176FC4 001740A4  4B E9 41 5D */	bl __ml__5xVec3CFf
/* 80176FC8 001740A8  80 C1 00 10 */	lwz r6, 0x10(r1)
/* 80176FCC 001740AC  3C 60 80 33 */	lis r3, "tweak__30@unnamed@zNPCTypeDutchman_cpp@"@ha
/* 80176FD0 001740B0  80 A1 00 14 */	lwz r5, 0x14(r1)
/* 80176FD4 001740B4  38 83 A5 78 */	addi r4, r3, "tweak__30@unnamed@zNPCTypeDutchman_cpp@"@l
/* 80176FD8 001740B8  80 01 00 18 */	lwz r0, 0x18(r1)
/* 80176FDC 001740BC  38 7E 05 9C */	addi r3, r30, 0x59c
/* 80176FE0 001740C0  90 C1 00 58 */	stw r6, 0x58(r1)
/* 80176FE4 001740C4  C0 24 01 18 */	lfs f1, 0x118(r4)
/* 80176FE8 001740C8  90 A1 00 5C */	stw r5, 0x5c(r1)
/* 80176FEC 001740CC  90 01 00 60 */	stw r0, 0x60(r1)
/* 80176FF0 001740D0  80 9E 00 24 */	lwz r4, 0x24(r30)
/* 80176FF4 001740D4  80 84 00 4C */	lwz r4, 0x4c(r4)
/* 80176FF8 001740D8  4B EA 48 E5 */	bl xMat3x3Rot__FP7xMat3x3PC5xVec3f
/* 80176FFC 001740DC  38 61 00 58 */	addi r3, r1, 0x58
/* 80177000 001740E0  38 9E 05 9C */	addi r4, r30, 0x59c
/* 80177004 001740E4  7C 65 1B 78 */	mr r5, r3
/* 80177008 001740E8  48 00 50 0D */	bl xMat3x3RMulVec__FP5xVec3PC7xMat3x3PC5xVec3
/* 8017700C 001740EC  38 7C 00 3C */	addi r3, r28, 0x3c
/* 80177010 001740F0  38 81 00 58 */	addi r4, r1, 0x58
/* 80177014 001740F4  4B E9 E4 31 */	bl __apl__5xVec3FRC5xVec3
/* 80177018 001740F8  FC 20 F8 90 */	fmr f1, f31
/* 8017701C 001740FC  80 8D 97 A0 */	lwz r4, "blob_emitter__30@unnamed@zNPCTypeDutchman_cpp@"@sda21(r13)
/* 80177020 00174100  7F C3 F3 78 */	mr r3, r30
/* 80177024 00174104  48 00 49 35 */	bl emit_particles__12zNPCDutchmanCFR11zParEmitterf
/* 80177028 00174108  D3 DC 00 40 */	stfs f30, 0x40(r28)
.L_8017702C:
/* 8017702C 0017410C  E3 E1 00 98 */	psq_l f31, 0x98(r1), 0, qr0
/* 80177030 00174110  CB E1 00 90 */	lfd f31, 0x90(r1)
/* 80177034 00174114  E3 C1 00 88 */	psq_l f30, 0x88(r1), 0, qr0
/* 80177038 00174118  CB C1 00 80 */	lfd f30, 0x80(r1)
/* 8017703C 0017411C  83 E1 00 7C */	lwz r31, 0x7c(r1)
/* 80177040 00174120  83 C1 00 78 */	lwz r30, 0x78(r1)
/* 80177044 00174124  83 A1 00 74 */	lwz r29, 0x74(r1)
/* 80177048 00174128  80 01 00 A4 */	lwz r0, 0xa4(r1)
/* 8017704C 0017412C  83 81 00 70 */	lwz r28, 0x70(r1)
/* 80177050 00174130  7C 08 03 A6 */	mtlr r0
/* 80177054 00174134  38 21 00 A0 */	addi r1, r1, 0xa0
/* 80177058 00174138  4E 80 00 20 */	blr
.endfn add_spray__12zNPCDutchmanFRC5xVec3f

# zNPCDutchman::add_splash(const xVec3&, float)
.fn add_splash__12zNPCDutchmanFRC5xVec3f, global
/* 8017705C 0017413C  4E 80 00 20 */	blr
.endfn add_splash__12zNPCDutchmanFRC5xVec3f

# zNPCDutchman::update_flames(float)
.fn update_flames__12zNPCDutchmanFf, global
/* 80177060 00174140  94 21 FF 60 */	stwu r1, -0xa0(r1)
/* 80177064 00174144  7C 08 02 A6 */	mflr r0
/* 80177068 00174148  90 01 00 A4 */	stw r0, 0xa4(r1)
/* 8017706C 0017414C  DB E1 00 90 */	stfd f31, 0x90(r1)
/* 80177070 00174150  F3 E1 00 98 */	psq_st f31, 0x98(r1), 0, qr0
/* 80177074 00174154  93 E1 00 8C */	stw r31, 0x8c(r1)
/* 80177078 00174158  93 C1 00 88 */	stw r30, 0x88(r1)
/* 8017707C 0017415C  93 A1 00 84 */	stw r29, 0x84(r1)
/* 80177080 00174160  FF E0 08 90 */	fmr f31, f1
/* 80177084 00174164  7C 7D 1B 78 */	mr r29, r3
/* 80177088 00174168  38 7D 05 58 */	addi r3, r29, 0x558
/* 8017708C 0017416C  48 00 46 51 */	bl "begin__40static_queue<Q212zNPCDutchman9wave_data>CFv"
/* 80177090 00174170  3C A0 80 33 */	lis r5, "tweak__30@unnamed@zNPCTypeDutchman_cpp@"@ha
/* 80177094 00174174  90 81 00 34 */	stw r4, 0x34(r1)
/* 80177098 00174178  3B C5 A5 78 */	addi r30, r5, "tweak__30@unnamed@zNPCTypeDutchman_cpp@"@l
/* 8017709C 0017417C  90 61 00 30 */	stw r3, 0x30(r1)
/* 801770A0 00174180  48 00 00 B4 */	b .L_80177154
.L_801770A4:
/* 801770A4 00174184  38 61 00 30 */	addi r3, r1, 0x30
/* 801770A8 00174188  48 00 46 1D */	bl "__ml__Q240static_queue<Q212zNPCDutchman9wave_data>8iteratorCFv"
/* 801770AC 0017418C  FC 20 F8 90 */	fmr f1, f31
/* 801770B0 00174190  7C 7F 1B 78 */	mr r31, r3
/* 801770B4 00174194  7F A3 EB 78 */	mr r3, r29
/* 801770B8 00174198  7F E4 FB 78 */	mr r4, r31
/* 801770BC 0017419C  4B FF EE 61 */	bl update_wave__12zNPCDutchmanFRQ212zNPCDutchman9wave_dataf
/* 801770C0 001741A0  C0 3F 00 1C */	lfs f1, 0x1c(r31)
/* 801770C4 001741A4  C0 1E 00 28 */	lfs f0, 0x28(r30)
/* 801770C8 001741A8  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 801770CC 001741AC  4C 41 13 82 */	cror eq, gt, eq
/* 801770D0 001741B0  40 82 00 7C */	bne .L_8017714C
/* 801770D4 001741B4  80 61 00 30 */	lwz r3, 0x30(r1)
/* 801770D8 001741B8  80 01 00 34 */	lwz r0, 0x34(r1)
/* 801770DC 001741BC  90 61 00 28 */	stw r3, 0x28(r1)
/* 801770E0 001741C0  90 01 00 2C */	stw r0, 0x2c(r1)
/* 801770E4 001741C4  48 00 00 20 */	b .L_80177104
.L_801770E8:
/* 801770E8 001741C8  38 61 00 28 */	addi r3, r1, 0x28
/* 801770EC 001741CC  48 00 45 D9 */	bl "__ml__Q240static_queue<Q212zNPCDutchman9wave_data>8iteratorCFv"
/* 801770F0 001741D0  7C 64 1B 78 */	mr r4, r3
/* 801770F4 001741D4  7F A3 EB 78 */	mr r3, r29
/* 801770F8 001741D8  4B FF F2 05 */	bl kill_wave__12zNPCDutchmanFRQ212zNPCDutchman9wave_data
/* 801770FC 001741DC  38 61 00 28 */	addi r3, r1, 0x28
/* 80177100 001741E0  48 00 45 91 */	bl "__pp__Q240static_queue<Q212zNPCDutchman9wave_data>8iteratorFv"
.L_80177104:
/* 80177104 001741E4  38 7D 05 58 */	addi r3, r29, 0x558
/* 80177108 001741E8  48 00 45 25 */	bl "end__40static_queue<Q212zNPCDutchman9wave_data>CFv"
/* 8017710C 001741EC  90 81 00 1C */	stw r4, 0x1c(r1)
/* 80177110 001741F0  38 81 00 18 */	addi r4, r1, 0x18
/* 80177114 001741F4  90 61 00 18 */	stw r3, 0x18(r1)
/* 80177118 001741F8  38 61 00 28 */	addi r3, r1, 0x28
/* 8017711C 001741FC  48 00 44 F5 */	bl "__ne__Q240static_queue<Q212zNPCDutchman9wave_data>8iteratorCFRCQ240static_queue<Q212zNPCDutchman9wave_data>8iterator"
/* 80177120 00174200  54 60 06 3F */	clrlwi. r0, r3, 24
/* 80177124 00174204  40 82 FF C4 */	bne .L_801770E8
/* 80177128 00174208  38 7D 05 58 */	addi r3, r29, 0x558
/* 8017712C 0017420C  48 00 45 01 */	bl "end__40static_queue<Q212zNPCDutchman9wave_data>CFv"
/* 80177130 00174210  90 81 00 14 */	stw r4, 0x14(r1)
/* 80177134 00174214  38 81 00 30 */	addi r4, r1, 0x30
/* 80177138 00174218  38 A1 00 10 */	addi r5, r1, 0x10
/* 8017713C 0017421C  90 61 00 10 */	stw r3, 0x10(r1)
/* 80177140 00174220  38 7D 05 58 */	addi r3, r29, 0x558
/* 80177144 00174224  48 00 44 59 */	bl "erase__40static_queue<Q212zNPCDutchman9wave_data>FRCQ240static_queue<Q212zNPCDutchman9wave_data>8iteratorRCQ240static_queue<Q212zNPCDutchman9wave_data>8iterator"
/* 80177148 00174228  48 00 00 30 */	b .L_80177178
.L_8017714C:
/* 8017714C 0017422C  38 61 00 30 */	addi r3, r1, 0x30
/* 80177150 00174230  48 00 45 41 */	bl "__pp__Q240static_queue<Q212zNPCDutchman9wave_data>8iteratorFv"
.L_80177154:
/* 80177154 00174234  38 7D 05 58 */	addi r3, r29, 0x558
/* 80177158 00174238  48 00 44 D5 */	bl "end__40static_queue<Q212zNPCDutchman9wave_data>CFv"
/* 8017715C 0017423C  90 81 00 0C */	stw r4, 0xc(r1)
/* 80177160 00174240  38 81 00 08 */	addi r4, r1, 0x8
/* 80177164 00174244  90 61 00 08 */	stw r3, 0x8(r1)
/* 80177168 00174248  38 61 00 30 */	addi r3, r1, 0x30
/* 8017716C 0017424C  48 00 44 A5 */	bl "__ne__Q240static_queue<Q212zNPCDutchman9wave_data>8iteratorCFRCQ240static_queue<Q212zNPCDutchman9wave_data>8iterator"
/* 80177170 00174250  54 60 06 3F */	clrlwi. r0, r3, 24
/* 80177174 00174254  40 82 FF 30 */	bne .L_801770A4
.L_80177178:
/* 80177178 00174258  88 1D 02 B9 */	lbz r0, 0x2b9(r29)
/* 8017717C 0017425C  28 00 00 00 */	cmplwi r0, 0x0
/* 80177180 00174260  41 82 02 28 */	beq .L_801773A8
/* 80177184 00174264  C0 1D 05 70 */	lfs f0, 0x570(r29)
/* 80177188 00174268  7F A3 EB 78 */	mr r3, r29
/* 8017718C 0017426C  EC 00 F8 2A */	fadds f0, f0, f31
/* 80177190 00174270  D0 1D 05 70 */	stfs f0, 0x570(r29)
/* 80177194 00174274  48 00 47 E9 */	bl get_facing__12zNPCDutchmanCFv
/* 80177198 00174278  7C 7F 1B 78 */	mr r31, r3
/* 8017719C 0017427C  7F A4 EB 78 */	mr r4, r29
/* 801771A0 00174280  38 61 00 44 */	addi r3, r1, 0x44
/* 801771A4 00174284  48 00 47 F9 */	bl get_nose_loc__12zNPCDutchmanCFv
/* 801771A8 00174288  80 C1 00 44 */	lwz r6, 0x44(r1)
/* 801771AC 0017428C  FC 20 F8 90 */	fmr f1, f31
/* 801771B0 00174290  80 A1 00 48 */	lwz r5, 0x48(r1)
/* 801771B4 00174294  7F A3 EB 78 */	mr r3, r29
/* 801771B8 00174298  80 01 00 4C */	lwz r0, 0x4c(r1)
/* 801771BC 0017429C  38 81 00 68 */	addi r4, r1, 0x68
/* 801771C0 001742A0  90 C1 00 68 */	stw r6, 0x68(r1)
/* 801771C4 001742A4  90 A1 00 6C */	stw r5, 0x6c(r1)
/* 801771C8 001742A8  90 01 00 70 */	stw r0, 0x70(r1)
/* 801771CC 001742AC  4B FF FB 81 */	bl add_spray__12zNPCDutchmanFRC5xVec3f
/* 801771D0 001742B0  3C 60 80 33 */	lis r3, "tweak__30@unnamed@zNPCTypeDutchman_cpp@"@ha
/* 801771D4 001742B4  3C A0 80 27 */	lis r5, "@2618"@ha
/* 801771D8 001742B8  38 83 A5 78 */	addi r4, r3, "tweak__30@unnamed@zNPCTypeDutchman_cpp@"@l
/* 801771DC 001742BC  C0 3F 00 00 */	lfs f1, 0x0(r31)
/* 801771E0 001742C0  38 E5 20 C0 */	addi r7, r5, "@2618"@l
/* 801771E4 001742C4  C0 84 00 E8 */	lfs f4, 0xe8(r4)
/* 801771E8 001742C8  C0 01 00 68 */	lfs f0, 0x68(r1)
/* 801771EC 001742CC  7F A3 EB 78 */	mr r3, r29
/* 801771F0 001742D0  80 C7 00 00 */	lwz r6, 0x0(r7)
/* 801771F4 001742D4  80 A7 00 04 */	lwz r5, 0x4(r7)
/* 801771F8 001742D8  EC 61 01 3A */	fmadds f3, f1, f4, f0
/* 801771FC 001742DC  80 07 00 08 */	lwz r0, 0x8(r7)
/* 80177200 001742E0  90 C1 00 5C */	stw r6, 0x5c(r1)
/* 80177204 001742E4  C0 3F 00 08 */	lfs f1, 0x8(r31)
/* 80177208 001742E8  C0 01 00 70 */	lfs f0, 0x70(r1)
/* 8017720C 001742EC  90 A1 00 60 */	stw r5, 0x60(r1)
/* 80177210 001742F0  C0 44 00 24 */	lfs f2, 0x24(r4)
/* 80177214 001742F4  EC 01 01 3A */	fmadds f0, f1, f4, f0
/* 80177218 001742F8  90 01 00 64 */	stw r0, 0x64(r1)
/* 8017721C 001742FC  D0 61 00 5C */	stfs f3, 0x5c(r1)
/* 80177220 00174300  D0 41 00 60 */	stfs f2, 0x60(r1)
/* 80177224 00174304  D0 01 00 64 */	stfs f0, 0x64(r1)
/* 80177228 00174308  48 00 47 25 */	bl get_orbit__12zNPCDutchmanCFv
/* 8017722C 0017430C  C0 61 00 5C */	lfs f3, 0x5c(r1)
/* 80177230 00174310  C0 43 00 00 */	lfs f2, 0x0(r3)
/* 80177234 00174314  C0 03 00 08 */	lfs f0, 0x8(r3)
/* 80177238 00174318  38 61 00 20 */	addi r3, r1, 0x20
/* 8017723C 0017431C  C0 21 00 64 */	lfs f1, 0x64(r1)
/* 80177240 00174320  EC 43 10 28 */	fsubs f2, f3, f2
/* 80177244 00174324  80 82 C0 90 */	lwz r4, "@2619"@sda21(r2)
/* 80177248 00174328  80 02 C0 94 */	lwz r0, "@2619"+0x4@sda21(r2)
/* 8017724C 0017432C  EC 01 00 28 */	fsubs f0, f1, f0
/* 80177250 00174330  90 81 00 20 */	stw r4, 0x20(r1)
/* 80177254 00174334  90 01 00 24 */	stw r0, 0x24(r1)
/* 80177258 00174338  D0 41 00 20 */	stfs f2, 0x20(r1)
/* 8017725C 0017433C  D0 01 00 24 */	stfs f0, 0x24(r1)
/* 80177260 00174340  4B E9 E6 FD */	bl length2__5xVec2CFv
/* 80177264 00174344  C0 1E 00 28 */	lfs f0, 0x28(r30)
/* 80177268 00174348  EC 00 00 32 */	fmuls f0, f0, f0
/* 8017726C 0017434C  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80177270 00174350  41 81 01 38 */	bgt .L_801773A8
/* 80177274 00174354  FC 20 F8 90 */	fmr f1, f31
/* 80177278 00174358  7F A3 EB 78 */	mr r3, r29
/* 8017727C 0017435C  38 81 00 5C */	addi r4, r1, 0x5c
/* 80177280 00174360  4B FF F9 55 */	bl add_slime__12zNPCDutchmanFRC5xVec3f
/* 80177284 00174364  FC 20 F8 90 */	fmr f1, f31
/* 80177288 00174368  7F A3 EB 78 */	mr r3, r29
/* 8017728C 0017436C  38 81 00 5C */	addi r4, r1, 0x5c
/* 80177290 00174370  4B FF FD CD */	bl add_splash__12zNPCDutchmanFRC5xVec3f
/* 80177294 00174374  3C 60 80 33 */	lis r3, "tweak__30@unnamed@zNPCTypeDutchman_cpp@"@ha
/* 80177298 00174378  C0 3D 05 70 */	lfs f1, 0x570(r29)
/* 8017729C 0017437C  38 63 A5 78 */	addi r3, r3, "tweak__30@unnamed@zNPCTypeDutchman_cpp@"@l
/* 801772A0 00174380  80 1D 05 74 */	lwz r0, 0x574(r29)
/* 801772A4 00174384  C0 03 00 DC */	lfs f0, 0xdc(r3)
/* 801772A8 00174388  EC 01 00 32 */	fmuls f0, f1, f0
/* 801772AC 0017438C  FC 00 00 1E */	fctiwz f0, f0
/* 801772B0 00174390  D8 01 00 78 */	stfd f0, 0x78(r1)
/* 801772B4 00174394  80 61 00 7C */	lwz r3, 0x7c(r1)
/* 801772B8 00174398  38 63 00 01 */	addi r3, r3, 0x1
/* 801772BC 0017439C  7C 03 00 00 */	cmpw r3, r0
/* 801772C0 001743A0  40 81 00 E8 */	ble .L_801773A8
/* 801772C4 001743A4  90 7D 05 74 */	stw r3, 0x574(r29)
/* 801772C8 001743A8  3C 60 80 27 */	lis r3, "@2624"@ha
/* 801772CC 001743AC  38 83 20 CC */	addi r4, r3, "@2624"@l
/* 801772D0 001743B0  38 7D 05 58 */	addi r3, r29, 0x558
/* 801772D4 001743B4  C0 1F 00 00 */	lfs f0, 0x0(r31)
/* 801772D8 001743B8  80 A4 00 00 */	lwz r5, 0x0(r4)
/* 801772DC 001743BC  80 04 00 08 */	lwz r0, 0x8(r4)
/* 801772E0 001743C0  FC 00 00 50 */	fneg f0, f0
/* 801772E4 001743C4  80 84 00 04 */	lwz r4, 0x4(r4)
/* 801772E8 001743C8  90 01 00 58 */	stw r0, 0x58(r1)
/* 801772EC 001743CC  C0 3F 00 08 */	lfs f1, 0x8(r31)
/* 801772F0 001743D0  90 A1 00 50 */	stw r5, 0x50(r1)
/* 801772F4 001743D4  90 81 00 54 */	stw r4, 0x54(r1)
/* 801772F8 001743D8  D0 21 00 50 */	stfs f1, 0x50(r1)
/* 801772FC 001743DC  D0 01 00 58 */	stfs f0, 0x58(r1)
/* 80177300 001743E0  48 00 42 3D */	bl "full__40static_queue<Q212zNPCDutchman9wave_data>CFv"
/* 80177304 001743E4  54 60 06 3F */	clrlwi. r0, r3, 24
/* 80177308 001743E8  41 82 00 20 */	beq .L_80177328
/* 8017730C 001743EC  38 7D 05 58 */	addi r3, r29, 0x558
/* 80177310 001743F0  48 00 41 3D */	bl "back__40static_queue<Q212zNPCDutchman9wave_data>Fv"
/* 80177314 001743F4  7C 64 1B 78 */	mr r4, r3
/* 80177318 001743F8  7F A3 EB 78 */	mr r3, r29
/* 8017731C 001743FC  4B FF EF E1 */	bl kill_wave__12zNPCDutchmanFRQ212zNPCDutchman9wave_data
/* 80177320 00174400  38 7D 05 58 */	addi r3, r29, 0x558
/* 80177324 00174404  48 00 41 19 */	bl "pop_back__40static_queue<Q212zNPCDutchman9wave_data>Fv"
.L_80177328:
/* 80177328 00174408  38 7D 05 58 */	addi r3, r29, 0x558
/* 8017732C 0017440C  48 00 40 B9 */	bl "push_front__40static_queue<Q212zNPCDutchman9wave_data>Fv"
/* 80177330 00174410  38 7D 05 58 */	addi r3, r29, 0x558
/* 80177334 00174414  48 00 40 81 */	bl "front__40static_queue<Q212zNPCDutchman9wave_data>Fv"
/* 80177338 00174418  7C 64 1B 78 */	mr r4, r3
/* 8017733C 0017441C  7F A3 EB 78 */	mr r3, r29
/* 80177340 00174420  38 A1 00 5C */	addi r5, r1, 0x5c
/* 80177344 00174424  38 C1 00 50 */	addi r6, r1, 0x50
/* 80177348 00174428  4B FF EE ED */	bl init_wave__12zNPCDutchmanFRQ212zNPCDutchman9wave_dataRC5xVec3RC5xVec3
/* 8017734C 0017442C  38 7D 05 58 */	addi r3, r29, 0x558
/* 80177350 00174430  48 00 41 ED */	bl "full__40static_queue<Q212zNPCDutchman9wave_data>CFv"
/* 80177354 00174434  54 60 06 3F */	clrlwi. r0, r3, 24
/* 80177358 00174438  41 82 00 20 */	beq .L_80177378
/* 8017735C 0017443C  38 7D 05 58 */	addi r3, r29, 0x558
/* 80177360 00174440  48 00 40 ED */	bl "back__40static_queue<Q212zNPCDutchman9wave_data>Fv"
/* 80177364 00174444  7C 64 1B 78 */	mr r4, r3
/* 80177368 00174448  7F A3 EB 78 */	mr r3, r29
/* 8017736C 0017444C  4B FF EF 91 */	bl kill_wave__12zNPCDutchmanFRQ212zNPCDutchman9wave_data
/* 80177370 00174450  38 7D 05 58 */	addi r3, r29, 0x558
/* 80177374 00174454  48 00 40 C9 */	bl "pop_back__40static_queue<Q212zNPCDutchman9wave_data>Fv"
.L_80177378:
/* 80177378 00174458  38 7D 05 58 */	addi r3, r29, 0x558
/* 8017737C 0017445C  48 00 40 69 */	bl "push_front__40static_queue<Q212zNPCDutchman9wave_data>Fv"
/* 80177380 00174460  38 61 00 38 */	addi r3, r1, 0x38
/* 80177384 00174464  38 81 00 50 */	addi r4, r1, 0x50
/* 80177388 00174468  4B EE 8B A1 */	bl __mi__5xVec3CFv
/* 8017738C 0017446C  38 7D 05 58 */	addi r3, r29, 0x558
/* 80177390 00174470  48 00 40 25 */	bl "front__40static_queue<Q212zNPCDutchman9wave_data>Fv"
/* 80177394 00174474  7C 64 1B 78 */	mr r4, r3
/* 80177398 00174478  7F A3 EB 78 */	mr r3, r29
/* 8017739C 0017447C  38 A1 00 5C */	addi r5, r1, 0x5c
/* 801773A0 00174480  38 C1 00 38 */	addi r6, r1, 0x38
/* 801773A4 00174484  4B FF EE 91 */	bl init_wave__12zNPCDutchmanFRQ212zNPCDutchman9wave_dataRC5xVec3RC5xVec3
.L_801773A8:
/* 801773A8 00174488  E3 E1 00 98 */	psq_l f31, 0x98(r1), 0, qr0
/* 801773AC 0017448C  80 01 00 A4 */	lwz r0, 0xa4(r1)
/* 801773B0 00174490  CB E1 00 90 */	lfd f31, 0x90(r1)
/* 801773B4 00174494  83 E1 00 8C */	lwz r31, 0x8c(r1)
/* 801773B8 00174498  83 C1 00 88 */	lwz r30, 0x88(r1)
/* 801773BC 0017449C  83 A1 00 84 */	lwz r29, 0x84(r1)
/* 801773C0 001744A0  7C 08 03 A6 */	mtlr r0
/* 801773C4 001744A4  38 21 00 A0 */	addi r1, r1, 0xa0
/* 801773C8 001744A8  4E 80 00 20 */	blr
.endfn update_flames__12zNPCDutchmanFf

# zNPCDutchman::start_fight()
.fn start_fight__12zNPCDutchmanFv, global
/* 801773CC 001744AC  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801773D0 001744B0  7C 08 02 A6 */	mflr r0
/* 801773D4 001744B4  90 01 00 14 */	stw r0, 0x14(r1)
/* 801773D8 001744B8  93 E1 00 0C */	stw r31, 0xc(r1)
/* 801773DC 001744BC  7C 7F 1B 78 */	mr r31, r3
/* 801773E0 001744C0  88 03 02 B5 */	lbz r0, 0x2b5(r3)
/* 801773E4 001744C4  28 00 00 00 */	cmplwi r0, 0x0
/* 801773E8 001744C8  40 82 00 74 */	bne .L_8017745C
/* 801773EC 001744CC  80 1F 02 C4 */	lwz r0, 0x2c4(r31)
/* 801773F0 001744D0  2C 00 00 00 */	cmpwi r0, 0x0
/* 801773F4 001744D4  41 81 00 08 */	bgt .L_801773FC
/* 801773F8 001744D8  48 00 00 64 */	b .L_8017745C
.L_801773FC:
/* 801773FC 001744DC  38 00 00 01 */	li r0, 0x1
/* 80177400 001744E0  3C 60 4E 47 */	lis r3, 0x4e47
/* 80177404 001744E4  98 1F 02 B5 */	stb r0, 0x2b5(r31)
/* 80177408 001744E8  38 83 4D 3E */	addi r4, r3, 0x4d3e
/* 8017740C 001744EC  38 A0 00 01 */	li r5, 0x1
/* 80177410 001744F0  80 7F 02 28 */	lwz r3, 0x228(r31)
/* 80177414 001744F4  4B F9 63 1D */	bl GoalSet__7xPsycheFii
/* 80177418 001744F8  38 60 00 08 */	li r3, 0x8
/* 8017741C 001744FC  4B ED AC E5 */	bl zCameraDisableTracking__F17camera_owner_enum
/* 80177420 00174500  3C 60 80 2A */	lis r3, "boss_cam__30@unnamed@zNPCTypeDutchman_cpp@"@ha
/* 80177424 00174504  3C 80 80 3C */	lis r4, globals@ha
/* 80177428 00174508  38 63 B4 60 */	addi r3, r3, "boss_cam__30@unnamed@zNPCTypeDutchman_cpp@"@l
/* 8017742C 0017450C  38 84 05 58 */	addi r4, r4, globals@l
/* 80177430 00174510  4B E9 6A 85 */	bl start__13xBinaryCameraFR7xCamera
/* 80177434 00174514  3C 60 80 3C */	lis r3, globals@ha
/* 80177438 00174518  3C A0 80 2A */	lis r5, "boss_cam__30@unnamed@zNPCTypeDutchman_cpp@"@ha
/* 8017743C 0017451C  38 63 05 58 */	addi r3, r3, globals@l
/* 80177440 00174520  C0 3F 00 94 */	lfs f1, 0x94(r31)
/* 80177444 00174524  80 83 07 04 */	lwz r4, 0x704(r3)
/* 80177448 00174528  38 65 B4 60 */	addi r3, r5, "boss_cam__30@unnamed@zNPCTypeDutchman_cpp@"@l
/* 8017744C 0017452C  38 BF 00 88 */	addi r5, r31, 0x88
/* 80177450 00174530  80 84 00 4C */	lwz r4, 0x4c(r4)
/* 80177454 00174534  38 84 00 30 */	addi r4, r4, 0x30
/* 80177458 00174538  4B FC F1 29 */	bl set_targets__13xBinaryCameraFRC5xVec3RC5xVec3f
.L_8017745C:
/* 8017745C 0017453C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80177460 00174540  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80177464 00174544  7C 08 03 A6 */	mtlr r0
/* 80177468 00174548  38 21 00 10 */	addi r1, r1, 0x10
/* 8017746C 0017454C  4E 80 00 20 */	blr
.endfn start_fight__12zNPCDutchmanFv

# zNPCDutchman::set_life(int)
.fn set_life__12zNPCDutchmanFi, global
/* 80177470 00174550  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 80177474 00174554  7C 08 02 A6 */	mflr r0
/* 80177478 00174558  38 A0 00 03 */	li r5, 0x3
/* 8017747C 0017455C  90 01 00 24 */	stw r0, 0x24(r1)
/* 80177480 00174560  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 80177484 00174564  93 C1 00 18 */	stw r30, 0x18(r1)
/* 80177488 00174568  93 A1 00 14 */	stw r29, 0x14(r1)
/* 8017748C 0017456C  7C 7D 1B 78 */	mr r29, r3
/* 80177490 00174570  83 E3 02 C4 */	lwz r31, 0x2c4(r3)
/* 80177494 00174574  7C 83 23 78 */	mr r3, r4
/* 80177498 00174578  38 80 00 00 */	li r4, 0x0
/* 8017749C 0017457C  4B FC 5B 99 */	bl "range_limit<i>__Fiii"
/* 801774A0 00174580  90 7D 02 C4 */	stw r3, 0x2c4(r29)
/* 801774A4 00174584  80 1D 02 C4 */	lwz r0, 0x2c4(r29)
/* 801774A8 00174588  7C 00 F8 00 */	cmpw r0, r31
/* 801774AC 0017458C  40 80 00 30 */	bge .L_801774DC
/* 801774B0 00174590  38 00 00 01 */	li r0, 0x1
/* 801774B4 00174594  98 1D 02 B8 */	stb r0, 0x2b8(r29)
/* 801774B8 00174598  83 DD 02 C4 */	lwz r30, 0x2c4(r29)
/* 801774BC 0017459C  48 00 00 18 */	b .L_801774D4
.L_801774C0:
/* 801774C0 001745A0  7F A3 EB 78 */	mr r3, r29
/* 801774C4 001745A4  7F A4 EB 78 */	mr r4, r29
/* 801774C8 001745A8  38 A0 01 D7 */	li r5, 0x1d7
/* 801774CC 001745AC  4B EA 82 15 */	bl zEntEvent__FP5xBaseP5xBaseUi
/* 801774D0 001745B0  3B DE 00 01 */	addi r30, r30, 0x1
.L_801774D4:
/* 801774D4 001745B4  7C 1E F8 00 */	cmpw r30, r31
/* 801774D8 001745B8  41 80 FF E8 */	blt .L_801774C0
.L_801774DC:
/* 801774DC 001745BC  80 01 00 24 */	lwz r0, 0x24(r1)
/* 801774E0 001745C0  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 801774E4 001745C4  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 801774E8 001745C8  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 801774EC 001745CC  7C 08 03 A6 */	mtlr r0
/* 801774F0 001745D0  38 21 00 20 */	addi r1, r1, 0x20
/* 801774F4 001745D4  4E 80 00 20 */	blr
.endfn set_life__12zNPCDutchmanFi

# zNPCDutchman::start_beam()
.fn start_beam__12zNPCDutchmanFv, global
/* 801774F8 001745D8  88 03 02 B6 */	lbz r0, 0x2b6(r3)
/* 801774FC 001745DC  28 00 00 00 */	cmplwi r0, 0x0
/* 80177500 001745E0  4C 82 00 20 */	bnelr
/* 80177504 001745E4  38 80 00 01 */	li r4, 0x1
/* 80177508 001745E8  38 00 00 00 */	li r0, 0x0
/* 8017750C 001745EC  98 83 02 B6 */	stb r4, 0x2b6(r3)
/* 80177510 001745F0  98 03 02 B7 */	stb r0, 0x2b7(r3)
/* 80177514 001745F4  90 03 05 4C */	stw r0, 0x54c(r3)
/* 80177518 001745F8  90 03 04 30 */	stw r0, 0x430(r3)
/* 8017751C 001745FC  4E 80 00 20 */	blr
.endfn start_beam__12zNPCDutchmanFv

# zNPCDutchman::stop_beam()
.fn stop_beam__12zNPCDutchmanFv, global
/* 80177520 00174600  38 00 00 00 */	li r0, 0x0
/* 80177524 00174604  98 03 02 B6 */	stb r0, 0x2b6(r3)
/* 80177528 00174608  4E 80 00 20 */	blr
.endfn stop_beam__12zNPCDutchmanFv

# zNPCDutchman::set_alpha(float)
.fn set_alpha__12zNPCDutchmanFf, global
/* 8017752C 0017460C  D0 23 02 D4 */	stfs f1, 0x2d4(r3)
/* 80177530 00174610  3C 80 80 33 */	lis r4, "tweak__30@unnamed@zNPCTypeDutchman_cpp@"@ha
/* 80177534 00174614  38 84 A5 78 */	addi r4, r4, "tweak__30@unnamed@zNPCTypeDutchman_cpp@"@l
/* 80177538 00174618  C0 04 00 2C */	lfs f0, 0x2c(r4)
/* 8017753C 0017461C  80 63 00 24 */	lwz r3, 0x24(r3)
/* 80177540 00174620  EC 21 00 32 */	fmuls f1, f1, f0
/* 80177544 00174624  48 00 00 34 */	b .L_80177578
.L_80177548:
/* 80177548 00174628  C0 02 AC BC */	lfs f0, "@1606"@sda21(r2)
/* 8017754C 0017462C  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80177550 00174630  40 80 00 14 */	bge .L_80177564
/* 80177554 00174634  A0 03 00 44 */	lhz r0, 0x44(r3)
/* 80177558 00174638  60 00 40 00 */	ori r0, r0, 0x4000
/* 8017755C 0017463C  B0 03 00 44 */	sth r0, 0x44(r3)
/* 80177560 00174640  48 00 00 10 */	b .L_80177570
.L_80177564:
/* 80177564 00174644  A0 03 00 44 */	lhz r0, 0x44(r3)
/* 80177568 00174648  70 00 BF FF */	andi. r0, r0, 0xbfff
/* 8017756C 0017464C  B0 03 00 44 */	sth r0, 0x44(r3)
.L_80177570:
/* 80177570 00174650  D0 23 00 24 */	stfs f1, 0x24(r3)
/* 80177574 00174654  80 63 00 00 */	lwz r3, 0x0(r3)
.L_80177578:
/* 80177578 00174658  28 03 00 00 */	cmplwi r3, 0x0
/* 8017757C 0017465C  40 82 FF CC */	bne .L_80177548
/* 80177580 00174660  4E 80 00 20 */	blr
.endfn set_alpha__12zNPCDutchmanFf

# zNPCDutchman::start_flames()
.fn start_flames__12zNPCDutchmanFv, global
/* 80177584 00174664  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80177588 00174668  7C 08 02 A6 */	mflr r0
/* 8017758C 0017466C  38 80 00 01 */	li r4, 0x1
/* 80177590 00174670  7C 65 1B 78 */	mr r5, r3
/* 80177594 00174674  90 01 00 14 */	stw r0, 0x14(r1)
/* 80177598 00174678  38 00 00 00 */	li r0, 0x0
/* 8017759C 0017467C  98 83 02 B9 */	stb r4, 0x2b9(r3)
/* 801775A0 00174680  38 65 06 00 */	addi r3, r5, 0x600
/* 801775A4 00174684  C0 02 AC B8 */	lfs f0, "@1605"@sda21(r2)
/* 801775A8 00174688  D0 05 05 70 */	stfs f0, 0x570(r5)
/* 801775AC 0017468C  90 05 05 74 */	stw r0, 0x574(r5)
/* 801775B0 00174690  98 85 05 88 */	stb r4, 0x588(r5)
/* 801775B4 00174694  98 85 05 78 */	stb r4, 0x578(r5)
/* 801775B8 00174698  48 00 3A 9D */	bl "clear__43static_queue<Q212zNPCDutchman11slime_slice>Fv"
/* 801775BC 0017469C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801775C0 001746A0  7C 08 03 A6 */	mtlr r0
/* 801775C4 001746A4  38 21 00 10 */	addi r1, r1, 0x10
/* 801775C8 001746A8  4E 80 00 20 */	blr
.endfn start_flames__12zNPCDutchmanFv

# zNPCDutchman::stop_flames()
.fn stop_flames__12zNPCDutchmanFv, global
/* 801775CC 001746AC  38 00 00 00 */	li r0, 0x0
/* 801775D0 001746B0  98 03 02 B9 */	stb r0, 0x2b9(r3)
/* 801775D4 001746B4  4E 80 00 20 */	blr
.endfn stop_flames__12zNPCDutchmanFv

# zNPCDutchman::check_player_damage()
.fn check_player_damage__12zNPCDutchmanFv, global
/* 801775D8 001746B8  94 21 FE 90 */	stwu r1, -0x170(r1)
/* 801775DC 001746BC  7C 08 02 A6 */	mflr r0
/* 801775E0 001746C0  3C 80 80 3C */	lis r4, globals@ha
/* 801775E4 001746C4  90 01 01 74 */	stw r0, 0x174(r1)
/* 801775E8 001746C8  BF 01 01 50 */	stmw r24, 0x150(r1)
/* 801775EC 001746CC  7C 7E 1B 78 */	mr r30, r3
/* 801775F0 001746D0  38 64 05 58 */	addi r3, r4, globals@l
/* 801775F4 001746D4  80 03 1A FC */	lwz r0, 0x1afc(r3)
/* 801775F8 001746D8  2C 00 00 00 */	cmpwi r0, 0x0
/* 801775FC 001746DC  41 82 00 0C */	beq .L_80177608
/* 80177600 001746E0  38 60 00 00 */	li r3, 0x0
/* 80177604 001746E4  48 00 03 34 */	b .L_80177938
.L_80177608:
/* 80177608 001746E8  88 1E 02 B6 */	lbz r0, 0x2b6(r30)
/* 8017760C 001746EC  3B E3 07 68 */	addi r31, r3, 0x768
/* 80177610 001746F0  28 00 00 00 */	cmplwi r0, 0x0
/* 80177614 001746F4  41 82 00 90 */	beq .L_801776A4
/* 80177618 001746F8  3C 60 80 33 */	lis r3, "tweak__30@unnamed@zNPCTypeDutchman_cpp@"@ha
/* 8017761C 001746FC  7F DB F3 78 */	mr r27, r30
/* 80177620 00174700  3B 83 A5 78 */	addi r28, r3, "tweak__30@unnamed@zNPCTypeDutchman_cpp@"@l
/* 80177624 00174704  3B 40 00 00 */	li r26, 0x0
.L_80177628:
/* 80177628 00174708  3B 3B 03 20 */	addi r25, r27, 0x320
/* 8017762C 0017470C  3B 00 00 00 */	li r24, 0x0
/* 80177630 00174710  7F 3D CB 78 */	mr r29, r25
/* 80177634 00174714  48 00 00 54 */	b .L_80177688
.L_80177638:
/* 80177638 00174718  C0 3C 01 48 */	lfs f1, 0x148(r28)
/* 8017763C 0017471C  7F E3 FB 78 */	mr r3, r31
/* 80177640 00174720  38 99 00 04 */	addi r4, r25, 0x4
/* 80177644 00174724  38 BD 00 14 */	addi r5, r29, 0x14
/* 80177648 00174728  48 00 4A 31 */	bl xSphereHitsCapsule__FRC7xSphereRC5xVec3RC5xVec3f
/* 8017764C 0017472C  54 60 06 3F */	clrlwi. r0, r3, 24
/* 80177650 00174730  41 82 00 0C */	beq .L_8017765C
/* 80177654 00174734  38 60 00 01 */	li r3, 0x1
/* 80177658 00174738  48 00 02 E0 */	b .L_80177938
.L_8017765C:
/* 8017765C 0017473C  C0 3F 00 0C */	lfs f1, 0xc(r31)
/* 80177660 00174740  7F E3 FB 78 */	mr r3, r31
/* 80177664 00174744  C0 5C 01 4C */	lfs f2, 0x14c(r28)
/* 80177668 00174748  38 9D 00 14 */	addi r4, r29, 0x14
/* 8017766C 0017474C  4B E9 E2 19 */	bl xSphereHitsSphere__FRC5xVec3fRC5xVec3f
/* 80177670 00174750  54 60 06 3F */	clrlwi. r0, r3, 24
/* 80177674 00174754  41 82 00 0C */	beq .L_80177680
/* 80177678 00174758  38 60 00 01 */	li r3, 0x1
/* 8017767C 0017475C  48 00 02 BC */	b .L_80177938
.L_80177680:
/* 80177680 00174760  3B BD 00 10 */	addi r29, r29, 0x10
/* 80177684 00174764  3B 18 00 01 */	addi r24, r24, 0x1
.L_80177688:
/* 80177688 00174768  80 19 01 10 */	lwz r0, 0x110(r25)
/* 8017768C 0017476C  7C 18 00 40 */	cmplw r24, r0
/* 80177690 00174770  41 80 FF A8 */	blt .L_80177638
/* 80177694 00174774  3B 5A 00 01 */	addi r26, r26, 0x1
/* 80177698 00174778  3B 7B 01 1C */	addi r27, r27, 0x11c
/* 8017769C 0017477C  2C 1A 00 02 */	cmpwi r26, 0x2
/* 801776A0 00174780  41 80 FF 88 */	blt .L_80177628
.L_801776A4:
/* 801776A4 00174784  38 7E 05 58 */	addi r3, r30, 0x558
/* 801776A8 00174788  48 00 40 35 */	bl "begin__40static_queue<Q212zNPCDutchman9wave_data>CFv"
/* 801776AC 0017478C  3C A0 80 33 */	lis r5, "tweak__30@unnamed@zNPCTypeDutchman_cpp@"@ha
/* 801776B0 00174790  90 81 00 14 */	stw r4, 0x14(r1)
/* 801776B4 00174794  3B 85 A5 78 */	addi r28, r5, "tweak__30@unnamed@zNPCTypeDutchman_cpp@"@l
/* 801776B8 00174798  3B 61 01 34 */	addi r27, r1, 0x134
/* 801776BC 0017479C  90 61 00 10 */	stw r3, 0x10(r1)
/* 801776C0 001747A0  48 00 00 C4 */	b .L_80177784
.L_801776C4:
/* 801776C4 001747A4  38 61 00 10 */	addi r3, r1, 0x10
/* 801776C8 001747A8  48 00 3F FD */	bl "__ml__Q240static_queue<Q212zNPCDutchman9wave_data>8iteratorCFv"
/* 801776CC 001747AC  7C 7D 1B 78 */	mr r29, r3
/* 801776D0 001747B0  C0 1C 01 58 */	lfs f0, 0x158(r28)
/* 801776D4 001747B4  C0 43 00 1C */	lfs f2, 0x1c(r3)
/* 801776D8 001747B8  38 61 01 04 */	addi r3, r1, 0x104
/* 801776DC 001747BC  C0 3E 05 98 */	lfs f1, 0x598(r30)
/* 801776E0 001747C0  FC 00 00 50 */	fneg f0, f0
/* 801776E4 001747C4  C0 9C 01 14 */	lfs f4, 0x114(r28)
/* 801776E8 001747C8  38 9D 00 10 */	addi r4, r29, 0x10
/* 801776EC 001747CC  EC A2 00 72 */	fmuls f5, f2, f1
/* 801776F0 001747D0  C0 22 AC BC */	lfs f1, "@1606"@sda21(r2)
/* 801776F4 001747D4  C0 62 AC C0 */	lfs f3, "@1632"@sda21(r2)
/* 801776F8 001747D8  C0 5C 01 50 */	lfs f2, 0x150(r28)
/* 801776FC 001747DC  EC 85 09 3C */	fnmsubs f4, f5, f4, f1
/* 80177700 001747E0  C0 3C 01 54 */	lfs f1, 0x154(r28)
/* 80177704 001747E4  EC 63 00 B2 */	fmuls f3, f3, f2
/* 80177708 001747E8  EC 21 01 32 */	fmuls f1, f1, f4
/* 8017770C 001747EC  FC 40 18 50 */	fneg f2, f3
/* 80177710 001747F0  D0 61 00 6C */	stfs f3, 0x6c(r1)
/* 80177714 001747F4  D0 21 00 70 */	stfs f1, 0x70(r1)
/* 80177718 001747F8  D0 41 00 78 */	stfs f2, 0x78(r1)
/* 8017771C 001747FC  C0 22 AC B8 */	lfs f1, "@1605"@sda21(r2)
/* 80177720 00174800  D0 21 00 7C */	stfs f1, 0x7c(r1)
/* 80177724 00174804  D0 21 00 74 */	stfs f1, 0x74(r1)
/* 80177728 00174808  D0 01 00 80 */	stfs f0, 0x80(r1)
/* 8017772C 0017480C  4B FF AF 39 */	bl "look_at__30@unnamed@zNPCTypeDutchman_cpp@FR7xMat3x3RC5xVec3"
/* 80177730 00174810  C0 3D 00 1C */	lfs f1, 0x1c(r29)
/* 80177734 00174814  38 61 00 24 */	addi r3, r1, 0x24
/* 80177738 00174818  38 9D 00 10 */	addi r4, r29, 0x10
/* 8017773C 0017481C  4B E9 39 E5 */	bl __ml__5xVec3CFf
/* 80177740 00174820  38 61 00 30 */	addi r3, r1, 0x30
/* 80177744 00174824  38 9D 00 04 */	addi r4, r29, 0x4
/* 80177748 00174828  38 A1 00 24 */	addi r5, r1, 0x24
/* 8017774C 0017482C  4B E9 DC 95 */	bl __pl__5xVec3CFRC5xVec3
/* 80177750 00174830  7F 63 DB 78 */	mr r3, r27
/* 80177754 00174834  38 81 00 30 */	addi r4, r1, 0x30
/* 80177758 00174838  4B E9 3B 0D */	bl __as__5xVec3FRC5xVec3
/* 8017775C 0017483C  7F E3 FB 78 */	mr r3, r31
/* 80177760 00174840  38 81 00 6C */	addi r4, r1, 0x6c
/* 80177764 00174844  38 A1 01 04 */	addi r5, r1, 0x104
/* 80177768 00174848  4B E9 DF C5 */	bl xSphereHitsOBB__FRC7xSphereRC4xBoxRC7xMat4x3
/* 8017776C 0017484C  54 60 06 3F */	clrlwi. r0, r3, 24
/* 80177770 00174850  41 82 00 0C */	beq .L_8017777C
/* 80177774 00174854  38 60 00 01 */	li r3, 0x1
/* 80177778 00174858  48 00 01 C0 */	b .L_80177938
.L_8017777C:
/* 8017777C 0017485C  38 61 00 10 */	addi r3, r1, 0x10
/* 80177780 00174860  48 00 3F 11 */	bl "__pp__Q240static_queue<Q212zNPCDutchman9wave_data>8iteratorFv"
.L_80177784:
/* 80177784 00174864  38 7E 05 58 */	addi r3, r30, 0x558
/* 80177788 00174868  48 00 3E A5 */	bl "end__40static_queue<Q212zNPCDutchman9wave_data>CFv"
/* 8017778C 0017486C  90 81 00 0C */	stw r4, 0xc(r1)
/* 80177790 00174870  38 81 00 08 */	addi r4, r1, 0x8
/* 80177794 00174874  90 61 00 08 */	stw r3, 0x8(r1)
/* 80177798 00174878  38 61 00 10 */	addi r3, r1, 0x10
/* 8017779C 0017487C  48 00 3E 75 */	bl "__ne__Q240static_queue<Q212zNPCDutchman9wave_data>8iteratorCFRCQ240static_queue<Q212zNPCDutchman9wave_data>8iterator"
/* 801777A0 00174880  54 60 06 3F */	clrlwi. r0, r3, 24
/* 801777A4 00174884  40 82 FF 20 */	bne .L_801776C4
/* 801777A8 00174888  88 1E 02 BB */	lbz r0, 0x2bb(r30)
/* 801777AC 0017488C  28 00 00 00 */	cmplwi r0, 0x0
/* 801777B0 00174890  41 82 00 48 */	beq .L_801777F8
/* 801777B4 00174894  3C 60 80 33 */	lis r3, "tweak__30@unnamed@zNPCTypeDutchman_cpp@"@ha
/* 801777B8 00174898  7F DB F3 78 */	mr r27, r30
/* 801777BC 0017489C  3B A3 A5 78 */	addi r29, r3, "tweak__30@unnamed@zNPCTypeDutchman_cpp@"@l
/* 801777C0 001748A0  3B 00 00 00 */	li r24, 0x0
.L_801777C4:
/* 801777C4 001748A4  C0 3F 00 0C */	lfs f1, 0xc(r31)
/* 801777C8 001748A8  7F E3 FB 78 */	mr r3, r31
/* 801777CC 001748AC  C0 5D 01 68 */	lfs f2, 0x168(r29)
/* 801777D0 001748B0  38 9B 05 CC */	addi r4, r27, 0x5cc
/* 801777D4 001748B4  4B E9 E0 B1 */	bl xSphereHitsSphere__FRC5xVec3fRC5xVec3f
/* 801777D8 001748B8  54 60 06 3F */	clrlwi. r0, r3, 24
/* 801777DC 001748BC  41 82 00 0C */	beq .L_801777E8
/* 801777E0 001748C0  38 60 00 01 */	li r3, 0x1
/* 801777E4 001748C4  48 00 01 54 */	b .L_80177938
.L_801777E8:
/* 801777E8 001748C8  3B 18 00 01 */	addi r24, r24, 0x1
/* 801777EC 001748CC  3B 7B 00 0C */	addi r27, r27, 0xc
/* 801777F0 001748D0  2C 18 00 02 */	cmpwi r24, 0x2
/* 801777F4 001748D4  41 80 FF D0 */	blt .L_801777C4
.L_801777F8:
/* 801777F8 001748D8  88 1E 02 B9 */	lbz r0, 0x2b9(r30)
/* 801777FC 001748DC  28 00 00 00 */	cmplwi r0, 0x0
/* 80177800 001748E0  41 82 00 9C */	beq .L_8017789C
/* 80177804 001748E4  3C 60 80 33 */	lis r3, "tweak__30@unnamed@zNPCTypeDutchman_cpp@"@ha
/* 80177808 001748E8  C0 42 AC C0 */	lfs f2, "@1632"@sda21(r2)
/* 8017780C 001748EC  38 83 A5 78 */	addi r4, r3, "tweak__30@unnamed@zNPCTypeDutchman_cpp@"@l
/* 80177810 001748F0  7F C3 F3 78 */	mr r3, r30
/* 80177814 001748F4  C0 04 01 5C */	lfs f0, 0x15c(r4)
/* 80177818 001748F8  C0 24 01 60 */	lfs f1, 0x160(r4)
/* 8017781C 001748FC  EC 42 00 32 */	fmuls f2, f2, f0
/* 80177820 00174900  C0 04 01 64 */	lfs f0, 0x164(r4)
/* 80177824 00174904  D0 21 00 58 */	stfs f1, 0x58(r1)
/* 80177828 00174908  FC 20 10 50 */	fneg f1, f2
/* 8017782C 0017490C  D0 41 00 54 */	stfs f2, 0x54(r1)
/* 80177830 00174910  D0 21 00 60 */	stfs f1, 0x60(r1)
/* 80177834 00174914  C0 22 AC B8 */	lfs f1, "@1605"@sda21(r2)
/* 80177838 00174918  D0 21 00 64 */	stfs f1, 0x64(r1)
/* 8017783C 0017491C  D0 01 00 5C */	stfs f0, 0x5c(r1)
/* 80177840 00174920  D0 21 00 68 */	stfs f1, 0x68(r1)
/* 80177844 00174924  48 00 41 39 */	bl get_facing__12zNPCDutchmanCFv
/* 80177848 00174928  7C 64 1B 78 */	mr r4, r3
/* 8017784C 0017492C  38 61 00 C4 */	addi r3, r1, 0xc4
/* 80177850 00174930  4B FF AE 15 */	bl "look_at__30@unnamed@zNPCTypeDutchman_cpp@FR7xMat3x3RC5xVec3"
/* 80177854 00174934  7F C4 F3 78 */	mr r4, r30
/* 80177858 00174938  38 61 00 18 */	addi r3, r1, 0x18
/* 8017785C 0017493C  48 00 41 41 */	bl get_nose_loc__12zNPCDutchmanCFv
/* 80177860 00174940  38 61 00 F4 */	addi r3, r1, 0xf4
/* 80177864 00174944  38 81 00 18 */	addi r4, r1, 0x18
/* 80177868 00174948  4B E9 39 FD */	bl __as__5xVec3FRC5xVec3
/* 8017786C 0017494C  3C 80 80 33 */	lis r4, "tweak__30@unnamed@zNPCTypeDutchman_cpp@"@ha
/* 80177870 00174950  7F E3 FB 78 */	mr r3, r31
/* 80177874 00174954  38 A4 A5 78 */	addi r5, r4, "tweak__30@unnamed@zNPCTypeDutchman_cpp@"@l
/* 80177878 00174958  38 81 00 54 */	addi r4, r1, 0x54
/* 8017787C 0017495C  C0 05 00 24 */	lfs f0, 0x24(r5)
/* 80177880 00174960  38 A1 00 C4 */	addi r5, r1, 0xc4
/* 80177884 00174964  D0 01 00 F8 */	stfs f0, 0xf8(r1)
/* 80177888 00174968  4B E9 DE A5 */	bl xSphereHitsOBB__FRC7xSphereRC4xBoxRC7xMat4x3
/* 8017788C 0017496C  54 60 06 3F */	clrlwi. r0, r3, 24
/* 80177890 00174970  41 82 00 0C */	beq .L_8017789C
/* 80177894 00174974  38 60 00 01 */	li r3, 0x1
/* 80177898 00174978  48 00 00 A0 */	b .L_80177938
.L_8017789C:
/* 8017789C 0017497C  38 7E 06 00 */	addi r3, r30, 0x600
/* 801778A0 00174980  48 00 3A 69 */	bl "size__43static_queue<Q212zNPCDutchman11slime_slice>CFv"
/* 801778A4 00174984  28 03 00 01 */	cmplwi r3, 0x1
/* 801778A8 00174988  40 81 00 8C */	ble .L_80177934
/* 801778AC 0017498C  3C 60 80 33 */	lis r3, "tweak__30@unnamed@zNPCTypeDutchman_cpp@"@ha
/* 801778B0 00174990  C0 22 AC C0 */	lfs f1, "@1632"@sda21(r2)
/* 801778B4 00174994  38 83 A5 78 */	addi r4, r3, "tweak__30@unnamed@zNPCTypeDutchman_cpp@"@l
/* 801778B8 00174998  38 7E 06 00 */	addi r3, r30, 0x600
/* 801778BC 0017499C  C0 04 01 6C */	lfs f0, 0x16c(r4)
/* 801778C0 001749A0  EC 21 00 32 */	fmuls f1, f1, f0
/* 801778C4 001749A4  FC 00 08 50 */	fneg f0, f1
/* 801778C8 001749A8  D0 21 00 3C */	stfs f1, 0x3c(r1)
/* 801778CC 001749AC  D0 01 00 48 */	stfs f0, 0x48(r1)
/* 801778D0 001749B0  C0 02 AC EC */	lfs f0, "@1977"@sda21(r2)
/* 801778D4 001749B4  D0 01 00 40 */	stfs f0, 0x40(r1)
/* 801778D8 001749B8  C0 02 AC B8 */	lfs f0, "@1605"@sda21(r2)
/* 801778DC 001749BC  D0 01 00 4C */	stfs f0, 0x4c(r1)
/* 801778E0 001749C0  48 00 3A 31 */	bl "front__43static_queue<Q212zNPCDutchman11slime_slice>Fv"
/* 801778E4 001749C4  C0 03 00 04 */	lfs f0, 0x4(r3)
/* 801778E8 001749C8  38 7E 06 00 */	addi r3, r30, 0x600
/* 801778EC 001749CC  D0 01 00 44 */	stfs f0, 0x44(r1)
/* 801778F0 001749D0  48 00 3E 11 */	bl "back__43static_queue<Q212zNPCDutchman11slime_slice>Fv"
/* 801778F4 001749D4  C0 03 00 04 */	lfs f0, 0x4(r3)
/* 801778F8 001749D8  38 61 00 84 */	addi r3, r1, 0x84
/* 801778FC 001749DC  38 9E 06 20 */	addi r4, r30, 0x620
/* 80177900 001749E0  D0 01 00 50 */	stfs f0, 0x50(r1)
/* 80177904 001749E4  4B FF AD 61 */	bl "look_at__30@unnamed@zNPCTypeDutchman_cpp@FR7xMat3x3RC5xVec3"
/* 80177908 001749E8  38 61 00 B4 */	addi r3, r1, 0xb4
/* 8017790C 001749EC  38 9E 06 14 */	addi r4, r30, 0x614
/* 80177910 001749F0  4B E9 39 55 */	bl __as__5xVec3FRC5xVec3
/* 80177914 001749F4  7F E3 FB 78 */	mr r3, r31
/* 80177918 001749F8  38 81 00 3C */	addi r4, r1, 0x3c
/* 8017791C 001749FC  38 A1 00 84 */	addi r5, r1, 0x84
/* 80177920 00174A00  4B E9 DE 0D */	bl xSphereHitsOBB__FRC7xSphereRC4xBoxRC7xMat4x3
/* 80177924 00174A04  54 60 06 3F */	clrlwi. r0, r3, 24
/* 80177928 00174A08  41 82 00 0C */	beq .L_80177934
/* 8017792C 00174A0C  38 60 00 01 */	li r3, 0x1
/* 80177930 00174A10  48 00 00 08 */	b .L_80177938
.L_80177934:
/* 80177934 00174A14  38 60 00 00 */	li r3, 0x0
.L_80177938:
/* 80177938 00174A18  BB 01 01 50 */	lmw r24, 0x150(r1)
/* 8017793C 00174A1C  80 01 01 74 */	lwz r0, 0x174(r1)
/* 80177940 00174A20  7C 08 03 A6 */	mtlr r0
/* 80177944 00174A24  38 21 01 70 */	addi r1, r1, 0x170
/* 80177948 00174A28  4E 80 00 20 */	blr
.endfn check_player_damage__12zNPCDutchmanFv

# zNPCDutchman::get_eye_loc(int) const
.fn get_eye_loc__12zNPCDutchmanCFi, global
/* 8017794C 00174A2C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80177950 00174A30  7C 08 02 A6 */	mflr r0
/* 80177954 00174A34  80 84 00 24 */	lwz r4, 0x24(r4)
/* 80177958 00174A38  90 01 00 14 */	stw r0, 0x14(r1)
/* 8017795C 00174A3C  54 A0 10 3A */	slwi r0, r5, 2
/* 80177960 00174A40  38 A2 AD A4 */	addi r5, r2, lookup$2945@sda21
/* 80177964 00174A44  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80177968 00174A48  7C 7F 1B 78 */	mr r31, r3
/* 8017796C 00174A4C  7C A5 00 2E */	lwzx r5, r5, r0
/* 80177970 00174A50  4B EB D6 09 */	bl xModelGetBoneLocation__FRC14xModelInstanceUl
/* 80177974 00174A54  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80177978 00174A58  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8017797C 00174A5C  7C 08 03 A6 */	mtlr r0
/* 80177980 00174A60  38 21 00 10 */	addi r1, r1, 0x10
/* 80177984 00174A64  4E 80 00 20 */	blr
.endfn get_eye_loc__12zNPCDutchmanCFi

# zNPCDutchman::get_hand_loc(int) const
.fn get_hand_loc__12zNPCDutchmanCFi, global
/* 80177988 00174A68  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8017798C 00174A6C  7C 08 02 A6 */	mflr r0
/* 80177990 00174A70  80 84 00 24 */	lwz r4, 0x24(r4)
/* 80177994 00174A74  90 01 00 14 */	stw r0, 0x14(r1)
/* 80177998 00174A78  54 A0 10 3A */	slwi r0, r5, 2
/* 8017799C 00174A7C  38 A2 AD AC */	addi r5, r2, lookup$2951@sda21
/* 801779A0 00174A80  93 E1 00 0C */	stw r31, 0xc(r1)
/* 801779A4 00174A84  7C 7F 1B 78 */	mr r31, r3
/* 801779A8 00174A88  7C A5 00 2E */	lwzx r5, r5, r0
/* 801779AC 00174A8C  4B EB D5 CD */	bl xModelGetBoneLocation__FRC14xModelInstanceUl
/* 801779B0 00174A90  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801779B4 00174A94  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 801779B8 00174A98  7C 08 03 A6 */	mtlr r0
/* 801779BC 00174A9C  38 21 00 10 */	addi r1, r1, 0x10
/* 801779C0 00174AA0  4E 80 00 20 */	blr
.endfn get_hand_loc__12zNPCDutchmanCFi

# zNPCDutchman::get_splash_loc() const
.fn get_splash_loc__12zNPCDutchmanCFv, global
/* 801779C4 00174AA4  94 21 FF C0 */	stwu r1, -0x40(r1)
/* 801779C8 00174AA8  7C 08 02 A6 */	mflr r0
/* 801779CC 00174AAC  90 01 00 44 */	stw r0, 0x44(r1)
/* 801779D0 00174AB0  93 E1 00 3C */	stw r31, 0x3c(r1)
/* 801779D4 00174AB4  93 C1 00 38 */	stw r30, 0x38(r1)
/* 801779D8 00174AB8  7C 9E 23 78 */	mr r30, r4
/* 801779DC 00174ABC  93 A1 00 34 */	stw r29, 0x34(r1)
/* 801779E0 00174AC0  7C 7D 1B 78 */	mr r29, r3
/* 801779E4 00174AC4  7F C3 F3 78 */	mr r3, r30
/* 801779E8 00174AC8  48 00 3F 95 */	bl get_facing__12zNPCDutchmanCFv
/* 801779EC 00174ACC  7C 7F 1B 78 */	mr r31, r3
/* 801779F0 00174AD0  7F C4 F3 78 */	mr r4, r30
/* 801779F4 00174AD4  38 61 00 08 */	addi r3, r1, 0x8
/* 801779F8 00174AD8  48 00 3F A5 */	bl get_nose_loc__12zNPCDutchmanCFv
/* 801779FC 00174ADC  80 01 00 08 */	lwz r0, 0x8(r1)
/* 80177A00 00174AE0  3C 60 80 33 */	lis r3, "tweak__30@unnamed@zNPCTypeDutchman_cpp@"@ha
/* 80177A04 00174AE4  38 63 A5 78 */	addi r3, r3, "tweak__30@unnamed@zNPCTypeDutchman_cpp@"@l
/* 80177A08 00174AE8  3C 80 80 27 */	lis r4, "@2957"@ha
/* 80177A0C 00174AEC  90 01 00 20 */	stw r0, 0x20(r1)
/* 80177A10 00174AF0  80 01 00 10 */	lwz r0, 0x10(r1)
/* 80177A14 00174AF4  C0 3F 00 00 */	lfs f1, 0x0(r31)
/* 80177A18 00174AF8  84 A4 20 D8 */	lwzu r5, "@2957"@l(r4)
/* 80177A1C 00174AFC  90 01 00 28 */	stw r0, 0x28(r1)
/* 80177A20 00174B00  80 04 00 04 */	lwz r0, 0x4(r4)
/* 80177A24 00174B04  C0 63 00 E8 */	lfs f3, 0xe8(r3)
/* 80177A28 00174B08  C0 01 00 20 */	lfs f0, 0x20(r1)
/* 80177A2C 00174B0C  80 84 00 08 */	lwz r4, 0x8(r4)
/* 80177A30 00174B10  EC 41 00 FA */	fmadds f2, f1, f3, f0
/* 80177A34 00174B14  90 A1 00 14 */	stw r5, 0x14(r1)
/* 80177A38 00174B18  80 C1 00 0C */	lwz r6, 0xc(r1)
/* 80177A3C 00174B1C  C0 3F 00 08 */	lfs f1, 0x8(r31)
/* 80177A40 00174B20  C0 01 00 28 */	lfs f0, 0x28(r1)
/* 80177A44 00174B24  D0 41 00 14 */	stfs f2, 0x14(r1)
/* 80177A48 00174B28  C0 43 00 24 */	lfs f2, 0x24(r3)
/* 80177A4C 00174B2C  EC 01 00 FA */	fmadds f0, f1, f3, f0
/* 80177A50 00174B30  90 01 00 18 */	stw r0, 0x18(r1)
/* 80177A54 00174B34  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80177A58 00174B38  90 81 00 1C */	stw r4, 0x1c(r1)
/* 80177A5C 00174B3C  D0 41 00 18 */	stfs f2, 0x18(r1)
/* 80177A60 00174B40  D0 01 00 1C */	stfs f0, 0x1c(r1)
/* 80177A64 00174B44  80 61 00 18 */	lwz r3, 0x18(r1)
/* 80177A68 00174B48  90 1D 00 00 */	stw r0, 0x0(r29)
/* 80177A6C 00174B4C  80 01 00 1C */	lwz r0, 0x1c(r1)
/* 80177A70 00174B50  90 7D 00 04 */	stw r3, 0x4(r29)
/* 80177A74 00174B54  90 1D 00 08 */	stw r0, 0x8(r29)
/* 80177A78 00174B58  83 E1 00 3C */	lwz r31, 0x3c(r1)
/* 80177A7C 00174B5C  83 C1 00 38 */	lwz r30, 0x38(r1)
/* 80177A80 00174B60  80 01 00 44 */	lwz r0, 0x44(r1)
/* 80177A84 00174B64  90 C1 00 24 */	stw r6, 0x24(r1)
/* 80177A88 00174B68  83 A1 00 34 */	lwz r29, 0x34(r1)
/* 80177A8C 00174B6C  7C 08 03 A6 */	mtlr r0
/* 80177A90 00174B70  38 21 00 40 */	addi r1, r1, 0x40
/* 80177A94 00174B74  4E 80 00 20 */	blr
.endfn get_splash_loc__12zNPCDutchmanCFv

# zNPCDutchman::vanish()
.fn vanish__12zNPCDutchmanFv, global
/* 80177A98 00174B78  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80177A9C 00174B7C  7C 08 02 A6 */	mflr r0
/* 80177AA0 00174B80  90 01 00 14 */	stw r0, 0x14(r1)
/* 80177AA4 00174B84  38 00 00 00 */	li r0, 0x0
/* 80177AA8 00174B88  88 83 00 1C */	lbz r4, 0x1c(r3)
/* 80177AAC 00174B8C  98 83 03 1C */	stb r4, 0x31c(r3)
/* 80177AB0 00174B90  98 03 00 1B */	stb r0, 0x1b(r3)
/* 80177AB4 00174B94  98 03 00 1C */	stb r0, 0x1c(r3)
/* 80177AB8 00174B98  98 03 00 F0 */	stb r0, 0xf0(r3)
/* 80177ABC 00174B9C  98 03 00 F1 */	stb r0, 0xf1(r3)
/* 80177AC0 00174BA0  98 03 00 22 */	stb r0, 0x22(r3)
/* 80177AC4 00174BA4  98 03 00 23 */	stb r0, 0x23(r3)
/* 80177AC8 00174BA8  4B EA 3D 21 */	bl xEntHide__FP4xEnt
/* 80177ACC 00174BAC  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80177AD0 00174BB0  7C 08 03 A6 */	mtlr r0
/* 80177AD4 00174BB4  38 21 00 10 */	addi r1, r1, 0x10
/* 80177AD8 00174BB8  4E 80 00 20 */	blr
.endfn vanish__12zNPCDutchmanFv

# zNPCDutchman::reappear()
.fn reappear__12zNPCDutchmanFv, global
/* 80177ADC 00174BBC  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80177AE0 00174BC0  7C 08 02 A6 */	mflr r0
/* 80177AE4 00174BC4  90 01 00 14 */	stw r0, 0x14(r1)
/* 80177AE8 00174BC8  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80177AEC 00174BCC  7C 7F 1B 78 */	mr r31, r3
/* 80177AF0 00174BD0  88 03 03 1C */	lbz r0, 0x31c(r3)
/* 80177AF4 00174BD4  98 03 00 1C */	stb r0, 0x1c(r3)
/* 80177AF8 00174BD8  4B F6 16 3D */	bl RestoreColFlags__9xNPCBasicFv
/* 80177AFC 00174BDC  7F E3 FB 78 */	mr r3, r31
/* 80177B00 00174BE0  4B EA 3C F9 */	bl xEntShow__FP4xEnt
/* 80177B04 00174BE4  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80177B08 00174BE8  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80177B0C 00174BEC  7C 08 03 A6 */	mtlr r0
/* 80177B10 00174BF0  38 21 00 10 */	addi r1, r1, 0x10
/* 80177B14 00174BF4  4E 80 00 20 */	blr
.endfn reappear__12zNPCDutchmanFv

# zNPCDutchman::random_orbit(const xVec3&, float, float) const
.fn random_orbit__12zNPCDutchmanCFRC5xVec3ff, global
/* 80177B18 00174BF8  94 21 FF 90 */	stwu r1, -0x70(r1)
/* 80177B1C 00174BFC  7C 08 02 A6 */	mflr r0
/* 80177B20 00174C00  90 01 00 74 */	stw r0, 0x74(r1)
/* 80177B24 00174C04  DB E1 00 60 */	stfd f31, 0x60(r1)
/* 80177B28 00174C08  F3 E1 00 68 */	psq_st f31, 0x68(r1), 0, qr0
/* 80177B2C 00174C0C  DB C1 00 50 */	stfd f30, 0x50(r1)
/* 80177B30 00174C10  F3 C1 00 58 */	psq_st f30, 0x58(r1), 0, qr0
/* 80177B34 00174C14  DB A1 00 40 */	stfd f29, 0x40(r1)
/* 80177B38 00174C18  F3 A1 00 48 */	psq_st f29, 0x48(r1), 0, qr0
/* 80177B3C 00174C1C  93 E1 00 3C */	stw r31, 0x3c(r1)
/* 80177B40 00174C20  93 C1 00 38 */	stw r30, 0x38(r1)
/* 80177B44 00174C24  FF A0 08 90 */	fmr f29, f1
/* 80177B48 00174C28  7C 7F 1B 78 */	mr r31, r3
/* 80177B4C 00174C2C  FF C0 10 90 */	fmr f30, f2
/* 80177B50 00174C30  7C BE 2B 78 */	mr r30, r5
/* 80177B54 00174C34  7C 83 23 78 */	mr r3, r4
/* 80177B58 00174C38  48 00 3D F5 */	bl get_orbit__12zNPCDutchmanCFv
/* 80177B5C 00174C3C  7F C4 F3 78 */	mr r4, r30
/* 80177B60 00174C40  7C 7E 1B 78 */	mr r30, r3
/* 80177B64 00174C44  38 61 00 08 */	addi r3, r1, 0x8
/* 80177B68 00174C48  7F C5 F3 78 */	mr r5, r30
/* 80177B6C 00174C4C  4B E9 36 61 */	bl __mi__5xVec3CFRC5xVec3
/* 80177B70 00174C50  80 A1 00 08 */	lwz r5, 0x8(r1)
/* 80177B74 00174C54  38 61 00 20 */	addi r3, r1, 0x20
/* 80177B78 00174C58  80 81 00 0C */	lwz r4, 0xc(r1)
/* 80177B7C 00174C5C  80 01 00 10 */	lwz r0, 0x10(r1)
/* 80177B80 00174C60  90 A1 00 20 */	stw r5, 0x20(r1)
/* 80177B84 00174C64  90 81 00 24 */	stw r4, 0x24(r1)
/* 80177B88 00174C68  90 01 00 28 */	stw r0, 0x28(r1)
/* 80177B8C 00174C6C  4B E9 35 71 */	bl length2__5xVec3CFv
/* 80177B90 00174C70  C0 02 AC B0 */	lfs f0, "@1603"@sda21(r2)
/* 80177B94 00174C74  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80177B98 00174C78  4C 41 13 82 */	cror eq, gt, eq
/* 80177B9C 00174C7C  40 82 00 1C */	bne .L_80177BB8
/* 80177BA0 00174C80  C0 02 AC B4 */	lfs f0, "@1604"@sda21(r2)
/* 80177BA4 00174C84  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80177BA8 00174C88  4C 40 13 82 */	cror eq, lt, eq
/* 80177BAC 00174C8C  40 82 00 0C */	bne .L_80177BB8
/* 80177BB0 00174C90  C3 E2 AC B8 */	lfs f31, "@1605"@sda21(r2)
/* 80177BB4 00174C94  48 00 00 28 */	b .L_80177BDC
.L_80177BB8:
/* 80177BB8 00174C98  4B E9 2C 45 */	bl xsqrt__Ff
/* 80177BBC 00174C9C  C0 02 AC BC */	lfs f0, "@1606"@sda21(r2)
/* 80177BC0 00174CA0  C0 41 00 20 */	lfs f2, 0x20(r1)
/* 80177BC4 00174CA4  EC 60 08 24 */	fdivs f3, f0, f1
/* 80177BC8 00174CA8  C0 01 00 28 */	lfs f0, 0x28(r1)
/* 80177BCC 00174CAC  EC 22 00 F2 */	fmuls f1, f2, f3
/* 80177BD0 00174CB0  EC 40 00 F2 */	fmuls f2, f0, f3
/* 80177BD4 00174CB4  4B E8 E4 9D */	bl xatan2__Fff
/* 80177BD8 00174CB8  FF E0 08 90 */	fmr f31, f1
.L_80177BDC:
/* 80177BDC 00174CBC  C0 02 AD 94 */	lfs f0, "@2180"@sda21(r2)
/* 80177BE0 00174CC0  FC 1E 00 40 */	fcmpo cr0, f30, f0
/* 80177BE4 00174CC4  40 81 00 08 */	ble .L_80177BEC
/* 80177BE8 00174CC8  FF C0 00 90 */	fmr f30, f0
.L_80177BEC:
/* 80177BEC 00174CCC  4B EB 90 9D */	bl xurand__Fv
/* 80177BF0 00174CD0  EC 1E E8 28 */	fsubs f0, f30, f29
/* 80177BF4 00174CD4  EF C0 E8 7A */	fmadds f30, f0, f1, f29
/* 80177BF8 00174CD8  4B EB 90 71 */	bl xrand__Fv
/* 80177BFC 00174CDC  54 60 9F FF */	extrwi. r0, r3, 1, 18
/* 80177C00 00174CE0  41 82 00 0C */	beq .L_80177C0C
/* 80177C04 00174CE4  C0 02 AD B4 */	lfs f0, "@2992"@sda21(r2)
/* 80177C08 00174CE8  EF DE 00 32 */	fmuls f30, f30, f0
.L_80177C0C:
/* 80177C0C 00174CEC  EF DF F0 2A */	fadds f30, f31, f30
/* 80177C10 00174CF0  80 9E 00 00 */	lwz r4, 0x0(r30)
/* 80177C14 00174CF4  80 7E 00 04 */	lwz r3, 0x4(r30)
/* 80177C18 00174CF8  80 1E 00 08 */	lwz r0, 0x8(r30)
/* 80177C1C 00174CFC  FC 20 F0 90 */	fmr f1, f30
/* 80177C20 00174D00  90 81 00 14 */	stw r4, 0x14(r1)
/* 80177C24 00174D04  90 61 00 18 */	stw r3, 0x18(r1)
/* 80177C28 00174D08  90 01 00 1C */	stw r0, 0x1c(r1)
/* 80177C2C 00174D0C  4B F4 D2 21 */	bl isin__Ff
/* 80177C30 00174D10  3C 60 80 33 */	lis r3, "tweak__30@unnamed@zNPCTypeDutchman_cpp@"@ha
/* 80177C34 00174D14  C0 01 00 14 */	lfs f0, 0x14(r1)
/* 80177C38 00174D18  C0 43 A5 78 */	lfs f2, "tweak__30@unnamed@zNPCTypeDutchman_cpp@"@l(r3)
/* 80177C3C 00174D1C  EC 02 00 7A */	fmadds f0, f2, f1, f0
/* 80177C40 00174D20  FC 20 F0 90 */	fmr f1, f30
/* 80177C44 00174D24  D0 01 00 14 */	stfs f0, 0x14(r1)
/* 80177C48 00174D28  4B F4 D2 49 */	bl icos__Ff
/* 80177C4C 00174D2C  3C 60 80 33 */	lis r3, "tweak__30@unnamed@zNPCTypeDutchman_cpp@"@ha
/* 80177C50 00174D30  C0 01 00 1C */	lfs f0, 0x1c(r1)
/* 80177C54 00174D34  38 83 A5 78 */	addi r4, r3, "tweak__30@unnamed@zNPCTypeDutchman_cpp@"@l
/* 80177C58 00174D38  80 61 00 14 */	lwz r3, 0x14(r1)
/* 80177C5C 00174D3C  C0 44 00 00 */	lfs f2, 0x0(r4)
/* 80177C60 00174D40  80 01 00 18 */	lwz r0, 0x18(r1)
/* 80177C64 00174D44  EC 02 00 7A */	fmadds f0, f2, f1, f0
/* 80177C68 00174D48  90 7F 00 00 */	stw r3, 0x0(r31)
/* 80177C6C 00174D4C  90 1F 00 04 */	stw r0, 0x4(r31)
/* 80177C70 00174D50  D0 01 00 1C */	stfs f0, 0x1c(r1)
/* 80177C74 00174D54  80 01 00 1C */	lwz r0, 0x1c(r1)
/* 80177C78 00174D58  90 1F 00 08 */	stw r0, 0x8(r31)
/* 80177C7C 00174D5C  E3 E1 00 68 */	psq_l f31, 0x68(r1), 0, qr0
/* 80177C80 00174D60  CB E1 00 60 */	lfd f31, 0x60(r1)
/* 80177C84 00174D64  E3 C1 00 58 */	psq_l f30, 0x58(r1), 0, qr0
/* 80177C88 00174D68  CB C1 00 50 */	lfd f30, 0x50(r1)
/* 80177C8C 00174D6C  E3 A1 00 48 */	psq_l f29, 0x48(r1), 0, qr0
/* 80177C90 00174D70  CB A1 00 40 */	lfd f29, 0x40(r1)
/* 80177C94 00174D74  83 E1 00 3C */	lwz r31, 0x3c(r1)
/* 80177C98 00174D78  80 01 00 74 */	lwz r0, 0x74(r1)
/* 80177C9C 00174D7C  83 C1 00 38 */	lwz r30, 0x38(r1)
/* 80177CA0 00174D80  7C 08 03 A6 */	mtlr r0
/* 80177CA4 00174D84  38 21 00 70 */	addi r1, r1, 0x70
/* 80177CA8 00174D88  4E 80 00 20 */	blr
.endfn random_orbit__12zNPCDutchmanCFRC5xVec3ff

# zNPCDutchman::turn_to_face(const xVec3&)
.fn turn_to_face__12zNPCDutchmanFRC5xVec3, global
/* 80177CAC 00174D8C  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 80177CB0 00174D90  7C 08 02 A6 */	mflr r0
/* 80177CB4 00174D94  90 01 00 24 */	stw r0, 0x24(r1)
/* 80177CB8 00174D98  38 00 00 00 */	li r0, 0x0
/* 80177CBC 00174D9C  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 80177CC0 00174DA0  7C 9F 23 78 */	mr r31, r4
/* 80177CC4 00174DA4  93 C1 00 18 */	stw r30, 0x18(r1)
/* 80177CC8 00174DA8  7C 7E 1B 78 */	mr r30, r3
/* 80177CCC 00174DAC  98 03 02 B4 */	stb r0, 0x2b4(r3)
/* 80177CD0 00174DB0  48 00 3B 4D */	bl get_center__12zNPCDutchmanCFv
/* 80177CD4 00174DB4  80 82 C0 98 */	lwz r4, "@2998"@sda21(r2)
/* 80177CD8 00174DB8  80 02 C0 9C */	lwz r0, "@2998"+0x4@sda21(r2)
/* 80177CDC 00174DBC  C0 5F 00 00 */	lfs f2, 0x0(r31)
/* 80177CE0 00174DC0  90 81 00 08 */	stw r4, 0x8(r1)
/* 80177CE4 00174DC4  C0 3F 00 08 */	lfs f1, 0x8(r31)
/* 80177CE8 00174DC8  90 01 00 0C */	stw r0, 0xc(r1)
/* 80177CEC 00174DCC  C0 03 00 00 */	lfs f0, 0x0(r3)
/* 80177CF0 00174DD0  EC 02 00 28 */	fsubs f0, f2, f0
/* 80177CF4 00174DD4  D0 01 00 08 */	stfs f0, 0x8(r1)
/* 80177CF8 00174DD8  C0 03 00 08 */	lfs f0, 0x8(r3)
/* 80177CFC 00174DDC  38 61 00 08 */	addi r3, r1, 0x8
/* 80177D00 00174DE0  EC 01 00 28 */	fsubs f0, f1, f0
/* 80177D04 00174DE4  D0 01 00 0C */	stfs f0, 0xc(r1)
/* 80177D08 00174DE8  4B E9 DC 55 */	bl length2__5xVec2CFv
/* 80177D0C 00174DEC  C0 02 AC B0 */	lfs f0, "@1603"@sda21(r2)
/* 80177D10 00174DF0  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80177D14 00174DF4  4C 41 13 82 */	cror eq, gt, eq
/* 80177D18 00174DF8  40 82 00 14 */	bne .L_80177D2C
/* 80177D1C 00174DFC  C0 02 AC B4 */	lfs f0, "@1604"@sda21(r2)
/* 80177D20 00174E00  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80177D24 00174E04  4C 40 13 82 */	cror eq, lt, eq
/* 80177D28 00174E08  41 82 00 24 */	beq .L_80177D4C
.L_80177D2C:
/* 80177D2C 00174E0C  4B E9 2A D1 */	bl xsqrt__Ff
/* 80177D30 00174E10  C0 02 AC BC */	lfs f0, "@1606"@sda21(r2)
/* 80177D34 00174E14  38 61 00 08 */	addi r3, r1, 0x8
/* 80177D38 00174E18  EC 20 08 24 */	fdivs f1, f0, f1
/* 80177D3C 00174E1C  4B EE 83 C5 */	bl __amu__5xVec2Ff
/* 80177D40 00174E20  38 7E 02 D8 */	addi r3, r30, 0x2d8
/* 80177D44 00174E24  38 81 00 08 */	addi r4, r1, 0x8
/* 80177D48 00174E28  4B EA DA B1 */	bl __as__5xVec2FRC5xVec2
.L_80177D4C:
/* 80177D4C 00174E2C  80 01 00 24 */	lwz r0, 0x24(r1)
/* 80177D50 00174E30  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 80177D54 00174E34  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 80177D58 00174E38  7C 08 03 A6 */	mtlr r0
/* 80177D5C 00174E3C  38 21 00 20 */	addi r1, r1, 0x20
/* 80177D60 00174E40  4E 80 00 20 */	blr
.endfn turn_to_face__12zNPCDutchmanFRC5xVec3

# zNPCDutchman::reset_speed()
.fn reset_speed__12zNPCDutchmanFv, global
/* 80177D64 00174E44  94 21 FF D0 */	stwu r1, -0x30(r1)
/* 80177D68 00174E48  7C 08 02 A6 */	mflr r0
/* 80177D6C 00174E4C  3C 80 80 33 */	lis r4, "tweak__30@unnamed@zNPCTypeDutchman_cpp@"@ha
/* 80177D70 00174E50  90 01 00 34 */	stw r0, 0x34(r1)
/* 80177D74 00174E54  38 A4 A5 78 */	addi r5, r4, "tweak__30@unnamed@zNPCTypeDutchman_cpp@"@l
/* 80177D78 00174E58  38 85 00 04 */	addi r4, r5, 0x4
/* 80177D7C 00174E5C  93 E1 00 2C */	stw r31, 0x2c(r1)
/* 80177D80 00174E60  3B E5 00 30 */	addi r31, r5, 0x30
/* 80177D84 00174E64  93 C1 00 28 */	stw r30, 0x28(r1)
/* 80177D88 00174E68  7C 7E 1B 78 */	mr r30, r3
/* 80177D8C 00174E6C  38 61 00 14 */	addi r3, r1, 0x14
/* 80177D90 00174E70  C0 05 00 1C */	lfs f0, 0x1c(r5)
/* 80177D94 00174E74  D0 1E 02 E4 */	stfs f0, 0x2e4(r30)
/* 80177D98 00174E78  C0 05 00 20 */	lfs f0, 0x20(r5)
/* 80177D9C 00174E7C  D0 1E 02 E8 */	stfs f0, 0x2e8(r30)
/* 80177DA0 00174E80  80 1E 02 C8 */	lwz r0, 0x2c8(r30)
/* 80177DA4 00174E84  54 00 10 3A */	slwi r0, r0, 2
/* 80177DA8 00174E88  7C 3F 04 2E */	lfsx f1, r31, r0
/* 80177DAC 00174E8C  4B E9 33 75 */	bl __ml__5xVec3CFf
/* 80177DB0 00174E90  38 7E 03 04 */	addi r3, r30, 0x304
/* 80177DB4 00174E94  38 81 00 14 */	addi r4, r1, 0x14
/* 80177DB8 00174E98  4B E9 34 AD */	bl __as__5xVec3FRC5xVec3
/* 80177DBC 00174E9C  80 1E 02 C8 */	lwz r0, 0x2c8(r30)
/* 80177DC0 00174EA0  3C 60 80 33 */	lis r3, "tweak__30@unnamed@zNPCTypeDutchman_cpp@"@ha
/* 80177DC4 00174EA4  38 83 A5 78 */	addi r4, r3, "tweak__30@unnamed@zNPCTypeDutchman_cpp@"@l
/* 80177DC8 00174EA8  38 61 00 08 */	addi r3, r1, 0x8
/* 80177DCC 00174EAC  54 00 10 3A */	slwi r0, r0, 2
/* 80177DD0 00174EB0  7C 3F 04 2E */	lfsx f1, r31, r0
/* 80177DD4 00174EB4  38 84 00 10 */	addi r4, r4, 0x10
/* 80177DD8 00174EB8  4B E9 33 49 */	bl __ml__5xVec3CFf
/* 80177DDC 00174EBC  38 7E 03 10 */	addi r3, r30, 0x310
/* 80177DE0 00174EC0  38 81 00 08 */	addi r4, r1, 0x8
/* 80177DE4 00174EC4  4B E9 34 81 */	bl __as__5xVec3FRC5xVec3
/* 80177DE8 00174EC8  80 01 00 34 */	lwz r0, 0x34(r1)
/* 80177DEC 00174ECC  83 E1 00 2C */	lwz r31, 0x2c(r1)
/* 80177DF0 00174ED0  83 C1 00 28 */	lwz r30, 0x28(r1)
/* 80177DF4 00174ED4  7C 08 03 A6 */	mtlr r0
/* 80177DF8 00174ED8  38 21 00 30 */	addi r1, r1, 0x30
/* 80177DFC 00174EDC  4E 80 00 20 */	blr
.endfn reset_speed__12zNPCDutchmanFv

# zNPCDutchman::halt(float)
.fn halt__12zNPCDutchmanFf, global
/* 80177E00 00174EE0  38 00 00 04 */	li r0, 0x4
/* 80177E04 00174EE4  90 03 02 BC */	stw r0, 0x2bc(r3)
/* 80177E08 00174EE8  C0 43 02 F8 */	lfs f2, 0x2f8(r3)
/* 80177E0C 00174EEC  C0 02 AC B8 */	lfs f0, "@1605"@sda21(r2)
/* 80177E10 00174EF0  FC 02 00 40 */	fcmpo cr0, f2, f0
/* 80177E14 00174EF4  40 80 00 0C */	bge .L_80177E20
/* 80177E18 00174EF8  FC 00 08 90 */	fmr f0, f1
/* 80177E1C 00174EFC  48 00 00 08 */	b .L_80177E24
.L_80177E20:
/* 80177E20 00174F00  FC 00 08 50 */	fneg f0, f1
.L_80177E24:
/* 80177E24 00174F04  D0 03 03 04 */	stfs f0, 0x304(r3)
/* 80177E28 00174F08  C0 43 02 FC */	lfs f2, 0x2fc(r3)
/* 80177E2C 00174F0C  C0 02 AC B8 */	lfs f0, "@1605"@sda21(r2)
/* 80177E30 00174F10  FC 02 00 40 */	fcmpo cr0, f2, f0
/* 80177E34 00174F14  40 80 00 0C */	bge .L_80177E40
/* 80177E38 00174F18  FC 00 08 90 */	fmr f0, f1
/* 80177E3C 00174F1C  48 00 00 08 */	b .L_80177E44
.L_80177E40:
/* 80177E40 00174F20  FC 00 08 50 */	fneg f0, f1
.L_80177E44:
/* 80177E44 00174F24  D0 03 03 08 */	stfs f0, 0x308(r3)
/* 80177E48 00174F28  C0 43 03 00 */	lfs f2, 0x300(r3)
/* 80177E4C 00174F2C  C0 02 AC B8 */	lfs f0, "@1605"@sda21(r2)
/* 80177E50 00174F30  FC 02 00 40 */	fcmpo cr0, f2, f0
/* 80177E54 00174F34  40 80 00 08 */	bge .L_80177E5C
/* 80177E58 00174F38  48 00 00 08 */	b .L_80177E60
.L_80177E5C:
/* 80177E5C 00174F3C  FC 20 08 50 */	fneg f1, f1
.L_80177E60:
/* 80177E60 00174F40  D0 23 03 0C */	stfs f1, 0x30c(r3)
/* 80177E64 00174F44  4E 80 00 20 */	blr
.endfn halt__12zNPCDutchmanFf

# @unnamed@zNPCTypeDutchman_cpp@::set_beam_verts(RxObjSpace3DVertex*, const xVec3&, const xVec3&, unsigned char, unsigned char, const xVec3&)
.fn "set_beam_verts__30@unnamed@zNPCTypeDutchman_cpp@FP18RxObjSpace3DVertexRC5xVec3RC5xVec3UcUcRC5xVec3", local
/* 80177E68 00174F48  94 21 FF B0 */	stwu r1, -0x50(r1)
/* 80177E6C 00174F4C  7C 08 02 A6 */	mflr r0
/* 80177E70 00174F50  90 01 00 54 */	stw r0, 0x54(r1)
/* 80177E74 00174F54  BF 41 00 38 */	stmw r26, 0x38(r1)
/* 80177E78 00174F58  7C 7A 1B 78 */	mr r26, r3
/* 80177E7C 00174F5C  7D 1F 43 78 */	mr r31, r8
/* 80177E80 00174F60  7C BC 2B 78 */	mr r28, r5
/* 80177E84 00174F64  7C 9B 23 78 */	mr r27, r4
/* 80177E88 00174F68  7C DD 33 78 */	mr r29, r6
/* 80177E8C 00174F6C  7C FE 3B 78 */	mr r30, r7
/* 80177E90 00174F70  7F E5 FB 78 */	mr r5, r31
/* 80177E94 00174F74  38 61 00 2C */	addi r3, r1, 0x2c
/* 80177E98 00174F78  4B E9 33 35 */	bl __mi__5xVec3CFRC5xVec3
/* 80177E9C 00174F7C  C0 22 AC B8 */	lfs f1, "@1605"@sda21(r2)
/* 80177EA0 00174F80  7F 43 D3 78 */	mr r3, r26
/* 80177EA4 00174F84  7F A5 EB 78 */	mr r5, r29
/* 80177EA8 00174F88  38 81 00 2C */	addi r4, r1, 0x2c
/* 80177EAC 00174F8C  FC 40 08 90 */	fmr f2, f1
/* 80177EB0 00174F90  48 00 00 A9 */	bl "set_vert__30@unnamed@zNPCTypeDutchman_cpp@FR18RxObjSpace3DVertexRC5xVec3ffUc"
/* 80177EB4 00174F94  7F 84 E3 78 */	mr r4, r28
/* 80177EB8 00174F98  7F E5 FB 78 */	mr r5, r31
/* 80177EBC 00174F9C  38 61 00 20 */	addi r3, r1, 0x20
/* 80177EC0 00174FA0  4B E9 33 0D */	bl __mi__5xVec3CFRC5xVec3
/* 80177EC4 00174FA4  C0 22 AC BC */	lfs f1, "@1606"@sda21(r2)
/* 80177EC8 00174FA8  7F C5 F3 78 */	mr r5, r30
/* 80177ECC 00174FAC  C0 42 AC B8 */	lfs f2, "@1605"@sda21(r2)
/* 80177ED0 00174FB0  38 7A 00 24 */	addi r3, r26, 0x24
/* 80177ED4 00174FB4  38 81 00 20 */	addi r4, r1, 0x20
/* 80177ED8 00174FB8  48 00 00 81 */	bl "set_vert__30@unnamed@zNPCTypeDutchman_cpp@FR18RxObjSpace3DVertexRC5xVec3ffUc"
/* 80177EDC 00174FBC  7F 64 DB 78 */	mr r4, r27
/* 80177EE0 00174FC0  7F E5 FB 78 */	mr r5, r31
/* 80177EE4 00174FC4  38 61 00 14 */	addi r3, r1, 0x14
/* 80177EE8 00174FC8  4B E9 D4 F9 */	bl __pl__5xVec3CFRC5xVec3
/* 80177EEC 00174FCC  C0 22 AC B8 */	lfs f1, "@1605"@sda21(r2)
/* 80177EF0 00174FD0  7F A5 EB 78 */	mr r5, r29
/* 80177EF4 00174FD4  C0 42 AC BC */	lfs f2, "@1606"@sda21(r2)
/* 80177EF8 00174FD8  38 7A 00 48 */	addi r3, r26, 0x48
/* 80177EFC 00174FDC  38 81 00 14 */	addi r4, r1, 0x14
/* 80177F00 00174FE0  48 00 00 59 */	bl "set_vert__30@unnamed@zNPCTypeDutchman_cpp@FR18RxObjSpace3DVertexRC5xVec3ffUc"
/* 80177F04 00174FE4  38 7A 00 6C */	addi r3, r26, 0x6c
/* 80177F08 00174FE8  38 9A 00 48 */	addi r4, r26, 0x48
/* 80177F0C 00174FEC  4B F8 32 75 */	bl __as__18RxObjSpace3DVertexFRC18RxObjSpace3DVertex
/* 80177F10 00174FF0  38 7A 00 90 */	addi r3, r26, 0x90
/* 80177F14 00174FF4  38 9A 00 24 */	addi r4, r26, 0x24
/* 80177F18 00174FF8  4B F8 32 69 */	bl __as__18RxObjSpace3DVertexFRC18RxObjSpace3DVertex
/* 80177F1C 00174FFC  7F 84 E3 78 */	mr r4, r28
/* 80177F20 00175000  7F E5 FB 78 */	mr r5, r31
/* 80177F24 00175004  38 61 00 08 */	addi r3, r1, 0x8
/* 80177F28 00175008  4B E9 D4 B9 */	bl __pl__5xVec3CFRC5xVec3
/* 80177F2C 0017500C  C0 22 AC BC */	lfs f1, "@1606"@sda21(r2)
/* 80177F30 00175010  7F C5 F3 78 */	mr r5, r30
/* 80177F34 00175014  38 7A 00 B4 */	addi r3, r26, 0xb4
/* 80177F38 00175018  38 81 00 08 */	addi r4, r1, 0x8
/* 80177F3C 0017501C  FC 40 08 90 */	fmr f2, f1
/* 80177F40 00175020  48 00 00 19 */	bl "set_vert__30@unnamed@zNPCTypeDutchman_cpp@FR18RxObjSpace3DVertexRC5xVec3ffUc"
/* 80177F44 00175024  BB 41 00 38 */	lmw r26, 0x38(r1)
/* 80177F48 00175028  80 01 00 54 */	lwz r0, 0x54(r1)
/* 80177F4C 0017502C  7C 08 03 A6 */	mtlr r0
/* 80177F50 00175030  38 21 00 50 */	addi r1, r1, 0x50
/* 80177F54 00175034  4E 80 00 20 */	blr
.endfn "set_beam_verts__30@unnamed@zNPCTypeDutchman_cpp@FP18RxObjSpace3DVertexRC5xVec3RC5xVec3UcUcRC5xVec3"

# @unnamed@zNPCTypeDutchman_cpp@::set_vert(RxObjSpace3DVertex&, const xVec3&, float, float, unsigned char)
.fn "set_vert__30@unnamed@zNPCTypeDutchman_cpp@FR18RxObjSpace3DVertexRC5xVec3ffUc", local
/* 80177F58 00175038  C0 04 00 00 */	lfs f0, 0x0(r4)
/* 80177F5C 0017503C  38 00 00 FF */	li r0, 0xff
/* 80177F60 00175040  C0 64 00 04 */	lfs f3, 0x4(r4)
/* 80177F64 00175044  D0 03 00 00 */	stfs f0, 0x0(r3)
/* 80177F68 00175048  C0 04 00 08 */	lfs f0, 0x8(r4)
/* 80177F6C 0017504C  D0 63 00 04 */	stfs f3, 0x4(r3)
/* 80177F70 00175050  D0 03 00 08 */	stfs f0, 0x8(r3)
/* 80177F74 00175054  D0 23 00 1C */	stfs f1, 0x1c(r3)
/* 80177F78 00175058  D0 43 00 20 */	stfs f2, 0x20(r3)
/* 80177F7C 0017505C  98 03 00 18 */	stb r0, 0x18(r3)
/* 80177F80 00175060  98 03 00 19 */	stb r0, 0x19(r3)
/* 80177F84 00175064  98 03 00 1A */	stb r0, 0x1a(r3)
/* 80177F88 00175068  98 A3 00 1B */	stb r5, 0x1b(r3)
/* 80177F8C 0017506C  4E 80 00 20 */	blr
.endfn "set_vert__30@unnamed@zNPCTypeDutchman_cpp@FR18RxObjSpace3DVertexRC5xVec3ffUc"

# @unnamed@zNPCTypeDutchman_cpp@::world_to_screen(const xVec3&)
.fn "world_to_screen__30@unnamed@zNPCTypeDutchman_cpp@FRC5xVec3", local
/* 80177F90 00175070  94 21 FF D0 */	stwu r1, -0x30(r1)
/* 80177F94 00175074  7C 08 02 A6 */	mflr r0
/* 80177F98 00175078  3C A0 80 3C */	lis r5, globals@ha
/* 80177F9C 0017507C  90 01 00 34 */	stw r0, 0x34(r1)
/* 80177FA0 00175080  93 E1 00 2C */	stw r31, 0x2c(r1)
/* 80177FA4 00175084  3B E5 05 58 */	addi r31, r5, globals@l
/* 80177FA8 00175088  93 C1 00 28 */	stw r30, 0x28(r1)
/* 80177FAC 0017508C  7C 9E 23 78 */	mr r30, r4
/* 80177FB0 00175090  38 9F 00 14 */	addi r4, r31, 0x14
/* 80177FB4 00175094  93 A1 00 24 */	stw r29, 0x24(r1)
/* 80177FB8 00175098  7C 7D 1B 78 */	mr r29, r3
/* 80177FBC 0017509C  80 7F 00 10 */	lwz r3, 0x10(r31)
/* 80177FC0 001750A0  4B F4 85 71 */	bl iCameraUpdatePos__FP8RwCameraP7xMat4x3
/* 80177FC4 001750A4  80 9F 00 10 */	lwz r4, 0x10(r31)
/* 80177FC8 001750A8  7F C5 F3 78 */	mr r5, r30
/* 80177FCC 001750AC  38 61 00 14 */	addi r3, r1, 0x14
/* 80177FD0 001750B0  38 84 00 20 */	addi r4, r4, 0x20
/* 80177FD4 001750B4  4B E9 2F 9D */	bl xMat4x3Toworld__FP5xVec3PC7xMat4x3PC5xVec3
/* 80177FD8 001750B8  C0 62 AC BC */	lfs f3, "@1606"@sda21(r2)
/* 80177FDC 001750BC  38 61 00 08 */	addi r3, r1, 0x8
/* 80177FE0 001750C0  C0 01 00 1C */	lfs f0, 0x1c(r1)
/* 80177FE4 001750C4  C0 21 00 14 */	lfs f1, 0x14(r1)
/* 80177FE8 001750C8  EC 43 00 24 */	fdivs f2, f3, f0
/* 80177FEC 001750CC  C0 01 00 18 */	lfs f0, 0x18(r1)
/* 80177FF0 001750D0  EC 21 00 B2 */	fmuls f1, f1, f2
/* 80177FF4 001750D4  EC 40 00 B2 */	fmuls f2, f0, f2
/* 80177FF8 001750D8  4B E9 30 F5 */	bl assign__5xVec3Ffff
/* 80177FFC 001750DC  80 61 00 08 */	lwz r3, 0x8(r1)
/* 80178000 001750E0  80 01 00 0C */	lwz r0, 0xc(r1)
/* 80178004 001750E4  90 7D 00 00 */	stw r3, 0x0(r29)
/* 80178008 001750E8  90 1D 00 04 */	stw r0, 0x4(r29)
/* 8017800C 001750EC  80 01 00 10 */	lwz r0, 0x10(r1)
/* 80178010 001750F0  90 1D 00 08 */	stw r0, 0x8(r29)
/* 80178014 001750F4  83 E1 00 2C */	lwz r31, 0x2c(r1)
/* 80178018 001750F8  83 C1 00 28 */	lwz r30, 0x28(r1)
/* 8017801C 001750FC  83 A1 00 24 */	lwz r29, 0x24(r1)
/* 80178020 00175100  80 01 00 34 */	lwz r0, 0x34(r1)
/* 80178024 00175104  7C 08 03 A6 */	mtlr r0
/* 80178028 00175108  38 21 00 30 */	addi r1, r1, 0x30
/* 8017802C 0017510C  4E 80 00 20 */	blr
.endfn "world_to_screen__30@unnamed@zNPCTypeDutchman_cpp@FRC5xVec3"

# @unnamed@zNPCTypeDutchman_cpp@::render_beam(RxObjSpace3DVertex*, const zNPCDutchman::beam_info&, unsigned long, unsigned char)
.fn "render_beam__30@unnamed@zNPCTypeDutchman_cpp@FP18RxObjSpace3DVertexRCQ212zNPCDutchman9beam_infoUlUc", local
/* 80178030 00175110  94 21 FF 20 */	stwu r1, -0xe0(r1)
/* 80178034 00175114  7C 08 02 A6 */	mflr r0
/* 80178038 00175118  90 01 00 E4 */	stw r0, 0xe4(r1)
/* 8017803C 0017511C  BF 41 00 C8 */	stmw r26, 0xc8(r1)
/* 80178040 00175120  54 BF 20 36 */	slwi r31, r5, 4
/* 80178044 00175124  7C 9B 23 78 */	mr r27, r4
/* 80178048 00175128  7C 7A 1B 78 */	mr r26, r3
/* 8017804C 0017512C  3B BF 00 14 */	addi r29, r31, 0x14
/* 80178050 00175130  7C DC 33 78 */	mr r28, r6
/* 80178054 00175134  3B DB 00 04 */	addi r30, r27, 0x4
/* 80178058 00175138  38 61 00 50 */	addi r3, r1, 0x50
/* 8017805C 0017513C  7F BB EA 14 */	add r29, r27, r29
/* 80178060 00175140  7F A4 EB 78 */	mr r4, r29
/* 80178064 00175144  7F C5 F3 78 */	mr r5, r30
/* 80178068 00175148  4B E9 31 65 */	bl __mi__5xVec3CFRC5xVec3
/* 8017806C 0017514C  38 61 00 5C */	addi r3, r1, 0x5c
/* 80178070 00175150  38 81 00 50 */	addi r4, r1, 0x50
/* 80178074 00175154  4B F9 E2 39 */	bl normal__5xVec3CFv
/* 80178078 00175158  80 C1 00 5C */	lwz r6, 0x5c(r1)
/* 8017807C 0017515C  7F C4 F3 78 */	mr r4, r30
/* 80178080 00175160  80 A1 00 60 */	lwz r5, 0x60(r1)
/* 80178084 00175164  38 61 00 44 */	addi r3, r1, 0x44
/* 80178088 00175168  80 01 00 64 */	lwz r0, 0x64(r1)
/* 8017808C 0017516C  90 C1 00 B0 */	stw r6, 0xb0(r1)
/* 80178090 00175170  90 A1 00 B4 */	stw r5, 0xb4(r1)
/* 80178094 00175174  90 01 00 B8 */	stw r0, 0xb8(r1)
/* 80178098 00175178  4B FF FE F9 */	bl "world_to_screen__30@unnamed@zNPCTypeDutchman_cpp@FRC5xVec3"
/* 8017809C 0017517C  80 C1 00 44 */	lwz r6, 0x44(r1)
/* 801780A0 00175180  7F A4 EB 78 */	mr r4, r29
/* 801780A4 00175184  80 A1 00 48 */	lwz r5, 0x48(r1)
/* 801780A8 00175188  38 61 00 38 */	addi r3, r1, 0x38
/* 801780AC 0017518C  80 01 00 4C */	lwz r0, 0x4c(r1)
/* 801780B0 00175190  90 C1 00 A4 */	stw r6, 0xa4(r1)
/* 801780B4 00175194  90 A1 00 A8 */	stw r5, 0xa8(r1)
/* 801780B8 00175198  90 01 00 AC */	stw r0, 0xac(r1)
/* 801780BC 0017519C  4B FF FE D5 */	bl "world_to_screen__30@unnamed@zNPCTypeDutchman_cpp@FRC5xVec3"
/* 801780C0 001751A0  80 E1 00 38 */	lwz r7, 0x38(r1)
/* 801780C4 001751A4  38 61 00 2C */	addi r3, r1, 0x2c
/* 801780C8 001751A8  80 C1 00 3C */	lwz r6, 0x3c(r1)
/* 801780CC 001751AC  38 81 00 98 */	addi r4, r1, 0x98
/* 801780D0 001751B0  80 01 00 40 */	lwz r0, 0x40(r1)
/* 801780D4 001751B4  38 A1 00 A4 */	addi r5, r1, 0xa4
/* 801780D8 001751B8  90 E1 00 98 */	stw r7, 0x98(r1)
/* 801780DC 001751BC  90 C1 00 9C */	stw r6, 0x9c(r1)
/* 801780E0 001751C0  90 01 00 A0 */	stw r0, 0xa0(r1)
/* 801780E4 001751C4  4B E9 30 E9 */	bl __mi__5xVec3CFRC5xVec3
/* 801780E8 001751C8  80 A1 00 2C */	lwz r5, 0x2c(r1)
/* 801780EC 001751CC  38 61 00 8C */	addi r3, r1, 0x8c
/* 801780F0 001751D0  80 81 00 30 */	lwz r4, 0x30(r1)
/* 801780F4 001751D4  80 01 00 34 */	lwz r0, 0x34(r1)
/* 801780F8 001751D8  90 A1 00 8C */	stw r5, 0x8c(r1)
/* 801780FC 001751DC  90 81 00 90 */	stw r4, 0x90(r1)
/* 80178100 001751E0  90 01 00 94 */	stw r0, 0x94(r1)
/* 80178104 001751E4  C0 02 AC B8 */	lfs f0, "@1605"@sda21(r2)
/* 80178108 001751E8  D0 01 00 94 */	stfs f0, 0x94(r1)
/* 8017810C 001751EC  4B F1 F2 4D */	bl up_normalize__5xVec3Fv
/* 80178110 001751F0  3C 60 80 27 */	lis r3, "@3097"@ha
/* 80178114 001751F4  C0 01 00 8C */	lfs f0, 0x8c(r1)
/* 80178118 001751F8  38 E3 20 E4 */	addi r7, r3, "@3097"@l
/* 8017811C 001751FC  3C 60 80 3C */	lis r3, globals@ha
/* 80178120 00175200  80 C7 00 00 */	lwz r6, 0x0(r7)
/* 80178124 00175204  38 83 05 58 */	addi r4, r3, globals@l
/* 80178128 00175208  80 A7 00 04 */	lwz r5, 0x4(r7)
/* 8017812C 0017520C  FC 00 00 50 */	fneg f0, f0
/* 80178130 00175210  80 07 00 08 */	lwz r0, 0x8(r7)
/* 80178134 00175214  38 61 00 74 */	addi r3, r1, 0x74
/* 80178138 00175218  90 A1 00 84 */	stw r5, 0x84(r1)
/* 8017813C 0017521C  38 A1 00 80 */	addi r5, r1, 0x80
/* 80178140 00175220  80 84 00 10 */	lwz r4, 0x10(r4)
/* 80178144 00175224  90 C1 00 80 */	stw r6, 0x80(r1)
/* 80178148 00175228  C0 21 00 90 */	lfs f1, 0x90(r1)
/* 8017814C 0017522C  38 84 00 20 */	addi r4, r4, 0x20
/* 80178150 00175230  90 01 00 88 */	stw r0, 0x88(r1)
/* 80178154 00175234  D0 21 00 80 */	stfs f1, 0x80(r1)
/* 80178158 00175238  D0 01 00 84 */	stfs f0, 0x84(r1)
/* 8017815C 0017523C  4B EB A9 01 */	bl xMat3x3LMulVec__FP5xVec3PC7xMat3x3PC5xVec3
/* 80178160 00175240  38 61 00 74 */	addi r3, r1, 0x74
/* 80178164 00175244  4B E9 67 45 */	bl right_normalize__5xVec3Fv
/* 80178168 00175248  C0 22 AC C0 */	lfs f1, "@1632"@sda21(r2)
/* 8017816C 0017524C  38 61 00 20 */	addi r3, r1, 0x20
/* 80178170 00175250  C0 1B 01 18 */	lfs f0, 0x118(r27)
/* 80178174 00175254  38 81 00 74 */	addi r4, r1, 0x74
/* 80178178 00175258  EC 21 00 32 */	fmuls f1, f1, f0
/* 8017817C 0017525C  4B E9 2F A5 */	bl __ml__5xVec3CFf
/* 80178180 00175260  80 C1 00 20 */	lwz r6, 0x20(r1)
/* 80178184 00175264  7F 43 D3 78 */	mr r3, r26
/* 80178188 00175268  81 21 00 24 */	lwz r9, 0x24(r1)
/* 8017818C 0017526C  7F C4 F3 78 */	mr r4, r30
/* 80178190 00175270  80 01 00 28 */	lwz r0, 0x28(r1)
/* 80178194 00175274  7F A5 EB 78 */	mr r5, r29
/* 80178198 00175278  90 C1 00 68 */	stw r6, 0x68(r1)
/* 8017819C 0017527C  7F 86 E3 78 */	mr r6, r28
/* 801781A0 00175280  7F 87 E3 78 */	mr r7, r28
/* 801781A4 00175284  39 01 00 68 */	addi r8, r1, 0x68
/* 801781A8 00175288  91 21 00 6C */	stw r9, 0x6c(r1)
/* 801781AC 0017528C  90 01 00 70 */	stw r0, 0x70(r1)
/* 801781B0 00175290  4B FF FC B9 */	bl "set_beam_verts__30@unnamed@zNPCTypeDutchman_cpp@FP18RxObjSpace3DVertexRC5xVec3RC5xVec3UcUcRC5xVec3"
/* 801781B4 00175294  7C 7B FA 14 */	add r3, r27, r31
/* 801781B8 00175298  88 03 00 10 */	lbz r0, 0x10(r3)
/* 801781BC 0017529C  28 00 00 00 */	cmplwi r0, 0x0
/* 801781C0 001752A0  40 82 00 0C */	bne .L_801781CC
/* 801781C4 001752A4  38 7A 00 D8 */	addi r3, r26, 0xd8
/* 801781C8 001752A8  48 00 00 4C */	b .L_80178214
.L_801781CC:
/* 801781CC 001752AC  3C 80 80 33 */	lis r4, "tweak__30@unnamed@zNPCTypeDutchman_cpp@"@ha
/* 801781D0 001752B0  38 61 00 08 */	addi r3, r1, 0x8
/* 801781D4 001752B4  38 A4 A5 78 */	addi r5, r4, "tweak__30@unnamed@zNPCTypeDutchman_cpp@"@l
/* 801781D8 001752B8  38 81 00 B0 */	addi r4, r1, 0xb0
/* 801781DC 001752BC  C0 25 00 A4 */	lfs f1, 0xa4(r5)
/* 801781E0 001752C0  4B E9 2F 41 */	bl __ml__5xVec3CFf
/* 801781E4 001752C4  7F C4 F3 78 */	mr r4, r30
/* 801781E8 001752C8  38 61 00 14 */	addi r3, r1, 0x14
/* 801781EC 001752CC  38 A1 00 08 */	addi r5, r1, 0x8
/* 801781F0 001752D0  4B E9 D1 F1 */	bl __pl__5xVec3CFRC5xVec3
/* 801781F4 001752D4  7F A4 EB 78 */	mr r4, r29
/* 801781F8 001752D8  7F 86 E3 78 */	mr r6, r28
/* 801781FC 001752DC  38 7A 00 D8 */	addi r3, r26, 0xd8
/* 80178200 001752E0  38 A1 00 14 */	addi r5, r1, 0x14
/* 80178204 001752E4  39 01 00 68 */	addi r8, r1, 0x68
/* 80178208 001752E8  38 E0 00 00 */	li r7, 0x0
/* 8017820C 001752EC  4B FF FC 5D */	bl "set_beam_verts__30@unnamed@zNPCTypeDutchman_cpp@FP18RxObjSpace3DVertexRC5xVec3RC5xVec3UcUcRC5xVec3"
/* 80178210 001752F0  38 7A 01 B0 */	addi r3, r26, 0x1b0
.L_80178214:
/* 80178214 001752F4  BB 41 00 C8 */	lmw r26, 0xc8(r1)
/* 80178218 001752F8  80 01 00 E4 */	lwz r0, 0xe4(r1)
/* 8017821C 001752FC  7C 08 03 A6 */	mtlr r0
/* 80178220 00175300  38 21 00 E0 */	addi r1, r1, 0xe0
/* 80178224 00175304  4E 80 00 20 */	blr
.endfn "render_beam__30@unnamed@zNPCTypeDutchman_cpp@FP18RxObjSpace3DVertexRCQ212zNPCDutchman9beam_infoUlUc"

# @unnamed@zNPCTypeDutchman_cpp@::render_beam(RxObjSpace3DVertex*, const zNPCDutchman::beam_info&)
.fn "render_beam__30@unnamed@zNPCTypeDutchman_cpp@FP18RxObjSpace3DVertexRCQ212zNPCDutchman9beam_info", local
/* 80178228 00175308  94 21 FF D0 */	stwu r1, -0x30(r1)
/* 8017822C 0017530C  7C 08 02 A6 */	mflr r0
/* 80178230 00175310  C0 44 01 14 */	lfs f2, 0x114(r4)
/* 80178234 00175314  90 01 00 34 */	stw r0, 0x34(r1)
/* 80178238 00175318  3C 00 43 30 */	lis r0, 0x4330
/* 8017823C 0017531C  93 E1 00 2C */	stw r31, 0x2c(r1)
/* 80178240 00175320  83 E4 01 10 */	lwz r31, 0x110(r4)
/* 80178244 00175324  93 C1 00 28 */	stw r30, 0x28(r1)
/* 80178248 00175328  93 A1 00 24 */	stw r29, 0x24(r1)
/* 8017824C 0017532C  3B A0 00 00 */	li r29, 0x0
/* 80178250 00175330  93 81 00 20 */	stw r28, 0x20(r1)
/* 80178254 00175334  7C 9C 23 78 */	mr r28, r4
/* 80178258 00175338  C0 62 AD B8 */	lfs f3, "@3130"@sda21(r2)
/* 8017825C 0017533C  90 01 00 08 */	stw r0, 0x8(r1)
/* 80178260 00175340  EC 43 00 B2 */	fmuls f2, f3, f2
/* 80178264 00175344  C8 22 AD C0 */	lfd f1, "@3133"@sda21(r2)
/* 80178268 00175348  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8017826C 0017534C  C0 62 AC C0 */	lfs f3, "@1632"@sda21(r2)
/* 80178270 00175350  C8 01 00 08 */	lfd f0, 0x8(r1)
/* 80178274 00175354  EC 00 08 28 */	fsubs f0, f0, f1
/* 80178278 00175358  EC 02 00 24 */	fdivs f0, f2, f0
/* 8017827C 0017535C  EC 03 00 2A */	fadds f0, f3, f0
/* 80178280 00175360  FC 00 00 1E */	fctiwz f0, f0
/* 80178284 00175364  D8 01 00 10 */	stfd f0, 0x10(r1)
/* 80178288 00175368  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8017828C 0017536C  54 1E 06 3E */	clrlwi r30, r0, 24
/* 80178290 00175370  48 00 00 18 */	b .L_801782A8
.L_80178294:
/* 80178294 00175374  7F 84 E3 78 */	mr r4, r28
/* 80178298 00175378  7F A5 EB 78 */	mr r5, r29
/* 8017829C 0017537C  7F C6 F3 78 */	mr r6, r30
/* 801782A0 00175380  4B FF FD 91 */	bl "render_beam__30@unnamed@zNPCTypeDutchman_cpp@FP18RxObjSpace3DVertexRCQ212zNPCDutchman9beam_infoUlUc"
/* 801782A4 00175384  3B BD 00 01 */	addi r29, r29, 0x1
.L_801782A8:
/* 801782A8 00175388  7C 1D F8 40 */	cmplw r29, r31
/* 801782AC 0017538C  41 80 FF E8 */	blt .L_80178294
/* 801782B0 00175390  80 01 00 34 */	lwz r0, 0x34(r1)
/* 801782B4 00175394  83 E1 00 2C */	lwz r31, 0x2c(r1)
/* 801782B8 00175398  83 C1 00 28 */	lwz r30, 0x28(r1)
/* 801782BC 0017539C  83 A1 00 24 */	lwz r29, 0x24(r1)
/* 801782C0 001753A0  83 81 00 20 */	lwz r28, 0x20(r1)
/* 801782C4 001753A4  7C 08 03 A6 */	mtlr r0
/* 801782C8 001753A8  38 21 00 30 */	addi r1, r1, 0x30
/* 801782CC 001753AC  4E 80 00 20 */	blr
.endfn "render_beam__30@unnamed@zNPCTypeDutchman_cpp@FP18RxObjSpace3DVertexRCQ212zNPCDutchman9beam_info"

# zNPCDutchman::render_beam()
.fn render_beam__12zNPCDutchmanFv, global
/* 801782D0 001753B0  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801782D4 001753B4  7C 08 02 A6 */	mflr r0
/* 801782D8 001753B8  90 01 00 14 */	stw r0, 0x14(r1)
/* 801782DC 001753BC  93 E1 00 0C */	stw r31, 0xc(r1)
/* 801782E0 001753C0  93 C1 00 08 */	stw r30, 0x8(r1)
/* 801782E4 001753C4  7C 7E 1B 78 */	mr r30, r3
/* 801782E8 001753C8  80 63 04 30 */	lwz r3, 0x430(r3)
/* 801782EC 001753CC  80 1E 05 4C */	lwz r0, 0x54c(r30)
/* 801782F0 001753D0  7C 03 02 14 */	add r0, r3, r0
/* 801782F4 001753D4  1C 60 01 B0 */	mulli r3, r0, 0x1b0
/* 801782F8 001753D8  4B EB B7 61 */	bl xMemPushTemp__FUi
/* 801782FC 001753DC  80 9E 06 48 */	lwz r4, 0x648(r30)
/* 80178300 001753E0  7C 7F 1B 78 */	mr r31, r3
/* 80178304 001753E4  38 60 00 01 */	li r3, 0x1
/* 80178308 001753E8  48 0B 74 D5 */	bl RwRenderStateSet
/* 8017830C 001753EC  7F E3 FB 78 */	mr r3, r31
/* 80178310 001753F0  38 9E 03 20 */	addi r4, r30, 0x320
/* 80178314 001753F4  4B FF FF 15 */	bl "render_beam__30@unnamed@zNPCTypeDutchman_cpp@FP18RxObjSpace3DVertexRCQ212zNPCDutchman9beam_info"
/* 80178318 001753F8  38 9E 04 3C */	addi r4, r30, 0x43c
/* 8017831C 001753FC  4B FF FF 0D */	bl "render_beam__30@unnamed@zNPCTypeDutchman_cpp@FP18RxObjSpace3DVertexRCQ212zNPCDutchman9beam_info"
/* 80178320 00175400  3C 80 38 E4 */	lis r4, 0x38e4
/* 80178324 00175404  7C 1F 18 50 */	subf r0, r31, r3
/* 80178328 00175408  38 84 8E 39 */	addi r4, r4, -0x71c7
/* 8017832C 0017540C  7F E3 FB 78 */	mr r3, r31
/* 80178330 00175410  7C 04 00 96 */	mulhw r0, r4, r0
/* 80178334 00175414  38 A0 00 00 */	li r5, 0x0
/* 80178338 00175418  38 C0 00 19 */	li r6, 0x19
/* 8017833C 0017541C  7C 00 1E 70 */	srawi r0, r0, 3
/* 80178340 00175420  54 04 0F FE */	srwi r4, r0, 31
/* 80178344 00175424  7C 80 22 14 */	add r4, r0, r4
/* 80178348 00175428  48 0D 39 2D */	bl RwIm3DTransform
/* 8017834C 0017542C  38 60 00 03 */	li r3, 0x3
/* 80178350 00175430  48 0D 3B F1 */	bl RwIm3DRenderPrimitive
/* 80178354 00175434  48 0D 3A 01 */	bl RwIm3DEnd
/* 80178358 00175438  7F E3 FB 78 */	mr r3, r31
/* 8017835C 0017543C  4B EB B7 29 */	bl xMemPopTemp__FPv
/* 80178360 00175440  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80178364 00175444  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80178368 00175448  83 C1 00 08 */	lwz r30, 0x8(r1)
/* 8017836C 0017544C  7C 08 03 A6 */	mtlr r0
/* 80178370 00175450  38 21 00 10 */	addi r1, r1, 0x10
/* 80178374 00175454  4E 80 00 20 */	blr
.endfn render_beam__12zNPCDutchmanFv

# zNPCDutchman::render_halo()
.fn render_halo__12zNPCDutchmanFv, global
/* 80178378 00175458  94 21 FF 70 */	stwu r1, -0x90(r1)
/* 8017837C 0017545C  7C 08 02 A6 */	mflr r0
/* 80178380 00175460  3C 80 80 33 */	lis r4, "tweak__30@unnamed@zNPCTypeDutchman_cpp@"@ha
/* 80178384 00175464  3C A0 80 3C */	lis r5, globals@ha
/* 80178388 00175468  90 01 00 94 */	stw r0, 0x94(r1)
/* 8017838C 0017546C  93 E1 00 8C */	stw r31, 0x8c(r1)
/* 80178390 00175470  3B E4 A5 78 */	addi r31, r4, "tweak__30@unnamed@zNPCTypeDutchman_cpp@"@l
/* 80178394 00175474  93 C1 00 88 */	stw r30, 0x88(r1)
/* 80178398 00175478  93 A1 00 84 */	stw r29, 0x84(r1)
/* 8017839C 0017547C  7C 7D 1B 78 */	mr r29, r3
/* 801783A0 00175480  38 65 05 58 */	addi r3, r5, globals@l
/* 801783A4 00175484  C0 1F 00 48 */	lfs f0, 0x48(r31)
/* 801783A8 00175488  3B C3 00 14 */	addi r30, r3, 0x14
/* 801783AC 0017548C  38 61 00 2C */	addi r3, r1, 0x2c
/* 801783B0 00175490  FC 20 00 50 */	fneg f1, f0
/* 801783B4 00175494  38 9E 00 20 */	addi r4, r30, 0x20
/* 801783B8 00175498  4B E9 2D 69 */	bl __ml__5xVec3CFf
/* 801783BC 0017549C  38 61 00 58 */	addi r3, r1, 0x58
/* 801783C0 001754A0  38 81 00 2C */	addi r4, r1, 0x2c
/* 801783C4 001754A4  4B E9 2E A1 */	bl __as__5xVec3FRC5xVec3
/* 801783C8 001754A8  C0 3F 00 48 */	lfs f1, 0x48(r31)
/* 801783CC 001754AC  38 61 00 20 */	addi r3, r1, 0x20
/* 801783D0 001754B0  38 9E 00 10 */	addi r4, r30, 0x10
/* 801783D4 001754B4  4B E9 2D 4D */	bl __ml__5xVec3CFf
/* 801783D8 001754B8  38 61 00 48 */	addi r3, r1, 0x48
/* 801783DC 001754BC  38 81 00 20 */	addi r4, r1, 0x20
/* 801783E0 001754C0  4B E9 2E 85 */	bl __as__5xVec3FRC5xVec3
/* 801783E4 001754C4  C0 1F 00 48 */	lfs f0, 0x48(r31)
/* 801783E8 001754C8  7F C4 F3 78 */	mr r4, r30
/* 801783EC 001754CC  38 61 00 14 */	addi r3, r1, 0x14
/* 801783F0 001754D0  FC 20 00 50 */	fneg f1, f0
/* 801783F4 001754D4  4B E9 2D 2D */	bl __ml__5xVec3CFf
/* 801783F8 001754D8  38 61 00 38 */	addi r3, r1, 0x38
/* 801783FC 001754DC  38 81 00 14 */	addi r4, r1, 0x14
/* 80178400 001754E0  4B E9 2E 65 */	bl __as__5xVec3FRC5xVec3
/* 80178404 001754E4  7F A4 EB 78 */	mr r4, r29
/* 80178408 001754E8  38 61 00 08 */	addi r3, r1, 0x8
/* 8017840C 001754EC  48 00 35 C5 */	bl get_chest_loc__12zNPCDutchmanCFv
/* 80178410 001754F0  38 61 00 68 */	addi r3, r1, 0x68
/* 80178414 001754F4  38 81 00 08 */	addi r4, r1, 0x8
/* 80178418 001754F8  4B E9 2E 4D */	bl __as__5xVec3FRC5xVec3
/* 8017841C 001754FC  3C 60 80 33 */	lis r3, "tweak__30@unnamed@zNPCTypeDutchman_cpp@"@ha
/* 80178420 00175500  C0 21 00 6C */	lfs f1, 0x6c(r1)
/* 80178424 00175504  38 63 A5 78 */	addi r3, r3, "tweak__30@unnamed@zNPCTypeDutchman_cpp@"@l
/* 80178428 00175508  C0 03 00 4C */	lfs f0, 0x4c(r3)
/* 8017842C 0017550C  EC 01 00 2A */	fadds f0, f1, f0
/* 80178430 00175510  D0 01 00 6C */	stfs f0, 0x6c(r1)
/* 80178434 00175514  83 E1 00 8C */	lwz r31, 0x8c(r1)
/* 80178438 00175518  83 C1 00 88 */	lwz r30, 0x88(r1)
/* 8017843C 0017551C  83 A1 00 84 */	lwz r29, 0x84(r1)
/* 80178440 00175520  80 01 00 94 */	lwz r0, 0x94(r1)
/* 80178444 00175524  7C 08 03 A6 */	mtlr r0
/* 80178448 00175528  38 21 00 90 */	addi r1, r1, 0x90
/* 8017844C 0017552C  4E 80 00 20 */	blr
.endfn render_halo__12zNPCDutchmanFv

# zNPCGoalDutchmanNil::create(int, RyzMemGrow*, void*)
.fn create__19zNPCGoalDutchmanNilFiP10RyzMemGrowPv, global
/* 80178450 00175530  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80178454 00175534  7C 08 02 A6 */	mflr r0
/* 80178458 00175538  90 01 00 14 */	stw r0, 0x14(r1)
/* 8017845C 0017553C  7C 80 23 78 */	mr r0, r4
/* 80178460 00175540  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80178464 00175544  7C BF 2B 78 */	mr r31, r5
/* 80178468 00175548  7C 05 03 78 */	mr r5, r0
/* 8017846C 0017554C  93 C1 00 08 */	stw r30, 0x8(r1)
/* 80178470 00175550  7C 7E 1B 78 */	mr r30, r3
/* 80178474 00175554  38 60 00 4C */	li r3, 0x4c
/* 80178478 00175558  7F C4 F3 78 */	mr r4, r30
/* 8017847C 0017555C  4B F9 6C D5 */	bl __nw__10RyzMemDataFUliP10RyzMemGrow
/* 80178480 00175560  7C 64 1B 79 */	mr. r4, r3
/* 80178484 00175564  41 82 00 14 */	beq .L_80178498
/* 80178488 00175568  7F C4 F3 78 */	mr r4, r30
/* 8017848C 0017556C  7F E5 FB 78 */	mr r5, r31
/* 80178490 00175570  48 00 35 75 */	bl __ct__19zNPCGoalDutchmanNilFiR12zNPCDutchman
/* 80178494 00175574  7C 64 1B 78 */	mr r4, r3
.L_80178498:
/* 80178498 00175578  28 04 00 00 */	cmplwi r4, 0x0
/* 8017849C 0017557C  41 82 00 08 */	beq .L_801784A4
/* 801784A0 00175580  38 84 00 0C */	addi r4, r4, 0xc
.L_801784A4:
/* 801784A4 00175584  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801784A8 00175588  7C 83 23 78 */	mr r3, r4
/* 801784AC 0017558C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 801784B0 00175590  83 C1 00 08 */	lwz r30, 0x8(r1)
/* 801784B4 00175594  7C 08 03 A6 */	mtlr r0
/* 801784B8 00175598  38 21 00 10 */	addi r1, r1, 0x10
/* 801784BC 0017559C  4E 80 00 20 */	blr
.endfn create__19zNPCGoalDutchmanNilFiP10RyzMemGrowPv

# zNPCGoalDutchmanInitiate::create(int, RyzMemGrow*, void*)
.fn create__24zNPCGoalDutchmanInitiateFiP10RyzMemGrowPv, global
/* 801784C0 001755A0  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801784C4 001755A4  7C 08 02 A6 */	mflr r0
/* 801784C8 001755A8  90 01 00 14 */	stw r0, 0x14(r1)
/* 801784CC 001755AC  7C 80 23 78 */	mr r0, r4
/* 801784D0 001755B0  93 E1 00 0C */	stw r31, 0xc(r1)
/* 801784D4 001755B4  7C BF 2B 78 */	mr r31, r5
/* 801784D8 001755B8  7C 05 03 78 */	mr r5, r0
/* 801784DC 001755BC  93 C1 00 08 */	stw r30, 0x8(r1)
/* 801784E0 001755C0  7C 7E 1B 78 */	mr r30, r3
/* 801784E4 001755C4  38 60 00 50 */	li r3, 0x50
/* 801784E8 001755C8  7F C4 F3 78 */	mr r4, r30
/* 801784EC 001755CC  4B F9 6C 65 */	bl __nw__10RyzMemDataFUliP10RyzMemGrow
/* 801784F0 001755D0  7C 64 1B 79 */	mr. r4, r3
/* 801784F4 001755D4  41 82 00 14 */	beq .L_80178508
/* 801784F8 001755D8  7F C4 F3 78 */	mr r4, r30
/* 801784FC 001755DC  7F E5 FB 78 */	mr r5, r31
/* 80178500 001755E0  48 00 35 41 */	bl __ct__24zNPCGoalDutchmanInitiateFiR12zNPCDutchman
/* 80178504 001755E4  7C 64 1B 78 */	mr r4, r3
.L_80178508:
/* 80178508 001755E8  28 04 00 00 */	cmplwi r4, 0x0
/* 8017850C 001755EC  41 82 00 08 */	beq .L_80178514
/* 80178510 001755F0  38 84 00 0C */	addi r4, r4, 0xc
.L_80178514:
/* 80178514 001755F4  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80178518 001755F8  7C 83 23 78 */	mr r3, r4
/* 8017851C 001755FC  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80178520 00175600  83 C1 00 08 */	lwz r30, 0x8(r1)
/* 80178524 00175604  7C 08 03 A6 */	mtlr r0
/* 80178528 00175608  38 21 00 10 */	addi r1, r1, 0x10
/* 8017852C 0017560C  4E 80 00 20 */	blr
.endfn create__24zNPCGoalDutchmanInitiateFiP10RyzMemGrowPv

# zNPCGoalDutchmanInitiate::Enter(float, void*)
.fn Enter__24zNPCGoalDutchmanInitiateFfPv, global
/* 80178530 00175610  94 21 FF C0 */	stwu r1, -0x40(r1)
/* 80178534 00175614  7C 08 02 A6 */	mflr r0
/* 80178538 00175618  90 01 00 44 */	stw r0, 0x44(r1)
/* 8017853C 0017561C  DB E1 00 30 */	stfd f31, 0x30(r1)
/* 80178540 00175620  F3 E1 00 38 */	psq_st f31, 0x38(r1), 0, qr0
/* 80178544 00175624  BF 41 00 18 */	stmw r26, 0x18(r1)
/* 80178548 00175628  7C 7E 1B 78 */	mr r30, r3
/* 8017854C 0017562C  FF E0 08 90 */	fmr f31, f1
/* 80178550 00175630  80 63 00 4C */	lwz r3, 0x4c(r3)
/* 80178554 00175634  7C 9F 23 78 */	mr r31, r4
/* 80178558 00175638  48 00 33 F5 */	bl get_orbit__12zNPCDutchmanCFv
/* 8017855C 0017563C  80 9E 00 4C */	lwz r4, 0x4c(r30)
/* 80178560 00175640  7C 7D 1B 78 */	mr r29, r3
/* 80178564 00175644  80 64 02 0C */	lwz r3, 0x20c(r4)
/* 80178568 00175648  4B F6 0C B9 */	bl PosGet__10zMovePointFv
/* 8017856C 0017564C  83 9E 00 4C */	lwz r28, 0x4c(r30)
/* 80178570 00175650  7C 7B 1B 78 */	mr r27, r3
/* 80178574 00175654  7F 64 DB 78 */	mr r4, r27
/* 80178578 00175658  80 BC 00 24 */	lwz r5, 0x24(r28)
/* 8017857C 0017565C  80 7C 00 48 */	lwz r3, 0x48(r28)
/* 80178580 00175660  80 A5 00 4C */	lwz r5, 0x4c(r5)
/* 80178584 00175664  38 63 00 30 */	addi r3, r3, 0x30
/* 80178588 00175668  3B 45 00 30 */	addi r26, r5, 0x30
/* 8017858C 0017566C  4B E9 2C D9 */	bl __as__5xVec3FRC5xVec3
/* 80178590 00175670  7C 64 1B 78 */	mr r4, r3
/* 80178594 00175674  7F 43 D3 78 */	mr r3, r26
/* 80178598 00175678  4B E9 2C CD */	bl __as__5xVec3FRC5xVec3
/* 8017859C 0017567C  C0 3B 00 00 */	lfs f1, 0x0(r27)
/* 801785A0 00175680  38 61 00 08 */	addi r3, r1, 0x8
/* 801785A4 00175684  C0 1D 00 00 */	lfs f0, 0x0(r29)
/* 801785A8 00175688  80 82 C0 A0 */	lwz r4, "@3187"@sda21(r2)
/* 801785AC 0017568C  80 02 C0 A4 */	lwz r0, "@3187"+0x4@sda21(r2)
/* 801785B0 00175690  EC 41 00 28 */	fsubs f2, f1, f0
/* 801785B4 00175694  90 81 00 08 */	stw r4, 0x8(r1)
/* 801785B8 00175698  C0 3B 00 08 */	lfs f1, 0x8(r27)
/* 801785BC 0017569C  C0 1D 00 08 */	lfs f0, 0x8(r29)
/* 801785C0 001756A0  90 01 00 0C */	stw r0, 0xc(r1)
/* 801785C4 001756A4  EC 01 00 28 */	fsubs f0, f1, f0
/* 801785C8 001756A8  D0 41 00 08 */	stfs f2, 0x8(r1)
/* 801785CC 001756AC  D0 01 00 0C */	stfs f0, 0xc(r1)
/* 801785D0 001756B0  4B E9 D3 8D */	bl length2__5xVec2CFv
/* 801785D4 001756B4  C0 02 AD 38 */	lfs f0, "@1996"@sda21(r2)
/* 801785D8 001756B8  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 801785DC 001756BC  40 80 00 24 */	bge .L_80178600
/* 801785E0 001756C0  C0 1D 00 00 */	lfs f0, 0x0(r29)
/* 801785E4 001756C4  3C 60 80 33 */	lis r3, "tweak__30@unnamed@zNPCTypeDutchman_cpp@"@ha
/* 801785E8 001756C8  D0 1C 02 EC */	stfs f0, 0x2ec(r28)
/* 801785EC 001756CC  C0 3D 00 08 */	lfs f1, 0x8(r29)
/* 801785F0 001756D0  C0 03 A5 78 */	lfs f0, "tweak__30@unnamed@zNPCTypeDutchman_cpp@"@l(r3)
/* 801785F4 001756D4  EC 01 00 2A */	fadds f0, f1, f0
/* 801785F8 001756D8  D0 1C 02 F4 */	stfs f0, 0x2f4(r28)
/* 801785FC 001756DC  48 00 00 34 */	b .L_80178630
.L_80178600:
/* 80178600 001756E0  4B E9 21 FD */	bl xsqrt__Ff
/* 80178604 001756E4  3C 60 80 33 */	lis r3, "tweak__30@unnamed@zNPCTypeDutchman_cpp@"@ha
/* 80178608 001756E8  C0 61 00 08 */	lfs f3, 0x8(r1)
/* 8017860C 001756EC  C0 83 A5 78 */	lfs f4, "tweak__30@unnamed@zNPCTypeDutchman_cpp@"@l(r3)
/* 80178610 001756F0  C0 1D 00 00 */	lfs f0, 0x0(r29)
/* 80178614 001756F4  EC 24 08 24 */	fdivs f1, f4, f1
/* 80178618 001756F8  C0 41 00 0C */	lfs f2, 0xc(r1)
/* 8017861C 001756FC  EC 03 00 7A */	fmadds f0, f3, f1, f0
/* 80178620 00175700  D0 1C 02 EC */	stfs f0, 0x2ec(r28)
/* 80178624 00175704  C0 1D 00 08 */	lfs f0, 0x8(r29)
/* 80178628 00175708  EC 02 00 7A */	fmadds f0, f2, f1, f0
/* 8017862C 0017570C  D0 1C 02 F4 */	stfs f0, 0x2f4(r28)
.L_80178630:
/* 80178630 00175710  C0 1D 00 04 */	lfs f0, 0x4(r29)
/* 80178634 00175714  D0 1C 02 F0 */	stfs f0, 0x2f0(r28)
/* 80178638 00175718  80 7E 00 4C */	lwz r3, 0x4c(r30)
/* 8017863C 0017571C  C0 22 AC B8 */	lfs f1, "@1605"@sda21(r2)
/* 80178640 00175720  4B FF DF D9 */	bl dissolve__12zNPCDutchmanFf
/* 80178644 00175724  80 7E 00 4C */	lwz r3, 0x4c(r30)
/* 80178648 00175728  48 00 31 E5 */	bl face_player__12zNPCDutchmanFv
/* 8017864C 0017572C  80 9E 00 4C */	lwz r4, 0x4c(r30)
/* 80178650 00175730  38 00 00 01 */	li r0, 0x1
/* 80178654 00175734  3C 60 80 33 */	lis r3, "tweak__30@unnamed@zNPCTypeDutchman_cpp@"@ha
/* 80178658 00175738  90 04 02 BC */	stw r0, 0x2bc(r4)
/* 8017865C 0017573C  38 83 A5 78 */	addi r4, r3, "tweak__30@unnamed@zNPCTypeDutchman_cpp@"@l
/* 80178660 00175740  C0 04 00 58 */	lfs f0, 0x58(r4)
/* 80178664 00175744  80 7E 00 4C */	lwz r3, 0x4c(r30)
/* 80178668 00175748  D0 03 02 E0 */	stfs f0, 0x2e0(r3)
/* 8017866C 0017574C  C0 04 00 5C */	lfs f0, 0x5c(r4)
/* 80178670 00175750  80 7E 00 4C */	lwz r3, 0x4c(r30)
/* 80178674 00175754  D0 03 02 E4 */	stfs f0, 0x2e4(r3)
/* 80178678 00175758  C0 22 AC B8 */	lfs f1, "@1605"@sda21(r2)
/* 8017867C 0017575C  80 7E 00 4C */	lwz r3, 0x4c(r30)
/* 80178680 00175760  FC 60 08 90 */	fmr f3, f1
/* 80178684 00175764  C0 44 00 60 */	lfs f2, 0x60(r4)
/* 80178688 00175768  38 63 02 F8 */	addi r3, r3, 0x2f8
/* 8017868C 0017576C  4B E9 2A 61 */	bl assign__5xVec3Ffff
/* 80178690 00175770  FC 20 F8 90 */	fmr f1, f31
/* 80178694 00175774  7F C3 F3 78 */	mr r3, r30
/* 80178698 00175778  7F E4 FB 78 */	mr r4, r31
/* 8017869C 0017577C  4B F5 CA 79 */	bl Enter__14zNPCGoalCommonFfPv
/* 801786A0 00175780  E3 E1 00 38 */	psq_l f31, 0x38(r1), 0, qr0
/* 801786A4 00175784  CB E1 00 30 */	lfd f31, 0x30(r1)
/* 801786A8 00175788  BB 41 00 18 */	lmw r26, 0x18(r1)
/* 801786AC 0017578C  80 01 00 44 */	lwz r0, 0x44(r1)
/* 801786B0 00175790  7C 08 03 A6 */	mtlr r0
/* 801786B4 00175794  38 21 00 40 */	addi r1, r1, 0x40
/* 801786B8 00175798  4E 80 00 20 */	blr
.endfn Enter__24zNPCGoalDutchmanInitiateFfPv

# zNPCGoalDutchmanInitiate::Exit(float, void*)
.fn Exit__24zNPCGoalDutchmanInitiateFfPv, global
/* 801786BC 0017579C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801786C0 001757A0  7C 08 02 A6 */	mflr r0
/* 801786C4 001757A4  3C C0 80 33 */	lis r6, "tweak__30@unnamed@zNPCTypeDutchman_cpp@"@ha
/* 801786C8 001757A8  90 01 00 14 */	stw r0, 0x14(r1)
/* 801786CC 001757AC  38 C6 A5 78 */	addi r6, r6, "tweak__30@unnamed@zNPCTypeDutchman_cpp@"@l
/* 801786D0 001757B0  80 A3 00 4C */	lwz r5, 0x4c(r3)
/* 801786D4 001757B4  C0 06 00 1C */	lfs f0, 0x1c(r6)
/* 801786D8 001757B8  D0 05 02 E4 */	stfs f0, 0x2e4(r5)
/* 801786DC 001757BC  4B F5 CD 41 */	bl Exit__5xGoalFfPv
/* 801786E0 001757C0  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801786E4 001757C4  7C 08 03 A6 */	mtlr r0
/* 801786E8 001757C8  38 21 00 10 */	addi r1, r1, 0x10
/* 801786EC 001757CC  4E 80 00 20 */	blr
.endfn Exit__24zNPCGoalDutchmanInitiateFfPv

# zNPCGoalDutchmanInitiate::Process(en_trantype*, float, void*, xScene*)
.fn Process__24zNPCGoalDutchmanInitiateFP11en_trantypefPvP6xScene, global
/* 801786F0 001757D0  94 21 FF C0 */	stwu r1, -0x40(r1)
/* 801786F4 001757D4  7C 08 02 A6 */	mflr r0
/* 801786F8 001757D8  90 01 00 44 */	stw r0, 0x44(r1)
/* 801786FC 001757DC  DB E1 00 30 */	stfd f31, 0x30(r1)
/* 80178700 001757E0  F3 E1 00 38 */	psq_st f31, 0x38(r1), 0, qr0
/* 80178704 001757E4  93 E1 00 2C */	stw r31, 0x2c(r1)
/* 80178708 001757E8  93 C1 00 28 */	stw r30, 0x28(r1)
/* 8017870C 001757EC  93 A1 00 24 */	stw r29, 0x24(r1)
/* 80178710 001757F0  93 81 00 20 */	stw r28, 0x20(r1)
/* 80178714 001757F4  7C 7C 1B 78 */	mr r28, r3
/* 80178718 001757F8  FF E0 08 90 */	fmr f31, f1
/* 8017871C 001757FC  80 63 00 4C */	lwz r3, 0x4c(r3)
/* 80178720 00175800  7C 9D 23 78 */	mr r29, r4
/* 80178724 00175804  7C BE 2B 78 */	mr r30, r5
/* 80178728 00175808  7C DF 33 78 */	mr r31, r6
/* 8017872C 0017580C  38 63 02 F8 */	addi r3, r3, 0x2f8
/* 80178730 00175810  4B E9 29 CD */	bl length2__5xVec3CFv
/* 80178734 00175814  C0 02 AC EC */	lfs f0, "@1977"@sda21(r2)
/* 80178738 00175818  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8017873C 0017581C  40 80 00 5C */	bge .L_80178798
/* 80178740 00175820  80 7C 00 4C */	lwz r3, 0x4c(r28)
/* 80178744 00175824  48 00 30 D9 */	bl get_center__12zNPCDutchmanCFv
/* 80178748 00175828  80 9C 00 4C */	lwz r4, 0x4c(r28)
/* 8017874C 0017582C  7C 65 1B 78 */	mr r5, r3
/* 80178750 00175830  38 61 00 08 */	addi r3, r1, 0x8
/* 80178754 00175834  38 84 02 EC */	addi r4, r4, 0x2ec
/* 80178758 00175838  4B E9 2A 75 */	bl __mi__5xVec3CFRC5xVec3
/* 8017875C 0017583C  38 61 00 08 */	addi r3, r1, 0x8
/* 80178760 00175840  4B E9 29 9D */	bl length2__5xVec3CFv
/* 80178764 00175844  C0 02 AC EC */	lfs f0, "@1977"@sda21(r2)
/* 80178768 00175848  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8017876C 0017584C  40 80 00 2C */	bge .L_80178798
/* 80178770 00175850  80 7C 00 4C */	lwz r3, 0x4c(r28)
/* 80178774 00175854  C0 22 AC CC */	lfs f1, "@1689"@sda21(r2)
/* 80178778 00175858  48 00 33 15 */	bl turning__12zNPCDutchmanCFf
/* 8017877C 0017585C  54 60 06 3F */	clrlwi. r0, r3, 24
/* 80178780 00175860  40 82 00 18 */	bne .L_80178798
/* 80178784 00175864  38 00 00 01 */	li r0, 0x1
/* 80178788 00175868  3C 60 4E 47 */	lis r3, 0x4e47
/* 8017878C 0017586C  90 1D 00 00 */	stw r0, 0x0(r29)
/* 80178790 00175870  38 63 4D 42 */	addi r3, r3, 0x4d42
/* 80178794 00175874  48 00 00 1C */	b .L_801787B0
.L_80178798:
/* 80178798 00175878  FC 20 F8 90 */	fmr f1, f31
/* 8017879C 0017587C  7F 83 E3 78 */	mr r3, r28
/* 801787A0 00175880  7F A4 EB 78 */	mr r4, r29
/* 801787A4 00175884  7F C5 F3 78 */	mr r5, r30
/* 801787A8 00175888  7F E6 FB 78 */	mr r6, r31
/* 801787AC 0017588C  4B F9 63 9D */	bl Process__5xGoalFP11en_trantypefPvP6xScene
.L_801787B0:
/* 801787B0 00175890  E3 E1 00 38 */	psq_l f31, 0x38(r1), 0, qr0
/* 801787B4 00175894  80 01 00 44 */	lwz r0, 0x44(r1)
/* 801787B8 00175898  CB E1 00 30 */	lfd f31, 0x30(r1)
/* 801787BC 0017589C  83 E1 00 2C */	lwz r31, 0x2c(r1)
/* 801787C0 001758A0  83 C1 00 28 */	lwz r30, 0x28(r1)
/* 801787C4 001758A4  83 A1 00 24 */	lwz r29, 0x24(r1)
/* 801787C8 001758A8  83 81 00 20 */	lwz r28, 0x20(r1)
/* 801787CC 001758AC  7C 08 03 A6 */	mtlr r0
/* 801787D0 001758B0  38 21 00 40 */	addi r1, r1, 0x40
/* 801787D4 001758B4  4E 80 00 20 */	blr
.endfn Process__24zNPCGoalDutchmanInitiateFP11en_trantypefPvP6xScene

# zNPCGoalDutchmanIdle::create(int, RyzMemGrow*, void*)
.fn create__20zNPCGoalDutchmanIdleFiP10RyzMemGrowPv, global
/* 801787D8 001758B8  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801787DC 001758BC  7C 08 02 A6 */	mflr r0
/* 801787E0 001758C0  90 01 00 14 */	stw r0, 0x14(r1)
/* 801787E4 001758C4  7C 80 23 78 */	mr r0, r4
/* 801787E8 001758C8  93 E1 00 0C */	stw r31, 0xc(r1)
/* 801787EC 001758CC  7C BF 2B 78 */	mr r31, r5
/* 801787F0 001758D0  7C 05 03 78 */	mr r5, r0
/* 801787F4 001758D4  93 C1 00 08 */	stw r30, 0x8(r1)
/* 801787F8 001758D8  7C 7E 1B 78 */	mr r30, r3
/* 801787FC 001758DC  38 60 00 50 */	li r3, 0x50
/* 80178800 001758E0  7F C4 F3 78 */	mr r4, r30
/* 80178804 001758E4  4B F9 69 4D */	bl __nw__10RyzMemDataFUliP10RyzMemGrow
/* 80178808 001758E8  7C 64 1B 79 */	mr. r4, r3
/* 8017880C 001758EC  41 82 00 14 */	beq .L_80178820
/* 80178810 001758F0  7F C4 F3 78 */	mr r4, r30
/* 80178814 001758F4  7F E5 FB 78 */	mr r5, r31
/* 80178818 001758F8  48 00 33 19 */	bl __ct__20zNPCGoalDutchmanIdleFiR12zNPCDutchman
/* 8017881C 001758FC  7C 64 1B 78 */	mr r4, r3
.L_80178820:
/* 80178820 00175900  28 04 00 00 */	cmplwi r4, 0x0
/* 80178824 00175904  41 82 00 08 */	beq .L_8017882C
/* 80178828 00175908  38 84 00 0C */	addi r4, r4, 0xc
.L_8017882C:
/* 8017882C 0017590C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80178830 00175910  7C 83 23 78 */	mr r3, r4
/* 80178834 00175914  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80178838 00175918  83 C1 00 08 */	lwz r30, 0x8(r1)
/* 8017883C 0017591C  7C 08 03 A6 */	mtlr r0
/* 80178840 00175920  38 21 00 10 */	addi r1, r1, 0x10
/* 80178844 00175924  4E 80 00 20 */	blr
.endfn create__20zNPCGoalDutchmanIdleFiP10RyzMemGrowPv

# zNPCGoalDutchmanIdle::Enter(float, void*)
.fn Enter__20zNPCGoalDutchmanIdleFfPv, global
/* 80178848 00175928  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 8017884C 0017592C  7C 08 02 A6 */	mflr r0
/* 80178850 00175930  90 01 00 24 */	stw r0, 0x24(r1)
/* 80178854 00175934  DB E1 00 18 */	stfd f31, 0x18(r1)
/* 80178858 00175938  FF E0 08 90 */	fmr f31, f1
/* 8017885C 0017593C  93 E1 00 14 */	stw r31, 0x14(r1)
/* 80178860 00175940  7C 9F 23 78 */	mr r31, r4
/* 80178864 00175944  93 C1 00 10 */	stw r30, 0x10(r1)
/* 80178868 00175948  7C 7E 1B 78 */	mr r30, r3
/* 8017886C 0017594C  80 63 00 4C */	lwz r3, 0x4c(r3)
/* 80178870 00175950  48 00 2F BD */	bl face_player__12zNPCDutchmanFv
/* 80178874 00175954  FC 20 F8 90 */	fmr f1, f31
/* 80178878 00175958  7F C3 F3 78 */	mr r3, r30
/* 8017887C 0017595C  7F E4 FB 78 */	mr r4, r31
/* 80178880 00175960  4B F5 C8 95 */	bl Enter__14zNPCGoalCommonFfPv
/* 80178884 00175964  80 01 00 24 */	lwz r0, 0x24(r1)
/* 80178888 00175968  CB E1 00 18 */	lfd f31, 0x18(r1)
/* 8017888C 0017596C  83 E1 00 14 */	lwz r31, 0x14(r1)
/* 80178890 00175970  83 C1 00 10 */	lwz r30, 0x10(r1)
/* 80178894 00175974  7C 08 03 A6 */	mtlr r0
/* 80178898 00175978  38 21 00 20 */	addi r1, r1, 0x20
/* 8017889C 0017597C  4E 80 00 20 */	blr
.endfn Enter__20zNPCGoalDutchmanIdleFfPv

# zNPCGoalDutchmanIdle::Exit(float, void*)
.fn Exit__20zNPCGoalDutchmanIdleFfPv, global
/* 801788A0 00175980  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801788A4 00175984  7C 08 02 A6 */	mflr r0
/* 801788A8 00175988  90 01 00 14 */	stw r0, 0x14(r1)
/* 801788AC 0017598C  4B F5 CB 71 */	bl Exit__5xGoalFfPv
/* 801788B0 00175990  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801788B4 00175994  7C 08 03 A6 */	mtlr r0
/* 801788B8 00175998  38 21 00 10 */	addi r1, r1, 0x10
/* 801788BC 0017599C  4E 80 00 20 */	blr
.endfn Exit__20zNPCGoalDutchmanIdleFfPv

# zNPCGoalDutchmanIdle::Process(en_trantype*, float, void*, xScene*)
.fn Process__20zNPCGoalDutchmanIdleFP11en_trantypefPvP6xScene, global
/* 801788C0 001759A0  94 21 FF D0 */	stwu r1, -0x30(r1)
/* 801788C4 001759A4  7C 08 02 A6 */	mflr r0
/* 801788C8 001759A8  90 01 00 34 */	stw r0, 0x34(r1)
/* 801788CC 001759AC  DB E1 00 20 */	stfd f31, 0x20(r1)
/* 801788D0 001759B0  F3 E1 00 28 */	psq_st f31, 0x28(r1), 0, qr0
/* 801788D4 001759B4  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 801788D8 001759B8  93 C1 00 18 */	stw r30, 0x18(r1)
/* 801788DC 001759BC  93 A1 00 14 */	stw r29, 0x14(r1)
/* 801788E0 001759C0  93 81 00 10 */	stw r28, 0x10(r1)
/* 801788E4 001759C4  7C 7C 1B 78 */	mr r28, r3
/* 801788E8 001759C8  FF E0 08 90 */	fmr f31, f1
/* 801788EC 001759CC  80 63 00 4C */	lwz r3, 0x4c(r3)
/* 801788F0 001759D0  7C 9D 23 78 */	mr r29, r4
/* 801788F4 001759D4  7C BE 2B 78 */	mr r30, r5
/* 801788F8 001759D8  7C DF 33 78 */	mr r31, r6
/* 801788FC 001759DC  4B FF CE 51 */	bl goal_delay__12zNPCDutchmanFv
/* 80178900 001759E0  80 7C 00 4C */	lwz r3, 0x4c(r28)
/* 80178904 001759E4  C0 03 02 D0 */	lfs f0, 0x2d0(r3)
/* 80178908 001759E8  FC 00 08 40 */	fcmpo cr0, f0, f1
/* 8017890C 001759EC  4C 41 13 82 */	cror eq, gt, eq
/* 80178910 001759F0  40 82 00 18 */	bne .L_80178928
/* 80178914 001759F4  38 00 00 01 */	li r0, 0x1
/* 80178918 001759F8  90 1D 00 00 */	stw r0, 0x0(r29)
/* 8017891C 001759FC  80 7C 00 4C */	lwz r3, 0x4c(r28)
/* 80178920 00175A00  4B FF CD C5 */	bl next_goal__12zNPCDutchmanFv
/* 80178924 00175A04  48 00 00 1C */	b .L_80178940
.L_80178928:
/* 80178928 00175A08  FC 20 F8 90 */	fmr f1, f31
/* 8017892C 00175A0C  7F 83 E3 78 */	mr r3, r28
/* 80178930 00175A10  7F A4 EB 78 */	mr r4, r29
/* 80178934 00175A14  7F C5 F3 78 */	mr r5, r30
/* 80178938 00175A18  7F E6 FB 78 */	mr r6, r31
/* 8017893C 00175A1C  4B F9 62 0D */	bl Process__5xGoalFP11en_trantypefPvP6xScene
.L_80178940:
/* 80178940 00175A20  E3 E1 00 28 */	psq_l f31, 0x28(r1), 0, qr0
/* 80178944 00175A24  80 01 00 34 */	lwz r0, 0x34(r1)
/* 80178948 00175A28  CB E1 00 20 */	lfd f31, 0x20(r1)
/* 8017894C 00175A2C  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 80178950 00175A30  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 80178954 00175A34  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 80178958 00175A38  83 81 00 10 */	lwz r28, 0x10(r1)
/* 8017895C 00175A3C  7C 08 03 A6 */	mtlr r0
/* 80178960 00175A40  38 21 00 30 */	addi r1, r1, 0x30
/* 80178964 00175A44  4E 80 00 20 */	blr
.endfn Process__20zNPCGoalDutchmanIdleFP11en_trantypefPvP6xScene

# zNPCGoalDutchmanDisappear::create(int, RyzMemGrow*, void*)
.fn create__25zNPCGoalDutchmanDisappearFiP10RyzMemGrowPv, global
/* 80178968 00175A48  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8017896C 00175A4C  7C 08 02 A6 */	mflr r0
/* 80178970 00175A50  90 01 00 14 */	stw r0, 0x14(r1)
/* 80178974 00175A54  7C 80 23 78 */	mr r0, r4
/* 80178978 00175A58  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8017897C 00175A5C  7C BF 2B 78 */	mr r31, r5
/* 80178980 00175A60  7C 05 03 78 */	mr r5, r0
/* 80178984 00175A64  93 C1 00 08 */	stw r30, 0x8(r1)
/* 80178988 00175A68  7C 7E 1B 78 */	mr r30, r3
/* 8017898C 00175A6C  38 60 00 50 */	li r3, 0x50
/* 80178990 00175A70  7F C4 F3 78 */	mr r4, r30
/* 80178994 00175A74  4B F9 67 BD */	bl __nw__10RyzMemDataFUliP10RyzMemGrow
/* 80178998 00175A78  7C 64 1B 79 */	mr. r4, r3
/* 8017899C 00175A7C  41 82 00 14 */	beq .L_801789B0
/* 801789A0 00175A80  7F C4 F3 78 */	mr r4, r30
/* 801789A4 00175A84  7F E5 FB 78 */	mr r5, r31
/* 801789A8 00175A88  48 00 31 D5 */	bl __ct__25zNPCGoalDutchmanDisappearFiR12zNPCDutchman
/* 801789AC 00175A8C  7C 64 1B 78 */	mr r4, r3
.L_801789B0:
/* 801789B0 00175A90  28 04 00 00 */	cmplwi r4, 0x0
/* 801789B4 00175A94  41 82 00 08 */	beq .L_801789BC
/* 801789B8 00175A98  38 84 00 0C */	addi r4, r4, 0xc
.L_801789BC:
/* 801789BC 00175A9C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801789C0 00175AA0  7C 83 23 78 */	mr r3, r4
/* 801789C4 00175AA4  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 801789C8 00175AA8  83 C1 00 08 */	lwz r30, 0x8(r1)
/* 801789CC 00175AAC  7C 08 03 A6 */	mtlr r0
/* 801789D0 00175AB0  38 21 00 10 */	addi r1, r1, 0x10
/* 801789D4 00175AB4  4E 80 00 20 */	blr
.endfn create__25zNPCGoalDutchmanDisappearFiP10RyzMemGrowPv

# zNPCGoalDutchmanDisappear::Enter(float, void*)
.fn Enter__25zNPCGoalDutchmanDisappearFfPv, global
/* 801789D8 00175AB8  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 801789DC 00175ABC  7C 08 02 A6 */	mflr r0
/* 801789E0 00175AC0  90 01 00 24 */	stw r0, 0x24(r1)
/* 801789E4 00175AC4  DB E1 00 10 */	stfd f31, 0x10(r1)
/* 801789E8 00175AC8  F3 E1 00 18 */	psq_st f31, 0x18(r1), 0, qr0
/* 801789EC 00175ACC  93 E1 00 0C */	stw r31, 0xc(r1)
/* 801789F0 00175AD0  93 C1 00 08 */	stw r30, 0x8(r1)
/* 801789F4 00175AD4  7C 7E 1B 78 */	mr r30, r3
/* 801789F8 00175AD8  3C 60 80 33 */	lis r3, "tweak__30@unnamed@zNPCTypeDutchman_cpp@"@ha
/* 801789FC 00175ADC  C0 02 AC B8 */	lfs f0, "@1605"@sda21(r2)
/* 80178A00 00175AE0  FF E0 08 90 */	fmr f31, f1
/* 80178A04 00175AE4  80 DE 00 4C */	lwz r6, 0x4c(r30)
/* 80178A08 00175AE8  38 A3 A5 78 */	addi r5, r3, "tweak__30@unnamed@zNPCTypeDutchman_cpp@"@l
/* 80178A0C 00175AEC  7C 9F 23 78 */	mr r31, r4
/* 80178A10 00175AF0  D0 06 02 D0 */	stfs f0, 0x2d0(r6)
/* 80178A14 00175AF4  80 7E 00 4C */	lwz r3, 0x4c(r30)
/* 80178A18 00175AF8  C0 25 00 C8 */	lfs f1, 0xc8(r5)
/* 80178A1C 00175AFC  4B FF DB FD */	bl dissolve__12zNPCDutchmanFf
/* 80178A20 00175B00  FC 20 F8 90 */	fmr f1, f31
/* 80178A24 00175B04  7F C3 F3 78 */	mr r3, r30
/* 80178A28 00175B08  7F E4 FB 78 */	mr r4, r31
/* 80178A2C 00175B0C  4B F5 C6 E9 */	bl Enter__14zNPCGoalCommonFfPv
/* 80178A30 00175B10  E3 E1 00 18 */	psq_l f31, 0x18(r1), 0, qr0
/* 80178A34 00175B14  80 01 00 24 */	lwz r0, 0x24(r1)
/* 80178A38 00175B18  CB E1 00 10 */	lfd f31, 0x10(r1)
/* 80178A3C 00175B1C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80178A40 00175B20  83 C1 00 08 */	lwz r30, 0x8(r1)
/* 80178A44 00175B24  7C 08 03 A6 */	mtlr r0
/* 80178A48 00175B28  38 21 00 20 */	addi r1, r1, 0x20
/* 80178A4C 00175B2C  4E 80 00 20 */	blr
.endfn Enter__25zNPCGoalDutchmanDisappearFfPv

# zNPCGoalDutchmanDisappear::Exit(float, void*)
.fn Exit__25zNPCGoalDutchmanDisappearFfPv, global
/* 80178A50 00175B30  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80178A54 00175B34  7C 08 02 A6 */	mflr r0
/* 80178A58 00175B38  90 01 00 14 */	stw r0, 0x14(r1)
/* 80178A5C 00175B3C  4B F5 C9 C1 */	bl Exit__5xGoalFfPv
/* 80178A60 00175B40  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80178A64 00175B44  7C 08 03 A6 */	mtlr r0
/* 80178A68 00175B48  38 21 00 10 */	addi r1, r1, 0x10
/* 80178A6C 00175B4C  4E 80 00 20 */	blr
.endfn Exit__25zNPCGoalDutchmanDisappearFfPv

# zNPCGoalDutchmanDisappear::Process(en_trantype*, float, void*, xScene*)
.fn Process__25zNPCGoalDutchmanDisappearFP11en_trantypefPvP6xScene, global
/* 80178A70 00175B50  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80178A74 00175B54  7C 08 02 A6 */	mflr r0
/* 80178A78 00175B58  3C E0 80 33 */	lis r7, "tweak__30@unnamed@zNPCTypeDutchman_cpp@"@ha
/* 80178A7C 00175B5C  90 01 00 14 */	stw r0, 0x14(r1)
/* 80178A80 00175B60  38 E7 A5 78 */	addi r7, r7, "tweak__30@unnamed@zNPCTypeDutchman_cpp@"@l
/* 80178A84 00175B64  81 03 00 4C */	lwz r8, 0x4c(r3)
/* 80178A88 00175B68  C0 07 00 C8 */	lfs f0, 0xc8(r7)
/* 80178A8C 00175B6C  C0 48 02 D0 */	lfs f2, 0x2d0(r8)
/* 80178A90 00175B70  FC 02 00 40 */	fcmpo cr0, f2, f0
/* 80178A94 00175B74  4C 41 13 82 */	cror eq, gt, eq
/* 80178A98 00175B78  40 82 00 18 */	bne .L_80178AB0
/* 80178A9C 00175B7C  38 00 00 01 */	li r0, 0x1
/* 80178AA0 00175B80  3C 60 4E 47 */	lis r3, 0x4e47
/* 80178AA4 00175B84  90 04 00 00 */	stw r0, 0x0(r4)
/* 80178AA8 00175B88  38 63 4D 41 */	addi r3, r3, 0x4d41
/* 80178AAC 00175B8C  48 00 00 08 */	b .L_80178AB4
.L_80178AB0:
/* 80178AB0 00175B90  4B F9 60 99 */	bl Process__5xGoalFP11en_trantypefPvP6xScene
.L_80178AB4:
/* 80178AB4 00175B94  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80178AB8 00175B98  7C 08 03 A6 */	mtlr r0
/* 80178ABC 00175B9C  38 21 00 10 */	addi r1, r1, 0x10
/* 80178AC0 00175BA0  4E 80 00 20 */	blr
.endfn Process__25zNPCGoalDutchmanDisappearFP11en_trantypefPvP6xScene

# zNPCGoalDutchmanTeleport::create(int, RyzMemGrow*, void*)
.fn create__24zNPCGoalDutchmanTeleportFiP10RyzMemGrowPv, global
/* 80178AC4 00175BA4  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80178AC8 00175BA8  7C 08 02 A6 */	mflr r0
/* 80178ACC 00175BAC  90 01 00 14 */	stw r0, 0x14(r1)
/* 80178AD0 00175BB0  7C 80 23 78 */	mr r0, r4
/* 80178AD4 00175BB4  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80178AD8 00175BB8  7C BF 2B 78 */	mr r31, r5
/* 80178ADC 00175BBC  7C 05 03 78 */	mr r5, r0
/* 80178AE0 00175BC0  93 C1 00 08 */	stw r30, 0x8(r1)
/* 80178AE4 00175BC4  7C 7E 1B 78 */	mr r30, r3
/* 80178AE8 00175BC8  38 60 00 50 */	li r3, 0x50
/* 80178AEC 00175BCC  7F C4 F3 78 */	mr r4, r30
/* 80178AF0 00175BD0  4B F9 66 61 */	bl __nw__10RyzMemDataFUliP10RyzMemGrow
/* 80178AF4 00175BD4  7C 64 1B 79 */	mr. r4, r3
/* 80178AF8 00175BD8  41 82 00 14 */	beq .L_80178B0C
/* 80178AFC 00175BDC  7F C4 F3 78 */	mr r4, r30
/* 80178B00 00175BE0  7F E5 FB 78 */	mr r5, r31
/* 80178B04 00175BE4  48 00 30 C5 */	bl __ct__24zNPCGoalDutchmanTeleportFiR12zNPCDutchman
/* 80178B08 00175BE8  7C 64 1B 78 */	mr r4, r3
.L_80178B0C:
/* 80178B0C 00175BEC  28 04 00 00 */	cmplwi r4, 0x0
/* 80178B10 00175BF0  41 82 00 08 */	beq .L_80178B18
/* 80178B14 00175BF4  38 84 00 0C */	addi r4, r4, 0xc
.L_80178B18:
/* 80178B18 00175BF8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80178B1C 00175BFC  7C 83 23 78 */	mr r3, r4
/* 80178B20 00175C00  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80178B24 00175C04  83 C1 00 08 */	lwz r30, 0x8(r1)
/* 80178B28 00175C08  7C 08 03 A6 */	mtlr r0
/* 80178B2C 00175C0C  38 21 00 10 */	addi r1, r1, 0x10
/* 80178B30 00175C10  4E 80 00 20 */	blr
.endfn create__24zNPCGoalDutchmanTeleportFiP10RyzMemGrowPv

# zNPCGoalDutchmanTeleport::Enter(float, void*)
.fn Enter__24zNPCGoalDutchmanTeleportFfPv, global
/* 80178B34 00175C14  94 21 FF D0 */	stwu r1, -0x30(r1)
/* 80178B38 00175C18  7C 08 02 A6 */	mflr r0
/* 80178B3C 00175C1C  90 01 00 34 */	stw r0, 0x34(r1)
/* 80178B40 00175C20  DB E1 00 20 */	stfd f31, 0x20(r1)
/* 80178B44 00175C24  F3 E1 00 28 */	psq_st f31, 0x28(r1), 0, qr0
/* 80178B48 00175C28  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 80178B4C 00175C2C  93 C1 00 18 */	stw r30, 0x18(r1)
/* 80178B50 00175C30  3C A0 80 33 */	lis r5, "tweak__30@unnamed@zNPCTypeDutchman_cpp@"@ha
/* 80178B54 00175C34  7C 7E 1B 78 */	mr r30, r3
/* 80178B58 00175C38  38 A5 A5 78 */	addi r5, r5, "tweak__30@unnamed@zNPCTypeDutchman_cpp@"@l
/* 80178B5C 00175C3C  7C 9F 23 78 */	mr r31, r4
/* 80178B60 00175C40  C0 05 00 C0 */	lfs f0, 0xc0(r5)
/* 80178B64 00175C44  FF E0 08 90 */	fmr f31, f1
/* 80178B68 00175C48  80 63 00 4C */	lwz r3, 0x4c(r3)
/* 80178B6C 00175C4C  38 85 00 A8 */	addi r4, r5, 0xa8
/* 80178B70 00175C50  D0 03 02 E4 */	stfs f0, 0x2e4(r3)
/* 80178B74 00175C54  C0 05 00 C4 */	lfs f0, 0xc4(r5)
/* 80178B78 00175C58  80 7E 00 4C */	lwz r3, 0x4c(r30)
/* 80178B7C 00175C5C  D0 03 02 E8 */	stfs f0, 0x2e8(r3)
/* 80178B80 00175C60  80 7E 00 4C */	lwz r3, 0x4c(r30)
/* 80178B84 00175C64  38 63 03 04 */	addi r3, r3, 0x304
/* 80178B88 00175C68  4B E9 26 DD */	bl __as__5xVec3FRC5xVec3
/* 80178B8C 00175C6C  80 BE 00 4C */	lwz r5, 0x4c(r30)
/* 80178B90 00175C70  3C 60 80 33 */	lis r3, "tweak__30@unnamed@zNPCTypeDutchman_cpp@"@ha
/* 80178B94 00175C74  38 83 A5 78 */	addi r4, r3, "tweak__30@unnamed@zNPCTypeDutchman_cpp@"@l
/* 80178B98 00175C78  38 65 03 10 */	addi r3, r5, 0x310
/* 80178B9C 00175C7C  38 84 00 B4 */	addi r4, r4, 0xb4
/* 80178BA0 00175C80  4B E9 26 C5 */	bl __as__5xVec3FRC5xVec3
/* 80178BA4 00175C84  80 7E 00 4C */	lwz r3, 0x4c(r30)
/* 80178BA8 00175C88  48 00 2C 75 */	bl get_center__12zNPCDutchmanCFv
/* 80178BAC 00175C8C  80 9E 00 4C */	lwz r4, 0x4c(r30)
/* 80178BB0 00175C90  7C 65 1B 78 */	mr r5, r3
/* 80178BB4 00175C94  C0 22 AD C8 */	lfs f1, "@3282"@sda21(r2)
/* 80178BB8 00175C98  38 61 00 08 */	addi r3, r1, 0x8
/* 80178BBC 00175C9C  C0 42 AD 94 */	lfs f2, "@2180"@sda21(r2)
/* 80178BC0 00175CA0  4B FF EF 59 */	bl random_orbit__12zNPCDutchmanCFRC5xVec3ff
/* 80178BC4 00175CA4  80 7E 00 4C */	lwz r3, 0x4c(r30)
/* 80178BC8 00175CA8  38 81 00 08 */	addi r4, r1, 0x8
/* 80178BCC 00175CAC  38 63 02 EC */	addi r3, r3, 0x2ec
/* 80178BD0 00175CB0  4B E9 26 95 */	bl __as__5xVec3FRC5xVec3
/* 80178BD4 00175CB4  80 7E 00 4C */	lwz r3, 0x4c(r30)
/* 80178BD8 00175CB8  38 83 02 EC */	addi r4, r3, 0x2ec
/* 80178BDC 00175CBC  4B FF F0 D1 */	bl turn_to_face__12zNPCDutchmanFRC5xVec3
/* 80178BE0 00175CC0  80 9E 00 4C */	lwz r4, 0x4c(r30)
/* 80178BE4 00175CC4  38 00 00 01 */	li r0, 0x1
/* 80178BE8 00175CC8  FC 20 F8 90 */	fmr f1, f31
/* 80178BEC 00175CCC  7F C3 F3 78 */	mr r3, r30
/* 80178BF0 00175CD0  90 04 02 BC */	stw r0, 0x2bc(r4)
/* 80178BF4 00175CD4  7F E4 FB 78 */	mr r4, r31
/* 80178BF8 00175CD8  4B F5 C5 1D */	bl Enter__14zNPCGoalCommonFfPv
/* 80178BFC 00175CDC  E3 E1 00 28 */	psq_l f31, 0x28(r1), 0, qr0
/* 80178C00 00175CE0  80 01 00 34 */	lwz r0, 0x34(r1)
/* 80178C04 00175CE4  CB E1 00 20 */	lfd f31, 0x20(r1)
/* 80178C08 00175CE8  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 80178C0C 00175CEC  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 80178C10 00175CF0  7C 08 03 A6 */	mtlr r0
/* 80178C14 00175CF4  38 21 00 30 */	addi r1, r1, 0x30
/* 80178C18 00175CF8  4E 80 00 20 */	blr
.endfn Enter__24zNPCGoalDutchmanTeleportFfPv

# zNPCGoalDutchmanTeleport::Exit(float, void*)
.fn Exit__24zNPCGoalDutchmanTeleportFfPv, global
/* 80178C1C 00175CFC  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80178C20 00175D00  7C 08 02 A6 */	mflr r0
/* 80178C24 00175D04  90 01 00 14 */	stw r0, 0x14(r1)
/* 80178C28 00175D08  4B F5 C7 F5 */	bl Exit__5xGoalFfPv
/* 80178C2C 00175D0C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80178C30 00175D10  7C 08 03 A6 */	mtlr r0
/* 80178C34 00175D14  38 21 00 10 */	addi r1, r1, 0x10
/* 80178C38 00175D18  4E 80 00 20 */	blr
.endfn Exit__24zNPCGoalDutchmanTeleportFfPv

# zNPCGoalDutchmanTeleport::Process(en_trantype*, float, void*, xScene*)
.fn Process__24zNPCGoalDutchmanTeleportFP11en_trantypefPvP6xScene, global
/* 80178C3C 00175D1C  94 21 FF C0 */	stwu r1, -0x40(r1)
/* 80178C40 00175D20  7C 08 02 A6 */	mflr r0
/* 80178C44 00175D24  90 01 00 44 */	stw r0, 0x44(r1)
/* 80178C48 00175D28  DB E1 00 30 */	stfd f31, 0x30(r1)
/* 80178C4C 00175D2C  F3 E1 00 38 */	psq_st f31, 0x38(r1), 0, qr0
/* 80178C50 00175D30  93 E1 00 2C */	stw r31, 0x2c(r1)
/* 80178C54 00175D34  93 C1 00 28 */	stw r30, 0x28(r1)
/* 80178C58 00175D38  93 A1 00 24 */	stw r29, 0x24(r1)
/* 80178C5C 00175D3C  93 81 00 20 */	stw r28, 0x20(r1)
/* 80178C60 00175D40  7C 7C 1B 78 */	mr r28, r3
/* 80178C64 00175D44  FF E0 08 90 */	fmr f31, f1
/* 80178C68 00175D48  80 63 00 4C */	lwz r3, 0x4c(r3)
/* 80178C6C 00175D4C  7C 9D 23 78 */	mr r29, r4
/* 80178C70 00175D50  7C BE 2B 78 */	mr r30, r5
/* 80178C74 00175D54  7C DF 33 78 */	mr r31, r6
/* 80178C78 00175D58  38 63 02 F8 */	addi r3, r3, 0x2f8
/* 80178C7C 00175D5C  4B E9 24 81 */	bl length2__5xVec3CFv
/* 80178C80 00175D60  C0 02 AC EC */	lfs f0, "@1977"@sda21(r2)
/* 80178C84 00175D64  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80178C88 00175D68  40 80 00 48 */	bge .L_80178CD0
/* 80178C8C 00175D6C  80 7C 00 4C */	lwz r3, 0x4c(r28)
/* 80178C90 00175D70  48 00 2B 8D */	bl get_center__12zNPCDutchmanCFv
/* 80178C94 00175D74  80 9C 00 4C */	lwz r4, 0x4c(r28)
/* 80178C98 00175D78  7C 65 1B 78 */	mr r5, r3
/* 80178C9C 00175D7C  38 61 00 08 */	addi r3, r1, 0x8
/* 80178CA0 00175D80  38 84 02 EC */	addi r4, r4, 0x2ec
/* 80178CA4 00175D84  4B E9 25 29 */	bl __mi__5xVec3CFRC5xVec3
/* 80178CA8 00175D88  38 61 00 08 */	addi r3, r1, 0x8
/* 80178CAC 00175D8C  4B E9 24 51 */	bl length2__5xVec3CFv
/* 80178CB0 00175D90  C0 02 AC EC */	lfs f0, "@1977"@sda21(r2)
/* 80178CB4 00175D94  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80178CB8 00175D98  40 80 00 18 */	bge .L_80178CD0
/* 80178CBC 00175D9C  38 00 00 01 */	li r0, 0x1
/* 80178CC0 00175DA0  3C 60 4E 47 */	lis r3, 0x4e47
/* 80178CC4 00175DA4  90 1D 00 00 */	stw r0, 0x0(r29)
/* 80178CC8 00175DA8  38 63 4D 42 */	addi r3, r3, 0x4d42
/* 80178CCC 00175DAC  48 00 00 1C */	b .L_80178CE8
.L_80178CD0:
/* 80178CD0 00175DB0  FC 20 F8 90 */	fmr f1, f31
/* 80178CD4 00175DB4  7F 83 E3 78 */	mr r3, r28
/* 80178CD8 00175DB8  7F A4 EB 78 */	mr r4, r29
/* 80178CDC 00175DBC  7F C5 F3 78 */	mr r5, r30
/* 80178CE0 00175DC0  7F E6 FB 78 */	mr r6, r31
/* 80178CE4 00175DC4  4B F9 5E 65 */	bl Process__5xGoalFP11en_trantypefPvP6xScene
.L_80178CE8:
/* 80178CE8 00175DC8  E3 E1 00 38 */	psq_l f31, 0x38(r1), 0, qr0
/* 80178CEC 00175DCC  80 01 00 44 */	lwz r0, 0x44(r1)
/* 80178CF0 00175DD0  CB E1 00 30 */	lfd f31, 0x30(r1)
/* 80178CF4 00175DD4  83 E1 00 2C */	lwz r31, 0x2c(r1)
/* 80178CF8 00175DD8  83 C1 00 28 */	lwz r30, 0x28(r1)
/* 80178CFC 00175DDC  83 A1 00 24 */	lwz r29, 0x24(r1)
/* 80178D00 00175DE0  83 81 00 20 */	lwz r28, 0x20(r1)
/* 80178D04 00175DE4  7C 08 03 A6 */	mtlr r0
/* 80178D08 00175DE8  38 21 00 40 */	addi r1, r1, 0x40
/* 80178D0C 00175DEC  4E 80 00 20 */	blr
.endfn Process__24zNPCGoalDutchmanTeleportFP11en_trantypefPvP6xScene

# zNPCGoalDutchmanReappear::create(int, RyzMemGrow*, void*)
.fn create__24zNPCGoalDutchmanReappearFiP10RyzMemGrowPv, global
/* 80178D10 00175DF0  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80178D14 00175DF4  7C 08 02 A6 */	mflr r0
/* 80178D18 00175DF8  90 01 00 14 */	stw r0, 0x14(r1)
/* 80178D1C 00175DFC  7C 80 23 78 */	mr r0, r4
/* 80178D20 00175E00  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80178D24 00175E04  7C BF 2B 78 */	mr r31, r5
/* 80178D28 00175E08  7C 05 03 78 */	mr r5, r0
/* 80178D2C 00175E0C  93 C1 00 08 */	stw r30, 0x8(r1)
/* 80178D30 00175E10  7C 7E 1B 78 */	mr r30, r3
/* 80178D34 00175E14  38 60 00 50 */	li r3, 0x50
/* 80178D38 00175E18  7F C4 F3 78 */	mr r4, r30
/* 80178D3C 00175E1C  4B F9 64 15 */	bl __nw__10RyzMemDataFUliP10RyzMemGrow
/* 80178D40 00175E20  7C 64 1B 79 */	mr. r4, r3
/* 80178D44 00175E24  41 82 00 14 */	beq .L_80178D58
/* 80178D48 00175E28  7F C4 F3 78 */	mr r4, r30
/* 80178D4C 00175E2C  7F E5 FB 78 */	mr r5, r31
/* 80178D50 00175E30  48 00 2E C5 */	bl __ct__24zNPCGoalDutchmanReappearFiR12zNPCDutchman
/* 80178D54 00175E34  7C 64 1B 78 */	mr r4, r3
.L_80178D58:
/* 80178D58 00175E38  28 04 00 00 */	cmplwi r4, 0x0
/* 80178D5C 00175E3C  41 82 00 08 */	beq .L_80178D64
/* 80178D60 00175E40  38 84 00 0C */	addi r4, r4, 0xc
.L_80178D64:
/* 80178D64 00175E44  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80178D68 00175E48  7C 83 23 78 */	mr r3, r4
/* 80178D6C 00175E4C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80178D70 00175E50  83 C1 00 08 */	lwz r30, 0x8(r1)
/* 80178D74 00175E54  7C 08 03 A6 */	mtlr r0
/* 80178D78 00175E58  38 21 00 10 */	addi r1, r1, 0x10
/* 80178D7C 00175E5C  4E 80 00 20 */	blr
.endfn create__24zNPCGoalDutchmanReappearFiP10RyzMemGrowPv

# zNPCGoalDutchmanReappear::Enter(float, void*)
.fn Enter__24zNPCGoalDutchmanReappearFfPv, global
/* 80178D80 00175E60  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 80178D84 00175E64  7C 08 02 A6 */	mflr r0
/* 80178D88 00175E68  90 01 00 24 */	stw r0, 0x24(r1)
/* 80178D8C 00175E6C  DB E1 00 10 */	stfd f31, 0x10(r1)
/* 80178D90 00175E70  F3 E1 00 18 */	psq_st f31, 0x18(r1), 0, qr0
/* 80178D94 00175E74  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80178D98 00175E78  93 C1 00 08 */	stw r30, 0x8(r1)
/* 80178D9C 00175E7C  7C 7E 1B 78 */	mr r30, r3
/* 80178DA0 00175E80  C0 02 AC B8 */	lfs f0, "@1605"@sda21(r2)
/* 80178DA4 00175E84  80 63 00 4C */	lwz r3, 0x4c(r3)
/* 80178DA8 00175E88  FF E0 08 90 */	fmr f31, f1
/* 80178DAC 00175E8C  7C 9F 23 78 */	mr r31, r4
/* 80178DB0 00175E90  D0 03 02 D0 */	stfs f0, 0x2d0(r3)
/* 80178DB4 00175E94  80 7E 00 4C */	lwz r3, 0x4c(r30)
/* 80178DB8 00175E98  48 00 2A 75 */	bl face_player__12zNPCDutchmanFv
/* 80178DBC 00175E9C  3C 80 80 33 */	lis r4, "tweak__30@unnamed@zNPCTypeDutchman_cpp@"@ha
/* 80178DC0 00175EA0  80 7E 00 4C */	lwz r3, 0x4c(r30)
/* 80178DC4 00175EA4  38 84 A5 78 */	addi r4, r4, "tweak__30@unnamed@zNPCTypeDutchman_cpp@"@l
/* 80178DC8 00175EA8  C0 24 00 C8 */	lfs f1, 0xc8(r4)
/* 80178DCC 00175EAC  4B FF D9 51 */	bl coalesce__12zNPCDutchmanFf
/* 80178DD0 00175EB0  FC 20 F8 90 */	fmr f1, f31
/* 80178DD4 00175EB4  7F C3 F3 78 */	mr r3, r30
/* 80178DD8 00175EB8  7F E4 FB 78 */	mr r4, r31
/* 80178DDC 00175EBC  4B F5 C3 39 */	bl Enter__14zNPCGoalCommonFfPv
/* 80178DE0 00175EC0  E3 E1 00 18 */	psq_l f31, 0x18(r1), 0, qr0
/* 80178DE4 00175EC4  80 01 00 24 */	lwz r0, 0x24(r1)
/* 80178DE8 00175EC8  CB E1 00 10 */	lfd f31, 0x10(r1)
/* 80178DEC 00175ECC  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80178DF0 00175ED0  83 C1 00 08 */	lwz r30, 0x8(r1)
/* 80178DF4 00175ED4  7C 08 03 A6 */	mtlr r0
/* 80178DF8 00175ED8  38 21 00 20 */	addi r1, r1, 0x20
/* 80178DFC 00175EDC  4E 80 00 20 */	blr
.endfn Enter__24zNPCGoalDutchmanReappearFfPv

# zNPCGoalDutchmanReappear::Exit(float, void*)
.fn Exit__24zNPCGoalDutchmanReappearFfPv, global
/* 80178E00 00175EE0  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 80178E04 00175EE4  7C 08 02 A6 */	mflr r0
/* 80178E08 00175EE8  90 01 00 24 */	stw r0, 0x24(r1)
/* 80178E0C 00175EEC  DB E1 00 18 */	stfd f31, 0x18(r1)
/* 80178E10 00175EF0  FF E0 08 90 */	fmr f31, f1
/* 80178E14 00175EF4  93 E1 00 14 */	stw r31, 0x14(r1)
/* 80178E18 00175EF8  7C 9F 23 78 */	mr r31, r4
/* 80178E1C 00175EFC  93 C1 00 10 */	stw r30, 0x10(r1)
/* 80178E20 00175F00  7C 7E 1B 78 */	mr r30, r3
/* 80178E24 00175F04  80 63 00 4C */	lwz r3, 0x4c(r3)
/* 80178E28 00175F08  4B FF EF 3D */	bl reset_speed__12zNPCDutchmanFv
/* 80178E2C 00175F0C  FC 20 F8 90 */	fmr f1, f31
/* 80178E30 00175F10  7F C3 F3 78 */	mr r3, r30
/* 80178E34 00175F14  7F E4 FB 78 */	mr r4, r31
/* 80178E38 00175F18  4B F5 C5 E5 */	bl Exit__5xGoalFfPv
/* 80178E3C 00175F1C  80 01 00 24 */	lwz r0, 0x24(r1)
/* 80178E40 00175F20  CB E1 00 18 */	lfd f31, 0x18(r1)
/* 80178E44 00175F24  83 E1 00 14 */	lwz r31, 0x14(r1)
/* 80178E48 00175F28  83 C1 00 10 */	lwz r30, 0x10(r1)
/* 80178E4C 00175F2C  7C 08 03 A6 */	mtlr r0
/* 80178E50 00175F30  38 21 00 20 */	addi r1, r1, 0x20
/* 80178E54 00175F34  4E 80 00 20 */	blr
.endfn Exit__24zNPCGoalDutchmanReappearFfPv

# zNPCGoalDutchmanReappear::Process(en_trantype*, float, void*, xScene*)
.fn Process__24zNPCGoalDutchmanReappearFP11en_trantypefPvP6xScene, global
/* 80178E58 00175F38  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 80178E5C 00175F3C  7C 08 02 A6 */	mflr r0
/* 80178E60 00175F40  90 01 00 24 */	stw r0, 0x24(r1)
/* 80178E64 00175F44  DB E1 00 18 */	stfd f31, 0x18(r1)
/* 80178E68 00175F48  FF E0 08 90 */	fmr f31, f1
/* 80178E6C 00175F4C  93 E1 00 14 */	stw r31, 0x14(r1)
/* 80178E70 00175F50  7C DF 33 78 */	mr r31, r6
/* 80178E74 00175F54  93 C1 00 10 */	stw r30, 0x10(r1)
/* 80178E78 00175F58  7C BE 2B 78 */	mr r30, r5
/* 80178E7C 00175F5C  93 A1 00 0C */	stw r29, 0xc(r1)
/* 80178E80 00175F60  7C 9D 23 78 */	mr r29, r4
/* 80178E84 00175F64  93 81 00 08 */	stw r28, 0x8(r1)
/* 80178E88 00175F68  7C 7C 1B 78 */	mr r28, r3
/* 80178E8C 00175F6C  80 63 00 4C */	lwz r3, 0x4c(r3)
/* 80178E90 00175F70  4B F7 A1 0D */	bl AnimCurState__10zNPCCommonFv
/* 80178E94 00175F74  3C 80 80 2A */	lis r4, g_hash_subbanim@ha
/* 80178E98 00175F78  80 A3 00 08 */	lwz r5, 0x8(r3)
/* 80178E9C 00175F7C  38 64 90 E0 */	addi r3, r4, g_hash_subbanim@l
/* 80178EA0 00175F80  80 03 00 14 */	lwz r0, 0x14(r3)
/* 80178EA4 00175F84  7C 05 00 40 */	cmplw r5, r0
/* 80178EA8 00175F88  40 82 00 18 */	bne .L_80178EC0
/* 80178EAC 00175F8C  80 7C 00 4C */	lwz r3, 0x4c(r28)
/* 80178EB0 00175F90  38 80 00 00 */	li r4, 0x0
/* 80178EB4 00175F94  4B F7 A1 C5 */	bl AnimTimeRemain__10zNPCCommonFP10xAnimState
/* 80178EB8 00175F98  FC 1F 08 40 */	fcmpo cr0, f31, f1
/* 80178EBC 00175F9C  40 81 00 18 */	ble .L_80178ED4
.L_80178EC0:
/* 80178EC0 00175FA0  38 00 00 01 */	li r0, 0x1
/* 80178EC4 00175FA4  90 1D 00 00 */	stw r0, 0x0(r29)
/* 80178EC8 00175FA8  80 7C 00 4C */	lwz r3, 0x4c(r28)
/* 80178ECC 00175FAC  4B FF C8 19 */	bl next_goal__12zNPCDutchmanFv
/* 80178ED0 00175FB0  48 00 00 1C */	b .L_80178EEC
.L_80178ED4:
/* 80178ED4 00175FB4  FC 20 F8 90 */	fmr f1, f31
/* 80178ED8 00175FB8  7F 83 E3 78 */	mr r3, r28
/* 80178EDC 00175FBC  7F A4 EB 78 */	mr r4, r29
/* 80178EE0 00175FC0  7F C5 F3 78 */	mr r5, r30
/* 80178EE4 00175FC4  7F E6 FB 78 */	mr r6, r31
/* 80178EE8 00175FC8  4B F9 5C 61 */	bl Process__5xGoalFP11en_trantypefPvP6xScene
.L_80178EEC:
/* 80178EEC 00175FCC  80 01 00 24 */	lwz r0, 0x24(r1)
/* 80178EF0 00175FD0  CB E1 00 18 */	lfd f31, 0x18(r1)
/* 80178EF4 00175FD4  83 E1 00 14 */	lwz r31, 0x14(r1)
/* 80178EF8 00175FD8  83 C1 00 10 */	lwz r30, 0x10(r1)
/* 80178EFC 00175FDC  83 A1 00 0C */	lwz r29, 0xc(r1)
/* 80178F00 00175FE0  83 81 00 08 */	lwz r28, 0x8(r1)
/* 80178F04 00175FE4  7C 08 03 A6 */	mtlr r0
/* 80178F08 00175FE8  38 21 00 20 */	addi r1, r1, 0x20
/* 80178F0C 00175FEC  4E 80 00 20 */	blr
.endfn Process__24zNPCGoalDutchmanReappearFP11en_trantypefPvP6xScene

# zNPCGoalDutchmanBeam::create(int, RyzMemGrow*, void*)
.fn create__20zNPCGoalDutchmanBeamFiP10RyzMemGrowPv, global
/* 80178F10 00175FF0  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80178F14 00175FF4  7C 08 02 A6 */	mflr r0
/* 80178F18 00175FF8  90 01 00 14 */	stw r0, 0x14(r1)
/* 80178F1C 00175FFC  7C 80 23 78 */	mr r0, r4
/* 80178F20 00176000  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80178F24 00176004  7C BF 2B 78 */	mr r31, r5
/* 80178F28 00176008  7C 05 03 78 */	mr r5, r0
/* 80178F2C 0017600C  93 C1 00 08 */	stw r30, 0x8(r1)
/* 80178F30 00176010  7C 7E 1B 78 */	mr r30, r3
/* 80178F34 00176014  38 60 00 C0 */	li r3, 0xc0
/* 80178F38 00176018  7F C4 F3 78 */	mr r4, r30
/* 80178F3C 0017601C  4B F9 62 15 */	bl __nw__10RyzMemDataFUliP10RyzMemGrow
/* 80178F40 00176020  7C 64 1B 79 */	mr. r4, r3
/* 80178F44 00176024  41 82 00 14 */	beq .L_80178F58
/* 80178F48 00176028  7F C4 F3 78 */	mr r4, r30
/* 80178F4C 0017602C  7F E5 FB 78 */	mr r5, r31
/* 80178F50 00176030  48 00 2D 11 */	bl __ct__20zNPCGoalDutchmanBeamFiR12zNPCDutchman
/* 80178F54 00176034  7C 64 1B 78 */	mr r4, r3
.L_80178F58:
/* 80178F58 00176038  28 04 00 00 */	cmplwi r4, 0x0
/* 80178F5C 0017603C  41 82 00 08 */	beq .L_80178F64
/* 80178F60 00176040  38 84 00 0C */	addi r4, r4, 0xc
.L_80178F64:
/* 80178F64 00176044  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80178F68 00176048  7C 83 23 78 */	mr r3, r4
/* 80178F6C 0017604C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80178F70 00176050  83 C1 00 08 */	lwz r30, 0x8(r1)
/* 80178F74 00176054  7C 08 03 A6 */	mtlr r0
/* 80178F78 00176058  38 21 00 10 */	addi r1, r1, 0x10
/* 80178F7C 0017605C  4E 80 00 20 */	blr
.endfn create__20zNPCGoalDutchmanBeamFiP10RyzMemGrowPv

# zNPCGoalDutchmanBeam::Enter(float, void*)
.fn Enter__20zNPCGoalDutchmanBeamFfPv, global
/* 80178F80 00176060  94 21 FF D0 */	stwu r1, -0x30(r1)
/* 80178F84 00176064  7C 08 02 A6 */	mflr r0
/* 80178F88 00176068  90 01 00 34 */	stw r0, 0x34(r1)
/* 80178F8C 0017606C  DB E1 00 20 */	stfd f31, 0x20(r1)
/* 80178F90 00176070  F3 E1 00 28 */	psq_st f31, 0x28(r1), 0, qr0
/* 80178F94 00176074  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 80178F98 00176078  93 C1 00 18 */	stw r30, 0x18(r1)
/* 80178F9C 0017607C  7C 7E 1B 78 */	mr r30, r3
/* 80178FA0 00176080  38 00 00 00 */	li r0, 0x0
/* 80178FA4 00176084  90 03 00 4C */	stw r0, 0x4c(r3)
/* 80178FA8 00176088  3C 60 80 33 */	lis r3, "tweak__30@unnamed@zNPCTypeDutchman_cpp@"@ha
/* 80178FAC 0017608C  7C 9F 23 78 */	mr r31, r4
/* 80178FB0 00176090  FF E0 08 90 */	fmr f31, f1
/* 80178FB4 00176094  90 1E 00 50 */	stw r0, 0x50(r30)
/* 80178FB8 00176098  38 A3 A5 78 */	addi r5, r3, "tweak__30@unnamed@zNPCTypeDutchman_cpp@"@l
/* 80178FBC 0017609C  38 61 00 08 */	addi r3, r1, 0x8
/* 80178FC0 001760A0  38 80 00 01 */	li r4, 0x1
/* 80178FC4 001760A4  C0 25 00 88 */	lfs f1, 0x88(r5)
/* 80178FC8 001760A8  C0 42 AC BC */	lfs f2, "@1606"@sda21(r2)
/* 80178FCC 001760AC  4B EF 69 B1 */	bl zEntPlayer_PredictPos__FP5xVec3ffi
/* 80178FD0 001760B0  80 7E 00 BC */	lwz r3, 0xbc(r30)
/* 80178FD4 001760B4  38 81 00 08 */	addi r4, r1, 0x8
/* 80178FD8 001760B8  4B FF EC D5 */	bl turn_to_face__12zNPCDutchmanFRC5xVec3
/* 80178FDC 001760BC  FC 20 F8 90 */	fmr f1, f31
/* 80178FE0 001760C0  7F C3 F3 78 */	mr r3, r30
/* 80178FE4 001760C4  7F E4 FB 78 */	mr r4, r31
/* 80178FE8 001760C8  4B F5 C1 2D */	bl Enter__14zNPCGoalCommonFfPv
/* 80178FEC 001760CC  E3 E1 00 28 */	psq_l f31, 0x28(r1), 0, qr0
/* 80178FF0 001760D0  80 01 00 34 */	lwz r0, 0x34(r1)
/* 80178FF4 001760D4  CB E1 00 20 */	lfd f31, 0x20(r1)
/* 80178FF8 001760D8  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 80178FFC 001760DC  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 80179000 001760E0  7C 08 03 A6 */	mtlr r0
/* 80179004 001760E4  38 21 00 30 */	addi r1, r1, 0x30
/* 80179008 001760E8  4E 80 00 20 */	blr
.endfn Enter__20zNPCGoalDutchmanBeamFfPv

# zNPCGoalDutchmanBeam::Exit(float, void*)
.fn Exit__20zNPCGoalDutchmanBeamFfPv, global
/* 8017900C 001760EC  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80179010 001760F0  7C 08 02 A6 */	mflr r0
/* 80179014 001760F4  90 01 00 14 */	stw r0, 0x14(r1)
/* 80179018 001760F8  4B F5 C4 05 */	bl Exit__5xGoalFfPv
/* 8017901C 001760FC  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80179020 00176100  7C 08 03 A6 */	mtlr r0
/* 80179024 00176104  38 21 00 10 */	addi r1, r1, 0x10
/* 80179028 00176108  4E 80 00 20 */	blr
.endfn Exit__20zNPCGoalDutchmanBeamFfPv

# zNPCGoalDutchmanBeam::Process(en_trantype*, float, void*, xScene*)
.fn Process__20zNPCGoalDutchmanBeamFP11en_trantypefPvP6xScene, global
/* 8017902C 0017610C  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 80179030 00176110  7C 08 02 A6 */	mflr r0
/* 80179034 00176114  90 01 00 24 */	stw r0, 0x24(r1)
/* 80179038 00176118  DB E1 00 18 */	stfd f31, 0x18(r1)
/* 8017903C 0017611C  FF E0 08 90 */	fmr f31, f1
/* 80179040 00176120  93 E1 00 14 */	stw r31, 0x14(r1)
/* 80179044 00176124  7C DF 33 78 */	mr r31, r6
/* 80179048 00176128  93 C1 00 10 */	stw r30, 0x10(r1)
/* 8017904C 0017612C  7C BE 2B 78 */	mr r30, r5
/* 80179050 00176130  93 A1 00 0C */	stw r29, 0xc(r1)
/* 80179054 00176134  7C 9D 23 78 */	mr r29, r4
/* 80179058 00176138  93 81 00 08 */	stw r28, 0x8(r1)
/* 8017905C 0017613C  7C 7C 1B 78 */	mr r28, r3
/* 80179060 00176140  80 03 00 4C */	lwz r0, 0x4c(r3)
/* 80179064 00176144  2C 00 00 02 */	cmpwi r0, 0x2
/* 80179068 00176148  41 82 00 38 */	beq .L_801790A0
/* 8017906C 0017614C  40 80 00 14 */	bge .L_80179080
/* 80179070 00176150  2C 00 00 00 */	cmpwi r0, 0x0
/* 80179074 00176154  41 82 00 1C */	beq .L_80179090
/* 80179078 00176158  40 80 00 20 */	bge .L_80179098
/* 8017907C 0017615C  48 00 00 48 */	b .L_801790C4
.L_80179080:
/* 80179080 00176160  2C 00 00 04 */	cmpwi r0, 0x4
/* 80179084 00176164  41 82 00 2C */	beq .L_801790B0
/* 80179088 00176168  40 80 00 3C */	bge .L_801790C4
/* 8017908C 0017616C  48 00 00 1C */	b .L_801790A8
.L_80179090:
/* 80179090 00176170  48 00 00 71 */	bl update_stop__20zNPCGoalDutchmanBeamFf
/* 80179094 00176174  48 00 00 30 */	b .L_801790C4
.L_80179098:
/* 80179098 00176178  48 00 01 6D */	bl update_focus__20zNPCGoalDutchmanBeamFf
/* 8017909C 0017617C  48 00 00 28 */	b .L_801790C4
.L_801790A0:
/* 801790A0 00176180  48 00 02 69 */	bl update_fire__20zNPCGoalDutchmanBeamFf
/* 801790A4 00176184  48 00 00 20 */	b .L_801790C4
.L_801790A8:
/* 801790A8 00176188  48 00 03 89 */	bl update_unfocus__20zNPCGoalDutchmanBeamFf
/* 801790AC 0017618C  48 00 00 18 */	b .L_801790C4
.L_801790B0:
/* 801790B0 00176190  38 00 00 01 */	li r0, 0x1
/* 801790B4 00176194  90 1D 00 00 */	stw r0, 0x0(r29)
/* 801790B8 00176198  80 7C 00 BC */	lwz r3, 0xbc(r28)
/* 801790BC 0017619C  4B FF C6 29 */	bl next_goal__12zNPCDutchmanFv
/* 801790C0 001761A0  48 00 00 1C */	b .L_801790DC
.L_801790C4:
/* 801790C4 001761A4  FC 20 F8 90 */	fmr f1, f31
/* 801790C8 001761A8  7F 83 E3 78 */	mr r3, r28
/* 801790CC 001761AC  7F A4 EB 78 */	mr r4, r29
/* 801790D0 001761B0  7F C5 F3 78 */	mr r5, r30
/* 801790D4 001761B4  7F E6 FB 78 */	mr r6, r31
/* 801790D8 001761B8  4B F9 5A 71 */	bl Process__5xGoalFP11en_trantypefPvP6xScene
.L_801790DC:
/* 801790DC 001761BC  80 01 00 24 */	lwz r0, 0x24(r1)
/* 801790E0 001761C0  CB E1 00 18 */	lfd f31, 0x18(r1)
/* 801790E4 001761C4  83 E1 00 14 */	lwz r31, 0x14(r1)
/* 801790E8 001761C8  83 C1 00 10 */	lwz r30, 0x10(r1)
/* 801790EC 001761CC  83 A1 00 0C */	lwz r29, 0xc(r1)
/* 801790F0 001761D0  83 81 00 08 */	lwz r28, 0x8(r1)
/* 801790F4 001761D4  7C 08 03 A6 */	mtlr r0
/* 801790F8 001761D8  38 21 00 20 */	addi r1, r1, 0x20
/* 801790FC 001761DC  4E 80 00 20 */	blr
.endfn Process__20zNPCGoalDutchmanBeamFP11en_trantypefPvP6xScene

# zNPCGoalDutchmanBeam::update_stop(float)
.fn update_stop__20zNPCGoalDutchmanBeamFf, global
/* 80179100 001761E0  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 80179104 001761E4  7C 08 02 A6 */	mflr r0
/* 80179108 001761E8  90 01 00 24 */	stw r0, 0x24(r1)
/* 8017910C 001761EC  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 80179110 001761F0  93 C1 00 18 */	stw r30, 0x18(r1)
/* 80179114 001761F4  93 A1 00 14 */	stw r29, 0x14(r1)
/* 80179118 001761F8  93 81 00 10 */	stw r28, 0x10(r1)
/* 8017911C 001761FC  7C 7C 1B 78 */	mr r28, r3
/* 80179120 00176200  80 63 00 BC */	lwz r3, 0xbc(r3)
/* 80179124 00176204  48 00 27 29 */	bl turning__12zNPCDutchmanCFv
/* 80179128 00176208  54 60 06 3F */	clrlwi. r0, r3, 24
/* 8017912C 0017620C  40 82 00 B8 */	bne .L_801791E4
/* 80179130 00176210  38 00 00 01 */	li r0, 0x1
/* 80179134 00176214  3C 60 80 33 */	lis r3, "tweak__30@unnamed@zNPCTypeDutchman_cpp@"@ha
/* 80179138 00176218  90 1C 00 4C */	stw r0, 0x4c(r28)
/* 8017913C 0017621C  38 83 A5 78 */	addi r4, r3, "tweak__30@unnamed@zNPCTypeDutchman_cpp@"@l
/* 80179140 00176220  C0 02 AC B8 */	lfs f0, "@1605"@sda21(r2)
/* 80179144 00176224  80 7C 00 BC */	lwz r3, 0xbc(r28)
/* 80179148 00176228  D0 03 02 D0 */	stfs f0, 0x2d0(r3)
/* 8017914C 0017622C  C0 02 AC B8 */	lfs f0, "@1605"@sda21(r2)
/* 80179150 00176230  80 7C 00 BC */	lwz r3, 0xbc(r28)
/* 80179154 00176234  D0 03 04 34 */	stfs f0, 0x434(r3)
/* 80179158 00176238  C0 04 00 84 */	lfs f0, 0x84(r4)
/* 8017915C 0017623C  80 7C 00 BC */	lwz r3, 0xbc(r28)
/* 80179160 00176240  D0 03 04 38 */	stfs f0, 0x438(r3)
/* 80179164 00176244  90 1C 00 70 */	stw r0, 0x70(r28)
/* 80179168 00176248  C0 02 AC B8 */	lfs f0, "@1605"@sda21(r2)
/* 8017916C 0017624C  80 7C 00 BC */	lwz r3, 0xbc(r28)
/* 80179170 00176250  D0 03 05 50 */	stfs f0, 0x550(r3)
/* 80179174 00176254  C0 04 00 84 */	lfs f0, 0x84(r4)
/* 80179178 00176258  80 7C 00 BC */	lwz r3, 0xbc(r28)
/* 8017917C 0017625C  D0 03 05 54 */	stfs f0, 0x554(r3)
/* 80179180 00176260  90 1C 00 A4 */	stw r0, 0xa4(r28)
/* 80179184 00176264  80 7C 00 BC */	lwz r3, 0xbc(r28)
/* 80179188 00176268  4B FF E3 71 */	bl start_beam__12zNPCDutchmanFv
/* 8017918C 0017626C  7F 9E E3 78 */	mr r30, r28
/* 80179190 00176270  3B A0 00 00 */	li r29, 0x0
/* 80179194 00176274  3B E0 00 00 */	li r31, 0x0
.L_80179198:
/* 80179198 00176278  80 BC 00 BC */	lwz r5, 0xbc(r28)
/* 8017919C 0017627C  38 1F 04 34 */	addi r0, r31, 0x434
/* 801791A0 00176280  38 9E 00 74 */	addi r4, r30, 0x74
/* 801791A4 00176284  38 60 00 00 */	li r3, 0x0
/* 801791A8 00176288  7C 25 04 2E */	lfsx f1, r5, r0
/* 801791AC 0017628C  4B FF 96 85 */	bl "play_sound__30@unnamed@zNPCTypeDutchman_cpp@FiPC5xVec3f"
/* 801791B0 00176290  90 7E 00 80 */	stw r3, 0x80(r30)
/* 801791B4 00176294  38 9F 03 24 */	addi r4, r31, 0x324
/* 801791B8 00176298  38 60 00 03 */	li r3, 0x3
/* 801791BC 0017629C  80 1C 00 BC */	lwz r0, 0xbc(r28)
/* 801791C0 001762A0  C0 22 AC BC */	lfs f1, "@1606"@sda21(r2)
/* 801791C4 001762A4  7C 80 22 14 */	add r4, r0, r4
/* 801791C8 001762A8  4B FF 96 69 */	bl "play_sound__30@unnamed@zNPCTypeDutchman_cpp@FiPC5xVec3f"
/* 801791CC 001762AC  3B BD 00 01 */	addi r29, r29, 0x1
/* 801791D0 001762B0  90 7E 00 84 */	stw r3, 0x84(r30)
/* 801791D4 001762B4  2C 1D 00 02 */	cmpwi r29, 0x2
/* 801791D8 001762B8  3B FF 01 1C */	addi r31, r31, 0x11c
/* 801791DC 001762BC  3B DE 00 34 */	addi r30, r30, 0x34
/* 801791E0 001762C0  41 80 FF B8 */	blt .L_80179198
.L_801791E4:
/* 801791E4 001762C4  80 01 00 24 */	lwz r0, 0x24(r1)
/* 801791E8 001762C8  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 801791EC 001762CC  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 801791F0 001762D0  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 801791F4 001762D4  83 81 00 10 */	lwz r28, 0x10(r1)
/* 801791F8 001762D8  7C 08 03 A6 */	mtlr r0
/* 801791FC 001762DC  38 21 00 20 */	addi r1, r1, 0x20
/* 80179200 001762E0  4E 80 00 20 */	blr
.endfn update_stop__20zNPCGoalDutchmanBeamFf

# zNPCGoalDutchmanBeam::update_focus(float)
.fn update_focus__20zNPCGoalDutchmanBeamFf, global
/* 80179204 001762E4  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 80179208 001762E8  7C 08 02 A6 */	mflr r0
/* 8017920C 001762EC  90 01 00 24 */	stw r0, 0x24(r1)
/* 80179210 001762F0  38 81 00 08 */	addi r4, r1, 0x8
/* 80179214 001762F4  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 80179218 001762F8  7C 7F 1B 78 */	mr r31, r3
/* 8017921C 001762FC  48 00 0A 91 */	bl predict_target__20zNPCGoalDutchmanBeamCFR5xVec3
/* 80179220 00176300  80 7F 00 BC */	lwz r3, 0xbc(r31)
/* 80179224 00176304  38 81 00 08 */	addi r4, r1, 0x8
/* 80179228 00176308  4B FF EA 85 */	bl turn_to_face__12zNPCDutchmanFRC5xVec3
/* 8017922C 0017630C  C0 22 AC B8 */	lfs f1, "@1605"@sda21(r2)
/* 80179230 00176310  7F E3 FB 78 */	mr r3, r31
/* 80179234 00176314  38 9F 00 54 */	addi r4, r31, 0x54
/* 80179238 00176318  38 A1 00 08 */	addi r5, r1, 0x8
/* 8017923C 0017631C  48 00 02 E5 */	bl aim_beam__20zNPCGoalDutchmanBeamCFRQ220zNPCGoalDutchmanBeam9beam_dataRC5xVec3f
/* 80179240 00176320  7F E3 FB 78 */	mr r3, r31
/* 80179244 00176324  38 80 00 00 */	li r4, 0x0
/* 80179248 00176328  48 00 06 71 */	bl refresh_beam__20zNPCGoalDutchmanBeamFi
/* 8017924C 0017632C  C0 22 AD 94 */	lfs f1, "@2180"@sda21(r2)
/* 80179250 00176330  7F E3 FB 78 */	mr r3, r31
/* 80179254 00176334  38 9F 00 88 */	addi r4, r31, 0x88
/* 80179258 00176338  38 A1 00 08 */	addi r5, r1, 0x8
/* 8017925C 0017633C  48 00 02 C5 */	bl aim_beam__20zNPCGoalDutchmanBeamCFRQ220zNPCGoalDutchmanBeam9beam_dataRC5xVec3f
/* 80179260 00176340  7F E3 FB 78 */	mr r3, r31
/* 80179264 00176344  38 80 00 01 */	li r4, 0x1
/* 80179268 00176348  48 00 06 51 */	bl refresh_beam__20zNPCGoalDutchmanBeamFi
/* 8017926C 0017634C  80 9F 00 BC */	lwz r4, 0xbc(r31)
/* 80179270 00176350  3C 60 80 33 */	lis r3, "tweak__30@unnamed@zNPCTypeDutchman_cpp@"@ha
/* 80179274 00176354  38 63 A5 78 */	addi r3, r3, "tweak__30@unnamed@zNPCTypeDutchman_cpp@"@l
/* 80179278 00176358  C0 02 AC BC */	lfs f0, "@1606"@sda21(r2)
/* 8017927C 0017635C  C0 44 02 D0 */	lfs f2, 0x2d0(r4)
/* 80179280 00176360  C0 23 00 88 */	lfs f1, 0x88(r3)
/* 80179284 00176364  EC 22 08 24 */	fdivs f1, f2, f1
/* 80179288 00176368  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8017928C 0017636C  EC 21 00 72 */	fmuls f1, f1, f1
/* 80179290 00176370  4C 41 13 82 */	cror eq, gt, eq
/* 80179294 00176374  40 82 00 2C */	bne .L_801792C0
/* 80179298 00176378  D0 04 04 34 */	stfs f0, 0x434(r4)
/* 8017929C 0017637C  38 00 00 02 */	li r0, 0x2
/* 801792A0 00176380  C0 02 AC BC */	lfs f0, "@1606"@sda21(r2)
/* 801792A4 00176384  80 7F 00 BC */	lwz r3, 0xbc(r31)
/* 801792A8 00176388  D0 03 05 50 */	stfs f0, 0x550(r3)
/* 801792AC 0017638C  C0 02 AC B8 */	lfs f0, "@1605"@sda21(r2)
/* 801792B0 00176390  80 7F 00 BC */	lwz r3, 0xbc(r31)
/* 801792B4 00176394  D0 03 02 D0 */	stfs f0, 0x2d0(r3)
/* 801792B8 00176398  90 1F 00 4C */	stw r0, 0x4c(r31)
/* 801792BC 0017639C  48 00 00 38 */	b .L_801792F4
.L_801792C0:
/* 801792C0 001763A0  D0 24 04 34 */	stfs f1, 0x434(r4)
/* 801792C4 001763A4  38 60 00 00 */	li r3, 0x0
/* 801792C8 001763A8  80 9F 00 BC */	lwz r4, 0xbc(r31)
/* 801792CC 001763AC  D0 24 05 50 */	stfs f1, 0x550(r4)
/* 801792D0 001763B0  80 BF 00 BC */	lwz r5, 0xbc(r31)
/* 801792D4 001763B4  80 9F 00 80 */	lwz r4, 0x80(r31)
/* 801792D8 001763B8  C0 25 04 34 */	lfs f1, 0x434(r5)
/* 801792DC 001763BC  4B FF 96 79 */	bl "set_volume__30@unnamed@zNPCTypeDutchman_cpp@FiUif"
/* 801792E0 001763C0  80 BF 00 BC */	lwz r5, 0xbc(r31)
/* 801792E4 001763C4  38 60 00 00 */	li r3, 0x0
/* 801792E8 001763C8  80 9F 00 B4 */	lwz r4, 0xb4(r31)
/* 801792EC 001763CC  C0 25 05 50 */	lfs f1, 0x550(r5)
/* 801792F0 001763D0  4B FF 96 65 */	bl "set_volume__30@unnamed@zNPCTypeDutchman_cpp@FiUif"
.L_801792F4:
/* 801792F4 001763D4  80 01 00 24 */	lwz r0, 0x24(r1)
/* 801792F8 001763D8  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 801792FC 001763DC  7C 08 03 A6 */	mtlr r0
/* 80179300 001763E0  38 21 00 20 */	addi r1, r1, 0x20
/* 80179304 001763E4  4E 80 00 20 */	blr
.endfn update_focus__20zNPCGoalDutchmanBeamFf

# zNPCGoalDutchmanBeam::update_fire(float)
.fn update_fire__20zNPCGoalDutchmanBeamFf, global
/* 80179308 001763E8  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 8017930C 001763EC  7C 08 02 A6 */	mflr r0
/* 80179310 001763F0  90 01 00 24 */	stw r0, 0x24(r1)
/* 80179314 001763F4  DB E1 00 10 */	stfd f31, 0x10(r1)
/* 80179318 001763F8  F3 E1 00 18 */	psq_st f31, 0x18(r1), 0, qr0
/* 8017931C 001763FC  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80179320 00176400  93 C1 00 08 */	stw r30, 0x8(r1)
/* 80179324 00176404  FF E0 08 90 */	fmr f31, f1
/* 80179328 00176408  7C 7F 1B 78 */	mr r31, r3
/* 8017932C 0017640C  38 9F 00 54 */	addi r4, r31, 0x54
/* 80179330 00176410  38 A0 00 00 */	li r5, 0x0
/* 80179334 00176414  48 00 04 09 */	bl update_beam__20zNPCGoalDutchmanBeamFfRQ220zNPCGoalDutchmanBeam9beam_datai
/* 80179338 00176418  FC 20 F8 90 */	fmr f1, f31
/* 8017933C 0017641C  7F E3 FB 78 */	mr r3, r31
/* 80179340 00176420  38 9F 00 88 */	addi r4, r31, 0x88
/* 80179344 00176424  38 A0 00 01 */	li r5, 0x1
/* 80179348 00176428  48 00 03 F5 */	bl update_beam__20zNPCGoalDutchmanBeamFfRQ220zNPCGoalDutchmanBeam9beam_datai
/* 8017934C 0017642C  C0 1F 00 68 */	lfs f0, 0x68(r31)
/* 80179350 00176430  C0 82 AC B0 */	lfs f4, "@1603"@sda21(r2)
/* 80179354 00176434  FC 00 20 40 */	fcmpo cr0, f0, f4
/* 80179358 00176438  4C 41 13 82 */	cror eq, gt, eq
/* 8017935C 0017643C  40 82 00 B4 */	bne .L_80179410
/* 80179360 00176440  C0 62 AC B4 */	lfs f3, "@1604"@sda21(r2)
/* 80179364 00176444  FC 00 18 40 */	fcmpo cr0, f0, f3
/* 80179368 00176448  4C 40 13 82 */	cror eq, lt, eq
/* 8017936C 0017644C  40 82 00 A4 */	bne .L_80179410
/* 80179370 00176450  3C 60 80 33 */	lis r3, "tweak__30@unnamed@zNPCTypeDutchman_cpp@"@ha
/* 80179374 00176454  C0 1F 00 64 */	lfs f0, 0x64(r31)
/* 80179378 00176458  38 63 A5 78 */	addi r3, r3, "tweak__30@unnamed@zNPCTypeDutchman_cpp@"@l
/* 8017937C 0017645C  C0 22 AC BC */	lfs f1, "@1606"@sda21(r2)
/* 80179380 00176460  C0 43 00 70 */	lfs f2, 0x70(r3)
/* 80179384 00176464  EC 00 10 24 */	fdivs f0, f0, f2
/* 80179388 00176468  EC 00 08 28 */	fsubs f0, f0, f1
/* 8017938C 0017646C  FC 00 02 10 */	fabs f0, f0
/* 80179390 00176470  FC 00 00 18 */	frsp f0, f0
/* 80179394 00176474  FC 00 18 40 */	fcmpo cr0, f0, f3
/* 80179398 00176478  4C 40 13 82 */	cror eq, lt, eq
/* 8017939C 0017647C  40 82 00 74 */	bne .L_80179410
/* 801793A0 00176480  C0 1F 00 9C */	lfs f0, 0x9c(r31)
/* 801793A4 00176484  FC 00 20 40 */	fcmpo cr0, f0, f4
/* 801793A8 00176488  4C 41 13 82 */	cror eq, gt, eq
/* 801793AC 0017648C  40 82 00 64 */	bne .L_80179410
/* 801793B0 00176490  FC 00 18 40 */	fcmpo cr0, f0, f3
/* 801793B4 00176494  4C 40 13 82 */	cror eq, lt, eq
/* 801793B8 00176498  40 82 00 58 */	bne .L_80179410
/* 801793BC 0017649C  C0 1F 00 98 */	lfs f0, 0x98(r31)
/* 801793C0 001764A0  EC 00 10 24 */	fdivs f0, f0, f2
/* 801793C4 001764A4  EC 00 08 28 */	fsubs f0, f0, f1
/* 801793C8 001764A8  FC 00 02 10 */	fabs f0, f0
/* 801793CC 001764AC  FC 00 00 18 */	frsp f0, f0
/* 801793D0 001764B0  FC 00 18 40 */	fcmpo cr0, f0, f3
/* 801793D4 001764B4  4C 40 13 82 */	cror eq, lt, eq
/* 801793D8 001764B8  40 82 00 38 */	bne .L_80179410
/* 801793DC 001764BC  C0 02 AC B8 */	lfs f0, "@1605"@sda21(r2)
/* 801793E0 001764C0  38 00 00 03 */	li r0, 0x3
/* 801793E4 001764C4  80 7F 00 BC */	lwz r3, 0xbc(r31)
/* 801793E8 001764C8  3B C0 00 00 */	li r30, 0x0
/* 801793EC 001764CC  D0 03 02 D0 */	stfs f0, 0x2d0(r3)
/* 801793F0 001764D0  90 1F 00 4C */	stw r0, 0x4c(r31)
.L_801793F4:
/* 801793F4 001764D4  80 9F 00 84 */	lwz r4, 0x84(r31)
/* 801793F8 001764D8  38 60 00 03 */	li r3, 0x3
/* 801793FC 001764DC  4B FF 94 F5 */	bl "kill_sound__30@unnamed@zNPCTypeDutchman_cpp@FiUi"
/* 80179400 001764E0  3B DE 00 01 */	addi r30, r30, 0x1
/* 80179404 001764E4  3B FF 00 34 */	addi r31, r31, 0x34
/* 80179408 001764E8  2C 1E 00 02 */	cmpwi r30, 0x2
/* 8017940C 001764EC  41 80 FF E8 */	blt .L_801793F4
.L_80179410:
/* 80179410 001764F0  E3 E1 00 18 */	psq_l f31, 0x18(r1), 0, qr0
/* 80179414 001764F4  80 01 00 24 */	lwz r0, 0x24(r1)
/* 80179418 001764F8  CB E1 00 10 */	lfd f31, 0x10(r1)
/* 8017941C 001764FC  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80179420 00176500  83 C1 00 08 */	lwz r30, 0x8(r1)
/* 80179424 00176504  7C 08 03 A6 */	mtlr r0
/* 80179428 00176508  38 21 00 20 */	addi r1, r1, 0x20
/* 8017942C 0017650C  4E 80 00 20 */	blr
.endfn update_fire__20zNPCGoalDutchmanBeamFf

# zNPCGoalDutchmanBeam::update_unfocus(float)
.fn update_unfocus__20zNPCGoalDutchmanBeamFf, global
/* 80179430 00176510  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80179434 00176514  7C 08 02 A6 */	mflr r0
/* 80179438 00176518  3C 80 80 33 */	lis r4, "tweak__30@unnamed@zNPCTypeDutchman_cpp@"@ha
/* 8017943C 0017651C  90 01 00 14 */	stw r0, 0x14(r1)
/* 80179440 00176520  38 84 A5 78 */	addi r4, r4, "tweak__30@unnamed@zNPCTypeDutchman_cpp@"@l
/* 80179444 00176524  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80179448 00176528  7C 7F 1B 78 */	mr r31, r3
/* 8017944C 0017652C  80 63 00 BC */	lwz r3, 0xbc(r3)
/* 80179450 00176530  C0 04 00 88 */	lfs f0, 0x88(r4)
/* 80179454 00176534  C0 23 02 D0 */	lfs f1, 0x2d0(r3)
/* 80179458 00176538  C0 42 AC BC */	lfs f2, "@1606"@sda21(r2)
/* 8017945C 0017653C  EC 21 00 24 */	fdivs f1, f1, f0
/* 80179460 00176540  C0 02 AC B8 */	lfs f0, "@1605"@sda21(r2)
/* 80179464 00176544  EC 22 08 28 */	fsubs f1, f2, f1
/* 80179468 00176548  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8017946C 0017654C  EC 01 00 72 */	fmuls f0, f1, f1
/* 80179470 00176550  4C 40 13 82 */	cror eq, lt, eq
/* 80179474 00176554  40 82 00 64 */	bne .L_801794D8
/* 80179478 00176558  4B FF E0 A9 */	bl stop_beam__12zNPCDutchmanFv
/* 8017947C 0017655C  80 BF 00 50 */	lwz r5, 0x50(r31)
/* 80179480 00176560  3C 60 80 33 */	lis r3, "tweak__30@unnamed@zNPCTypeDutchman_cpp@"@ha
/* 80179484 00176564  38 83 A5 78 */	addi r4, r3, "tweak__30@unnamed@zNPCTypeDutchman_cpp@"@l
/* 80179488 00176568  38 C0 00 04 */	li r6, 0x4
/* 8017948C 0017656C  38 05 00 01 */	addi r0, r5, 0x1
/* 80179490 00176570  90 1F 00 50 */	stw r0, 0x50(r31)
/* 80179494 00176574  80 7F 00 BC */	lwz r3, 0xbc(r31)
/* 80179498 00176578  80 BF 00 50 */	lwz r5, 0x50(r31)
/* 8017949C 0017657C  80 03 02 C8 */	lwz r0, 0x2c8(r3)
/* 801794A0 00176580  54 00 10 3A */	slwi r0, r0, 2
/* 801794A4 00176584  7C 64 02 14 */	add r3, r4, r0
/* 801794A8 00176588  80 03 00 98 */	lwz r0, 0x98(r3)
/* 801794AC 0017658C  7C 05 00 00 */	cmpw r5, r0
/* 801794B0 00176590  40 80 00 08 */	bge .L_801794B8
/* 801794B4 00176594  38 C0 00 00 */	li r6, 0x0
.L_801794B8:
/* 801794B8 00176598  90 DF 00 4C */	stw r6, 0x4c(r31)
/* 801794BC 0017659C  38 60 00 00 */	li r3, 0x0
/* 801794C0 001765A0  80 9F 00 80 */	lwz r4, 0x80(r31)
/* 801794C4 001765A4  4B FF 94 2D */	bl "kill_sound__30@unnamed@zNPCTypeDutchman_cpp@FiUi"
/* 801794C8 001765A8  80 9F 00 B4 */	lwz r4, 0xb4(r31)
/* 801794CC 001765AC  38 60 00 00 */	li r3, 0x0
/* 801794D0 001765B0  4B FF 94 21 */	bl "kill_sound__30@unnamed@zNPCTypeDutchman_cpp@FiUi"
/* 801794D4 001765B4  48 00 00 38 */	b .L_8017950C
.L_801794D8:
/* 801794D8 001765B8  D0 03 04 34 */	stfs f0, 0x434(r3)
/* 801794DC 001765BC  38 60 00 00 */	li r3, 0x0
/* 801794E0 001765C0  80 9F 00 BC */	lwz r4, 0xbc(r31)
/* 801794E4 001765C4  D0 04 05 50 */	stfs f0, 0x550(r4)
/* 801794E8 001765C8  80 BF 00 BC */	lwz r5, 0xbc(r31)
/* 801794EC 001765CC  80 9F 00 80 */	lwz r4, 0x80(r31)
/* 801794F0 001765D0  C0 25 04 34 */	lfs f1, 0x434(r5)
/* 801794F4 001765D4  4B FF 94 61 */	bl "set_volume__30@unnamed@zNPCTypeDutchman_cpp@FiUif"
/* 801794F8 001765D8  80 BF 00 BC */	lwz r5, 0xbc(r31)
/* 801794FC 001765DC  38 60 00 00 */	li r3, 0x0
/* 80179500 001765E0  80 9F 00 B4 */	lwz r4, 0xb4(r31)
/* 80179504 001765E4  C0 25 05 50 */	lfs f1, 0x550(r5)
/* 80179508 001765E8  4B FF 94 4D */	bl "set_volume__30@unnamed@zNPCTypeDutchman_cpp@FiUif"
.L_8017950C:
/* 8017950C 001765EC  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80179510 001765F0  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80179514 001765F4  7C 08 03 A6 */	mtlr r0
/* 80179518 001765F8  38 21 00 10 */	addi r1, r1, 0x10
/* 8017951C 001765FC  4E 80 00 20 */	blr
.endfn update_unfocus__20zNPCGoalDutchmanBeamFf

# zNPCGoalDutchmanBeam::aim_beam(zNPCGoalDutchmanBeam::beam_data&, const xVec3&, float) const
.fn aim_beam__20zNPCGoalDutchmanBeamCFRQ220zNPCGoalDutchmanBeam9beam_dataRC5xVec3f, global
/* 80179520 00176600  94 21 FF D0 */	stwu r1, -0x30(r1)
/* 80179524 00176604  7C 08 02 A6 */	mflr r0
/* 80179528 00176608  90 01 00 34 */	stw r0, 0x34(r1)
/* 8017952C 0017660C  DB E1 00 20 */	stfd f31, 0x20(r1)
/* 80179530 00176610  F3 E1 00 28 */	psq_st f31, 0x28(r1), 0, qr0
/* 80179534 00176614  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 80179538 00176618  93 C1 00 18 */	stw r30, 0x18(r1)
/* 8017953C 0017661C  93 A1 00 14 */	stw r29, 0x14(r1)
/* 80179540 00176620  93 81 00 10 */	stw r28, 0x10(r1)
/* 80179544 00176624  FF E0 08 90 */	fmr f31, f1
/* 80179548 00176628  3C C0 80 33 */	lis r6, "tweak__30@unnamed@zNPCTypeDutchman_cpp@"@ha
/* 8017954C 0017662C  80 63 00 BC */	lwz r3, 0xbc(r3)
/* 80179550 00176630  7C 9C 23 78 */	mr r28, r4
/* 80179554 00176634  7C BD 2B 78 */	mr r29, r5
/* 80179558 00176638  3B C6 A5 78 */	addi r30, r6, "tweak__30@unnamed@zNPCTypeDutchman_cpp@"@l
/* 8017955C 0017663C  48 00 22 C1 */	bl get_center__12zNPCDutchmanCFv
/* 80179560 00176640  7C 7F 1B 78 */	mr r31, r3
/* 80179564 00176644  7F 83 E3 78 */	mr r3, r28
/* 80179568 00176648  C0 3F 00 00 */	lfs f1, 0x0(r31)
/* 8017956C 0017664C  C0 5F 00 08 */	lfs f2, 0x8(r31)
/* 80179570 00176650  4B EA CD A9 */	bl assign__5xVec2Fff
/* 80179574 00176654  C0 7D 00 00 */	lfs f3, 0x0(r29)
/* 80179578 00176658  38 7C 00 08 */	addi r3, r28, 0x8
/* 8017957C 0017665C  C0 3F 00 00 */	lfs f1, 0x0(r31)
/* 80179580 00176660  C0 5D 00 08 */	lfs f2, 0x8(r29)
/* 80179584 00176664  C0 1F 00 08 */	lfs f0, 0x8(r31)
/* 80179588 00176668  EC 23 08 28 */	fsubs f1, f3, f1
/* 8017958C 0017666C  EC 42 00 28 */	fsubs f2, f2, f0
/* 80179590 00176670  4B EA CD 89 */	bl assign__5xVec2Fff
/* 80179594 00176674  38 7C 00 08 */	addi r3, r28, 0x8
/* 80179598 00176678  4B E9 C3 C5 */	bl length2__5xVec2CFv
/* 8017959C 0017667C  C0 02 AC B0 */	lfs f0, "@1603"@sda21(r2)
/* 801795A0 00176680  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 801795A4 00176684  4C 41 13 82 */	cror eq, gt, eq
/* 801795A8 00176688  40 82 00 28 */	bne .L_801795D0
/* 801795AC 0017668C  C0 02 AC B4 */	lfs f0, "@1604"@sda21(r2)
/* 801795B0 00176690  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 801795B4 00176694  4C 40 13 82 */	cror eq, lt, eq
/* 801795B8 00176698  40 82 00 18 */	bne .L_801795D0
/* 801795BC 0017669C  C0 22 AC BC */	lfs f1, "@1606"@sda21(r2)
/* 801795C0 001766A0  38 7C 00 08 */	addi r3, r28, 0x8
/* 801795C4 001766A4  C0 42 AC B8 */	lfs f2, "@1605"@sda21(r2)
/* 801795C8 001766A8  4B EA CD 51 */	bl assign__5xVec2Fff
/* 801795CC 001766AC  48 00 00 18 */	b .L_801795E4
.L_801795D0:
/* 801795D0 001766B0  4B E9 12 2D */	bl xsqrt__Ff
/* 801795D4 001766B4  C0 02 AC BC */	lfs f0, "@1606"@sda21(r2)
/* 801795D8 001766B8  38 7C 00 08 */	addi r3, r28, 0x8
/* 801795DC 001766BC  EC 20 08 24 */	fdivs f1, f0, f1
/* 801795E0 001766C0  4B EE 6B 21 */	bl __amu__5xVec2Ff
.L_801795E4:
/* 801795E4 001766C4  C0 1E 00 6C */	lfs f0, 0x6c(r30)
/* 801795E8 001766C8  D0 1C 00 10 */	stfs f0, 0x10(r28)
/* 801795EC 001766CC  C0 02 AC B8 */	lfs f0, "@1605"@sda21(r2)
/* 801795F0 001766D0  D0 1C 00 14 */	stfs f0, 0x14(r28)
/* 801795F4 001766D4  D3 FC 00 18 */	stfs f31, 0x18(r28)
/* 801795F8 001766D8  E3 E1 00 28 */	psq_l f31, 0x28(r1), 0, qr0
/* 801795FC 001766DC  80 01 00 34 */	lwz r0, 0x34(r1)
/* 80179600 001766E0  CB E1 00 20 */	lfd f31, 0x20(r1)
/* 80179604 001766E4  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 80179608 001766E8  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 8017960C 001766EC  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 80179610 001766F0  83 81 00 10 */	lwz r28, 0x10(r1)
/* 80179614 001766F4  7C 08 03 A6 */	mtlr r0
/* 80179618 001766F8  38 21 00 30 */	addi r1, r1, 0x30
/* 8017961C 001766FC  4E 80 00 20 */	blr
.endfn aim_beam__20zNPCGoalDutchmanBeamCFRQ220zNPCGoalDutchmanBeam9beam_dataRC5xVec3f

# zNPCGoalDutchmanBeam::calc_beam_loc(xVec2&, float, const zNPCGoalDutchmanBeam::beam_data&) const
.fn calc_beam_loc__20zNPCGoalDutchmanBeamCFR5xVec2fRCQ220zNPCGoalDutchmanBeam9beam_data, global
/* 80179620 00176700  94 21 FF A0 */	stwu r1, -0x60(r1)
/* 80179624 00176704  7C 08 02 A6 */	mflr r0
/* 80179628 00176708  90 01 00 64 */	stw r0, 0x64(r1)
/* 8017962C 0017670C  DB E1 00 50 */	stfd f31, 0x50(r1)
/* 80179630 00176710  F3 E1 00 58 */	psq_st f31, 0x58(r1), 0, qr0
/* 80179634 00176714  DB C1 00 40 */	stfd f30, 0x40(r1)
/* 80179638 00176718  F3 C1 00 48 */	psq_st f30, 0x48(r1), 0, qr0
/* 8017963C 0017671C  93 E1 00 3C */	stw r31, 0x3c(r1)
/* 80179640 00176720  93 C1 00 38 */	stw r30, 0x38(r1)
/* 80179644 00176724  3C 60 80 33 */	lis r3, "tweak__30@unnamed@zNPCTypeDutchman_cpp@"@ha
/* 80179648 00176728  7C BF 2B 78 */	mr r31, r5
/* 8017964C 0017672C  38 63 A5 78 */	addi r3, r3, "tweak__30@unnamed@zNPCTypeDutchman_cpp@"@l
/* 80179650 00176730  FF C0 08 90 */	fmr f30, f1
/* 80179654 00176734  C0 23 00 6C */	lfs f1, 0x6c(r3)
/* 80179658 00176738  7C 9E 23 78 */	mr r30, r4
/* 8017965C 0017673C  C0 03 00 70 */	lfs f0, 0x70(r3)
/* 80179660 00176740  EC 9E 08 28 */	fsubs f4, f30, f1
/* 80179664 00176744  C0 A3 00 78 */	lfs f5, 0x78(r3)
/* 80179668 00176748  EC 40 08 28 */	fsubs f2, f0, f1
/* 8017966C 0017674C  C0 03 00 7C */	lfs f0, 0x7c(r3)
/* 80179670 00176750  C0 23 00 74 */	lfs f1, 0x74(r3)
/* 80179674 00176754  EC 60 28 28 */	fsubs f3, f0, f5
/* 80179678 00176758  EC 84 10 24 */	fdivs f4, f4, f2
/* 8017967C 0017675C  C0 42 AD 98 */	lfs f2, "@2181"@sda21(r2)
/* 80179680 00176760  C0 05 00 18 */	lfs f0, 0x18(r5)
/* 80179684 00176764  EC 24 00 72 */	fmuls f1, f4, f1
/* 80179688 00176768  EF E4 28 FA */	fmadds f31, f4, f3, f5
/* 8017968C 0017676C  EC 22 00 7A */	fmadds f1, f2, f1, f0
/* 80179690 00176770  4B F4 B7 BD */	bl isin__Ff
/* 80179694 00176774  C0 1F 00 08 */	lfs f0, 0x8(r31)
/* 80179698 00176778  EC 3F 00 72 */	fmuls f1, f31, f1
/* 8017969C 0017677C  80 82 C0 A8 */	lwz r4, "@3458"@sda21(r2)
/* 801796A0 00176780  38 61 00 28 */	addi r3, r1, 0x28
/* 801796A4 00176784  80 02 C0 AC */	lwz r0, "@3458"+0x4@sda21(r2)
/* 801796A8 00176788  FC 00 00 50 */	fneg f0, f0
/* 801796AC 0017678C  90 81 00 28 */	stw r4, 0x28(r1)
/* 801796B0 00176790  C0 5F 00 0C */	lfs f2, 0xc(r31)
/* 801796B4 00176794  90 01 00 2C */	stw r0, 0x2c(r1)
/* 801796B8 00176798  D0 41 00 28 */	stfs f2, 0x28(r1)
/* 801796BC 0017679C  D0 01 00 2C */	stfs f0, 0x2c(r1)
/* 801796C0 001767A0  4B EE 6A 05 */	bl __ml__5xVec2CFf
/* 801796C4 001767A4  FC 20 F0 90 */	fmr f1, f30
/* 801796C8 001767A8  90 61 00 08 */	stw r3, 0x8(r1)
/* 801796CC 001767AC  38 7F 00 08 */	addi r3, r31, 0x8
/* 801796D0 001767B0  90 81 00 0C */	stw r4, 0xc(r1)
/* 801796D4 001767B4  4B EE 69 F1 */	bl __ml__5xVec2CFf
/* 801796D8 001767B8  90 81 00 14 */	stw r4, 0x14(r1)
/* 801796DC 001767BC  38 81 00 10 */	addi r4, r1, 0x10
/* 801796E0 001767C0  90 61 00 10 */	stw r3, 0x10(r1)
/* 801796E4 001767C4  7F E3 FB 78 */	mr r3, r31
/* 801796E8 001767C8  4B FE 67 D9 */	bl __pl__5xVec2CFRC5xVec2
/* 801796EC 001767CC  90 81 00 1C */	stw r4, 0x1c(r1)
/* 801796F0 001767D0  38 81 00 08 */	addi r4, r1, 0x8
/* 801796F4 001767D4  90 61 00 18 */	stw r3, 0x18(r1)
/* 801796F8 001767D8  38 61 00 18 */	addi r3, r1, 0x18
/* 801796FC 001767DC  4B FE 67 C5 */	bl __pl__5xVec2CFRC5xVec2
/* 80179700 001767E0  90 81 00 24 */	stw r4, 0x24(r1)
/* 80179704 001767E4  38 81 00 20 */	addi r4, r1, 0x20
/* 80179708 001767E8  90 61 00 20 */	stw r3, 0x20(r1)
/* 8017970C 001767EC  7F C3 F3 78 */	mr r3, r30
/* 80179710 001767F0  4B EA C0 E9 */	bl __as__5xVec2FRC5xVec2
/* 80179714 001767F4  E3 E1 00 58 */	psq_l f31, 0x58(r1), 0, qr0
/* 80179718 001767F8  CB E1 00 50 */	lfd f31, 0x50(r1)
/* 8017971C 001767FC  E3 C1 00 48 */	psq_l f30, 0x48(r1), 0, qr0
/* 80179720 00176800  CB C1 00 40 */	lfd f30, 0x40(r1)
/* 80179724 00176804  83 E1 00 3C */	lwz r31, 0x3c(r1)
/* 80179728 00176808  80 01 00 64 */	lwz r0, 0x64(r1)
/* 8017972C 0017680C  83 C1 00 38 */	lwz r30, 0x38(r1)
/* 80179730 00176810  7C 08 03 A6 */	mtlr r0
/* 80179734 00176814  38 21 00 60 */	addi r1, r1, 0x60
/* 80179738 00176818  4E 80 00 20 */	blr
.endfn calc_beam_loc__20zNPCGoalDutchmanBeamCFR5xVec2fRCQ220zNPCGoalDutchmanBeam9beam_data

# zNPCGoalDutchmanBeam::update_beam(float, zNPCGoalDutchmanBeam::beam_data&, int)
.fn update_beam__20zNPCGoalDutchmanBeamFfRQ220zNPCGoalDutchmanBeam9beam_datai, global
/* 8017973C 0017681C  94 21 FF A0 */	stwu r1, -0x60(r1)
/* 80179740 00176820  7C 08 02 A6 */	mflr r0
/* 80179744 00176824  90 01 00 64 */	stw r0, 0x64(r1)
/* 80179748 00176828  DB E1 00 50 */	stfd f31, 0x50(r1)
/* 8017974C 0017682C  F3 E1 00 58 */	psq_st f31, 0x58(r1), 0, qr0
/* 80179750 00176830  DB C1 00 40 */	stfd f30, 0x40(r1)
/* 80179754 00176834  F3 C1 00 48 */	psq_st f30, 0x48(r1), 0, qr0
/* 80179758 00176838  BF 61 00 2C */	stmw r27, 0x2c(r1)
/* 8017975C 0017683C  FF E0 08 90 */	fmr f31, f1
/* 80179760 00176840  3C C0 80 33 */	lis r6, "tweak__30@unnamed@zNPCTypeDutchman_cpp@"@ha
/* 80179764 00176844  7C BD 2B 78 */	mr r29, r5
/* 80179768 00176848  7C 9C 23 78 */	mr r28, r4
/* 8017976C 0017684C  7C 7B 1B 78 */	mr r27, r3
/* 80179770 00176850  3B E6 A5 78 */	addi r31, r6, "tweak__30@unnamed@zNPCTypeDutchman_cpp@"@l
/* 80179774 00176854  7F A4 EB 78 */	mr r4, r29
/* 80179778 00176858  48 00 01 99 */	bl start_effects__20zNPCGoalDutchmanBeamFif
/* 8017977C 0017685C  C0 1C 00 10 */	lfs f0, 0x10(r28)
/* 80179780 00176860  FC 40 F8 90 */	fmr f2, f31
/* 80179784 00176864  C0 3F 00 64 */	lfs f1, 0x64(r31)
/* 80179788 00176868  38 61 00 0C */	addi r3, r1, 0xc
/* 8017978C 0017686C  D0 01 00 0C */	stfs f0, 0xc(r1)
/* 80179790 00176870  38 81 00 08 */	addi r4, r1, 0x8
/* 80179794 00176874  C0 7F 00 70 */	lfs f3, 0x70(r31)
/* 80179798 00176878  C0 1C 00 14 */	lfs f0, 0x14(r28)
/* 8017979C 0017687C  C0 9F 00 68 */	lfs f4, 0x68(r31)
/* 801797A0 00176880  D0 01 00 08 */	stfs f0, 0x8(r1)
/* 801797A4 00176884  4B EB 79 B1 */	bl xAccelMove__FRfRfffff
/* 801797A8 00176888  3C 60 80 33 */	lis r3, "tweak__30@unnamed@zNPCTypeDutchman_cpp@"@ha
/* 801797AC 0017688C  C0 41 00 0C */	lfs f2, 0xc(r1)
/* 801797B0 00176890  38 63 A5 78 */	addi r3, r3, "tweak__30@unnamed@zNPCTypeDutchman_cpp@"@l
/* 801797B4 00176894  C0 3C 00 10 */	lfs f1, 0x10(r28)
/* 801797B8 00176898  C0 02 AD 18 */	lfs f0, "@1988"@sda21(r2)
/* 801797BC 0017689C  C0 63 00 8C */	lfs f3, 0x8c(r3)
/* 801797C0 001768A0  EC 82 08 28 */	fsubs f4, f2, f1
/* 801797C4 001768A4  EC 00 00 F2 */	fmuls f0, f0, f3
/* 801797C8 001768A8  FC 04 00 40 */	fcmpo cr0, f4, f0
/* 801797CC 001768AC  4C 41 13 82 */	cror eq, gt, eq
/* 801797D0 001768B0  40 82 00 98 */	bne .L_80179868
/* 801797D4 001768B4  EC 04 18 24 */	fdivs f0, f4, f3
/* 801797D8 001768B8  C0 22 AC C0 */	lfs f1, "@1632"@sda21(r2)
/* 801797DC 001768BC  EC 01 00 2A */	fadds f0, f1, f0
/* 801797E0 001768C0  FC 00 00 1E */	fctiwz f0, f0
/* 801797E4 001768C4  D8 01 00 10 */	stfd f0, 0x10(r1)
/* 801797E8 001768C8  80 61 00 14 */	lwz r3, 0x14(r1)
/* 801797EC 001768CC  3B E3 FF FF */	addi r31, r3, -0x1
/* 801797F0 001768D0  2C 1F 00 0F */	cmpwi r31, 0xf
/* 801797F4 001768D4  40 81 00 08 */	ble .L_801797FC
/* 801797F8 001768D8  3B E0 00 0F */	li r31, 0xf
.L_801797FC:
/* 801797FC 001768DC  38 7F 00 01 */	addi r3, r31, 0x1
/* 80179800 001768E0  3C 00 43 30 */	lis r0, 0x4330
/* 80179804 001768E4  6C 63 80 00 */	xoris r3, r3, 0x8000
/* 80179808 001768E8  90 01 00 18 */	stw r0, 0x18(r1)
/* 8017980C 001768EC  C8 22 AD D0 */	lfd f1, "@3493"@sda21(r2)
/* 80179810 001768F0  3B C0 00 00 */	li r30, 0x0
/* 80179814 001768F4  90 61 00 1C */	stw r3, 0x1c(r1)
/* 80179818 001768F8  C0 42 AC BC */	lfs f2, "@1606"@sda21(r2)
/* 8017981C 001768FC  C8 01 00 18 */	lfd f0, 0x18(r1)
/* 80179820 00176900  EC 00 08 28 */	fsubs f0, f0, f1
/* 80179824 00176904  EC 02 00 24 */	fdivs f0, f2, f0
/* 80179828 00176908  EF C0 01 32 */	fmuls f30, f0, f4
/* 8017982C 0017690C  EF E0 07 F2 */	fmuls f31, f0, f31
/* 80179830 00176910  48 00 00 30 */	b .L_80179860
.L_80179834:
/* 80179834 00176914  C0 1C 00 10 */	lfs f0, 0x10(r28)
/* 80179838 00176918  7F 63 DB 78 */	mr r3, r27
/* 8017983C 0017691C  7F A4 EB 78 */	mr r4, r29
/* 80179840 00176920  EC 00 F0 2A */	fadds f0, f0, f30
/* 80179844 00176924  D0 1C 00 10 */	stfs f0, 0x10(r28)
/* 80179848 00176928  48 00 00 71 */	bl refresh_beam__20zNPCGoalDutchmanBeamFi
/* 8017984C 0017692C  FC 20 F8 90 */	fmr f1, f31
/* 80179850 00176930  7F 63 DB 78 */	mr r3, r27
/* 80179854 00176934  7F A4 EB 78 */	mr r4, r29
/* 80179858 00176938  48 00 03 79 */	bl add_effects__20zNPCGoalDutchmanBeamFif
/* 8017985C 0017693C  3B DE 00 01 */	addi r30, r30, 0x1
.L_80179860:
/* 80179860 00176940  7C 1E F8 00 */	cmpw r30, r31
/* 80179864 00176944  41 80 FF D0 */	blt .L_80179834
.L_80179868:
/* 80179868 00176948  C0 01 00 0C */	lfs f0, 0xc(r1)
/* 8017986C 0017694C  7F 63 DB 78 */	mr r3, r27
/* 80179870 00176950  7F A4 EB 78 */	mr r4, r29
/* 80179874 00176954  D0 1C 00 10 */	stfs f0, 0x10(r28)
/* 80179878 00176958  C0 01 00 08 */	lfs f0, 0x8(r1)
/* 8017987C 0017695C  D0 1C 00 14 */	stfs f0, 0x14(r28)
/* 80179880 00176960  48 00 00 39 */	bl refresh_beam__20zNPCGoalDutchmanBeamFi
/* 80179884 00176964  FC 20 F8 90 */	fmr f1, f31
/* 80179888 00176968  7F 63 DB 78 */	mr r3, r27
/* 8017988C 0017696C  7F A4 EB 78 */	mr r4, r29
/* 80179890 00176970  48 00 03 41 */	bl add_effects__20zNPCGoalDutchmanBeamFif
/* 80179894 00176974  E3 E1 00 58 */	psq_l f31, 0x58(r1), 0, qr0
/* 80179898 00176978  CB E1 00 50 */	lfd f31, 0x50(r1)
/* 8017989C 0017697C  E3 C1 00 48 */	psq_l f30, 0x48(r1), 0, qr0
/* 801798A0 00176980  CB C1 00 40 */	lfd f30, 0x40(r1)
/* 801798A4 00176984  BB 61 00 2C */	lmw r27, 0x2c(r1)
/* 801798A8 00176988  80 01 00 64 */	lwz r0, 0x64(r1)
/* 801798AC 0017698C  7C 08 03 A6 */	mtlr r0
/* 801798B0 00176990  38 21 00 60 */	addi r1, r1, 0x60
/* 801798B4 00176994  4E 80 00 20 */	blr
.endfn update_beam__20zNPCGoalDutchmanBeamFfRQ220zNPCGoalDutchmanBeam9beam_datai

# zNPCGoalDutchmanBeam::refresh_beam(int)
.fn refresh_beam__20zNPCGoalDutchmanBeamFi, global
/* 801798B8 00176998  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 801798BC 0017699C  7C 08 02 A6 */	mflr r0
/* 801798C0 001769A0  90 01 00 24 */	stw r0, 0x24(r1)
/* 801798C4 001769A4  1C 04 00 34 */	mulli r0, r4, 0x34
/* 801798C8 001769A8  38 81 00 08 */	addi r4, r1, 0x8
/* 801798CC 001769AC  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 801798D0 001769B0  7F E3 02 14 */	add r31, r3, r0
/* 801798D4 001769B4  C0 3F 00 64 */	lfs f1, 0x64(r31)
/* 801798D8 001769B8  38 BF 00 54 */	addi r5, r31, 0x54
/* 801798DC 001769BC  4B FF FD 45 */	bl calc_beam_loc__20zNPCGoalDutchmanBeamCFR5xVec2fRCQ220zNPCGoalDutchmanBeam9beam_data
/* 801798E0 001769C0  3C 60 80 33 */	lis r3, "tweak__30@unnamed@zNPCTypeDutchman_cpp@"@ha
/* 801798E4 001769C4  C0 21 00 08 */	lfs f1, 0x8(r1)
/* 801798E8 001769C8  38 63 A5 78 */	addi r3, r3, "tweak__30@unnamed@zNPCTypeDutchman_cpp@"@l
/* 801798EC 001769CC  C0 61 00 0C */	lfs f3, 0xc(r1)
/* 801798F0 001769D0  C0 43 00 24 */	lfs f2, 0x24(r3)
/* 801798F4 001769D4  38 7F 00 74 */	addi r3, r31, 0x74
/* 801798F8 001769D8  4B E9 17 F5 */	bl assign__5xVec3Ffff
/* 801798FC 001769DC  80 01 00 24 */	lwz r0, 0x24(r1)
/* 80179900 001769E0  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 80179904 001769E4  7C 08 03 A6 */	mtlr r0
/* 80179908 001769E8  38 21 00 20 */	addi r1, r1, 0x20
/* 8017990C 001769EC  4E 80 00 20 */	blr
.endfn refresh_beam__20zNPCGoalDutchmanBeamFi

# zNPCGoalDutchmanBeam::start_effects(int, float)
.fn start_effects__20zNPCGoalDutchmanBeamFif, global
/* 80179910 001769F0  94 21 FF C0 */	stwu r1, -0x40(r1)
/* 80179914 001769F4  7C 08 02 A6 */	mflr r0
/* 80179918 001769F8  90 01 00 44 */	stw r0, 0x44(r1)
/* 8017991C 001769FC  DB E1 00 30 */	stfd f31, 0x30(r1)
/* 80179920 00176A00  F3 E1 00 38 */	psq_st f31, 0x38(r1), 0, qr0
/* 80179924 00176A04  BF 61 00 1C */	stmw r27, 0x1c(r1)
/* 80179928 00176A08  7C 7B 1B 78 */	mr r27, r3
/* 8017992C 00176A0C  FF E0 08 90 */	fmr f31, f1
/* 80179930 00176A10  7C 9C 23 78 */	mr r28, r4
/* 80179934 00176A14  80 83 00 BC */	lwz r4, 0xbc(r3)
/* 80179938 00176A18  7F 85 E3 78 */	mr r5, r28
/* 8017993C 00176A1C  38 61 00 08 */	addi r3, r1, 0x8
/* 80179940 00176A20  4B FF E0 0D */	bl get_eye_loc__12zNPCDutchmanCFi
/* 80179944 00176A24  1F DC 01 1C */	mulli r30, r28, 0x11c
/* 80179948 00176A28  80 1B 00 BC */	lwz r0, 0xbc(r27)
/* 8017994C 00176A2C  38 81 00 08 */	addi r4, r1, 0x8
/* 80179950 00176A30  38 7E 03 24 */	addi r3, r30, 0x324
/* 80179954 00176A34  7C 60 1A 14 */	add r3, r0, r3
/* 80179958 00176A38  4B E9 19 0D */	bl __as__5xVec3FRC5xVec3
/* 8017995C 00176A3C  80 1B 00 BC */	lwz r0, 0xbc(r27)
/* 80179960 00176A40  38 A0 00 00 */	li r5, 0x0
/* 80179964 00176A44  57 9F 10 3A */	slwi r31, r28, 2
/* 80179968 00176A48  3B AD 97 7C */	addi r29, r13, "eyeglow_emitter__30@unnamed@zNPCTypeDutchman_cpp@"@sda21
/* 8017996C 00176A4C  7C 60 F2 14 */	add r3, r0, r30
/* 80179970 00176A50  38 9E 03 24 */	addi r4, r30, 0x324
/* 80179974 00176A54  90 A3 04 30 */	stw r5, 0x430(r3)
/* 80179978 00176A58  7C 7D F8 2E */	lwzx r3, r29, r31
/* 8017997C 00176A5C  80 1B 00 BC */	lwz r0, 0xbc(r27)
/* 80179980 00176A60  83 C3 00 10 */	lwz r30, 0x10(r3)
/* 80179984 00176A64  7C 80 22 14 */	add r4, r0, r4
/* 80179988 00176A68  38 7E 00 30 */	addi r3, r30, 0x30
/* 8017998C 00176A6C  4B E9 18 D9 */	bl __as__5xVec3FRC5xVec3
/* 80179990 00176A70  1C 1C 00 34 */	mulli r0, r28, 0x34
/* 80179994 00176A74  3C 60 80 33 */	lis r3, "tweak__30@unnamed@zNPCTypeDutchman_cpp@"@ha
/* 80179998 00176A78  C0 1E 00 30 */	lfs f0, 0x30(r30)
/* 8017999C 00176A7C  FC 20 F8 90 */	fmr f1, f31
/* 801799A0 00176A80  38 83 A5 78 */	addi r4, r3, "tweak__30@unnamed@zNPCTypeDutchman_cpp@"@l
/* 801799A4 00176A84  7C 7B 02 14 */	add r3, r27, r0
/* 801799A8 00176A88  C0 64 00 94 */	lfs f3, 0x94(r4)
/* 801799AC 00176A8C  C0 43 00 5C */	lfs f2, 0x5c(r3)
/* 801799B0 00176A90  EC 03 00 BA */	fmadds f0, f3, f2, f0
/* 801799B4 00176A94  D0 1E 00 30 */	stfs f0, 0x30(r30)
/* 801799B8 00176A98  C0 64 00 94 */	lfs f3, 0x94(r4)
/* 801799BC 00176A9C  C0 43 00 60 */	lfs f2, 0x60(r3)
/* 801799C0 00176AA0  C0 1E 00 38 */	lfs f0, 0x38(r30)
/* 801799C4 00176AA4  EC 03 00 BA */	fmadds f0, f3, f2, f0
/* 801799C8 00176AA8  D0 1E 00 38 */	stfs f0, 0x38(r30)
/* 801799CC 00176AAC  80 7B 00 BC */	lwz r3, 0xbc(r27)
/* 801799D0 00176AB0  7C 9D F8 2E */	lwzx r4, r29, r31
/* 801799D4 00176AB4  48 00 1F 85 */	bl emit_particles__12zNPCDutchmanCFR11zParEmitterf
/* 801799D8 00176AB8  E3 E1 00 38 */	psq_l f31, 0x38(r1), 0, qr0
/* 801799DC 00176ABC  CB E1 00 30 */	lfd f31, 0x30(r1)
/* 801799E0 00176AC0  BB 61 00 1C */	lmw r27, 0x1c(r1)
/* 801799E4 00176AC4  80 01 00 44 */	lwz r0, 0x44(r1)
/* 801799E8 00176AC8  7C 08 03 A6 */	mtlr r0
/* 801799EC 00176ACC  38 21 00 40 */	addi r1, r1, 0x40
/* 801799F0 00176AD0  4E 80 00 20 */	blr
.endfn start_effects__20zNPCGoalDutchmanBeamFif

# zNPCGoalDutchmanBeam::add_miss_effects(int, float)
.fn add_miss_effects__20zNPCGoalDutchmanBeamFif, global
/* 801799F4 00176AD4  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801799F8 00176AD8  7C 08 02 A6 */	mflr r0
/* 801799FC 00176ADC  1C C4 00 34 */	mulli r6, r4, 0x34
/* 80179A00 00176AE0  38 A0 00 01 */	li r5, 0x1
/* 80179A04 00176AE4  90 01 00 14 */	stw r0, 0x14(r1)
/* 80179A08 00176AE8  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80179A0C 00176AEC  1F E4 01 1C */	mulli r31, r4, 0x11c
/* 80179A10 00176AF0  38 86 00 74 */	addi r4, r6, 0x74
/* 80179A14 00176AF4  93 C1 00 08 */	stw r30, 0x8(r1)
/* 80179A18 00176AF8  7C 7E 1B 78 */	mr r30, r3
/* 80179A1C 00176AFC  7C 7E 32 14 */	add r3, r30, r6
/* 80179A20 00176B00  90 A3 00 70 */	stw r5, 0x70(r3)
/* 80179A24 00176B04  7C 9E 22 14 */	add r4, r30, r4
/* 80179A28 00176B08  80 DE 00 BC */	lwz r6, 0xbc(r30)
/* 80179A2C 00176B0C  7C 66 FA 14 */	add r3, r6, r31
/* 80179A30 00176B10  80 03 04 30 */	lwz r0, 0x430(r3)
/* 80179A34 00176B14  54 00 20 36 */	slwi r0, r0, 4
/* 80179A38 00176B18  7C 7F 02 14 */	add r3, r31, r0
/* 80179A3C 00176B1C  38 63 03 30 */	addi r3, r3, 0x330
/* 80179A40 00176B20  7C 66 1A 14 */	add r3, r6, r3
/* 80179A44 00176B24  98 A3 00 00 */	stb r5, 0x0(r3)
/* 80179A48 00176B28  38 63 00 04 */	addi r3, r3, 0x4
/* 80179A4C 00176B2C  4B E9 18 19 */	bl __as__5xVec3FRC5xVec3
/* 80179A50 00176B30  80 1E 00 BC */	lwz r0, 0xbc(r30)
/* 80179A54 00176B34  7C 80 FA 14 */	add r4, r0, r31
/* 80179A58 00176B38  80 64 04 30 */	lwz r3, 0x430(r4)
/* 80179A5C 00176B3C  38 03 00 01 */	addi r0, r3, 0x1
/* 80179A60 00176B40  90 04 04 30 */	stw r0, 0x430(r4)
/* 80179A64 00176B44  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80179A68 00176B48  83 C1 00 08 */	lwz r30, 0x8(r1)
/* 80179A6C 00176B4C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80179A70 00176B50  7C 08 03 A6 */	mtlr r0
/* 80179A74 00176B54  38 21 00 10 */	addi r1, r1, 0x10
/* 80179A78 00176B58  4E 80 00 20 */	blr
.endfn add_miss_effects__20zNPCGoalDutchmanBeamFif

# zNPCGoalDutchmanBeam::add_blast_effects(int, float)
.fn add_blast_effects__20zNPCGoalDutchmanBeamFif, global
/* 80179A7C 00176B5C  94 21 FF D0 */	stwu r1, -0x30(r1)
/* 80179A80 00176B60  7C 08 02 A6 */	mflr r0
/* 80179A84 00176B64  90 01 00 34 */	stw r0, 0x34(r1)
/* 80179A88 00176B68  DB E1 00 20 */	stfd f31, 0x20(r1)
/* 80179A8C 00176B6C  F3 E1 00 28 */	psq_st f31, 0x28(r1), 0, qr0
/* 80179A90 00176B70  BF 41 00 08 */	stmw r26, 0x8(r1)
/* 80179A94 00176B74  7C 9A 23 78 */	mr r26, r4
/* 80179A98 00176B78  7C 7F 1B 78 */	mr r31, r3
/* 80179A9C 00176B7C  1F BA 01 1C */	mulli r29, r26, 0x11c
/* 80179AA0 00176B80  80 A3 00 BC */	lwz r5, 0xbc(r3)
/* 80179AA4 00176B84  3C 80 80 33 */	lis r4, ...bss.0@ha
/* 80179AA8 00176B88  FF E0 08 90 */	fmr f31, f1
/* 80179AAC 00176B8C  38 00 00 00 */	li r0, 0x0
/* 80179AB0 00176B90  7C 65 EA 14 */	add r3, r5, r29
/* 80179AB4 00176B94  80 63 04 30 */	lwz r3, 0x430(r3)
/* 80179AB8 00176B98  1F 9A 00 34 */	mulli r28, r26, 0x34
/* 80179ABC 00176B9C  3B C4 A5 78 */	addi r30, r4, ...bss.0@l
/* 80179AC0 00176BA0  54 63 20 36 */	slwi r3, r3, 4
/* 80179AC4 00176BA4  7C 7D 1A 14 */	add r3, r29, r3
/* 80179AC8 00176BA8  38 63 03 30 */	addi r3, r3, 0x330
/* 80179ACC 00176BAC  3B 7C 00 74 */	addi r27, r28, 0x74
/* 80179AD0 00176BB0  7C 65 1A 14 */	add r3, r5, r3
/* 80179AD4 00176BB4  7F 7F DA 14 */	add r27, r31, r27
/* 80179AD8 00176BB8  98 03 00 00 */	stb r0, 0x0(r3)
/* 80179ADC 00176BBC  7F 64 DB 78 */	mr r4, r27
/* 80179AE0 00176BC0  38 63 00 04 */	addi r3, r3, 0x4
/* 80179AE4 00176BC4  4B E9 17 81 */	bl __as__5xVec3FRC5xVec3
/* 80179AE8 00176BC8  80 9F 00 BC */	lwz r4, 0xbc(r31)
/* 80179AEC 00176BCC  1C 1A 01 40 */	mulli r0, r26, 0x140
/* 80179AF0 00176BD0  38 7E 0C 1C */	addi r3, r30, 0xc1c
/* 80179AF4 00176BD4  7C C4 EA 14 */	add r6, r4, r29
/* 80179AF8 00176BD8  80 A6 04 30 */	lwz r5, 0x430(r6)
/* 80179AFC 00176BDC  7F 9F E2 14 */	add r28, r31, r28
/* 80179B00 00176BE0  7F 64 DB 78 */	mr r4, r27
/* 80179B04 00176BE4  7C 63 02 14 */	add r3, r3, r0
/* 80179B08 00176BE8  38 05 00 01 */	addi r0, r5, 0x1
/* 80179B0C 00176BEC  90 06 04 30 */	stw r0, 0x430(r6)
/* 80179B10 00176BF0  C0 42 AC BC */	lfs f2, "@1606"@sda21(r2)
/* 80179B14 00176BF4  C0 22 AC B8 */	lfs f1, "@1605"@sda21(r2)
/* 80179B18 00176BF8  FC 60 10 90 */	fmr f3, f2
/* 80179B1C 00176BFC  80 BC 00 70 */	lwz r5, 0x70(r28)
/* 80179B20 00176C00  4B EB 0A 95 */	bl insert__9xFXRibbonFRC5xVec3fffUi
/* 80179B24 00176C04  38 00 00 00 */	li r0, 0x0
/* 80179B28 00176C08  38 7E 03 88 */	addi r3, r30, 0x388
/* 80179B2C 00176C0C  90 1C 00 70 */	stw r0, 0x70(r28)
/* 80179B30 00176C10  7F 64 DB 78 */	mr r4, r27
/* 80179B34 00176C14  38 63 01 40 */	addi r3, r3, 0x140
/* 80179B38 00176C18  4B E9 17 2D */	bl __as__5xVec3FRC5xVec3
/* 80179B3C 00176C1C  FC 20 F8 90 */	fmr f1, f31
/* 80179B40 00176C20  80 7F 00 BC */	lwz r3, 0xbc(r31)
/* 80179B44 00176C24  80 8D 97 70 */	lwz r4, "plasma_emitter__30@unnamed@zNPCTypeDutchman_cpp@"@sda21(r13)
/* 80179B48 00176C28  38 BE 03 88 */	addi r5, r30, 0x388
/* 80179B4C 00176C2C  48 00 1D D9 */	bl emit_particles__12zNPCDutchmanCFR11zParEmitterfR25xParEmitterCustomSettings
/* 80179B50 00176C30  38 7E 04 F4 */	addi r3, r30, 0x4f4
/* 80179B54 00176C34  7F 64 DB 78 */	mr r4, r27
/* 80179B58 00176C38  38 63 01 40 */	addi r3, r3, 0x140
/* 80179B5C 00176C3C  4B E9 17 09 */	bl __as__5xVec3FRC5xVec3
/* 80179B60 00176C40  FC 20 F8 90 */	fmr f1, f31
/* 80179B64 00176C44  80 7F 00 BC */	lwz r3, 0xbc(r31)
/* 80179B68 00176C48  80 8D 97 74 */	lwz r4, "spark_emitter__30@unnamed@zNPCTypeDutchman_cpp@"@sda21(r13)
/* 80179B6C 00176C4C  38 BE 04 F4 */	addi r5, r30, 0x4f4
/* 80179B70 00176C50  48 00 1D B5 */	bl emit_particles__12zNPCDutchmanCFR11zParEmitterfR25xParEmitterCustomSettings
/* 80179B74 00176C54  38 7E 06 60 */	addi r3, r30, 0x660
/* 80179B78 00176C58  7F 64 DB 78 */	mr r4, r27
/* 80179B7C 00176C5C  38 63 01 40 */	addi r3, r3, 0x140
/* 80179B80 00176C60  4B E9 16 E5 */	bl __as__5xVec3FRC5xVec3
/* 80179B84 00176C64  38 9E 00 00 */	addi r4, r30, 0x0
/* 80179B88 00176C68  38 7E 06 60 */	addi r3, r30, 0x660
/* 80179B8C 00176C6C  C0 22 AC E0 */	lfs f1, "@1772"@sda21(r2)
/* 80179B90 00176C70  38 63 00 0C */	addi r3, r3, 0xc
/* 80179B94 00176C74  C0 04 00 90 */	lfs f0, 0x90(r4)
/* 80179B98 00176C78  EC 21 00 32 */	fmuls f1, f1, f0
/* 80179B9C 00176C7C  48 00 1C 61 */	bl set__10xParInterpFf
/* 80179BA0 00176C80  80 7F 00 BC */	lwz r3, 0xbc(r31)
/* 80179BA4 00176C84  38 BE 06 60 */	addi r5, r30, 0x660
/* 80179BA8 00176C88  80 8D 97 78 */	lwz r4, "light_emitter__30@unnamed@zNPCTypeDutchman_cpp@"@sda21(r13)
/* 80179BAC 00176C8C  C0 22 AD A0 */	lfs f1, "@2333"@sda21(r2)
/* 80179BB0 00176C90  48 00 1D 75 */	bl emit_particles__12zNPCDutchmanCFR11zParEmitterfR25xParEmitterCustomSettings
/* 80179BB4 00176C94  E3 E1 00 28 */	psq_l f31, 0x28(r1), 0, qr0
/* 80179BB8 00176C98  CB E1 00 20 */	lfd f31, 0x20(r1)
/* 80179BBC 00176C9C  BB 41 00 08 */	lmw r26, 0x8(r1)
/* 80179BC0 00176CA0  80 01 00 34 */	lwz r0, 0x34(r1)
/* 80179BC4 00176CA4  7C 08 03 A6 */	mtlr r0
/* 80179BC8 00176CA8  38 21 00 30 */	addi r1, r1, 0x30
/* 80179BCC 00176CAC  4E 80 00 20 */	blr
.endfn add_blast_effects__20zNPCGoalDutchmanBeamFif

# zNPCGoalDutchmanBeam::add_effects(int, float)
.fn add_effects__20zNPCGoalDutchmanBeamFif, global
/* 80179BD0 00176CB0  94 21 FF B0 */	stwu r1, -0x50(r1)
/* 80179BD4 00176CB4  7C 08 02 A6 */	mflr r0
/* 80179BD8 00176CB8  90 01 00 54 */	stw r0, 0x54(r1)
/* 80179BDC 00176CBC  DB E1 00 40 */	stfd f31, 0x40(r1)
/* 80179BE0 00176CC0  F3 E1 00 48 */	psq_st f31, 0x48(r1), 0, qr0
/* 80179BE4 00176CC4  DB C1 00 30 */	stfd f30, 0x30(r1)
/* 80179BE8 00176CC8  F3 C1 00 38 */	psq_st f30, 0x38(r1), 0, qr0
/* 80179BEC 00176CCC  93 E1 00 2C */	stw r31, 0x2c(r1)
/* 80179BF0 00176CD0  93 C1 00 28 */	stw r30, 0x28(r1)
/* 80179BF4 00176CD4  7C 7E 1B 78 */	mr r30, r3
/* 80179BF8 00176CD8  FF C0 08 90 */	fmr f30, f1
/* 80179BFC 00176CDC  80 63 00 BC */	lwz r3, 0xbc(r3)
/* 80179C00 00176CE0  7C 9F 23 78 */	mr r31, r4
/* 80179C04 00176CE4  48 00 1D 49 */	bl get_orbit__12zNPCDutchmanCFv
/* 80179C08 00176CE8  1C 9F 00 34 */	mulli r4, r31, 0x34
/* 80179C0C 00176CEC  7C 65 1B 78 */	mr r5, r3
/* 80179C10 00176CF0  38 61 00 08 */	addi r3, r1, 0x8
/* 80179C14 00176CF4  38 84 00 74 */	addi r4, r4, 0x74
/* 80179C18 00176CF8  7C 9E 22 14 */	add r4, r30, r4
/* 80179C1C 00176CFC  4B E9 15 B1 */	bl __mi__5xVec3CFRC5xVec3
/* 80179C20 00176D00  3C 60 80 33 */	lis r3, "tweak__30@unnamed@zNPCTypeDutchman_cpp@"@ha
/* 80179C24 00176D04  80 C1 00 08 */	lwz r6, 0x8(r1)
/* 80179C28 00176D08  38 83 A5 78 */	addi r4, r3, "tweak__30@unnamed@zNPCTypeDutchman_cpp@"@l
/* 80179C2C 00176D0C  80 A1 00 0C */	lwz r5, 0xc(r1)
/* 80179C30 00176D10  C0 22 AC EC */	lfs f1, "@1977"@sda21(r2)
/* 80179C34 00176D14  38 61 00 14 */	addi r3, r1, 0x14
/* 80179C38 00176D18  C0 04 00 28 */	lfs f0, 0x28(r4)
/* 80179C3C 00176D1C  80 01 00 10 */	lwz r0, 0x10(r1)
/* 80179C40 00176D20  EF E1 00 2A */	fadds f31, f1, f0
/* 80179C44 00176D24  90 C1 00 14 */	stw r6, 0x14(r1)
/* 80179C48 00176D28  90 A1 00 18 */	stw r5, 0x18(r1)
/* 80179C4C 00176D2C  90 01 00 1C */	stw r0, 0x1c(r1)
/* 80179C50 00176D30  4B E9 14 AD */	bl length2__5xVec3CFv
/* 80179C54 00176D34  EC 1F 07 F2 */	fmuls f0, f31, f31
/* 80179C58 00176D38  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80179C5C 00176D3C  40 81 00 18 */	ble .L_80179C74
/* 80179C60 00176D40  FC 20 F0 90 */	fmr f1, f30
/* 80179C64 00176D44  7F C3 F3 78 */	mr r3, r30
/* 80179C68 00176D48  7F E4 FB 78 */	mr r4, r31
/* 80179C6C 00176D4C  4B FF FD 89 */	bl add_miss_effects__20zNPCGoalDutchmanBeamFif
/* 80179C70 00176D50  48 00 00 14 */	b .L_80179C84
.L_80179C74:
/* 80179C74 00176D54  FC 20 F0 90 */	fmr f1, f30
/* 80179C78 00176D58  7F C3 F3 78 */	mr r3, r30
/* 80179C7C 00176D5C  7F E4 FB 78 */	mr r4, r31
/* 80179C80 00176D60  4B FF FD FD */	bl add_blast_effects__20zNPCGoalDutchmanBeamFif
.L_80179C84:
/* 80179C84 00176D64  E3 E1 00 48 */	psq_l f31, 0x48(r1), 0, qr0
/* 80179C88 00176D68  CB E1 00 40 */	lfd f31, 0x40(r1)
/* 80179C8C 00176D6C  E3 C1 00 38 */	psq_l f30, 0x38(r1), 0, qr0
/* 80179C90 00176D70  CB C1 00 30 */	lfd f30, 0x30(r1)
/* 80179C94 00176D74  83 E1 00 2C */	lwz r31, 0x2c(r1)
/* 80179C98 00176D78  80 01 00 54 */	lwz r0, 0x54(r1)
/* 80179C9C 00176D7C  83 C1 00 28 */	lwz r30, 0x28(r1)
/* 80179CA0 00176D80  7C 08 03 A6 */	mtlr r0
/* 80179CA4 00176D84  38 21 00 50 */	addi r1, r1, 0x50
/* 80179CA8 00176D88  4E 80 00 20 */	blr
.endfn add_effects__20zNPCGoalDutchmanBeamFif

# zNPCGoalDutchmanBeam::predict_target(xVec3&) const
.fn predict_target__20zNPCGoalDutchmanBeamCFR5xVec3, global
/* 80179CAC 00176D8C  94 21 FF C0 */	stwu r1, -0x40(r1)
/* 80179CB0 00176D90  7C 08 02 A6 */	mflr r0
/* 80179CB4 00176D94  90 01 00 44 */	stw r0, 0x44(r1)
/* 80179CB8 00176D98  DB E1 00 30 */	stfd f31, 0x30(r1)
/* 80179CBC 00176D9C  F3 E1 00 38 */	psq_st f31, 0x38(r1), 0, qr0
/* 80179CC0 00176DA0  93 E1 00 2C */	stw r31, 0x2c(r1)
/* 80179CC4 00176DA4  93 C1 00 28 */	stw r30, 0x28(r1)
/* 80179CC8 00176DA8  3C A0 80 3C */	lis r5, globals@ha
/* 80179CCC 00176DAC  7C 9E 23 78 */	mr r30, r4
/* 80179CD0 00176DB0  38 A5 05 58 */	addi r5, r5, globals@l
/* 80179CD4 00176DB4  80 63 00 BC */	lwz r3, 0xbc(r3)
/* 80179CD8 00176DB8  80 A5 07 04 */	lwz r5, 0x704(r5)
/* 80179CDC 00176DBC  80 85 00 4C */	lwz r4, 0x4c(r5)
/* 80179CE0 00176DC0  3B E4 00 30 */	addi r31, r4, 0x30
/* 80179CE4 00176DC4  48 00 1B 39 */	bl get_center__12zNPCDutchmanCFv
/* 80179CE8 00176DC8  7C 65 1B 78 */	mr r5, r3
/* 80179CEC 00176DCC  7F E4 FB 78 */	mr r4, r31
/* 80179CF0 00176DD0  38 61 00 08 */	addi r3, r1, 0x8
/* 80179CF4 00176DD4  4B E9 14 D9 */	bl __mi__5xVec3CFRC5xVec3
/* 80179CF8 00176DD8  80 A1 00 08 */	lwz r5, 0x8(r1)
/* 80179CFC 00176DDC  38 61 00 14 */	addi r3, r1, 0x14
/* 80179D00 00176DE0  80 81 00 0C */	lwz r4, 0xc(r1)
/* 80179D04 00176DE4  80 01 00 10 */	lwz r0, 0x10(r1)
/* 80179D08 00176DE8  90 A1 00 14 */	stw r5, 0x14(r1)
/* 80179D0C 00176DEC  90 81 00 18 */	stw r4, 0x18(r1)
/* 80179D10 00176DF0  90 01 00 1C */	stw r0, 0x1c(r1)
/* 80179D14 00176DF4  4B E9 13 E9 */	bl length2__5xVec3CFv
/* 80179D18 00176DF8  3C 60 80 33 */	lis r3, "tweak__30@unnamed@zNPCTypeDutchman_cpp@"@ha
/* 80179D1C 00176DFC  C0 42 AD 38 */	lfs f2, "@1996"@sda21(r2)
/* 80179D20 00176E00  38 63 A5 78 */	addi r3, r3, "tweak__30@unnamed@zNPCTypeDutchman_cpp@"@l
/* 80179D24 00176E04  C3 E3 00 6C */	lfs f31, 0x6c(r3)
/* 80179D28 00176E08  EC 1F 07 F2 */	fmuls f0, f31, f31
/* 80179D2C 00176E0C  EC 02 00 2A */	fadds f0, f2, f0
/* 80179D30 00176E10  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80179D34 00176E14  4C 40 13 82 */	cror eq, lt, eq
/* 80179D38 00176E18  40 82 00 14 */	bne .L_80179D4C
/* 80179D3C 00176E1C  7F C3 F3 78 */	mr r3, r30
/* 80179D40 00176E20  7F E4 FB 78 */	mr r4, r31
/* 80179D44 00176E24  4B E9 15 21 */	bl __as__5xVec3FRC5xVec3
/* 80179D48 00176E28  48 00 00 34 */	b .L_80179D7C
.L_80179D4C:
/* 80179D4C 00176E2C  4B E9 0A B1 */	bl xsqrt__Ff
/* 80179D50 00176E30  3C 60 80 33 */	lis r3, "tweak__30@unnamed@zNPCTypeDutchman_cpp@"@ha
/* 80179D54 00176E34  EC 21 F8 28 */	fsubs f1, f1, f31
/* 80179D58 00176E38  38 63 A5 78 */	addi r3, r3, "tweak__30@unnamed@zNPCTypeDutchman_cpp@"@l
/* 80179D5C 00176E3C  C0 43 00 64 */	lfs f2, 0x64(r3)
/* 80179D60 00176E40  C0 63 00 70 */	lfs f3, 0x70(r3)
/* 80179D64 00176E44  C0 83 00 68 */	lfs f4, 0x68(r3)
/* 80179D68 00176E48  4B EB 76 C5 */	bl xAccelMoveTime__Fffff
/* 80179D6C 00176E4C  C0 42 AC BC */	lfs f2, "@1606"@sda21(r2)
/* 80179D70 00176E50  7F C3 F3 78 */	mr r3, r30
/* 80179D74 00176E54  38 80 00 01 */	li r4, 0x1
/* 80179D78 00176E58  4B EF 5C 05 */	bl zEntPlayer_PredictPos__FP5xVec3ffi
.L_80179D7C:
/* 80179D7C 00176E5C  E3 E1 00 38 */	psq_l f31, 0x38(r1), 0, qr0
/* 80179D80 00176E60  80 01 00 44 */	lwz r0, 0x44(r1)
/* 80179D84 00176E64  CB E1 00 30 */	lfd f31, 0x30(r1)
/* 80179D88 00176E68  83 E1 00 2C */	lwz r31, 0x2c(r1)
/* 80179D8C 00176E6C  83 C1 00 28 */	lwz r30, 0x28(r1)
/* 80179D90 00176E70  7C 08 03 A6 */	mtlr r0
/* 80179D94 00176E74  38 21 00 40 */	addi r1, r1, 0x40
/* 80179D98 00176E78  4E 80 00 20 */	blr
.endfn predict_target__20zNPCGoalDutchmanBeamCFR5xVec3

# zNPCGoalDutchmanFlame::create(int, RyzMemGrow*, void*)
.fn create__21zNPCGoalDutchmanFlameFiP10RyzMemGrowPv, global
/* 80179D9C 00176E7C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80179DA0 00176E80  7C 08 02 A6 */	mflr r0
/* 80179DA4 00176E84  90 01 00 14 */	stw r0, 0x14(r1)
/* 80179DA8 00176E88  7C 80 23 78 */	mr r0, r4
/* 80179DAC 00176E8C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80179DB0 00176E90  7C BF 2B 78 */	mr r31, r5
/* 80179DB4 00176E94  7C 05 03 78 */	mr r5, r0
/* 80179DB8 00176E98  93 C1 00 08 */	stw r30, 0x8(r1)
/* 80179DBC 00176E9C  7C 7E 1B 78 */	mr r30, r3
/* 80179DC0 00176EA0  38 60 00 60 */	li r3, 0x60
/* 80179DC4 00176EA4  7F C4 F3 78 */	mr r4, r30
/* 80179DC8 00176EA8  4B F9 53 89 */	bl __nw__10RyzMemDataFUliP10RyzMemGrow
/* 80179DCC 00176EAC  7C 64 1B 79 */	mr. r4, r3
/* 80179DD0 00176EB0  41 82 00 14 */	beq .L_80179DE4
/* 80179DD4 00176EB4  7F C4 F3 78 */	mr r4, r30
/* 80179DD8 00176EB8  7F E5 FB 78 */	mr r5, r31
/* 80179DDC 00176EBC  48 00 1E D1 */	bl __ct__21zNPCGoalDutchmanFlameFiR12zNPCDutchman
/* 80179DE0 00176EC0  7C 64 1B 78 */	mr r4, r3
.L_80179DE4:
/* 80179DE4 00176EC4  28 04 00 00 */	cmplwi r4, 0x0
/* 80179DE8 00176EC8  41 82 00 08 */	beq .L_80179DF0
/* 80179DEC 00176ECC  38 84 00 0C */	addi r4, r4, 0xc
.L_80179DF0:
/* 80179DF0 00176ED0  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80179DF4 00176ED4  7C 83 23 78 */	mr r3, r4
/* 80179DF8 00176ED8  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80179DFC 00176EDC  83 C1 00 08 */	lwz r30, 0x8(r1)
/* 80179E00 00176EE0  7C 08 03 A6 */	mtlr r0
/* 80179E04 00176EE4  38 21 00 10 */	addi r1, r1, 0x10
/* 80179E08 00176EE8  4E 80 00 20 */	blr
.endfn create__21zNPCGoalDutchmanFlameFiP10RyzMemGrowPv

# zNPCGoalDutchmanFlame::Enter(float, void*)
.fn Enter__21zNPCGoalDutchmanFlameFfPv, global
/* 80179E0C 00176EEC  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 80179E10 00176EF0  7C 08 02 A6 */	mflr r0
/* 80179E14 00176EF4  90 01 00 24 */	stw r0, 0x24(r1)
/* 80179E18 00176EF8  DB E1 00 10 */	stfd f31, 0x10(r1)
/* 80179E1C 00176EFC  F3 E1 00 18 */	psq_st f31, 0x18(r1), 0, qr0
/* 80179E20 00176F00  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80179E24 00176F04  93 C1 00 08 */	stw r30, 0x8(r1)
/* 80179E28 00176F08  7C 7E 1B 78 */	mr r30, r3
/* 80179E2C 00176F0C  FF E0 08 90 */	fmr f31, f1
/* 80179E30 00176F10  80 63 00 5C */	lwz r3, 0x5c(r3)
/* 80179E34 00176F14  7C 9F 23 78 */	mr r31, r4
/* 80179E38 00176F18  4B FF CB 15 */	bl reset_lasso_anim__12zNPCDutchmanFv
/* 80179E3C 00176F1C  80 7E 00 5C */	lwz r3, 0x5c(r30)
/* 80179E40 00176F20  48 00 1B 0D */	bl get_orbit__12zNPCDutchmanCFv
/* 80179E44 00176F24  7C 64 1B 78 */	mr r4, r3
/* 80179E48 00176F28  80 7E 00 5C */	lwz r3, 0x5c(r30)
/* 80179E4C 00176F2C  4B FF DE 61 */	bl turn_to_face__12zNPCDutchmanFRC5xVec3
/* 80179E50 00176F30  C0 02 AC B8 */	lfs f0, "@1605"@sda21(r2)
/* 80179E54 00176F34  FC 20 F8 90 */	fmr f1, f31
/* 80179E58 00176F38  80 BE 00 5C */	lwz r5, 0x5c(r30)
/* 80179E5C 00176F3C  38 00 00 00 */	li r0, 0x0
/* 80179E60 00176F40  7F C3 F3 78 */	mr r3, r30
/* 80179E64 00176F44  7F E4 FB 78 */	mr r4, r31
/* 80179E68 00176F48  D0 05 02 D0 */	stfs f0, 0x2d0(r5)
/* 80179E6C 00176F4C  90 1E 00 4C */	stw r0, 0x4c(r30)
/* 80179E70 00176F50  4B F5 B2 A5 */	bl Enter__14zNPCGoalCommonFfPv
/* 80179E74 00176F54  E3 E1 00 18 */	psq_l f31, 0x18(r1), 0, qr0
/* 80179E78 00176F58  80 01 00 24 */	lwz r0, 0x24(r1)
/* 80179E7C 00176F5C  CB E1 00 10 */	lfd f31, 0x10(r1)
/* 80179E80 00176F60  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80179E84 00176F64  83 C1 00 08 */	lwz r30, 0x8(r1)
/* 80179E88 00176F68  7C 08 03 A6 */	mtlr r0
/* 80179E8C 00176F6C  38 21 00 20 */	addi r1, r1, 0x20
/* 80179E90 00176F70  4E 80 00 20 */	blr
.endfn Enter__21zNPCGoalDutchmanFlameFfPv

# zNPCGoalDutchmanFlame::Exit(float, void*)
.fn Exit__21zNPCGoalDutchmanFlameFfPv, global
/* 80179E94 00176F74  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 80179E98 00176F78  7C 08 02 A6 */	mflr r0
/* 80179E9C 00176F7C  90 01 00 24 */	stw r0, 0x24(r1)
/* 80179EA0 00176F80  DB E1 00 18 */	stfd f31, 0x18(r1)
/* 80179EA4 00176F84  FF E0 08 90 */	fmr f31, f1
/* 80179EA8 00176F88  93 E1 00 14 */	stw r31, 0x14(r1)
/* 80179EAC 00176F8C  7C 9F 23 78 */	mr r31, r4
/* 80179EB0 00176F90  93 C1 00 10 */	stw r30, 0x10(r1)
/* 80179EB4 00176F94  7C 7E 1B 78 */	mr r30, r3
/* 80179EB8 00176F98  80 63 00 5C */	lwz r3, 0x5c(r3)
/* 80179EBC 00176F9C  80 03 01 C8 */	lwz r0, 0x1c8(r3)
/* 80179EC0 00176FA0  54 00 02 0C */	rlwinm r0, r0, 0, 8, 6
/* 80179EC4 00176FA4  90 03 01 C8 */	stw r0, 0x1c8(r3)
/* 80179EC8 00176FA8  80 7E 00 5C */	lwz r3, 0x5c(r30)
/* 80179ECC 00176FAC  4B FF D7 01 */	bl stop_flames__12zNPCDutchmanFv
/* 80179ED0 00176FB0  80 7E 00 5C */	lwz r3, 0x5c(r30)
/* 80179ED4 00176FB4  4B FF C6 5D */	bl stop_hand_trail__12zNPCDutchmanFv
/* 80179ED8 00176FB8  FC 20 F8 90 */	fmr f1, f31
/* 80179EDC 00176FBC  7F C3 F3 78 */	mr r3, r30
/* 80179EE0 00176FC0  7F E4 FB 78 */	mr r4, r31
/* 80179EE4 00176FC4  4B F5 B5 39 */	bl Exit__5xGoalFfPv
/* 80179EE8 00176FC8  80 01 00 24 */	lwz r0, 0x24(r1)
/* 80179EEC 00176FCC  CB E1 00 18 */	lfd f31, 0x18(r1)
/* 80179EF0 00176FD0  83 E1 00 14 */	lwz r31, 0x14(r1)
/* 80179EF4 00176FD4  83 C1 00 10 */	lwz r30, 0x10(r1)
/* 80179EF8 00176FD8  7C 08 03 A6 */	mtlr r0
/* 80179EFC 00176FDC  38 21 00 20 */	addi r1, r1, 0x20
/* 80179F00 00176FE0  4E 80 00 20 */	blr
.endfn Exit__21zNPCGoalDutchmanFlameFfPv

# zNPCGoalDutchmanFlame::Process(en_trantype*, float, void*, xScene*)
.fn Process__21zNPCGoalDutchmanFlameFP11en_trantypefPvP6xScene, global
/* 80179F04 00176FE4  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 80179F08 00176FE8  7C 08 02 A6 */	mflr r0
/* 80179F0C 00176FEC  90 01 00 24 */	stw r0, 0x24(r1)
/* 80179F10 00176FF0  DB E1 00 18 */	stfd f31, 0x18(r1)
/* 80179F14 00176FF4  FF E0 08 90 */	fmr f31, f1
/* 80179F18 00176FF8  93 E1 00 14 */	stw r31, 0x14(r1)
/* 80179F1C 00176FFC  7C DF 33 78 */	mr r31, r6
/* 80179F20 00177000  93 C1 00 10 */	stw r30, 0x10(r1)
/* 80179F24 00177004  7C BE 2B 78 */	mr r30, r5
/* 80179F28 00177008  93 A1 00 0C */	stw r29, 0xc(r1)
/* 80179F2C 0017700C  7C 9D 23 78 */	mr r29, r4
/* 80179F30 00177010  93 81 00 08 */	stw r28, 0x8(r1)
/* 80179F34 00177014  7C 7C 1B 78 */	mr r28, r3
/* 80179F38 00177018  80 03 00 4C */	lwz r0, 0x4c(r3)
/* 80179F3C 0017701C  2C 00 00 02 */	cmpwi r0, 0x2
/* 80179F40 00177020  41 82 00 34 */	beq .L_80179F74
/* 80179F44 00177024  40 80 00 14 */	bge .L_80179F58
/* 80179F48 00177028  2C 00 00 00 */	cmpwi r0, 0x0
/* 80179F4C 0017702C  41 82 00 18 */	beq .L_80179F64
/* 80179F50 00177030  40 80 00 1C */	bge .L_80179F6C
/* 80179F54 00177034  48 00 00 3C */	b .L_80179F90
.L_80179F58:
/* 80179F58 00177038  2C 00 00 04 */	cmpwi r0, 0x4
/* 80179F5C 0017703C  40 80 00 34 */	bge .L_80179F90
/* 80179F60 00177040  48 00 00 1C */	b .L_80179F7C
.L_80179F64:
/* 80179F64 00177044  48 00 00 69 */	bl update_wait__21zNPCGoalDutchmanFlameFf
/* 80179F68 00177048  48 00 00 28 */	b .L_80179F90
.L_80179F6C:
/* 80179F6C 0017704C  48 00 01 95 */	bl update_move__21zNPCGoalDutchmanFlameFf
/* 80179F70 00177050  48 00 00 20 */	b .L_80179F90
.L_80179F74:
/* 80179F74 00177054  48 00 03 55 */	bl update_stop__21zNPCGoalDutchmanFlameFf
/* 80179F78 00177058  48 00 00 18 */	b .L_80179F90
.L_80179F7C:
/* 80179F7C 0017705C  38 00 00 01 */	li r0, 0x1
/* 80179F80 00177060  90 1D 00 00 */	stw r0, 0x0(r29)
/* 80179F84 00177064  80 7C 00 5C */	lwz r3, 0x5c(r28)
/* 80179F88 00177068  4B FF B7 5D */	bl next_goal__12zNPCDutchmanFv
/* 80179F8C 0017706C  48 00 00 1C */	b .L_80179FA8
.L_80179F90:
/* 80179F90 00177070  FC 20 F8 90 */	fmr f1, f31
/* 80179F94 00177074  7F 83 E3 78 */	mr r3, r28
/* 80179F98 00177078  7F A4 EB 78 */	mr r4, r29
/* 80179F9C 0017707C  7F C5 F3 78 */	mr r5, r30
/* 80179FA0 00177080  7F E6 FB 78 */	mr r6, r31
/* 80179FA4 00177084  4B F9 4B A5 */	bl Process__5xGoalFP11en_trantypefPvP6xScene
.L_80179FA8:
/* 80179FA8 00177088  80 01 00 24 */	lwz r0, 0x24(r1)
/* 80179FAC 0017708C  CB E1 00 18 */	lfd f31, 0x18(r1)
/* 80179FB0 00177090  83 E1 00 14 */	lwz r31, 0x14(r1)
/* 80179FB4 00177094  83 C1 00 10 */	lwz r30, 0x10(r1)
/* 80179FB8 00177098  83 A1 00 0C */	lwz r29, 0xc(r1)
/* 80179FBC 0017709C  83 81 00 08 */	lwz r28, 0x8(r1)
/* 80179FC0 001770A0  7C 08 03 A6 */	mtlr r0
/* 80179FC4 001770A4  38 21 00 20 */	addi r1, r1, 0x20
/* 80179FC8 001770A8  4E 80 00 20 */	blr
.endfn Process__21zNPCGoalDutchmanFlameFP11en_trantypefPvP6xScene

# zNPCGoalDutchmanFlame::update_wait(float)
.fn update_wait__21zNPCGoalDutchmanFlameFf, global
/* 80179FCC 001770AC  94 21 FF D0 */	stwu r1, -0x30(r1)
/* 80179FD0 001770B0  7C 08 02 A6 */	mflr r0
/* 80179FD4 001770B4  3C 80 80 33 */	lis r4, "tweak__30@unnamed@zNPCTypeDutchman_cpp@"@ha
/* 80179FD8 001770B8  90 01 00 34 */	stw r0, 0x34(r1)
/* 80179FDC 001770BC  38 84 A5 78 */	addi r4, r4, "tweak__30@unnamed@zNPCTypeDutchman_cpp@"@l
/* 80179FE0 001770C0  93 E1 00 2C */	stw r31, 0x2c(r1)
/* 80179FE4 001770C4  7C 7F 1B 78 */	mr r31, r3
/* 80179FE8 001770C8  93 C1 00 28 */	stw r30, 0x28(r1)
/* 80179FEC 001770CC  93 A1 00 24 */	stw r29, 0x24(r1)
/* 80179FF0 001770D0  80 63 00 5C */	lwz r3, 0x5c(r3)
/* 80179FF4 001770D4  C0 04 00 D8 */	lfs f0, 0xd8(r4)
/* 80179FF8 001770D8  C0 23 02 D0 */	lfs f1, 0x2d0(r3)
/* 80179FFC 001770DC  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8017A000 001770E0  41 80 00 E4 */	blt .L_8017A0E4
/* 8017A004 001770E4  48 00 18 49 */	bl turning__12zNPCDutchmanCFv
/* 8017A008 001770E8  54 60 06 3F */	clrlwi. r0, r3, 24
/* 8017A00C 001770EC  41 82 00 08 */	beq .L_8017A014
/* 8017A010 001770F0  48 00 00 D4 */	b .L_8017A0E4
.L_8017A014:
/* 8017A014 001770F4  38 00 00 01 */	li r0, 0x1
/* 8017A018 001770F8  3C 60 80 33 */	lis r3, "tweak__30@unnamed@zNPCTypeDutchman_cpp@"@ha
/* 8017A01C 001770FC  90 1F 00 4C */	stw r0, 0x4c(r31)
/* 8017A020 00177100  38 63 A5 78 */	addi r3, r3, "tweak__30@unnamed@zNPCTypeDutchman_cpp@"@l
/* 8017A024 00177104  38 83 00 04 */	addi r4, r3, 0x4
/* 8017A028 00177108  80 7F 00 5C */	lwz r3, 0x5c(r31)
/* 8017A02C 0017710C  38 63 03 04 */	addi r3, r3, 0x304
/* 8017A030 00177110  4B E9 12 35 */	bl __as__5xVec3FRC5xVec3
/* 8017A034 00177114  80 BF 00 5C */	lwz r5, 0x5c(r31)
/* 8017A038 00177118  3C 60 80 33 */	lis r3, "tweak__30@unnamed@zNPCTypeDutchman_cpp@"@ha
/* 8017A03C 0017711C  38 83 A5 78 */	addi r4, r3, "tweak__30@unnamed@zNPCTypeDutchman_cpp@"@l
/* 8017A040 00177120  38 65 03 10 */	addi r3, r5, 0x310
/* 8017A044 00177124  38 84 00 10 */	addi r4, r4, 0x10
/* 8017A048 00177128  4B E9 12 1D */	bl __as__5xVec3FRC5xVec3
/* 8017A04C 0017712C  80 7F 00 5C */	lwz r3, 0x5c(r31)
/* 8017A050 00177130  48 00 18 FD */	bl get_orbit__12zNPCDutchmanCFv
/* 8017A054 00177134  80 9F 00 5C */	lwz r4, 0x5c(r31)
/* 8017A058 00177138  7C 7E 1B 78 */	mr r30, r3
/* 8017A05C 0017713C  38 61 00 08 */	addi r3, r1, 0x8
/* 8017A060 00177140  3B A4 02 EC */	addi r29, r4, 0x2ec
/* 8017A064 00177144  7F C5 F3 78 */	mr r5, r30
/* 8017A068 00177148  7F A4 EB 78 */	mr r4, r29
/* 8017A06C 0017714C  4B E9 11 61 */	bl __mi__5xVec3CFRC5xVec3
/* 8017A070 00177150  7F C4 F3 78 */	mr r4, r30
/* 8017A074 00177154  38 61 00 14 */	addi r3, r1, 0x14
/* 8017A078 00177158  38 A1 00 08 */	addi r5, r1, 0x8
/* 8017A07C 0017715C  4B E9 11 51 */	bl __mi__5xVec3CFRC5xVec3
/* 8017A080 00177160  7F A3 EB 78 */	mr r3, r29
/* 8017A084 00177164  38 81 00 14 */	addi r4, r1, 0x14
/* 8017A088 00177168  4B E9 11 DD */	bl __as__5xVec3FRC5xVec3
/* 8017A08C 0017716C  C0 7D 00 00 */	lfs f3, 0x0(r29)
/* 8017A090 00177170  38 7F 00 50 */	addi r3, r31, 0x50
/* 8017A094 00177174  C0 3E 00 00 */	lfs f1, 0x0(r30)
/* 8017A098 00177178  C0 5D 00 08 */	lfs f2, 0x8(r29)
/* 8017A09C 0017717C  C0 1E 00 08 */	lfs f0, 0x8(r30)
/* 8017A0A0 00177180  EC 23 08 28 */	fsubs f1, f3, f1
/* 8017A0A4 00177184  EC 42 00 28 */	fsubs f2, f2, f0
/* 8017A0A8 00177188  4B EA C2 71 */	bl assign__5xVec2Fff
/* 8017A0AC 0017718C  38 7F 00 50 */	addi r3, r31, 0x50
/* 8017A0B0 00177190  4B FA 34 6D */	bl normalize__5xVec2Fv
/* 8017A0B4 00177194  80 7F 00 5C */	lwz r3, 0x5c(r31)
/* 8017A0B8 00177198  38 A0 00 01 */	li r5, 0x1
/* 8017A0BC 0017719C  38 00 00 00 */	li r0, 0x0
/* 8017A0C0 001771A0  7F A4 EB 78 */	mr r4, r29
/* 8017A0C4 001771A4  90 A3 02 BC */	stw r5, 0x2bc(r3)
/* 8017A0C8 001771A8  98 1F 00 58 */	stb r0, 0x58(r31)
/* 8017A0CC 001771AC  80 7F 00 5C */	lwz r3, 0x5c(r31)
/* 8017A0D0 001771B0  4B FF DB DD */	bl turn_to_face__12zNPCDutchmanFRC5xVec3
/* 8017A0D4 001771B4  80 7F 00 5C */	lwz r3, 0x5c(r31)
/* 8017A0D8 001771B8  4B FF D4 AD */	bl start_flames__12zNPCDutchmanFv
/* 8017A0DC 001771BC  80 7F 00 5C */	lwz r3, 0x5c(r31)
/* 8017A0E0 001771C0  4B FF C3 DD */	bl start_hand_trail__12zNPCDutchmanFv
.L_8017A0E4:
/* 8017A0E4 001771C4  80 01 00 34 */	lwz r0, 0x34(r1)
/* 8017A0E8 001771C8  83 E1 00 2C */	lwz r31, 0x2c(r1)
/* 8017A0EC 001771CC  83 C1 00 28 */	lwz r30, 0x28(r1)
/* 8017A0F0 001771D0  83 A1 00 24 */	lwz r29, 0x24(r1)
/* 8017A0F4 001771D4  7C 08 03 A6 */	mtlr r0
/* 8017A0F8 001771D8  38 21 00 30 */	addi r1, r1, 0x30
/* 8017A0FC 001771DC  4E 80 00 20 */	blr
.endfn update_wait__21zNPCGoalDutchmanFlameFf

# zNPCGoalDutchmanFlame::update_move(float)
.fn update_move__21zNPCGoalDutchmanFlameFf, global
/* 8017A100 001771E0  94 21 FF C0 */	stwu r1, -0x40(r1)
/* 8017A104 001771E4  7C 08 02 A6 */	mflr r0
/* 8017A108 001771E8  90 01 00 44 */	stw r0, 0x44(r1)
/* 8017A10C 001771EC  93 E1 00 3C */	stw r31, 0x3c(r1)
/* 8017A110 001771F0  7C 7F 1B 78 */	mr r31, r3
/* 8017A114 001771F4  88 03 00 58 */	lbz r0, 0x58(r3)
/* 8017A118 001771F8  28 00 00 00 */	cmplwi r0, 0x0
/* 8017A11C 001771FC  40 82 00 FC */	bne .L_8017A218
/* 8017A120 00177200  80 9F 00 5C */	lwz r4, 0x5c(r31)
/* 8017A124 00177204  38 61 00 1C */	addi r3, r1, 0x1c
/* 8017A128 00177208  4B FF D8 9D */	bl get_splash_loc__12zNPCDutchmanCFv
/* 8017A12C 0017720C  80 61 00 1C */	lwz r3, 0x1c(r1)
/* 8017A130 00177210  80 81 00 20 */	lwz r4, 0x20(r1)
/* 8017A134 00177214  80 01 00 24 */	lwz r0, 0x24(r1)
/* 8017A138 00177218  90 61 00 28 */	stw r3, 0x28(r1)
/* 8017A13C 0017721C  80 7F 00 5C */	lwz r3, 0x5c(r31)
/* 8017A140 00177220  90 81 00 2C */	stw r4, 0x2c(r1)
/* 8017A144 00177224  90 01 00 30 */	stw r0, 0x30(r1)
/* 8017A148 00177228  48 00 18 05 */	bl get_orbit__12zNPCDutchmanCFv
/* 8017A14C 0017722C  C0 61 00 28 */	lfs f3, 0x28(r1)
/* 8017A150 00177230  38 9F 00 50 */	addi r4, r31, 0x50
/* 8017A154 00177234  C0 43 00 00 */	lfs f2, 0x0(r3)
/* 8017A158 00177238  C0 03 00 08 */	lfs f0, 0x8(r3)
/* 8017A15C 0017723C  38 61 00 08 */	addi r3, r1, 0x8
/* 8017A160 00177240  C0 21 00 30 */	lfs f1, 0x30(r1)
/* 8017A164 00177244  EC 43 10 28 */	fsubs f2, f3, f2
/* 8017A168 00177248  80 A2 C0 B0 */	lwz r5, "@3585"@sda21(r2)
/* 8017A16C 0017724C  80 02 C0 B4 */	lwz r0, "@3585"+0x4@sda21(r2)
/* 8017A170 00177250  EC 01 00 28 */	fsubs f0, f1, f0
/* 8017A174 00177254  90 A1 00 08 */	stw r5, 0x8(r1)
/* 8017A178 00177258  90 01 00 0C */	stw r0, 0xc(r1)
/* 8017A17C 0017725C  D0 41 00 08 */	stfs f2, 0x8(r1)
/* 8017A180 00177260  D0 01 00 0C */	stfs f0, 0xc(r1)
/* 8017A184 00177264  4B FA 33 3D */	bl dot__5xVec2CFRC5xVec2
/* 8017A188 00177268  3C 60 80 33 */	lis r3, "tweak__30@unnamed@zNPCTypeDutchman_cpp@"@ha
/* 8017A18C 0017726C  38 63 A5 78 */	addi r3, r3, "tweak__30@unnamed@zNPCTypeDutchman_cpp@"@l
/* 8017A190 00177270  C0 03 00 28 */	lfs f0, 0x28(r3)
/* 8017A194 00177274  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8017A198 00177278  40 81 00 78 */	ble .L_8017A210
/* 8017A19C 0017727C  3C 80 80 2A */	lis r4, g_hash_subbanim@ha
/* 8017A1A0 00177280  80 7F 00 5C */	lwz r3, 0x5c(r31)
/* 8017A1A4 00177284  38 84 90 E0 */	addi r4, r4, g_hash_subbanim@l
/* 8017A1A8 00177288  38 A0 00 00 */	li r5, 0x0
/* 8017A1AC 0017728C  80 84 00 48 */	lwz r4, 0x48(r4)
/* 8017A1B0 00177290  4B F7 8B E1 */	bl AnimStart__10zNPCCommonFUii
/* 8017A1B4 00177294  80 7F 00 5C */	lwz r3, 0x5c(r31)
/* 8017A1B8 00177298  80 03 01 C8 */	lwz r0, 0x1c8(r3)
/* 8017A1BC 0017729C  54 00 02 0C */	rlwinm r0, r0, 0, 8, 6
/* 8017A1C0 001772A0  90 03 01 C8 */	stw r0, 0x1c8(r3)
/* 8017A1C4 001772A4  80 7F 00 5C */	lwz r3, 0x5c(r31)
/* 8017A1C8 001772A8  4B FF D4 05 */	bl stop_flames__12zNPCDutchmanFv
/* 8017A1CC 001772AC  80 7F 00 5C */	lwz r3, 0x5c(r31)
/* 8017A1D0 001772B0  4B FF C3 61 */	bl stop_hand_trail__12zNPCDutchmanFv
/* 8017A1D4 001772B4  80 BF 00 5C */	lwz r5, 0x5c(r31)
/* 8017A1D8 001772B8  3C 60 80 33 */	lis r3, "tweak__30@unnamed@zNPCTypeDutchman_cpp@"@ha
/* 8017A1DC 001772BC  38 83 A5 78 */	addi r4, r3, "tweak__30@unnamed@zNPCTypeDutchman_cpp@"@l
/* 8017A1E0 001772C0  38 65 03 04 */	addi r3, r5, 0x304
/* 8017A1E4 001772C4  38 84 00 A8 */	addi r4, r4, 0xa8
/* 8017A1E8 001772C8  4B E9 10 7D */	bl __as__5xVec3FRC5xVec3
/* 8017A1EC 001772CC  80 BF 00 5C */	lwz r5, 0x5c(r31)
/* 8017A1F0 001772D0  3C 60 80 33 */	lis r3, "tweak__30@unnamed@zNPCTypeDutchman_cpp@"@ha
/* 8017A1F4 001772D4  38 83 A5 78 */	addi r4, r3, "tweak__30@unnamed@zNPCTypeDutchman_cpp@"@l
/* 8017A1F8 001772D8  38 65 03 10 */	addi r3, r5, 0x310
/* 8017A1FC 001772DC  38 84 00 B4 */	addi r4, r4, 0xb4
/* 8017A200 001772E0  4B E9 10 65 */	bl __as__5xVec3FRC5xVec3
/* 8017A204 001772E4  38 00 00 01 */	li r0, 0x1
/* 8017A208 001772E8  98 1F 00 58 */	stb r0, 0x58(r31)
/* 8017A20C 001772EC  48 00 00 0C */	b .L_8017A218
.L_8017A210:
/* 8017A210 001772F0  7F E3 FB 78 */	mr r3, r31
/* 8017A214 001772F4  48 00 01 95 */	bl refresh_vulnerability__21zNPCGoalDutchmanFlameFv
.L_8017A218:
/* 8017A218 001772F8  80 7F 00 5C */	lwz r3, 0x5c(r31)
/* 8017A21C 001772FC  38 63 02 F8 */	addi r3, r3, 0x2f8
/* 8017A220 00177300  4B E9 0E DD */	bl length2__5xVec3CFv
/* 8017A224 00177304  C0 02 AC EC */	lfs f0, "@1977"@sda21(r2)
/* 8017A228 00177308  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8017A22C 0017730C  40 80 00 88 */	bge .L_8017A2B4
/* 8017A230 00177310  80 7F 00 5C */	lwz r3, 0x5c(r31)
/* 8017A234 00177314  48 00 15 E9 */	bl get_center__12zNPCDutchmanCFv
/* 8017A238 00177318  80 9F 00 5C */	lwz r4, 0x5c(r31)
/* 8017A23C 0017731C  7C 65 1B 78 */	mr r5, r3
/* 8017A240 00177320  38 61 00 10 */	addi r3, r1, 0x10
/* 8017A244 00177324  38 84 02 EC */	addi r4, r4, 0x2ec
/* 8017A248 00177328  4B E9 0F 85 */	bl __mi__5xVec3CFRC5xVec3
/* 8017A24C 0017732C  38 61 00 10 */	addi r3, r1, 0x10
/* 8017A250 00177330  4B E9 0E AD */	bl length2__5xVec3CFv
/* 8017A254 00177334  C0 02 AC EC */	lfs f0, "@1977"@sda21(r2)
/* 8017A258 00177338  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8017A25C 0017733C  40 80 00 58 */	bge .L_8017A2B4
/* 8017A260 00177340  38 00 00 02 */	li r0, 0x2
/* 8017A264 00177344  90 1F 00 4C */	stw r0, 0x4c(r31)
/* 8017A268 00177348  80 7F 00 5C */	lwz r3, 0x5c(r31)
/* 8017A26C 0017734C  48 00 15 C1 */	bl face_player__12zNPCDutchmanFv
/* 8017A270 00177350  88 1F 00 58 */	lbz r0, 0x58(r31)
/* 8017A274 00177354  28 00 00 00 */	cmplwi r0, 0x0
/* 8017A278 00177358  40 82 00 3C */	bne .L_8017A2B4
/* 8017A27C 0017735C  3C 80 80 2A */	lis r4, g_hash_subbanim@ha
/* 8017A280 00177360  80 7F 00 5C */	lwz r3, 0x5c(r31)
/* 8017A284 00177364  38 84 90 E0 */	addi r4, r4, g_hash_subbanim@l
/* 8017A288 00177368  38 A0 00 00 */	li r5, 0x0
/* 8017A28C 0017736C  80 84 00 48 */	lwz r4, 0x48(r4)
/* 8017A290 00177370  4B F7 8B 01 */	bl AnimStart__10zNPCCommonFUii
/* 8017A294 00177374  80 7F 00 5C */	lwz r3, 0x5c(r31)
/* 8017A298 00177378  80 03 01 C8 */	lwz r0, 0x1c8(r3)
/* 8017A29C 0017737C  54 00 02 0C */	rlwinm r0, r0, 0, 8, 6
/* 8017A2A0 00177380  90 03 01 C8 */	stw r0, 0x1c8(r3)
/* 8017A2A4 00177384  80 7F 00 5C */	lwz r3, 0x5c(r31)
/* 8017A2A8 00177388  4B FF D3 25 */	bl stop_flames__12zNPCDutchmanFv
/* 8017A2AC 0017738C  80 7F 00 5C */	lwz r3, 0x5c(r31)
/* 8017A2B0 00177390  4B FF C2 81 */	bl stop_hand_trail__12zNPCDutchmanFv
.L_8017A2B4:
/* 8017A2B4 00177394  80 01 00 44 */	lwz r0, 0x44(r1)
/* 8017A2B8 00177398  83 E1 00 3C */	lwz r31, 0x3c(r1)
/* 8017A2BC 0017739C  7C 08 03 A6 */	mtlr r0
/* 8017A2C0 001773A0  38 21 00 40 */	addi r1, r1, 0x40
/* 8017A2C4 001773A4  4E 80 00 20 */	blr
.endfn update_move__21zNPCGoalDutchmanFlameFf

# zNPCGoalDutchmanFlame::update_stop(float)
.fn update_stop__21zNPCGoalDutchmanFlameFf, global
/* 8017A2C8 001773A8  94 21 FF D0 */	stwu r1, -0x30(r1)
/* 8017A2CC 001773AC  7C 08 02 A6 */	mflr r0
/* 8017A2D0 001773B0  90 01 00 34 */	stw r0, 0x34(r1)
/* 8017A2D4 001773B4  DB E1 00 20 */	stfd f31, 0x20(r1)
/* 8017A2D8 001773B8  F3 E1 00 28 */	psq_st f31, 0x28(r1), 0, qr0
/* 8017A2DC 001773BC  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 8017A2E0 001773C0  93 C1 00 18 */	stw r30, 0x18(r1)
/* 8017A2E4 001773C4  7C 7E 1B 78 */	mr r30, r3
/* 8017A2E8 001773C8  FF E0 08 90 */	fmr f31, f1
/* 8017A2EC 001773CC  80 63 00 5C */	lwz r3, 0x5c(r3)
/* 8017A2F0 001773D0  3B E0 00 00 */	li r31, 0x0
/* 8017A2F4 001773D4  4B F7 8C A9 */	bl AnimCurState__10zNPCCommonFv
/* 8017A2F8 001773D8  3C 80 80 2A */	lis r4, g_hash_subbanim@ha
/* 8017A2FC 001773DC  80 A3 00 08 */	lwz r5, 0x8(r3)
/* 8017A300 001773E0  38 64 90 E0 */	addi r3, r4, g_hash_subbanim@l
/* 8017A304 001773E4  80 03 00 48 */	lwz r0, 0x48(r3)
/* 8017A308 001773E8  7C 00 28 40 */	cmplw r0, r5
/* 8017A30C 001773EC  40 82 00 18 */	bne .L_8017A324
/* 8017A310 001773F0  80 7E 00 5C */	lwz r3, 0x5c(r30)
/* 8017A314 001773F4  38 80 00 00 */	li r4, 0x0
/* 8017A318 001773F8  4B F7 8D 61 */	bl AnimTimeRemain__10zNPCCommonFP10xAnimState
/* 8017A31C 001773FC  FC 1F 08 40 */	fcmpo cr0, f31, f1
/* 8017A320 00177400  40 81 00 08 */	ble .L_8017A328
.L_8017A324:
/* 8017A324 00177404  3B E0 00 01 */	li r31, 0x1
.L_8017A328:
/* 8017A328 00177408  57 E0 06 3F */	clrlwi. r0, r31, 24
/* 8017A32C 0017740C  41 82 00 5C */	beq .L_8017A388
/* 8017A330 00177410  80 7E 00 5C */	lwz r3, 0x5c(r30)
/* 8017A334 00177414  C0 22 AC D0 */	lfs f1, "@1690"@sda21(r2)
/* 8017A338 00177418  48 00 17 55 */	bl turning__12zNPCDutchmanCFf
/* 8017A33C 0017741C  54 60 06 3F */	clrlwi. r0, r3, 24
/* 8017A340 00177420  40 82 00 48 */	bne .L_8017A388
/* 8017A344 00177424  80 7E 00 5C */	lwz r3, 0x5c(r30)
/* 8017A348 00177428  48 00 14 D5 */	bl get_center__12zNPCDutchmanCFv
/* 8017A34C 0017742C  80 9E 00 5C */	lwz r4, 0x5c(r30)
/* 8017A350 00177430  7C 65 1B 78 */	mr r5, r3
/* 8017A354 00177434  38 61 00 08 */	addi r3, r1, 0x8
/* 8017A358 00177438  38 84 02 EC */	addi r4, r4, 0x2ec
/* 8017A35C 0017743C  4B E9 0E 71 */	bl __mi__5xVec3CFRC5xVec3
/* 8017A360 00177440  38 61 00 08 */	addi r3, r1, 0x8
/* 8017A364 00177444  4B E9 0D 99 */	bl length2__5xVec3CFv
/* 8017A368 00177448  C0 02 AC EC */	lfs f0, "@1977"@sda21(r2)
/* 8017A36C 0017744C  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8017A370 00177450  40 80 00 18 */	bge .L_8017A388
/* 8017A374 00177454  38 60 00 03 */	li r3, 0x3
/* 8017A378 00177458  38 00 00 00 */	li r0, 0x0
/* 8017A37C 0017745C  90 7E 00 4C */	stw r3, 0x4c(r30)
/* 8017A380 00177460  80 7E 00 5C */	lwz r3, 0x5c(r30)
/* 8017A384 00177464  98 03 02 B4 */	stb r0, 0x2b4(r3)
.L_8017A388:
/* 8017A388 00177468  E3 E1 00 28 */	psq_l f31, 0x28(r1), 0, qr0
/* 8017A38C 0017746C  80 01 00 34 */	lwz r0, 0x34(r1)
/* 8017A390 00177470  CB E1 00 20 */	lfd f31, 0x20(r1)
/* 8017A394 00177474  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 8017A398 00177478  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 8017A39C 0017747C  7C 08 03 A6 */	mtlr r0
/* 8017A3A0 00177480  38 21 00 30 */	addi r1, r1, 0x30
/* 8017A3A4 00177484  4E 80 00 20 */	blr
.endfn update_stop__21zNPCGoalDutchmanFlameFf

# zNPCGoalDutchmanFlame::refresh_vulnerability()
.fn refresh_vulnerability__21zNPCGoalDutchmanFlameFv, global
/* 8017A3A8 00177488  94 21 FF B0 */	stwu r1, -0x50(r1)
/* 8017A3AC 0017748C  7C 08 02 A6 */	mflr r0
/* 8017A3B0 00177490  90 01 00 54 */	stw r0, 0x54(r1)
/* 8017A3B4 00177494  93 E1 00 4C */	stw r31, 0x4c(r1)
/* 8017A3B8 00177498  7C 7F 1B 78 */	mr r31, r3
/* 8017A3BC 0017749C  93 C1 00 48 */	stw r30, 0x48(r1)
/* 8017A3C0 001774A0  80 63 00 5C */	lwz r3, 0x5c(r3)
/* 8017A3C4 001774A4  48 00 14 59 */	bl get_center__12zNPCDutchmanCFv
/* 8017A3C8 001774A8  7C 60 1B 78 */	mr r0, r3
/* 8017A3CC 001774AC  80 7F 00 5C */	lwz r3, 0x5c(r31)
/* 8017A3D0 001774B0  7C 1E 03 78 */	mr r30, r0
/* 8017A3D4 001774B4  48 00 15 79 */	bl get_orbit__12zNPCDutchmanCFv
/* 8017A3D8 001774B8  7C 65 1B 78 */	mr r5, r3
/* 8017A3DC 001774BC  7F C4 F3 78 */	mr r4, r30
/* 8017A3E0 001774C0  38 61 00 24 */	addi r3, r1, 0x24
/* 8017A3E4 001774C4  4B E9 0D E9 */	bl __mi__5xVec3CFRC5xVec3
/* 8017A3E8 001774C8  38 61 00 24 */	addi r3, r1, 0x24
/* 8017A3EC 001774CC  4B E9 0D 11 */	bl length2__5xVec3CFv
/* 8017A3F0 001774D0  3C 60 80 33 */	lis r3, "tweak__30@unnamed@zNPCTypeDutchman_cpp@"@ha
/* 8017A3F4 001774D4  C4 43 A5 78 */	lfsu f2, "tweak__30@unnamed@zNPCTypeDutchman_cpp@"@l(r3)
/* 8017A3F8 001774D8  C0 03 01 3C */	lfs f0, 0x13c(r3)
/* 8017A3FC 001774DC  EC 02 00 28 */	fsubs f0, f2, f0
/* 8017A400 001774E0  EC 00 00 32 */	fmuls f0, f0, f0
/* 8017A404 001774E4  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8017A408 001774E8  4C 41 13 82 */	cror eq, gt, eq
/* 8017A40C 001774EC  40 82 00 18 */	bne .L_8017A424
/* 8017A410 001774F0  80 7F 00 5C */	lwz r3, 0x5c(r31)
/* 8017A414 001774F4  80 03 01 C8 */	lwz r0, 0x1c8(r3)
/* 8017A418 001774F8  54 00 02 0C */	rlwinm r0, r0, 0, 8, 6
/* 8017A41C 001774FC  90 03 01 C8 */	stw r0, 0x1c8(r3)
/* 8017A420 00177500  48 00 01 34 */	b .L_8017A554
.L_8017A424:
/* 8017A424 00177504  3C 60 80 3C */	lis r3, globals@ha
/* 8017A428 00177508  7F C4 F3 78 */	mr r4, r30
/* 8017A42C 0017750C  38 A3 05 58 */	addi r5, r3, globals@l
/* 8017A430 00177510  38 61 00 18 */	addi r3, r1, 0x18
/* 8017A434 00177514  80 A5 07 04 */	lwz r5, 0x704(r5)
/* 8017A438 00177518  80 A5 00 4C */	lwz r5, 0x4c(r5)
/* 8017A43C 0017751C  38 A5 00 30 */	addi r5, r5, 0x30
/* 8017A440 00177520  4B E9 0D 8D */	bl __mi__5xVec3CFRC5xVec3
/* 8017A444 00177524  80 A1 00 18 */	lwz r5, 0x18(r1)
/* 8017A448 00177528  38 61 00 30 */	addi r3, r1, 0x30
/* 8017A44C 0017752C  80 81 00 1C */	lwz r4, 0x1c(r1)
/* 8017A450 00177530  80 01 00 20 */	lwz r0, 0x20(r1)
/* 8017A454 00177534  90 A1 00 30 */	stw r5, 0x30(r1)
/* 8017A458 00177538  90 81 00 34 */	stw r4, 0x34(r1)
/* 8017A45C 0017753C  90 01 00 38 */	stw r0, 0x38(r1)
/* 8017A460 00177540  4B E9 0C 9D */	bl length2__5xVec3CFv
/* 8017A464 00177544  80 BF 00 5C */	lwz r5, 0x5c(r31)
/* 8017A468 00177548  80 85 01 C8 */	lwz r4, 0x1c8(r5)
/* 8017A46C 0017754C  54 80 01 CF */	rlwinm. r0, r4, 0, 7, 7
/* 8017A470 00177550  41 82 00 74 */	beq .L_8017A4E4
/* 8017A474 00177554  3C 60 80 33 */	lis r3, "tweak__30@unnamed@zNPCTypeDutchman_cpp@"@ha
/* 8017A478 00177558  38 63 A5 78 */	addi r3, r3, "tweak__30@unnamed@zNPCTypeDutchman_cpp@"@l
/* 8017A47C 0017755C  C0 03 01 30 */	lfs f0, 0x130(r3)
/* 8017A480 00177560  EC 00 00 32 */	fmuls f0, f0, f0
/* 8017A484 00177564  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8017A488 00177568  40 80 00 10 */	bge .L_8017A498
/* 8017A48C 0017756C  54 80 02 0C */	rlwinm r0, r4, 0, 8, 6
/* 8017A490 00177570  90 05 01 C8 */	stw r0, 0x1c8(r5)
/* 8017A494 00177574  48 00 00 C0 */	b .L_8017A554
.L_8017A498:
/* 8017A498 00177578  C0 21 00 30 */	lfs f1, 0x30(r1)
/* 8017A49C 0017757C  C0 41 00 38 */	lfs f2, 0x38(r1)
/* 8017A4A0 00177580  48 00 19 CD */	bl create__5xVec2Fff
/* 8017A4A4 00177584  90 81 00 14 */	stw r4, 0x14(r1)
/* 8017A4A8 00177588  38 81 00 10 */	addi r4, r1, 0x10
/* 8017A4AC 0017758C  90 61 00 10 */	stw r3, 0x10(r1)
/* 8017A4B0 00177590  80 7F 00 5C */	lwz r3, 0x5c(r31)
/* 8017A4B4 00177594  38 63 02 D8 */	addi r3, r3, 0x2d8
/* 8017A4B8 00177598  48 00 00 B5 */	bl "angle_difference__30@unnamed@zNPCTypeDutchman_cpp@FRC5xVec2RC5xVec2"
/* 8017A4BC 0017759C  3C 60 80 33 */	lis r3, "tweak__30@unnamed@zNPCTypeDutchman_cpp@"@ha
/* 8017A4C0 001775A0  38 63 A5 78 */	addi r3, r3, "tweak__30@unnamed@zNPCTypeDutchman_cpp@"@l
/* 8017A4C4 001775A4  C0 03 01 38 */	lfs f0, 0x138(r3)
/* 8017A4C8 001775A8  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8017A4CC 001775AC  40 81 00 88 */	ble .L_8017A554
/* 8017A4D0 001775B0  80 7F 00 5C */	lwz r3, 0x5c(r31)
/* 8017A4D4 001775B4  80 03 01 C8 */	lwz r0, 0x1c8(r3)
/* 8017A4D8 001775B8  54 00 02 0C */	rlwinm r0, r0, 0, 8, 6
/* 8017A4DC 001775BC  90 03 01 C8 */	stw r0, 0x1c8(r3)
/* 8017A4E0 001775C0  48 00 00 74 */	b .L_8017A554
.L_8017A4E4:
/* 8017A4E4 001775C4  3C 60 80 33 */	lis r3, "tweak__30@unnamed@zNPCTypeDutchman_cpp@"@ha
/* 8017A4E8 001775C8  38 63 A5 78 */	addi r3, r3, "tweak__30@unnamed@zNPCTypeDutchman_cpp@"@l
/* 8017A4EC 001775CC  C0 03 01 2C */	lfs f0, 0x12c(r3)
/* 8017A4F0 001775D0  EC 00 00 32 */	fmuls f0, f0, f0
/* 8017A4F4 001775D4  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8017A4F8 001775D8  4C 41 13 82 */	cror eq, gt, eq
/* 8017A4FC 001775DC  40 82 00 58 */	bne .L_8017A554
/* 8017A500 001775E0  C0 21 00 30 */	lfs f1, 0x30(r1)
/* 8017A504 001775E4  C0 41 00 38 */	lfs f2, 0x38(r1)
/* 8017A508 001775E8  48 00 19 65 */	bl create__5xVec2Fff
/* 8017A50C 001775EC  90 81 00 0C */	stw r4, 0xc(r1)
/* 8017A510 001775F0  38 81 00 08 */	addi r4, r1, 0x8
/* 8017A514 001775F4  90 61 00 08 */	stw r3, 0x8(r1)
/* 8017A518 001775F8  80 7F 00 5C */	lwz r3, 0x5c(r31)
/* 8017A51C 001775FC  38 63 02 D8 */	addi r3, r3, 0x2d8
/* 8017A520 00177600  48 00 00 4D */	bl "angle_difference__30@unnamed@zNPCTypeDutchman_cpp@FRC5xVec2RC5xVec2"
/* 8017A524 00177604  FC 20 0A 10 */	fabs f1, f1
/* 8017A528 00177608  3C 60 80 33 */	lis r3, "tweak__30@unnamed@zNPCTypeDutchman_cpp@"@ha
/* 8017A52C 0017760C  38 63 A5 78 */	addi r3, r3, "tweak__30@unnamed@zNPCTypeDutchman_cpp@"@l
/* 8017A530 00177610  C0 03 01 34 */	lfs f0, 0x134(r3)
/* 8017A534 00177614  FC 20 08 18 */	frsp f1, f1
/* 8017A538 00177618  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8017A53C 0017761C  4C 40 13 82 */	cror eq, lt, eq
/* 8017A540 00177620  40 82 00 14 */	bne .L_8017A554
/* 8017A544 00177624  80 7F 00 5C */	lwz r3, 0x5c(r31)
/* 8017A548 00177628  80 03 01 C8 */	lwz r0, 0x1c8(r3)
/* 8017A54C 0017762C  64 00 01 00 */	oris r0, r0, 0x100
/* 8017A550 00177630  90 03 01 C8 */	stw r0, 0x1c8(r3)
.L_8017A554:
/* 8017A554 00177634  80 01 00 54 */	lwz r0, 0x54(r1)
/* 8017A558 00177638  83 E1 00 4C */	lwz r31, 0x4c(r1)
/* 8017A55C 0017763C  83 C1 00 48 */	lwz r30, 0x48(r1)
/* 8017A560 00177640  7C 08 03 A6 */	mtlr r0
/* 8017A564 00177644  38 21 00 50 */	addi r1, r1, 0x50
/* 8017A568 00177648  4E 80 00 20 */	blr
.endfn refresh_vulnerability__21zNPCGoalDutchmanFlameFv

# @unnamed@zNPCTypeDutchman_cpp@::angle_difference(const xVec2&, const xVec2&)
.fn "angle_difference__30@unnamed@zNPCTypeDutchman_cpp@FRC5xVec2RC5xVec2", local
/* 8017A56C 0017764C  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 8017A570 00177650  7C 08 02 A6 */	mflr r0
/* 8017A574 00177654  90 01 00 24 */	stw r0, 0x24(r1)
/* 8017A578 00177658  DB E1 00 10 */	stfd f31, 0x10(r1)
/* 8017A57C 0017765C  F3 E1 00 18 */	psq_st f31, 0x18(r1), 0, qr0
/* 8017A580 00177660  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8017A584 00177664  C0 23 00 00 */	lfs f1, 0x0(r3)
/* 8017A588 00177668  7C 9F 23 78 */	mr r31, r4
/* 8017A58C 0017766C  C0 43 00 04 */	lfs f2, 0x4(r3)
/* 8017A590 00177670  4B E8 BA E1 */	bl xatan2__Fff
/* 8017A594 00177674  FF E0 08 90 */	fmr f31, f1
/* 8017A598 00177678  C0 3F 00 00 */	lfs f1, 0x0(r31)
/* 8017A59C 0017767C  C0 5F 00 04 */	lfs f2, 0x4(r31)
/* 8017A5A0 00177680  4B E8 BA D1 */	bl xatan2__Fff
/* 8017A5A4 00177684  EC 01 F8 28 */	fsubs f0, f1, f31
/* 8017A5A8 00177688  C0 22 AD 94 */	lfs f1, "@2180"@sda21(r2)
/* 8017A5AC 0017768C  EC 21 00 2A */	fadds f1, f1, f0
/* 8017A5B0 00177690  4B E9 42 45 */	bl xrmod__Ff
/* 8017A5B4 00177694  C0 02 AD 94 */	lfs f0, "@2180"@sda21(r2)
/* 8017A5B8 00177698  EC 21 00 28 */	fsubs f1, f1, f0
/* 8017A5BC 0017769C  E3 E1 00 18 */	psq_l f31, 0x18(r1), 0, qr0
/* 8017A5C0 001776A0  80 01 00 24 */	lwz r0, 0x24(r1)
/* 8017A5C4 001776A4  CB E1 00 10 */	lfd f31, 0x10(r1)
/* 8017A5C8 001776A8  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8017A5CC 001776AC  7C 08 03 A6 */	mtlr r0
/* 8017A5D0 001776B0  38 21 00 20 */	addi r1, r1, 0x20
/* 8017A5D4 001776B4  4E 80 00 20 */	blr
.endfn "angle_difference__30@unnamed@zNPCTypeDutchman_cpp@FRC5xVec2RC5xVec2"

# zNPCGoalDutchmanPostFlame::create(int, RyzMemGrow*, void*)
.fn create__25zNPCGoalDutchmanPostFlameFiP10RyzMemGrowPv, global
/* 8017A5D8 001776B8  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8017A5DC 001776BC  7C 08 02 A6 */	mflr r0
/* 8017A5E0 001776C0  90 01 00 14 */	stw r0, 0x14(r1)
/* 8017A5E4 001776C4  7C 80 23 78 */	mr r0, r4
/* 8017A5E8 001776C8  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8017A5EC 001776CC  7C BF 2B 78 */	mr r31, r5
/* 8017A5F0 001776D0  7C 05 03 78 */	mr r5, r0
/* 8017A5F4 001776D4  93 C1 00 08 */	stw r30, 0x8(r1)
/* 8017A5F8 001776D8  7C 7E 1B 78 */	mr r30, r3
/* 8017A5FC 001776DC  38 60 00 50 */	li r3, 0x50
/* 8017A600 001776E0  7F C4 F3 78 */	mr r4, r30
/* 8017A604 001776E4  4B F9 4B 4D */	bl __nw__10RyzMemDataFUliP10RyzMemGrow
/* 8017A608 001776E8  7C 64 1B 79 */	mr. r4, r3
/* 8017A60C 001776EC  41 82 00 14 */	beq .L_8017A620
/* 8017A610 001776F0  7F C4 F3 78 */	mr r4, r30
/* 8017A614 001776F4  7F E5 FB 78 */	mr r5, r31
/* 8017A618 001776F8  48 00 16 E1 */	bl __ct__25zNPCGoalDutchmanPostFlameFiR12zNPCDutchman
/* 8017A61C 001776FC  7C 64 1B 78 */	mr r4, r3
.L_8017A620:
/* 8017A620 00177700  28 04 00 00 */	cmplwi r4, 0x0
/* 8017A624 00177704  41 82 00 08 */	beq .L_8017A62C
/* 8017A628 00177708  38 84 00 0C */	addi r4, r4, 0xc
.L_8017A62C:
/* 8017A62C 0017770C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8017A630 00177710  7C 83 23 78 */	mr r3, r4
/* 8017A634 00177714  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8017A638 00177718  83 C1 00 08 */	lwz r30, 0x8(r1)
/* 8017A63C 0017771C  7C 08 03 A6 */	mtlr r0
/* 8017A640 00177720  38 21 00 10 */	addi r1, r1, 0x10
/* 8017A644 00177724  4E 80 00 20 */	blr
.endfn create__25zNPCGoalDutchmanPostFlameFiP10RyzMemGrowPv

# zNPCGoalDutchmanPostFlame::Enter(float, void*)
.fn Enter__25zNPCGoalDutchmanPostFlameFfPv, global
/* 8017A648 00177728  94 21 FF D0 */	stwu r1, -0x30(r1)
/* 8017A64C 0017772C  7C 08 02 A6 */	mflr r0
/* 8017A650 00177730  90 01 00 34 */	stw r0, 0x34(r1)
/* 8017A654 00177734  DB E1 00 20 */	stfd f31, 0x20(r1)
/* 8017A658 00177738  F3 E1 00 28 */	psq_st f31, 0x28(r1), 0, qr0
/* 8017A65C 0017773C  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 8017A660 00177740  93 C1 00 18 */	stw r30, 0x18(r1)
/* 8017A664 00177744  7C 7E 1B 78 */	mr r30, r3
/* 8017A668 00177748  3C 00 43 30 */	lis r0, 0x4330
/* 8017A66C 0017774C  80 63 00 4C */	lwz r3, 0x4c(r3)
/* 8017A670 00177750  FF E0 08 90 */	fmr f31, f1
/* 8017A674 00177754  90 01 00 08 */	stw r0, 0x8(r1)
/* 8017A678 00177758  7C 9F 23 78 */	mr r31, r4
/* 8017A67C 0017775C  80 03 02 C4 */	lwz r0, 0x2c4(r3)
/* 8017A680 00177760  C8 42 AD D0 */	lfd f2, "@3493"@sda21(r2)
/* 8017A684 00177764  6C 00 80 00 */	xoris r0, r0, 0x8000
/* 8017A688 00177768  C0 02 AC B8 */	lfs f0, "@1605"@sda21(r2)
/* 8017A68C 0017776C  90 01 00 0C */	stw r0, 0xc(r1)
/* 8017A690 00177770  C8 21 00 08 */	lfd f1, 0x8(r1)
/* 8017A694 00177774  EC 21 10 28 */	fsubs f1, f1, f2
/* 8017A698 00177778  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8017A69C 0017777C  4C 40 13 82 */	cror eq, lt, eq
/* 8017A6A0 00177780  40 82 00 30 */	bne .L_8017A6D0
/* 8017A6A4 00177784  3C 80 80 3C */	lis r4, globals@ha
/* 8017A6A8 00177788  38 84 05 58 */	addi r4, r4, globals@l
/* 8017A6AC 0017778C  80 04 16 B0 */	lwz r0, 0x16b0(r4)
/* 8017A6B0 00177790  28 00 00 00 */	cmplwi r0, 0x0
/* 8017A6B4 00177794  41 82 00 1C */	beq .L_8017A6D0
/* 8017A6B8 00177798  80 04 17 88 */	lwz r0, 0x1788(r4)
/* 8017A6BC 0017779C  54 00 07 7B */	rlwinm. r0, r0, 0, 29, 29
/* 8017A6C0 001777A0  40 82 00 10 */	bne .L_8017A6D0
/* 8017A6C4 001777A4  7C 64 1B 78 */	mr r4, r3
/* 8017A6C8 001777A8  38 A0 00 24 */	li r5, 0x24
/* 8017A6CC 001777AC  4B EA 50 15 */	bl zEntEvent__FP5xBaseP5xBaseUi
.L_8017A6D0:
/* 8017A6D0 001777B0  C0 02 AC B8 */	lfs f0, "@1605"@sda21(r2)
/* 8017A6D4 001777B4  FC 20 F8 90 */	fmr f1, f31
/* 8017A6D8 001777B8  80 BE 00 4C */	lwz r5, 0x4c(r30)
/* 8017A6DC 001777BC  7F C3 F3 78 */	mr r3, r30
/* 8017A6E0 001777C0  7F E4 FB 78 */	mr r4, r31
/* 8017A6E4 001777C4  D0 05 02 D0 */	stfs f0, 0x2d0(r5)
/* 8017A6E8 001777C8  4B F5 AA 2D */	bl Enter__14zNPCGoalCommonFfPv
/* 8017A6EC 001777CC  E3 E1 00 28 */	psq_l f31, 0x28(r1), 0, qr0
/* 8017A6F0 001777D0  80 01 00 34 */	lwz r0, 0x34(r1)
/* 8017A6F4 001777D4  CB E1 00 20 */	lfd f31, 0x20(r1)
/* 8017A6F8 001777D8  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 8017A6FC 001777DC  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 8017A700 001777E0  7C 08 03 A6 */	mtlr r0
/* 8017A704 001777E4  38 21 00 30 */	addi r1, r1, 0x30
/* 8017A708 001777E8  4E 80 00 20 */	blr
.endfn Enter__25zNPCGoalDutchmanPostFlameFfPv

# zNPCGoalDutchmanPostFlame::Exit(float, void*)
.fn Exit__25zNPCGoalDutchmanPostFlameFfPv, global
/* 8017A70C 001777EC  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8017A710 001777F0  7C 08 02 A6 */	mflr r0
/* 8017A714 001777F4  90 01 00 14 */	stw r0, 0x14(r1)
/* 8017A718 001777F8  38 00 00 00 */	li r0, 0x0
/* 8017A71C 001777FC  80 A3 00 4C */	lwz r5, 0x4c(r3)
/* 8017A720 00177800  98 05 02 B8 */	stb r0, 0x2b8(r5)
/* 8017A724 00177804  4B F5 AC F9 */	bl Exit__5xGoalFfPv
/* 8017A728 00177808  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8017A72C 0017780C  7C 08 03 A6 */	mtlr r0
/* 8017A730 00177810  38 21 00 10 */	addi r1, r1, 0x10
/* 8017A734 00177814  4E 80 00 20 */	blr
.endfn Exit__25zNPCGoalDutchmanPostFlameFfPv

# zNPCGoalDutchmanPostFlame::Process(en_trantype*, float, void*, xScene*)
.fn Process__25zNPCGoalDutchmanPostFlameFP11en_trantypefPvP6xScene, global
/* 8017A738 00177818  94 21 FF B0 */	stwu r1, -0x50(r1)
/* 8017A73C 0017781C  7C 08 02 A6 */	mflr r0
/* 8017A740 00177820  90 01 00 54 */	stw r0, 0x54(r1)
/* 8017A744 00177824  DB E1 00 40 */	stfd f31, 0x40(r1)
/* 8017A748 00177828  F3 E1 00 48 */	psq_st f31, 0x48(r1), 0, qr0
/* 8017A74C 0017782C  BF 61 00 2C */	stmw r27, 0x2c(r1)
/* 8017A750 00177830  7C 7C 1B 78 */	mr r28, r3
/* 8017A754 00177834  FF E0 08 90 */	fmr f31, f1
/* 8017A758 00177838  80 63 00 4C */	lwz r3, 0x4c(r3)
/* 8017A75C 0017783C  7C 9D 23 78 */	mr r29, r4
/* 8017A760 00177840  7C BE 2B 78 */	mr r30, r5
/* 8017A764 00177844  7C DF 33 78 */	mr r31, r6
/* 8017A768 00177848  4B F7 88 35 */	bl AnimCurState__10zNPCCommonFv
/* 8017A76C 0017784C  3C 80 80 2A */	lis r4, g_hash_subbanim@ha
/* 8017A770 00177850  80 A3 00 08 */	lwz r5, 0x8(r3)
/* 8017A774 00177854  38 64 90 E0 */	addi r3, r4, g_hash_subbanim@l
/* 8017A778 00177858  80 03 00 04 */	lwz r0, 0x4(r3)
/* 8017A77C 0017785C  7C 05 00 40 */	cmplw r5, r0
/* 8017A780 00177860  40 82 00 38 */	bne .L_8017A7B8
/* 8017A784 00177864  80 7C 00 4C */	lwz r3, 0x4c(r28)
/* 8017A788 00177868  4B FF AF 05 */	bl update_round__12zNPCDutchmanFv
/* 8017A78C 0017786C  38 00 00 01 */	li r0, 0x1
/* 8017A790 00177870  90 1D 00 00 */	stw r0, 0x0(r29)
/* 8017A794 00177874  80 7C 00 4C */	lwz r3, 0x4c(r28)
/* 8017A798 00177878  80 03 02 C4 */	lwz r0, 0x2c4(r3)
/* 8017A79C 0017787C  2C 00 00 00 */	cmpwi r0, 0x0
/* 8017A7A0 00177880  41 81 00 10 */	bgt .L_8017A7B0
/* 8017A7A4 00177884  3C 60 4E 47 */	lis r3, 0x4e47
/* 8017A7A8 00177888  38 63 4D 48 */	addi r3, r3, 0x4d48
/* 8017A7AC 0017788C  48 00 01 44 */	b .L_8017A8F0
.L_8017A7B0:
/* 8017A7B0 00177890  4B FF AF 35 */	bl next_goal__12zNPCDutchmanFv
/* 8017A7B4 00177894  48 00 01 3C */	b .L_8017A8F0
.L_8017A7B8:
/* 8017A7B8 00177898  80 7C 00 4C */	lwz r3, 0x4c(r28)
/* 8017A7BC 0017789C  88 03 02 B8 */	lbz r0, 0x2b8(r3)
/* 8017A7C0 001778A0  28 00 00 00 */	cmplwi r0, 0x0
/* 8017A7C4 001778A4  40 82 01 14 */	bne .L_8017A8D8
/* 8017A7C8 001778A8  3C 80 80 33 */	lis r4, "tweak__30@unnamed@zNPCTypeDutchman_cpp@"@ha
/* 8017A7CC 001778AC  C0 43 02 D0 */	lfs f2, 0x2d0(r3)
/* 8017A7D0 001778B0  38 84 A5 78 */	addi r4, r4, "tweak__30@unnamed@zNPCTypeDutchman_cpp@"@l
/* 8017A7D4 001778B4  C0 24 01 74 */	lfs f1, 0x174(r4)
/* 8017A7D8 001778B8  FC 02 08 40 */	fcmpo cr0, f2, f1
/* 8017A7DC 001778BC  4C 41 13 82 */	cror eq, gt, eq
/* 8017A7E0 001778C0  40 82 00 F8 */	bne .L_8017A8D8
/* 8017A7E4 001778C4  C0 04 01 78 */	lfs f0, 0x178(r4)
/* 8017A7E8 001778C8  EC 01 00 2A */	fadds f0, f1, f0
/* 8017A7EC 001778CC  FC 02 00 40 */	fcmpo cr0, f2, f0
/* 8017A7F0 001778D0  4C 40 13 82 */	cror eq, lt, eq
/* 8017A7F4 001778D4  40 82 00 E4 */	bne .L_8017A8D8
/* 8017A7F8 001778D8  48 00 11 85 */	bl get_facing__12zNPCDutchmanCFv
/* 8017A7FC 001778DC  80 9C 00 4C */	lwz r4, 0x4c(r28)
/* 8017A800 001778E0  38 61 00 10 */	addi r3, r1, 0x10
/* 8017A804 001778E4  38 A0 00 01 */	li r5, 0x1
/* 8017A808 001778E8  4B FF D1 81 */	bl get_hand_loc__12zNPCDutchmanCFi
/* 8017A80C 001778EC  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8017A810 001778F0  3C 60 80 33 */	lis r3, "tweak__30@unnamed@zNPCTypeDutchman_cpp@"@ha
/* 8017A814 001778F4  38 83 A5 78 */	addi r4, r3, "tweak__30@unnamed@zNPCTypeDutchman_cpp@"@l
/* 8017A818 001778F8  80 A1 00 10 */	lwz r5, 0x10(r1)
/* 8017A81C 001778FC  90 01 00 20 */	stw r0, 0x20(r1)
/* 8017A820 00177900  3C 60 80 33 */	lis r3, "snot_emitter_settings__30@unnamed@zNPCTypeDutchman_cpp@"@ha
/* 8017A824 00177904  80 01 00 18 */	lwz r0, 0x18(r1)
/* 8017A828 00177908  38 63 AE BC */	addi r3, r3, "snot_emitter_settings__30@unnamed@zNPCTypeDutchman_cpp@"@l
/* 8017A82C 0017790C  C0 21 00 20 */	lfs f1, 0x20(r1)
/* 8017A830 00177910  38 63 01 40 */	addi r3, r3, 0x140
/* 8017A834 00177914  C0 04 01 80 */	lfs f0, 0x180(r4)
/* 8017A838 00177918  38 81 00 1C */	addi r4, r1, 0x1c
/* 8017A83C 0017791C  90 A1 00 1C */	stw r5, 0x1c(r1)
/* 8017A840 00177920  EC 01 00 2A */	fadds f0, f1, f0
/* 8017A844 00177924  90 01 00 24 */	stw r0, 0x24(r1)
/* 8017A848 00177928  D0 01 00 20 */	stfs f0, 0x20(r1)
/* 8017A84C 0017792C  4B E9 0A 19 */	bl __as__5xVec3FRC5xVec3
/* 8017A850 00177930  3C 60 80 33 */	lis r3, "snot_emitter_settings__30@unnamed@zNPCTypeDutchman_cpp@"@ha
/* 8017A854 00177934  C0 22 AC B8 */	lfs f1, "@1605"@sda21(r2)
/* 8017A858 00177938  38 63 AE BC */	addi r3, r3, "snot_emitter_settings__30@unnamed@zNPCTypeDutchman_cpp@"@l
/* 8017A85C 0017793C  38 63 01 4C */	addi r3, r3, 0x14c
/* 8017A860 00177940  4B EA 20 19 */	bl __as__5xVec3Ff
/* 8017A864 00177944  80 AD 97 94 */	lwz r5, "snot_emitter__30@unnamed@zNPCTypeDutchman_cpp@"@sda21(r13)
/* 8017A868 00177948  3C 60 80 33 */	lis r3, "tweak__30@unnamed@zNPCTypeDutchman_cpp@"@ha
/* 8017A86C 0017794C  38 83 A5 78 */	addi r4, r3, "tweak__30@unnamed@zNPCTypeDutchman_cpp@"@l
/* 8017A870 00177950  80 C2 C0 B8 */	lwz r6, "@3689"@sda21(r2)
/* 8017A874 00177954  83 65 00 18 */	lwz r27, 0x18(r5)
/* 8017A878 00177958  3C 60 80 33 */	lis r3, "snot_emitter_settings__30@unnamed@zNPCTypeDutchman_cpp@"@ha
/* 8017A87C 0017795C  80 02 C0 BC */	lwz r0, "@3689"+0x4@sda21(r2)
/* 8017A880 00177960  FC 20 F8 90 */	fmr f1, f31
/* 8017A884 00177964  C0 9B 00 0C */	lfs f4, 0xc(r27)
/* 8017A888 00177968  38 A3 AE BC */	addi r5, r3, "snot_emitter_settings__30@unnamed@zNPCTypeDutchman_cpp@"@l
/* 8017A88C 0017796C  C0 04 01 7C */	lfs f0, 0x17c(r4)
/* 8017A890 00177970  90 C1 00 08 */	stw r6, 0x8(r1)
/* 8017A894 00177974  EC 04 00 32 */	fmuls f0, f4, f0
/* 8017A898 00177978  C0 7B 00 10 */	lfs f3, 0x10(r27)
/* 8017A89C 0017797C  90 01 00 0C */	stw r0, 0xc(r1)
/* 8017A8A0 00177980  D0 1B 00 0C */	stfs f0, 0xc(r27)
/* 8017A8A4 00177984  C0 5B 00 10 */	lfs f2, 0x10(r27)
/* 8017A8A8 00177988  C0 04 01 7C */	lfs f0, 0x17c(r4)
/* 8017A8AC 0017798C  D0 81 00 08 */	stfs f4, 0x8(r1)
/* 8017A8B0 00177990  EC 02 00 32 */	fmuls f0, f2, f0
/* 8017A8B4 00177994  D0 61 00 0C */	stfs f3, 0xc(r1)
/* 8017A8B8 00177998  D0 1B 00 10 */	stfs f0, 0x10(r27)
/* 8017A8BC 0017799C  80 7C 00 4C */	lwz r3, 0x4c(r28)
/* 8017A8C0 001779A0  80 8D 97 94 */	lwz r4, "snot_emitter__30@unnamed@zNPCTypeDutchman_cpp@"@sda21(r13)
/* 8017A8C4 001779A4  48 00 10 61 */	bl emit_particles__12zNPCDutchmanCFR11zParEmitterfR25xParEmitterCustomSettings
/* 8017A8C8 001779A8  C0 21 00 08 */	lfs f1, 0x8(r1)
/* 8017A8CC 001779AC  C0 01 00 0C */	lfs f0, 0xc(r1)
/* 8017A8D0 001779B0  D0 3B 00 0C */	stfs f1, 0xc(r27)
/* 8017A8D4 001779B4  D0 1B 00 10 */	stfs f0, 0x10(r27)
.L_8017A8D8:
/* 8017A8D8 001779B8  FC 20 F8 90 */	fmr f1, f31
/* 8017A8DC 001779BC  7F 83 E3 78 */	mr r3, r28
/* 8017A8E0 001779C0  7F A4 EB 78 */	mr r4, r29
/* 8017A8E4 001779C4  7F C5 F3 78 */	mr r5, r30
/* 8017A8E8 001779C8  7F E6 FB 78 */	mr r6, r31
/* 8017A8EC 001779CC  4B F9 42 5D */	bl Process__5xGoalFP11en_trantypefPvP6xScene
.L_8017A8F0:
/* 8017A8F0 001779D0  E3 E1 00 48 */	psq_l f31, 0x48(r1), 0, qr0
/* 8017A8F4 001779D4  CB E1 00 40 */	lfd f31, 0x40(r1)
/* 8017A8F8 001779D8  BB 61 00 2C */	lmw r27, 0x2c(r1)
/* 8017A8FC 001779DC  80 01 00 54 */	lwz r0, 0x54(r1)
/* 8017A900 001779E0  7C 08 03 A6 */	mtlr r0
/* 8017A904 001779E4  38 21 00 50 */	addi r1, r1, 0x50
/* 8017A908 001779E8  4E 80 00 20 */	blr
.endfn Process__25zNPCGoalDutchmanPostFlameFP11en_trantypefPvP6xScene

# zNPCGoalDutchmanCaught::create(int, RyzMemGrow*, void*)
.fn create__22zNPCGoalDutchmanCaughtFiP10RyzMemGrowPv, global
/* 8017A90C 001779EC  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8017A910 001779F0  7C 08 02 A6 */	mflr r0
/* 8017A914 001779F4  90 01 00 14 */	stw r0, 0x14(r1)
/* 8017A918 001779F8  7C 80 23 78 */	mr r0, r4
/* 8017A91C 001779FC  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8017A920 00177A00  7C BF 2B 78 */	mr r31, r5
/* 8017A924 00177A04  7C 05 03 78 */	mr r5, r0
/* 8017A928 00177A08  93 C1 00 08 */	stw r30, 0x8(r1)
/* 8017A92C 00177A0C  7C 7E 1B 78 */	mr r30, r3
/* 8017A930 00177A10  38 60 00 54 */	li r3, 0x54
/* 8017A934 00177A14  7F C4 F3 78 */	mr r4, r30
/* 8017A938 00177A18  4B F9 48 19 */	bl __nw__10RyzMemDataFUliP10RyzMemGrow
/* 8017A93C 00177A1C  7C 64 1B 79 */	mr. r4, r3
/* 8017A940 00177A20  41 82 00 14 */	beq .L_8017A954
/* 8017A944 00177A24  7F C4 F3 78 */	mr r4, r30
/* 8017A948 00177A28  7F E5 FB 78 */	mr r5, r31
/* 8017A94C 00177A2C  48 00 13 F9 */	bl __ct__22zNPCGoalDutchmanCaughtFiR12zNPCDutchman
/* 8017A950 00177A30  7C 64 1B 78 */	mr r4, r3
.L_8017A954:
/* 8017A954 00177A34  28 04 00 00 */	cmplwi r4, 0x0
/* 8017A958 00177A38  41 82 00 08 */	beq .L_8017A960
/* 8017A95C 00177A3C  38 84 00 0C */	addi r4, r4, 0xc
.L_8017A960:
/* 8017A960 00177A40  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8017A964 00177A44  7C 83 23 78 */	mr r3, r4
/* 8017A968 00177A48  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8017A96C 00177A4C  83 C1 00 08 */	lwz r30, 0x8(r1)
/* 8017A970 00177A50  7C 08 03 A6 */	mtlr r0
/* 8017A974 00177A54  38 21 00 10 */	addi r1, r1, 0x10
/* 8017A978 00177A58  4E 80 00 20 */	blr
.endfn create__22zNPCGoalDutchmanCaughtFiP10RyzMemGrowPv

# zNPCGoalDutchmanCaught::Enter(float, void*)
.fn Enter__22zNPCGoalDutchmanCaughtFfPv, global
/* 8017A97C 00177A5C  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 8017A980 00177A60  7C 08 02 A6 */	mflr r0
/* 8017A984 00177A64  90 01 00 24 */	stw r0, 0x24(r1)
/* 8017A988 00177A68  DB E1 00 10 */	stfd f31, 0x10(r1)
/* 8017A98C 00177A6C  F3 E1 00 18 */	psq_st f31, 0x18(r1), 0, qr0
/* 8017A990 00177A70  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8017A994 00177A74  93 C1 00 08 */	stw r30, 0x8(r1)
/* 8017A998 00177A78  7C 7E 1B 78 */	mr r30, r3
/* 8017A99C 00177A7C  3C 60 80 33 */	lis r3, "tweak__30@unnamed@zNPCTypeDutchman_cpp@"@ha
/* 8017A9A0 00177A80  C0 02 AC B8 */	lfs f0, "@1605"@sda21(r2)
/* 8017A9A4 00177A84  FF E0 08 90 */	fmr f31, f1
/* 8017A9A8 00177A88  80 DE 00 50 */	lwz r6, 0x50(r30)
/* 8017A9AC 00177A8C  38 A3 A5 78 */	addi r5, r3, "tweak__30@unnamed@zNPCTypeDutchman_cpp@"@l
/* 8017A9B0 00177A90  7C 9F 23 78 */	mr r31, r4
/* 8017A9B4 00177A94  D0 06 02 D0 */	stfs f0, 0x2d0(r6)
/* 8017A9B8 00177A98  80 7E 00 50 */	lwz r3, 0x50(r30)
/* 8017A9BC 00177A9C  C0 25 01 40 */	lfs f1, 0x140(r5)
/* 8017A9C0 00177AA0  4B FF D4 41 */	bl halt__12zNPCDutchmanFf
/* 8017A9C4 00177AA4  80 9E 00 50 */	lwz r4, 0x50(r30)
/* 8017A9C8 00177AA8  38 60 00 04 */	li r3, 0x4
/* 8017A9CC 00177AAC  C0 22 AC BC */	lfs f1, "@1606"@sda21(r2)
/* 8017A9D0 00177AB0  38 84 00 88 */	addi r4, r4, 0x88
/* 8017A9D4 00177AB4  4B FF 7E 5D */	bl "play_sound__30@unnamed@zNPCTypeDutchman_cpp@FiPC5xVec3f"
/* 8017A9D8 00177AB8  FC 20 F8 90 */	fmr f1, f31
/* 8017A9DC 00177ABC  7F C3 F3 78 */	mr r3, r30
/* 8017A9E0 00177AC0  7F E4 FB 78 */	mr r4, r31
/* 8017A9E4 00177AC4  4B F5 A7 31 */	bl Enter__14zNPCGoalCommonFfPv
/* 8017A9E8 00177AC8  E3 E1 00 18 */	psq_l f31, 0x18(r1), 0, qr0
/* 8017A9EC 00177ACC  80 01 00 24 */	lwz r0, 0x24(r1)
/* 8017A9F0 00177AD0  CB E1 00 10 */	lfd f31, 0x10(r1)
/* 8017A9F4 00177AD4  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8017A9F8 00177AD8  83 C1 00 08 */	lwz r30, 0x8(r1)
/* 8017A9FC 00177ADC  7C 08 03 A6 */	mtlr r0
/* 8017AA00 00177AE0  38 21 00 20 */	addi r1, r1, 0x20
/* 8017AA04 00177AE4  4E 80 00 20 */	blr
.endfn Enter__22zNPCGoalDutchmanCaughtFfPv

# zNPCGoalDutchmanCaught::Exit(float, void*)
.fn Exit__22zNPCGoalDutchmanCaughtFfPv, global
/* 8017AA08 00177AE8  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8017AA0C 00177AEC  7C 08 02 A6 */	mflr r0
/* 8017AA10 00177AF0  90 01 00 14 */	stw r0, 0x14(r1)
/* 8017AA14 00177AF4  4B F5 AA 09 */	bl Exit__5xGoalFfPv
/* 8017AA18 00177AF8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8017AA1C 00177AFC  7C 08 03 A6 */	mtlr r0
/* 8017AA20 00177B00  38 21 00 10 */	addi r1, r1, 0x10
/* 8017AA24 00177B04  4E 80 00 20 */	blr
.endfn Exit__22zNPCGoalDutchmanCaughtFfPv

# zNPCGoalDutchmanCaught::Process(en_trantype*, float, void*, xScene*)
.fn Process__22zNPCGoalDutchmanCaughtFP11en_trantypefPvP6xScene, global
/* 8017AA28 00177B08  94 21 FF D0 */	stwu r1, -0x30(r1)
/* 8017AA2C 00177B0C  7C 08 02 A6 */	mflr r0
/* 8017AA30 00177B10  90 01 00 34 */	stw r0, 0x34(r1)
/* 8017AA34 00177B14  DB E1 00 20 */	stfd f31, 0x20(r1)
/* 8017AA38 00177B18  F3 E1 00 28 */	psq_st f31, 0x28(r1), 0, qr0
/* 8017AA3C 00177B1C  BF 61 00 0C */	stmw r27, 0xc(r1)
/* 8017AA40 00177B20  7C 7C 1B 78 */	mr r28, r3
/* 8017AA44 00177B24  FF E0 08 90 */	fmr f31, f1
/* 8017AA48 00177B28  80 63 00 50 */	lwz r3, 0x50(r3)
/* 8017AA4C 00177B2C  7C 9D 23 78 */	mr r29, r4
/* 8017AA50 00177B30  7C BE 2B 78 */	mr r30, r5
/* 8017AA54 00177B34  7C DF 33 78 */	mr r31, r6
/* 8017AA58 00177B38  38 80 00 01 */	li r4, 0x1
/* 8017AA5C 00177B3C  4B F7 94 01 */	bl LassoSyncAnims__10zNPCCommonF11en_lassanim
/* 8017AA60 00177B40  80 7C 00 50 */	lwz r3, 0x50(r28)
/* 8017AA64 00177B44  4B F7 85 39 */	bl AnimCurState__10zNPCCommonFv
/* 8017AA68 00177B48  80 DC 00 50 */	lwz r6, 0x50(r28)
/* 8017AA6C 00177B4C  3C 80 80 33 */	lis r4, "tweak__30@unnamed@zNPCTypeDutchman_cpp@"@ha
/* 8017AA70 00177B50  38 84 A5 78 */	addi r4, r4, "tweak__30@unnamed@zNPCTypeDutchman_cpp@"@l
/* 8017AA74 00177B54  C0 26 02 D0 */	lfs f1, 0x2d0(r6)
/* 8017AA78 00177B58  C0 04 01 44 */	lfs f0, 0x144(r4)
/* 8017AA7C 00177B5C  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8017AA80 00177B60  4C 41 13 82 */	cror eq, gt, eq
/* 8017AA84 00177B64  41 82 00 30 */	beq .L_8017AAB4
/* 8017AA88 00177B68  3C 80 80 2A */	lis r4, g_hash_subbanim@ha
/* 8017AA8C 00177B6C  80 A3 00 08 */	lwz r5, 0x8(r3)
/* 8017AA90 00177B70  38 64 90 E0 */	addi r3, r4, g_hash_subbanim@l
/* 8017AA94 00177B74  80 03 00 4C */	lwz r0, 0x4c(r3)
/* 8017AA98 00177B78  7C 05 00 40 */	cmplw r5, r0
/* 8017AA9C 00177B7C  40 82 00 18 */	bne .L_8017AAB4
/* 8017AAA0 00177B80  7C C3 33 78 */	mr r3, r6
/* 8017AAA4 00177B84  38 80 00 00 */	li r4, 0x0
/* 8017AAA8 00177B88  4B F7 85 D1 */	bl AnimTimeRemain__10zNPCCommonFP10xAnimState
/* 8017AAAC 00177B8C  FC 1F 08 40 */	fcmpo cr0, f31, f1
/* 8017AAB0 00177B90  40 81 00 28 */	ble .L_8017AAD8
.L_8017AAB4:
/* 8017AAB4 00177B94  80 7C 00 50 */	lwz r3, 0x50(r28)
/* 8017AAB8 00177B98  80 83 02 C4 */	lwz r4, 0x2c4(r3)
/* 8017AABC 00177B9C  38 84 FF FF */	addi r4, r4, -0x1
/* 8017AAC0 00177BA0  4B FF C9 B1 */	bl set_life__12zNPCDutchmanFi
/* 8017AAC4 00177BA4  38 00 00 01 */	li r0, 0x1
/* 8017AAC8 00177BA8  3C 60 4E 47 */	lis r3, 0x4e47
/* 8017AACC 00177BAC  90 1D 00 00 */	stw r0, 0x0(r29)
/* 8017AAD0 00177BB0  38 63 4D 47 */	addi r3, r3, 0x4d47
/* 8017AAD4 00177BB4  48 00 00 74 */	b .L_8017AB48
.L_8017AAD8:
/* 8017AAD8 00177BB8  80 9C 00 50 */	lwz r4, 0x50(r28)
/* 8017AADC 00177BBC  38 00 00 00 */	li r0, 0x0
/* 8017AAE0 00177BC0  3C 60 80 3C */	lis r3, globals@ha
/* 8017AAE4 00177BC4  98 04 02 B4 */	stb r0, 0x2b4(r4)
/* 8017AAE8 00177BC8  38 63 05 58 */	addi r3, r3, globals@l
/* 8017AAEC 00177BCC  80 83 07 04 */	lwz r4, 0x704(r3)
/* 8017AAF0 00177BD0  80 7C 00 50 */	lwz r3, 0x50(r28)
/* 8017AAF4 00177BD4  83 64 00 4C */	lwz r27, 0x4c(r4)
/* 8017AAF8 00177BD8  48 00 0D 25 */	bl get_center__12zNPCDutchmanCFv
/* 8017AAFC 00177BDC  7C 64 1B 78 */	mr r4, r3
/* 8017AB00 00177BE0  80 7C 00 50 */	lwz r3, 0x50(r28)
/* 8017AB04 00177BE4  C0 64 00 00 */	lfs f3, 0x0(r4)
/* 8017AB08 00177BE8  C0 3B 00 30 */	lfs f1, 0x30(r27)
/* 8017AB0C 00177BEC  38 63 02 D8 */	addi r3, r3, 0x2d8
/* 8017AB10 00177BF0  C0 44 00 08 */	lfs f2, 0x8(r4)
/* 8017AB14 00177BF4  C0 1B 00 38 */	lfs f0, 0x38(r27)
/* 8017AB18 00177BF8  EC 23 08 28 */	fsubs f1, f3, f1
/* 8017AB1C 00177BFC  EC 42 00 28 */	fsubs f2, f2, f0
/* 8017AB20 00177C00  4B EA B7 F9 */	bl assign__5xVec2Fff
/* 8017AB24 00177C04  80 7C 00 50 */	lwz r3, 0x50(r28)
/* 8017AB28 00177C08  38 63 02 D8 */	addi r3, r3, 0x2d8
/* 8017AB2C 00177C0C  4B FA 29 F1 */	bl normalize__5xVec2Fv
/* 8017AB30 00177C10  FC 20 F8 90 */	fmr f1, f31
/* 8017AB34 00177C14  7F 83 E3 78 */	mr r3, r28
/* 8017AB38 00177C18  7F A4 EB 78 */	mr r4, r29
/* 8017AB3C 00177C1C  7F C5 F3 78 */	mr r5, r30
/* 8017AB40 00177C20  7F E6 FB 78 */	mr r6, r31
/* 8017AB44 00177C24  4B F9 40 05 */	bl Process__5xGoalFP11en_trantypefPvP6xScene
.L_8017AB48:
/* 8017AB48 00177C28  E3 E1 00 28 */	psq_l f31, 0x28(r1), 0, qr0
/* 8017AB4C 00177C2C  CB E1 00 20 */	lfd f31, 0x20(r1)
/* 8017AB50 00177C30  BB 61 00 0C */	lmw r27, 0xc(r1)
/* 8017AB54 00177C34  80 01 00 34 */	lwz r0, 0x34(r1)
/* 8017AB58 00177C38  7C 08 03 A6 */	mtlr r0
/* 8017AB5C 00177C3C  38 21 00 30 */	addi r1, r1, 0x30
/* 8017AB60 00177C40  4E 80 00 20 */	blr
.endfn Process__22zNPCGoalDutchmanCaughtFP11en_trantypefPvP6xScene

# zNPCGoalDutchmanDamage::create(int, RyzMemGrow*, void*)
.fn create__22zNPCGoalDutchmanDamageFiP10RyzMemGrowPv, global
/* 8017AB64 00177C44  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8017AB68 00177C48  7C 08 02 A6 */	mflr r0
/* 8017AB6C 00177C4C  90 01 00 14 */	stw r0, 0x14(r1)
/* 8017AB70 00177C50  7C 80 23 78 */	mr r0, r4
/* 8017AB74 00177C54  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8017AB78 00177C58  7C BF 2B 78 */	mr r31, r5
/* 8017AB7C 00177C5C  7C 05 03 78 */	mr r5, r0
/* 8017AB80 00177C60  93 C1 00 08 */	stw r30, 0x8(r1)
/* 8017AB84 00177C64  7C 7E 1B 78 */	mr r30, r3
/* 8017AB88 00177C68  38 60 00 54 */	li r3, 0x54
/* 8017AB8C 00177C6C  7F C4 F3 78 */	mr r4, r30
/* 8017AB90 00177C70  4B F9 45 C1 */	bl __nw__10RyzMemDataFUliP10RyzMemGrow
/* 8017AB94 00177C74  7C 64 1B 79 */	mr. r4, r3
/* 8017AB98 00177C78  41 82 00 14 */	beq .L_8017ABAC
/* 8017AB9C 00177C7C  7F C4 F3 78 */	mr r4, r30
/* 8017ABA0 00177C80  7F E5 FB 78 */	mr r5, r31
/* 8017ABA4 00177C84  48 00 11 ED */	bl __ct__22zNPCGoalDutchmanDamageFiR12zNPCDutchman
/* 8017ABA8 00177C88  7C 64 1B 78 */	mr r4, r3
.L_8017ABAC:
/* 8017ABAC 00177C8C  28 04 00 00 */	cmplwi r4, 0x0
/* 8017ABB0 00177C90  41 82 00 08 */	beq .L_8017ABB8
/* 8017ABB4 00177C94  38 84 00 0C */	addi r4, r4, 0xc
.L_8017ABB8:
/* 8017ABB8 00177C98  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8017ABBC 00177C9C  7C 83 23 78 */	mr r3, r4
/* 8017ABC0 00177CA0  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8017ABC4 00177CA4  83 C1 00 08 */	lwz r30, 0x8(r1)
/* 8017ABC8 00177CA8  7C 08 03 A6 */	mtlr r0
/* 8017ABCC 00177CAC  38 21 00 10 */	addi r1, r1, 0x10
/* 8017ABD0 00177CB0  4E 80 00 20 */	blr
.endfn create__22zNPCGoalDutchmanDamageFiP10RyzMemGrowPv

# zNPCGoalDutchmanDamage::Enter(float, void*)
.fn Enter__22zNPCGoalDutchmanDamageFfPv, global
/* 8017ABD4 00177CB4  94 21 FF D0 */	stwu r1, -0x30(r1)
/* 8017ABD8 00177CB8  7C 08 02 A6 */	mflr r0
/* 8017ABDC 00177CBC  90 01 00 34 */	stw r0, 0x34(r1)
/* 8017ABE0 00177CC0  DB E1 00 20 */	stfd f31, 0x20(r1)
/* 8017ABE4 00177CC4  F3 E1 00 28 */	psq_st f31, 0x28(r1), 0, qr0
/* 8017ABE8 00177CC8  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 8017ABEC 00177CCC  93 C1 00 18 */	stw r30, 0x18(r1)
/* 8017ABF0 00177CD0  7C 7E 1B 78 */	mr r30, r3
/* 8017ABF4 00177CD4  7C 9F 23 78 */	mr r31, r4
/* 8017ABF8 00177CD8  80 63 00 50 */	lwz r3, 0x50(r3)
/* 8017ABFC 00177CDC  FF E0 08 90 */	fmr f31, f1
/* 8017AC00 00177CE0  38 80 00 01 */	li r4, 0x1
/* 8017AC04 00177CE4  81 83 01 B8 */	lwz r12, 0x1b8(r3)
/* 8017AC08 00177CE8  81 8C 00 94 */	lwz r12, 0x94(r12)
/* 8017AC0C 00177CEC  7D 89 03 A6 */	mtctr r12
/* 8017AC10 00177CF0  4E 80 04 21 */	bctrl
/* 8017AC14 00177CF4  3C 80 80 33 */	lis r4, "tweak__30@unnamed@zNPCTypeDutchman_cpp@"@ha
/* 8017AC18 00177CF8  80 7E 00 50 */	lwz r3, 0x50(r30)
/* 8017AC1C 00177CFC  38 84 A5 78 */	addi r4, r4, "tweak__30@unnamed@zNPCTypeDutchman_cpp@"@l
/* 8017AC20 00177D00  C0 24 00 C8 */	lfs f1, 0xc8(r4)
/* 8017AC24 00177D04  4B FF B9 F5 */	bl dissolve__12zNPCDutchmanFf
/* 8017AC28 00177D08  3C 80 80 33 */	lis r4, "tweak__30@unnamed@zNPCTypeDutchman_cpp@"@ha
/* 8017AC2C 00177D0C  80 7E 00 50 */	lwz r3, 0x50(r30)
/* 8017AC30 00177D10  38 A4 A5 78 */	addi r5, r4, "tweak__30@unnamed@zNPCTypeDutchman_cpp@"@l
/* 8017AC34 00177D14  C0 05 00 C0 */	lfs f0, 0xc0(r5)
/* 8017AC38 00177D18  38 85 00 A8 */	addi r4, r5, 0xa8
/* 8017AC3C 00177D1C  D0 03 02 E4 */	stfs f0, 0x2e4(r3)
/* 8017AC40 00177D20  C0 05 00 C4 */	lfs f0, 0xc4(r5)
/* 8017AC44 00177D24  80 7E 00 50 */	lwz r3, 0x50(r30)
/* 8017AC48 00177D28  D0 03 02 E8 */	stfs f0, 0x2e8(r3)
/* 8017AC4C 00177D2C  80 7E 00 50 */	lwz r3, 0x50(r30)
/* 8017AC50 00177D30  38 63 03 04 */	addi r3, r3, 0x304
/* 8017AC54 00177D34  4B E9 06 11 */	bl __as__5xVec3FRC5xVec3
/* 8017AC58 00177D38  80 BE 00 50 */	lwz r5, 0x50(r30)
/* 8017AC5C 00177D3C  3C 60 80 33 */	lis r3, "tweak__30@unnamed@zNPCTypeDutchman_cpp@"@ha
/* 8017AC60 00177D40  38 83 A5 78 */	addi r4, r3, "tweak__30@unnamed@zNPCTypeDutchman_cpp@"@l
/* 8017AC64 00177D44  38 65 03 10 */	addi r3, r5, 0x310
/* 8017AC68 00177D48  38 84 00 B4 */	addi r4, r4, 0xb4
/* 8017AC6C 00177D4C  4B E9 05 F9 */	bl __as__5xVec3FRC5xVec3
/* 8017AC70 00177D50  80 9E 00 50 */	lwz r4, 0x50(r30)
/* 8017AC74 00177D54  38 00 00 01 */	li r0, 0x1
/* 8017AC78 00177D58  3C 60 80 33 */	lis r3, "tweak__30@unnamed@zNPCTypeDutchman_cpp@"@ha
/* 8017AC7C 00177D5C  90 04 02 BC */	stw r0, 0x2bc(r4)
/* 8017AC80 00177D60  80 9E 00 50 */	lwz r4, 0x50(r30)
/* 8017AC84 00177D64  C0 23 A5 78 */	lfs f1, "tweak__30@unnamed@zNPCTypeDutchman_cpp@"@l(r3)
/* 8017AC88 00177D68  38 64 02 D8 */	addi r3, r4, 0x2d8
/* 8017AC8C 00177D6C  4B EE 54 39 */	bl __ml__5xVec2CFf
/* 8017AC90 00177D70  90 61 00 08 */	stw r3, 0x8(r1)
/* 8017AC94 00177D74  80 7E 00 50 */	lwz r3, 0x50(r30)
/* 8017AC98 00177D78  90 81 00 0C */	stw r4, 0xc(r1)
/* 8017AC9C 00177D7C  48 00 0C B1 */	bl get_orbit__12zNPCDutchmanCFv
/* 8017ACA0 00177D80  80 BE 00 50 */	lwz r5, 0x50(r30)
/* 8017ACA4 00177D84  7C 64 1B 78 */	mr r4, r3
/* 8017ACA8 00177D88  38 65 02 EC */	addi r3, r5, 0x2ec
/* 8017ACAC 00177D8C  4B E9 05 B9 */	bl __as__5xVec3FRC5xVec3
/* 8017ACB0 00177D90  80 BE 00 50 */	lwz r5, 0x50(r30)
/* 8017ACB4 00177D94  FC 20 F8 90 */	fmr f1, f31
/* 8017ACB8 00177D98  C0 41 00 08 */	lfs f2, 0x8(r1)
/* 8017ACBC 00177D9C  7F C3 F3 78 */	mr r3, r30
/* 8017ACC0 00177DA0  C0 65 02 EC */	lfs f3, 0x2ec(r5)
/* 8017ACC4 00177DA4  7F E4 FB 78 */	mr r4, r31
/* 8017ACC8 00177DA8  C0 01 00 0C */	lfs f0, 0xc(r1)
/* 8017ACCC 00177DAC  EC 43 10 2A */	fadds f2, f3, f2
/* 8017ACD0 00177DB0  D0 45 02 EC */	stfs f2, 0x2ec(r5)
/* 8017ACD4 00177DB4  80 BE 00 50 */	lwz r5, 0x50(r30)
/* 8017ACD8 00177DB8  C0 45 02 F4 */	lfs f2, 0x2f4(r5)
/* 8017ACDC 00177DBC  EC 02 00 2A */	fadds f0, f2, f0
/* 8017ACE0 00177DC0  D0 05 02 F4 */	stfs f0, 0x2f4(r5)
/* 8017ACE4 00177DC4  4B F5 A4 31 */	bl Enter__14zNPCGoalCommonFfPv
/* 8017ACE8 00177DC8  E3 E1 00 28 */	psq_l f31, 0x28(r1), 0, qr0
/* 8017ACEC 00177DCC  80 01 00 34 */	lwz r0, 0x34(r1)
/* 8017ACF0 00177DD0  CB E1 00 20 */	lfd f31, 0x20(r1)
/* 8017ACF4 00177DD4  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 8017ACF8 00177DD8  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 8017ACFC 00177DDC  7C 08 03 A6 */	mtlr r0
/* 8017AD00 00177DE0  38 21 00 30 */	addi r1, r1, 0x30
/* 8017AD04 00177DE4  4E 80 00 20 */	blr
.endfn Enter__22zNPCGoalDutchmanDamageFfPv

# zNPCGoalDutchmanDamage::Exit(float, void*)
.fn Exit__22zNPCGoalDutchmanDamageFfPv, global
/* 8017AD08 00177DE8  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8017AD0C 00177DEC  7C 08 02 A6 */	mflr r0
/* 8017AD10 00177DF0  90 01 00 14 */	stw r0, 0x14(r1)
/* 8017AD14 00177DF4  4B F5 A7 09 */	bl Exit__5xGoalFfPv
/* 8017AD18 00177DF8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8017AD1C 00177DFC  7C 08 03 A6 */	mtlr r0
/* 8017AD20 00177E00  38 21 00 10 */	addi r1, r1, 0x10
/* 8017AD24 00177E04  4E 80 00 20 */	blr
.endfn Exit__22zNPCGoalDutchmanDamageFfPv

# zNPCGoalDutchmanDamage::Process(en_trantype*, float, void*, xScene*)
.fn Process__22zNPCGoalDutchmanDamageFP11en_trantypefPvP6xScene, global
/* 8017AD28 00177E08  94 21 FF C0 */	stwu r1, -0x40(r1)
/* 8017AD2C 00177E0C  7C 08 02 A6 */	mflr r0
/* 8017AD30 00177E10  90 01 00 44 */	stw r0, 0x44(r1)
/* 8017AD34 00177E14  DB E1 00 30 */	stfd f31, 0x30(r1)
/* 8017AD38 00177E18  F3 E1 00 38 */	psq_st f31, 0x38(r1), 0, qr0
/* 8017AD3C 00177E1C  93 E1 00 2C */	stw r31, 0x2c(r1)
/* 8017AD40 00177E20  93 C1 00 28 */	stw r30, 0x28(r1)
/* 8017AD44 00177E24  93 A1 00 24 */	stw r29, 0x24(r1)
/* 8017AD48 00177E28  93 81 00 20 */	stw r28, 0x20(r1)
/* 8017AD4C 00177E2C  7C 7C 1B 78 */	mr r28, r3
/* 8017AD50 00177E30  FF E0 08 90 */	fmr f31, f1
/* 8017AD54 00177E34  80 63 00 50 */	lwz r3, 0x50(r3)
/* 8017AD58 00177E38  7C 9D 23 78 */	mr r29, r4
/* 8017AD5C 00177E3C  7C BE 2B 78 */	mr r30, r5
/* 8017AD60 00177E40  7C DF 33 78 */	mr r31, r6
/* 8017AD64 00177E44  4B F7 82 39 */	bl AnimCurState__10zNPCCommonFv
/* 8017AD68 00177E48  3C 80 80 2A */	lis r4, g_hash_subbanim@ha
/* 8017AD6C 00177E4C  80 A3 00 08 */	lwz r5, 0x8(r3)
/* 8017AD70 00177E50  38 64 90 E0 */	addi r3, r4, g_hash_subbanim@l
/* 8017AD74 00177E54  80 03 00 4C */	lwz r0, 0x4c(r3)
/* 8017AD78 00177E58  7C 05 00 40 */	cmplw r5, r0
/* 8017AD7C 00177E5C  40 82 00 10 */	bne .L_8017AD8C
/* 8017AD80 00177E60  80 7C 00 50 */	lwz r3, 0x50(r28)
/* 8017AD84 00177E64  38 80 00 01 */	li r4, 0x1
/* 8017AD88 00177E68  4B F7 90 D5 */	bl LassoSyncAnims__10zNPCCommonF11en_lassanim
.L_8017AD8C:
/* 8017AD8C 00177E6C  80 7C 00 50 */	lwz r3, 0x50(r28)
/* 8017AD90 00177E70  38 63 02 F8 */	addi r3, r3, 0x2f8
/* 8017AD94 00177E74  4B E9 03 69 */	bl length2__5xVec3CFv
/* 8017AD98 00177E78  C0 02 AC EC */	lfs f0, "@1977"@sda21(r2)
/* 8017AD9C 00177E7C  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8017ADA0 00177E80  40 80 00 48 */	bge .L_8017ADE8
/* 8017ADA4 00177E84  80 7C 00 50 */	lwz r3, 0x50(r28)
/* 8017ADA8 00177E88  48 00 0A 75 */	bl get_center__12zNPCDutchmanCFv
/* 8017ADAC 00177E8C  80 9C 00 50 */	lwz r4, 0x50(r28)
/* 8017ADB0 00177E90  7C 65 1B 78 */	mr r5, r3
/* 8017ADB4 00177E94  38 61 00 08 */	addi r3, r1, 0x8
/* 8017ADB8 00177E98  38 84 02 EC */	addi r4, r4, 0x2ec
/* 8017ADBC 00177E9C  4B E9 04 11 */	bl __mi__5xVec3CFRC5xVec3
/* 8017ADC0 00177EA0  38 61 00 08 */	addi r3, r1, 0x8
/* 8017ADC4 00177EA4  4B E9 03 39 */	bl length2__5xVec3CFv
/* 8017ADC8 00177EA8  C0 02 AC EC */	lfs f0, "@1977"@sda21(r2)
/* 8017ADCC 00177EAC  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8017ADD0 00177EB0  40 80 00 18 */	bge .L_8017ADE8
/* 8017ADD4 00177EB4  38 00 00 01 */	li r0, 0x1
/* 8017ADD8 00177EB8  3C 60 4E 47 */	lis r3, 0x4e47
/* 8017ADDC 00177EBC  90 1D 00 00 */	stw r0, 0x0(r29)
/* 8017ADE0 00177EC0  38 63 4D 42 */	addi r3, r3, 0x4d42
/* 8017ADE4 00177EC4  48 00 00 1C */	b .L_8017AE00
.L_8017ADE8:
/* 8017ADE8 00177EC8  FC 20 F8 90 */	fmr f1, f31
/* 8017ADEC 00177ECC  7F 83 E3 78 */	mr r3, r28
/* 8017ADF0 00177ED0  7F A4 EB 78 */	mr r4, r29
/* 8017ADF4 00177ED4  7F C5 F3 78 */	mr r5, r30
/* 8017ADF8 00177ED8  7F E6 FB 78 */	mr r6, r31
/* 8017ADFC 00177EDC  4B F9 3D 4D */	bl Process__5xGoalFP11en_trantypefPvP6xScene
.L_8017AE00:
/* 8017AE00 00177EE0  E3 E1 00 38 */	psq_l f31, 0x38(r1), 0, qr0
/* 8017AE04 00177EE4  80 01 00 44 */	lwz r0, 0x44(r1)
/* 8017AE08 00177EE8  CB E1 00 30 */	lfd f31, 0x30(r1)
/* 8017AE0C 00177EEC  83 E1 00 2C */	lwz r31, 0x2c(r1)
/* 8017AE10 00177EF0  83 C1 00 28 */	lwz r30, 0x28(r1)
/* 8017AE14 00177EF4  83 A1 00 24 */	lwz r29, 0x24(r1)
/* 8017AE18 00177EF8  83 81 00 20 */	lwz r28, 0x20(r1)
/* 8017AE1C 00177EFC  7C 08 03 A6 */	mtlr r0
/* 8017AE20 00177F00  38 21 00 40 */	addi r1, r1, 0x40
/* 8017AE24 00177F04  4E 80 00 20 */	blr
.endfn Process__22zNPCGoalDutchmanDamageFP11en_trantypefPvP6xScene

# zNPCGoalDutchmanDeath::create(int, RyzMemGrow*, void*)
.fn create__21zNPCGoalDutchmanDeathFiP10RyzMemGrowPv, global
/* 8017AE28 00177F08  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8017AE2C 00177F0C  7C 08 02 A6 */	mflr r0
/* 8017AE30 00177F10  90 01 00 14 */	stw r0, 0x14(r1)
/* 8017AE34 00177F14  7C 80 23 78 */	mr r0, r4
/* 8017AE38 00177F18  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8017AE3C 00177F1C  7C BF 2B 78 */	mr r31, r5
/* 8017AE40 00177F20  7C 05 03 78 */	mr r5, r0
/* 8017AE44 00177F24  93 C1 00 08 */	stw r30, 0x8(r1)
/* 8017AE48 00177F28  7C 7E 1B 78 */	mr r30, r3
/* 8017AE4C 00177F2C  38 60 00 60 */	li r3, 0x60
/* 8017AE50 00177F30  7F C4 F3 78 */	mr r4, r30
/* 8017AE54 00177F34  4B F9 42 FD */	bl __nw__10RyzMemDataFUliP10RyzMemGrow
/* 8017AE58 00177F38  7C 64 1B 79 */	mr. r4, r3
/* 8017AE5C 00177F3C  41 82 00 14 */	beq .L_8017AE70
/* 8017AE60 00177F40  7F C4 F3 78 */	mr r4, r30
/* 8017AE64 00177F44  7F E5 FB 78 */	mr r5, r31
/* 8017AE68 00177F48  48 00 0F 75 */	bl __ct__21zNPCGoalDutchmanDeathFiR12zNPCDutchman
/* 8017AE6C 00177F4C  7C 64 1B 78 */	mr r4, r3
.L_8017AE70:
/* 8017AE70 00177F50  28 04 00 00 */	cmplwi r4, 0x0
/* 8017AE74 00177F54  41 82 00 08 */	beq .L_8017AE7C
/* 8017AE78 00177F58  38 84 00 0C */	addi r4, r4, 0xc
.L_8017AE7C:
/* 8017AE7C 00177F5C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8017AE80 00177F60  7C 83 23 78 */	mr r3, r4
/* 8017AE84 00177F64  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8017AE88 00177F68  83 C1 00 08 */	lwz r30, 0x8(r1)
/* 8017AE8C 00177F6C  7C 08 03 A6 */	mtlr r0
/* 8017AE90 00177F70  38 21 00 10 */	addi r1, r1, 0x10
/* 8017AE94 00177F74  4E 80 00 20 */	blr
.endfn create__21zNPCGoalDutchmanDeathFiP10RyzMemGrowPv

# zNPCGoalDutchmanDeath::Enter(float, void*)
.fn Enter__21zNPCGoalDutchmanDeathFfPv, global
/* 8017AE98 00177F78  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8017AE9C 00177F7C  7C 08 02 A6 */	mflr r0
/* 8017AEA0 00177F80  90 01 00 14 */	stw r0, 0x14(r1)
/* 8017AEA4 00177F84  C0 02 AC B8 */	lfs f0, "@1605"@sda21(r2)
/* 8017AEA8 00177F88  80 A3 00 5C */	lwz r5, 0x5c(r3)
/* 8017AEAC 00177F8C  D0 05 02 D0 */	stfs f0, 0x2d0(r5)
/* 8017AEB0 00177F90  4B F5 A2 65 */	bl Enter__14zNPCGoalCommonFfPv
/* 8017AEB4 00177F94  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8017AEB8 00177F98  7C 08 03 A6 */	mtlr r0
/* 8017AEBC 00177F9C  38 21 00 10 */	addi r1, r1, 0x10
/* 8017AEC0 00177FA0  4E 80 00 20 */	blr
.endfn Enter__21zNPCGoalDutchmanDeathFfPv

# zNPCGoalDutchmanDeath::Exit(float, void*)
.fn Exit__21zNPCGoalDutchmanDeathFfPv, global
/* 8017AEC4 00177FA4  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 8017AEC8 00177FA8  7C 08 02 A6 */	mflr r0
/* 8017AECC 00177FAC  90 01 00 24 */	stw r0, 0x24(r1)
/* 8017AED0 00177FB0  DB E1 00 10 */	stfd f31, 0x10(r1)
/* 8017AED4 00177FB4  F3 E1 00 18 */	psq_st f31, 0x18(r1), 0, qr0
/* 8017AED8 00177FB8  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8017AEDC 00177FBC  93 C1 00 08 */	stw r30, 0x8(r1)
/* 8017AEE0 00177FC0  7C 7E 1B 78 */	mr r30, r3
/* 8017AEE4 00177FC4  FF E0 08 90 */	fmr f31, f1
/* 8017AEE8 00177FC8  80 63 00 5C */	lwz r3, 0x5c(r3)
/* 8017AEEC 00177FCC  7C 9F 23 78 */	mr r31, r4
/* 8017AEF0 00177FD0  C0 22 AC B8 */	lfs f1, "@1605"@sda21(r2)
/* 8017AEF4 00177FD4  80 63 00 24 */	lwz r3, 0x24(r3)
/* 8017AEF8 00177FD8  FC 60 08 90 */	fmr f3, f1
/* 8017AEFC 00177FDC  C0 42 AC BC */	lfs f2, "@1606"@sda21(r2)
/* 8017AF00 00177FE0  80 63 00 4C */	lwz r3, 0x4c(r3)
/* 8017AF04 00177FE4  38 63 00 50 */	addi r3, r3, 0x50
/* 8017AF08 00177FE8  4B E9 01 E5 */	bl assign__5xVec3Ffff
/* 8017AF0C 00177FEC  FC 20 F8 90 */	fmr f1, f31
/* 8017AF10 00177FF0  7F C3 F3 78 */	mr r3, r30
/* 8017AF14 00177FF4  7F E4 FB 78 */	mr r4, r31
/* 8017AF18 00177FF8  4B F5 A5 05 */	bl Exit__5xGoalFfPv
/* 8017AF1C 00177FFC  E3 E1 00 18 */	psq_l f31, 0x18(r1), 0, qr0
/* 8017AF20 00178000  80 01 00 24 */	lwz r0, 0x24(r1)
/* 8017AF24 00178004  CB E1 00 10 */	lfd f31, 0x10(r1)
/* 8017AF28 00178008  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8017AF2C 0017800C  83 C1 00 08 */	lwz r30, 0x8(r1)
/* 8017AF30 00178010  7C 08 03 A6 */	mtlr r0
/* 8017AF34 00178014  38 21 00 20 */	addi r1, r1, 0x20
/* 8017AF38 00178018  4E 80 00 20 */	blr
.endfn Exit__21zNPCGoalDutchmanDeathFfPv

# zNPCGoalDutchmanDeath::Process(en_trantype*, float, void*, xScene*)
.fn Process__21zNPCGoalDutchmanDeathFP11en_trantypefPvP6xScene, global
/* 8017AF3C 0017801C  94 21 FF D0 */	stwu r1, -0x30(r1)
/* 8017AF40 00178020  7C 08 02 A6 */	mflr r0
/* 8017AF44 00178024  90 01 00 34 */	stw r0, 0x34(r1)
/* 8017AF48 00178028  DB E1 00 20 */	stfd f31, 0x20(r1)
/* 8017AF4C 0017802C  F3 E1 00 28 */	psq_st f31, 0x28(r1), 0, qr0
/* 8017AF50 00178030  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 8017AF54 00178034  93 C1 00 18 */	stw r30, 0x18(r1)
/* 8017AF58 00178038  93 A1 00 14 */	stw r29, 0x14(r1)
/* 8017AF5C 0017803C  93 81 00 10 */	stw r28, 0x10(r1)
/* 8017AF60 00178040  7C 7C 1B 78 */	mr r28, r3
/* 8017AF64 00178044  C0 02 AD 1C */	lfs f0, "@1989"@sda21(r2)
/* 8017AF68 00178048  80 63 00 5C */	lwz r3, 0x5c(r3)
/* 8017AF6C 0017804C  FF E0 08 90 */	fmr f31, f1
/* 8017AF70 00178050  7C 9D 23 78 */	mr r29, r4
/* 8017AF74 00178054  7C BE 2B 78 */	mr r30, r5
/* 8017AF78 00178058  C0 23 02 D0 */	lfs f1, 0x2d0(r3)
/* 8017AF7C 0017805C  7C DF 33 78 */	mr r31, r6
/* 8017AF80 00178060  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8017AF84 00178064  4C 41 13 82 */	cror eq, gt, eq
/* 8017AF88 00178068  40 82 00 10 */	bne .L_8017AF98
/* 8017AF8C 0017806C  4B FF A7 E9 */	bl decompose__12zNPCDutchmanFv
/* 8017AF90 00178070  80 7C 00 5C */	lwz r3, 0x5c(r28)
/* 8017AF94 00178074  4B FF CB 05 */	bl vanish__12zNPCDutchmanFv
.L_8017AF98:
/* 8017AF98 00178078  FC 20 F8 90 */	fmr f1, f31
/* 8017AF9C 0017807C  7F 83 E3 78 */	mr r3, r28
/* 8017AFA0 00178080  7F A4 EB 78 */	mr r4, r29
/* 8017AFA4 00178084  7F C5 F3 78 */	mr r5, r30
/* 8017AFA8 00178088  7F E6 FB 78 */	mr r6, r31
/* 8017AFAC 0017808C  4B F9 3B 9D */	bl Process__5xGoalFP11en_trantypefPvP6xScene
/* 8017AFB0 00178090  E3 E1 00 28 */	psq_l f31, 0x28(r1), 0, qr0
/* 8017AFB4 00178094  80 01 00 34 */	lwz r0, 0x34(r1)
/* 8017AFB8 00178098  CB E1 00 20 */	lfd f31, 0x20(r1)
/* 8017AFBC 0017809C  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 8017AFC0 001780A0  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 8017AFC4 001780A4  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 8017AFC8 001780A8  83 81 00 10 */	lwz r28, 0x10(r1)
/* 8017AFCC 001780AC  7C 08 03 A6 */	mtlr r0
/* 8017AFD0 001780B0  38 21 00 30 */	addi r1, r1, 0x30
/* 8017AFD4 001780B4  4E 80 00 20 */	blr
.endfn Process__21zNPCGoalDutchmanDeathFP11en_trantypefPvP6xScene

# 0x8017AFD8 - 0x8017B7B0
.section .text, "ax", unique, 1
.balign 4

# static_queue<zNPCDutchman::slime_slice>::init(unsigned long)
.fn "init__43static_queue<Q212zNPCDutchman11slime_slice>FUl", weak
/* 8017AFD8 001780B8  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8017AFDC 001780BC  7C 08 02 A6 */	mflr r0
/* 8017AFE0 001780C0  90 01 00 14 */	stw r0, 0x14(r1)
/* 8017AFE4 001780C4  38 04 00 01 */	addi r0, r4, 0x1
/* 8017AFE8 001780C8  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8017AFEC 001780CC  7C 7F 1B 78 */	mr r31, r3
/* 8017AFF0 001780D0  38 60 00 00 */	li r3, 0x0
/* 8017AFF4 001780D4  48 00 00 0C */	b .L_8017B000
.L_8017AFF8:
/* 8017AFF8 001780D8  54 00 F8 7E */	srwi r0, r0, 1
/* 8017AFFC 001780DC  38 63 00 01 */	addi r3, r3, 0x1
.L_8017B000:
/* 8017B000 001780E0  28 00 00 01 */	cmplwi r0, 0x1
/* 8017B004 001780E4  41 81 FF F4 */	bgt .L_8017AFF8
/* 8017B008 001780E8  38 00 00 01 */	li r0, 0x1
/* 8017B00C 001780EC  38 A0 00 00 */	li r5, 0x0
/* 8017B010 001780F0  7C 00 18 30 */	slw r0, r0, r3
/* 8017B014 001780F4  90 1F 00 08 */	stw r0, 0x8(r31)
/* 8017B018 001780F8  80 7F 00 08 */	lwz r3, 0x8(r31)
/* 8017B01C 001780FC  38 03 FF FF */	addi r0, r3, -0x1
/* 8017B020 00178100  90 1F 00 0C */	stw r0, 0xc(r31)
/* 8017B024 00178104  80 1F 00 08 */	lwz r0, 0x8(r31)
/* 8017B028 00178108  80 6D 89 E0 */	lwz r3, gActiveHeap@sda21(r13)
/* 8017B02C 0017810C  54 04 18 38 */	slwi r4, r0, 3
/* 8017B030 00178110  4B EB 89 11 */	bl xMemAlloc__FUiUii
/* 8017B034 00178114  90 7F 00 10 */	stw r3, 0x10(r31)
/* 8017B038 00178118  7F E3 FB 78 */	mr r3, r31
/* 8017B03C 0017811C  48 00 00 19 */	bl "clear__43static_queue<Q212zNPCDutchman11slime_slice>Fv"
/* 8017B040 00178120  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8017B044 00178124  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8017B048 00178128  7C 08 03 A6 */	mtlr r0
/* 8017B04C 0017812C  38 21 00 10 */	addi r1, r1, 0x10
/* 8017B050 00178130  4E 80 00 20 */	blr
.endfn "init__43static_queue<Q212zNPCDutchman11slime_slice>FUl"

# static_queue<zNPCDutchman::slime_slice>::clear()
.fn "clear__43static_queue<Q212zNPCDutchman11slime_slice>Fv", weak
/* 8017B054 00178134  38 00 00 00 */	li r0, 0x0
/* 8017B058 00178138  90 03 00 04 */	stw r0, 0x4(r3)
/* 8017B05C 0017813C  90 03 00 00 */	stw r0, 0x0(r3)
/* 8017B060 00178140  4E 80 00 20 */	blr
.endfn "clear__43static_queue<Q212zNPCDutchman11slime_slice>Fv"

# static_queue<zNPCDutchman::wave_data>::init(unsigned long)
.fn "init__40static_queue<Q212zNPCDutchman9wave_data>FUl", weak
/* 8017B064 00178144  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8017B068 00178148  7C 08 02 A6 */	mflr r0
/* 8017B06C 0017814C  90 01 00 14 */	stw r0, 0x14(r1)
/* 8017B070 00178150  38 04 00 01 */	addi r0, r4, 0x1
/* 8017B074 00178154  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8017B078 00178158  7C 7F 1B 78 */	mr r31, r3
/* 8017B07C 0017815C  38 60 00 00 */	li r3, 0x0
/* 8017B080 00178160  48 00 00 0C */	b .L_8017B08C
.L_8017B084:
/* 8017B084 00178164  54 00 F8 7E */	srwi r0, r0, 1
/* 8017B088 00178168  38 63 00 01 */	addi r3, r3, 0x1
.L_8017B08C:
/* 8017B08C 0017816C  28 00 00 01 */	cmplwi r0, 0x1
/* 8017B090 00178170  41 81 FF F4 */	bgt .L_8017B084
/* 8017B094 00178174  38 00 00 01 */	li r0, 0x1
/* 8017B098 00178178  38 A0 00 00 */	li r5, 0x0
/* 8017B09C 0017817C  7C 00 18 30 */	slw r0, r0, r3
/* 8017B0A0 00178180  90 1F 00 08 */	stw r0, 0x8(r31)
/* 8017B0A4 00178184  80 7F 00 08 */	lwz r3, 0x8(r31)
/* 8017B0A8 00178188  38 03 FF FF */	addi r0, r3, -0x1
/* 8017B0AC 0017818C  90 1F 00 0C */	stw r0, 0xc(r31)
/* 8017B0B0 00178190  80 1F 00 08 */	lwz r0, 0x8(r31)
/* 8017B0B4 00178194  80 6D 89 E0 */	lwz r3, gActiveHeap@sda21(r13)
/* 8017B0B8 00178198  1C 80 00 44 */	mulli r4, r0, 0x44
/* 8017B0BC 0017819C  4B EB 88 85 */	bl xMemAlloc__FUiUii
/* 8017B0C0 001781A0  90 7F 00 10 */	stw r3, 0x10(r31)
/* 8017B0C4 001781A4  7F E3 FB 78 */	mr r3, r31
/* 8017B0C8 001781A8  48 00 00 19 */	bl "clear__40static_queue<Q212zNPCDutchman9wave_data>Fv"
/* 8017B0CC 001781AC  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8017B0D0 001781B0  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8017B0D4 001781B4  7C 08 03 A6 */	mtlr r0
/* 8017B0D8 001781B8  38 21 00 10 */	addi r1, r1, 0x10
/* 8017B0DC 001781BC  4E 80 00 20 */	blr
.endfn "init__40static_queue<Q212zNPCDutchman9wave_data>FUl"

# static_queue<zNPCDutchman::wave_data>::clear()
.fn "clear__40static_queue<Q212zNPCDutchman9wave_data>Fv", weak
/* 8017B0E0 001781C0  38 00 00 00 */	li r0, 0x0
/* 8017B0E4 001781C4  90 03 00 04 */	stw r0, 0x4(r3)
/* 8017B0E8 001781C8  90 03 00 00 */	stw r0, 0x0(r3)
/* 8017B0EC 001781CC  4E 80 00 20 */	blr
.endfn "clear__40static_queue<Q212zNPCDutchman9wave_data>Fv"

# static_queue<zNPCDutchman::slime_slice>::iterator::operator!=(const static_queue<zNPCDutchman::slime_slice>::iterator&) const
.fn "__ne__Q243static_queue<Q212zNPCDutchman11slime_slice>8iteratorCFRCQ243static_queue<Q212zNPCDutchman11slime_slice>8iterator", weak
/* 8017B0F0 001781D0  80 A3 00 00 */	lwz r5, 0x0(r3)
/* 8017B0F4 001781D4  80 04 00 00 */	lwz r0, 0x0(r4)
/* 8017B0F8 001781D8  7C 65 00 50 */	subf r3, r5, r0
/* 8017B0FC 001781DC  7C 00 28 50 */	subf r0, r0, r5
/* 8017B100 001781E0  7C 60 03 78 */	or r0, r3, r0
/* 8017B104 001781E4  54 03 0F FE */	srwi r3, r0, 31
/* 8017B108 001781E8  4E 80 00 20 */	blr
.endfn "__ne__Q243static_queue<Q212zNPCDutchman11slime_slice>8iteratorCFRCQ243static_queue<Q212zNPCDutchman11slime_slice>8iterator"

# static_queue<zNPCDutchman::slime_slice>::iterator::operator++()
.fn "__pp__Q243static_queue<Q212zNPCDutchman11slime_slice>8iteratorFv", weak
/* 8017B10C 001781EC  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8017B110 001781F0  7C 08 02 A6 */	mflr r0
/* 8017B114 001781F4  38 80 00 01 */	li r4, 0x1
/* 8017B118 001781F8  90 01 00 14 */	stw r0, 0x14(r1)
/* 8017B11C 001781FC  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8017B120 00178200  7C 7F 1B 78 */	mr r31, r3
/* 8017B124 00178204  48 00 00 1D */	bl "__apl__Q243static_queue<Q212zNPCDutchman11slime_slice>8iteratorFi"
/* 8017B128 00178208  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8017B12C 0017820C  7F E3 FB 78 */	mr r3, r31
/* 8017B130 00178210  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8017B134 00178214  7C 08 03 A6 */	mtlr r0
/* 8017B138 00178218  38 21 00 10 */	addi r1, r1, 0x10
/* 8017B13C 0017821C  4E 80 00 20 */	blr
.endfn "__pp__Q243static_queue<Q212zNPCDutchman11slime_slice>8iteratorFv"

# static_queue<zNPCDutchman::slime_slice>::iterator::operator+=(int)
.fn "__apl__Q243static_queue<Q212zNPCDutchman11slime_slice>8iteratorFi", weak
/* 8017B140 00178220  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8017B144 00178224  7C 08 02 A6 */	mflr r0
/* 8017B148 00178228  90 01 00 14 */	stw r0, 0x14(r1)
/* 8017B14C 0017822C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8017B150 00178230  7C 7F 1B 78 */	mr r31, r3
/* 8017B154 00178234  80 03 00 00 */	lwz r0, 0x0(r3)
/* 8017B158 00178238  80 63 00 04 */	lwz r3, 0x4(r3)
/* 8017B15C 0017823C  7C 80 22 14 */	add r4, r0, r4
/* 8017B160 00178240  48 00 00 21 */	bl "mod_max_size__43static_queue<Q212zNPCDutchman11slime_slice>CFUl"
/* 8017B164 00178244  90 7F 00 00 */	stw r3, 0x0(r31)
/* 8017B168 00178248  7F E3 FB 78 */	mr r3, r31
/* 8017B16C 0017824C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8017B170 00178250  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8017B174 00178254  7C 08 03 A6 */	mtlr r0
/* 8017B178 00178258  38 21 00 10 */	addi r1, r1, 0x10
/* 8017B17C 0017825C  4E 80 00 20 */	blr
.endfn "__apl__Q243static_queue<Q212zNPCDutchman11slime_slice>8iteratorFi"

# static_queue<zNPCDutchman::slime_slice>::mod_max_size(unsigned long) const
.fn "mod_max_size__43static_queue<Q212zNPCDutchman11slime_slice>CFUl", weak
/* 8017B180 00178260  80 03 00 0C */	lwz r0, 0xc(r3)
/* 8017B184 00178264  7C 83 00 38 */	and r3, r4, r0
/* 8017B188 00178268  4E 80 00 20 */	blr
.endfn "mod_max_size__43static_queue<Q212zNPCDutchman11slime_slice>CFUl"

# static_queue<zNPCDutchman::slime_slice>::erase(const static_queue<zNPCDutchman::slime_slice>::iterator&, const static_queue<zNPCDutchman::slime_slice>::iterator&)
.fn "erase__43static_queue<Q212zNPCDutchman11slime_slice>FRCQ243static_queue<Q212zNPCDutchman11slime_slice>8iteratorRCQ243static_queue<Q212zNPCDutchman11slime_slice>8iterator", weak
/* 8017B18C 0017826C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8017B190 00178270  7C 08 02 A6 */	mflr r0
/* 8017B194 00178274  80 84 00 00 */	lwz r4, 0x0(r4)
/* 8017B198 00178278  90 01 00 14 */	stw r0, 0x14(r1)
/* 8017B19C 0017827C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8017B1A0 00178280  7C 7F 1B 78 */	mr r31, r3
/* 8017B1A4 00178284  80 C3 00 00 */	lwz r6, 0x0(r3)
/* 8017B1A8 00178288  7C 04 30 40 */	cmplw r4, r6
/* 8017B1AC 0017828C  40 82 00 28 */	bne .L_8017B1D4
/* 8017B1B0 00178290  80 9F 00 04 */	lwz r4, 0x4(r31)
/* 8017B1B4 00178294  80 05 00 00 */	lwz r0, 0x0(r5)
/* 8017B1B8 00178298  7C 86 22 14 */	add r4, r6, r4
/* 8017B1BC 0017829C  90 1F 00 00 */	stw r0, 0x0(r31)
/* 8017B1C0 001782A0  80 1F 00 00 */	lwz r0, 0x0(r31)
/* 8017B1C4 001782A4  7C 80 20 50 */	subf r4, r0, r4
/* 8017B1C8 001782A8  4B FF FF B9 */	bl "mod_max_size__43static_queue<Q212zNPCDutchman11slime_slice>CFUl"
/* 8017B1CC 001782AC  90 7F 00 04 */	stw r3, 0x4(r31)
/* 8017B1D0 001782B0  48 00 00 1C */	b .L_8017B1EC
.L_8017B1D4:
/* 8017B1D4 001782B4  80 05 00 00 */	lwz r0, 0x0(r5)
/* 8017B1D8 001782B8  7C 84 00 50 */	subf r4, r4, r0
/* 8017B1DC 001782BC  4B FF FF A5 */	bl "mod_max_size__43static_queue<Q212zNPCDutchman11slime_slice>CFUl"
/* 8017B1E0 001782C0  80 1F 00 04 */	lwz r0, 0x4(r31)
/* 8017B1E4 001782C4  7C 03 00 50 */	subf r0, r3, r0
/* 8017B1E8 001782C8  90 1F 00 04 */	stw r0, 0x4(r31)
.L_8017B1EC:
/* 8017B1EC 001782CC  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8017B1F0 001782D0  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8017B1F4 001782D4  7C 08 03 A6 */	mtlr r0
/* 8017B1F8 001782D8  38 21 00 10 */	addi r1, r1, 0x10
/* 8017B1FC 001782DC  4E 80 00 20 */	blr
.endfn "erase__43static_queue<Q212zNPCDutchman11slime_slice>FRCQ243static_queue<Q212zNPCDutchman11slime_slice>8iteratorRCQ243static_queue<Q212zNPCDutchman11slime_slice>8iterator"

# static_queue<zNPCDutchman::slime_slice>::end() const
.fn "end__43static_queue<Q212zNPCDutchman11slime_slice>CFv", weak
/* 8017B200 001782E0  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8017B204 001782E4  7C 08 02 A6 */	mflr r0
/* 8017B208 001782E8  80 83 00 00 */	lwz r4, 0x0(r3)
/* 8017B20C 001782EC  90 01 00 14 */	stw r0, 0x14(r1)
/* 8017B210 001782F0  80 03 00 04 */	lwz r0, 0x4(r3)
/* 8017B214 001782F4  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8017B218 001782F8  7C 7F 1B 78 */	mr r31, r3
/* 8017B21C 001782FC  7C 84 02 14 */	add r4, r4, r0
/* 8017B220 00178300  4B FF FF 61 */	bl "mod_max_size__43static_queue<Q212zNPCDutchman11slime_slice>CFUl"
/* 8017B224 00178304  7C 64 1B 78 */	mr r4, r3
/* 8017B228 00178308  7F E3 FB 78 */	mr r3, r31
/* 8017B22C 0017830C  48 00 00 19 */	bl "create_iterator__43static_queue<Q212zNPCDutchman11slime_slice>CFUl"
/* 8017B230 00178310  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8017B234 00178314  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8017B238 00178318  7C 08 03 A6 */	mtlr r0
/* 8017B23C 0017831C  38 21 00 10 */	addi r1, r1, 0x10
/* 8017B240 00178320  4E 80 00 20 */	blr
.endfn "end__43static_queue<Q212zNPCDutchman11slime_slice>CFv"

# static_queue<zNPCDutchman::slime_slice>::create_iterator(unsigned long) const
.fn "create_iterator__43static_queue<Q212zNPCDutchman11slime_slice>CFUl", weak
/* 8017B244 00178324  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8017B248 00178328  7C 60 1B 78 */	mr r0, r3
/* 8017B24C 0017832C  7C 83 23 78 */	mr r3, r4
/* 8017B250 00178330  90 81 00 08 */	stw r4, 0x8(r1)
/* 8017B254 00178334  7C 04 03 78 */	mr r4, r0
/* 8017B258 00178338  90 01 00 0C */	stw r0, 0xc(r1)
/* 8017B25C 0017833C  38 21 00 10 */	addi r1, r1, 0x10
/* 8017B260 00178340  4E 80 00 20 */	blr
.endfn "create_iterator__43static_queue<Q212zNPCDutchman11slime_slice>CFUl"

# static_queue<zNPCDutchman::slime_slice>::iterator::operator*() const
.fn "__ml__Q243static_queue<Q212zNPCDutchman11slime_slice>8iteratorCFv", weak
/* 8017B264 00178344  80 83 00 04 */	lwz r4, 0x4(r3)
/* 8017B268 00178348  80 03 00 00 */	lwz r0, 0x0(r3)
/* 8017B26C 0017834C  80 64 00 10 */	lwz r3, 0x10(r4)
/* 8017B270 00178350  54 00 18 38 */	slwi r0, r0, 3
/* 8017B274 00178354  7C 63 02 14 */	add r3, r3, r0
/* 8017B278 00178358  4E 80 00 20 */	blr
.endfn "__ml__Q243static_queue<Q212zNPCDutchman11slime_slice>8iteratorCFv"

# static_queue<zNPCDutchman::slime_slice>::begin() const
.fn "begin__43static_queue<Q212zNPCDutchman11slime_slice>CFv", weak
/* 8017B27C 0017835C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8017B280 00178360  7C 08 02 A6 */	mflr r0
/* 8017B284 00178364  80 83 00 00 */	lwz r4, 0x0(r3)
/* 8017B288 00178368  90 01 00 14 */	stw r0, 0x14(r1)
/* 8017B28C 0017836C  4B FF FF B9 */	bl "create_iterator__43static_queue<Q212zNPCDutchman11slime_slice>CFUl"
/* 8017B290 00178370  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8017B294 00178374  7C 08 03 A6 */	mtlr r0
/* 8017B298 00178378  38 21 00 10 */	addi r1, r1, 0x10
/* 8017B29C 0017837C  4E 80 00 20 */	blr
.endfn "begin__43static_queue<Q212zNPCDutchman11slime_slice>CFv"

# static_queue<zNPCDutchman::slime_slice>::pop_back()
.fn "pop_back__43static_queue<Q212zNPCDutchman11slime_slice>Fv", weak
/* 8017B2A0 00178380  80 83 00 04 */	lwz r4, 0x4(r3)
/* 8017B2A4 00178384  38 04 FF FF */	addi r0, r4, -0x1
/* 8017B2A8 00178388  90 03 00 04 */	stw r0, 0x4(r3)
/* 8017B2AC 0017838C  4E 80 00 20 */	blr
.endfn "pop_back__43static_queue<Q212zNPCDutchman11slime_slice>Fv"

# static_queue<zNPCDutchman::slime_slice>::full() const
.fn "full__43static_queue<Q212zNPCDutchman11slime_slice>CFv", weak
/* 8017B2B0 00178390  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8017B2B4 00178394  7C 08 02 A6 */	mflr r0
/* 8017B2B8 00178398  90 01 00 14 */	stw r0, 0x14(r1)
/* 8017B2BC 0017839C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8017B2C0 001783A0  93 C1 00 08 */	stw r30, 0x8(r1)
/* 8017B2C4 001783A4  7C 7E 1B 78 */	mr r30, r3
/* 8017B2C8 001783A8  48 00 00 35 */	bl "max_size__43static_queue<Q212zNPCDutchman11slime_slice>CFv"
/* 8017B2CC 001783AC  7C 7F 1B 78 */	mr r31, r3
/* 8017B2D0 001783B0  7F C3 F3 78 */	mr r3, r30
/* 8017B2D4 001783B4  48 00 00 35 */	bl "size__43static_queue<Q212zNPCDutchman11slime_slice>CFv"
/* 8017B2D8 001783B8  7C 03 F8 50 */	subf r0, r3, r31
/* 8017B2DC 001783BC  7C 00 00 34 */	cntlzw r0, r0
/* 8017B2E0 001783C0  54 03 D9 7E */	srwi r3, r0, 5
/* 8017B2E4 001783C4  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8017B2E8 001783C8  83 C1 00 08 */	lwz r30, 0x8(r1)
/* 8017B2EC 001783CC  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8017B2F0 001783D0  7C 08 03 A6 */	mtlr r0
/* 8017B2F4 001783D4  38 21 00 10 */	addi r1, r1, 0x10
/* 8017B2F8 001783D8  4E 80 00 20 */	blr
.endfn "full__43static_queue<Q212zNPCDutchman11slime_slice>CFv"

# static_queue<zNPCDutchman::slime_slice>::max_size() const
.fn "max_size__43static_queue<Q212zNPCDutchman11slime_slice>CFv", weak
/* 8017B2FC 001783DC  80 63 00 08 */	lwz r3, 0x8(r3)
/* 8017B300 001783E0  38 63 FF FF */	addi r3, r3, -0x1
/* 8017B304 001783E4  4E 80 00 20 */	blr
.endfn "max_size__43static_queue<Q212zNPCDutchman11slime_slice>CFv"

# static_queue<zNPCDutchman::slime_slice>::size() const
.fn "size__43static_queue<Q212zNPCDutchman11slime_slice>CFv", weak
/* 8017B308 001783E8  80 63 00 04 */	lwz r3, 0x4(r3)
/* 8017B30C 001783EC  4E 80 00 20 */	blr
.endfn "size__43static_queue<Q212zNPCDutchman11slime_slice>CFv"

# static_queue<zNPCDutchman::slime_slice>::front()
.fn "front__43static_queue<Q212zNPCDutchman11slime_slice>Fv", weak
/* 8017B310 001783F0  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8017B314 001783F4  7C 08 02 A6 */	mflr r0
/* 8017B318 001783F8  90 01 00 14 */	stw r0, 0x14(r1)
/* 8017B31C 001783FC  4B FF FF 61 */	bl "begin__43static_queue<Q212zNPCDutchman11slime_slice>CFv"
/* 8017B320 00178400  90 61 00 08 */	stw r3, 0x8(r1)
/* 8017B324 00178404  38 61 00 08 */	addi r3, r1, 0x8
/* 8017B328 00178408  90 81 00 0C */	stw r4, 0xc(r1)
/* 8017B32C 0017840C  4B FF FF 39 */	bl "__ml__Q243static_queue<Q212zNPCDutchman11slime_slice>8iteratorCFv"
/* 8017B330 00178410  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8017B334 00178414  7C 08 03 A6 */	mtlr r0
/* 8017B338 00178418  38 21 00 10 */	addi r1, r1, 0x10
/* 8017B33C 0017841C  4E 80 00 20 */	blr
.endfn "front__43static_queue<Q212zNPCDutchman11slime_slice>Fv"

# static_queue<zNPCDutchman::slime_slice>::push_front()
.fn "push_front__43static_queue<Q212zNPCDutchman11slime_slice>Fv", weak
/* 8017B340 00178420  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8017B344 00178424  7C 08 02 A6 */	mflr r0
/* 8017B348 00178428  90 01 00 14 */	stw r0, 0x14(r1)
/* 8017B34C 0017842C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8017B350 00178430  7C 7F 1B 78 */	mr r31, r3
/* 8017B354 00178434  80 83 00 04 */	lwz r4, 0x4(r3)
/* 8017B358 00178438  38 04 00 01 */	addi r0, r4, 0x1
/* 8017B35C 0017843C  90 03 00 04 */	stw r0, 0x4(r3)
/* 8017B360 00178440  80 83 00 00 */	lwz r4, 0x0(r3)
/* 8017B364 00178444  38 84 FF FF */	addi r4, r4, -0x1
/* 8017B368 00178448  4B FF FE 19 */	bl "mod_max_size__43static_queue<Q212zNPCDutchman11slime_slice>CFUl"
/* 8017B36C 0017844C  90 7F 00 00 */	stw r3, 0x0(r31)
/* 8017B370 00178450  7F E3 FB 78 */	mr r3, r31
/* 8017B374 00178454  4B FF FF 9D */	bl "front__43static_queue<Q212zNPCDutchman11slime_slice>Fv"
/* 8017B378 00178458  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8017B37C 0017845C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8017B380 00178460  7C 08 03 A6 */	mtlr r0
/* 8017B384 00178464  38 21 00 10 */	addi r1, r1, 0x10
/* 8017B388 00178468  4E 80 00 20 */	blr
.endfn "push_front__43static_queue<Q212zNPCDutchman11slime_slice>Fv"

# static_queue<zNPCDutchman::slime_slice>::empty() const
.fn "empty__43static_queue<Q212zNPCDutchman11slime_slice>CFv", weak
/* 8017B38C 0017846C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8017B390 00178470  7C 08 02 A6 */	mflr r0
/* 8017B394 00178474  90 01 00 14 */	stw r0, 0x14(r1)
/* 8017B398 00178478  4B FF FF 71 */	bl "size__43static_queue<Q212zNPCDutchman11slime_slice>CFv"
/* 8017B39C 0017847C  7C 60 00 34 */	cntlzw r0, r3
/* 8017B3A0 00178480  54 03 D9 7E */	srwi r3, r0, 5
/* 8017B3A4 00178484  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8017B3A8 00178488  7C 08 03 A6 */	mtlr r0
/* 8017B3AC 0017848C  38 21 00 10 */	addi r1, r1, 0x10
/* 8017B3B0 00178490  4E 80 00 20 */	blr
.endfn "empty__43static_queue<Q212zNPCDutchman11slime_slice>CFv"

# static_queue<zNPCDutchman::wave_data>::front()
.fn "front__40static_queue<Q212zNPCDutchman9wave_data>Fv", weak
/* 8017B3B4 00178494  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8017B3B8 00178498  7C 08 02 A6 */	mflr r0
/* 8017B3BC 0017849C  90 01 00 14 */	stw r0, 0x14(r1)
/* 8017B3C0 001784A0  48 00 03 1D */	bl "begin__40static_queue<Q212zNPCDutchman9wave_data>CFv"
/* 8017B3C4 001784A4  90 61 00 08 */	stw r3, 0x8(r1)
/* 8017B3C8 001784A8  38 61 00 08 */	addi r3, r1, 0x8
/* 8017B3CC 001784AC  90 81 00 0C */	stw r4, 0xc(r1)
/* 8017B3D0 001784B0  48 00 02 F5 */	bl "__ml__Q240static_queue<Q212zNPCDutchman9wave_data>8iteratorCFv"
/* 8017B3D4 001784B4  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8017B3D8 001784B8  7C 08 03 A6 */	mtlr r0
/* 8017B3DC 001784BC  38 21 00 10 */	addi r1, r1, 0x10
/* 8017B3E0 001784C0  4E 80 00 20 */	blr
.endfn "front__40static_queue<Q212zNPCDutchman9wave_data>Fv"

# static_queue<zNPCDutchman::wave_data>::push_front()
.fn "push_front__40static_queue<Q212zNPCDutchman9wave_data>Fv", weak
/* 8017B3E4 001784C4  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8017B3E8 001784C8  7C 08 02 A6 */	mflr r0
/* 8017B3EC 001784CC  90 01 00 14 */	stw r0, 0x14(r1)
/* 8017B3F0 001784D0  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8017B3F4 001784D4  7C 7F 1B 78 */	mr r31, r3
/* 8017B3F8 001784D8  80 83 00 04 */	lwz r4, 0x4(r3)
/* 8017B3FC 001784DC  38 04 00 01 */	addi r0, r4, 0x1
/* 8017B400 001784E0  90 03 00 04 */	stw r0, 0x4(r3)
/* 8017B404 001784E4  80 83 00 00 */	lwz r4, 0x0(r3)
/* 8017B408 001784E8  38 84 FF FF */	addi r4, r4, -0x1
/* 8017B40C 001784EC  48 00 00 25 */	bl "mod_max_size__40static_queue<Q212zNPCDutchman9wave_data>CFUl"
/* 8017B410 001784F0  90 7F 00 00 */	stw r3, 0x0(r31)
/* 8017B414 001784F4  7F E3 FB 78 */	mr r3, r31
/* 8017B418 001784F8  4B FF FF 9D */	bl "front__40static_queue<Q212zNPCDutchman9wave_data>Fv"
/* 8017B41C 001784FC  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8017B420 00178500  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8017B424 00178504  7C 08 03 A6 */	mtlr r0
/* 8017B428 00178508  38 21 00 10 */	addi r1, r1, 0x10
/* 8017B42C 0017850C  4E 80 00 20 */	blr
.endfn "push_front__40static_queue<Q212zNPCDutchman9wave_data>Fv"

# static_queue<zNPCDutchman::wave_data>::mod_max_size(unsigned long) const
.fn "mod_max_size__40static_queue<Q212zNPCDutchman9wave_data>CFUl", weak
/* 8017B430 00178510  80 03 00 0C */	lwz r0, 0xc(r3)
/* 8017B434 00178514  7C 83 00 38 */	and r3, r4, r0
/* 8017B438 00178518  4E 80 00 20 */	blr
.endfn "mod_max_size__40static_queue<Q212zNPCDutchman9wave_data>CFUl"

# static_queue<zNPCDutchman::wave_data>::pop_back()
.fn "pop_back__40static_queue<Q212zNPCDutchman9wave_data>Fv", weak
/* 8017B43C 0017851C  80 83 00 04 */	lwz r4, 0x4(r3)
/* 8017B440 00178520  38 04 FF FF */	addi r0, r4, -0x1
/* 8017B444 00178524  90 03 00 04 */	stw r0, 0x4(r3)
/* 8017B448 00178528  4E 80 00 20 */	blr
.endfn "pop_back__40static_queue<Q212zNPCDutchman9wave_data>Fv"

# static_queue<zNPCDutchman::wave_data>::back()
.fn "back__40static_queue<Q212zNPCDutchman9wave_data>Fv", weak
/* 8017B44C 0017852C  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 8017B450 00178530  7C 08 02 A6 */	mflr r0
/* 8017B454 00178534  90 01 00 24 */	stw r0, 0x24(r1)
/* 8017B458 00178538  48 00 01 D5 */	bl "end__40static_queue<Q212zNPCDutchman9wave_data>CFv"
/* 8017B45C 0017853C  90 81 00 0C */	stw r4, 0xc(r1)
/* 8017B460 00178540  38 80 00 01 */	li r4, 0x1
/* 8017B464 00178544  90 61 00 08 */	stw r3, 0x8(r1)
/* 8017B468 00178548  38 61 00 08 */	addi r3, r1, 0x8
/* 8017B46C 0017854C  48 00 00 25 */	bl "__mi__Q240static_queue<Q212zNPCDutchman9wave_data>8iteratorCFi"
/* 8017B470 00178550  90 61 00 10 */	stw r3, 0x10(r1)
/* 8017B474 00178554  38 61 00 10 */	addi r3, r1, 0x10
/* 8017B478 00178558  90 81 00 14 */	stw r4, 0x14(r1)
/* 8017B47C 0017855C  48 00 02 49 */	bl "__ml__Q240static_queue<Q212zNPCDutchman9wave_data>8iteratorCFv"
/* 8017B480 00178560  80 01 00 24 */	lwz r0, 0x24(r1)
/* 8017B484 00178564  7C 08 03 A6 */	mtlr r0
/* 8017B488 00178568  38 21 00 20 */	addi r1, r1, 0x20
/* 8017B48C 0017856C  4E 80 00 20 */	blr
.endfn "back__40static_queue<Q212zNPCDutchman9wave_data>Fv"

# static_queue<zNPCDutchman::wave_data>::iterator::operator-(int) const
.fn "__mi__Q240static_queue<Q212zNPCDutchman9wave_data>8iteratorCFi", weak
/* 8017B490 00178570  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8017B494 00178574  7C 08 02 A6 */	mflr r0
/* 8017B498 00178578  80 A3 00 00 */	lwz r5, 0x0(r3)
/* 8017B49C 0017857C  90 01 00 14 */	stw r0, 0x14(r1)
/* 8017B4A0 00178580  80 03 00 04 */	lwz r0, 0x4(r3)
/* 8017B4A4 00178584  38 61 00 08 */	addi r3, r1, 0x8
/* 8017B4A8 00178588  90 A1 00 08 */	stw r5, 0x8(r1)
/* 8017B4AC 0017858C  90 01 00 0C */	stw r0, 0xc(r1)
/* 8017B4B0 00178590  48 00 00 1D */	bl "__ami__Q240static_queue<Q212zNPCDutchman9wave_data>8iteratorFi"
/* 8017B4B4 00178594  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8017B4B8 00178598  80 61 00 08 */	lwz r3, 0x8(r1)
/* 8017B4BC 0017859C  80 81 00 0C */	lwz r4, 0xc(r1)
/* 8017B4C0 001785A0  7C 08 03 A6 */	mtlr r0
/* 8017B4C4 001785A4  38 21 00 10 */	addi r1, r1, 0x10
/* 8017B4C8 001785A8  4E 80 00 20 */	blr
.endfn "__mi__Q240static_queue<Q212zNPCDutchman9wave_data>8iteratorCFi"

# static_queue<zNPCDutchman::wave_data>::iterator::operator-=(int)
.fn "__ami__Q240static_queue<Q212zNPCDutchman9wave_data>8iteratorFi", weak
/* 8017B4CC 001785AC  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8017B4D0 001785B0  7C 08 02 A6 */	mflr r0
/* 8017B4D4 001785B4  7C 84 00 D0 */	neg r4, r4
/* 8017B4D8 001785B8  90 01 00 14 */	stw r0, 0x14(r1)
/* 8017B4DC 001785BC  48 00 00 21 */	bl "__apl__Q240static_queue<Q212zNPCDutchman9wave_data>8iteratorFi"
/* 8017B4E0 001785C0  7C 64 1B 78 */	mr r4, r3
/* 8017B4E4 001785C4  80 63 00 00 */	lwz r3, 0x0(r3)
/* 8017B4E8 001785C8  80 84 00 04 */	lwz r4, 0x4(r4)
/* 8017B4EC 001785CC  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8017B4F0 001785D0  7C 08 03 A6 */	mtlr r0
/* 8017B4F4 001785D4  38 21 00 10 */	addi r1, r1, 0x10
/* 8017B4F8 001785D8  4E 80 00 20 */	blr
.endfn "__ami__Q240static_queue<Q212zNPCDutchman9wave_data>8iteratorFi"

# static_queue<zNPCDutchman::wave_data>::iterator::operator+=(int)
.fn "__apl__Q240static_queue<Q212zNPCDutchman9wave_data>8iteratorFi", weak
/* 8017B4FC 001785DC  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8017B500 001785E0  7C 08 02 A6 */	mflr r0
/* 8017B504 001785E4  90 01 00 14 */	stw r0, 0x14(r1)
/* 8017B508 001785E8  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8017B50C 001785EC  7C 7F 1B 78 */	mr r31, r3
/* 8017B510 001785F0  80 03 00 00 */	lwz r0, 0x0(r3)
/* 8017B514 001785F4  80 63 00 04 */	lwz r3, 0x4(r3)
/* 8017B518 001785F8  7C 80 22 14 */	add r4, r0, r4
/* 8017B51C 001785FC  4B FF FF 15 */	bl "mod_max_size__40static_queue<Q212zNPCDutchman9wave_data>CFUl"
/* 8017B520 00178600  90 7F 00 00 */	stw r3, 0x0(r31)
/* 8017B524 00178604  7F E3 FB 78 */	mr r3, r31
/* 8017B528 00178608  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8017B52C 0017860C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8017B530 00178610  7C 08 03 A6 */	mtlr r0
/* 8017B534 00178614  38 21 00 10 */	addi r1, r1, 0x10
/* 8017B538 00178618  4E 80 00 20 */	blr
.endfn "__apl__Q240static_queue<Q212zNPCDutchman9wave_data>8iteratorFi"

# static_queue<zNPCDutchman::wave_data>::full() const
.fn "full__40static_queue<Q212zNPCDutchman9wave_data>CFv", weak
/* 8017B53C 0017861C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8017B540 00178620  7C 08 02 A6 */	mflr r0
/* 8017B544 00178624  90 01 00 14 */	stw r0, 0x14(r1)
/* 8017B548 00178628  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8017B54C 0017862C  93 C1 00 08 */	stw r30, 0x8(r1)
/* 8017B550 00178630  7C 7E 1B 78 */	mr r30, r3
/* 8017B554 00178634  48 00 00 35 */	bl "max_size__40static_queue<Q212zNPCDutchman9wave_data>CFv"
/* 8017B558 00178638  7C 7F 1B 78 */	mr r31, r3
/* 8017B55C 0017863C  7F C3 F3 78 */	mr r3, r30
/* 8017B560 00178640  48 00 00 35 */	bl "size__40static_queue<Q212zNPCDutchman9wave_data>CFv"
/* 8017B564 00178644  7C 03 F8 50 */	subf r0, r3, r31
/* 8017B568 00178648  7C 00 00 34 */	cntlzw r0, r0
/* 8017B56C 0017864C  54 03 D9 7E */	srwi r3, r0, 5
/* 8017B570 00178650  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8017B574 00178654  83 C1 00 08 */	lwz r30, 0x8(r1)
/* 8017B578 00178658  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8017B57C 0017865C  7C 08 03 A6 */	mtlr r0
/* 8017B580 00178660  38 21 00 10 */	addi r1, r1, 0x10
/* 8017B584 00178664  4E 80 00 20 */	blr
.endfn "full__40static_queue<Q212zNPCDutchman9wave_data>CFv"

# static_queue<zNPCDutchman::wave_data>::max_size() const
.fn "max_size__40static_queue<Q212zNPCDutchman9wave_data>CFv", weak
/* 8017B588 00178668  80 63 00 08 */	lwz r3, 0x8(r3)
/* 8017B58C 0017866C  38 63 FF FF */	addi r3, r3, -0x1
/* 8017B590 00178670  4E 80 00 20 */	blr
.endfn "max_size__40static_queue<Q212zNPCDutchman9wave_data>CFv"

# static_queue<zNPCDutchman::wave_data>::size() const
.fn "size__40static_queue<Q212zNPCDutchman9wave_data>CFv", weak
/* 8017B594 00178674  80 63 00 04 */	lwz r3, 0x4(r3)
/* 8017B598 00178678  4E 80 00 20 */	blr
.endfn "size__40static_queue<Q212zNPCDutchman9wave_data>CFv"

# static_queue<zNPCDutchman::wave_data>::erase(const static_queue<zNPCDutchman::wave_data>::iterator&, const static_queue<zNPCDutchman::wave_data>::iterator&)
.fn "erase__40static_queue<Q212zNPCDutchman9wave_data>FRCQ240static_queue<Q212zNPCDutchman9wave_data>8iteratorRCQ240static_queue<Q212zNPCDutchman9wave_data>8iterator", weak
/* 8017B59C 0017867C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8017B5A0 00178680  7C 08 02 A6 */	mflr r0
/* 8017B5A4 00178684  80 84 00 00 */	lwz r4, 0x0(r4)
/* 8017B5A8 00178688  90 01 00 14 */	stw r0, 0x14(r1)
/* 8017B5AC 0017868C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8017B5B0 00178690  7C 7F 1B 78 */	mr r31, r3
/* 8017B5B4 00178694  80 C3 00 00 */	lwz r6, 0x0(r3)
/* 8017B5B8 00178698  7C 04 30 40 */	cmplw r4, r6
/* 8017B5BC 0017869C  40 82 00 28 */	bne .L_8017B5E4
/* 8017B5C0 001786A0  80 9F 00 04 */	lwz r4, 0x4(r31)
/* 8017B5C4 001786A4  80 05 00 00 */	lwz r0, 0x0(r5)
/* 8017B5C8 001786A8  7C 86 22 14 */	add r4, r6, r4
/* 8017B5CC 001786AC  90 1F 00 00 */	stw r0, 0x0(r31)
/* 8017B5D0 001786B0  80 1F 00 00 */	lwz r0, 0x0(r31)
/* 8017B5D4 001786B4  7C 80 20 50 */	subf r4, r0, r4
/* 8017B5D8 001786B8  4B FF FE 59 */	bl "mod_max_size__40static_queue<Q212zNPCDutchman9wave_data>CFUl"
/* 8017B5DC 001786BC  90 7F 00 04 */	stw r3, 0x4(r31)
/* 8017B5E0 001786C0  48 00 00 1C */	b .L_8017B5FC
.L_8017B5E4:
/* 8017B5E4 001786C4  80 05 00 00 */	lwz r0, 0x0(r5)
/* 8017B5E8 001786C8  7C 84 00 50 */	subf r4, r4, r0
/* 8017B5EC 001786CC  4B FF FE 45 */	bl "mod_max_size__40static_queue<Q212zNPCDutchman9wave_data>CFUl"
/* 8017B5F0 001786D0  80 1F 00 04 */	lwz r0, 0x4(r31)
/* 8017B5F4 001786D4  7C 03 00 50 */	subf r0, r3, r0
/* 8017B5F8 001786D8  90 1F 00 04 */	stw r0, 0x4(r31)
.L_8017B5FC:
/* 8017B5FC 001786DC  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8017B600 001786E0  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8017B604 001786E4  7C 08 03 A6 */	mtlr r0
/* 8017B608 001786E8  38 21 00 10 */	addi r1, r1, 0x10
/* 8017B60C 001786EC  4E 80 00 20 */	blr
.endfn "erase__40static_queue<Q212zNPCDutchman9wave_data>FRCQ240static_queue<Q212zNPCDutchman9wave_data>8iteratorRCQ240static_queue<Q212zNPCDutchman9wave_data>8iterator"

# static_queue<zNPCDutchman::wave_data>::iterator::operator!=(const static_queue<zNPCDutchman::wave_data>::iterator&) const
.fn "__ne__Q240static_queue<Q212zNPCDutchman9wave_data>8iteratorCFRCQ240static_queue<Q212zNPCDutchman9wave_data>8iterator", weak
/* 8017B610 001786F0  80 A3 00 00 */	lwz r5, 0x0(r3)
/* 8017B614 001786F4  80 04 00 00 */	lwz r0, 0x0(r4)
/* 8017B618 001786F8  7C 65 00 50 */	subf r3, r5, r0
/* 8017B61C 001786FC  7C 00 28 50 */	subf r0, r0, r5
/* 8017B620 00178700  7C 60 03 78 */	or r0, r3, r0
/* 8017B624 00178704  54 03 0F FE */	srwi r3, r0, 31
/* 8017B628 00178708  4E 80 00 20 */	blr
.endfn "__ne__Q240static_queue<Q212zNPCDutchman9wave_data>8iteratorCFRCQ240static_queue<Q212zNPCDutchman9wave_data>8iterator"

# static_queue<zNPCDutchman::wave_data>::end() const
.fn "end__40static_queue<Q212zNPCDutchman9wave_data>CFv", weak
/* 8017B62C 0017870C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8017B630 00178710  7C 08 02 A6 */	mflr r0
/* 8017B634 00178714  80 83 00 00 */	lwz r4, 0x0(r3)
/* 8017B638 00178718  90 01 00 14 */	stw r0, 0x14(r1)
/* 8017B63C 0017871C  80 03 00 04 */	lwz r0, 0x4(r3)
/* 8017B640 00178720  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8017B644 00178724  7C 7F 1B 78 */	mr r31, r3
/* 8017B648 00178728  7C 84 02 14 */	add r4, r4, r0
/* 8017B64C 0017872C  4B FF FD E5 */	bl "mod_max_size__40static_queue<Q212zNPCDutchman9wave_data>CFUl"
/* 8017B650 00178730  7C 64 1B 78 */	mr r4, r3
/* 8017B654 00178734  7F E3 FB 78 */	mr r3, r31
/* 8017B658 00178738  48 00 00 19 */	bl "create_iterator__40static_queue<Q212zNPCDutchman9wave_data>CFUl"
/* 8017B65C 0017873C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8017B660 00178740  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8017B664 00178744  7C 08 03 A6 */	mtlr r0
/* 8017B668 00178748  38 21 00 10 */	addi r1, r1, 0x10
/* 8017B66C 0017874C  4E 80 00 20 */	blr
.endfn "end__40static_queue<Q212zNPCDutchman9wave_data>CFv"

# static_queue<zNPCDutchman::wave_data>::create_iterator(unsigned long) const
.fn "create_iterator__40static_queue<Q212zNPCDutchman9wave_data>CFUl", weak
/* 8017B670 00178750  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8017B674 00178754  7C 60 1B 78 */	mr r0, r3
/* 8017B678 00178758  7C 83 23 78 */	mr r3, r4
/* 8017B67C 0017875C  90 81 00 08 */	stw r4, 0x8(r1)
/* 8017B680 00178760  7C 04 03 78 */	mr r4, r0
/* 8017B684 00178764  90 01 00 0C */	stw r0, 0xc(r1)
/* 8017B688 00178768  38 21 00 10 */	addi r1, r1, 0x10
/* 8017B68C 0017876C  4E 80 00 20 */	blr
.endfn "create_iterator__40static_queue<Q212zNPCDutchman9wave_data>CFUl"

# static_queue<zNPCDutchman::wave_data>::iterator::operator++()
.fn "__pp__Q240static_queue<Q212zNPCDutchman9wave_data>8iteratorFv", weak
/* 8017B690 00178770  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8017B694 00178774  7C 08 02 A6 */	mflr r0
/* 8017B698 00178778  38 80 00 01 */	li r4, 0x1
/* 8017B69C 0017877C  90 01 00 14 */	stw r0, 0x14(r1)
/* 8017B6A0 00178780  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8017B6A4 00178784  7C 7F 1B 78 */	mr r31, r3
/* 8017B6A8 00178788  4B FF FE 55 */	bl "__apl__Q240static_queue<Q212zNPCDutchman9wave_data>8iteratorFi"
/* 8017B6AC 0017878C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8017B6B0 00178790  7F E3 FB 78 */	mr r3, r31
/* 8017B6B4 00178794  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8017B6B8 00178798  7C 08 03 A6 */	mtlr r0
/* 8017B6BC 0017879C  38 21 00 10 */	addi r1, r1, 0x10
/* 8017B6C0 001787A0  4E 80 00 20 */	blr
.endfn "__pp__Q240static_queue<Q212zNPCDutchman9wave_data>8iteratorFv"

# static_queue<zNPCDutchman::wave_data>::iterator::operator*() const
.fn "__ml__Q240static_queue<Q212zNPCDutchman9wave_data>8iteratorCFv", weak
/* 8017B6C4 001787A4  80 03 00 00 */	lwz r0, 0x0(r3)
/* 8017B6C8 001787A8  80 63 00 04 */	lwz r3, 0x4(r3)
/* 8017B6CC 001787AC  1C 00 00 44 */	mulli r0, r0, 0x44
/* 8017B6D0 001787B0  80 63 00 10 */	lwz r3, 0x10(r3)
/* 8017B6D4 001787B4  7C 63 02 14 */	add r3, r3, r0
/* 8017B6D8 001787B8  4E 80 00 20 */	blr
.endfn "__ml__Q240static_queue<Q212zNPCDutchman9wave_data>8iteratorCFv"

# static_queue<zNPCDutchman::wave_data>::begin() const
.fn "begin__40static_queue<Q212zNPCDutchman9wave_data>CFv", weak
/* 8017B6DC 001787BC  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8017B6E0 001787C0  7C 08 02 A6 */	mflr r0
/* 8017B6E4 001787C4  80 83 00 00 */	lwz r4, 0x0(r3)
/* 8017B6E8 001787C8  90 01 00 14 */	stw r0, 0x14(r1)
/* 8017B6EC 001787CC  4B FF FF 85 */	bl "create_iterator__40static_queue<Q212zNPCDutchman9wave_data>CFUl"
/* 8017B6F0 001787D0  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8017B6F4 001787D4  7C 08 03 A6 */	mtlr r0
/* 8017B6F8 001787D8  38 21 00 10 */	addi r1, r1, 0x10
/* 8017B6FC 001787DC  4E 80 00 20 */	blr
.endfn "begin__40static_queue<Q212zNPCDutchman9wave_data>CFv"

# static_queue<zNPCDutchman::slime_slice>::back()
.fn "back__43static_queue<Q212zNPCDutchman11slime_slice>Fv", weak
/* 8017B700 001787E0  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 8017B704 001787E4  7C 08 02 A6 */	mflr r0
/* 8017B708 001787E8  90 01 00 24 */	stw r0, 0x24(r1)
/* 8017B70C 001787EC  4B FF FA F5 */	bl "end__43static_queue<Q212zNPCDutchman11slime_slice>CFv"
/* 8017B710 001787F0  90 81 00 0C */	stw r4, 0xc(r1)
/* 8017B714 001787F4  38 80 00 01 */	li r4, 0x1
/* 8017B718 001787F8  90 61 00 08 */	stw r3, 0x8(r1)
/* 8017B71C 001787FC  38 61 00 08 */	addi r3, r1, 0x8
/* 8017B720 00178800  48 00 00 25 */	bl "__mi__Q243static_queue<Q212zNPCDutchman11slime_slice>8iteratorCFi"
/* 8017B724 00178804  90 61 00 10 */	stw r3, 0x10(r1)
/* 8017B728 00178808  38 61 00 10 */	addi r3, r1, 0x10
/* 8017B72C 0017880C  90 81 00 14 */	stw r4, 0x14(r1)
/* 8017B730 00178810  4B FF FB 35 */	bl "__ml__Q243static_queue<Q212zNPCDutchman11slime_slice>8iteratorCFv"
/* 8017B734 00178814  80 01 00 24 */	lwz r0, 0x24(r1)
/* 8017B738 00178818  7C 08 03 A6 */	mtlr r0
/* 8017B73C 0017881C  38 21 00 20 */	addi r1, r1, 0x20
/* 8017B740 00178820  4E 80 00 20 */	blr
.endfn "back__43static_queue<Q212zNPCDutchman11slime_slice>Fv"

# static_queue<zNPCDutchman::slime_slice>::iterator::operator-(int) const
.fn "__mi__Q243static_queue<Q212zNPCDutchman11slime_slice>8iteratorCFi", weak
/* 8017B744 00178824  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8017B748 00178828  7C 08 02 A6 */	mflr r0
/* 8017B74C 0017882C  80 A3 00 00 */	lwz r5, 0x0(r3)
/* 8017B750 00178830  90 01 00 14 */	stw r0, 0x14(r1)
/* 8017B754 00178834  80 03 00 04 */	lwz r0, 0x4(r3)
/* 8017B758 00178838  38 61 00 08 */	addi r3, r1, 0x8
/* 8017B75C 0017883C  90 A1 00 08 */	stw r5, 0x8(r1)
/* 8017B760 00178840  90 01 00 0C */	stw r0, 0xc(r1)
/* 8017B764 00178844  48 00 00 1D */	bl "__ami__Q243static_queue<Q212zNPCDutchman11slime_slice>8iteratorFi"
/* 8017B768 00178848  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8017B76C 0017884C  80 61 00 08 */	lwz r3, 0x8(r1)
/* 8017B770 00178850  80 81 00 0C */	lwz r4, 0xc(r1)
/* 8017B774 00178854  7C 08 03 A6 */	mtlr r0
/* 8017B778 00178858  38 21 00 10 */	addi r1, r1, 0x10
/* 8017B77C 0017885C  4E 80 00 20 */	blr
.endfn "__mi__Q243static_queue<Q212zNPCDutchman11slime_slice>8iteratorCFi"

# static_queue<zNPCDutchman::slime_slice>::iterator::operator-=(int)
.fn "__ami__Q243static_queue<Q212zNPCDutchman11slime_slice>8iteratorFi", weak
/* 8017B780 00178860  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8017B784 00178864  7C 08 02 A6 */	mflr r0
/* 8017B788 00178868  7C 84 00 D0 */	neg r4, r4
/* 8017B78C 0017886C  90 01 00 14 */	stw r0, 0x14(r1)
/* 8017B790 00178870  4B FF F9 B1 */	bl "__apl__Q243static_queue<Q212zNPCDutchman11slime_slice>8iteratorFi"
/* 8017B794 00178874  7C 64 1B 78 */	mr r4, r3
/* 8017B798 00178878  80 63 00 00 */	lwz r3, 0x0(r3)
/* 8017B79C 0017887C  80 84 00 04 */	lwz r4, 0x4(r4)
/* 8017B7A0 00178880  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8017B7A4 00178884  7C 08 03 A6 */	mtlr r0
/* 8017B7A8 00178888  38 21 00 10 */	addi r1, r1, 0x10
/* 8017B7AC 0017888C  4E 80 00 20 */	blr
.endfn "__ami__Q243static_queue<Q212zNPCDutchman11slime_slice>8iteratorFi"

# 0x8017B7B0 - 0x8017B7FC
.section .text, "ax", unique, 2
.balign 4

# xFXRibbon::init(int, const char*)
.fn init__9xFXRibbonFiPCc, weak
/* 8017B7B0 00178890  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8017B7B4 00178894  7C 08 02 A6 */	mflr r0
/* 8017B7B8 00178898  7C A4 2B 78 */	mr r4, r5
/* 8017B7BC 0017889C  38 A0 00 00 */	li r5, 0x0
/* 8017B7C0 001788A0  90 01 00 14 */	stw r0, 0x14(r1)
/* 8017B7C4 001788A4  4B EA EB B5 */	bl init__9xFXRibbonFPCcPCc
/* 8017B7C8 001788A8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8017B7CC 001788AC  7C 08 03 A6 */	mtlr r0
/* 8017B7D0 001788B0  38 21 00 10 */	addi r1, r1, 0x10
/* 8017B7D4 001788B4  4E 80 00 20 */	blr
.endfn init__9xFXRibbonFiPCc

# xFXRibbon::clear()
.fn clear__9xFXRibbonFv, weak
/* 8017B7D8 001788B8  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8017B7DC 001788BC  7C 08 02 A6 */	mflr r0
/* 8017B7E0 001788C0  38 63 00 18 */	addi r3, r3, 0x18
/* 8017B7E4 001788C4  90 01 00 14 */	stw r0, 0x14(r1)
/* 8017B7E8 001788C8  4B EB 0C 89 */	bl "clear__36tier_queue<Q29xFXRibbon10joint_data>Fv"
/* 8017B7EC 001788CC  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8017B7F0 001788D0  7C 08 03 A6 */	mtlr r0
/* 8017B7F4 001788D4  38 21 00 10 */	addi r1, r1, 0x10
/* 8017B7F8 001788D8  4E 80 00 20 */	blr
.endfn clear__9xFXRibbonFv

# 0x8017B7FC - 0x8017B81C
.section .text, "ax", unique, 3
.balign 4

# xParInterp::set(float)
.fn set__10xParInterpFf, weak
/* 8017B7FC 001788DC  D0 23 00 04 */	stfs f1, 0x4(r3)
/* 8017B800 001788E0  38 00 00 00 */	li r0, 0x0
/* 8017B804 001788E4  D0 23 00 00 */	stfs f1, 0x0(r3)
/* 8017B808 001788E8  90 03 00 08 */	stw r0, 0x8(r3)
/* 8017B80C 001788EC  C0 02 AC BC */	lfs f0, "@1606"@sda21(r2)
/* 8017B810 001788F0  D0 03 00 10 */	stfs f0, 0x10(r3)
/* 8017B814 001788F4  D0 03 00 0C */	stfs f0, 0xc(r3)
/* 8017B818 001788F8  4E 80 00 20 */	blr
.endfn set__10xParInterpFf

# 0x8017B81C - 0x8017BE6C
.section .text, "ax", unique, 4
.balign 4

# zNPCDutchman::get_center() const
.fn get_center__12zNPCDutchmanCFv, weak
/* 8017B81C 001788FC  80 63 00 24 */	lwz r3, 0x24(r3)
/* 8017B820 00178900  80 63 00 4C */	lwz r3, 0x4c(r3)
/* 8017B824 00178904  38 63 00 30 */	addi r3, r3, 0x30
/* 8017B828 00178908  4E 80 00 20 */	blr
.endfn get_center__12zNPCDutchmanCFv

# zNPCDutchman::face_player()
.fn face_player__12zNPCDutchmanFv, weak
/* 8017B82C 0017890C  38 00 00 01 */	li r0, 0x1
/* 8017B830 00178910  98 03 02 B4 */	stb r0, 0x2b4(r3)
/* 8017B834 00178914  4E 80 00 20 */	blr
.endfn face_player__12zNPCDutchmanFv

# zNPCDutchman::render_debug()
.fn render_debug__12zNPCDutchmanFv, weak
/* 8017B838 00178918  4E 80 00 20 */	blr
.endfn render_debug__12zNPCDutchmanFv

# zNPCDutchman::disable_emitter(zParEmitter&) const
.fn disable_emitter__12zNPCDutchmanCFR11zParEmitter, weak
/* 8017B83C 0017891C  88 04 00 30 */	lbz r0, 0x30(r4)
/* 8017B840 00178920  54 00 06 3C */	rlwinm r0, r0, 0, 24, 30
/* 8017B844 00178924  98 04 00 30 */	stb r0, 0x30(r4)
/* 8017B848 00178928  4E 80 00 20 */	blr
.endfn disable_emitter__12zNPCDutchmanCFR11zParEmitter

# zNPCDutchman::turning() const
.fn turning__12zNPCDutchmanCFv, weak
/* 8017B84C 0017892C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8017B850 00178930  38 00 00 00 */	li r0, 0x0
/* 8017B854 00178934  80 83 00 24 */	lwz r4, 0x24(r3)
/* 8017B858 00178938  80 A2 C0 38 */	lwz r5, "@787"@sda21(r2)
/* 8017B85C 0017893C  80 C4 00 4C */	lwz r6, 0x4c(r4)
/* 8017B860 00178940  80 82 C0 3C */	lwz r4, "@787"+0x4@sda21(r2)
/* 8017B864 00178944  C0 63 02 E0 */	lfs f3, 0x2e0(r3)
/* 8017B868 00178948  C0 22 AC B0 */	lfs f1, "@1603"@sda21(r2)
/* 8017B86C 0017894C  90 A1 00 08 */	stw r5, 0x8(r1)
/* 8017B870 00178950  C0 46 00 20 */	lfs f2, 0x20(r6)
/* 8017B874 00178954  FC 03 08 40 */	fcmpo cr0, f3, f1
/* 8017B878 00178958  90 81 00 0C */	stw r4, 0xc(r1)
/* 8017B87C 0017895C  C0 06 00 28 */	lfs f0, 0x28(r6)
/* 8017B880 00178960  D0 41 00 08 */	stfs f2, 0x8(r1)
/* 8017B884 00178964  D0 01 00 0C */	stfs f0, 0xc(r1)
/* 8017B888 00178968  4C 41 13 82 */	cror eq, gt, eq
/* 8017B88C 0017896C  40 82 00 88 */	bne .L_8017B914
/* 8017B890 00178970  C0 02 AC B4 */	lfs f0, "@1604"@sda21(r2)
/* 8017B894 00178974  FC 03 00 40 */	fcmpo cr0, f3, f0
/* 8017B898 00178978  4C 40 13 82 */	cror eq, lt, eq
/* 8017B89C 0017897C  40 82 00 78 */	bne .L_8017B914
/* 8017B8A0 00178980  C0 43 02 E4 */	lfs f2, 0x2e4(r3)
/* 8017B8A4 00178984  FC 02 08 40 */	fcmpo cr0, f2, f1
/* 8017B8A8 00178988  4C 41 13 82 */	cror eq, gt, eq
/* 8017B8AC 0017898C  40 82 00 10 */	bne .L_8017B8BC
/* 8017B8B0 00178990  FC 02 00 40 */	fcmpo cr0, f2, f0
/* 8017B8B4 00178994  4C 40 13 82 */	cror eq, lt, eq
/* 8017B8B8 00178998  41 82 00 60 */	beq .L_8017B918
.L_8017B8BC:
/* 8017B8BC 0017899C  C0 43 02 D8 */	lfs f2, 0x2d8(r3)
/* 8017B8C0 001789A0  C0 03 02 DC */	lfs f0, 0x2dc(r3)
/* 8017B8C4 001789A4  FC 02 00 40 */	fcmpo cr0, f2, f0
/* 8017B8C8 001789A8  40 81 00 20 */	ble .L_8017B8E8
/* 8017B8CC 001789AC  C0 21 00 08 */	lfs f1, 0x8(r1)
/* 8017B8D0 001789B0  C0 02 AD 38 */	lfs f0, "@1996"@sda21(r2)
/* 8017B8D4 001789B4  EC 22 08 28 */	fsubs f1, f2, f1
/* 8017B8D8 001789B8  FC 20 0A 10 */	fabs f1, f1
/* 8017B8DC 001789BC  FC 20 08 18 */	frsp f1, f1
/* 8017B8E0 001789C0  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8017B8E4 001789C4  41 80 00 34 */	blt .L_8017B918
.L_8017B8E8:
/* 8017B8E8 001789C8  C0 03 02 D8 */	lfs f0, 0x2d8(r3)
/* 8017B8EC 001789CC  C0 43 02 DC */	lfs f2, 0x2dc(r3)
/* 8017B8F0 001789D0  FC 00 10 40 */	fcmpo cr0, f0, f2
/* 8017B8F4 001789D4  40 80 00 20 */	bge .L_8017B914
/* 8017B8F8 001789D8  C0 21 00 0C */	lfs f1, 0xc(r1)
/* 8017B8FC 001789DC  C0 02 AD 38 */	lfs f0, "@1996"@sda21(r2)
/* 8017B900 001789E0  EC 22 08 28 */	fsubs f1, f2, f1
/* 8017B904 001789E4  FC 20 0A 10 */	fabs f1, f1
/* 8017B908 001789E8  FC 20 08 18 */	frsp f1, f1
/* 8017B90C 001789EC  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8017B910 001789F0  41 80 00 08 */	blt .L_8017B918
.L_8017B914:
/* 8017B914 001789F4  38 00 00 01 */	li r0, 0x1
.L_8017B918:
/* 8017B918 001789F8  7C 03 03 78 */	mr r3, r0
/* 8017B91C 001789FC  38 21 00 10 */	addi r1, r1, 0x10
/* 8017B920 00178A00  4E 80 00 20 */	blr
.endfn turning__12zNPCDutchmanCFv

# zNPCDutchman::emit_particles(zParEmitter&, float, xParEmitterCustomSettings&) const
.fn emit_particles__12zNPCDutchmanCFR11zParEmitterfR25xParEmitterCustomSettings, weak
/* 8017B924 00178A04  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8017B928 00178A08  7C 08 02 A6 */	mflr r0
/* 8017B92C 00178A0C  7C 83 23 78 */	mr r3, r4
/* 8017B930 00178A10  7C A4 2B 78 */	mr r4, r5
/* 8017B934 00178A14  90 01 00 14 */	stw r0, 0x14(r1)
/* 8017B938 00178A18  4B F9 C2 91 */	bl xParEmitterEmitCustom__FP11xParEmitterfP25xParEmitterCustomSettings
/* 8017B93C 00178A1C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8017B940 00178A20  7C 08 03 A6 */	mtlr r0
/* 8017B944 00178A24  38 21 00 10 */	addi r1, r1, 0x10
/* 8017B948 00178A28  4E 80 00 20 */	blr
.endfn emit_particles__12zNPCDutchmanCFR11zParEmitterfR25xParEmitterCustomSettings

# zNPCDutchman::get_orbit() const
.fn get_orbit__12zNPCDutchmanCFv, weak
/* 8017B94C 00178A2C  80 63 00 10 */	lwz r3, 0x10(r3)
/* 8017B950 00178A30  38 63 00 20 */	addi r3, r3, 0x20
/* 8017B954 00178A34  4E 80 00 20 */	blr
.endfn get_orbit__12zNPCDutchmanCFv

# zNPCDutchman::emit_particles(zParEmitter&, float) const
.fn emit_particles__12zNPCDutchmanCFR11zParEmitterf, weak
/* 8017B958 00178A38  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8017B95C 00178A3C  7C 08 02 A6 */	mflr r0
/* 8017B960 00178A40  7C 83 23 78 */	mr r3, r4
/* 8017B964 00178A44  90 01 00 14 */	stw r0, 0x14(r1)
/* 8017B968 00178A48  4B F9 CF 7D */	bl xParEmitterEmit__FP11xParEmitterf
/* 8017B96C 00178A4C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8017B970 00178A50  7C 08 03 A6 */	mtlr r0
/* 8017B974 00178A54  38 21 00 10 */	addi r1, r1, 0x10
/* 8017B978 00178A58  4E 80 00 20 */	blr
.endfn emit_particles__12zNPCDutchmanCFR11zParEmitterf

# zNPCDutchman::get_facing() const
.fn get_facing__12zNPCDutchmanCFv, weak
/* 8017B97C 00178A5C  80 63 00 24 */	lwz r3, 0x24(r3)
/* 8017B980 00178A60  80 63 00 4C */	lwz r3, 0x4c(r3)
/* 8017B984 00178A64  38 63 00 20 */	addi r3, r3, 0x20
/* 8017B988 00178A68  4E 80 00 20 */	blr
.endfn get_facing__12zNPCDutchmanCFv

# zNPCDutchman::enable_emitter(zParEmitter&) const
.fn enable_emitter__12zNPCDutchmanCFR11zParEmitter, weak
/* 8017B98C 00178A6C  88 04 00 30 */	lbz r0, 0x30(r4)
/* 8017B990 00178A70  60 00 00 01 */	ori r0, r0, 0x1
/* 8017B994 00178A74  98 04 00 30 */	stb r0, 0x30(r4)
/* 8017B998 00178A78  4E 80 00 20 */	blr
.endfn enable_emitter__12zNPCDutchmanCFR11zParEmitter

# zNPCDutchman::get_nose_loc() const
.fn get_nose_loc__12zNPCDutchmanCFv, weak
/* 8017B99C 00178A7C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8017B9A0 00178A80  7C 08 02 A6 */	mflr r0
/* 8017B9A4 00178A84  80 84 00 24 */	lwz r4, 0x24(r4)
/* 8017B9A8 00178A88  38 A0 00 11 */	li r5, 0x11
/* 8017B9AC 00178A8C  90 01 00 14 */	stw r0, 0x14(r1)
/* 8017B9B0 00178A90  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8017B9B4 00178A94  7C 7F 1B 78 */	mr r31, r3
/* 8017B9B8 00178A98  4B EB 95 C1 */	bl xModelGetBoneLocation__FRC14xModelInstanceUl
/* 8017B9BC 00178A9C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8017B9C0 00178AA0  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8017B9C4 00178AA4  7C 08 03 A6 */	mtlr r0
/* 8017B9C8 00178AA8  38 21 00 10 */	addi r1, r1, 0x10
/* 8017B9CC 00178AAC  4E 80 00 20 */	blr
.endfn get_nose_loc__12zNPCDutchmanCFv

# zNPCDutchman::get_chest_loc() const
.fn get_chest_loc__12zNPCDutchmanCFv, weak
/* 8017B9D0 00178AB0  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8017B9D4 00178AB4  7C 08 02 A6 */	mflr r0
/* 8017B9D8 00178AB8  80 84 00 24 */	lwz r4, 0x24(r4)
/* 8017B9DC 00178ABC  38 A0 00 02 */	li r5, 0x2
/* 8017B9E0 00178AC0  90 01 00 14 */	stw r0, 0x14(r1)
/* 8017B9E4 00178AC4  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8017B9E8 00178AC8  7C 7F 1B 78 */	mr r31, r3
/* 8017B9EC 00178ACC  4B EB 95 8D */	bl xModelGetBoneLocation__FRC14xModelInstanceUl
/* 8017B9F0 00178AD0  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8017B9F4 00178AD4  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8017B9F8 00178AD8  7C 08 03 A6 */	mtlr r0
/* 8017B9FC 00178ADC  38 21 00 10 */	addi r1, r1, 0x10
/* 8017BA00 00178AE0  4E 80 00 20 */	blr
.endfn get_chest_loc__12zNPCDutchmanCFv

# zNPCGoalDutchmanNil::zNPCGoalDutchmanNil(int, zNPCDutchman&)
.fn __ct__19zNPCGoalDutchmanNilFiR12zNPCDutchman, weak
/* 8017BA04 00178AE4  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8017BA08 00178AE8  7C 08 02 A6 */	mflr r0
/* 8017BA0C 00178AEC  90 01 00 14 */	stw r0, 0x14(r1)
/* 8017BA10 00178AF0  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8017BA14 00178AF4  7C 7F 1B 78 */	mr r31, r3
/* 8017BA18 00178AF8  4B F5 D5 DD */	bl __ct__14zNPCGoalCommonFi
/* 8017BA1C 00178AFC  3C 80 80 2A */	lis r4, __vt__19zNPCGoalDutchmanNil@ha
/* 8017BA20 00178B00  7F E3 FB 78 */	mr r3, r31
/* 8017BA24 00178B04  38 04 B7 30 */	addi r0, r4, __vt__19zNPCGoalDutchmanNil@l
/* 8017BA28 00178B08  90 1F 00 38 */	stw r0, 0x38(r31)
/* 8017BA2C 00178B0C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8017BA30 00178B10  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8017BA34 00178B14  7C 08 03 A6 */	mtlr r0
/* 8017BA38 00178B18  38 21 00 10 */	addi r1, r1, 0x10
/* 8017BA3C 00178B1C  4E 80 00 20 */	blr
.endfn __ct__19zNPCGoalDutchmanNilFiR12zNPCDutchman

# zNPCGoalDutchmanInitiate::zNPCGoalDutchmanInitiate(int, zNPCDutchman&)
.fn __ct__24zNPCGoalDutchmanInitiateFiR12zNPCDutchman, weak
/* 8017BA40 00178B20  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8017BA44 00178B24  7C 08 02 A6 */	mflr r0
/* 8017BA48 00178B28  90 01 00 14 */	stw r0, 0x14(r1)
/* 8017BA4C 00178B2C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8017BA50 00178B30  7C BF 2B 78 */	mr r31, r5
/* 8017BA54 00178B34  93 C1 00 08 */	stw r30, 0x8(r1)
/* 8017BA58 00178B38  7C 7E 1B 78 */	mr r30, r3
/* 8017BA5C 00178B3C  4B F5 D5 99 */	bl __ct__14zNPCGoalCommonFi
/* 8017BA60 00178B40  3C 80 80 2A */	lis r4, __vt__24zNPCGoalDutchmanInitiate@ha
/* 8017BA64 00178B44  7F C3 F3 78 */	mr r3, r30
/* 8017BA68 00178B48  38 04 B6 FC */	addi r0, r4, __vt__24zNPCGoalDutchmanInitiate@l
/* 8017BA6C 00178B4C  90 1E 00 38 */	stw r0, 0x38(r30)
/* 8017BA70 00178B50  93 FE 00 4C */	stw r31, 0x4c(r30)
/* 8017BA74 00178B54  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8017BA78 00178B58  83 C1 00 08 */	lwz r30, 0x8(r1)
/* 8017BA7C 00178B5C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8017BA80 00178B60  7C 08 03 A6 */	mtlr r0
/* 8017BA84 00178B64  38 21 00 10 */	addi r1, r1, 0x10
/* 8017BA88 00178B68  4E 80 00 20 */	blr
.endfn __ct__24zNPCGoalDutchmanInitiateFiR12zNPCDutchman

# zNPCDutchman::turning(float) const
.fn turning__12zNPCDutchmanCFf, weak
/* 8017BA8C 00178B6C  94 21 FF D0 */	stwu r1, -0x30(r1)
/* 8017BA90 00178B70  7C 08 02 A6 */	mflr r0
/* 8017BA94 00178B74  90 01 00 34 */	stw r0, 0x34(r1)
/* 8017BA98 00178B78  DB E1 00 20 */	stfd f31, 0x20(r1)
/* 8017BA9C 00178B7C  F3 E1 00 28 */	psq_st f31, 0x28(r1), 0, qr0
/* 8017BAA0 00178B80  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 8017BAA4 00178B84  C0 03 02 E0 */	lfs f0, 0x2e0(r3)
/* 8017BAA8 00178B88  FF E0 08 90 */	fmr f31, f1
/* 8017BAAC 00178B8C  80 83 00 24 */	lwz r4, 0x24(r3)
/* 8017BAB0 00178B90  3B E0 00 00 */	li r31, 0x0
/* 8017BAB4 00178B94  FC 20 02 10 */	fabs f1, f0
/* 8017BAB8 00178B98  C0 03 02 E8 */	lfs f0, 0x2e8(r3)
/* 8017BABC 00178B9C  80 A2 C0 30 */	lwz r5, "@786"@sda21(r2)
/* 8017BAC0 00178BA0  80 84 00 4C */	lwz r4, 0x4c(r4)
/* 8017BAC4 00178BA4  EC 1F 00 32 */	fmuls f0, f31, f0
/* 8017BAC8 00178BA8  FC 20 08 18 */	frsp f1, f1
/* 8017BACC 00178BAC  80 02 C0 34 */	lwz r0, "@786"+0x4@sda21(r2)
/* 8017BAD0 00178BB0  90 A1 00 08 */	stw r5, 0x8(r1)
/* 8017BAD4 00178BB4  C0 44 00 20 */	lfs f2, 0x20(r4)
/* 8017BAD8 00178BB8  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8017BADC 00178BBC  90 01 00 0C */	stw r0, 0xc(r1)
/* 8017BAE0 00178BC0  C0 04 00 28 */	lfs f0, 0x28(r4)
/* 8017BAE4 00178BC4  D0 41 00 08 */	stfs f2, 0x8(r1)
/* 8017BAE8 00178BC8  D0 01 00 0C */	stfs f0, 0xc(r1)
/* 8017BAEC 00178BCC  41 81 00 20 */	bgt .L_8017BB0C
/* 8017BAF0 00178BD0  38 63 02 D8 */	addi r3, r3, 0x2d8
/* 8017BAF4 00178BD4  38 81 00 08 */	addi r4, r1, 0x8
/* 8017BAF8 00178BD8  4B FA 19 C9 */	bl dot__5xVec2CFRC5xVec2
/* 8017BAFC 00178BDC  C0 02 AC BC */	lfs f0, "@1606"@sda21(r2)
/* 8017BB00 00178BE0  EC 00 F8 28 */	fsubs f0, f0, f31
/* 8017BB04 00178BE4  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8017BB08 00178BE8  40 80 00 08 */	bge .L_8017BB10
.L_8017BB0C:
/* 8017BB0C 00178BEC  3B E0 00 01 */	li r31, 0x1
.L_8017BB10:
/* 8017BB10 00178BF0  7F E3 FB 78 */	mr r3, r31
/* 8017BB14 00178BF4  E3 E1 00 28 */	psq_l f31, 0x28(r1), 0, qr0
/* 8017BB18 00178BF8  80 01 00 34 */	lwz r0, 0x34(r1)
/* 8017BB1C 00178BFC  CB E1 00 20 */	lfd f31, 0x20(r1)
/* 8017BB20 00178C00  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 8017BB24 00178C04  7C 08 03 A6 */	mtlr r0
/* 8017BB28 00178C08  38 21 00 30 */	addi r1, r1, 0x30
/* 8017BB2C 00178C0C  4E 80 00 20 */	blr
.endfn turning__12zNPCDutchmanCFf

# zNPCGoalDutchmanIdle::zNPCGoalDutchmanIdle(int, zNPCDutchman&)
.fn __ct__20zNPCGoalDutchmanIdleFiR12zNPCDutchman, weak
/* 8017BB30 00178C10  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8017BB34 00178C14  7C 08 02 A6 */	mflr r0
/* 8017BB38 00178C18  90 01 00 14 */	stw r0, 0x14(r1)
/* 8017BB3C 00178C1C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8017BB40 00178C20  7C BF 2B 78 */	mr r31, r5
/* 8017BB44 00178C24  93 C1 00 08 */	stw r30, 0x8(r1)
/* 8017BB48 00178C28  7C 7E 1B 78 */	mr r30, r3
/* 8017BB4C 00178C2C  4B F5 D4 A9 */	bl __ct__14zNPCGoalCommonFi
/* 8017BB50 00178C30  3C 80 80 2A */	lis r4, __vt__20zNPCGoalDutchmanIdle@ha
/* 8017BB54 00178C34  7F C3 F3 78 */	mr r3, r30
/* 8017BB58 00178C38  38 04 B6 C8 */	addi r0, r4, __vt__20zNPCGoalDutchmanIdle@l
/* 8017BB5C 00178C3C  90 1E 00 38 */	stw r0, 0x38(r30)
/* 8017BB60 00178C40  93 FE 00 4C */	stw r31, 0x4c(r30)
/* 8017BB64 00178C44  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8017BB68 00178C48  83 C1 00 08 */	lwz r30, 0x8(r1)
/* 8017BB6C 00178C4C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8017BB70 00178C50  7C 08 03 A6 */	mtlr r0
/* 8017BB74 00178C54  38 21 00 10 */	addi r1, r1, 0x10
/* 8017BB78 00178C58  4E 80 00 20 */	blr
.endfn __ct__20zNPCGoalDutchmanIdleFiR12zNPCDutchman

# zNPCGoalDutchmanDisappear::zNPCGoalDutchmanDisappear(int, zNPCDutchman&)
.fn __ct__25zNPCGoalDutchmanDisappearFiR12zNPCDutchman, weak
/* 8017BB7C 00178C5C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8017BB80 00178C60  7C 08 02 A6 */	mflr r0
/* 8017BB84 00178C64  90 01 00 14 */	stw r0, 0x14(r1)
/* 8017BB88 00178C68  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8017BB8C 00178C6C  7C BF 2B 78 */	mr r31, r5
/* 8017BB90 00178C70  93 C1 00 08 */	stw r30, 0x8(r1)
/* 8017BB94 00178C74  7C 7E 1B 78 */	mr r30, r3
/* 8017BB98 00178C78  4B F5 D4 5D */	bl __ct__14zNPCGoalCommonFi
/* 8017BB9C 00178C7C  3C 80 80 2A */	lis r4, __vt__25zNPCGoalDutchmanDisappear@ha
/* 8017BBA0 00178C80  7F C3 F3 78 */	mr r3, r30
/* 8017BBA4 00178C84  38 04 B6 94 */	addi r0, r4, __vt__25zNPCGoalDutchmanDisappear@l
/* 8017BBA8 00178C88  90 1E 00 38 */	stw r0, 0x38(r30)
/* 8017BBAC 00178C8C  93 FE 00 4C */	stw r31, 0x4c(r30)
/* 8017BBB0 00178C90  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8017BBB4 00178C94  83 C1 00 08 */	lwz r30, 0x8(r1)
/* 8017BBB8 00178C98  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8017BBBC 00178C9C  7C 08 03 A6 */	mtlr r0
/* 8017BBC0 00178CA0  38 21 00 10 */	addi r1, r1, 0x10
/* 8017BBC4 00178CA4  4E 80 00 20 */	blr
.endfn __ct__25zNPCGoalDutchmanDisappearFiR12zNPCDutchman

# zNPCGoalDutchmanTeleport::zNPCGoalDutchmanTeleport(int, zNPCDutchman&)
.fn __ct__24zNPCGoalDutchmanTeleportFiR12zNPCDutchman, weak
/* 8017BBC8 00178CA8  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8017BBCC 00178CAC  7C 08 02 A6 */	mflr r0
/* 8017BBD0 00178CB0  90 01 00 14 */	stw r0, 0x14(r1)
/* 8017BBD4 00178CB4  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8017BBD8 00178CB8  7C BF 2B 78 */	mr r31, r5
/* 8017BBDC 00178CBC  93 C1 00 08 */	stw r30, 0x8(r1)
/* 8017BBE0 00178CC0  7C 7E 1B 78 */	mr r30, r3
/* 8017BBE4 00178CC4  4B F5 D4 11 */	bl __ct__14zNPCGoalCommonFi
/* 8017BBE8 00178CC8  3C 80 80 2A */	lis r4, __vt__24zNPCGoalDutchmanTeleport@ha
/* 8017BBEC 00178CCC  7F C3 F3 78 */	mr r3, r30
/* 8017BBF0 00178CD0  38 04 B6 60 */	addi r0, r4, __vt__24zNPCGoalDutchmanTeleport@l
/* 8017BBF4 00178CD4  90 1E 00 38 */	stw r0, 0x38(r30)
/* 8017BBF8 00178CD8  93 FE 00 4C */	stw r31, 0x4c(r30)
/* 8017BBFC 00178CDC  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8017BC00 00178CE0  83 C1 00 08 */	lwz r30, 0x8(r1)
/* 8017BC04 00178CE4  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8017BC08 00178CE8  7C 08 03 A6 */	mtlr r0
/* 8017BC0C 00178CEC  38 21 00 10 */	addi r1, r1, 0x10
/* 8017BC10 00178CF0  4E 80 00 20 */	blr
.endfn __ct__24zNPCGoalDutchmanTeleportFiR12zNPCDutchman

# zNPCGoalDutchmanReappear::zNPCGoalDutchmanReappear(int, zNPCDutchman&)
.fn __ct__24zNPCGoalDutchmanReappearFiR12zNPCDutchman, weak
/* 8017BC14 00178CF4  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8017BC18 00178CF8  7C 08 02 A6 */	mflr r0
/* 8017BC1C 00178CFC  90 01 00 14 */	stw r0, 0x14(r1)
/* 8017BC20 00178D00  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8017BC24 00178D04  7C BF 2B 78 */	mr r31, r5
/* 8017BC28 00178D08  93 C1 00 08 */	stw r30, 0x8(r1)
/* 8017BC2C 00178D0C  7C 7E 1B 78 */	mr r30, r3
/* 8017BC30 00178D10  4B F5 D3 C5 */	bl __ct__14zNPCGoalCommonFi
/* 8017BC34 00178D14  3C 80 80 2A */	lis r4, __vt__24zNPCGoalDutchmanReappear@ha
/* 8017BC38 00178D18  7F C3 F3 78 */	mr r3, r30
/* 8017BC3C 00178D1C  38 04 B6 2C */	addi r0, r4, __vt__24zNPCGoalDutchmanReappear@l
/* 8017BC40 00178D20  90 1E 00 38 */	stw r0, 0x38(r30)
/* 8017BC44 00178D24  93 FE 00 4C */	stw r31, 0x4c(r30)
/* 8017BC48 00178D28  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8017BC4C 00178D2C  83 C1 00 08 */	lwz r30, 0x8(r1)
/* 8017BC50 00178D30  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8017BC54 00178D34  7C 08 03 A6 */	mtlr r0
/* 8017BC58 00178D38  38 21 00 10 */	addi r1, r1, 0x10
/* 8017BC5C 00178D3C  4E 80 00 20 */	blr
.endfn __ct__24zNPCGoalDutchmanReappearFiR12zNPCDutchman

# zNPCGoalDutchmanBeam::zNPCGoalDutchmanBeam(int, zNPCDutchman&)
.fn __ct__20zNPCGoalDutchmanBeamFiR12zNPCDutchman, weak
/* 8017BC60 00178D40  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8017BC64 00178D44  7C 08 02 A6 */	mflr r0
/* 8017BC68 00178D48  90 01 00 14 */	stw r0, 0x14(r1)
/* 8017BC6C 00178D4C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8017BC70 00178D50  7C BF 2B 78 */	mr r31, r5
/* 8017BC74 00178D54  93 C1 00 08 */	stw r30, 0x8(r1)
/* 8017BC78 00178D58  7C 7E 1B 78 */	mr r30, r3
/* 8017BC7C 00178D5C  4B F5 D3 79 */	bl __ct__14zNPCGoalCommonFi
/* 8017BC80 00178D60  3C 80 80 2A */	lis r4, __vt__20zNPCGoalDutchmanBeam@ha
/* 8017BC84 00178D64  7F C3 F3 78 */	mr r3, r30
/* 8017BC88 00178D68  38 04 B5 F8 */	addi r0, r4, __vt__20zNPCGoalDutchmanBeam@l
/* 8017BC8C 00178D6C  90 1E 00 38 */	stw r0, 0x38(r30)
/* 8017BC90 00178D70  93 FE 00 BC */	stw r31, 0xbc(r30)
/* 8017BC94 00178D74  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8017BC98 00178D78  83 C1 00 08 */	lwz r30, 0x8(r1)
/* 8017BC9C 00178D7C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8017BCA0 00178D80  7C 08 03 A6 */	mtlr r0
/* 8017BCA4 00178D84  38 21 00 10 */	addi r1, r1, 0x10
/* 8017BCA8 00178D88  4E 80 00 20 */	blr
.endfn __ct__20zNPCGoalDutchmanBeamFiR12zNPCDutchman

# zNPCGoalDutchmanFlame::zNPCGoalDutchmanFlame(int, zNPCDutchman&)
.fn __ct__21zNPCGoalDutchmanFlameFiR12zNPCDutchman, weak
/* 8017BCAC 00178D8C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8017BCB0 00178D90  7C 08 02 A6 */	mflr r0
/* 8017BCB4 00178D94  90 01 00 14 */	stw r0, 0x14(r1)
/* 8017BCB8 00178D98  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8017BCBC 00178D9C  7C BF 2B 78 */	mr r31, r5
/* 8017BCC0 00178DA0  93 C1 00 08 */	stw r30, 0x8(r1)
/* 8017BCC4 00178DA4  7C 7E 1B 78 */	mr r30, r3
/* 8017BCC8 00178DA8  4B F5 D3 2D */	bl __ct__14zNPCGoalCommonFi
/* 8017BCCC 00178DAC  3C 80 80 2A */	lis r4, __vt__21zNPCGoalDutchmanFlame@ha
/* 8017BCD0 00178DB0  7F C3 F3 78 */	mr r3, r30
/* 8017BCD4 00178DB4  38 04 B5 C4 */	addi r0, r4, __vt__21zNPCGoalDutchmanFlame@l
/* 8017BCD8 00178DB8  90 1E 00 38 */	stw r0, 0x38(r30)
/* 8017BCDC 00178DBC  93 FE 00 5C */	stw r31, 0x5c(r30)
/* 8017BCE0 00178DC0  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8017BCE4 00178DC4  83 C1 00 08 */	lwz r30, 0x8(r1)
/* 8017BCE8 00178DC8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8017BCEC 00178DCC  7C 08 03 A6 */	mtlr r0
/* 8017BCF0 00178DD0  38 21 00 10 */	addi r1, r1, 0x10
/* 8017BCF4 00178DD4  4E 80 00 20 */	blr
.endfn __ct__21zNPCGoalDutchmanFlameFiR12zNPCDutchman

# zNPCGoalDutchmanPostFlame::zNPCGoalDutchmanPostFlame(int, zNPCDutchman&)
.fn __ct__25zNPCGoalDutchmanPostFlameFiR12zNPCDutchman, weak
/* 8017BCF8 00178DD8  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8017BCFC 00178DDC  7C 08 02 A6 */	mflr r0
/* 8017BD00 00178DE0  90 01 00 14 */	stw r0, 0x14(r1)
/* 8017BD04 00178DE4  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8017BD08 00178DE8  7C BF 2B 78 */	mr r31, r5
/* 8017BD0C 00178DEC  93 C1 00 08 */	stw r30, 0x8(r1)
/* 8017BD10 00178DF0  7C 7E 1B 78 */	mr r30, r3
/* 8017BD14 00178DF4  4B F5 D2 E1 */	bl __ct__14zNPCGoalCommonFi
/* 8017BD18 00178DF8  3C 80 80 2A */	lis r4, __vt__25zNPCGoalDutchmanPostFlame@ha
/* 8017BD1C 00178DFC  7F C3 F3 78 */	mr r3, r30
/* 8017BD20 00178E00  38 04 B5 90 */	addi r0, r4, __vt__25zNPCGoalDutchmanPostFlame@l
/* 8017BD24 00178E04  90 1E 00 38 */	stw r0, 0x38(r30)
/* 8017BD28 00178E08  93 FE 00 4C */	stw r31, 0x4c(r30)
/* 8017BD2C 00178E0C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8017BD30 00178E10  83 C1 00 08 */	lwz r30, 0x8(r1)
/* 8017BD34 00178E14  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8017BD38 00178E18  7C 08 03 A6 */	mtlr r0
/* 8017BD3C 00178E1C  38 21 00 10 */	addi r1, r1, 0x10
/* 8017BD40 00178E20  4E 80 00 20 */	blr
.endfn __ct__25zNPCGoalDutchmanPostFlameFiR12zNPCDutchman

# zNPCGoalDutchmanCaught::zNPCGoalDutchmanCaught(int, zNPCDutchman&)
.fn __ct__22zNPCGoalDutchmanCaughtFiR12zNPCDutchman, weak
/* 8017BD44 00178E24  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8017BD48 00178E28  7C 08 02 A6 */	mflr r0
/* 8017BD4C 00178E2C  90 01 00 14 */	stw r0, 0x14(r1)
/* 8017BD50 00178E30  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8017BD54 00178E34  7C BF 2B 78 */	mr r31, r5
/* 8017BD58 00178E38  93 C1 00 08 */	stw r30, 0x8(r1)
/* 8017BD5C 00178E3C  7C 7E 1B 78 */	mr r30, r3
/* 8017BD60 00178E40  4B F5 D2 95 */	bl __ct__14zNPCGoalCommonFi
/* 8017BD64 00178E44  3C 80 80 2A */	lis r4, __vt__22zNPCGoalDutchmanCaught@ha
/* 8017BD68 00178E48  7F C3 F3 78 */	mr r3, r30
/* 8017BD6C 00178E4C  38 04 B5 5C */	addi r0, r4, __vt__22zNPCGoalDutchmanCaught@l
/* 8017BD70 00178E50  90 1E 00 38 */	stw r0, 0x38(r30)
/* 8017BD74 00178E54  93 FE 00 50 */	stw r31, 0x50(r30)
/* 8017BD78 00178E58  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8017BD7C 00178E5C  83 C1 00 08 */	lwz r30, 0x8(r1)
/* 8017BD80 00178E60  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8017BD84 00178E64  7C 08 03 A6 */	mtlr r0
/* 8017BD88 00178E68  38 21 00 10 */	addi r1, r1, 0x10
/* 8017BD8C 00178E6C  4E 80 00 20 */	blr
.endfn __ct__22zNPCGoalDutchmanCaughtFiR12zNPCDutchman

# zNPCGoalDutchmanDamage::zNPCGoalDutchmanDamage(int, zNPCDutchman&)
.fn __ct__22zNPCGoalDutchmanDamageFiR12zNPCDutchman, weak
/* 8017BD90 00178E70  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8017BD94 00178E74  7C 08 02 A6 */	mflr r0
/* 8017BD98 00178E78  90 01 00 14 */	stw r0, 0x14(r1)
/* 8017BD9C 00178E7C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8017BDA0 00178E80  7C BF 2B 78 */	mr r31, r5
/* 8017BDA4 00178E84  93 C1 00 08 */	stw r30, 0x8(r1)
/* 8017BDA8 00178E88  7C 7E 1B 78 */	mr r30, r3
/* 8017BDAC 00178E8C  4B F5 D2 49 */	bl __ct__14zNPCGoalCommonFi
/* 8017BDB0 00178E90  3C 80 80 2A */	lis r4, __vt__22zNPCGoalDutchmanDamage@ha
/* 8017BDB4 00178E94  7F C3 F3 78 */	mr r3, r30
/* 8017BDB8 00178E98  38 04 B5 28 */	addi r0, r4, __vt__22zNPCGoalDutchmanDamage@l
/* 8017BDBC 00178E9C  90 1E 00 38 */	stw r0, 0x38(r30)
/* 8017BDC0 00178EA0  93 FE 00 50 */	stw r31, 0x50(r30)
/* 8017BDC4 00178EA4  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8017BDC8 00178EA8  83 C1 00 08 */	lwz r30, 0x8(r1)
/* 8017BDCC 00178EAC  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8017BDD0 00178EB0  7C 08 03 A6 */	mtlr r0
/* 8017BDD4 00178EB4  38 21 00 10 */	addi r1, r1, 0x10
/* 8017BDD8 00178EB8  4E 80 00 20 */	blr
.endfn __ct__22zNPCGoalDutchmanDamageFiR12zNPCDutchman

# zNPCGoalDutchmanDeath::zNPCGoalDutchmanDeath(int, zNPCDutchman&)
.fn __ct__21zNPCGoalDutchmanDeathFiR12zNPCDutchman, weak
/* 8017BDDC 00178EBC  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8017BDE0 00178EC0  7C 08 02 A6 */	mflr r0
/* 8017BDE4 00178EC4  90 01 00 14 */	stw r0, 0x14(r1)
/* 8017BDE8 00178EC8  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8017BDEC 00178ECC  7C BF 2B 78 */	mr r31, r5
/* 8017BDF0 00178ED0  93 C1 00 08 */	stw r30, 0x8(r1)
/* 8017BDF4 00178ED4  7C 7E 1B 78 */	mr r30, r3
/* 8017BDF8 00178ED8  4B F5 D1 FD */	bl __ct__14zNPCGoalCommonFi
/* 8017BDFC 00178EDC  3C 80 80 2A */	lis r4, __vt__21zNPCGoalDutchmanDeath@ha
/* 8017BE00 00178EE0  7F C3 F3 78 */	mr r3, r30
/* 8017BE04 00178EE4  38 04 B4 F4 */	addi r0, r4, __vt__21zNPCGoalDutchmanDeath@l
/* 8017BE08 00178EE8  90 1E 00 38 */	stw r0, 0x38(r30)
/* 8017BE0C 00178EEC  93 FE 00 5C */	stw r31, 0x5c(r30)
/* 8017BE10 00178EF0  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8017BE14 00178EF4  83 C1 00 08 */	lwz r30, 0x8(r1)
/* 8017BE18 00178EF8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8017BE1C 00178EFC  7C 08 03 A6 */	mtlr r0
/* 8017BE20 00178F00  38 21 00 10 */	addi r1, r1, 0x10
/* 8017BE24 00178F04  4E 80 00 20 */	blr
.endfn __ct__21zNPCGoalDutchmanDeathFiR12zNPCDutchman

# zNPCDutchman::ColChkFlags() const
.fn ColChkFlags__12zNPCDutchmanCFv, weak
/* 8017BE28 00178F08  38 60 00 00 */	li r3, 0x0
/* 8017BE2C 00178F0C  4E 80 00 20 */	blr
.endfn ColChkFlags__12zNPCDutchmanCFv

# zNPCDutchman::ColPenFlags() const
.fn ColPenFlags__12zNPCDutchmanCFv, weak
/* 8017BE30 00178F10  38 60 00 00 */	li r3, 0x0
/* 8017BE34 00178F14  4E 80 00 20 */	blr
.endfn ColPenFlags__12zNPCDutchmanCFv

# zNPCDutchman::ColChkByFlags() const
.fn ColChkByFlags__12zNPCDutchmanCFv, weak
/* 8017BE38 00178F18  38 60 00 10 */	li r3, 0x10
/* 8017BE3C 00178F1C  4E 80 00 20 */	blr
.endfn ColChkByFlags__12zNPCDutchmanCFv

# zNPCDutchman::ColPenByFlags() const
.fn ColPenByFlags__12zNPCDutchmanCFv, weak
/* 8017BE40 00178F20  38 60 00 10 */	li r3, 0x10
/* 8017BE44 00178F24  4E 80 00 20 */	blr
.endfn ColPenByFlags__12zNPCDutchmanCFv

# zNPCDutchman::PhysicsFlags() const
.fn PhysicsFlags__12zNPCDutchmanCFv, weak
/* 8017BE48 00178F28  38 60 00 03 */	li r3, 0x3
/* 8017BE4C 00178F2C  4E 80 00 20 */	blr
.endfn PhysicsFlags__12zNPCDutchmanCFv

# zNPCDutchman::IsAlive()
.fn IsAlive__12zNPCDutchmanFv, weak
/* 8017BE50 00178F30  80 63 02 C4 */	lwz r3, 0x2c4(r3)
/* 8017BE54 00178F34  7C 03 00 D0 */	neg r0, r3
/* 8017BE58 00178F38  7C 00 18 78 */	andc r0, r0, r3
/* 8017BE5C 00178F3C  54 03 0F FE */	srwi r3, r0, 31
/* 8017BE60 00178F40  4E 80 00 20 */	blr
.endfn IsAlive__12zNPCDutchmanFv

# zNPCDutchman::PRIV_GetLassoData()
.fn PRIV_GetLassoData__12zNPCDutchmanFv, weak
/* 8017BE64 00178F44  38 63 06 30 */	addi r3, r3, 0x630
/* 8017BE68 00178F48  4E 80 00 20 */	blr
.endfn PRIV_GetLassoData__12zNPCDutchmanFv

# 0x8017BE6C - 0x8017BE98
.section .text, "ax", unique, 5
.balign 4

# xVec2::create(float, float)
.fn create__5xVec2Fff, weak
/* 8017BE6C 00178F4C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8017BE70 00178F50  80 62 C0 28 */	lwz r3, "@512"@sda21(r2)
/* 8017BE74 00178F54  80 02 C0 2C */	lwz r0, "@512"+0x4@sda21(r2)
/* 8017BE78 00178F58  90 61 00 08 */	stw r3, 0x8(r1)
/* 8017BE7C 00178F5C  90 01 00 0C */	stw r0, 0xc(r1)
/* 8017BE80 00178F60  D0 21 00 08 */	stfs f1, 0x8(r1)
/* 8017BE84 00178F64  D0 41 00 0C */	stfs f2, 0xc(r1)
/* 8017BE88 00178F68  80 61 00 08 */	lwz r3, 0x8(r1)
/* 8017BE8C 00178F6C  80 81 00 0C */	lwz r4, 0xc(r1)
/* 8017BE90 00178F70  38 21 00 10 */	addi r1, r1, 0x10
/* 8017BE94 00178F74  4E 80 00 20 */	blr
.endfn create__5xVec2Fff

# 0x8017BE98 - 0x8017C014
.section .text, "ax", unique, 6
.balign 4

# auto_tweak::load_param<int, int>(int&, int, int, int, xModelAssetParam*, unsigned int, const char*)
.fn "load_param<i,i>__10auto_tweakFRiiiiP16xModelAssetParamUiPCc", local
/* 8017BE98 00178F78  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 8017BE9C 00178F7C  7C 08 02 A6 */	mflr r0
/* 8017BEA0 00178F80  90 01 00 24 */	stw r0, 0x24(r1)
/* 8017BEA4 00178F84  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 8017BEA8 00178F88  7C DF 33 78 */	mr r31, r6
/* 8017BEAC 00178F8C  93 C1 00 18 */	stw r30, 0x18(r1)
/* 8017BEB0 00178F90  7C BE 2B 78 */	mr r30, r5
/* 8017BEB4 00178F94  7D 25 4B 78 */	mr r5, r9
/* 8017BEB8 00178F98  93 A1 00 14 */	stw r29, 0x14(r1)
/* 8017BEBC 00178F9C  7C 9D 23 78 */	mr r29, r4
/* 8017BEC0 00178FA0  7D 04 43 78 */	mr r4, r8
/* 8017BEC4 00178FA4  93 81 00 10 */	stw r28, 0x10(r1)
/* 8017BEC8 00178FA8  7C 7C 1B 78 */	mr r28, r3
/* 8017BECC 00178FAC  80 C3 00 00 */	lwz r6, 0x0(r3)
/* 8017BED0 00178FB0  7C E3 3B 78 */	mr r3, r7
/* 8017BED4 00178FB4  4B ED A1 31 */	bl zParamGetInt__FP16xModelAssetParamUiPCci
/* 8017BED8 00178FB8  7C 03 F0 00 */	cmpw r3, r30
/* 8017BEDC 00178FBC  40 80 00 0C */	bge .L_8017BEE8
/* 8017BEE0 00178FC0  7F C3 F3 78 */	mr r3, r30
/* 8017BEE4 00178FC4  48 00 00 10 */	b .L_8017BEF4
.L_8017BEE8:
/* 8017BEE8 00178FC8  7C 03 F8 00 */	cmpw r3, r31
/* 8017BEEC 00178FCC  40 81 00 08 */	ble .L_8017BEF4
/* 8017BEF0 00178FD0  7F E3 FB 78 */	mr r3, r31
.L_8017BEF4:
/* 8017BEF4 00178FD4  7C 63 E9 D6 */	mullw r3, r3, r29
/* 8017BEF8 00178FD8  90 7C 00 00 */	stw r3, 0x0(r28)
/* 8017BEFC 00178FDC  80 01 00 24 */	lwz r0, 0x24(r1)
/* 8017BF00 00178FE0  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 8017BF04 00178FE4  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 8017BF08 00178FE8  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 8017BF0C 00178FEC  83 81 00 10 */	lwz r28, 0x10(r1)
/* 8017BF10 00178FF0  7C 08 03 A6 */	mtlr r0
/* 8017BF14 00178FF4  38 21 00 20 */	addi r1, r1, 0x20
/* 8017BF18 00178FF8  4E 80 00 20 */	blr
.endfn "load_param<i,i>__10auto_tweakFRiiiiP16xModelAssetParamUiPCc"

# auto_tweak::load_param<xVec3, int>(xVec3&, int, int, int, xModelAssetParam*, unsigned int, const char*)
.fn "load_param<5xVec3,i>__10auto_tweakFR5xVec3iiiP16xModelAssetParamUiPCc", local
/* 8017BF1C 00178FFC  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 8017BF20 00179000  7C 08 02 A6 */	mflr r0
/* 8017BF24 00179004  7C 6A 1B 78 */	mr r10, r3
/* 8017BF28 00179008  7D 04 43 78 */	mr r4, r8
/* 8017BF2C 0017900C  90 01 00 24 */	stw r0, 0x24(r1)
/* 8017BF30 00179010  38 C1 00 08 */	addi r6, r1, 0x8
/* 8017BF34 00179014  80 A3 00 00 */	lwz r5, 0x0(r3)
/* 8017BF38 00179018  80 03 00 04 */	lwz r0, 0x4(r3)
/* 8017BF3C 0017901C  7C E3 3B 78 */	mr r3, r7
/* 8017BF40 00179020  7D 47 53 78 */	mr r7, r10
/* 8017BF44 00179024  90 A1 00 08 */	stw r5, 0x8(r1)
/* 8017BF48 00179028  7D 25 4B 78 */	mr r5, r9
/* 8017BF4C 0017902C  90 01 00 0C */	stw r0, 0xc(r1)
/* 8017BF50 00179030  80 0A 00 08 */	lwz r0, 0x8(r10)
/* 8017BF54 00179034  90 01 00 10 */	stw r0, 0x10(r1)
/* 8017BF58 00179038  4B ED A2 B5 */	bl zParamGetVector__FP16xModelAssetParamUiPCc5xVec3P5xVec3
/* 8017BF5C 0017903C  80 01 00 24 */	lwz r0, 0x24(r1)
/* 8017BF60 00179040  7C 08 03 A6 */	mtlr r0
/* 8017BF64 00179044  38 21 00 20 */	addi r1, r1, 0x20
/* 8017BF68 00179048  4E 80 00 20 */	blr
.endfn "load_param<5xVec3,i>__10auto_tweakFR5xVec3iiiP16xModelAssetParamUiPCc"

# auto_tweak::load_param<float, float>(float&, float, float, float, xModelAssetParam*, unsigned int, const char*)
.fn "load_param<f,f>__10auto_tweakFRffffP16xModelAssetParamUiPCc", local
/* 8017BF6C 0017904C  94 21 FF C0 */	stwu r1, -0x40(r1)
/* 8017BF70 00179050  7C 08 02 A6 */	mflr r0
/* 8017BF74 00179054  90 01 00 44 */	stw r0, 0x44(r1)
/* 8017BF78 00179058  DB E1 00 30 */	stfd f31, 0x30(r1)
/* 8017BF7C 0017905C  F3 E1 00 38 */	psq_st f31, 0x38(r1), 0, qr0
/* 8017BF80 00179060  DB C1 00 20 */	stfd f30, 0x20(r1)
/* 8017BF84 00179064  F3 C1 00 28 */	psq_st f30, 0x28(r1), 0, qr0
/* 8017BF88 00179068  DB A1 00 10 */	stfd f29, 0x10(r1)
/* 8017BF8C 0017906C  F3 A1 00 18 */	psq_st f29, 0x18(r1), 0, qr0
/* 8017BF90 00179070  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8017BF94 00179074  FF A0 08 90 */	fmr f29, f1
/* 8017BF98 00179078  C0 23 00 00 */	lfs f1, 0x0(r3)
/* 8017BF9C 0017907C  FF C0 10 90 */	fmr f30, f2
/* 8017BFA0 00179080  7C 7F 1B 78 */	mr r31, r3
/* 8017BFA4 00179084  7C 83 23 78 */	mr r3, r4
/* 8017BFA8 00179088  7C A4 2B 78 */	mr r4, r5
/* 8017BFAC 0017908C  FF E0 18 90 */	fmr f31, f3
/* 8017BFB0 00179090  7C C5 33 78 */	mr r5, r6
/* 8017BFB4 00179094  4B ED A0 B5 */	bl zParamGetFloat__FP16xModelAssetParamUiPCcf
/* 8017BFB8 00179098  D0 3F 00 00 */	stfs f1, 0x0(r31)
/* 8017BFBC 0017909C  C0 1F 00 00 */	lfs f0, 0x0(r31)
/* 8017BFC0 001790A0  FC 00 F0 40 */	fcmpo cr0, f0, f30
/* 8017BFC4 001790A4  40 80 00 0C */	bge .L_8017BFD0
/* 8017BFC8 001790A8  D3 DF 00 00 */	stfs f30, 0x0(r31)
/* 8017BFCC 001790AC  48 00 00 10 */	b .L_8017BFDC
.L_8017BFD0:
/* 8017BFD0 001790B0  FC 00 F8 40 */	fcmpo cr0, f0, f31
/* 8017BFD4 001790B4  40 81 00 08 */	ble .L_8017BFDC
/* 8017BFD8 001790B8  D3 FF 00 00 */	stfs f31, 0x0(r31)
.L_8017BFDC:
/* 8017BFDC 001790BC  C0 1F 00 00 */	lfs f0, 0x0(r31)
/* 8017BFE0 001790C0  EC 00 07 72 */	fmuls f0, f0, f29
/* 8017BFE4 001790C4  D0 1F 00 00 */	stfs f0, 0x0(r31)
/* 8017BFE8 001790C8  E3 E1 00 38 */	psq_l f31, 0x38(r1), 0, qr0
/* 8017BFEC 001790CC  CB E1 00 30 */	lfd f31, 0x30(r1)
/* 8017BFF0 001790D0  E3 C1 00 28 */	psq_l f30, 0x28(r1), 0, qr0
/* 8017BFF4 001790D4  CB C1 00 20 */	lfd f30, 0x20(r1)
/* 8017BFF8 001790D8  E3 A1 00 18 */	psq_l f29, 0x18(r1), 0, qr0
/* 8017BFFC 001790DC  CB A1 00 10 */	lfd f29, 0x10(r1)
/* 8017C000 001790E0  80 01 00 44 */	lwz r0, 0x44(r1)
/* 8017C004 001790E4  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8017C008 001790E8  7C 08 03 A6 */	mtlr r0
/* 8017C00C 001790EC  38 21 00 40 */	addi r1, r1, 0x40
/* 8017C010 001790F0  4E 80 00 20 */	blr
.endfn "load_param<f,f>__10auto_tweakFRffffP16xModelAssetParamUiPCc"

# 0x8017C014 - 0x8017C078
.section .text, "ax", unique, 7
.balign 4

# xMat3x3RMulVec(xVec3*, const xMat3x3*, const xVec3*)
.fn xMat3x3RMulVec__FP5xVec3PC7xMat3x3PC5xVec3, local
/* 8017C014 001790F4  C0 65 00 04 */	lfs f3, 0x4(r5)
/* 8017C018 001790F8  C0 04 00 10 */	lfs f0, 0x10(r4)
/* 8017C01C 001790FC  C0 44 00 14 */	lfs f2, 0x14(r4)
/* 8017C020 00179100  EC 00 00 F2 */	fmuls f0, f0, f3
/* 8017C024 00179104  C0 C5 00 00 */	lfs f6, 0x0(r5)
/* 8017C028 00179108  C0 24 00 00 */	lfs f1, 0x0(r4)
/* 8017C02C 0017910C  EC 82 00 F2 */	fmuls f4, f2, f3
/* 8017C030 00179110  C0 44 00 18 */	lfs f2, 0x18(r4)
/* 8017C034 00179114  C0 A4 00 04 */	lfs f5, 0x4(r4)
/* 8017C038 00179118  EC 01 01 BA */	fmadds f0, f1, f6, f0
/* 8017C03C 0017911C  C0 E5 00 08 */	lfs f7, 0x8(r5)
/* 8017C040 00179120  C0 24 00 20 */	lfs f1, 0x20(r4)
/* 8017C044 00179124  EC 42 00 F2 */	fmuls f2, f2, f3
/* 8017C048 00179128  C0 64 00 08 */	lfs f3, 0x8(r4)
/* 8017C04C 0017912C  EC 85 21 BA */	fmadds f4, f5, f6, f4
/* 8017C050 00179130  EC 01 01 FA */	fmadds f0, f1, f7, f0
/* 8017C054 00179134  C0 A4 00 24 */	lfs f5, 0x24(r4)
/* 8017C058 00179138  EC 23 11 BA */	fmadds f1, f3, f6, f2
/* 8017C05C 0017913C  C0 44 00 28 */	lfs f2, 0x28(r4)
/* 8017C060 00179140  EC 65 21 FA */	fmadds f3, f5, f7, f4
/* 8017C064 00179144  D0 03 00 00 */	stfs f0, 0x0(r3)
/* 8017C068 00179148  EC 02 09 FA */	fmadds f0, f2, f7, f1
/* 8017C06C 0017914C  D0 63 00 04 */	stfs f3, 0x4(r3)
/* 8017C070 00179150  D0 03 00 08 */	stfs f0, 0x8(r3)
/* 8017C074 00179154  4E 80 00 20 */	blr
.endfn xMat3x3RMulVec__FP5xVec3PC7xMat3x3PC5xVec3

# 0x8017C078 - 0x8017C0A0
.section .text, "ax", unique, 8
.balign 4

# xSphereHitsCapsule(const xSphere&, const xVec3&, const xVec3&, float)
.fn xSphereHitsCapsule__FRC7xSphereRC5xVec3RC5xVec3f, weak
/* 8017C078 00179158  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8017C07C 0017915C  7C 08 02 A6 */	mflr r0
/* 8017C080 00179160  FC 40 08 90 */	fmr f2, f1
/* 8017C084 00179164  C0 23 00 0C */	lfs f1, 0xc(r3)
/* 8017C088 00179168  90 01 00 14 */	stw r0, 0x14(r1)
/* 8017C08C 0017916C  4B E9 85 09 */	bl xSphereHitsCapsule__FRC5xVec3fRC5xVec3RC5xVec3f
/* 8017C090 00179170  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8017C094 00179174  7C 08 03 A6 */	mtlr r0
/* 8017C098 00179178  38 21 00 10 */	addi r1, r1, 0x10
/* 8017C09C 0017917C  4E 80 00 20 */	blr
.endfn xSphereHitsCapsule__FRC7xSphereRC5xVec3RC5xVec3f

# 0x80271E58 - 0x80272C40
.rodata
.balign 8

# @unnamed@zNPCTypeDutchman_cpp@::sequence
.obj "sequence__30@unnamed@zNPCTypeDutchman_cpp@", local
	.4byte 0x4E474D3F
	.4byte 0x3F800000
	.4byte 0x4E474D43
	.4byte 0x00000000
	.4byte 0x4E474D40
	.4byte 0x00000000
.L_80271E70:
	.4byte 0x4E474D43
	.4byte 0x00000000
	.4byte 0x4E474D3F
	.4byte 0x3F800000
	.4byte 0x4E474D44
	.4byte 0x00000000
	.4byte 0x4E474D3F
	.4byte 0x3DCCCCCD
.L_80271E90:
	.4byte 0x4E474D45
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0xBF800000
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
.L_80271ED0:
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x4E474D3F
	.4byte 0x3F800000
	.4byte 0x4E474D43
	.4byte 0x00000000
	.4byte 0x4E474D40
	.4byte 0x00000000
	.4byte 0x4E474D43
	.4byte 0x00000000
	.4byte 0x4E474D40
	.4byte 0x00000000
	.4byte 0x4E474D43
	.4byte 0x00000000
	.4byte 0x4E474D3F
	.4byte 0x3F800000
	.4byte 0x4E474D44
	.4byte 0x00000000
	.4byte 0x4E474D3F
	.4byte 0x3DCCCCCD
	.4byte 0x4E474D45
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0xBF800000
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
	.4byte 0x4E474D3F
	.4byte 0x3F800000
	.4byte 0x4E474D43
	.4byte 0x00000000
	.4byte 0x4E474D40
	.4byte 0x00000000
	.4byte 0x4E474D43
	.4byte 0x00000000
	.4byte 0x4E474D40
	.4byte 0x00000000
	.4byte 0x4E474D43
	.4byte 0x00000000
	.4byte 0x4E474D40
	.4byte 0x00000000
	.4byte 0x4E474D43
	.4byte 0x00000000
	.4byte 0x4E474D3F
	.4byte 0x3F800000
	.4byte 0x4E474D44
	.4byte 0x00000000
	.4byte 0x4E474D3F
	.4byte 0x3DCCCCCD
	.4byte 0x4E474D45
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0xBF800000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
.endobj "sequence__30@unnamed@zNPCTypeDutchman_cpp@"

# @unnamed@zNPCTypeDutchman_cpp@::burn_ribbon_curve
.obj "burn_ribbon_curve__30@unnamed@zNPCTypeDutchman_cpp@", local
	.4byte 0x00000000
	.4byte 0xFFFFFFFF
	.4byte 0x3ECCCCCD
	.4byte 0x3D4CCCCD
	.4byte 0xFFFF9BFF
	.4byte 0x3E4CCCCD
	.4byte 0x3E19999A
	.4byte 0xCD9B37FF
	.4byte 0x3E4CCCCD
	.4byte 0x3E99999A
	.4byte 0x9B3700FF
	.4byte 0x3E4CCCCD
	.4byte 0x3EE66666
	.4byte 0x370000FF
	.4byte 0x3E4CCCCD
	.4byte 0x3F266666
	.4byte 0x000000FF
	.4byte 0x3ECCCCCD
	.4byte 0x3F800000
	.4byte 0x00000000
	.4byte 0x3F19999A
.endobj "burn_ribbon_curve__30@unnamed@zNPCTypeDutchman_cpp@"

# @unnamed@zNPCTypeDutchman_cpp@::sound_assets
.obj "sound_assets__30@unnamed@zNPCTypeDutchman_cpp@", local
	.4byte "@stringBase0"
	.4byte 0x00000000
	.4byte 0x00000001
	.4byte "@stringBase0"+0x10
	.4byte 0x00000000
	.4byte 0x00000001
	.4byte "@stringBase0"+0x1E
	.4byte 0x00000000
	.4byte 0x00000001
	.4byte "@stringBase0"+0x2C
	.4byte 0x00000000
	.4byte 0x00000001
	.4byte "@stringBase0"+0x3A
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte "@stringBase0"+0x41
	.4byte 0x00000000
	.4byte 0x00000000
.endobj "sound_assets__30@unnamed@zNPCTypeDutchman_cpp@"

.obj "@1674", local
	.4byte 0x00000001
	.4byte 0x0000000B
	.4byte 0x00000004
	.4byte 0x00000005
	.4byte 0x00000006
	.4byte 0x0000000C
	.4byte 0x0000000D
	.4byte 0x0000000E
	.4byte 0x00000010
	.4byte 0x00000011
	.4byte 0x00000012
	.4byte 0x00000013
	.4byte 0x00000000
.endobj "@1674"

.obj "@2124", local
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
.endobj "@2124"

.obj "@2295", local
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
.endobj "@2295"

.obj "@2618", local
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
.endobj "@2618"

.obj "@2624", local
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
.endobj "@2624"

.obj "@2957", local
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
.endobj "@2957"

.obj "@3097", local
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
.endobj "@3097"

.obj "@stringBase0", local
	.4byte 0x46445F65
	.4byte 0x79656265
	.4byte 0x616D5F6C
	.4byte 0x6F6F7000
	.4byte 0x46445F66
	.4byte 0x6C616D65
	.4byte 0x5F6C6F6F
	.4byte 0x70004644
	.4byte 0x5F766170
	.4byte 0x6F725F6C
	.4byte 0x6F6F7000
	.4byte 0x46445F66
	.4byte 0x6C6F6174
	.4byte 0x5F6C6F6F
	.4byte 0x70004644
	.4byte 0x5F676173
	.4byte 0x0046445F
	.4byte 0x72657665
	.4byte 0x7274007A
	.4byte 0x4E504344
	.4byte 0x75746368
	.4byte 0x6D616E00
	.4byte 0x44757463
	.4byte 0x686D616E
	.4byte 0x204C6566
	.4byte 0x74204275
	.4byte 0x726E0044
	.4byte 0x75746368
	.4byte 0x6D616E20
	.4byte 0x52696768
	.4byte 0x74204275
.L_8027216C:
	.4byte 0x726E0066
	.4byte 0x785F7374
	.4byte 0x7265616B
	.4byte 0x31006C61
	.4byte 0x7365725F
	.4byte 0x6265616D
	.4byte 0x5F776869
	.4byte 0x74655F62
	.4byte 0x6C756500
	.4byte 0x50415245
	.4byte 0x4D49545F
	.4byte 0x44555443
	.4byte 0x484D414E
	.4byte 0x5F504C41
	.4byte 0x534D4100
	.4byte 0x50415245
	.4byte 0x4D49545F
	.4byte 0x44555443
	.4byte 0x484D414E
	.4byte 0x5F535041
	.4byte 0x524B5300
	.4byte 0x50415245
	.4byte 0x4D49545F
	.4byte 0x44555443
	.4byte 0x484D414E
	.4byte 0x5F4C4947
	.4byte 0x48540050
	.4byte 0x4152454D
	.4byte 0x49545F44
	.4byte 0x55544348
	.4byte 0x4D414E5F
	.4byte 0x45594547
	.4byte 0x4C4F5730
	.4byte 0x00504152
	.4byte 0x454D4954
	.4byte 0x5F445554
	.4byte 0x43484D41
	.4byte 0x4E5F4559
	.4byte 0x45474C4F
	.4byte 0x57310050
	.4byte 0x4152454D
	.4byte 0x49545F44
	.4byte 0x55544348
	.4byte 0x4D414E5F
	.4byte 0x44454154
	.4byte 0x48005041
	.4byte 0x52454D49
	.4byte 0x545F4455
	.4byte 0x5443484D
	.4byte 0x414E5F44
	.4byte 0x4953534F
	.4byte 0x4C564500
	.4byte 0x50415245
	.4byte 0x4D49545F
	.4byte 0x44555443
	.4byte 0x484D414E
	.4byte 0x5F464144
	.4byte 0x454F5554
	.4byte 0x00504152
	.4byte 0x454D4954
	.4byte 0x5F445554
	.4byte 0x43484D41
	.4byte 0x4E5F4641
	.4byte 0x4445494E
	.4byte 0x00504152
	.4byte 0x454D4954
	.4byte 0x5F445554
	.4byte 0x43484D41
	.4byte 0x4E5F464C
	.4byte 0x414D455F
	.4byte 0x4C494748
	.4byte 0x54005041
	.4byte 0x52454D49
	.4byte 0x545F4455
	.4byte 0x5443484D
	.4byte 0x414E5F46
	.4byte 0x4C414D45
	.4byte 0x5F4E4F52
	.4byte 0x4D414C00
	.4byte 0x50415245
	.4byte 0x4D49545F
	.4byte 0x44555443
	.4byte 0x484D414E
	.4byte 0x5F464C41
	.4byte 0x4D455F53
	.4byte 0x50524159
	.4byte 0x00504152
	.4byte 0x454D4954
	.4byte 0x5F445554
	.4byte 0x43484D41
	.4byte 0x4E5F464C
	.4byte 0x414D455F
	.4byte 0x534E4F54
	.4byte 0x00504152
	.4byte 0x454D4954
	.4byte 0x5F445554
	.4byte 0x43484D41
	.4byte 0x4E5F534C
	.4byte 0x494D455F
	.4byte 0x54524149
	.4byte 0x4C005041
	.4byte 0x52454D49
	.4byte 0x545F4455
	.4byte 0x5443484D
	.4byte 0x414E5F48
	.4byte 0x414E445F
	.4byte 0x54524149
	.4byte 0x4C005041
	.4byte 0x52454D49
	.4byte 0x545F4455
	.4byte 0x5443484D
	.4byte 0x414E5F42
	.4byte 0x4C4F4200
	.4byte 0x6F726269
	.4byte 0x745F7261
	.4byte 0x64697573
	.4byte 0x00616363
	.4byte 0x656C006D
	.4byte 0x61785F76
	.4byte 0x656C0074
	.4byte 0x75726E5F
	.4byte 0x61636365
	.4byte 0x6C007475
	.4byte 0x726E5F6D
	.4byte 0x61785F76
	.4byte 0x656C0067
	.4byte 0x726F756E
	.4byte 0x645F7900
	.4byte 0x67726F75
	.4byte 0x6E645F72
	.4byte 0x61646975
	.4byte 0x7300616C
	.4byte 0x70686100
	.4byte 0x73706565
	.4byte 0x645F6D75
	.4byte 0x6C745B30
	.4byte 0x5D007370
	.4byte 0x6565645F
	.4byte 0x6D756C74
	.4byte 0x5B315D00
	.4byte 0x73706565
	.4byte 0x645F6D75
	.4byte 0x6C745B32
	.4byte 0x5D007265
	.4byte 0x7469636C
	.4byte 0x655F7900
	.4byte 0x72657469
	.4byte 0x636C655F
	.4byte 0x72616469
	.4byte 0x75730068
	.4byte 0x616C6F2E
	.4byte 0x616C7068
	.4byte 0x61006861
	.4byte 0x6C6F2E73
	.4byte 0x63616C65
	.4byte 0x0068616C
	.4byte 0x6F2E796F
	.4byte 0x66667365
	.4byte 0x74006861
	.4byte 0x6C6F2E76
	.4byte 0x656C5F75
	.4byte 0x0068616C
	.4byte 0x6F2E7665
	.4byte 0x6C5F7600
	.4byte 0x696E6974
	.4byte 0x69617465
	.4byte 0x2E747572
	.4byte 0x6E5F7665
	.4byte 0x6C00696E
	.4byte 0x69746961
	.4byte 0x74652E74
	.4byte 0x75726E5F
	.4byte 0x61636365
	.4byte 0x6C00696E
	.4byte 0x69746961
	.4byte 0x74652E75
	.4byte 0x705F7665
	.4byte 0x6C006265
	.4byte 0x616D2E6B
	.4byte 0x6E6F636B
	.4byte 0x5F626163
	.4byte 0x6B006265
	.4byte 0x616D2E74
	.4byte 0x6869636B
	.4byte 0x6E657373
	.4byte 0x00626561
	.4byte 0x6D2E666F
	.4byte 0x6375735F
	.4byte 0x74696D65
	.4byte 0x00626561
	.4byte 0x6D2E7365
	.4byte 0x676D656E
	.4byte 0x745F7769
	.4byte 0x64746800
	.4byte 0x6265616D
	.4byte 0x2E616363
	.4byte 0x656C0062
	.4byte 0x65616D2E
	.4byte 0x6D61785F
	.4byte 0x76656C00
	.4byte 0x6265616D
	.4byte 0x2E737461
	.4byte 0x72745F64
.L_80272498:
	.4byte 0x69737400
	.4byte 0x6265616D
	.4byte 0x2E656E64
	.4byte 0x5F646973
	.4byte 0x74006265
	.4byte 0x616D2E77
	.4byte 0x6176655F
	.4byte 0x66726571
	.4byte 0x00626561
	.4byte 0x6D2E7761
	.4byte 0x76655F6D
	.4byte 0x696E0062
	.4byte 0x65616D2E
	.4byte 0x77617665
	.4byte 0x5F6D6178
	.4byte 0x00626561
	.4byte 0x6D2E6C69
	.4byte 0x6768745F
.L_802724E0:
	.4byte 0x72617465
	.4byte 0x00626561
	.4byte 0x6D2E676C
	.4byte 0x6F775F64
	.4byte 0x69737400
	.4byte 0x6265616D
	.4byte 0x2E73686F
	.4byte 0x74735B30
	.4byte 0x5D006265
	.4byte 0x616D2E73
	.4byte 0x686F7473
	.4byte 0x5B315D00
	.4byte 0x6265616D
	.4byte 0x2E73686F
	.4byte 0x74735B32
	.4byte 0x5D006265
	.4byte 0x616D2E66
	.4byte 0x6164655F
	.4byte 0x64697374
	.4byte 0x0074656C
	.4byte 0x65706F72
	.4byte 0x742E6163
	.4byte 0x63656C00
	.4byte 0x74656C65
	.4byte 0x706F7274
	.4byte 0x2E6D6178
	.4byte 0x5F76656C
	.4byte 0x0074656C
	.4byte 0x65706F72
	.4byte 0x742E7475
	.4byte 0x726E5F61
	.4byte 0x6363656C
	.4byte 0x0074656C
	.4byte 0x65706F72
	.4byte 0x742E7475
	.4byte 0x726E5F6D
	.4byte 0x61785F76
	.4byte 0x656C0074
	.4byte 0x656C6570
	.4byte 0x6F72742E
	.4byte 0x66616465
	.4byte 0x5F74696D
	.4byte 0x65007465
	.4byte 0x6C65706F
	.4byte 0x72742E74
	.4byte 0x7261696C
	.4byte 0x5F776964
	.4byte 0x74680066
	.4byte 0x6C616D65
	.4byte 0x2E616363
	.4byte 0x656C0066
	.4byte 0x6C616D65
	.4byte 0x2E6D6178
	.4byte 0x5F76656C
	.4byte 0x00666C61
	.4byte 0x6D652E73
	.4byte 0x74617274
	.4byte 0x5F64656C
	.4byte 0x61790066
	.4byte 0x6C616D65
	.4byte 0x2E776176
	.4byte 0x655F7261
	.4byte 0x74650066
	.4byte 0x6C616D65
	.4byte 0x2E756E69
	.4byte 0x745F6469
	.4byte 0x73740066
	.4byte 0x6C616D65
	.4byte 0x2E737461
	.4byte 0x72745F64
	.4byte 0x69737400
	.4byte 0x666C616D
	.4byte 0x652E6C65
	.4byte 0x61645F64
	.4byte 0x69737400
	.4byte 0x666C616D
	.4byte 0x652E656D
	.4byte 0x69745F72
	.4byte 0x6174655B
	.4byte 0x305D0066
	.4byte 0x6C616D65
	.4byte 0x2E656D69
	.4byte 0x745F7261
	.4byte 0x74655B31
	.4byte 0x5D00666C
	.4byte 0x616D652E
	.4byte 0x656D6974
	.4byte 0x5F726174
	.4byte 0x655B325D
	.4byte 0x00666C61
	.4byte 0x6D652E65
	.4byte 0x6D69745F
	.4byte 0x77696474
	.4byte 0x685B305D
	.4byte 0x00666C61
	.4byte 0x6D652E65
	.4byte 0x6D69745F
	.4byte 0x77696474
	.4byte 0x685B315D
	.4byte 0x00666C61
	.4byte 0x6D652E65
	.4byte 0x6D69745F
	.4byte 0x77696474
	.4byte 0x685B325D
	.4byte 0x00666C61
	.4byte 0x6D652E73
	.4byte 0x6E6F745F
	.4byte 0x64697374
	.4byte 0x00666C61
	.4byte 0x6D652E73
	.4byte 0x6E6F745F
	.4byte 0x76656C00
	.4byte 0x666C616D
	.4byte 0x652E736E
	.4byte 0x6F745F68
	.4byte 0x65696768
.L_802726B0:
	.4byte 0x7400666C
	.4byte 0x616D652E
	.4byte 0x73706C61
	.4byte 0x73685F77
	.4byte 0x69647468
	.4byte 0x00666C61
	.4byte 0x6D652E64
	.4byte 0x65636179
	.4byte 0x00666C61
	.4byte 0x6D652E62
.L_802726D8:
	.4byte 0x6C6F625F
	.4byte 0x70697463
	.4byte 0x6800666C
	.4byte 0x616D652E
	.4byte 0x73707261
	.4byte 0x795F7769
	.4byte 0x64746800
	.4byte 0x666C616D
	.4byte 0x652E7761
.L_802726FC:
	.4byte 0x726D5F75
	.4byte 0x705F7469
	.4byte 0x6D650066
	.4byte 0x6C616D65
	.4byte 0x2E736E65
	.4byte 0x657A655F
	.4byte 0x6D756C74
	.4byte 0x006C6173
	.4byte 0x736F2E6D
	.4byte 0x696E5F64
	.4byte 0x6973745F
	.4byte 0x656E6162
	.4byte 0x6C65006C
.L_80272730:
	.4byte 0x6173736F
	.4byte 0x2E6D696E
	.4byte 0x5F646973
	.4byte 0x745F6469
	.4byte 0x7361626C
	.4byte 0x65006C61
	.4byte 0x73736F2E
	.4byte 0x6D61785F
	.4byte 0x616E676C
	.4byte 0x655F656E
	.4byte 0x61626C65
	.4byte 0x006C6173
	.4byte 0x736F2E6D
	.4byte 0x61785F61
	.4byte 0x6E676C65
	.4byte 0x5F646973
	.4byte 0x61626C65
	.4byte 0x006C6173
	.4byte 0x736F2E73
	.4byte 0x61666574
	.4byte 0x795F6469
	.4byte 0x7374006C
	.4byte 0x6173736F
	.4byte 0x2E646563
	.4byte 0x656C006C
	.4byte 0x6173736F
	.4byte 0x2E657363
	.4byte 0x6170655F
	.4byte 0x64656C61
	.4byte 0x79006461
	.4byte 0x6D616765
	.4byte 0x2E626561
	.4byte 0x6D5F7261
	.4byte 0x64697573
	.4byte 0x0064616D
	.4byte 0x6167652E
	.4byte 0x6265616D
	.4byte 0x5F626C61
	.4byte 0x73745F72
	.4byte 0x61646975
	.4byte 0x73006461
	.4byte 0x6D616765
	.4byte 0x2E666C61
	.4byte 0x6D655F73
	.4byte 0x697A6500
	.4byte 0x64616D61
	.4byte 0x67652E73
	.4byte 0x6E6F745F
.L_802727F0:
	.4byte 0x73697A65
.L_802727F4:
	.4byte 0x0064616D
	.4byte 0x6167652E
	.4byte 0x68616E64
	.4byte 0x5F726164
	.4byte 0x69757300
	.4byte 0x64616D61
	.4byte 0x67652E73
	.4byte 0x6C696D65
	.4byte 0x5F776964
	.4byte 0x74680064
	.4byte 0x616D6167
	.4byte 0x652E736C
	.4byte 0x696D655F
	.4byte 0x74696D65
	.4byte 0x00776970
	.4byte 0x652E6465
	.4byte 0x6C617900
	.4byte 0x77697065
	.4byte 0x2E647572
	.4byte 0x6174696F
	.4byte 0x6E007769
	.4byte 0x70652E72
	.4byte 0x6174655F
	.4byte 0x6D756C74
	.4byte 0x00776970
	.4byte 0x652E796F
	.4byte 0x66667365
	.4byte 0x74006465
	.4byte 0x6174682E
	.4byte 0x77696E64
	.4byte 0x5F647572
	.4byte 0x6174696F
	.4byte 0x6E006465
	.4byte 0x6174682E
	.4byte 0x77696E6B
	.4byte 0x5F647572
	.4byte 0x6174696F
	.4byte 0x6E006465
	.4byte 0x6174682E
	.4byte 0x73746172
	.4byte 0x745F7900
	.4byte 0x64656174
	.4byte 0x682E656E
	.4byte 0x645F7900
	.4byte 0x64656174
	.4byte 0x682E7769
	.4byte 0x6E645F6D
	.4byte 0x696E0064
	.4byte 0x65617468
	.4byte 0x2E77696E
	.4byte 0x645F6B69
	.4byte 0x6C6C5F64
	.4byte 0x69737400
	.4byte 0x64656174
	.4byte 0x682E7769
	.4byte 0x6E645F6D
	.4byte 0x61675F75
	.4byte 0x70006465
	.4byte 0x6174682E
	.4byte 0x77696E64
	.4byte 0x5F6D6167
	.4byte 0x5F726967
	.4byte 0x68740073
	.4byte 0x6F756E64
	.4byte 0x5B534F55
	.4byte 0x4E445F42
.L_802728FC:
	.4byte 0x45414D5D
	.4byte 0x2E766F6C
	.4byte 0x756D6500
	.4byte 0x736F756E
	.4byte 0x645B534F
	.4byte 0x554E445F
	.4byte 0x4245414D
	.4byte 0x5D2E7261
	.4byte 0x6E67655F
	.4byte 0x696E6E65
	.4byte 0x7200736F
	.4byte 0x756E645B
	.4byte 0x534F554E
	.4byte 0x445F4245
	.4byte 0x414D5D2E
	.4byte 0x72616E67
	.4byte 0x655F6F75
	.4byte 0x74657200
	.4byte 0x736F756E
	.4byte 0x645B534F
	.4byte 0x554E445F
	.4byte 0x4245414D
	.4byte 0x5D2E6465
	.4byte 0x6C617900
	.4byte 0x736F756E
	.4byte 0x645B534F
	.4byte 0x554E445F
	.4byte 0x4245414D
	.4byte 0x5D2E6661
	.4byte 0x64655F74
	.4byte 0x696D6500
	.4byte 0x736F756E
.L_8027297C:
	.4byte 0x645B534F
.L_80272980:
	.4byte 0x554E445F
	.4byte 0x464C414D
	.4byte 0x455D2E76
	.4byte 0x6F6C756D
	.4byte 0x6500736F
	.4byte 0x756E645B
	.4byte 0x534F554E
.L_8027299C:
	.4byte 0x445F464C
	.4byte 0x414D455D
	.4byte 0x2E72616E
	.4byte 0x67655F69
	.4byte 0x6E6E6572
	.4byte 0x00736F75
	.4byte 0x6E645B53
	.4byte 0x4F554E44
.L_802729BC:
	.4byte 0x5F464C41
	.4byte 0x4D455D2E
	.4byte 0x72616E67
	.4byte 0x655F6F75
	.4byte 0x74657200
.L_802729D0:
	.4byte 0x736F756E
	.4byte 0x645B534F
	.4byte 0x554E445F
	.4byte 0x464C414D
	.4byte 0x455D2E64
	.4byte 0x656C6179
	.4byte 0x00736F75
	.4byte 0x6E645B53
	.4byte 0x4F554E44
	.4byte 0x5F464C41
	.4byte 0x4D455D2E
	.4byte 0x66616465
	.4byte 0x5F74696D
	.4byte 0x6500736F
	.4byte 0x756E645B
	.4byte 0x534F554E
	.4byte 0x445F5641
	.4byte 0x504F525D
	.4byte 0x2E766F6C
	.4byte 0x756D6500
	.4byte 0x736F756E
	.4byte 0x645B534F
	.4byte 0x554E445F
	.4byte 0x5641504F
	.4byte 0x525D2E72
	.4byte 0x616E6765
	.4byte 0x5F696E6E
	.4byte 0x65720073
	.4byte 0x6F756E64
	.4byte 0x5B534F55
	.4byte 0x4E445F56
	.4byte 0x41504F52
	.4byte 0x5D2E7261
	.4byte 0x6E67655F
	.4byte 0x6F757465
	.4byte 0x7200736F
	.4byte 0x756E645B
	.4byte 0x534F554E
	.4byte 0x445F5641
	.4byte 0x504F525D
	.4byte 0x2E64656C
	.4byte 0x61790073
	.4byte 0x6F756E64
	.4byte 0x5B534F55
	.4byte 0x4E445F56
	.4byte 0x41504F52
	.4byte 0x5D2E6661
	.4byte 0x64655F74
	.4byte 0x696D6500
	.4byte 0x736F756E
	.4byte 0x645B534F
	.4byte 0x554E445F
	.4byte 0x48494748
	.4byte 0x5F48554D
	.4byte 0x4D5D2E76
	.4byte 0x6F6C756D
	.4byte 0x6500736F
	.4byte 0x756E645B
	.4byte 0x534F554E
	.4byte 0x445F4849
	.4byte 0x47485F48
	.4byte 0x554D4D5D
	.4byte 0x2E72616E
	.4byte 0x67655F69
	.4byte 0x6E6E6572
	.4byte 0x00736F75
	.4byte 0x6E645B53
	.4byte 0x4F554E44
	.4byte 0x5F484947
	.4byte 0x485F4855
	.4byte 0x4D4D5D2E
.L_80272AEC:
	.4byte 0x72616E67
	.4byte 0x655F6F75
	.4byte 0x74657200
	.4byte 0x736F756E
	.4byte 0x645B534F
	.4byte 0x554E445F
	.4byte 0x48494748
	.4byte 0x5F48554D
	.4byte 0x4D5D2E64
	.4byte 0x656C6179
	.4byte 0x00736F75
	.4byte 0x6E645B53
	.4byte 0x4F554E44
	.4byte 0x5F484947
	.4byte 0x485F4855
	.4byte 0x4D4D5D2E
	.4byte 0x66616465
	.4byte 0x5F74696D
	.4byte 0x6500736F
	.4byte 0x756E645B
	.4byte 0x534F554E
	.4byte 0x445F4249
	.4byte 0x5A415252
	.4byte 0x455D2E76
	.4byte 0x6F6C756D
	.4byte 0x6500736F
	.4byte 0x756E645B
	.4byte 0x534F554E
	.4byte 0x445F4249
	.4byte 0x5A415252
	.4byte 0x455D2E72
	.4byte 0x616E6765
	.4byte 0x5F696E6E
	.4byte 0x65720073
	.4byte 0x6F756E64
	.4byte 0x5B534F55
	.4byte 0x4E445F42
	.4byte 0x495A4152
	.4byte 0x52455D2E
	.4byte 0x72616E67
	.4byte 0x655F6F75
	.4byte 0x74657200
	.4byte 0x736F756E
	.4byte 0x645B534F
	.4byte 0x554E445F
	.4byte 0x42495A41
	.4byte 0x5252455D
	.4byte 0x2E64656C
	.4byte 0x61790073
	.4byte 0x6F756E64
	.4byte 0x5B534F55
	.4byte 0x4E445F4D
	.4byte 0x4F52455F
	.4byte 0x42495A41
	.4byte 0x5252455D
	.4byte 0x2E766F6C
	.4byte 0x756D6500
	.4byte 0x736F756E
	.4byte 0x645B534F
	.4byte 0x554E445F
	.4byte 0x4D4F5245
	.4byte 0x5F42495A
	.4byte 0x41525245
	.4byte 0x5D2E7261
	.4byte 0x6E67655F
	.4byte 0x696E6E65
	.4byte 0x7200736F
	.4byte 0x756E645B
	.4byte 0x534F554E
	.4byte 0x445F4D4F
.L_80272C04:
	.4byte 0x52455F42
	.4byte 0x495A4152
	.4byte 0x52455D2E
	.4byte 0x72616E67
	.4byte 0x655F6F75
	.4byte 0x74657200
	.4byte 0x736F756E
	.4byte 0x645B534F
	.4byte 0x554E445F
	.4byte 0x4D4F5245
	.4byte 0x5F42495A
	.4byte 0x41525245
	.4byte 0x5D2E6465
	.4byte 0x6C617900
.endobj "@stringBase0"
	.4byte 0x00000000

# 0x8029B460 - 0x8029B830
.data
.balign 8

# @unnamed@zNPCTypeDutchman_cpp@::boss_cam
.obj "boss_cam__30@unnamed@zNPCTypeDutchman_cpp@", local
	.4byte 0x40C00000
.L_8029B464:
	.4byte 0x40400000
.L_8029B468:
	.4byte 0x40000000
	.4byte 0x3E4CCCCD
	.4byte 0x400CCCCD
	.4byte 0xBF800000
	.4byte 0x3F800000
	.4byte 0x3E4CCCCD
	.4byte 0x3FC00000
.L_8029B484:
	.4byte 0x41200000
.L_8029B488:
	.4byte 0x41200000
.L_8029B48C:
	.4byte 0x41200000
.L_8029B490:
	.4byte 0x41200000
.L_8029B494:
	.4byte 0x41F00000
	.4byte 0xBE32B8C2
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
.endobj "boss_cam__30@unnamed@zNPCTypeDutchman_cpp@"

.obj "@2074", local
	.rel AnimPick__12zNPCDutchmanFi16en_NPC_GOAL_SPOTP5xGoal, .L_80175570
	.rel AnimPick__12zNPCDutchmanFi16en_NPC_GOAL_SPOTP5xGoal, .L_80175578
	.rel AnimPick__12zNPCDutchmanFi16en_NPC_GOAL_SPOTP5xGoal, .L_80175578
	.rel AnimPick__12zNPCDutchmanFi16en_NPC_GOAL_SPOTP5xGoal, .L_80175578
	.rel AnimPick__12zNPCDutchmanFi16en_NPC_GOAL_SPOTP5xGoal, .L_80175578
	.rel AnimPick__12zNPCDutchmanFi16en_NPC_GOAL_SPOTP5xGoal, .L_80175580
	.rel AnimPick__12zNPCDutchmanFi16en_NPC_GOAL_SPOTP5xGoal, .L_80175588
	.rel AnimPick__12zNPCDutchmanFi16en_NPC_GOAL_SPOTP5xGoal, .L_80175590
	.rel AnimPick__12zNPCDutchmanFi16en_NPC_GOAL_SPOTP5xGoal, .L_80175598
	.rel AnimPick__12zNPCDutchmanFi16en_NPC_GOAL_SPOTP5xGoal, .L_801755B4
	.rel AnimPick__12zNPCDutchmanFi16en_NPC_GOAL_SPOTP5xGoal, .L_80175570
	.rel AnimPick__12zNPCDutchmanFi16en_NPC_GOAL_SPOTP5xGoal, .L_80175570
.endobj "@2074"

# zNPCGoalDutchmanDeath::__vtable
.obj __vt__21zNPCGoalDutchmanDeath, global
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte Clear__14zNPCGoalCommonFv
	.4byte Enter__21zNPCGoalDutchmanDeathFfPv
	.4byte Exit__21zNPCGoalDutchmanDeathFfPv
	.4byte Suspend__5xGoalFfPv
	.4byte Resume__14zNPCGoalCommonFfPv
	.4byte PreCalc__14zNPCGoalCommonFfPv
	.4byte EvalRules__5xGoalFP11en_trantypefPv
	.4byte Process__21zNPCGoalDutchmanDeathFP11en_trantypefPvP6xScene
	.4byte SysEvent__5xGoalFP5xBaseP5xBaseUiPCfP5xBasePi
	.4byte NPCMessage__14zNPCGoalCommonFP6NPCMsg
	.4byte CollReview__14zNPCGoalCommonFPv
.endobj __vt__21zNPCGoalDutchmanDeath

# zNPCGoalDutchmanDamage::__vtable
.obj __vt__22zNPCGoalDutchmanDamage, global
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte Clear__14zNPCGoalCommonFv
	.4byte Enter__22zNPCGoalDutchmanDamageFfPv
	.4byte Exit__22zNPCGoalDutchmanDamageFfPv
	.4byte Suspend__5xGoalFfPv
	.4byte Resume__14zNPCGoalCommonFfPv
	.4byte PreCalc__14zNPCGoalCommonFfPv
	.4byte EvalRules__5xGoalFP11en_trantypefPv
	.4byte Process__22zNPCGoalDutchmanDamageFP11en_trantypefPvP6xScene
	.4byte SysEvent__5xGoalFP5xBaseP5xBaseUiPCfP5xBasePi
	.4byte NPCMessage__14zNPCGoalCommonFP6NPCMsg
	.4byte CollReview__14zNPCGoalCommonFPv
.endobj __vt__22zNPCGoalDutchmanDamage

# zNPCGoalDutchmanCaught::__vtable
.obj __vt__22zNPCGoalDutchmanCaught, global
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte Clear__14zNPCGoalCommonFv
	.4byte Enter__22zNPCGoalDutchmanCaughtFfPv
	.4byte Exit__22zNPCGoalDutchmanCaughtFfPv
	.4byte Suspend__5xGoalFfPv
	.4byte Resume__14zNPCGoalCommonFfPv
	.4byte PreCalc__14zNPCGoalCommonFfPv
	.4byte EvalRules__5xGoalFP11en_trantypefPv
	.4byte Process__22zNPCGoalDutchmanCaughtFP11en_trantypefPvP6xScene
	.4byte SysEvent__5xGoalFP5xBaseP5xBaseUiPCfP5xBasePi
	.4byte NPCMessage__14zNPCGoalCommonFP6NPCMsg
	.4byte CollReview__14zNPCGoalCommonFPv
.endobj __vt__22zNPCGoalDutchmanCaught

# zNPCGoalDutchmanPostFlame::__vtable
.obj __vt__25zNPCGoalDutchmanPostFlame, global
	.4byte 0x00000000
	.4byte 0x00000000
.L_8029B598:
	.4byte Clear__14zNPCGoalCommonFv
	.4byte Enter__25zNPCGoalDutchmanPostFlameFfPv
	.4byte Exit__25zNPCGoalDutchmanPostFlameFfPv
	.4byte Suspend__5xGoalFfPv
	.4byte Resume__14zNPCGoalCommonFfPv
	.4byte PreCalc__14zNPCGoalCommonFfPv
	.4byte EvalRules__5xGoalFP11en_trantypefPv
	.4byte Process__25zNPCGoalDutchmanPostFlameFP11en_trantypefPvP6xScene
	.4byte SysEvent__5xGoalFP5xBaseP5xBaseUiPCfP5xBasePi
	.4byte NPCMessage__14zNPCGoalCommonFP6NPCMsg
	.4byte CollReview__14zNPCGoalCommonFPv
.endobj __vt__25zNPCGoalDutchmanPostFlame

# zNPCGoalDutchmanFlame::__vtable
.obj __vt__21zNPCGoalDutchmanFlame, global
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte Clear__14zNPCGoalCommonFv
	.4byte Enter__21zNPCGoalDutchmanFlameFfPv
	.4byte Exit__21zNPCGoalDutchmanFlameFfPv
	.4byte Suspend__5xGoalFfPv
	.4byte Resume__14zNPCGoalCommonFfPv
	.4byte PreCalc__14zNPCGoalCommonFfPv
	.4byte EvalRules__5xGoalFP11en_trantypefPv
	.4byte Process__21zNPCGoalDutchmanFlameFP11en_trantypefPvP6xScene
	.4byte SysEvent__5xGoalFP5xBaseP5xBaseUiPCfP5xBasePi
	.4byte NPCMessage__14zNPCGoalCommonFP6NPCMsg
	.4byte CollReview__14zNPCGoalCommonFPv
.endobj __vt__21zNPCGoalDutchmanFlame

# zNPCGoalDutchmanBeam::__vtable
.obj __vt__20zNPCGoalDutchmanBeam, global
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte Clear__14zNPCGoalCommonFv
	.4byte Enter__20zNPCGoalDutchmanBeamFfPv
	.4byte Exit__20zNPCGoalDutchmanBeamFfPv
	.4byte Suspend__5xGoalFfPv
	.4byte Resume__14zNPCGoalCommonFfPv
	.4byte PreCalc__14zNPCGoalCommonFfPv
	.4byte EvalRules__5xGoalFP11en_trantypefPv
	.4byte Process__20zNPCGoalDutchmanBeamFP11en_trantypefPvP6xScene
	.4byte SysEvent__5xGoalFP5xBaseP5xBaseUiPCfP5xBasePi
	.4byte NPCMessage__14zNPCGoalCommonFP6NPCMsg
	.4byte CollReview__14zNPCGoalCommonFPv
.endobj __vt__20zNPCGoalDutchmanBeam

# zNPCGoalDutchmanReappear::__vtable
.obj __vt__24zNPCGoalDutchmanReappear, global
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte Clear__14zNPCGoalCommonFv
	.4byte Enter__24zNPCGoalDutchmanReappearFfPv
	.4byte Exit__24zNPCGoalDutchmanReappearFfPv
	.4byte Suspend__5xGoalFfPv
	.4byte Resume__14zNPCGoalCommonFfPv
	.4byte PreCalc__14zNPCGoalCommonFfPv
	.4byte EvalRules__5xGoalFP11en_trantypefPv
	.4byte Process__24zNPCGoalDutchmanReappearFP11en_trantypefPvP6xScene
	.4byte SysEvent__5xGoalFP5xBaseP5xBaseUiPCfP5xBasePi
	.4byte NPCMessage__14zNPCGoalCommonFP6NPCMsg
	.4byte CollReview__14zNPCGoalCommonFPv
.endobj __vt__24zNPCGoalDutchmanReappear

# zNPCGoalDutchmanTeleport::__vtable
.obj __vt__24zNPCGoalDutchmanTeleport, global
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte Clear__14zNPCGoalCommonFv
	.4byte Enter__24zNPCGoalDutchmanTeleportFfPv
	.4byte Exit__24zNPCGoalDutchmanTeleportFfPv
	.4byte Suspend__5xGoalFfPv
	.4byte Resume__14zNPCGoalCommonFfPv
	.4byte PreCalc__14zNPCGoalCommonFfPv
	.4byte EvalRules__5xGoalFP11en_trantypefPv
	.4byte Process__24zNPCGoalDutchmanTeleportFP11en_trantypefPvP6xScene
	.4byte SysEvent__5xGoalFP5xBaseP5xBaseUiPCfP5xBasePi
	.4byte NPCMessage__14zNPCGoalCommonFP6NPCMsg
	.4byte CollReview__14zNPCGoalCommonFPv
.endobj __vt__24zNPCGoalDutchmanTeleport

# zNPCGoalDutchmanDisappear::__vtable
.obj __vt__25zNPCGoalDutchmanDisappear, global
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte Clear__14zNPCGoalCommonFv
	.4byte Enter__25zNPCGoalDutchmanDisappearFfPv
	.4byte Exit__25zNPCGoalDutchmanDisappearFfPv
	.4byte Suspend__5xGoalFfPv
	.4byte Resume__14zNPCGoalCommonFfPv
	.4byte PreCalc__14zNPCGoalCommonFfPv
	.4byte EvalRules__5xGoalFP11en_trantypefPv
	.4byte Process__25zNPCGoalDutchmanDisappearFP11en_trantypefPvP6xScene
	.4byte SysEvent__5xGoalFP5xBaseP5xBaseUiPCfP5xBasePi
	.4byte NPCMessage__14zNPCGoalCommonFP6NPCMsg
	.4byte CollReview__14zNPCGoalCommonFPv
.endobj __vt__25zNPCGoalDutchmanDisappear

# zNPCGoalDutchmanIdle::__vtable
.obj __vt__20zNPCGoalDutchmanIdle, global
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte Clear__14zNPCGoalCommonFv
	.4byte Enter__20zNPCGoalDutchmanIdleFfPv
	.4byte Exit__20zNPCGoalDutchmanIdleFfPv
	.4byte Suspend__5xGoalFfPv
	.4byte Resume__14zNPCGoalCommonFfPv
.L_8029B6E4:
	.4byte PreCalc__14zNPCGoalCommonFfPv
	.4byte EvalRules__5xGoalFP11en_trantypefPv
	.4byte Process__20zNPCGoalDutchmanIdleFP11en_trantypefPvP6xScene
	.4byte SysEvent__5xGoalFP5xBaseP5xBaseUiPCfP5xBasePi
	.4byte NPCMessage__14zNPCGoalCommonFP6NPCMsg
	.4byte CollReview__14zNPCGoalCommonFPv
.endobj __vt__20zNPCGoalDutchmanIdle

# zNPCGoalDutchmanInitiate::__vtable
.obj __vt__24zNPCGoalDutchmanInitiate, global
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte Clear__14zNPCGoalCommonFv
	.4byte Enter__24zNPCGoalDutchmanInitiateFfPv
	.4byte Exit__24zNPCGoalDutchmanInitiateFfPv
	.4byte Suspend__5xGoalFfPv
	.4byte Resume__14zNPCGoalCommonFfPv
	.4byte PreCalc__14zNPCGoalCommonFfPv
	.4byte EvalRules__5xGoalFP11en_trantypefPv
	.4byte Process__24zNPCGoalDutchmanInitiateFP11en_trantypefPvP6xScene
	.4byte SysEvent__5xGoalFP5xBaseP5xBaseUiPCfP5xBasePi
	.4byte NPCMessage__14zNPCGoalCommonFP6NPCMsg
	.4byte CollReview__14zNPCGoalCommonFPv
.endobj __vt__24zNPCGoalDutchmanInitiate

# zNPCGoalDutchmanNil::__vtable
.obj __vt__19zNPCGoalDutchmanNil, weak
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte Clear__14zNPCGoalCommonFv
	.4byte Enter__14zNPCGoalCommonFfPv
	.4byte Exit__5xGoalFfPv
	.4byte Suspend__5xGoalFfPv
	.4byte Resume__14zNPCGoalCommonFfPv
	.4byte PreCalc__14zNPCGoalCommonFfPv
	.4byte EvalRules__5xGoalFP11en_trantypefPv
	.4byte Process__5xGoalFP11en_trantypefPvP6xScene
	.4byte SysEvent__5xGoalFP5xBaseP5xBaseUiPCfP5xBasePi
	.4byte NPCMessage__14zNPCGoalCommonFP6NPCMsg
	.4byte CollReview__14zNPCGoalCommonFPv
.endobj __vt__19zNPCGoalDutchmanNil

# zNPCDutchman::__vtable
.obj __vt__12zNPCDutchman, global
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte Init__12zNPCDutchmanFP9xEntAsset
	.4byte PostInit__9xNPCBasicFv
	.4byte Setup__12zNPCDutchmanFv
	.4byte PostSetup__9xNPCBasicFv
	.4byte Reset__12zNPCDutchmanFv
	.4byte Process__12zNPCDutchmanFP6xScenef
	.4byte BUpdate__10zNPCCommonFP5xVec3
	.4byte NewTime__10zNPCCommonFP6xScenef
	.4byte Move__10zNPCCommonFP6xScenefP9xEntFrame
	.4byte SysEvent__12zNPCDutchmanFP5xBaseP5xBaseUiPCfP5xBasePi
	.4byte Render__12zNPCDutchmanFv
	.4byte Save__9xNPCBasicCFP7xSerial
	.4byte Load__9xNPCBasicFP7xSerial
	.4byte CollideReview__10zNPCCommonFv
	.4byte ColChkFlags__12zNPCDutchmanCFv
	.4byte ColPenFlags__12zNPCDutchmanCFv
	.4byte ColChkByFlags__12zNPCDutchmanCFv
	.4byte ColPenByFlags__12zNPCDutchmanCFv
	.4byte PhysicsFlags__12zNPCDutchmanCFv
	.4byte Destroy__12zNPCDutchmanFv
	.4byte NPCMessage__10zNPCCommonFP6NPCMsg
	.4byte RenderExtra__12zNPCDutchmanFv
	.4byte RenderExtraPostParticles__10zNPCCommonFv
	.4byte ParseINI__12zNPCDutchmanFv
	.4byte ParseLinks__10zNPCCommonFv
	.4byte ParseProps__10zNPCCommonFv
	.4byte SelfSetup__12zNPCDutchmanFv
	.4byte SelfDestroy__10zNPCCommonFv
	.4byte IsHealthy__10zNPCCommonFv
	.4byte IsAlive__12zNPCDutchmanFv
	.4byte Damage__12zNPCDutchmanF18en_NPC_DAMAGE_TYPEP5xBasePC5xVec3
	.4byte Respawn__10zNPCCommonFPC5xVec3P10zMovePointP10zMovePoint
	.4byte DuploOwner__10zNPCCommonFP10zNPCCommon
	.4byte DuploNotice__10zNPCCommonF13en_SM_NOTICESPv
	.4byte CanRope__10zNPCCommonFv
	.4byte LassoNotify__12zNPCDutchmanF14en_LASSO_EVENT
	.4byte SetCarryState__10zNPCCommonF18en_NPC_CARRY_STATE
	.4byte Stun__10zNPCCommonFf
	.4byte SpeakBegin__10zNPCCommonFv
	.4byte SpeakEnd__10zNPCCommonFv
	.4byte SpeakStart__10zNPCCommonFUiUii
	.4byte SpeakStop__10zNPCCommonFv
	.4byte AnimPick__12zNPCDutchmanFi16en_NPC_GOAL_SPOTP5xGoal
	.4byte GetParm__10zNPCCommonF10en_npcparmPv
	.4byte GetParmDefault__10zNPCCommonF10en_npcparmPv
	.4byte GenShadCacheRad__10zNPCCommonFv
	.4byte PRIV_GetDriverData__10zNPCCommonFv
	.4byte PRIV_GetLassoData__12zNPCDutchmanFv
	.4byte LassoSetup__12zNPCDutchmanFv
.endobj __vt__12zNPCDutchman

# 0x8032A578 - 0x8032B448
.section .bss, "wa", @nobits
.balign 8

# @unnamed@zNPCTypeDutchman_cpp@::tweak
.obj "tweak__30@unnamed@zNPCTypeDutchman_cpp@", local
.sym ...bss.0, local
	.skip 0x388
.endobj "tweak__30@unnamed@zNPCTypeDutchman_cpp@"

# @unnamed@zNPCTypeDutchman_cpp@::plasma_emitter_settings
.obj "plasma_emitter_settings__30@unnamed@zNPCTypeDutchman_cpp@", local
	.skip 0x16C
.endobj "plasma_emitter_settings__30@unnamed@zNPCTypeDutchman_cpp@"

# @unnamed@zNPCTypeDutchman_cpp@::spark_emitter_settings
.obj "spark_emitter_settings__30@unnamed@zNPCTypeDutchman_cpp@", local
	.skip 0x16C
.endobj "spark_emitter_settings__30@unnamed@zNPCTypeDutchman_cpp@"

# @unnamed@zNPCTypeDutchman_cpp@::light_emitter_settings
.obj "light_emitter_settings__30@unnamed@zNPCTypeDutchman_cpp@", local
	.skip 0x16C
.endobj "light_emitter_settings__30@unnamed@zNPCTypeDutchman_cpp@"

# @unnamed@zNPCTypeDutchman_cpp@::flame_emitter
.obj "flame_emitter__30@unnamed@zNPCTypeDutchman_cpp@", local
	.skip 0xC
.endobj "flame_emitter__30@unnamed@zNPCTypeDutchman_cpp@"

# @unnamed@zNPCTypeDutchman_cpp@::flame_emitter_settings
.obj "flame_emitter_settings__30@unnamed@zNPCTypeDutchman_cpp@", local
	.skip 0x16C
.endobj "flame_emitter_settings__30@unnamed@zNPCTypeDutchman_cpp@"

# @unnamed@zNPCTypeDutchman_cpp@::snot_emitter_settings
.obj "snot_emitter_settings__30@unnamed@zNPCTypeDutchman_cpp@", local
	.skip 0x16C
.endobj "snot_emitter_settings__30@unnamed@zNPCTypeDutchman_cpp@"

# @unnamed@zNPCTypeDutchman_cpp@::slime_emitter_settings
.obj "slime_emitter_settings__30@unnamed@zNPCTypeDutchman_cpp@", local
	.skip 0x16C
.endobj "slime_emitter_settings__30@unnamed@zNPCTypeDutchman_cpp@"

# @unnamed@zNPCTypeDutchman_cpp@::eye_scorch
.obj "eye_scorch__30@unnamed@zNPCTypeDutchman_cpp@", local
	.skip 0x280
.endobj "eye_scorch__30@unnamed@zNPCTypeDutchman_cpp@"

# @unnamed@zNPCTypeDutchman_cpp@::sound_data
.obj "sound_data__30@unnamed@zNPCTypeDutchman_cpp@", local
	.skip 0x30
.endobj "sound_data__30@unnamed@zNPCTypeDutchman_cpp@"
	.skip 0x4

# 0x803CC070 - 0x803CC0B0
.section .sbss, "wa", @nobits
.balign 8

# @unnamed@zNPCTypeDutchman_cpp@::plasma_emitter
.obj "plasma_emitter__30@unnamed@zNPCTypeDutchman_cpp@", local
	.skip 0x4
.endobj "plasma_emitter__30@unnamed@zNPCTypeDutchman_cpp@"

# @unnamed@zNPCTypeDutchman_cpp@::spark_emitter
.obj "spark_emitter__30@unnamed@zNPCTypeDutchman_cpp@", local
	.skip 0x4
.endobj "spark_emitter__30@unnamed@zNPCTypeDutchman_cpp@"

# @unnamed@zNPCTypeDutchman_cpp@::light_emitter
.obj "light_emitter__30@unnamed@zNPCTypeDutchman_cpp@", local
	.skip 0x4
.endobj "light_emitter__30@unnamed@zNPCTypeDutchman_cpp@"

# @unnamed@zNPCTypeDutchman_cpp@::eyeglow_emitter
.obj "eyeglow_emitter__30@unnamed@zNPCTypeDutchman_cpp@", local
	.skip 0x8
.endobj "eyeglow_emitter__30@unnamed@zNPCTypeDutchman_cpp@"

# @unnamed@zNPCTypeDutchman_cpp@::death_emitter
.obj "death_emitter__30@unnamed@zNPCTypeDutchman_cpp@", local
	.skip 0x4
.endobj "death_emitter__30@unnamed@zNPCTypeDutchman_cpp@"

# @unnamed@zNPCTypeDutchman_cpp@::dissolve_emitter
.obj "dissolve_emitter__30@unnamed@zNPCTypeDutchman_cpp@", local
	.skip 0x4
.endobj "dissolve_emitter__30@unnamed@zNPCTypeDutchman_cpp@"

# @unnamed@zNPCTypeDutchman_cpp@::fadeout_emitter
.obj "fadeout_emitter__30@unnamed@zNPCTypeDutchman_cpp@", local
	.skip 0x4
.endobj "fadeout_emitter__30@unnamed@zNPCTypeDutchman_cpp@"

# @unnamed@zNPCTypeDutchman_cpp@::fadein_emitter
.obj "fadein_emitter__30@unnamed@zNPCTypeDutchman_cpp@", local
	.skip 0x4
.endobj "fadein_emitter__30@unnamed@zNPCTypeDutchman_cpp@"

# @unnamed@zNPCTypeDutchman_cpp@::snot_emitter
.obj "snot_emitter__30@unnamed@zNPCTypeDutchman_cpp@", local
	.skip 0x4
.endobj "snot_emitter__30@unnamed@zNPCTypeDutchman_cpp@"

# @unnamed@zNPCTypeDutchman_cpp@::slime_emitter
.obj "slime_emitter__30@unnamed@zNPCTypeDutchman_cpp@", local
	.skip 0x4
.endobj "slime_emitter__30@unnamed@zNPCTypeDutchman_cpp@"

# @unnamed@zNPCTypeDutchman_cpp@::hand_trail_emitter
.obj "hand_trail_emitter__30@unnamed@zNPCTypeDutchman_cpp@", local
	.skip 0x4
.endobj "hand_trail_emitter__30@unnamed@zNPCTypeDutchman_cpp@"

# @unnamed@zNPCTypeDutchman_cpp@::blob_emitter
.obj "blob_emitter__30@unnamed@zNPCTypeDutchman_cpp@", local
	.skip 0x4
.endobj "blob_emitter__30@unnamed@zNPCTypeDutchman_cpp@"

.obj dutchman_reticle_ent, global
	.skip 0x4
.endobj dutchman_reticle_ent

.obj dutchman_reticle_radius, global
	.skip 0x4
.endobj dutchman_reticle_radius

.obj dutchman_count, local
	.skip 0x4
.endobj dutchman_count

# 0x803CF630 - 0x803CF758
.section .sdata2, "a"
.balign 8

.obj "@1603", local
	.4byte 0xB727C5AC
.endobj "@1603"

.obj "@1604", local
	.4byte 0x3727C5AC
.endobj "@1604"

.obj "@1605", local
	.4byte 0x00000000
.endobj "@1605"

.obj "@1606", local
	.4byte 0x3F800000
.endobj "@1606"

.obj "@1632", local
	.4byte 0x3F000000
.endobj "@1632"

.obj "@1633", local
	.4byte 0x40400000
.endobj "@1633"

.obj "@1634", local
	.4byte 0x47C35000
.endobj "@1634"

.obj "@1689", local
	.4byte 0x3E4CCCCD
.endobj "@1689"

.obj "@1690", local
	.4byte 0x3DCCCCCD
.endobj "@1690"

.obj "@1713", local
	.4byte "@stringBase0"+0x58
	.4byte "@stringBase0"+0x6B
.endobj "@1713"

.obj "@1753", local
	.4byte 0x40A00000
.endobj "@1753"

.obj "@1772", local
	.4byte 0x42EFFFFF
.endobj "@1772"

.obj "@1773", local
	.4byte 0x426FFFFF
.endobj "@1773"

.obj "@1976", local
	.4byte 0x41500000
.endobj "@1976"

.obj "@1977", local
	.4byte 0x3C23D70A
.endobj "@1977"

.obj "@1978", local
	.4byte 0x42480000
.endobj "@1978"

.obj "@1979", local
	.4byte 0x40200000
.endobj "@1979"

.obj "@1980", local
	.4byte 0x44070000
.endobj "@1980"

.obj "@1981", local
	.4byte 0x3C8EFA35
.endobj "@1981"

.obj "@1982", local
	.4byte 0x4E6E6B28
.endobj "@1982"

.obj "@1983", local
	.4byte 0x43340000
.endobj "@1983"

.obj "@1984", local
	.4byte 0xBFB33333
.endobj "@1984"

.obj "@1985", local
	.4byte 0xCE6E6B28
.endobj "@1985"

.obj "@1986", local
	.4byte 0x41400000
.endobj "@1986"

.obj "@1987", local
	.4byte 0x41200000
.endobj "@1987"

.obj "@1988", local
	.4byte 0x3FC00000
.endobj "@1988"

.obj "@1989", local
	.4byte 0x40000000
.endobj "@1989"

.obj "@1990", local
	.4byte 0xC2C80000
.endobj "@1990"

.obj "@1991", local
	.4byte 0x42C80000
.endobj "@1991"

.obj "@1992", local
	.4byte 0xC1200000
.endobj "@1992"

.obj "@1993", local
	.4byte 0x44610000
.endobj "@1993"

.obj "@1994", local
	.4byte 0xC7C35000
.endobj "@1994"

.obj "@1995", local
	.4byte 0x3ECCCCCD
.endobj "@1995"

.obj "@1996", local
	.4byte 0x3A83126F
.endobj "@1996"

.obj "@1997", local
	.4byte 0x42A00000
.endobj "@1997"

.obj "@1998", local
	.4byte 0x42200000
.endobj "@1998"

.obj "@1999", local
	.4byte 0x41C80000
.endobj "@1999"

.obj "@2000", local
	.4byte 0x3E800000
.endobj "@2000"

.obj "@2001", local
	.4byte 0x41A00000
.endobj "@2001"

.obj "@2002", local
	.4byte 0x45070000
.endobj "@2002"

.obj "@2003", local
	.4byte 0x44340000
.endobj "@2003"

.obj "@2004", local
	.4byte 0x3F4CCCCD
.endobj "@2004"

.obj "@2005", local
	.4byte 0x49742400
.endobj "@2005"

.obj "@2006", local
	.4byte 0x40800000
.endobj "@2006"

.obj "@2007", local
	.4byte 0x3E99999A
.endobj "@2007"

.obj "@2008", local
	.4byte 0xBE4CCCCD
.endobj "@2008"

.obj "@2009", local
	.4byte 0x3F400000
.endobj "@2009"

.obj "@2010", local
	.4byte 0x42700000
.endobj "@2010"

.obj "@2011", local
	.4byte 0xC2B40000
.endobj "@2011"

.obj "@2012", local
	.4byte 0x42B40000
.endobj "@2012"

.obj "@2013", local
	.4byte 0x447A0000
.endobj "@2013"

.obj "@2014", local
	.4byte 0x40C00000
.endobj "@2014"

.obj "@2015", local
	.4byte 0x3F99999A
.endobj "@2015"

.obj "@2016", local
	.4byte 0xC0000000
.endobj "@2016"

.obj "@2017", local
	.4byte 0x40E00000
.endobj "@2017"

.obj "@2018", local
	.4byte 0x41F00000
.endobj "@2018"

.obj "@2180", local
	.4byte 0x40490FDB
.endobj "@2180"

.obj "@2181", local
	.4byte 0x40C90FDB
.endobj "@2181"

.obj "@2182", local
	.4byte 0xC0490FDB
.endobj "@2182"

.obj "@2333", local
	.4byte 0x3C888889
.endobj "@2333"

.obj lookup$2945, local
	.4byte 0x0000000A
	.4byte 0x0000000D
.endobj lookup$2945

.obj lookup$2951, local
	.4byte 0x00000020
	.4byte 0x00000028
.endobj lookup$2951

.obj "@2992", local
	.4byte 0xBF800000
.endobj "@2992"

.obj "@3130", local
	.4byte 0x437F0000
.endobj "@3130"
	.4byte 0x00000000

.obj "@3133", local
	.4byte 0x43300000
	.4byte 0x00000000
.endobj "@3133"

.obj "@3282", local
	.4byte 0x3FC90FDB
.endobj "@3282"
	.4byte 0x00000000

.obj "@3493", local
	.4byte 0x43300000
	.4byte 0x80000000
.endobj "@3493"

# 0x803D09A8 - 0x803D0A40
.section .sbss2, "a", @nobits
.balign 8

.obj "@512", local
	.skip 0x8
.endobj "@512"

.obj "@786", local
	.skip 0x8
.endobj "@786"

.obj "@787", local
	.skip 0x8
.endobj "@787"

.obj "@2168", local
	.skip 0x8
.endobj "@2168"

.obj "@2275", local
	.skip 0x8
.endobj "@2275"

.obj "@2276", local
	.skip 0x8
.endobj "@2276"

.obj "@2277", local
	.skip 0x8
.endobj "@2277"

.obj "@2300", local
	.skip 0x8
.endobj "@2300"

.obj "@2301", local
	.skip 0x8
.endobj "@2301"

.obj "@2302", local
	.skip 0x8
.endobj "@2302"

.obj "@2378", local
	.skip 0x8
.endobj "@2378"

.obj "@2379", local
	.skip 0x8
.endobj "@2379"

.obj "@2571", local
	.skip 0x8
.endobj "@2571"

.obj "@2619", local
	.skip 0x8
.endobj "@2619"

.obj "@2998", local
	.skip 0x8
.endobj "@2998"

.obj "@3187", local
	.skip 0x8
.endobj "@3187"

.obj "@3458", local
	.skip 0x8
.endobj "@3458"

.obj "@3585", local
	.skip 0x8
.endobj "@3585"

.obj "@3689", local
	.skip 0x8
.endobj "@3689"
