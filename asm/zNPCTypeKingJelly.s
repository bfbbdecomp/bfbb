.include "macros.inc"
.file "zNPCTypeKingJelly.cpp"

# 0x801465FC - 0x8014E804
.text
.balign 4

# @unnamed@zNPCTypeKingJelly_cpp@::init_sound()
.fn "init_sound__31@unnamed@zNPCTypeKingJelly_cpp@Fv", local
/* 801465FC 001436DC  94 21 FF D0 */	stwu r1, -0x30(r1)
/* 80146600 001436E0  7C 08 02 A6 */	mflr r0
/* 80146604 001436E4  3C 60 80 33 */	lis r3, "sound_data__31@unnamed@zNPCTypeKingJelly_cpp@"@ha
/* 80146608 001436E8  38 80 00 00 */	li r4, 0x0
/* 8014660C 001436EC  90 01 00 34 */	stw r0, 0x34(r1)
/* 80146610 001436F0  38 63 87 D0 */	addi r3, r3, "sound_data__31@unnamed@zNPCTypeKingJelly_cpp@"@l
/* 80146614 001436F4  38 A0 01 08 */	li r5, 0x108
/* 80146618 001436F8  BF 21 00 14 */	stmw r25, 0x14(r1)
/* 8014661C 001436FC  4B EB CE 3D */	bl memset
/* 80146620 00143700  3C 80 80 2A */	lis r4, "sound_name__31@unnamed@zNPCTypeKingJelly_cpp@"@ha
/* 80146624 00143704  3C 60 80 33 */	lis r3, "sound_data__31@unnamed@zNPCTypeKingJelly_cpp@"@ha
/* 80146628 00143708  3B 84 9D A8 */	addi r28, r4, "sound_name__31@unnamed@zNPCTypeKingJelly_cpp@"@l
/* 8014662C 0014370C  3B 40 00 00 */	li r26, 0x0
/* 80146630 00143710  3B 63 87 D0 */	addi r27, r3, "sound_data__31@unnamed@zNPCTypeKingJelly_cpp@"@l
.L_80146634:
/* 80146634 00143714  7F 9F E3 78 */	mr r31, r28
/* 80146638 00143718  7F 7E DB 78 */	mr r30, r27
/* 8014663C 0014371C  3B BB 00 09 */	addi r29, r27, 0x9
/* 80146640 00143720  3B 20 00 00 */	li r25, 0x0
.L_80146644:
/* 80146644 00143724  80 7F 00 00 */	lwz r3, 0x0(r31)
/* 80146648 00143728  28 03 00 00 */	cmplwi r3, 0x0
/* 8014664C 0014372C  41 82 00 2C */	beq .L_80146678
/* 80146650 00143730  4B F0 5B C5 */	bl xStrHash__FPCc
/* 80146654 00143734  90 7E 00 00 */	stw r3, 0x0(r30)
/* 80146658 00143738  3B 39 00 01 */	addi r25, r25, 0x1
/* 8014665C 0014373C  2C 19 00 02 */	cmpwi r25, 0x2
/* 80146660 00143740  3B FF 00 04 */	addi r31, r31, 0x4
/* 80146664 00143744  88 7D 00 00 */	lbz r3, 0x0(r29)
/* 80146668 00143748  3B DE 00 04 */	addi r30, r30, 0x4
/* 8014666C 0014374C  38 03 00 01 */	addi r0, r3, 0x1
/* 80146670 00143750  98 1D 00 00 */	stb r0, 0x0(r29)
/* 80146674 00143754  41 80 FF D0 */	blt .L_80146644
.L_80146678:
/* 80146678 00143758  3B 5A 00 01 */	addi r26, r26, 0x1
/* 8014667C 0014375C  38 00 FF FF */	li r0, -0x1
/* 80146680 00143760  2C 1A 00 0B */	cmpwi r26, 0xb
/* 80146684 00143764  98 1B 00 0A */	stb r0, 0xa(r27)
/* 80146688 00143768  3B 9C 00 0C */	addi r28, r28, 0xc
/* 8014668C 0014376C  3B 7B 00 18 */	addi r27, r27, 0x18
/* 80146690 00143770  41 80 FF A4 */	blt .L_80146634
/* 80146694 00143774  BB 21 00 14 */	lmw r25, 0x14(r1)
/* 80146698 00143778  80 01 00 34 */	lwz r0, 0x34(r1)
/* 8014669C 0014377C  7C 08 03 A6 */	mtlr r0
/* 801466A0 00143780  38 21 00 30 */	addi r1, r1, 0x30
/* 801466A4 00143784  4E 80 00 20 */	blr
.endfn "init_sound__31@unnamed@zNPCTypeKingJelly_cpp@Fv"

# @unnamed@zNPCTypeKingJelly_cpp@::play_sound_immediate(int, const xVec3*)
.fn "play_sound_immediate__31@unnamed@zNPCTypeKingJelly_cpp@FiPC5xVec3", local
/* 801466A8 00143788  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 801466AC 0014378C  7C 08 02 A6 */	mflr r0
/* 801466B0 00143790  90 01 00 24 */	stw r0, 0x24(r1)
/* 801466B4 00143794  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 801466B8 00143798  93 C1 00 18 */	stw r30, 0x18(r1)
/* 801466BC 0014379C  7C 9E 23 78 */	mr r30, r4
/* 801466C0 001437A0  93 A1 00 14 */	stw r29, 0x14(r1)
/* 801466C4 001437A4  7C 7D 1B 78 */	mr r29, r3
/* 801466C8 001437A8  1C BD 00 18 */	mulli r5, r29, 0x18
/* 801466CC 001437AC  3C 60 80 33 */	lis r3, "sound_data__31@unnamed@zNPCTypeKingJelly_cpp@"@ha
/* 801466D0 001437B0  38 03 87 D0 */	addi r0, r3, "sound_data__31@unnamed@zNPCTypeKingJelly_cpp@"@l
/* 801466D4 001437B4  7F E0 2A 14 */	add r31, r0, r5
/* 801466D8 001437B8  80 1F 00 10 */	lwz r0, 0x10(r31)
/* 801466DC 001437BC  28 00 00 00 */	cmplwi r0, 0x0
/* 801466E0 001437C0  41 82 00 18 */	beq .L_801466F8
/* 801466E4 001437C4  3C 60 80 27 */	lis r3, "sound_flags__31@unnamed@zNPCTypeKingJelly_cpp@"@ha
/* 801466E8 001437C8  38 63 D8 30 */	addi r3, r3, "sound_flags__31@unnamed@zNPCTypeKingJelly_cpp@"@l
/* 801466EC 001437CC  7C 03 E8 AE */	lbzx r0, r3, r29
/* 801466F0 001437D0  54 00 07 FF */	clrlwi. r0, r0, 31
/* 801466F4 001437D4  40 82 00 8C */	bne .L_80146780
.L_801466F8:
/* 801466F8 001437D8  38 00 00 00 */	li r0, 0x0
/* 801466FC 001437DC  98 1F 00 0A */	stb r0, 0xa(r31)
/* 80146700 001437E0  98 1F 00 08 */	stb r0, 0x8(r31)
/* 80146704 001437E4  88 1F 00 09 */	lbz r0, 0x9(r31)
/* 80146708 001437E8  7C 00 07 74 */	extsb r0, r0
/* 8014670C 001437EC  2C 00 00 01 */	cmpwi r0, 0x1
/* 80146710 001437F0  40 81 00 24 */	ble .L_80146734
/* 80146714 001437F4  4B EE A5 55 */	bl xrand__Fv
/* 80146718 001437F8  88 1F 00 09 */	lbz r0, 0x9(r31)
/* 8014671C 001437FC  54 64 9B 7E */	srwi r4, r3, 13
/* 80146720 00143800  7C 03 07 74 */	extsb r3, r0
/* 80146724 00143804  7C 04 1B 96 */	divwu r0, r4, r3
/* 80146728 00143808  7C 00 19 D6 */	mullw r0, r0, r3
/* 8014672C 0014380C  7C 00 20 50 */	subf r0, r0, r4
/* 80146730 00143810  98 1F 00 0A */	stb r0, 0xa(r31)
.L_80146734:
/* 80146734 00143814  88 1F 00 0A */	lbz r0, 0xa(r31)
/* 80146738 00143818  1C BD 00 14 */	mulli r5, r29, 0x14
/* 8014673C 0014381C  3C 60 80 33 */	lis r3, "tweak__31@unnamed@zNPCTypeKingJelly_cpp@"@ha
/* 80146740 00143820  C0 42 A6 30 */	lfs f2, "@1868"@sda21(r2)
/* 80146744 00143824  7C 04 07 74 */	extsb r4, r0
/* 80146748 00143828  C0 A2 A6 34 */	lfs f5, "@1869"@sda21(r2)
/* 8014674C 0014382C  38 03 85 38 */	addi r0, r3, "tweak__31@unnamed@zNPCTypeKingJelly_cpp@"@l
/* 80146750 00143830  7D 00 2A 14 */	add r8, r0, r5
/* 80146754 00143834  54 80 10 3A */	slwi r0, r4, 2
/* 80146758 00143838  7C 7F 00 2E */	lwzx r3, r31, r0
/* 8014675C 0014383C  7F C6 F3 78 */	mr r6, r30
/* 80146760 00143840  C0 28 01 BC */	lfs f1, 0x1bc(r8)
/* 80146764 00143844  38 A0 00 00 */	li r5, 0x0
/* 80146768 00143848  80 88 01 CC */	lwz r4, 0x1cc(r8)
/* 8014676C 0014384C  38 E0 00 00 */	li r7, 0x0
/* 80146770 00143850  C0 68 01 C4 */	lfs f3, 0x1c4(r8)
/* 80146774 00143854  C0 88 01 C8 */	lfs f4, 0x1c8(r8)
/* 80146778 00143858  4B F0 23 1D */	bl xSndPlay3D__FUiffUiUiPC5xVec3ff14sound_categoryf
/* 8014677C 0014385C  90 7F 00 10 */	stw r3, 0x10(r31)
.L_80146780:
/* 80146780 00143860  80 01 00 24 */	lwz r0, 0x24(r1)
/* 80146784 00143864  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 80146788 00143868  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 8014678C 0014386C  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 80146790 00143870  7C 08 03 A6 */	mtlr r0
/* 80146794 00143874  38 21 00 20 */	addi r1, r1, 0x20
/* 80146798 00143878  4E 80 00 20 */	blr
.endfn "play_sound_immediate__31@unnamed@zNPCTypeKingJelly_cpp@FiPC5xVec3"

# @unnamed@zNPCTypeKingJelly_cpp@::play_sound(int, const xVec3*)
.fn "play_sound__31@unnamed@zNPCTypeKingJelly_cpp@FiPC5xVec3", local
/* 8014679C 0014387C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801467A0 00143880  7C 08 02 A6 */	mflr r0
/* 801467A4 00143884  3C A0 80 33 */	lis r5, "tweak__31@unnamed@zNPCTypeKingJelly_cpp@"@ha
/* 801467A8 00143888  90 01 00 14 */	stw r0, 0x14(r1)
/* 801467AC 0014388C  1C 03 00 14 */	mulli r0, r3, 0x14
/* 801467B0 00143890  38 A5 85 38 */	addi r5, r5, "tweak__31@unnamed@zNPCTypeKingJelly_cpp@"@l
/* 801467B4 00143894  C0 02 A6 34 */	lfs f0, "@1869"@sda21(r2)
/* 801467B8 00143898  7C A5 02 14 */	add r5, r5, r0
/* 801467BC 0014389C  C0 25 01 C0 */	lfs f1, 0x1c0(r5)
/* 801467C0 001438A0  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 801467C4 001438A4  4C 40 13 82 */	cror eq, lt, eq
/* 801467C8 001438A8  40 82 00 0C */	bne .L_801467D4
/* 801467CC 001438AC  4B FF FE DD */	bl "play_sound_immediate__31@unnamed@zNPCTypeKingJelly_cpp@FiPC5xVec3"
/* 801467D0 001438B0  48 00 00 44 */	b .L_80146814
.L_801467D4:
/* 801467D4 001438B4  1C A3 00 18 */	mulli r5, r3, 0x18
/* 801467D8 001438B8  3C 80 80 33 */	lis r4, "sound_data__31@unnamed@zNPCTypeKingJelly_cpp@"@ha
/* 801467DC 001438BC  38 04 87 D0 */	addi r0, r4, "sound_data__31@unnamed@zNPCTypeKingJelly_cpp@"@l
/* 801467E0 001438C0  7C A0 2A 14 */	add r5, r0, r5
/* 801467E4 001438C4  80 05 00 10 */	lwz r0, 0x10(r5)
/* 801467E8 001438C8  28 00 00 00 */	cmplwi r0, 0x0
/* 801467EC 001438CC  41 82 00 18 */	beq .L_80146804
/* 801467F0 001438D0  3C 80 80 27 */	lis r4, "sound_flags__31@unnamed@zNPCTypeKingJelly_cpp@"@ha
/* 801467F4 001438D4  38 84 D8 30 */	addi r4, r4, "sound_flags__31@unnamed@zNPCTypeKingJelly_cpp@"@l
/* 801467F8 001438D8  7C 04 18 AE */	lbzx r0, r4, r3
/* 801467FC 001438DC  54 00 07 FF */	clrlwi. r0, r0, 31
/* 80146800 001438E0  40 82 00 14 */	bne .L_80146814
.L_80146804:
/* 80146804 001438E4  38 00 00 01 */	li r0, 0x1
/* 80146808 001438E8  98 05 00 08 */	stb r0, 0x8(r5)
/* 8014680C 001438EC  C0 02 A6 34 */	lfs f0, "@1869"@sda21(r2)
/* 80146810 001438F0  D0 05 00 0C */	stfs f0, 0xc(r5)
.L_80146814:
/* 80146814 001438F4  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80146818 001438F8  7C 08 03 A6 */	mtlr r0
/* 8014681C 001438FC  38 21 00 10 */	addi r1, r1, 0x10
/* 80146820 00143900  4E 80 00 20 */	blr
.endfn "play_sound__31@unnamed@zNPCTypeKingJelly_cpp@FiPC5xVec3"

# @unnamed@zNPCTypeKingJelly_cpp@::kill_sound(int)
.fn "kill_sound__31@unnamed@zNPCTypeKingJelly_cpp@Fi", local
/* 80146824 00143904  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80146828 00143908  7C 08 02 A6 */	mflr r0
/* 8014682C 0014390C  1C 83 00 18 */	mulli r4, r3, 0x18
/* 80146830 00143910  3C 60 80 33 */	lis r3, "sound_data__31@unnamed@zNPCTypeKingJelly_cpp@"@ha
/* 80146834 00143914  90 01 00 14 */	stw r0, 0x14(r1)
/* 80146838 00143918  38 03 87 D0 */	addi r0, r3, "sound_data__31@unnamed@zNPCTypeKingJelly_cpp@"@l
/* 8014683C 0014391C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80146840 00143920  7F E0 22 14 */	add r31, r0, r4
/* 80146844 00143924  80 7F 00 10 */	lwz r3, 0x10(r31)
/* 80146848 00143928  28 03 00 00 */	cmplwi r3, 0x0
/* 8014684C 0014392C  41 82 00 1C */	beq .L_80146868
/* 80146850 00143930  4B F0 29 B1 */	bl xSndStop__FUi
/* 80146854 00143934  38 60 00 00 */	li r3, 0x0
/* 80146858 00143938  38 00 FF FF */	li r0, -0x1
/* 8014685C 0014393C  90 7F 00 10 */	stw r3, 0x10(r31)
/* 80146860 00143940  98 1F 00 0A */	stb r0, 0xa(r31)
/* 80146864 00143944  98 7F 00 08 */	stb r3, 0x8(r31)
.L_80146868:
/* 80146868 00143948  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8014686C 0014394C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80146870 00143950  7C 08 03 A6 */	mtlr r0
/* 80146874 00143954  38 21 00 10 */	addi r1, r1, 0x10
/* 80146878 00143958  4E 80 00 20 */	blr
.endfn "kill_sound__31@unnamed@zNPCTypeKingJelly_cpp@Fi"

# @unnamed@zNPCTypeKingJelly_cpp@::sound_update(float)
.fn "sound_update__31@unnamed@zNPCTypeKingJelly_cpp@Ff", local
/* 8014687C 0014395C  94 21 FF D0 */	stwu r1, -0x30(r1)
/* 80146880 00143960  7C 08 02 A6 */	mflr r0
/* 80146884 00143964  90 01 00 34 */	stw r0, 0x34(r1)
/* 80146888 00143968  DB E1 00 20 */	stfd f31, 0x20(r1)
/* 8014688C 0014396C  F3 E1 00 28 */	psq_st f31, 0x28(r1), 0, qr0
/* 80146890 00143970  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 80146894 00143974  93 C1 00 18 */	stw r30, 0x18(r1)
/* 80146898 00143978  93 A1 00 14 */	stw r29, 0x14(r1)
/* 8014689C 0014397C  FF E0 08 90 */	fmr f31, f1
/* 801468A0 00143980  3C 80 80 33 */	lis r4, "sound_data__31@unnamed@zNPCTypeKingJelly_cpp@"@ha
/* 801468A4 00143984  3C 60 80 33 */	lis r3, "tweak__31@unnamed@zNPCTypeKingJelly_cpp@"@ha
/* 801468A8 00143988  3B A0 00 00 */	li r29, 0x0
/* 801468AC 0014398C  3B E4 87 D0 */	addi r31, r4, "sound_data__31@unnamed@zNPCTypeKingJelly_cpp@"@l
/* 801468B0 00143990  3B C3 85 38 */	addi r30, r3, "tweak__31@unnamed@zNPCTypeKingJelly_cpp@"@l
.L_801468B4:
/* 801468B4 00143994  88 1F 00 08 */	lbz r0, 0x8(r31)
/* 801468B8 00143998  28 00 00 00 */	cmplwi r0, 0x0
/* 801468BC 0014399C  41 82 00 30 */	beq .L_801468EC
/* 801468C0 001439A0  C0 3F 00 0C */	lfs f1, 0xc(r31)
/* 801468C4 001439A4  C0 1E 01 C0 */	lfs f0, 0x1c0(r30)
/* 801468C8 001439A8  EC 21 F8 2A */	fadds f1, f1, f31
/* 801468CC 001439AC  D0 3F 00 0C */	stfs f1, 0xc(r31)
/* 801468D0 001439B0  C0 3F 00 0C */	lfs f1, 0xc(r31)
/* 801468D4 001439B4  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 801468D8 001439B8  4C 41 13 82 */	cror eq, gt, eq
/* 801468DC 001439BC  40 82 00 10 */	bne .L_801468EC
/* 801468E0 001439C0  80 9F 00 14 */	lwz r4, 0x14(r31)
/* 801468E4 001439C4  7F A3 EB 78 */	mr r3, r29
/* 801468E8 001439C8  4B FF FD C1 */	bl "play_sound_immediate__31@unnamed@zNPCTypeKingJelly_cpp@FiPC5xVec3"
.L_801468EC:
/* 801468EC 001439CC  3B BD 00 01 */	addi r29, r29, 0x1
/* 801468F0 001439D0  3B DE 00 14 */	addi r30, r30, 0x14
/* 801468F4 001439D4  2C 1D 00 0B */	cmpwi r29, 0xb
/* 801468F8 001439D8  3B FF 00 18 */	addi r31, r31, 0x18
/* 801468FC 001439DC  41 80 FF B8 */	blt .L_801468B4
/* 80146900 001439E0  E3 E1 00 28 */	psq_l f31, 0x28(r1), 0, qr0
/* 80146904 001439E4  80 01 00 34 */	lwz r0, 0x34(r1)
/* 80146908 001439E8  CB E1 00 20 */	lfd f31, 0x20(r1)
/* 8014690C 001439EC  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 80146910 001439F0  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 80146914 001439F4  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 80146918 001439F8  7C 08 03 A6 */	mtlr r0
/* 8014691C 001439FC  38 21 00 30 */	addi r1, r1, 0x30
/* 80146920 00143A00  4E 80 00 20 */	blr
.endfn "sound_update__31@unnamed@zNPCTypeKingJelly_cpp@Ff"

# @unnamed@zNPCTypeKingJelly_cpp@::kill_sounds()
.fn "kill_sounds__31@unnamed@zNPCTypeKingJelly_cpp@Fv", local
/* 80146924 00143A04  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80146928 00143A08  7C 08 02 A6 */	mflr r0
/* 8014692C 00143A0C  90 01 00 14 */	stw r0, 0x14(r1)
/* 80146930 00143A10  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80146934 00143A14  3B E0 00 00 */	li r31, 0x0
.L_80146938:
/* 80146938 00143A18  7F E3 FB 78 */	mr r3, r31
/* 8014693C 00143A1C  4B FF FE E9 */	bl "kill_sound__31@unnamed@zNPCTypeKingJelly_cpp@Fi"
/* 80146940 00143A20  3B FF 00 01 */	addi r31, r31, 0x1
/* 80146944 00143A24  2C 1F 00 0B */	cmpwi r31, 0xb
/* 80146948 00143A28  41 80 FF F0 */	blt .L_80146938
/* 8014694C 00143A2C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80146950 00143A30  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80146954 00143A34  7C 08 03 A6 */	mtlr r0
/* 80146958 00143A38  38 21 00 10 */	addi r1, r1, 0x10
/* 8014695C 00143A3C  4E 80 00 20 */	blr
.endfn "kill_sounds__31@unnamed@zNPCTypeKingJelly_cpp@Fv"

# @unnamed@zNPCTypeKingJelly_cpp@::set_ring_segments(const xVec3&, float, float)
.fn "set_ring_segments__31@unnamed@zNPCTypeKingJelly_cpp@FRC5xVec3ff", local
/* 80146960 00143A40  94 21 FF A0 */	stwu r1, -0x60(r1)
/* 80146964 00143A44  7C 08 02 A6 */	mflr r0
/* 80146968 00143A48  90 01 00 64 */	stw r0, 0x64(r1)
/* 8014696C 00143A4C  DB E1 00 50 */	stfd f31, 0x50(r1)
/* 80146970 00143A50  F3 E1 00 58 */	psq_st f31, 0x58(r1), 0, qr0
/* 80146974 00143A54  DB C1 00 40 */	stfd f30, 0x40(r1)
/* 80146978 00143A58  F3 C1 00 48 */	psq_st f30, 0x48(r1), 0, qr0
/* 8014697C 00143A5C  DB A1 00 30 */	stfd f29, 0x30(r1)
/* 80146980 00143A60  F3 A1 00 38 */	psq_st f29, 0x38(r1), 0, qr0
/* 80146984 00143A64  BF 61 00 1C */	stmw r27, 0x1c(r1)
/* 80146988 00143A68  88 0D 96 C1 */	lbz r0, init$1916@sda21(r13)
/* 8014698C 00143A6C  3C 80 80 33 */	lis r4, ...bss.0@ha
/* 80146990 00143A70  FF A0 08 90 */	fmr f29, f1
/* 80146994 00143A74  7C 7E 1B 78 */	mr r30, r3
/* 80146998 00143A78  FF C0 10 90 */	fmr f30, f2
/* 8014699C 00143A7C  7C 00 07 75 */	extsb. r0, r0
/* 801469A0 00143A80  3B E4 85 38 */	addi r31, r4, ...bss.0@l
/* 801469A4 00143A84  40 82 00 14 */	bne .L_801469B8
/* 801469A8 00143A88  38 60 00 00 */	li r3, 0x0
/* 801469AC 00143A8C  38 00 00 01 */	li r0, 0x1
/* 801469B0 00143A90  98 6D 96 C0 */	stb r3, sclookup_inited$1915@sda21(r13)
/* 801469B4 00143A94  98 0D 96 C1 */	stb r0, init$1916@sda21(r13)
.L_801469B8:
/* 801469B8 00143A98  88 0D 96 C0 */	lbz r0, sclookup_inited$1915@sda21(r13)
/* 801469BC 00143A9C  28 00 00 00 */	cmplwi r0, 0x0
/* 801469C0 00143AA0  40 82 00 50 */	bne .L_80146A10
/* 801469C4 00143AA4  38 00 00 01 */	li r0, 0x1
/* 801469C8 00143AA8  3B BF 0C 50 */	addi r29, r31, 0xc50
/* 801469CC 00143AAC  98 0D 96 C0 */	stb r0, sclookup_inited$1915@sda21(r13)
/* 801469D0 00143AB0  3B 9F 0C 74 */	addi r28, r31, 0xc74
/* 801469D4 00143AB4  3B 60 00 00 */	li r27, 0x0
/* 801469D8 00143AB8  C3 E2 A6 34 */	lfs f31, "@1869"@sda21(r2)
.L_801469DC:
/* 801469DC 00143ABC  FC 20 F8 90 */	fmr f1, f31
/* 801469E0 00143AC0  4B F7 E4 6D */	bl isin__Ff
/* 801469E4 00143AC4  D0 3D 00 00 */	stfs f1, 0x0(r29)
/* 801469E8 00143AC8  FC 20 F8 90 */	fmr f1, f31
/* 801469EC 00143ACC  4B F7 E4 A5 */	bl icos__Ff
/* 801469F0 00143AD0  D0 3C 00 00 */	stfs f1, 0x0(r28)
/* 801469F4 00143AD4  3B 7B 00 01 */	addi r27, r27, 0x1
/* 801469F8 00143AD8  2C 1B 00 09 */	cmpwi r27, 0x9
/* 801469FC 00143ADC  3B BD 00 04 */	addi r29, r29, 0x4
/* 80146A00 00143AE0  C0 02 A6 40 */	lfs f0, "@1973"@sda21(r2)
/* 80146A04 00143AE4  3B 9C 00 04 */	addi r28, r28, 0x4
/* 80146A08 00143AE8  EF FF 00 2A */	fadds f31, f31, f0
/* 80146A0C 00143AEC  41 80 FF D0 */	blt .L_801469DC
.L_80146A10:
/* 80146A10 00143AF0  C0 02 A6 4C */	lfs f0, "@1976"@sda21(r2)
/* 80146A14 00143AF4  C0 22 A6 48 */	lfs f1, "@1975"@sda21(r2)
/* 80146A18 00143AF8  EC 00 07 72 */	fmuls f0, f0, f29
/* 80146A1C 00143AFC  C0 42 A6 44 */	lfs f2, "@1974"@sda21(r2)
/* 80146A20 00143B00  EC 01 00 32 */	fmuls f0, f1, f0
/* 80146A24 00143B04  EC 00 F0 24 */	fdivs f0, f0, f30
/* 80146A28 00143B08  EC 02 00 2A */	fadds f0, f2, f0
/* 80146A2C 00143B0C  FC 00 00 1E */	fctiwz f0, f0
/* 80146A30 00143B10  D8 01 00 08 */	stfd f0, 0x8(r1)
/* 80146A34 00143B14  80 61 00 0C */	lwz r3, 0xc(r1)
/* 80146A38 00143B18  38 03 00 07 */	addi r0, r3, 0x7
/* 80146A3C 00143B1C  54 03 00 38 */	clrrwi r3, r0, 3
/* 80146A40 00143B20  2C 03 00 40 */	cmpwi r3, 0x40
/* 80146A44 00143B24  40 81 00 08 */	ble .L_80146A4C
/* 80146A48 00143B28  38 60 00 40 */	li r3, 0x40
.L_80146A4C:
/* 80146A4C 00143B2C  2C 03 00 00 */	cmpwi r3, 0x0
/* 80146A50 00143B30  41 81 00 0C */	bgt .L_80146A5C
/* 80146A54 00143B34  38 60 00 00 */	li r3, 0x0
/* 80146A58 00143B38  48 00 01 60 */	b .L_80146BB8
.L_80146A5C:
/* 80146A5C 00143B3C  38 00 00 40 */	li r0, 0x40
/* 80146A60 00143B40  7C 64 1E 70 */	srawi r4, r3, 3
/* 80146A64 00143B44  7C 00 1B D6 */	divw r0, r0, r3
/* 80146A68 00143B48  38 BF 09 50 */	addi r5, r31, 0x950
/* 80146A6C 00143B4C  7C 84 01 94 */	addze r4, r4
/* 80146A70 00143B50  38 FF 0C 50 */	addi r7, r31, 0xc50
/* 80146A74 00143B54  39 1F 0C 74 */	addi r8, r31, 0xc74
/* 80146A78 00143B58  1C 84 00 0C */	mulli r4, r4, 0xc
/* 80146A7C 00143B5C  54 00 10 3A */	slwi r0, r0, 2
/* 80146A80 00143B60  7C 85 22 14 */	add r4, r5, r4
/* 80146A84 00143B64  38 C4 00 0C */	addi r6, r4, 0xc
/* 80146A88 00143B68  48 00 00 28 */	b .L_80146AB0
.L_80146A8C:
/* 80146A8C 00143B6C  C0 27 00 00 */	lfs f1, 0x0(r7)
/* 80146A90 00143B70  7C E7 02 14 */	add r7, r7, r0
/* 80146A94 00143B74  C0 08 00 00 */	lfs f0, 0x0(r8)
/* 80146A98 00143B78  7D 08 02 14 */	add r8, r8, r0
/* 80146A9C 00143B7C  EC 3D 00 72 */	fmuls f1, f29, f1
/* 80146AA0 00143B80  EC 1D 00 32 */	fmuls f0, f29, f0
/* 80146AA4 00143B84  D0 25 00 00 */	stfs f1, 0x0(r5)
/* 80146AA8 00143B88  D0 05 00 08 */	stfs f0, 0x8(r5)
/* 80146AAC 00143B8C  38 A5 00 0C */	addi r5, r5, 0xc
.L_80146AB0:
/* 80146AB0 00143B90  7C 05 30 40 */	cmplw r5, r6
/* 80146AB4 00143B94  40 82 FF D8 */	bne .L_80146A8C
/* 80146AB8 00143B98  7C 60 16 70 */	srawi r0, r3, 2
/* 80146ABC 00143B9C  38 DF 09 50 */	addi r6, r31, 0x950
/* 80146AC0 00143BA0  7C 00 01 94 */	addze r0, r0
/* 80146AC4 00143BA4  1C 00 00 0C */	mulli r0, r0, 0xc
/* 80146AC8 00143BA8  7C A6 02 14 */	add r5, r6, r0
/* 80146ACC 00143BAC  7C A7 2B 78 */	mr r7, r5
/* 80146AD0 00143BB0  48 00 00 1C */	b .L_80146AEC
.L_80146AD4:
/* 80146AD4 00143BB4  C0 06 00 08 */	lfs f0, 0x8(r6)
/* 80146AD8 00143BB8  D0 07 00 00 */	stfs f0, 0x0(r7)
/* 80146ADC 00143BBC  C0 06 00 00 */	lfs f0, 0x0(r6)
/* 80146AE0 00143BC0  38 C6 00 0C */	addi r6, r6, 0xc
/* 80146AE4 00143BC4  D0 07 00 08 */	stfs f0, 0x8(r7)
/* 80146AE8 00143BC8  38 E7 FF F4 */	addi r7, r7, -0xc
.L_80146AEC:
/* 80146AEC 00143BCC  7C 06 20 40 */	cmplw r6, r4
/* 80146AF0 00143BD0  40 82 FF E4 */	bne .L_80146AD4
/* 80146AF4 00143BD4  54 60 0F FE */	srwi r0, r3, 31
/* 80146AF8 00143BD8  38 DF 09 50 */	addi r6, r31, 0x950
/* 80146AFC 00143BDC  7C 00 1A 14 */	add r0, r0, r3
/* 80146B00 00143BE0  7C 00 0E 70 */	srawi r0, r0, 1
/* 80146B04 00143BE4  1C 80 00 0C */	mulli r4, r0, 0xc
/* 80146B08 00143BE8  7C E6 22 14 */	add r7, r6, r4
/* 80146B0C 00143BEC  48 00 00 20 */	b .L_80146B2C
.L_80146B10:
/* 80146B10 00143BF0  C0 06 00 00 */	lfs f0, 0x0(r6)
/* 80146B14 00143BF4  D0 07 00 00 */	stfs f0, 0x0(r7)
/* 80146B18 00143BF8  C0 06 00 08 */	lfs f0, 0x8(r6)
/* 80146B1C 00143BFC  38 C6 00 0C */	addi r6, r6, 0xc
/* 80146B20 00143C00  FC 00 00 50 */	fneg f0, f0
/* 80146B24 00143C04  D0 07 00 08 */	stfs f0, 0x8(r7)
/* 80146B28 00143C08  38 E7 FF F4 */	addi r7, r7, -0xc
.L_80146B2C:
/* 80146B2C 00143C0C  7C 06 28 40 */	cmplw r6, r5
/* 80146B30 00143C10  40 82 FF E0 */	bne .L_80146B10
/* 80146B34 00143C14  1C 03 00 0C */	mulli r0, r3, 0xc
/* 80146B38 00143C18  38 DF 09 50 */	addi r6, r31, 0x950
/* 80146B3C 00143C1C  38 84 FF F4 */	addi r4, r4, -0xc
/* 80146B40 00143C20  7C C5 33 78 */	mr r5, r6
/* 80146B44 00143C24  7C A5 02 14 */	add r5, r5, r0
/* 80146B48 00143C28  38 C6 00 0C */	addi r6, r6, 0xc
/* 80146B4C 00143C2C  7C 86 22 14 */	add r4, r6, r4
/* 80146B50 00143C30  38 E5 FF F4 */	addi r7, r5, -0xc
/* 80146B54 00143C34  48 00 00 20 */	b .L_80146B74
.L_80146B58:
/* 80146B58 00143C38  C0 06 00 00 */	lfs f0, 0x0(r6)
/* 80146B5C 00143C3C  FC 00 00 50 */	fneg f0, f0
/* 80146B60 00143C40  D0 07 00 00 */	stfs f0, 0x0(r7)
/* 80146B64 00143C44  C0 06 00 08 */	lfs f0, 0x8(r6)
/* 80146B68 00143C48  38 C6 00 0C */	addi r6, r6, 0xc
/* 80146B6C 00143C4C  D0 07 00 08 */	stfs f0, 0x8(r7)
/* 80146B70 00143C50  38 E7 FF F4 */	addi r7, r7, -0xc
.L_80146B74:
/* 80146B74 00143C54  7C 06 20 40 */	cmplw r6, r4
/* 80146B78 00143C58  40 82 FF E0 */	bne .L_80146B58
/* 80146B7C 00143C5C  C0 7E 00 00 */	lfs f3, 0x0(r30)
/* 80146B80 00143C60  38 9F 09 50 */	addi r4, r31, 0x950
/* 80146B84 00143C64  C0 5E 00 04 */	lfs f2, 0x4(r30)
/* 80146B88 00143C68  C0 3E 00 08 */	lfs f1, 0x8(r30)
/* 80146B8C 00143C6C  48 00 00 24 */	b .L_80146BB0
.L_80146B90:
/* 80146B90 00143C70  C0 04 00 00 */	lfs f0, 0x0(r4)
/* 80146B94 00143C74  EC 00 18 2A */	fadds f0, f0, f3
/* 80146B98 00143C78  D0 04 00 00 */	stfs f0, 0x0(r4)
/* 80146B9C 00143C7C  D0 44 00 04 */	stfs f2, 0x4(r4)
/* 80146BA0 00143C80  C0 04 00 08 */	lfs f0, 0x8(r4)
/* 80146BA4 00143C84  EC 00 08 2A */	fadds f0, f0, f1
/* 80146BA8 00143C88  D0 04 00 08 */	stfs f0, 0x8(r4)
/* 80146BAC 00143C8C  38 84 00 0C */	addi r4, r4, 0xc
.L_80146BB0:
/* 80146BB0 00143C90  7C 04 28 40 */	cmplw r4, r5
/* 80146BB4 00143C94  40 82 FF DC */	bne .L_80146B90
.L_80146BB8:
/* 80146BB8 00143C98  E3 E1 00 58 */	psq_l f31, 0x58(r1), 0, qr0
/* 80146BBC 00143C9C  CB E1 00 50 */	lfd f31, 0x50(r1)
/* 80146BC0 00143CA0  E3 C1 00 48 */	psq_l f30, 0x48(r1), 0, qr0
/* 80146BC4 00143CA4  CB C1 00 40 */	lfd f30, 0x40(r1)
/* 80146BC8 00143CA8  E3 A1 00 38 */	psq_l f29, 0x38(r1), 0, qr0
/* 80146BCC 00143CAC  CB A1 00 30 */	lfd f29, 0x30(r1)
/* 80146BD0 00143CB0  BB 61 00 1C */	lmw r27, 0x1c(r1)
/* 80146BD4 00143CB4  80 01 00 64 */	lwz r0, 0x64(r1)
/* 80146BD8 00143CB8  7C 08 03 A6 */	mtlr r0
/* 80146BDC 00143CBC  38 21 00 60 */	addi r1, r1, 0x60
/* 80146BE0 00143CC0  4E 80 00 20 */	blr
.endfn "set_ring_segments__31@unnamed@zNPCTypeKingJelly_cpp@FRC5xVec3ff"

# @unnamed@zNPCTypeKingJelly_cpp@::updown_ring_update(lightning_ring&, float)
.fn "updown_ring_update__31@unnamed@zNPCTypeKingJelly_cpp@FR14lightning_ringf", local
/* 80146BE4 00143CC4  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 80146BE8 00143CC8  7C 08 02 A6 */	mflr r0
/* 80146BEC 00143CCC  90 01 00 24 */	stw r0, 0x24(r1)
/* 80146BF0 00143CD0  DB E1 00 10 */	stfd f31, 0x10(r1)
/* 80146BF4 00143CD4  F3 E1 00 18 */	psq_st f31, 0x18(r1), 0, qr0
/* 80146BF8 00143CD8  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80146BFC 00143CDC  7C 7F 1B 78 */	mr r31, r3
/* 80146C00 00143CE0  C0 43 00 40 */	lfs f2, 0x40(r3)
/* 80146C04 00143CE4  C0 03 00 44 */	lfs f0, 0x44(r3)
/* 80146C08 00143CE8  EC 02 00 7A */	fmadds f0, f2, f1, f0
/* 80146C0C 00143CEC  D0 03 00 44 */	stfs f0, 0x44(r3)
/* 80146C10 00143CF0  C0 23 00 44 */	lfs f1, 0x44(r3)
/* 80146C14 00143CF4  C0 43 00 24 */	lfs f2, 0x24(r3)
/* 80146C18 00143CF8  4B EE 97 95 */	bl xfmod__Fff
/* 80146C1C 00143CFC  D0 3F 00 44 */	stfs f1, 0x44(r31)
/* 80146C20 00143D00  C0 3F 00 44 */	lfs f1, 0x44(r31)
/* 80146C24 00143D04  C0 1F 00 24 */	lfs f0, 0x24(r31)
/* 80146C28 00143D08  C0 7F 00 18 */	lfs f3, 0x18(r31)
/* 80146C2C 00143D0C  EC 01 00 24 */	fdivs f0, f1, f0
/* 80146C30 00143D10  C0 5F 00 14 */	lfs f2, 0x14(r31)
/* 80146C34 00143D14  C0 22 A6 54 */	lfs f1, "@1992"@sda21(r2)
/* 80146C38 00143D18  EF E3 10 28 */	fsubs f31, f3, f2
/* 80146C3C 00143D1C  EC 21 00 32 */	fmuls f1, f1, f0
/* 80146C40 00143D20  4B F7 E2 0D */	bl isin__Ff
/* 80146C44 00143D24  C0 02 A6 30 */	lfs f0, "@1868"@sda21(r2)
/* 80146C48 00143D28  C0 42 A6 50 */	lfs f2, "@1987"@sda21(r2)
/* 80146C4C 00143D2C  EC 20 08 2A */	fadds f1, f0, f1
/* 80146C50 00143D30  C0 1F 00 14 */	lfs f0, 0x14(r31)
/* 80146C54 00143D34  EC 3F 00 72 */	fmuls f1, f31, f1
/* 80146C58 00143D38  EC 02 00 7A */	fmadds f0, f2, f1, f0
/* 80146C5C 00143D3C  D0 1F 00 34 */	stfs f0, 0x34(r31)
/* 80146C60 00143D40  E3 E1 00 18 */	psq_l f31, 0x18(r1), 0, qr0
/* 80146C64 00143D44  80 01 00 24 */	lwz r0, 0x24(r1)
/* 80146C68 00143D48  CB E1 00 10 */	lfd f31, 0x10(r1)
/* 80146C6C 00143D4C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80146C70 00143D50  7C 08 03 A6 */	mtlr r0
/* 80146C74 00143D54  38 21 00 20 */	addi r1, r1, 0x20
/* 80146C78 00143D58  4E 80 00 20 */	blr
.endfn "updown_ring_update__31@unnamed@zNPCTypeKingJelly_cpp@FR14lightning_ringf"

# @unnamed@zNPCTypeKingJelly_cpp@::expand_ring_update(lightning_ring&, float)
.fn "expand_ring_update__31@unnamed@zNPCTypeKingJelly_cpp@FR14lightning_ringf", local
/* 80146C7C 00143D5C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80146C80 00143D60  C0 43 00 40 */	lfs f2, 0x40(r3)
/* 80146C84 00143D64  C0 03 00 3C */	lfs f0, 0x3c(r3)
/* 80146C88 00143D68  EC 02 00 7A */	fmadds f0, f2, f1, f0
/* 80146C8C 00143D6C  D0 03 00 3C */	stfs f0, 0x3c(r3)
/* 80146C90 00143D70  C0 03 00 3C */	lfs f0, 0x3c(r3)
/* 80146C94 00143D74  C0 43 00 2C */	lfs f2, 0x2c(r3)
/* 80146C98 00143D78  FC 00 10 40 */	fcmpo cr0, f0, f2
/* 80146C9C 00143D7C  40 81 00 08 */	ble .L_80146CA4
/* 80146CA0 00143D80  D0 43 00 3C */	stfs f2, 0x3c(r3)
.L_80146CA4:
/* 80146CA4 00143D84  C0 43 00 3C */	lfs f2, 0x3c(r3)
/* 80146CA8 00143D88  C0 03 00 38 */	lfs f0, 0x38(r3)
/* 80146CAC 00143D8C  EC 02 00 7A */	fmadds f0, f2, f1, f0
/* 80146CB0 00143D90  D0 03 00 38 */	stfs f0, 0x38(r3)
/* 80146CB4 00143D94  C0 43 00 38 */	lfs f2, 0x38(r3)
/* 80146CB8 00143D98  C0 03 00 18 */	lfs f0, 0x18(r3)
/* 80146CBC 00143D9C  FC 02 00 40 */	fcmpo cr0, f2, f0
/* 80146CC0 00143DA0  40 81 00 58 */	ble .L_80146D18
/* 80146CC4 00143DA4  C0 03 00 44 */	lfs f0, 0x44(r3)
/* 80146CC8 00143DA8  EC 00 08 2A */	fadds f0, f0, f1
/* 80146CCC 00143DAC  D0 03 00 44 */	stfs f0, 0x44(r3)
/* 80146CD0 00143DB0  C0 23 00 44 */	lfs f1, 0x44(r3)
/* 80146CD4 00143DB4  C0 03 00 24 */	lfs f0, 0x24(r3)
/* 80146CD8 00143DB8  C0 42 A6 30 */	lfs f2, "@1868"@sda21(r2)
/* 80146CDC 00143DBC  EC 21 00 24 */	fdivs f1, f1, f0
/* 80146CE0 00143DC0  C0 02 A6 34 */	lfs f0, "@1869"@sda21(r2)
/* 80146CE4 00143DC4  EC 42 08 28 */	fsubs f2, f2, f1
/* 80146CE8 00143DC8  FC 02 00 40 */	fcmpo cr0, f2, f0
/* 80146CEC 00143DCC  40 80 00 10 */	bge .L_80146CFC
/* 80146CF0 00143DD0  38 00 00 00 */	li r0, 0x0
/* 80146CF4 00143DD4  98 03 00 53 */	stb r0, 0x53(r3)
/* 80146CF8 00143DD8  48 00 00 20 */	b .L_80146D18
.L_80146CFC:
/* 80146CFC 00143DDC  C0 22 A6 58 */	lfs f1, "@2007"@sda21(r2)
/* 80146D00 00143DE0  C0 02 A6 50 */	lfs f0, "@1987"@sda21(r2)
/* 80146D04 00143DE4  EC 01 00 BA */	fmadds f0, f1, f2, f0
/* 80146D08 00143DE8  FC 00 00 1E */	fctiwz f0, f0
/* 80146D0C 00143DEC  D8 01 00 08 */	stfd f0, 0x8(r1)
/* 80146D10 00143DF0  80 01 00 0C */	lwz r0, 0xc(r1)
/* 80146D14 00143DF4  98 03 00 53 */	stb r0, 0x53(r3)
.L_80146D18:
/* 80146D18 00143DF8  38 21 00 10 */	addi r1, r1, 0x10
/* 80146D1C 00143DFC  4E 80 00 20 */	blr
.endfn "expand_ring_update__31@unnamed@zNPCTypeKingJelly_cpp@FR14lightning_ringf"

# lightning_ring::create()
.fn create__14lightning_ringFv, global
/* 80146D20 00143E00  38 80 00 01 */	li r4, 0x1
/* 80146D24 00143E04  38 00 00 00 */	li r0, 0x0
/* 80146D28 00143E08  98 83 00 00 */	stb r4, 0x0(r3)
/* 80146D2C 00143E0C  90 03 00 7C */	stw r0, 0x7c(r3)
/* 80146D30 00143E10  4E 80 00 20 */	blr
.endfn create__14lightning_ringFv

# lightning_ring::destroy()
.fn destroy__14lightning_ringFv, global
/* 80146D34 00143E14  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 80146D38 00143E18  7C 08 02 A6 */	mflr r0
/* 80146D3C 00143E1C  90 01 00 24 */	stw r0, 0x24(r1)
/* 80146D40 00143E20  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 80146D44 00143E24  93 C1 00 18 */	stw r30, 0x18(r1)
/* 80146D48 00143E28  3B C0 00 00 */	li r30, 0x0
/* 80146D4C 00143E2C  93 A1 00 14 */	stw r29, 0x14(r1)
/* 80146D50 00143E30  7C 7D 1B 78 */	mr r29, r3
/* 80146D54 00143E34  7F BF EB 78 */	mr r31, r29
/* 80146D58 00143E38  48 00 00 14 */	b .L_80146D6C
.L_80146D5C:
/* 80146D5C 00143E3C  80 7F 00 5C */	lwz r3, 0x5c(r31)
/* 80146D60 00143E40  4B F5 AB 55 */	bl zLightningKill__FP10zLightning
/* 80146D64 00143E44  3B FF 00 04 */	addi r31, r31, 0x4
/* 80146D68 00143E48  3B DE 00 01 */	addi r30, r30, 0x1
.L_80146D6C:
/* 80146D6C 00143E4C  80 1D 00 7C */	lwz r0, 0x7c(r29)
/* 80146D70 00143E50  7C 1E 00 40 */	cmplw r30, r0
/* 80146D74 00143E54  41 80 FF E8 */	blt .L_80146D5C
/* 80146D78 00143E58  38 00 00 00 */	li r0, 0x0
/* 80146D7C 00143E5C  90 1D 00 7C */	stw r0, 0x7c(r29)
/* 80146D80 00143E60  98 1D 00 00 */	stb r0, 0x0(r29)
/* 80146D84 00143E64  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 80146D88 00143E68  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 80146D8C 00143E6C  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 80146D90 00143E70  80 01 00 24 */	lwz r0, 0x24(r1)
/* 80146D94 00143E74  7C 08 03 A6 */	mtlr r0
/* 80146D98 00143E78  38 21 00 20 */	addi r1, r1, 0x20
/* 80146D9C 00143E7C  4E 80 00 20 */	blr
.endfn destroy__14lightning_ringFv

# lightning_ring::refresh()
.fn refresh__14lightning_ringFv, global
/* 80146DA0 00143E80  94 21 FF D0 */	stwu r1, -0x30(r1)
/* 80146DA4 00143E84  7C 08 02 A6 */	mflr r0
/* 80146DA8 00143E88  90 01 00 34 */	stw r0, 0x34(r1)
/* 80146DAC 00143E8C  BF 41 00 18 */	stmw r26, 0x18(r1)
/* 80146DB0 00143E90  7C 7B 1B 78 */	mr r27, r3
/* 80146DB4 00143E94  88 03 00 00 */	lbz r0, 0x0(r3)
/* 80146DB8 00143E98  28 00 00 00 */	cmplwi r0, 0x0
/* 80146DBC 00143E9C  41 82 02 C0 */	beq .L_8014707C
/* 80146DC0 00143EA0  80 9B 00 04 */	lwz r4, 0x4(r27)
/* 80146DC4 00143EA4  38 61 00 08 */	addi r3, r1, 0x8
/* 80146DC8 00143EA8  80 1B 00 08 */	lwz r0, 0x8(r27)
/* 80146DCC 00143EAC  90 01 00 0C */	stw r0, 0xc(r1)
/* 80146DD0 00143EB0  90 81 00 08 */	stw r4, 0x8(r1)
/* 80146DD4 00143EB4  C0 21 00 0C */	lfs f1, 0xc(r1)
/* 80146DD8 00143EB8  80 1B 00 0C */	lwz r0, 0xc(r27)
/* 80146DDC 00143EBC  90 01 00 10 */	stw r0, 0x10(r1)
/* 80146DE0 00143EC0  C0 1B 00 34 */	lfs f0, 0x34(r27)
/* 80146DE4 00143EC4  EC 01 00 2A */	fadds f0, f1, f0
/* 80146DE8 00143EC8  D0 01 00 0C */	stfs f0, 0xc(r1)
/* 80146DEC 00143ECC  C0 3B 00 38 */	lfs f1, 0x38(r27)
/* 80146DF0 00143ED0  C0 5B 00 10 */	lfs f2, 0x10(r27)
/* 80146DF4 00143ED4  4B FF FB 6D */	bl "set_ring_segments__31@unnamed@zNPCTypeKingJelly_cpp@FRC5xVec3ff"
/* 80146DF8 00143ED8  80 DB 00 7C */	lwz r6, 0x7c(r27)
/* 80146DFC 00143EDC  7C 7E 1B 78 */	mr r30, r3
/* 80146E00 00143EE0  38 E0 00 00 */	li r7, 0x0
/* 80146E04 00143EE4  39 00 00 00 */	li r8, 0x0
/* 80146E08 00143EE8  28 06 00 00 */	cmplwi r6, 0x0
/* 80146E0C 00143EEC  40 81 00 E4 */	ble .L_80146EF0
/* 80146E10 00143EF0  28 06 00 08 */	cmplwi r6, 0x8
/* 80146E14 00143EF4  38 66 FF F8 */	addi r3, r6, -0x8
/* 80146E18 00143EF8  40 81 00 A8 */	ble .L_80146EC0
/* 80146E1C 00143EFC  38 03 00 07 */	addi r0, r3, 0x7
/* 80146E20 00143F00  7F 65 DB 78 */	mr r5, r27
/* 80146E24 00143F04  54 00 E8 FE */	srwi r0, r0, 3
/* 80146E28 00143F08  7C 09 03 A6 */	mtctr r0
/* 80146E2C 00143F0C  28 03 00 00 */	cmplwi r3, 0x0
/* 80146E30 00143F10  40 81 00 90 */	ble .L_80146EC0
.L_80146E34:
/* 80146E34 00143F14  80 85 00 5C */	lwz r4, 0x5c(r5)
/* 80146E38 00143F18  39 08 00 08 */	addi r8, r8, 0x8
/* 80146E3C 00143F1C  80 65 00 60 */	lwz r3, 0x60(r5)
/* 80146E40 00143F20  A8 04 01 88 */	lha r0, 0x188(r4)
/* 80146E44 00143F24  80 85 00 64 */	lwz r4, 0x64(r5)
/* 80146E48 00143F28  7C E0 3A 14 */	add r7, r0, r7
/* 80146E4C 00143F2C  A8 03 01 88 */	lha r0, 0x188(r3)
/* 80146E50 00143F30  38 E7 FF FF */	addi r7, r7, -0x1
/* 80146E54 00143F34  80 65 00 68 */	lwz r3, 0x68(r5)
/* 80146E58 00143F38  7C E0 3A 14 */	add r7, r0, r7
/* 80146E5C 00143F3C  A8 04 01 88 */	lha r0, 0x188(r4)
/* 80146E60 00143F40  38 E7 FF FF */	addi r7, r7, -0x1
/* 80146E64 00143F44  80 85 00 6C */	lwz r4, 0x6c(r5)
/* 80146E68 00143F48  7C E0 3A 14 */	add r7, r0, r7
/* 80146E6C 00143F4C  A8 03 01 88 */	lha r0, 0x188(r3)
/* 80146E70 00143F50  38 E7 FF FF */	addi r7, r7, -0x1
/* 80146E74 00143F54  80 65 00 70 */	lwz r3, 0x70(r5)
/* 80146E78 00143F58  7C E0 3A 14 */	add r7, r0, r7
/* 80146E7C 00143F5C  A8 04 01 88 */	lha r0, 0x188(r4)
/* 80146E80 00143F60  38 E7 FF FF */	addi r7, r7, -0x1
/* 80146E84 00143F64  80 85 00 74 */	lwz r4, 0x74(r5)
/* 80146E88 00143F68  7C E0 3A 14 */	add r7, r0, r7
/* 80146E8C 00143F6C  A8 03 01 88 */	lha r0, 0x188(r3)
/* 80146E90 00143F70  38 E7 FF FF */	addi r7, r7, -0x1
/* 80146E94 00143F74  80 65 00 78 */	lwz r3, 0x78(r5)
/* 80146E98 00143F78  7C E0 3A 14 */	add r7, r0, r7
/* 80146E9C 00143F7C  A8 84 01 88 */	lha r4, 0x188(r4)
/* 80146EA0 00143F80  38 E7 FF FF */	addi r7, r7, -0x1
/* 80146EA4 00143F84  A8 03 01 88 */	lha r0, 0x188(r3)
/* 80146EA8 00143F88  7C E4 3A 14 */	add r7, r4, r7
/* 80146EAC 00143F8C  38 A5 00 20 */	addi r5, r5, 0x20
/* 80146EB0 00143F90  38 E7 FF FF */	addi r7, r7, -0x1
/* 80146EB4 00143F94  7C E0 3A 14 */	add r7, r0, r7
/* 80146EB8 00143F98  38 E7 FF FF */	addi r7, r7, -0x1
/* 80146EBC 00143F9C  42 00 FF 78 */	bdnz .L_80146E34
.L_80146EC0:
/* 80146EC0 00143FA0  55 03 10 3A */	slwi r3, r8, 2
/* 80146EC4 00143FA4  7C 08 30 50 */	subf r0, r8, r6
/* 80146EC8 00143FA8  7C 9B 1A 14 */	add r4, r27, r3
/* 80146ECC 00143FAC  7C 09 03 A6 */	mtctr r0
/* 80146ED0 00143FB0  7C 08 30 40 */	cmplw r8, r6
/* 80146ED4 00143FB4  40 80 00 1C */	bge .L_80146EF0
.L_80146ED8:
/* 80146ED8 00143FB8  80 64 00 5C */	lwz r3, 0x5c(r4)
/* 80146EDC 00143FBC  38 84 00 04 */	addi r4, r4, 0x4
/* 80146EE0 00143FC0  A8 03 01 88 */	lha r0, 0x188(r3)
/* 80146EE4 00143FC4  7C E0 3A 14 */	add r7, r0, r7
/* 80146EE8 00143FC8  38 E7 FF FF */	addi r7, r7, -0x1
/* 80146EEC 00143FCC  42 00 FF EC */	bdnz .L_80146ED8
.L_80146EF0:
/* 80146EF0 00143FD0  7C 07 F0 00 */	cmpw r7, r30
/* 80146EF4 00143FD4  40 82 00 C0 */	bne .L_80146FB4
/* 80146EF8 00143FD8  38 00 00 00 */	li r0, 0x0
/* 80146EFC 00143FDC  3C 60 80 33 */	lis r3, "ring_segments__31@unnamed@zNPCTypeKingJelly_cpp@"@ha
/* 80146F00 00143FE0  90 1B 00 7C */	stw r0, 0x7c(r27)
/* 80146F04 00143FE4  3B 83 8E 88 */	addi r28, r3, "ring_segments__31@unnamed@zNPCTypeKingJelly_cpp@"@l
/* 80146F08 00143FE8  3B E0 00 00 */	li r31, 0x0
/* 80146F0C 00143FEC  48 00 00 9C */	b .L_80146FA8
.L_80146F10:
/* 80146F10 00143FF0  80 7B 00 7C */	lwz r3, 0x7c(r27)
/* 80146F14 00143FF4  38 1F 00 10 */	addi r0, r31, 0x10
/* 80146F18 00143FF8  7C 00 F0 00 */	cmpw r0, r30
/* 80146F1C 00143FFC  3B 40 00 10 */	li r26, 0x10
/* 80146F20 00144000  54 63 10 3A */	slwi r3, r3, 2
/* 80146F24 00144004  38 03 00 5C */	addi r0, r3, 0x5c
/* 80146F28 00144008  7F BB 00 2E */	lwzx r29, r27, r0
/* 80146F2C 0014400C  40 81 00 0C */	ble .L_80146F38
/* 80146F30 00144010  7C 7F F0 50 */	subf r3, r31, r30
/* 80146F34 00144014  3B 43 00 01 */	addi r26, r3, 0x1
.L_80146F38:
/* 80146F38 00144018  38 1A FF FF */	addi r0, r26, -0x1
/* 80146F3C 0014401C  7F A3 EB 78 */	mr r3, r29
/* 80146F40 00144020  7C 9F 02 14 */	add r4, r31, r0
/* 80146F44 00144024  7C 04 F3 D6 */	divw r0, r4, r30
/* 80146F48 00144028  7C 00 F1 D6 */	mullw r0, r0, r30
/* 80146F4C 0014402C  7C 00 20 50 */	subf r0, r0, r4
/* 80146F50 00144030  1C 9F 00 0C */	mulli r4, r31, 0xc
/* 80146F54 00144034  1C 00 00 0C */	mulli r0, r0, 0xc
/* 80146F58 00144038  7C 9C 22 14 */	add r4, r28, r4
/* 80146F5C 0014403C  7C BC 02 14 */	add r5, r28, r0
/* 80146F60 00144040  4B F5 A9 69 */	bl zLightningModifyEndpoints__FP10zLightningP5xVec3P5xVec3
/* 80146F64 00144044  38 7D 01 9C */	addi r3, r29, 0x19c
/* 80146F68 00144048  57 40 10 3A */	slwi r0, r26, 2
/* 80146F6C 0014404C  7C 03 02 14 */	add r0, r3, r0
/* 80146F70 00144050  48 00 00 10 */	b .L_80146F80
.L_80146F74:
/* 80146F74 00144054  C0 1B 00 4C */	lfs f0, 0x4c(r27)
/* 80146F78 00144058  D0 03 00 00 */	stfs f0, 0x0(r3)
/* 80146F7C 0014405C  38 63 00 04 */	addi r3, r3, 0x4
.L_80146F80:
/* 80146F80 00144060  7C 03 00 40 */	cmplw r3, r0
/* 80146F84 00144064  40 82 FF F0 */	bne .L_80146F74
/* 80146F88 00144068  38 7D 02 28 */	addi r3, r29, 0x228
/* 80146F8C 0014406C  38 9B 00 50 */	addi r4, r27, 0x50
/* 80146F90 00144070  4B ED 10 09 */	bl __as__10iColor_tagFRC10iColor_tag
/* 80146F94 00144074  80 7B 00 7C */	lwz r3, 0x7c(r27)
/* 80146F98 00144078  7F FA FA 14 */	add r31, r26, r31
/* 80146F9C 0014407C  3B FF FF FF */	addi r31, r31, -0x1
/* 80146FA0 00144080  38 03 00 01 */	addi r0, r3, 0x1
/* 80146FA4 00144084  90 1B 00 7C */	stw r0, 0x7c(r27)
.L_80146FA8:
/* 80146FA8 00144088  7C 1F F0 00 */	cmpw r31, r30
/* 80146FAC 0014408C  41 80 FF 64 */	blt .L_80146F10
/* 80146FB0 00144090  48 00 00 CC */	b .L_8014707C
.L_80146FB4:
/* 80146FB4 00144094  7F 7C DB 78 */	mr r28, r27
/* 80146FB8 00144098  3B 40 00 00 */	li r26, 0x0
/* 80146FBC 0014409C  48 00 00 14 */	b .L_80146FD0
.L_80146FC0:
/* 80146FC0 001440A0  80 7C 00 5C */	lwz r3, 0x5c(r28)
/* 80146FC4 001440A4  4B F5 A8 F1 */	bl zLightningKill__FP10zLightning
/* 80146FC8 001440A8  3B 9C 00 04 */	addi r28, r28, 0x4
/* 80146FCC 001440AC  3B 5A 00 01 */	addi r26, r26, 0x1
.L_80146FD0:
/* 80146FD0 001440B0  80 1B 00 7C */	lwz r0, 0x7c(r27)
/* 80146FD4 001440B4  7C 1A 00 40 */	cmplw r26, r0
/* 80146FD8 001440B8  41 80 FF E8 */	blt .L_80146FC0
/* 80146FDC 001440BC  38 00 00 00 */	li r0, 0x0
/* 80146FE0 001440C0  3C 60 80 33 */	lis r3, "ring_segments__31@unnamed@zNPCTypeKingJelly_cpp@"@ha
/* 80146FE4 001440C4  90 1B 00 7C */	stw r0, 0x7c(r27)
/* 80146FE8 001440C8  3B E3 8E 88 */	addi r31, r3, "ring_segments__31@unnamed@zNPCTypeKingJelly_cpp@"@l
/* 80146FEC 001440CC  3B A0 00 00 */	li r29, 0x0
/* 80146FF0 001440D0  48 00 00 84 */	b .L_80147074
.L_80146FF4:
/* 80146FF4 001440D4  38 1D 00 10 */	addi r0, r29, 0x10
/* 80146FF8 001440D8  3B 80 00 10 */	li r28, 0x10
/* 80146FFC 001440DC  7C 00 F0 00 */	cmpw r0, r30
/* 80147000 001440E0  40 81 00 0C */	ble .L_8014700C
/* 80147004 001440E4  7C 7D F0 50 */	subf r3, r29, r30
/* 80147008 001440E8  3B 83 00 01 */	addi r28, r3, 0x1
.L_8014700C:
/* 8014700C 001440EC  38 DC FF FF */	addi r6, r28, -0x1
/* 80147010 001440F0  7F 63 DB 78 */	mr r3, r27
/* 80147014 001440F4  7C 9D 32 14 */	add r4, r29, r6
/* 80147018 001440F8  38 E0 00 01 */	li r7, 0x1
/* 8014701C 001440FC  7C 04 F3 D6 */	divw r0, r4, r30
/* 80147020 00144100  7C 00 F1 D6 */	mullw r0, r0, r30
/* 80147024 00144104  7C 00 20 50 */	subf r0, r0, r4
/* 80147028 00144108  1C 9D 00 0C */	mulli r4, r29, 0xc
/* 8014702C 0014410C  1C 00 00 0C */	mulli r0, r0, 0xc
/* 80147030 00144110  7C 9F 22 14 */	add r4, r31, r4
/* 80147034 00144114  7C BF 02 14 */	add r5, r31, r0
/* 80147038 00144118  48 00 00 59 */	bl create_arc__14lightning_ringFP5xVec3P5xVec3ii
/* 8014703C 0014411C  80 1B 00 7C */	lwz r0, 0x7c(r27)
/* 80147040 00144120  54 04 10 3A */	slwi r4, r0, 2
/* 80147044 00144124  38 04 00 5C */	addi r0, r4, 0x5c
/* 80147048 00144128  7C 7B 01 2E */	stwx r3, r27, r0
/* 8014704C 0014412C  80 9B 00 7C */	lwz r4, 0x7c(r27)
/* 80147050 00144130  54 83 10 3A */	slwi r3, r4, 2
/* 80147054 00144134  38 03 00 5C */	addi r0, r3, 0x5c
/* 80147058 00144138  7C 1B 00 2E */	lwzx r0, r27, r0
/* 8014705C 0014413C  28 00 00 00 */	cmplwi r0, 0x0
/* 80147060 00144140  41 82 00 1C */	beq .L_8014707C
/* 80147064 00144144  38 04 00 01 */	addi r0, r4, 0x1
/* 80147068 00144148  7F BC EA 14 */	add r29, r28, r29
/* 8014706C 0014414C  90 1B 00 7C */	stw r0, 0x7c(r27)
/* 80147070 00144150  3B BD FF FF */	addi r29, r29, -0x1
.L_80147074:
/* 80147074 00144154  7C 1D F0 00 */	cmpw r29, r30
/* 80147078 00144158  41 80 FF 7C */	blt .L_80146FF4
.L_8014707C:
/* 8014707C 0014415C  BB 41 00 18 */	lmw r26, 0x18(r1)
/* 80147080 00144160  80 01 00 34 */	lwz r0, 0x34(r1)
/* 80147084 00144164  7C 08 03 A6 */	mtlr r0
/* 80147088 00144168  38 21 00 30 */	addi r1, r1, 0x30
/* 8014708C 0014416C  4E 80 00 20 */	blr
.endfn refresh__14lightning_ringFv

# lightning_ring::create_arc(xVec3*, xVec3*, int, int)
.fn create_arc__14lightning_ringFP5xVec3P5xVec3ii, global
/* 80147090 00144170  94 21 FF A0 */	stwu r1, -0x60(r1)
/* 80147094 00144174  7C 08 02 A6 */	mflr r0
/* 80147098 00144178  90 01 00 64 */	stw r0, 0x64(r1)
/* 8014709C 0014417C  7C 06 3A 14 */	add r0, r6, r7
/* 801470A0 00144180  93 E1 00 5C */	stw r31, 0x5c(r1)
/* 801470A4 00144184  7C BF 2B 78 */	mr r31, r5
/* 801470A8 00144188  93 C1 00 58 */	stw r30, 0x58(r1)
/* 801470AC 0014418C  7C 9E 23 78 */	mr r30, r4
/* 801470B0 00144190  93 A1 00 54 */	stw r29, 0x54(r1)
/* 801470B4 00144194  7C 7D 1B 78 */	mr r29, r3
/* 801470B8 00144198  38 9D 00 50 */	addi r4, r29, 0x50
/* 801470BC 0014419C  88 63 00 48 */	lbz r3, 0x48(r3)
/* 801470C0 001441A0  7C 63 00 34 */	cntlzw r3, r3
/* 801470C4 001441A4  B0 01 00 20 */	sth r0, 0x20(r1)
/* 801470C8 001441A8  54 60 D9 7E */	srwi r0, r3, 5
/* 801470CC 001441AC  90 01 00 08 */	stw r0, 0x8(r1)
/* 801470D0 001441B0  38 61 00 30 */	addi r3, r1, 0x30
/* 801470D4 001441B4  B0 E1 00 22 */	sth r7, 0x22(r1)
/* 801470D8 001441B8  C0 1D 00 4C */	lfs f0, 0x4c(r29)
/* 801470DC 001441BC  D0 01 00 2C */	stfs f0, 0x2c(r1)
/* 801470E0 001441C0  4B ED 0E B9 */	bl __as__10iColor_tagFRC10iColor_tag
/* 801470E4 001441C4  C0 02 A6 30 */	lfs f0, "@1868"@sda21(r2)
/* 801470E8 001441C8  38 00 02 BA */	li r0, 0x2ba
/* 801470EC 001441CC  D0 01 00 34 */	stfs f0, 0x34(r1)
/* 801470F0 001441D0  C0 02 A6 34 */	lfs f0, "@1869"@sda21(r2)
/* 801470F4 001441D4  D0 01 00 28 */	stfs f0, 0x28(r1)
/* 801470F8 001441D8  C0 1D 00 54 */	lfs f0, 0x54(r29)
/* 801470FC 001441DC  D0 01 00 14 */	stfs f0, 0x14(r1)
/* 80147100 001441E0  C0 02 A6 5C */	lfs f0, "@2084"@sda21(r2)
/* 80147104 001441E4  D0 01 00 24 */	stfs f0, 0x24(r1)
/* 80147108 001441E8  90 01 00 38 */	stw r0, 0x38(r1)
/* 8014710C 001441EC  4B EE 9B 7D */	bl xurand__Fv
/* 80147110 001441F0  C0 02 A6 60 */	lfs f0, "@2085"@sda21(r2)
/* 80147114 001441F4  EC 00 00 72 */	fmuls f0, f0, f1
/* 80147118 001441F8  D0 01 00 0C */	stfs f0, 0xc(r1)
/* 8014711C 001441FC  4B EE 9B 6D */	bl xurand__Fv
/* 80147120 00144200  A8 81 00 20 */	lha r4, 0x20(r1)
/* 80147124 00144204  3C 00 43 30 */	lis r0, 0x4330
/* 80147128 00144208  90 01 00 48 */	stw r0, 0x48(r1)
/* 8014712C 0014420C  38 61 00 08 */	addi r3, r1, 0x8
/* 80147130 00144210  6C 80 80 00 */	xoris r0, r4, 0x8000
/* 80147134 00144214  C8 42 A6 68 */	lfd f2, "@2088"@sda21(r2)
/* 80147138 00144218  90 01 00 4C */	stw r0, 0x4c(r1)
/* 8014713C 0014421C  C0 82 A6 50 */	lfs f4, "@1987"@sda21(r2)
/* 80147140 00144220  C8 01 00 48 */	lfd f0, 0x48(r1)
/* 80147144 00144224  C0 62 A6 64 */	lfs f3, "@2086"@sda21(r2)
/* 80147148 00144228  EC 00 10 28 */	fsubs f0, f0, f2
/* 8014714C 0014422C  C0 5D 00 58 */	lfs f2, 0x58(r29)
/* 80147150 00144230  EC 24 18 7A */	fmadds f1, f4, f1, f3
/* 80147154 00144234  93 C1 00 18 */	stw r30, 0x18(r1)
/* 80147158 00144238  EC 02 00 32 */	fmuls f0, f2, f0
/* 8014715C 0014423C  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 80147160 00144240  EC 00 00 72 */	fmuls f0, f0, f1
/* 80147164 00144244  D0 01 00 10 */	stfs f0, 0x10(r1)
/* 80147168 00144248  4B F5 88 09 */	bl zLightningAdd__FP16_tagLightningAdd
/* 8014716C 0014424C  80 01 00 64 */	lwz r0, 0x64(r1)
/* 80147170 00144250  83 E1 00 5C */	lwz r31, 0x5c(r1)
/* 80147174 00144254  83 C1 00 58 */	lwz r30, 0x58(r1)
/* 80147178 00144258  83 A1 00 54 */	lwz r29, 0x54(r1)
/* 8014717C 0014425C  7C 08 03 A6 */	mtlr r0
/* 80147180 00144260  38 21 00 60 */	addi r1, r1, 0x60
/* 80147184 00144264  4E 80 00 20 */	blr
.endfn create_arc__14lightning_ringFP5xVec3P5xVec3ii

# ZNPC_AnimTable_KingJelly()
.fn ZNPC_AnimTable_KingJelly__Fv, global
/* 80147188 00144268  94 21 FF 90 */	stwu r1, -0x70(r1)
/* 8014718C 0014426C  7C 08 02 A6 */	mflr r0
/* 80147190 00144270  3C 60 80 27 */	lis r3, "@stringBase0"@ha
/* 80147194 00144274  3C 80 80 27 */	lis r4, "@2092"@ha
/* 80147198 00144278  90 01 00 74 */	stw r0, 0x74(r1)
/* 8014719C 0014427C  38 63 D8 B0 */	addi r3, r3, "@stringBase0"@l
/* 801471A0 00144280  38 63 00 65 */	addi r3, r3, 0x65
/* 801471A4 00144284  38 A0 00 00 */	li r5, 0x0
/* 801471A8 00144288  BE C1 00 48 */	stmw r22, 0x48(r1)
/* 801471AC 0014428C  3B 24 D8 58 */	addi r25, r4, "@2092"@l
/* 801471B0 00144290  38 80 00 00 */	li r4, 0x0
/* 801471B4 00144294  83 19 00 00 */	lwz r24, 0x0(r25)
/* 801471B8 00144298  82 F9 00 04 */	lwz r23, 0x4(r25)
/* 801471BC 0014429C  82 D9 00 08 */	lwz r22, 0x8(r25)
/* 801471C0 001442A0  81 99 00 0C */	lwz r12, 0xc(r25)
/* 801471C4 001442A4  81 79 00 10 */	lwz r11, 0x10(r25)
/* 801471C8 001442A8  81 59 00 14 */	lwz r10, 0x14(r25)
/* 801471CC 001442AC  81 39 00 18 */	lwz r9, 0x18(r25)
/* 801471D0 001442B0  81 19 00 1C */	lwz r8, 0x1c(r25)
/* 801471D4 001442B4  80 F9 00 20 */	lwz r7, 0x20(r25)
/* 801471D8 001442B8  80 D9 00 24 */	lwz r6, 0x24(r25)
/* 801471DC 001442BC  80 19 00 28 */	lwz r0, 0x28(r25)
/* 801471E0 001442C0  93 01 00 18 */	stw r24, 0x18(r1)
/* 801471E4 001442C4  92 E1 00 1C */	stw r23, 0x1c(r1)
/* 801471E8 001442C8  92 C1 00 20 */	stw r22, 0x20(r1)
/* 801471EC 001442CC  91 81 00 24 */	stw r12, 0x24(r1)
/* 801471F0 001442D0  91 61 00 28 */	stw r11, 0x28(r1)
/* 801471F4 001442D4  91 41 00 2C */	stw r10, 0x2c(r1)
/* 801471F8 001442D8  91 21 00 30 */	stw r9, 0x30(r1)
/* 801471FC 001442DC  91 01 00 34 */	stw r8, 0x34(r1)
/* 80147200 001442E0  90 E1 00 38 */	stw r7, 0x38(r1)
/* 80147204 001442E4  90 C1 00 3C */	stw r6, 0x3c(r1)
/* 80147208 001442E8  90 01 00 40 */	stw r0, 0x40(r1)
/* 8014720C 001442EC  4B EB FA 65 */	bl xAnimTableNew__FPCcPP10xAnimTableUi
/* 80147210 001442F0  3C A0 80 00 */	lis r5, xAnimDefaultBeforeEnter__FP9xAnimPlayP10xAnimState@ha
/* 80147214 001442F4  3C 80 80 2A */	lis r4, g_strz_subbanim@ha
/* 80147218 001442F8  38 05 6C FC */	addi r0, r5, xAnimDefaultBeforeEnter__FP9xAnimPlayP10xAnimState@l
/* 8014721C 001442FC  7C 76 1B 78 */	mr r22, r3
/* 80147220 00144300  90 01 00 08 */	stw r0, 0x8(r1)
/* 80147224 00144304  38 00 00 00 */	li r0, 0x0
/* 80147228 00144308  38 84 91 3C */	addi r4, r4, g_strz_subbanim@l
/* 8014722C 0014430C  38 A0 00 10 */	li r5, 0x10
/* 80147230 00144310  90 01 00 0C */	stw r0, 0xc(r1)
/* 80147234 00144314  38 C0 00 00 */	li r6, 0x0
/* 80147238 00144318  38 E0 00 00 */	li r7, 0x0
/* 8014723C 0014431C  39 00 00 00 */	li r8, 0x0
/* 80147240 00144320  90 01 00 10 */	stw r0, 0x10(r1)
/* 80147244 00144324  39 20 00 00 */	li r9, 0x0
/* 80147248 00144328  39 40 00 00 */	li r10, 0x0
/* 8014724C 0014432C  80 84 00 04 */	lwz r4, 0x4(r4)
/* 80147250 00144330  C0 22 A6 30 */	lfs f1, "@1868"@sda21(r2)
/* 80147254 00144334  C0 42 A6 34 */	lfs f2, "@1869"@sda21(r2)
/* 80147258 00144338  4B EB FB 01 */	bl xAnimTableNewState__FP10xAnimTablePCcUiUifPfPffPUsPvPFP9xAnimPlayP10xAnimState_vPFP10xAnimStateP11xAnimSinglePv_vPFP9xAnimPlayP5xQuatP5xVec3i_v
/* 8014725C 0014433C  3C 80 80 00 */	lis r4, xAnimDefaultBeforeEnter__FP9xAnimPlayP10xAnimState@ha
/* 80147260 00144340  3C 60 80 2A */	lis r3, g_strz_subbanim@ha
/* 80147264 00144344  38 84 6C FC */	addi r4, r4, xAnimDefaultBeforeEnter__FP9xAnimPlayP10xAnimState@l
/* 80147268 00144348  38 00 00 00 */	li r0, 0x0
/* 8014726C 0014434C  90 81 00 08 */	stw r4, 0x8(r1)
/* 80147270 00144350  3A E3 91 3C */	addi r23, r3, g_strz_subbanim@l
/* 80147274 00144354  7E C3 B3 78 */	mr r3, r22
/* 80147278 00144358  38 A0 00 20 */	li r5, 0x20
/* 8014727C 0014435C  90 01 00 0C */	stw r0, 0xc(r1)
/* 80147280 00144360  38 C0 00 00 */	li r6, 0x0
/* 80147284 00144364  38 E0 00 00 */	li r7, 0x0
/* 80147288 00144368  39 00 00 00 */	li r8, 0x0
/* 8014728C 0014436C  90 01 00 10 */	stw r0, 0x10(r1)
/* 80147290 00144370  39 20 00 00 */	li r9, 0x0
/* 80147294 00144374  39 40 00 00 */	li r10, 0x0
/* 80147298 00144378  80 97 00 08 */	lwz r4, 0x8(r23)
/* 8014729C 0014437C  C0 22 A6 30 */	lfs f1, "@1868"@sda21(r2)
/* 801472A0 00144380  C0 42 A6 34 */	lfs f2, "@1869"@sda21(r2)
/* 801472A4 00144384  4B EB FA B5 */	bl xAnimTableNewState__FP10xAnimTablePCcUiUifPfPffPUsPvPFP9xAnimPlayP10xAnimState_vPFP10xAnimStateP11xAnimSinglePv_vPFP9xAnimPlayP5xQuatP5xVec3i_v
/* 801472A8 00144388  3C 80 80 00 */	lis r4, xAnimDefaultBeforeEnter__FP9xAnimPlayP10xAnimState@ha
/* 801472AC 0014438C  3C 60 80 2A */	lis r3, g_strz_subbanim@ha
/* 801472B0 00144390  38 84 6C FC */	addi r4, r4, xAnimDefaultBeforeEnter__FP9xAnimPlayP10xAnimState@l
/* 801472B4 00144394  38 00 00 00 */	li r0, 0x0
/* 801472B8 00144398  90 81 00 08 */	stw r4, 0x8(r1)
/* 801472BC 0014439C  3B 03 91 3C */	addi r24, r3, g_strz_subbanim@l
/* 801472C0 001443A0  7E C3 B3 78 */	mr r3, r22
/* 801472C4 001443A4  38 A0 00 20 */	li r5, 0x20
/* 801472C8 001443A8  90 01 00 0C */	stw r0, 0xc(r1)
/* 801472CC 001443AC  38 C0 00 00 */	li r6, 0x0
/* 801472D0 001443B0  38 E0 00 00 */	li r7, 0x0
/* 801472D4 001443B4  39 00 00 00 */	li r8, 0x0
/* 801472D8 001443B8  90 01 00 10 */	stw r0, 0x10(r1)
/* 801472DC 001443BC  39 20 00 00 */	li r9, 0x0
/* 801472E0 001443C0  39 40 00 00 */	li r10, 0x0
/* 801472E4 001443C4  80 98 00 0C */	lwz r4, 0xc(r24)
/* 801472E8 001443C8  C0 22 A6 30 */	lfs f1, "@1868"@sda21(r2)
/* 801472EC 001443CC  C0 42 A6 34 */	lfs f2, "@1869"@sda21(r2)
/* 801472F0 001443D0  4B EB FA 69 */	bl xAnimTableNewState__FP10xAnimTablePCcUiUifPfPffPUsPvPFP9xAnimPlayP10xAnimState_vPFP10xAnimStateP11xAnimSinglePv_vPFP9xAnimPlayP5xQuatP5xVec3i_v
/* 801472F4 001443D4  3C 80 80 00 */	lis r4, xAnimDefaultBeforeEnter__FP9xAnimPlayP10xAnimState@ha
/* 801472F8 001443D8  3C 60 80 2A */	lis r3, g_strz_subbanim@ha
/* 801472FC 001443DC  38 84 6C FC */	addi r4, r4, xAnimDefaultBeforeEnter__FP9xAnimPlayP10xAnimState@l
/* 80147300 001443E0  38 00 00 00 */	li r0, 0x0
/* 80147304 001443E4  90 81 00 08 */	stw r4, 0x8(r1)
/* 80147308 001443E8  3B 23 91 3C */	addi r25, r3, g_strz_subbanim@l
/* 8014730C 001443EC  7E C3 B3 78 */	mr r3, r22
/* 80147310 001443F0  38 A0 00 20 */	li r5, 0x20
/* 80147314 001443F4  90 01 00 0C */	stw r0, 0xc(r1)
/* 80147318 001443F8  38 C0 00 00 */	li r6, 0x0
/* 8014731C 001443FC  38 E0 00 00 */	li r7, 0x0
/* 80147320 00144400  39 00 00 00 */	li r8, 0x0
/* 80147324 00144404  90 01 00 10 */	stw r0, 0x10(r1)
/* 80147328 00144408  39 20 00 00 */	li r9, 0x0
/* 8014732C 0014440C  39 40 00 00 */	li r10, 0x0
/* 80147330 00144410  80 99 00 1C */	lwz r4, 0x1c(r25)
/* 80147334 00144414  C0 22 A6 30 */	lfs f1, "@1868"@sda21(r2)
/* 80147338 00144418  C0 42 A6 34 */	lfs f2, "@1869"@sda21(r2)
/* 8014733C 0014441C  4B EB FA 1D */	bl xAnimTableNewState__FP10xAnimTablePCcUiUifPfPffPUsPvPFP9xAnimPlayP10xAnimState_vPFP10xAnimStateP11xAnimSinglePv_vPFP9xAnimPlayP5xQuatP5xVec3i_v
/* 80147340 00144420  3C 80 80 00 */	lis r4, xAnimDefaultBeforeEnter__FP9xAnimPlayP10xAnimState@ha
/* 80147344 00144424  3C 60 80 2A */	lis r3, g_strz_subbanim@ha
/* 80147348 00144428  38 84 6C FC */	addi r4, r4, xAnimDefaultBeforeEnter__FP9xAnimPlayP10xAnimState@l
/* 8014734C 0014442C  38 00 00 00 */	li r0, 0x0
/* 80147350 00144430  90 81 00 08 */	stw r4, 0x8(r1)
/* 80147354 00144434  3B 43 91 3C */	addi r26, r3, g_strz_subbanim@l
/* 80147358 00144438  7E C3 B3 78 */	mr r3, r22
/* 8014735C 0014443C  38 A0 00 10 */	li r5, 0x10
/* 80147360 00144440  90 01 00 0C */	stw r0, 0xc(r1)
/* 80147364 00144444  38 C0 00 00 */	li r6, 0x0
/* 80147368 00144448  38 E0 00 00 */	li r7, 0x0
/* 8014736C 0014444C  39 00 00 00 */	li r8, 0x0
/* 80147370 00144450  90 01 00 10 */	stw r0, 0x10(r1)
/* 80147374 00144454  39 20 00 00 */	li r9, 0x0
/* 80147378 00144458  39 40 00 00 */	li r10, 0x0
/* 8014737C 0014445C  80 9A 00 20 */	lwz r4, 0x20(r26)
/* 80147380 00144460  C0 22 A6 30 */	lfs f1, "@1868"@sda21(r2)
/* 80147384 00144464  C0 42 A6 34 */	lfs f2, "@1869"@sda21(r2)
/* 80147388 00144468  4B EB F9 D1 */	bl xAnimTableNewState__FP10xAnimTablePCcUiUifPfPffPUsPvPFP9xAnimPlayP10xAnimState_vPFP10xAnimStateP11xAnimSinglePv_vPFP9xAnimPlayP5xQuatP5xVec3i_v
/* 8014738C 0014446C  3C 80 80 00 */	lis r4, xAnimDefaultBeforeEnter__FP9xAnimPlayP10xAnimState@ha
/* 80147390 00144470  3C 60 80 2A */	lis r3, g_strz_subbanim@ha
/* 80147394 00144474  38 84 6C FC */	addi r4, r4, xAnimDefaultBeforeEnter__FP9xAnimPlayP10xAnimState@l
/* 80147398 00144478  38 00 00 00 */	li r0, 0x0
/* 8014739C 0014447C  90 81 00 08 */	stw r4, 0x8(r1)
/* 801473A0 00144480  3B 63 91 3C */	addi r27, r3, g_strz_subbanim@l
/* 801473A4 00144484  7E C3 B3 78 */	mr r3, r22
/* 801473A8 00144488  38 A0 00 20 */	li r5, 0x20
/* 801473AC 0014448C  90 01 00 0C */	stw r0, 0xc(r1)
/* 801473B0 00144490  38 C0 00 00 */	li r6, 0x0
/* 801473B4 00144494  38 E0 00 00 */	li r7, 0x0
/* 801473B8 00144498  39 00 00 00 */	li r8, 0x0
/* 801473BC 0014449C  90 01 00 10 */	stw r0, 0x10(r1)
/* 801473C0 001444A0  39 20 00 00 */	li r9, 0x0
/* 801473C4 001444A4  39 40 00 00 */	li r10, 0x0
/* 801473C8 001444A8  80 9B 00 30 */	lwz r4, 0x30(r27)
/* 801473CC 001444AC  C0 22 A6 30 */	lfs f1, "@1868"@sda21(r2)
/* 801473D0 001444B0  C0 42 A6 34 */	lfs f2, "@1869"@sda21(r2)
/* 801473D4 001444B4  4B EB F9 85 */	bl xAnimTableNewState__FP10xAnimTablePCcUiUifPfPffPUsPvPFP9xAnimPlayP10xAnimState_vPFP10xAnimStateP11xAnimSinglePv_vPFP9xAnimPlayP5xQuatP5xVec3i_v
/* 801473D8 001444B8  3C 80 80 00 */	lis r4, xAnimDefaultBeforeEnter__FP9xAnimPlayP10xAnimState@ha
/* 801473DC 001444BC  3C 60 80 2A */	lis r3, g_strz_subbanim@ha
/* 801473E0 001444C0  38 84 6C FC */	addi r4, r4, xAnimDefaultBeforeEnter__FP9xAnimPlayP10xAnimState@l
/* 801473E4 001444C4  38 00 00 00 */	li r0, 0x0
/* 801473E8 001444C8  90 81 00 08 */	stw r4, 0x8(r1)
/* 801473EC 001444CC  3B 83 91 3C */	addi r28, r3, g_strz_subbanim@l
/* 801473F0 001444D0  7E C3 B3 78 */	mr r3, r22
/* 801473F4 001444D4  38 A0 00 10 */	li r5, 0x10
/* 801473F8 001444D8  90 01 00 0C */	stw r0, 0xc(r1)
/* 801473FC 001444DC  38 C0 00 00 */	li r6, 0x0
/* 80147400 001444E0  38 E0 00 00 */	li r7, 0x0
/* 80147404 001444E4  39 00 00 00 */	li r8, 0x0
/* 80147408 001444E8  90 01 00 10 */	stw r0, 0x10(r1)
/* 8014740C 001444EC  39 20 00 00 */	li r9, 0x0
/* 80147410 001444F0  39 40 00 00 */	li r10, 0x0
/* 80147414 001444F4  80 9C 00 34 */	lwz r4, 0x34(r28)
/* 80147418 001444F8  C0 22 A6 30 */	lfs f1, "@1868"@sda21(r2)
/* 8014741C 001444FC  C0 42 A6 34 */	lfs f2, "@1869"@sda21(r2)
/* 80147420 00144500  4B EB F9 39 */	bl xAnimTableNewState__FP10xAnimTablePCcUiUifPfPffPUsPvPFP9xAnimPlayP10xAnimState_vPFP10xAnimStateP11xAnimSinglePv_vPFP9xAnimPlayP5xQuatP5xVec3i_v
/* 80147424 00144504  3C 80 80 00 */	lis r4, xAnimDefaultBeforeEnter__FP9xAnimPlayP10xAnimState@ha
/* 80147428 00144508  3C 60 80 2A */	lis r3, g_strz_subbanim@ha
/* 8014742C 0014450C  38 84 6C FC */	addi r4, r4, xAnimDefaultBeforeEnter__FP9xAnimPlayP10xAnimState@l
/* 80147430 00144510  38 00 00 00 */	li r0, 0x0
/* 80147434 00144514  90 81 00 08 */	stw r4, 0x8(r1)
/* 80147438 00144518  3B A3 91 3C */	addi r29, r3, g_strz_subbanim@l
/* 8014743C 0014451C  7E C3 B3 78 */	mr r3, r22
/* 80147440 00144520  38 A0 00 20 */	li r5, 0x20
/* 80147444 00144524  90 01 00 0C */	stw r0, 0xc(r1)
/* 80147448 00144528  38 C0 00 00 */	li r6, 0x0
/* 8014744C 0014452C  38 E0 00 00 */	li r7, 0x0
/* 80147450 00144530  39 00 00 00 */	li r8, 0x0
/* 80147454 00144534  90 01 00 10 */	stw r0, 0x10(r1)
/* 80147458 00144538  39 20 00 00 */	li r9, 0x0
/* 8014745C 0014453C  39 40 00 00 */	li r10, 0x0
/* 80147460 00144540  80 9D 00 38 */	lwz r4, 0x38(r29)
/* 80147464 00144544  C0 22 A6 30 */	lfs f1, "@1868"@sda21(r2)
/* 80147468 00144548  C0 42 A6 34 */	lfs f2, "@1869"@sda21(r2)
/* 8014746C 0014454C  4B EB F8 ED */	bl xAnimTableNewState__FP10xAnimTablePCcUiUifPfPffPUsPvPFP9xAnimPlayP10xAnimState_vPFP10xAnimStateP11xAnimSinglePv_vPFP9xAnimPlayP5xQuatP5xVec3i_v
/* 80147470 00144550  3C 80 80 00 */	lis r4, xAnimDefaultBeforeEnter__FP9xAnimPlayP10xAnimState@ha
/* 80147474 00144554  3C 60 80 2A */	lis r3, g_strz_subbanim@ha
/* 80147478 00144558  38 84 6C FC */	addi r4, r4, xAnimDefaultBeforeEnter__FP9xAnimPlayP10xAnimState@l
/* 8014747C 0014455C  38 00 00 00 */	li r0, 0x0
/* 80147480 00144560  90 81 00 08 */	stw r4, 0x8(r1)
/* 80147484 00144564  3B C3 91 3C */	addi r30, r3, g_strz_subbanim@l
/* 80147488 00144568  7E C3 B3 78 */	mr r3, r22
/* 8014748C 0014456C  38 A0 00 20 */	li r5, 0x20
/* 80147490 00144570  90 01 00 0C */	stw r0, 0xc(r1)
/* 80147494 00144574  38 C0 00 00 */	li r6, 0x0
/* 80147498 00144578  38 E0 00 00 */	li r7, 0x0
/* 8014749C 0014457C  39 00 00 00 */	li r8, 0x0
/* 801474A0 00144580  90 01 00 10 */	stw r0, 0x10(r1)
/* 801474A4 00144584  39 20 00 00 */	li r9, 0x0
/* 801474A8 00144588  39 40 00 00 */	li r10, 0x0
/* 801474AC 0014458C  80 9E 00 24 */	lwz r4, 0x24(r30)
/* 801474B0 00144590  C0 22 A6 30 */	lfs f1, "@1868"@sda21(r2)
/* 801474B4 00144594  C0 42 A6 34 */	lfs f2, "@1869"@sda21(r2)
/* 801474B8 00144598  4B EB F8 A1 */	bl xAnimTableNewState__FP10xAnimTablePCcUiUifPfPffPUsPvPFP9xAnimPlayP10xAnimState_vPFP10xAnimStateP11xAnimSinglePv_vPFP9xAnimPlayP5xQuatP5xVec3i_v
/* 801474BC 0014459C  3C 80 80 00 */	lis r4, xAnimDefaultBeforeEnter__FP9xAnimPlayP10xAnimState@ha
/* 801474C0 001445A0  3C 60 80 2A */	lis r3, g_strz_subbanim@ha
/* 801474C4 001445A4  38 84 6C FC */	addi r4, r4, xAnimDefaultBeforeEnter__FP9xAnimPlayP10xAnimState@l
/* 801474C8 001445A8  38 00 00 00 */	li r0, 0x0
/* 801474CC 001445AC  90 81 00 08 */	stw r4, 0x8(r1)
/* 801474D0 001445B0  3B E3 91 3C */	addi r31, r3, g_strz_subbanim@l
/* 801474D4 001445B4  7E C3 B3 78 */	mr r3, r22
/* 801474D8 001445B8  38 A0 00 10 */	li r5, 0x10
/* 801474DC 001445BC  90 01 00 0C */	stw r0, 0xc(r1)
/* 801474E0 001445C0  38 C0 00 00 */	li r6, 0x0
/* 801474E4 001445C4  38 E0 00 00 */	li r7, 0x0
/* 801474E8 001445C8  39 00 00 00 */	li r8, 0x0
/* 801474EC 001445CC  90 01 00 10 */	stw r0, 0x10(r1)
/* 801474F0 001445D0  39 20 00 00 */	li r9, 0x0
/* 801474F4 001445D4  39 40 00 00 */	li r10, 0x0
/* 801474F8 001445D8  80 9F 00 3C */	lwz r4, 0x3c(r31)
/* 801474FC 001445DC  C0 22 A6 30 */	lfs f1, "@1868"@sda21(r2)
/* 80147500 001445E0  C0 42 A6 34 */	lfs f2, "@1869"@sda21(r2)
/* 80147504 001445E4  4B EB F8 55 */	bl xAnimTableNewState__FP10xAnimTablePCcUiUifPfPffPUsPvPFP9xAnimPlayP10xAnimState_vPFP10xAnimStateP11xAnimSinglePv_vPFP9xAnimPlayP5xQuatP5xVec3i_v
/* 80147508 001445E8  3C 60 80 2A */	lis r3, g_strz_subbanim@ha
/* 8014750C 001445EC  C0 22 A6 70 */	lfs f1, "@2105"@sda21(r2)
/* 80147510 001445F0  38 83 91 3C */	addi r4, r3, g_strz_subbanim@l
/* 80147514 001445F4  38 A1 00 18 */	addi r5, r1, 0x18
/* 80147518 001445F8  7E C3 B3 78 */	mr r3, r22
/* 8014751C 001445FC  38 C0 00 01 */	li r6, 0x1
/* 80147520 00144600  4B FA CE D9 */	bl NPCC_BuildStandardAnimTran__FP10xAnimTablePPcPiif
/* 80147524 00144604  38 00 00 00 */	li r0, 0x0
/* 80147528 00144608  7E C3 B3 78 */	mr r3, r22
/* 8014752C 0014460C  90 01 00 08 */	stw r0, 0x8(r1)
/* 80147530 00144610  38 C0 00 00 */	li r6, 0x0
/* 80147534 00144614  38 E0 00 00 */	li r7, 0x0
/* 80147538 00144618  39 00 00 10 */	li r8, 0x10
/* 8014753C 0014461C  90 01 00 0C */	stw r0, 0xc(r1)
/* 80147540 00144620  39 20 00 00 */	li r9, 0x0
/* 80147544 00144624  39 40 00 00 */	li r10, 0x0
/* 80147548 00144628  C0 22 A6 34 */	lfs f1, "@1869"@sda21(r2)
/* 8014754C 0014462C  80 9B 00 30 */	lwz r4, 0x30(r27)
/* 80147550 00144630  FC 40 08 90 */	fmr f2, f1
/* 80147554 00144634  80 BA 00 20 */	lwz r5, 0x20(r26)
/* 80147558 00144638  C0 62 A6 74 */	lfs f3, "@2106"@sda21(r2)
/* 8014755C 0014463C  4B EB FE 65 */	bl xAnimTableNewTransition__FP10xAnimTablePCcPCcPFP15xAnimTransitionP11xAnimSinglePv_UiPFP15xAnimTransitionP11xAnimSinglePv_UiUiUiffUsUsfPUs
/* 80147560 00144640  38 00 00 00 */	li r0, 0x0
/* 80147564 00144644  7E C3 B3 78 */	mr r3, r22
/* 80147568 00144648  90 01 00 08 */	stw r0, 0x8(r1)
/* 8014756C 0014464C  38 C0 00 00 */	li r6, 0x0
/* 80147570 00144650  38 E0 00 00 */	li r7, 0x0
/* 80147574 00144654  39 00 00 00 */	li r8, 0x0
/* 80147578 00144658  90 01 00 0C */	stw r0, 0xc(r1)
/* 8014757C 0014465C  39 20 00 00 */	li r9, 0x0
/* 80147580 00144660  39 40 00 00 */	li r10, 0x0
/* 80147584 00144664  C0 22 A6 34 */	lfs f1, "@1869"@sda21(r2)
/* 80147588 00144668  80 9C 00 34 */	lwz r4, 0x34(r28)
/* 8014758C 0014466C  FC 40 08 90 */	fmr f2, f1
/* 80147590 00144670  80 BA 00 20 */	lwz r5, 0x20(r26)
/* 80147594 00144674  C0 62 A6 74 */	lfs f3, "@2106"@sda21(r2)
/* 80147598 00144678  4B EB FE 29 */	bl xAnimTableNewTransition__FP10xAnimTablePCcPCcPFP15xAnimTransitionP11xAnimSinglePv_UiPFP15xAnimTransitionP11xAnimSinglePv_UiUiUiffUsUsfPUs
/* 8014759C 0014467C  38 00 00 00 */	li r0, 0x0
/* 801475A0 00144680  7E C3 B3 78 */	mr r3, r22
/* 801475A4 00144684  90 01 00 08 */	stw r0, 0x8(r1)
/* 801475A8 00144688  38 C0 00 00 */	li r6, 0x0
/* 801475AC 0014468C  38 E0 00 00 */	li r7, 0x0
/* 801475B0 00144690  39 00 00 00 */	li r8, 0x0
/* 801475B4 00144694  90 01 00 0C */	stw r0, 0xc(r1)
/* 801475B8 00144698  39 20 00 00 */	li r9, 0x0
/* 801475BC 0014469C  39 40 00 00 */	li r10, 0x0
/* 801475C0 001446A0  C0 22 A6 34 */	lfs f1, "@1869"@sda21(r2)
/* 801475C4 001446A4  80 9A 00 20 */	lwz r4, 0x20(r26)
/* 801475C8 001446A8  FC 40 08 90 */	fmr f2, f1
/* 801475CC 001446AC  80 BC 00 34 */	lwz r5, 0x34(r28)
/* 801475D0 001446B0  C0 62 A6 74 */	lfs f3, "@2106"@sda21(r2)
/* 801475D4 001446B4  4B EB FD ED */	bl xAnimTableNewTransition__FP10xAnimTablePCcPCcPFP15xAnimTransitionP11xAnimSinglePv_UiPFP15xAnimTransitionP11xAnimSinglePv_UiUiUiffUsUsfPUs
/* 801475D8 001446B8  38 00 00 00 */	li r0, 0x0
/* 801475DC 001446BC  7E C3 B3 78 */	mr r3, r22
/* 801475E0 001446C0  90 01 00 08 */	stw r0, 0x8(r1)
/* 801475E4 001446C4  38 C0 00 00 */	li r6, 0x0
/* 801475E8 001446C8  38 E0 00 00 */	li r7, 0x0
/* 801475EC 001446CC  39 00 00 00 */	li r8, 0x0
/* 801475F0 001446D0  90 01 00 0C */	stw r0, 0xc(r1)
/* 801475F4 001446D4  39 20 00 00 */	li r9, 0x0
/* 801475F8 001446D8  39 40 00 00 */	li r10, 0x0
/* 801475FC 001446DC  C0 22 A6 34 */	lfs f1, "@1869"@sda21(r2)
/* 80147600 001446E0  80 9C 00 34 */	lwz r4, 0x34(r28)
/* 80147604 001446E4  FC 40 08 90 */	fmr f2, f1
/* 80147608 001446E8  80 BD 00 38 */	lwz r5, 0x38(r29)
/* 8014760C 001446EC  C0 62 A6 74 */	lfs f3, "@2106"@sda21(r2)
/* 80147610 001446F0  4B EB FD B1 */	bl xAnimTableNewTransition__FP10xAnimTablePCcPCcPFP15xAnimTransitionP11xAnimSinglePv_UiPFP15xAnimTransitionP11xAnimSinglePv_UiUiUiffUsUsfPUs
/* 80147614 001446F4  38 00 00 00 */	li r0, 0x0
/* 80147618 001446F8  7E C3 B3 78 */	mr r3, r22
/* 8014761C 001446FC  90 01 00 08 */	stw r0, 0x8(r1)
/* 80147620 00144700  38 C0 00 00 */	li r6, 0x0
/* 80147624 00144704  38 E0 00 00 */	li r7, 0x0
/* 80147628 00144708  39 00 00 00 */	li r8, 0x0
/* 8014762C 0014470C  90 01 00 0C */	stw r0, 0xc(r1)
/* 80147630 00144710  39 20 00 00 */	li r9, 0x0
/* 80147634 00144714  39 40 00 00 */	li r10, 0x0
/* 80147638 00144718  C0 22 A6 34 */	lfs f1, "@1869"@sda21(r2)
/* 8014763C 0014471C  80 97 00 08 */	lwz r4, 0x8(r23)
/* 80147640 00144720  FC 40 08 90 */	fmr f2, f1
/* 80147644 00144724  80 BE 00 24 */	lwz r5, 0x24(r30)
/* 80147648 00144728  C0 62 A6 74 */	lfs f3, "@2106"@sda21(r2)
/* 8014764C 0014472C  4B EB FD 75 */	bl xAnimTableNewTransition__FP10xAnimTablePCcPCcPFP15xAnimTransitionP11xAnimSinglePv_UiPFP15xAnimTransitionP11xAnimSinglePv_UiUiUiffUsUsfPUs
/* 80147650 00144730  38 00 00 00 */	li r0, 0x0
/* 80147654 00144734  7E C3 B3 78 */	mr r3, r22
/* 80147658 00144738  90 01 00 08 */	stw r0, 0x8(r1)
/* 8014765C 0014473C  38 C0 00 00 */	li r6, 0x0
/* 80147660 00144740  38 E0 00 00 */	li r7, 0x0
/* 80147664 00144744  39 00 00 00 */	li r8, 0x0
/* 80147668 00144748  90 01 00 0C */	stw r0, 0xc(r1)
/* 8014766C 0014474C  39 20 00 00 */	li r9, 0x0
/* 80147670 00144750  39 40 00 00 */	li r10, 0x0
/* 80147674 00144754  C0 22 A6 34 */	lfs f1, "@1869"@sda21(r2)
/* 80147678 00144758  80 98 00 0C */	lwz r4, 0xc(r24)
/* 8014767C 0014475C  FC 40 08 90 */	fmr f2, f1
/* 80147680 00144760  80 BE 00 24 */	lwz r5, 0x24(r30)
/* 80147684 00144764  C0 62 A6 74 */	lfs f3, "@2106"@sda21(r2)
/* 80147688 00144768  4B EB FD 39 */	bl xAnimTableNewTransition__FP10xAnimTablePCcPCcPFP15xAnimTransitionP11xAnimSinglePv_UiPFP15xAnimTransitionP11xAnimSinglePv_UiUiUiffUsUsfPUs
/* 8014768C 0014476C  38 00 00 00 */	li r0, 0x0
/* 80147690 00144770  7E C3 B3 78 */	mr r3, r22
/* 80147694 00144774  90 01 00 08 */	stw r0, 0x8(r1)
/* 80147698 00144778  38 C0 00 00 */	li r6, 0x0
/* 8014769C 0014477C  38 E0 00 00 */	li r7, 0x0
/* 801476A0 00144780  39 00 00 00 */	li r8, 0x0
/* 801476A4 00144784  90 01 00 0C */	stw r0, 0xc(r1)
/* 801476A8 00144788  39 20 00 00 */	li r9, 0x0
/* 801476AC 0014478C  39 40 00 00 */	li r10, 0x0
/* 801476B0 00144790  C0 22 A6 34 */	lfs f1, "@1869"@sda21(r2)
/* 801476B4 00144794  80 99 00 1C */	lwz r4, 0x1c(r25)
/* 801476B8 00144798  FC 40 08 90 */	fmr f2, f1
/* 801476BC 0014479C  80 BE 00 24 */	lwz r5, 0x24(r30)
/* 801476C0 001447A0  C0 62 A6 74 */	lfs f3, "@2106"@sda21(r2)
/* 801476C4 001447A4  4B EB FC FD */	bl xAnimTableNewTransition__FP10xAnimTablePCcPCcPFP15xAnimTransitionP11xAnimSinglePv_UiPFP15xAnimTransitionP11xAnimSinglePv_UiUiUiffUsUsfPUs
/* 801476C8 001447A8  38 00 00 00 */	li r0, 0x0
/* 801476CC 001447AC  7E C3 B3 78 */	mr r3, r22
/* 801476D0 001447B0  90 01 00 08 */	stw r0, 0x8(r1)
/* 801476D4 001447B4  38 C0 00 00 */	li r6, 0x0
/* 801476D8 001447B8  38 E0 00 00 */	li r7, 0x0
/* 801476DC 001447BC  39 00 00 00 */	li r8, 0x0
/* 801476E0 001447C0  90 01 00 0C */	stw r0, 0xc(r1)
/* 801476E4 001447C4  39 20 00 00 */	li r9, 0x0
/* 801476E8 001447C8  39 40 00 00 */	li r10, 0x0
/* 801476EC 001447CC  C0 22 A6 34 */	lfs f1, "@1869"@sda21(r2)
/* 801476F0 001447D0  80 9B 00 30 */	lwz r4, 0x30(r27)
/* 801476F4 001447D4  FC 40 08 90 */	fmr f2, f1
/* 801476F8 001447D8  80 BE 00 24 */	lwz r5, 0x24(r30)
/* 801476FC 001447DC  C0 62 A6 74 */	lfs f3, "@2106"@sda21(r2)
/* 80147700 001447E0  4B EB FC C1 */	bl xAnimTableNewTransition__FP10xAnimTablePCcPCcPFP15xAnimTransitionP11xAnimSinglePv_UiPFP15xAnimTransitionP11xAnimSinglePv_UiUiUiffUsUsfPUs
/* 80147704 001447E4  38 00 00 00 */	li r0, 0x0
/* 80147708 001447E8  7E C3 B3 78 */	mr r3, r22
/* 8014770C 001447EC  90 01 00 08 */	stw r0, 0x8(r1)
/* 80147710 001447F0  38 C0 00 00 */	li r6, 0x0
/* 80147714 001447F4  38 E0 00 00 */	li r7, 0x0
/* 80147718 001447F8  39 00 00 00 */	li r8, 0x0
/* 8014771C 001447FC  90 01 00 0C */	stw r0, 0xc(r1)
/* 80147720 00144800  39 20 00 00 */	li r9, 0x0
/* 80147724 00144804  39 40 00 00 */	li r10, 0x0
/* 80147728 00144808  C0 22 A6 34 */	lfs f1, "@1869"@sda21(r2)
/* 8014772C 0014480C  80 9C 00 34 */	lwz r4, 0x34(r28)
/* 80147730 00144810  FC 40 08 90 */	fmr f2, f1
/* 80147734 00144814  80 BE 00 24 */	lwz r5, 0x24(r30)
/* 80147738 00144818  C0 62 A6 74 */	lfs f3, "@2106"@sda21(r2)
/* 8014773C 0014481C  4B EB FC 85 */	bl xAnimTableNewTransition__FP10xAnimTablePCcPCcPFP15xAnimTransitionP11xAnimSinglePv_UiPFP15xAnimTransitionP11xAnimSinglePv_UiUiUiffUsUsfPUs
/* 80147740 00144820  38 00 00 00 */	li r0, 0x0
/* 80147744 00144824  7E C3 B3 78 */	mr r3, r22
/* 80147748 00144828  90 01 00 08 */	stw r0, 0x8(r1)
/* 8014774C 0014482C  38 C0 00 00 */	li r6, 0x0
/* 80147750 00144830  38 E0 00 00 */	li r7, 0x0
/* 80147754 00144834  39 00 00 00 */	li r8, 0x0
/* 80147758 00144838  90 01 00 0C */	stw r0, 0xc(r1)
/* 8014775C 0014483C  39 20 00 00 */	li r9, 0x0
/* 80147760 00144840  39 40 00 00 */	li r10, 0x0
/* 80147764 00144844  C0 22 A6 34 */	lfs f1, "@1869"@sda21(r2)
/* 80147768 00144848  80 9A 00 20 */	lwz r4, 0x20(r26)
/* 8014776C 0014484C  FC 40 08 90 */	fmr f2, f1
/* 80147770 00144850  80 BE 00 24 */	lwz r5, 0x24(r30)
/* 80147774 00144854  C0 62 A6 74 */	lfs f3, "@2106"@sda21(r2)
/* 80147778 00144858  4B EB FC 49 */	bl xAnimTableNewTransition__FP10xAnimTablePCcPCcPFP15xAnimTransitionP11xAnimSinglePv_UiPFP15xAnimTransitionP11xAnimSinglePv_UiUiUiffUsUsfPUs
/* 8014777C 0014485C  38 00 00 00 */	li r0, 0x0
/* 80147780 00144860  7E C3 B3 78 */	mr r3, r22
/* 80147784 00144864  90 01 00 08 */	stw r0, 0x8(r1)
/* 80147788 00144868  38 C0 00 00 */	li r6, 0x0
/* 8014778C 0014486C  38 E0 00 00 */	li r7, 0x0
/* 80147790 00144870  39 00 00 00 */	li r8, 0x0
/* 80147794 00144874  90 01 00 0C */	stw r0, 0xc(r1)
/* 80147798 00144878  39 20 00 00 */	li r9, 0x0
/* 8014779C 0014487C  39 40 00 00 */	li r10, 0x0
/* 801477A0 00144880  C0 22 A6 34 */	lfs f1, "@1869"@sda21(r2)
/* 801477A4 00144884  80 9D 00 38 */	lwz r4, 0x38(r29)
/* 801477A8 00144888  FC 40 08 90 */	fmr f2, f1
/* 801477AC 0014488C  80 BE 00 24 */	lwz r5, 0x24(r30)
/* 801477B0 00144890  C0 62 A6 74 */	lfs f3, "@2106"@sda21(r2)
/* 801477B4 00144894  4B EB FC 0D */	bl xAnimTableNewTransition__FP10xAnimTablePCcPCcPFP15xAnimTransitionP11xAnimSinglePv_UiPFP15xAnimTransitionP11xAnimSinglePv_UiUiUiffUsUsfPUs
/* 801477B8 00144898  38 00 00 00 */	li r0, 0x0
/* 801477BC 0014489C  7E C3 B3 78 */	mr r3, r22
/* 801477C0 001448A0  90 01 00 08 */	stw r0, 0x8(r1)
/* 801477C4 001448A4  38 C0 00 00 */	li r6, 0x0
/* 801477C8 001448A8  38 E0 00 00 */	li r7, 0x0
/* 801477CC 001448AC  39 00 00 00 */	li r8, 0x0
/* 801477D0 001448B0  90 01 00 0C */	stw r0, 0xc(r1)
/* 801477D4 001448B4  39 20 00 00 */	li r9, 0x0
/* 801477D8 001448B8  39 40 00 00 */	li r10, 0x0
/* 801477DC 001448BC  C0 22 A6 34 */	lfs f1, "@1869"@sda21(r2)
/* 801477E0 001448C0  80 9F 00 3C */	lwz r4, 0x3c(r31)
/* 801477E4 001448C4  FC 40 08 90 */	fmr f2, f1
/* 801477E8 001448C8  80 BE 00 24 */	lwz r5, 0x24(r30)
/* 801477EC 001448CC  C0 62 A6 74 */	lfs f3, "@2106"@sda21(r2)
/* 801477F0 001448D0  4B EB FB D1 */	bl xAnimTableNewTransition__FP10xAnimTablePCcPCcPFP15xAnimTransitionP11xAnimSinglePv_UiPFP15xAnimTransitionP11xAnimSinglePv_UiUiUiffUsUsfPUs
/* 801477F4 001448D4  38 00 00 00 */	li r0, 0x0
/* 801477F8 001448D8  7E C3 B3 78 */	mr r3, r22
/* 801477FC 001448DC  90 01 00 08 */	stw r0, 0x8(r1)
/* 80147800 001448E0  38 C0 00 00 */	li r6, 0x0
/* 80147804 001448E4  38 E0 00 00 */	li r7, 0x0
/* 80147808 001448E8  39 00 00 00 */	li r8, 0x0
/* 8014780C 001448EC  90 01 00 0C */	stw r0, 0xc(r1)
/* 80147810 001448F0  39 20 00 00 */	li r9, 0x0
/* 80147814 001448F4  39 40 00 00 */	li r10, 0x0
/* 80147818 001448F8  C0 22 A6 34 */	lfs f1, "@1869"@sda21(r2)
/* 8014781C 001448FC  80 97 00 08 */	lwz r4, 0x8(r23)
/* 80147820 00144900  FC 40 08 90 */	fmr f2, f1
/* 80147824 00144904  80 B9 00 1C */	lwz r5, 0x1c(r25)
/* 80147828 00144908  C0 62 A6 74 */	lfs f3, "@2106"@sda21(r2)
/* 8014782C 0014490C  4B EB FB 95 */	bl xAnimTableNewTransition__FP10xAnimTablePCcPCcPFP15xAnimTransitionP11xAnimSinglePv_UiPFP15xAnimTransitionP11xAnimSinglePv_UiUiUiffUsUsfPUs
/* 80147830 00144910  38 00 00 00 */	li r0, 0x0
/* 80147834 00144914  7E C3 B3 78 */	mr r3, r22
/* 80147838 00144918  90 01 00 08 */	stw r0, 0x8(r1)
/* 8014783C 0014491C  38 C0 00 00 */	li r6, 0x0
/* 80147840 00144920  38 E0 00 00 */	li r7, 0x0
/* 80147844 00144924  39 00 00 00 */	li r8, 0x0
/* 80147848 00144928  90 01 00 0C */	stw r0, 0xc(r1)
/* 8014784C 0014492C  39 20 00 00 */	li r9, 0x0
/* 80147850 00144930  39 40 00 00 */	li r10, 0x0
/* 80147854 00144934  C0 22 A6 34 */	lfs f1, "@1869"@sda21(r2)
/* 80147858 00144938  80 98 00 0C */	lwz r4, 0xc(r24)
/* 8014785C 0014493C  FC 40 08 90 */	fmr f2, f1
/* 80147860 00144940  80 B9 00 1C */	lwz r5, 0x1c(r25)
/* 80147864 00144944  C0 62 A6 74 */	lfs f3, "@2106"@sda21(r2)
/* 80147868 00144948  4B EB FB 59 */	bl xAnimTableNewTransition__FP10xAnimTablePCcPCcPFP15xAnimTransitionP11xAnimSinglePv_UiPFP15xAnimTransitionP11xAnimSinglePv_UiUiUiffUsUsfPUs
/* 8014786C 0014494C  38 00 00 00 */	li r0, 0x0
/* 80147870 00144950  7E C3 B3 78 */	mr r3, r22
/* 80147874 00144954  90 01 00 08 */	stw r0, 0x8(r1)
/* 80147878 00144958  38 C0 00 00 */	li r6, 0x0
/* 8014787C 0014495C  38 E0 00 00 */	li r7, 0x0
/* 80147880 00144960  39 00 00 00 */	li r8, 0x0
/* 80147884 00144964  90 01 00 0C */	stw r0, 0xc(r1)
/* 80147888 00144968  39 20 00 00 */	li r9, 0x0
/* 8014788C 0014496C  39 40 00 00 */	li r10, 0x0
/* 80147890 00144970  C0 22 A6 34 */	lfs f1, "@1869"@sda21(r2)
/* 80147894 00144974  80 9B 00 30 */	lwz r4, 0x30(r27)
/* 80147898 00144978  FC 40 08 90 */	fmr f2, f1
/* 8014789C 0014497C  80 B9 00 1C */	lwz r5, 0x1c(r25)
/* 801478A0 00144980  C0 62 A6 74 */	lfs f3, "@2106"@sda21(r2)
/* 801478A4 00144984  4B EB FB 1D */	bl xAnimTableNewTransition__FP10xAnimTablePCcPCcPFP15xAnimTransitionP11xAnimSinglePv_UiPFP15xAnimTransitionP11xAnimSinglePv_UiUiUiffUsUsfPUs
/* 801478A8 00144988  38 00 00 00 */	li r0, 0x0
/* 801478AC 0014498C  7E C3 B3 78 */	mr r3, r22
/* 801478B0 00144990  90 01 00 08 */	stw r0, 0x8(r1)
/* 801478B4 00144994  38 C0 00 00 */	li r6, 0x0
/* 801478B8 00144998  38 E0 00 00 */	li r7, 0x0
/* 801478BC 0014499C  39 00 00 00 */	li r8, 0x0
/* 801478C0 001449A0  90 01 00 0C */	stw r0, 0xc(r1)
/* 801478C4 001449A4  39 20 00 00 */	li r9, 0x0
/* 801478C8 001449A8  39 40 00 00 */	li r10, 0x0
/* 801478CC 001449AC  C0 22 A6 34 */	lfs f1, "@1869"@sda21(r2)
/* 801478D0 001449B0  80 9C 00 34 */	lwz r4, 0x34(r28)
/* 801478D4 001449B4  FC 40 08 90 */	fmr f2, f1
/* 801478D8 001449B8  80 B9 00 1C */	lwz r5, 0x1c(r25)
/* 801478DC 001449BC  C0 62 A6 74 */	lfs f3, "@2106"@sda21(r2)
/* 801478E0 001449C0  4B EB FA E1 */	bl xAnimTableNewTransition__FP10xAnimTablePCcPCcPFP15xAnimTransitionP11xAnimSinglePv_UiPFP15xAnimTransitionP11xAnimSinglePv_UiUiUiffUsUsfPUs
/* 801478E4 001449C4  38 00 00 00 */	li r0, 0x0
/* 801478E8 001449C8  7E C3 B3 78 */	mr r3, r22
/* 801478EC 001449CC  90 01 00 08 */	stw r0, 0x8(r1)
/* 801478F0 001449D0  38 C0 00 00 */	li r6, 0x0
/* 801478F4 001449D4  38 E0 00 00 */	li r7, 0x0
/* 801478F8 001449D8  39 00 00 00 */	li r8, 0x0
/* 801478FC 001449DC  90 01 00 0C */	stw r0, 0xc(r1)
/* 80147900 001449E0  39 20 00 00 */	li r9, 0x0
/* 80147904 001449E4  39 40 00 00 */	li r10, 0x0
/* 80147908 001449E8  C0 22 A6 34 */	lfs f1, "@1869"@sda21(r2)
/* 8014790C 001449EC  80 9A 00 20 */	lwz r4, 0x20(r26)
/* 80147910 001449F0  FC 40 08 90 */	fmr f2, f1
/* 80147914 001449F4  80 B9 00 1C */	lwz r5, 0x1c(r25)
/* 80147918 001449F8  C0 62 A6 74 */	lfs f3, "@2106"@sda21(r2)
/* 8014791C 001449FC  4B EB FA A5 */	bl xAnimTableNewTransition__FP10xAnimTablePCcPCcPFP15xAnimTransitionP11xAnimSinglePv_UiPFP15xAnimTransitionP11xAnimSinglePv_UiUiUiffUsUsfPUs
/* 80147920 00144A00  38 00 00 00 */	li r0, 0x0
/* 80147924 00144A04  7E C3 B3 78 */	mr r3, r22
/* 80147928 00144A08  90 01 00 08 */	stw r0, 0x8(r1)
/* 8014792C 00144A0C  38 C0 00 00 */	li r6, 0x0
/* 80147930 00144A10  38 E0 00 00 */	li r7, 0x0
/* 80147934 00144A14  39 00 00 00 */	li r8, 0x0
/* 80147938 00144A18  90 01 00 0C */	stw r0, 0xc(r1)
/* 8014793C 00144A1C  39 20 00 00 */	li r9, 0x0
/* 80147940 00144A20  39 40 00 00 */	li r10, 0x0
/* 80147944 00144A24  C0 22 A6 34 */	lfs f1, "@1869"@sda21(r2)
/* 80147948 00144A28  80 9D 00 38 */	lwz r4, 0x38(r29)
/* 8014794C 00144A2C  FC 40 08 90 */	fmr f2, f1
/* 80147950 00144A30  80 B9 00 1C */	lwz r5, 0x1c(r25)
/* 80147954 00144A34  C0 62 A6 74 */	lfs f3, "@2106"@sda21(r2)
/* 80147958 00144A38  4B EB FA 69 */	bl xAnimTableNewTransition__FP10xAnimTablePCcPCcPFP15xAnimTransitionP11xAnimSinglePv_UiPFP15xAnimTransitionP11xAnimSinglePv_UiUiUiffUsUsfPUs
/* 8014795C 00144A3C  38 00 00 00 */	li r0, 0x0
/* 80147960 00144A40  7E C3 B3 78 */	mr r3, r22
/* 80147964 00144A44  90 01 00 08 */	stw r0, 0x8(r1)
/* 80147968 00144A48  38 C0 00 00 */	li r6, 0x0
/* 8014796C 00144A4C  38 E0 00 00 */	li r7, 0x0
/* 80147970 00144A50  39 00 00 00 */	li r8, 0x0
/* 80147974 00144A54  90 01 00 0C */	stw r0, 0xc(r1)
/* 80147978 00144A58  39 20 00 00 */	li r9, 0x0
/* 8014797C 00144A5C  39 40 00 00 */	li r10, 0x0
/* 80147980 00144A60  C0 22 A6 34 */	lfs f1, "@1869"@sda21(r2)
/* 80147984 00144A64  80 9F 00 3C */	lwz r4, 0x3c(r31)
/* 80147988 00144A68  FC 40 08 90 */	fmr f2, f1
/* 8014798C 00144A6C  80 B9 00 1C */	lwz r5, 0x1c(r25)
/* 80147990 00144A70  C0 62 A6 74 */	lfs f3, "@2106"@sda21(r2)
/* 80147994 00144A74  4B EB FA 2D */	bl xAnimTableNewTransition__FP10xAnimTablePCcPCcPFP15xAnimTransitionP11xAnimSinglePv_UiPFP15xAnimTransitionP11xAnimSinglePv_UiUiUiffUsUsfPUs
/* 80147998 00144A78  38 00 00 00 */	li r0, 0x0
/* 8014799C 00144A7C  7E C3 B3 78 */	mr r3, r22
/* 801479A0 00144A80  90 01 00 08 */	stw r0, 0x8(r1)
/* 801479A4 00144A84  38 C0 00 00 */	li r6, 0x0
/* 801479A8 00144A88  38 E0 00 00 */	li r7, 0x0
/* 801479AC 00144A8C  39 00 00 00 */	li r8, 0x0
/* 801479B0 00144A90  90 01 00 0C */	stw r0, 0xc(r1)
/* 801479B4 00144A94  39 20 00 00 */	li r9, 0x0
/* 801479B8 00144A98  39 40 00 00 */	li r10, 0x0
/* 801479BC 00144A9C  C0 22 A6 34 */	lfs f1, "@1869"@sda21(r2)
/* 801479C0 00144AA0  80 9E 00 24 */	lwz r4, 0x24(r30)
/* 801479C4 00144AA4  FC 40 08 90 */	fmr f2, f1
/* 801479C8 00144AA8  80 BF 00 3C */	lwz r5, 0x3c(r31)
/* 801479CC 00144AAC  C0 62 A6 74 */	lfs f3, "@2106"@sda21(r2)
/* 801479D0 00144AB0  4B EB F9 F1 */	bl xAnimTableNewTransition__FP10xAnimTablePCcPCcPFP15xAnimTransitionP11xAnimSinglePv_UiPFP15xAnimTransitionP11xAnimSinglePv_UiUiUiffUsUsfPUs
/* 801479D4 00144AB4  7E C3 B3 78 */	mr r3, r22
/* 801479D8 00144AB8  BA C1 00 48 */	lmw r22, 0x48(r1)
/* 801479DC 00144ABC  80 01 00 74 */	lwz r0, 0x74(r1)
/* 801479E0 00144AC0  7C 08 03 A6 */	mtlr r0
/* 801479E4 00144AC4  38 21 00 70 */	addi r1, r1, 0x70
/* 801479E8 00144AC8  4E 80 00 20 */	blr
.endfn ZNPC_AnimTable_KingJelly__Fv

# zNPCKingJelly::zNPCKingJelly(int)
.fn __ct__13zNPCKingJellyFi, global
/* 801479EC 00144ACC  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801479F0 00144AD0  7C 08 02 A6 */	mflr r0
/* 801479F4 00144AD4  90 01 00 14 */	stw r0, 0x14(r1)
/* 801479F8 00144AD8  93 E1 00 0C */	stw r31, 0xc(r1)
/* 801479FC 00144ADC  7C 7F 1B 78 */	mr r31, r3
/* 80147A00 00144AE0  4B FE E6 C9 */	bl __ct__11zNPCSubBossFi
/* 80147A04 00144AE4  3C 60 80 2A */	lis r3, __vt__13zNPCKingJelly@ha
/* 80147A08 00144AE8  38 C0 FF FF */	li r6, -0x1
/* 80147A0C 00144AEC  38 63 A0 68 */	addi r3, r3, __vt__13zNPCKingJelly@l
/* 80147A10 00144AF0  38 00 00 01 */	li r0, 0x1
/* 80147A14 00144AF4  90 7F 01 B8 */	stw r3, 0x1b8(r31)
/* 80147A18 00144AF8  38 7F 08 94 */	addi r3, r31, 0x894
/* 80147A1C 00144AFC  38 80 00 00 */	li r4, 0x0
/* 80147A20 00144B00  38 A0 00 1C */	li r5, 0x1c
/* 80147A24 00144B04  90 DF 02 CC */	stw r6, 0x2cc(r31)
/* 80147A28 00144B08  98 1F 02 D0 */	stb r0, 0x2d0(r31)
/* 80147A2C 00144B0C  4B EB BA 2D */	bl memset
/* 80147A30 00144B10  4B FF EB CD */	bl "init_sound__31@unnamed@zNPCTypeKingJelly_cpp@Fv"
/* 80147A34 00144B14  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80147A38 00144B18  7F E3 FB 78 */	mr r3, r31
/* 80147A3C 00144B1C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80147A40 00144B20  7C 08 03 A6 */	mtlr r0
/* 80147A44 00144B24  38 21 00 10 */	addi r1, r1, 0x10
/* 80147A48 00144B28  4E 80 00 20 */	blr
.endfn __ct__13zNPCKingJellyFi

# zNPCKingJelly::Init(xEntAsset*)
.fn Init__13zNPCKingJellyFP9xEntAsset, global
/* 80147A4C 00144B2C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80147A50 00144B30  7C 08 02 A6 */	mflr r0
/* 80147A54 00144B34  90 01 00 14 */	stw r0, 0x14(r1)
/* 80147A58 00144B38  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80147A5C 00144B3C  7C 7F 1B 78 */	mr r31, r3
/* 80147A60 00144B40  4B FA 76 3D */	bl Init__10zNPCCommonFP9xEntAsset
/* 80147A64 00144B44  A8 1F 00 E4 */	lha r0, 0xe4(r31)
/* 80147A68 00144B48  38 7F 02 B5 */	addi r3, r31, 0x2b5
/* 80147A6C 00144B4C  38 80 00 00 */	li r4, 0x0
/* 80147A70 00144B50  38 A0 00 05 */	li r5, 0x5
/* 80147A74 00144B54  60 00 00 10 */	ori r0, r0, 0x10
/* 80147A78 00144B58  B0 1F 00 E4 */	sth r0, 0xe4(r31)
/* 80147A7C 00144B5C  4B EB B9 DD */	bl memset
/* 80147A80 00144B60  3C 60 80 2A */	lis r3, "boss_cam__31@unnamed@zNPCTypeKingJelly_cpp@"@ha
/* 80147A84 00144B64  38 63 9E 2C */	addi r3, r3, "boss_cam__31@unnamed@zNPCTypeKingJelly_cpp@"@l
/* 80147A88 00144B68  4B EC 64 19 */	bl init__13xBinaryCameraFv
/* 80147A8C 00144B6C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80147A90 00144B70  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80147A94 00144B74  7C 08 03 A6 */	mtlr r0
/* 80147A98 00144B78  38 21 00 10 */	addi r1, r1, 0x10
/* 80147A9C 00144B7C  4E 80 00 20 */	blr
.endfn Init__13zNPCKingJellyFP9xEntAsset

# zNPCKingJelly::Setup()
.fn Setup__13zNPCKingJellyFv, global
/* 80147AA0 00144B80  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80147AA4 00144B84  7C 08 02 A6 */	mflr r0
/* 80147AA8 00144B88  90 01 00 14 */	stw r0, 0x14(r1)
/* 80147AAC 00144B8C  38 00 00 00 */	li r0, 0x0
/* 80147AB0 00144B90  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80147AB4 00144B94  7C 7F 1B 78 */	mr r31, r3
/* 80147AB8 00144B98  90 03 08 8C */	stw r0, 0x88c(r3)
/* 80147ABC 00144B9C  48 00 53 DD */	bl load_model__13zNPCKingJellyFv
/* 80147AC0 00144BA0  7F E3 FB 78 */	mr r3, r31
/* 80147AC4 00144BA4  48 00 54 89 */	bl load_curtain_model__13zNPCKingJellyFv
/* 80147AC8 00144BA8  7F E3 FB 78 */	mr r3, r31
/* 80147ACC 00144BAC  4B FE E5 85 */	bl Setup__11zNPCSubBossFv
/* 80147AD0 00144BB0  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80147AD4 00144BB4  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80147AD8 00144BB8  7C 08 03 A6 */	mtlr r0
/* 80147ADC 00144BBC  38 21 00 10 */	addi r1, r1, 0x10
/* 80147AE0 00144BC0  4E 80 00 20 */	blr
.endfn Setup__13zNPCKingJellyFv

# zNPCKingJelly::Reset()
.fn Reset__13zNPCKingJellyFv, global
/* 80147AE4 00144BC4  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 80147AE8 00144BC8  7C 08 02 A6 */	mflr r0
/* 80147AEC 00144BCC  3C 80 80 33 */	lis r4, ...bss.0@ha
/* 80147AF0 00144BD0  90 01 00 24 */	stw r0, 0x24(r1)
/* 80147AF4 00144BD4  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 80147AF8 00144BD8  3B E4 85 38 */	addi r31, r4, ...bss.0@l
/* 80147AFC 00144BDC  93 C1 00 18 */	stw r30, 0x18(r1)
/* 80147B00 00144BE0  7C 7E 1B 78 */	mr r30, r3
/* 80147B04 00144BE4  93 A1 00 14 */	stw r29, 0x14(r1)
/* 80147B08 00144BE8  4B FA 7D 9D */	bl Reset__10zNPCCommonFv
/* 80147B0C 00144BEC  88 1E 02 B6 */	lbz r0, 0x2b6(r30)
/* 80147B10 00144BF0  28 00 00 00 */	cmplwi r0, 0x0
/* 80147B14 00144BF4  40 82 00 1C */	bne .L_80147B30
/* 80147B18 00144BF8  7F C3 F3 78 */	mr r3, r30
/* 80147B1C 00144BFC  48 00 3F 71 */	bl decompose__13zNPCKingJellyFv
/* 80147B20 00144C00  7F C3 F3 78 */	mr r3, r30
/* 80147B24 00144C04  48 00 40 29 */	bl post_decompose__13zNPCKingJellyFv
/* 80147B28 00144C08  7F C3 F3 78 */	mr r3, r30
/* 80147B2C 00144C0C  48 00 40 99 */	bl reappear__13zNPCKingJellyFv
.L_80147B30:
/* 80147B30 00144C10  38 7E 02 B5 */	addi r3, r30, 0x2b5
/* 80147B34 00144C14  38 80 00 00 */	li r4, 0x0
/* 80147B38 00144C18  38 A0 00 05 */	li r5, 0x5
/* 80147B3C 00144C1C  4B EB B9 1D */	bl memset
/* 80147B40 00144C20  38 C0 00 00 */	li r6, 0x0
/* 80147B44 00144C24  3C 60 80 3C */	lis r3, globals@ha
/* 80147B48 00144C28  90 DE 02 BC */	stw r6, 0x2bc(r30)
/* 80147B4C 00144C2C  38 BF 00 00 */	addi r5, r31, 0x0
/* 80147B50 00144C30  38 83 05 58 */	addi r4, r3, globals@l
/* 80147B54 00144C34  38 00 00 01 */	li r0, 0x1
/* 80147B58 00144C38  90 DE 02 C0 */	stw r6, 0x2c0(r30)
/* 80147B5C 00144C3C  7F C3 F3 78 */	mr r3, r30
/* 80147B60 00144C40  80 A5 00 0C */	lwz r5, 0xc(r5)
/* 80147B64 00144C44  90 BE 02 C4 */	stw r5, 0x2c4(r30)
/* 80147B68 00144C48  80 84 16 B0 */	lwz r4, 0x16b0(r4)
/* 80147B6C 00144C4C  90 9E 02 C8 */	stw r4, 0x2c8(r30)
/* 80147B70 00144C50  C0 02 A6 34 */	lfs f0, "@1869"@sda21(r2)
/* 80147B74 00144C54  D0 1E 08 90 */	stfs f0, 0x890(r30)
/* 80147B78 00144C58  98 DE 10 90 */	stb r6, 0x1090(r30)
/* 80147B7C 00144C5C  98 1E 10 B4 */	stb r0, 0x10b4(r30)
/* 80147B80 00144C60  98 DE 02 EC */	stb r6, 0x2ec(r30)
/* 80147B84 00144C64  48 00 54 65 */	bl show_shower_model__13zNPCKingJellyFv
/* 80147B88 00144C68  3C 60 80 27 */	lis r3, "@stringBase0"@ha
/* 80147B8C 00144C6C  38 63 D8 B0 */	addi r3, r3, "@stringBase0"@l
/* 80147B90 00144C70  38 63 00 73 */	addi r3, r3, 0x73
/* 80147B94 00144C74  4B F6 0C B1 */	bl zParEmitterFind__FPCc
/* 80147B98 00144C78  90 6D 96 B0 */	stw r3, "spawn_emitter__31@unnamed@zNPCTypeKingJelly_cpp@"@sda21(r13)
/* 80147B9C 00144C7C  3C 80 80 25 */	lis r4, g_O3@ha
/* 80147BA0 00144C80  38 7F 03 A0 */	addi r3, r31, 0x3a0
/* 80147BA4 00144C84  38 00 01 10 */	li r0, 0x110
/* 80147BA8 00144C88  90 03 01 38 */	stw r0, 0x138(r3)
/* 80147BAC 00144C8C  38 84 30 18 */	addi r4, r4, g_O3@l
/* 80147BB0 00144C90  38 63 01 40 */	addi r3, r3, 0x140
/* 80147BB4 00144C94  4B EC 36 B1 */	bl __as__5xVec3FRC5xVec3
/* 80147BB8 00144C98  C0 22 A6 34 */	lfs f1, "@1869"@sda21(r2)
/* 80147BBC 00144C9C  38 9F 03 A0 */	addi r4, r31, 0x3a0
/* 80147BC0 00144CA0  38 00 00 00 */	li r0, 0x0
/* 80147BC4 00144CA4  3C 60 80 27 */	lis r3, "@stringBase0"@ha
/* 80147BC8 00144CA8  D0 24 00 0C */	stfs f1, 0xc(r4)
/* 80147BCC 00144CAC  38 63 D8 B0 */	addi r3, r3, "@stringBase0"@l
/* 80147BD0 00144CB0  38 63 00 84 */	addi r3, r3, 0x84
/* 80147BD4 00144CB4  90 04 00 14 */	stw r0, 0x14(r4)
/* 80147BD8 00144CB8  C0 02 A6 30 */	lfs f0, "@1868"@sda21(r2)
/* 80147BDC 00144CBC  D0 04 00 1C */	stfs f0, 0x1c(r4)
/* 80147BE0 00144CC0  D0 04 00 18 */	stfs f0, 0x18(r4)
/* 80147BE4 00144CC4  D0 3E 02 D8 */	stfs f1, 0x2d8(r30)
/* 80147BE8 00144CC8  C0 02 A6 34 */	lfs f0, "@1869"@sda21(r2)
/* 80147BEC 00144CCC  D0 04 00 0C */	stfs f0, 0xc(r4)
/* 80147BF0 00144CD0  4B F6 0C 55 */	bl zParEmitterFind__FPCc
/* 80147BF4 00144CD4  90 6D 96 B4 */	stw r3, "zap_emitter__31@unnamed@zNPCTypeKingJelly_cpp@"@sda21(r13)
/* 80147BF8 00144CD8  3C 80 80 25 */	lis r4, g_O3@ha
/* 80147BFC 00144CDC  38 7F 05 0C */	addi r3, r31, 0x50c
/* 80147C00 00144CE0  38 00 01 00 */	li r0, 0x100
/* 80147C04 00144CE4  90 03 01 38 */	stw r0, 0x138(r3)
/* 80147C08 00144CE8  38 84 30 18 */	addi r4, r4, g_O3@l
/* 80147C0C 00144CEC  38 63 01 40 */	addi r3, r3, 0x140
/* 80147C10 00144CF0  4B EC 36 55 */	bl __as__5xVec3FRC5xVec3
/* 80147C14 00144CF4  3C 60 80 27 */	lis r3, "@stringBase0"@ha
/* 80147C18 00144CF8  38 63 D8 B0 */	addi r3, r3, "@stringBase0"@l
/* 80147C1C 00144CFC  38 63 00 93 */	addi r3, r3, 0x93
/* 80147C20 00144D00  4B F6 0C 25 */	bl zParEmitterFind__FPCc
/* 80147C24 00144D04  90 6D 96 B8 */	stw r3, "shock_ring_emitter__31@unnamed@zNPCTypeKingJelly_cpp@"@sda21(r13)
/* 80147C28 00144D08  3C 80 80 25 */	lis r4, g_O3@ha
/* 80147C2C 00144D0C  38 7F 06 78 */	addi r3, r31, 0x678
/* 80147C30 00144D10  38 00 01 10 */	li r0, 0x110
/* 80147C34 00144D14  90 03 01 38 */	stw r0, 0x138(r3)
/* 80147C38 00144D18  38 84 30 18 */	addi r4, r4, g_O3@l
/* 80147C3C 00144D1C  38 63 01 40 */	addi r3, r3, 0x140
/* 80147C40 00144D20  4B EC 36 25 */	bl __as__5xVec3FRC5xVec3
/* 80147C44 00144D24  C0 02 A6 78 */	lfs f0, "@2146"@sda21(r2)
/* 80147C48 00144D28  38 9F 06 78 */	addi r4, r31, 0x678
/* 80147C4C 00144D2C  38 00 00 00 */	li r0, 0x0
/* 80147C50 00144D30  3C 60 80 27 */	lis r3, "@stringBase0"@ha
/* 80147C54 00144D34  D0 04 00 0C */	stfs f0, 0xc(r4)
/* 80147C58 00144D38  38 63 D8 B0 */	addi r3, r3, "@stringBase0"@l
/* 80147C5C 00144D3C  38 63 00 A9 */	addi r3, r3, 0xa9
/* 80147C60 00144D40  90 04 00 14 */	stw r0, 0x14(r4)
/* 80147C64 00144D44  C0 02 A6 30 */	lfs f0, "@1868"@sda21(r2)
/* 80147C68 00144D48  D0 04 00 1C */	stfs f0, 0x1c(r4)
/* 80147C6C 00144D4C  D0 04 00 18 */	stfs f0, 0x18(r4)
/* 80147C70 00144D50  4B F6 0B D5 */	bl zParEmitterFind__FPCc
/* 80147C74 00144D54  90 6D 96 BC */	stw r3, "thump_ring_emitter__31@unnamed@zNPCTypeKingJelly_cpp@"@sda21(r13)
/* 80147C78 00144D58  3C 80 80 25 */	lis r4, g_O3@ha
/* 80147C7C 00144D5C  38 7F 07 E4 */	addi r3, r31, 0x7e4
/* 80147C80 00144D60  38 00 13 10 */	li r0, 0x1310
/* 80147C84 00144D64  90 03 01 38 */	stw r0, 0x138(r3)
/* 80147C88 00144D68  38 84 30 18 */	addi r4, r4, g_O3@l
/* 80147C8C 00144D6C  38 63 01 40 */	addi r3, r3, 0x140
/* 80147C90 00144D70  4B EC 35 D5 */	bl __as__5xVec3FRC5xVec3
/* 80147C94 00144D74  C0 02 A6 78 */	lfs f0, "@2146"@sda21(r2)
/* 80147C98 00144D78  38 7F 07 E4 */	addi r3, r31, 0x7e4
/* 80147C9C 00144D7C  38 00 00 00 */	li r0, 0x0
/* 80147CA0 00144D80  D0 03 00 0C */	stfs f0, 0xc(r3)
/* 80147CA4 00144D84  90 03 00 14 */	stw r0, 0x14(r3)
/* 80147CA8 00144D88  C0 42 A6 30 */	lfs f2, "@1868"@sda21(r2)
/* 80147CAC 00144D8C  D0 43 00 1C */	stfs f2, 0x1c(r3)
/* 80147CB0 00144D90  D0 43 00 18 */	stfs f2, 0x18(r3)
/* 80147CB4 00144D94  38 63 01 4C */	addi r3, r3, 0x14c
/* 80147CB8 00144D98  C0 22 A6 34 */	lfs f1, "@1869"@sda21(r2)
/* 80147CBC 00144D9C  FC 60 08 90 */	fmr f3, f1
/* 80147CC0 00144DA0  4B EC 34 2D */	bl assign__5xVec3Ffff
/* 80147CC4 00144DA4  C0 02 A6 30 */	lfs f0, "@1868"@sda21(r2)
/* 80147CC8 00144DA8  38 9F 07 E4 */	addi r4, r31, 0x7e4
/* 80147CCC 00144DAC  7F C3 F3 78 */	mr r3, r30
/* 80147CD0 00144DB0  D0 04 01 60 */	stfs f0, 0x160(r4)
/* 80147CD4 00144DB4  48 00 46 CD */	bl create_ambient_rings__13zNPCKingJellyFv
/* 80147CD8 00144DB8  7F C3 F3 78 */	mr r3, r30
/* 80147CDC 00144DBC  48 00 3F 25 */	bl create_tentacle_lightning__13zNPCKingJellyFv
/* 80147CE0 00144DC0  7F DF F3 78 */	mr r31, r30
/* 80147CE4 00144DC4  3B A0 00 00 */	li r29, 0x0
/* 80147CE8 00144DC8  48 00 00 24 */	b .L_80147D0C
.L_80147CEC:
/* 80147CEC 00144DCC  80 7F 03 0C */	lwz r3, 0x30c(r31)
/* 80147CF0 00144DD0  7F C4 F3 78 */	mr r4, r30
/* 80147CF4 00144DD4  48 00 6B 11 */	bl MeetTheKing__9zNPCJellyFP10zNPCCommon
/* 80147CF8 00144DD8  7F C3 F3 78 */	mr r3, r30
/* 80147CFC 00144DDC  38 9F 03 0C */	addi r4, r31, 0x30c
/* 80147D00 00144DE0  48 00 2F 29 */	bl disable_child__13zNPCKingJellyFRQ213zNPCKingJelly10child_data
/* 80147D04 00144DE4  3B FF 00 2C */	addi r31, r31, 0x2c
/* 80147D08 00144DE8  3B BD 00 01 */	addi r29, r29, 0x1
.L_80147D0C:
/* 80147D0C 00144DEC  80 1E 08 8C */	lwz r0, 0x88c(r30)
/* 80147D10 00144DF0  7C 1D 00 40 */	cmplw r29, r0
/* 80147D14 00144DF4  41 80 FF D8 */	blt .L_80147CEC
/* 80147D18 00144DF8  C0 02 A6 7C */	lfs f0, "@2147"@sda21(r2)
/* 80147D1C 00144DFC  3C 60 4E 47 */	lis r3, 0x4e47
/* 80147D20 00144E00  80 DE 00 C4 */	lwz r6, 0xc4(r30)
/* 80147D24 00144E04  38 83 4D 31 */	addi r4, r3, 0x4d31
/* 80147D28 00144E08  38 A0 00 01 */	li r5, 0x1
/* 80147D2C 00144E0C  D0 06 00 20 */	stfs f0, 0x20(r6)
/* 80147D30 00144E10  C0 02 A6 80 */	lfs f0, "@2148"@sda21(r2)
/* 80147D34 00144E14  80 7E 00 C4 */	lwz r3, 0xc4(r30)
/* 80147D38 00144E18  D0 03 00 24 */	stfs f0, 0x24(r3)
/* 80147D3C 00144E1C  C0 02 A6 84 */	lfs f0, "@2149"@sda21(r2)
/* 80147D40 00144E20  80 7E 00 C4 */	lwz r3, 0xc4(r30)
/* 80147D44 00144E24  D0 03 00 1C */	stfs f0, 0x1c(r3)
/* 80147D48 00144E28  80 7E 02 28 */	lwz r3, 0x228(r30)
/* 80147D4C 00144E2C  4B FC 59 E5 */	bl GoalSet__7xPsycheFii
/* 80147D50 00144E30  80 01 00 24 */	lwz r0, 0x24(r1)
/* 80147D54 00144E34  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 80147D58 00144E38  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 80147D5C 00144E3C  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 80147D60 00144E40  7C 08 03 A6 */	mtlr r0
/* 80147D64 00144E44  38 21 00 20 */	addi r1, r1, 0x20
/* 80147D68 00144E48  4E 80 00 20 */	blr
.endfn Reset__13zNPCKingJellyFv

# zNPCKingJelly::Destroy()
.fn Destroy__13zNPCKingJellyFv, global
/* 80147D6C 00144E4C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80147D70 00144E50  7C 08 02 A6 */	mflr r0
/* 80147D74 00144E54  90 01 00 14 */	stw r0, 0x14(r1)
/* 80147D78 00144E58  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80147D7C 00144E5C  7C 7F 1B 78 */	mr r31, r3
/* 80147D80 00144E60  48 00 3D 0D */	bl decompose__13zNPCKingJellyFv
/* 80147D84 00144E64  7F E3 FB 78 */	mr r3, r31
/* 80147D88 00144E68  48 00 3D C5 */	bl post_decompose__13zNPCKingJellyFv
/* 80147D8C 00144E6C  7F E3 FB 78 */	mr r3, r31
/* 80147D90 00144E70  4B FA 7C 81 */	bl Destroy__10zNPCCommonFv
/* 80147D94 00144E74  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80147D98 00144E78  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80147D9C 00144E7C  7C 08 03 A6 */	mtlr r0
/* 80147DA0 00144E80  38 21 00 10 */	addi r1, r1, 0x10
/* 80147DA4 00144E84  4E 80 00 20 */	blr
.endfn Destroy__13zNPCKingJellyFv

# zNPCKingJelly::Process(xScene*, float)
.fn Process__13zNPCKingJellyFP6xScenef, global
/* 80147DA8 00144E88  94 21 FF D0 */	stwu r1, -0x30(r1)
/* 80147DAC 00144E8C  7C 08 02 A6 */	mflr r0
/* 80147DB0 00144E90  90 01 00 34 */	stw r0, 0x34(r1)
/* 80147DB4 00144E94  DB E1 00 20 */	stfd f31, 0x20(r1)
/* 80147DB8 00144E98  F3 E1 00 28 */	psq_st f31, 0x28(r1), 0, qr0
/* 80147DBC 00144E9C  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 80147DC0 00144EA0  93 C1 00 18 */	stw r30, 0x18(r1)
/* 80147DC4 00144EA4  93 A1 00 14 */	stw r29, 0x14(r1)
/* 80147DC8 00144EA8  7C 7E 1B 78 */	mr r30, r3
/* 80147DCC 00144EAC  FF E0 08 90 */	fmr f31, f1
/* 80147DD0 00144EB0  88 03 02 B9 */	lbz r0, 0x2b9(r3)
/* 80147DD4 00144EB4  7C 9F 23 78 */	mr r31, r4
/* 80147DD8 00144EB8  28 00 00 00 */	cmplwi r0, 0x0
/* 80147DDC 00144EBC  40 82 00 34 */	bne .L_80147E10
/* 80147DE0 00144EC0  3C 60 80 27 */	lis r3, "@stringBase0"@ha
/* 80147DE4 00144EC4  38 63 D8 B0 */	addi r3, r3, "@stringBase0"@l
/* 80147DE8 00144EC8  38 63 00 BF */	addi r3, r3, 0xbf
/* 80147DEC 00144ECC  4B F0 44 29 */	bl xStrHash__FPCc
/* 80147DF0 00144ED0  4B F6 CC 4D */	bl zSceneFindObject__FUi
/* 80147DF4 00144ED4  28 03 00 00 */	cmplwi r3, 0x0
/* 80147DF8 00144ED8  41 82 00 10 */	beq .L_80147E08
/* 80147DFC 00144EDC  A0 03 00 06 */	lhz r0, 0x6(r3)
/* 80147E00 00144EE0  60 00 00 10 */	ori r0, r0, 0x10
/* 80147E04 00144EE4  B0 03 00 06 */	sth r0, 0x6(r3)
.L_80147E08:
/* 80147E08 00144EE8  38 00 00 01 */	li r0, 0x1
/* 80147E0C 00144EEC  98 1E 02 B9 */	stb r0, 0x2b9(r30)
.L_80147E10:
/* 80147E10 00144EF0  80 7E 02 28 */	lwz r3, 0x228(r30)
/* 80147E14 00144EF4  4B FC 57 B1 */	bl GIDOfActive__7xPsycheCFv
/* 80147E18 00144EF8  3C 03 B1 B9 */	addis r0, r3, 0xb1b9
/* 80147E1C 00144EFC  28 00 4E 37 */	cmplwi r0, 0x4e37
/* 80147E20 00144F00  40 82 00 18 */	bne .L_80147E38
/* 80147E24 00144F04  FC 20 F8 90 */	fmr f1, f31
/* 80147E28 00144F08  7F C3 F3 78 */	mr r3, r30
/* 80147E2C 00144F0C  7F E4 FB 78 */	mr r4, r31
/* 80147E30 00144F10  4B FA 82 C1 */	bl Process__10zNPCCommonFP6xScenef
/* 80147E34 00144F14  48 00 01 74 */	b .L_80147FA8
.L_80147E38:
/* 80147E38 00144F18  88 1E 10 B4 */	lbz r0, 0x10b4(r30)
/* 80147E3C 00144F1C  28 00 00 00 */	cmplwi r0, 0x0
/* 80147E40 00144F20  41 82 00 0C */	beq .L_80147E4C
/* 80147E44 00144F24  38 00 00 00 */	li r0, 0x0
/* 80147E48 00144F28  98 1E 10 B4 */	stb r0, 0x10b4(r30)
.L_80147E4C:
/* 80147E4C 00144F2C  FC 20 F8 90 */	fmr f1, f31
/* 80147E50 00144F30  4B FF EA 2D */	bl "sound_update__31@unnamed@zNPCTypeKingJelly_cpp@Ff"
/* 80147E54 00144F34  88 1E 02 B6 */	lbz r0, 0x2b6(r30)
/* 80147E58 00144F38  28 00 00 00 */	cmplwi r0, 0x0
/* 80147E5C 00144F3C  40 82 00 10 */	bne .L_80147E6C
/* 80147E60 00144F40  88 1E 02 B5 */	lbz r0, 0x2b5(r30)
/* 80147E64 00144F44  28 00 00 00 */	cmplwi r0, 0x0
/* 80147E68 00144F48  40 82 00 18 */	bne .L_80147E80
.L_80147E6C:
/* 80147E6C 00144F4C  FC 20 F8 90 */	fmr f1, f31
/* 80147E70 00144F50  7F C3 F3 78 */	mr r3, r30
/* 80147E74 00144F54  7F E4 FB 78 */	mr r4, r31
/* 80147E78 00144F58  4B FA 82 79 */	bl Process__10zNPCCommonFP6xScenef
/* 80147E7C 00144F5C  48 00 01 2C */	b .L_80147FA8
.L_80147E80:
/* 80147E80 00144F60  88 1E 02 B8 */	lbz r0, 0x2b8(r30)
/* 80147E84 00144F64  28 00 00 00 */	cmplwi r0, 0x0
/* 80147E88 00144F68  40 82 00 10 */	bne .L_80147E98
/* 80147E8C 00144F6C  88 1E 02 D0 */	lbz r0, 0x2d0(r30)
/* 80147E90 00144F70  28 00 00 00 */	cmplwi r0, 0x0
/* 80147E94 00144F74  40 82 00 48 */	bne .L_80147EDC
.L_80147E98:
/* 80147E98 00144F78  80 9E 00 48 */	lwz r4, 0x48(r30)
/* 80147E9C 00144F7C  3C 60 80 33 */	lis r3, "tweak__31@unnamed@zNPCTypeKingJelly_cpp@"@ha
/* 80147EA0 00144F80  38 63 85 38 */	addi r3, r3, "tweak__31@unnamed@zNPCTypeKingJelly_cpp@"@l
/* 80147EA4 00144F84  3B A4 00 D4 */	addi r29, r4, 0xd4
/* 80147EA8 00144F88  C0 23 00 18 */	lfs f1, 0x18(r3)
/* 80147EAC 00144F8C  7F A3 EB 78 */	mr r3, r29
/* 80147EB0 00144F90  4B EC 32 D1 */	bl __amu__5xVec3Ff
/* 80147EB4 00144F94  7F A3 EB 78 */	mr r3, r29
/* 80147EB8 00144F98  4B EC 32 45 */	bl length2__5xVec3CFv
/* 80147EBC 00144F9C  C0 02 A6 88 */	lfs f0, "@2197"@sda21(r2)
/* 80147EC0 00144FA0  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80147EC4 00144FA4  40 80 00 18 */	bge .L_80147EDC
/* 80147EC8 00144FA8  C0 22 A6 34 */	lfs f1, "@1869"@sda21(r2)
/* 80147ECC 00144FAC  7F A3 EB 78 */	mr r3, r29
/* 80147ED0 00144FB0  4B ED 49 A9 */	bl __as__5xVec3Ff
/* 80147ED4 00144FB4  38 00 00 00 */	li r0, 0x0
/* 80147ED8 00144FB8  98 1E 02 B8 */	stb r0, 0x2b8(r30)
.L_80147EDC:
/* 80147EDC 00144FBC  88 1E 02 D0 */	lbz r0, 0x2d0(r30)
/* 80147EE0 00144FC0  28 00 00 00 */	cmplwi r0, 0x0
/* 80147EE4 00144FC4  41 82 00 14 */	beq .L_80147EF8
/* 80147EE8 00144FC8  FC 20 F8 90 */	fmr f1, f31
/* 80147EEC 00144FCC  80 7E 02 28 */	lwz r3, 0x228(r30)
/* 80147EF0 00144FD0  38 80 00 00 */	li r4, 0x0
/* 80147EF4 00144FD4  4B FC 61 6D */	bl Timestep__7xPsycheFfPv
.L_80147EF8:
/* 80147EF8 00144FD8  88 1E 02 B6 */	lbz r0, 0x2b6(r30)
/* 80147EFC 00144FDC  28 00 00 00 */	cmplwi r0, 0x0
/* 80147F00 00144FE0  40 82 00 10 */	bne .L_80147F10
/* 80147F04 00144FE4  88 1E 02 B5 */	lbz r0, 0x2b5(r30)
/* 80147F08 00144FE8  28 00 00 00 */	cmplwi r0, 0x0
/* 80147F0C 00144FEC  40 82 00 18 */	bne .L_80147F24
.L_80147F10:
/* 80147F10 00144FF0  FC 20 F8 90 */	fmr f1, f31
/* 80147F14 00144FF4  7F C3 F3 78 */	mr r3, r30
/* 80147F18 00144FF8  7F E4 FB 78 */	mr r4, r31
/* 80147F1C 00144FFC  4B FA 81 D5 */	bl Process__10zNPCCommonFP6xScenef
/* 80147F20 00145000  48 00 00 88 */	b .L_80147FA8
.L_80147F24:
/* 80147F24 00145004  FC 20 F8 90 */	fmr f1, f31
/* 80147F28 00145008  7F C3 F3 78 */	mr r3, r30
/* 80147F2C 0014500C  48 00 2A 91 */	bl update_camera__13zNPCKingJellyFf
/* 80147F30 00145010  FC 20 F8 90 */	fmr f1, f31
/* 80147F34 00145014  7F C3 F3 78 */	mr r3, r30
/* 80147F38 00145018  48 00 43 3D */	bl update_rings__13zNPCKingJellyFf
/* 80147F3C 0014501C  FC 20 F8 90 */	fmr f1, f31
/* 80147F40 00145020  7F C3 F3 78 */	mr r3, r30
/* 80147F44 00145024  48 00 3E 29 */	bl update_tentacle_lightning__13zNPCKingJellyFf
/* 80147F48 00145028  FC 20 F8 90 */	fmr f1, f31
/* 80147F4C 0014502C  7F C3 F3 78 */	mr r3, r30
/* 80147F50 00145030  48 00 47 09 */	bl update_spawn_particles__13zNPCKingJellyFf
/* 80147F54 00145034  FC 20 F8 90 */	fmr f1, f31
/* 80147F58 00145038  7F C3 F3 78 */	mr r3, r30
/* 80147F5C 0014503C  48 00 52 29 */	bl update_blink__13zNPCKingJellyFf
/* 80147F60 00145040  7F C3 F3 78 */	mr r3, r30
/* 80147F64 00145044  48 00 2F DD */	bl repel_player__13zNPCKingJellyFv
/* 80147F68 00145048  7F C3 F3 78 */	mr r3, r30
/* 80147F6C 0014504C  48 00 39 F5 */	bl check_player_damage__13zNPCKingJellyFv
/* 80147F70 00145050  3C 60 80 3C */	lis r3, globals@ha
/* 80147F74 00145054  80 1E 02 C8 */	lwz r0, 0x2c8(r30)
/* 80147F78 00145058  3B A3 05 58 */	addi r29, r3, globals@l
/* 80147F7C 0014505C  80 7D 16 B0 */	lwz r3, 0x16b0(r29)
/* 80147F80 00145060  7C 03 00 40 */	cmplw r3, r0
/* 80147F84 00145064  40 80 00 0C */	bge .L_80147F90
/* 80147F88 00145068  7F C3 F3 78 */	mr r3, r30
/* 80147F8C 0014506C  48 00 2F 3D */	bl taunt__13zNPCKingJellyFv
.L_80147F90:
/* 80147F90 00145070  80 1D 16 B0 */	lwz r0, 0x16b0(r29)
/* 80147F94 00145074  FC 20 F8 90 */	fmr f1, f31
/* 80147F98 00145078  7F C3 F3 78 */	mr r3, r30
/* 80147F9C 0014507C  7F E4 FB 78 */	mr r4, r31
/* 80147FA0 00145080  90 1E 02 C8 */	stw r0, 0x2c8(r30)
/* 80147FA4 00145084  4B FA 81 4D */	bl Process__10zNPCCommonFP6xScenef
.L_80147FA8:
/* 80147FA8 00145088  E3 E1 00 28 */	psq_l f31, 0x28(r1), 0, qr0
/* 80147FAC 0014508C  80 01 00 34 */	lwz r0, 0x34(r1)
/* 80147FB0 00145090  CB E1 00 20 */	lfd f31, 0x20(r1)
/* 80147FB4 00145094  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 80147FB8 00145098  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 80147FBC 0014509C  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 80147FC0 001450A0  7C 08 03 A6 */	mtlr r0
/* 80147FC4 001450A4  38 21 00 30 */	addi r1, r1, 0x30
/* 80147FC8 001450A8  4E 80 00 20 */	blr
.endfn Process__13zNPCKingJellyFP6xScenef

# zNPCKingJelly::BUpdate(xVec3*)
.fn BUpdate__13zNPCKingJellyFP5xVec3, global
/* 80147FCC 001450AC  94 21 FF D0 */	stwu r1, -0x30(r1)
/* 80147FD0 001450B0  7C 08 02 A6 */	mflr r0
/* 80147FD4 001450B4  90 01 00 34 */	stw r0, 0x34(r1)
/* 80147FD8 001450B8  93 E1 00 2C */	stw r31, 0x2c(r1)
/* 80147FDC 001450BC  7C 7F 1B 78 */	mr r31, r3
/* 80147FE0 001450C0  38 61 00 08 */	addi r3, r1, 0x8
/* 80147FE4 001450C4  80 BF 00 24 */	lwz r5, 0x24(r31)
/* 80147FE8 001450C8  80 A5 00 4C */	lwz r5, 0x4c(r5)
/* 80147FEC 001450CC  38 A5 00 B0 */	addi r5, r5, 0xb0
/* 80147FF0 001450D0  4B EC D3 F1 */	bl __pl__5xVec3CFRC5xVec3
/* 80147FF4 001450D4  80 C1 00 08 */	lwz r6, 0x8(r1)
/* 80147FF8 001450D8  7F E3 FB 78 */	mr r3, r31
/* 80147FFC 001450DC  80 A1 00 0C */	lwz r5, 0xc(r1)
/* 80148000 001450E0  38 81 00 14 */	addi r4, r1, 0x14
/* 80148004 001450E4  80 01 00 10 */	lwz r0, 0x10(r1)
/* 80148008 001450E8  90 C1 00 14 */	stw r6, 0x14(r1)
/* 8014800C 001450EC  90 A1 00 18 */	stw r5, 0x18(r1)
/* 80148010 001450F0  90 01 00 1C */	stw r0, 0x1c(r1)
/* 80148014 001450F4  4B FA 81 51 */	bl BUpdate__10zNPCCommonFP5xVec3
/* 80148018 001450F8  80 01 00 34 */	lwz r0, 0x34(r1)
/* 8014801C 001450FC  83 E1 00 2C */	lwz r31, 0x2c(r1)
/* 80148020 00145100  7C 08 03 A6 */	mtlr r0
/* 80148024 00145104  38 21 00 30 */	addi r1, r1, 0x30
/* 80148028 00145108  4E 80 00 20 */	blr
.endfn BUpdate__13zNPCKingJellyFP5xVec3

# zNPCKingJelly::SysEvent(xBase*, xBase*, unsigned int, const float*, xBase*, int*)
.fn SysEvent__13zNPCKingJellyFP5xBaseP5xBaseUiPCfP5xBasePi, global
/* 8014802C 0014510C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80148030 00145110  7C 08 02 A6 */	mflr r0
/* 80148034 00145114  2C 06 01 B9 */	cmpwi r6, 0x1b9
/* 80148038 00145118  90 01 00 14 */	stw r0, 0x14(r1)
/* 8014803C 0014511C  41 82 00 50 */	beq .L_8014808C
/* 80148040 00145120  40 80 00 10 */	bge .L_80148050
/* 80148044 00145124  2C 06 01 B5 */	cmpwi r6, 0x1b5
/* 80148048 00145128  41 82 00 14 */	beq .L_8014805C
/* 8014804C 0014512C  48 00 00 30 */	b .L_8014807C
.L_80148050:
/* 80148050 00145130  2C 06 01 D9 */	cmpwi r6, 0x1d9
/* 80148054 00145134  41 82 00 10 */	beq .L_80148064
/* 80148058 00145138  48 00 00 24 */	b .L_8014807C
.L_8014805C:
/* 8014805C 0014513C  48 00 39 69 */	bl start_fight__13zNPCKingJellyFv
/* 80148060 00145140  48 00 00 2C */	b .L_8014808C
.L_80148064:
/* 80148064 00145144  3C 80 4E 47 */	lis r4, 0x4e47
/* 80148068 00145148  80 63 02 28 */	lwz r3, 0x228(r3)
/* 8014806C 0014514C  38 84 4D 37 */	addi r4, r4, 0x4d37
/* 80148070 00145150  38 A0 00 01 */	li r5, 0x1
/* 80148074 00145154  4B FC 56 BD */	bl GoalSet__7xPsycheFii
/* 80148078 00145158  48 00 00 14 */	b .L_8014808C
.L_8014807C:
/* 8014807C 0014515C  38 00 00 00 */	li r0, 0x0
/* 80148080 00145160  90 09 00 00 */	stw r0, 0x0(r9)
/* 80148084 00145164  4B FA 83 4D */	bl SysEvent__10zNPCCommonFP5xBaseP5xBaseUiPCfP5xBasePi
/* 80148088 00145168  48 00 00 08 */	b .L_80148090
.L_8014808C:
/* 8014808C 0014516C  38 60 00 01 */	li r3, 0x1
.L_80148090:
/* 80148090 00145170  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80148094 00145174  7C 08 03 A6 */	mtlr r0
/* 80148098 00145178  38 21 00 10 */	addi r1, r1, 0x10
/* 8014809C 0014517C  4E 80 00 20 */	blr
.endfn SysEvent__13zNPCKingJellyFP5xBaseP5xBaseUiPCfP5xBasePi

# zNPCKingJelly::RenderExtra()
.fn RenderExtra__13zNPCKingJellyFv, global
/* 801480A0 00145180  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801480A4 00145184  7C 08 02 A6 */	mflr r0
/* 801480A8 00145188  90 01 00 14 */	stw r0, 0x14(r1)
/* 801480AC 0014518C  48 00 67 61 */	bl render_debug__13zNPCKingJellyFv
/* 801480B0 00145190  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801480B4 00145194  7C 08 03 A6 */	mtlr r0
/* 801480B8 00145198  38 21 00 10 */	addi r1, r1, 0x10
/* 801480BC 0014519C  4E 80 00 20 */	blr
.endfn RenderExtra__13zNPCKingJellyFv

# zNPCKingJelly::ParseINI()
.fn ParseINI__13zNPCKingJellyFv, global
/* 801480C0 001451A0  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801480C4 001451A4  7C 08 02 A6 */	mflr r0
/* 801480C8 001451A8  90 01 00 14 */	stw r0, 0x14(r1)
/* 801480CC 001451AC  93 E1 00 0C */	stw r31, 0xc(r1)
/* 801480D0 001451B0  7C 7F 1B 78 */	mr r31, r3
/* 801480D4 001451B4  4B FA 93 5D */	bl ParseINI__10zNPCCommonFv
/* 801480D8 001451B8  3C 60 80 2A */	lis r3, g_sndTrax_KingJelly@ha
/* 801480DC 001451BC  80 9F 01 D8 */	lwz r4, 0x1d8(r31)
/* 801480E0 001451C0  38 63 8A 58 */	addi r3, r3, g_sndTrax_KingJelly@l
/* 801480E4 001451C4  90 64 03 A0 */	stw r3, 0x3a0(r4)
/* 801480E8 001451C8  4B FD CC 5D */	bl NPCS_SndTablePrepare__FP10NPCSndTrax
/* 801480EC 001451CC  3C 60 80 2A */	lis r3, g_sndTrax_KingJelly@ha
/* 801480F0 001451D0  80 9F 01 D8 */	lwz r4, 0x1d8(r31)
/* 801480F4 001451D4  38 63 8A 58 */	addi r3, r3, g_sndTrax_KingJelly@l
/* 801480F8 001451D8  90 64 03 9C */	stw r3, 0x39c(r4)
/* 801480FC 001451DC  4B FD CC 49 */	bl NPCS_SndTablePrepare__FP10NPCSndTrax
/* 80148100 001451E0  3C 60 80 33 */	lis r3, "tweak__31@unnamed@zNPCTypeKingJelly_cpp@"@ha
/* 80148104 001451E4  3C A0 80 2A */	lis r5, cb_fade_obstructions$2233@ha
/* 80148108 001451E8  3C 80 80 2A */	lis r4, cb_ambient_ring$2234@ha
/* 8014810C 001451EC  97 E3 85 38 */	stwu r31, "tweak__31@unnamed@zNPCTypeKingJelly_cpp@"@l(r3)
/* 80148110 001451F0  38 A5 9E 90 */	addi r5, r5, cb_fade_obstructions$2233@l
/* 80148114 001451F4  38 04 9E B8 */	addi r0, r4, cb_ambient_ring$2234@l
/* 80148118 001451F8  90 A3 00 04 */	stw r5, 0x4(r3)
/* 8014811C 001451FC  90 03 00 08 */	stw r0, 0x8(r3)
/* 80148120 00145200  80 9F 02 44 */	lwz r4, 0x244(r31)
/* 80148124 00145204  80 BF 02 48 */	lwz r5, 0x248(r31)
/* 80148128 00145208  48 00 00 19 */	bl "load__Q231@unnamed@zNPCTypeKingJelly_cpp@11tweak_groupFP16xModelAssetParamUi"
/* 8014812C 0014520C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80148130 00145210  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80148134 00145214  7C 08 03 A6 */	mtlr r0
/* 80148138 00145218  38 21 00 10 */	addi r1, r1, 0x10
/* 8014813C 0014521C  4E 80 00 20 */	blr
.endfn ParseINI__13zNPCKingJellyFv

# @unnamed@zNPCTypeKingJelly_cpp@::tweak_group::load(xModelAssetParam*, unsigned int)
.fn "load__Q231@unnamed@zNPCTypeKingJelly_cpp@11tweak_groupFP16xModelAssetParamUi", local
/* 80148140 00145220  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80148144 00145224  7C 08 02 A6 */	mflr r0
/* 80148148 00145228  7C A6 2B 78 */	mr r6, r5
/* 8014814C 0014522C  7C 85 23 78 */	mr r5, r4
/* 80148150 00145230  90 01 00 14 */	stw r0, 0x14(r1)
/* 80148154 00145234  38 80 00 01 */	li r4, 0x1
/* 80148158 00145238  38 E0 00 00 */	li r7, 0x0
/* 8014815C 0014523C  48 00 00 15 */	bl "register_tweaks__Q231@unnamed@zNPCTypeKingJelly_cpp@11tweak_groupFbP16xModelAssetParamUiPCc"
/* 80148160 00145240  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80148164 00145244  7C 08 03 A6 */	mtlr r0
/* 80148168 00145248  38 21 00 10 */	addi r1, r1, 0x10
/* 8014816C 0014524C  4E 80 00 20 */	blr
.endfn "load__Q231@unnamed@zNPCTypeKingJelly_cpp@11tweak_groupFP16xModelAssetParamUi"

# @unnamed@zNPCTypeKingJelly_cpp@::tweak_group::register_tweaks(bool, xModelAssetParam*, unsigned int, const char*)
.fn "register_tweaks__Q231@unnamed@zNPCTypeKingJelly_cpp@11tweak_groupFbP16xModelAssetParamUiPCc", local
/* 80148170 00145250  94 21 FF C0 */	stwu r1, -0x40(r1)
/* 80148174 00145254  7C 08 02 A6 */	mflr r0
/* 80148178 00145258  90 01 00 44 */	stw r0, 0x44(r1)
/* 8014817C 0014525C  54 80 06 3F */	clrlwi. r0, r4, 24
/* 80148180 00145260  93 E1 00 3C */	stw r31, 0x3c(r1)
/* 80148184 00145264  7C DF 33 78 */	mr r31, r6
/* 80148188 00145268  93 C1 00 38 */	stw r30, 0x38(r1)
/* 8014818C 0014526C  7C BE 2B 78 */	mr r30, r5
/* 80148190 00145270  93 A1 00 34 */	stw r29, 0x34(r1)
/* 80148194 00145274  7C 9D 23 78 */	mr r29, r4
/* 80148198 00145278  93 81 00 30 */	stw r28, 0x30(r1)
/* 8014819C 0014527C  7C 7C 1B 78 */	mr r28, r3
/* 801481A0 00145280  41 82 00 38 */	beq .L_801481D8
/* 801481A4 00145284  38 00 00 03 */	li r0, 0x3
/* 801481A8 00145288  3C 60 80 27 */	lis r3, "@stringBase0"@ha
/* 801481AC 0014528C  38 83 D8 B0 */	addi r4, r3, "@stringBase0"@l
/* 801481B0 00145290  3C A0 00 99 */	lis r5, 0x99
/* 801481B4 00145294  90 1C 00 0C */	stw r0, 0xc(r28)
/* 801481B8 00145298  7F C7 F3 78 */	mr r7, r30
/* 801481BC 0014529C  7F E8 FB 78 */	mr r8, r31
/* 801481C0 001452A0  38 7C 00 0C */	addi r3, r28, 0xc
/* 801481C4 001452A4  38 C5 96 80 */	addi r6, r5, -0x6980
/* 801481C8 001452A8  39 24 00 CE */	addi r9, r4, 0xce
/* 801481CC 001452AC  38 80 00 01 */	li r4, 0x1
/* 801481D0 001452B0  38 A0 00 01 */	li r5, 0x1
/* 801481D4 001452B4  48 00 69 11 */	bl "load_param<i,i>__10auto_tweakFRiiiiP16xModelAssetParamUiPCc"
.L_801481D8:
/* 801481D8 001452B8  57 A0 06 3F */	clrlwi. r0, r29, 24
/* 801481DC 001452BC  41 82 00 34 */	beq .L_80148210
/* 801481E0 001452C0  C0 02 A6 8C */	lfs f0, "@2406"@sda21(r2)
/* 801481E4 001452C4  3C 60 80 27 */	lis r3, "@stringBase0"@ha
/* 801481E8 001452C8  38 C3 D8 B0 */	addi r6, r3, "@stringBase0"@l
/* 801481EC 001452CC  7F C4 F3 78 */	mr r4, r30
/* 801481F0 001452D0  D0 1C 00 10 */	stfs f0, 0x10(r28)
/* 801481F4 001452D4  7F E5 FB 78 */	mr r5, r31
/* 801481F8 001452D8  38 7C 00 10 */	addi r3, r28, 0x10
/* 801481FC 001452DC  38 C6 00 D7 */	addi r6, r6, 0xd7
/* 80148200 001452E0  C0 22 A6 30 */	lfs f1, "@1868"@sda21(r2)
/* 80148204 001452E4  C0 42 A6 34 */	lfs f2, "@1869"@sda21(r2)
/* 80148208 001452E8  C0 62 A6 90 */	lfs f3, "@2407"@sda21(r2)
/* 8014820C 001452EC  48 00 68 31 */	bl "load_param<f,f>__10auto_tweakFRffffP16xModelAssetParamUiPCc"
.L_80148210:
/* 80148210 001452F0  57 A0 06 3F */	clrlwi. r0, r29, 24
/* 80148214 001452F4  41 82 00 34 */	beq .L_80148248
/* 80148218 001452F8  C0 02 A6 94 */	lfs f0, "@2408"@sda21(r2)
/* 8014821C 001452FC  3C 60 80 27 */	lis r3, "@stringBase0"@ha
/* 80148220 00145300  38 C3 D8 B0 */	addi r6, r3, "@stringBase0"@l
/* 80148224 00145304  7F C4 F3 78 */	mr r4, r30
/* 80148228 00145308  D0 1C 00 14 */	stfs f0, 0x14(r28)
/* 8014822C 0014530C  7F E5 FB 78 */	mr r5, r31
/* 80148230 00145310  38 7C 00 14 */	addi r3, r28, 0x14
/* 80148234 00145314  38 C6 00 E0 */	addi r6, r6, 0xe0
/* 80148238 00145318  C0 22 A6 30 */	lfs f1, "@1868"@sda21(r2)
/* 8014823C 0014531C  C0 42 A6 34 */	lfs f2, "@1869"@sda21(r2)
/* 80148240 00145320  C0 62 A6 98 */	lfs f3, "@2409"@sda21(r2)
/* 80148244 00145324  48 00 67 F9 */	bl "load_param<f,f>__10auto_tweakFRffffP16xModelAssetParamUiPCc"
.L_80148248:
/* 80148248 00145328  57 A0 06 3F */	clrlwi. r0, r29, 24
/* 8014824C 0014532C  41 82 00 34 */	beq .L_80148280
/* 80148250 00145330  C0 02 A6 9C */	lfs f0, "@2410"@sda21(r2)
/* 80148254 00145334  3C 60 80 27 */	lis r3, "@stringBase0"@ha
/* 80148258 00145338  38 C3 D8 B0 */	addi r6, r3, "@stringBase0"@l
/* 8014825C 0014533C  7F C4 F3 78 */	mr r4, r30
/* 80148260 00145340  D0 1C 00 18 */	stfs f0, 0x18(r28)
/* 80148264 00145344  7F E5 FB 78 */	mr r5, r31
/* 80148268 00145348  38 7C 00 18 */	addi r3, r28, 0x18
/* 8014826C 0014534C  38 C6 00 EC */	addi r6, r6, 0xec
/* 80148270 00145350  C0 22 A6 30 */	lfs f1, "@1868"@sda21(r2)
/* 80148274 00145354  C0 42 A6 34 */	lfs f2, "@1869"@sda21(r2)
/* 80148278 00145358  FC 60 08 90 */	fmr f3, f1
/* 8014827C 0014535C  48 00 67 C1 */	bl "load_param<f,f>__10auto_tweakFRffffP16xModelAssetParamUiPCc"
.L_80148280:
/* 80148280 00145360  57 A0 06 3F */	clrlwi. r0, r29, 24
/* 80148284 00145364  41 82 00 34 */	beq .L_801482B8
/* 80148288 00145368  C0 02 A6 A0 */	lfs f0, "@2411"@sda21(r2)
/* 8014828C 0014536C  3C 60 80 27 */	lis r3, "@stringBase0"@ha
/* 80148290 00145370  38 C3 D8 B0 */	addi r6, r3, "@stringBase0"@l
/* 80148294 00145374  7F C4 F3 78 */	mr r4, r30
/* 80148298 00145378  D0 1C 00 1C */	stfs f0, 0x1c(r28)
/* 8014829C 0014537C  7F E5 FB 78 */	mr r5, r31
/* 801482A0 00145380  38 7C 00 1C */	addi r3, r28, 0x1c
/* 801482A4 00145384  38 C6 00 F6 */	addi r6, r6, 0xf6
/* 801482A8 00145388  C0 22 A6 30 */	lfs f1, "@1868"@sda21(r2)
/* 801482AC 0014538C  C0 42 A6 34 */	lfs f2, "@1869"@sda21(r2)
/* 801482B0 00145390  C0 62 A6 A4 */	lfs f3, "@2412"@sda21(r2)
/* 801482B4 00145394  48 00 67 89 */	bl "load_param<f,f>__10auto_tweakFRffffP16xModelAssetParamUiPCc"
.L_801482B8:
/* 801482B8 00145398  57 A0 06 3F */	clrlwi. r0, r29, 24
/* 801482BC 0014539C  41 82 00 34 */	beq .L_801482F0
/* 801482C0 001453A0  C0 02 A6 A8 */	lfs f0, "@2413"@sda21(r2)
/* 801482C4 001453A4  3C 60 80 27 */	lis r3, "@stringBase0"@ha
/* 801482C8 001453A8  38 C3 D8 B0 */	addi r6, r3, "@stringBase0"@l
/* 801482CC 001453AC  7F C4 F3 78 */	mr r4, r30
/* 801482D0 001453B0  D0 1C 00 20 */	stfs f0, 0x20(r28)
/* 801482D4 001453B4  7F E5 FB 78 */	mr r5, r31
/* 801482D8 001453B8  38 7C 00 20 */	addi r3, r28, 0x20
/* 801482DC 001453BC  38 C6 01 03 */	addi r6, r6, 0x103
/* 801482E0 001453C0  C0 22 A6 30 */	lfs f1, "@1868"@sda21(r2)
/* 801482E4 001453C4  C0 42 A6 34 */	lfs f2, "@1869"@sda21(r2)
/* 801482E8 001453C8  C0 62 A6 A4 */	lfs f3, "@2412"@sda21(r2)
/* 801482EC 001453CC  48 00 67 51 */	bl "load_param<f,f>__10auto_tweakFRffffP16xModelAssetParamUiPCc"
.L_801482F0:
/* 801482F0 001453D0  57 A0 06 3F */	clrlwi. r0, r29, 24
/* 801482F4 001453D4  41 82 00 34 */	beq .L_80148328
/* 801482F8 001453D8  C0 02 A6 AC */	lfs f0, "@2414"@sda21(r2)
/* 801482FC 001453DC  3C 60 80 27 */	lis r3, "@stringBase0"@ha
/* 80148300 001453E0  38 C3 D8 B0 */	addi r6, r3, "@stringBase0"@l
/* 80148304 001453E4  7F C4 F3 78 */	mr r4, r30
/* 80148308 001453E8  D0 1C 00 24 */	stfs f0, 0x24(r28)
/* 8014830C 001453EC  7F E5 FB 78 */	mr r5, r31
/* 80148310 001453F0  38 7C 00 24 */	addi r3, r28, 0x24
/* 80148314 001453F4  38 C6 01 17 */	addi r6, r6, 0x117
/* 80148318 001453F8  C0 22 A6 30 */	lfs f1, "@1868"@sda21(r2)
/* 8014831C 001453FC  C0 42 A6 34 */	lfs f2, "@1869"@sda21(r2)
/* 80148320 00145400  FC 60 08 90 */	fmr f3, f1
/* 80148324 00145404  48 00 67 19 */	bl "load_param<f,f>__10auto_tweakFRffffP16xModelAssetParamUiPCc"
.L_80148328:
/* 80148328 00145408  57 A0 06 3F */	clrlwi. r0, r29, 24
/* 8014832C 0014540C  41 82 00 34 */	beq .L_80148360
/* 80148330 00145410  C0 02 A6 50 */	lfs f0, "@1987"@sda21(r2)
/* 80148334 00145414  3C 60 80 27 */	lis r3, "@stringBase0"@ha
/* 80148338 00145418  38 C3 D8 B0 */	addi r6, r3, "@stringBase0"@l
/* 8014833C 0014541C  7F C4 F3 78 */	mr r4, r30
/* 80148340 00145420  D0 1C 00 28 */	stfs f0, 0x28(r28)
/* 80148344 00145424  7F E5 FB 78 */	mr r5, r31
/* 80148348 00145428  38 7C 00 28 */	addi r3, r28, 0x28
/* 8014834C 0014542C  38 C6 01 29 */	addi r6, r6, 0x129
/* 80148350 00145430  C0 22 A6 30 */	lfs f1, "@1868"@sda21(r2)
/* 80148354 00145434  C0 42 A6 34 */	lfs f2, "@1869"@sda21(r2)
/* 80148358 00145438  FC 60 08 90 */	fmr f3, f1
/* 8014835C 0014543C  48 00 66 E1 */	bl "load_param<f,f>__10auto_tweakFRffffP16xModelAssetParamUiPCc"
.L_80148360:
/* 80148360 00145440  57 A0 06 3F */	clrlwi. r0, r29, 24
/* 80148364 00145444  41 82 00 34 */	beq .L_80148398
/* 80148368 00145448  C0 02 A6 30 */	lfs f0, "@1868"@sda21(r2)
/* 8014836C 0014544C  3C 60 80 27 */	lis r3, "@stringBase0"@ha
/* 80148370 00145450  38 C3 D8 B0 */	addi r6, r3, "@stringBase0"@l
/* 80148374 00145454  7F C4 F3 78 */	mr r4, r30
/* 80148378 00145458  D0 1C 00 2C */	stfs f0, 0x2c(r28)
/* 8014837C 0014545C  7F E5 FB 78 */	mr r5, r31
/* 80148380 00145460  38 7C 00 2C */	addi r3, r28, 0x2c
/* 80148384 00145464  38 C6 01 34 */	addi r6, r6, 0x134
/* 80148388 00145468  C0 22 A6 30 */	lfs f1, "@1868"@sda21(r2)
/* 8014838C 0014546C  C0 42 A6 34 */	lfs f2, "@1869"@sda21(r2)
/* 80148390 00145470  C0 62 A6 90 */	lfs f3, "@2407"@sda21(r2)
/* 80148394 00145474  48 00 66 A9 */	bl "load_param<f,f>__10auto_tweakFRffffP16xModelAssetParamUiPCc"
.L_80148398:
/* 80148398 00145478  57 A0 06 3F */	clrlwi. r0, r29, 24
/* 8014839C 0014547C  41 82 00 34 */	beq .L_801483D0
/* 801483A0 00145480  C0 02 A6 4C */	lfs f0, "@1976"@sda21(r2)
/* 801483A4 00145484  3C 60 80 27 */	lis r3, "@stringBase0"@ha
/* 801483A8 00145488  38 C3 D8 B0 */	addi r6, r3, "@stringBase0"@l
/* 801483AC 0014548C  7F C4 F3 78 */	mr r4, r30
/* 801483B0 00145490  D0 1C 00 30 */	stfs f0, 0x30(r28)
/* 801483B4 00145494  7F E5 FB 78 */	mr r5, r31
/* 801483B8 00145498  38 7C 00 30 */	addi r3, r28, 0x30
/* 801483BC 0014549C  38 C6 01 45 */	addi r6, r6, 0x145
/* 801483C0 001454A0  C0 22 A6 30 */	lfs f1, "@1868"@sda21(r2)
/* 801483C4 001454A4  C0 42 A6 74 */	lfs f2, "@2106"@sda21(r2)
/* 801483C8 001454A8  C0 62 A6 B0 */	lfs f3, "@2415"@sda21(r2)
/* 801483CC 001454AC  48 00 66 71 */	bl "load_param<f,f>__10auto_tweakFRffffP16xModelAssetParamUiPCc"
.L_801483D0:
/* 801483D0 001454B0  57 A0 06 3F */	clrlwi. r0, r29, 24
/* 801483D4 001454B4  41 82 00 34 */	beq .L_80148408
/* 801483D8 001454B8  38 00 00 04 */	li r0, 0x4
/* 801483DC 001454BC  3C 60 80 27 */	lis r3, "@stringBase0"@ha
/* 801483E0 001454C0  38 83 D8 B0 */	addi r4, r3, "@stringBase0"@l
/* 801483E4 001454C4  90 1C 00 34 */	stw r0, 0x34(r28)
/* 801483E8 001454C8  7F C7 F3 78 */	mr r7, r30
/* 801483EC 001454CC  7F E8 FB 78 */	mr r8, r31
/* 801483F0 001454D0  38 7C 00 34 */	addi r3, r28, 0x34
/* 801483F4 001454D4  39 24 01 54 */	addi r9, r4, 0x154
/* 801483F8 001454D8  38 80 00 01 */	li r4, 0x1
/* 801483FC 001454DC  38 A0 00 01 */	li r5, 0x1
/* 80148400 001454E0  38 C0 00 64 */	li r6, 0x64
/* 80148404 001454E4  48 00 66 E1 */	bl "load_param<i,i>__10auto_tweakFRiiiiP16xModelAssetParamUiPCc"
.L_80148408:
/* 80148408 001454E8  57 A0 06 3F */	clrlwi. r0, r29, 24
/* 8014840C 001454EC  41 82 00 34 */	beq .L_80148440
/* 80148410 001454F0  C0 02 A6 70 */	lfs f0, "@2105"@sda21(r2)
/* 80148414 001454F4  3C 60 80 27 */	lis r3, "@stringBase0"@ha
/* 80148418 001454F8  38 C3 D8 B0 */	addi r6, r3, "@stringBase0"@l
/* 8014841C 001454FC  7F C4 F3 78 */	mr r4, r30
/* 80148420 00145500  D0 1C 00 38 */	stfs f0, 0x38(r28)
/* 80148424 00145504  7F E5 FB 78 */	mr r5, r31
/* 80148428 00145508  38 7C 00 38 */	addi r3, r28, 0x38
/* 8014842C 0014550C  38 C6 01 61 */	addi r6, r6, 0x161
/* 80148430 00145510  C0 22 A6 30 */	lfs f1, "@1868"@sda21(r2)
/* 80148434 00145514  C0 42 A6 34 */	lfs f2, "@1869"@sda21(r2)
/* 80148438 00145518  FC 60 08 90 */	fmr f3, f1
/* 8014843C 0014551C  48 00 66 01 */	bl "load_param<f,f>__10auto_tweakFRffffP16xModelAssetParamUiPCc"
.L_80148440:
/* 80148440 00145520  57 A0 06 3F */	clrlwi. r0, r29, 24
/* 80148444 00145524  41 82 00 34 */	beq .L_80148478
/* 80148448 00145528  C0 02 A6 4C */	lfs f0, "@1976"@sda21(r2)
/* 8014844C 0014552C  3C 60 80 27 */	lis r3, "@stringBase0"@ha
/* 80148450 00145530  38 C3 D8 B0 */	addi r6, r3, "@stringBase0"@l
/* 80148454 00145534  7F C4 F3 78 */	mr r4, r30
/* 80148458 00145538  D0 1C 00 3C */	stfs f0, 0x3c(r28)
/* 8014845C 0014553C  7F E5 FB 78 */	mr r5, r31
/* 80148460 00145540  38 7C 00 3C */	addi r3, r28, 0x3c
/* 80148464 00145544  38 C6 01 70 */	addi r6, r6, 0x170
/* 80148468 00145548  C0 22 A6 30 */	lfs f1, "@1868"@sda21(r2)
/* 8014846C 0014554C  C0 42 A6 34 */	lfs f2, "@1869"@sda21(r2)
/* 80148470 00145550  C0 62 A6 5C */	lfs f3, "@2084"@sda21(r2)
/* 80148474 00145554  48 00 65 C9 */	bl "load_param<f,f>__10auto_tweakFRffffP16xModelAssetParamUiPCc"
.L_80148478:
/* 80148478 00145558  57 A0 06 3F */	clrlwi. r0, r29, 24
/* 8014847C 0014555C  41 82 00 34 */	beq .L_801484B0
/* 80148480 00145560  C0 02 A6 34 */	lfs f0, "@1869"@sda21(r2)
/* 80148484 00145564  3C 60 80 27 */	lis r3, "@stringBase0"@ha
/* 80148488 00145568  38 C3 D8 B0 */	addi r6, r3, "@stringBase0"@l
/* 8014848C 0014556C  7F C4 F3 78 */	mr r4, r30
/* 80148490 00145570  D0 1C 00 40 */	stfs f0, 0x40(r28)
/* 80148494 00145574  7F E5 FB 78 */	mr r5, r31
/* 80148498 00145578  38 7C 00 40 */	addi r3, r28, 0x40
/* 8014849C 0014557C  38 C6 01 7E */	addi r6, r6, 0x17e
/* 801484A0 00145580  C0 22 A6 30 */	lfs f1, "@1868"@sda21(r2)
/* 801484A4 00145584  C0 42 A6 34 */	lfs f2, "@1869"@sda21(r2)
/* 801484A8 00145588  C0 62 A6 5C */	lfs f3, "@2084"@sda21(r2)
/* 801484AC 0014558C  48 00 65 91 */	bl "load_param<f,f>__10auto_tweakFRffffP16xModelAssetParamUiPCc"
.L_801484B0:
/* 801484B0 00145590  57 A0 06 3F */	clrlwi. r0, r29, 24
/* 801484B4 00145594  41 82 00 34 */	beq .L_801484E8
/* 801484B8 00145598  C0 02 A6 34 */	lfs f0, "@1869"@sda21(r2)
/* 801484BC 0014559C  3C 60 80 27 */	lis r3, "@stringBase0"@ha
/* 801484C0 001455A0  38 C3 D8 B0 */	addi r6, r3, "@stringBase0"@l
/* 801484C4 001455A4  7F C4 F3 78 */	mr r4, r30
/* 801484C8 001455A8  D0 1C 00 44 */	stfs f0, 0x44(r28)
/* 801484CC 001455AC  7F E5 FB 78 */	mr r5, r31
/* 801484D0 001455B0  38 7C 00 44 */	addi r3, r28, 0x44
/* 801484D4 001455B4  38 C6 01 8C */	addi r6, r6, 0x18c
/* 801484D8 001455B8  C0 22 A6 30 */	lfs f1, "@1868"@sda21(r2)
/* 801484DC 001455BC  C0 42 A6 34 */	lfs f2, "@1869"@sda21(r2)
/* 801484E0 001455C0  C0 62 A6 5C */	lfs f3, "@2084"@sda21(r2)
/* 801484E4 001455C4  48 00 65 59 */	bl "load_param<f,f>__10auto_tweakFRffffP16xModelAssetParamUiPCc"
.L_801484E8:
/* 801484E8 001455C8  57 A0 06 3F */	clrlwi. r0, r29, 24
/* 801484EC 001455CC  41 82 00 34 */	beq .L_80148520
/* 801484F0 001455D0  C0 02 A6 30 */	lfs f0, "@1868"@sda21(r2)
/* 801484F4 001455D4  3C 60 80 27 */	lis r3, "@stringBase0"@ha
/* 801484F8 001455D8  38 C3 D8 B0 */	addi r6, r3, "@stringBase0"@l
/* 801484FC 001455DC  7F C4 F3 78 */	mr r4, r30
/* 80148500 001455E0  D0 1C 00 48 */	stfs f0, 0x48(r28)
/* 80148504 001455E4  7F E5 FB 78 */	mr r5, r31
/* 80148508 001455E8  38 7C 00 48 */	addi r3, r28, 0x48
/* 8014850C 001455EC  38 C6 01 9A */	addi r6, r6, 0x19a
/* 80148510 001455F0  C0 22 A6 30 */	lfs f1, "@1868"@sda21(r2)
/* 80148514 001455F4  C0 42 A6 34 */	lfs f2, "@1869"@sda21(r2)
/* 80148518 001455F8  C0 62 A6 5C */	lfs f3, "@2084"@sda21(r2)
/* 8014851C 001455FC  48 00 65 21 */	bl "load_param<f,f>__10auto_tweakFRffffP16xModelAssetParamUiPCc"
.L_80148520:
/* 80148520 00145600  57 A0 06 3F */	clrlwi. r0, r29, 24
/* 80148524 00145604  41 82 00 34 */	beq .L_80148558
/* 80148528 00145608  C0 02 A6 70 */	lfs f0, "@2105"@sda21(r2)
/* 8014852C 0014560C  3C 60 80 27 */	lis r3, "@stringBase0"@ha
/* 80148530 00145610  38 C3 D8 B0 */	addi r6, r3, "@stringBase0"@l
/* 80148534 00145614  7F C4 F3 78 */	mr r4, r30
/* 80148538 00145618  D0 1C 00 4C */	stfs f0, 0x4c(r28)
/* 8014853C 0014561C  7F E5 FB 78 */	mr r5, r31
/* 80148540 00145620  38 7C 00 4C */	addi r3, r28, 0x4c
/* 80148544 00145624  38 C6 01 A8 */	addi r6, r6, 0x1a8
/* 80148548 00145628  C0 22 A6 30 */	lfs f1, "@1868"@sda21(r2)
/* 8014854C 0014562C  C0 42 A6 34 */	lfs f2, "@1869"@sda21(r2)
/* 80148550 00145630  C0 62 A6 90 */	lfs f3, "@2407"@sda21(r2)
/* 80148554 00145634  48 00 64 E9 */	bl "load_param<f,f>__10auto_tweakFRffffP16xModelAssetParamUiPCc"
.L_80148558:
/* 80148558 00145638  57 A0 06 3F */	clrlwi. r0, r29, 24
/* 8014855C 0014563C  41 82 00 34 */	beq .L_80148590
/* 80148560 00145640  C0 02 A6 84 */	lfs f0, "@2149"@sda21(r2)
/* 80148564 00145644  3C 60 80 27 */	lis r3, "@stringBase0"@ha
/* 80148568 00145648  38 C3 D8 B0 */	addi r6, r3, "@stringBase0"@l
/* 8014856C 0014564C  7F C4 F3 78 */	mr r4, r30
/* 80148570 00145650  D0 1C 00 50 */	stfs f0, 0x50(r28)
/* 80148574 00145654  7F E5 FB 78 */	mr r5, r31
/* 80148578 00145658  38 7C 00 50 */	addi r3, r28, 0x50
/* 8014857C 0014565C  38 C6 01 BA */	addi r6, r6, 0x1ba
/* 80148580 00145660  C0 22 A6 30 */	lfs f1, "@1868"@sda21(r2)
/* 80148584 00145664  C0 42 A6 34 */	lfs f2, "@1869"@sda21(r2)
/* 80148588 00145668  C0 62 A6 B0 */	lfs f3, "@2415"@sda21(r2)
/* 8014858C 0014566C  48 00 64 B1 */	bl "load_param<f,f>__10auto_tweakFRffffP16xModelAssetParamUiPCc"
.L_80148590:
/* 80148590 00145670  57 A0 06 3F */	clrlwi. r0, r29, 24
/* 80148594 00145674  41 82 00 34 */	beq .L_801485C8
/* 80148598 00145678  C0 02 A6 B4 */	lfs f0, "@2416"@sda21(r2)
/* 8014859C 0014567C  3C 60 80 27 */	lis r3, "@stringBase0"@ha
/* 801485A0 00145680  38 C3 D8 B0 */	addi r6, r3, "@stringBase0"@l
/* 801485A4 00145684  7F C4 F3 78 */	mr r4, r30
/* 801485A8 00145688  D0 1C 00 54 */	stfs f0, 0x54(r28)
/* 801485AC 0014568C  7F E5 FB 78 */	mr r5, r31
/* 801485B0 00145690  38 7C 00 54 */	addi r3, r28, 0x54
/* 801485B4 00145694  38 C6 01 CD */	addi r6, r6, 0x1cd
/* 801485B8 00145698  C0 22 A6 30 */	lfs f1, "@1868"@sda21(r2)
/* 801485BC 0014569C  C0 42 A6 34 */	lfs f2, "@1869"@sda21(r2)
/* 801485C0 001456A0  C0 62 A6 B0 */	lfs f3, "@2415"@sda21(r2)
/* 801485C4 001456A4  48 00 64 79 */	bl "load_param<f,f>__10auto_tweakFRffffP16xModelAssetParamUiPCc"
.L_801485C8:
/* 801485C8 001456A8  57 A0 06 3F */	clrlwi. r0, r29, 24
/* 801485CC 001456AC  41 82 00 34 */	beq .L_80148600
/* 801485D0 001456B0  C0 02 A6 B8 */	lfs f0, "@2417"@sda21(r2)
/* 801485D4 001456B4  3C 60 80 27 */	lis r3, "@stringBase0"@ha
/* 801485D8 001456B8  38 C3 D8 B0 */	addi r6, r3, "@stringBase0"@l
/* 801485DC 001456BC  7F C4 F3 78 */	mr r4, r30
/* 801485E0 001456C0  D0 1C 00 58 */	stfs f0, 0x58(r28)
/* 801485E4 001456C4  7F E5 FB 78 */	mr r5, r31
/* 801485E8 001456C8  38 7C 00 58 */	addi r3, r28, 0x58
/* 801485EC 001456CC  38 C6 01 E0 */	addi r6, r6, 0x1e0
/* 801485F0 001456D0  C0 22 A6 30 */	lfs f1, "@1868"@sda21(r2)
/* 801485F4 001456D4  C0 42 A6 34 */	lfs f2, "@1869"@sda21(r2)
/* 801485F8 001456D8  C0 62 A6 B0 */	lfs f3, "@2415"@sda21(r2)
/* 801485FC 001456DC  48 00 64 41 */	bl "load_param<f,f>__10auto_tweakFRffffP16xModelAssetParamUiPCc"
.L_80148600:
/* 80148600 001456E0  57 A0 06 3F */	clrlwi. r0, r29, 24
/* 80148604 001456E4  41 82 00 34 */	beq .L_80148638
/* 80148608 001456E8  C0 02 A6 30 */	lfs f0, "@1868"@sda21(r2)
/* 8014860C 001456EC  3C 60 80 27 */	lis r3, "@stringBase0"@ha
/* 80148610 001456F0  38 C3 D8 B0 */	addi r6, r3, "@stringBase0"@l
/* 80148614 001456F4  7F C4 F3 78 */	mr r4, r30
/* 80148618 001456F8  D0 1C 00 5C */	stfs f0, 0x5c(r28)
/* 8014861C 001456FC  7F E5 FB 78 */	mr r5, r31
/* 80148620 00145700  38 7C 00 5C */	addi r3, r28, 0x5c
/* 80148624 00145704  38 C6 01 F3 */	addi r6, r6, 0x1f3
/* 80148628 00145708  C0 22 A6 30 */	lfs f1, "@1868"@sda21(r2)
/* 8014862C 0014570C  C0 42 A6 34 */	lfs f2, "@1869"@sda21(r2)
/* 80148630 00145710  C0 62 A6 BC */	lfs f3, "@2418"@sda21(r2)
/* 80148634 00145714  48 00 64 09 */	bl "load_param<f,f>__10auto_tweakFRffffP16xModelAssetParamUiPCc"
.L_80148638:
/* 80148638 00145718  57 A0 06 3F */	clrlwi. r0, r29, 24
/* 8014863C 0014571C  41 82 00 34 */	beq .L_80148670
/* 80148640 00145720  C0 02 A6 50 */	lfs f0, "@1987"@sda21(r2)
/* 80148644 00145724  3C 60 80 27 */	lis r3, "@stringBase0"@ha
/* 80148648 00145728  38 C3 D8 B0 */	addi r6, r3, "@stringBase0"@l
/* 8014864C 0014572C  7F C4 F3 78 */	mr r4, r30
/* 80148650 00145730  D0 1C 00 60 */	stfs f0, 0x60(r28)
/* 80148654 00145734  7F E5 FB 78 */	mr r5, r31
/* 80148658 00145738  38 7C 00 60 */	addi r3, r28, 0x60
/* 8014865C 0014573C  38 C6 02 04 */	addi r6, r6, 0x204
/* 80148660 00145740  C0 22 A6 30 */	lfs f1, "@1868"@sda21(r2)
/* 80148664 00145744  C0 42 A6 34 */	lfs f2, "@1869"@sda21(r2)
/* 80148668 00145748  C0 62 A6 B0 */	lfs f3, "@2415"@sda21(r2)
/* 8014866C 0014574C  48 00 63 D1 */	bl "load_param<f,f>__10auto_tweakFRffffP16xModelAssetParamUiPCc"
.L_80148670:
/* 80148670 00145750  57 A0 06 3F */	clrlwi. r0, r29, 24
/* 80148674 00145754  41 82 00 34 */	beq .L_801486A8
/* 80148678 00145758  C0 02 A6 C0 */	lfs f0, "@2419"@sda21(r2)
/* 8014867C 0014575C  3C 60 80 27 */	lis r3, "@stringBase0"@ha
/* 80148680 00145760  38 C3 D8 B0 */	addi r6, r3, "@stringBase0"@l
/* 80148684 00145764  7F C4 F3 78 */	mr r4, r30
/* 80148688 00145768  D0 1C 00 64 */	stfs f0, 0x64(r28)
/* 8014868C 0014576C  7F E5 FB 78 */	mr r5, r31
/* 80148690 00145770  38 7C 00 64 */	addi r3, r28, 0x64
/* 80148694 00145774  38 C6 02 15 */	addi r6, r6, 0x215
/* 80148698 00145778  C0 22 A6 30 */	lfs f1, "@1868"@sda21(r2)
/* 8014869C 0014577C  C0 42 A6 34 */	lfs f2, "@1869"@sda21(r2)
/* 801486A0 00145780  C0 62 A6 B0 */	lfs f3, "@2415"@sda21(r2)
/* 801486A4 00145784  48 00 63 99 */	bl "load_param<f,f>__10auto_tweakFRffffP16xModelAssetParamUiPCc"
.L_801486A8:
/* 801486A8 00145788  57 A0 06 3F */	clrlwi. r0, r29, 24
/* 801486AC 0014578C  41 82 00 38 */	beq .L_801486E4
/* 801486B0 00145790  38 00 00 03 */	li r0, 0x3
/* 801486B4 00145794  3C 60 80 27 */	lis r3, "@stringBase0"@ha
/* 801486B8 00145798  38 83 D8 B0 */	addi r4, r3, "@stringBase0"@l
/* 801486BC 0014579C  3C A0 00 02 */	lis r5, 0x2
/* 801486C0 001457A0  90 1C 00 68 */	stw r0, 0x68(r28)
/* 801486C4 001457A4  7F C7 F3 78 */	mr r7, r30
/* 801486C8 001457A8  7F E8 FB 78 */	mr r8, r31
/* 801486CC 001457AC  38 7C 00 68 */	addi r3, r28, 0x68
/* 801486D0 001457B0  38 C5 86 A0 */	addi r6, r5, -0x7960
/* 801486D4 001457B4  39 24 02 28 */	addi r9, r4, 0x228
/* 801486D8 001457B8  38 80 00 01 */	li r4, 0x1
/* 801486DC 001457BC  38 A0 00 00 */	li r5, 0x0
/* 801486E0 001457C0  48 00 64 05 */	bl "load_param<i,i>__10auto_tweakFRiiiiP16xModelAssetParamUiPCc"
.L_801486E4:
/* 801486E4 001457C4  57 A0 06 3F */	clrlwi. r0, r29, 24
/* 801486E8 001457C8  41 82 00 34 */	beq .L_8014871C
/* 801486EC 001457CC  C0 02 A6 C4 */	lfs f0, "@2420"@sda21(r2)
/* 801486F0 001457D0  3C 60 80 27 */	lis r3, "@stringBase0"@ha
/* 801486F4 001457D4  38 C3 D8 B0 */	addi r6, r3, "@stringBase0"@l
/* 801486F8 001457D8  7F C4 F3 78 */	mr r4, r30
/* 801486FC 001457DC  D0 1C 00 6C */	stfs f0, 0x6c(r28)
/* 80148700 001457E0  7F E5 FB 78 */	mr r5, r31
/* 80148704 001457E4  38 7C 00 6C */	addi r3, r28, 0x6c
/* 80148708 001457E8  38 C6 02 35 */	addi r6, r6, 0x235
/* 8014870C 001457EC  C0 22 A6 30 */	lfs f1, "@1868"@sda21(r2)
/* 80148710 001457F0  C0 42 A6 C8 */	lfs f2, "@2421"@sda21(r2)
/* 80148714 001457F4  C0 62 A6 B0 */	lfs f3, "@2415"@sda21(r2)
/* 80148718 001457F8  48 00 63 25 */	bl "load_param<f,f>__10auto_tweakFRffffP16xModelAssetParamUiPCc"
.L_8014871C:
/* 8014871C 001457FC  57 A0 06 3F */	clrlwi. r0, r29, 24
/* 80148720 00145800  41 82 00 34 */	beq .L_80148754
/* 80148724 00145804  C0 02 A6 50 */	lfs f0, "@1987"@sda21(r2)
/* 80148728 00145808  3C 60 80 27 */	lis r3, "@stringBase0"@ha
/* 8014872C 0014580C  38 C3 D8 B0 */	addi r6, r3, "@stringBase0"@l
/* 80148730 00145810  7F C4 F3 78 */	mr r4, r30
/* 80148734 00145814  D0 1C 00 70 */	stfs f0, 0x70(r28)
/* 80148738 00145818  7F E5 FB 78 */	mr r5, r31
/* 8014873C 0014581C  38 7C 00 70 */	addi r3, r28, 0x70
/* 80148740 00145820  38 C6 02 43 */	addi r6, r6, 0x243
/* 80148744 00145824  C0 22 A6 30 */	lfs f1, "@1868"@sda21(r2)
/* 80148748 00145828  C0 42 A6 34 */	lfs f2, "@1869"@sda21(r2)
/* 8014874C 0014582C  C0 62 A6 90 */	lfs f3, "@2407"@sda21(r2)
/* 80148750 00145830  48 00 62 ED */	bl "load_param<f,f>__10auto_tweakFRffffP16xModelAssetParamUiPCc"
.L_80148754:
/* 80148754 00145834  57 A0 06 3F */	clrlwi. r0, r29, 24
/* 80148758 00145838  41 82 00 34 */	beq .L_8014878C
/* 8014875C 0014583C  C0 02 A6 64 */	lfs f0, "@2086"@sda21(r2)
/* 80148760 00145840  3C 60 80 27 */	lis r3, "@stringBase0"@ha
/* 80148764 00145844  38 C3 D8 B0 */	addi r6, r3, "@stringBase0"@l
/* 80148768 00145848  7F C4 F3 78 */	mr r4, r30
/* 8014876C 0014584C  D0 1C 00 74 */	stfs f0, 0x74(r28)
/* 80148770 00145850  7F E5 FB 78 */	mr r5, r31
/* 80148774 00145854  38 7C 00 74 */	addi r3, r28, 0x74
/* 80148778 00145858  38 C6 02 51 */	addi r6, r6, 0x251
/* 8014877C 0014585C  C0 22 A6 30 */	lfs f1, "@1868"@sda21(r2)
/* 80148780 00145860  C0 42 A6 34 */	lfs f2, "@1869"@sda21(r2)
/* 80148784 00145864  C0 62 A6 B0 */	lfs f3, "@2415"@sda21(r2)
/* 80148788 00145868  48 00 62 B5 */	bl "load_param<f,f>__10auto_tweakFRffffP16xModelAssetParamUiPCc"
.L_8014878C:
/* 8014878C 0014586C  57 A0 06 3F */	clrlwi. r0, r29, 24
/* 80148790 00145870  41 82 00 34 */	beq .L_801487C4
/* 80148794 00145874  C0 02 A6 B8 */	lfs f0, "@2417"@sda21(r2)
/* 80148798 00145878  3C 60 80 27 */	lis r3, "@stringBase0"@ha
/* 8014879C 0014587C  38 C3 D8 B0 */	addi r6, r3, "@stringBase0"@l
/* 801487A0 00145880  7F C4 F3 78 */	mr r4, r30
/* 801487A4 00145884  D0 1C 00 78 */	stfs f0, 0x78(r28)
/* 801487A8 00145888  7F E5 FB 78 */	mr r5, r31
/* 801487AC 0014588C  38 7C 00 78 */	addi r3, r28, 0x78
/* 801487B0 00145890  38 C6 02 5D */	addi r6, r6, 0x25d
/* 801487B4 00145894  C0 22 A6 30 */	lfs f1, "@1868"@sda21(r2)
/* 801487B8 00145898  C0 42 A6 34 */	lfs f2, "@1869"@sda21(r2)
/* 801487BC 0014589C  C0 62 A6 90 */	lfs f3, "@2407"@sda21(r2)
/* 801487C0 001458A0  48 00 62 7D */	bl "load_param<f,f>__10auto_tweakFRffffP16xModelAssetParamUiPCc"
.L_801487C4:
/* 801487C4 001458A4  57 A0 06 3F */	clrlwi. r0, r29, 24
/* 801487C8 001458A8  41 82 00 34 */	beq .L_801487FC
/* 801487CC 001458AC  C0 02 A6 CC */	lfs f0, "@2422"@sda21(r2)
/* 801487D0 001458B0  3C 60 80 27 */	lis r3, "@stringBase0"@ha
/* 801487D4 001458B4  38 C3 D8 B0 */	addi r6, r3, "@stringBase0"@l
/* 801487D8 001458B8  7F C4 F3 78 */	mr r4, r30
/* 801487DC 001458BC  D0 1C 00 7C */	stfs f0, 0x7c(r28)
/* 801487E0 001458C0  7F E5 FB 78 */	mr r5, r31
/* 801487E4 001458C4  38 7C 00 7C */	addi r3, r28, 0x7c
/* 801487E8 001458C8  38 C6 02 6D */	addi r6, r6, 0x26d
/* 801487EC 001458CC  C0 22 A6 30 */	lfs f1, "@1868"@sda21(r2)
/* 801487F0 001458D0  C0 42 A6 34 */	lfs f2, "@1869"@sda21(r2)
/* 801487F4 001458D4  C0 62 A6 BC */	lfs f3, "@2418"@sda21(r2)
/* 801487F8 001458D8  48 00 62 45 */	bl "load_param<f,f>__10auto_tweakFRffffP16xModelAssetParamUiPCc"
.L_801487FC:
/* 801487FC 001458DC  57 A0 06 3F */	clrlwi. r0, r29, 24
/* 80148800 001458E0  41 82 00 34 */	beq .L_80148834
/* 80148804 001458E4  C0 02 A6 D0 */	lfs f0, "@2423"@sda21(r2)
/* 80148808 001458E8  3C 60 80 27 */	lis r3, "@stringBase0"@ha
/* 8014880C 001458EC  38 C3 D8 B0 */	addi r6, r3, "@stringBase0"@l
/* 80148810 001458F0  7F C4 F3 78 */	mr r4, r30
/* 80148814 001458F4  D0 1C 00 80 */	stfs f0, 0x80(r28)
/* 80148818 001458F8  7F E5 FB 78 */	mr r5, r31
/* 8014881C 001458FC  38 7C 00 80 */	addi r3, r28, 0x80
/* 80148820 00145900  38 C6 02 7E */	addi r6, r6, 0x27e
/* 80148824 00145904  C0 22 A6 30 */	lfs f1, "@1868"@sda21(r2)
/* 80148828 00145908  C0 42 A6 D4 */	lfs f2, "@2424"@sda21(r2)
/* 8014882C 0014590C  C0 62 A6 34 */	lfs f3, "@1869"@sda21(r2)
/* 80148830 00145910  48 00 62 0D */	bl "load_param<f,f>__10auto_tweakFRffffP16xModelAssetParamUiPCc"
.L_80148834:
/* 80148834 00145914  57 A0 06 3F */	clrlwi. r0, r29, 24
/* 80148838 00145918  41 82 00 34 */	beq .L_8014886C
/* 8014883C 0014591C  C0 02 A6 64 */	lfs f0, "@2086"@sda21(r2)
/* 80148840 00145920  3C 60 80 27 */	lis r3, "@stringBase0"@ha
/* 80148844 00145924  38 C3 D8 B0 */	addi r6, r3, "@stringBase0"@l
/* 80148848 00145928  7F C4 F3 78 */	mr r4, r30
/* 8014884C 0014592C  D0 1C 00 84 */	stfs f0, 0x84(r28)
/* 80148850 00145930  7F E5 FB 78 */	mr r5, r31
/* 80148854 00145934  38 7C 00 84 */	addi r3, r28, 0x84
/* 80148858 00145938  38 C6 02 92 */	addi r6, r6, 0x292
/* 8014885C 0014593C  C0 22 A6 30 */	lfs f1, "@1868"@sda21(r2)
/* 80148860 00145940  C0 42 A6 34 */	lfs f2, "@1869"@sda21(r2)
/* 80148864 00145944  C0 62 A6 B0 */	lfs f3, "@2415"@sda21(r2)
/* 80148868 00145948  48 00 61 D5 */	bl "load_param<f,f>__10auto_tweakFRffffP16xModelAssetParamUiPCc"
.L_8014886C:
/* 8014886C 0014594C  57 A0 06 3F */	clrlwi. r0, r29, 24
/* 80148870 00145950  41 82 00 34 */	beq .L_801488A4
/* 80148874 00145954  C0 02 A6 D8 */	lfs f0, "@2425"@sda21(r2)
/* 80148878 00145958  3C 60 80 27 */	lis r3, "@stringBase0"@ha
/* 8014887C 0014595C  38 C3 D8 B0 */	addi r6, r3, "@stringBase0"@l
/* 80148880 00145960  7F C4 F3 78 */	mr r4, r30
/* 80148884 00145964  D0 1C 00 88 */	stfs f0, 0x88(r28)
/* 80148888 00145968  7F E5 FB 78 */	mr r5, r31
/* 8014888C 0014596C  38 7C 00 88 */	addi r3, r28, 0x88
/* 80148890 00145970  38 C6 02 A3 */	addi r6, r6, 0x2a3
/* 80148894 00145974  C0 22 A6 30 */	lfs f1, "@1868"@sda21(r2)
/* 80148898 00145978  C0 42 A6 C8 */	lfs f2, "@2421"@sda21(r2)
/* 8014889C 0014597C  C0 62 A6 B0 */	lfs f3, "@2415"@sda21(r2)
/* 801488A0 00145980  48 00 61 9D */	bl "load_param<f,f>__10auto_tweakFRffffP16xModelAssetParamUiPCc"
.L_801488A4:
/* 801488A4 00145984  57 A0 06 3F */	clrlwi. r0, r29, 24
/* 801488A8 00145988  41 82 00 34 */	beq .L_801488DC
/* 801488AC 0014598C  C0 02 A6 30 */	lfs f0, "@1868"@sda21(r2)
/* 801488B0 00145990  3C 60 80 27 */	lis r3, "@stringBase0"@ha
/* 801488B4 00145994  38 C3 D8 B0 */	addi r6, r3, "@stringBase0"@l
/* 801488B8 00145998  7F C4 F3 78 */	mr r4, r30
/* 801488BC 0014599C  D0 1C 00 8C */	stfs f0, 0x8c(r28)
/* 801488C0 001459A0  7F E5 FB 78 */	mr r5, r31
/* 801488C4 001459A4  38 7C 00 8C */	addi r3, r28, 0x8c
/* 801488C8 001459A8  38 C6 02 B6 */	addi r6, r6, 0x2b6
/* 801488CC 001459AC  C0 22 A6 30 */	lfs f1, "@1868"@sda21(r2)
/* 801488D0 001459B0  C0 42 A6 34 */	lfs f2, "@1869"@sda21(r2)
/* 801488D4 001459B4  C0 62 A6 90 */	lfs f3, "@2407"@sda21(r2)
/* 801488D8 001459B8  48 00 61 65 */	bl "load_param<f,f>__10auto_tweakFRffffP16xModelAssetParamUiPCc"
.L_801488DC:
/* 801488DC 001459BC  57 A0 06 3F */	clrlwi. r0, r29, 24
/* 801488E0 001459C0  41 82 00 34 */	beq .L_80148914
/* 801488E4 001459C4  C0 02 A6 DC */	lfs f0, "@2426"@sda21(r2)
/* 801488E8 001459C8  3C 60 80 27 */	lis r3, "@stringBase0"@ha
/* 801488EC 001459CC  38 C3 D8 B0 */	addi r6, r3, "@stringBase0"@l
/* 801488F0 001459D0  7F C4 F3 78 */	mr r4, r30
/* 801488F4 001459D4  D0 1C 00 90 */	stfs f0, 0x90(r28)
/* 801488F8 001459D8  7F E5 FB 78 */	mr r5, r31
/* 801488FC 001459DC  38 7C 00 90 */	addi r3, r28, 0x90
/* 80148900 001459E0  38 C6 02 CB */	addi r6, r6, 0x2cb
/* 80148904 001459E4  C0 22 A6 30 */	lfs f1, "@1868"@sda21(r2)
/* 80148908 001459E8  C0 42 A6 34 */	lfs f2, "@1869"@sda21(r2)
/* 8014890C 001459EC  C0 62 A6 A4 */	lfs f3, "@2412"@sda21(r2)
/* 80148910 001459F0  48 00 61 2D */	bl "load_param<f,f>__10auto_tweakFRffffP16xModelAssetParamUiPCc"
.L_80148914:
/* 80148914 001459F4  57 A0 06 3F */	clrlwi. r0, r29, 24
/* 80148918 001459F8  41 82 00 34 */	beq .L_8014894C
/* 8014891C 001459FC  C0 02 A6 70 */	lfs f0, "@2105"@sda21(r2)
/* 80148920 00145A00  3C 60 80 27 */	lis r3, "@stringBase0"@ha
/* 80148924 00145A04  38 C3 D8 B0 */	addi r6, r3, "@stringBase0"@l
/* 80148928 00145A08  7F C4 F3 78 */	mr r4, r30
/* 8014892C 00145A0C  D0 1C 00 94 */	stfs f0, 0x94(r28)
/* 80148930 00145A10  7F E5 FB 78 */	mr r5, r31
/* 80148934 00145A14  38 7C 00 94 */	addi r3, r28, 0x94
/* 80148938 00145A18  38 C6 02 E0 */	addi r6, r6, 0x2e0
/* 8014893C 00145A1C  C0 22 A6 30 */	lfs f1, "@1868"@sda21(r2)
/* 80148940 00145A20  C0 42 A6 C8 */	lfs f2, "@2421"@sda21(r2)
/* 80148944 00145A24  C0 62 A6 B0 */	lfs f3, "@2415"@sda21(r2)
/* 80148948 00145A28  48 00 60 F5 */	bl "load_param<f,f>__10auto_tweakFRffffP16xModelAssetParamUiPCc"
.L_8014894C:
/* 8014894C 00145A2C  57 A0 06 3F */	clrlwi. r0, r29, 24
/* 80148950 00145A30  41 82 00 34 */	beq .L_80148984
/* 80148954 00145A34  C0 02 A6 4C */	lfs f0, "@1976"@sda21(r2)
/* 80148958 00145A38  3C 60 80 27 */	lis r3, "@stringBase0"@ha
/* 8014895C 00145A3C  38 C3 D8 B0 */	addi r6, r3, "@stringBase0"@l
/* 80148960 00145A40  7F C4 F3 78 */	mr r4, r30
/* 80148964 00145A44  D0 1C 00 98 */	stfs f0, 0x98(r28)
/* 80148968 00145A48  7F E5 FB 78 */	mr r5, r31
/* 8014896C 00145A4C  38 7C 00 98 */	addi r3, r28, 0x98
/* 80148970 00145A50  38 C6 02 F1 */	addi r6, r6, 0x2f1
/* 80148974 00145A54  C0 22 A6 30 */	lfs f1, "@1868"@sda21(r2)
/* 80148978 00145A58  C0 42 A6 34 */	lfs f2, "@1869"@sda21(r2)
/* 8014897C 00145A5C  C0 62 A6 90 */	lfs f3, "@2407"@sda21(r2)
/* 80148980 00145A60  48 00 60 BD */	bl "load_param<f,f>__10auto_tweakFRffffP16xModelAssetParamUiPCc"
.L_80148984:
/* 80148984 00145A64  57 A0 06 3F */	clrlwi. r0, r29, 24
/* 80148988 00145A68  41 82 00 34 */	beq .L_801489BC
/* 8014898C 00145A6C  C0 02 A6 98 */	lfs f0, "@2409"@sda21(r2)
/* 80148990 00145A70  3C 60 80 27 */	lis r3, "@stringBase0"@ha
/* 80148994 00145A74  38 C3 D8 B0 */	addi r6, r3, "@stringBase0"@l
/* 80148998 00145A78  7F C4 F3 78 */	mr r4, r30
/* 8014899C 00145A7C  D0 1C 00 9C */	stfs f0, 0x9c(r28)
/* 801489A0 00145A80  7F E5 FB 78 */	mr r5, r31
/* 801489A4 00145A84  38 7C 00 9C */	addi r3, r28, 0x9c
/* 801489A8 00145A88  38 C6 03 05 */	addi r6, r6, 0x305
/* 801489AC 00145A8C  C0 22 A6 30 */	lfs f1, "@1868"@sda21(r2)
/* 801489B0 00145A90  C0 42 A6 34 */	lfs f2, "@1869"@sda21(r2)
/* 801489B4 00145A94  C0 62 A6 E0 */	lfs f3, "@2427"@sda21(r2)
/* 801489B8 00145A98  48 00 60 85 */	bl "load_param<f,f>__10auto_tweakFRffffP16xModelAssetParamUiPCc"
.L_801489BC:
/* 801489BC 00145A9C  57 A0 06 3F */	clrlwi. r0, r29, 24
/* 801489C0 00145AA0  41 82 00 34 */	beq .L_801489F4
/* 801489C4 00145AA4  C0 02 A6 E4 */	lfs f0, "@2428"@sda21(r2)
/* 801489C8 00145AA8  3C 60 80 27 */	lis r3, "@stringBase0"@ha
/* 801489CC 00145AAC  38 C3 D8 B0 */	addi r6, r3, "@stringBase0"@l
/* 801489D0 00145AB0  7F C4 F3 78 */	mr r4, r30
/* 801489D4 00145AB4  D0 1C 00 A0 */	stfs f0, 0xa0(r28)
/* 801489D8 00145AB8  7F E5 FB 78 */	mr r5, r31
/* 801489DC 00145ABC  38 7C 00 A0 */	addi r3, r28, 0xa0
/* 801489E0 00145AC0  38 C6 03 17 */	addi r6, r6, 0x317
/* 801489E4 00145AC4  C0 22 A6 30 */	lfs f1, "@1868"@sda21(r2)
/* 801489E8 00145AC8  C0 42 A6 34 */	lfs f2, "@1869"@sda21(r2)
/* 801489EC 00145ACC  C0 62 A6 A4 */	lfs f3, "@2412"@sda21(r2)
/* 801489F0 00145AD0  48 00 60 4D */	bl "load_param<f,f>__10auto_tweakFRffffP16xModelAssetParamUiPCc"
.L_801489F4:
/* 801489F4 00145AD4  57 A0 06 3F */	clrlwi. r0, r29, 24
/* 801489F8 00145AD8  41 82 00 34 */	beq .L_80148A2C
/* 801489FC 00145ADC  C0 02 A6 30 */	lfs f0, "@1868"@sda21(r2)
/* 80148A00 00145AE0  3C 60 80 27 */	lis r3, "@stringBase0"@ha
/* 80148A04 00145AE4  38 C3 D8 B0 */	addi r6, r3, "@stringBase0"@l
/* 80148A08 00145AE8  7F C4 F3 78 */	mr r4, r30
/* 80148A0C 00145AEC  D0 1C 00 A4 */	stfs f0, 0xa4(r28)
/* 80148A10 00145AF0  7F E5 FB 78 */	mr r5, r31
/* 80148A14 00145AF4  38 7C 00 A4 */	addi r3, r28, 0xa4
/* 80148A18 00145AF8  38 C6 03 27 */	addi r6, r6, 0x327
/* 80148A1C 00145AFC  C0 22 A6 30 */	lfs f1, "@1868"@sda21(r2)
/* 80148A20 00145B00  C0 42 A6 E8 */	lfs f2, "@2429"@sda21(r2)
/* 80148A24 00145B04  C0 62 A6 90 */	lfs f3, "@2407"@sda21(r2)
/* 80148A28 00145B08  48 00 60 15 */	bl "load_param<f,f>__10auto_tweakFRffffP16xModelAssetParamUiPCc"
.L_80148A2C:
/* 80148A2C 00145B0C  57 A0 06 3F */	clrlwi. r0, r29, 24
/* 80148A30 00145B10  41 82 00 34 */	beq .L_80148A64
/* 80148A34 00145B14  C0 02 A6 EC */	lfs f0, "@2430"@sda21(r2)
/* 80148A38 00145B18  3C 60 80 27 */	lis r3, "@stringBase0"@ha
/* 80148A3C 00145B1C  38 C3 D8 B0 */	addi r6, r3, "@stringBase0"@l
/* 80148A40 00145B20  7F C4 F3 78 */	mr r4, r30
/* 80148A44 00145B24  D0 1C 00 A8 */	stfs f0, 0xa8(r28)
/* 80148A48 00145B28  7F E5 FB 78 */	mr r5, r31
/* 80148A4C 00145B2C  38 7C 00 A8 */	addi r3, r28, 0xa8
/* 80148A50 00145B30  38 C6 03 40 */	addi r6, r6, 0x340
/* 80148A54 00145B34  C0 22 A6 30 */	lfs f1, "@1868"@sda21(r2)
/* 80148A58 00145B38  C0 42 A6 F0 */	lfs f2, "@2431"@sda21(r2)
/* 80148A5C 00145B3C  C0 62 A6 90 */	lfs f3, "@2407"@sda21(r2)
/* 80148A60 00145B40  48 00 5F DD */	bl "load_param<f,f>__10auto_tweakFRffffP16xModelAssetParamUiPCc"
.L_80148A64:
/* 80148A64 00145B44  57 A0 06 3F */	clrlwi. r0, r29, 24
/* 80148A68 00145B48  41 82 00 34 */	beq .L_80148A9C
/* 80148A6C 00145B4C  C0 02 A6 F4 */	lfs f0, "@2432"@sda21(r2)
/* 80148A70 00145B50  3C 60 80 27 */	lis r3, "@stringBase0"@ha
/* 80148A74 00145B54  38 C3 D8 B0 */	addi r6, r3, "@stringBase0"@l
/* 80148A78 00145B58  7F C4 F3 78 */	mr r4, r30
/* 80148A7C 00145B5C  D0 1C 00 AC */	stfs f0, 0xac(r28)
/* 80148A80 00145B60  7F E5 FB 78 */	mr r5, r31
/* 80148A84 00145B64  38 7C 00 AC */	addi r3, r28, 0xac
/* 80148A88 00145B68  38 C6 03 5A */	addi r6, r6, 0x35a
/* 80148A8C 00145B6C  C0 22 A6 30 */	lfs f1, "@1868"@sda21(r2)
/* 80148A90 00145B70  C0 42 A6 34 */	lfs f2, "@1869"@sda21(r2)
/* 80148A94 00145B74  C0 62 A6 F8 */	lfs f3, "@2433"@sda21(r2)
/* 80148A98 00145B78  48 00 5F A5 */	bl "load_param<f,f>__10auto_tweakFRffffP16xModelAssetParamUiPCc"
.L_80148A9C:
/* 80148A9C 00145B7C  57 A0 06 3F */	clrlwi. r0, r29, 24
/* 80148AA0 00145B80  41 82 00 34 */	beq .L_80148AD4
/* 80148AA4 00145B84  C0 02 A6 30 */	lfs f0, "@1868"@sda21(r2)
/* 80148AA8 00145B88  3C 60 80 27 */	lis r3, "@stringBase0"@ha
/* 80148AAC 00145B8C  38 C3 D8 B0 */	addi r6, r3, "@stringBase0"@l
/* 80148AB0 00145B90  7F C4 F3 78 */	mr r4, r30
/* 80148AB4 00145B94  D0 1C 00 B0 */	stfs f0, 0xb0(r28)
/* 80148AB8 00145B98  7F E5 FB 78 */	mr r5, r31
/* 80148ABC 00145B9C  38 7C 00 B0 */	addi r3, r28, 0xb0
/* 80148AC0 00145BA0  38 C6 03 6E */	addi r6, r6, 0x36e
/* 80148AC4 00145BA4  C0 22 A6 30 */	lfs f1, "@1868"@sda21(r2)
/* 80148AC8 00145BA8  C0 42 A6 C8 */	lfs f2, "@2421"@sda21(r2)
/* 80148ACC 00145BAC  C0 62 A6 B0 */	lfs f3, "@2415"@sda21(r2)
/* 80148AD0 00145BB0  48 00 5F 6D */	bl "load_param<f,f>__10auto_tweakFRffffP16xModelAssetParamUiPCc"
.L_80148AD4:
/* 80148AD4 00145BB4  57 A0 06 3F */	clrlwi. r0, r29, 24
/* 80148AD8 00145BB8  41 82 00 34 */	beq .L_80148B0C
/* 80148ADC 00145BBC  C0 02 A6 30 */	lfs f0, "@1868"@sda21(r2)
/* 80148AE0 00145BC0  3C 60 80 27 */	lis r3, "@stringBase0"@ha
/* 80148AE4 00145BC4  38 C3 D8 B0 */	addi r6, r3, "@stringBase0"@l
/* 80148AE8 00145BC8  7F C4 F3 78 */	mr r4, r30
/* 80148AEC 00145BCC  D0 1C 00 B4 */	stfs f0, 0xb4(r28)
/* 80148AF0 00145BD0  7F E5 FB 78 */	mr r5, r31
/* 80148AF4 00145BD4  38 7C 00 B4 */	addi r3, r28, 0xb4
/* 80148AF8 00145BD8  38 C6 03 86 */	addi r6, r6, 0x386
/* 80148AFC 00145BDC  C0 22 A6 30 */	lfs f1, "@1868"@sda21(r2)
/* 80148B00 00145BE0  C0 42 A6 34 */	lfs f2, "@1869"@sda21(r2)
/* 80148B04 00145BE4  C0 62 A6 90 */	lfs f3, "@2407"@sda21(r2)
/* 80148B08 00145BE8  48 00 5F 35 */	bl "load_param<f,f>__10auto_tweakFRffffP16xModelAssetParamUiPCc"
.L_80148B0C:
/* 80148B0C 00145BEC  57 A0 06 3F */	clrlwi. r0, r29, 24
/* 80148B10 00145BF0  41 82 00 34 */	beq .L_80148B44
/* 80148B14 00145BF4  C0 02 A6 90 */	lfs f0, "@2407"@sda21(r2)
/* 80148B18 00145BF8  3C 60 80 27 */	lis r3, "@stringBase0"@ha
/* 80148B1C 00145BFC  38 C3 D8 B0 */	addi r6, r3, "@stringBase0"@l
/* 80148B20 00145C00  7F C4 F3 78 */	mr r4, r30
/* 80148B24 00145C04  D0 1C 00 B8 */	stfs f0, 0xb8(r28)
/* 80148B28 00145C08  7F E5 FB 78 */	mr r5, r31
/* 80148B2C 00145C0C  38 7C 00 B8 */	addi r3, r28, 0xb8
/* 80148B30 00145C10  38 C6 03 9D */	addi r6, r6, 0x39d
/* 80148B34 00145C14  C0 22 A6 30 */	lfs f1, "@1868"@sda21(r2)
/* 80148B38 00145C18  C0 42 A6 34 */	lfs f2, "@1869"@sda21(r2)
/* 80148B3C 00145C1C  C0 62 A6 A4 */	lfs f3, "@2412"@sda21(r2)
/* 80148B40 00145C20  48 00 5E FD */	bl "load_param<f,f>__10auto_tweakFRffffP16xModelAssetParamUiPCc"
.L_80148B44:
/* 80148B44 00145C24  57 A0 06 3F */	clrlwi. r0, r29, 24
/* 80148B48 00145C28  41 82 00 34 */	beq .L_80148B7C
/* 80148B4C 00145C2C  C0 02 A6 C0 */	lfs f0, "@2419"@sda21(r2)
/* 80148B50 00145C30  3C 60 80 27 */	lis r3, "@stringBase0"@ha
/* 80148B54 00145C34  38 C3 D8 B0 */	addi r6, r3, "@stringBase0"@l
/* 80148B58 00145C38  7F C4 F3 78 */	mr r4, r30
/* 80148B5C 00145C3C  D0 1C 00 BC */	stfs f0, 0xbc(r28)
/* 80148B60 00145C40  7F E5 FB 78 */	mr r5, r31
/* 80148B64 00145C44  38 7C 00 BC */	addi r3, r28, 0xbc
/* 80148B68 00145C48  38 C6 03 B2 */	addi r6, r6, 0x3b2
/* 80148B6C 00145C4C  C0 22 A6 30 */	lfs f1, "@1868"@sda21(r2)
/* 80148B70 00145C50  C0 42 A6 F0 */	lfs f2, "@2431"@sda21(r2)
/* 80148B74 00145C54  C0 62 A6 90 */	lfs f3, "@2407"@sda21(r2)
/* 80148B78 00145C58  48 00 5E C5 */	bl "load_param<f,f>__10auto_tweakFRffffP16xModelAssetParamUiPCc"
.L_80148B7C:
/* 80148B7C 00145C5C  57 A0 06 3F */	clrlwi. r0, r29, 24
/* 80148B80 00145C60  41 82 00 34 */	beq .L_80148BB4
/* 80148B84 00145C64  C0 02 A6 30 */	lfs f0, "@1868"@sda21(r2)
/* 80148B88 00145C68  3C 60 80 27 */	lis r3, "@stringBase0"@ha
/* 80148B8C 00145C6C  38 C3 D8 B0 */	addi r6, r3, "@stringBase0"@l
/* 80148B90 00145C70  7F C4 F3 78 */	mr r4, r30
/* 80148B94 00145C74  D0 1C 00 C0 */	stfs f0, 0xc0(r28)
/* 80148B98 00145C78  7F E5 FB 78 */	mr r5, r31
/* 80148B9C 00145C7C  38 7C 00 C0 */	addi r3, r28, 0xc0
/* 80148BA0 00145C80  38 C6 03 D2 */	addi r6, r6, 0x3d2
/* 80148BA4 00145C84  C0 22 A6 30 */	lfs f1, "@1868"@sda21(r2)
/* 80148BA8 00145C88  C0 42 A6 F0 */	lfs f2, "@2431"@sda21(r2)
/* 80148BAC 00145C8C  C0 62 A6 90 */	lfs f3, "@2407"@sda21(r2)
/* 80148BB0 00145C90  48 00 5E 8D */	bl "load_param<f,f>__10auto_tweakFRffffP16xModelAssetParamUiPCc"
.L_80148BB4:
/* 80148BB4 00145C94  57 A0 06 3F */	clrlwi. r0, r29, 24
/* 80148BB8 00145C98  41 82 00 34 */	beq .L_80148BEC
/* 80148BBC 00145C9C  38 00 00 00 */	li r0, 0x0
/* 80148BC0 00145CA0  3C 60 80 27 */	lis r3, "@stringBase0"@ha
/* 80148BC4 00145CA4  38 83 D8 B0 */	addi r4, r3, "@stringBase0"@l
/* 80148BC8 00145CA8  98 1C 00 C4 */	stb r0, 0xc4(r28)
/* 80148BCC 00145CAC  7F C7 F3 78 */	mr r7, r30
/* 80148BD0 00145CB0  7F E8 FB 78 */	mr r8, r31
/* 80148BD4 00145CB4  38 7C 00 C4 */	addi r3, r28, 0xc4
/* 80148BD8 00145CB8  39 24 03 F2 */	addi r9, r4, 0x3f2
/* 80148BDC 00145CBC  38 80 00 00 */	li r4, 0x0
/* 80148BE0 00145CC0  38 A0 00 00 */	li r5, 0x0
/* 80148BE4 00145CC4  38 C0 00 00 */	li r6, 0x0
/* 80148BE8 00145CC8  48 00 5E 09 */	bl "load_param<b,i>__10auto_tweakFRbiiiP16xModelAssetParamUiPCc"
.L_80148BEC:
/* 80148BEC 00145CCC  57 A0 06 3F */	clrlwi. r0, r29, 24
/* 80148BF0 00145CD0  41 82 00 34 */	beq .L_80148C24
/* 80148BF4 00145CD4  C0 02 A6 FC */	lfs f0, "@2434"@sda21(r2)
/* 80148BF8 00145CD8  3C 60 80 27 */	lis r3, "@stringBase0"@ha
/* 80148BFC 00145CDC  38 C3 D8 B0 */	addi r6, r3, "@stringBase0"@l
/* 80148C00 00145CE0  7F C4 F3 78 */	mr r4, r30
/* 80148C04 00145CE4  D0 1C 00 C8 */	stfs f0, 0xc8(r28)
/* 80148C08 00145CE8  7F E5 FB 78 */	mr r5, r31
/* 80148C0C 00145CEC  38 7C 00 C8 */	addi r3, r28, 0xc8
/* 80148C10 00145CF0  38 C6 04 09 */	addi r6, r6, 0x409
/* 80148C14 00145CF4  C0 22 A6 30 */	lfs f1, "@1868"@sda21(r2)
/* 80148C18 00145CF8  C0 42 A6 34 */	lfs f2, "@1869"@sda21(r2)
/* 80148C1C 00145CFC  C0 62 A6 B0 */	lfs f3, "@2415"@sda21(r2)
/* 80148C20 00145D00  48 00 5E 1D */	bl "load_param<f,f>__10auto_tweakFRffffP16xModelAssetParamUiPCc"
.L_80148C24:
/* 80148C24 00145D04  57 A0 06 3F */	clrlwi. r0, r29, 24
/* 80148C28 00145D08  41 82 00 50 */	beq .L_80148C78
/* 80148C2C 00145D0C  38 60 00 FF */	li r3, 0xff
/* 80148C30 00145D10  38 80 00 FF */	li r4, 0xff
/* 80148C34 00145D14  38 A0 00 00 */	li r5, 0x0
/* 80148C38 00145D18  38 C0 00 FF */	li r6, 0xff
/* 80148C3C 00145D1C  4B EE 63 AD */	bl xColorFromRGBA__FUcUcUcUc
/* 80148C40 00145D20  90 61 00 24 */	stw r3, 0x24(r1)
/* 80148C44 00145D24  38 7C 00 CC */	addi r3, r28, 0xcc
/* 80148C48 00145D28  38 81 00 24 */	addi r4, r1, 0x24
/* 80148C4C 00145D2C  4B EC F3 4D */	bl __as__10iColor_tagFRC10iColor_tag
/* 80148C50 00145D30  3C 60 80 27 */	lis r3, "@stringBase0"@ha
/* 80148C54 00145D34  7F C7 F3 78 */	mr r7, r30
/* 80148C58 00145D38  38 A3 D8 B0 */	addi r5, r3, "@stringBase0"@l
/* 80148C5C 00145D3C  7F E8 FB 78 */	mr r8, r31
/* 80148C60 00145D40  38 7C 00 CC */	addi r3, r28, 0xcc
/* 80148C64 00145D44  38 80 00 00 */	li r4, 0x0
/* 80148C68 00145D48  39 25 04 25 */	addi r9, r5, 0x425
/* 80148C6C 00145D4C  38 A0 00 00 */	li r5, 0x0
/* 80148C70 00145D50  38 C0 00 00 */	li r6, 0x0
/* 80148C74 00145D54  48 00 5C 59 */	bl "load_param<10iColor_tag,i>__10auto_tweakFR10iColor_tagiiiP16xModelAssetParamUiPCc"
.L_80148C78:
/* 80148C78 00145D58  57 A0 06 3F */	clrlwi. r0, r29, 24
/* 80148C7C 00145D5C  41 82 00 34 */	beq .L_80148CB0
/* 80148C80 00145D60  C0 02 A6 30 */	lfs f0, "@1868"@sda21(r2)
/* 80148C84 00145D64  3C 60 80 27 */	lis r3, "@stringBase0"@ha
/* 80148C88 00145D68  38 C3 D8 B0 */	addi r6, r3, "@stringBase0"@l
/* 80148C8C 00145D6C  7F C4 F3 78 */	mr r4, r30
/* 80148C90 00145D70  D0 1C 00 D0 */	stfs f0, 0xd0(r28)
/* 80148C94 00145D74  7F E5 FB 78 */	mr r5, r31
/* 80148C98 00145D78  38 7C 00 D0 */	addi r3, r28, 0xd0
/* 80148C9C 00145D7C  38 C6 04 3D */	addi r6, r6, 0x43d
/* 80148CA0 00145D80  C0 22 A6 30 */	lfs f1, "@1868"@sda21(r2)
/* 80148CA4 00145D84  C0 42 A6 34 */	lfs f2, "@1869"@sda21(r2)
/* 80148CA8 00145D88  C0 62 A6 B0 */	lfs f3, "@2415"@sda21(r2)
/* 80148CAC 00145D8C  48 00 5D 91 */	bl "load_param<f,f>__10auto_tweakFRffffP16xModelAssetParamUiPCc"
.L_80148CB0:
/* 80148CB0 00145D90  57 A0 06 3F */	clrlwi. r0, r29, 24
/* 80148CB4 00145D94  41 82 00 34 */	beq .L_80148CE8
/* 80148CB8 00145D98  C0 02 A7 00 */	lfs f0, "@2435"@sda21(r2)
/* 80148CBC 00145D9C  3C 60 80 27 */	lis r3, "@stringBase0"@ha
/* 80148CC0 00145DA0  38 C3 D8 B0 */	addi r6, r3, "@stringBase0"@l
/* 80148CC4 00145DA4  7F C4 F3 78 */	mr r4, r30
/* 80148CC8 00145DA8  D0 1C 00 D4 */	stfs f0, 0xd4(r28)
/* 80148CCC 00145DAC  7F E5 FB 78 */	mr r5, r31
/* 80148CD0 00145DB0  38 7C 00 D4 */	addi r3, r28, 0xd4
/* 80148CD4 00145DB4  38 C6 04 5A */	addi r6, r6, 0x45a
/* 80148CD8 00145DB8  C0 22 A6 30 */	lfs f1, "@1868"@sda21(r2)
/* 80148CDC 00145DBC  C0 42 A6 34 */	lfs f2, "@1869"@sda21(r2)
/* 80148CE0 00145DC0  C0 62 A6 5C */	lfs f3, "@2084"@sda21(r2)
/* 80148CE4 00145DC4  48 00 5D 59 */	bl "load_param<f,f>__10auto_tweakFRffffP16xModelAssetParamUiPCc"
.L_80148CE8:
/* 80148CE8 00145DC8  57 A0 06 3F */	clrlwi. r0, r29, 24
/* 80148CEC 00145DCC  41 82 00 34 */	beq .L_80148D20
/* 80148CF0 00145DD0  C0 02 A6 34 */	lfs f0, "@1869"@sda21(r2)
/* 80148CF4 00145DD4  3C 60 80 27 */	lis r3, "@stringBase0"@ha
/* 80148CF8 00145DD8  38 C3 D8 B0 */	addi r6, r3, "@stringBase0"@l
/* 80148CFC 00145DDC  7F C4 F3 78 */	mr r4, r30
/* 80148D00 00145DE0  D0 1C 00 D8 */	stfs f0, 0xd8(r28)
/* 80148D04 00145DE4  7F E5 FB 78 */	mr r5, r31
/* 80148D08 00145DE8  38 7C 00 D8 */	addi r3, r28, 0xd8
/* 80148D0C 00145DEC  38 C6 04 74 */	addi r6, r6, 0x474
/* 80148D10 00145DF0  C0 22 A6 30 */	lfs f1, "@1868"@sda21(r2)
/* 80148D14 00145DF4  C0 42 A6 F0 */	lfs f2, "@2431"@sda21(r2)
/* 80148D18 00145DF8  C0 62 A6 90 */	lfs f3, "@2407"@sda21(r2)
/* 80148D1C 00145DFC  48 00 5D 21 */	bl "load_param<f,f>__10auto_tweakFRffffP16xModelAssetParamUiPCc"
.L_80148D20:
/* 80148D20 00145E00  57 A0 06 3F */	clrlwi. r0, r29, 24
/* 80148D24 00145E04  41 82 00 34 */	beq .L_80148D58
/* 80148D28 00145E08  C0 02 A6 34 */	lfs f0, "@1869"@sda21(r2)
/* 80148D2C 00145E0C  3C 60 80 27 */	lis r3, "@stringBase0"@ha
/* 80148D30 00145E10  38 C3 D8 B0 */	addi r6, r3, "@stringBase0"@l
/* 80148D34 00145E14  7F C4 F3 78 */	mr r4, r30
/* 80148D38 00145E18  D0 1C 00 DC */	stfs f0, 0xdc(r28)
/* 80148D3C 00145E1C  7F E5 FB 78 */	mr r5, r31
/* 80148D40 00145E20  38 7C 00 DC */	addi r3, r28, 0xdc
/* 80148D44 00145E24  38 C6 04 94 */	addi r6, r6, 0x494
/* 80148D48 00145E28  C0 22 A6 30 */	lfs f1, "@1868"@sda21(r2)
/* 80148D4C 00145E2C  C0 42 A6 F0 */	lfs f2, "@2431"@sda21(r2)
/* 80148D50 00145E30  C0 62 A6 90 */	lfs f3, "@2407"@sda21(r2)
/* 80148D54 00145E34  48 00 5C E9 */	bl "load_param<f,f>__10auto_tweakFRffffP16xModelAssetParamUiPCc"
.L_80148D58:
/* 80148D58 00145E38  57 A0 06 3F */	clrlwi. r0, r29, 24
/* 80148D5C 00145E3C  41 82 00 34 */	beq .L_80148D90
/* 80148D60 00145E40  38 00 00 00 */	li r0, 0x0
/* 80148D64 00145E44  3C 60 80 27 */	lis r3, "@stringBase0"@ha
/* 80148D68 00145E48  38 83 D8 B0 */	addi r4, r3, "@stringBase0"@l
/* 80148D6C 00145E4C  98 1C 00 E0 */	stb r0, 0xe0(r28)
/* 80148D70 00145E50  7F C7 F3 78 */	mr r7, r30
/* 80148D74 00145E54  7F E8 FB 78 */	mr r8, r31
/* 80148D78 00145E58  38 7C 00 E0 */	addi r3, r28, 0xe0
/* 80148D7C 00145E5C  39 24 04 B4 */	addi r9, r4, 0x4b4
/* 80148D80 00145E60  38 80 00 00 */	li r4, 0x0
/* 80148D84 00145E64  38 A0 00 00 */	li r5, 0x0
/* 80148D88 00145E68  38 C0 00 00 */	li r6, 0x0
/* 80148D8C 00145E6C  48 00 5C 65 */	bl "load_param<b,i>__10auto_tweakFRbiiiP16xModelAssetParamUiPCc"
.L_80148D90:
/* 80148D90 00145E70  57 A0 06 3F */	clrlwi. r0, r29, 24
/* 80148D94 00145E74  41 82 00 34 */	beq .L_80148DC8
/* 80148D98 00145E78  C0 02 A7 04 */	lfs f0, "@2436"@sda21(r2)
/* 80148D9C 00145E7C  3C 60 80 27 */	lis r3, "@stringBase0"@ha
/* 80148DA0 00145E80  38 C3 D8 B0 */	addi r6, r3, "@stringBase0"@l
/* 80148DA4 00145E84  7F C4 F3 78 */	mr r4, r30
/* 80148DA8 00145E88  D0 1C 00 E4 */	stfs f0, 0xe4(r28)
/* 80148DAC 00145E8C  7F E5 FB 78 */	mr r5, r31
/* 80148DB0 00145E90  38 7C 00 E4 */	addi r3, r28, 0xe4
/* 80148DB4 00145E94  38 C6 04 CB */	addi r6, r6, 0x4cb
/* 80148DB8 00145E98  C0 22 A6 30 */	lfs f1, "@1868"@sda21(r2)
/* 80148DBC 00145E9C  C0 42 A6 34 */	lfs f2, "@1869"@sda21(r2)
/* 80148DC0 00145EA0  C0 62 A6 B0 */	lfs f3, "@2415"@sda21(r2)
/* 80148DC4 00145EA4  48 00 5C 79 */	bl "load_param<f,f>__10auto_tweakFRffffP16xModelAssetParamUiPCc"
.L_80148DC8:
/* 80148DC8 00145EA8  57 A0 06 3F */	clrlwi. r0, r29, 24
/* 80148DCC 00145EAC  41 82 00 50 */	beq .L_80148E1C
/* 80148DD0 00145EB0  38 60 00 FF */	li r3, 0xff
/* 80148DD4 00145EB4  38 80 00 FF */	li r4, 0xff
/* 80148DD8 00145EB8  38 A0 00 FF */	li r5, 0xff
/* 80148DDC 00145EBC  38 C0 00 FF */	li r6, 0xff
/* 80148DE0 00145EC0  4B EE 62 09 */	bl xColorFromRGBA__FUcUcUcUc
/* 80148DE4 00145EC4  90 61 00 20 */	stw r3, 0x20(r1)
/* 80148DE8 00145EC8  38 7C 00 E8 */	addi r3, r28, 0xe8
/* 80148DEC 00145ECC  38 81 00 20 */	addi r4, r1, 0x20
/* 80148DF0 00145ED0  4B EC F1 A9 */	bl __as__10iColor_tagFRC10iColor_tag
/* 80148DF4 00145ED4  3C 60 80 27 */	lis r3, "@stringBase0"@ha
/* 80148DF8 00145ED8  7F C7 F3 78 */	mr r7, r30
/* 80148DFC 00145EDC  38 A3 D8 B0 */	addi r5, r3, "@stringBase0"@l
/* 80148E00 00145EE0  7F E8 FB 78 */	mr r8, r31
/* 80148E04 00145EE4  38 7C 00 E8 */	addi r3, r28, 0xe8
/* 80148E08 00145EE8  38 80 00 00 */	li r4, 0x0
/* 80148E0C 00145EEC  39 25 04 E7 */	addi r9, r5, 0x4e7
/* 80148E10 00145EF0  38 A0 00 00 */	li r5, 0x0
/* 80148E14 00145EF4  38 C0 00 00 */	li r6, 0x0
/* 80148E18 00145EF8  48 00 5A B5 */	bl "load_param<10iColor_tag,i>__10auto_tweakFR10iColor_tagiiiP16xModelAssetParamUiPCc"
.L_80148E1C:
/* 80148E1C 00145EFC  57 A0 06 3F */	clrlwi. r0, r29, 24
/* 80148E20 00145F00  41 82 00 34 */	beq .L_80148E54
/* 80148E24 00145F04  C0 02 A6 50 */	lfs f0, "@1987"@sda21(r2)
/* 80148E28 00145F08  3C 60 80 27 */	lis r3, "@stringBase0"@ha
/* 80148E2C 00145F0C  38 C3 D8 B0 */	addi r6, r3, "@stringBase0"@l
/* 80148E30 00145F10  7F C4 F3 78 */	mr r4, r30
/* 80148E34 00145F14  D0 1C 00 EC */	stfs f0, 0xec(r28)
/* 80148E38 00145F18  7F E5 FB 78 */	mr r5, r31
/* 80148E3C 00145F1C  38 7C 00 EC */	addi r3, r28, 0xec
/* 80148E40 00145F20  38 C6 04 FF */	addi r6, r6, 0x4ff
/* 80148E44 00145F24  C0 22 A6 30 */	lfs f1, "@1868"@sda21(r2)
/* 80148E48 00145F28  C0 42 A6 34 */	lfs f2, "@1869"@sda21(r2)
/* 80148E4C 00145F2C  C0 62 A6 B0 */	lfs f3, "@2415"@sda21(r2)
/* 80148E50 00145F30  48 00 5B ED */	bl "load_param<f,f>__10auto_tweakFRffffP16xModelAssetParamUiPCc"
.L_80148E54:
/* 80148E54 00145F34  57 A0 06 3F */	clrlwi. r0, r29, 24
/* 80148E58 00145F38  41 82 00 34 */	beq .L_80148E8C
/* 80148E5C 00145F3C  C0 02 A6 60 */	lfs f0, "@2085"@sda21(r2)
/* 80148E60 00145F40  3C 60 80 27 */	lis r3, "@stringBase0"@ha
/* 80148E64 00145F44  38 C3 D8 B0 */	addi r6, r3, "@stringBase0"@l
/* 80148E68 00145F48  7F C4 F3 78 */	mr r4, r30
/* 80148E6C 00145F4C  D0 1C 00 F0 */	stfs f0, 0xf0(r28)
/* 80148E70 00145F50  7F E5 FB 78 */	mr r5, r31
/* 80148E74 00145F54  38 7C 00 F0 */	addi r3, r28, 0xf0
/* 80148E78 00145F58  38 C6 05 1C */	addi r6, r6, 0x51c
/* 80148E7C 00145F5C  C0 22 A6 30 */	lfs f1, "@1868"@sda21(r2)
/* 80148E80 00145F60  C0 42 A6 34 */	lfs f2, "@1869"@sda21(r2)
/* 80148E84 00145F64  C0 62 A6 5C */	lfs f3, "@2084"@sda21(r2)
/* 80148E88 00145F68  48 00 5B B5 */	bl "load_param<f,f>__10auto_tweakFRffffP16xModelAssetParamUiPCc"
.L_80148E8C:
/* 80148E8C 00145F6C  57 A0 06 3F */	clrlwi. r0, r29, 24
/* 80148E90 00145F70  41 82 00 34 */	beq .L_80148EC4
/* 80148E94 00145F74  C0 02 A7 08 */	lfs f0, "@2437"@sda21(r2)
/* 80148E98 00145F78  3C 60 80 27 */	lis r3, "@stringBase0"@ha
/* 80148E9C 00145F7C  38 C3 D8 B0 */	addi r6, r3, "@stringBase0"@l
/* 80148EA0 00145F80  7F C4 F3 78 */	mr r4, r30
/* 80148EA4 00145F84  D0 1C 00 F4 */	stfs f0, 0xf4(r28)
/* 80148EA8 00145F88  7F E5 FB 78 */	mr r5, r31
/* 80148EAC 00145F8C  38 7C 00 F4 */	addi r3, r28, 0xf4
/* 80148EB0 00145F90  38 C6 05 36 */	addi r6, r6, 0x536
/* 80148EB4 00145F94  C0 22 A6 30 */	lfs f1, "@1868"@sda21(r2)
/* 80148EB8 00145F98  C0 42 A6 F0 */	lfs f2, "@2431"@sda21(r2)
/* 80148EBC 00145F9C  C0 62 A6 90 */	lfs f3, "@2407"@sda21(r2)
/* 80148EC0 00145FA0  48 00 5B 7D */	bl "load_param<f,f>__10auto_tweakFRffffP16xModelAssetParamUiPCc"
.L_80148EC4:
/* 80148EC4 00145FA4  57 A0 06 3F */	clrlwi. r0, r29, 24
/* 80148EC8 00145FA8  41 82 00 34 */	beq .L_80148EFC
/* 80148ECC 00145FAC  C0 02 A6 34 */	lfs f0, "@1869"@sda21(r2)
/* 80148ED0 00145FB0  3C 60 80 27 */	lis r3, "@stringBase0"@ha
/* 80148ED4 00145FB4  38 C3 D8 B0 */	addi r6, r3, "@stringBase0"@l
/* 80148ED8 00145FB8  7F C4 F3 78 */	mr r4, r30
/* 80148EDC 00145FBC  D0 1C 00 F8 */	stfs f0, 0xf8(r28)
/* 80148EE0 00145FC0  7F E5 FB 78 */	mr r5, r31
/* 80148EE4 00145FC4  38 7C 00 F8 */	addi r3, r28, 0xf8
/* 80148EE8 00145FC8  38 C6 05 56 */	addi r6, r6, 0x556
/* 80148EEC 00145FCC  C0 22 A6 30 */	lfs f1, "@1868"@sda21(r2)
/* 80148EF0 00145FD0  C0 42 A6 F0 */	lfs f2, "@2431"@sda21(r2)
/* 80148EF4 00145FD4  C0 62 A6 90 */	lfs f3, "@2407"@sda21(r2)
/* 80148EF8 00145FD8  48 00 5B 45 */	bl "load_param<f,f>__10auto_tweakFRffffP16xModelAssetParamUiPCc"
.L_80148EFC:
/* 80148EFC 00145FDC  57 A0 06 3F */	clrlwi. r0, r29, 24
/* 80148F00 00145FE0  41 82 00 34 */	beq .L_80148F34
/* 80148F04 00145FE4  38 00 00 00 */	li r0, 0x0
/* 80148F08 00145FE8  3C 60 80 27 */	lis r3, "@stringBase0"@ha
/* 80148F0C 00145FEC  38 83 D8 B0 */	addi r4, r3, "@stringBase0"@l
/* 80148F10 00145FF0  98 1C 00 FC */	stb r0, 0xfc(r28)
/* 80148F14 00145FF4  7F C7 F3 78 */	mr r7, r30
/* 80148F18 00145FF8  7F E8 FB 78 */	mr r8, r31
/* 80148F1C 00145FFC  38 7C 00 FC */	addi r3, r28, 0xfc
/* 80148F20 00146000  39 24 05 76 */	addi r9, r4, 0x576
/* 80148F24 00146004  38 80 00 00 */	li r4, 0x0
/* 80148F28 00146008  38 A0 00 00 */	li r5, 0x0
/* 80148F2C 0014600C  38 C0 00 00 */	li r6, 0x0
/* 80148F30 00146010  48 00 5A C1 */	bl "load_param<b,i>__10auto_tweakFRbiiiP16xModelAssetParamUiPCc"
.L_80148F34:
/* 80148F34 00146014  57 A0 06 3F */	clrlwi. r0, r29, 24
/* 80148F38 00146018  41 82 00 34 */	beq .L_80148F6C
/* 80148F3C 0014601C  C0 02 A6 30 */	lfs f0, "@1868"@sda21(r2)
/* 80148F40 00146020  3C 60 80 27 */	lis r3, "@stringBase0"@ha
/* 80148F44 00146024  38 C3 D8 B0 */	addi r6, r3, "@stringBase0"@l
/* 80148F48 00146028  7F C4 F3 78 */	mr r4, r30
/* 80148F4C 0014602C  D0 1C 01 00 */	stfs f0, 0x100(r28)
/* 80148F50 00146030  7F E5 FB 78 */	mr r5, r31
/* 80148F54 00146034  38 7C 01 00 */	addi r3, r28, 0x100
/* 80148F58 00146038  38 C6 05 8D */	addi r6, r6, 0x58d
/* 80148F5C 0014603C  C0 22 A6 30 */	lfs f1, "@1868"@sda21(r2)
/* 80148F60 00146040  C0 42 A6 34 */	lfs f2, "@1869"@sda21(r2)
/* 80148F64 00146044  C0 62 A6 B0 */	lfs f3, "@2415"@sda21(r2)
/* 80148F68 00146048  48 00 5A D5 */	bl "load_param<f,f>__10auto_tweakFRffffP16xModelAssetParamUiPCc"
.L_80148F6C:
/* 80148F6C 0014604C  57 A0 06 3F */	clrlwi. r0, r29, 24
/* 80148F70 00146050  41 82 00 50 */	beq .L_80148FC0
/* 80148F74 00146054  38 60 00 9B */	li r3, 0x9b
/* 80148F78 00146058  38 80 00 FF */	li r4, 0xff
/* 80148F7C 0014605C  38 A0 00 FF */	li r5, 0xff
/* 80148F80 00146060  38 C0 00 FF */	li r6, 0xff
/* 80148F84 00146064  4B EE 60 65 */	bl xColorFromRGBA__FUcUcUcUc
/* 80148F88 00146068  90 61 00 1C */	stw r3, 0x1c(r1)
/* 80148F8C 0014606C  38 7C 01 04 */	addi r3, r28, 0x104
/* 80148F90 00146070  38 81 00 1C */	addi r4, r1, 0x1c
/* 80148F94 00146074  4B EC F0 05 */	bl __as__10iColor_tagFRC10iColor_tag
/* 80148F98 00146078  3C 60 80 27 */	lis r3, "@stringBase0"@ha
/* 80148F9C 0014607C  7F C7 F3 78 */	mr r7, r30
/* 80148FA0 00146080  38 A3 D8 B0 */	addi r5, r3, "@stringBase0"@l
/* 80148FA4 00146084  7F E8 FB 78 */	mr r8, r31
/* 80148FA8 00146088  38 7C 01 04 */	addi r3, r28, 0x104
/* 80148FAC 0014608C  38 80 00 00 */	li r4, 0x0
/* 80148FB0 00146090  39 25 05 A9 */	addi r9, r5, 0x5a9
/* 80148FB4 00146094  38 A0 00 00 */	li r5, 0x0
/* 80148FB8 00146098  38 C0 00 00 */	li r6, 0x0
/* 80148FBC 0014609C  48 00 59 11 */	bl "load_param<10iColor_tag,i>__10auto_tweakFR10iColor_tagiiiP16xModelAssetParamUiPCc"
.L_80148FC0:
/* 80148FC0 001460A0  57 A0 06 3F */	clrlwi. r0, r29, 24
/* 80148FC4 001460A4  41 82 00 34 */	beq .L_80148FF8
/* 80148FC8 001460A8  C0 02 A6 50 */	lfs f0, "@1987"@sda21(r2)
/* 80148FCC 001460AC  3C 60 80 27 */	lis r3, "@stringBase0"@ha
/* 80148FD0 001460B0  38 C3 D8 B0 */	addi r6, r3, "@stringBase0"@l
/* 80148FD4 001460B4  7F C4 F3 78 */	mr r4, r30
/* 80148FD8 001460B8  D0 1C 01 08 */	stfs f0, 0x108(r28)
/* 80148FDC 001460BC  7F E5 FB 78 */	mr r5, r31
/* 80148FE0 001460C0  38 7C 01 08 */	addi r3, r28, 0x108
/* 80148FE4 001460C4  38 C6 05 C1 */	addi r6, r6, 0x5c1
/* 80148FE8 001460C8  C0 22 A6 30 */	lfs f1, "@1868"@sda21(r2)
/* 80148FEC 001460CC  C0 42 A6 34 */	lfs f2, "@1869"@sda21(r2)
/* 80148FF0 001460D0  C0 62 A6 B0 */	lfs f3, "@2415"@sda21(r2)
/* 80148FF4 001460D4  48 00 5A 49 */	bl "load_param<f,f>__10auto_tweakFRffffP16xModelAssetParamUiPCc"
.L_80148FF8:
/* 80148FF8 001460D8  57 A0 06 3F */	clrlwi. r0, r29, 24
/* 80148FFC 001460DC  41 82 00 34 */	beq .L_80149030
/* 80149000 001460E0  C0 02 A6 60 */	lfs f0, "@2085"@sda21(r2)
/* 80149004 001460E4  3C 60 80 27 */	lis r3, "@stringBase0"@ha
/* 80149008 001460E8  38 C3 D8 B0 */	addi r6, r3, "@stringBase0"@l
/* 8014900C 001460EC  7F C4 F3 78 */	mr r4, r30
/* 80149010 001460F0  D0 1C 01 0C */	stfs f0, 0x10c(r28)
/* 80149014 001460F4  7F E5 FB 78 */	mr r5, r31
/* 80149018 001460F8  38 7C 01 0C */	addi r3, r28, 0x10c
/* 8014901C 001460FC  38 C6 05 DE */	addi r6, r6, 0x5de
/* 80149020 00146100  C0 22 A6 30 */	lfs f1, "@1868"@sda21(r2)
/* 80149024 00146104  C0 42 A6 34 */	lfs f2, "@1869"@sda21(r2)
/* 80149028 00146108  C0 62 A6 5C */	lfs f3, "@2084"@sda21(r2)
/* 8014902C 0014610C  48 00 5A 11 */	bl "load_param<f,f>__10auto_tweakFRffffP16xModelAssetParamUiPCc"
.L_80149030:
/* 80149030 00146110  57 A0 06 3F */	clrlwi. r0, r29, 24
/* 80149034 00146114  41 82 00 34 */	beq .L_80149068
/* 80149038 00146118  C0 02 A7 0C */	lfs f0, "@2438"@sda21(r2)
/* 8014903C 0014611C  3C 60 80 27 */	lis r3, "@stringBase0"@ha
/* 80149040 00146120  38 C3 D8 B0 */	addi r6, r3, "@stringBase0"@l
/* 80149044 00146124  7F C4 F3 78 */	mr r4, r30
/* 80149048 00146128  D0 1C 01 10 */	stfs f0, 0x110(r28)
/* 8014904C 0014612C  7F E5 FB 78 */	mr r5, r31
/* 80149050 00146130  38 7C 01 10 */	addi r3, r28, 0x110
/* 80149054 00146134  38 C6 05 F8 */	addi r6, r6, 0x5f8
/* 80149058 00146138  C0 22 A6 30 */	lfs f1, "@1868"@sda21(r2)
/* 8014905C 0014613C  C0 42 A6 F0 */	lfs f2, "@2431"@sda21(r2)
/* 80149060 00146140  C0 62 A6 90 */	lfs f3, "@2407"@sda21(r2)
/* 80149064 00146144  48 00 59 D9 */	bl "load_param<f,f>__10auto_tweakFRffffP16xModelAssetParamUiPCc"
.L_80149068:
/* 80149068 00146148  57 A0 06 3F */	clrlwi. r0, r29, 24
/* 8014906C 0014614C  41 82 00 34 */	beq .L_801490A0
/* 80149070 00146150  C0 02 A6 34 */	lfs f0, "@1869"@sda21(r2)
/* 80149074 00146154  3C 60 80 27 */	lis r3, "@stringBase0"@ha
/* 80149078 00146158  38 C3 D8 B0 */	addi r6, r3, "@stringBase0"@l
/* 8014907C 0014615C  7F C4 F3 78 */	mr r4, r30
/* 80149080 00146160  D0 1C 01 14 */	stfs f0, 0x114(r28)
/* 80149084 00146164  7F E5 FB 78 */	mr r5, r31
/* 80149088 00146168  38 7C 01 14 */	addi r3, r28, 0x114
/* 8014908C 0014616C  38 C6 06 18 */	addi r6, r6, 0x618
/* 80149090 00146170  C0 22 A6 30 */	lfs f1, "@1868"@sda21(r2)
/* 80149094 00146174  C0 42 A6 F0 */	lfs f2, "@2431"@sda21(r2)
/* 80149098 00146178  C0 62 A6 90 */	lfs f3, "@2407"@sda21(r2)
/* 8014909C 0014617C  48 00 59 A1 */	bl "load_param<f,f>__10auto_tweakFRffffP16xModelAssetParamUiPCc"
.L_801490A0:
/* 801490A0 00146180  57 A0 06 3F */	clrlwi. r0, r29, 24
/* 801490A4 00146184  41 82 00 34 */	beq .L_801490D8
/* 801490A8 00146188  38 00 00 00 */	li r0, 0x0
/* 801490AC 0014618C  3C 60 80 27 */	lis r3, "@stringBase0"@ha
/* 801490B0 00146190  38 83 D8 B0 */	addi r4, r3, "@stringBase0"@l
/* 801490B4 00146194  98 1C 01 18 */	stb r0, 0x118(r28)
/* 801490B8 00146198  7F C7 F3 78 */	mr r7, r30
/* 801490BC 0014619C  7F E8 FB 78 */	mr r8, r31
/* 801490C0 001461A0  38 7C 01 18 */	addi r3, r28, 0x118
/* 801490C4 001461A4  39 24 06 38 */	addi r9, r4, 0x638
/* 801490C8 001461A8  38 80 00 00 */	li r4, 0x0
/* 801490CC 001461AC  38 A0 00 00 */	li r5, 0x0
/* 801490D0 001461B0  38 C0 00 00 */	li r6, 0x0
/* 801490D4 001461B4  48 00 59 1D */	bl "load_param<b,i>__10auto_tweakFRbiiiP16xModelAssetParamUiPCc"
.L_801490D8:
/* 801490D8 001461B8  57 A0 06 3F */	clrlwi. r0, r29, 24
/* 801490DC 001461BC  41 82 00 34 */	beq .L_80149110
/* 801490E0 001461C0  C0 02 A6 50 */	lfs f0, "@1987"@sda21(r2)
/* 801490E4 001461C4  3C 60 80 27 */	lis r3, "@stringBase0"@ha
/* 801490E8 001461C8  38 C3 D8 B0 */	addi r6, r3, "@stringBase0"@l
/* 801490EC 001461CC  7F C4 F3 78 */	mr r4, r30
/* 801490F0 001461D0  D0 1C 01 1C */	stfs f0, 0x11c(r28)
/* 801490F4 001461D4  7F E5 FB 78 */	mr r5, r31
/* 801490F8 001461D8  38 7C 01 1C */	addi r3, r28, 0x11c
/* 801490FC 001461DC  38 C6 06 4F */	addi r6, r6, 0x64f
/* 80149100 001461E0  C0 22 A6 30 */	lfs f1, "@1868"@sda21(r2)
/* 80149104 001461E4  C0 42 A6 34 */	lfs f2, "@1869"@sda21(r2)
/* 80149108 001461E8  C0 62 A6 B0 */	lfs f3, "@2415"@sda21(r2)
/* 8014910C 001461EC  48 00 59 31 */	bl "load_param<f,f>__10auto_tweakFRffffP16xModelAssetParamUiPCc"
.L_80149110:
/* 80149110 001461F0  57 A0 06 3F */	clrlwi. r0, r29, 24
/* 80149114 001461F4  41 82 00 50 */	beq .L_80149164
/* 80149118 001461F8  38 60 00 00 */	li r3, 0x0
/* 8014911C 001461FC  38 80 00 FF */	li r4, 0xff
/* 80149120 00146200  38 A0 00 FF */	li r5, 0xff
/* 80149124 00146204  38 C0 00 FF */	li r6, 0xff
/* 80149128 00146208  4B EE 5E C1 */	bl xColorFromRGBA__FUcUcUcUc
/* 8014912C 0014620C  90 61 00 18 */	stw r3, 0x18(r1)
/* 80149130 00146210  38 7C 01 20 */	addi r3, r28, 0x120
/* 80149134 00146214  38 81 00 18 */	addi r4, r1, 0x18
/* 80149138 00146218  4B EC EE 61 */	bl __as__10iColor_tagFRC10iColor_tag
/* 8014913C 0014621C  3C 60 80 27 */	lis r3, "@stringBase0"@ha
/* 80149140 00146220  7F C7 F3 78 */	mr r7, r30
/* 80149144 00146224  38 A3 D8 B0 */	addi r5, r3, "@stringBase0"@l
/* 80149148 00146228  7F E8 FB 78 */	mr r8, r31
/* 8014914C 0014622C  38 7C 01 20 */	addi r3, r28, 0x120
/* 80149150 00146230  38 80 00 00 */	li r4, 0x0
/* 80149154 00146234  39 25 06 6B */	addi r9, r5, 0x66b
/* 80149158 00146238  38 A0 00 00 */	li r5, 0x0
/* 8014915C 0014623C  38 C0 00 00 */	li r6, 0x0
/* 80149160 00146240  48 00 57 6D */	bl "load_param<10iColor_tag,i>__10auto_tweakFR10iColor_tagiiiP16xModelAssetParamUiPCc"
.L_80149164:
/* 80149164 00146244  57 A0 06 3F */	clrlwi. r0, r29, 24
/* 80149168 00146248  41 82 00 34 */	beq .L_8014919C
/* 8014916C 0014624C  C0 02 A6 50 */	lfs f0, "@1987"@sda21(r2)
/* 80149170 00146250  3C 60 80 27 */	lis r3, "@stringBase0"@ha
/* 80149174 00146254  38 C3 D8 B0 */	addi r6, r3, "@stringBase0"@l
/* 80149178 00146258  7F C4 F3 78 */	mr r4, r30
/* 8014917C 0014625C  D0 1C 01 24 */	stfs f0, 0x124(r28)
/* 80149180 00146260  7F E5 FB 78 */	mr r5, r31
/* 80149184 00146264  38 7C 01 24 */	addi r3, r28, 0x124
/* 80149188 00146268  38 C6 06 83 */	addi r6, r6, 0x683
/* 8014918C 0014626C  C0 22 A6 30 */	lfs f1, "@1868"@sda21(r2)
/* 80149190 00146270  C0 42 A6 34 */	lfs f2, "@1869"@sda21(r2)
/* 80149194 00146274  C0 62 A6 B0 */	lfs f3, "@2415"@sda21(r2)
/* 80149198 00146278  48 00 58 A5 */	bl "load_param<f,f>__10auto_tweakFRffffP16xModelAssetParamUiPCc"
.L_8014919C:
/* 8014919C 0014627C  57 A0 06 3F */	clrlwi. r0, r29, 24
/* 801491A0 00146280  41 82 00 34 */	beq .L_801491D4
/* 801491A4 00146284  C0 02 A6 60 */	lfs f0, "@2085"@sda21(r2)
/* 801491A8 00146288  3C 60 80 27 */	lis r3, "@stringBase0"@ha
/* 801491AC 0014628C  38 C3 D8 B0 */	addi r6, r3, "@stringBase0"@l
/* 801491B0 00146290  7F C4 F3 78 */	mr r4, r30
/* 801491B4 00146294  D0 1C 01 28 */	stfs f0, 0x128(r28)
/* 801491B8 00146298  7F E5 FB 78 */	mr r5, r31
/* 801491BC 0014629C  38 7C 01 28 */	addi r3, r28, 0x128
/* 801491C0 001462A0  38 C6 06 A0 */	addi r6, r6, 0x6a0
/* 801491C4 001462A4  C0 22 A6 30 */	lfs f1, "@1868"@sda21(r2)
/* 801491C8 001462A8  C0 42 A6 34 */	lfs f2, "@1869"@sda21(r2)
/* 801491CC 001462AC  C0 62 A6 5C */	lfs f3, "@2084"@sda21(r2)
/* 801491D0 001462B0  48 00 58 6D */	bl "load_param<f,f>__10auto_tweakFRffffP16xModelAssetParamUiPCc"
.L_801491D4:
/* 801491D4 001462B4  57 A0 06 3F */	clrlwi. r0, r29, 24
/* 801491D8 001462B8  41 82 00 34 */	beq .L_8014920C
/* 801491DC 001462BC  C0 02 A6 4C */	lfs f0, "@1976"@sda21(r2)
/* 801491E0 001462C0  3C 60 80 27 */	lis r3, "@stringBase0"@ha
/* 801491E4 001462C4  38 C3 D8 B0 */	addi r6, r3, "@stringBase0"@l
/* 801491E8 001462C8  7F C4 F3 78 */	mr r4, r30
/* 801491EC 001462CC  D0 1C 01 2C */	stfs f0, 0x12c(r28)
/* 801491F0 001462D0  7F E5 FB 78 */	mr r5, r31
/* 801491F4 001462D4  38 7C 01 2C */	addi r3, r28, 0x12c
/* 801491F8 001462D8  38 C6 06 BA */	addi r6, r6, 0x6ba
/* 801491FC 001462DC  C0 22 A6 30 */	lfs f1, "@1868"@sda21(r2)
/* 80149200 001462E0  C0 42 A6 34 */	lfs f2, "@1869"@sda21(r2)
/* 80149204 001462E4  C0 62 A6 B0 */	lfs f3, "@2415"@sda21(r2)
/* 80149208 001462E8  48 00 58 35 */	bl "load_param<f,f>__10auto_tweakFRffffP16xModelAssetParamUiPCc"
.L_8014920C:
/* 8014920C 001462EC  57 A0 06 3F */	clrlwi. r0, r29, 24
/* 80149210 001462F0  41 82 00 34 */	beq .L_80149244
/* 80149214 001462F4  C0 02 A6 AC */	lfs f0, "@2414"@sda21(r2)
/* 80149218 001462F8  3C 60 80 27 */	lis r3, "@stringBase0"@ha
/* 8014921C 001462FC  38 C3 D8 B0 */	addi r6, r3, "@stringBase0"@l
/* 80149220 00146300  7F C4 F3 78 */	mr r4, r30
/* 80149224 00146304  D0 1C 01 30 */	stfs f0, 0x130(r28)
/* 80149228 00146308  7F E5 FB 78 */	mr r5, r31
/* 8014922C 0014630C  38 7C 01 30 */	addi r3, r28, 0x130
/* 80149230 00146310  38 C6 06 CE */	addi r6, r6, 0x6ce
/* 80149234 00146314  C0 22 A6 30 */	lfs f1, "@1868"@sda21(r2)
/* 80149238 00146318  C0 42 A6 C8 */	lfs f2, "@2421"@sda21(r2)
/* 8014923C 0014631C  C0 62 A6 B0 */	lfs f3, "@2415"@sda21(r2)
/* 80149240 00146320  48 00 57 FD */	bl "load_param<f,f>__10auto_tweakFRffffP16xModelAssetParamUiPCc"
.L_80149244:
/* 80149244 00146324  57 A0 06 3F */	clrlwi. r0, r29, 24
/* 80149248 00146328  41 82 00 34 */	beq .L_8014927C
/* 8014924C 0014632C  C0 02 A6 B4 */	lfs f0, "@2416"@sda21(r2)
/* 80149250 00146330  3C 60 80 27 */	lis r3, "@stringBase0"@ha
/* 80149254 00146334  38 C3 D8 B0 */	addi r6, r3, "@stringBase0"@l
/* 80149258 00146338  7F C4 F3 78 */	mr r4, r30
/* 8014925C 0014633C  D0 1C 01 34 */	stfs f0, 0x134(r28)
/* 80149260 00146340  7F E5 FB 78 */	mr r5, r31
/* 80149264 00146344  38 7C 01 34 */	addi r3, r28, 0x134
/* 80149268 00146348  38 C6 06 E6 */	addi r6, r6, 0x6e6
/* 8014926C 0014634C  C0 22 A6 30 */	lfs f1, "@1868"@sda21(r2)
/* 80149270 00146350  C0 42 A6 C8 */	lfs f2, "@2421"@sda21(r2)
/* 80149274 00146354  C0 62 A6 B0 */	lfs f3, "@2415"@sda21(r2)
/* 80149278 00146358  48 00 57 C5 */	bl "load_param<f,f>__10auto_tweakFRffffP16xModelAssetParamUiPCc"
.L_8014927C:
/* 8014927C 0014635C  57 A0 06 3F */	clrlwi. r0, r29, 24
/* 80149280 00146360  41 82 00 34 */	beq .L_801492B4
/* 80149284 00146364  C0 02 A6 4C */	lfs f0, "@1976"@sda21(r2)
/* 80149288 00146368  3C 60 80 27 */	lis r3, "@stringBase0"@ha
/* 8014928C 0014636C  38 C3 D8 B0 */	addi r6, r3, "@stringBase0"@l
/* 80149290 00146370  7F C4 F3 78 */	mr r4, r30
/* 80149294 00146374  D0 1C 01 38 */	stfs f0, 0x138(r28)
/* 80149298 00146378  7F E5 FB 78 */	mr r5, r31
/* 8014929C 0014637C  38 7C 01 38 */	addi r3, r28, 0x138
/* 801492A0 00146380  38 C6 06 FE */	addi r6, r6, 0x6fe
/* 801492A4 00146384  C0 22 A6 30 */	lfs f1, "@1868"@sda21(r2)
/* 801492A8 00146388  C0 42 A6 34 */	lfs f2, "@1869"@sda21(r2)
/* 801492AC 0014638C  C0 62 A6 E0 */	lfs f3, "@2427"@sda21(r2)
/* 801492B0 00146390  48 00 57 8D */	bl "load_param<f,f>__10auto_tweakFRffffP16xModelAssetParamUiPCc"
.L_801492B4:
/* 801492B4 00146394  57 A0 06 3F */	clrlwi. r0, r29, 24
/* 801492B8 00146398  41 82 00 34 */	beq .L_801492EC
/* 801492BC 0014639C  C0 02 A6 30 */	lfs f0, "@1868"@sda21(r2)
/* 801492C0 001463A0  3C 60 80 27 */	lis r3, "@stringBase0"@ha
/* 801492C4 001463A4  38 C3 D8 B0 */	addi r6, r3, "@stringBase0"@l
/* 801492C8 001463A8  7F C4 F3 78 */	mr r4, r30
/* 801492CC 001463AC  D0 1C 01 3C */	stfs f0, 0x13c(r28)
/* 801492D0 001463B0  7F E5 FB 78 */	mr r5, r31
/* 801492D4 001463B4  38 7C 01 3C */	addi r3, r28, 0x13c
/* 801492D8 001463B8  38 C6 07 11 */	addi r6, r6, 0x711
/* 801492DC 001463BC  C0 22 A6 30 */	lfs f1, "@1868"@sda21(r2)
/* 801492E0 001463C0  C0 42 A6 E8 */	lfs f2, "@2429"@sda21(r2)
/* 801492E4 001463C4  C0 62 A6 90 */	lfs f3, "@2407"@sda21(r2)
/* 801492E8 001463C8  48 00 57 55 */	bl "load_param<f,f>__10auto_tweakFRffffP16xModelAssetParamUiPCc"
.L_801492EC:
/* 801492EC 001463CC  57 A0 06 3F */	clrlwi. r0, r29, 24
/* 801492F0 001463D0  41 82 00 34 */	beq .L_80149324
/* 801492F4 001463D4  C0 02 A6 70 */	lfs f0, "@2105"@sda21(r2)
/* 801492F8 001463D8  3C 60 80 27 */	lis r3, "@stringBase0"@ha
/* 801492FC 001463DC  38 C3 D8 B0 */	addi r6, r3, "@stringBase0"@l
/* 80149300 001463E0  7F C4 F3 78 */	mr r4, r30
/* 80149304 001463E4  D0 1C 01 40 */	stfs f0, 0x140(r28)
/* 80149308 001463E8  7F E5 FB 78 */	mr r5, r31
/* 8014930C 001463EC  38 7C 01 40 */	addi r3, r28, 0x140
/* 80149310 001463F0  38 C6 07 2D */	addi r6, r6, 0x72d
/* 80149314 001463F4  C0 22 A6 30 */	lfs f1, "@1868"@sda21(r2)
/* 80149318 001463F8  C0 42 A6 34 */	lfs f2, "@1869"@sda21(r2)
/* 8014931C 001463FC  C0 62 A6 90 */	lfs f3, "@2407"@sda21(r2)
/* 80149320 00146400  48 00 57 1D */	bl "load_param<f,f>__10auto_tweakFRffffP16xModelAssetParamUiPCc"
.L_80149324:
/* 80149324 00146404  57 A0 06 3F */	clrlwi. r0, r29, 24
/* 80149328 00146408  41 82 00 50 */	beq .L_80149378
/* 8014932C 0014640C  38 60 00 FF */	li r3, 0xff
/* 80149330 00146410  38 80 00 64 */	li r4, 0x64
/* 80149334 00146414  38 A0 00 9B */	li r5, 0x9b
/* 80149338 00146418  38 C0 00 FF */	li r6, 0xff
/* 8014933C 0014641C  4B EE 5C AD */	bl xColorFromRGBA__FUcUcUcUc
/* 80149340 00146420  90 61 00 14 */	stw r3, 0x14(r1)
/* 80149344 00146424  38 7C 01 44 */	addi r3, r28, 0x144
/* 80149348 00146428  38 81 00 14 */	addi r4, r1, 0x14
/* 8014934C 0014642C  4B EC EC 4D */	bl __as__10iColor_tagFRC10iColor_tag
/* 80149350 00146430  3C 60 80 27 */	lis r3, "@stringBase0"@ha
/* 80149354 00146434  7F C7 F3 78 */	mr r7, r30
/* 80149358 00146438  38 A3 D8 B0 */	addi r5, r3, "@stringBase0"@l
/* 8014935C 0014643C  7F E8 FB 78 */	mr r8, r31
/* 80149360 00146440  38 7C 01 44 */	addi r3, r28, 0x144
/* 80149364 00146444  38 80 00 00 */	li r4, 0x0
/* 80149368 00146448  39 25 07 44 */	addi r9, r5, 0x744
/* 8014936C 0014644C  38 A0 00 00 */	li r5, 0x0
/* 80149370 00146450  38 C0 00 00 */	li r6, 0x0
/* 80149374 00146454  48 00 55 59 */	bl "load_param<10iColor_tag,i>__10auto_tweakFR10iColor_tagiiiP16xModelAssetParamUiPCc"
.L_80149378:
/* 80149378 00146458  57 A0 06 3F */	clrlwi. r0, r29, 24
/* 8014937C 0014645C  41 82 00 34 */	beq .L_801493B0
/* 80149380 00146460  C0 02 A7 10 */	lfs f0, "@2439"@sda21(r2)
/* 80149384 00146464  3C 60 80 27 */	lis r3, "@stringBase0"@ha
/* 80149388 00146468  38 C3 D8 B0 */	addi r6, r3, "@stringBase0"@l
/* 8014938C 0014646C  7F C4 F3 78 */	mr r4, r30
/* 80149390 00146470  D0 1C 01 48 */	stfs f0, 0x148(r28)
/* 80149394 00146474  7F E5 FB 78 */	mr r5, r31
/* 80149398 00146478  38 7C 01 48 */	addi r3, r28, 0x148
/* 8014939C 0014647C  38 C6 07 57 */	addi r6, r6, 0x757
/* 801493A0 00146480  C0 22 A6 30 */	lfs f1, "@1868"@sda21(r2)
/* 801493A4 00146484  C0 42 A6 34 */	lfs f2, "@1869"@sda21(r2)
/* 801493A8 00146488  C0 62 A6 B0 */	lfs f3, "@2415"@sda21(r2)
/* 801493AC 0014648C  48 00 56 91 */	bl "load_param<f,f>__10auto_tweakFRffffP16xModelAssetParamUiPCc"
.L_801493B0:
/* 801493B0 00146490  57 A0 06 3F */	clrlwi. r0, r29, 24
/* 801493B4 00146494  41 82 00 34 */	beq .L_801493E8
/* 801493B8 00146498  C0 02 A6 84 */	lfs f0, "@2149"@sda21(r2)
/* 801493BC 0014649C  3C 60 80 27 */	lis r3, "@stringBase0"@ha
/* 801493C0 001464A0  38 C3 D8 B0 */	addi r6, r3, "@stringBase0"@l
/* 801493C4 001464A4  7F C4 F3 78 */	mr r4, r30
/* 801493C8 001464A8  D0 1C 01 4C */	stfs f0, 0x14c(r28)
/* 801493CC 001464AC  7F E5 FB 78 */	mr r5, r31
/* 801493D0 001464B0  38 7C 01 4C */	addi r3, r28, 0x14c
/* 801493D4 001464B4  38 C6 07 6F */	addi r6, r6, 0x76f
/* 801493D8 001464B8  C0 22 A6 30 */	lfs f1, "@1868"@sda21(r2)
/* 801493DC 001464BC  C0 42 A6 34 */	lfs f2, "@1869"@sda21(r2)
/* 801493E0 001464C0  C0 62 A6 90 */	lfs f3, "@2407"@sda21(r2)
/* 801493E4 001464C4  48 00 56 59 */	bl "load_param<f,f>__10auto_tweakFRffffP16xModelAssetParamUiPCc"
.L_801493E8:
/* 801493E8 001464C8  57 A0 06 3F */	clrlwi. r0, r29, 24
/* 801493EC 001464CC  41 82 00 34 */	beq .L_80149420
/* 801493F0 001464D0  C0 02 A7 14 */	lfs f0, "@2440"@sda21(r2)
/* 801493F4 001464D4  3C 60 80 27 */	lis r3, "@stringBase0"@ha
/* 801493F8 001464D8  38 C3 D8 B0 */	addi r6, r3, "@stringBase0"@l
/* 801493FC 001464DC  7F C4 F3 78 */	mr r4, r30
/* 80149400 001464E0  D0 1C 01 50 */	stfs f0, 0x150(r28)
/* 80149404 001464E4  7F E5 FB 78 */	mr r5, r31
/* 80149408 001464E8  38 7C 01 50 */	addi r3, r28, 0x150
/* 8014940C 001464EC  38 C6 07 8A */	addi r6, r6, 0x78a
/* 80149410 001464F0  C0 22 A6 30 */	lfs f1, "@1868"@sda21(r2)
/* 80149414 001464F4  C0 42 A6 C8 */	lfs f2, "@2421"@sda21(r2)
/* 80149418 001464F8  C0 62 A6 B0 */	lfs f3, "@2415"@sda21(r2)
/* 8014941C 001464FC  48 00 56 21 */	bl "load_param<f,f>__10auto_tweakFRffffP16xModelAssetParamUiPCc"
.L_80149420:
/* 80149420 00146500  57 A0 06 3F */	clrlwi. r0, r29, 24
/* 80149424 00146504  41 82 00 34 */	beq .L_80149458
/* 80149428 00146508  C0 02 A7 18 */	lfs f0, "@2441"@sda21(r2)
/* 8014942C 0014650C  3C 60 80 27 */	lis r3, "@stringBase0"@ha
/* 80149430 00146510  38 C3 D8 B0 */	addi r6, r3, "@stringBase0"@l
/* 80149434 00146514  7F C4 F3 78 */	mr r4, r30
/* 80149438 00146518  D0 1C 01 54 */	stfs f0, 0x154(r28)
/* 8014943C 0014651C  7F E5 FB 78 */	mr r5, r31
/* 80149440 00146520  38 7C 01 54 */	addi r3, r28, 0x154
/* 80149444 00146524  38 C6 07 A9 */	addi r6, r6, 0x7a9
/* 80149448 00146528  C0 22 A6 30 */	lfs f1, "@1868"@sda21(r2)
/* 8014944C 0014652C  C0 42 A6 34 */	lfs f2, "@1869"@sda21(r2)
/* 80149450 00146530  C0 62 A6 E0 */	lfs f3, "@2427"@sda21(r2)
/* 80149454 00146534  48 00 55 E9 */	bl "load_param<f,f>__10auto_tweakFRffffP16xModelAssetParamUiPCc"
.L_80149458:
/* 80149458 00146538  57 A0 06 3F */	clrlwi. r0, r29, 24
/* 8014945C 0014653C  41 82 00 34 */	beq .L_80149490
/* 80149460 00146540  C0 02 A7 10 */	lfs f0, "@2439"@sda21(r2)
/* 80149464 00146544  3C 60 80 27 */	lis r3, "@stringBase0"@ha
/* 80149468 00146548  38 C3 D8 B0 */	addi r6, r3, "@stringBase0"@l
/* 8014946C 0014654C  7F C4 F3 78 */	mr r4, r30
/* 80149470 00146550  D0 1C 01 58 */	stfs f0, 0x158(r28)
/* 80149474 00146554  7F E5 FB 78 */	mr r5, r31
/* 80149478 00146558  38 7C 01 58 */	addi r3, r28, 0x158
/* 8014947C 0014655C  38 C6 07 C3 */	addi r6, r6, 0x7c3
/* 80149480 00146560  C0 22 A6 30 */	lfs f1, "@1868"@sda21(r2)
/* 80149484 00146564  C0 42 A6 34 */	lfs f2, "@1869"@sda21(r2)
/* 80149488 00146568  C0 62 A6 90 */	lfs f3, "@2407"@sda21(r2)
/* 8014948C 0014656C  48 00 55 B1 */	bl "load_param<f,f>__10auto_tweakFRffffP16xModelAssetParamUiPCc"
.L_80149490:
/* 80149490 00146570  57 A0 06 3F */	clrlwi. r0, r29, 24
/* 80149494 00146574  41 82 00 50 */	beq .L_801494E4
/* 80149498 00146578  38 60 00 9B */	li r3, 0x9b
/* 8014949C 0014657C  38 80 00 64 */	li r4, 0x64
/* 801494A0 00146580  38 A0 00 64 */	li r5, 0x64
/* 801494A4 00146584  38 C0 00 00 */	li r6, 0x0
/* 801494A8 00146588  4B EE 5B 41 */	bl xColorFromRGBA__FUcUcUcUc
/* 801494AC 0014658C  90 61 00 10 */	stw r3, 0x10(r1)
/* 801494B0 00146590  38 7C 01 5C */	addi r3, r28, 0x15c
/* 801494B4 00146594  38 81 00 10 */	addi r4, r1, 0x10
/* 801494B8 00146598  4B EC EA E1 */	bl __as__10iColor_tagFRC10iColor_tag
/* 801494BC 0014659C  3C 60 80 27 */	lis r3, "@stringBase0"@ha
/* 801494C0 001465A0  7F C7 F3 78 */	mr r7, r30
/* 801494C4 001465A4  38 A3 D8 B0 */	addi r5, r3, "@stringBase0"@l
/* 801494C8 001465A8  7F E8 FB 78 */	mr r8, r31
/* 801494CC 001465AC  38 7C 01 5C */	addi r3, r28, 0x15c
/* 801494D0 001465B0  38 80 00 00 */	li r4, 0x0
/* 801494D4 001465B4  39 25 07 E1 */	addi r9, r5, 0x7e1
/* 801494D8 001465B8  38 A0 00 00 */	li r5, 0x0
/* 801494DC 001465BC  38 C0 00 00 */	li r6, 0x0
/* 801494E0 001465C0  48 00 53 ED */	bl "load_param<10iColor_tag,i>__10auto_tweakFR10iColor_tagiiiP16xModelAssetParamUiPCc"
.L_801494E4:
/* 801494E4 001465C4  57 A0 06 3F */	clrlwi. r0, r29, 24
/* 801494E8 001465C8  41 82 00 34 */	beq .L_8014951C
/* 801494EC 001465CC  C0 02 A6 70 */	lfs f0, "@2105"@sda21(r2)
/* 801494F0 001465D0  3C 60 80 27 */	lis r3, "@stringBase0"@ha
/* 801494F4 001465D4  38 C3 D8 B0 */	addi r6, r3, "@stringBase0"@l
/* 801494F8 001465D8  7F C4 F3 78 */	mr r4, r30
/* 801494FC 001465DC  D0 1C 01 60 */	stfs f0, 0x160(r28)
/* 80149500 001465E0  7F E5 FB 78 */	mr r5, r31
/* 80149504 001465E4  38 7C 01 60 */	addi r3, r28, 0x160
/* 80149508 001465E8  38 C6 07 FB */	addi r6, r6, 0x7fb
/* 8014950C 001465EC  C0 22 A6 30 */	lfs f1, "@1868"@sda21(r2)
/* 80149510 001465F0  C0 42 A6 34 */	lfs f2, "@1869"@sda21(r2)
/* 80149514 001465F4  C0 62 A6 B0 */	lfs f3, "@2415"@sda21(r2)
/* 80149518 001465F8  48 00 55 25 */	bl "load_param<f,f>__10auto_tweakFRffffP16xModelAssetParamUiPCc"
.L_8014951C:
/* 8014951C 001465FC  57 A0 06 3F */	clrlwi. r0, r29, 24
/* 80149520 00146600  41 82 00 34 */	beq .L_80149554
/* 80149524 00146604  C0 02 A6 30 */	lfs f0, "@1868"@sda21(r2)
/* 80149528 00146608  3C 60 80 27 */	lis r3, "@stringBase0"@ha
/* 8014952C 0014660C  38 C3 D8 B0 */	addi r6, r3, "@stringBase0"@l
/* 80149530 00146610  7F C4 F3 78 */	mr r4, r30
/* 80149534 00146614  D0 1C 01 64 */	stfs f0, 0x164(r28)
/* 80149538 00146618  7F E5 FB 78 */	mr r5, r31
/* 8014953C 0014661C  38 7C 01 64 */	addi r3, r28, 0x164
/* 80149540 00146620  38 C6 08 0E */	addi r6, r6, 0x80e
/* 80149544 00146624  C0 22 A6 30 */	lfs f1, "@1868"@sda21(r2)
/* 80149548 00146628  C0 42 A6 34 */	lfs f2, "@1869"@sda21(r2)
/* 8014954C 0014662C  C0 62 A6 B0 */	lfs f3, "@2415"@sda21(r2)
/* 80149550 00146630  48 00 54 ED */	bl "load_param<f,f>__10auto_tweakFRffffP16xModelAssetParamUiPCc"
.L_80149554:
/* 80149554 00146634  57 A0 06 3F */	clrlwi. r0, r29, 24
/* 80149558 00146638  41 82 00 34 */	beq .L_8014958C
/* 8014955C 0014663C  C0 02 A6 30 */	lfs f0, "@1868"@sda21(r2)
/* 80149560 00146640  3C 60 80 27 */	lis r3, "@stringBase0"@ha
/* 80149564 00146644  38 C3 D8 B0 */	addi r6, r3, "@stringBase0"@l
/* 80149568 00146648  7F C4 F3 78 */	mr r4, r30
/* 8014956C 0014664C  D0 1C 01 68 */	stfs f0, 0x168(r28)
/* 80149570 00146650  7F E5 FB 78 */	mr r5, r31
/* 80149574 00146654  38 7C 01 68 */	addi r3, r28, 0x168
/* 80149578 00146658  38 C6 08 23 */	addi r6, r6, 0x823
/* 8014957C 0014665C  C0 22 A6 30 */	lfs f1, "@1868"@sda21(r2)
/* 80149580 00146660  C0 42 A6 34 */	lfs f2, "@1869"@sda21(r2)
/* 80149584 00146664  C0 62 A6 B0 */	lfs f3, "@2415"@sda21(r2)
/* 80149588 00146668  48 00 54 B5 */	bl "load_param<f,f>__10auto_tweakFRffffP16xModelAssetParamUiPCc"
.L_8014958C:
/* 8014958C 0014666C  57 A0 06 3F */	clrlwi. r0, r29, 24
/* 80149590 00146670  41 82 00 34 */	beq .L_801495C4
/* 80149594 00146674  C0 02 A7 1C */	lfs f0, "@2442"@sda21(r2)
/* 80149598 00146678  3C 60 80 27 */	lis r3, "@stringBase0"@ha
/* 8014959C 0014667C  38 C3 D8 B0 */	addi r6, r3, "@stringBase0"@l
/* 801495A0 00146680  7F C4 F3 78 */	mr r4, r30
/* 801495A4 00146684  D0 1C 01 6C */	stfs f0, 0x16c(r28)
/* 801495A8 00146688  7F E5 FB 78 */	mr r5, r31
/* 801495AC 0014668C  38 7C 01 6C */	addi r3, r28, 0x16c
/* 801495B0 00146690  38 C6 08 37 */	addi r6, r6, 0x837
/* 801495B4 00146694  C0 22 A6 30 */	lfs f1, "@1868"@sda21(r2)
/* 801495B8 00146698  C0 42 A6 34 */	lfs f2, "@1869"@sda21(r2)
/* 801495BC 0014669C  C0 62 A6 5C */	lfs f3, "@2084"@sda21(r2)
/* 801495C0 001466A0  48 00 54 7D */	bl "load_param<f,f>__10auto_tweakFRffffP16xModelAssetParamUiPCc"
.L_801495C4:
/* 801495C4 001466A4  57 A0 06 3F */	clrlwi. r0, r29, 24
/* 801495C8 001466A8  41 82 00 50 */	beq .L_80149618
/* 801495CC 001466AC  38 60 00 FF */	li r3, 0xff
/* 801495D0 001466B0  38 80 00 FF */	li r4, 0xff
/* 801495D4 001466B4  38 A0 00 C4 */	li r5, 0xc4
/* 801495D8 001466B8  38 C0 00 FF */	li r6, 0xff
/* 801495DC 001466BC  4B EE 5A 0D */	bl xColorFromRGBA__FUcUcUcUc
/* 801495E0 001466C0  90 61 00 0C */	stw r3, 0xc(r1)
/* 801495E4 001466C4  38 7C 01 70 */	addi r3, r28, 0x170
/* 801495E8 001466C8  38 81 00 0C */	addi r4, r1, 0xc
/* 801495EC 001466CC  4B EC E9 AD */	bl __as__10iColor_tagFRC10iColor_tag
/* 801495F0 001466D0  3C 60 80 27 */	lis r3, "@stringBase0"@ha
/* 801495F4 001466D4  7F C7 F3 78 */	mr r7, r30
/* 801495F8 001466D8  38 A3 D8 B0 */	addi r5, r3, "@stringBase0"@l
/* 801495FC 001466DC  7F E8 FB 78 */	mr r8, r31
/* 80149600 001466E0  38 7C 01 70 */	addi r3, r28, 0x170
/* 80149604 001466E4  38 80 00 00 */	li r4, 0x0
/* 80149608 001466E8  39 25 08 4D */	addi r9, r5, 0x84d
/* 8014960C 001466EC  38 A0 00 00 */	li r5, 0x0
/* 80149610 001466F0  38 C0 00 00 */	li r6, 0x0
/* 80149614 001466F4  48 00 52 B9 */	bl "load_param<10iColor_tag,i>__10auto_tweakFR10iColor_tagiiiP16xModelAssetParamUiPCc"
.L_80149618:
/* 80149618 001466F8  57 A0 06 3F */	clrlwi. r0, r29, 24
/* 8014961C 001466FC  41 82 00 34 */	beq .L_80149650
/* 80149620 00146700  C0 02 A6 30 */	lfs f0, "@1868"@sda21(r2)
/* 80149624 00146704  3C 60 80 27 */	lis r3, "@stringBase0"@ha
/* 80149628 00146708  38 C3 D8 B0 */	addi r6, r3, "@stringBase0"@l
/* 8014962C 0014670C  7F C4 F3 78 */	mr r4, r30
/* 80149630 00146710  D0 1C 01 74 */	stfs f0, 0x174(r28)
/* 80149634 00146714  7F E5 FB 78 */	mr r5, r31
/* 80149638 00146718  38 7C 01 74 */	addi r3, r28, 0x174
/* 8014963C 0014671C  38 C6 08 5C */	addi r6, r6, 0x85c
/* 80149640 00146720  C0 22 A6 30 */	lfs f1, "@1868"@sda21(r2)
/* 80149644 00146724  C0 42 A6 34 */	lfs f2, "@1869"@sda21(r2)
/* 80149648 00146728  C0 62 A6 90 */	lfs f3, "@2407"@sda21(r2)
/* 8014964C 0014672C  48 00 53 F1 */	bl "load_param<f,f>__10auto_tweakFRffffP16xModelAssetParamUiPCc"
.L_80149650:
/* 80149650 00146730  57 A0 06 3F */	clrlwi. r0, r29, 24
/* 80149654 00146734  41 82 00 34 */	beq .L_80149688
/* 80149658 00146738  C0 02 A6 4C */	lfs f0, "@1976"@sda21(r2)
/* 8014965C 0014673C  3C 60 80 27 */	lis r3, "@stringBase0"@ha
/* 80149660 00146740  38 C3 D8 B0 */	addi r6, r3, "@stringBase0"@l
/* 80149664 00146744  7F C4 F3 78 */	mr r4, r30
/* 80149668 00146748  D0 1C 01 78 */	stfs f0, 0x178(r28)
/* 8014966C 0014674C  7F E5 FB 78 */	mr r5, r31
/* 80149670 00146750  38 7C 01 78 */	addi r3, r28, 0x178
/* 80149674 00146754  38 C6 08 6B */	addi r6, r6, 0x86b
/* 80149678 00146758  C0 22 A6 30 */	lfs f1, "@1868"@sda21(r2)
/* 8014967C 0014675C  C0 42 A6 34 */	lfs f2, "@1869"@sda21(r2)
/* 80149680 00146760  C0 62 A6 B0 */	lfs f3, "@2415"@sda21(r2)
/* 80149684 00146764  48 00 53 B9 */	bl "load_param<f,f>__10auto_tweakFRffffP16xModelAssetParamUiPCc"
.L_80149688:
/* 80149688 00146768  57 A0 06 3F */	clrlwi. r0, r29, 24
/* 8014968C 0014676C  41 82 00 34 */	beq .L_801496C0
/* 80149690 00146770  38 00 00 05 */	li r0, 0x5
/* 80149694 00146774  3C 60 80 27 */	lis r3, "@stringBase0"@ha
/* 80149698 00146778  38 83 D8 B0 */	addi r4, r3, "@stringBase0"@l
/* 8014969C 0014677C  90 1C 01 7C */	stw r0, 0x17c(r28)
/* 801496A0 00146780  7F C7 F3 78 */	mr r7, r30
/* 801496A4 00146784  7F E8 FB 78 */	mr r8, r31
/* 801496A8 00146788  38 7C 01 7C */	addi r3, r28, 0x17c
/* 801496AC 0014678C  39 24 08 79 */	addi r9, r4, 0x879
/* 801496B0 00146790  38 80 00 01 */	li r4, 0x1
/* 801496B4 00146794  38 A0 00 01 */	li r5, 0x1
/* 801496B8 00146798  38 C0 00 07 */	li r6, 0x7
/* 801496BC 0014679C  48 00 54 29 */	bl "load_param<i,i>__10auto_tweakFRiiiiP16xModelAssetParamUiPCc"
.L_801496C0:
/* 801496C0 001467A0  57 A0 06 3F */	clrlwi. r0, r29, 24
/* 801496C4 001467A4  41 82 00 34 */	beq .L_801496F8
/* 801496C8 001467A8  C0 02 A6 34 */	lfs f0, "@1869"@sda21(r2)
/* 801496CC 001467AC  3C 60 80 27 */	lis r3, "@stringBase0"@ha
/* 801496D0 001467B0  38 C3 D8 B0 */	addi r6, r3, "@stringBase0"@l
/* 801496D4 001467B4  7F C4 F3 78 */	mr r4, r30
/* 801496D8 001467B8  D0 1C 01 80 */	stfs f0, 0x180(r28)
/* 801496DC 001467BC  7F E5 FB 78 */	mr r5, r31
/* 801496E0 001467C0  38 7C 01 80 */	addi r3, r28, 0x180
/* 801496E4 001467C4  38 C6 08 86 */	addi r6, r6, 0x886
/* 801496E8 001467C8  C0 22 A6 30 */	lfs f1, "@1868"@sda21(r2)
/* 801496EC 001467CC  C0 42 A6 34 */	lfs f2, "@1869"@sda21(r2)
/* 801496F0 001467D0  C0 62 A6 5C */	lfs f3, "@2084"@sda21(r2)
/* 801496F4 001467D4  48 00 53 49 */	bl "load_param<f,f>__10auto_tweakFRffffP16xModelAssetParamUiPCc"
.L_801496F8:
/* 801496F8 001467D8  57 A0 06 3F */	clrlwi. r0, r29, 24
/* 801496FC 001467DC  41 82 00 34 */	beq .L_80149730
/* 80149700 001467E0  C0 02 A7 10 */	lfs f0, "@2439"@sda21(r2)
/* 80149704 001467E4  3C 60 80 27 */	lis r3, "@stringBase0"@ha
/* 80149708 001467E8  38 C3 D8 B0 */	addi r6, r3, "@stringBase0"@l
/* 8014970C 001467EC  7F C4 F3 78 */	mr r4, r30
/* 80149710 001467F0  D0 1C 01 84 */	stfs f0, 0x184(r28)
/* 80149714 001467F4  7F E5 FB 78 */	mr r5, r31
/* 80149718 001467F8  38 7C 01 84 */	addi r3, r28, 0x184
/* 8014971C 001467FC  38 C6 08 99 */	addi r6, r6, 0x899
/* 80149720 00146800  C0 22 A6 30 */	lfs f1, "@1868"@sda21(r2)
/* 80149724 00146804  C0 42 A6 34 */	lfs f2, "@1869"@sda21(r2)
/* 80149728 00146808  C0 62 A6 5C */	lfs f3, "@2084"@sda21(r2)
/* 8014972C 0014680C  48 00 53 11 */	bl "load_param<f,f>__10auto_tweakFRffffP16xModelAssetParamUiPCc"
.L_80149730:
/* 80149730 00146810  57 A0 06 3F */	clrlwi. r0, r29, 24
/* 80149734 00146814  41 82 00 34 */	beq .L_80149768
/* 80149738 00146818  C0 02 A6 FC */	lfs f0, "@2434"@sda21(r2)
/* 8014973C 0014681C  3C 60 80 27 */	lis r3, "@stringBase0"@ha
/* 80149740 00146820  38 C3 D8 B0 */	addi r6, r3, "@stringBase0"@l
/* 80149744 00146824  7F C4 F3 78 */	mr r4, r30
/* 80149748 00146828  D0 1C 01 88 */	stfs f0, 0x188(r28)
/* 8014974C 0014682C  7F E5 FB 78 */	mr r5, r31
/* 80149750 00146830  38 7C 01 88 */	addi r3, r28, 0x188
/* 80149754 00146834  38 C6 08 AD */	addi r6, r6, 0x8ad
/* 80149758 00146838  C0 22 A6 30 */	lfs f1, "@1868"@sda21(r2)
/* 8014975C 0014683C  C0 42 A6 34 */	lfs f2, "@1869"@sda21(r2)
/* 80149760 00146840  FC 60 08 90 */	fmr f3, f1
/* 80149764 00146844  48 00 52 D9 */	bl "load_param<f,f>__10auto_tweakFRffffP16xModelAssetParamUiPCc"
.L_80149768:
/* 80149768 00146848  57 A0 06 3F */	clrlwi. r0, r29, 24
/* 8014976C 0014684C  41 82 00 34 */	beq .L_801497A0
/* 80149770 00146850  C0 02 A6 AC */	lfs f0, "@2414"@sda21(r2)
/* 80149774 00146854  3C 60 80 27 */	lis r3, "@stringBase0"@ha
/* 80149778 00146858  38 C3 D8 B0 */	addi r6, r3, "@stringBase0"@l
/* 8014977C 0014685C  7F C4 F3 78 */	mr r4, r30
/* 80149780 00146860  D0 1C 01 8C */	stfs f0, 0x18c(r28)
/* 80149784 00146864  7F E5 FB 78 */	mr r5, r31
/* 80149788 00146868  38 7C 01 8C */	addi r3, r28, 0x18c
/* 8014978C 0014686C  38 C6 08 C3 */	addi r6, r6, 0x8c3
/* 80149790 00146870  C0 22 A6 30 */	lfs f1, "@1868"@sda21(r2)
/* 80149794 00146874  C0 42 A6 34 */	lfs f2, "@1869"@sda21(r2)
/* 80149798 00146878  C0 62 A6 B0 */	lfs f3, "@2415"@sda21(r2)
/* 8014979C 0014687C  48 00 52 A1 */	bl "load_param<f,f>__10auto_tweakFRffffP16xModelAssetParamUiPCc"
.L_801497A0:
/* 801497A0 00146880  57 A0 06 3F */	clrlwi. r0, r29, 24
/* 801497A4 00146884  41 82 00 50 */	beq .L_801497F4
/* 801497A8 00146888  38 60 00 FF */	li r3, 0xff
/* 801497AC 0014688C  38 80 00 FF */	li r4, 0xff
/* 801497B0 00146890  38 A0 00 00 */	li r5, 0x0
/* 801497B4 00146894  38 C0 00 FF */	li r6, 0xff
/* 801497B8 00146898  4B EE 58 31 */	bl xColorFromRGBA__FUcUcUcUc
/* 801497BC 0014689C  90 61 00 08 */	stw r3, 0x8(r1)
/* 801497C0 001468A0  38 7C 01 90 */	addi r3, r28, 0x190
/* 801497C4 001468A4  38 81 00 08 */	addi r4, r1, 0x8
/* 801497C8 001468A8  4B EC E7 D1 */	bl __as__10iColor_tagFRC10iColor_tag
/* 801497CC 001468AC  3C 60 80 27 */	lis r3, "@stringBase0"@ha
/* 801497D0 001468B0  7F C7 F3 78 */	mr r7, r30
/* 801497D4 001468B4  38 A3 D8 B0 */	addi r5, r3, "@stringBase0"@l
/* 801497D8 001468B8  7F E8 FB 78 */	mr r8, r31
/* 801497DC 001468BC  38 7C 01 90 */	addi r3, r28, 0x190
/* 801497E0 001468C0  38 80 00 00 */	li r4, 0x0
/* 801497E4 001468C4  39 25 08 DD */	addi r9, r5, 0x8dd
/* 801497E8 001468C8  38 A0 00 00 */	li r5, 0x0
/* 801497EC 001468CC  38 C0 00 00 */	li r6, 0x0
/* 801497F0 001468D0  48 00 50 DD */	bl "load_param<10iColor_tag,i>__10auto_tweakFR10iColor_tagiiiP16xModelAssetParamUiPCc"
.L_801497F4:
/* 801497F4 001468D4  57 A0 06 3F */	clrlwi. r0, r29, 24
/* 801497F8 001468D8  41 82 00 34 */	beq .L_8014982C
/* 801497FC 001468DC  C0 02 A7 20 */	lfs f0, "@2443"@sda21(r2)
/* 80149800 001468E0  3C 60 80 27 */	lis r3, "@stringBase0"@ha
/* 80149804 001468E4  38 C3 D8 B0 */	addi r6, r3, "@stringBase0"@l
/* 80149808 001468E8  7F C4 F3 78 */	mr r4, r30
/* 8014980C 001468EC  D0 1C 01 94 */	stfs f0, 0x194(r28)
/* 80149810 001468F0  7F E5 FB 78 */	mr r5, r31
/* 80149814 001468F4  38 7C 01 94 */	addi r3, r28, 0x194
/* 80149818 001468F8  38 C6 08 F3 */	addi r6, r6, 0x8f3
/* 8014981C 001468FC  C0 22 A6 30 */	lfs f1, "@1868"@sda21(r2)
/* 80149820 00146900  C0 42 A6 34 */	lfs f2, "@1869"@sda21(r2)
/* 80149824 00146904  C0 62 A6 5C */	lfs f3, "@2084"@sda21(r2)
/* 80149828 00146908  48 00 52 15 */	bl "load_param<f,f>__10auto_tweakFRffffP16xModelAssetParamUiPCc"
.L_8014982C:
/* 8014982C 0014690C  57 A0 06 3F */	clrlwi. r0, r29, 24
/* 80149830 00146910  41 82 00 34 */	beq .L_80149864
/* 80149834 00146914  C0 02 A7 24 */	lfs f0, "@2444"@sda21(r2)
/* 80149838 00146918  3C 60 80 27 */	lis r3, "@stringBase0"@ha
/* 8014983C 0014691C  38 C3 D8 B0 */	addi r6, r3, "@stringBase0"@l
/* 80149840 00146920  7F C4 F3 78 */	mr r4, r30
/* 80149844 00146924  D0 1C 01 98 */	stfs f0, 0x198(r28)
/* 80149848 00146928  7F E5 FB 78 */	mr r5, r31
/* 8014984C 0014692C  38 7C 01 98 */	addi r3, r28, 0x198
/* 80149850 00146930  38 C6 09 10 */	addi r6, r6, 0x910
/* 80149854 00146934  C0 22 A6 30 */	lfs f1, "@1868"@sda21(r2)
/* 80149858 00146938  C0 42 A6 34 */	lfs f2, "@1869"@sda21(r2)
/* 8014985C 0014693C  C0 62 A6 90 */	lfs f3, "@2407"@sda21(r2)
/* 80149860 00146940  48 00 51 DD */	bl "load_param<f,f>__10auto_tweakFRffffP16xModelAssetParamUiPCc"
.L_80149864:
/* 80149864 00146944  57 A0 06 3F */	clrlwi. r0, r29, 24
/* 80149868 00146948  41 82 00 34 */	beq .L_8014989C
/* 8014986C 0014694C  38 00 00 05 */	li r0, 0x5
/* 80149870 00146950  3C 60 80 27 */	lis r3, "@stringBase0"@ha
/* 80149874 00146954  38 83 D8 B0 */	addi r4, r3, "@stringBase0"@l
/* 80149878 00146958  90 1C 01 9C */	stw r0, 0x19c(r28)
/* 8014987C 0014695C  7F C7 F3 78 */	mr r7, r30
/* 80149880 00146960  7F E8 FB 78 */	mr r8, r31
/* 80149884 00146964  38 7C 01 9C */	addi r3, r28, 0x19c
/* 80149888 00146968  39 24 09 1C */	addi r9, r4, 0x91c
/* 8014988C 0014696C  38 80 00 01 */	li r4, 0x1
/* 80149890 00146970  38 A0 00 01 */	li r5, 0x1
/* 80149894 00146974  38 C0 00 0A */	li r6, 0xa
/* 80149898 00146978  48 00 52 4D */	bl "load_param<i,i>__10auto_tweakFRiiiiP16xModelAssetParamUiPCc"
.L_8014989C:
/* 8014989C 0014697C  57 A0 06 3F */	clrlwi. r0, r29, 24
/* 801498A0 00146980  41 82 00 34 */	beq .L_801498D4
/* 801498A4 00146984  C0 02 A6 34 */	lfs f0, "@1869"@sda21(r2)
/* 801498A8 00146988  3C 60 80 27 */	lis r3, "@stringBase0"@ha
/* 801498AC 0014698C  38 C3 D8 B0 */	addi r6, r3, "@stringBase0"@l
/* 801498B0 00146990  7F C4 F3 78 */	mr r4, r30
/* 801498B4 00146994  D0 1C 01 A0 */	stfs f0, 0x1a0(r28)
/* 801498B8 00146998  7F E5 FB 78 */	mr r5, r31
/* 801498BC 0014699C  38 7C 01 A0 */	addi r3, r28, 0x1a0
/* 801498C0 001469A0  38 C6 09 28 */	addi r6, r6, 0x928
/* 801498C4 001469A4  C0 22 A6 30 */	lfs f1, "@1868"@sda21(r2)
/* 801498C8 001469A8  C0 42 A6 C8 */	lfs f2, "@2421"@sda21(r2)
/* 801498CC 001469AC  C0 62 A6 B0 */	lfs f3, "@2415"@sda21(r2)
/* 801498D0 001469B0  48 00 51 6D */	bl "load_param<f,f>__10auto_tweakFRffffP16xModelAssetParamUiPCc"
.L_801498D4:
/* 801498D4 001469B4  57 A0 06 3F */	clrlwi. r0, r29, 24
/* 801498D8 001469B8  41 82 00 34 */	beq .L_8014990C
/* 801498DC 001469BC  C0 02 A7 28 */	lfs f0, "@2445"@sda21(r2)
/* 801498E0 001469C0  3C 60 80 27 */	lis r3, "@stringBase0"@ha
/* 801498E4 001469C4  38 C3 D8 B0 */	addi r6, r3, "@stringBase0"@l
/* 801498E8 001469C8  7F C4 F3 78 */	mr r4, r30
/* 801498EC 001469CC  D0 1C 01 A4 */	stfs f0, 0x1a4(r28)
/* 801498F0 001469D0  7F E5 FB 78 */	mr r5, r31
/* 801498F4 001469D4  38 7C 01 A4 */	addi r3, r28, 0x1a4
/* 801498F8 001469D8  38 C6 09 36 */	addi r6, r6, 0x936
/* 801498FC 001469DC  C0 22 A6 30 */	lfs f1, "@1868"@sda21(r2)
/* 80149900 001469E0  C0 42 A6 34 */	lfs f2, "@1869"@sda21(r2)
/* 80149904 001469E4  C0 62 A6 E0 */	lfs f3, "@2427"@sda21(r2)
/* 80149908 001469E8  48 00 51 35 */	bl "load_param<f,f>__10auto_tweakFRffffP16xModelAssetParamUiPCc"
.L_8014990C:
/* 8014990C 001469EC  57 A0 06 3F */	clrlwi. r0, r29, 24
/* 80149910 001469F0  41 82 00 34 */	beq .L_80149944
/* 80149914 001469F4  C0 02 A6 8C */	lfs f0, "@2406"@sda21(r2)
/* 80149918 001469F8  3C 60 80 27 */	lis r3, "@stringBase0"@ha
/* 8014991C 001469FC  38 C3 D8 B0 */	addi r6, r3, "@stringBase0"@l
/* 80149920 00146A00  7F C4 F3 78 */	mr r4, r30
/* 80149924 00146A04  D0 1C 01 A8 */	stfs f0, 0x1a8(r28)
/* 80149928 00146A08  7F E5 FB 78 */	mr r5, r31
/* 8014992C 00146A0C  38 7C 01 A8 */	addi r3, r28, 0x1a8
/* 80149930 00146A10  38 C6 09 46 */	addi r6, r6, 0x946
/* 80149934 00146A14  C0 22 A6 30 */	lfs f1, "@1868"@sda21(r2)
/* 80149938 00146A18  C0 42 A6 34 */	lfs f2, "@1869"@sda21(r2)
/* 8014993C 00146A1C  C0 62 A6 B0 */	lfs f3, "@2415"@sda21(r2)
/* 80149940 00146A20  48 00 50 FD */	bl "load_param<f,f>__10auto_tweakFRffffP16xModelAssetParamUiPCc"
.L_80149944:
/* 80149944 00146A24  57 A0 06 3F */	clrlwi. r0, r29, 24
/* 80149948 00146A28  41 82 00 34 */	beq .L_8014997C
/* 8014994C 00146A2C  C0 02 A6 4C */	lfs f0, "@1976"@sda21(r2)
/* 80149950 00146A30  3C 60 80 27 */	lis r3, "@stringBase0"@ha
/* 80149954 00146A34  38 C3 D8 B0 */	addi r6, r3, "@stringBase0"@l
/* 80149958 00146A38  7F C4 F3 78 */	mr r4, r30
/* 8014995C 00146A3C  D0 1C 01 AC */	stfs f0, 0x1ac(r28)
/* 80149960 00146A40  7F E5 FB 78 */	mr r5, r31
/* 80149964 00146A44  38 7C 01 AC */	addi r3, r28, 0x1ac
/* 80149968 00146A48  38 C6 09 53 */	addi r6, r6, 0x953
/* 8014996C 00146A4C  C0 22 A6 30 */	lfs f1, "@1868"@sda21(r2)
/* 80149970 00146A50  C0 42 A6 34 */	lfs f2, "@1869"@sda21(r2)
/* 80149974 00146A54  C0 62 A6 90 */	lfs f3, "@2407"@sda21(r2)
/* 80149978 00146A58  48 00 50 C5 */	bl "load_param<f,f>__10auto_tweakFRffffP16xModelAssetParamUiPCc"
.L_8014997C:
/* 8014997C 00146A5C  57 A0 06 3F */	clrlwi. r0, r29, 24
/* 80149980 00146A60  41 82 00 34 */	beq .L_801499B4
/* 80149984 00146A64  C0 02 A6 90 */	lfs f0, "@2407"@sda21(r2)
/* 80149988 00146A68  3C 60 80 27 */	lis r3, "@stringBase0"@ha
/* 8014998C 00146A6C  38 C3 D8 B0 */	addi r6, r3, "@stringBase0"@l
/* 80149990 00146A70  7F C4 F3 78 */	mr r4, r30
/* 80149994 00146A74  D0 1C 01 B0 */	stfs f0, 0x1b0(r28)
/* 80149998 00146A78  7F E5 FB 78 */	mr r5, r31
/* 8014999C 00146A7C  38 7C 01 B0 */	addi r3, r28, 0x1b0
/* 801499A0 00146A80  38 C6 09 5F */	addi r6, r6, 0x95f
/* 801499A4 00146A84  C0 22 A6 30 */	lfs f1, "@1868"@sda21(r2)
/* 801499A8 00146A88  C0 42 A6 34 */	lfs f2, "@1869"@sda21(r2)
/* 801499AC 00146A8C  C0 62 A6 E0 */	lfs f3, "@2427"@sda21(r2)
/* 801499B0 00146A90  48 00 50 8D */	bl "load_param<f,f>__10auto_tweakFRffffP16xModelAssetParamUiPCc"
.L_801499B4:
/* 801499B4 00146A94  57 A0 06 3F */	clrlwi. r0, r29, 24
/* 801499B8 00146A98  41 82 00 34 */	beq .L_801499EC
/* 801499BC 00146A9C  C0 02 A6 50 */	lfs f0, "@1987"@sda21(r2)
/* 801499C0 00146AA0  3C 60 80 27 */	lis r3, "@stringBase0"@ha
/* 801499C4 00146AA4  38 C3 D8 B0 */	addi r6, r3, "@stringBase0"@l
/* 801499C8 00146AA8  7F C4 F3 78 */	mr r4, r30
/* 801499CC 00146AAC  D0 1C 01 B4 */	stfs f0, 0x1b4(r28)
/* 801499D0 00146AB0  7F E5 FB 78 */	mr r5, r31
/* 801499D4 00146AB4  38 7C 01 B4 */	addi r3, r28, 0x1b4
/* 801499D8 00146AB8  38 C6 09 69 */	addi r6, r6, 0x969
/* 801499DC 00146ABC  C0 22 A6 30 */	lfs f1, "@1868"@sda21(r2)
/* 801499E0 00146AC0  C0 42 A6 34 */	lfs f2, "@1869"@sda21(r2)
/* 801499E4 00146AC4  FC 60 08 90 */	fmr f3, f1
/* 801499E8 00146AC8  48 00 50 55 */	bl "load_param<f,f>__10auto_tweakFRffffP16xModelAssetParamUiPCc"
.L_801499EC:
/* 801499EC 00146ACC  57 A0 06 3F */	clrlwi. r0, r29, 24
/* 801499F0 00146AD0  41 82 00 34 */	beq .L_80149A24
/* 801499F4 00146AD4  C0 02 A7 2C */	lfs f0, "@2446"@sda21(r2)
/* 801499F8 00146AD8  3C 60 80 27 */	lis r3, "@stringBase0"@ha
/* 801499FC 00146ADC  38 C3 D8 B0 */	addi r6, r3, "@stringBase0"@l
/* 80149A00 00146AE0  7F C4 F3 78 */	mr r4, r30
/* 80149A04 00146AE4  D0 1C 01 B8 */	stfs f0, 0x1b8(r28)
/* 80149A08 00146AE8  7F E5 FB 78 */	mr r5, r31
/* 80149A0C 00146AEC  38 7C 01 B8 */	addi r3, r28, 0x1b8
/* 80149A10 00146AF0  38 C6 09 81 */	addi r6, r6, 0x981
/* 80149A14 00146AF4  C0 22 A6 30 */	lfs f1, "@1868"@sda21(r2)
/* 80149A18 00146AF8  C0 42 A6 34 */	lfs f2, "@1869"@sda21(r2)
/* 80149A1C 00146AFC  FC 60 08 90 */	fmr f3, f1
/* 80149A20 00146B00  48 00 50 1D */	bl "load_param<f,f>__10auto_tweakFRffffP16xModelAssetParamUiPCc"
.L_80149A24:
/* 80149A24 00146B04  57 A0 06 3F */	clrlwi. r0, r29, 24
/* 80149A28 00146B08  41 82 00 34 */	beq .L_80149A5C
/* 80149A2C 00146B0C  C0 02 A6 FC */	lfs f0, "@2434"@sda21(r2)
/* 80149A30 00146B10  3C 60 80 27 */	lis r3, "@stringBase0"@ha
/* 80149A34 00146B14  38 C3 D8 B0 */	addi r6, r3, "@stringBase0"@l
/* 80149A38 00146B18  7F C4 F3 78 */	mr r4, r30
/* 80149A3C 00146B1C  D0 1C 01 BC */	stfs f0, 0x1bc(r28)
/* 80149A40 00146B20  7F E5 FB 78 */	mr r5, r31
/* 80149A44 00146B24  38 7C 01 BC */	addi r3, r28, 0x1bc
/* 80149A48 00146B28  38 C6 09 94 */	addi r6, r6, 0x994
/* 80149A4C 00146B2C  C0 22 A6 30 */	lfs f1, "@1868"@sda21(r2)
/* 80149A50 00146B30  C0 42 A6 34 */	lfs f2, "@1869"@sda21(r2)
/* 80149A54 00146B34  FC 60 08 90 */	fmr f3, f1
/* 80149A58 00146B38  48 00 4F E5 */	bl "load_param<f,f>__10auto_tweakFRffffP16xModelAssetParamUiPCc"
.L_80149A5C:
/* 80149A5C 00146B3C  57 A0 06 3F */	clrlwi. r0, r29, 24
/* 80149A60 00146B40  41 82 00 34 */	beq .L_80149A94
/* 80149A64 00146B44  C0 02 A6 34 */	lfs f0, "@1869"@sda21(r2)
/* 80149A68 00146B48  3C 60 80 27 */	lis r3, "@stringBase0"@ha
/* 80149A6C 00146B4C  38 C3 D8 B0 */	addi r6, r3, "@stringBase0"@l
/* 80149A70 00146B50  7F C4 F3 78 */	mr r4, r30
/* 80149A74 00146B54  D0 1C 01 C4 */	stfs f0, 0x1c4(r28)
/* 80149A78 00146B58  7F E5 FB 78 */	mr r5, r31
/* 80149A7C 00146B5C  38 7C 01 C4 */	addi r3, r28, 0x1c4
/* 80149A80 00146B60  38 C6 09 B5 */	addi r6, r6, 0x9b5
/* 80149A84 00146B64  C0 22 A6 30 */	lfs f1, "@1868"@sda21(r2)
/* 80149A88 00146B68  C0 42 A6 34 */	lfs f2, "@1869"@sda21(r2)
/* 80149A8C 00146B6C  C0 62 A6 5C */	lfs f3, "@2084"@sda21(r2)
/* 80149A90 00146B70  48 00 4F AD */	bl "load_param<f,f>__10auto_tweakFRffffP16xModelAssetParamUiPCc"
.L_80149A94:
/* 80149A94 00146B74  57 A0 06 3F */	clrlwi. r0, r29, 24
/* 80149A98 00146B78  41 82 00 34 */	beq .L_80149ACC
/* 80149A9C 00146B7C  C0 02 A6 DC */	lfs f0, "@2426"@sda21(r2)
/* 80149AA0 00146B80  3C 60 80 27 */	lis r3, "@stringBase0"@ha
/* 80149AA4 00146B84  38 C3 D8 B0 */	addi r6, r3, "@stringBase0"@l
/* 80149AA8 00146B88  7F C4 F3 78 */	mr r4, r30
/* 80149AAC 00146B8C  D0 1C 01 C8 */	stfs f0, 0x1c8(r28)
/* 80149AB0 00146B90  7F E5 FB 78 */	mr r5, r31
/* 80149AB4 00146B94  38 7C 01 C8 */	addi r3, r28, 0x1c8
/* 80149AB8 00146B98  38 C6 09 DC */	addi r6, r6, 0x9dc
/* 80149ABC 00146B9C  C0 22 A6 30 */	lfs f1, "@1868"@sda21(r2)
/* 80149AC0 00146BA0  C0 42 A6 34 */	lfs f2, "@1869"@sda21(r2)
/* 80149AC4 00146BA4  C0 62 A6 5C */	lfs f3, "@2084"@sda21(r2)
/* 80149AC8 00146BA8  48 00 4F 75 */	bl "load_param<f,f>__10auto_tweakFRffffP16xModelAssetParamUiPCc"
.L_80149ACC:
/* 80149ACC 00146BAC  57 A0 06 3F */	clrlwi. r0, r29, 24
/* 80149AD0 00146BB0  41 82 00 34 */	beq .L_80149B04
/* 80149AD4 00146BB4  38 00 00 00 */	li r0, 0x0
/* 80149AD8 00146BB8  3C 60 80 27 */	lis r3, "@stringBase0"@ha
/* 80149ADC 00146BBC  38 83 D8 B0 */	addi r4, r3, "@stringBase0"@l
/* 80149AE0 00146BC0  90 1C 01 CC */	stw r0, 0x1cc(r28)
/* 80149AE4 00146BC4  7F C7 F3 78 */	mr r7, r30
/* 80149AE8 00146BC8  7F E8 FB 78 */	mr r8, r31
/* 80149AEC 00146BCC  38 7C 01 CC */	addi r3, r28, 0x1cc
/* 80149AF0 00146BD0  39 24 0A 03 */	addi r9, r4, 0xa03
/* 80149AF4 00146BD4  38 80 00 01 */	li r4, 0x1
/* 80149AF8 00146BD8  38 A0 00 00 */	li r5, 0x0
/* 80149AFC 00146BDC  38 C0 03 E8 */	li r6, 0x3e8
/* 80149B00 00146BE0  48 00 4F E5 */	bl "load_param<i,i>__10auto_tweakFRiiiiP16xModelAssetParamUiPCc"
.L_80149B04:
/* 80149B04 00146BE4  57 A0 06 3F */	clrlwi. r0, r29, 24
/* 80149B08 00146BE8  41 82 00 34 */	beq .L_80149B3C
/* 80149B0C 00146BEC  C0 02 A6 30 */	lfs f0, "@1868"@sda21(r2)
/* 80149B10 00146BF0  3C 60 80 27 */	lis r3, "@stringBase0"@ha
/* 80149B14 00146BF4  38 C3 D8 B0 */	addi r6, r3, "@stringBase0"@l
/* 80149B18 00146BF8  7F C4 F3 78 */	mr r4, r30
/* 80149B1C 00146BFC  D0 1C 01 D0 */	stfs f0, 0x1d0(r28)
/* 80149B20 00146C00  7F E5 FB 78 */	mr r5, r31
/* 80149B24 00146C04  38 7C 01 D0 */	addi r3, r28, 0x1d0
/* 80149B28 00146C08  38 C6 0A 26 */	addi r6, r6, 0xa26
/* 80149B2C 00146C0C  C0 22 A6 30 */	lfs f1, "@1868"@sda21(r2)
/* 80149B30 00146C10  C0 42 A6 34 */	lfs f2, "@1869"@sda21(r2)
/* 80149B34 00146C14  C0 62 A6 90 */	lfs f3, "@2407"@sda21(r2)
/* 80149B38 00146C18  48 00 4F 05 */	bl "load_param<f,f>__10auto_tweakFRffffP16xModelAssetParamUiPCc"
.L_80149B3C:
/* 80149B3C 00146C1C  57 A0 06 3F */	clrlwi. r0, r29, 24
/* 80149B40 00146C20  41 82 00 34 */	beq .L_80149B74
/* 80149B44 00146C24  C0 02 A6 70 */	lfs f0, "@2105"@sda21(r2)
/* 80149B48 00146C28  3C 60 80 27 */	lis r3, "@stringBase0"@ha
/* 80149B4C 00146C2C  38 C3 D8 B0 */	addi r6, r3, "@stringBase0"@l
/* 80149B50 00146C30  7F C4 F3 78 */	mr r4, r30
/* 80149B54 00146C34  D0 1C 01 D4 */	stfs f0, 0x1d4(r28)
/* 80149B58 00146C38  7F E5 FB 78 */	mr r5, r31
/* 80149B5C 00146C3C  38 7C 01 D4 */	addi r3, r28, 0x1d4
/* 80149B60 00146C40  38 C6 0A 40 */	addi r6, r6, 0xa40
/* 80149B64 00146C44  C0 22 A6 30 */	lfs f1, "@1868"@sda21(r2)
/* 80149B68 00146C48  C0 42 A6 34 */	lfs f2, "@1869"@sda21(r2)
/* 80149B6C 00146C4C  C0 62 A6 90 */	lfs f3, "@2407"@sda21(r2)
/* 80149B70 00146C50  48 00 4E CD */	bl "load_param<f,f>__10auto_tweakFRffffP16xModelAssetParamUiPCc"
.L_80149B74:
/* 80149B74 00146C54  57 A0 06 3F */	clrlwi. r0, r29, 24
/* 80149B78 00146C58  41 82 00 34 */	beq .L_80149BAC
/* 80149B7C 00146C5C  C0 02 A6 98 */	lfs f0, "@2409"@sda21(r2)
/* 80149B80 00146C60  3C 60 80 27 */	lis r3, "@stringBase0"@ha
/* 80149B84 00146C64  38 C3 D8 B0 */	addi r6, r3, "@stringBase0"@l
/* 80149B88 00146C68  7F C4 F3 78 */	mr r4, r30
/* 80149B8C 00146C6C  D0 1C 01 D8 */	stfs f0, 0x1d8(r28)
/* 80149B90 00146C70  7F E5 FB 78 */	mr r5, r31
/* 80149B94 00146C74  38 7C 01 D8 */	addi r3, r28, 0x1d8
/* 80149B98 00146C78  38 C6 0A 59 */	addi r6, r6, 0xa59
/* 80149B9C 00146C7C  C0 22 A6 30 */	lfs f1, "@1868"@sda21(r2)
/* 80149BA0 00146C80  C0 42 A6 34 */	lfs f2, "@1869"@sda21(r2)
/* 80149BA4 00146C84  C0 62 A6 5C */	lfs f3, "@2084"@sda21(r2)
/* 80149BA8 00146C88  48 00 4E 95 */	bl "load_param<f,f>__10auto_tweakFRffffP16xModelAssetParamUiPCc"
.L_80149BAC:
/* 80149BAC 00146C8C  57 A0 06 3F */	clrlwi. r0, r29, 24
/* 80149BB0 00146C90  41 82 00 34 */	beq .L_80149BE4
/* 80149BB4 00146C94  C0 02 A7 30 */	lfs f0, "@2447"@sda21(r2)
/* 80149BB8 00146C98  3C 60 80 27 */	lis r3, "@stringBase0"@ha
/* 80149BBC 00146C9C  38 C3 D8 B0 */	addi r6, r3, "@stringBase0"@l
/* 80149BC0 00146CA0  7F C4 F3 78 */	mr r4, r30
/* 80149BC4 00146CA4  D0 1C 01 DC */	stfs f0, 0x1dc(r28)
/* 80149BC8 00146CA8  7F E5 FB 78 */	mr r5, r31
/* 80149BCC 00146CAC  38 7C 01 DC */	addi r3, r28, 0x1dc
/* 80149BD0 00146CB0  38 C6 0A 79 */	addi r6, r6, 0xa79
/* 80149BD4 00146CB4  C0 22 A6 30 */	lfs f1, "@1868"@sda21(r2)
/* 80149BD8 00146CB8  C0 42 A6 34 */	lfs f2, "@1869"@sda21(r2)
/* 80149BDC 00146CBC  C0 62 A6 5C */	lfs f3, "@2084"@sda21(r2)
/* 80149BE0 00146CC0  48 00 4E 5D */	bl "load_param<f,f>__10auto_tweakFRffffP16xModelAssetParamUiPCc"
.L_80149BE4:
/* 80149BE4 00146CC4  57 A0 06 3F */	clrlwi. r0, r29, 24
/* 80149BE8 00146CC8  41 82 00 34 */	beq .L_80149C1C
/* 80149BEC 00146CCC  38 00 00 00 */	li r0, 0x0
/* 80149BF0 00146CD0  3C 60 80 27 */	lis r3, "@stringBase0"@ha
/* 80149BF4 00146CD4  38 83 D8 B0 */	addi r4, r3, "@stringBase0"@l
/* 80149BF8 00146CD8  90 1C 01 E0 */	stw r0, 0x1e0(r28)
/* 80149BFC 00146CDC  7F C7 F3 78 */	mr r7, r30
/* 80149C00 00146CE0  7F E8 FB 78 */	mr r8, r31
/* 80149C04 00146CE4  38 7C 01 E0 */	addi r3, r28, 0x1e0
/* 80149C08 00146CE8  39 24 0A 99 */	addi r9, r4, 0xa99
/* 80149C0C 00146CEC  38 80 00 01 */	li r4, 0x1
/* 80149C10 00146CF0  38 A0 00 00 */	li r5, 0x0
/* 80149C14 00146CF4  38 C0 03 E8 */	li r6, 0x3e8
/* 80149C18 00146CF8  48 00 4E CD */	bl "load_param<i,i>__10auto_tweakFRiiiiP16xModelAssetParamUiPCc"
.L_80149C1C:
/* 80149C1C 00146CFC  57 A0 06 3F */	clrlwi. r0, r29, 24
/* 80149C20 00146D00  41 82 00 34 */	beq .L_80149C54
/* 80149C24 00146D04  C0 02 A6 64 */	lfs f0, "@2086"@sda21(r2)
/* 80149C28 00146D08  3C 60 80 27 */	lis r3, "@stringBase0"@ha
/* 80149C2C 00146D0C  38 C3 D8 B0 */	addi r6, r3, "@stringBase0"@l
/* 80149C30 00146D10  7F C4 F3 78 */	mr r4, r30
/* 80149C34 00146D14  D0 1C 01 E4 */	stfs f0, 0x1e4(r28)
/* 80149C38 00146D18  7F E5 FB 78 */	mr r5, r31
/* 80149C3C 00146D1C  38 7C 01 E4 */	addi r3, r28, 0x1e4
/* 80149C40 00146D20  38 C6 0A B5 */	addi r6, r6, 0xab5
/* 80149C44 00146D24  C0 22 A6 30 */	lfs f1, "@1868"@sda21(r2)
/* 80149C48 00146D28  C0 42 A6 34 */	lfs f2, "@1869"@sda21(r2)
/* 80149C4C 00146D2C  C0 62 A6 90 */	lfs f3, "@2407"@sda21(r2)
/* 80149C50 00146D30  48 00 4D ED */	bl "load_param<f,f>__10auto_tweakFRffffP16xModelAssetParamUiPCc"
.L_80149C54:
/* 80149C54 00146D34  57 A0 06 3F */	clrlwi. r0, r29, 24
/* 80149C58 00146D38  41 82 00 34 */	beq .L_80149C8C
/* 80149C5C 00146D3C  C0 02 A6 34 */	lfs f0, "@1869"@sda21(r2)
/* 80149C60 00146D40  3C 60 80 27 */	lis r3, "@stringBase0"@ha
/* 80149C64 00146D44  38 C3 D8 B0 */	addi r6, r3, "@stringBase0"@l
/* 80149C68 00146D48  7F C4 F3 78 */	mr r4, r30
/* 80149C6C 00146D4C  D0 1C 01 E8 */	stfs f0, 0x1e8(r28)
/* 80149C70 00146D50  7F E5 FB 78 */	mr r5, r31
/* 80149C74 00146D54  38 7C 01 E8 */	addi r3, r28, 0x1e8
/* 80149C78 00146D58  38 C6 0A D0 */	addi r6, r6, 0xad0
/* 80149C7C 00146D5C  C0 22 A6 30 */	lfs f1, "@1868"@sda21(r2)
/* 80149C80 00146D60  C0 42 A6 34 */	lfs f2, "@1869"@sda21(r2)
/* 80149C84 00146D64  C0 62 A6 90 */	lfs f3, "@2407"@sda21(r2)
/* 80149C88 00146D68  48 00 4D B5 */	bl "load_param<f,f>__10auto_tweakFRffffP16xModelAssetParamUiPCc"
.L_80149C8C:
/* 80149C8C 00146D6C  57 A0 06 3F */	clrlwi. r0, r29, 24
/* 80149C90 00146D70  41 82 00 34 */	beq .L_80149CC4
/* 80149C94 00146D74  C0 02 A6 90 */	lfs f0, "@2407"@sda21(r2)
/* 80149C98 00146D78  3C 60 80 27 */	lis r3, "@stringBase0"@ha
/* 80149C9C 00146D7C  38 C3 D8 B0 */	addi r6, r3, "@stringBase0"@l
/* 80149CA0 00146D80  7F C4 F3 78 */	mr r4, r30
/* 80149CA4 00146D84  D0 1C 01 EC */	stfs f0, 0x1ec(r28)
/* 80149CA8 00146D88  7F E5 FB 78 */	mr r5, r31
/* 80149CAC 00146D8C  38 7C 01 EC */	addi r3, r28, 0x1ec
/* 80149CB0 00146D90  38 C6 0A EA */	addi r6, r6, 0xaea
/* 80149CB4 00146D94  C0 22 A6 30 */	lfs f1, "@1868"@sda21(r2)
/* 80149CB8 00146D98  C0 42 A6 34 */	lfs f2, "@1869"@sda21(r2)
/* 80149CBC 00146D9C  C0 62 A6 5C */	lfs f3, "@2084"@sda21(r2)
/* 80149CC0 00146DA0  48 00 4D 7D */	bl "load_param<f,f>__10auto_tweakFRffffP16xModelAssetParamUiPCc"
.L_80149CC4:
/* 80149CC4 00146DA4  57 A0 06 3F */	clrlwi. r0, r29, 24
/* 80149CC8 00146DA8  41 82 00 34 */	beq .L_80149CFC
/* 80149CCC 00146DAC  C0 02 A7 34 */	lfs f0, "@2448"@sda21(r2)
/* 80149CD0 00146DB0  3C 60 80 27 */	lis r3, "@stringBase0"@ha
/* 80149CD4 00146DB4  38 C3 D8 B0 */	addi r6, r3, "@stringBase0"@l
/* 80149CD8 00146DB8  7F C4 F3 78 */	mr r4, r30
/* 80149CDC 00146DBC  D0 1C 01 F0 */	stfs f0, 0x1f0(r28)
/* 80149CE0 00146DC0  7F E5 FB 78 */	mr r5, r31
/* 80149CE4 00146DC4  38 7C 01 F0 */	addi r3, r28, 0x1f0
/* 80149CE8 00146DC8  38 C6 0B 0B */	addi r6, r6, 0xb0b
/* 80149CEC 00146DCC  C0 22 A6 30 */	lfs f1, "@1868"@sda21(r2)
/* 80149CF0 00146DD0  C0 42 A6 34 */	lfs f2, "@1869"@sda21(r2)
/* 80149CF4 00146DD4  C0 62 A6 5C */	lfs f3, "@2084"@sda21(r2)
/* 80149CF8 00146DD8  48 00 4D 45 */	bl "load_param<f,f>__10auto_tweakFRffffP16xModelAssetParamUiPCc"
.L_80149CFC:
/* 80149CFC 00146DDC  57 A0 06 3F */	clrlwi. r0, r29, 24
/* 80149D00 00146DE0  41 82 00 34 */	beq .L_80149D34
/* 80149D04 00146DE4  38 00 00 00 */	li r0, 0x0
/* 80149D08 00146DE8  3C 60 80 27 */	lis r3, "@stringBase0"@ha
/* 80149D0C 00146DEC  38 83 D8 B0 */	addi r4, r3, "@stringBase0"@l
/* 80149D10 00146DF0  90 1C 01 F4 */	stw r0, 0x1f4(r28)
/* 80149D14 00146DF4  7F C7 F3 78 */	mr r7, r30
/* 80149D18 00146DF8  7F E8 FB 78 */	mr r8, r31
/* 80149D1C 00146DFC  38 7C 01 F4 */	addi r3, r28, 0x1f4
/* 80149D20 00146E00  39 24 0B 2C */	addi r9, r4, 0xb2c
/* 80149D24 00146E04  38 80 00 01 */	li r4, 0x1
/* 80149D28 00146E08  38 A0 00 00 */	li r5, 0x0
/* 80149D2C 00146E0C  38 C0 03 E8 */	li r6, 0x3e8
/* 80149D30 00146E10  48 00 4D B5 */	bl "load_param<i,i>__10auto_tweakFRiiiiP16xModelAssetParamUiPCc"
.L_80149D34:
/* 80149D34 00146E14  57 A0 06 3F */	clrlwi. r0, r29, 24
/* 80149D38 00146E18  41 82 00 34 */	beq .L_80149D6C
/* 80149D3C 00146E1C  C0 02 A6 30 */	lfs f0, "@1868"@sda21(r2)
/* 80149D40 00146E20  3C 60 80 27 */	lis r3, "@stringBase0"@ha
/* 80149D44 00146E24  38 C3 D8 B0 */	addi r6, r3, "@stringBase0"@l
/* 80149D48 00146E28  7F C4 F3 78 */	mr r4, r30
/* 80149D4C 00146E2C  D0 1C 01 F8 */	stfs f0, 0x1f8(r28)
/* 80149D50 00146E30  7F E5 FB 78 */	mr r5, r31
/* 80149D54 00146E34  38 7C 01 F8 */	addi r3, r28, 0x1f8
/* 80149D58 00146E38  38 C6 0B 49 */	addi r6, r6, 0xb49
/* 80149D5C 00146E3C  C0 22 A6 30 */	lfs f1, "@1868"@sda21(r2)
/* 80149D60 00146E40  C0 42 A6 34 */	lfs f2, "@1869"@sda21(r2)
/* 80149D64 00146E44  C0 62 A6 90 */	lfs f3, "@2407"@sda21(r2)
/* 80149D68 00146E48  48 00 4C D5 */	bl "load_param<f,f>__10auto_tweakFRffffP16xModelAssetParamUiPCc"
.L_80149D6C:
/* 80149D6C 00146E4C  57 A0 06 3F */	clrlwi. r0, r29, 24
/* 80149D70 00146E50  41 82 00 34 */	beq .L_80149DA4
/* 80149D74 00146E54  C0 02 A6 34 */	lfs f0, "@1869"@sda21(r2)
/* 80149D78 00146E58  3C 60 80 27 */	lis r3, "@stringBase0"@ha
/* 80149D7C 00146E5C  38 C3 D8 B0 */	addi r6, r3, "@stringBase0"@l
/* 80149D80 00146E60  7F C4 F3 78 */	mr r4, r30
/* 80149D84 00146E64  D0 1C 01 FC */	stfs f0, 0x1fc(r28)
/* 80149D88 00146E68  7F E5 FB 78 */	mr r5, r31
/* 80149D8C 00146E6C  38 7C 01 FC */	addi r3, r28, 0x1fc
/* 80149D90 00146E70  38 C6 0B 63 */	addi r6, r6, 0xb63
/* 80149D94 00146E74  C0 22 A6 30 */	lfs f1, "@1868"@sda21(r2)
/* 80149D98 00146E78  C0 42 A6 34 */	lfs f2, "@1869"@sda21(r2)
/* 80149D9C 00146E7C  C0 62 A6 90 */	lfs f3, "@2407"@sda21(r2)
/* 80149DA0 00146E80  48 00 4C 9D */	bl "load_param<f,f>__10auto_tweakFRffffP16xModelAssetParamUiPCc"
.L_80149DA4:
/* 80149DA4 00146E84  57 A0 06 3F */	clrlwi. r0, r29, 24
/* 80149DA8 00146E88  41 82 00 34 */	beq .L_80149DDC
/* 80149DAC 00146E8C  C0 02 A6 98 */	lfs f0, "@2409"@sda21(r2)
/* 80149DB0 00146E90  3C 60 80 27 */	lis r3, "@stringBase0"@ha
/* 80149DB4 00146E94  38 C3 D8 B0 */	addi r6, r3, "@stringBase0"@l
/* 80149DB8 00146E98  7F C4 F3 78 */	mr r4, r30
/* 80149DBC 00146E9C  D0 1C 02 00 */	stfs f0, 0x200(r28)
/* 80149DC0 00146EA0  7F E5 FB 78 */	mr r5, r31
/* 80149DC4 00146EA4  38 7C 02 00 */	addi r3, r28, 0x200
/* 80149DC8 00146EA8  38 C6 0B 7C */	addi r6, r6, 0xb7c
/* 80149DCC 00146EAC  C0 22 A6 30 */	lfs f1, "@1868"@sda21(r2)
/* 80149DD0 00146EB0  C0 42 A6 34 */	lfs f2, "@1869"@sda21(r2)
/* 80149DD4 00146EB4  C0 62 A6 5C */	lfs f3, "@2084"@sda21(r2)
/* 80149DD8 00146EB8  48 00 4C 65 */	bl "load_param<f,f>__10auto_tweakFRffffP16xModelAssetParamUiPCc"
.L_80149DDC:
/* 80149DDC 00146EBC  57 A0 06 3F */	clrlwi. r0, r29, 24
/* 80149DE0 00146EC0  41 82 00 34 */	beq .L_80149E14
/* 80149DE4 00146EC4  C0 02 A7 30 */	lfs f0, "@2447"@sda21(r2)
/* 80149DE8 00146EC8  3C 60 80 27 */	lis r3, "@stringBase0"@ha
/* 80149DEC 00146ECC  38 C3 D8 B0 */	addi r6, r3, "@stringBase0"@l
/* 80149DF0 00146ED0  7F C4 F3 78 */	mr r4, r30
/* 80149DF4 00146ED4  D0 1C 02 04 */	stfs f0, 0x204(r28)
/* 80149DF8 00146ED8  7F E5 FB 78 */	mr r5, r31
/* 80149DFC 00146EDC  38 7C 02 04 */	addi r3, r28, 0x204
/* 80149E00 00146EE0  38 C6 0B 9C */	addi r6, r6, 0xb9c
/* 80149E04 00146EE4  C0 22 A6 30 */	lfs f1, "@1868"@sda21(r2)
/* 80149E08 00146EE8  C0 42 A6 34 */	lfs f2, "@1869"@sda21(r2)
/* 80149E0C 00146EEC  C0 62 A6 5C */	lfs f3, "@2084"@sda21(r2)
/* 80149E10 00146EF0  48 00 4C 2D */	bl "load_param<f,f>__10auto_tweakFRffffP16xModelAssetParamUiPCc"
.L_80149E14:
/* 80149E14 00146EF4  57 A0 06 3F */	clrlwi. r0, r29, 24
/* 80149E18 00146EF8  41 82 00 34 */	beq .L_80149E4C
/* 80149E1C 00146EFC  38 00 00 00 */	li r0, 0x0
/* 80149E20 00146F00  3C 60 80 27 */	lis r3, "@stringBase0"@ha
/* 80149E24 00146F04  38 83 D8 B0 */	addi r4, r3, "@stringBase0"@l
/* 80149E28 00146F08  90 1C 02 08 */	stw r0, 0x208(r28)
/* 80149E2C 00146F0C  7F C7 F3 78 */	mr r7, r30
/* 80149E30 00146F10  7F E8 FB 78 */	mr r8, r31
/* 80149E34 00146F14  38 7C 02 08 */	addi r3, r28, 0x208
/* 80149E38 00146F18  39 24 0B BC */	addi r9, r4, 0xbbc
/* 80149E3C 00146F1C  38 80 00 01 */	li r4, 0x1
/* 80149E40 00146F20  38 A0 00 00 */	li r5, 0x0
/* 80149E44 00146F24  38 C0 03 E8 */	li r6, 0x3e8
/* 80149E48 00146F28  48 00 4C 9D */	bl "load_param<i,i>__10auto_tweakFRiiiiP16xModelAssetParamUiPCc"
.L_80149E4C:
/* 80149E4C 00146F2C  57 A0 06 3F */	clrlwi. r0, r29, 24
/* 80149E50 00146F30  41 82 00 34 */	beq .L_80149E84
/* 80149E54 00146F34  C0 02 A6 30 */	lfs f0, "@1868"@sda21(r2)
/* 80149E58 00146F38  3C 60 80 27 */	lis r3, "@stringBase0"@ha
/* 80149E5C 00146F3C  38 C3 D8 B0 */	addi r6, r3, "@stringBase0"@l
/* 80149E60 00146F40  7F C4 F3 78 */	mr r4, r30
/* 80149E64 00146F44  D0 1C 02 0C */	stfs f0, 0x20c(r28)
/* 80149E68 00146F48  7F E5 FB 78 */	mr r5, r31
/* 80149E6C 00146F4C  38 7C 02 0C */	addi r3, r28, 0x20c
/* 80149E70 00146F50  38 C6 0B D8 */	addi r6, r6, 0xbd8
/* 80149E74 00146F54  C0 22 A6 30 */	lfs f1, "@1868"@sda21(r2)
/* 80149E78 00146F58  C0 42 A6 34 */	lfs f2, "@1869"@sda21(r2)
/* 80149E7C 00146F5C  C0 62 A6 90 */	lfs f3, "@2407"@sda21(r2)
/* 80149E80 00146F60  48 00 4B BD */	bl "load_param<f,f>__10auto_tweakFRffffP16xModelAssetParamUiPCc"
.L_80149E84:
/* 80149E84 00146F64  57 A0 06 3F */	clrlwi. r0, r29, 24
/* 80149E88 00146F68  41 82 00 34 */	beq .L_80149EBC
/* 80149E8C 00146F6C  C0 02 A6 34 */	lfs f0, "@1869"@sda21(r2)
/* 80149E90 00146F70  3C 60 80 27 */	lis r3, "@stringBase0"@ha
/* 80149E94 00146F74  38 C3 D8 B0 */	addi r6, r3, "@stringBase0"@l
/* 80149E98 00146F78  7F C4 F3 78 */	mr r4, r30
/* 80149E9C 00146F7C  D0 1C 02 10 */	stfs f0, 0x210(r28)
/* 80149EA0 00146F80  7F E5 FB 78 */	mr r5, r31
/* 80149EA4 00146F84  38 7C 02 10 */	addi r3, r28, 0x210
/* 80149EA8 00146F88  38 C6 0B F2 */	addi r6, r6, 0xbf2
/* 80149EAC 00146F8C  C0 22 A6 30 */	lfs f1, "@1868"@sda21(r2)
/* 80149EB0 00146F90  C0 42 A6 34 */	lfs f2, "@1869"@sda21(r2)
/* 80149EB4 00146F94  C0 62 A6 90 */	lfs f3, "@2407"@sda21(r2)
/* 80149EB8 00146F98  48 00 4B 85 */	bl "load_param<f,f>__10auto_tweakFRffffP16xModelAssetParamUiPCc"
.L_80149EBC:
/* 80149EBC 00146F9C  57 A0 06 3F */	clrlwi. r0, r29, 24
/* 80149EC0 00146FA0  41 82 00 34 */	beq .L_80149EF4
/* 80149EC4 00146FA4  C0 02 A6 98 */	lfs f0, "@2409"@sda21(r2)
/* 80149EC8 00146FA8  3C 60 80 27 */	lis r3, "@stringBase0"@ha
/* 80149ECC 00146FAC  38 C3 D8 B0 */	addi r6, r3, "@stringBase0"@l
/* 80149ED0 00146FB0  7F C4 F3 78 */	mr r4, r30
/* 80149ED4 00146FB4  D0 1C 02 14 */	stfs f0, 0x214(r28)
/* 80149ED8 00146FB8  7F E5 FB 78 */	mr r5, r31
/* 80149EDC 00146FBC  38 7C 02 14 */	addi r3, r28, 0x214
/* 80149EE0 00146FC0  38 C6 0C 0B */	addi r6, r6, 0xc0b
/* 80149EE4 00146FC4  C0 22 A6 30 */	lfs f1, "@1868"@sda21(r2)
/* 80149EE8 00146FC8  C0 42 A6 34 */	lfs f2, "@1869"@sda21(r2)
/* 80149EEC 00146FCC  C0 62 A6 5C */	lfs f3, "@2084"@sda21(r2)
/* 80149EF0 00146FD0  48 00 4B 4D */	bl "load_param<f,f>__10auto_tweakFRffffP16xModelAssetParamUiPCc"
.L_80149EF4:
/* 80149EF4 00146FD4  57 A0 06 3F */	clrlwi. r0, r29, 24
/* 80149EF8 00146FD8  41 82 00 34 */	beq .L_80149F2C
/* 80149EFC 00146FDC  C0 02 A7 30 */	lfs f0, "@2447"@sda21(r2)
/* 80149F00 00146FE0  3C 60 80 27 */	lis r3, "@stringBase0"@ha
/* 80149F04 00146FE4  38 C3 D8 B0 */	addi r6, r3, "@stringBase0"@l
/* 80149F08 00146FE8  7F C4 F3 78 */	mr r4, r30
/* 80149F0C 00146FEC  D0 1C 02 18 */	stfs f0, 0x218(r28)
/* 80149F10 00146FF0  7F E5 FB 78 */	mr r5, r31
/* 80149F14 00146FF4  38 7C 02 18 */	addi r3, r28, 0x218
/* 80149F18 00146FF8  38 C6 0C 2B */	addi r6, r6, 0xc2b
/* 80149F1C 00146FFC  C0 22 A6 30 */	lfs f1, "@1868"@sda21(r2)
/* 80149F20 00147000  C0 42 A6 34 */	lfs f2, "@1869"@sda21(r2)
/* 80149F24 00147004  C0 62 A6 5C */	lfs f3, "@2084"@sda21(r2)
/* 80149F28 00147008  48 00 4B 15 */	bl "load_param<f,f>__10auto_tweakFRffffP16xModelAssetParamUiPCc"
.L_80149F2C:
/* 80149F2C 0014700C  57 A0 06 3F */	clrlwi. r0, r29, 24
/* 80149F30 00147010  41 82 00 34 */	beq .L_80149F64
/* 80149F34 00147014  38 00 00 00 */	li r0, 0x0
/* 80149F38 00147018  3C 60 80 27 */	lis r3, "@stringBase0"@ha
/* 80149F3C 0014701C  38 83 D8 B0 */	addi r4, r3, "@stringBase0"@l
/* 80149F40 00147020  90 1C 02 1C */	stw r0, 0x21c(r28)
/* 80149F44 00147024  7F C7 F3 78 */	mr r7, r30
/* 80149F48 00147028  7F E8 FB 78 */	mr r8, r31
/* 80149F4C 0014702C  38 7C 02 1C */	addi r3, r28, 0x21c
/* 80149F50 00147030  39 24 0C 4B */	addi r9, r4, 0xc4b
/* 80149F54 00147034  38 80 00 01 */	li r4, 0x1
/* 80149F58 00147038  38 A0 00 00 */	li r5, 0x0
/* 80149F5C 0014703C  38 C0 03 E8 */	li r6, 0x3e8
/* 80149F60 00147040  48 00 4B 85 */	bl "load_param<i,i>__10auto_tweakFRiiiiP16xModelAssetParamUiPCc"
.L_80149F64:
/* 80149F64 00147044  57 A0 06 3F */	clrlwi. r0, r29, 24
/* 80149F68 00147048  41 82 00 34 */	beq .L_80149F9C
/* 80149F6C 0014704C  C0 02 A6 30 */	lfs f0, "@1868"@sda21(r2)
/* 80149F70 00147050  3C 60 80 27 */	lis r3, "@stringBase0"@ha
/* 80149F74 00147054  38 C3 D8 B0 */	addi r6, r3, "@stringBase0"@l
/* 80149F78 00147058  7F C4 F3 78 */	mr r4, r30
/* 80149F7C 0014705C  D0 1C 02 20 */	stfs f0, 0x220(r28)
/* 80149F80 00147060  7F E5 FB 78 */	mr r5, r31
/* 80149F84 00147064  38 7C 02 20 */	addi r3, r28, 0x220
/* 80149F88 00147068  38 C6 0C 67 */	addi r6, r6, 0xc67
/* 80149F8C 0014706C  C0 22 A6 30 */	lfs f1, "@1868"@sda21(r2)
/* 80149F90 00147070  C0 42 A6 34 */	lfs f2, "@1869"@sda21(r2)
/* 80149F94 00147074  C0 62 A6 90 */	lfs f3, "@2407"@sda21(r2)
/* 80149F98 00147078  48 00 4A A5 */	bl "load_param<f,f>__10auto_tweakFRffffP16xModelAssetParamUiPCc"
.L_80149F9C:
/* 80149F9C 0014707C  57 A0 06 3F */	clrlwi. r0, r29, 24
/* 80149FA0 00147080  41 82 00 34 */	beq .L_80149FD4
/* 80149FA4 00147084  C0 02 A6 34 */	lfs f0, "@1869"@sda21(r2)
/* 80149FA8 00147088  3C 60 80 27 */	lis r3, "@stringBase0"@ha
/* 80149FAC 0014708C  38 C3 D8 B0 */	addi r6, r3, "@stringBase0"@l
/* 80149FB0 00147090  7F C4 F3 78 */	mr r4, r30
/* 80149FB4 00147094  D0 1C 02 24 */	stfs f0, 0x224(r28)
/* 80149FB8 00147098  7F E5 FB 78 */	mr r5, r31
/* 80149FBC 0014709C  38 7C 02 24 */	addi r3, r28, 0x224
/* 80149FC0 001470A0  38 C6 0C 80 */	addi r6, r6, 0xc80
/* 80149FC4 001470A4  C0 22 A6 30 */	lfs f1, "@1868"@sda21(r2)
/* 80149FC8 001470A8  C0 42 A6 34 */	lfs f2, "@1869"@sda21(r2)
/* 80149FCC 001470AC  C0 62 A6 90 */	lfs f3, "@2407"@sda21(r2)
/* 80149FD0 001470B0  48 00 4A 6D */	bl "load_param<f,f>__10auto_tweakFRffffP16xModelAssetParamUiPCc"
.L_80149FD4:
/* 80149FD4 001470B4  57 A0 06 3F */	clrlwi. r0, r29, 24
/* 80149FD8 001470B8  41 82 00 34 */	beq .L_8014A00C
/* 80149FDC 001470BC  C0 02 A6 90 */	lfs f0, "@2407"@sda21(r2)
/* 80149FE0 001470C0  3C 60 80 27 */	lis r3, "@stringBase0"@ha
/* 80149FE4 001470C4  38 C3 D8 B0 */	addi r6, r3, "@stringBase0"@l
/* 80149FE8 001470C8  7F C4 F3 78 */	mr r4, r30
/* 80149FEC 001470CC  D0 1C 02 28 */	stfs f0, 0x228(r28)
/* 80149FF0 001470D0  7F E5 FB 78 */	mr r5, r31
/* 80149FF4 001470D4  38 7C 02 28 */	addi r3, r28, 0x228
/* 80149FF8 001470D8  38 C6 0C 98 */	addi r6, r6, 0xc98
/* 80149FFC 001470DC  C0 22 A6 30 */	lfs f1, "@1868"@sda21(r2)
/* 8014A000 001470E0  C0 42 A6 34 */	lfs f2, "@1869"@sda21(r2)
/* 8014A004 001470E4  C0 62 A6 5C */	lfs f3, "@2084"@sda21(r2)
/* 8014A008 001470E8  48 00 4A 35 */	bl "load_param<f,f>__10auto_tweakFRffffP16xModelAssetParamUiPCc"
.L_8014A00C:
/* 8014A00C 001470EC  57 A0 06 3F */	clrlwi. r0, r29, 24
/* 8014A010 001470F0  41 82 00 34 */	beq .L_8014A044
/* 8014A014 001470F4  C0 02 A7 34 */	lfs f0, "@2448"@sda21(r2)
/* 8014A018 001470F8  3C 60 80 27 */	lis r3, "@stringBase0"@ha
/* 8014A01C 001470FC  38 C3 D8 B0 */	addi r6, r3, "@stringBase0"@l
/* 8014A020 00147100  7F C4 F3 78 */	mr r4, r30
/* 8014A024 00147104  D0 1C 02 2C */	stfs f0, 0x22c(r28)
/* 8014A028 00147108  7F E5 FB 78 */	mr r5, r31
/* 8014A02C 0014710C  38 7C 02 2C */	addi r3, r28, 0x22c
/* 8014A030 00147110  38 C6 0C B7 */	addi r6, r6, 0xcb7
/* 8014A034 00147114  C0 22 A6 30 */	lfs f1, "@1868"@sda21(r2)
/* 8014A038 00147118  C0 42 A6 34 */	lfs f2, "@1869"@sda21(r2)
/* 8014A03C 0014711C  C0 62 A6 5C */	lfs f3, "@2084"@sda21(r2)
/* 8014A040 00147120  48 00 49 FD */	bl "load_param<f,f>__10auto_tweakFRffffP16xModelAssetParamUiPCc"
.L_8014A044:
/* 8014A044 00147124  57 A0 06 3F */	clrlwi. r0, r29, 24
/* 8014A048 00147128  41 82 00 34 */	beq .L_8014A07C
/* 8014A04C 0014712C  38 00 00 00 */	li r0, 0x0
/* 8014A050 00147130  3C 60 80 27 */	lis r3, "@stringBase0"@ha
/* 8014A054 00147134  38 83 D8 B0 */	addi r4, r3, "@stringBase0"@l
/* 8014A058 00147138  90 1C 02 30 */	stw r0, 0x230(r28)
/* 8014A05C 0014713C  7F C7 F3 78 */	mr r7, r30
/* 8014A060 00147140  7F E8 FB 78 */	mr r8, r31
/* 8014A064 00147144  38 7C 02 30 */	addi r3, r28, 0x230
/* 8014A068 00147148  39 24 0C D6 */	addi r9, r4, 0xcd6
/* 8014A06C 0014714C  38 80 00 01 */	li r4, 0x1
/* 8014A070 00147150  38 A0 00 00 */	li r5, 0x0
/* 8014A074 00147154  38 C0 03 E8 */	li r6, 0x3e8
/* 8014A078 00147158  48 00 4A 6D */	bl "load_param<i,i>__10auto_tweakFRiiiiP16xModelAssetParamUiPCc"
.L_8014A07C:
/* 8014A07C 0014715C  57 A0 06 3F */	clrlwi. r0, r29, 24
/* 8014A080 00147160  41 82 00 34 */	beq .L_8014A0B4
/* 8014A084 00147164  C0 02 A6 30 */	lfs f0, "@1868"@sda21(r2)
/* 8014A088 00147168  3C 60 80 27 */	lis r3, "@stringBase0"@ha
/* 8014A08C 0014716C  38 C3 D8 B0 */	addi r6, r3, "@stringBase0"@l
/* 8014A090 00147170  7F C4 F3 78 */	mr r4, r30
/* 8014A094 00147174  D0 1C 02 34 */	stfs f0, 0x234(r28)
/* 8014A098 00147178  7F E5 FB 78 */	mr r5, r31
/* 8014A09C 0014717C  38 7C 02 34 */	addi r3, r28, 0x234
/* 8014A0A0 00147180  38 C6 0C F1 */	addi r6, r6, 0xcf1
/* 8014A0A4 00147184  C0 22 A6 30 */	lfs f1, "@1868"@sda21(r2)
/* 8014A0A8 00147188  C0 42 A6 34 */	lfs f2, "@1869"@sda21(r2)
/* 8014A0AC 0014718C  C0 62 A6 90 */	lfs f3, "@2407"@sda21(r2)
/* 8014A0B0 00147190  48 00 49 8D */	bl "load_param<f,f>__10auto_tweakFRffffP16xModelAssetParamUiPCc"
.L_8014A0B4:
/* 8014A0B4 00147194  57 A0 06 3F */	clrlwi. r0, r29, 24
/* 8014A0B8 00147198  41 82 00 34 */	beq .L_8014A0EC
/* 8014A0BC 0014719C  C0 02 A6 90 */	lfs f0, "@2407"@sda21(r2)
/* 8014A0C0 001471A0  3C 60 80 27 */	lis r3, "@stringBase0"@ha
/* 8014A0C4 001471A4  38 C3 D8 B0 */	addi r6, r3, "@stringBase0"@l
/* 8014A0C8 001471A8  7F C4 F3 78 */	mr r4, r30
/* 8014A0CC 001471AC  D0 1C 02 3C */	stfs f0, 0x23c(r28)
/* 8014A0D0 001471B0  7F E5 FB 78 */	mr r5, r31
/* 8014A0D4 001471B4  38 7C 02 3C */	addi r3, r28, 0x23c
/* 8014A0D8 001471B8  38 C6 0D 0A */	addi r6, r6, 0xd0a
/* 8014A0DC 001471BC  C0 22 A6 30 */	lfs f1, "@1868"@sda21(r2)
/* 8014A0E0 001471C0  C0 42 A6 34 */	lfs f2, "@1869"@sda21(r2)
/* 8014A0E4 001471C4  C0 62 A6 5C */	lfs f3, "@2084"@sda21(r2)
/* 8014A0E8 001471C8  48 00 49 55 */	bl "load_param<f,f>__10auto_tweakFRffffP16xModelAssetParamUiPCc"
.L_8014A0EC:
/* 8014A0EC 001471CC  57 A0 06 3F */	clrlwi. r0, r29, 24
/* 8014A0F0 001471D0  41 82 00 34 */	beq .L_8014A124
/* 8014A0F4 001471D4  C0 02 A7 38 */	lfs f0, "@2449"@sda21(r2)
/* 8014A0F8 001471D8  3C 60 80 27 */	lis r3, "@stringBase0"@ha
/* 8014A0FC 001471DC  38 C3 D8 B0 */	addi r6, r3, "@stringBase0"@l
/* 8014A100 001471E0  7F C4 F3 78 */	mr r4, r30
/* 8014A104 001471E4  D0 1C 02 40 */	stfs f0, 0x240(r28)
/* 8014A108 001471E8  7F E5 FB 78 */	mr r5, r31
/* 8014A10C 001471EC  38 7C 02 40 */	addi r3, r28, 0x240
/* 8014A110 001471F0  38 C6 0D 29 */	addi r6, r6, 0xd29
/* 8014A114 001471F4  C0 22 A6 30 */	lfs f1, "@1868"@sda21(r2)
/* 8014A118 001471F8  C0 42 A6 34 */	lfs f2, "@1869"@sda21(r2)
/* 8014A11C 001471FC  C0 62 A6 5C */	lfs f3, "@2084"@sda21(r2)
/* 8014A120 00147200  48 00 49 1D */	bl "load_param<f,f>__10auto_tweakFRffffP16xModelAssetParamUiPCc"
.L_8014A124:
/* 8014A124 00147204  57 A0 06 3F */	clrlwi. r0, r29, 24
/* 8014A128 00147208  41 82 00 34 */	beq .L_8014A15C
/* 8014A12C 0014720C  38 00 00 00 */	li r0, 0x0
/* 8014A130 00147210  3C 60 80 27 */	lis r3, "@stringBase0"@ha
/* 8014A134 00147214  38 83 D8 B0 */	addi r4, r3, "@stringBase0"@l
/* 8014A138 00147218  90 1C 02 44 */	stw r0, 0x244(r28)
/* 8014A13C 0014721C  7F C7 F3 78 */	mr r7, r30
/* 8014A140 00147220  7F E8 FB 78 */	mr r8, r31
/* 8014A144 00147224  38 7C 02 44 */	addi r3, r28, 0x244
/* 8014A148 00147228  39 24 0D 48 */	addi r9, r4, 0xd48
/* 8014A14C 0014722C  38 80 00 01 */	li r4, 0x1
/* 8014A150 00147230  38 A0 00 00 */	li r5, 0x0
/* 8014A154 00147234  38 C0 03 E8 */	li r6, 0x3e8
/* 8014A158 00147238  48 00 49 8D */	bl "load_param<i,i>__10auto_tweakFRiiiiP16xModelAssetParamUiPCc"
.L_8014A15C:
/* 8014A15C 0014723C  57 A0 06 3F */	clrlwi. r0, r29, 24
/* 8014A160 00147240  41 82 00 34 */	beq .L_8014A194
/* 8014A164 00147244  C0 02 A6 50 */	lfs f0, "@1987"@sda21(r2)
/* 8014A168 00147248  3C 60 80 27 */	lis r3, "@stringBase0"@ha
/* 8014A16C 0014724C  38 C3 D8 B0 */	addi r6, r3, "@stringBase0"@l
/* 8014A170 00147250  7F C4 F3 78 */	mr r4, r30
/* 8014A174 00147254  D0 1C 02 48 */	stfs f0, 0x248(r28)
/* 8014A178 00147258  7F E5 FB 78 */	mr r5, r31
/* 8014A17C 0014725C  38 7C 02 48 */	addi r3, r28, 0x248
/* 8014A180 00147260  38 C6 0D 63 */	addi r6, r6, 0xd63
/* 8014A184 00147264  C0 22 A6 30 */	lfs f1, "@1868"@sda21(r2)
/* 8014A188 00147268  C0 42 A6 34 */	lfs f2, "@1869"@sda21(r2)
/* 8014A18C 0014726C  C0 62 A6 90 */	lfs f3, "@2407"@sda21(r2)
/* 8014A190 00147270  48 00 48 AD */	bl "load_param<f,f>__10auto_tweakFRffffP16xModelAssetParamUiPCc"
.L_8014A194:
/* 8014A194 00147274  57 A0 06 3F */	clrlwi. r0, r29, 24
/* 8014A198 00147278  41 82 00 34 */	beq .L_8014A1CC
/* 8014A19C 0014727C  C0 02 A6 34 */	lfs f0, "@1869"@sda21(r2)
/* 8014A1A0 00147280  3C 60 80 27 */	lis r3, "@stringBase0"@ha
/* 8014A1A4 00147284  38 C3 D8 B0 */	addi r6, r3, "@stringBase0"@l
/* 8014A1A8 00147288  7F C4 F3 78 */	mr r4, r30
/* 8014A1AC 0014728C  D0 1C 02 50 */	stfs f0, 0x250(r28)
/* 8014A1B0 00147290  7F E5 FB 78 */	mr r5, r31
/* 8014A1B4 00147294  38 7C 02 50 */	addi r3, r28, 0x250
/* 8014A1B8 00147298  38 C6 0D 81 */	addi r6, r6, 0xd81
/* 8014A1BC 0014729C  C0 22 A6 30 */	lfs f1, "@1868"@sda21(r2)
/* 8014A1C0 001472A0  C0 42 A6 34 */	lfs f2, "@1869"@sda21(r2)
/* 8014A1C4 001472A4  C0 62 A6 5C */	lfs f3, "@2084"@sda21(r2)
/* 8014A1C8 001472A8  48 00 48 75 */	bl "load_param<f,f>__10auto_tweakFRffffP16xModelAssetParamUiPCc"
.L_8014A1CC:
/* 8014A1CC 001472AC  57 A0 06 3F */	clrlwi. r0, r29, 24
/* 8014A1D0 001472B0  41 82 00 34 */	beq .L_8014A204
/* 8014A1D4 001472B4  C0 02 A6 DC */	lfs f0, "@2426"@sda21(r2)
/* 8014A1D8 001472B8  3C 60 80 27 */	lis r3, "@stringBase0"@ha
/* 8014A1DC 001472BC  38 C3 D8 B0 */	addi r6, r3, "@stringBase0"@l
/* 8014A1E0 001472C0  7F C4 F3 78 */	mr r4, r30
/* 8014A1E4 001472C4  D0 1C 02 54 */	stfs f0, 0x254(r28)
/* 8014A1E8 001472C8  7F E5 FB 78 */	mr r5, r31
/* 8014A1EC 001472CC  38 7C 02 54 */	addi r3, r28, 0x254
/* 8014A1F0 001472D0  38 C6 0D A5 */	addi r6, r6, 0xda5
/* 8014A1F4 001472D4  C0 22 A6 30 */	lfs f1, "@1868"@sda21(r2)
/* 8014A1F8 001472D8  C0 42 A6 34 */	lfs f2, "@1869"@sda21(r2)
/* 8014A1FC 001472DC  C0 62 A6 5C */	lfs f3, "@2084"@sda21(r2)
/* 8014A200 001472E0  48 00 48 3D */	bl "load_param<f,f>__10auto_tweakFRffffP16xModelAssetParamUiPCc"
.L_8014A204:
/* 8014A204 001472E4  57 A0 06 3F */	clrlwi. r0, r29, 24
/* 8014A208 001472E8  41 82 00 34 */	beq .L_8014A23C
/* 8014A20C 001472EC  38 00 00 00 */	li r0, 0x0
/* 8014A210 001472F0  3C 60 80 27 */	lis r3, "@stringBase0"@ha
/* 8014A214 001472F4  38 83 D8 B0 */	addi r4, r3, "@stringBase0"@l
/* 8014A218 001472F8  90 1C 02 58 */	stw r0, 0x258(r28)
/* 8014A21C 001472FC  7F C7 F3 78 */	mr r7, r30
/* 8014A220 00147300  7F E8 FB 78 */	mr r8, r31
/* 8014A224 00147304  38 7C 02 58 */	addi r3, r28, 0x258
/* 8014A228 00147308  39 24 0D C9 */	addi r9, r4, 0xdc9
/* 8014A22C 0014730C  38 80 00 01 */	li r4, 0x1
/* 8014A230 00147310  38 A0 00 00 */	li r5, 0x0
/* 8014A234 00147314  38 C0 03 E8 */	li r6, 0x3e8
/* 8014A238 00147318  48 00 48 AD */	bl "load_param<i,i>__10auto_tweakFRiiiiP16xModelAssetParamUiPCc"
.L_8014A23C:
/* 8014A23C 0014731C  57 A0 06 3F */	clrlwi. r0, r29, 24
/* 8014A240 00147320  41 82 00 34 */	beq .L_8014A274
/* 8014A244 00147324  C0 02 A6 30 */	lfs f0, "@1868"@sda21(r2)
/* 8014A248 00147328  3C 60 80 27 */	lis r3, "@stringBase0"@ha
/* 8014A24C 0014732C  38 C3 D8 B0 */	addi r6, r3, "@stringBase0"@l
/* 8014A250 00147330  7F C4 F3 78 */	mr r4, r30
/* 8014A254 00147334  D0 1C 02 5C */	stfs f0, 0x25c(r28)
/* 8014A258 00147338  7F E5 FB 78 */	mr r5, r31
/* 8014A25C 0014733C  38 7C 02 5C */	addi r3, r28, 0x25c
/* 8014A260 00147340  38 C6 0D E9 */	addi r6, r6, 0xde9
/* 8014A264 00147344  C0 22 A6 30 */	lfs f1, "@1868"@sda21(r2)
/* 8014A268 00147348  C0 42 A6 34 */	lfs f2, "@1869"@sda21(r2)
/* 8014A26C 0014734C  C0 62 A6 90 */	lfs f3, "@2407"@sda21(r2)
/* 8014A270 00147350  48 00 47 CD */	bl "load_param<f,f>__10auto_tweakFRffffP16xModelAssetParamUiPCc"
.L_8014A274:
/* 8014A274 00147354  57 A0 06 3F */	clrlwi. r0, r29, 24
/* 8014A278 00147358  41 82 00 34 */	beq .L_8014A2AC
/* 8014A27C 0014735C  C0 02 A6 34 */	lfs f0, "@1869"@sda21(r2)
/* 8014A280 00147360  3C 60 80 27 */	lis r3, "@stringBase0"@ha
/* 8014A284 00147364  38 C3 D8 B0 */	addi r6, r3, "@stringBase0"@l
/* 8014A288 00147368  7F C4 F3 78 */	mr r4, r30
/* 8014A28C 0014736C  D0 1C 02 60 */	stfs f0, 0x260(r28)
/* 8014A290 00147370  7F E5 FB 78 */	mr r5, r31
/* 8014A294 00147374  38 7C 02 60 */	addi r3, r28, 0x260
/* 8014A298 00147378  38 C6 0E 02 */	addi r6, r6, 0xe02
/* 8014A29C 0014737C  C0 22 A6 30 */	lfs f1, "@1868"@sda21(r2)
/* 8014A2A0 00147380  C0 42 A6 34 */	lfs f2, "@1869"@sda21(r2)
/* 8014A2A4 00147384  C0 62 A6 90 */	lfs f3, "@2407"@sda21(r2)
/* 8014A2A8 00147388  48 00 47 95 */	bl "load_param<f,f>__10auto_tweakFRffffP16xModelAssetParamUiPCc"
.L_8014A2AC:
/* 8014A2AC 0014738C  57 A0 06 3F */	clrlwi. r0, r29, 24
/* 8014A2B0 00147390  41 82 00 34 */	beq .L_8014A2E4
/* 8014A2B4 00147394  C0 02 A6 90 */	lfs f0, "@2407"@sda21(r2)
/* 8014A2B8 00147398  3C 60 80 27 */	lis r3, "@stringBase0"@ha
/* 8014A2BC 0014739C  38 C3 D8 B0 */	addi r6, r3, "@stringBase0"@l
/* 8014A2C0 001473A0  7F C4 F3 78 */	mr r4, r30
/* 8014A2C4 001473A4  D0 1C 02 64 */	stfs f0, 0x264(r28)
/* 8014A2C8 001473A8  7F E5 FB 78 */	mr r5, r31
/* 8014A2CC 001473AC  38 7C 02 64 */	addi r3, r28, 0x264
/* 8014A2D0 001473B0  38 C6 0E 1A */	addi r6, r6, 0xe1a
/* 8014A2D4 001473B4  C0 22 A6 30 */	lfs f1, "@1868"@sda21(r2)
/* 8014A2D8 001473B8  C0 42 A6 34 */	lfs f2, "@1869"@sda21(r2)
/* 8014A2DC 001473BC  C0 62 A6 5C */	lfs f3, "@2084"@sda21(r2)
/* 8014A2E0 001473C0  48 00 47 5D */	bl "load_param<f,f>__10auto_tweakFRffffP16xModelAssetParamUiPCc"
.L_8014A2E4:
/* 8014A2E4 001473C4  57 A0 06 3F */	clrlwi. r0, r29, 24
/* 8014A2E8 001473C8  41 82 00 34 */	beq .L_8014A31C
/* 8014A2EC 001473CC  C0 02 A7 34 */	lfs f0, "@2448"@sda21(r2)
/* 8014A2F0 001473D0  3C 60 80 27 */	lis r3, "@stringBase0"@ha
/* 8014A2F4 001473D4  38 C3 D8 B0 */	addi r6, r3, "@stringBase0"@l
/* 8014A2F8 001473D8  7F C4 F3 78 */	mr r4, r30
/* 8014A2FC 001473DC  D0 1C 02 68 */	stfs f0, 0x268(r28)
/* 8014A300 001473E0  7F E5 FB 78 */	mr r5, r31
/* 8014A304 001473E4  38 7C 02 68 */	addi r3, r28, 0x268
/* 8014A308 001473E8  38 C6 0E 39 */	addi r6, r6, 0xe39
/* 8014A30C 001473EC  C0 22 A6 30 */	lfs f1, "@1868"@sda21(r2)
/* 8014A310 001473F0  C0 42 A6 34 */	lfs f2, "@1869"@sda21(r2)
/* 8014A314 001473F4  C0 62 A6 5C */	lfs f3, "@2084"@sda21(r2)
/* 8014A318 001473F8  48 00 47 25 */	bl "load_param<f,f>__10auto_tweakFRffffP16xModelAssetParamUiPCc"
.L_8014A31C:
/* 8014A31C 001473FC  57 A0 06 3F */	clrlwi. r0, r29, 24
/* 8014A320 00147400  41 82 00 34 */	beq .L_8014A354
/* 8014A324 00147404  38 00 00 00 */	li r0, 0x0
/* 8014A328 00147408  3C 60 80 27 */	lis r3, "@stringBase0"@ha
/* 8014A32C 0014740C  38 83 D8 B0 */	addi r4, r3, "@stringBase0"@l
/* 8014A330 00147410  90 1C 02 6C */	stw r0, 0x26c(r28)
/* 8014A334 00147414  7F C7 F3 78 */	mr r7, r30
/* 8014A338 00147418  7F E8 FB 78 */	mr r8, r31
/* 8014A33C 0014741C  38 7C 02 6C */	addi r3, r28, 0x26c
/* 8014A340 00147420  39 24 0E 58 */	addi r9, r4, 0xe58
/* 8014A344 00147424  38 80 00 01 */	li r4, 0x1
/* 8014A348 00147428  38 A0 00 00 */	li r5, 0x0
/* 8014A34C 0014742C  38 C0 03 E8 */	li r6, 0x3e8
/* 8014A350 00147430  48 00 47 95 */	bl "load_param<i,i>__10auto_tweakFRiiiiP16xModelAssetParamUiPCc"
.L_8014A354:
/* 8014A354 00147434  57 A0 06 3F */	clrlwi. r0, r29, 24
/* 8014A358 00147438  41 82 00 34 */	beq .L_8014A38C
/* 8014A35C 0014743C  C0 02 A6 30 */	lfs f0, "@1868"@sda21(r2)
/* 8014A360 00147440  3C 60 80 27 */	lis r3, "@stringBase0"@ha
/* 8014A364 00147444  38 C3 D8 B0 */	addi r6, r3, "@stringBase0"@l
/* 8014A368 00147448  7F C4 F3 78 */	mr r4, r30
/* 8014A36C 0014744C  D0 1C 02 70 */	stfs f0, 0x270(r28)
/* 8014A370 00147450  7F E5 FB 78 */	mr r5, r31
/* 8014A374 00147454  38 7C 02 70 */	addi r3, r28, 0x270
/* 8014A378 00147458  38 C6 0E 73 */	addi r6, r6, 0xe73
/* 8014A37C 0014745C  C0 22 A6 30 */	lfs f1, "@1868"@sda21(r2)
/* 8014A380 00147460  C0 42 A6 34 */	lfs f2, "@1869"@sda21(r2)
/* 8014A384 00147464  C0 62 A6 90 */	lfs f3, "@2407"@sda21(r2)
/* 8014A388 00147468  48 00 46 B5 */	bl "load_param<f,f>__10auto_tweakFRffffP16xModelAssetParamUiPCc"
.L_8014A38C:
/* 8014A38C 0014746C  57 A0 06 3F */	clrlwi. r0, r29, 24
/* 8014A390 00147470  41 82 00 34 */	beq .L_8014A3C4
/* 8014A394 00147474  C0 02 A6 34 */	lfs f0, "@1869"@sda21(r2)
/* 8014A398 00147478  3C 60 80 27 */	lis r3, "@stringBase0"@ha
/* 8014A39C 0014747C  38 C3 D8 B0 */	addi r6, r3, "@stringBase0"@l
/* 8014A3A0 00147480  7F C4 F3 78 */	mr r4, r30
/* 8014A3A4 00147484  D0 1C 02 74 */	stfs f0, 0x274(r28)
/* 8014A3A8 00147488  7F E5 FB 78 */	mr r5, r31
/* 8014A3AC 0014748C  38 7C 02 74 */	addi r3, r28, 0x274
/* 8014A3B0 00147490  38 C6 0E 8D */	addi r6, r6, 0xe8d
/* 8014A3B4 00147494  C0 22 A6 30 */	lfs f1, "@1868"@sda21(r2)
/* 8014A3B8 00147498  C0 42 A6 34 */	lfs f2, "@1869"@sda21(r2)
/* 8014A3BC 0014749C  C0 62 A6 90 */	lfs f3, "@2407"@sda21(r2)
/* 8014A3C0 001474A0  48 00 46 7D */	bl "load_param<f,f>__10auto_tweakFRffffP16xModelAssetParamUiPCc"
.L_8014A3C4:
/* 8014A3C4 001474A4  57 A0 06 3F */	clrlwi. r0, r29, 24
/* 8014A3C8 001474A8  41 82 00 34 */	beq .L_8014A3FC
/* 8014A3CC 001474AC  C0 02 A6 98 */	lfs f0, "@2409"@sda21(r2)
/* 8014A3D0 001474B0  3C 60 80 27 */	lis r3, "@stringBase0"@ha
/* 8014A3D4 001474B4  38 C3 D8 B0 */	addi r6, r3, "@stringBase0"@l
/* 8014A3D8 001474B8  7F C4 F3 78 */	mr r4, r30
/* 8014A3DC 001474BC  D0 1C 02 78 */	stfs f0, 0x278(r28)
/* 8014A3E0 001474C0  7F E5 FB 78 */	mr r5, r31
/* 8014A3E4 001474C4  38 7C 02 78 */	addi r3, r28, 0x278
/* 8014A3E8 001474C8  38 C6 0E A6 */	addi r6, r6, 0xea6
/* 8014A3EC 001474CC  C0 22 A6 30 */	lfs f1, "@1868"@sda21(r2)
/* 8014A3F0 001474D0  C0 42 A6 34 */	lfs f2, "@1869"@sda21(r2)
/* 8014A3F4 001474D4  C0 62 A6 5C */	lfs f3, "@2084"@sda21(r2)
/* 8014A3F8 001474D8  48 00 46 45 */	bl "load_param<f,f>__10auto_tweakFRffffP16xModelAssetParamUiPCc"
.L_8014A3FC:
/* 8014A3FC 001474DC  57 A0 06 3F */	clrlwi. r0, r29, 24
/* 8014A400 001474E0  41 82 00 34 */	beq .L_8014A434
/* 8014A404 001474E4  C0 02 A7 30 */	lfs f0, "@2447"@sda21(r2)
/* 8014A408 001474E8  3C 60 80 27 */	lis r3, "@stringBase0"@ha
/* 8014A40C 001474EC  38 C3 D8 B0 */	addi r6, r3, "@stringBase0"@l
/* 8014A410 001474F0  7F C4 F3 78 */	mr r4, r30
/* 8014A414 001474F4  D0 1C 02 7C */	stfs f0, 0x27c(r28)
/* 8014A418 001474F8  7F E5 FB 78 */	mr r5, r31
/* 8014A41C 001474FC  38 7C 02 7C */	addi r3, r28, 0x27c
/* 8014A420 00147500  38 C6 0E C6 */	addi r6, r6, 0xec6
/* 8014A424 00147504  C0 22 A6 30 */	lfs f1, "@1868"@sda21(r2)
/* 8014A428 00147508  C0 42 A6 34 */	lfs f2, "@1869"@sda21(r2)
/* 8014A42C 0014750C  C0 62 A6 5C */	lfs f3, "@2084"@sda21(r2)
/* 8014A430 00147510  48 00 46 0D */	bl "load_param<f,f>__10auto_tweakFRffffP16xModelAssetParamUiPCc"
.L_8014A434:
/* 8014A434 00147514  57 A0 06 3F */	clrlwi. r0, r29, 24
/* 8014A438 00147518  41 82 00 34 */	beq .L_8014A46C
/* 8014A43C 0014751C  38 00 00 00 */	li r0, 0x0
/* 8014A440 00147520  3C 60 80 27 */	lis r3, "@stringBase0"@ha
/* 8014A444 00147524  38 83 D8 B0 */	addi r4, r3, "@stringBase0"@l
/* 8014A448 00147528  90 1C 02 80 */	stw r0, 0x280(r28)
/* 8014A44C 0014752C  7F C7 F3 78 */	mr r7, r30
/* 8014A450 00147530  7F E8 FB 78 */	mr r8, r31
/* 8014A454 00147534  38 7C 02 80 */	addi r3, r28, 0x280
/* 8014A458 00147538  39 24 0E E6 */	addi r9, r4, 0xee6
/* 8014A45C 0014753C  38 80 00 01 */	li r4, 0x1
/* 8014A460 00147540  38 A0 00 00 */	li r5, 0x0
/* 8014A464 00147544  38 C0 03 E8 */	li r6, 0x3e8
/* 8014A468 00147548  48 00 46 7D */	bl "load_param<i,i>__10auto_tweakFRiiiiP16xModelAssetParamUiPCc"
.L_8014A46C:
/* 8014A46C 0014754C  57 A0 06 3F */	clrlwi. r0, r29, 24
/* 8014A470 00147550  41 82 00 34 */	beq .L_8014A4A4
/* 8014A474 00147554  C0 02 A6 64 */	lfs f0, "@2086"@sda21(r2)
/* 8014A478 00147558  3C 60 80 27 */	lis r3, "@stringBase0"@ha
/* 8014A47C 0014755C  38 C3 D8 B0 */	addi r6, r3, "@stringBase0"@l
/* 8014A480 00147560  7F C4 F3 78 */	mr r4, r30
/* 8014A484 00147564  D0 1C 02 84 */	stfs f0, 0x284(r28)
/* 8014A488 00147568  7F E5 FB 78 */	mr r5, r31
/* 8014A48C 0014756C  38 7C 02 84 */	addi r3, r28, 0x284
/* 8014A490 00147570  38 C6 0F 02 */	addi r6, r6, 0xf02
/* 8014A494 00147574  C0 22 A6 30 */	lfs f1, "@1868"@sda21(r2)
/* 8014A498 00147578  C0 42 A6 34 */	lfs f2, "@1869"@sda21(r2)
/* 8014A49C 0014757C  C0 62 A6 90 */	lfs f3, "@2407"@sda21(r2)
/* 8014A4A0 00147580  48 00 45 9D */	bl "load_param<f,f>__10auto_tweakFRffffP16xModelAssetParamUiPCc"
.L_8014A4A4:
/* 8014A4A4 00147584  57 A0 06 3F */	clrlwi. r0, r29, 24
/* 8014A4A8 00147588  41 82 00 34 */	beq .L_8014A4DC
/* 8014A4AC 0014758C  C0 02 A6 34 */	lfs f0, "@1869"@sda21(r2)
/* 8014A4B0 00147590  3C 60 80 27 */	lis r3, "@stringBase0"@ha
/* 8014A4B4 00147594  38 C3 D8 B0 */	addi r6, r3, "@stringBase0"@l
/* 8014A4B8 00147598  7F C4 F3 78 */	mr r4, r30
/* 8014A4BC 0014759C  D0 1C 02 88 */	stfs f0, 0x288(r28)
/* 8014A4C0 001475A0  7F E5 FB 78 */	mr r5, r31
/* 8014A4C4 001475A4  38 7C 02 88 */	addi r3, r28, 0x288
/* 8014A4C8 001475A8  38 C6 0F 20 */	addi r6, r6, 0xf20
/* 8014A4CC 001475AC  C0 22 A6 30 */	lfs f1, "@1868"@sda21(r2)
/* 8014A4D0 001475B0  C0 42 A6 34 */	lfs f2, "@1869"@sda21(r2)
/* 8014A4D4 001475B4  C0 62 A6 90 */	lfs f3, "@2407"@sda21(r2)
/* 8014A4D8 001475B8  48 00 45 65 */	bl "load_param<f,f>__10auto_tweakFRffffP16xModelAssetParamUiPCc"
.L_8014A4DC:
/* 8014A4DC 001475BC  57 A0 06 3F */	clrlwi. r0, r29, 24
/* 8014A4E0 001475C0  41 82 00 34 */	beq .L_8014A514
/* 8014A4E4 001475C4  C0 02 A6 98 */	lfs f0, "@2409"@sda21(r2)
/* 8014A4E8 001475C8  3C 60 80 27 */	lis r3, "@stringBase0"@ha
/* 8014A4EC 001475CC  38 C3 D8 B0 */	addi r6, r3, "@stringBase0"@l
/* 8014A4F0 001475D0  7F C4 F3 78 */	mr r4, r30
/* 8014A4F4 001475D4  D0 1C 02 8C */	stfs f0, 0x28c(r28)
/* 8014A4F8 001475D8  7F E5 FB 78 */	mr r5, r31
/* 8014A4FC 001475DC  38 7C 02 8C */	addi r3, r28, 0x28c
/* 8014A500 001475E0  38 C6 0F 3D */	addi r6, r6, 0xf3d
/* 8014A504 001475E4  C0 22 A6 30 */	lfs f1, "@1868"@sda21(r2)
/* 8014A508 001475E8  C0 42 A6 34 */	lfs f2, "@1869"@sda21(r2)
/* 8014A50C 001475EC  C0 62 A6 5C */	lfs f3, "@2084"@sda21(r2)
/* 8014A510 001475F0  48 00 45 2D */	bl "load_param<f,f>__10auto_tweakFRffffP16xModelAssetParamUiPCc"
.L_8014A514:
/* 8014A514 001475F4  57 A0 06 3F */	clrlwi. r0, r29, 24
/* 8014A518 001475F8  41 82 00 34 */	beq .L_8014A54C
/* 8014A51C 001475FC  C0 02 A7 30 */	lfs f0, "@2447"@sda21(r2)
/* 8014A520 00147600  3C 60 80 27 */	lis r3, "@stringBase0"@ha
/* 8014A524 00147604  38 C3 D8 B0 */	addi r6, r3, "@stringBase0"@l
/* 8014A528 00147608  7F C4 F3 78 */	mr r4, r30
/* 8014A52C 0014760C  D0 1C 02 8C */	stfs f0, 0x28c(r28)
/* 8014A530 00147610  7F E5 FB 78 */	mr r5, r31
/* 8014A534 00147614  38 7C 02 8C */	addi r3, r28, 0x28c
/* 8014A538 00147618  38 C6 0F 3D */	addi r6, r6, 0xf3d
/* 8014A53C 0014761C  C0 22 A6 30 */	lfs f1, "@1868"@sda21(r2)
/* 8014A540 00147620  C0 42 A6 34 */	lfs f2, "@1869"@sda21(r2)
/* 8014A544 00147624  C0 62 A6 5C */	lfs f3, "@2084"@sda21(r2)
/* 8014A548 00147628  48 00 44 F5 */	bl "load_param<f,f>__10auto_tweakFRffffP16xModelAssetParamUiPCc"
.L_8014A54C:
/* 8014A54C 0014762C  57 A0 06 3F */	clrlwi. r0, r29, 24
/* 8014A550 00147630  41 82 00 34 */	beq .L_8014A584
/* 8014A554 00147634  38 00 00 00 */	li r0, 0x0
/* 8014A558 00147638  3C 60 80 27 */	lis r3, "@stringBase0"@ha
/* 8014A55C 0014763C  38 83 D8 B0 */	addi r4, r3, "@stringBase0"@l
/* 8014A560 00147640  90 1C 02 94 */	stw r0, 0x294(r28)
/* 8014A564 00147644  7F C7 F3 78 */	mr r7, r30
/* 8014A568 00147648  7F E8 FB 78 */	mr r8, r31
/* 8014A56C 0014764C  38 7C 02 94 */	addi r3, r28, 0x294
/* 8014A570 00147650  39 24 0F 61 */	addi r9, r4, 0xf61
/* 8014A574 00147654  38 80 00 01 */	li r4, 0x1
/* 8014A578 00147658  38 A0 00 00 */	li r5, 0x0
/* 8014A57C 0014765C  38 C0 03 E8 */	li r6, 0x3e8
/* 8014A580 00147660  48 00 45 65 */	bl "load_param<i,i>__10auto_tweakFRiiiiP16xModelAssetParamUiPCc"
.L_8014A584:
/* 8014A584 00147664  80 01 00 44 */	lwz r0, 0x44(r1)
/* 8014A588 00147668  83 E1 00 3C */	lwz r31, 0x3c(r1)
/* 8014A58C 0014766C  83 C1 00 38 */	lwz r30, 0x38(r1)
/* 8014A590 00147670  83 A1 00 34 */	lwz r29, 0x34(r1)
/* 8014A594 00147674  83 81 00 30 */	lwz r28, 0x30(r1)
/* 8014A598 00147678  7C 08 03 A6 */	mtlr r0
/* 8014A59C 0014767C  38 21 00 40 */	addi r1, r1, 0x40
/* 8014A5A0 00147680  4E 80 00 20 */	blr
.endfn "register_tweaks__Q231@unnamed@zNPCTypeKingJelly_cpp@11tweak_groupFbP16xModelAssetParamUiPCc"

# zNPCKingJelly::ParseLinks()
.fn ParseLinks__13zNPCKingJellyFv, global
/* 8014A5A4 00147684  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 8014A5A8 00147688  7C 08 02 A6 */	mflr r0
/* 8014A5AC 0014768C  90 01 00 24 */	stw r0, 0x24(r1)
/* 8014A5B0 00147690  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 8014A5B4 00147694  93 C1 00 18 */	stw r30, 0x18(r1)
/* 8014A5B8 00147698  93 A1 00 14 */	stw r29, 0x14(r1)
/* 8014A5BC 0014769C  7C 7D 1B 78 */	mr r29, r3
/* 8014A5C0 001476A0  4B FA 6D D5 */	bl ParseLinks__10zNPCCommonFv
/* 8014A5C4 001476A4  88 1D 00 05 */	lbz r0, 0x5(r29)
/* 8014A5C8 001476A8  83 FD 00 08 */	lwz r31, 0x8(r29)
/* 8014A5CC 001476AC  54 00 28 34 */	slwi r0, r0, 5
/* 8014A5D0 001476B0  7F DF 02 14 */	add r30, r31, r0
/* 8014A5D4 001476B4  48 00 00 38 */	b .L_8014A60C
.L_8014A5D8:
/* 8014A5D8 001476B8  A0 1F 00 02 */	lhz r0, 0x2(r31)
/* 8014A5DC 001476BC  28 00 01 33 */	cmplwi r0, 0x133
/* 8014A5E0 001476C0  40 82 00 28 */	bne .L_8014A608
/* 8014A5E4 001476C4  80 7F 00 04 */	lwz r3, 0x4(r31)
/* 8014A5E8 001476C8  4B F6 A4 55 */	bl zSceneFindObject__FUi
/* 8014A5EC 001476CC  C0 1F 00 08 */	lfs f0, 0x8(r31)
/* 8014A5F0 001476D0  7C 64 1B 78 */	mr r4, r3
/* 8014A5F4 001476D4  7F A3 EB 78 */	mr r3, r29
/* 8014A5F8 001476D8  FC 00 00 1E */	fctiwz f0, f0
/* 8014A5FC 001476DC  D8 01 00 08 */	stfd f0, 0x8(r1)
/* 8014A600 001476E0  80 A1 00 0C */	lwz r5, 0xc(r1)
/* 8014A604 001476E4  48 00 05 29 */	bl add_child__13zNPCKingJellyFR5xBasei
.L_8014A608:
/* 8014A608 001476E8  3B FF 00 20 */	addi r31, r31, 0x20
.L_8014A60C:
/* 8014A60C 001476EC  7C 1F F0 40 */	cmplw r31, r30
/* 8014A610 001476F0  40 82 FF C8 */	bne .L_8014A5D8
/* 8014A614 001476F4  80 01 00 24 */	lwz r0, 0x24(r1)
/* 8014A618 001476F8  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 8014A61C 001476FC  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 8014A620 00147700  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 8014A624 00147704  7C 08 03 A6 */	mtlr r0
/* 8014A628 00147708  38 21 00 20 */	addi r1, r1, 0x20
/* 8014A62C 0014770C  4E 80 00 20 */	blr
.endfn ParseLinks__13zNPCKingJellyFv

# zNPCKingJelly::SelfSetup()
.fn SelfSetup__13zNPCKingJellyFv, global
/* 8014A630 00147710  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8014A634 00147714  7C 08 02 A6 */	mflr r0
/* 8014A638 00147718  90 01 00 14 */	stw r0, 0x14(r1)
/* 8014A63C 0014771C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8014A640 00147720  7C 7F 1B 78 */	mr r31, r3
/* 8014A644 00147724  4B FC 28 91 */	bl xBehaveMgr_GetSelf__Fv
/* 8014A648 00147728  7F E4 FB 78 */	mr r4, r31
/* 8014A64C 0014772C  38 A0 00 00 */	li r5, 0x0
/* 8014A650 00147730  4B FC 29 ED */	bl Subscribe__10xBehaveMgrFP5xBasei
/* 8014A654 00147734  90 7F 02 28 */	stw r3, 0x228(r31)
/* 8014A658 00147738  83 FF 02 28 */	lwz r31, 0x228(r31)
/* 8014A65C 0014773C  7F E3 FB 78 */	mr r3, r31
/* 8014A660 00147740  4B FC 2B 29 */	bl BrainBegin__7xPsycheFv
/* 8014A664 00147744  3C 80 4E 47 */	lis r4, 0x4e47
/* 8014A668 00147748  7F E3 FB 78 */	mr r3, r31
/* 8014A66C 0014774C  38 84 4D 31 */	addi r4, r4, 0x4d31
/* 8014A670 00147750  38 A0 00 00 */	li r5, 0x0
/* 8014A674 00147754  4B FC 2B CD */	bl AddGoal__7xPsycheFiPv
/* 8014A678 00147758  3C 80 4E 47 */	lis r4, 0x4e47
/* 8014A67C 0014775C  7F E3 FB 78 */	mr r3, r31
/* 8014A680 00147760  38 84 4D 32 */	addi r4, r4, 0x4d32
/* 8014A684 00147764  38 A0 00 00 */	li r5, 0x0
/* 8014A688 00147768  4B FC 2B B9 */	bl AddGoal__7xPsycheFiPv
/* 8014A68C 0014776C  3C 80 4E 47 */	lis r4, 0x4e47
/* 8014A690 00147770  7F E3 FB 78 */	mr r3, r31
/* 8014A694 00147774  38 84 4D 33 */	addi r4, r4, 0x4d33
/* 8014A698 00147778  38 A0 00 00 */	li r5, 0x0
/* 8014A69C 0014777C  4B FC 2B A5 */	bl AddGoal__7xPsycheFiPv
/* 8014A6A0 00147780  3C 80 4E 47 */	lis r4, 0x4e47
/* 8014A6A4 00147784  7F E3 FB 78 */	mr r3, r31
/* 8014A6A8 00147788  38 84 4D 34 */	addi r4, r4, 0x4d34
/* 8014A6AC 0014778C  38 A0 00 00 */	li r5, 0x0
/* 8014A6B0 00147790  4B FC 2B 91 */	bl AddGoal__7xPsycheFiPv
/* 8014A6B4 00147794  3C 80 4E 47 */	lis r4, 0x4e47
/* 8014A6B8 00147798  7F E3 FB 78 */	mr r3, r31
/* 8014A6BC 0014779C  38 84 4D 35 */	addi r4, r4, 0x4d35
/* 8014A6C0 001477A0  38 A0 00 00 */	li r5, 0x0
/* 8014A6C4 001477A4  4B FC 2B 7D */	bl AddGoal__7xPsycheFiPv
/* 8014A6C8 001477A8  3C 80 4E 47 */	lis r4, 0x4e47
/* 8014A6CC 001477AC  7F E3 FB 78 */	mr r3, r31
/* 8014A6D0 001477B0  38 84 4D 36 */	addi r4, r4, 0x4d36
/* 8014A6D4 001477B4  38 A0 00 00 */	li r5, 0x0
/* 8014A6D8 001477B8  4B FC 2B 69 */	bl AddGoal__7xPsycheFiPv
/* 8014A6DC 001477BC  3C 80 4E 47 */	lis r4, 0x4e47
/* 8014A6E0 001477C0  7F E3 FB 78 */	mr r3, r31
/* 8014A6E4 001477C4  38 84 4D 37 */	addi r4, r4, 0x4d37
/* 8014A6E8 001477C8  38 A0 00 00 */	li r5, 0x0
/* 8014A6EC 001477CC  4B FC 2B 55 */	bl AddGoal__7xPsycheFiPv
/* 8014A6F0 001477D0  3C 80 4E 47 */	lis r4, 0x4e47
/* 8014A6F4 001477D4  7F E3 FB 78 */	mr r3, r31
/* 8014A6F8 001477D8  38 84 4E 37 */	addi r4, r4, 0x4e37
/* 8014A6FC 001477DC  38 A0 00 00 */	li r5, 0x0
/* 8014A700 001477E0  4B FC 2B 41 */	bl AddGoal__7xPsycheFiPv
/* 8014A704 001477E4  7F E3 FB 78 */	mr r3, r31
/* 8014A708 001477E8  4B FC 2B 01 */	bl BrainEnd__7xPsycheFv
/* 8014A70C 001477EC  3C 80 4E 47 */	lis r4, 0x4e47
/* 8014A710 001477F0  7F E3 FB 78 */	mr r3, r31
/* 8014A714 001477F4  38 84 4D 31 */	addi r4, r4, 0x4d31
/* 8014A718 001477F8  4B FB 82 65 */	bl SetSafety__7xPsycheFi
/* 8014A71C 001477FC  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8014A720 00147800  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8014A724 00147804  7C 08 03 A6 */	mtlr r0
/* 8014A728 00147808  38 21 00 10 */	addi r1, r1, 0x10
/* 8014A72C 0014780C  4E 80 00 20 */	blr
.endfn SelfSetup__13zNPCKingJellyFv

# zNPCKingJelly::Damage(en_NPC_DAMAGE_TYPE, xBase*, const xVec3*)
.fn Damage__13zNPCKingJellyF18en_NPC_DAMAGE_TYPEP5xBasePC5xVec3, global
/* 8014A730 00147810  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8014A734 00147814  7C 08 02 A6 */	mflr r0
/* 8014A738 00147818  90 01 00 14 */	stw r0, 0x14(r1)
/* 8014A73C 0014781C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8014A740 00147820  7C 9F 23 78 */	mr r31, r4
/* 8014A744 00147824  93 C1 00 08 */	stw r30, 0x8(r1)
/* 8014A748 00147828  7C 7E 1B 78 */	mr r30, r3
/* 8014A74C 0014782C  88 03 02 B5 */	lbz r0, 0x2b5(r3)
/* 8014A750 00147830  28 00 00 00 */	cmplwi r0, 0x0
/* 8014A754 00147834  41 82 00 A8 */	beq .L_8014A7FC
/* 8014A758 00147838  88 1E 02 B6 */	lbz r0, 0x2b6(r30)
/* 8014A75C 0014783C  28 00 00 00 */	cmplwi r0, 0x0
/* 8014A760 00147840  41 82 00 08 */	beq .L_8014A768
/* 8014A764 00147844  48 00 00 98 */	b .L_8014A7FC
.L_8014A768:
/* 8014A768 00147848  80 7E 02 28 */	lwz r3, 0x228(r30)
/* 8014A76C 0014784C  4B FC 2E 59 */	bl GIDOfActive__7xPsycheCFv
/* 8014A770 00147850  2C 1F 00 09 */	cmpwi r31, 0x9
/* 8014A774 00147854  41 82 00 64 */	beq .L_8014A7D8
/* 8014A778 00147858  40 80 00 10 */	bge .L_8014A788
/* 8014A77C 0014785C  2C 1F 00 03 */	cmpwi r31, 0x3
/* 8014A780 00147860  41 82 00 1C */	beq .L_8014A79C
/* 8014A784 00147864  48 00 00 78 */	b .L_8014A7FC
.L_8014A788:
/* 8014A788 00147868  2C 1F 00 0D */	cmpwi r31, 0xd
/* 8014A78C 0014786C  40 80 00 70 */	bge .L_8014A7FC
/* 8014A790 00147870  2C 1F 00 0B */	cmpwi r31, 0xb
/* 8014A794 00147874  40 80 00 08 */	bge .L_8014A79C
/* 8014A798 00147878  48 00 00 64 */	b .L_8014A7FC
.L_8014A79C:
/* 8014A79C 0014787C  3C 03 B1 B9 */	addis r0, r3, 0xb1b9
/* 8014A7A0 00147880  28 00 4D 35 */	cmplwi r0, 0x4d35
/* 8014A7A4 00147884  40 82 00 58 */	bne .L_8014A7FC
/* 8014A7A8 00147888  80 1E 02 D4 */	lwz r0, 0x2d4(r30)
/* 8014A7AC 0014788C  2C 00 00 02 */	cmpwi r0, 0x2
/* 8014A7B0 00147890  41 82 00 14 */	beq .L_8014A7C4
/* 8014A7B4 00147894  2C 00 00 03 */	cmpwi r0, 0x3
/* 8014A7B8 00147898  41 82 00 0C */	beq .L_8014A7C4
/* 8014A7BC 0014789C  2C 00 00 04 */	cmpwi r0, 0x4
/* 8014A7C0 001478A0  40 82 00 3C */	bne .L_8014A7FC
.L_8014A7C4:
/* 8014A7C4 001478A4  80 9E 02 C4 */	lwz r4, 0x2c4(r30)
/* 8014A7C8 001478A8  7F C3 F3 78 */	mr r3, r30
/* 8014A7CC 001478AC  38 84 FF FF */	addi r4, r4, -0x1
/* 8014A7D0 001478B0  48 00 02 39 */	bl set_life__13zNPCKingJellyFi
/* 8014A7D4 001478B4  48 00 00 28 */	b .L_8014A7FC
.L_8014A7D8:
/* 8014A7D8 001478B8  3C 03 B1 B9 */	addis r0, r3, 0xb1b9
/* 8014A7DC 001478BC  28 00 4D 36 */	cmplwi r0, 0x4d36
/* 8014A7E0 001478C0  41 82 00 1C */	beq .L_8014A7FC
/* 8014A7E4 001478C4  28 00 4D 37 */	cmplwi r0, 0x4d37
/* 8014A7E8 001478C8  41 82 00 14 */	beq .L_8014A7FC
/* 8014A7EC 001478CC  80 9E 02 C4 */	lwz r4, 0x2c4(r30)
/* 8014A7F0 001478D0  7F C3 F3 78 */	mr r3, r30
/* 8014A7F4 001478D4  38 84 FF FF */	addi r4, r4, -0x1
/* 8014A7F8 001478D8  48 00 02 11 */	bl set_life__13zNPCKingJellyFi
.L_8014A7FC:
/* 8014A7FC 001478DC  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8014A800 001478E0  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8014A804 001478E4  83 C1 00 08 */	lwz r30, 0x8(r1)
/* 8014A808 001478E8  7C 08 03 A6 */	mtlr r0
/* 8014A80C 001478EC  38 21 00 10 */	addi r1, r1, 0x10
/* 8014A810 001478F0  4E 80 00 20 */	blr
.endfn Damage__13zNPCKingJellyF18en_NPC_DAMAGE_TYPEP5xBasePC5xVec3

# zNPCKingJelly::AnimPick(int, en_NPC_GOAL_SPOT, xGoal*)
.fn AnimPick__13zNPCKingJellyFi16en_NPC_GOAL_SPOTP5xGoal, global
/* 8014A814 001478F4  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8014A818 001478F8  7C 08 02 A6 */	mflr r0
/* 8014A81C 001478FC  3C 84 B1 B9 */	addis r4, r4, 0xb1b9
/* 8014A820 00147900  90 01 00 14 */	stw r0, 0x14(r1)
/* 8014A824 00147904  38 84 B2 CF */	addi r4, r4, -0x4d31
/* 8014A828 00147908  28 04 00 06 */	cmplwi r4, 0x6
/* 8014A82C 0014790C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8014A830 00147910  3B E0 00 00 */	li r31, 0x0
/* 8014A834 00147914  41 81 00 60 */	bgt .L_8014A894
/* 8014A838 00147918  3C 60 80 2A */	lis r3, "@2565"@ha
/* 8014A83C 0014791C  54 84 10 3A */	slwi r4, r4, 2
/* 8014A840 00147920  38 63 9E E0 */	addi r3, r3, "@2565"@l
/* 8014A844 00147924  7C 03 20 2E */	lwzx r0, r3, r4
/* 8014A848 00147928  7C 09 03 A6 */	mtctr r0
/* 8014A84C 0014792C  4E 80 04 20 */	bctr
.L_8014A850:
/* 8014A850 00147930  38 60 00 01 */	li r3, 0x1
/* 8014A854 00147934  48 00 00 44 */	b .L_8014A898
.L_8014A858:
/* 8014A858 00147938  38 62 A6 38 */	addi r3, r2, "bored_anims__31@unnamed@zNPCTypeKingJelly_cpp@"@sda21
/* 8014A85C 0014793C  38 80 00 02 */	li r4, 0x2
/* 8014A860 00147940  38 A0 00 00 */	li r5, 0x0
/* 8014A864 00147944  48 00 43 05 */	bl "xUtil_choose<i>__FPCiiPCf"
/* 8014A868 00147948  48 00 00 30 */	b .L_8014A898
.L_8014A86C:
/* 8014A86C 0014794C  38 60 00 0F */	li r3, 0xf
/* 8014A870 00147950  48 00 00 28 */	b .L_8014A898
.L_8014A874:
/* 8014A874 00147954  38 60 00 07 */	li r3, 0x7
/* 8014A878 00147958  48 00 00 20 */	b .L_8014A898
.L_8014A87C:
/* 8014A87C 0014795C  38 60 00 0C */	li r3, 0xc
/* 8014A880 00147960  48 00 00 18 */	b .L_8014A898
.L_8014A884:
/* 8014A884 00147964  38 60 00 09 */	li r3, 0x9
/* 8014A888 00147968  48 00 00 10 */	b .L_8014A898
.L_8014A88C:
/* 8014A88C 0014796C  38 60 FF FF */	li r3, -0x1
/* 8014A890 00147970  48 00 00 08 */	b .L_8014A898
.L_8014A894:
/* 8014A894 00147974  38 60 00 01 */	li r3, 0x1
.L_8014A898:
/* 8014A898 00147978  2C 03 FF FF */	cmpwi r3, -0x1
/* 8014A89C 0014797C  40 81 00 14 */	ble .L_8014A8B0
/* 8014A8A0 00147980  3C 80 80 2A */	lis r4, g_hash_subbanim@ha
/* 8014A8A4 00147984  54 60 10 3A */	slwi r0, r3, 2
/* 8014A8A8 00147988  38 64 90 E0 */	addi r3, r4, g_hash_subbanim@l
/* 8014A8AC 0014798C  7F E3 00 2E */	lwzx r31, r3, r0
.L_8014A8B0:
/* 8014A8B0 00147990  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8014A8B4 00147994  7F E3 FB 78 */	mr r3, r31
/* 8014A8B8 00147998  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8014A8BC 0014799C  7C 08 03 A6 */	mtlr r0
/* 8014A8C0 001479A0  38 21 00 10 */	addi r1, r1, 0x10
/* 8014A8C4 001479A4  4E 80 00 20 */	blr
.endfn AnimPick__13zNPCKingJellyFi16en_NPC_GOAL_SPOTP5xGoal

# zNPCKingJelly::get_variance() const
.fn get_variance__13zNPCKingJellyCFv, global
/* 8014A8C8 001479A8  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8014A8CC 001479AC  7C 08 02 A6 */	mflr r0
/* 8014A8D0 001479B0  90 01 00 14 */	stw r0, 0x14(r1)
/* 8014A8D4 001479B4  4B EE 63 B5 */	bl xurand__Fv
/* 8014A8D8 001479B8  C0 62 A6 4C */	lfs f3, "@1976"@sda21(r2)
/* 8014A8DC 001479BC  3C 60 80 33 */	lis r3, "tweak__31@unnamed@zNPCTypeKingJelly_cpp@"@ha
/* 8014A8E0 001479C0  C0 42 A6 30 */	lfs f2, "@1868"@sda21(r2)
/* 8014A8E4 001479C4  38 63 85 38 */	addi r3, r3, "tweak__31@unnamed@zNPCTypeKingJelly_cpp@"@l
/* 8014A8E8 001479C8  C0 03 00 4C */	lfs f0, 0x4c(r3)
/* 8014A8EC 001479CC  EC 23 10 78 */	fmsubs f1, f3, f1, f2
/* 8014A8F0 001479D0  EC 20 00 72 */	fmuls f1, f0, f1
/* 8014A8F4 001479D4  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8014A8F8 001479D8  7C 08 03 A6 */	mtlr r0
/* 8014A8FC 001479DC  38 21 00 10 */	addi r1, r1, 0x10
/* 8014A900 001479E0  4E 80 00 20 */	blr
.endfn get_variance__13zNPCKingJellyCFv

# zNPCKingJelly::bored() const
.fn bored__13zNPCKingJellyCFv, global
/* 8014A904 001479E4  80 03 02 BC */	lwz r0, 0x2bc(r3)
/* 8014A908 001479E8  2C 00 00 01 */	cmpwi r0, 0x1
/* 8014A90C 001479EC  41 82 00 44 */	beq .L_8014A950
/* 8014A910 001479F0  40 80 00 10 */	bge .L_8014A920
/* 8014A914 001479F4  2C 00 00 00 */	cmpwi r0, 0x0
/* 8014A918 001479F8  40 80 00 14 */	bge .L_8014A92C
/* 8014A91C 001479FC  48 00 00 8C */	b .L_8014A9A8
.L_8014A920:
/* 8014A920 00147A00  2C 00 00 03 */	cmpwi r0, 0x3
/* 8014A924 00147A04  40 80 00 84 */	bge .L_8014A9A8
/* 8014A928 00147A08  48 00 00 58 */	b .L_8014A980
.L_8014A92C:
/* 8014A92C 00147A0C  80 63 02 C0 */	lwz r3, 0x2c0(r3)
/* 8014A930 00147A10  38 03 00 01 */	addi r0, r3, 0x1
/* 8014A934 00147A14  54 03 0F FE */	srwi r3, r0, 31
/* 8014A938 00147A18  54 00 07 FE */	clrlwi r0, r0, 31
/* 8014A93C 00147A1C  7C 00 1A 78 */	xor r0, r0, r3
/* 8014A940 00147A20  7C 03 00 50 */	subf r0, r3, r0
/* 8014A944 00147A24  7C 00 00 34 */	cntlzw r0, r0
/* 8014A948 00147A28  54 03 D9 7E */	srwi r3, r0, 5
/* 8014A94C 00147A2C  4E 80 00 20 */	blr
.L_8014A950:
/* 8014A950 00147A30  80 83 02 C0 */	lwz r4, 0x2c0(r3)
/* 8014A954 00147A34  3C 60 55 55 */	lis r3, 0x5555
/* 8014A958 00147A38  38 03 55 56 */	addi r0, r3, 0x5556
/* 8014A95C 00147A3C  38 84 00 01 */	addi r4, r4, 0x1
/* 8014A960 00147A40  7C 60 20 96 */	mulhw r3, r0, r4
/* 8014A964 00147A44  54 60 0F FE */	srwi r0, r3, 31
/* 8014A968 00147A48  7C 03 02 14 */	add r0, r3, r0
/* 8014A96C 00147A4C  1C 00 00 03 */	mulli r0, r0, 0x3
/* 8014A970 00147A50  7C 00 20 50 */	subf r0, r0, r4
/* 8014A974 00147A54  7C 00 00 34 */	cntlzw r0, r0
/* 8014A978 00147A58  54 03 D9 7E */	srwi r3, r0, 5
/* 8014A97C 00147A5C  4E 80 00 20 */	blr
.L_8014A980:
/* 8014A980 00147A60  80 63 02 C0 */	lwz r3, 0x2c0(r3)
/* 8014A984 00147A64  38 63 00 01 */	addi r3, r3, 0x1
/* 8014A988 00147A68  54 60 F0 02 */	slwi r0, r3, 30
/* 8014A98C 00147A6C  54 63 0F FE */	srwi r3, r3, 31
/* 8014A990 00147A70  7C 03 00 50 */	subf r0, r3, r0
/* 8014A994 00147A74  54 00 10 3E */	rotlwi r0, r0, 2
/* 8014A998 00147A78  7C 00 1A 14 */	add r0, r0, r3
/* 8014A99C 00147A7C  7C 00 00 34 */	cntlzw r0, r0
/* 8014A9A0 00147A80  54 03 D9 7E */	srwi r3, r0, 5
/* 8014A9A4 00147A84  4E 80 00 20 */	blr
.L_8014A9A8:
/* 8014A9A8 00147A88  38 60 00 00 */	li r3, 0x0
/* 8014A9AC 00147A8C  4E 80 00 20 */	blr
.endfn bored__13zNPCKingJellyCFv

# zNPCKingJelly::max_strikes() const
.fn max_strikes__13zNPCKingJellyCFv, global
/* 8014A9B0 00147A90  80 63 02 BC */	lwz r3, 0x2bc(r3)
/* 8014A9B4 00147A94  38 63 00 01 */	addi r3, r3, 0x1
/* 8014A9B8 00147A98  4E 80 00 20 */	blr
.endfn max_strikes__13zNPCKingJellyCFv

# zNPCKingJelly::update_camera(float)
.fn update_camera__13zNPCKingJellyFf, global
/* 8014A9BC 00147A9C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8014A9C0 00147AA0  7C 08 02 A6 */	mflr r0
/* 8014A9C4 00147AA4  38 60 00 08 */	li r3, 0x8
/* 8014A9C8 00147AA8  90 01 00 14 */	stw r0, 0x14(r1)
/* 8014A9CC 00147AAC  DB E1 00 08 */	stfd f31, 0x8(r1)
/* 8014A9D0 00147AB0  FF E0 08 90 */	fmr f31, f1
/* 8014A9D4 00147AB4  4B F0 77 2D */	bl zCameraDisableTracking__F17camera_owner_enum
/* 8014A9D8 00147AB8  4B F0 77 49 */	bl zCameraIsTrackingDisabled__Fv
/* 8014A9DC 00147ABC  54 60 07 77 */	rlwinm. r0, r3, 0, 29, 27
/* 8014A9E0 00147AC0  40 82 00 14 */	bne .L_8014A9F4
/* 8014A9E4 00147AC4  FC 20 F8 90 */	fmr f1, f31
/* 8014A9E8 00147AC8  3C 60 80 2A */	lis r3, "boss_cam__31@unnamed@zNPCTypeKingJelly_cpp@"@ha
/* 8014A9EC 00147ACC  38 63 9E 2C */	addi r3, r3, "boss_cam__31@unnamed@zNPCTypeKingJelly_cpp@"@l
/* 8014A9F0 00147AD0  4B EC 35 15 */	bl update__13xBinaryCameraFf
.L_8014A9F4:
/* 8014A9F4 00147AD4  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8014A9F8 00147AD8  CB E1 00 08 */	lfd f31, 0x8(r1)
/* 8014A9FC 00147ADC  7C 08 03 A6 */	mtlr r0
/* 8014AA00 00147AE0  38 21 00 10 */	addi r1, r1, 0x10
/* 8014AA04 00147AE4  4E 80 00 20 */	blr
.endfn update_camera__13zNPCKingJellyFf

# zNPCKingJelly::set_life(int)
.fn set_life__13zNPCKingJellyFi, global
/* 8014AA08 00147AE8  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 8014AA0C 00147AEC  7C 08 02 A6 */	mflr r0
/* 8014AA10 00147AF0  3C A0 80 33 */	lis r5, "tweak__31@unnamed@zNPCTypeKingJelly_cpp@"@ha
/* 8014AA14 00147AF4  90 01 00 24 */	stw r0, 0x24(r1)
/* 8014AA18 00147AF8  38 A5 85 38 */	addi r5, r5, "tweak__31@unnamed@zNPCTypeKingJelly_cpp@"@l
/* 8014AA1C 00147AFC  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 8014AA20 00147B00  93 C1 00 18 */	stw r30, 0x18(r1)
/* 8014AA24 00147B04  93 A1 00 14 */	stw r29, 0x14(r1)
/* 8014AA28 00147B08  7C 7D 1B 78 */	mr r29, r3
/* 8014AA2C 00147B0C  83 E3 02 C4 */	lwz r31, 0x2c4(r3)
/* 8014AA30 00147B10  7C 83 23 78 */	mr r3, r4
/* 8014AA34 00147B14  80 A5 00 0C */	lwz r5, 0xc(r5)
/* 8014AA38 00147B18  38 80 00 00 */	li r4, 0x0
/* 8014AA3C 00147B1C  4B FF 25 F9 */	bl "range_limit<i>__Fiii"
/* 8014AA40 00147B20  90 7D 02 C4 */	stw r3, 0x2c4(r29)
/* 8014AA44 00147B24  80 7D 02 28 */	lwz r3, 0x228(r29)
/* 8014AA48 00147B28  4B FC 2B 7D */	bl GIDOfActive__7xPsycheCFv
/* 8014AA4C 00147B2C  3C 03 B1 B9 */	addis r0, r3, 0xb1b9
/* 8014AA50 00147B30  28 00 4D 36 */	cmplwi r0, 0x4d36
/* 8014AA54 00147B34  41 82 00 78 */	beq .L_8014AACC
/* 8014AA58 00147B38  28 00 4D 37 */	cmplwi r0, 0x4d37
/* 8014AA5C 00147B3C  41 82 00 70 */	beq .L_8014AACC
/* 8014AA60 00147B40  80 1D 02 C4 */	lwz r0, 0x2c4(r29)
/* 8014AA64 00147B44  7C 00 F8 00 */	cmpw r0, r31
/* 8014AA68 00147B48  40 80 00 64 */	bge .L_8014AACC
/* 8014AA6C 00147B4C  3C 80 4E 47 */	lis r4, 0x4e47
/* 8014AA70 00147B50  80 7D 02 28 */	lwz r3, 0x228(r29)
/* 8014AA74 00147B54  38 84 4D 36 */	addi r4, r4, 0x4d36
/* 8014AA78 00147B58  38 A0 00 01 */	li r5, 0x1
/* 8014AA7C 00147B5C  4B FC 2C B5 */	bl GoalSet__7xPsycheFii
/* 8014AA80 00147B60  7F A3 EB 78 */	mr r3, r29
/* 8014AA84 00147B64  48 00 26 D5 */	bl start_blink__13zNPCKingJellyFv
/* 8014AA88 00147B68  83 DD 02 C4 */	lwz r30, 0x2c4(r29)
/* 8014AA8C 00147B6C  48 00 00 18 */	b .L_8014AAA4
.L_8014AA90:
/* 8014AA90 00147B70  7F A3 EB 78 */	mr r3, r29
/* 8014AA94 00147B74  7F A4 EB 78 */	mr r4, r29
/* 8014AA98 00147B78  38 A0 01 D7 */	li r5, 0x1d7
/* 8014AA9C 00147B7C  4B ED 4C 45 */	bl zEntEvent__FP5xBaseP5xBaseUi
/* 8014AAA0 00147B80  3B DE 00 01 */	addi r30, r30, 0x1
.L_8014AAA4:
/* 8014AAA4 00147B84  7C 1E F8 00 */	cmpw r30, r31
/* 8014AAA8 00147B88  41 80 FF E8 */	blt .L_8014AA90
/* 8014AAAC 00147B8C  80 1D 02 C4 */	lwz r0, 0x2c4(r29)
/* 8014AAB0 00147B90  2C 00 00 00 */	cmpwi r0, 0x0
/* 8014AAB4 00147B94  41 81 00 20 */	bgt .L_8014AAD4
/* 8014AAB8 00147B98  7F A3 EB 78 */	mr r3, r29
/* 8014AABC 00147B9C  7F A4 EB 78 */	mr r4, r29
/* 8014AAC0 00147BA0  38 A0 00 24 */	li r5, 0x24
/* 8014AAC4 00147BA4  4B ED 4C 1D */	bl zEntEvent__FP5xBaseP5xBaseUi
/* 8014AAC8 00147BA8  48 00 00 0C */	b .L_8014AAD4
.L_8014AACC:
/* 8014AACC 00147BAC  7F A3 EB 78 */	mr r3, r29
/* 8014AAD0 00147BB0  48 00 00 21 */	bl update_round__13zNPCKingJellyFv
.L_8014AAD4:
/* 8014AAD4 00147BB4  80 01 00 24 */	lwz r0, 0x24(r1)
/* 8014AAD8 00147BB8  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 8014AADC 00147BBC  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 8014AAE0 00147BC0  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 8014AAE4 00147BC4  7C 08 03 A6 */	mtlr r0
/* 8014AAE8 00147BC8  38 21 00 20 */	addi r1, r1, 0x20
/* 8014AAEC 00147BCC  4E 80 00 20 */	blr
.endfn set_life__13zNPCKingJellyFi

# zNPCKingJelly::update_round()
.fn update_round__13zNPCKingJellyFv, global
/* 8014AAF0 00147BD0  80 83 02 C4 */	lwz r4, 0x2c4(r3)
/* 8014AAF4 00147BD4  2C 04 00 00 */	cmpwi r4, 0x0
/* 8014AAF8 00147BD8  40 82 00 10 */	bne .L_8014AB08
/* 8014AAFC 00147BDC  38 00 00 00 */	li r0, 0x0
/* 8014AB00 00147BE0  90 03 02 BC */	stw r0, 0x2bc(r3)
/* 8014AB04 00147BE4  4E 80 00 20 */	blr
.L_8014AB08:
/* 8014AB08 00147BE8  38 04 FF FF */	addi r0, r4, -0x1
/* 8014AB0C 00147BEC  3C 80 80 33 */	lis r4, "tweak__31@unnamed@zNPCTypeKingJelly_cpp@"@ha
/* 8014AB10 00147BF0  38 84 85 38 */	addi r4, r4, "tweak__31@unnamed@zNPCTypeKingJelly_cpp@"@l
/* 8014AB14 00147BF4  1C A0 00 03 */	mulli r5, r0, 0x3
/* 8014AB18 00147BF8  80 04 00 0C */	lwz r0, 0xc(r4)
/* 8014AB1C 00147BFC  7C 05 03 D6 */	divw r0, r5, r0
/* 8014AB20 00147C00  20 00 00 02 */	subfic r0, r0, 0x2
/* 8014AB24 00147C04  90 03 02 BC */	stw r0, 0x2bc(r3)
/* 8014AB28 00147C08  4E 80 00 20 */	blr
.endfn update_round__13zNPCKingJellyFv

# zNPCKingJelly::add_child(xBase&, int)
.fn add_child__13zNPCKingJellyFR5xBasei, global
/* 8014AB2C 00147C0C  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 8014AB30 00147C10  7C 08 02 A6 */	mflr r0
/* 8014AB34 00147C14  90 01 00 24 */	stw r0, 0x24(r1)
/* 8014AB38 00147C18  BF 61 00 0C */	stmw r27, 0xc(r1)
/* 8014AB3C 00147C1C  7C 9C 23 78 */	mr r28, r4
/* 8014AB40 00147C20  7C 7B 1B 78 */	mr r27, r3
/* 8014AB44 00147C24  7C BD 2B 78 */	mr r29, r5
/* 8014AB48 00147C28  88 04 00 04 */	lbz r0, 0x4(r4)
/* 8014AB4C 00147C2C  2C 00 00 2B */	cmpwi r0, 0x2b
/* 8014AB50 00147C30  41 82 00 14 */	beq .L_8014AB64
/* 8014AB54 00147C34  40 80 00 7C */	bge .L_8014ABD0
/* 8014AB58 00147C38  2C 00 00 11 */	cmpwi r0, 0x11
/* 8014AB5C 00147C3C  41 82 00 34 */	beq .L_8014AB90
/* 8014AB60 00147C40  48 00 00 70 */	b .L_8014ABD0
.L_8014AB64:
/* 8014AB64 00147C44  80 1B 08 8C */	lwz r0, 0x88c(r27)
/* 8014AB68 00147C48  7F 85 E3 78 */	mr r5, r28
/* 8014AB6C 00147C4C  7F A6 EB 78 */	mr r6, r29
/* 8014AB70 00147C50  1C 80 00 2C */	mulli r4, r0, 0x2c
/* 8014AB74 00147C54  38 84 03 0C */	addi r4, r4, 0x30c
/* 8014AB78 00147C58  7C 9B 22 14 */	add r4, r27, r4
/* 8014AB7C 00147C5C  48 00 00 69 */	bl init_child__13zNPCKingJellyFRQ213zNPCKingJelly10child_dataR10zNPCCommoni
/* 8014AB80 00147C60  80 7B 08 8C */	lwz r3, 0x88c(r27)
/* 8014AB84 00147C64  38 03 00 01 */	addi r0, r3, 0x1
/* 8014AB88 00147C68  90 1B 08 8C */	stw r0, 0x88c(r27)
/* 8014AB8C 00147C6C  48 00 00 44 */	b .L_8014ABD0
.L_8014AB90:
/* 8014AB90 00147C70  7F 83 E3 78 */	mr r3, r28
/* 8014AB94 00147C74  3B C0 00 00 */	li r30, 0x0
/* 8014AB98 00147C78  4B EE 22 E5 */	bl xGroupGetCount__FP6xGroup
/* 8014AB9C 00147C7C  7C 7F 1B 78 */	mr r31, r3
/* 8014ABA0 00147C80  48 00 00 28 */	b .L_8014ABC8
.L_8014ABA4:
/* 8014ABA4 00147C84  7F 83 E3 78 */	mr r3, r28
/* 8014ABA8 00147C88  7F C4 F3 78 */	mr r4, r30
/* 8014ABAC 00147C8C  4B EE 22 DD */	bl xGroupGetItemPtr__FP6xGroupUi
/* 8014ABB0 00147C90  7C 60 1B 78 */	mr r0, r3
/* 8014ABB4 00147C94  7F 63 DB 78 */	mr r3, r27
/* 8014ABB8 00147C98  7C 04 03 78 */	mr r4, r0
/* 8014ABBC 00147C9C  7F A5 EB 78 */	mr r5, r29
/* 8014ABC0 00147CA0  4B FF FF 6D */	bl add_child__13zNPCKingJellyFR5xBasei
/* 8014ABC4 00147CA4  3B DE 00 01 */	addi r30, r30, 0x1
.L_8014ABC8:
/* 8014ABC8 00147CA8  7C 1E F8 40 */	cmplw r30, r31
/* 8014ABCC 00147CAC  41 80 FF D8 */	blt .L_8014ABA4
.L_8014ABD0:
/* 8014ABD0 00147CB0  BB 61 00 0C */	lmw r27, 0xc(r1)
/* 8014ABD4 00147CB4  80 01 00 24 */	lwz r0, 0x24(r1)
/* 8014ABD8 00147CB8  7C 08 03 A6 */	mtlr r0
/* 8014ABDC 00147CBC  38 21 00 20 */	addi r1, r1, 0x20
/* 8014ABE0 00147CC0  4E 80 00 20 */	blr
.endfn add_child__13zNPCKingJellyFR5xBasei

# zNPCKingJelly::init_child(zNPCKingJelly::child_data&, zNPCCommon&, int)
.fn init_child__13zNPCKingJellyFRQ213zNPCKingJelly10child_dataR10zNPCCommoni, global
/* 8014ABE4 00147CC4  90 A4 00 00 */	stw r5, 0x0(r4)
/* 8014ABE8 00147CC8  38 00 00 01 */	li r0, 0x1
/* 8014ABEC 00147CCC  98 C4 00 04 */	stb r6, 0x4(r4)
/* 8014ABF0 00147CD0  98 04 00 05 */	stb r0, 0x5(r4)
/* 8014ABF4 00147CD4  80 05 00 0C */	lwz r0, 0xc(r5)
/* 8014ABF8 00147CD8  90 04 00 08 */	stw r0, 0x8(r4)
/* 8014ABFC 00147CDC  80 05 00 34 */	lwz r0, 0x34(r5)
/* 8014AC00 00147CE0  90 04 00 0C */	stw r0, 0xc(r4)
/* 8014AC04 00147CE4  80 05 00 3C */	lwz r0, 0x3c(r5)
/* 8014AC08 00147CE8  90 04 00 10 */	stw r0, 0x10(r4)
/* 8014AC0C 00147CEC  80 05 00 40 */	lwz r0, 0x40(r5)
/* 8014AC10 00147CF0  90 04 00 14 */	stw r0, 0x14(r4)
/* 8014AC14 00147CF4  80 05 00 44 */	lwz r0, 0x44(r5)
/* 8014AC18 00147CF8  90 04 00 18 */	stw r0, 0x18(r4)
/* 8014AC1C 00147CFC  80 05 00 B0 */	lwz r0, 0xb0(r5)
/* 8014AC20 00147D00  90 04 00 20 */	stw r0, 0x20(r4)
/* 8014AC24 00147D04  4E 80 00 20 */	blr
.endfn init_child__13zNPCKingJellyFRQ213zNPCKingJelly10child_dataR10zNPCCommoni

# zNPCKingJelly::disable_child(zNPCKingJelly::child_data&)
.fn disable_child__13zNPCKingJellyFRQ213zNPCKingJelly10child_data, global
/* 8014AC28 00147D08  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8014AC2C 00147D0C  7C 08 02 A6 */	mflr r0
/* 8014AC30 00147D10  90 01 00 14 */	stw r0, 0x14(r1)
/* 8014AC34 00147D14  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8014AC38 00147D18  7C 9F 23 78 */	mr r31, r4
/* 8014AC3C 00147D1C  88 04 00 05 */	lbz r0, 0x5(r4)
/* 8014AC40 00147D20  28 00 00 00 */	cmplwi r0, 0x0
/* 8014AC44 00147D24  41 82 00 14 */	beq .L_8014AC58
/* 8014AC48 00147D28  80 7F 00 00 */	lwz r3, 0x0(r31)
/* 8014AC4C 00147D2C  4B FB D8 75 */	bl JellyKill__9zNPCJellyFv
/* 8014AC50 00147D30  38 00 00 00 */	li r0, 0x0
/* 8014AC54 00147D34  98 1F 00 05 */	stb r0, 0x5(r31)
.L_8014AC58:
/* 8014AC58 00147D38  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8014AC5C 00147D3C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8014AC60 00147D40  7C 08 03 A6 */	mtlr r0
/* 8014AC64 00147D44  38 21 00 10 */	addi r1, r1, 0x10
/* 8014AC68 00147D48  4E 80 00 20 */	blr
.endfn disable_child__13zNPCKingJellyFRQ213zNPCKingJelly10child_data

# zNPCKingJelly::enable_child(zNPCKingJelly::child_data&)
.fn enable_child__13zNPCKingJellyFRQ213zNPCKingJelly10child_data, global
/* 8014AC6C 00147D4C  88 04 00 05 */	lbz r0, 0x5(r4)
/* 8014AC70 00147D50  28 00 00 00 */	cmplwi r0, 0x0
/* 8014AC74 00147D54  4C 82 00 20 */	bnelr
/* 8014AC78 00147D58  38 00 00 01 */	li r0, 0x1
/* 8014AC7C 00147D5C  98 04 00 05 */	stb r0, 0x5(r4)
/* 8014AC80 00147D60  4E 80 00 20 */	blr
.endfn enable_child__13zNPCKingJellyFRQ213zNPCKingJelly10child_data

# zNPCKingJelly::count_children(int)
.fn count_children__13zNPCKingJellyFi, global
/* 8014AC84 00147D64  80 03 08 8C */	lwz r0, 0x88c(r3)
/* 8014AC88 00147D68  38 A0 00 00 */	li r5, 0x0
/* 8014AC8C 00147D6C  7C 09 03 A6 */	mtctr r0
/* 8014AC90 00147D70  28 00 00 00 */	cmplwi r0, 0x0
/* 8014AC94 00147D74  40 81 00 1C */	ble .L_8014ACB0
.L_8014AC98:
/* 8014AC98 00147D78  88 03 03 10 */	lbz r0, 0x310(r3)
/* 8014AC9C 00147D7C  7C 00 20 00 */	cmpw r0, r4
/* 8014ACA0 00147D80  40 82 00 08 */	bne .L_8014ACA8
/* 8014ACA4 00147D84  38 A5 00 01 */	addi r5, r5, 0x1
.L_8014ACA8:
/* 8014ACA8 00147D88  38 63 00 2C */	addi r3, r3, 0x2c
/* 8014ACAC 00147D8C  42 00 FF EC */	bdnz .L_8014AC98
.L_8014ACB0:
/* 8014ACB0 00147D90  7C A3 2B 78 */	mr r3, r5
/* 8014ACB4 00147D94  4E 80 00 20 */	blr
.endfn count_children__13zNPCKingJellyFi

# zNPCKingJelly::spawn_children(int, int)
.fn spawn_children__13zNPCKingJellyFii, global
/* 8014ACB8 00147D98  94 21 FF B0 */	stwu r1, -0x50(r1)
/* 8014ACBC 00147D9C  7C 08 02 A6 */	mflr r0
/* 8014ACC0 00147DA0  38 C0 00 00 */	li r6, 0x0
/* 8014ACC4 00147DA4  90 01 00 54 */	stw r0, 0x54(r1)
/* 8014ACC8 00147DA8  BF 61 00 3C */	stmw r27, 0x3c(r1)
/* 8014ACCC 00147DAC  7C BF 2B 78 */	mr r31, r5
/* 8014ACD0 00147DB0  7C 7E 1B 78 */	mr r30, r3
/* 8014ACD4 00147DB4  38 A1 00 08 */	addi r5, r1, 0x8
/* 8014ACD8 00147DB8  3B 80 00 00 */	li r28, 0x0
/* 8014ACDC 00147DBC  80 03 08 8C */	lwz r0, 0x88c(r3)
/* 8014ACE0 00147DC0  7C 09 03 A6 */	mtctr r0
/* 8014ACE4 00147DC4  28 00 00 00 */	cmplwi r0, 0x0
/* 8014ACE8 00147DC8  40 81 00 34 */	ble .L_8014AD1C
.L_8014ACEC:
/* 8014ACEC 00147DCC  88 03 03 10 */	lbz r0, 0x310(r3)
/* 8014ACF0 00147DD0  7C 00 20 00 */	cmpw r0, r4
/* 8014ACF4 00147DD4  40 82 00 1C */	bne .L_8014AD10
/* 8014ACF8 00147DD8  88 03 03 11 */	lbz r0, 0x311(r3)
/* 8014ACFC 00147DDC  28 00 00 00 */	cmplwi r0, 0x0
/* 8014AD00 00147DE0  40 82 00 10 */	bne .L_8014AD10
/* 8014AD04 00147DE4  98 C5 00 00 */	stb r6, 0x0(r5)
/* 8014AD08 00147DE8  38 A5 00 01 */	addi r5, r5, 0x1
/* 8014AD0C 00147DEC  3B 9C 00 01 */	addi r28, r28, 0x1
.L_8014AD10:
/* 8014AD10 00147DF0  38 63 00 2C */	addi r3, r3, 0x2c
/* 8014AD14 00147DF4  38 C6 00 01 */	addi r6, r6, 0x1
/* 8014AD18 00147DF8  42 00 FF D4 */	bdnz .L_8014ACEC
.L_8014AD1C:
/* 8014AD1C 00147DFC  7C 1F E0 00 */	cmpw r31, r28
/* 8014AD20 00147E00  40 81 00 08 */	ble .L_8014AD28
/* 8014AD24 00147E04  7F 9F E3 78 */	mr r31, r28
.L_8014AD28:
/* 8014AD28 00147E08  3B A1 00 08 */	addi r29, r1, 0x8
/* 8014AD2C 00147E0C  48 00 00 88 */	b .L_8014ADB4
.L_8014AD30:
/* 8014AD30 00147E10  48 09 B4 B1 */	bl rand
/* 8014AD34 00147E14  7C 03 E3 96 */	divwu r0, r3, r28
/* 8014AD38 00147E18  7C 00 E1 D6 */	mullw r0, r0, r28
/* 8014AD3C 00147E1C  7C 00 18 50 */	subf r0, r0, r3
/* 8014AD40 00147E20  7C 1D 00 AE */	lbzx r0, r29, r0
/* 8014AD44 00147E24  1C 60 00 2C */	mulli r3, r0, 0x2c
/* 8014AD48 00147E28  3B 63 03 0C */	addi r27, r3, 0x30c
/* 8014AD4C 00147E2C  7F 7E DA 14 */	add r27, r30, r27
/* 8014AD50 00147E30  88 1B 00 05 */	lbz r0, 0x5(r27)
/* 8014AD54 00147E34  28 00 00 00 */	cmplwi r0, 0x0
/* 8014AD58 00147E38  40 82 00 5C */	bne .L_8014ADB4
/* 8014AD5C 00147E3C  7F C3 F3 78 */	mr r3, r30
/* 8014AD60 00147E40  7F 64 DB 78 */	mr r4, r27
/* 8014AD64 00147E44  4B FF FF 09 */	bl enable_child__13zNPCKingJellyFRQ213zNPCKingJelly10child_data
/* 8014AD68 00147E48  3C A0 43 30 */	lis r5, 0x4330
/* 8014AD6C 00147E4C  6F E0 80 00 */	xoris r0, r31, 0x8000
/* 8014AD70 00147E50  90 01 00 2C */	stw r0, 0x2c(r1)
/* 8014AD74 00147E54  6F 80 80 00 */	xoris r0, r28, 0x8000
/* 8014AD78 00147E58  C8 42 A6 68 */	lfd f2, "@2088"@sda21(r2)
/* 8014AD7C 00147E5C  7F C3 F3 78 */	mr r3, r30
/* 8014AD80 00147E60  90 A1 00 28 */	stw r5, 0x28(r1)
/* 8014AD84 00147E64  C0 62 A6 54 */	lfs f3, "@1992"@sda21(r2)
/* 8014AD88 00147E68  C8 01 00 28 */	lfd f0, 0x28(r1)
/* 8014AD8C 00147E6C  90 01 00 34 */	stw r0, 0x34(r1)
/* 8014AD90 00147E70  EC 20 10 28 */	fsubs f1, f0, f2
/* 8014AD94 00147E74  80 9B 00 00 */	lwz r4, 0x0(r27)
/* 8014AD98 00147E78  90 A1 00 30 */	stw r5, 0x30(r1)
/* 8014AD9C 00147E7C  C8 01 00 30 */	lfd f0, 0x30(r1)
/* 8014ADA0 00147E80  EC 23 00 72 */	fmuls f1, f3, f1
/* 8014ADA4 00147E84  EC 00 10 28 */	fsubs f0, f0, f2
/* 8014ADA8 00147E88  EC 21 00 24 */	fdivs f1, f1, f0
/* 8014ADAC 00147E8C  48 00 00 25 */	bl move_to_spawn_position__13zNPCKingJellyFR10zNPCCommonf
/* 8014ADB0 00147E90  3B FF FF FF */	addi r31, r31, -0x1
.L_8014ADB4:
/* 8014ADB4 00147E94  2C 1F 00 00 */	cmpwi r31, 0x0
/* 8014ADB8 00147E98  41 81 FF 78 */	bgt .L_8014AD30
/* 8014ADBC 00147E9C  BB 61 00 3C */	lmw r27, 0x3c(r1)
/* 8014ADC0 00147EA0  80 01 00 54 */	lwz r0, 0x54(r1)
/* 8014ADC4 00147EA4  7C 08 03 A6 */	mtlr r0
/* 8014ADC8 00147EA8  38 21 00 50 */	addi r1, r1, 0x50
/* 8014ADCC 00147EAC  4E 80 00 20 */	blr
.endfn spawn_children__13zNPCKingJellyFii

# zNPCKingJelly::move_to_spawn_position(zNPCCommon&, float)
.fn move_to_spawn_position__13zNPCKingJellyFR10zNPCCommonf, global
/* 8014ADD0 00147EB0  94 21 FF C0 */	stwu r1, -0x40(r1)
/* 8014ADD4 00147EB4  7C 08 02 A6 */	mflr r0
/* 8014ADD8 00147EB8  90 01 00 44 */	stw r0, 0x44(r1)
/* 8014ADDC 00147EBC  DB E1 00 30 */	stfd f31, 0x30(r1)
/* 8014ADE0 00147EC0  F3 E1 00 38 */	psq_st f31, 0x38(r1), 0, qr0
/* 8014ADE4 00147EC4  93 E1 00 2C */	stw r31, 0x2c(r1)
/* 8014ADE8 00147EC8  93 C1 00 28 */	stw r30, 0x28(r1)
/* 8014ADEC 00147ECC  FF E0 08 90 */	fmr f31, f1
/* 8014ADF0 00147ED0  7C 60 1B 78 */	mr r0, r3
/* 8014ADF4 00147ED4  7C 9E 23 78 */	mr r30, r4
/* 8014ADF8 00147ED8  38 61 00 08 */	addi r3, r1, 0x8
/* 8014ADFC 00147EDC  7C 04 03 78 */	mr r4, r0
/* 8014AE00 00147EE0  48 00 3A 19 */	bl get_center__13zNPCKingJellyCFv
/* 8014AE04 00147EE4  80 81 00 08 */	lwz r4, 0x8(r1)
/* 8014AE08 00147EE8  80 61 00 0C */	lwz r3, 0xc(r1)
/* 8014AE0C 00147EEC  80 01 00 10 */	lwz r0, 0x10(r1)
/* 8014AE10 00147EF0  90 81 00 14 */	stw r4, 0x14(r1)
/* 8014AE14 00147EF4  90 61 00 18 */	stw r3, 0x18(r1)
/* 8014AE18 00147EF8  90 01 00 1C */	stw r0, 0x1c(r1)
/* 8014AE1C 00147EFC  4B EE 5E 6D */	bl xurand__Fv
/* 8014AE20 00147F00  C0 42 A6 50 */	lfs f2, "@1987"@sda21(r2)
/* 8014AE24 00147F04  3C 60 80 33 */	lis r3, "tweak__31@unnamed@zNPCTypeKingJelly_cpp@"@ha
/* 8014AE28 00147F08  38 63 85 38 */	addi r3, r3, "tweak__31@unnamed@zNPCTypeKingJelly_cpp@"@l
/* 8014AE2C 00147F0C  C0 01 00 18 */	lfs f0, 0x18(r1)
/* 8014AE30 00147F10  EC 61 10 28 */	fsubs f3, f1, f2
/* 8014AE34 00147F14  C0 43 00 6C */	lfs f2, 0x6c(r3)
/* 8014AE38 00147F18  FC 20 F8 90 */	fmr f1, f31
/* 8014AE3C 00147F1C  EC 42 18 2A */	fadds f2, f2, f3
/* 8014AE40 00147F20  EC 00 10 2A */	fadds f0, f0, f2
/* 8014AE44 00147F24  D0 01 00 18 */	stfs f0, 0x18(r1)
/* 8014AE48 00147F28  4B F7 A0 49 */	bl icos__Ff
/* 8014AE4C 00147F2C  3C 60 80 33 */	lis r3, "tweak__31@unnamed@zNPCTypeKingJelly_cpp@"@ha
/* 8014AE50 00147F30  C0 01 00 14 */	lfs f0, 0x14(r1)
/* 8014AE54 00147F34  3B E3 85 38 */	addi r31, r3, "tweak__31@unnamed@zNPCTypeKingJelly_cpp@"@l
/* 8014AE58 00147F38  C0 5F 00 70 */	lfs f2, 0x70(r31)
/* 8014AE5C 00147F3C  EC 02 00 7A */	fmadds f0, f2, f1, f0
/* 8014AE60 00147F40  FC 20 F8 90 */	fmr f1, f31
/* 8014AE64 00147F44  D0 01 00 14 */	stfs f0, 0x14(r1)
/* 8014AE68 00147F48  4B F7 9F E5 */	bl isin__Ff
/* 8014AE6C 00147F4C  C0 5F 00 70 */	lfs f2, 0x70(r31)
/* 8014AE70 00147F50  7F C3 F3 78 */	mr r3, r30
/* 8014AE74 00147F54  C0 01 00 1C */	lfs f0, 0x1c(r1)
/* 8014AE78 00147F58  EC 02 00 7A */	fmadds f0, f2, f1, f0
/* 8014AE7C 00147F5C  D0 01 00 1C */	stfs f0, 0x1c(r1)
/* 8014AE80 00147F60  81 9E 01 B8 */	lwz r12, 0x1b8(r30)
/* 8014AE84 00147F64  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 8014AE88 00147F68  7D 89 03 A6 */	mtctr r12
/* 8014AE8C 00147F6C  4E 80 04 21 */	bctrl
/* 8014AE90 00147F70  3C 80 80 33 */	lis r4, "tweak__31@unnamed@zNPCTypeKingJelly_cpp@"@ha
/* 8014AE94 00147F74  7F C3 F3 78 */	mr r3, r30
/* 8014AE98 00147F78  38 A4 85 38 */	addi r5, r4, "tweak__31@unnamed@zNPCTypeKingJelly_cpp@"@l
/* 8014AE9C 00147F7C  38 81 00 14 */	addi r4, r1, 0x14
/* 8014AEA0 00147F80  C0 25 00 78 */	lfs f1, 0x78(r5)
/* 8014AEA4 00147F84  4B FB D5 AD */	bl JellySpawn__9zNPCJellyFPC5xVec3f
/* 8014AEA8 00147F88  E3 E1 00 38 */	psq_l f31, 0x38(r1), 0, qr0
/* 8014AEAC 00147F8C  80 01 00 44 */	lwz r0, 0x44(r1)
/* 8014AEB0 00147F90  CB E1 00 30 */	lfd f31, 0x30(r1)
/* 8014AEB4 00147F94  83 E1 00 2C */	lwz r31, 0x2c(r1)
/* 8014AEB8 00147F98  83 C1 00 28 */	lwz r30, 0x28(r1)
/* 8014AEBC 00147F9C  7C 08 03 A6 */	mtlr r0
/* 8014AEC0 00147FA0  38 21 00 40 */	addi r1, r1, 0x40
/* 8014AEC4 00147FA4  4E 80 00 20 */	blr
.endfn move_to_spawn_position__13zNPCKingJellyFR10zNPCCommonf

# zNPCKingJelly::taunt()
.fn taunt__13zNPCKingJellyFv, global
/* 8014AEC8 00147FA8  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8014AECC 00147FAC  7C 08 02 A6 */	mflr r0
/* 8014AED0 00147FB0  90 01 00 14 */	stw r0, 0x14(r1)
/* 8014AED4 00147FB4  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8014AED8 00147FB8  7C 7F 1B 78 */	mr r31, r3
/* 8014AEDC 00147FBC  80 63 02 28 */	lwz r3, 0x228(r3)
/* 8014AEE0 00147FC0  4B FC 26 E5 */	bl GIDOfActive__7xPsycheCFv
/* 8014AEE4 00147FC4  3C 80 4E 47 */	lis r4, 0x4e47
/* 8014AEE8 00147FC8  38 04 4D 35 */	addi r0, r4, 0x4d35
/* 8014AEEC 00147FCC  7C 03 00 00 */	cmpw r3, r0
/* 8014AEF0 00147FD0  41 82 00 28 */	beq .L_8014AF18
/* 8014AEF4 00147FD4  40 80 00 14 */	bge .L_8014AF08
/* 8014AEF8 00147FD8  38 04 4D 34 */	addi r0, r4, 0x4d34
/* 8014AEFC 00147FDC  7C 03 00 00 */	cmpw r3, r0
/* 8014AF00 00147FE0  40 80 00 2C */	bge .L_8014AF2C
/* 8014AF04 00147FE4  48 00 00 14 */	b .L_8014AF18
.L_8014AF08:
/* 8014AF08 00147FE8  38 04 4D 38 */	addi r0, r4, 0x4d38
/* 8014AF0C 00147FEC  7C 03 00 00 */	cmpw r3, r0
/* 8014AF10 00147FF0  40 80 00 08 */	bge .L_8014AF18
/* 8014AF14 00147FF4  48 00 00 18 */	b .L_8014AF2C
.L_8014AF18:
/* 8014AF18 00147FF8  3C 80 4E 47 */	lis r4, 0x4e47
/* 8014AF1C 00147FFC  80 7F 02 28 */	lwz r3, 0x228(r31)
/* 8014AF20 00148000  38 84 4D 34 */	addi r4, r4, 0x4d34
/* 8014AF24 00148004  38 A0 00 01 */	li r5, 0x1
/* 8014AF28 00148008  4B FC 28 09 */	bl GoalSet__7xPsycheFii
.L_8014AF2C:
/* 8014AF2C 0014800C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8014AF30 00148010  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8014AF34 00148014  7C 08 03 A6 */	mtlr r0
/* 8014AF38 00148018  38 21 00 10 */	addi r1, r1, 0x10
/* 8014AF3C 0014801C  4E 80 00 20 */	blr
.endfn taunt__13zNPCKingJellyFv

# zNPCKingJelly::repel_player()
.fn repel_player__13zNPCKingJellyFv, global
/* 8014AF40 00148020  94 21 FF 70 */	stwu r1, -0x90(r1)
/* 8014AF44 00148024  7C 08 02 A6 */	mflr r0
/* 8014AF48 00148028  90 01 00 94 */	stw r0, 0x94(r1)
/* 8014AF4C 0014802C  DB E1 00 80 */	stfd f31, 0x80(r1)
/* 8014AF50 00148030  F3 E1 00 88 */	psq_st f31, 0x88(r1), 0, qr0
/* 8014AF54 00148034  DB C1 00 70 */	stfd f30, 0x70(r1)
/* 8014AF58 00148038  F3 C1 00 78 */	psq_st f30, 0x78(r1), 0, qr0
/* 8014AF5C 0014803C  93 E1 00 6C */	stw r31, 0x6c(r1)
/* 8014AF60 00148040  93 C1 00 68 */	stw r30, 0x68(r1)
/* 8014AF64 00148044  93 A1 00 64 */	stw r29, 0x64(r1)
/* 8014AF68 00148048  93 81 00 60 */	stw r28, 0x60(r1)
/* 8014AF6C 0014804C  3C 80 80 3C */	lis r4, globals@ha
/* 8014AF70 00148050  7C 7C 1B 78 */	mr r28, r3
/* 8014AF74 00148054  38 64 05 58 */	addi r3, r4, globals@l
/* 8014AF78 00148058  80 03 1A FC */	lwz r0, 0x1afc(r3)
/* 8014AF7C 0014805C  2C 00 00 00 */	cmpwi r0, 0x0
/* 8014AF80 00148060  40 82 01 88 */	bne .L_8014B108
/* 8014AF84 00148064  7F 84 E3 78 */	mr r4, r28
/* 8014AF88 00148068  38 61 00 2C */	addi r3, r1, 0x2c
/* 8014AF8C 0014806C  48 00 38 8D */	bl get_center__13zNPCKingJellyCFv
/* 8014AF90 00148070  80 81 00 2C */	lwz r4, 0x2c(r1)
/* 8014AF94 00148074  3C 60 80 3C */	lis r3, globals@ha
/* 8014AF98 00148078  3B E3 05 58 */	addi r31, r3, globals@l
/* 8014AF9C 0014807C  80 E1 00 30 */	lwz r7, 0x30(r1)
/* 8014AFA0 00148080  80 01 00 34 */	lwz r0, 0x34(r1)
/* 8014AFA4 00148084  38 61 00 20 */	addi r3, r1, 0x20
/* 8014AFA8 00148088  90 81 00 50 */	stw r4, 0x50(r1)
/* 8014AFAC 0014808C  38 A1 00 50 */	addi r5, r1, 0x50
/* 8014AFB0 00148090  80 DF 07 04 */	lwz r6, 0x704(r31)
/* 8014AFB4 00148094  80 9F 07 28 */	lwz r4, 0x728(r31)
/* 8014AFB8 00148098  90 E1 00 54 */	stw r7, 0x54(r1)
/* 8014AFBC 0014809C  3B A4 00 D4 */	addi r29, r4, 0xd4
/* 8014AFC0 001480A0  90 01 00 58 */	stw r0, 0x58(r1)
/* 8014AFC4 001480A4  80 86 00 4C */	lwz r4, 0x4c(r6)
/* 8014AFC8 001480A8  3B C4 00 30 */	addi r30, r4, 0x30
/* 8014AFCC 001480AC  7F C4 F3 78 */	mr r4, r30
/* 8014AFD0 001480B0  4B EC 01 FD */	bl __mi__5xVec3CFRC5xVec3
/* 8014AFD4 001480B4  80 A1 00 20 */	lwz r5, 0x20(r1)
/* 8014AFD8 001480B8  38 61 00 44 */	addi r3, r1, 0x44
/* 8014AFDC 001480BC  80 81 00 24 */	lwz r4, 0x24(r1)
/* 8014AFE0 001480C0  80 01 00 28 */	lwz r0, 0x28(r1)
/* 8014AFE4 001480C4  90 A1 00 44 */	stw r5, 0x44(r1)
/* 8014AFE8 001480C8  90 81 00 48 */	stw r4, 0x48(r1)
/* 8014AFEC 001480CC  90 01 00 4C */	stw r0, 0x4c(r1)
/* 8014AFF0 001480D0  C0 02 A6 34 */	lfs f0, "@1869"@sda21(r2)
/* 8014AFF4 001480D4  D0 01 00 48 */	stfs f0, 0x48(r1)
/* 8014AFF8 001480D8  4B EC 01 05 */	bl length2__5xVec3CFv
/* 8014AFFC 001480DC  FF E0 08 90 */	fmr f31, f1
/* 8014B000 001480E0  7F 83 E3 78 */	mr r3, r28
/* 8014B004 001480E4  48 00 38 75 */	bl get_bottom__13zNPCKingJellyCFv
/* 8014B008 001480E8  C0 3C 00 8C */	lfs f1, 0x8c(r28)
/* 8014B00C 001480EC  C0 1C 00 94 */	lfs f0, 0x94(r28)
/* 8014B010 001480F0  C0 43 00 04 */	lfs f2, 0x4(r3)
/* 8014B014 001480F4  EC 21 00 28 */	fsubs f1, f1, f0
/* 8014B018 001480F8  C0 02 A6 4C */	lfs f0, "@1976"@sda21(r2)
/* 8014B01C 001480FC  EC 21 10 28 */	fsubs f1, f1, f2
/* 8014B020 00148100  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8014B024 00148104  40 80 00 14 */	bge .L_8014B038
/* 8014B028 00148108  3C 60 80 33 */	lis r3, "tweak__31@unnamed@zNPCTypeKingJelly_cpp@"@ha
/* 8014B02C 0014810C  38 63 85 38 */	addi r3, r3, "tweak__31@unnamed@zNPCTypeKingJelly_cpp@"@l
/* 8014B030 00148110  C3 C3 00 20 */	lfs f30, 0x20(r3)
/* 8014B034 00148114  48 00 00 10 */	b .L_8014B044
.L_8014B038:
/* 8014B038 00148118  3C 60 80 33 */	lis r3, "tweak__31@unnamed@zNPCTypeKingJelly_cpp@"@ha
/* 8014B03C 0014811C  38 63 85 38 */	addi r3, r3, "tweak__31@unnamed@zNPCTypeKingJelly_cpp@"@l
/* 8014B040 00148120  C3 C3 00 1C */	lfs f30, 0x1c(r3)
.L_8014B044:
/* 8014B044 00148124  C0 02 A7 48 */	lfs f0, "@2743"@sda21(r2)
/* 8014B048 00148128  FC 1F 00 40 */	fcmpo cr0, f31, f0
/* 8014B04C 0014812C  4C 41 13 82 */	cror eq, gt, eq
/* 8014B050 00148130  40 82 00 14 */	bne .L_8014B064
/* 8014B054 00148134  C0 02 A7 4C */	lfs f0, "@2744"@sda21(r2)
/* 8014B058 00148138  FC 1F 00 40 */	fcmpo cr0, f31, f0
/* 8014B05C 0014813C  4C 40 13 82 */	cror eq, lt, eq
/* 8014B060 00148140  41 82 00 A8 */	beq .L_8014B108
.L_8014B064:
/* 8014B064 00148144  EC 1E 07 B2 */	fmuls f0, f30, f30
/* 8014B068 00148148  FC 1F 00 40 */	fcmpo cr0, f31, f0
/* 8014B06C 0014814C  4C 41 13 82 */	cror eq, gt, eq
/* 8014B070 00148150  40 82 00 08 */	bne .L_8014B078
/* 8014B074 00148154  48 00 00 94 */	b .L_8014B108
.L_8014B078:
/* 8014B078 00148158  FC 20 F8 90 */	fmr f1, f31
/* 8014B07C 0014815C  4B EB F7 81 */	bl xsqrt__Ff
/* 8014B080 00148160  80 A1 00 44 */	lwz r5, 0x44(r1)
/* 8014B084 00148164  FF E0 08 90 */	fmr f31, f1
/* 8014B088 00148168  80 81 00 48 */	lwz r4, 0x48(r1)
/* 8014B08C 0014816C  38 61 00 38 */	addi r3, r1, 0x38
/* 8014B090 00148170  80 01 00 4C */	lwz r0, 0x4c(r1)
/* 8014B094 00148174  90 A1 00 38 */	stw r5, 0x38(r1)
/* 8014B098 00148178  90 81 00 3C */	stw r4, 0x3c(r1)
/* 8014B09C 0014817C  90 01 00 40 */	stw r0, 0x40(r1)
/* 8014B0A0 00148180  C0 02 A6 30 */	lfs f0, "@1868"@sda21(r2)
/* 8014B0A4 00148184  EC 20 F8 24 */	fdivs f1, f0, f31
/* 8014B0A8 00148188  4B EC 00 D9 */	bl __amu__5xVec3Ff
/* 8014B0AC 0014818C  7F A3 EB 78 */	mr r3, r29
/* 8014B0B0 00148190  38 81 00 38 */	addi r4, r1, 0x38
/* 8014B0B4 00148194  4B EC A4 59 */	bl dot__5xVec3CFRC5xVec3
/* 8014B0B8 00148198  C0 02 A6 34 */	lfs f0, "@1869"@sda21(r2)
/* 8014B0BC 0014819C  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8014B0C0 001481A0  40 80 00 1C */	bge .L_8014B0DC
/* 8014B0C4 001481A4  38 61 00 14 */	addi r3, r1, 0x14
/* 8014B0C8 001481A8  38 81 00 38 */	addi r4, r1, 0x38
/* 8014B0CC 001481AC  4B EC 00 55 */	bl __ml__5xVec3CFf
/* 8014B0D0 001481B0  7F A3 EB 78 */	mr r3, r29
/* 8014B0D4 001481B4  38 81 00 14 */	addi r4, r1, 0x14
/* 8014B0D8 001481B8  4B EC 01 59 */	bl __ami__5xVec3FRC5xVec3
.L_8014B0DC:
/* 8014B0DC 001481BC  EC 3E F8 28 */	fsubs f1, f30, f31
/* 8014B0E0 001481C0  38 61 00 08 */	addi r3, r1, 0x8
/* 8014B0E4 001481C4  38 81 00 38 */	addi r4, r1, 0x38
/* 8014B0E8 001481C8  4B EC 00 39 */	bl __ml__5xVec3CFf
/* 8014B0EC 001481CC  7F C3 F3 78 */	mr r3, r30
/* 8014B0F0 001481D0  38 81 00 08 */	addi r4, r1, 0x8
/* 8014B0F4 001481D4  4B EC A3 51 */	bl __apl__5xVec3FRC5xVec3
/* 8014B0F8 001481D8  80 7F 07 28 */	lwz r3, 0x728(r31)
/* 8014B0FC 001481DC  7F C4 F3 78 */	mr r4, r30
/* 8014B100 001481E0  38 63 00 30 */	addi r3, r3, 0x30
/* 8014B104 001481E4  4B EC 01 61 */	bl __as__5xVec3FRC5xVec3
.L_8014B108:
/* 8014B108 001481E8  E3 E1 00 88 */	psq_l f31, 0x88(r1), 0, qr0
/* 8014B10C 001481EC  CB E1 00 80 */	lfd f31, 0x80(r1)
/* 8014B110 001481F0  E3 C1 00 78 */	psq_l f30, 0x78(r1), 0, qr0
/* 8014B114 001481F4  CB C1 00 70 */	lfd f30, 0x70(r1)
/* 8014B118 001481F8  83 E1 00 6C */	lwz r31, 0x6c(r1)
/* 8014B11C 001481FC  83 C1 00 68 */	lwz r30, 0x68(r1)
/* 8014B120 00148200  83 A1 00 64 */	lwz r29, 0x64(r1)
/* 8014B124 00148204  80 01 00 94 */	lwz r0, 0x94(r1)
/* 8014B128 00148208  83 81 00 60 */	lwz r28, 0x60(r1)
/* 8014B12C 0014820C  7C 08 03 A6 */	mtlr r0
/* 8014B130 00148210  38 21 00 90 */	addi r1, r1, 0x90
/* 8014B134 00148214  4E 80 00 20 */	blr
.endfn repel_player__13zNPCKingJellyFv

# @unnamed@zNPCTypeKingJelly_cpp@::sphere_hits_line(const xSphere&, const xVec3&, const xVec3&, float)
.fn "sphere_hits_line__31@unnamed@zNPCTypeKingJelly_cpp@FRC7xSphereRC5xVec3RC5xVec3f", local
/* 8014B138 00148218  94 21 FF 90 */	stwu r1, -0x70(r1)
/* 8014B13C 0014821C  7C 08 02 A6 */	mflr r0
/* 8014B140 00148220  90 01 00 74 */	stw r0, 0x74(r1)
/* 8014B144 00148224  DB E1 00 60 */	stfd f31, 0x60(r1)
/* 8014B148 00148228  F3 E1 00 68 */	psq_st f31, 0x68(r1), 0, qr0
/* 8014B14C 0014822C  DB C1 00 50 */	stfd f30, 0x50(r1)
/* 8014B150 00148230  F3 C1 00 58 */	psq_st f30, 0x58(r1), 0, qr0
/* 8014B154 00148234  DB A1 00 40 */	stfd f29, 0x40(r1)
/* 8014B158 00148238  F3 A1 00 48 */	psq_st f29, 0x48(r1), 0, qr0
/* 8014B15C 0014823C  93 E1 00 3C */	stw r31, 0x3c(r1)
/* 8014B160 00148240  93 C1 00 38 */	stw r30, 0x38(r1)
/* 8014B164 00148244  FF A0 08 90 */	fmr f29, f1
/* 8014B168 00148248  7C 9F 23 78 */	mr r31, r4
/* 8014B16C 0014824C  7C 7E 1B 78 */	mr r30, r3
/* 8014B170 00148250  7C A4 2B 78 */	mr r4, r5
/* 8014B174 00148254  38 61 00 14 */	addi r3, r1, 0x14
/* 8014B178 00148258  7F E5 FB 78 */	mr r5, r31
/* 8014B17C 0014825C  4B EC 00 51 */	bl __mi__5xVec3CFRC5xVec3
/* 8014B180 00148260  80 E1 00 14 */	lwz r7, 0x14(r1)
/* 8014B184 00148264  7F E4 FB 78 */	mr r4, r31
/* 8014B188 00148268  80 C1 00 18 */	lwz r6, 0x18(r1)
/* 8014B18C 0014826C  7F C5 F3 78 */	mr r5, r30
/* 8014B190 00148270  80 01 00 1C */	lwz r0, 0x1c(r1)
/* 8014B194 00148274  38 61 00 08 */	addi r3, r1, 0x8
/* 8014B198 00148278  90 E1 00 2C */	stw r7, 0x2c(r1)
/* 8014B19C 0014827C  90 C1 00 30 */	stw r6, 0x30(r1)
/* 8014B1A0 00148280  90 01 00 34 */	stw r0, 0x34(r1)
/* 8014B1A4 00148284  4B EC 00 29 */	bl __mi__5xVec3CFRC5xVec3
/* 8014B1A8 00148288  C0 1E 00 0C */	lfs f0, 0xc(r30)
/* 8014B1AC 0014828C  38 61 00 2C */	addi r3, r1, 0x2c
/* 8014B1B0 00148290  80 A1 00 08 */	lwz r5, 0x8(r1)
/* 8014B1B4 00148294  80 81 00 0C */	lwz r4, 0xc(r1)
/* 8014B1B8 00148298  EF C0 E8 2A */	fadds f30, f0, f29
/* 8014B1BC 0014829C  80 01 00 10 */	lwz r0, 0x10(r1)
/* 8014B1C0 001482A0  90 A1 00 20 */	stw r5, 0x20(r1)
/* 8014B1C4 001482A4  90 81 00 24 */	stw r4, 0x24(r1)
/* 8014B1C8 001482A8  90 01 00 28 */	stw r0, 0x28(r1)
/* 8014B1CC 001482AC  4B EB FF 31 */	bl length2__5xVec3CFv
/* 8014B1D0 001482B0  FF E0 08 90 */	fmr f31, f1
/* 8014B1D4 001482B4  38 61 00 2C */	addi r3, r1, 0x2c
/* 8014B1D8 001482B8  38 81 00 20 */	addi r4, r1, 0x20
/* 8014B1DC 001482BC  4B EC A3 31 */	bl dot__5xVec3CFRC5xVec3
/* 8014B1E0 001482C0  C0 02 A6 4C */	lfs f0, "@1976"@sda21(r2)
/* 8014B1E4 001482C4  38 61 00 20 */	addi r3, r1, 0x20
/* 8014B1E8 001482C8  EF A0 00 72 */	fmuls f29, f0, f1
/* 8014B1EC 001482CC  4B EB FF 11 */	bl length2__5xVec3CFv
/* 8014B1F0 001482D0  C0 42 A6 8C */	lfs f2, "@2406"@sda21(r2)
/* 8014B1F4 001482D4  EC 7E 0F BC */	fnmsubs f3, f30, f30, f1
/* 8014B1F8 001482D8  C0 02 A6 34 */	lfs f0, "@1869"@sda21(r2)
/* 8014B1FC 001482DC  EC 22 07 F2 */	fmuls f1, f2, f31
/* 8014B200 001482E0  EC 21 00 F2 */	fmuls f1, f1, f3
/* 8014B204 001482E4  EC 3D 0F 78 */	fmsubs f1, f29, f29, f1
/* 8014B208 001482E8  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8014B20C 001482EC  40 80 00 0C */	bge .L_8014B218
/* 8014B210 001482F0  38 60 00 00 */	li r3, 0x0
/* 8014B214 001482F4  48 00 00 70 */	b .L_8014B284
.L_8014B218:
/* 8014B218 001482F8  4B EB F5 E5 */	bl xsqrt__Ff
/* 8014B21C 001482FC  C0 02 A6 4C */	lfs f0, "@1976"@sda21(r2)
/* 8014B220 00148300  FC A0 E8 50 */	fneg f5, f29
/* 8014B224 00148304  C0 82 A6 30 */	lfs f4, "@1868"@sda21(r2)
/* 8014B228 00148308  38 60 00 00 */	li r3, 0x0
/* 8014B22C 0014830C  EC 60 07 F2 */	fmuls f3, f0, f31
/* 8014B230 00148310  C0 02 A6 34 */	lfs f0, "@1869"@sda21(r2)
/* 8014B234 00148314  EC 45 08 2A */	fadds f2, f5, f1
/* 8014B238 00148318  EC 25 08 28 */	fsubs f1, f5, f1
/* 8014B23C 0014831C  EC 64 18 24 */	fdivs f3, f4, f3
/* 8014B240 00148320  EC 43 00 B2 */	fmuls f2, f3, f2
/* 8014B244 00148324  EC 23 00 72 */	fmuls f1, f3, f1
/* 8014B248 00148328  FC 02 00 40 */	fcmpo cr0, f2, f0
/* 8014B24C 0014832C  4C 41 13 82 */	cror eq, gt, eq
/* 8014B250 00148330  40 82 00 10 */	bne .L_8014B260
/* 8014B254 00148334  FC 02 20 40 */	fcmpo cr0, f2, f4
/* 8014B258 00148338  4C 40 13 82 */	cror eq, lt, eq
/* 8014B25C 0014833C  41 82 00 24 */	beq .L_8014B280
.L_8014B260:
/* 8014B260 00148340  C0 02 A6 34 */	lfs f0, "@1869"@sda21(r2)
/* 8014B264 00148344  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8014B268 00148348  4C 41 13 82 */	cror eq, gt, eq
/* 8014B26C 0014834C  40 82 00 18 */	bne .L_8014B284
/* 8014B270 00148350  C0 02 A6 30 */	lfs f0, "@1868"@sda21(r2)
/* 8014B274 00148354  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8014B278 00148358  4C 40 13 82 */	cror eq, lt, eq
/* 8014B27C 0014835C  40 82 00 08 */	bne .L_8014B284
.L_8014B280:
/* 8014B280 00148360  38 60 00 01 */	li r3, 0x1
.L_8014B284:
/* 8014B284 00148364  E3 E1 00 68 */	psq_l f31, 0x68(r1), 0, qr0
/* 8014B288 00148368  CB E1 00 60 */	lfd f31, 0x60(r1)
/* 8014B28C 0014836C  E3 C1 00 58 */	psq_l f30, 0x58(r1), 0, qr0
/* 8014B290 00148370  CB C1 00 50 */	lfd f30, 0x50(r1)
/* 8014B294 00148374  E3 A1 00 48 */	psq_l f29, 0x48(r1), 0, qr0
/* 8014B298 00148378  CB A1 00 40 */	lfd f29, 0x40(r1)
/* 8014B29C 0014837C  83 E1 00 3C */	lwz r31, 0x3c(r1)
/* 8014B2A0 00148380  80 01 00 74 */	lwz r0, 0x74(r1)
/* 8014B2A4 00148384  83 C1 00 38 */	lwz r30, 0x38(r1)
/* 8014B2A8 00148388  7C 08 03 A6 */	mtlr r0
/* 8014B2AC 0014838C  38 21 00 70 */	addi r1, r1, 0x70
/* 8014B2B0 00148390  4E 80 00 20 */	blr
.endfn "sphere_hits_line__31@unnamed@zNPCTypeKingJelly_cpp@FRC7xSphereRC5xVec3RC5xVec3f"

# @unnamed@zNPCTypeKingJelly_cpp@::sphere_hits_sphere_xz(const xSphere&, const xSphere&)
.fn "sphere_hits_sphere_xz__31@unnamed@zNPCTypeKingJelly_cpp@FRC7xSphereRC7xSphere", local
/* 8014B2B4 00148394  C0 24 00 08 */	lfs f1, 0x8(r4)
/* 8014B2B8 00148398  C0 03 00 08 */	lfs f0, 0x8(r3)
/* 8014B2BC 0014839C  C0 44 00 00 */	lfs f2, 0x0(r4)
/* 8014B2C0 001483A0  EC 81 00 28 */	fsubs f4, f1, f0
/* 8014B2C4 001483A4  C0 03 00 00 */	lfs f0, 0x0(r3)
/* 8014B2C8 001483A8  C0 64 00 0C */	lfs f3, 0xc(r4)
/* 8014B2CC 001483AC  C0 23 00 0C */	lfs f1, 0xc(r3)
/* 8014B2D0 001483B0  EC 42 00 28 */	fsubs f2, f2, f0
/* 8014B2D4 001483B4  EC 04 01 32 */	fmuls f0, f4, f4
/* 8014B2D8 001483B8  EC 83 08 2A */	fadds f4, f3, f1
/* 8014B2DC 001483BC  EC 23 08 28 */	fsubs f1, f3, f1
/* 8014B2E0 001483C0  EC 42 00 BA */	fmadds f2, f2, f2, f0
/* 8014B2E4 001483C4  EC 04 01 32 */	fmuls f0, f4, f4
/* 8014B2E8 001483C8  FC 02 00 40 */	fcmpo cr0, f2, f0
/* 8014B2EC 001483CC  40 81 00 0C */	ble .L_8014B2F8
/* 8014B2F0 001483D0  38 60 00 04 */	li r3, 0x4
/* 8014B2F4 001483D4  4E 80 00 20 */	blr
.L_8014B2F8:
/* 8014B2F8 001483D8  EC 01 00 72 */	fmuls f0, f1, f1
/* 8014B2FC 001483DC  FC 02 00 40 */	fcmpo cr0, f2, f0
/* 8014B300 001483E0  40 80 00 0C */	bge .L_8014B30C
/* 8014B304 001483E4  38 60 00 02 */	li r3, 0x2
/* 8014B308 001483E8  4E 80 00 20 */	blr
.L_8014B30C:
/* 8014B30C 001483EC  38 60 00 01 */	li r3, 0x1
/* 8014B310 001483F0  4E 80 00 20 */	blr
.endfn "sphere_hits_sphere_xz__31@unnamed@zNPCTypeKingJelly_cpp@FRC7xSphereRC7xSphere"

# zNPCKingJelly::get_away() const
.fn get_away__13zNPCKingJellyCFv, global
/* 8014B314 001483F4  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 8014B318 001483F8  7C 08 02 A6 */	mflr r0
/* 8014B31C 001483FC  3C A0 80 3C */	lis r5, globals@ha
/* 8014B320 00148400  C0 44 00 88 */	lfs f2, 0x88(r4)
/* 8014B324 00148404  90 01 00 24 */	stw r0, 0x24(r1)
/* 8014B328 00148408  38 A5 05 58 */	addi r5, r5, globals@l
/* 8014B32C 0014840C  C0 04 00 90 */	lfs f0, 0x90(r4)
/* 8014B330 00148410  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 8014B334 00148414  7C 7F 1B 78 */	mr r31, r3
/* 8014B338 00148418  C0 65 07 68 */	lfs f3, 0x768(r5)
/* 8014B33C 0014841C  C0 25 07 70 */	lfs f1, 0x770(r5)
/* 8014B340 00148420  EC 43 10 28 */	fsubs f2, f3, f2
/* 8014B344 00148424  EC 21 00 28 */	fsubs f1, f1, f0
/* 8014B348 00148428  D0 41 00 08 */	stfs f2, 0x8(r1)
/* 8014B34C 0014842C  EC 42 00 B2 */	fmuls f2, f2, f2
/* 8014B350 00148430  EC 01 00 72 */	fmuls f0, f1, f1
/* 8014B354 00148434  D0 21 00 10 */	stfs f1, 0x10(r1)
/* 8014B358 00148438  C0 22 A6 34 */	lfs f1, "@1869"@sda21(r2)
/* 8014B35C 0014843C  EC 42 00 2A */	fadds f2, f2, f0
/* 8014B360 00148440  D0 21 00 0C */	stfs f1, 0xc(r1)
/* 8014B364 00148444  C0 02 A6 88 */	lfs f0, "@2197"@sda21(r2)
/* 8014B368 00148448  FC 02 00 40 */	fcmpo cr0, f2, f0
/* 8014B36C 0014844C  40 80 00 18 */	bge .L_8014B384
/* 8014B370 00148450  FC 60 08 90 */	fmr f3, f1
/* 8014B374 00148454  C0 42 A6 30 */	lfs f2, "@1868"@sda21(r2)
/* 8014B378 00148458  38 61 00 08 */	addi r3, r1, 0x8
/* 8014B37C 0014845C  4B EB FD 71 */	bl assign__5xVec3Ffff
/* 8014B380 00148460  48 00 00 34 */	b .L_8014B3B4
.L_8014B384:
/* 8014B384 00148464  FC 20 10 90 */	fmr f1, f2
/* 8014B388 00148468  4B EB F4 75 */	bl xsqrt__Ff
/* 8014B38C 0014846C  C0 02 A6 30 */	lfs f0, "@1868"@sda21(r2)
/* 8014B390 00148470  38 61 00 08 */	addi r3, r1, 0x8
/* 8014B394 00148474  C0 42 A7 50 */	lfs f2, "@2823"@sda21(r2)
/* 8014B398 00148478  EC 60 08 24 */	fdivs f3, f0, f1
/* 8014B39C 0014847C  C0 21 00 08 */	lfs f1, 0x8(r1)
/* 8014B3A0 00148480  C0 01 00 10 */	lfs f0, 0x10(r1)
/* 8014B3A4 00148484  EC 62 00 F2 */	fmuls f3, f2, f3
/* 8014B3A8 00148488  EC 21 00 F2 */	fmuls f1, f1, f3
/* 8014B3AC 0014848C  EC 60 00 F2 */	fmuls f3, f0, f3
/* 8014B3B0 00148490  4B EB FD 3D */	bl assign__5xVec3Ffff
.L_8014B3B4:
/* 8014B3B4 00148494  80 61 00 08 */	lwz r3, 0x8(r1)
/* 8014B3B8 00148498  80 01 00 0C */	lwz r0, 0xc(r1)
/* 8014B3BC 0014849C  90 7F 00 00 */	stw r3, 0x0(r31)
/* 8014B3C0 001484A0  90 1F 00 04 */	stw r0, 0x4(r31)
/* 8014B3C4 001484A4  80 01 00 10 */	lwz r0, 0x10(r1)
/* 8014B3C8 001484A8  90 1F 00 08 */	stw r0, 0x8(r31)
/* 8014B3CC 001484AC  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 8014B3D0 001484B0  80 01 00 24 */	lwz r0, 0x24(r1)
/* 8014B3D4 001484B4  7C 08 03 A6 */	mtlr r0
/* 8014B3D8 001484B8  38 21 00 20 */	addi r1, r1, 0x20
/* 8014B3DC 001484BC  4E 80 00 20 */	blr
.endfn get_away__13zNPCKingJellyCFv

# zNPCKingJelly::apply_tentacle_damage()
.fn apply_tentacle_damage__13zNPCKingJellyFv, global
/* 8014B3E0 001484C0  94 21 FF 70 */	stwu r1, -0x90(r1)
/* 8014B3E4 001484C4  7C 08 02 A6 */	mflr r0
/* 8014B3E8 001484C8  90 01 00 94 */	stw r0, 0x94(r1)
/* 8014B3EC 001484CC  BF 01 00 70 */	stmw r24, 0x70(r1)
/* 8014B3F0 001484D0  7C 7D 1B 78 */	mr r29, r3
/* 8014B3F4 001484D4  88 03 10 90 */	lbz r0, 0x1090(r3)
/* 8014B3F8 001484D8  28 00 00 00 */	cmplwi r0, 0x0
/* 8014B3FC 001484DC  41 82 00 0C */	beq .L_8014B408
/* 8014B400 001484E0  38 60 00 00 */	li r3, 0x0
/* 8014B404 001484E4  48 00 02 AC */	b .L_8014B6B0
.L_8014B408:
/* 8014B408 001484E8  C0 22 A6 34 */	lfs f1, "@1869"@sda21(r2)
/* 8014B40C 001484EC  38 61 00 44 */	addi r3, r1, 0x44
/* 8014B410 001484F0  4B ED 14 69 */	bl __as__5xVec3Ff
/* 8014B414 001484F4  C0 02 A6 30 */	lfs f0, "@1868"@sda21(r2)
/* 8014B418 001484F8  38 61 00 38 */	addi r3, r1, 0x38
/* 8014B41C 001484FC  D0 01 00 50 */	stfs f0, 0x50(r1)
/* 8014B420 00148500  C0 22 A6 34 */	lfs f1, "@1869"@sda21(r2)
/* 8014B424 00148504  FC 40 08 90 */	fmr f2, f1
/* 8014B428 00148508  FC 60 08 90 */	fmr f3, f1
/* 8014B42C 0014850C  4B EB FC C1 */	bl assign__5xVec3Ffff
/* 8014B430 00148510  C0 22 A6 30 */	lfs f1, "@1868"@sda21(r2)
/* 8014B434 00148514  38 61 00 2C */	addi r3, r1, 0x2c
/* 8014B438 00148518  FC 40 08 90 */	fmr f2, f1
/* 8014B43C 0014851C  FC 60 08 90 */	fmr f3, f1
/* 8014B440 00148520  4B EB FC AD */	bl assign__5xVec3Ffff
/* 8014B444 00148524  C0 22 A6 34 */	lfs f1, "@1869"@sda21(r2)
/* 8014B448 00148528  38 61 00 44 */	addi r3, r1, 0x44
/* 8014B44C 0014852C  38 81 00 38 */	addi r4, r1, 0x38
/* 8014B450 00148530  38 A1 00 2C */	addi r5, r1, 0x2c
/* 8014B454 00148534  4B FF FC E5 */	bl "sphere_hits_line__31@unnamed@zNPCTypeKingJelly_cpp@FRC7xSphereRC5xVec3RC5xVec3f"
/* 8014B458 00148538  C0 42 A6 34 */	lfs f2, "@1869"@sda21(r2)
/* 8014B45C 0014853C  38 61 00 38 */	addi r3, r1, 0x38
/* 8014B460 00148540  C0 22 A6 F0 */	lfs f1, "@2431"@sda21(r2)
/* 8014B464 00148544  FC 60 10 90 */	fmr f3, f2
/* 8014B468 00148548  4B EB FC 85 */	bl assign__5xVec3Ffff
/* 8014B46C 0014854C  C0 42 A6 34 */	lfs f2, "@1869"@sda21(r2)
/* 8014B470 00148550  38 61 00 2C */	addi r3, r1, 0x2c
/* 8014B474 00148554  C0 22 A6 90 */	lfs f1, "@2407"@sda21(r2)
/* 8014B478 00148558  FC 60 10 90 */	fmr f3, f2
/* 8014B47C 0014855C  4B EB FC 71 */	bl assign__5xVec3Ffff
/* 8014B480 00148560  C0 22 A6 34 */	lfs f1, "@1869"@sda21(r2)
/* 8014B484 00148564  38 61 00 44 */	addi r3, r1, 0x44
/* 8014B488 00148568  38 81 00 38 */	addi r4, r1, 0x38
/* 8014B48C 0014856C  38 A1 00 2C */	addi r5, r1, 0x2c
/* 8014B490 00148570  4B FF FC A9 */	bl "sphere_hits_line__31@unnamed@zNPCTypeKingJelly_cpp@FRC7xSphereRC5xVec3RC5xVec3f"
/* 8014B494 00148574  C0 22 A6 F0 */	lfs f1, "@2431"@sda21(r2)
/* 8014B498 00148578  38 61 00 38 */	addi r3, r1, 0x38
/* 8014B49C 0014857C  C0 42 A6 50 */	lfs f2, "@1987"@sda21(r2)
/* 8014B4A0 00148580  C0 62 A6 34 */	lfs f3, "@1869"@sda21(r2)
/* 8014B4A4 00148584  4B EB FC 49 */	bl assign__5xVec3Ffff
/* 8014B4A8 00148588  C0 22 A6 90 */	lfs f1, "@2407"@sda21(r2)
/* 8014B4AC 0014858C  38 61 00 2C */	addi r3, r1, 0x2c
/* 8014B4B0 00148590  C0 42 A6 50 */	lfs f2, "@1987"@sda21(r2)
/* 8014B4B4 00148594  C0 62 A6 34 */	lfs f3, "@1869"@sda21(r2)
/* 8014B4B8 00148598  4B EB FC 35 */	bl assign__5xVec3Ffff
/* 8014B4BC 0014859C  C0 22 A6 34 */	lfs f1, "@1869"@sda21(r2)
/* 8014B4C0 001485A0  38 61 00 44 */	addi r3, r1, 0x44
/* 8014B4C4 001485A4  38 81 00 38 */	addi r4, r1, 0x38
/* 8014B4C8 001485A8  38 A1 00 2C */	addi r5, r1, 0x2c
/* 8014B4CC 001485AC  4B FF FC 6D */	bl "sphere_hits_line__31@unnamed@zNPCTypeKingJelly_cpp@FRC7xSphereRC5xVec3RC5xVec3f"
/* 8014B4D0 001485B0  C0 22 A6 F0 */	lfs f1, "@2431"@sda21(r2)
/* 8014B4D4 001485B4  38 61 00 38 */	addi r3, r1, 0x38
/* 8014B4D8 001485B8  C0 42 A6 30 */	lfs f2, "@1868"@sda21(r2)
/* 8014B4DC 001485BC  C0 62 A6 34 */	lfs f3, "@1869"@sda21(r2)
/* 8014B4E0 001485C0  4B EB FC 0D */	bl assign__5xVec3Ffff
/* 8014B4E4 001485C4  C0 22 A6 90 */	lfs f1, "@2407"@sda21(r2)
/* 8014B4E8 001485C8  38 61 00 2C */	addi r3, r1, 0x2c
/* 8014B4EC 001485CC  C0 42 A6 30 */	lfs f2, "@1868"@sda21(r2)
/* 8014B4F0 001485D0  C0 62 A6 34 */	lfs f3, "@1869"@sda21(r2)
/* 8014B4F4 001485D4  4B EB FB F9 */	bl assign__5xVec3Ffff
/* 8014B4F8 001485D8  C0 22 A6 34 */	lfs f1, "@1869"@sda21(r2)
/* 8014B4FC 001485DC  38 61 00 44 */	addi r3, r1, 0x44
/* 8014B500 001485E0  38 81 00 38 */	addi r4, r1, 0x38
/* 8014B504 001485E4  38 A1 00 2C */	addi r5, r1, 0x2c
/* 8014B508 001485E8  4B FF FC 31 */	bl "sphere_hits_line__31@unnamed@zNPCTypeKingJelly_cpp@FRC7xSphereRC5xVec3RC5xVec3f"
/* 8014B50C 001485EC  C0 22 A6 F0 */	lfs f1, "@2431"@sda21(r2)
/* 8014B510 001485F0  38 61 00 38 */	addi r3, r1, 0x38
/* 8014B514 001485F4  C0 42 A7 04 */	lfs f2, "@2436"@sda21(r2)
/* 8014B518 001485F8  C0 62 A6 34 */	lfs f3, "@1869"@sda21(r2)
/* 8014B51C 001485FC  4B EB FB D1 */	bl assign__5xVec3Ffff
/* 8014B520 00148600  C0 22 A6 90 */	lfs f1, "@2407"@sda21(r2)
/* 8014B524 00148604  38 61 00 2C */	addi r3, r1, 0x2c
/* 8014B528 00148608  C0 42 A7 04 */	lfs f2, "@2436"@sda21(r2)
/* 8014B52C 0014860C  C0 62 A6 34 */	lfs f3, "@1869"@sda21(r2)
/* 8014B530 00148610  4B EB FB BD */	bl assign__5xVec3Ffff
/* 8014B534 00148614  C0 22 A6 34 */	lfs f1, "@1869"@sda21(r2)
/* 8014B538 00148618  38 61 00 44 */	addi r3, r1, 0x44
/* 8014B53C 0014861C  38 81 00 38 */	addi r4, r1, 0x38
/* 8014B540 00148620  38 A1 00 2C */	addi r5, r1, 0x2c
/* 8014B544 00148624  4B FF FB F5 */	bl "sphere_hits_line__31@unnamed@zNPCTypeKingJelly_cpp@FRC7xSphereRC5xVec3RC5xVec3f"
/* 8014B548 00148628  C0 42 A6 34 */	lfs f2, "@1869"@sda21(r2)
/* 8014B54C 0014862C  38 61 00 38 */	addi r3, r1, 0x38
/* 8014B550 00148630  C0 22 A6 90 */	lfs f1, "@2407"@sda21(r2)
/* 8014B554 00148634  FC 60 10 90 */	fmr f3, f2
/* 8014B558 00148638  4B EB FB 95 */	bl assign__5xVec3Ffff
/* 8014B55C 0014863C  C0 42 A6 34 */	lfs f2, "@1869"@sda21(r2)
/* 8014B560 00148640  38 61 00 2C */	addi r3, r1, 0x2c
/* 8014B564 00148644  C0 22 A6 98 */	lfs f1, "@2409"@sda21(r2)
/* 8014B568 00148648  FC 60 10 90 */	fmr f3, f2
/* 8014B56C 0014864C  4B EB FB 81 */	bl assign__5xVec3Ffff
/* 8014B570 00148650  C0 22 A6 34 */	lfs f1, "@1869"@sda21(r2)
/* 8014B574 00148654  38 61 00 44 */	addi r3, r1, 0x44
/* 8014B578 00148658  38 81 00 38 */	addi r4, r1, 0x38
/* 8014B57C 0014865C  38 A1 00 2C */	addi r5, r1, 0x2c
/* 8014B580 00148660  4B FF FB B9 */	bl "sphere_hits_line__31@unnamed@zNPCTypeKingJelly_cpp@FRC7xSphereRC5xVec3RC5xVec3f"
/* 8014B584 00148664  3C 80 80 3C */	lis r4, globals@ha
/* 8014B588 00148668  38 7D 00 88 */	addi r3, r29, 0x88
/* 8014B58C 0014866C  3B 64 05 58 */	addi r27, r4, globals@l
/* 8014B590 00148670  38 9B 07 68 */	addi r4, r27, 0x768
/* 8014B594 00148674  4B FF FD 21 */	bl "sphere_hits_sphere_xz__31@unnamed@zNPCTypeKingJelly_cpp@FRC7xSphereRC7xSphere"
/* 8014B598 00148678  54 60 07 BF */	clrlwi. r0, r3, 30
/* 8014B59C 0014867C  40 82 00 0C */	bne .L_8014B5A8
/* 8014B5A0 00148680  38 60 00 00 */	li r3, 0x0
/* 8014B5A4 00148684  48 00 01 0C */	b .L_8014B6B0
.L_8014B5A8:
/* 8014B5A8 00148688  3C 80 80 27 */	lis r4, "tentacle_bone__31@unnamed@zNPCTypeKingJelly_cpp@"@ha
/* 8014B5AC 0014868C  3C 60 80 33 */	lis r3, "tweak__31@unnamed@zNPCTypeKingJelly_cpp@"@ha
/* 8014B5B0 00148690  3B 24 D8 3C */	addi r25, r4, "tentacle_bone__31@unnamed@zNPCTypeKingJelly_cpp@"@l
/* 8014B5B4 00148694  3B E0 00 00 */	li r31, 0x0
/* 8014B5B8 00148698  3B 83 85 38 */	addi r28, r3, "tweak__31@unnamed@zNPCTypeKingJelly_cpp@"@l
.L_8014B5BC:
/* 8014B5BC 0014869C  80 9D 00 24 */	lwz r4, 0x24(r29)
/* 8014B5C0 001486A0  38 61 00 20 */	addi r3, r1, 0x20
/* 8014B5C4 001486A4  88 B9 00 00 */	lbz r5, 0x0(r25)
/* 8014B5C8 001486A8  4B EE 99 B1 */	bl xModelGetBoneLocation__FRC14xModelInstanceUl
/* 8014B5CC 001486AC  38 61 00 54 */	addi r3, r1, 0x54
/* 8014B5D0 001486B0  38 81 00 20 */	addi r4, r1, 0x20
/* 8014B5D4 001486B4  4B EB FC 91 */	bl __as__5xVec3FRC5xVec3
/* 8014B5D8 001486B8  3B C0 00 01 */	li r30, 0x1
/* 8014B5DC 001486BC  3B 59 00 01 */	addi r26, r25, 0x1
.L_8014B5E0:
/* 8014B5E0 001486C0  80 9D 00 24 */	lwz r4, 0x24(r29)
/* 8014B5E4 001486C4  38 61 00 14 */	addi r3, r1, 0x14
/* 8014B5E8 001486C8  88 BA 00 00 */	lbz r5, 0x0(r26)
/* 8014B5EC 001486CC  4B EE 99 8D */	bl xModelGetBoneLocation__FRC14xModelInstanceUl
/* 8014B5F0 001486D0  57 C0 07 FE */	clrlwi r0, r30, 31
/* 8014B5F4 001486D4  3B 01 00 54 */	addi r24, r1, 0x54
/* 8014B5F8 001486D8  1C 00 00 0C */	mulli r0, r0, 0xc
/* 8014B5FC 001486DC  38 81 00 14 */	addi r4, r1, 0x14
/* 8014B600 001486E0  7F 18 02 14 */	add r24, r24, r0
/* 8014B604 001486E4  7F 03 C3 78 */	mr r3, r24
/* 8014B608 001486E8  4B EB FC 5D */	bl __as__5xVec3FRC5xVec3
/* 8014B60C 001486EC  38 1E FF FF */	addi r0, r30, -0x1
/* 8014B610 001486F0  38 81 00 54 */	addi r4, r1, 0x54
/* 8014B614 001486F4  54 00 07 FE */	clrlwi r0, r0, 31
/* 8014B618 001486F8  C0 3C 01 88 */	lfs f1, 0x188(r28)
/* 8014B61C 001486FC  1C 00 00 0C */	mulli r0, r0, 0xc
/* 8014B620 00148700  7F 05 C3 78 */	mr r5, r24
/* 8014B624 00148704  38 7B 07 68 */	addi r3, r27, 0x768
/* 8014B628 00148708  7C 84 02 14 */	add r4, r4, r0
/* 8014B62C 0014870C  4B FF FB 0D */	bl "sphere_hits_line__31@unnamed@zNPCTypeKingJelly_cpp@FRC7xSphereRC5xVec3RC5xVec3f"
/* 8014B630 00148710  54 60 06 3F */	clrlwi. r0, r3, 24
/* 8014B634 00148714  41 82 00 58 */	beq .L_8014B68C
/* 8014B638 00148718  80 BB 07 28 */	lwz r5, 0x728(r27)
/* 8014B63C 0014871C  7F A4 EB 78 */	mr r4, r29
/* 8014B640 00148720  38 61 00 08 */	addi r3, r1, 0x8
/* 8014B644 00148724  3B 05 00 D4 */	addi r24, r5, 0xd4
/* 8014B648 00148728  4B FF FC CD */	bl get_away__13zNPCKingJellyCFv
/* 8014B64C 0014872C  7F 03 C3 78 */	mr r3, r24
/* 8014B650 00148730  38 81 00 08 */	addi r4, r1, 0x8
/* 8014B654 00148734  4B EB FC 11 */	bl __as__5xVec3FRC5xVec3
/* 8014B658 00148738  3C 80 80 33 */	lis r4, "tweak__31@unnamed@zNPCTypeKingJelly_cpp@"@ha
/* 8014B65C 0014873C  7F 03 C3 78 */	mr r3, r24
/* 8014B660 00148740  38 84 85 38 */	addi r4, r4, "tweak__31@unnamed@zNPCTypeKingJelly_cpp@"@l
/* 8014B664 00148744  C0 24 01 84 */	lfs f1, 0x184(r4)
/* 8014B668 00148748  4B EB FB 19 */	bl __amu__5xVec3Ff
/* 8014B66C 0014874C  7F A3 EB 78 */	mr r3, r29
/* 8014B670 00148750  38 80 00 01 */	li r4, 0x1
/* 8014B674 00148754  4B F2 AD BD */	bl zEntPlayer_Damage__FP5xBaseUi
/* 8014B678 00148758  93 ED 84 A0 */	stw r31, last_hit_at$2858@sda21(r13)
/* 8014B67C 0014875C  38 8D 84 A0 */	addi r4, r13, last_hit_at$2858@sda21
/* 8014B680 00148760  38 60 00 01 */	li r3, 0x1
/* 8014B684 00148764  93 C4 00 04 */	stw r30, 0x4(r4)
/* 8014B688 00148768  48 00 00 28 */	b .L_8014B6B0
.L_8014B68C:
/* 8014B68C 0014876C  3B DE 00 01 */	addi r30, r30, 0x1
/* 8014B690 00148770  3B 5A 00 01 */	addi r26, r26, 0x1
/* 8014B694 00148774  2C 1E 00 04 */	cmpwi r30, 0x4
/* 8014B698 00148778  41 80 FF 48 */	blt .L_8014B5E0
/* 8014B69C 0014877C  3B FF 00 01 */	addi r31, r31, 0x1
/* 8014B6A0 00148780  3B 39 00 04 */	addi r25, r25, 0x4
/* 8014B6A4 00148784  2C 1F 00 07 */	cmpwi r31, 0x7
/* 8014B6A8 00148788  41 80 FF 14 */	blt .L_8014B5BC
/* 8014B6AC 0014878C  38 60 00 00 */	li r3, 0x0
.L_8014B6B0:
/* 8014B6B0 00148790  BB 01 00 70 */	lmw r24, 0x70(r1)
/* 8014B6B4 00148794  80 01 00 94 */	lwz r0, 0x94(r1)
/* 8014B6B8 00148798  7C 08 03 A6 */	mtlr r0
/* 8014B6BC 0014879C  38 21 00 90 */	addi r1, r1, 0x90
/* 8014B6C0 001487A0  4E 80 00 20 */	blr
.endfn apply_tentacle_damage__13zNPCKingJellyFv

# zNPCKingJelly::apply_wave_damage()
.fn apply_wave_damage__13zNPCKingJellyFv, global
/* 8014B6C4 001487A4  94 21 FF 90 */	stwu r1, -0x70(r1)
/* 8014B6C8 001487A8  7C 08 02 A6 */	mflr r0
/* 8014B6CC 001487AC  90 01 00 74 */	stw r0, 0x74(r1)
/* 8014B6D0 001487B0  DB E1 00 60 */	stfd f31, 0x60(r1)
/* 8014B6D4 001487B4  F3 E1 00 68 */	psq_st f31, 0x68(r1), 0, qr0
/* 8014B6D8 001487B8  DB C1 00 50 */	stfd f30, 0x50(r1)
/* 8014B6DC 001487BC  F3 C1 00 58 */	psq_st f30, 0x58(r1), 0, qr0
/* 8014B6E0 001487C0  93 E1 00 4C */	stw r31, 0x4c(r1)
/* 8014B6E4 001487C4  93 C1 00 48 */	stw r30, 0x48(r1)
/* 8014B6E8 001487C8  93 A1 00 44 */	stw r29, 0x44(r1)
/* 8014B6EC 001487CC  93 81 00 40 */	stw r28, 0x40(r1)
/* 8014B6F0 001487D0  7C 7C 1B 78 */	mr r28, r3
/* 8014B6F4 001487D4  88 03 0E 80 */	lbz r0, 0xe80(r3)
/* 8014B6F8 001487D8  28 00 00 00 */	cmplwi r0, 0x0
/* 8014B6FC 001487DC  40 82 00 0C */	bne .L_8014B708
/* 8014B700 001487E0  38 60 00 00 */	li r3, 0x0
/* 8014B704 001487E4  48 00 01 20 */	b .L_8014B824
.L_8014B708:
/* 8014B708 001487E8  80 9C 00 24 */	lwz r4, 0x24(r28)
/* 8014B70C 001487EC  3C 60 80 3C */	lis r3, globals@ha
/* 8014B710 001487F0  3B E3 05 58 */	addi r31, r3, globals@l
/* 8014B714 001487F4  38 61 00 14 */	addi r3, r1, 0x14
/* 8014B718 001487F8  83 C4 00 4C */	lwz r30, 0x4c(r4)
/* 8014B71C 001487FC  3B BF 07 68 */	addi r29, r31, 0x768
/* 8014B720 00148800  38 9C 0E 84 */	addi r4, r28, 0xe84
/* 8014B724 00148804  4B EB FB 41 */	bl __as__5xVec3FRC5xVec3
/* 8014B728 00148808  C0 1C 0E B8 */	lfs f0, 0xeb8(r28)
/* 8014B72C 0014880C  38 61 00 24 */	addi r3, r1, 0x24
/* 8014B730 00148810  38 81 00 14 */	addi r4, r1, 0x14
/* 8014B734 00148814  D0 01 00 20 */	stfs f0, 0x20(r1)
/* 8014B738 00148818  4B EB FB 2D */	bl __as__5xVec3FRC5xVec3
/* 8014B73C 0014881C  3C 60 80 33 */	lis r3, "tweak__31@unnamed@zNPCTypeKingJelly_cpp@"@ha
/* 8014B740 00148820  C0 21 00 20 */	lfs f1, 0x20(r1)
/* 8014B744 00148824  38 63 85 38 */	addi r3, r3, "tweak__31@unnamed@zNPCTypeKingJelly_cpp@"@l
/* 8014B748 00148828  C0 03 00 B4 */	lfs f0, 0xb4(r3)
/* 8014B74C 0014882C  EC 21 00 28 */	fsubs f1, f1, f0
/* 8014B750 00148830  D0 21 00 30 */	stfs f1, 0x30(r1)
/* 8014B754 00148834  C0 02 A6 34 */	lfs f0, "@1869"@sda21(r2)
/* 8014B758 00148838  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8014B75C 0014883C  40 80 00 08 */	bge .L_8014B764
/* 8014B760 00148840  D0 01 00 30 */	stfs f0, 0x30(r1)
.L_8014B764:
/* 8014B764 00148844  3C 60 80 33 */	lis r3, "tweak__31@unnamed@zNPCTypeKingJelly_cpp@"@ha
/* 8014B768 00148848  C3 FE 00 34 */	lfs f31, 0x34(r30)
/* 8014B76C 0014884C  38 83 85 38 */	addi r4, r3, "tweak__31@unnamed@zNPCTypeKingJelly_cpp@"@l
/* 8014B770 00148850  7F A3 EB 78 */	mr r3, r29
/* 8014B774 00148854  C0 04 00 B0 */	lfs f0, 0xb0(r4)
/* 8014B778 00148858  38 81 00 14 */	addi r4, r1, 0x14
/* 8014B77C 0014885C  EF DF 00 2A */	fadds f30, f31, f0
/* 8014B780 00148860  4B FF FB 35 */	bl "sphere_hits_sphere_xz__31@unnamed@zNPCTypeKingJelly_cpp@FRC7xSphereRC7xSphere"
/* 8014B784 00148864  54 60 07 BF */	clrlwi. r0, r3, 30
/* 8014B788 00148868  40 82 00 0C */	bne .L_8014B794
/* 8014B78C 0014886C  38 60 00 00 */	li r3, 0x0
/* 8014B790 00148870  48 00 00 94 */	b .L_8014B824
.L_8014B794:
/* 8014B794 00148874  7F A3 EB 78 */	mr r3, r29
/* 8014B798 00148878  38 81 00 24 */	addi r4, r1, 0x24
/* 8014B79C 0014887C  4B FF FB 19 */	bl "sphere_hits_sphere_xz__31@unnamed@zNPCTypeKingJelly_cpp@FRC7xSphereRC7xSphere"
/* 8014B7A0 00148880  70 60 00 05 */	andi. r0, r3, 0x5
/* 8014B7A4 00148884  40 82 00 0C */	bne .L_8014B7B0
/* 8014B7A8 00148888  38 60 00 00 */	li r3, 0x0
/* 8014B7AC 0014888C  48 00 00 78 */	b .L_8014B824
.L_8014B7B0:
/* 8014B7B0 00148890  C0 5D 00 04 */	lfs f2, 0x4(r29)
/* 8014B7B4 00148894  C0 3D 00 0C */	lfs f1, 0xc(r29)
/* 8014B7B8 00148898  EC 02 08 28 */	fsubs f0, f2, f1
/* 8014B7BC 0014889C  FC 00 F0 40 */	fcmpo cr0, f0, f30
/* 8014B7C0 001488A0  40 81 00 0C */	ble .L_8014B7CC
/* 8014B7C4 001488A4  38 60 00 00 */	li r3, 0x0
/* 8014B7C8 001488A8  48 00 00 5C */	b .L_8014B824
.L_8014B7CC:
/* 8014B7CC 001488AC  EC 02 08 2A */	fadds f0, f2, f1
/* 8014B7D0 001488B0  FC 00 F8 40 */	fcmpo cr0, f0, f31
/* 8014B7D4 001488B4  40 80 00 0C */	bge .L_8014B7E0
/* 8014B7D8 001488B8  38 60 00 00 */	li r3, 0x0
/* 8014B7DC 001488BC  48 00 00 48 */	b .L_8014B824
.L_8014B7E0:
/* 8014B7E0 001488C0  80 BF 07 28 */	lwz r5, 0x728(r31)
/* 8014B7E4 001488C4  7F 84 E3 78 */	mr r4, r28
/* 8014B7E8 001488C8  38 61 00 08 */	addi r3, r1, 0x8
/* 8014B7EC 001488CC  3B A5 00 D4 */	addi r29, r5, 0xd4
/* 8014B7F0 001488D0  4B FF FB 25 */	bl get_away__13zNPCKingJellyCFv
/* 8014B7F4 001488D4  7F A3 EB 78 */	mr r3, r29
/* 8014B7F8 001488D8  38 81 00 08 */	addi r4, r1, 0x8
/* 8014B7FC 001488DC  4B EB FA 69 */	bl __as__5xVec3FRC5xVec3
/* 8014B800 001488E0  3C 80 80 33 */	lis r4, "tweak__31@unnamed@zNPCTypeKingJelly_cpp@"@ha
/* 8014B804 001488E4  7F A3 EB 78 */	mr r3, r29
/* 8014B808 001488E8  38 84 85 38 */	addi r4, r4, "tweak__31@unnamed@zNPCTypeKingJelly_cpp@"@l
/* 8014B80C 001488EC  C0 24 00 B8 */	lfs f1, 0xb8(r4)
/* 8014B810 001488F0  4B EB F9 71 */	bl __amu__5xVec3Ff
/* 8014B814 001488F4  7F 83 E3 78 */	mr r3, r28
/* 8014B818 001488F8  38 80 00 01 */	li r4, 0x1
/* 8014B81C 001488FC  4B F2 AC 15 */	bl zEntPlayer_Damage__FP5xBaseUi
/* 8014B820 00148900  38 60 00 01 */	li r3, 0x1
.L_8014B824:
/* 8014B824 00148904  E3 E1 00 68 */	psq_l f31, 0x68(r1), 0, qr0
/* 8014B828 00148908  CB E1 00 60 */	lfd f31, 0x60(r1)
/* 8014B82C 0014890C  E3 C1 00 58 */	psq_l f30, 0x58(r1), 0, qr0
/* 8014B830 00148910  CB C1 00 50 */	lfd f30, 0x50(r1)
/* 8014B834 00148914  83 E1 00 4C */	lwz r31, 0x4c(r1)
/* 8014B838 00148918  83 C1 00 48 */	lwz r30, 0x48(r1)
/* 8014B83C 0014891C  83 A1 00 44 */	lwz r29, 0x44(r1)
/* 8014B840 00148920  80 01 00 74 */	lwz r0, 0x74(r1)
/* 8014B844 00148924  83 81 00 40 */	lwz r28, 0x40(r1)
/* 8014B848 00148928  7C 08 03 A6 */	mtlr r0
/* 8014B84C 0014892C  38 21 00 70 */	addi r1, r1, 0x70
/* 8014B850 00148930  4E 80 00 20 */	blr
.endfn apply_wave_damage__13zNPCKingJellyFv

# zNPCKingJelly::apply_ambient_damage()
.fn apply_ambient_damage__13zNPCKingJellyFv, global
/* 8014B854 00148934  94 21 FF B0 */	stwu r1, -0x50(r1)
/* 8014B858 00148938  7C 08 02 A6 */	mflr r0
/* 8014B85C 0014893C  3C A0 80 3C */	lis r5, globals@ha
/* 8014B860 00148940  90 01 00 54 */	stw r0, 0x54(r1)
/* 8014B864 00148944  93 E1 00 4C */	stw r31, 0x4c(r1)
/* 8014B868 00148948  3B E5 05 58 */	addi r31, r5, globals@l
/* 8014B86C 0014894C  93 C1 00 48 */	stw r30, 0x48(r1)
/* 8014B870 00148950  7C 7E 1B 78 */	mr r30, r3
/* 8014B874 00148954  7F C4 F3 78 */	mr r4, r30
/* 8014B878 00148958  38 61 00 20 */	addi r3, r1, 0x20
/* 8014B87C 0014895C  48 00 2F 9D */	bl get_center__13zNPCKingJellyCFv
/* 8014B880 00148960  80 9F 07 04 */	lwz r4, 0x704(r31)
/* 8014B884 00148964  38 61 00 14 */	addi r3, r1, 0x14
/* 8014B888 00148968  80 E1 00 20 */	lwz r7, 0x20(r1)
/* 8014B88C 0014896C  38 A1 00 38 */	addi r5, r1, 0x38
/* 8014B890 00148970  80 C1 00 24 */	lwz r6, 0x24(r1)
/* 8014B894 00148974  80 01 00 28 */	lwz r0, 0x28(r1)
/* 8014B898 00148978  80 84 00 4C */	lwz r4, 0x4c(r4)
/* 8014B89C 0014897C  90 E1 00 38 */	stw r7, 0x38(r1)
/* 8014B8A0 00148980  38 84 00 30 */	addi r4, r4, 0x30
/* 8014B8A4 00148984  90 C1 00 3C */	stw r6, 0x3c(r1)
/* 8014B8A8 00148988  90 01 00 40 */	stw r0, 0x40(r1)
/* 8014B8AC 0014898C  4B EB F9 21 */	bl __mi__5xVec3CFRC5xVec3
/* 8014B8B0 00148990  88 1E 0C F4 */	lbz r0, 0xcf4(r30)
/* 8014B8B4 00148994  80 81 00 14 */	lwz r4, 0x14(r1)
/* 8014B8B8 00148998  80 61 00 18 */	lwz r3, 0x18(r1)
/* 8014B8BC 0014899C  28 00 00 00 */	cmplwi r0, 0x0
/* 8014B8C0 001489A0  80 01 00 1C */	lwz r0, 0x1c(r1)
/* 8014B8C4 001489A4  90 81 00 2C */	stw r4, 0x2c(r1)
/* 8014B8C8 001489A8  C0 1E 0D 2C */	lfs f0, 0xd2c(r30)
/* 8014B8CC 001489AC  90 61 00 30 */	stw r3, 0x30(r1)
/* 8014B8D0 001489B0  90 01 00 34 */	stw r0, 0x34(r1)
/* 8014B8D4 001489B4  40 82 00 0C */	bne .L_8014B8E0
/* 8014B8D8 001489B8  38 60 00 00 */	li r3, 0x0
/* 8014B8DC 001489BC  48 00 00 6C */	b .L_8014B948
.L_8014B8E0:
/* 8014B8E0 001489C0  C0 21 00 34 */	lfs f1, 0x34(r1)
/* 8014B8E4 001489C4  EC 00 00 32 */	fmuls f0, f0, f0
/* 8014B8E8 001489C8  C0 41 00 2C */	lfs f2, 0x2c(r1)
/* 8014B8EC 001489CC  EC 21 00 72 */	fmuls f1, f1, f1
/* 8014B8F0 001489D0  EC 22 08 BA */	fmadds f1, f2, f2, f1
/* 8014B8F4 001489D4  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8014B8F8 001489D8  40 81 00 0C */	ble .L_8014B904
/* 8014B8FC 001489DC  38 60 00 00 */	li r3, 0x0
/* 8014B900 001489E0  48 00 00 48 */	b .L_8014B948
.L_8014B904:
/* 8014B904 001489E4  80 BF 07 28 */	lwz r5, 0x728(r31)
/* 8014B908 001489E8  7F C4 F3 78 */	mr r4, r30
/* 8014B90C 001489EC  38 61 00 08 */	addi r3, r1, 0x8
/* 8014B910 001489F0  3B E5 00 D4 */	addi r31, r5, 0xd4
/* 8014B914 001489F4  4B FF FA 01 */	bl get_away__13zNPCKingJellyCFv
/* 8014B918 001489F8  7F E3 FB 78 */	mr r3, r31
/* 8014B91C 001489FC  38 81 00 08 */	addi r4, r1, 0x8
/* 8014B920 00148A00  4B EB F9 45 */	bl __as__5xVec3FRC5xVec3
/* 8014B924 00148A04  3C 80 80 33 */	lis r4, "tweak__31@unnamed@zNPCTypeKingJelly_cpp@"@ha
/* 8014B928 00148A08  7F E3 FB 78 */	mr r3, r31
/* 8014B92C 00148A0C  38 84 85 38 */	addi r4, r4, "tweak__31@unnamed@zNPCTypeKingJelly_cpp@"@l
/* 8014B930 00148A10  C0 24 01 48 */	lfs f1, 0x148(r4)
/* 8014B934 00148A14  4B EB F8 4D */	bl __amu__5xVec3Ff
/* 8014B938 00148A18  7F C3 F3 78 */	mr r3, r30
/* 8014B93C 00148A1C  38 80 00 01 */	li r4, 0x1
/* 8014B940 00148A20  4B F2 AA F1 */	bl zEntPlayer_Damage__FP5xBaseUi
/* 8014B944 00148A24  38 60 00 01 */	li r3, 0x1
.L_8014B948:
/* 8014B948 00148A28  80 01 00 54 */	lwz r0, 0x54(r1)
/* 8014B94C 00148A2C  83 E1 00 4C */	lwz r31, 0x4c(r1)
/* 8014B950 00148A30  83 C1 00 48 */	lwz r30, 0x48(r1)
/* 8014B954 00148A34  7C 08 03 A6 */	mtlr r0
/* 8014B958 00148A38  38 21 00 50 */	addi r1, r1, 0x50
/* 8014B95C 00148A3C  4E 80 00 20 */	blr
.endfn apply_ambient_damage__13zNPCKingJellyFv

# zNPCKingJelly::check_player_damage()
.fn check_player_damage__13zNPCKingJellyFv, global
/* 8014B960 00148A40  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8014B964 00148A44  7C 08 02 A6 */	mflr r0
/* 8014B968 00148A48  3C 80 80 3C */	lis r4, globals@ha
/* 8014B96C 00148A4C  90 01 00 14 */	stw r0, 0x14(r1)
/* 8014B970 00148A50  38 84 05 58 */	addi r4, r4, globals@l
/* 8014B974 00148A54  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8014B978 00148A58  7C 7F 1B 78 */	mr r31, r3
/* 8014B97C 00148A5C  80 04 1A FC */	lwz r0, 0x1afc(r4)
/* 8014B980 00148A60  2C 00 00 00 */	cmpwi r0, 0x0
/* 8014B984 00148A64  40 82 00 2C */	bne .L_8014B9B0
/* 8014B988 00148A68  4B FF FD 3D */	bl apply_wave_damage__13zNPCKingJellyFv
/* 8014B98C 00148A6C  54 60 06 3F */	clrlwi. r0, r3, 24
/* 8014B990 00148A70  40 82 00 20 */	bne .L_8014B9B0
/* 8014B994 00148A74  7F E3 FB 78 */	mr r3, r31
/* 8014B998 00148A78  4B FF FA 49 */	bl apply_tentacle_damage__13zNPCKingJellyFv
/* 8014B99C 00148A7C  54 60 06 3F */	clrlwi. r0, r3, 24
/* 8014B9A0 00148A80  40 82 00 10 */	bne .L_8014B9B0
/* 8014B9A4 00148A84  7F E3 FB 78 */	mr r3, r31
/* 8014B9A8 00148A88  4B FF FE AD */	bl apply_ambient_damage__13zNPCKingJellyFv
/* 8014B9AC 00148A8C  54 60 06 3F */	clrlwi. r0, r3, 24
.L_8014B9B0:
/* 8014B9B0 00148A90  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8014B9B4 00148A94  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8014B9B8 00148A98  7C 08 03 A6 */	mtlr r0
/* 8014B9BC 00148A9C  38 21 00 10 */	addi r1, r1, 0x10
/* 8014B9C0 00148AA0  4E 80 00 20 */	blr
.endfn check_player_damage__13zNPCKingJellyFv

# zNPCKingJelly::start_fight()
.fn start_fight__13zNPCKingJellyFv, global
/* 8014B9C4 00148AA4  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8014B9C8 00148AA8  7C 08 02 A6 */	mflr r0
/* 8014B9CC 00148AAC  90 01 00 14 */	stw r0, 0x14(r1)
/* 8014B9D0 00148AB0  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8014B9D4 00148AB4  7C 7F 1B 78 */	mr r31, r3
/* 8014B9D8 00148AB8  88 03 02 B5 */	lbz r0, 0x2b5(r3)
/* 8014B9DC 00148ABC  28 00 00 00 */	cmplwi r0, 0x0
/* 8014B9E0 00148AC0  40 82 00 98 */	bne .L_8014BA78
/* 8014B9E4 00148AC4  38 00 00 01 */	li r0, 0x1
/* 8014B9E8 00148AC8  98 1F 02 B5 */	stb r0, 0x2b5(r31)
/* 8014B9EC 00148ACC  48 00 16 61 */	bl show_attack_model__13zNPCKingJellyFv
/* 8014B9F0 00148AD0  7F E3 FB 78 */	mr r3, r31
/* 8014B9F4 00148AD4  48 00 16 BD */	bl fade_curtain__13zNPCKingJellyFv
/* 8014B9F8 00148AD8  80 9F 00 24 */	lwz r4, 0x24(r31)
/* 8014B9FC 00148ADC  38 60 00 00 */	li r3, 0x0
/* 8014BA00 00148AE0  80 84 00 4C */	lwz r4, 0x4c(r4)
/* 8014BA04 00148AE4  38 84 00 30 */	addi r4, r4, 0x30
/* 8014BA08 00148AE8  4B FF AD 95 */	bl "play_sound__31@unnamed@zNPCTypeKingJelly_cpp@FiPC5xVec3"
/* 8014BA0C 00148AEC  80 9F 00 24 */	lwz r4, 0x24(r31)
/* 8014BA10 00148AF0  38 60 00 07 */	li r3, 0x7
/* 8014BA14 00148AF4  80 84 00 4C */	lwz r4, 0x4c(r4)
/* 8014BA18 00148AF8  38 84 00 30 */	addi r4, r4, 0x30
/* 8014BA1C 00148AFC  4B FF AD 81 */	bl "play_sound__31@unnamed@zNPCTypeKingJelly_cpp@FiPC5xVec3"
/* 8014BA20 00148B00  3C 60 80 33 */	lis r3, "tweak__31@unnamed@zNPCTypeKingJelly_cpp@"@ha
/* 8014BA24 00148B04  38 63 85 38 */	addi r3, r3, "tweak__31@unnamed@zNPCTypeKingJelly_cpp@"@l
/* 8014BA28 00148B08  C0 23 00 28 */	lfs f1, 0x28(r3)
/* 8014BA2C 00148B0C  C0 43 00 2C */	lfs f2, 0x2c(r3)
/* 8014BA30 00148B10  4B F5 C2 31 */	bl zMusicSetVolume__Fff
/* 8014BA34 00148B14  38 60 00 08 */	li r3, 0x8
/* 8014BA38 00148B18  4B F0 66 C9 */	bl zCameraDisableTracking__F17camera_owner_enum
/* 8014BA3C 00148B1C  3C 60 80 2A */	lis r3, "boss_cam__31@unnamed@zNPCTypeKingJelly_cpp@"@ha
/* 8014BA40 00148B20  3C 80 80 3C */	lis r4, globals@ha
/* 8014BA44 00148B24  38 63 9E 2C */	addi r3, r3, "boss_cam__31@unnamed@zNPCTypeKingJelly_cpp@"@l
/* 8014BA48 00148B28  38 84 05 58 */	addi r4, r4, globals@l
/* 8014BA4C 00148B2C  4B EC 24 69 */	bl start__13xBinaryCameraFR7xCamera
/* 8014BA50 00148B30  3C 60 80 3C */	lis r3, globals@ha
/* 8014BA54 00148B34  3C A0 80 2A */	lis r5, "boss_cam__31@unnamed@zNPCTypeKingJelly_cpp@"@ha
/* 8014BA58 00148B38  38 63 05 58 */	addi r3, r3, globals@l
/* 8014BA5C 00148B3C  C0 3F 00 94 */	lfs f1, 0x94(r31)
/* 8014BA60 00148B40  80 83 07 04 */	lwz r4, 0x704(r3)
/* 8014BA64 00148B44  38 65 9E 2C */	addi r3, r5, "boss_cam__31@unnamed@zNPCTypeKingJelly_cpp@"@l
/* 8014BA68 00148B48  38 BF 00 88 */	addi r5, r31, 0x88
/* 8014BA6C 00148B4C  80 84 00 4C */	lwz r4, 0x4c(r4)
/* 8014BA70 00148B50  38 84 00 30 */	addi r4, r4, 0x30
/* 8014BA74 00148B54  4B FF AB 0D */	bl set_targets__13xBinaryCameraFRC5xVec3RC5xVec3f
.L_8014BA78:
/* 8014BA78 00148B58  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8014BA7C 00148B5C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8014BA80 00148B60  7C 08 03 A6 */	mtlr r0
/* 8014BA84 00148B64  38 21 00 10 */	addi r1, r1, 0x10
/* 8014BA88 00148B68  4E 80 00 20 */	blr
.endfn start_fight__13zNPCKingJellyFv

# zNPCKingJelly::decompose()
.fn decompose__13zNPCKingJellyFv, global
/* 8014BA8C 00148B6C  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 8014BA90 00148B70  7C 08 02 A6 */	mflr r0
/* 8014BA94 00148B74  90 01 00 24 */	stw r0, 0x24(r1)
/* 8014BA98 00148B78  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 8014BA9C 00148B7C  93 C1 00 18 */	stw r30, 0x18(r1)
/* 8014BAA0 00148B80  93 A1 00 14 */	stw r29, 0x14(r1)
/* 8014BAA4 00148B84  7C 7D 1B 78 */	mr r29, r3
/* 8014BAA8 00148B88  88 03 02 B6 */	lbz r0, 0x2b6(r3)
/* 8014BAAC 00148B8C  28 00 00 00 */	cmplwi r0, 0x0
/* 8014BAB0 00148B90  40 82 00 80 */	bne .L_8014BB30
/* 8014BAB4 00148B94  88 1D 02 B5 */	lbz r0, 0x2b5(r29)
/* 8014BAB8 00148B98  28 00 00 00 */	cmplwi r0, 0x0
/* 8014BABC 00148B9C  40 82 00 08 */	bne .L_8014BAC4
/* 8014BAC0 00148BA0  48 00 00 70 */	b .L_8014BB30
.L_8014BAC4:
/* 8014BAC4 00148BA4  38 00 00 01 */	li r0, 0x1
/* 8014BAC8 00148BA8  98 1D 02 B6 */	stb r0, 0x2b6(r29)
/* 8014BACC 00148BAC  4B FF AE 59 */	bl "kill_sounds__31@unnamed@zNPCTypeKingJelly_cpp@Fv"
/* 8014BAD0 00148BB0  7F A3 EB 78 */	mr r3, r29
/* 8014BAD4 00148BB4  48 00 09 C5 */	bl destroy_ambient_rings__13zNPCKingJellyFv
/* 8014BAD8 00148BB8  7F A3 EB 78 */	mr r3, r29
/* 8014BADC 00148BBC  48 00 0B 1D */	bl destroy_wave_rings__13zNPCKingJellyFv
/* 8014BAE0 00148BC0  7F A3 EB 78 */	mr r3, r29
/* 8014BAE4 00148BC4  48 00 02 25 */	bl destroy_tentacle_lightning__13zNPCKingJellyFv
/* 8014BAE8 00148BC8  7F BF EB 78 */	mr r31, r29
/* 8014BAEC 00148BCC  3B C0 00 00 */	li r30, 0x0
/* 8014BAF0 00148BD0  48 00 00 18 */	b .L_8014BB08
.L_8014BAF4:
/* 8014BAF4 00148BD4  7F A3 EB 78 */	mr r3, r29
/* 8014BAF8 00148BD8  38 9F 03 0C */	addi r4, r31, 0x30c
/* 8014BAFC 00148BDC  4B FF F1 2D */	bl disable_child__13zNPCKingJellyFRQ213zNPCKingJelly10child_data
/* 8014BB00 00148BE0  3B FF 00 2C */	addi r31, r31, 0x2c
/* 8014BB04 00148BE4  3B DE 00 01 */	addi r30, r30, 0x1
.L_8014BB08:
/* 8014BB08 00148BE8  80 1D 08 8C */	lwz r0, 0x88c(r29)
/* 8014BB0C 00148BEC  7C 1E 00 40 */	cmplw r30, r0
/* 8014BB10 00148BF0  41 80 FF E4 */	blt .L_8014BAF4
/* 8014BB14 00148BF4  3C 60 80 33 */	lis r3, "tweak__31@unnamed@zNPCTypeKingJelly_cpp@"@ha
/* 8014BB18 00148BF8  C0 22 A6 30 */	lfs f1, "@1868"@sda21(r2)
/* 8014BB1C 00148BFC  38 63 85 38 */	addi r3, r3, "tweak__31@unnamed@zNPCTypeKingJelly_cpp@"@l
/* 8014BB20 00148C00  C0 43 00 2C */	lfs f2, 0x2c(r3)
/* 8014BB24 00148C04  4B F5 C1 3D */	bl zMusicSetVolume__Fff
/* 8014BB28 00148C08  7F A3 EB 78 */	mr r3, r29
/* 8014BB2C 00148C0C  48 00 15 A5 */	bl reset_curtain__13zNPCKingJellyFv
.L_8014BB30:
/* 8014BB30 00148C10  80 01 00 24 */	lwz r0, 0x24(r1)
/* 8014BB34 00148C14  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 8014BB38 00148C18  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 8014BB3C 00148C1C  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 8014BB40 00148C20  7C 08 03 A6 */	mtlr r0
/* 8014BB44 00148C24  38 21 00 20 */	addi r1, r1, 0x20
/* 8014BB48 00148C28  4E 80 00 20 */	blr
.endfn decompose__13zNPCKingJellyFv

# zNPCKingJelly::post_decompose()
.fn post_decompose__13zNPCKingJellyFv, global
/* 8014BB4C 00148C2C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8014BB50 00148C30  7C 08 02 A6 */	mflr r0
/* 8014BB54 00148C34  90 01 00 14 */	stw r0, 0x14(r1)
/* 8014BB58 00148C38  48 00 00 29 */	bl vanish__13zNPCKingJellyFv
/* 8014BB5C 00148C3C  38 60 00 08 */	li r3, 0x8
/* 8014BB60 00148C40  4B F0 65 B1 */	bl zCameraEnableTracking__F17camera_owner_enum
/* 8014BB64 00148C44  3C 60 80 2A */	lis r3, "boss_cam__31@unnamed@zNPCTypeKingJelly_cpp@"@ha
/* 8014BB68 00148C48  38 63 9E 2C */	addi r3, r3, "boss_cam__31@unnamed@zNPCTypeKingJelly_cpp@"@l
/* 8014BB6C 00148C4C  4B EC 23 8D */	bl stop__13xBinaryCameraFv
/* 8014BB70 00148C50  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8014BB74 00148C54  7C 08 03 A6 */	mtlr r0
/* 8014BB78 00148C58  38 21 00 10 */	addi r1, r1, 0x10
/* 8014BB7C 00148C5C  4E 80 00 20 */	blr
.endfn post_decompose__13zNPCKingJellyFv

# zNPCKingJelly::vanish()
.fn vanish__13zNPCKingJellyFv, global
/* 8014BB80 00148C60  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8014BB84 00148C64  7C 08 02 A6 */	mflr r0
/* 8014BB88 00148C68  90 01 00 14 */	stw r0, 0x14(r1)
/* 8014BB8C 00148C6C  38 00 00 00 */	li r0, 0x0
/* 8014BB90 00148C70  88 83 00 1C */	lbz r4, 0x1c(r3)
/* 8014BB94 00148C74  98 83 02 B4 */	stb r4, 0x2b4(r3)
/* 8014BB98 00148C78  98 03 00 1B */	stb r0, 0x1b(r3)
/* 8014BB9C 00148C7C  98 03 00 1C */	stb r0, 0x1c(r3)
/* 8014BBA0 00148C80  98 03 00 F0 */	stb r0, 0xf0(r3)
/* 8014BBA4 00148C84  98 03 00 F1 */	stb r0, 0xf1(r3)
/* 8014BBA8 00148C88  98 03 00 22 */	stb r0, 0x22(r3)
/* 8014BBAC 00148C8C  98 03 00 23 */	stb r0, 0x23(r3)
/* 8014BBB0 00148C90  4B EC FC 39 */	bl xEntHide__FP4xEnt
/* 8014BBB4 00148C94  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8014BBB8 00148C98  7C 08 03 A6 */	mtlr r0
/* 8014BBBC 00148C9C  38 21 00 10 */	addi r1, r1, 0x10
/* 8014BBC0 00148CA0  4E 80 00 20 */	blr
.endfn vanish__13zNPCKingJellyFv

# zNPCKingJelly::reappear()
.fn reappear__13zNPCKingJellyFv, global
/* 8014BBC4 00148CA4  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8014BBC8 00148CA8  7C 08 02 A6 */	mflr r0
/* 8014BBCC 00148CAC  90 01 00 14 */	stw r0, 0x14(r1)
/* 8014BBD0 00148CB0  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8014BBD4 00148CB4  7C 7F 1B 78 */	mr r31, r3
/* 8014BBD8 00148CB8  88 03 02 B4 */	lbz r0, 0x2b4(r3)
/* 8014BBDC 00148CBC  98 03 00 1C */	stb r0, 0x1c(r3)
/* 8014BBE0 00148CC0  4B F8 D5 55 */	bl RestoreColFlags__9xNPCBasicFv
/* 8014BBE4 00148CC4  7F E3 FB 78 */	mr r3, r31
/* 8014BBE8 00148CC8  4B EC FC 11 */	bl xEntShow__FP4xEnt
/* 8014BBEC 00148CCC  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8014BBF0 00148CD0  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8014BBF4 00148CD4  7C 08 03 A6 */	mtlr r0
/* 8014BBF8 00148CD8  38 21 00 10 */	addi r1, r1, 0x10
/* 8014BBFC 00148CDC  4E 80 00 20 */	blr
.endfn reappear__13zNPCKingJellyFv

# zNPCKingJelly::create_tentacle_lightning()
.fn create_tentacle_lightning__13zNPCKingJellyFv, global
/* 8014BC00 00148CE0  4E 80 00 20 */	blr
.endfn create_tentacle_lightning__13zNPCKingJellyFv

# zNPCKingJelly::new_tentacle_lightning(xVec3*)
.fn new_tentacle_lightning__13zNPCKingJellyFP5xVec3, global
/* 8014BC04 00148CE4  94 21 FF B0 */	stwu r1, -0x50(r1)
/* 8014BC08 00148CE8  7C 08 02 A6 */	mflr r0
/* 8014BC0C 00148CEC  3C 60 80 33 */	lis r3, "tweak__31@unnamed@zNPCTypeKingJelly_cpp@"@ha
/* 8014BC10 00148CF0  38 E0 00 01 */	li r7, 0x1
/* 8014BC14 00148CF4  90 01 00 54 */	stw r0, 0x54(r1)
/* 8014BC18 00148CF8  38 A3 85 38 */	addi r5, r3, "tweak__31@unnamed@zNPCTypeKingJelly_cpp@"@l
/* 8014BC1C 00148CFC  38 C0 00 0D */	li r6, 0xd
/* 8014BC20 00148D00  38 00 00 00 */	li r0, 0x0
/* 8014BC24 00148D04  93 E1 00 4C */	stw r31, 0x4c(r1)
/* 8014BC28 00148D08  7C 9F 23 78 */	mr r31, r4
/* 8014BC2C 00148D0C  38 61 00 30 */	addi r3, r1, 0x30
/* 8014BC30 00148D10  38 85 01 70 */	addi r4, r5, 0x170
/* 8014BC34 00148D14  C0 05 01 60 */	lfs f0, 0x160(r5)
/* 8014BC38 00148D18  90 E1 00 08 */	stw r7, 0x8(r1)
/* 8014BC3C 00148D1C  B0 C1 00 20 */	sth r6, 0x20(r1)
/* 8014BC40 00148D20  B0 01 00 22 */	sth r0, 0x22(r1)
/* 8014BC44 00148D24  D0 01 00 2C */	stfs f0, 0x2c(r1)
/* 8014BC48 00148D28  4B EC C3 51 */	bl __as__10iColor_tagFRC10iColor_tag
/* 8014BC4C 00148D2C  3C 60 80 33 */	lis r3, "tweak__31@unnamed@zNPCTypeKingJelly_cpp@"@ha
/* 8014BC50 00148D30  38 63 85 38 */	addi r3, r3, "tweak__31@unnamed@zNPCTypeKingJelly_cpp@"@l
/* 8014BC54 00148D34  C0 23 01 64 */	lfs f1, 0x164(r3)
/* 8014BC58 00148D38  C0 03 01 68 */	lfs f0, 0x168(r3)
/* 8014BC5C 00148D3C  D0 21 00 34 */	stfs f1, 0x34(r1)
/* 8014BC60 00148D40  C0 22 A6 34 */	lfs f1, "@1869"@sda21(r2)
/* 8014BC64 00148D44  D0 21 00 28 */	stfs f1, 0x28(r1)
/* 8014BC68 00148D48  D0 01 00 14 */	stfs f0, 0x14(r1)
/* 8014BC6C 00148D4C  4B EE 50 1D */	bl xurand__Fv
/* 8014BC70 00148D50  C0 02 A6 50 */	lfs f0, "@1987"@sda21(r2)
/* 8014BC74 00148D54  3C 60 80 33 */	lis r3, "tweak__31@unnamed@zNPCTypeKingJelly_cpp@"@ha
/* 8014BC78 00148D58  38 63 85 38 */	addi r3, r3, "tweak__31@unnamed@zNPCTypeKingJelly_cpp@"@l
/* 8014BC7C 00148D5C  C0 42 A6 AC */	lfs f2, "@2414"@sda21(r2)
/* 8014BC80 00148D60  EC 61 00 28 */	fsubs f3, f1, f0
/* 8014BC84 00148D64  C0 22 A6 30 */	lfs f1, "@1868"@sda21(r2)
/* 8014BC88 00148D68  38 00 00 AA */	li r0, 0xaa
/* 8014BC8C 00148D6C  C0 03 01 78 */	lfs f0, 0x178(r3)
/* 8014BC90 00148D70  90 01 00 38 */	stw r0, 0x38(r1)
/* 8014BC94 00148D74  EC 22 08 FA */	fmadds f1, f2, f3, f1
/* 8014BC98 00148D78  EC 00 00 72 */	fmuls f0, f0, f1
/* 8014BC9C 00148D7C  D0 01 00 24 */	stfs f0, 0x24(r1)
/* 8014BCA0 00148D80  4B EE 4F E9 */	bl xurand__Fv
/* 8014BCA4 00148D84  C0 62 A7 54 */	lfs f3, "@2977"@sda21(r2)
/* 8014BCA8 00148D88  3C 60 80 33 */	lis r3, "tweak__31@unnamed@zNPCTypeKingJelly_cpp@"@ha
/* 8014BCAC 00148D8C  C0 42 A6 98 */	lfs f2, "@2409"@sda21(r2)
/* 8014BCB0 00148D90  38 63 85 38 */	addi r3, r3, "tweak__31@unnamed@zNPCTypeKingJelly_cpp@"@l
/* 8014BCB4 00148D94  C0 03 01 6C */	lfs f0, 0x16c(r3)
/* 8014BCB8 00148D98  EC 23 10 7A */	fmadds f1, f3, f1, f2
/* 8014BCBC 00148D9C  D0 01 00 10 */	stfs f0, 0x10(r1)
/* 8014BCC0 00148DA0  D0 21 00 0C */	stfs f1, 0xc(r1)
/* 8014BCC4 00148DA4  4B EE 4F A5 */	bl xrand__Fv
/* 8014BCC8 00148DA8  54 60 07 FF */	clrlwi. r0, r3, 31
/* 8014BCCC 00148DAC  41 82 00 14 */	beq .L_8014BCE0
/* 8014BCD0 00148DB0  C0 21 00 10 */	lfs f1, 0x10(r1)
/* 8014BCD4 00148DB4  C0 02 A7 0C */	lfs f0, "@2438"@sda21(r2)
/* 8014BCD8 00148DB8  EC 01 00 32 */	fmuls f0, f1, f0
/* 8014BCDC 00148DBC  D0 01 00 10 */	stfs f0, 0x10(r1)
.L_8014BCE0:
/* 8014BCE0 00148DC0  38 00 00 00 */	li r0, 0x0
/* 8014BCE4 00148DC4  93 E1 00 18 */	stw r31, 0x18(r1)
/* 8014BCE8 00148DC8  38 61 00 08 */	addi r3, r1, 0x8
/* 8014BCEC 00148DCC  90 01 00 1C */	stw r0, 0x1c(r1)
/* 8014BCF0 00148DD0  4B F5 3C 81 */	bl zLightningAdd__FP16_tagLightningAdd
/* 8014BCF4 00148DD4  80 01 00 54 */	lwz r0, 0x54(r1)
/* 8014BCF8 00148DD8  83 E1 00 4C */	lwz r31, 0x4c(r1)
/* 8014BCFC 00148DDC  7C 08 03 A6 */	mtlr r0
/* 8014BD00 00148DE0  38 21 00 50 */	addi r1, r1, 0x50
/* 8014BD04 00148DE4  4E 80 00 20 */	blr
.endfn new_tentacle_lightning__13zNPCKingJellyFP5xVec3

# zNPCKingJelly::destroy_tentacle_lightning()
.fn destroy_tentacle_lightning__13zNPCKingJellyFv, global
/* 8014BD08 00148DE8  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 8014BD0C 00148DEC  7C 08 02 A6 */	mflr r0
/* 8014BD10 00148DF0  90 01 00 24 */	stw r0, 0x24(r1)
/* 8014BD14 00148DF4  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 8014BD18 00148DF8  3B E0 00 00 */	li r31, 0x0
/* 8014BD1C 00148DFC  93 C1 00 18 */	stw r30, 0x18(r1)
/* 8014BD20 00148E00  7C 7E 1B 78 */	mr r30, r3
/* 8014BD24 00148E04  93 A1 00 14 */	stw r29, 0x14(r1)
/* 8014BD28 00148E08  3B A0 00 00 */	li r29, 0x0
.L_8014BD2C:
/* 8014BD2C 00148E0C  80 7E 08 94 */	lwz r3, 0x894(r30)
/* 8014BD30 00148E10  28 03 00 00 */	cmplwi r3, 0x0
/* 8014BD34 00148E14  41 82 00 0C */	beq .L_8014BD40
/* 8014BD38 00148E18  4B F5 5B 7D */	bl zLightningKill__FP10zLightning
/* 8014BD3C 00148E1C  93 FE 08 94 */	stw r31, 0x894(r30)
.L_8014BD40:
/* 8014BD40 00148E20  3B BD 00 01 */	addi r29, r29, 0x1
/* 8014BD44 00148E24  3B DE 00 04 */	addi r30, r30, 0x4
/* 8014BD48 00148E28  2C 1D 00 07 */	cmpwi r29, 0x7
/* 8014BD4C 00148E2C  41 80 FF E0 */	blt .L_8014BD2C
/* 8014BD50 00148E30  80 01 00 24 */	lwz r0, 0x24(r1)
/* 8014BD54 00148E34  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 8014BD58 00148E38  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 8014BD5C 00148E3C  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 8014BD60 00148E40  7C 08 03 A6 */	mtlr r0
/* 8014BD64 00148E44  38 21 00 20 */	addi r1, r1, 0x20
/* 8014BD68 00148E48  4E 80 00 20 */	blr
.endfn destroy_tentacle_lightning__13zNPCKingJellyFv

# zNPCKingJelly::update_tentacle_lightning(float)
.fn update_tentacle_lightning__13zNPCKingJellyFf, global
/* 8014BD6C 00148E4C  94 21 FF D0 */	stwu r1, -0x30(r1)
/* 8014BD70 00148E50  7C 08 02 A6 */	mflr r0
/* 8014BD74 00148E54  90 01 00 34 */	stw r0, 0x34(r1)
/* 8014BD78 00148E58  DB E1 00 20 */	stfd f31, 0x20(r1)
/* 8014BD7C 00148E5C  F3 E1 00 28 */	psq_st f31, 0x28(r1), 0, qr0
/* 8014BD80 00148E60  BF 41 00 08 */	stmw r26, 0x8(r1)
/* 8014BD84 00148E64  FF E0 08 90 */	fmr f31, f1
/* 8014BD88 00148E68  7C 7E 1B 78 */	mr r30, r3
/* 8014BD8C 00148E6C  7F DC F3 78 */	mr r28, r30
/* 8014BD90 00148E70  3B E0 00 00 */	li r31, 0x0
/* 8014BD94 00148E74  7F DD F3 78 */	mr r29, r30
.L_8014BD98:
/* 8014BD98 00148E78  80 7C 08 94 */	lwz r3, 0x894(r28)
/* 8014BD9C 00148E7C  28 03 00 00 */	cmplwi r3, 0x0
/* 8014BDA0 00148E80  41 82 00 44 */	beq .L_8014BDE4
/* 8014BDA4 00148E84  80 83 00 04 */	lwz r4, 0x4(r3)
/* 8014BDA8 00148E88  54 80 07 FF */	clrlwi. r0, r4, 31
/* 8014BDAC 00148E8C  41 82 00 0C */	beq .L_8014BDB8
/* 8014BDB0 00148E90  54 80 06 73 */	rlwinm. r0, r4, 0, 25, 25
/* 8014BDB4 00148E94  40 82 00 14 */	bne .L_8014BDC8
.L_8014BDB8:
/* 8014BDB8 00148E98  4B F5 5A FD */	bl zLightningKill__FP10zLightning
/* 8014BDBC 00148E9C  38 00 00 00 */	li r0, 0x0
/* 8014BDC0 00148EA0  90 1C 08 94 */	stw r0, 0x894(r28)
/* 8014BDC4 00148EA4  48 00 00 20 */	b .L_8014BDE4
.L_8014BDC8:
/* 8014BDC8 00148EA8  7F C3 F3 78 */	mr r3, r30
/* 8014BDCC 00148EAC  7F E4 FB 78 */	mr r4, r31
/* 8014BDD0 00148EB0  48 00 03 59 */	bl refresh_tentacle_points__13zNPCKingJellyFi
/* 8014BDD4 00148EB4  80 7C 08 94 */	lwz r3, 0x894(r28)
/* 8014BDD8 00148EB8  38 9D 08 B0 */	addi r4, r29, 0x8b0
/* 8014BDDC 00148EBC  38 A0 00 00 */	li r5, 0x0
/* 8014BDE0 00148EC0  4B F5 5A E9 */	bl zLightningModifyEndpoints__FP10zLightningP5xVec3P5xVec3
.L_8014BDE4:
/* 8014BDE4 00148EC4  3B FF 00 01 */	addi r31, r31, 0x1
/* 8014BDE8 00148EC8  3B BD 00 9C */	addi r29, r29, 0x9c
/* 8014BDEC 00148ECC  2C 1F 00 07 */	cmpwi r31, 0x7
/* 8014BDF0 00148ED0  3B 9C 00 04 */	addi r28, r28, 0x4
/* 8014BDF4 00148ED4  41 80 FF A4 */	blt .L_8014BD98
/* 8014BDF8 00148ED8  3C 60 80 33 */	lis r3, "tweak__31@unnamed@zNPCTypeKingJelly_cpp@"@ha
/* 8014BDFC 00148EDC  C0 02 A6 34 */	lfs f0, "@1869"@sda21(r2)
/* 8014BE00 00148EE0  3B 83 85 38 */	addi r28, r3, "tweak__31@unnamed@zNPCTypeKingJelly_cpp@"@l
/* 8014BE04 00148EE4  C0 3C 01 80 */	lfs f1, 0x180(r28)
/* 8014BE08 00148EE8  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8014BE0C 00148EEC  40 81 00 38 */	ble .L_8014BE44
/* 8014BE10 00148EF0  3B E0 00 00 */	li r31, 0x0
/* 8014BE14 00148EF4  7F DD F3 78 */	mr r29, r30
.L_8014BE18:
/* 8014BE18 00148EF8  80 9D 08 94 */	lwz r4, 0x894(r29)
/* 8014BE1C 00148EFC  28 04 00 00 */	cmplwi r4, 0x0
/* 8014BE20 00148F00  41 82 00 14 */	beq .L_8014BE34
/* 8014BE24 00148F04  FC 40 F8 90 */	fmr f2, f31
/* 8014BE28 00148F08  C0 3C 01 80 */	lfs f1, 0x180(r28)
/* 8014BE2C 00148F0C  7F C3 F3 78 */	mr r3, r30
/* 8014BE30 00148F10  48 00 01 79 */	bl generate_zap_particles__13zNPCKingJellyFRC10zLightningff
.L_8014BE34:
/* 8014BE34 00148F14  3B FF 00 01 */	addi r31, r31, 0x1
/* 8014BE38 00148F18  3B BD 00 04 */	addi r29, r29, 0x4
/* 8014BE3C 00148F1C  2C 1F 00 07 */	cmpwi r31, 0x7
/* 8014BE40 00148F20  41 80 FF D8 */	blt .L_8014BE18
.L_8014BE44:
/* 8014BE44 00148F24  88 1E 10 90 */	lbz r0, 0x1090(r30)
/* 8014BE48 00148F28  28 00 00 00 */	cmplwi r0, 0x0
/* 8014BE4C 00148F2C  40 82 01 40 */	bne .L_8014BF8C
/* 8014BE50 00148F30  C0 1E 08 90 */	lfs f0, 0x890(r30)
/* 8014BE54 00148F34  3C 60 80 33 */	lis r3, "tweak__31@unnamed@zNPCTypeKingJelly_cpp@"@ha
/* 8014BE58 00148F38  3B 83 85 38 */	addi r28, r3, "tweak__31@unnamed@zNPCTypeKingJelly_cpp@"@l
/* 8014BE5C 00148F3C  EC 00 F8 2A */	fadds f0, f0, f31
/* 8014BE60 00148F40  D0 1E 08 90 */	stfs f0, 0x890(r30)
/* 8014BE64 00148F44  C0 3E 08 90 */	lfs f1, 0x890(r30)
/* 8014BE68 00148F48  C0 1C 01 74 */	lfs f0, 0x174(r28)
/* 8014BE6C 00148F4C  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8014BE70 00148F50  41 80 01 1C */	blt .L_8014BF8C
/* 8014BE74 00148F54  4B EE 4E 15 */	bl xurand__Fv
/* 8014BE78 00148F58  C0 02 A6 50 */	lfs f0, "@1987"@sda21(r2)
/* 8014BE7C 00148F5C  C0 42 A6 AC */	lfs f2, "@2414"@sda21(r2)
/* 8014BE80 00148F60  EC 21 00 28 */	fsubs f1, f1, f0
/* 8014BE84 00148F64  C0 1C 01 74 */	lfs f0, 0x174(r28)
/* 8014BE88 00148F68  EC 22 00 72 */	fmuls f1, f2, f1
/* 8014BE8C 00148F6C  EC 00 00 72 */	fmuls f0, f0, f1
/* 8014BE90 00148F70  D0 1E 08 90 */	stfs f0, 0x890(r30)
/* 8014BE94 00148F74  4B EE 4D D5 */	bl xrand__Fv
/* 8014BE98 00148F78  3C A0 80 33 */	lis r5, "tweak__31@unnamed@zNPCTypeKingJelly_cpp@"@ha
/* 8014BE9C 00148F7C  3C 80 24 92 */	lis r4, 0x2492
/* 8014BEA0 00148F80  38 A5 85 38 */	addi r5, r5, "tweak__31@unnamed@zNPCTypeKingJelly_cpp@"@l
/* 8014BEA4 00148F84  3B E0 00 00 */	li r31, 0x0
/* 8014BEA8 00148F88  80 A5 01 7C */	lwz r5, 0x17c(r5)
/* 8014BEAC 00148F8C  3B 84 49 25 */	addi r28, r4, 0x4925
/* 8014BEB0 00148F90  3B 40 00 00 */	li r26, 0x0
/* 8014BEB4 00148F94  3B A0 00 01 */	li r29, 0x1
/* 8014BEB8 00148F98  7C 03 2B 96 */	divwu r0, r3, r5
/* 8014BEBC 00148F9C  7C 00 29 D6 */	mullw r0, r0, r5
/* 8014BEC0 00148FA0  7C 60 18 50 */	subf r3, r0, r3
/* 8014BEC4 00148FA4  3B 63 00 01 */	addi r27, r3, 0x1
/* 8014BEC8 00148FA8  48 00 00 38 */	b .L_8014BF00
.L_8014BECC:
/* 8014BECC 00148FAC  4B EE 4D 9D */	bl xrand__Fv
/* 8014BED0 00148FB0  7C 9C 18 16 */	mulhwu r4, r28, r3
/* 8014BED4 00148FB4  7C 04 18 50 */	subf r0, r4, r3
/* 8014BED8 00148FB8  54 00 F8 7E */	srwi r0, r0, 1
/* 8014BEDC 00148FBC  7C 00 22 14 */	add r0, r0, r4
/* 8014BEE0 00148FC0  54 00 F0 BE */	srwi r0, r0, 2
/* 8014BEE4 00148FC4  1C 00 00 07 */	mulli r0, r0, 0x7
/* 8014BEE8 00148FC8  7C 00 18 50 */	subf r0, r0, r3
/* 8014BEEC 00148FCC  7F A3 00 30 */	slw r3, r29, r0
/* 8014BEF0 00148FD0  7F E0 18 39 */	and. r0, r31, r3
/* 8014BEF4 00148FD4  40 82 00 0C */	bne .L_8014BF00
/* 8014BEF8 00148FD8  7F FF 1B 78 */	or r31, r31, r3
/* 8014BEFC 00148FDC  3B 5A 00 01 */	addi r26, r26, 0x1
.L_8014BF00:
/* 8014BF00 00148FE0  7C 1A D8 00 */	cmpw r26, r27
/* 8014BF04 00148FE4  41 80 FF C8 */	blt .L_8014BECC
/* 8014BF08 00148FE8  7F DC F3 78 */	mr r28, r30
/* 8014BF0C 00148FEC  7F DD F3 78 */	mr r29, r30
/* 8014BF10 00148FF0  3B 40 00 00 */	li r26, 0x0
.L_8014BF14:
/* 8014BF14 00148FF4  38 00 00 01 */	li r0, 0x1
/* 8014BF18 00148FF8  7C 00 D0 30 */	slw r0, r0, r26
/* 8014BF1C 00148FFC  7F E0 00 39 */	and. r0, r31, r0
/* 8014BF20 00149000  41 82 00 58 */	beq .L_8014BF78
/* 8014BF24 00149004  80 7C 08 94 */	lwz r3, 0x894(r28)
/* 8014BF28 00149008  28 03 00 00 */	cmplwi r3, 0x0
/* 8014BF2C 0014900C  41 82 00 18 */	beq .L_8014BF44
/* 8014BF30 00149010  80 03 00 04 */	lwz r0, 0x4(r3)
/* 8014BF34 00149014  54 00 07 FF */	clrlwi. r0, r0, 31
/* 8014BF38 00149018  41 82 00 0C */	beq .L_8014BF44
/* 8014BF3C 0014901C  4B F5 59 79 */	bl zLightningKill__FP10zLightning
/* 8014BF40 00149020  48 00 00 10 */	b .L_8014BF50
.L_8014BF44:
/* 8014BF44 00149024  7F C3 F3 78 */	mr r3, r30
/* 8014BF48 00149028  7F 44 D3 78 */	mr r4, r26
/* 8014BF4C 0014902C  48 00 01 DD */	bl refresh_tentacle_points__13zNPCKingJellyFi
.L_8014BF50:
/* 8014BF50 00149030  7F C3 F3 78 */	mr r3, r30
/* 8014BF54 00149034  38 9D 08 B0 */	addi r4, r29, 0x8b0
/* 8014BF58 00149038  4B FF FC AD */	bl new_tentacle_lightning__13zNPCKingJellyFP5xVec3
/* 8014BF5C 0014903C  90 7C 08 94 */	stw r3, 0x894(r28)
/* 8014BF60 00149040  80 7C 08 94 */	lwz r3, 0x894(r28)
/* 8014BF64 00149044  28 03 00 00 */	cmplwi r3, 0x0
/* 8014BF68 00149048  41 82 00 10 */	beq .L_8014BF78
/* 8014BF6C 0014904C  80 03 00 04 */	lwz r0, 0x4(r3)
/* 8014BF70 00149050  60 00 01 00 */	ori r0, r0, 0x100
/* 8014BF74 00149054  90 03 00 04 */	stw r0, 0x4(r3)
.L_8014BF78:
/* 8014BF78 00149058  3B 5A 00 01 */	addi r26, r26, 0x1
/* 8014BF7C 0014905C  3B BD 00 9C */	addi r29, r29, 0x9c
/* 8014BF80 00149060  2C 1A 00 07 */	cmpwi r26, 0x7
/* 8014BF84 00149064  3B 9C 00 04 */	addi r28, r28, 0x4
/* 8014BF88 00149068  41 80 FF 8C */	blt .L_8014BF14
.L_8014BF8C:
/* 8014BF8C 0014906C  E3 E1 00 28 */	psq_l f31, 0x28(r1), 0, qr0
/* 8014BF90 00149070  CB E1 00 20 */	lfd f31, 0x20(r1)
/* 8014BF94 00149074  BB 41 00 08 */	lmw r26, 0x8(r1)
/* 8014BF98 00149078  80 01 00 34 */	lwz r0, 0x34(r1)
/* 8014BF9C 0014907C  7C 08 03 A6 */	mtlr r0
/* 8014BFA0 00149080  38 21 00 30 */	addi r1, r1, 0x30
/* 8014BFA4 00149084  4E 80 00 20 */	blr
.endfn update_tentacle_lightning__13zNPCKingJellyFf

# zNPCKingJelly::generate_zap_particles(const zLightning&, float, float)
.fn generate_zap_particles__13zNPCKingJellyFRC10zLightningff, global
/* 8014BFA8 00149088  94 21 FF 60 */	stwu r1, -0xa0(r1)
/* 8014BFAC 0014908C  7C 08 02 A6 */	mflr r0
/* 8014BFB0 00149090  90 01 00 A4 */	stw r0, 0xa4(r1)
/* 8014BFB4 00149094  DB E1 00 90 */	stfd f31, 0x90(r1)
/* 8014BFB8 00149098  F3 E1 00 98 */	psq_st f31, 0x98(r1), 0, qr0
/* 8014BFBC 0014909C  DB C1 00 80 */	stfd f30, 0x80(r1)
/* 8014BFC0 001490A0  F3 C1 00 88 */	psq_st f30, 0x88(r1), 0, qr0
/* 8014BFC4 001490A4  DB A1 00 70 */	stfd f29, 0x70(r1)
/* 8014BFC8 001490A8  F3 A1 00 78 */	psq_st f29, 0x78(r1), 0, qr0
/* 8014BFCC 001490AC  BE 81 00 40 */	stmw r20, 0x40(r1)
/* 8014BFD0 001490B0  7C 98 23 78 */	mr r24, r4
/* 8014BFD4 001490B4  C0 02 A7 4C */	lfs f0, "@2744"@sda21(r2)
/* 8014BFD8 001490B8  C0 64 02 30 */	lfs f3, 0x230(r4)
/* 8014BFDC 001490BC  FF A0 08 90 */	fmr f29, f1
/* 8014BFE0 001490C0  FF C0 10 90 */	fmr f30, f2
/* 8014BFE4 001490C4  FC 03 00 40 */	fcmpo cr0, f3, f0
/* 8014BFE8 001490C8  4C 40 13 82 */	cror eq, lt, eq
/* 8014BFEC 001490CC  41 82 00 14 */	beq .L_8014C000
/* 8014BFF0 001490D0  C0 18 02 2C */	lfs f0, 0x22c(r24)
/* 8014BFF4 001490D4  FC 03 00 40 */	fcmpo cr0, f3, f0
/* 8014BFF8 001490D8  4C 40 13 82 */	cror eq, lt, eq
/* 8014BFFC 001490DC  40 82 00 0C */	bne .L_8014C008
.L_8014C000:
/* 8014C000 001490E0  C3 E2 A6 30 */	lfs f31, "@1868"@sda21(r2)
/* 8014C004 001490E4  48 00 00 08 */	b .L_8014C00C
.L_8014C008:
/* 8014C008 001490E8  EF E0 18 24 */	fdivs f31, f0, f3
.L_8014C00C:
/* 8014C00C 001490EC  4B EE 4C 7D */	bl xurand__Fv
/* 8014C010 001490F0  EC 5D 07 B2 */	fmuls f2, f29, f30
/* 8014C014 001490F4  3C 60 80 33 */	lis r3, "zap_emitter_settings__31@unnamed@zNPCTypeKingJelly_cpp@"@ha
/* 8014C018 001490F8  3A E3 8A 44 */	addi r23, r3, "zap_emitter_settings__31@unnamed@zNPCTypeKingJelly_cpp@"@l
/* 8014C01C 001490FC  A8 78 01 88 */	lha r3, 0x188(r24)
/* 8014C020 00149100  C0 02 A6 50 */	lfs f0, "@1987"@sda21(r2)
/* 8014C024 00149104  3B B7 01 40 */	addi r29, r23, 0x140
/* 8014C028 00149108  EC 5F 00 B2 */	fmuls f2, f31, f2
/* 8014C02C 0014910C  7F 1E C3 78 */	mr r30, r24
/* 8014C030 00149110  3B 83 FF FF */	addi r28, r3, -0x1
/* 8014C034 00149114  3B 40 00 00 */	li r26, 0x0
/* 8014C038 00149118  3B 20 00 00 */	li r25, 0x0
/* 8014C03C 0014911C  3B E0 00 00 */	li r31, 0x0
/* 8014C040 00149120  EC 02 00 7A */	fmadds f0, f2, f1, f0
/* 8014C044 00149124  FC 00 00 1E */	fctiwz f0, f0
/* 8014C048 00149128  D8 01 00 38 */	stfd f0, 0x38(r1)
/* 8014C04C 0014912C  83 61 00 3C */	lwz r27, 0x3c(r1)
/* 8014C050 00149130  48 00 00 A4 */	b .L_8014C0F4
.L_8014C054:
/* 8014C054 00149134  7C DF E3 D6 */	divw r6, r31, r28
/* 8014C058 00149138  38 19 00 01 */	addi r0, r25, 0x1
/* 8014C05C 0014913C  38 61 00 20 */	addi r3, r1, 0x20
/* 8014C060 00149140  38 BE 00 C8 */	addi r5, r30, 0xc8
/* 8014C064 00149144  1C 80 00 0C */	mulli r4, r0, 0xc
/* 8014C068 00149148  7E BA 30 50 */	subf r21, r26, r6
/* 8014C06C 0014914C  38 84 00 C8 */	addi r4, r4, 0xc8
/* 8014C070 00149150  7F 5A AA 14 */	add r26, r26, r21
/* 8014C074 00149154  7C 98 22 14 */	add r4, r24, r4
/* 8014C078 00149158  4B EB F1 55 */	bl __mi__5xVec3CFRC5xVec3
/* 8014C07C 0014915C  80 81 00 20 */	lwz r4, 0x20(r1)
/* 8014C080 00149160  3A DE 00 C8 */	addi r22, r30, 0xc8
/* 8014C084 00149164  80 61 00 24 */	lwz r3, 0x24(r1)
/* 8014C088 00149168  3A 80 00 00 */	li r20, 0x0
/* 8014C08C 0014916C  80 01 00 28 */	lwz r0, 0x28(r1)
/* 8014C090 00149170  90 81 00 2C */	stw r4, 0x2c(r1)
/* 8014C094 00149174  90 61 00 30 */	stw r3, 0x30(r1)
/* 8014C098 00149178  90 01 00 34 */	stw r0, 0x34(r1)
/* 8014C09C 0014917C  48 00 00 44 */	b .L_8014C0E0
.L_8014C0A0:
/* 8014C0A0 00149180  4B EE 4B E9 */	bl xurand__Fv
/* 8014C0A4 00149184  38 61 00 08 */	addi r3, r1, 0x8
/* 8014C0A8 00149188  38 81 00 2C */	addi r4, r1, 0x2c
/* 8014C0AC 0014918C  4B EB F0 75 */	bl __ml__5xVec3CFf
/* 8014C0B0 00149190  7E C4 B3 78 */	mr r4, r22
/* 8014C0B4 00149194  38 61 00 14 */	addi r3, r1, 0x14
/* 8014C0B8 00149198  38 A1 00 08 */	addi r5, r1, 0x8
/* 8014C0BC 0014919C  4B EC 93 25 */	bl __pl__5xVec3CFRC5xVec3
/* 8014C0C0 001491A0  7F A3 EB 78 */	mr r3, r29
/* 8014C0C4 001491A4  38 81 00 14 */	addi r4, r1, 0x14
/* 8014C0C8 001491A8  4B EB F1 9D */	bl __as__5xVec3FRC5xVec3
/* 8014C0CC 001491AC  FC 20 F0 90 */	fmr f1, f30
/* 8014C0D0 001491B0  80 6D 96 B4 */	lwz r3, "zap_emitter__31@unnamed@zNPCTypeKingJelly_cpp@"@sda21(r13)
/* 8014C0D4 001491B4  7E E4 BB 78 */	mr r4, r23
/* 8014C0D8 001491B8  4B FC BA F1 */	bl xParEmitterEmitCustom__FP11xParEmitterfP25xParEmitterCustomSettings
/* 8014C0DC 001491BC  3A 94 00 01 */	addi r20, r20, 0x1
.L_8014C0E0:
/* 8014C0E0 001491C0  7C 14 A8 00 */	cmpw r20, r21
/* 8014C0E4 001491C4  41 80 FF BC */	blt .L_8014C0A0
/* 8014C0E8 001491C8  7F FF DA 14 */	add r31, r31, r27
/* 8014C0EC 001491CC  3B DE 00 0C */	addi r30, r30, 0xc
/* 8014C0F0 001491D0  3B 39 00 01 */	addi r25, r25, 0x1
.L_8014C0F4:
/* 8014C0F4 001491D4  7C 19 E0 00 */	cmpw r25, r28
/* 8014C0F8 001491D8  41 80 FF 5C */	blt .L_8014C054
/* 8014C0FC 001491DC  E3 E1 00 98 */	psq_l f31, 0x98(r1), 0, qr0
/* 8014C100 001491E0  CB E1 00 90 */	lfd f31, 0x90(r1)
/* 8014C104 001491E4  E3 C1 00 88 */	psq_l f30, 0x88(r1), 0, qr0
/* 8014C108 001491E8  CB C1 00 80 */	lfd f30, 0x80(r1)
/* 8014C10C 001491EC  E3 A1 00 78 */	psq_l f29, 0x78(r1), 0, qr0
/* 8014C110 001491F0  CB A1 00 70 */	lfd f29, 0x70(r1)
/* 8014C114 001491F4  BA 81 00 40 */	lmw r20, 0x40(r1)
/* 8014C118 001491F8  80 01 00 A4 */	lwz r0, 0xa4(r1)
/* 8014C11C 001491FC  7C 08 03 A6 */	mtlr r0
/* 8014C120 00149200  38 21 00 A0 */	addi r1, r1, 0xa0
/* 8014C124 00149204  4E 80 00 20 */	blr
.endfn generate_zap_particles__13zNPCKingJellyFRC10zLightningff

# zNPCKingJelly::refresh_tentacle_points(int)
.fn refresh_tentacle_points__13zNPCKingJellyFi, global
/* 8014C128 00149208  94 21 FF B0 */	stwu r1, -0x50(r1)
/* 8014C12C 0014920C  7C 08 02 A6 */	mflr r0
/* 8014C130 00149210  90 01 00 54 */	stw r0, 0x54(r1)
/* 8014C134 00149214  DB E1 00 40 */	stfd f31, 0x40(r1)
/* 8014C138 00149218  F3 E1 00 48 */	psq_st f31, 0x48(r1), 0, qr0
/* 8014C13C 0014921C  BE E1 00 1C */	stmw r23, 0x1c(r1)
/* 8014C140 00149220  1C 04 00 9C */	mulli r0, r4, 0x9c
/* 8014C144 00149224  7C 77 1B 78 */	mr r23, r3
/* 8014C148 00149228  3C 60 80 27 */	lis r3, "tentacle_bone__31@unnamed@zNPCTypeKingJelly_cpp@"@ha
/* 8014C14C 0014922C  54 84 10 3A */	slwi r4, r4, 2
/* 8014C150 00149230  7F 77 02 14 */	add r27, r23, r0
/* 8014C154 00149234  3B 80 00 00 */	li r28, 0x0
/* 8014C158 00149238  38 03 D8 3C */	addi r0, r3, "tentacle_bone__31@unnamed@zNPCTypeKingJelly_cpp@"@l
/* 8014C15C 0014923C  7F 7E DB 78 */	mr r30, r27
/* 8014C160 00149240  7F E0 22 14 */	add r31, r0, r4
.L_8014C164:
/* 8014C164 00149244  80 97 00 24 */	lwz r4, 0x24(r23)
/* 8014C168 00149248  38 61 00 08 */	addi r3, r1, 0x8
/* 8014C16C 0014924C  88 BF 00 00 */	lbz r5, 0x0(r31)
/* 8014C170 00149250  4B EE 8E 09 */	bl xModelGetBoneLocation__FRC14xModelInstanceUl
/* 8014C174 00149254  38 7E 08 B0 */	addi r3, r30, 0x8b0
/* 8014C178 00149258  38 81 00 08 */	addi r4, r1, 0x8
/* 8014C17C 0014925C  4B EB F0 E9 */	bl __as__5xVec3FRC5xVec3
/* 8014C180 00149260  3B 9C 00 01 */	addi r28, r28, 0x1
/* 8014C184 00149264  3B DE 00 30 */	addi r30, r30, 0x30
/* 8014C188 00149268  2C 1C 00 04 */	cmpwi r28, 0x4
/* 8014C18C 0014926C  3B FF 00 01 */	addi r31, r31, 0x1
/* 8014C190 00149270  41 80 FF D4 */	blt .L_8014C164
/* 8014C194 00149274  7F 7D DB 78 */	mr r29, r27
/* 8014C198 00149278  3B 40 00 00 */	li r26, 0x0
/* 8014C19C 0014927C  3B 80 00 00 */	li r28, 0x0
.L_8014C1A0:
/* 8014C1A0 00149280  38 1A 00 01 */	addi r0, r26, 0x1
/* 8014C1A4 00149284  3B DC 00 01 */	addi r30, r28, 0x1
/* 8014C1A8 00149288  1C 60 00 30 */	mulli r3, r0, 0x30
/* 8014C1AC 0014928C  C3 E2 A6 C0 */	lfs f31, "@2419"@sda21(r2)
/* 8014C1B0 00149290  3B 3D 08 B0 */	addi r25, r29, 0x8b0
/* 8014C1B4 00149294  3A E0 00 01 */	li r23, 0x1
/* 8014C1B8 00149298  3B 03 08 B0 */	addi r24, r3, 0x8b0
/* 8014C1BC 0014929C  1F FE 00 0C */	mulli r31, r30, 0xc
/* 8014C1C0 001492A0  7F 1B C2 14 */	add r24, r27, r24
.L_8014C1C4:
/* 8014C1C4 001492A4  FC 20 F8 90 */	fmr f1, f31
/* 8014C1C8 001492A8  38 7F 08 B0 */	addi r3, r31, 0x8b0
/* 8014C1CC 001492AC  7F 24 CB 78 */	mr r4, r25
/* 8014C1D0 001492B0  7F 05 C3 78 */	mr r5, r24
/* 8014C1D4 001492B4  7C 7B 1A 14 */	add r3, r27, r3
/* 8014C1D8 001492B8  4B EC BB 1D */	bl xVec3Lerp__FP5xVec3PC5xVec3PC5xVec3f
/* 8014C1DC 001492BC  C0 02 A6 C0 */	lfs f0, "@2419"@sda21(r2)
/* 8014C1E0 001492C0  3A F7 00 01 */	addi r23, r23, 0x1
/* 8014C1E4 001492C4  2C 17 00 04 */	cmpwi r23, 0x4
/* 8014C1E8 001492C8  3B FF 00 0C */	addi r31, r31, 0xc
/* 8014C1EC 001492CC  EF FF 00 2A */	fadds f31, f31, f0
/* 8014C1F0 001492D0  3B DE 00 01 */	addi r30, r30, 0x1
/* 8014C1F4 001492D4  41 80 FF D0 */	blt .L_8014C1C4
/* 8014C1F8 001492D8  3B 5A 00 01 */	addi r26, r26, 0x1
/* 8014C1FC 001492DC  3B 9C 00 04 */	addi r28, r28, 0x4
/* 8014C200 001492E0  2C 1A 00 03 */	cmpwi r26, 0x3
/* 8014C204 001492E4  3B BD 00 30 */	addi r29, r29, 0x30
/* 8014C208 001492E8  41 80 FF 98 */	blt .L_8014C1A0
/* 8014C20C 001492EC  E3 E1 00 48 */	psq_l f31, 0x48(r1), 0, qr0
/* 8014C210 001492F0  CB E1 00 40 */	lfd f31, 0x40(r1)
/* 8014C214 001492F4  BA E1 00 1C */	lmw r23, 0x1c(r1)
/* 8014C218 001492F8  80 01 00 54 */	lwz r0, 0x54(r1)
/* 8014C21C 001492FC  7C 08 03 A6 */	mtlr r0
/* 8014C220 00149300  38 21 00 50 */	addi r1, r1, 0x50
/* 8014C224 00149304  4E 80 00 20 */	blr
.endfn refresh_tentacle_points__13zNPCKingJellyFi

# zNPCKingJelly::refresh_tentacle_points()
.fn refresh_tentacle_points__13zNPCKingJellyFv, global
/* 8014C228 00149308  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8014C22C 0014930C  7C 08 02 A6 */	mflr r0
/* 8014C230 00149310  90 01 00 14 */	stw r0, 0x14(r1)
/* 8014C234 00149314  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8014C238 00149318  3B E0 00 00 */	li r31, 0x0
/* 8014C23C 0014931C  93 C1 00 08 */	stw r30, 0x8(r1)
/* 8014C240 00149320  7C 7E 1B 78 */	mr r30, r3
.L_8014C244:
/* 8014C244 00149324  7F C3 F3 78 */	mr r3, r30
/* 8014C248 00149328  7F E4 FB 78 */	mr r4, r31
/* 8014C24C 0014932C  4B FF FE DD */	bl refresh_tentacle_points__13zNPCKingJellyFi
/* 8014C250 00149330  3B FF 00 01 */	addi r31, r31, 0x1
/* 8014C254 00149334  2C 1F 00 07 */	cmpwi r31, 0x7
/* 8014C258 00149338  41 80 FF EC */	blt .L_8014C244
/* 8014C25C 0014933C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8014C260 00149340  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8014C264 00149344  83 C1 00 08 */	lwz r30, 0x8(r1)
/* 8014C268 00149348  7C 08 03 A6 */	mtlr r0
/* 8014C26C 0014934C  38 21 00 10 */	addi r1, r1, 0x10
/* 8014C270 00149350  4E 80 00 20 */	blr
.endfn refresh_tentacle_points__13zNPCKingJellyFv

# zNPCKingJelly::update_rings(float)
.fn update_rings__13zNPCKingJellyFf, global
/* 8014C274 00149354  94 21 FF B0 */	stwu r1, -0x50(r1)
/* 8014C278 00149358  7C 08 02 A6 */	mflr r0
/* 8014C27C 0014935C  90 01 00 54 */	stw r0, 0x54(r1)
/* 8014C280 00149360  DB E1 00 40 */	stfd f31, 0x40(r1)
/* 8014C284 00149364  F3 E1 00 48 */	psq_st f31, 0x48(r1), 0, qr0
/* 8014C288 00149368  DB C1 00 30 */	stfd f30, 0x30(r1)
/* 8014C28C 0014936C  F3 C1 00 38 */	psq_st f30, 0x38(r1), 0, qr0
/* 8014C290 00149370  BF 41 00 18 */	stmw r26, 0x18(r1)
/* 8014C294 00149374  7C 7A 1B 78 */	mr r26, r3
/* 8014C298 00149378  FF C0 08 90 */	fmr f30, f1
/* 8014C29C 0014937C  80 63 00 24 */	lwz r3, 0x24(r3)
/* 8014C2A0 00149380  7F 5F D3 78 */	mr r31, r26
/* 8014C2A4 00149384  83 DA 01 D8 */	lwz r30, 0x1d8(r26)
/* 8014C2A8 00149388  3B 80 00 00 */	li r28, 0x0
/* 8014C2AC 0014938C  83 A3 00 4C */	lwz r29, 0x4c(r3)
/* 8014C2B0 00149390  C3 FE 00 40 */	lfs f31, 0x40(r30)
/* 8014C2B4 00149394  80 7D 00 30 */	lwz r3, 0x30(r29)
/* 8014C2B8 00149398  80 1D 00 34 */	lwz r0, 0x34(r29)
/* 8014C2BC 0014939C  90 61 00 08 */	stw r3, 0x8(r1)
/* 8014C2C0 001493A0  90 01 00 0C */	stw r0, 0xc(r1)
/* 8014C2C4 001493A4  80 1D 00 38 */	lwz r0, 0x38(r29)
/* 8014C2C8 001493A8  90 01 00 10 */	stw r0, 0x10(r1)
.L_8014C2CC:
/* 8014C2CC 001493AC  3B 7F 0C F4 */	addi r27, r31, 0xcf4
/* 8014C2D0 001493B0  38 81 00 08 */	addi r4, r1, 0x8
/* 8014C2D4 001493B4  38 7B 00 04 */	addi r3, r27, 0x4
/* 8014C2D8 001493B8  4B EB EF 8D */	bl __as__5xVec3FRC5xVec3
/* 8014C2DC 001493BC  88 1A 02 B7 */	lbz r0, 0x2b7(r26)
/* 8014C2E0 001493C0  28 00 00 00 */	cmplwi r0, 0x0
/* 8014C2E4 001493C4  40 82 00 18 */	bne .L_8014C2FC
/* 8014C2E8 001493C8  C0 3D 00 B4 */	lfs f1, 0xb4(r29)
/* 8014C2EC 001493CC  C0 1E 00 38 */	lfs f0, 0x38(r30)
/* 8014C2F0 001493D0  EC 01 00 2A */	fadds f0, f1, f0
/* 8014C2F4 001493D4  EC 00 F8 28 */	fsubs f0, f0, f31
/* 8014C2F8 001493D8  D0 1B 00 18 */	stfs f0, 0x18(r27)
.L_8014C2FC:
/* 8014C2FC 001493DC  FC 20 F0 90 */	fmr f1, f30
/* 8014C300 001493E0  7F 63 DB 78 */	mr r3, r27
/* 8014C304 001493E4  48 00 25 85 */	bl update__14lightning_ringFf
/* 8014C308 001493E8  3B 9C 00 01 */	addi r28, r28, 0x1
/* 8014C30C 001493EC  3B FF 00 84 */	addi r31, r31, 0x84
/* 8014C310 001493F0  2C 1C 00 03 */	cmpwi r28, 0x3
/* 8014C314 001493F4  41 80 FF B8 */	blt .L_8014C2CC
/* 8014C318 001493F8  3B 60 00 00 */	li r27, 0x0
/* 8014C31C 001493FC  7F 5F D3 78 */	mr r31, r26
.L_8014C320:
/* 8014C320 00149400  3B 9F 0E 80 */	addi r28, r31, 0xe80
/* 8014C324 00149404  88 1F 0E 80 */	lbz r0, 0xe80(r31)
/* 8014C328 00149408  28 00 00 00 */	cmplwi r0, 0x0
/* 8014C32C 0014940C  41 82 00 24 */	beq .L_8014C350
/* 8014C330 00149410  FC 20 F0 90 */	fmr f1, f30
/* 8014C334 00149414  7F 83 E3 78 */	mr r3, r28
/* 8014C338 00149418  48 00 25 51 */	bl update__14lightning_ringFf
/* 8014C33C 0014941C  88 1C 00 53 */	lbz r0, 0x53(r28)
/* 8014C340 00149420  28 00 00 00 */	cmplwi r0, 0x0
/* 8014C344 00149424  40 82 00 0C */	bne .L_8014C350
/* 8014C348 00149428  7F 83 E3 78 */	mr r3, r28
/* 8014C34C 0014942C  4B FF A9 E9 */	bl destroy__14lightning_ringFv
.L_8014C350:
/* 8014C350 00149430  3B 7B 00 01 */	addi r27, r27, 0x1
/* 8014C354 00149434  3B FF 00 84 */	addi r31, r31, 0x84
/* 8014C358 00149438  2C 1B 00 04 */	cmpwi r27, 0x4
/* 8014C35C 0014943C  41 80 FF C4 */	blt .L_8014C320
/* 8014C360 00149440  88 1A 0E 80 */	lbz r0, 0xe80(r26)
/* 8014C364 00149444  28 00 00 00 */	cmplwi r0, 0x0
/* 8014C368 00149448  41 82 00 14 */	beq .L_8014C37C
/* 8014C36C 0014944C  FC 20 F0 90 */	fmr f1, f30
/* 8014C370 00149450  7F 43 D3 78 */	mr r3, r26
/* 8014C374 00149454  38 9A 0E 80 */	addi r4, r26, 0xe80
/* 8014C378 00149458  48 00 03 AD */	bl generate_ring_particles__13zNPCKingJellyFRC14lightning_ringf
.L_8014C37C:
/* 8014C37C 0014945C  E3 E1 00 48 */	psq_l f31, 0x48(r1), 0, qr0
/* 8014C380 00149460  CB E1 00 40 */	lfd f31, 0x40(r1)
/* 8014C384 00149464  E3 C1 00 38 */	psq_l f30, 0x38(r1), 0, qr0
/* 8014C388 00149468  CB C1 00 30 */	lfd f30, 0x30(r1)
/* 8014C38C 0014946C  BB 41 00 18 */	lmw r26, 0x18(r1)
/* 8014C390 00149470  80 01 00 54 */	lwz r0, 0x54(r1)
/* 8014C394 00149474  7C 08 03 A6 */	mtlr r0
/* 8014C398 00149478  38 21 00 50 */	addi r1, r1, 0x50
/* 8014C39C 0014947C  4E 80 00 20 */	blr
.endfn update_rings__13zNPCKingJellyFf

# zNPCKingJelly::create_ambient_rings()
.fn create_ambient_rings__13zNPCKingJellyFv, global
/* 8014C3A0 00149480  94 21 FF D0 */	stwu r1, -0x30(r1)
/* 8014C3A4 00149484  7C 08 02 A6 */	mflr r0
/* 8014C3A8 00149488  90 01 00 34 */	stw r0, 0x34(r1)
/* 8014C3AC 0014948C  BF 01 00 10 */	stmw r24, 0x10(r1)
/* 8014C3B0 00149490  7C 78 1B 78 */	mr r24, r3
/* 8014C3B4 00149494  48 00 00 E5 */	bl destroy_ambient_rings__13zNPCKingJellyFv
/* 8014C3B8 00149498  3C 80 80 33 */	lis r4, "tweak__31@unnamed@zNPCTypeKingJelly_cpp@"@ha
/* 8014C3BC 0014949C  3C 60 80 14 */	lis r3, "updown_ring_update__31@unnamed@zNPCTypeKingJelly_cpp@FR14lightning_ringf"@ha
/* 8014C3C0 001494A0  3B A4 85 38 */	addi r29, r4, "tweak__31@unnamed@zNPCTypeKingJelly_cpp@"@l
/* 8014C3C4 001494A4  7F 1C C3 78 */	mr r28, r24
/* 8014C3C8 001494A8  3B 7D 01 44 */	addi r27, r29, 0x144
/* 8014C3CC 001494AC  3B C3 6B E4 */	addi r30, r3, "updown_ring_update__31@unnamed@zNPCTypeKingJelly_cpp@FR14lightning_ringf"@l
/* 8014C3D0 001494B0  3B 40 00 00 */	li r26, 0x0
/* 8014C3D4 001494B4  3F E0 43 30 */	lis r31, 0x4330
.L_8014C3D8:
/* 8014C3D8 001494B8  3B 3C 0C F4 */	addi r25, r28, 0xcf4
/* 8014C3DC 001494BC  7F 23 CB 78 */	mr r3, r25
/* 8014C3E0 001494C0  4B FF A9 41 */	bl create__14lightning_ringFv
/* 8014C3E4 001494C4  38 00 00 01 */	li r0, 0x1
/* 8014C3E8 001494C8  7F 64 DB 78 */	mr r4, r27
/* 8014C3EC 001494CC  98 19 00 48 */	stb r0, 0x48(r25)
/* 8014C3F0 001494D0  38 79 00 50 */	addi r3, r25, 0x50
/* 8014C3F4 001494D4  C0 1D 01 40 */	lfs f0, 0x140(r29)
/* 8014C3F8 001494D8  D0 19 00 4C */	stfs f0, 0x4c(r25)
/* 8014C3FC 001494DC  4B EC BB 9D */	bl __as__10iColor_tagFRC10iColor_tag
/* 8014C400 001494E0  C0 02 A6 34 */	lfs f0, "@1869"@sda21(r2)
/* 8014C404 001494E4  38 79 00 04 */	addi r3, r25, 0x4
/* 8014C408 001494E8  D0 19 00 54 */	stfs f0, 0x54(r25)
/* 8014C40C 001494EC  C0 02 A6 34 */	lfs f0, "@1869"@sda21(r2)
/* 8014C410 001494F0  D0 19 00 58 */	stfs f0, 0x58(r25)
/* 8014C414 001494F4  80 98 00 24 */	lwz r4, 0x24(r24)
/* 8014C418 001494F8  80 84 00 4C */	lwz r4, 0x4c(r4)
/* 8014C41C 001494FC  38 84 00 30 */	addi r4, r4, 0x30
/* 8014C420 00149500  4B EB EE 45 */	bl __as__5xVec3FRC5xVec3
/* 8014C424 00149504  C0 1D 01 2C */	lfs f0, 0x12c(r29)
/* 8014C428 00149508  6F 40 80 00 */	xoris r0, r26, 0x8000
/* 8014C42C 0014950C  3B 5A 00 01 */	addi r26, r26, 0x1
/* 8014C430 00149510  90 01 00 0C */	stw r0, 0xc(r1)
/* 8014C434 00149514  2C 1A 00 03 */	cmpwi r26, 0x3
/* 8014C438 00149518  3B 9C 00 84 */	addi r28, r28, 0x84
/* 8014C43C 0014951C  D0 19 00 38 */	stfs f0, 0x38(r25)
/* 8014C440 00149520  C0 1D 01 3C */	lfs f0, 0x13c(r29)
/* 8014C444 00149524  93 E1 00 08 */	stw r31, 0x8(r1)
/* 8014C448 00149528  D0 19 00 10 */	stfs f0, 0x10(r25)
/* 8014C44C 0014952C  C8 01 00 08 */	lfd f0, 0x8(r1)
/* 8014C450 00149530  93 D9 00 80 */	stw r30, 0x80(r25)
/* 8014C454 00149534  C0 3D 01 30 */	lfs f1, 0x130(r29)
/* 8014C458 00149538  D0 39 00 14 */	stfs f1, 0x14(r25)
/* 8014C45C 0014953C  C0 3D 01 34 */	lfs f1, 0x134(r29)
/* 8014C460 00149540  D0 39 00 18 */	stfs f1, 0x18(r25)
/* 8014C464 00149544  C0 22 A6 C4 */	lfs f1, "@2420"@sda21(r2)
/* 8014C468 00149548  D0 39 00 24 */	stfs f1, 0x24(r25)
/* 8014C46C 0014954C  C0 3D 01 38 */	lfs f1, 0x138(r29)
/* 8014C470 00149550  D0 39 00 40 */	stfs f1, 0x40(r25)
/* 8014C474 00149554  C8 22 A6 68 */	lfd f1, "@2088"@sda21(r2)
/* 8014C478 00149558  EC 00 08 28 */	fsubs f0, f0, f1
/* 8014C47C 0014955C  D0 19 00 44 */	stfs f0, 0x44(r25)
/* 8014C480 00149560  41 80 FF 58 */	blt .L_8014C3D8
/* 8014C484 00149564  BB 01 00 10 */	lmw r24, 0x10(r1)
/* 8014C488 00149568  80 01 00 34 */	lwz r0, 0x34(r1)
/* 8014C48C 0014956C  7C 08 03 A6 */	mtlr r0
/* 8014C490 00149570  38 21 00 30 */	addi r1, r1, 0x30
/* 8014C494 00149574  4E 80 00 20 */	blr
.endfn create_ambient_rings__13zNPCKingJellyFv

# zNPCKingJelly::destroy_ambient_rings()
.fn destroy_ambient_rings__13zNPCKingJellyFv, global
/* 8014C498 00149578  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8014C49C 0014957C  7C 08 02 A6 */	mflr r0
/* 8014C4A0 00149580  90 01 00 14 */	stw r0, 0x14(r1)
/* 8014C4A4 00149584  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8014C4A8 00149588  7C 7F 1B 78 */	mr r31, r3
/* 8014C4AC 0014958C  93 C1 00 08 */	stw r30, 0x8(r1)
/* 8014C4B0 00149590  3B C0 00 00 */	li r30, 0x0
.L_8014C4B4:
/* 8014C4B4 00149594  38 7F 0C F4 */	addi r3, r31, 0xcf4
/* 8014C4B8 00149598  4B FF A8 7D */	bl destroy__14lightning_ringFv
/* 8014C4BC 0014959C  3B DE 00 01 */	addi r30, r30, 0x1
/* 8014C4C0 001495A0  3B FF 00 84 */	addi r31, r31, 0x84
/* 8014C4C4 001495A4  2C 1E 00 03 */	cmpwi r30, 0x3
/* 8014C4C8 001495A8  41 80 FF EC */	blt .L_8014C4B4
/* 8014C4CC 001495AC  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8014C4D0 001495B0  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8014C4D4 001495B4  83 C1 00 08 */	lwz r30, 0x8(r1)
/* 8014C4D8 001495B8  7C 08 03 A6 */	mtlr r0
/* 8014C4DC 001495BC  38 21 00 10 */	addi r1, r1, 0x10
/* 8014C4E0 001495C0  4E 80 00 20 */	blr
.endfn destroy_ambient_rings__13zNPCKingJellyFv

# zNPCKingJelly::create_wave_rings()
.fn create_wave_rings__13zNPCKingJellyFv, global
/* 8014C4E4 001495C4  94 21 FF D0 */	stwu r1, -0x30(r1)
/* 8014C4E8 001495C8  7C 08 02 A6 */	mflr r0
/* 8014C4EC 001495CC  90 01 00 34 */	stw r0, 0x34(r1)
/* 8014C4F0 001495D0  BF 21 00 14 */	stmw r25, 0x14(r1)
/* 8014C4F4 001495D4  7C 79 1B 78 */	mr r25, r3
/* 8014C4F8 001495D8  48 00 01 01 */	bl destroy_wave_rings__13zNPCKingJellyFv
/* 8014C4FC 001495DC  3C 80 80 33 */	lis r4, "tweak__31@unnamed@zNPCTypeKingJelly_cpp@"@ha
/* 8014C500 001495E0  3C 60 80 14 */	lis r3, "expand_ring_update__31@unnamed@zNPCTypeKingJelly_cpp@FR14lightning_ringf"@ha
/* 8014C504 001495E4  3B C4 85 38 */	addi r30, r4, "tweak__31@unnamed@zNPCTypeKingJelly_cpp@"@l
/* 8014C508 001495E8  7F 3D CB 78 */	mr r29, r25
/* 8014C50C 001495EC  7F DC F3 78 */	mr r28, r30
/* 8014C510 001495F0  3B E3 6C 7C */	addi r31, r3, "expand_ring_update__31@unnamed@zNPCTypeKingJelly_cpp@FR14lightning_ringf"@l
/* 8014C514 001495F4  3B 60 00 00 */	li r27, 0x0
.L_8014C518:
/* 8014C518 001495F8  3B 5D 0E 80 */	addi r26, r29, 0xe80
/* 8014C51C 001495FC  7F 43 D3 78 */	mr r3, r26
/* 8014C520 00149600  4B FF A8 01 */	bl create__14lightning_ringFv
/* 8014C524 00149604  88 1C 00 C4 */	lbz r0, 0xc4(r28)
/* 8014C528 00149608  38 7A 00 50 */	addi r3, r26, 0x50
/* 8014C52C 0014960C  38 9C 00 CC */	addi r4, r28, 0xcc
/* 8014C530 00149610  98 1A 00 48 */	stb r0, 0x48(r26)
/* 8014C534 00149614  C0 1C 00 C8 */	lfs f0, 0xc8(r28)
/* 8014C538 00149618  D0 1A 00 4C */	stfs f0, 0x4c(r26)
/* 8014C53C 0014961C  4B EC BA 5D */	bl __as__10iColor_tagFRC10iColor_tag
/* 8014C540 00149620  C0 1C 00 D0 */	lfs f0, 0xd0(r28)
/* 8014C544 00149624  38 7A 00 04 */	addi r3, r26, 0x4
/* 8014C548 00149628  D0 1A 00 54 */	stfs f0, 0x54(r26)
/* 8014C54C 0014962C  C0 1C 00 D4 */	lfs f0, 0xd4(r28)
/* 8014C550 00149630  D0 1A 00 58 */	stfs f0, 0x58(r26)
/* 8014C554 00149634  80 99 00 24 */	lwz r4, 0x24(r25)
/* 8014C558 00149638  80 84 00 4C */	lwz r4, 0x4c(r4)
/* 8014C55C 0014963C  38 84 00 30 */	addi r4, r4, 0x30
/* 8014C560 00149640  4B EB ED 05 */	bl __as__5xVec3FRC5xVec3
/* 8014C564 00149644  93 FA 00 80 */	stw r31, 0x80(r26)
/* 8014C568 00149648  3B 7B 00 01 */	addi r27, r27, 0x1
/* 8014C56C 0014964C  2C 1B 00 04 */	cmpwi r27, 0x4
/* 8014C570 00149650  3B BD 00 84 */	addi r29, r29, 0x84
/* 8014C574 00149654  C0 3E 00 8C */	lfs f1, 0x8c(r30)
/* 8014C578 00149658  C0 1C 00 BC */	lfs f0, 0xbc(r28)
/* 8014C57C 0014965C  EC 01 00 2A */	fadds f0, f1, f0
/* 8014C580 00149660  D0 1A 00 1C */	stfs f0, 0x1c(r26)
/* 8014C584 00149664  C0 3E 00 90 */	lfs f1, 0x90(r30)
/* 8014C588 00149668  C0 1C 00 BC */	lfs f0, 0xbc(r28)
/* 8014C58C 0014966C  EC 01 00 2A */	fadds f0, f1, f0
/* 8014C590 00149670  D0 1A 00 20 */	stfs f0, 0x20(r26)
/* 8014C594 00149674  C0 1A 00 1C */	lfs f0, 0x1c(r26)
/* 8014C598 00149678  D0 1A 00 38 */	stfs f0, 0x38(r26)
/* 8014C59C 0014967C  C0 1E 00 A4 */	lfs f0, 0xa4(r30)
/* 8014C5A0 00149680  D0 1A 00 10 */	stfs f0, 0x10(r26)
/* 8014C5A4 00149684  C0 1C 00 C0 */	lfs f0, 0xc0(r28)
/* 8014C5A8 00149688  3B 9C 00 1C */	addi r28, r28, 0x1c
/* 8014C5AC 0014968C  C0 3E 00 94 */	lfs f1, 0x94(r30)
/* 8014C5B0 00149690  EC 01 00 2A */	fadds f0, f1, f0
/* 8014C5B4 00149694  D0 1A 00 34 */	stfs f0, 0x34(r26)
/* 8014C5B8 00149698  C0 1E 00 A0 */	lfs f0, 0xa0(r30)
/* 8014C5BC 0014969C  D0 1A 00 40 */	stfs f0, 0x40(r26)
/* 8014C5C0 001496A0  C0 02 A6 34 */	lfs f0, "@1869"@sda21(r2)
/* 8014C5C4 001496A4  D0 1A 00 3C */	stfs f0, 0x3c(r26)
/* 8014C5C8 001496A8  C0 1E 00 9C */	lfs f0, 0x9c(r30)
/* 8014C5CC 001496AC  D0 1A 00 2C */	stfs f0, 0x2c(r26)
/* 8014C5D0 001496B0  C0 1E 00 98 */	lfs f0, 0x98(r30)
/* 8014C5D4 001496B4  D0 1A 00 24 */	stfs f0, 0x24(r26)
/* 8014C5D8 001496B8  C0 02 A6 34 */	lfs f0, "@1869"@sda21(r2)
/* 8014C5DC 001496BC  D0 1A 00 44 */	stfs f0, 0x44(r26)
/* 8014C5E0 001496C0  41 80 FF 38 */	blt .L_8014C518
/* 8014C5E4 001496C4  BB 21 00 14 */	lmw r25, 0x14(r1)
/* 8014C5E8 001496C8  80 01 00 34 */	lwz r0, 0x34(r1)
/* 8014C5EC 001496CC  7C 08 03 A6 */	mtlr r0
/* 8014C5F0 001496D0  38 21 00 30 */	addi r1, r1, 0x30
/* 8014C5F4 001496D4  4E 80 00 20 */	blr
.endfn create_wave_rings__13zNPCKingJellyFv

# zNPCKingJelly::destroy_wave_rings()
.fn destroy_wave_rings__13zNPCKingJellyFv, global
/* 8014C5F8 001496D8  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8014C5FC 001496DC  7C 08 02 A6 */	mflr r0
/* 8014C600 001496E0  90 01 00 14 */	stw r0, 0x14(r1)
/* 8014C604 001496E4  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8014C608 001496E8  7C 7F 1B 78 */	mr r31, r3
/* 8014C60C 001496EC  93 C1 00 08 */	stw r30, 0x8(r1)
/* 8014C610 001496F0  3B C0 00 00 */	li r30, 0x0
.L_8014C614:
/* 8014C614 001496F4  38 7F 0E 80 */	addi r3, r31, 0xe80
/* 8014C618 001496F8  4B FF A7 1D */	bl destroy__14lightning_ringFv
/* 8014C61C 001496FC  3B DE 00 01 */	addi r30, r30, 0x1
/* 8014C620 00149700  3B FF 00 84 */	addi r31, r31, 0x84
/* 8014C624 00149704  2C 1E 00 04 */	cmpwi r30, 0x4
/* 8014C628 00149708  41 80 FF EC */	blt .L_8014C614
/* 8014C62C 0014970C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8014C630 00149710  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8014C634 00149714  83 C1 00 08 */	lwz r30, 0x8(r1)
/* 8014C638 00149718  7C 08 03 A6 */	mtlr r0
/* 8014C63C 0014971C  38 21 00 10 */	addi r1, r1, 0x10
/* 8014C640 00149720  4E 80 00 20 */	blr
.endfn destroy_wave_rings__13zNPCKingJellyFv

# zNPCKingJelly::generate_spawn_particles()
.fn generate_spawn_particles__13zNPCKingJellyFv, global
/* 8014C644 00149724  3C 80 80 33 */	lis r4, "tweak__31@unnamed@zNPCTypeKingJelly_cpp@"@ha
/* 8014C648 00149728  38 84 85 38 */	addi r4, r4, "tweak__31@unnamed@zNPCTypeKingJelly_cpp@"@l
/* 8014C64C 0014972C  C0 04 00 7C */	lfs f0, 0x7c(r4)
/* 8014C650 00149730  D0 03 02 D8 */	stfs f0, 0x2d8(r3)
/* 8014C654 00149734  4E 80 00 20 */	blr
.endfn generate_spawn_particles__13zNPCKingJellyFv

# zNPCKingJelly::update_spawn_particles(float)
.fn update_spawn_particles__13zNPCKingJellyFf, global
/* 8014C658 00149738  94 21 FF D0 */	stwu r1, -0x30(r1)
/* 8014C65C 0014973C  7C 08 02 A6 */	mflr r0
/* 8014C660 00149740  90 01 00 34 */	stw r0, 0x34(r1)
/* 8014C664 00149744  DB E1 00 20 */	stfd f31, 0x20(r1)
/* 8014C668 00149748  F3 E1 00 28 */	psq_st f31, 0x28(r1), 0, qr0
/* 8014C66C 0014974C  3C A0 80 33 */	lis r5, "tweak__31@unnamed@zNPCTypeKingJelly_cpp@"@ha
/* 8014C670 00149750  7C 64 1B 78 */	mr r4, r3
/* 8014C674 00149754  38 65 85 38 */	addi r3, r5, "tweak__31@unnamed@zNPCTypeKingJelly_cpp@"@l
/* 8014C678 00149758  3C A0 80 33 */	lis r5, "spawn_emitter_settings__31@unnamed@zNPCTypeKingJelly_cpp@"@ha
/* 8014C67C 0014975C  C0 63 00 80 */	lfs f3, 0x80(r3)
/* 8014C680 00149760  38 65 88 D8 */	addi r3, r5, "spawn_emitter_settings__31@unnamed@zNPCTypeKingJelly_cpp@"@l
/* 8014C684 00149764  C0 02 A6 50 */	lfs f0, "@1987"@sda21(r2)
/* 8014C688 00149768  FF E0 08 90 */	fmr f31, f1
/* 8014C68C 0014976C  C0 44 02 D8 */	lfs f2, 0x2d8(r4)
/* 8014C690 00149770  EC 20 00 F2 */	fmuls f1, f0, f3
/* 8014C694 00149774  C0 03 00 0C */	lfs f0, 0xc(r3)
/* 8014C698 00149778  EC 21 17 FA */	fmadds f1, f1, f31, f2
/* 8014C69C 0014977C  EC 3F 00 7A */	fmadds f1, f31, f1, f0
/* 8014C6A0 00149780  D0 23 00 0C */	stfs f1, 0xc(r3)
/* 8014C6A4 00149784  C0 02 A6 34 */	lfs f0, "@1869"@sda21(r2)
/* 8014C6A8 00149788  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8014C6AC 0014978C  4C 40 13 82 */	cror eq, lt, eq
/* 8014C6B0 00149790  40 82 00 0C */	bne .L_8014C6BC
/* 8014C6B4 00149794  D0 03 00 0C */	stfs f0, 0xc(r3)
/* 8014C6B8 00149798  48 00 00 54 */	b .L_8014C70C
.L_8014C6BC:
/* 8014C6BC 0014979C  EC 03 17 FA */	fmadds f0, f3, f31, f2
/* 8014C6C0 001497A0  38 61 00 08 */	addi r3, r1, 0x8
/* 8014C6C4 001497A4  D0 04 02 D8 */	stfs f0, 0x2d8(r4)
/* 8014C6C8 001497A8  48 00 21 51 */	bl get_center__13zNPCKingJellyCFv
/* 8014C6CC 001497AC  3C 60 80 33 */	lis r3, "spawn_emitter_settings__31@unnamed@zNPCTypeKingJelly_cpp@"@ha
/* 8014C6D0 001497B0  38 81 00 08 */	addi r4, r1, 0x8
/* 8014C6D4 001497B4  38 63 88 D8 */	addi r3, r3, "spawn_emitter_settings__31@unnamed@zNPCTypeKingJelly_cpp@"@l
/* 8014C6D8 001497B8  38 63 01 40 */	addi r3, r3, 0x140
/* 8014C6DC 001497BC  4B EB EB 89 */	bl __as__5xVec3FRC5xVec3
/* 8014C6E0 001497C0  3C 80 80 33 */	lis r4, "spawn_emitter_settings__31@unnamed@zNPCTypeKingJelly_cpp@"@ha
/* 8014C6E4 001497C4  3C 60 80 33 */	lis r3, "tweak__31@unnamed@zNPCTypeKingJelly_cpp@"@ha
/* 8014C6E8 001497C8  38 84 88 D8 */	addi r4, r4, "spawn_emitter_settings__31@unnamed@zNPCTypeKingJelly_cpp@"@l
/* 8014C6EC 001497CC  FC 20 F8 90 */	fmr f1, f31
/* 8014C6F0 001497D0  38 63 85 38 */	addi r3, r3, "tweak__31@unnamed@zNPCTypeKingJelly_cpp@"@l
/* 8014C6F4 001497D4  C0 44 01 44 */	lfs f2, 0x144(r4)
/* 8014C6F8 001497D8  C0 03 00 88 */	lfs f0, 0x88(r3)
/* 8014C6FC 001497DC  EC 02 00 2A */	fadds f0, f2, f0
/* 8014C700 001497E0  D0 04 01 44 */	stfs f0, 0x144(r4)
/* 8014C704 001497E4  80 6D 96 B0 */	lwz r3, "spawn_emitter__31@unnamed@zNPCTypeKingJelly_cpp@"@sda21(r13)
/* 8014C708 001497E8  4B FC B4 C1 */	bl xParEmitterEmitCustom__FP11xParEmitterfP25xParEmitterCustomSettings
.L_8014C70C:
/* 8014C70C 001497EC  E3 E1 00 28 */	psq_l f31, 0x28(r1), 0, qr0
/* 8014C710 001497F0  80 01 00 34 */	lwz r0, 0x34(r1)
/* 8014C714 001497F4  CB E1 00 20 */	lfd f31, 0x20(r1)
/* 8014C718 001497F8  7C 08 03 A6 */	mtlr r0
/* 8014C71C 001497FC  38 21 00 30 */	addi r1, r1, 0x30
/* 8014C720 00149800  4E 80 00 20 */	blr
.endfn update_spawn_particles__13zNPCKingJellyFf

# zNPCKingJelly::generate_ring_particles(const lightning_ring&, float)
.fn generate_ring_particles__13zNPCKingJellyFRC14lightning_ringf, global
/* 8014C724 00149804  94 21 FF 60 */	stwu r1, -0xa0(r1)
/* 8014C728 00149808  7C 08 02 A6 */	mflr r0
/* 8014C72C 0014980C  90 01 00 A4 */	stw r0, 0xa4(r1)
/* 8014C730 00149810  DB E1 00 90 */	stfd f31, 0x90(r1)
/* 8014C734 00149814  F3 E1 00 98 */	psq_st f31, 0x98(r1), 0, qr0
/* 8014C738 00149818  DB C1 00 80 */	stfd f30, 0x80(r1)
/* 8014C73C 0014981C  F3 C1 00 88 */	psq_st f30, 0x88(r1), 0, qr0
/* 8014C740 00149820  BE 81 00 50 */	stmw r20, 0x50(r1)
/* 8014C744 00149824  88 64 00 53 */	lbz r3, 0x53(r4)
/* 8014C748 00149828  3C 00 43 30 */	lis r0, 0x4330
/* 8014C74C 0014982C  3C A0 80 33 */	lis r5, ...bss.0@ha
/* 8014C750 00149830  FF C0 08 90 */	fmr f30, f1
/* 8014C754 00149834  90 61 00 3C */	stw r3, 0x3c(r1)
/* 8014C758 00149838  3B C5 85 38 */	addi r30, r5, ...bss.0@l
/* 8014C75C 0014983C  38 7E 00 00 */	addi r3, r30, 0x0
/* 8014C760 00149840  C8 22 A7 40 */	lfd f1, "@2454"@sda21(r2)
/* 8014C764 00149844  90 01 00 38 */	stw r0, 0x38(r1)
/* 8014C768 00149848  C0 63 00 AC */	lfs f3, 0xac(r3)
/* 8014C76C 0014984C  38 64 00 04 */	addi r3, r4, 0x4
/* 8014C770 00149850  C8 01 00 38 */	lfd f0, 0x38(r1)
/* 8014C774 00149854  C0 82 A7 58 */	lfs f4, "@3258"@sda21(r2)
/* 8014C778 00149858  EC 00 08 28 */	fsubs f0, f0, f1
/* 8014C77C 0014985C  C0 24 00 38 */	lfs f1, 0x38(r4)
/* 8014C780 00149860  C0 44 00 10 */	lfs f2, 0x10(r4)
/* 8014C784 00149864  EC 03 00 32 */	fmuls f0, f3, f0
/* 8014C788 00149868  EF E4 00 32 */	fmuls f31, f4, f0
/* 8014C78C 0014986C  4B FF A1 D5 */	bl "set_ring_segments__31@unnamed@zNPCTypeKingJelly_cpp@FRC5xVec3ff"
/* 8014C790 00149870  7C 76 1B 78 */	mr r22, r3
/* 8014C794 00149874  4B EE 44 F5 */	bl xurand__Fv
/* 8014C798 00149878  EC 5F 07 B2 */	fmuls f2, f31, f30
/* 8014C79C 0014987C  C0 02 A6 50 */	lfs f0, "@1987"@sda21(r2)
/* 8014C7A0 00149880  3B 7E 06 78 */	addi r27, r30, 0x678
/* 8014C7A4 00149884  3B F6 FF FF */	addi r31, r22, -0x1
/* 8014C7A8 00149888  3B 9E 09 50 */	addi r28, r30, 0x950
/* 8014C7AC 0014988C  3B 5E 00 00 */	addi r26, r30, 0x0
/* 8014C7B0 00149890  EC 02 00 7A */	fmadds f0, f2, f1, f0
/* 8014C7B4 00149894  3B 7B 01 40 */	addi r27, r27, 0x140
/* 8014C7B8 00149898  3B 3E 06 78 */	addi r25, r30, 0x678
/* 8014C7BC 0014989C  3A E0 00 00 */	li r23, 0x0
/* 8014C7C0 001498A0  3A C0 00 00 */	li r22, 0x0
/* 8014C7C4 001498A4  3B A0 00 00 */	li r29, 0x0
/* 8014C7C8 001498A8  FC 00 00 1E */	fctiwz f0, f0
/* 8014C7CC 001498AC  D8 01 00 40 */	stfd f0, 0x40(r1)
/* 8014C7D0 001498B0  83 01 00 44 */	lwz r24, 0x44(r1)
/* 8014C7D4 001498B4  48 00 00 B0 */	b .L_8014C884
.L_8014C7D8:
/* 8014C7D8 001498B8  7C DD FB D6 */	divw r6, r29, r31
/* 8014C7DC 001498BC  38 16 00 01 */	addi r0, r22, 0x1
/* 8014C7E0 001498C0  38 9E 09 50 */	addi r4, r30, 0x950
/* 8014C7E4 001498C4  7F 85 E3 78 */	mr r5, r28
/* 8014C7E8 001498C8  38 61 00 20 */	addi r3, r1, 0x20
/* 8014C7EC 001498CC  1C 00 00 0C */	mulli r0, r0, 0xc
/* 8014C7F0 001498D0  7E B7 30 50 */	subf r21, r23, r6
/* 8014C7F4 001498D4  7E F7 AA 14 */	add r23, r23, r21
/* 8014C7F8 001498D8  7C 84 02 14 */	add r4, r4, r0
/* 8014C7FC 001498DC  4B EB E9 D1 */	bl __mi__5xVec3CFRC5xVec3
/* 8014C800 001498E0  80 81 00 20 */	lwz r4, 0x20(r1)
/* 8014C804 001498E4  3A 80 00 00 */	li r20, 0x0
/* 8014C808 001498E8  80 61 00 24 */	lwz r3, 0x24(r1)
/* 8014C80C 001498EC  80 01 00 28 */	lwz r0, 0x28(r1)
/* 8014C810 001498F0  90 81 00 2C */	stw r4, 0x2c(r1)
/* 8014C814 001498F4  90 61 00 30 */	stw r3, 0x30(r1)
/* 8014C818 001498F8  90 01 00 34 */	stw r0, 0x34(r1)
/* 8014C81C 001498FC  48 00 00 54 */	b .L_8014C870
.L_8014C820:
/* 8014C820 00149900  4B EE 44 69 */	bl xurand__Fv
/* 8014C824 00149904  38 61 00 08 */	addi r3, r1, 0x8
/* 8014C828 00149908  38 81 00 2C */	addi r4, r1, 0x2c
/* 8014C82C 0014990C  4B EB E8 F5 */	bl __ml__5xVec3CFf
/* 8014C830 00149910  7F 84 E3 78 */	mr r4, r28
/* 8014C834 00149914  38 61 00 14 */	addi r3, r1, 0x14
/* 8014C838 00149918  38 A1 00 08 */	addi r5, r1, 0x8
/* 8014C83C 0014991C  4B EC 8B A5 */	bl __pl__5xVec3CFRC5xVec3
/* 8014C840 00149920  7F 63 DB 78 */	mr r3, r27
/* 8014C844 00149924  38 81 00 14 */	addi r4, r1, 0x14
/* 8014C848 00149928  4B EB EA 1D */	bl __as__5xVec3FRC5xVec3
/* 8014C84C 0014992C  C0 39 01 44 */	lfs f1, 0x144(r25)
/* 8014C850 00149930  38 9E 06 78 */	addi r4, r30, 0x678
/* 8014C854 00149934  C0 1A 00 A8 */	lfs f0, 0xa8(r26)
/* 8014C858 00149938  EC 01 00 2A */	fadds f0, f1, f0
/* 8014C85C 0014993C  D0 19 01 44 */	stfs f0, 0x144(r25)
/* 8014C860 00149940  80 6D 96 B8 */	lwz r3, "shock_ring_emitter__31@unnamed@zNPCTypeKingJelly_cpp@"@sda21(r13)
/* 8014C864 00149944  C0 22 A7 5C */	lfs f1, "@3259"@sda21(r2)
/* 8014C868 00149948  4B FC B3 61 */	bl xParEmitterEmitCustom__FP11xParEmitterfP25xParEmitterCustomSettings
/* 8014C86C 0014994C  3A 94 00 01 */	addi r20, r20, 0x1
.L_8014C870:
/* 8014C870 00149950  7C 14 A8 00 */	cmpw r20, r21
/* 8014C874 00149954  41 80 FF AC */	blt .L_8014C820
/* 8014C878 00149958  7F BD C2 14 */	add r29, r29, r24
/* 8014C87C 0014995C  3B 9C 00 0C */	addi r28, r28, 0xc
/* 8014C880 00149960  3A D6 00 01 */	addi r22, r22, 0x1
.L_8014C884:
/* 8014C884 00149964  7C 16 F8 00 */	cmpw r22, r31
/* 8014C888 00149968  41 80 FF 50 */	blt .L_8014C7D8
/* 8014C88C 0014996C  E3 E1 00 98 */	psq_l f31, 0x98(r1), 0, qr0
/* 8014C890 00149970  CB E1 00 90 */	lfd f31, 0x90(r1)
/* 8014C894 00149974  E3 C1 00 88 */	psq_l f30, 0x88(r1), 0, qr0
/* 8014C898 00149978  CB C1 00 80 */	lfd f30, 0x80(r1)
/* 8014C89C 0014997C  BA 81 00 50 */	lmw r20, 0x50(r1)
/* 8014C8A0 00149980  80 01 00 A4 */	lwz r0, 0xa4(r1)
/* 8014C8A4 00149984  7C 08 03 A6 */	mtlr r0
/* 8014C8A8 00149988  38 21 00 A0 */	addi r1, r1, 0xa0
/* 8014C8AC 0014998C  4E 80 00 20 */	blr
.endfn generate_ring_particles__13zNPCKingJellyFRC14lightning_ringf

# zNPCKingJelly::generate_thump_particles()
.fn generate_thump_particles__13zNPCKingJellyFv, global
/* 8014C8B0 00149990  94 21 FF B0 */	stwu r1, -0x50(r1)
/* 8014C8B4 00149994  7C 08 02 A6 */	mflr r0
/* 8014C8B8 00149998  90 01 00 54 */	stw r0, 0x54(r1)
/* 8014C8BC 0014999C  DB E1 00 40 */	stfd f31, 0x40(r1)
/* 8014C8C0 001499A0  F3 E1 00 48 */	psq_st f31, 0x48(r1), 0, qr0
/* 8014C8C4 001499A4  DB C1 00 30 */	stfd f30, 0x30(r1)
/* 8014C8C8 001499A8  F3 C1 00 38 */	psq_st f30, 0x38(r1), 0, qr0
/* 8014C8CC 001499AC  DB A1 00 20 */	stfd f29, 0x20(r1)
/* 8014C8D0 001499B0  F3 A1 00 28 */	psq_st f29, 0x28(r1), 0, qr0
/* 8014C8D4 001499B4  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 8014C8D8 001499B8  93 C1 00 18 */	stw r30, 0x18(r1)
/* 8014C8DC 001499BC  93 A1 00 14 */	stw r29, 0x14(r1)
/* 8014C8E0 001499C0  3C 80 80 33 */	lis r4, "tweak__31@unnamed@zNPCTypeKingJelly_cpp@"@ha
/* 8014C8E4 001499C4  3C 00 43 30 */	lis r0, 0x4330
/* 8014C8E8 001499C8  3B E4 85 38 */	addi r31, r4, "tweak__31@unnamed@zNPCTypeKingJelly_cpp@"@l
/* 8014C8EC 001499CC  3C A0 80 33 */	lis r5, "thump_ring_emitter_settings__31@unnamed@zNPCTypeKingJelly_cpp@"@ha
/* 8014C8F0 001499D0  80 9F 01 9C */	lwz r4, 0x19c(r31)
/* 8014C8F4 001499D4  38 A5 8D 1C */	addi r5, r5, "thump_ring_emitter_settings__31@unnamed@zNPCTypeKingJelly_cpp@"@l
/* 8014C8F8 001499D8  90 01 00 08 */	stw r0, 0x8(r1)
/* 8014C8FC 001499DC  7C BE 2B 78 */	mr r30, r5
/* 8014C900 001499E0  6C 80 80 00 */	xoris r0, r4, 0x8000
/* 8014C904 001499E4  C8 22 A6 68 */	lfd f1, "@2088"@sda21(r2)
/* 8014C908 001499E8  90 01 00 0C */	stw r0, 0xc(r1)
/* 8014C90C 001499EC  C0 42 A6 30 */	lfs f2, "@1868"@sda21(r2)
/* 8014C910 001499F0  C8 01 00 08 */	lfd f0, 0x8(r1)
/* 8014C914 001499F4  EC 00 08 28 */	fsubs f0, f0, f1
/* 8014C918 001499F8  EF E2 00 24 */	fdivs f31, f2, f0
/* 8014C91C 001499FC  48 00 1F 5D */	bl get_bottom__13zNPCKingJellyCFv
/* 8014C920 00149A00  3C 80 80 33 */	lis r4, "thump_ring_emitter_settings__31@unnamed@zNPCTypeKingJelly_cpp@"@ha
/* 8014C924 00149A04  38 A4 8D 1C */	addi r5, r4, "thump_ring_emitter_settings__31@unnamed@zNPCTypeKingJelly_cpp@"@l
/* 8014C928 00149A08  7C 64 1B 78 */	mr r4, r3
/* 8014C92C 00149A0C  38 65 01 40 */	addi r3, r5, 0x140
/* 8014C930 00149A10  4B EB E9 35 */	bl __as__5xVec3FRC5xVec3
/* 8014C934 00149A14  3C 80 80 33 */	lis r4, "thump_ring_emitter_settings__31@unnamed@zNPCTypeKingJelly_cpp@"@ha
/* 8014C938 00149A18  3C 60 80 33 */	lis r3, "tweak__31@unnamed@zNPCTypeKingJelly_cpp@"@ha
/* 8014C93C 00149A1C  38 63 85 38 */	addi r3, r3, "tweak__31@unnamed@zNPCTypeKingJelly_cpp@"@l
/* 8014C940 00149A20  3B A0 00 00 */	li r29, 0x0
/* 8014C944 00149A24  38 84 8D 1C */	addi r4, r4, "thump_ring_emitter_settings__31@unnamed@zNPCTypeKingJelly_cpp@"@l
/* 8014C948 00149A28  C0 23 01 A0 */	lfs f1, 0x1a0(r3)
/* 8014C94C 00149A2C  C0 44 01 44 */	lfs f2, 0x144(r4)
/* 8014C950 00149A30  C0 03 01 B4 */	lfs f0, 0x1b4(r3)
/* 8014C954 00149A34  EC 62 08 2A */	fadds f3, f2, f1
/* 8014C958 00149A38  C0 23 01 B8 */	lfs f1, 0x1b8(r3)
/* 8014C95C 00149A3C  FC 40 00 50 */	fneg f2, f0
/* 8014C960 00149A40  C0 03 01 AC */	lfs f0, 0x1ac(r3)
/* 8014C964 00149A44  FC 20 08 50 */	fneg f1, f1
/* 8014C968 00149A48  C0 83 01 A4 */	lfs f4, 0x1a4(r3)
/* 8014C96C 00149A4C  D0 64 01 44 */	stfs f3, 0x144(r4)
/* 8014C970 00149A50  EC 42 07 F2 */	fmuls f2, f2, f31
/* 8014C974 00149A54  EC 21 07 F2 */	fmuls f1, f1, f31
/* 8014C978 00149A58  C0 63 01 B0 */	lfs f3, 0x1b0(r3)
/* 8014C97C 00149A5C  C0 A2 A6 78 */	lfs f5, "@2146"@sda21(r2)
/* 8014C980 00149A60  EF A0 07 F2 */	fmuls f29, f0, f31
/* 8014C984 00149A64  C0 03 01 A8 */	lfs f0, 0x1a8(r3)
/* 8014C988 00149A68  EC 85 01 32 */	fmuls f4, f5, f4
/* 8014C98C 00149A6C  EF C3 00 72 */	fmuls f30, f3, f1
/* 8014C990 00149A70  D0 64 01 50 */	stfs f3, 0x150(r4)
/* 8014C994 00149A74  EF E4 00 B2 */	fmuls f31, f4, f2
/* 8014C998 00149A78  D0 84 00 0C */	stfs f4, 0xc(r4)
/* 8014C99C 00149A7C  D0 04 01 60 */	stfs f0, 0x160(r4)
/* 8014C9A0 00149A80  48 00 00 3C */	b .L_8014C9DC
.L_8014C9A4:
/* 8014C9A4 00149A84  80 6D 96 BC */	lwz r3, "thump_ring_emitter__31@unnamed@zNPCTypeKingJelly_cpp@"@sda21(r13)
/* 8014C9A8 00149A88  7F C4 F3 78 */	mr r4, r30
/* 8014C9AC 00149A8C  C0 22 A7 5C */	lfs f1, "@3259"@sda21(r2)
/* 8014C9B0 00149A90  4B FC B2 19 */	bl xParEmitterEmitCustom__FP11xParEmitterfP25xParEmitterCustomSettings
/* 8014C9B4 00149A94  C0 5E 00 0C */	lfs f2, 0xc(r30)
/* 8014C9B8 00149A98  3B BD 00 01 */	addi r29, r29, 0x1
/* 8014C9BC 00149A9C  C0 3E 01 50 */	lfs f1, 0x150(r30)
/* 8014C9C0 00149AA0  C0 1E 01 60 */	lfs f0, 0x160(r30)
/* 8014C9C4 00149AA4  EC 42 F8 2A */	fadds f2, f2, f31
/* 8014C9C8 00149AA8  EC 21 F0 2A */	fadds f1, f1, f30
/* 8014C9CC 00149AAC  EC 00 E8 2A */	fadds f0, f0, f29
/* 8014C9D0 00149AB0  D0 5E 00 0C */	stfs f2, 0xc(r30)
/* 8014C9D4 00149AB4  D0 3E 01 50 */	stfs f1, 0x150(r30)
/* 8014C9D8 00149AB8  D0 1E 01 60 */	stfs f0, 0x160(r30)
.L_8014C9DC:
/* 8014C9DC 00149ABC  80 1F 01 9C */	lwz r0, 0x19c(r31)
/* 8014C9E0 00149AC0  7C 1D 00 00 */	cmpw r29, r0
/* 8014C9E4 00149AC4  41 80 FF C0 */	blt .L_8014C9A4
/* 8014C9E8 00149AC8  E3 E1 00 48 */	psq_l f31, 0x48(r1), 0, qr0
/* 8014C9EC 00149ACC  CB E1 00 40 */	lfd f31, 0x40(r1)
/* 8014C9F0 00149AD0  E3 C1 00 38 */	psq_l f30, 0x38(r1), 0, qr0
/* 8014C9F4 00149AD4  CB C1 00 30 */	lfd f30, 0x30(r1)
/* 8014C9F8 00149AD8  E3 A1 00 28 */	psq_l f29, 0x28(r1), 0, qr0
/* 8014C9FC 00149ADC  CB A1 00 20 */	lfd f29, 0x20(r1)
/* 8014CA00 00149AE0  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 8014CA04 00149AE4  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 8014CA08 00149AE8  80 01 00 54 */	lwz r0, 0x54(r1)
/* 8014CA0C 00149AEC  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 8014CA10 00149AF0  7C 08 03 A6 */	mtlr r0
/* 8014CA14 00149AF4  38 21 00 50 */	addi r1, r1, 0x50
/* 8014CA18 00149AF8  4E 80 00 20 */	blr
.endfn generate_thump_particles__13zNPCKingJellyFv

# zNPCKingJelly::start_charge()
.fn start_charge__13zNPCKingJellyFv, global
/* 8014CA1C 00149AFC  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 8014CA20 00149B00  7C 08 02 A6 */	mflr r0
/* 8014CA24 00149B04  90 01 00 24 */	stw r0, 0x24(r1)
/* 8014CA28 00149B08  38 00 00 01 */	li r0, 0x1
/* 8014CA2C 00149B0C  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 8014CA30 00149B10  93 C1 00 18 */	stw r30, 0x18(r1)
/* 8014CA34 00149B14  93 A1 00 14 */	stw r29, 0x14(r1)
/* 8014CA38 00149B18  93 81 00 10 */	stw r28, 0x10(r1)
/* 8014CA3C 00149B1C  7C 7C 1B 78 */	mr r28, r3
/* 8014CA40 00149B20  98 03 02 B7 */	stb r0, 0x2b7(r3)
/* 8014CA44 00149B24  38 60 00 02 */	li r3, 0x2
/* 8014CA48 00149B28  80 9C 00 24 */	lwz r4, 0x24(r28)
/* 8014CA4C 00149B2C  80 84 00 4C */	lwz r4, 0x4c(r4)
/* 8014CA50 00149B30  38 84 00 30 */	addi r4, r4, 0x30
/* 8014CA54 00149B34  4B FF 9D 49 */	bl "play_sound__31@unnamed@zNPCTypeKingJelly_cpp@FiPC5xVec3"
/* 8014CA58 00149B38  7F 83 E3 78 */	mr r3, r28
/* 8014CA5C 00149B3C  4B FF F7 CD */	bl refresh_tentacle_points__13zNPCKingJellyFv
/* 8014CA60 00149B40  7F 9F E3 78 */	mr r31, r28
/* 8014CA64 00149B44  7F 9E E3 78 */	mr r30, r28
/* 8014CA68 00149B48  3B A0 00 00 */	li r29, 0x0
.L_8014CA6C:
/* 8014CA6C 00149B4C  80 7F 08 94 */	lwz r3, 0x894(r31)
/* 8014CA70 00149B50  28 03 00 00 */	cmplwi r3, 0x0
/* 8014CA74 00149B54  41 82 00 14 */	beq .L_8014CA88
/* 8014CA78 00149B58  80 03 00 04 */	lwz r0, 0x4(r3)
/* 8014CA7C 00149B5C  54 00 07 FF */	clrlwi. r0, r0, 31
/* 8014CA80 00149B60  41 82 00 08 */	beq .L_8014CA88
/* 8014CA84 00149B64  4B F5 4E 31 */	bl zLightningKill__FP10zLightning
.L_8014CA88:
/* 8014CA88 00149B68  7F 83 E3 78 */	mr r3, r28
/* 8014CA8C 00149B6C  38 9E 08 B0 */	addi r4, r30, 0x8b0
/* 8014CA90 00149B70  4B FF F1 75 */	bl new_tentacle_lightning__13zNPCKingJellyFP5xVec3
/* 8014CA94 00149B74  90 7F 08 94 */	stw r3, 0x894(r31)
/* 8014CA98 00149B78  80 7F 08 94 */	lwz r3, 0x894(r31)
/* 8014CA9C 00149B7C  28 03 00 00 */	cmplwi r3, 0x0
/* 8014CAA0 00149B80  41 82 00 10 */	beq .L_8014CAB0
/* 8014CAA4 00149B84  80 03 00 04 */	lwz r0, 0x4(r3)
/* 8014CAA8 00149B88  60 00 01 10 */	ori r0, r0, 0x110
/* 8014CAAC 00149B8C  90 03 00 04 */	stw r0, 0x4(r3)
.L_8014CAB0:
/* 8014CAB0 00149B90  3B BD 00 01 */	addi r29, r29, 0x1
/* 8014CAB4 00149B94  3B DE 00 9C */	addi r30, r30, 0x9c
/* 8014CAB8 00149B98  2C 1D 00 07 */	cmpwi r29, 0x7
/* 8014CABC 00149B9C  3B FF 00 04 */	addi r31, r31, 0x4
/* 8014CAC0 00149BA0  41 80 FF AC */	blt .L_8014CA6C
/* 8014CAC4 00149BA4  C0 22 A6 34 */	lfs f1, "@1869"@sda21(r2)
/* 8014CAC8 00149BA8  7F 83 E3 78 */	mr r3, r28
/* 8014CACC 00149BAC  48 00 00 25 */	bl update_charge__13zNPCKingJellyFf
/* 8014CAD0 00149BB0  80 01 00 24 */	lwz r0, 0x24(r1)
/* 8014CAD4 00149BB4  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 8014CAD8 00149BB8  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 8014CADC 00149BBC  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 8014CAE0 00149BC0  83 81 00 10 */	lwz r28, 0x10(r1)
/* 8014CAE4 00149BC4  7C 08 03 A6 */	mtlr r0
/* 8014CAE8 00149BC8  38 21 00 20 */	addi r1, r1, 0x20
/* 8014CAEC 00149BCC  4E 80 00 20 */	blr
.endfn start_charge__13zNPCKingJellyFv

# zNPCKingJelly::update_charge(float)
.fn update_charge__13zNPCKingJellyFf, global
/* 8014CAF0 00149BD0  94 21 FF 80 */	stwu r1, -0x80(r1)
/* 8014CAF4 00149BD4  7C 08 02 A6 */	mflr r0
/* 8014CAF8 00149BD8  90 01 00 84 */	stw r0, 0x84(r1)
/* 8014CAFC 00149BDC  DB E1 00 70 */	stfd f31, 0x70(r1)
/* 8014CB00 00149BE0  F3 E1 00 78 */	psq_st f31, 0x78(r1), 0, qr0
/* 8014CB04 00149BE4  DB C1 00 60 */	stfd f30, 0x60(r1)
/* 8014CB08 00149BE8  F3 C1 00 68 */	psq_st f30, 0x68(r1), 0, qr0
/* 8014CB0C 00149BEC  DB A1 00 50 */	stfd f29, 0x50(r1)
/* 8014CB10 00149BF0  F3 A1 00 58 */	psq_st f29, 0x58(r1), 0, qr0
/* 8014CB14 00149BF4  DB 81 00 40 */	stfd f28, 0x40(r1)
/* 8014CB18 00149BF8  F3 81 00 48 */	psq_st f28, 0x48(r1), 0, qr0
/* 8014CB1C 00149BFC  DB 61 00 30 */	stfd f27, 0x30(r1)
/* 8014CB20 00149C00  F3 61 00 38 */	psq_st f27, 0x38(r1), 0, qr0
/* 8014CB24 00149C04  93 E1 00 2C */	stw r31, 0x2c(r1)
/* 8014CB28 00149C08  93 C1 00 28 */	stw r30, 0x28(r1)
/* 8014CB2C 00149C0C  93 A1 00 24 */	stw r29, 0x24(r1)
/* 8014CB30 00149C10  93 81 00 20 */	stw r28, 0x20(r1)
/* 8014CB34 00149C14  3C 80 80 33 */	lis r4, "tweak__31@unnamed@zNPCTypeKingJelly_cpp@"@ha
/* 8014CB38 00149C18  FF 60 08 90 */	fmr f27, f1
/* 8014CB3C 00149C1C  38 84 85 38 */	addi r4, r4, "tweak__31@unnamed@zNPCTypeKingJelly_cpp@"@l
/* 8014CB40 00149C20  7C 7F 1B 78 */	mr r31, r3
/* 8014CB44 00149C24  C0 44 01 60 */	lfs f2, 0x160(r4)
/* 8014CB48 00149C28  C0 64 01 8C */	lfs f3, 0x18c(r4)
/* 8014CB4C 00149C2C  48 00 02 E5 */	bl "lerp__31@unnamed@zNPCTypeKingJelly_cpp@Ffff"
/* 8014CB50 00149C30  3C 60 80 33 */	lis r3, "tweak__31@unnamed@zNPCTypeKingJelly_cpp@"@ha
/* 8014CB54 00149C34  FF 80 08 90 */	fmr f28, f1
/* 8014CB58 00149C38  38 A3 85 38 */	addi r5, r3, "tweak__31@unnamed@zNPCTypeKingJelly_cpp@"@l
/* 8014CB5C 00149C3C  FC 20 D8 90 */	fmr f1, f27
/* 8014CB60 00149C40  80 85 01 90 */	lwz r4, 0x190(r5)
/* 8014CB64 00149C44  38 61 00 14 */	addi r3, r1, 0x14
/* 8014CB68 00149C48  80 05 01 70 */	lwz r0, 0x170(r5)
/* 8014CB6C 00149C4C  90 81 00 10 */	stw r4, 0x10(r1)
/* 8014CB70 00149C50  38 81 00 10 */	addi r4, r1, 0x10
/* 8014CB74 00149C54  90 01 00 14 */	stw r0, 0x14(r1)
/* 8014CB78 00149C58  48 00 01 C1 */	bl "lerp__31@unnamed@zNPCTypeKingJelly_cpp@Ff10iColor_tag10iColor_tag"
/* 8014CB7C 00149C5C  3C 80 80 33 */	lis r4, "tweak__31@unnamed@zNPCTypeKingJelly_cpp@"@ha
/* 8014CB80 00149C60  90 61 00 1C */	stw r3, 0x1c(r1)
/* 8014CB84 00149C64  7F FD FB 78 */	mr r29, r31
/* 8014CB88 00149C68  3B 80 00 00 */	li r28, 0x0
/* 8014CB8C 00149C6C  3B C4 85 38 */	addi r30, r4, "tweak__31@unnamed@zNPCTypeKingJelly_cpp@"@l
.L_8014CB90:
/* 8014CB90 00149C70  80 1D 08 94 */	lwz r0, 0x894(r29)
/* 8014CB94 00149C74  28 00 00 00 */	cmplwi r0, 0x0
/* 8014CB98 00149C78  41 82 00 5C */	beq .L_8014CBF4
/* 8014CB9C 00149C7C  38 C0 00 00 */	li r6, 0x0
/* 8014CBA0 00149C80  38 80 00 00 */	li r4, 0x0
/* 8014CBA4 00149C84  48 00 00 14 */	b .L_8014CBB8
.L_8014CBA8:
/* 8014CBA8 00149C88  38 04 01 9C */	addi r0, r4, 0x19c
/* 8014CBAC 00149C8C  38 C6 00 01 */	addi r6, r6, 0x1
/* 8014CBB0 00149C90  7F 85 05 2E */	stfsx f28, r5, r0
/* 8014CBB4 00149C94  38 84 00 04 */	addi r4, r4, 0x4
.L_8014CBB8:
/* 8014CBB8 00149C98  80 BD 08 94 */	lwz r5, 0x894(r29)
/* 8014CBBC 00149C9C  A8 65 01 88 */	lha r3, 0x188(r5)
/* 8014CBC0 00149CA0  38 03 FF FF */	addi r0, r3, -0x1
/* 8014CBC4 00149CA4  7C 06 00 00 */	cmpw r6, r0
/* 8014CBC8 00149CA8  41 80 FF E0 */	blt .L_8014CBA8
/* 8014CBCC 00149CAC  38 65 02 28 */	addi r3, r5, 0x228
/* 8014CBD0 00149CB0  38 81 00 1C */	addi r4, r1, 0x1c
/* 8014CBD4 00149CB4  4B EC B3 C5 */	bl __as__10iColor_tagFRC10iColor_tag
/* 8014CBD8 00149CB8  80 7D 08 94 */	lwz r3, 0x894(r29)
/* 8014CBDC 00149CBC  FC 20 D8 90 */	fmr f1, f27
/* 8014CBE0 00149CC0  C0 7E 01 94 */	lfs f3, 0x194(r30)
/* 8014CBE4 00149CC4  C0 43 02 1C */	lfs f2, 0x21c(r3)
/* 8014CBE8 00149CC8  48 00 02 49 */	bl "lerp__31@unnamed@zNPCTypeKingJelly_cpp@Ffff"
/* 8014CBEC 00149CCC  80 7D 08 94 */	lwz r3, 0x894(r29)
/* 8014CBF0 00149CD0  D0 23 02 1C */	stfs f1, 0x21c(r3)
.L_8014CBF4:
/* 8014CBF4 00149CD4  3B 9C 00 01 */	addi r28, r28, 0x1
/* 8014CBF8 00149CD8  3B BD 00 04 */	addi r29, r29, 0x4
/* 8014CBFC 00149CDC  2C 1C 00 07 */	cmpwi r28, 0x7
/* 8014CC00 00149CE0  41 80 FF 90 */	blt .L_8014CB90
/* 8014CC04 00149CE4  C0 02 A6 C0 */	lfs f0, "@2419"@sda21(r2)
/* 8014CC08 00149CE8  FC 1B 00 40 */	fcmpo cr0, f27, f0
/* 8014CC0C 00149CEC  4C 41 13 82 */	cror eq, gt, eq
/* 8014CC10 00149CF0  40 82 00 0C */	bne .L_8014CC1C
/* 8014CC14 00149CF4  C0 22 A6 30 */	lfs f1, "@1868"@sda21(r2)
/* 8014CC18 00149CF8  48 00 00 0C */	b .L_8014CC24
.L_8014CC1C:
/* 8014CC1C 00149CFC  C0 02 A6 8C */	lfs f0, "@2406"@sda21(r2)
/* 8014CC20 00149D00  EC 20 06 F2 */	fmuls f1, f0, f27
.L_8014CC24:
/* 8014CC24 00149D04  3C 60 80 33 */	lis r3, "tweak__31@unnamed@zNPCTypeKingJelly_cpp@"@ha
/* 8014CC28 00149D08  38 63 85 38 */	addi r3, r3, "tweak__31@unnamed@zNPCTypeKingJelly_cpp@"@l
/* 8014CC2C 00149D0C  C0 43 01 2C */	lfs f2, 0x12c(r3)
/* 8014CC30 00149D10  C0 63 01 4C */	lfs f3, 0x14c(r3)
/* 8014CC34 00149D14  48 00 01 FD */	bl "lerp__31@unnamed@zNPCTypeKingJelly_cpp@Ffff"
/* 8014CC38 00149D18  3C 60 80 33 */	lis r3, "tweak__31@unnamed@zNPCTypeKingJelly_cpp@"@ha
/* 8014CC3C 00149D1C  FF 80 08 90 */	fmr f28, f1
/* 8014CC40 00149D20  38 63 85 38 */	addi r3, r3, "tweak__31@unnamed@zNPCTypeKingJelly_cpp@"@l
/* 8014CC44 00149D24  FC 20 D8 90 */	fmr f1, f27
/* 8014CC48 00149D28  C0 43 01 34 */	lfs f2, 0x134(r3)
/* 8014CC4C 00149D2C  C0 63 01 50 */	lfs f3, 0x150(r3)
/* 8014CC50 00149D30  48 00 01 E1 */	bl "lerp__31@unnamed@zNPCTypeKingJelly_cpp@Ffff"
/* 8014CC54 00149D34  3C 60 80 33 */	lis r3, "tweak__31@unnamed@zNPCTypeKingJelly_cpp@"@ha
/* 8014CC58 00149D38  FF A0 08 90 */	fmr f29, f1
/* 8014CC5C 00149D3C  38 63 85 38 */	addi r3, r3, "tweak__31@unnamed@zNPCTypeKingJelly_cpp@"@l
/* 8014CC60 00149D40  FC 20 D8 90 */	fmr f1, f27
/* 8014CC64 00149D44  C0 43 01 38 */	lfs f2, 0x138(r3)
/* 8014CC68 00149D48  C0 63 01 54 */	lfs f3, 0x154(r3)
/* 8014CC6C 00149D4C  48 00 01 C5 */	bl "lerp__31@unnamed@zNPCTypeKingJelly_cpp@Ffff"
/* 8014CC70 00149D50  3C 60 80 33 */	lis r3, "tweak__31@unnamed@zNPCTypeKingJelly_cpp@"@ha
/* 8014CC74 00149D54  FF C0 08 90 */	fmr f30, f1
/* 8014CC78 00149D58  38 63 85 38 */	addi r3, r3, "tweak__31@unnamed@zNPCTypeKingJelly_cpp@"@l
/* 8014CC7C 00149D5C  FC 20 D8 90 */	fmr f1, f27
/* 8014CC80 00149D60  C0 43 01 40 */	lfs f2, 0x140(r3)
/* 8014CC84 00149D64  C0 63 01 58 */	lfs f3, 0x158(r3)
/* 8014CC88 00149D68  48 00 01 A9 */	bl "lerp__31@unnamed@zNPCTypeKingJelly_cpp@Ffff"
/* 8014CC8C 00149D6C  3C 60 80 33 */	lis r3, "tweak__31@unnamed@zNPCTypeKingJelly_cpp@"@ha
/* 8014CC90 00149D70  FF E0 08 90 */	fmr f31, f1
/* 8014CC94 00149D74  38 A3 85 38 */	addi r5, r3, "tweak__31@unnamed@zNPCTypeKingJelly_cpp@"@l
/* 8014CC98 00149D78  FC 20 D8 90 */	fmr f1, f27
/* 8014CC9C 00149D7C  80 85 01 5C */	lwz r4, 0x15c(r5)
/* 8014CCA0 00149D80  38 61 00 0C */	addi r3, r1, 0xc
/* 8014CCA4 00149D84  80 05 01 44 */	lwz r0, 0x144(r5)
/* 8014CCA8 00149D88  90 81 00 08 */	stw r4, 0x8(r1)
/* 8014CCAC 00149D8C  38 81 00 08 */	addi r4, r1, 0x8
/* 8014CCB0 00149D90  90 01 00 0C */	stw r0, 0xc(r1)
/* 8014CCB4 00149D94  48 00 00 85 */	bl "lerp__31@unnamed@zNPCTypeKingJelly_cpp@Ff10iColor_tag10iColor_tag"
/* 8014CCB8 00149D98  90 61 00 18 */	stw r3, 0x18(r1)
/* 8014CCBC 00149D9C  7F FD FB 78 */	mr r29, r31
/* 8014CCC0 00149DA0  3B 80 00 00 */	li r28, 0x0
.L_8014CCC4:
/* 8014CCC4 00149DA4  D3 DD 0D 34 */	stfs f30, 0xd34(r29)
/* 8014CCC8 00149DA8  38 7D 0D 44 */	addi r3, r29, 0xd44
/* 8014CCCC 00149DAC  38 81 00 18 */	addi r4, r1, 0x18
/* 8014CCD0 00149DB0  D3 9D 0D 2C */	stfs f28, 0xd2c(r29)
/* 8014CCD4 00149DB4  D3 BD 0D 0C */	stfs f29, 0xd0c(r29)
/* 8014CCD8 00149DB8  D3 FD 0D 40 */	stfs f31, 0xd40(r29)
/* 8014CCDC 00149DBC  4B EC B2 BD */	bl __as__10iColor_tagFRC10iColor_tag
/* 8014CCE0 00149DC0  3B 9C 00 01 */	addi r28, r28, 0x1
/* 8014CCE4 00149DC4  3B BD 00 84 */	addi r29, r29, 0x84
/* 8014CCE8 00149DC8  2C 1C 00 03 */	cmpwi r28, 0x3
/* 8014CCEC 00149DCC  41 80 FF D8 */	blt .L_8014CCC4
/* 8014CCF0 00149DD0  E3 E1 00 78 */	psq_l f31, 0x78(r1), 0, qr0
/* 8014CCF4 00149DD4  CB E1 00 70 */	lfd f31, 0x70(r1)
/* 8014CCF8 00149DD8  E3 C1 00 68 */	psq_l f30, 0x68(r1), 0, qr0
/* 8014CCFC 00149DDC  CB C1 00 60 */	lfd f30, 0x60(r1)
/* 8014CD00 00149DE0  E3 A1 00 58 */	psq_l f29, 0x58(r1), 0, qr0
/* 8014CD04 00149DE4  CB A1 00 50 */	lfd f29, 0x50(r1)
/* 8014CD08 00149DE8  E3 81 00 48 */	psq_l f28, 0x48(r1), 0, qr0
/* 8014CD0C 00149DEC  CB 81 00 40 */	lfd f28, 0x40(r1)
/* 8014CD10 00149DF0  E3 61 00 38 */	psq_l f27, 0x38(r1), 0, qr0
/* 8014CD14 00149DF4  CB 61 00 30 */	lfd f27, 0x30(r1)
/* 8014CD18 00149DF8  83 E1 00 2C */	lwz r31, 0x2c(r1)
/* 8014CD1C 00149DFC  83 C1 00 28 */	lwz r30, 0x28(r1)
/* 8014CD20 00149E00  83 A1 00 24 */	lwz r29, 0x24(r1)
/* 8014CD24 00149E04  80 01 00 84 */	lwz r0, 0x84(r1)
/* 8014CD28 00149E08  83 81 00 20 */	lwz r28, 0x20(r1)
/* 8014CD2C 00149E0C  7C 08 03 A6 */	mtlr r0
/* 8014CD30 00149E10  38 21 00 80 */	addi r1, r1, 0x80
/* 8014CD34 00149E14  4E 80 00 20 */	blr
.endfn update_charge__13zNPCKingJellyFf

# @unnamed@zNPCTypeKingJelly_cpp@::lerp(float, iColor_tag, iColor_tag)
.fn "lerp__31@unnamed@zNPCTypeKingJelly_cpp@Ff10iColor_tag10iColor_tag", local
/* 8014CD38 00149E18  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 8014CD3C 00149E1C  7C 08 02 A6 */	mflr r0
/* 8014CD40 00149E20  90 01 00 24 */	stw r0, 0x24(r1)
/* 8014CD44 00149E24  DB E1 00 18 */	stfd f31, 0x18(r1)
/* 8014CD48 00149E28  FF E0 08 90 */	fmr f31, f1
/* 8014CD4C 00149E2C  93 E1 00 14 */	stw r31, 0x14(r1)
/* 8014CD50 00149E30  7C 9F 23 78 */	mr r31, r4
/* 8014CD54 00149E34  93 C1 00 10 */	stw r30, 0x10(r1)
/* 8014CD58 00149E38  7C 7E 1B 78 */	mr r30, r3
/* 8014CD5C 00149E3C  88 63 00 00 */	lbz r3, 0x0(r3)
/* 8014CD60 00149E40  88 84 00 00 */	lbz r4, 0x0(r4)
/* 8014CD64 00149E44  48 00 00 65 */	bl "lerp__31@unnamed@zNPCTypeKingJelly_cpp@FfUcUc"
/* 8014CD68 00149E48  FC 20 F8 90 */	fmr f1, f31
/* 8014CD6C 00149E4C  98 61 00 08 */	stb r3, 0x8(r1)
/* 8014CD70 00149E50  88 7E 00 01 */	lbz r3, 0x1(r30)
/* 8014CD74 00149E54  88 9F 00 01 */	lbz r4, 0x1(r31)
/* 8014CD78 00149E58  48 00 00 51 */	bl "lerp__31@unnamed@zNPCTypeKingJelly_cpp@FfUcUc"
/* 8014CD7C 00149E5C  FC 20 F8 90 */	fmr f1, f31
/* 8014CD80 00149E60  98 61 00 09 */	stb r3, 0x9(r1)
/* 8014CD84 00149E64  88 7E 00 02 */	lbz r3, 0x2(r30)
/* 8014CD88 00149E68  88 9F 00 02 */	lbz r4, 0x2(r31)
/* 8014CD8C 00149E6C  48 00 00 3D */	bl "lerp__31@unnamed@zNPCTypeKingJelly_cpp@FfUcUc"
/* 8014CD90 00149E70  FC 20 F8 90 */	fmr f1, f31
/* 8014CD94 00149E74  98 61 00 0A */	stb r3, 0xa(r1)
/* 8014CD98 00149E78  88 7E 00 03 */	lbz r3, 0x3(r30)
/* 8014CD9C 00149E7C  88 9F 00 03 */	lbz r4, 0x3(r31)
/* 8014CDA0 00149E80  48 00 00 29 */	bl "lerp__31@unnamed@zNPCTypeKingJelly_cpp@FfUcUc"
/* 8014CDA4 00149E84  98 61 00 0B */	stb r3, 0xb(r1)
/* 8014CDA8 00149E88  80 01 00 24 */	lwz r0, 0x24(r1)
/* 8014CDAC 00149E8C  CB E1 00 18 */	lfd f31, 0x18(r1)
/* 8014CDB0 00149E90  83 E1 00 14 */	lwz r31, 0x14(r1)
/* 8014CDB4 00149E94  80 61 00 08 */	lwz r3, 0x8(r1)
/* 8014CDB8 00149E98  83 C1 00 10 */	lwz r30, 0x10(r1)
/* 8014CDBC 00149E9C  7C 08 03 A6 */	mtlr r0
/* 8014CDC0 00149EA0  38 21 00 20 */	addi r1, r1, 0x20
/* 8014CDC4 00149EA4  4E 80 00 20 */	blr
.endfn "lerp__31@unnamed@zNPCTypeKingJelly_cpp@Ff10iColor_tag10iColor_tag"

# @unnamed@zNPCTypeKingJelly_cpp@::lerp(float, unsigned char, unsigned char)
.fn "lerp__31@unnamed@zNPCTypeKingJelly_cpp@FfUcUc", local
/* 8014CDC8 00149EA8  94 21 FF D0 */	stwu r1, -0x30(r1)
/* 8014CDCC 00149EAC  3C A0 43 30 */	lis r5, 0x4330
/* 8014CDD0 00149EB0  54 60 06 3E */	clrlwi r0, r3, 24
/* 8014CDD4 00149EB4  54 83 06 3E */	clrlwi r3, r4, 24
/* 8014CDD8 00149EB8  90 A1 00 08 */	stw r5, 0x8(r1)
/* 8014CDDC 00149EBC  C8 82 A7 40 */	lfd f4, "@2454"@sda21(r2)
/* 8014CDE0 00149EC0  90 61 00 0C */	stw r3, 0xc(r1)
/* 8014CDE4 00149EC4  C0 A2 A6 50 */	lfs f5, "@1987"@sda21(r2)
/* 8014CDE8 00149EC8  C8 01 00 08 */	lfd f0, 0x8(r1)
/* 8014CDEC 00149ECC  90 01 00 14 */	stw r0, 0x14(r1)
/* 8014CDF0 00149ED0  EC 60 20 28 */	fsubs f3, f0, f4
/* 8014CDF4 00149ED4  90 A1 00 10 */	stw r5, 0x10(r1)
/* 8014CDF8 00149ED8  C8 01 00 10 */	lfd f0, 0x10(r1)
/* 8014CDFC 00149EDC  90 01 00 1C */	stw r0, 0x1c(r1)
/* 8014CE00 00149EE0  EC 40 20 28 */	fsubs f2, f0, f4
/* 8014CE04 00149EE4  90 A1 00 18 */	stw r5, 0x18(r1)
/* 8014CE08 00149EE8  C8 01 00 18 */	lfd f0, 0x18(r1)
/* 8014CE0C 00149EEC  EC 43 10 28 */	fsubs f2, f3, f2
/* 8014CE10 00149EF0  EC 00 20 28 */	fsubs f0, f0, f4
/* 8014CE14 00149EF4  EC 01 00 BA */	fmadds f0, f1, f2, f0
/* 8014CE18 00149EF8  EC 05 00 2A */	fadds f0, f5, f0
/* 8014CE1C 00149EFC  FC 00 00 1E */	fctiwz f0, f0
/* 8014CE20 00149F00  D8 01 00 20 */	stfd f0, 0x20(r1)
/* 8014CE24 00149F04  80 61 00 24 */	lwz r3, 0x24(r1)
/* 8014CE28 00149F08  38 21 00 30 */	addi r1, r1, 0x30
/* 8014CE2C 00149F0C  4E 80 00 20 */	blr
.endfn "lerp__31@unnamed@zNPCTypeKingJelly_cpp@FfUcUc"

# @unnamed@zNPCTypeKingJelly_cpp@::lerp(float, float, float)
.fn "lerp__31@unnamed@zNPCTypeKingJelly_cpp@Ffff", local
/* 8014CE30 00149F10  EC 03 10 28 */	fsubs f0, f3, f2
/* 8014CE34 00149F14  EC 21 10 3A */	fmadds f1, f1, f0, f2
/* 8014CE38 00149F18  4E 80 00 20 */	blr
.endfn "lerp__31@unnamed@zNPCTypeKingJelly_cpp@Ffff"

# zNPCKingJelly::end_charge()
.fn end_charge__13zNPCKingJellyFv, global
/* 8014CE3C 00149F1C  88 03 02 B7 */	lbz r0, 0x2b7(r3)
/* 8014CE40 00149F20  28 00 00 00 */	cmplwi r0, 0x0
/* 8014CE44 00149F24  4D 82 00 20 */	beqlr
/* 8014CE48 00149F28  38 A0 00 00 */	li r5, 0x0
/* 8014CE4C 00149F2C  3C 80 80 33 */	lis r4, "tweak__31@unnamed@zNPCTypeKingJelly_cpp@"@ha
/* 8014CE50 00149F30  98 A3 02 B7 */	stb r5, 0x2b7(r3)
/* 8014CE54 00149F34  38 00 00 07 */	li r0, 0x7
/* 8014CE58 00149F38  38 A4 85 38 */	addi r5, r4, "tweak__31@unnamed@zNPCTypeKingJelly_cpp@"@l
/* 8014CE5C 00149F3C  7C 09 03 A6 */	mtctr r0
.L_8014CE60:
/* 8014CE60 00149F40  80 83 08 94 */	lwz r4, 0x894(r3)
/* 8014CE64 00149F44  28 04 00 00 */	cmplwi r4, 0x0
/* 8014CE68 00149F48  41 82 00 24 */	beq .L_8014CE8C
/* 8014CE6C 00149F4C  80 04 00 04 */	lwz r0, 0x4(r4)
/* 8014CE70 00149F50  54 00 07 34 */	rlwinm r0, r0, 0, 28, 26
/* 8014CE74 00149F54  90 04 00 04 */	stw r0, 0x4(r4)
/* 8014CE78 00149F58  C0 05 00 60 */	lfs f0, 0x60(r5)
/* 8014CE7C 00149F5C  80 83 08 94 */	lwz r4, 0x894(r3)
/* 8014CE80 00149F60  D0 04 02 30 */	stfs f0, 0x230(r4)
/* 8014CE84 00149F64  80 83 08 94 */	lwz r4, 0x894(r3)
/* 8014CE88 00149F68  D0 04 02 2C */	stfs f0, 0x22c(r4)
.L_8014CE8C:
/* 8014CE8C 00149F6C  38 63 00 04 */	addi r3, r3, 0x4
/* 8014CE90 00149F70  42 00 FF D0 */	bdnz .L_8014CE60
/* 8014CE94 00149F74  4E 80 00 20 */	blr
.endfn end_charge__13zNPCKingJellyFv

# zNPCKingJelly::load_model()
.fn load_model__13zNPCKingJellyFv, global
/* 8014CE98 00149F78  80 C3 00 24 */	lwz r6, 0x24(r3)
/* 8014CE9C 00149F7C  38 A0 00 00 */	li r5, 0x0
/* 8014CEA0 00149F80  7C 64 1B 78 */	mr r4, r3
/* 8014CEA4 00149F84  48 00 00 14 */	b .L_8014CEB8
.L_8014CEA8:
/* 8014CEA8 00149F88  90 C4 02 DC */	stw r6, 0x2dc(r4)
/* 8014CEAC 00149F8C  38 84 00 04 */	addi r4, r4, 0x4
/* 8014CEB0 00149F90  38 A5 00 01 */	addi r5, r5, 0x1
/* 8014CEB4 00149F94  80 C6 00 00 */	lwz r6, 0x0(r6)
.L_8014CEB8:
/* 8014CEB8 00149F98  28 06 00 00 */	cmplwi r6, 0x0
/* 8014CEBC 00149F9C  41 82 00 0C */	beq .L_8014CEC8
/* 8014CEC0 00149FA0  28 05 00 04 */	cmplwi r5, 0x4
/* 8014CEC4 00149FA4  41 80 FF E4 */	blt .L_8014CEA8
.L_8014CEC8:
/* 8014CEC8 00149FA8  80 83 02 DC */	lwz r4, 0x2dc(r3)
/* 8014CECC 00149FAC  C0 02 A6 90 */	lfs f0, "@2407"@sda21(r2)
/* 8014CED0 00149FB0  80 84 00 10 */	lwz r4, 0x10(r4)
/* 8014CED4 00149FB4  C0 24 00 28 */	lfs f1, 0x28(r4)
/* 8014CED8 00149FB8  EC 01 00 2A */	fadds f0, f1, f0
/* 8014CEDC 00149FBC  D0 04 00 28 */	stfs f0, 0x28(r4)
/* 8014CEE0 00149FC0  80 83 02 E0 */	lwz r4, 0x2e0(r3)
/* 8014CEE4 00149FC4  C0 02 A6 90 */	lfs f0, "@2407"@sda21(r2)
/* 8014CEE8 00149FC8  80 84 00 10 */	lwz r4, 0x10(r4)
/* 8014CEEC 00149FCC  C0 24 00 28 */	lfs f1, 0x28(r4)
/* 8014CEF0 00149FD0  EC 01 00 2A */	fadds f0, f1, f0
/* 8014CEF4 00149FD4  D0 04 00 28 */	stfs f0, 0x28(r4)
/* 8014CEF8 00149FD8  80 83 02 E8 */	lwz r4, 0x2e8(r3)
/* 8014CEFC 00149FDC  C0 02 A6 90 */	lfs f0, "@2407"@sda21(r2)
/* 8014CF00 00149FE0  80 84 00 10 */	lwz r4, 0x10(r4)
/* 8014CF04 00149FE4  C0 24 00 28 */	lfs f1, 0x28(r4)
/* 8014CF08 00149FE8  EC 01 00 2A */	fadds f0, f1, f0
/* 8014CF0C 00149FEC  D0 04 00 28 */	stfs f0, 0x28(r4)
/* 8014CF10 00149FF0  80 83 02 E4 */	lwz r4, 0x2e4(r3)
/* 8014CF14 00149FF4  C0 02 A6 90 */	lfs f0, "@2407"@sda21(r2)
/* 8014CF18 00149FF8  80 84 00 10 */	lwz r4, 0x10(r4)
/* 8014CF1C 00149FFC  C0 24 00 28 */	lfs f1, 0x28(r4)
/* 8014CF20 0014A000  EC 01 00 2A */	fadds f0, f1, f0
/* 8014CF24 0014A004  D0 04 00 28 */	stfs f0, 0x28(r4)
/* 8014CF28 0014A008  80 83 02 E8 */	lwz r4, 0x2e8(r3)
/* 8014CF2C 0014A00C  A0 04 00 44 */	lhz r0, 0x44(r4)
/* 8014CF30 0014A010  60 00 00 02 */	ori r0, r0, 0x2
/* 8014CF34 0014A014  B0 04 00 44 */	sth r0, 0x44(r4)
/* 8014CF38 0014A018  80 63 02 E8 */	lwz r3, 0x2e8(r3)
/* 8014CF3C 0014A01C  A0 03 00 44 */	lhz r0, 0x44(r3)
/* 8014CF40 0014A020  60 00 00 01 */	ori r0, r0, 0x1
/* 8014CF44 0014A024  B0 03 00 44 */	sth r0, 0x44(r3)
/* 8014CF48 0014A028  4E 80 00 20 */	blr
.endfn load_model__13zNPCKingJellyFv

# zNPCKingJelly::load_curtain_model()
.fn load_curtain_model__13zNPCKingJellyFv, global
/* 8014CF4C 0014A02C  94 21 FF D0 */	stwu r1, -0x30(r1)
/* 8014CF50 0014A030  7C 08 02 A6 */	mflr r0
/* 8014CF54 0014A034  3C 80 80 27 */	lis r4, "@3385"@ha
/* 8014CF58 0014A038  90 01 00 34 */	stw r0, 0x34(r1)
/* 8014CF5C 0014A03C  39 04 D8 84 */	addi r8, r4, "@3385"@l
/* 8014CF60 0014A040  93 E1 00 2C */	stw r31, 0x2c(r1)
/* 8014CF64 0014A044  7C 7F 1B 78 */	mr r31, r3
/* 8014CF68 0014A048  38 61 00 08 */	addi r3, r1, 0x8
/* 8014CF6C 0014A04C  80 E8 00 00 */	lwz r7, 0x0(r8)
/* 8014CF70 0014A050  80 C8 00 04 */	lwz r6, 0x4(r8)
/* 8014CF74 0014A054  80 A8 00 08 */	lwz r5, 0x8(r8)
/* 8014CF78 0014A058  80 88 00 0C */	lwz r4, 0xc(r8)
/* 8014CF7C 0014A05C  80 08 00 10 */	lwz r0, 0x10(r8)
/* 8014CF80 0014A060  90 E1 00 08 */	stw r7, 0x8(r1)
/* 8014CF84 0014A064  90 C1 00 0C */	stw r6, 0xc(r1)
/* 8014CF88 0014A068  90 A1 00 10 */	stw r5, 0x10(r1)
/* 8014CF8C 0014A06C  90 81 00 14 */	stw r4, 0x14(r1)
/* 8014CF90 0014A070  90 01 00 18 */	stw r0, 0x18(r1)
/* 8014CF94 0014A074  4B EF F2 81 */	bl xStrHash__FPCc
/* 8014CF98 0014A078  4B F6 7A A5 */	bl zSceneFindObject__FUi
/* 8014CF9C 0014A07C  90 7F 10 9C */	stw r3, 0x109c(r31)
/* 8014CFA0 0014A080  7F E4 FB 78 */	mr r4, r31
/* 8014CFA4 0014A084  38 A0 00 00 */	li r5, 0x0
/* 8014CFA8 0014A088  80 7F 10 9C */	lwz r3, 0x109c(r31)
/* 8014CFAC 0014A08C  80 63 00 24 */	lwz r3, 0x24(r3)
/* 8014CFB0 0014A090  48 00 00 14 */	b .L_8014CFC4
.L_8014CFB4:
/* 8014CFB4 0014A094  90 64 10 A0 */	stw r3, 0x10a0(r4)
/* 8014CFB8 0014A098  38 84 00 04 */	addi r4, r4, 0x4
/* 8014CFBC 0014A09C  38 A5 00 01 */	addi r5, r5, 0x1
/* 8014CFC0 0014A0A0  80 63 00 00 */	lwz r3, 0x0(r3)
.L_8014CFC4:
/* 8014CFC4 0014A0A4  28 03 00 00 */	cmplwi r3, 0x0
/* 8014CFC8 0014A0A8  41 82 00 0C */	beq .L_8014CFD4
/* 8014CFCC 0014A0AC  28 05 00 05 */	cmplwi r5, 0x5
/* 8014CFD0 0014A0B0  41 80 FF E4 */	blt .L_8014CFB4
.L_8014CFD4:
/* 8014CFD4 0014A0B4  80 01 00 34 */	lwz r0, 0x34(r1)
/* 8014CFD8 0014A0B8  83 E1 00 2C */	lwz r31, 0x2c(r1)
/* 8014CFDC 0014A0BC  7C 08 03 A6 */	mtlr r0
/* 8014CFE0 0014A0C0  38 21 00 30 */	addi r1, r1, 0x30
/* 8014CFE4 0014A0C4  4E 80 00 20 */	blr
.endfn load_curtain_model__13zNPCKingJellyFv

# zNPCKingJelly::show_shower_model()
.fn show_shower_model__13zNPCKingJellyFv, global
/* 8014CFE8 0014A0C8  80 83 02 DC */	lwz r4, 0x2dc(r3)
/* 8014CFEC 0014A0CC  A0 04 00 44 */	lhz r0, 0x44(r4)
/* 8014CFF0 0014A0D0  60 00 00 02 */	ori r0, r0, 0x2
/* 8014CFF4 0014A0D4  B0 04 00 44 */	sth r0, 0x44(r4)
/* 8014CFF8 0014A0D8  80 83 02 DC */	lwz r4, 0x2dc(r3)
/* 8014CFFC 0014A0DC  A0 04 00 44 */	lhz r0, 0x44(r4)
/* 8014D000 0014A0E0  60 00 00 01 */	ori r0, r0, 0x1
/* 8014D004 0014A0E4  B0 04 00 44 */	sth r0, 0x44(r4)
/* 8014D008 0014A0E8  80 83 02 E0 */	lwz r4, 0x2e0(r3)
/* 8014D00C 0014A0EC  A0 04 00 44 */	lhz r0, 0x44(r4)
/* 8014D010 0014A0F0  60 00 00 02 */	ori r0, r0, 0x2
/* 8014D014 0014A0F4  B0 04 00 44 */	sth r0, 0x44(r4)
/* 8014D018 0014A0F8  80 83 02 E0 */	lwz r4, 0x2e0(r3)
/* 8014D01C 0014A0FC  A0 04 00 44 */	lhz r0, 0x44(r4)
/* 8014D020 0014A100  60 00 00 01 */	ori r0, r0, 0x1
/* 8014D024 0014A104  B0 04 00 44 */	sth r0, 0x44(r4)
/* 8014D028 0014A108  80 83 02 E4 */	lwz r4, 0x2e4(r3)
/* 8014D02C 0014A10C  A0 04 00 44 */	lhz r0, 0x44(r4)
/* 8014D030 0014A110  70 00 FF FD */	andi. r0, r0, 0xfffd
/* 8014D034 0014A114  B0 04 00 44 */	sth r0, 0x44(r4)
/* 8014D038 0014A118  80 63 02 E4 */	lwz r3, 0x2e4(r3)
/* 8014D03C 0014A11C  A0 03 00 44 */	lhz r0, 0x44(r3)
/* 8014D040 0014A120  54 00 04 3C */	rlwinm r0, r0, 0, 16, 30
/* 8014D044 0014A124  B0 03 00 44 */	sth r0, 0x44(r3)
/* 8014D048 0014A128  4E 80 00 20 */	blr
.endfn show_shower_model__13zNPCKingJellyFv

# zNPCKingJelly::show_attack_model()
.fn show_attack_model__13zNPCKingJellyFv, global
/* 8014D04C 0014A12C  80 83 02 DC */	lwz r4, 0x2dc(r3)
/* 8014D050 0014A130  A0 04 00 44 */	lhz r0, 0x44(r4)
/* 8014D054 0014A134  60 00 00 02 */	ori r0, r0, 0x2
/* 8014D058 0014A138  B0 04 00 44 */	sth r0, 0x44(r4)
/* 8014D05C 0014A13C  80 83 02 DC */	lwz r4, 0x2dc(r3)
/* 8014D060 0014A140  A0 04 00 44 */	lhz r0, 0x44(r4)
/* 8014D064 0014A144  54 00 04 3C */	rlwinm r0, r0, 0, 16, 30
/* 8014D068 0014A148  B0 04 00 44 */	sth r0, 0x44(r4)
/* 8014D06C 0014A14C  80 83 02 E0 */	lwz r4, 0x2e0(r3)
/* 8014D070 0014A150  A0 04 00 44 */	lhz r0, 0x44(r4)
/* 8014D074 0014A154  70 00 FF FD */	andi. r0, r0, 0xfffd
/* 8014D078 0014A158  B0 04 00 44 */	sth r0, 0x44(r4)
/* 8014D07C 0014A15C  80 83 02 E0 */	lwz r4, 0x2e0(r3)
/* 8014D080 0014A160  A0 04 00 44 */	lhz r0, 0x44(r4)
/* 8014D084 0014A164  54 00 04 3C */	rlwinm r0, r0, 0, 16, 30
/* 8014D088 0014A168  B0 04 00 44 */	sth r0, 0x44(r4)
/* 8014D08C 0014A16C  80 83 02 E4 */	lwz r4, 0x2e4(r3)
/* 8014D090 0014A170  A0 04 00 44 */	lhz r0, 0x44(r4)
/* 8014D094 0014A174  60 00 00 02 */	ori r0, r0, 0x2
/* 8014D098 0014A178  B0 04 00 44 */	sth r0, 0x44(r4)
/* 8014D09C 0014A17C  80 63 02 E4 */	lwz r3, 0x2e4(r3)
/* 8014D0A0 0014A180  A0 03 00 44 */	lhz r0, 0x44(r3)
/* 8014D0A4 0014A184  60 00 00 01 */	ori r0, r0, 0x1
/* 8014D0A8 0014A188  B0 03 00 44 */	sth r0, 0x44(r3)
/* 8014D0AC 0014A18C  4E 80 00 20 */	blr
.endfn show_attack_model__13zNPCKingJellyFv

# zNPCKingJelly::fade_curtain()
.fn fade_curtain__13zNPCKingJellyFv, global
/* 8014D0B0 0014A190  3C A0 80 33 */	lis r5, "tweak__31@unnamed@zNPCTypeKingJelly_cpp@"@ha
/* 8014D0B4 0014A194  80 83 10 B0 */	lwz r4, 0x10b0(r3)
/* 8014D0B8 0014A198  38 A5 85 38 */	addi r5, r5, "tweak__31@unnamed@zNPCTypeKingJelly_cpp@"@l
/* 8014D0BC 0014A19C  C0 05 00 24 */	lfs f0, 0x24(r5)
/* 8014D0C0 0014A1A0  D0 04 00 24 */	stfs f0, 0x24(r4)
/* 8014D0C4 0014A1A4  80 63 10 A8 */	lwz r3, 0x10a8(r3)
/* 8014D0C8 0014A1A8  D0 03 00 24 */	stfs f0, 0x24(r3)
/* 8014D0CC 0014A1AC  4E 80 00 20 */	blr
.endfn fade_curtain__13zNPCKingJellyFv

# zNPCKingJelly::reset_curtain()
.fn reset_curtain__13zNPCKingJellyFv, global
/* 8014D0D0 0014A1B0  C0 02 A6 30 */	lfs f0, "@1868"@sda21(r2)
/* 8014D0D4 0014A1B4  80 83 10 B0 */	lwz r4, 0x10b0(r3)
/* 8014D0D8 0014A1B8  D0 04 00 24 */	stfs f0, 0x24(r4)
/* 8014D0DC 0014A1BC  80 63 10 A8 */	lwz r3, 0x10a8(r3)
/* 8014D0E0 0014A1C0  D0 03 00 24 */	stfs f0, 0x24(r3)
/* 8014D0E4 0014A1C4  4E 80 00 20 */	blr
.endfn reset_curtain__13zNPCKingJellyFv

# @unnamed@zNPCTypeKingJelly_cpp@::set_model_color(xModelInstance*, float, float, float, float)
.fn "set_model_color__31@unnamed@zNPCTypeKingJelly_cpp@FP14xModelInstanceffff", local
/* 8014D0E8 0014A1C8  48 00 00 24 */	b .L_8014D10C
.L_8014D0EC:
/* 8014D0EC 0014A1CC  A0 03 00 44 */	lhz r0, 0x44(r3)
/* 8014D0F0 0014A1D0  60 00 40 00 */	ori r0, r0, 0x4000
/* 8014D0F4 0014A1D4  B0 03 00 44 */	sth r0, 0x44(r3)
/* 8014D0F8 0014A1D8  D0 23 00 18 */	stfs f1, 0x18(r3)
/* 8014D0FC 0014A1DC  D0 43 00 1C */	stfs f2, 0x1c(r3)
/* 8014D100 0014A1E0  D0 63 00 20 */	stfs f3, 0x20(r3)
/* 8014D104 0014A1E4  D0 83 00 24 */	stfs f4, 0x24(r3)
/* 8014D108 0014A1E8  80 63 00 00 */	lwz r3, 0x0(r3)
.L_8014D10C:
/* 8014D10C 0014A1EC  28 03 00 00 */	cmplwi r3, 0x0
/* 8014D110 0014A1F0  40 82 FF DC */	bne .L_8014D0EC
/* 8014D114 0014A1F4  4E 80 00 20 */	blr
.endfn "set_model_color__31@unnamed@zNPCTypeKingJelly_cpp@FP14xModelInstanceffff"

# @unnamed@zNPCTypeKingJelly_cpp@::reset_model_color(xModelInstance*)
.fn "reset_model_color__31@unnamed@zNPCTypeKingJelly_cpp@FP14xModelInstance", local
/* 8014D118 0014A1F8  48 00 00 34 */	b .L_8014D14C
.L_8014D11C:
/* 8014D11C 0014A1FC  A0 03 00 44 */	lhz r0, 0x44(r3)
/* 8014D120 0014A200  70 00 BF FF */	andi. r0, r0, 0xbfff
/* 8014D124 0014A204  B0 03 00 44 */	sth r0, 0x44(r3)
/* 8014D128 0014A208  C0 02 A6 30 */	lfs f0, "@1868"@sda21(r2)
/* 8014D12C 0014A20C  D0 03 00 18 */	stfs f0, 0x18(r3)
/* 8014D130 0014A210  C0 02 A6 30 */	lfs f0, "@1868"@sda21(r2)
/* 8014D134 0014A214  D0 03 00 1C */	stfs f0, 0x1c(r3)
/* 8014D138 0014A218  C0 02 A6 30 */	lfs f0, "@1868"@sda21(r2)
/* 8014D13C 0014A21C  D0 03 00 20 */	stfs f0, 0x20(r3)
/* 8014D140 0014A220  C0 02 A6 30 */	lfs f0, "@1868"@sda21(r2)
/* 8014D144 0014A224  D0 03 00 24 */	stfs f0, 0x24(r3)
/* 8014D148 0014A228  80 63 00 00 */	lwz r3, 0x0(r3)
.L_8014D14C:
/* 8014D14C 0014A22C  28 03 00 00 */	cmplwi r3, 0x0
/* 8014D150 0014A230  40 82 FF CC */	bne .L_8014D11C
/* 8014D154 0014A234  4E 80 00 20 */	blr
.endfn "reset_model_color__31@unnamed@zNPCTypeKingJelly_cpp@FP14xModelInstance"

# zNPCKingJelly::start_blink()
.fn start_blink__13zNPCKingJellyFv, global
/* 8014D158 0014A238  38 80 00 01 */	li r4, 0x1
/* 8014D15C 0014A23C  38 00 00 00 */	li r0, 0x0
/* 8014D160 0014A240  98 83 02 EC */	stb r4, 0x2ec(r3)
/* 8014D164 0014A244  C0 02 A6 34 */	lfs f0, "@1869"@sda21(r2)
/* 8014D168 0014A248  D0 03 02 F8 */	stfs f0, 0x2f8(r3)
/* 8014D16C 0014A24C  90 03 02 F0 */	stw r0, 0x2f0(r3)
/* 8014D170 0014A250  80 63 00 24 */	lwz r3, 0x24(r3)
/* 8014D174 0014A254  A0 03 00 44 */	lhz r0, 0x44(r3)
/* 8014D178 0014A258  60 00 40 00 */	ori r0, r0, 0x4000
/* 8014D17C 0014A25C  B0 03 00 44 */	sth r0, 0x44(r3)
/* 8014D180 0014A260  4E 80 00 20 */	blr
.endfn start_blink__13zNPCKingJellyFv

# zNPCKingJelly::update_blink(float)
.fn update_blink__13zNPCKingJellyFf, global
/* 8014D184 0014A264  94 21 FF D0 */	stwu r1, -0x30(r1)
/* 8014D188 0014A268  7C 08 02 A6 */	mflr r0
/* 8014D18C 0014A26C  90 01 00 34 */	stw r0, 0x34(r1)
/* 8014D190 0014A270  DB E1 00 20 */	stfd f31, 0x20(r1)
/* 8014D194 0014A274  F3 E1 00 28 */	psq_st f31, 0x28(r1), 0, qr0
/* 8014D198 0014A278  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 8014D19C 0014A27C  7C 7F 1B 78 */	mr r31, r3
/* 8014D1A0 0014A280  FF E0 08 90 */	fmr f31, f1
/* 8014D1A4 0014A284  88 03 02 EC */	lbz r0, 0x2ec(r3)
/* 8014D1A8 0014A288  28 00 00 00 */	cmplwi r0, 0x0
/* 8014D1AC 0014A28C  41 82 01 2C */	beq .L_8014D2D8
/* 8014D1B0 0014A290  3C 60 80 33 */	lis r3, "tweak__31@unnamed@zNPCTypeKingJelly_cpp@"@ha
/* 8014D1B4 0014A294  3C 00 43 30 */	lis r0, 0x4330
/* 8014D1B8 0014A298  38 83 85 38 */	addi r4, r3, "tweak__31@unnamed@zNPCTypeKingJelly_cpp@"@l
/* 8014D1BC 0014A29C  90 01 00 08 */	stw r0, 0x8(r1)
/* 8014D1C0 0014A2A0  80 04 00 34 */	lwz r0, 0x34(r4)
/* 8014D1C4 0014A2A4  C8 42 A6 68 */	lfd f2, "@2088"@sda21(r2)
/* 8014D1C8 0014A2A8  6C 00 80 00 */	xoris r0, r0, 0x8000
/* 8014D1CC 0014A2AC  C0 64 00 30 */	lfs f3, 0x30(r4)
/* 8014D1D0 0014A2B0  90 01 00 0C */	stw r0, 0xc(r1)
/* 8014D1D4 0014A2B4  C0 1F 02 F8 */	lfs f0, 0x2f8(r31)
/* 8014D1D8 0014A2B8  C8 21 00 08 */	lfd f1, 0x8(r1)
/* 8014D1DC 0014A2BC  EC 21 10 28 */	fsubs f1, f1, f2
/* 8014D1E0 0014A2C0  EC 43 08 24 */	fdivs f2, f3, f1
/* 8014D1E4 0014A2C4  FC 00 10 40 */	fcmpo cr0, f0, f2
/* 8014D1E8 0014A2C8  4C 41 13 82 */	cror eq, gt, eq
/* 8014D1EC 0014A2CC  40 82 00 3C */	bne .L_8014D228
/* 8014D1F0 0014A2D0  C0 02 A6 34 */	lfs f0, "@1869"@sda21(r2)
/* 8014D1F4 0014A2D4  D0 1F 02 F8 */	stfs f0, 0x2f8(r31)
/* 8014D1F8 0014A2D8  80 7F 02 F0 */	lwz r3, 0x2f0(r31)
/* 8014D1FC 0014A2DC  38 03 00 01 */	addi r0, r3, 0x1
/* 8014D200 0014A2E0  90 1F 02 F0 */	stw r0, 0x2f0(r31)
/* 8014D204 0014A2E4  80 7F 02 F0 */	lwz r3, 0x2f0(r31)
/* 8014D208 0014A2E8  80 04 00 34 */	lwz r0, 0x34(r4)
/* 8014D20C 0014A2EC  7C 03 00 00 */	cmpw r3, r0
/* 8014D210 0014A2F0  41 80 00 18 */	blt .L_8014D228
/* 8014D214 0014A2F4  38 00 00 00 */	li r0, 0x0
/* 8014D218 0014A2F8  98 1F 02 EC */	stb r0, 0x2ec(r31)
/* 8014D21C 0014A2FC  80 7F 00 24 */	lwz r3, 0x24(r31)
/* 8014D220 0014A300  4B FF FE F9 */	bl "reset_model_color__31@unnamed@zNPCTypeKingJelly_cpp@FP14xModelInstance"
/* 8014D224 0014A304  48 00 00 B4 */	b .L_8014D2D8
.L_8014D228:
/* 8014D228 0014A308  C0 1F 02 F8 */	lfs f0, 0x2f8(r31)
/* 8014D22C 0014A30C  3C 00 43 30 */	lis r0, 0x4330
/* 8014D230 0014A310  3C 60 80 33 */	lis r3, "tweak__31@unnamed@zNPCTypeKingJelly_cpp@"@ha
/* 8014D234 0014A314  C0 22 A6 30 */	lfs f1, "@1868"@sda21(r2)
/* 8014D238 0014A318  EC 00 10 24 */	fdivs f0, f0, f2
/* 8014D23C 0014A31C  90 01 00 08 */	stw r0, 0x8(r1)
/* 8014D240 0014A320  38 63 85 38 */	addi r3, r3, "tweak__31@unnamed@zNPCTypeKingJelly_cpp@"@l
/* 8014D244 0014A324  EC 01 00 28 */	fsubs f0, f1, f0
/* 8014D248 0014A328  D0 1F 02 F4 */	stfs f0, 0x2f4(r31)
/* 8014D24C 0014A32C  80 1F 02 F0 */	lwz r0, 0x2f0(r31)
/* 8014D250 0014A330  C8 62 A6 68 */	lfd f3, "@2088"@sda21(r2)
/* 8014D254 0014A334  6C 00 80 00 */	xoris r0, r0, 0x8000
/* 8014D258 0014A338  C0 23 00 38 */	lfs f1, 0x38(r3)
/* 8014D25C 0014A33C  90 01 00 0C */	stw r0, 0xc(r1)
/* 8014D260 0014A340  C0 02 A6 30 */	lfs f0, "@1868"@sda21(r2)
/* 8014D264 0014A344  C8 41 00 08 */	lfd f2, 0x8(r1)
/* 8014D268 0014A348  C0 9F 02 F4 */	lfs f4, 0x2f4(r31)
/* 8014D26C 0014A34C  EC 42 18 28 */	fsubs f2, f2, f3
/* 8014D270 0014A350  EC 02 00 7C */	fnmsubs f0, f2, f1, f0
/* 8014D274 0014A354  EC 04 00 32 */	fmuls f0, f4, f0
/* 8014D278 0014A358  D0 1F 02 F4 */	stfs f0, 0x2f4(r31)
/* 8014D27C 0014A35C  C0 3F 02 F4 */	lfs f1, 0x2f4(r31)
/* 8014D280 0014A360  C0 02 A6 34 */	lfs f0, "@1869"@sda21(r2)
/* 8014D284 0014A364  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8014D288 0014A368  40 80 00 08 */	bge .L_8014D290
/* 8014D28C 0014A36C  D0 1F 02 F4 */	stfs f0, 0x2f4(r31)
.L_8014D290:
/* 8014D290 0014A370  C0 02 A6 30 */	lfs f0, "@1868"@sda21(r2)
/* 8014D294 0014A374  3C 60 80 33 */	lis r3, "tweak__31@unnamed@zNPCTypeKingJelly_cpp@"@ha
/* 8014D298 0014A378  C0 9F 02 F4 */	lfs f4, 0x2f4(r31)
/* 8014D29C 0014A37C  38 63 85 38 */	addi r3, r3, "tweak__31@unnamed@zNPCTypeKingJelly_cpp@"@l
/* 8014D2A0 0014A380  C0 23 00 3C */	lfs f1, 0x3c(r3)
/* 8014D2A4 0014A384  EC A0 20 28 */	fsubs f5, f0, f4
/* 8014D2A8 0014A388  C0 43 00 40 */	lfs f2, 0x40(r3)
/* 8014D2AC 0014A38C  C0 63 00 44 */	lfs f3, 0x44(r3)
/* 8014D2B0 0014A390  C0 03 00 48 */	lfs f0, 0x48(r3)
/* 8014D2B4 0014A394  EC 24 28 7A */	fmadds f1, f4, f1, f5
/* 8014D2B8 0014A398  80 7F 00 24 */	lwz r3, 0x24(r31)
/* 8014D2BC 0014A39C  EC 44 28 BA */	fmadds f2, f4, f2, f5
/* 8014D2C0 0014A3A0  EC 64 28 FA */	fmadds f3, f4, f3, f5
/* 8014D2C4 0014A3A4  EC 84 28 3A */	fmadds f4, f4, f0, f5
/* 8014D2C8 0014A3A8  4B FF FE 21 */	bl "set_model_color__31@unnamed@zNPCTypeKingJelly_cpp@FP14xModelInstanceffff"
/* 8014D2CC 0014A3AC  C0 1F 02 F8 */	lfs f0, 0x2f8(r31)
/* 8014D2D0 0014A3B0  EC 00 F8 2A */	fadds f0, f0, f31
/* 8014D2D4 0014A3B4  D0 1F 02 F8 */	stfs f0, 0x2f8(r31)
.L_8014D2D8:
/* 8014D2D8 0014A3B8  E3 E1 00 28 */	psq_l f31, 0x28(r1), 0, qr0
/* 8014D2DC 0014A3BC  80 01 00 34 */	lwz r0, 0x34(r1)
/* 8014D2E0 0014A3C0  CB E1 00 20 */	lfd f31, 0x20(r1)
/* 8014D2E4 0014A3C4  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 8014D2E8 0014A3C8  7C 08 03 A6 */	mtlr r0
/* 8014D2EC 0014A3CC  38 21 00 30 */	addi r1, r1, 0x30
/* 8014D2F0 0014A3D0  4E 80 00 20 */	blr
.endfn update_blink__13zNPCKingJellyFf

# zNPCGoalKJIdle::Enter(float, void*)
.fn Enter__14zNPCGoalKJIdleFfPv, global
/* 8014D2F4 0014A3D4  94 21 FF D0 */	stwu r1, -0x30(r1)
/* 8014D2F8 0014A3D8  7C 08 02 A6 */	mflr r0
/* 8014D2FC 0014A3DC  90 01 00 34 */	stw r0, 0x34(r1)
/* 8014D300 0014A3E0  DB E1 00 20 */	stfd f31, 0x20(r1)
/* 8014D304 0014A3E4  F3 E1 00 28 */	psq_st f31, 0x28(r1), 0, qr0
/* 8014D308 0014A3E8  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 8014D30C 0014A3EC  93 C1 00 18 */	stw r30, 0x18(r1)
/* 8014D310 0014A3F0  93 A1 00 14 */	stw r29, 0x14(r1)
/* 8014D314 0014A3F4  7C 7D 1B 78 */	mr r29, r3
/* 8014D318 0014A3F8  FF E0 08 90 */	fmr f31, f1
/* 8014D31C 0014A3FC  80 63 00 18 */	lwz r3, 0x18(r3)
/* 8014D320 0014A400  7C 9E 23 78 */	mr r30, r4
/* 8014D324 0014A404  83 E3 00 00 */	lwz r31, 0x0(r3)
/* 8014D328 0014A408  7F E3 FB 78 */	mr r3, r31
/* 8014D32C 0014A40C  4B FF D5 9D */	bl get_variance__13zNPCKingJellyCFv
/* 8014D330 0014A410  80 7F 02 BC */	lwz r3, 0x2bc(r31)
/* 8014D334 0014A414  3C 80 80 33 */	lis r4, "tweak__31@unnamed@zNPCTypeKingJelly_cpp@"@ha
/* 8014D338 0014A418  38 A4 85 38 */	addi r5, r4, "tweak__31@unnamed@zNPCTypeKingJelly_cpp@"@l
/* 8014D33C 0014A41C  38 00 00 00 */	li r0, 0x0
/* 8014D340 0014A420  54 64 10 3A */	slwi r4, r3, 2
/* 8014D344 0014A424  38 60 00 06 */	li r3, 0x6
/* 8014D348 0014A428  7C 85 22 14 */	add r4, r5, r4
/* 8014D34C 0014A42C  C0 04 00 50 */	lfs f0, 0x50(r4)
/* 8014D350 0014A430  EC 00 08 2A */	fadds f0, f0, f1
/* 8014D354 0014A434  D0 1D 00 4C */	stfs f0, 0x4c(r29)
/* 8014D358 0014A438  98 1F 02 B8 */	stb r0, 0x2b8(r31)
/* 8014D35C 0014A43C  80 9F 00 24 */	lwz r4, 0x24(r31)
/* 8014D360 0014A440  80 84 00 4C */	lwz r4, 0x4c(r4)
/* 8014D364 0014A444  38 84 00 30 */	addi r4, r4, 0x30
/* 8014D368 0014A448  4B FF 94 35 */	bl "play_sound__31@unnamed@zNPCTypeKingJelly_cpp@FiPC5xVec3"
/* 8014D36C 0014A44C  FC 20 F8 90 */	fmr f1, f31
/* 8014D370 0014A450  7F A3 EB 78 */	mr r3, r29
/* 8014D374 0014A454  7F C4 F3 78 */	mr r4, r30
/* 8014D378 0014A458  4B F8 7D 9D */	bl Enter__14zNPCGoalCommonFfPv
/* 8014D37C 0014A45C  E3 E1 00 28 */	psq_l f31, 0x28(r1), 0, qr0
/* 8014D380 0014A460  80 01 00 34 */	lwz r0, 0x34(r1)
/* 8014D384 0014A464  CB E1 00 20 */	lfd f31, 0x20(r1)
/* 8014D388 0014A468  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 8014D38C 0014A46C  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 8014D390 0014A470  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 8014D394 0014A474  7C 08 03 A6 */	mtlr r0
/* 8014D398 0014A478  38 21 00 30 */	addi r1, r1, 0x30
/* 8014D39C 0014A47C  4E 80 00 20 */	blr
.endfn Enter__14zNPCGoalKJIdleFfPv

# zNPCGoalKJIdle::Exit(float, void*)
.fn Exit__14zNPCGoalKJIdleFfPv, global
/* 8014D3A0 0014A480  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 8014D3A4 0014A484  7C 08 02 A6 */	mflr r0
/* 8014D3A8 0014A488  90 01 00 24 */	stw r0, 0x24(r1)
/* 8014D3AC 0014A48C  DB E1 00 18 */	stfd f31, 0x18(r1)
/* 8014D3B0 0014A490  FF E0 08 90 */	fmr f31, f1
/* 8014D3B4 0014A494  93 E1 00 14 */	stw r31, 0x14(r1)
/* 8014D3B8 0014A498  93 C1 00 10 */	stw r30, 0x10(r1)
/* 8014D3BC 0014A49C  7C 9E 23 78 */	mr r30, r4
/* 8014D3C0 0014A4A0  93 A1 00 0C */	stw r29, 0xc(r1)
/* 8014D3C4 0014A4A4  7C 7D 1B 78 */	mr r29, r3
/* 8014D3C8 0014A4A8  80 A3 00 18 */	lwz r5, 0x18(r3)
/* 8014D3CC 0014A4AC  38 60 00 06 */	li r3, 0x6
/* 8014D3D0 0014A4B0  83 E5 00 00 */	lwz r31, 0x0(r5)
/* 8014D3D4 0014A4B4  4B FF 94 51 */	bl "kill_sound__31@unnamed@zNPCTypeKingJelly_cpp@Fi"
/* 8014D3D8 0014A4B8  38 00 00 01 */	li r0, 0x1
/* 8014D3DC 0014A4BC  FC 20 F8 90 */	fmr f1, f31
/* 8014D3E0 0014A4C0  98 1F 02 B8 */	stb r0, 0x2b8(r31)
/* 8014D3E4 0014A4C4  7F A3 EB 78 */	mr r3, r29
/* 8014D3E8 0014A4C8  7F C4 F3 78 */	mr r4, r30
/* 8014D3EC 0014A4CC  4B F8 80 31 */	bl Exit__5xGoalFfPv
/* 8014D3F0 0014A4D0  80 01 00 24 */	lwz r0, 0x24(r1)
/* 8014D3F4 0014A4D4  CB E1 00 18 */	lfd f31, 0x18(r1)
/* 8014D3F8 0014A4D8  83 E1 00 14 */	lwz r31, 0x14(r1)
/* 8014D3FC 0014A4DC  83 C1 00 10 */	lwz r30, 0x10(r1)
/* 8014D400 0014A4E0  83 A1 00 0C */	lwz r29, 0xc(r1)
/* 8014D404 0014A4E4  7C 08 03 A6 */	mtlr r0
/* 8014D408 0014A4E8  38 21 00 20 */	addi r1, r1, 0x20
/* 8014D40C 0014A4EC  4E 80 00 20 */	blr
.endfn Exit__14zNPCGoalKJIdleFfPv

# zNPCGoalKJIdle::Process(en_trantype*, float, void*, xScene*)
.fn Process__14zNPCGoalKJIdleFP11en_trantypefPvP6xScene, global
/* 8014D410 0014A4F0  94 21 FF D0 */	stwu r1, -0x30(r1)
/* 8014D414 0014A4F4  7C 08 02 A6 */	mflr r0
/* 8014D418 0014A4F8  90 01 00 34 */	stw r0, 0x34(r1)
/* 8014D41C 0014A4FC  DB E1 00 20 */	stfd f31, 0x20(r1)
/* 8014D420 0014A500  F3 E1 00 28 */	psq_st f31, 0x28(r1), 0, qr0
/* 8014D424 0014A504  BF 61 00 0C */	stmw r27, 0xc(r1)
/* 8014D428 0014A508  7C 7B 1B 78 */	mr r27, r3
/* 8014D42C 0014A50C  FF E0 08 90 */	fmr f31, f1
/* 8014D430 0014A510  80 E3 00 18 */	lwz r7, 0x18(r3)
/* 8014D434 0014A514  7C 9C 23 78 */	mr r28, r4
/* 8014D438 0014A518  7C BD 2B 78 */	mr r29, r5
/* 8014D43C 0014A51C  7C DE 33 78 */	mr r30, r6
/* 8014D440 0014A520  83 E7 00 00 */	lwz r31, 0x0(r7)
/* 8014D444 0014A524  48 00 00 C9 */	bl rotate__14zNPCGoalKJIdleFf
/* 8014D448 0014A528  FC 20 F8 90 */	fmr f1, f31
/* 8014D44C 0014A52C  7F 63 DB 78 */	mr r3, r27
/* 8014D450 0014A530  48 00 01 BD */	bl move__14zNPCGoalKJIdleFf
/* 8014D454 0014A534  C0 1B 00 4C */	lfs f0, 0x4c(r27)
/* 8014D458 0014A538  EC 00 F8 28 */	fsubs f0, f0, f31
/* 8014D45C 0014A53C  D0 1B 00 4C */	stfs f0, 0x4c(r27)
/* 8014D460 0014A540  C0 3B 00 4C */	lfs f1, 0x4c(r27)
/* 8014D464 0014A544  C0 02 A6 34 */	lfs f0, "@1869"@sda21(r2)
/* 8014D468 0014A548  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8014D46C 0014A54C  4C 40 13 82 */	cror eq, lt, eq
/* 8014D470 0014A550  40 82 00 68 */	bne .L_8014D4D8
/* 8014D474 0014A554  7F E3 FB 78 */	mr r3, r31
/* 8014D478 0014A558  4B FA 5B 25 */	bl AnimCurState__10zNPCCommonFv
/* 8014D47C 0014A55C  3C 80 80 2A */	lis r4, g_hash_subbanim@ha
/* 8014D480 0014A560  80 A3 00 08 */	lwz r5, 0x8(r3)
/* 8014D484 0014A564  38 64 90 E0 */	addi r3, r4, g_hash_subbanim@l
/* 8014D488 0014A568  80 03 00 04 */	lwz r0, 0x4(r3)
/* 8014D48C 0014A56C  7C 05 00 40 */	cmplw r5, r0
/* 8014D490 0014A570  40 82 00 18 */	bne .L_8014D4A8
/* 8014D494 0014A574  7F E3 FB 78 */	mr r3, r31
/* 8014D498 0014A578  38 80 00 00 */	li r4, 0x0
/* 8014D49C 0014A57C  4B FA 5B DD */	bl AnimTimeRemain__10zNPCCommonFP10xAnimState
/* 8014D4A0 0014A580  FC 1F 08 40 */	fcmpo cr0, f31, f1
/* 8014D4A4 0014A584  40 81 00 34 */	ble .L_8014D4D8
.L_8014D4A8:
/* 8014D4A8 0014A588  38 00 00 01 */	li r0, 0x1
/* 8014D4AC 0014A58C  7F E3 FB 78 */	mr r3, r31
/* 8014D4B0 0014A590  90 1C 00 00 */	stw r0, 0x0(r28)
/* 8014D4B4 0014A594  4B FF D4 51 */	bl bored__13zNPCKingJellyCFv
/* 8014D4B8 0014A598  54 60 06 3F */	clrlwi. r0, r3, 24
/* 8014D4BC 0014A59C  41 82 00 10 */	beq .L_8014D4CC
/* 8014D4C0 0014A5A0  3C 60 4E 47 */	lis r3, 0x4e47
/* 8014D4C4 0014A5A4  38 63 4D 32 */	addi r3, r3, 0x4d32
/* 8014D4C8 0014A5A8  48 00 00 28 */	b .L_8014D4F0
.L_8014D4CC:
/* 8014D4CC 0014A5AC  3C 60 4E 47 */	lis r3, 0x4e47
/* 8014D4D0 0014A5B0  38 63 4D 35 */	addi r3, r3, 0x4d35
/* 8014D4D4 0014A5B4  48 00 00 1C */	b .L_8014D4F0
.L_8014D4D8:
/* 8014D4D8 0014A5B8  FC 20 F8 90 */	fmr f1, f31
/* 8014D4DC 0014A5BC  7F 63 DB 78 */	mr r3, r27
/* 8014D4E0 0014A5C0  7F 84 E3 78 */	mr r4, r28
/* 8014D4E4 0014A5C4  7F A5 EB 78 */	mr r5, r29
/* 8014D4E8 0014A5C8  7F C6 F3 78 */	mr r6, r30
/* 8014D4EC 0014A5CC  4B FC 16 5D */	bl Process__5xGoalFP11en_trantypefPvP6xScene
.L_8014D4F0:
/* 8014D4F0 0014A5D0  E3 E1 00 28 */	psq_l f31, 0x28(r1), 0, qr0
/* 8014D4F4 0014A5D4  CB E1 00 20 */	lfd f31, 0x20(r1)
/* 8014D4F8 0014A5D8  BB 61 00 0C */	lmw r27, 0xc(r1)
/* 8014D4FC 0014A5DC  80 01 00 34 */	lwz r0, 0x34(r1)
/* 8014D500 0014A5E0  7C 08 03 A6 */	mtlr r0
/* 8014D504 0014A5E4  38 21 00 30 */	addi r1, r1, 0x30
/* 8014D508 0014A5E8  4E 80 00 20 */	blr
.endfn Process__14zNPCGoalKJIdleFP11en_trantypefPvP6xScene

# zNPCGoalKJIdle::rotate(float)
.fn rotate__14zNPCGoalKJIdleFf, global
/* 8014D50C 0014A5EC  94 21 FF C0 */	stwu r1, -0x40(r1)
/* 8014D510 0014A5F0  7C 08 02 A6 */	mflr r0
/* 8014D514 0014A5F4  90 01 00 44 */	stw r0, 0x44(r1)
/* 8014D518 0014A5F8  DB E1 00 30 */	stfd f31, 0x30(r1)
/* 8014D51C 0014A5FC  F3 E1 00 38 */	psq_st f31, 0x38(r1), 0, qr0
/* 8014D520 0014A600  93 E1 00 2C */	stw r31, 0x2c(r1)
/* 8014D524 0014A604  80 A3 00 18 */	lwz r5, 0x18(r3)
/* 8014D528 0014A608  3C 60 80 3C */	lis r3, globals@ha
/* 8014D52C 0014A60C  38 83 05 58 */	addi r4, r3, globals@l
/* 8014D530 0014A610  3C 60 80 27 */	lis r3, "@3473"@ha
/* 8014D534 0014A614  83 E5 00 00 */	lwz r31, 0x0(r5)
/* 8014D538 0014A618  38 C3 D8 98 */	addi r6, r3, "@3473"@l
/* 8014D53C 0014A61C  80 84 07 04 */	lwz r4, 0x704(r4)
/* 8014D540 0014A620  FF E0 08 90 */	fmr f31, f1
/* 8014D544 0014A624  80 BF 00 24 */	lwz r5, 0x24(r31)
/* 8014D548 0014A628  38 61 00 14 */	addi r3, r1, 0x14
/* 8014D54C 0014A62C  80 E4 00 4C */	lwz r7, 0x4c(r4)
/* 8014D550 0014A630  81 05 00 4C */	lwz r8, 0x4c(r5)
/* 8014D554 0014A634  80 A6 00 00 */	lwz r5, 0x0(r6)
/* 8014D558 0014A638  80 86 00 04 */	lwz r4, 0x4(r6)
/* 8014D55C 0014A63C  80 06 00 08 */	lwz r0, 0x8(r6)
/* 8014D560 0014A640  90 A1 00 14 */	stw r5, 0x14(r1)
/* 8014D564 0014A644  90 81 00 18 */	stw r4, 0x18(r1)
/* 8014D568 0014A648  90 01 00 1C */	stw r0, 0x1c(r1)
/* 8014D56C 0014A64C  C0 27 00 30 */	lfs f1, 0x30(r7)
/* 8014D570 0014A650  C0 08 00 30 */	lfs f0, 0x30(r8)
/* 8014D574 0014A654  EC 01 00 28 */	fsubs f0, f1, f0
/* 8014D578 0014A658  D0 01 00 14 */	stfs f0, 0x14(r1)
/* 8014D57C 0014A65C  C0 27 00 38 */	lfs f1, 0x38(r7)
/* 8014D580 0014A660  C0 08 00 38 */	lfs f0, 0x38(r8)
/* 8014D584 0014A664  EC 01 00 28 */	fsubs f0, f1, f0
/* 8014D588 0014A668  D0 01 00 1C */	stfs f0, 0x1c(r1)
/* 8014D58C 0014A66C  4B EB DB 71 */	bl length2__5xVec3CFv
/* 8014D590 0014A670  C0 02 A7 48 */	lfs f0, "@2743"@sda21(r2)
/* 8014D594 0014A674  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8014D598 0014A678  4C 41 13 82 */	cror eq, gt, eq
/* 8014D59C 0014A67C  40 82 00 14 */	bne .L_8014D5B0
/* 8014D5A0 0014A680  C0 02 A7 4C */	lfs f0, "@2744"@sda21(r2)
/* 8014D5A4 0014A684  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8014D5A8 0014A688  4C 40 13 82 */	cror eq, lt, eq
/* 8014D5AC 0014A68C  41 82 00 44 */	beq .L_8014D5F0
.L_8014D5B0:
/* 8014D5B0 0014A690  4B EB D2 4D */	bl xsqrt__Ff
/* 8014D5B4 0014A694  80 A1 00 14 */	lwz r5, 0x14(r1)
/* 8014D5B8 0014A698  38 61 00 08 */	addi r3, r1, 0x8
/* 8014D5BC 0014A69C  80 81 00 18 */	lwz r4, 0x18(r1)
/* 8014D5C0 0014A6A0  80 01 00 1C */	lwz r0, 0x1c(r1)
/* 8014D5C4 0014A6A4  90 A1 00 08 */	stw r5, 0x8(r1)
/* 8014D5C8 0014A6A8  90 81 00 0C */	stw r4, 0xc(r1)
/* 8014D5CC 0014A6AC  90 01 00 10 */	stw r0, 0x10(r1)
/* 8014D5D0 0014A6B0  C0 02 A6 30 */	lfs f0, "@1868"@sda21(r2)
/* 8014D5D4 0014A6B4  EC 20 08 24 */	fdivs f1, f0, f1
/* 8014D5D8 0014A6B8  4B EB DB A9 */	bl __amu__5xVec3Ff
/* 8014D5DC 0014A6BC  FC 20 F8 90 */	fmr f1, f31
/* 8014D5E0 0014A6C0  C0 42 A7 0C */	lfs f2, "@2438"@sda21(r2)
/* 8014D5E4 0014A6C4  7F E3 FB 78 */	mr r3, r31
/* 8014D5E8 0014A6C8  38 81 00 08 */	addi r4, r1, 0x8
/* 8014D5EC 0014A6CC  4B FA 3C 4D */	bl TurnToFace__10zNPCCommonFfPC5xVec3f
.L_8014D5F0:
/* 8014D5F0 0014A6D0  E3 E1 00 38 */	psq_l f31, 0x38(r1), 0, qr0
/* 8014D5F4 0014A6D4  80 01 00 44 */	lwz r0, 0x44(r1)
/* 8014D5F8 0014A6D8  CB E1 00 30 */	lfd f31, 0x30(r1)
/* 8014D5FC 0014A6DC  83 E1 00 2C */	lwz r31, 0x2c(r1)
/* 8014D600 0014A6E0  7C 08 03 A6 */	mtlr r0
/* 8014D604 0014A6E4  38 21 00 40 */	addi r1, r1, 0x40
/* 8014D608 0014A6E8  4E 80 00 20 */	blr
.endfn rotate__14zNPCGoalKJIdleFf

# zNPCGoalKJIdle::move(float)
.fn move__14zNPCGoalKJIdleFf, global
/* 8014D60C 0014A6EC  94 21 FE D0 */	stwu r1, -0x130(r1)
/* 8014D610 0014A6F0  7C 08 02 A6 */	mflr r0
/* 8014D614 0014A6F4  90 01 01 34 */	stw r0, 0x134(r1)
/* 8014D618 0014A6F8  DB E1 01 20 */	stfd f31, 0x120(r1)
/* 8014D61C 0014A6FC  F3 E1 01 28 */	psq_st f31, 0x128(r1), 0, qr0
/* 8014D620 0014A700  DB C1 01 10 */	stfd f30, 0x110(r1)
/* 8014D624 0014A704  F3 C1 01 18 */	psq_st f30, 0x118(r1), 0, qr0
/* 8014D628 0014A708  DB A1 01 00 */	stfd f29, 0x100(r1)
/* 8014D62C 0014A70C  F3 A1 01 08 */	psq_st f29, 0x108(r1), 0, qr0
/* 8014D630 0014A710  93 E1 00 FC */	stw r31, 0xfc(r1)
/* 8014D634 0014A714  93 C1 00 F8 */	stw r30, 0xf8(r1)
/* 8014D638 0014A718  93 A1 00 F4 */	stw r29, 0xf4(r1)
/* 8014D63C 0014A71C  80 A3 00 18 */	lwz r5, 0x18(r3)
/* 8014D640 0014A720  3C 60 80 3C */	lis r3, globals@ha
/* 8014D644 0014A724  38 83 05 58 */	addi r4, r3, globals@l
/* 8014D648 0014A728  3C 60 80 27 */	lis r3, "@3482"@ha
/* 8014D64C 0014A72C  83 E5 00 00 */	lwz r31, 0x0(r5)
/* 8014D650 0014A730  38 C3 D8 A4 */	addi r6, r3, "@3482"@l
/* 8014D654 0014A734  80 A4 07 04 */	lwz r5, 0x704(r4)
/* 8014D658 0014A738  FF A0 08 90 */	fmr f29, f1
/* 8014D65C 0014A73C  80 FF 00 24 */	lwz r7, 0x24(r31)
/* 8014D660 0014A740  38 61 00 E0 */	addi r3, r1, 0xe0
/* 8014D664 0014A744  80 9F 00 48 */	lwz r4, 0x48(r31)
/* 8014D668 0014A748  83 C7 00 4C */	lwz r30, 0x4c(r7)
/* 8014D66C 0014A74C  80 E5 00 4C */	lwz r7, 0x4c(r5)
/* 8014D670 0014A750  3B A4 00 D4 */	addi r29, r4, 0xd4
/* 8014D674 0014A754  80 A6 00 00 */	lwz r5, 0x0(r6)
/* 8014D678 0014A758  80 86 00 04 */	lwz r4, 0x4(r6)
/* 8014D67C 0014A75C  80 06 00 08 */	lwz r0, 0x8(r6)
/* 8014D680 0014A760  90 A1 00 E0 */	stw r5, 0xe0(r1)
/* 8014D684 0014A764  90 81 00 E4 */	stw r4, 0xe4(r1)
/* 8014D688 0014A768  90 01 00 E8 */	stw r0, 0xe8(r1)
/* 8014D68C 0014A76C  C0 27 00 30 */	lfs f1, 0x30(r7)
/* 8014D690 0014A770  C0 1E 00 30 */	lfs f0, 0x30(r30)
/* 8014D694 0014A774  EC 01 00 28 */	fsubs f0, f1, f0
/* 8014D698 0014A778  D0 01 00 E0 */	stfs f0, 0xe0(r1)
/* 8014D69C 0014A77C  C0 27 00 38 */	lfs f1, 0x38(r7)
/* 8014D6A0 0014A780  C0 1E 00 38 */	lfs f0, 0x38(r30)
/* 8014D6A4 0014A784  EC 01 00 28 */	fsubs f0, f1, f0
/* 8014D6A8 0014A788  D0 01 00 E8 */	stfs f0, 0xe8(r1)
/* 8014D6AC 0014A78C  4B EB DA 51 */	bl length2__5xVec3CFv
/* 8014D6B0 0014A790  C0 02 A7 48 */	lfs f0, "@2743"@sda21(r2)
/* 8014D6B4 0014A794  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8014D6B8 0014A798  4C 41 13 82 */	cror eq, gt, eq
/* 8014D6BC 0014A79C  40 82 00 3C */	bne .L_8014D6F8
/* 8014D6C0 0014A7A0  C0 02 A7 4C */	lfs f0, "@2744"@sda21(r2)
/* 8014D6C4 0014A7A4  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8014D6C8 0014A7A8  4C 40 13 82 */	cror eq, lt, eq
/* 8014D6CC 0014A7AC  40 82 00 2C */	bne .L_8014D6F8
/* 8014D6D0 0014A7B0  C3 E2 A6 34 */	lfs f31, "@1869"@sda21(r2)
/* 8014D6D4 0014A7B4  38 61 00 8C */	addi r3, r1, 0x8c
/* 8014D6D8 0014A7B8  C0 22 A6 30 */	lfs f1, "@1868"@sda21(r2)
/* 8014D6DC 0014A7BC  FC 40 F8 90 */	fmr f2, f31
/* 8014D6E0 0014A7C0  FC 60 F8 90 */	fmr f3, f31
/* 8014D6E4 0014A7C4  4B F1 28 A5 */	bl create__5xVec3Ffff
/* 8014D6E8 0014A7C8  38 61 00 D4 */	addi r3, r1, 0xd4
/* 8014D6EC 0014A7CC  38 81 00 8C */	addi r4, r1, 0x8c
/* 8014D6F0 0014A7D0  4B EB DB 75 */	bl __as__5xVec3FRC5xVec3
/* 8014D6F4 0014A7D4  48 00 00 2C */	b .L_8014D720
.L_8014D6F8:
/* 8014D6F8 0014A7D8  4B EB D1 05 */	bl xsqrt__Ff
/* 8014D6FC 0014A7DC  FF E0 08 90 */	fmr f31, f1
/* 8014D700 0014A7E0  C0 02 A6 30 */	lfs f0, "@1868"@sda21(r2)
/* 8014D704 0014A7E4  38 61 00 80 */	addi r3, r1, 0x80
/* 8014D708 0014A7E8  38 81 00 E0 */	addi r4, r1, 0xe0
/* 8014D70C 0014A7EC  EC 20 F8 24 */	fdivs f1, f0, f31
/* 8014D710 0014A7F0  4B EB DA 11 */	bl __ml__5xVec3CFf
/* 8014D714 0014A7F4  38 61 00 D4 */	addi r3, r1, 0xd4
/* 8014D718 0014A7F8  38 81 00 80 */	addi r4, r1, 0x80
/* 8014D71C 0014A7FC  4B EB DB 49 */	bl __as__5xVec3FRC5xVec3
.L_8014D720:
/* 8014D720 0014A800  3C 60 80 33 */	lis r3, "tweak__31@unnamed@zNPCTypeKingJelly_cpp@"@ha
/* 8014D724 0014A804  80 9F 01 D8 */	lwz r4, 0x1d8(r31)
/* 8014D728 0014A808  38 63 85 38 */	addi r3, r3, "tweak__31@unnamed@zNPCTypeKingJelly_cpp@"@l
/* 8014D72C 0014A80C  C0 02 A6 34 */	lfs f0, "@1869"@sda21(r2)
/* 8014D730 0014A810  C0 23 00 10 */	lfs f1, 0x10(r3)
/* 8014D734 0014A814  C3 C4 00 18 */	lfs f30, 0x18(r4)
/* 8014D738 0014A818  EF FF 08 28 */	fsubs f31, f31, f1
/* 8014D73C 0014A81C  C0 24 00 1C */	lfs f1, 0x1c(r4)
/* 8014D740 0014A820  FC 1F 00 40 */	fcmpo cr0, f31, f0
/* 8014D744 0014A824  40 80 00 0C */	bge .L_8014D750
/* 8014D748 0014A828  FF E0 F8 50 */	fneg f31, f31
/* 8014D74C 0014A82C  FC 20 08 50 */	fneg f1, f1
.L_8014D750:
/* 8014D750 0014A830  38 61 00 74 */	addi r3, r1, 0x74
/* 8014D754 0014A834  38 81 00 D4 */	addi r4, r1, 0xd4
/* 8014D758 0014A838  4B EB D9 C9 */	bl __ml__5xVec3CFf
/* 8014D75C 0014A83C  80 C1 00 74 */	lwz r6, 0x74(r1)
/* 8014D760 0014A840  FC 20 E8 90 */	fmr f1, f29
/* 8014D764 0014A844  80 A1 00 78 */	lwz r5, 0x78(r1)
/* 8014D768 0014A848  38 61 00 5C */	addi r3, r1, 0x5c
/* 8014D76C 0014A84C  80 01 00 7C */	lwz r0, 0x7c(r1)
/* 8014D770 0014A850  38 81 00 C8 */	addi r4, r1, 0xc8
/* 8014D774 0014A854  90 C1 00 C8 */	stw r6, 0xc8(r1)
/* 8014D778 0014A858  90 A1 00 CC */	stw r5, 0xcc(r1)
/* 8014D77C 0014A85C  90 01 00 D0 */	stw r0, 0xd0(r1)
/* 8014D780 0014A860  4B EB D9 A1 */	bl __ml__5xVec3CFf
/* 8014D784 0014A864  7F A4 EB 78 */	mr r4, r29
/* 8014D788 0014A868  38 61 00 68 */	addi r3, r1, 0x68
/* 8014D78C 0014A86C  38 A1 00 5C */	addi r5, r1, 0x5c
/* 8014D790 0014A870  4B EC 7C 51 */	bl __pl__5xVec3CFRC5xVec3
/* 8014D794 0014A874  80 81 00 68 */	lwz r4, 0x68(r1)
/* 8014D798 0014A878  80 61 00 6C */	lwz r3, 0x6c(r1)
/* 8014D79C 0014A87C  80 01 00 70 */	lwz r0, 0x70(r1)
/* 8014D7A0 0014A880  90 81 00 BC */	stw r4, 0xbc(r1)
/* 8014D7A4 0014A884  90 61 00 C0 */	stw r3, 0xc0(r1)
/* 8014D7A8 0014A888  90 01 00 C4 */	stw r0, 0xc4(r1)
/* 8014D7AC 0014A88C  C0 02 A6 30 */	lfs f0, "@1868"@sda21(r2)
/* 8014D7B0 0014A890  FC 1F 00 40 */	fcmpo cr0, f31, f0
/* 8014D7B4 0014A894  40 80 00 14 */	bge .L_8014D7C8
/* 8014D7B8 0014A898  FC 20 F8 90 */	fmr f1, f31
/* 8014D7BC 0014A89C  38 61 00 50 */	addi r3, r1, 0x50
/* 8014D7C0 0014A8A0  38 81 00 BC */	addi r4, r1, 0xbc
/* 8014D7C4 0014A8A4  4B EB D9 5D */	bl __ml__5xVec3CFf
.L_8014D7C8:
/* 8014D7C8 0014A8A8  38 61 00 BC */	addi r3, r1, 0xbc
/* 8014D7CC 0014A8AC  4B EB D9 31 */	bl length2__5xVec3CFv
/* 8014D7D0 0014A8B0  EC 1E 07 B2 */	fmuls f0, f30, f30
/* 8014D7D4 0014A8B4  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8014D7D8 0014A8B8  40 81 00 28 */	ble .L_8014D800
/* 8014D7DC 0014A8BC  4B EB D0 21 */	bl xsqrt__Ff
/* 8014D7E0 0014A8C0  EC 3E 08 24 */	fdivs f1, f30, f1
/* 8014D7E4 0014A8C4  38 61 00 44 */	addi r3, r1, 0x44
/* 8014D7E8 0014A8C8  38 81 00 BC */	addi r4, r1, 0xbc
/* 8014D7EC 0014A8CC  4B EB D9 35 */	bl __ml__5xVec3CFf
/* 8014D7F0 0014A8D0  7F A3 EB 78 */	mr r3, r29
/* 8014D7F4 0014A8D4  38 81 00 44 */	addi r4, r1, 0x44
/* 8014D7F8 0014A8D8  4B EB DA 6D */	bl __as__5xVec3FRC5xVec3
/* 8014D7FC 0014A8DC  48 00 00 10 */	b .L_8014D80C
.L_8014D800:
/* 8014D800 0014A8E0  7F A3 EB 78 */	mr r3, r29
/* 8014D804 0014A8E4  38 81 00 BC */	addi r4, r1, 0xbc
/* 8014D808 0014A8E8  4B EB DA 5D */	bl __as__5xVec3FRC5xVec3
.L_8014D80C:
/* 8014D80C 0014A8EC  80 9F 00 10 */	lwz r4, 0x10(r31)
/* 8014D810 0014A8F0  38 61 00 38 */	addi r3, r1, 0x38
/* 8014D814 0014A8F4  38 BE 00 30 */	addi r5, r30, 0x30
/* 8014D818 0014A8F8  38 84 00 20 */	addi r4, r4, 0x20
/* 8014D81C 0014A8FC  4B EB D9 B1 */	bl __mi__5xVec3CFRC5xVec3
/* 8014D820 0014A900  80 A1 00 38 */	lwz r5, 0x38(r1)
/* 8014D824 0014A904  38 61 00 B0 */	addi r3, r1, 0xb0
/* 8014D828 0014A908  80 81 00 3C */	lwz r4, 0x3c(r1)
/* 8014D82C 0014A90C  80 01 00 40 */	lwz r0, 0x40(r1)
/* 8014D830 0014A910  90 A1 00 B0 */	stw r5, 0xb0(r1)
/* 8014D834 0014A914  90 81 00 B4 */	stw r4, 0xb4(r1)
/* 8014D838 0014A918  90 01 00 B8 */	stw r0, 0xb8(r1)
/* 8014D83C 0014A91C  4B EB D8 C1 */	bl length2__5xVec3CFv
/* 8014D840 0014A920  3C 60 80 33 */	lis r3, "tweak__31@unnamed@zNPCTypeKingJelly_cpp@"@ha
/* 8014D844 0014A924  C0 02 A7 60 */	lfs f0, "@3519"@sda21(r2)
/* 8014D848 0014A928  38 63 85 38 */	addi r3, r3, "tweak__31@unnamed@zNPCTypeKingJelly_cpp@"@l
/* 8014D84C 0014A92C  C3 C3 00 14 */	lfs f30, 0x14(r3)
/* 8014D850 0014A930  EF E0 07 B2 */	fmuls f31, f0, f30
/* 8014D854 0014A934  EC 1E 07 B2 */	fmuls f0, f30, f30
/* 8014D858 0014A938  EC 5F 07 F2 */	fmuls f2, f31, f31
/* 8014D85C 0014A93C  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8014D860 0014A940  40 81 00 68 */	ble .L_8014D8C8
/* 8014D864 0014A944  4B EB CF 99 */	bl xsqrt__Ff
/* 8014D868 0014A948  C0 02 A6 30 */	lfs f0, "@1868"@sda21(r2)
/* 8014D86C 0014A94C  38 61 00 2C */	addi r3, r1, 0x2c
/* 8014D870 0014A950  38 81 00 B0 */	addi r4, r1, 0xb0
/* 8014D874 0014A954  EC 20 08 24 */	fdivs f1, f0, f1
/* 8014D878 0014A958  4B EB D8 A9 */	bl __ml__5xVec3CFf
/* 8014D87C 0014A95C  80 C1 00 2C */	lwz r6, 0x2c(r1)
/* 8014D880 0014A960  7F A3 EB 78 */	mr r3, r29
/* 8014D884 0014A964  80 A1 00 30 */	lwz r5, 0x30(r1)
/* 8014D888 0014A968  38 81 00 A4 */	addi r4, r1, 0xa4
/* 8014D88C 0014A96C  80 01 00 34 */	lwz r0, 0x34(r1)
/* 8014D890 0014A970  90 C1 00 A4 */	stw r6, 0xa4(r1)
/* 8014D894 0014A974  90 A1 00 A8 */	stw r5, 0xa8(r1)
/* 8014D898 0014A978  90 01 00 AC */	stw r0, 0xac(r1)
/* 8014D89C 0014A97C  4B EC 7C 71 */	bl dot__5xVec3CFRC5xVec3
/* 8014D8A0 0014A980  C0 02 A6 34 */	lfs f0, "@1869"@sda21(r2)
/* 8014D8A4 0014A984  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8014D8A8 0014A988  40 80 00 9C */	bge .L_8014D944
/* 8014D8AC 0014A98C  38 61 00 20 */	addi r3, r1, 0x20
/* 8014D8B0 0014A990  38 81 00 A4 */	addi r4, r1, 0xa4
/* 8014D8B4 0014A994  4B EB D8 6D */	bl __ml__5xVec3CFf
/* 8014D8B8 0014A998  7F A3 EB 78 */	mr r3, r29
/* 8014D8BC 0014A99C  38 81 00 20 */	addi r4, r1, 0x20
/* 8014D8C0 0014A9A0  4B EB D9 71 */	bl __ami__5xVec3FRC5xVec3
/* 8014D8C4 0014A9A4  48 00 00 80 */	b .L_8014D944
.L_8014D8C8:
/* 8014D8C8 0014A9A8  FC 01 10 40 */	fcmpo cr0, f1, f2
/* 8014D8CC 0014A9AC  40 81 00 78 */	ble .L_8014D944
/* 8014D8D0 0014A9B0  4B EB CF 2D */	bl xsqrt__Ff
/* 8014D8D4 0014A9B4  C0 42 A6 74 */	lfs f2, "@2106"@sda21(r2)
/* 8014D8D8 0014A9B8  EC 61 F8 28 */	fsubs f3, f1, f31
/* 8014D8DC 0014A9BC  C0 02 A6 30 */	lfs f0, "@1868"@sda21(r2)
/* 8014D8E0 0014A9C0  38 61 00 14 */	addi r3, r1, 0x14
/* 8014D8E4 0014A9C4  EC 42 07 B2 */	fmuls f2, f2, f30
/* 8014D8E8 0014A9C8  38 81 00 B0 */	addi r4, r1, 0xb0
/* 8014D8EC 0014A9CC  EC 20 08 24 */	fdivs f1, f0, f1
/* 8014D8F0 0014A9D0  EF C3 10 24 */	fdivs f30, f3, f2
/* 8014D8F4 0014A9D4  4B EB D8 2D */	bl __ml__5xVec3CFf
/* 8014D8F8 0014A9D8  80 C1 00 14 */	lwz r6, 0x14(r1)
/* 8014D8FC 0014A9DC  7F A3 EB 78 */	mr r3, r29
/* 8014D900 0014A9E0  80 A1 00 18 */	lwz r5, 0x18(r1)
/* 8014D904 0014A9E4  38 81 00 98 */	addi r4, r1, 0x98
/* 8014D908 0014A9E8  80 01 00 1C */	lwz r0, 0x1c(r1)
/* 8014D90C 0014A9EC  90 C1 00 98 */	stw r6, 0x98(r1)
/* 8014D910 0014A9F0  90 A1 00 9C */	stw r5, 0x9c(r1)
/* 8014D914 0014A9F4  90 01 00 A0 */	stw r0, 0xa0(r1)
/* 8014D918 0014A9F8  4B EC 7B F5 */	bl dot__5xVec3CFRC5xVec3
/* 8014D91C 0014A9FC  C0 02 A6 34 */	lfs f0, "@1869"@sda21(r2)
/* 8014D920 0014AA00  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8014D924 0014AA04  40 80 00 20 */	bge .L_8014D944
/* 8014D928 0014AA08  EC 21 07 B2 */	fmuls f1, f1, f30
/* 8014D92C 0014AA0C  38 61 00 08 */	addi r3, r1, 0x8
/* 8014D930 0014AA10  38 81 00 98 */	addi r4, r1, 0x98
/* 8014D934 0014AA14  4B EB D7 ED */	bl __ml__5xVec3CFf
/* 8014D938 0014AA18  7F A3 EB 78 */	mr r3, r29
/* 8014D93C 0014AA1C  38 81 00 08 */	addi r4, r1, 0x8
/* 8014D940 0014AA20  4B EB D8 F1 */	bl __ami__5xVec3FRC5xVec3
.L_8014D944:
/* 8014D944 0014AA24  E3 E1 01 28 */	psq_l f31, 0x128(r1), 0, qr0
/* 8014D948 0014AA28  CB E1 01 20 */	lfd f31, 0x120(r1)
/* 8014D94C 0014AA2C  E3 C1 01 18 */	psq_l f30, 0x118(r1), 0, qr0
/* 8014D950 0014AA30  CB C1 01 10 */	lfd f30, 0x110(r1)
/* 8014D954 0014AA34  E3 A1 01 08 */	psq_l f29, 0x108(r1), 0, qr0
/* 8014D958 0014AA38  CB A1 01 00 */	lfd f29, 0x100(r1)
/* 8014D95C 0014AA3C  83 E1 00 FC */	lwz r31, 0xfc(r1)
/* 8014D960 0014AA40  83 C1 00 F8 */	lwz r30, 0xf8(r1)
/* 8014D964 0014AA44  80 01 01 34 */	lwz r0, 0x134(r1)
/* 8014D968 0014AA48  83 A1 00 F4 */	lwz r29, 0xf4(r1)
/* 8014D96C 0014AA4C  7C 08 03 A6 */	mtlr r0
/* 8014D970 0014AA50  38 21 01 30 */	addi r1, r1, 0x130
/* 8014D974 0014AA54  4E 80 00 20 */	blr
.endfn move__14zNPCGoalKJIdleFf

# zNPCGoalKJBored::Enter(float, void*)
.fn Enter__15zNPCGoalKJBoredFfPv, global
/* 8014D978 0014AA58  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 8014D97C 0014AA5C  7C 08 02 A6 */	mflr r0
/* 8014D980 0014AA60  90 01 00 24 */	stw r0, 0x24(r1)
/* 8014D984 0014AA64  DB E1 00 18 */	stfd f31, 0x18(r1)
/* 8014D988 0014AA68  FF E0 08 90 */	fmr f31, f1
/* 8014D98C 0014AA6C  93 E1 00 14 */	stw r31, 0x14(r1)
/* 8014D990 0014AA70  93 C1 00 10 */	stw r30, 0x10(r1)
/* 8014D994 0014AA74  7C 9E 23 78 */	mr r30, r4
/* 8014D998 0014AA78  93 A1 00 0C */	stw r29, 0xc(r1)
/* 8014D99C 0014AA7C  7C 7D 1B 78 */	mr r29, r3
/* 8014D9A0 0014AA80  80 A3 00 18 */	lwz r5, 0x18(r3)
/* 8014D9A4 0014AA84  38 60 00 03 */	li r3, 0x3
/* 8014D9A8 0014AA88  83 E5 00 00 */	lwz r31, 0x0(r5)
/* 8014D9AC 0014AA8C  80 9F 00 24 */	lwz r4, 0x24(r31)
/* 8014D9B0 0014AA90  80 84 00 4C */	lwz r4, 0x4c(r4)
/* 8014D9B4 0014AA94  38 84 00 30 */	addi r4, r4, 0x30
/* 8014D9B8 0014AA98  4B FF 8D E5 */	bl "play_sound__31@unnamed@zNPCTypeKingJelly_cpp@FiPC5xVec3"
/* 8014D9BC 0014AA9C  80 9F 00 24 */	lwz r4, 0x24(r31)
/* 8014D9C0 0014AAA0  38 60 00 03 */	li r3, 0x3
/* 8014D9C4 0014AAA4  80 84 00 4C */	lwz r4, 0x4c(r4)
/* 8014D9C8 0014AAA8  38 84 00 30 */	addi r4, r4, 0x30
/* 8014D9CC 0014AAAC  4B FF 8D D1 */	bl "play_sound__31@unnamed@zNPCTypeKingJelly_cpp@FiPC5xVec3"
/* 8014D9D0 0014AAB0  FC 20 F8 90 */	fmr f1, f31
/* 8014D9D4 0014AAB4  7F A3 EB 78 */	mr r3, r29
/* 8014D9D8 0014AAB8  7F C4 F3 78 */	mr r4, r30
/* 8014D9DC 0014AABC  4B F8 77 39 */	bl Enter__14zNPCGoalCommonFfPv
/* 8014D9E0 0014AAC0  80 01 00 24 */	lwz r0, 0x24(r1)
/* 8014D9E4 0014AAC4  CB E1 00 18 */	lfd f31, 0x18(r1)
/* 8014D9E8 0014AAC8  83 E1 00 14 */	lwz r31, 0x14(r1)
/* 8014D9EC 0014AACC  83 C1 00 10 */	lwz r30, 0x10(r1)
/* 8014D9F0 0014AAD0  83 A1 00 0C */	lwz r29, 0xc(r1)
/* 8014D9F4 0014AAD4  7C 08 03 A6 */	mtlr r0
/* 8014D9F8 0014AAD8  38 21 00 20 */	addi r1, r1, 0x20
/* 8014D9FC 0014AADC  4E 80 00 20 */	blr
.endfn Enter__15zNPCGoalKJBoredFfPv

# zNPCGoalKJBored::Exit(float, void*)
.fn Exit__15zNPCGoalKJBoredFfPv, global
/* 8014DA00 0014AAE0  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8014DA04 0014AAE4  7C 08 02 A6 */	mflr r0
/* 8014DA08 0014AAE8  90 01 00 14 */	stw r0, 0x14(r1)
/* 8014DA0C 0014AAEC  4B F8 7A 11 */	bl Exit__5xGoalFfPv
/* 8014DA10 0014AAF0  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8014DA14 0014AAF4  7C 08 03 A6 */	mtlr r0
/* 8014DA18 0014AAF8  38 21 00 10 */	addi r1, r1, 0x10
/* 8014DA1C 0014AAFC  4E 80 00 20 */	blr
.endfn Exit__15zNPCGoalKJBoredFfPv

# zNPCGoalKJBored::Process(en_trantype*, float, void*, xScene*)
.fn Process__15zNPCGoalKJBoredFP11en_trantypefPvP6xScene, global
/* 8014DA20 0014AB00  94 21 FF D0 */	stwu r1, -0x30(r1)
/* 8014DA24 0014AB04  7C 08 02 A6 */	mflr r0
/* 8014DA28 0014AB08  90 01 00 34 */	stw r0, 0x34(r1)
/* 8014DA2C 0014AB0C  DB E1 00 28 */	stfd f31, 0x28(r1)
/* 8014DA30 0014AB10  FF E0 08 90 */	fmr f31, f1
/* 8014DA34 0014AB14  BF 61 00 14 */	stmw r27, 0x14(r1)
/* 8014DA38 0014AB18  7C 7B 1B 78 */	mr r27, r3
/* 8014DA3C 0014AB1C  7C 9C 23 78 */	mr r28, r4
/* 8014DA40 0014AB20  7C BD 2B 78 */	mr r29, r5
/* 8014DA44 0014AB24  7C DE 33 78 */	mr r30, r6
/* 8014DA48 0014AB28  80 63 00 18 */	lwz r3, 0x18(r3)
/* 8014DA4C 0014AB2C  83 E3 00 00 */	lwz r31, 0x0(r3)
/* 8014DA50 0014AB30  7F E3 FB 78 */	mr r3, r31
/* 8014DA54 0014AB34  4B FA 55 49 */	bl AnimCurState__10zNPCCommonFv
/* 8014DA58 0014AB38  80 02 A6 38 */	lwz r0, "bored_anims__31@unnamed@zNPCTypeKingJelly_cpp@"@sda21(r2)
/* 8014DA5C 0014AB3C  3C 80 80 2A */	lis r4, g_hash_subbanim@ha
/* 8014DA60 0014AB40  38 84 90 E0 */	addi r4, r4, g_hash_subbanim@l
/* 8014DA64 0014AB44  80 63 00 08 */	lwz r3, 0x8(r3)
/* 8014DA68 0014AB48  54 00 10 3A */	slwi r0, r0, 2
/* 8014DA6C 0014AB4C  38 A2 A6 38 */	addi r5, r2, "bored_anims__31@unnamed@zNPCTypeKingJelly_cpp@"@sda21
/* 8014DA70 0014AB50  7C 04 00 2E */	lwzx r0, r4, r0
/* 8014DA74 0014AB54  38 C0 00 00 */	li r6, 0x0
/* 8014DA78 0014AB58  7C 03 00 40 */	cmplw r3, r0
/* 8014DA7C 0014AB5C  40 82 00 0C */	bne .L_8014DA88
/* 8014DA80 0014AB60  38 C0 00 01 */	li r6, 0x1
/* 8014DA84 0014AB64  48 00 00 1C */	b .L_8014DAA0
.L_8014DA88:
/* 8014DA88 0014AB68  80 05 00 04 */	lwz r0, 0x4(r5)
/* 8014DA8C 0014AB6C  54 00 10 3A */	slwi r0, r0, 2
/* 8014DA90 0014AB70  7C 04 00 2E */	lwzx r0, r4, r0
/* 8014DA94 0014AB74  7C 03 00 40 */	cmplw r3, r0
/* 8014DA98 0014AB78  40 82 00 08 */	bne .L_8014DAA0
/* 8014DA9C 0014AB7C  38 C0 00 01 */	li r6, 0x1
.L_8014DAA0:
/* 8014DAA0 0014AB80  54 C0 06 3F */	clrlwi. r0, r6, 24
/* 8014DAA4 0014AB84  41 82 00 18 */	beq .L_8014DABC
/* 8014DAA8 0014AB88  7F E3 FB 78 */	mr r3, r31
/* 8014DAAC 0014AB8C  38 80 00 00 */	li r4, 0x0
/* 8014DAB0 0014AB90  4B FA 55 C9 */	bl AnimTimeRemain__10zNPCCommonFP10xAnimState
/* 8014DAB4 0014AB94  FC 1F 08 40 */	fcmpo cr0, f31, f1
/* 8014DAB8 0014AB98  40 81 00 18 */	ble .L_8014DAD0
.L_8014DABC:
/* 8014DABC 0014AB9C  38 00 00 01 */	li r0, 0x1
/* 8014DAC0 0014ABA0  3C 60 4E 47 */	lis r3, 0x4e47
/* 8014DAC4 0014ABA4  90 1C 00 00 */	stw r0, 0x0(r28)
/* 8014DAC8 0014ABA8  38 63 4D 35 */	addi r3, r3, 0x4d35
/* 8014DACC 0014ABAC  48 00 00 1C */	b .L_8014DAE8
.L_8014DAD0:
/* 8014DAD0 0014ABB0  FC 20 F8 90 */	fmr f1, f31
/* 8014DAD4 0014ABB4  7F 63 DB 78 */	mr r3, r27
/* 8014DAD8 0014ABB8  7F 84 E3 78 */	mr r4, r28
/* 8014DADC 0014ABBC  7F A5 EB 78 */	mr r5, r29
/* 8014DAE0 0014ABC0  7F C6 F3 78 */	mr r6, r30
/* 8014DAE4 0014ABC4  4B FC 10 65 */	bl Process__5xGoalFP11en_trantypefPvP6xScene
.L_8014DAE8:
/* 8014DAE8 0014ABC8  CB E1 00 28 */	lfd f31, 0x28(r1)
/* 8014DAEC 0014ABCC  BB 61 00 14 */	lmw r27, 0x14(r1)
/* 8014DAF0 0014ABD0  80 01 00 34 */	lwz r0, 0x34(r1)
/* 8014DAF4 0014ABD4  7C 08 03 A6 */	mtlr r0
/* 8014DAF8 0014ABD8  38 21 00 30 */	addi r1, r1, 0x30
/* 8014DAFC 0014ABDC  4E 80 00 20 */	blr
.endfn Process__15zNPCGoalKJBoredFP11en_trantypefPvP6xScene

# zNPCGoalKJSpawnKids::Enter(float, void*)
.fn Enter__19zNPCGoalKJSpawnKidsFfPv, global
/* 8014DB00 0014ABE0  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 8014DB04 0014ABE4  7C 08 02 A6 */	mflr r0
/* 8014DB08 0014ABE8  90 01 00 24 */	stw r0, 0x24(r1)
/* 8014DB0C 0014ABEC  DB E1 00 10 */	stfd f31, 0x10(r1)
/* 8014DB10 0014ABF0  F3 E1 00 18 */	psq_st f31, 0x18(r1), 0, qr0
/* 8014DB14 0014ABF4  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8014DB18 0014ABF8  93 C1 00 08 */	stw r30, 0x8(r1)
/* 8014DB1C 0014ABFC  7C 7E 1B 78 */	mr r30, r3
/* 8014DB20 0014AC00  80 63 00 18 */	lwz r3, 0x18(r3)
/* 8014DB24 0014AC04  38 00 00 00 */	li r0, 0x0
/* 8014DB28 0014AC08  FF E0 08 90 */	fmr f31, f1
/* 8014DB2C 0014AC0C  80 63 00 00 */	lwz r3, 0x0(r3)
/* 8014DB30 0014AC10  7C 9F 23 78 */	mr r31, r4
/* 8014DB34 0014AC14  90 1E 00 50 */	stw r0, 0x50(r30)
/* 8014DB38 0014AC18  C0 02 A6 34 */	lfs f0, "@1869"@sda21(r2)
/* 8014DB3C 0014AC1C  D0 1E 00 4C */	stfs f0, 0x4c(r30)
/* 8014DB40 0014AC20  98 1E 00 55 */	stb r0, 0x55(r30)
/* 8014DB44 0014AC24  98 1E 00 54 */	stb r0, 0x54(r30)
/* 8014DB48 0014AC28  90 1E 00 5C */	stw r0, 0x5c(r30)
/* 8014DB4C 0014AC2C  80 83 02 BC */	lwz r4, 0x2bc(r3)
/* 8014DB50 0014AC30  4B FF D1 35 */	bl count_children__13zNPCKingJellyFi
/* 8014DB54 0014AC34  FC 20 F8 90 */	fmr f1, f31
/* 8014DB58 0014AC38  90 7E 00 58 */	stw r3, 0x58(r30)
/* 8014DB5C 0014AC3C  7F C3 F3 78 */	mr r3, r30
/* 8014DB60 0014AC40  7F E4 FB 78 */	mr r4, r31
/* 8014DB64 0014AC44  4B F8 75 B1 */	bl Enter__14zNPCGoalCommonFfPv
/* 8014DB68 0014AC48  E3 E1 00 18 */	psq_l f31, 0x18(r1), 0, qr0
/* 8014DB6C 0014AC4C  80 01 00 24 */	lwz r0, 0x24(r1)
/* 8014DB70 0014AC50  CB E1 00 10 */	lfd f31, 0x10(r1)
/* 8014DB74 0014AC54  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8014DB78 0014AC58  83 C1 00 08 */	lwz r30, 0x8(r1)
/* 8014DB7C 0014AC5C  7C 08 03 A6 */	mtlr r0
/* 8014DB80 0014AC60  38 21 00 20 */	addi r1, r1, 0x20
/* 8014DB84 0014AC64  4E 80 00 20 */	blr
.endfn Enter__19zNPCGoalKJSpawnKidsFfPv

# zNPCGoalKJSpawnKids::Exit(float, void*)
.fn Exit__19zNPCGoalKJSpawnKidsFfPv, global
/* 8014DB88 0014AC68  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 8014DB8C 0014AC6C  7C 08 02 A6 */	mflr r0
/* 8014DB90 0014AC70  90 01 00 24 */	stw r0, 0x24(r1)
/* 8014DB94 0014AC74  DB E1 00 18 */	stfd f31, 0x18(r1)
/* 8014DB98 0014AC78  FF E0 08 90 */	fmr f31, f1
/* 8014DB9C 0014AC7C  93 E1 00 14 */	stw r31, 0x14(r1)
/* 8014DBA0 0014AC80  93 C1 00 10 */	stw r30, 0x10(r1)
/* 8014DBA4 0014AC84  7C 9E 23 78 */	mr r30, r4
/* 8014DBA8 0014AC88  93 A1 00 0C */	stw r29, 0xc(r1)
/* 8014DBAC 0014AC8C  7C 7D 1B 78 */	mr r29, r3
/* 8014DBB0 0014AC90  80 63 00 5C */	lwz r3, 0x5c(r3)
/* 8014DBB4 0014AC94  80 1D 00 58 */	lwz r0, 0x58(r29)
/* 8014DBB8 0014AC98  80 9D 00 18 */	lwz r4, 0x18(r29)
/* 8014DBBC 0014AC9C  7C 03 00 00 */	cmpw r3, r0
/* 8014DBC0 0014ACA0  83 E4 00 00 */	lwz r31, 0x0(r4)
/* 8014DBC4 0014ACA4  40 80 00 24 */	bge .L_8014DBE8
/* 8014DBC8 0014ACA8  7F E3 FB 78 */	mr r3, r31
/* 8014DBCC 0014ACAC  4B FF EA 79 */	bl generate_spawn_particles__13zNPCKingJellyFv
/* 8014DBD0 0014ACB0  80 BD 00 5C */	lwz r5, 0x5c(r29)
/* 8014DBD4 0014ACB4  7F E3 FB 78 */	mr r3, r31
/* 8014DBD8 0014ACB8  80 1D 00 58 */	lwz r0, 0x58(r29)
/* 8014DBDC 0014ACBC  80 9F 02 BC */	lwz r4, 0x2bc(r31)
/* 8014DBE0 0014ACC0  7C A5 00 50 */	subf r5, r5, r0
/* 8014DBE4 0014ACC4  4B FF D0 D5 */	bl spawn_children__13zNPCKingJellyFii
.L_8014DBE8:
/* 8014DBE8 0014ACC8  FC 20 F8 90 */	fmr f1, f31
/* 8014DBEC 0014ACCC  7F A3 EB 78 */	mr r3, r29
/* 8014DBF0 0014ACD0  7F C4 F3 78 */	mr r4, r30
/* 8014DBF4 0014ACD4  4B F8 78 29 */	bl Exit__5xGoalFfPv
/* 8014DBF8 0014ACD8  80 01 00 24 */	lwz r0, 0x24(r1)
/* 8014DBFC 0014ACDC  CB E1 00 18 */	lfd f31, 0x18(r1)
/* 8014DC00 0014ACE0  83 E1 00 14 */	lwz r31, 0x14(r1)
/* 8014DC04 0014ACE4  83 C1 00 10 */	lwz r30, 0x10(r1)
/* 8014DC08 0014ACE8  83 A1 00 0C */	lwz r29, 0xc(r1)
/* 8014DC0C 0014ACEC  7C 08 03 A6 */	mtlr r0
/* 8014DC10 0014ACF0  38 21 00 20 */	addi r1, r1, 0x20
/* 8014DC14 0014ACF4  4E 80 00 20 */	blr
.endfn Exit__19zNPCGoalKJSpawnKidsFfPv

# zNPCGoalKJSpawnKids::Process(en_trantype*, float, void*, xScene*)
.fn Process__19zNPCGoalKJSpawnKidsFP11en_trantypefPvP6xScene, global
/* 8014DC18 0014ACF8  94 21 FF D0 */	stwu r1, -0x30(r1)
/* 8014DC1C 0014ACFC  7C 08 02 A6 */	mflr r0
/* 8014DC20 0014AD00  90 01 00 34 */	stw r0, 0x34(r1)
/* 8014DC24 0014AD04  DB E1 00 20 */	stfd f31, 0x20(r1)
/* 8014DC28 0014AD08  F3 E1 00 28 */	psq_st f31, 0x28(r1), 0, qr0
/* 8014DC2C 0014AD0C  BF 41 00 08 */	stmw r26, 0x8(r1)
/* 8014DC30 0014AD10  7C 7B 1B 78 */	mr r27, r3
/* 8014DC34 0014AD14  FF E0 08 90 */	fmr f31, f1
/* 8014DC38 0014AD18  C0 03 00 4C */	lfs f0, 0x4c(r3)
/* 8014DC3C 0014AD1C  7C 9C 23 78 */	mr r28, r4
/* 8014DC40 0014AD20  80 63 00 18 */	lwz r3, 0x18(r3)
/* 8014DC44 0014AD24  7C BD 2B 78 */	mr r29, r5
/* 8014DC48 0014AD28  EC 00 F8 2A */	fadds f0, f0, f31
/* 8014DC4C 0014AD2C  83 E3 00 00 */	lwz r31, 0x0(r3)
/* 8014DC50 0014AD30  7C DE 33 78 */	mr r30, r6
/* 8014DC54 0014AD34  D0 1B 00 4C */	stfs f0, 0x4c(r27)
/* 8014DC58 0014AD38  88 1B 00 54 */	lbz r0, 0x54(r27)
/* 8014DC5C 0014AD3C  28 00 00 00 */	cmplwi r0, 0x0
/* 8014DC60 0014AD40  40 82 00 94 */	bne .L_8014DCF4
/* 8014DC64 0014AD44  3C 60 80 33 */	lis r3, "tweak__31@unnamed@zNPCTypeKingJelly_cpp@"@ha
/* 8014DC68 0014AD48  C0 3B 00 4C */	lfs f1, 0x4c(r27)
/* 8014DC6C 0014AD4C  38 A3 85 38 */	addi r5, r3, "tweak__31@unnamed@zNPCTypeKingJelly_cpp@"@l
/* 8014DC70 0014AD50  C0 05 00 74 */	lfs f0, 0x74(r5)
/* 8014DC74 0014AD54  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8014DC78 0014AD58  4C 41 13 82 */	cror eq, gt, eq
/* 8014DC7C 0014AD5C  40 82 00 78 */	bne .L_8014DCF4
/* 8014DC80 0014AD60  80 7B 00 50 */	lwz r3, 0x50(r27)
/* 8014DC84 0014AD64  38 03 00 01 */	addi r0, r3, 0x1
/* 8014DC88 0014AD68  90 1B 00 50 */	stw r0, 0x50(r27)
/* 8014DC8C 0014AD6C  80 9B 00 50 */	lwz r4, 0x50(r27)
/* 8014DC90 0014AD70  80 1B 00 58 */	lwz r0, 0x58(r27)
/* 8014DC94 0014AD74  80 65 00 68 */	lwz r3, 0x68(r5)
/* 8014DC98 0014AD78  7C 84 01 D6 */	mullw r4, r4, r0
/* 8014DC9C 0014AD7C  80 1B 00 5C */	lwz r0, 0x5c(r27)
/* 8014DCA0 0014AD80  7F 44 1B D6 */	divw r26, r4, r3
/* 8014DCA4 0014AD84  7C 1A 00 00 */	cmpw r26, r0
/* 8014DCA8 0014AD88  40 81 00 44 */	ble .L_8014DCEC
/* 8014DCAC 0014AD8C  80 9F 00 24 */	lwz r4, 0x24(r31)
/* 8014DCB0 0014AD90  38 60 00 01 */	li r3, 0x1
/* 8014DCB4 0014AD94  80 84 00 4C */	lwz r4, 0x4c(r4)
/* 8014DCB8 0014AD98  38 84 00 30 */	addi r4, r4, 0x30
/* 8014DCBC 0014AD9C  4B FF 8A E1 */	bl "play_sound__31@unnamed@zNPCTypeKingJelly_cpp@FiPC5xVec3"
/* 8014DCC0 0014ADA0  80 9F 00 24 */	lwz r4, 0x24(r31)
/* 8014DCC4 0014ADA4  38 60 00 01 */	li r3, 0x1
/* 8014DCC8 0014ADA8  80 84 00 4C */	lwz r4, 0x4c(r4)
/* 8014DCCC 0014ADAC  38 84 00 30 */	addi r4, r4, 0x30
/* 8014DCD0 0014ADB0  4B FF 8A CD */	bl "play_sound__31@unnamed@zNPCTypeKingJelly_cpp@FiPC5xVec3"
/* 8014DCD4 0014ADB4  80 1B 00 5C */	lwz r0, 0x5c(r27)
/* 8014DCD8 0014ADB8  7F E3 FB 78 */	mr r3, r31
/* 8014DCDC 0014ADBC  80 9F 02 BC */	lwz r4, 0x2bc(r31)
/* 8014DCE0 0014ADC0  7C A0 D0 50 */	subf r5, r0, r26
/* 8014DCE4 0014ADC4  4B FF CF D5 */	bl spawn_children__13zNPCKingJellyFii
/* 8014DCE8 0014ADC8  93 5B 00 5C */	stw r26, 0x5c(r27)
.L_8014DCEC:
/* 8014DCEC 0014ADCC  38 00 00 01 */	li r0, 0x1
/* 8014DCF0 0014ADD0  98 1B 00 54 */	stb r0, 0x54(r27)
.L_8014DCF4:
/* 8014DCF4 0014ADD4  88 1B 00 55 */	lbz r0, 0x55(r27)
/* 8014DCF8 0014ADD8  28 00 00 00 */	cmplwi r0, 0x0
/* 8014DCFC 0014ADDC  40 82 00 30 */	bne .L_8014DD2C
/* 8014DD00 0014ADE0  3C 60 80 33 */	lis r3, "tweak__31@unnamed@zNPCTypeKingJelly_cpp@"@ha
/* 8014DD04 0014ADE4  C0 3B 00 4C */	lfs f1, 0x4c(r27)
/* 8014DD08 0014ADE8  38 63 85 38 */	addi r3, r3, "tweak__31@unnamed@zNPCTypeKingJelly_cpp@"@l
/* 8014DD0C 0014ADEC  C0 03 00 84 */	lfs f0, 0x84(r3)
/* 8014DD10 0014ADF0  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8014DD14 0014ADF4  4C 41 13 82 */	cror eq, gt, eq
/* 8014DD18 0014ADF8  40 82 00 14 */	bne .L_8014DD2C
/* 8014DD1C 0014ADFC  7F E3 FB 78 */	mr r3, r31
/* 8014DD20 0014AE00  4B FF E9 25 */	bl generate_spawn_particles__13zNPCKingJellyFv
/* 8014DD24 0014AE04  38 00 00 01 */	li r0, 0x1
/* 8014DD28 0014AE08  98 1B 00 55 */	stb r0, 0x55(r27)
.L_8014DD2C:
/* 8014DD2C 0014AE0C  88 1B 00 54 */	lbz r0, 0x54(r27)
/* 8014DD30 0014AE10  28 00 00 00 */	cmplwi r0, 0x0
/* 8014DD34 0014AE14  41 82 00 84 */	beq .L_8014DDB8
/* 8014DD38 0014AE18  88 1B 00 55 */	lbz r0, 0x55(r27)
/* 8014DD3C 0014AE1C  28 00 00 00 */	cmplwi r0, 0x0
/* 8014DD40 0014AE20  41 82 00 78 */	beq .L_8014DDB8
/* 8014DD44 0014AE24  7F E3 FB 78 */	mr r3, r31
/* 8014DD48 0014AE28  4B FA 52 55 */	bl AnimCurState__10zNPCCommonFv
/* 8014DD4C 0014AE2C  3C 80 80 2A */	lis r4, g_hash_subbanim@ha
/* 8014DD50 0014AE30  80 A3 00 08 */	lwz r5, 0x8(r3)
/* 8014DD54 0014AE34  38 64 90 E0 */	addi r3, r4, g_hash_subbanim@l
/* 8014DD58 0014AE38  80 03 00 3C */	lwz r0, 0x3c(r3)
/* 8014DD5C 0014AE3C  7C 05 00 40 */	cmplw r5, r0
/* 8014DD60 0014AE40  40 82 00 18 */	bne .L_8014DD78
/* 8014DD64 0014AE44  7F E3 FB 78 */	mr r3, r31
/* 8014DD68 0014AE48  38 80 00 00 */	li r4, 0x0
/* 8014DD6C 0014AE4C  4B FA 53 0D */	bl AnimTimeRemain__10zNPCCommonFP10xAnimState
/* 8014DD70 0014AE50  FC 1F 08 40 */	fcmpo cr0, f31, f1
/* 8014DD74 0014AE54  40 81 00 44 */	ble .L_8014DDB8
.L_8014DD78:
/* 8014DD78 0014AE58  3C 60 80 33 */	lis r3, "tweak__31@unnamed@zNPCTypeKingJelly_cpp@"@ha
/* 8014DD7C 0014AE5C  80 9B 00 50 */	lwz r4, 0x50(r27)
/* 8014DD80 0014AE60  38 63 85 38 */	addi r3, r3, "tweak__31@unnamed@zNPCTypeKingJelly_cpp@"@l
/* 8014DD84 0014AE64  80 03 00 68 */	lwz r0, 0x68(r3)
/* 8014DD88 0014AE68  7C 04 00 00 */	cmpw r4, r0
/* 8014DD8C 0014AE6C  41 80 00 18 */	blt .L_8014DDA4
/* 8014DD90 0014AE70  38 00 00 01 */	li r0, 0x1
/* 8014DD94 0014AE74  3C 60 4E 47 */	lis r3, 0x4e47
/* 8014DD98 0014AE78  90 1C 00 00 */	stw r0, 0x0(r28)
/* 8014DD9C 0014AE7C  38 63 4D 31 */	addi r3, r3, 0x4d31
/* 8014DDA0 0014AE80  48 00 00 30 */	b .L_8014DDD0
.L_8014DDA4:
/* 8014DDA4 0014AE84  C0 02 A6 34 */	lfs f0, "@1869"@sda21(r2)
/* 8014DDA8 0014AE88  38 00 00 00 */	li r0, 0x0
/* 8014DDAC 0014AE8C  D0 1B 00 4C */	stfs f0, 0x4c(r27)
/* 8014DDB0 0014AE90  98 1B 00 55 */	stb r0, 0x55(r27)
/* 8014DDB4 0014AE94  98 1B 00 54 */	stb r0, 0x54(r27)
.L_8014DDB8:
/* 8014DDB8 0014AE98  FC 20 F8 90 */	fmr f1, f31
/* 8014DDBC 0014AE9C  7F 63 DB 78 */	mr r3, r27
/* 8014DDC0 0014AEA0  7F 84 E3 78 */	mr r4, r28
/* 8014DDC4 0014AEA4  7F A5 EB 78 */	mr r5, r29
/* 8014DDC8 0014AEA8  7F C6 F3 78 */	mr r6, r30
/* 8014DDCC 0014AEAC  4B FC 0D 7D */	bl Process__5xGoalFP11en_trantypefPvP6xScene
.L_8014DDD0:
/* 8014DDD0 0014AEB0  E3 E1 00 28 */	psq_l f31, 0x28(r1), 0, qr0
/* 8014DDD4 0014AEB4  CB E1 00 20 */	lfd f31, 0x20(r1)
/* 8014DDD8 0014AEB8  BB 41 00 08 */	lmw r26, 0x8(r1)
/* 8014DDDC 0014AEBC  80 01 00 34 */	lwz r0, 0x34(r1)
/* 8014DDE0 0014AEC0  7C 08 03 A6 */	mtlr r0
/* 8014DDE4 0014AEC4  38 21 00 30 */	addi r1, r1, 0x30
/* 8014DDE8 0014AEC8  4E 80 00 20 */	blr
.endfn Process__19zNPCGoalKJSpawnKidsFP11en_trantypefPvP6xScene

# zNPCGoalKJTaunt::Enter(float, void*)
.fn Enter__15zNPCGoalKJTauntFfPv, global
/* 8014DDEC 0014AECC  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 8014DDF0 0014AED0  7C 08 02 A6 */	mflr r0
/* 8014DDF4 0014AED4  90 01 00 24 */	stw r0, 0x24(r1)
/* 8014DDF8 0014AED8  DB E1 00 18 */	stfd f31, 0x18(r1)
/* 8014DDFC 0014AEDC  FF E0 08 90 */	fmr f31, f1
/* 8014DE00 0014AEE0  93 E1 00 14 */	stw r31, 0x14(r1)
/* 8014DE04 0014AEE4  93 C1 00 10 */	stw r30, 0x10(r1)
/* 8014DE08 0014AEE8  7C 9E 23 78 */	mr r30, r4
/* 8014DE0C 0014AEEC  93 A1 00 0C */	stw r29, 0xc(r1)
/* 8014DE10 0014AEF0  7C 7D 1B 78 */	mr r29, r3
/* 8014DE14 0014AEF4  80 A3 00 18 */	lwz r5, 0x18(r3)
/* 8014DE18 0014AEF8  38 60 00 09 */	li r3, 0x9
/* 8014DE1C 0014AEFC  83 E5 00 00 */	lwz r31, 0x0(r5)
/* 8014DE20 0014AF00  80 9F 00 24 */	lwz r4, 0x24(r31)
/* 8014DE24 0014AF04  80 84 00 4C */	lwz r4, 0x4c(r4)
/* 8014DE28 0014AF08  38 84 00 30 */	addi r4, r4, 0x30
/* 8014DE2C 0014AF0C  4B FF 89 71 */	bl "play_sound__31@unnamed@zNPCTypeKingJelly_cpp@FiPC5xVec3"
/* 8014DE30 0014AF10  80 9F 00 24 */	lwz r4, 0x24(r31)
/* 8014DE34 0014AF14  38 60 00 09 */	li r3, 0x9
/* 8014DE38 0014AF18  80 84 00 4C */	lwz r4, 0x4c(r4)
/* 8014DE3C 0014AF1C  38 84 00 30 */	addi r4, r4, 0x30
/* 8014DE40 0014AF20  4B FF 89 5D */	bl "play_sound__31@unnamed@zNPCTypeKingJelly_cpp@FiPC5xVec3"
/* 8014DE44 0014AF24  FC 20 F8 90 */	fmr f1, f31
/* 8014DE48 0014AF28  7F A3 EB 78 */	mr r3, r29
/* 8014DE4C 0014AF2C  7F C4 F3 78 */	mr r4, r30
/* 8014DE50 0014AF30  4B F8 72 C5 */	bl Enter__14zNPCGoalCommonFfPv
/* 8014DE54 0014AF34  80 01 00 24 */	lwz r0, 0x24(r1)
/* 8014DE58 0014AF38  CB E1 00 18 */	lfd f31, 0x18(r1)
/* 8014DE5C 0014AF3C  83 E1 00 14 */	lwz r31, 0x14(r1)
/* 8014DE60 0014AF40  83 C1 00 10 */	lwz r30, 0x10(r1)
/* 8014DE64 0014AF44  83 A1 00 0C */	lwz r29, 0xc(r1)
/* 8014DE68 0014AF48  7C 08 03 A6 */	mtlr r0
/* 8014DE6C 0014AF4C  38 21 00 20 */	addi r1, r1, 0x20
/* 8014DE70 0014AF50  4E 80 00 20 */	blr
.endfn Enter__15zNPCGoalKJTauntFfPv

# zNPCGoalKJTaunt::Exit(float, void*)
.fn Exit__15zNPCGoalKJTauntFfPv, global
/* 8014DE74 0014AF54  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8014DE78 0014AF58  7C 08 02 A6 */	mflr r0
/* 8014DE7C 0014AF5C  90 01 00 14 */	stw r0, 0x14(r1)
/* 8014DE80 0014AF60  4B F8 75 9D */	bl Exit__5xGoalFfPv
/* 8014DE84 0014AF64  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8014DE88 0014AF68  7C 08 03 A6 */	mtlr r0
/* 8014DE8C 0014AF6C  38 21 00 10 */	addi r1, r1, 0x10
/* 8014DE90 0014AF70  4E 80 00 20 */	blr
.endfn Exit__15zNPCGoalKJTauntFfPv

# zNPCGoalKJTaunt::Process(en_trantype*, float, void*, xScene*)
.fn Process__15zNPCGoalKJTauntFP11en_trantypefPvP6xScene, global
/* 8014DE94 0014AF74  94 21 FF D0 */	stwu r1, -0x30(r1)
/* 8014DE98 0014AF78  7C 08 02 A6 */	mflr r0
/* 8014DE9C 0014AF7C  90 01 00 34 */	stw r0, 0x34(r1)
/* 8014DEA0 0014AF80  DB E1 00 28 */	stfd f31, 0x28(r1)
/* 8014DEA4 0014AF84  FF E0 08 90 */	fmr f31, f1
/* 8014DEA8 0014AF88  BF 61 00 14 */	stmw r27, 0x14(r1)
/* 8014DEAC 0014AF8C  7C 7B 1B 78 */	mr r27, r3
/* 8014DEB0 0014AF90  7C 9C 23 78 */	mr r28, r4
/* 8014DEB4 0014AF94  7C BD 2B 78 */	mr r29, r5
/* 8014DEB8 0014AF98  7C DE 33 78 */	mr r30, r6
/* 8014DEBC 0014AF9C  80 63 00 18 */	lwz r3, 0x18(r3)
/* 8014DEC0 0014AFA0  83 E3 00 00 */	lwz r31, 0x0(r3)
/* 8014DEC4 0014AFA4  7F E3 FB 78 */	mr r3, r31
/* 8014DEC8 0014AFA8  4B FA 50 D5 */	bl AnimCurState__10zNPCCommonFv
/* 8014DECC 0014AFAC  3C 80 80 2A */	lis r4, g_hash_subbanim@ha
/* 8014DED0 0014AFB0  80 A3 00 08 */	lwz r5, 0x8(r3)
/* 8014DED4 0014AFB4  38 64 90 E0 */	addi r3, r4, g_hash_subbanim@l
/* 8014DED8 0014AFB8  80 03 00 1C */	lwz r0, 0x1c(r3)
/* 8014DEDC 0014AFBC  7C 05 00 40 */	cmplw r5, r0
/* 8014DEE0 0014AFC0  40 82 00 18 */	bne .L_8014DEF8
/* 8014DEE4 0014AFC4  7F E3 FB 78 */	mr r3, r31
/* 8014DEE8 0014AFC8  38 80 00 00 */	li r4, 0x0
/* 8014DEEC 0014AFCC  4B FA 51 8D */	bl AnimTimeRemain__10zNPCCommonFP10xAnimState
/* 8014DEF0 0014AFD0  FC 1F 08 40 */	fcmpo cr0, f31, f1
/* 8014DEF4 0014AFD4  40 81 00 18 */	ble .L_8014DF0C
.L_8014DEF8:
/* 8014DEF8 0014AFD8  38 00 00 01 */	li r0, 0x1
/* 8014DEFC 0014AFDC  3C 60 4E 47 */	lis r3, 0x4e47
/* 8014DF00 0014AFE0  90 1C 00 00 */	stw r0, 0x0(r28)
/* 8014DF04 0014AFE4  38 63 4D 31 */	addi r3, r3, 0x4d31
/* 8014DF08 0014AFE8  48 00 00 1C */	b .L_8014DF24
.L_8014DF0C:
/* 8014DF0C 0014AFEC  FC 20 F8 90 */	fmr f1, f31
/* 8014DF10 0014AFF0  7F 63 DB 78 */	mr r3, r27
/* 8014DF14 0014AFF4  7F 84 E3 78 */	mr r4, r28
/* 8014DF18 0014AFF8  7F A5 EB 78 */	mr r5, r29
/* 8014DF1C 0014AFFC  7F C6 F3 78 */	mr r6, r30
/* 8014DF20 0014B000  4B FC 0C 29 */	bl Process__5xGoalFP11en_trantypefPvP6xScene
.L_8014DF24:
/* 8014DF24 0014B004  CB E1 00 28 */	lfd f31, 0x28(r1)
/* 8014DF28 0014B008  BB 61 00 14 */	lmw r27, 0x14(r1)
/* 8014DF2C 0014B00C  80 01 00 34 */	lwz r0, 0x34(r1)
/* 8014DF30 0014B010  7C 08 03 A6 */	mtlr r0
/* 8014DF34 0014B014  38 21 00 30 */	addi r1, r1, 0x30
/* 8014DF38 0014B018  4E 80 00 20 */	blr
.endfn Process__15zNPCGoalKJTauntFP11en_trantypefPvP6xScene

# zNPCGoalKJShockGround::Enter(float, void*)
.fn Enter__21zNPCGoalKJShockGroundFfPv, global
/* 8014DF3C 0014B01C  94 21 FF D0 */	stwu r1, -0x30(r1)
/* 8014DF40 0014B020  7C 08 02 A6 */	mflr r0
/* 8014DF44 0014B024  90 01 00 34 */	stw r0, 0x34(r1)
/* 8014DF48 0014B028  DB E1 00 20 */	stfd f31, 0x20(r1)
/* 8014DF4C 0014B02C  F3 E1 00 28 */	psq_st f31, 0x28(r1), 0, qr0
/* 8014DF50 0014B030  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 8014DF54 0014B034  93 C1 00 18 */	stw r30, 0x18(r1)
/* 8014DF58 0014B038  93 A1 00 14 */	stw r29, 0x14(r1)
/* 8014DF5C 0014B03C  7C 7D 1B 78 */	mr r29, r3
/* 8014DF60 0014B040  3C 60 80 33 */	lis r3, "tweak__31@unnamed@zNPCTypeKingJelly_cpp@"@ha
/* 8014DF64 0014B044  80 DD 00 18 */	lwz r6, 0x18(r29)
/* 8014DF68 0014B048  38 00 00 00 */	li r0, 0x0
/* 8014DF6C 0014B04C  38 A3 85 38 */	addi r5, r3, "tweak__31@unnamed@zNPCTypeKingJelly_cpp@"@l
/* 8014DF70 0014B050  FF E0 08 90 */	fmr f31, f1
/* 8014DF74 0014B054  83 E6 00 00 */	lwz r31, 0x0(r6)
/* 8014DF78 0014B058  7C 9E 23 78 */	mr r30, r4
/* 8014DF7C 0014B05C  38 60 00 05 */	li r3, 0x5
/* 8014DF80 0014B060  80 9F 02 C0 */	lwz r4, 0x2c0(r31)
/* 8014DF84 0014B064  38 84 00 01 */	addi r4, r4, 0x1
/* 8014DF88 0014B068  90 9F 02 C0 */	stw r4, 0x2c0(r31)
/* 8014DF8C 0014B06C  90 1D 00 50 */	stw r0, 0x50(r29)
/* 8014DF90 0014B070  90 1F 02 D4 */	stw r0, 0x2d4(r31)
/* 8014DF94 0014B074  C0 05 01 98 */	lfs f0, 0x198(r5)
/* 8014DF98 0014B078  D0 1D 00 4C */	stfs f0, 0x4c(r29)
/* 8014DF9C 0014B07C  80 9F 00 24 */	lwz r4, 0x24(r31)
/* 8014DFA0 0014B080  80 84 00 4C */	lwz r4, 0x4c(r4)
/* 8014DFA4 0014B084  38 84 00 30 */	addi r4, r4, 0x30
/* 8014DFA8 0014B088  4B FF 87 F5 */	bl "play_sound__31@unnamed@zNPCTypeKingJelly_cpp@FiPC5xVec3"
/* 8014DFAC 0014B08C  38 00 00 01 */	li r0, 0x1
/* 8014DFB0 0014B090  FC 20 F8 90 */	fmr f1, f31
/* 8014DFB4 0014B094  98 1F 10 90 */	stb r0, 0x1090(r31)
/* 8014DFB8 0014B098  7F A3 EB 78 */	mr r3, r29
/* 8014DFBC 0014B09C  7F C4 F3 78 */	mr r4, r30
/* 8014DFC0 0014B0A0  4B F8 71 55 */	bl Enter__14zNPCGoalCommonFfPv
/* 8014DFC4 0014B0A4  E3 E1 00 28 */	psq_l f31, 0x28(r1), 0, qr0
/* 8014DFC8 0014B0A8  80 01 00 34 */	lwz r0, 0x34(r1)
/* 8014DFCC 0014B0AC  CB E1 00 20 */	lfd f31, 0x20(r1)
/* 8014DFD0 0014B0B0  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 8014DFD4 0014B0B4  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 8014DFD8 0014B0B8  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 8014DFDC 0014B0BC  7C 08 03 A6 */	mtlr r0
/* 8014DFE0 0014B0C0  38 21 00 30 */	addi r1, r1, 0x30
/* 8014DFE4 0014B0C4  4E 80 00 20 */	blr
.endfn Enter__21zNPCGoalKJShockGroundFfPv

# zNPCGoalKJShockGround::Exit(float, void*)
.fn Exit__21zNPCGoalKJShockGroundFfPv, global
/* 8014DFE8 0014B0C8  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 8014DFEC 0014B0CC  7C 08 02 A6 */	mflr r0
/* 8014DFF0 0014B0D0  90 01 00 24 */	stw r0, 0x24(r1)
/* 8014DFF4 0014B0D4  DB E1 00 18 */	stfd f31, 0x18(r1)
/* 8014DFF8 0014B0D8  FF E0 08 90 */	fmr f31, f1
/* 8014DFFC 0014B0DC  93 E1 00 14 */	stw r31, 0x14(r1)
/* 8014E000 0014B0E0  93 C1 00 10 */	stw r30, 0x10(r1)
/* 8014E004 0014B0E4  7C 9E 23 78 */	mr r30, r4
/* 8014E008 0014B0E8  93 A1 00 0C */	stw r29, 0xc(r1)
/* 8014E00C 0014B0EC  7C 7D 1B 78 */	mr r29, r3
/* 8014E010 0014B0F0  80 63 00 18 */	lwz r3, 0x18(r3)
/* 8014E014 0014B0F4  83 E3 00 00 */	lwz r31, 0x0(r3)
/* 8014E018 0014B0F8  88 1F 02 B7 */	lbz r0, 0x2b7(r31)
/* 8014E01C 0014B0FC  28 00 00 00 */	cmplwi r0, 0x0
/* 8014E020 0014B100  41 82 00 0C */	beq .L_8014E02C
/* 8014E024 0014B104  7F E3 FB 78 */	mr r3, r31
/* 8014E028 0014B108  4B FF EE 15 */	bl end_charge__13zNPCKingJellyFv
.L_8014E02C:
/* 8014E02C 0014B10C  7F E3 FB 78 */	mr r3, r31
/* 8014E030 0014B110  4B FF E3 71 */	bl create_ambient_rings__13zNPCKingJellyFv
/* 8014E034 0014B114  38 00 00 00 */	li r0, 0x0
/* 8014E038 0014B118  FC 20 F8 90 */	fmr f1, f31
/* 8014E03C 0014B11C  98 1F 10 90 */	stb r0, 0x1090(r31)
/* 8014E040 0014B120  7F A3 EB 78 */	mr r3, r29
/* 8014E044 0014B124  7F C4 F3 78 */	mr r4, r30
/* 8014E048 0014B128  4B F8 73 D5 */	bl Exit__5xGoalFfPv
/* 8014E04C 0014B12C  80 01 00 24 */	lwz r0, 0x24(r1)
/* 8014E050 0014B130  CB E1 00 18 */	lfd f31, 0x18(r1)
/* 8014E054 0014B134  83 E1 00 14 */	lwz r31, 0x14(r1)
/* 8014E058 0014B138  83 C1 00 10 */	lwz r30, 0x10(r1)
/* 8014E05C 0014B13C  83 A1 00 0C */	lwz r29, 0xc(r1)
/* 8014E060 0014B140  7C 08 03 A6 */	mtlr r0
/* 8014E064 0014B144  38 21 00 20 */	addi r1, r1, 0x20
/* 8014E068 0014B148  4E 80 00 20 */	blr
.endfn Exit__21zNPCGoalKJShockGroundFfPv

# zNPCGoalKJShockGround::Process(en_trantype*, float, void*, xScene*)
.fn Process__21zNPCGoalKJShockGroundFP11en_trantypefPvP6xScene, global
/* 8014E06C 0014B14C  94 21 FF D0 */	stwu r1, -0x30(r1)
/* 8014E070 0014B150  7C 08 02 A6 */	mflr r0
/* 8014E074 0014B154  90 01 00 34 */	stw r0, 0x34(r1)
/* 8014E078 0014B158  DB E1 00 20 */	stfd f31, 0x20(r1)
/* 8014E07C 0014B15C  F3 E1 00 28 */	psq_st f31, 0x28(r1), 0, qr0
/* 8014E080 0014B160  BF 61 00 0C */	stmw r27, 0xc(r1)
/* 8014E084 0014B164  7C 7B 1B 78 */	mr r27, r3
/* 8014E088 0014B168  FF E0 08 90 */	fmr f31, f1
/* 8014E08C 0014B16C  C0 03 00 4C */	lfs f0, 0x4c(r3)
/* 8014E090 0014B170  7C 9C 23 78 */	mr r28, r4
/* 8014E094 0014B174  80 83 00 18 */	lwz r4, 0x18(r3)
/* 8014E098 0014B178  7C BD 2B 78 */	mr r29, r5
/* 8014E09C 0014B17C  EC 00 F8 28 */	fsubs f0, f0, f31
/* 8014E0A0 0014B180  83 E4 00 00 */	lwz r31, 0x0(r4)
/* 8014E0A4 0014B184  7C DE 33 78 */	mr r30, r6
/* 8014E0A8 0014B188  D0 03 00 4C */	stfs f0, 0x4c(r3)
/* 8014E0AC 0014B18C  80 1F 02 D4 */	lwz r0, 0x2d4(r31)
/* 8014E0B0 0014B190  2C 00 00 02 */	cmpwi r0, 0x2
/* 8014E0B4 0014B194  41 82 00 40 */	beq .L_8014E0F4
/* 8014E0B8 0014B198  40 80 00 14 */	bge .L_8014E0CC
/* 8014E0BC 0014B19C  2C 00 00 00 */	cmpwi r0, 0x0
/* 8014E0C0 0014B1A0  41 82 00 1C */	beq .L_8014E0DC
/* 8014E0C4 0014B1A4  40 80 00 24 */	bge .L_8014E0E8
/* 8014E0C8 0014B1A8  48 00 00 4C */	b .L_8014E114
.L_8014E0CC:
/* 8014E0CC 0014B1AC  2C 00 00 04 */	cmpwi r0, 0x4
/* 8014E0D0 0014B1B0  41 82 00 3C */	beq .L_8014E10C
/* 8014E0D4 0014B1B4  40 80 00 40 */	bge .L_8014E114
/* 8014E0D8 0014B1B8  48 00 00 28 */	b .L_8014E100
.L_8014E0DC:
/* 8014E0DC 0014B1BC  48 00 00 8D */	bl update_start__21zNPCGoalKJShockGroundFf
/* 8014E0E0 0014B1C0  90 7F 02 D4 */	stw r3, 0x2d4(r31)
/* 8014E0E4 0014B1C4  48 00 00 30 */	b .L_8014E114
.L_8014E0E8:
/* 8014E0E8 0014B1C8  48 00 01 21 */	bl update_warm_up__21zNPCGoalKJShockGroundFf
/* 8014E0EC 0014B1CC  90 7F 02 D4 */	stw r3, 0x2d4(r31)
/* 8014E0F0 0014B1D0  48 00 00 24 */	b .L_8014E114
.L_8014E0F4:
/* 8014E0F4 0014B1D4  48 00 02 2D */	bl update_release__21zNPCGoalKJShockGroundFf
/* 8014E0F8 0014B1D8  90 7F 02 D4 */	stw r3, 0x2d4(r31)
/* 8014E0FC 0014B1DC  48 00 00 18 */	b .L_8014E114
.L_8014E100:
/* 8014E100 0014B1E0  48 00 02 ED */	bl update_cool_down__21zNPCGoalKJShockGroundFf
/* 8014E104 0014B1E4  90 7F 02 D4 */	stw r3, 0x2d4(r31)
/* 8014E108 0014B1E8  48 00 00 0C */	b .L_8014E114
.L_8014E10C:
/* 8014E10C 0014B1EC  48 00 04 11 */	bl update_stop__21zNPCGoalKJShockGroundFf
/* 8014E110 0014B1F0  90 7F 02 D4 */	stw r3, 0x2d4(r31)
.L_8014E114:
/* 8014E114 0014B1F4  80 1F 02 D4 */	lwz r0, 0x2d4(r31)
/* 8014E118 0014B1F8  2C 00 00 05 */	cmpwi r0, 0x5
/* 8014E11C 0014B1FC  41 80 00 18 */	blt .L_8014E134
/* 8014E120 0014B200  38 00 00 01 */	li r0, 0x1
/* 8014E124 0014B204  3C 60 4E 47 */	lis r3, 0x4e47
/* 8014E128 0014B208  90 1C 00 00 */	stw r0, 0x0(r28)
/* 8014E12C 0014B20C  38 63 4D 31 */	addi r3, r3, 0x4d31
/* 8014E130 0014B210  48 00 00 1C */	b .L_8014E14C
.L_8014E134:
/* 8014E134 0014B214  FC 20 F8 90 */	fmr f1, f31
/* 8014E138 0014B218  7F 63 DB 78 */	mr r3, r27
/* 8014E13C 0014B21C  7F 84 E3 78 */	mr r4, r28
/* 8014E140 0014B220  7F A5 EB 78 */	mr r5, r29
/* 8014E144 0014B224  7F C6 F3 78 */	mr r6, r30
/* 8014E148 0014B228  4B FC 0A 01 */	bl Process__5xGoalFP11en_trantypefPvP6xScene
.L_8014E14C:
/* 8014E14C 0014B22C  E3 E1 00 28 */	psq_l f31, 0x28(r1), 0, qr0
/* 8014E150 0014B230  CB E1 00 20 */	lfd f31, 0x20(r1)
/* 8014E154 0014B234  BB 61 00 0C */	lmw r27, 0xc(r1)
/* 8014E158 0014B238  80 01 00 34 */	lwz r0, 0x34(r1)
/* 8014E15C 0014B23C  7C 08 03 A6 */	mtlr r0
/* 8014E160 0014B240  38 21 00 30 */	addi r1, r1, 0x30
/* 8014E164 0014B244  4E 80 00 20 */	blr
.endfn Process__21zNPCGoalKJShockGroundFP11en_trantypefPvP6xScene

# zNPCGoalKJShockGround::update_start(float)
.fn update_start__21zNPCGoalKJShockGroundFf, global
/* 8014E168 0014B248  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8014E16C 0014B24C  7C 08 02 A6 */	mflr r0
/* 8014E170 0014B250  90 01 00 14 */	stw r0, 0x14(r1)
/* 8014E174 0014B254  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8014E178 0014B258  93 C1 00 08 */	stw r30, 0x8(r1)
/* 8014E17C 0014B25C  7C 7E 1B 78 */	mr r30, r3
/* 8014E180 0014B260  C0 23 00 4C */	lfs f1, 0x4c(r3)
/* 8014E184 0014B264  C0 02 A6 34 */	lfs f0, "@1869"@sda21(r2)
/* 8014E188 0014B268  80 63 00 18 */	lwz r3, 0x18(r3)
/* 8014E18C 0014B26C  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8014E190 0014B270  83 E3 00 00 */	lwz r31, 0x0(r3)
/* 8014E194 0014B274  4C 40 13 82 */	cror eq, lt, eq
/* 8014E198 0014B278  40 82 00 14 */	bne .L_8014E1AC
/* 8014E19C 0014B27C  7F E3 FB 78 */	mr r3, r31
/* 8014E1A0 0014B280  4B FF E7 11 */	bl generate_thump_particles__13zNPCKingJellyFv
/* 8014E1A4 0014B284  C0 02 A6 BC */	lfs f0, "@2418"@sda21(r2)
/* 8014E1A8 0014B288  D0 1E 00 4C */	stfs f0, 0x4c(r30)
.L_8014E1AC:
/* 8014E1AC 0014B28C  7F E3 FB 78 */	mr r3, r31
/* 8014E1B0 0014B290  4B FA 4D ED */	bl AnimCurState__10zNPCCommonFv
/* 8014E1B4 0014B294  3C 80 80 2A */	lis r4, g_hash_subbanim@ha
/* 8014E1B8 0014B298  80 A3 00 08 */	lwz r5, 0x8(r3)
/* 8014E1BC 0014B29C  38 64 90 E0 */	addi r3, r4, g_hash_subbanim@l
/* 8014E1C0 0014B2A0  80 03 00 20 */	lwz r0, 0x20(r3)
/* 8014E1C4 0014B2A4  7C 05 00 40 */	cmplw r5, r0
/* 8014E1C8 0014B2A8  40 82 00 24 */	bne .L_8014E1EC
/* 8014E1CC 0014B2AC  3C 80 80 33 */	lis r4, "tweak__31@unnamed@zNPCTypeKingJelly_cpp@"@ha
/* 8014E1D0 0014B2B0  7F E3 FB 78 */	mr r3, r31
/* 8014E1D4 0014B2B4  38 84 85 38 */	addi r4, r4, "tweak__31@unnamed@zNPCTypeKingJelly_cpp@"@l
/* 8014E1D8 0014B2B8  C0 04 00 5C */	lfs f0, 0x5c(r4)
/* 8014E1DC 0014B2BC  D0 1E 00 4C */	stfs f0, 0x4c(r30)
/* 8014E1E0 0014B2C0  4B FF E8 3D */	bl start_charge__13zNPCKingJellyFv
/* 8014E1E4 0014B2C4  38 60 00 01 */	li r3, 0x1
/* 8014E1E8 0014B2C8  48 00 00 08 */	b .L_8014E1F0
.L_8014E1EC:
/* 8014E1EC 0014B2CC  38 60 00 00 */	li r3, 0x0
.L_8014E1F0:
/* 8014E1F0 0014B2D0  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8014E1F4 0014B2D4  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8014E1F8 0014B2D8  83 C1 00 08 */	lwz r30, 0x8(r1)
/* 8014E1FC 0014B2DC  7C 08 03 A6 */	mtlr r0
/* 8014E200 0014B2E0  38 21 00 10 */	addi r1, r1, 0x10
/* 8014E204 0014B2E4  4E 80 00 20 */	blr
.endfn update_start__21zNPCGoalKJShockGroundFf

# zNPCGoalKJShockGround::update_warm_up(float)
.fn update_warm_up__21zNPCGoalKJShockGroundFf, global
/* 8014E208 0014B2E8  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 8014E20C 0014B2EC  7C 08 02 A6 */	mflr r0
/* 8014E210 0014B2F0  90 01 00 24 */	stw r0, 0x24(r1)
/* 8014E214 0014B2F4  DB E1 00 10 */	stfd f31, 0x10(r1)
/* 8014E218 0014B2F8  F3 E1 00 18 */	psq_st f31, 0x18(r1), 0, qr0
/* 8014E21C 0014B2FC  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8014E220 0014B300  93 C1 00 08 */	stw r30, 0x8(r1)
/* 8014E224 0014B304  3C 80 80 33 */	lis r4, "tweak__31@unnamed@zNPCTypeKingJelly_cpp@"@ha
/* 8014E228 0014B308  7C 7E 1B 78 */	mr r30, r3
/* 8014E22C 0014B30C  38 64 85 38 */	addi r3, r4, "tweak__31@unnamed@zNPCTypeKingJelly_cpp@"@l
/* 8014E230 0014B310  80 9E 00 18 */	lwz r4, 0x18(r30)
/* 8014E234 0014B314  C0 03 00 5C */	lfs f0, 0x5c(r3)
/* 8014E238 0014B318  FF E0 08 90 */	fmr f31, f1
/* 8014E23C 0014B31C  C0 3E 00 4C */	lfs f1, 0x4c(r30)
/* 8014E240 0014B320  83 E4 00 00 */	lwz r31, 0x0(r4)
/* 8014E244 0014B324  FC 00 08 40 */	fcmpo cr0, f0, f1
/* 8014E248 0014B328  4C 40 13 82 */	cror eq, lt, eq
/* 8014E24C 0014B32C  40 82 00 0C */	bne .L_8014E258
/* 8014E250 0014B330  C0 22 A6 30 */	lfs f1, "@1868"@sda21(r2)
/* 8014E254 0014B334  48 00 00 10 */	b .L_8014E264
.L_8014E258:
/* 8014E258 0014B338  EC 01 00 24 */	fdivs f0, f1, f0
/* 8014E25C 0014B33C  C0 22 A6 30 */	lfs f1, "@1868"@sda21(r2)
/* 8014E260 0014B340  EC 21 00 28 */	fsubs f1, f1, f0
.L_8014E264:
/* 8014E264 0014B344  7F E3 FB 78 */	mr r3, r31
/* 8014E268 0014B348  4B FF E8 89 */	bl update_charge__13zNPCKingJellyFf
/* 8014E26C 0014B34C  C0 3E 00 4C */	lfs f1, 0x4c(r30)
/* 8014E270 0014B350  C0 02 A6 34 */	lfs f0, "@1869"@sda21(r2)
/* 8014E274 0014B354  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8014E278 0014B358  40 81 00 0C */	ble .L_8014E284
/* 8014E27C 0014B35C  38 60 00 01 */	li r3, 0x1
/* 8014E280 0014B360  48 00 00 80 */	b .L_8014E300
.L_8014E284:
/* 8014E284 0014B364  7F E3 FB 78 */	mr r3, r31
/* 8014E288 0014B368  4B FA 4D 15 */	bl AnimCurState__10zNPCCommonFv
/* 8014E28C 0014B36C  3C 80 80 2A */	lis r4, g_hash_subbanim@ha
/* 8014E290 0014B370  80 A3 00 08 */	lwz r5, 0x8(r3)
/* 8014E294 0014B374  38 64 90 E0 */	addi r3, r4, g_hash_subbanim@l
/* 8014E298 0014B378  80 03 00 34 */	lwz r0, 0x34(r3)
/* 8014E29C 0014B37C  7C 05 00 40 */	cmplw r5, r0
/* 8014E2A0 0014B380  40 82 00 18 */	bne .L_8014E2B8
/* 8014E2A4 0014B384  7F E3 FB 78 */	mr r3, r31
/* 8014E2A8 0014B388  38 80 00 00 */	li r4, 0x0
/* 8014E2AC 0014B38C  4B FA 4D CD */	bl AnimTimeRemain__10zNPCCommonFP10xAnimState
/* 8014E2B0 0014B390  FC 1F 08 40 */	fcmpo cr0, f31, f1
/* 8014E2B4 0014B394  40 81 00 48 */	ble .L_8014E2FC
.L_8014E2B8:
/* 8014E2B8 0014B398  80 9F 00 24 */	lwz r4, 0x24(r31)
/* 8014E2BC 0014B39C  38 60 00 0A */	li r3, 0xa
/* 8014E2C0 0014B3A0  80 84 00 4C */	lwz r4, 0x4c(r4)
/* 8014E2C4 0014B3A4  38 84 00 30 */	addi r4, r4, 0x30
/* 8014E2C8 0014B3A8  4B FF 84 D5 */	bl "play_sound__31@unnamed@zNPCTypeKingJelly_cpp@FiPC5xVec3"
/* 8014E2CC 0014B3AC  3C 80 80 33 */	lis r4, "tweak__31@unnamed@zNPCTypeKingJelly_cpp@"@ha
/* 8014E2D0 0014B3B0  7F E3 FB 78 */	mr r3, r31
/* 8014E2D4 0014B3B4  38 84 85 38 */	addi r4, r4, "tweak__31@unnamed@zNPCTypeKingJelly_cpp@"@l
/* 8014E2D8 0014B3B8  C0 04 00 60 */	lfs f0, 0x60(r4)
/* 8014E2DC 0014B3BC  D0 1E 00 4C */	stfs f0, 0x4c(r30)
/* 8014E2E0 0014B3C0  4B FF EB 5D */	bl end_charge__13zNPCKingJellyFv
/* 8014E2E4 0014B3C4  7F E3 FB 78 */	mr r3, r31
/* 8014E2E8 0014B3C8  4B FF E1 B1 */	bl destroy_ambient_rings__13zNPCKingJellyFv
/* 8014E2EC 0014B3CC  7F E3 FB 78 */	mr r3, r31
/* 8014E2F0 0014B3D0  4B FF E1 F5 */	bl create_wave_rings__13zNPCKingJellyFv
/* 8014E2F4 0014B3D4  38 60 00 02 */	li r3, 0x2
/* 8014E2F8 0014B3D8  48 00 00 08 */	b .L_8014E300
.L_8014E2FC:
/* 8014E2FC 0014B3DC  38 60 00 01 */	li r3, 0x1
.L_8014E300:
/* 8014E300 0014B3E0  E3 E1 00 18 */	psq_l f31, 0x18(r1), 0, qr0
/* 8014E304 0014B3E4  80 01 00 24 */	lwz r0, 0x24(r1)
/* 8014E308 0014B3E8  CB E1 00 10 */	lfd f31, 0x10(r1)
/* 8014E30C 0014B3EC  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8014E310 0014B3F0  83 C1 00 08 */	lwz r30, 0x8(r1)
/* 8014E314 0014B3F4  7C 08 03 A6 */	mtlr r0
/* 8014E318 0014B3F8  38 21 00 20 */	addi r1, r1, 0x20
/* 8014E31C 0014B3FC  4E 80 00 20 */	blr
.endfn update_warm_up__21zNPCGoalKJShockGroundFf

# zNPCGoalKJShockGround::update_release(float)
.fn update_release__21zNPCGoalKJShockGroundFf, global
/* 8014E320 0014B400  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 8014E324 0014B404  7C 08 02 A6 */	mflr r0
/* 8014E328 0014B408  90 01 00 24 */	stw r0, 0x24(r1)
/* 8014E32C 0014B40C  DB E1 00 10 */	stfd f31, 0x10(r1)
/* 8014E330 0014B410  F3 E1 00 18 */	psq_st f31, 0x18(r1), 0, qr0
/* 8014E334 0014B414  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8014E338 0014B418  93 C1 00 08 */	stw r30, 0x8(r1)
/* 8014E33C 0014B41C  7C 7E 1B 78 */	mr r30, r3
/* 8014E340 0014B420  C0 02 A6 34 */	lfs f0, "@1869"@sda21(r2)
/* 8014E344 0014B424  C0 43 00 4C */	lfs f2, 0x4c(r3)
/* 8014E348 0014B428  FF E0 08 90 */	fmr f31, f1
/* 8014E34C 0014B42C  80 63 00 18 */	lwz r3, 0x18(r3)
/* 8014E350 0014B430  FC 02 00 40 */	fcmpo cr0, f2, f0
/* 8014E354 0014B434  83 E3 00 00 */	lwz r31, 0x0(r3)
/* 8014E358 0014B438  40 81 00 0C */	ble .L_8014E364
/* 8014E35C 0014B43C  38 60 00 02 */	li r3, 0x2
/* 8014E360 0014B440  48 00 00 6C */	b .L_8014E3CC
.L_8014E364:
/* 8014E364 0014B444  7F E3 FB 78 */	mr r3, r31
/* 8014E368 0014B448  4B FA 4C 35 */	bl AnimCurState__10zNPCCommonFv
/* 8014E36C 0014B44C  3C 80 80 2A */	lis r4, g_hash_subbanim@ha
/* 8014E370 0014B450  80 A3 00 08 */	lwz r5, 0x8(r3)
/* 8014E374 0014B454  38 64 90 E0 */	addi r3, r4, g_hash_subbanim@l
/* 8014E378 0014B458  80 03 00 20 */	lwz r0, 0x20(r3)
/* 8014E37C 0014B45C  7C 05 00 40 */	cmplw r5, r0
/* 8014E380 0014B460  40 82 00 18 */	bne .L_8014E398
/* 8014E384 0014B464  7F E3 FB 78 */	mr r3, r31
/* 8014E388 0014B468  38 80 00 00 */	li r4, 0x0
/* 8014E38C 0014B46C  4B FA 4C ED */	bl AnimTimeRemain__10zNPCCommonFP10xAnimState
/* 8014E390 0014B470  FC 1F 08 40 */	fcmpo cr0, f31, f1
/* 8014E394 0014B474  40 81 00 34 */	ble .L_8014E3C8
.L_8014E398:
/* 8014E398 0014B478  3C 80 80 2A */	lis r4, g_hash_subbanim@ha
/* 8014E39C 0014B47C  7F E3 FB 78 */	mr r3, r31
/* 8014E3A0 0014B480  38 84 90 E0 */	addi r4, r4, g_hash_subbanim@l
/* 8014E3A4 0014B484  38 A0 00 00 */	li r5, 0x0
/* 8014E3A8 0014B488  80 84 00 34 */	lwz r4, 0x34(r4)
/* 8014E3AC 0014B48C  4B FA 49 E5 */	bl AnimStart__10zNPCCommonFUii
/* 8014E3B0 0014B490  3C 80 80 33 */	lis r4, "tweak__31@unnamed@zNPCTypeKingJelly_cpp@"@ha
/* 8014E3B4 0014B494  38 60 00 03 */	li r3, 0x3
/* 8014E3B8 0014B498  38 84 85 38 */	addi r4, r4, "tweak__31@unnamed@zNPCTypeKingJelly_cpp@"@l
/* 8014E3BC 0014B49C  C0 04 00 64 */	lfs f0, 0x64(r4)
/* 8014E3C0 0014B4A0  D0 1E 00 4C */	stfs f0, 0x4c(r30)
/* 8014E3C4 0014B4A4  48 00 00 08 */	b .L_8014E3CC
.L_8014E3C8:
/* 8014E3C8 0014B4A8  38 60 00 02 */	li r3, 0x2
.L_8014E3CC:
/* 8014E3CC 0014B4AC  E3 E1 00 18 */	psq_l f31, 0x18(r1), 0, qr0
/* 8014E3D0 0014B4B0  80 01 00 24 */	lwz r0, 0x24(r1)
/* 8014E3D4 0014B4B4  CB E1 00 10 */	lfd f31, 0x10(r1)
/* 8014E3D8 0014B4B8  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8014E3DC 0014B4BC  83 C1 00 08 */	lwz r30, 0x8(r1)
/* 8014E3E0 0014B4C0  7C 08 03 A6 */	mtlr r0
/* 8014E3E4 0014B4C4  38 21 00 20 */	addi r1, r1, 0x20
/* 8014E3E8 0014B4C8  4E 80 00 20 */	blr
.endfn update_release__21zNPCGoalKJShockGroundFf

# zNPCGoalKJShockGround::update_cool_down(float)
.fn update_cool_down__21zNPCGoalKJShockGroundFf, global
/* 8014E3EC 0014B4CC  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 8014E3F0 0014B4D0  7C 08 02 A6 */	mflr r0
/* 8014E3F4 0014B4D4  90 01 00 24 */	stw r0, 0x24(r1)
/* 8014E3F8 0014B4D8  DB E1 00 10 */	stfd f31, 0x10(r1)
/* 8014E3FC 0014B4DC  F3 E1 00 18 */	psq_st f31, 0x18(r1), 0, qr0
/* 8014E400 0014B4E0  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8014E404 0014B4E4  93 C1 00 08 */	stw r30, 0x8(r1)
/* 8014E408 0014B4E8  7C 7E 1B 78 */	mr r30, r3
/* 8014E40C 0014B4EC  C0 02 A6 34 */	lfs f0, "@1869"@sda21(r2)
/* 8014E410 0014B4F0  C0 43 00 4C */	lfs f2, 0x4c(r3)
/* 8014E414 0014B4F4  FF E0 08 90 */	fmr f31, f1
/* 8014E418 0014B4F8  80 63 00 18 */	lwz r3, 0x18(r3)
/* 8014E41C 0014B4FC  FC 02 00 40 */	fcmpo cr0, f2, f0
/* 8014E420 0014B500  83 E3 00 00 */	lwz r31, 0x0(r3)
/* 8014E424 0014B504  40 81 00 0C */	ble .L_8014E430
/* 8014E428 0014B508  38 60 00 03 */	li r3, 0x3
/* 8014E42C 0014B50C  48 00 00 D0 */	b .L_8014E4FC
.L_8014E430:
/* 8014E430 0014B510  7F E3 FB 78 */	mr r3, r31
/* 8014E434 0014B514  4B FA 4B 69 */	bl AnimCurState__10zNPCCommonFv
/* 8014E438 0014B518  3C 80 80 2A */	lis r4, g_hash_subbanim@ha
/* 8014E43C 0014B51C  80 A3 00 08 */	lwz r5, 0x8(r3)
/* 8014E440 0014B520  38 64 90 E0 */	addi r3, r4, g_hash_subbanim@l
/* 8014E444 0014B524  80 03 00 34 */	lwz r0, 0x34(r3)
/* 8014E448 0014B528  7C 05 00 40 */	cmplw r5, r0
/* 8014E44C 0014B52C  40 82 00 18 */	bne .L_8014E464
/* 8014E450 0014B530  7F E3 FB 78 */	mr r3, r31
/* 8014E454 0014B534  38 80 00 00 */	li r4, 0x0
/* 8014E458 0014B538  4B FA 4C 21 */	bl AnimTimeRemain__10zNPCCommonFP10xAnimState
/* 8014E45C 0014B53C  FC 1F 08 40 */	fcmpo cr0, f31, f1
/* 8014E460 0014B540  40 81 00 98 */	ble .L_8014E4F8
.L_8014E464:
/* 8014E464 0014B544  80 9E 00 50 */	lwz r4, 0x50(r30)
/* 8014E468 0014B548  7F E3 FB 78 */	mr r3, r31
/* 8014E46C 0014B54C  38 04 00 01 */	addi r0, r4, 0x1
/* 8014E470 0014B550  90 1E 00 50 */	stw r0, 0x50(r30)
/* 8014E474 0014B554  4B FF DF 2D */	bl create_ambient_rings__13zNPCKingJellyFv
/* 8014E478 0014B558  7F E3 FB 78 */	mr r3, r31
/* 8014E47C 0014B55C  4B FF C5 35 */	bl max_strikes__13zNPCKingJellyCFv
/* 8014E480 0014B560  80 1E 00 50 */	lwz r0, 0x50(r30)
/* 8014E484 0014B564  7C 00 18 00 */	cmpw r0, r3
/* 8014E488 0014B568  41 80 00 38 */	blt .L_8014E4C0
/* 8014E48C 0014B56C  80 9F 00 24 */	lwz r4, 0x24(r31)
/* 8014E490 0014B570  38 60 00 08 */	li r3, 0x8
/* 8014E494 0014B574  80 84 00 4C */	lwz r4, 0x4c(r4)
/* 8014E498 0014B578  38 84 00 30 */	addi r4, r4, 0x30
/* 8014E49C 0014B57C  4B FF 83 01 */	bl "play_sound__31@unnamed@zNPCTypeKingJelly_cpp@FiPC5xVec3"
/* 8014E4A0 0014B580  3C 80 80 2A */	lis r4, g_hash_subbanim@ha
/* 8014E4A4 0014B584  7F E3 FB 78 */	mr r3, r31
/* 8014E4A8 0014B588  38 84 90 E0 */	addi r4, r4, g_hash_subbanim@l
/* 8014E4AC 0014B58C  38 A0 00 00 */	li r5, 0x0
/* 8014E4B0 0014B590  80 84 00 38 */	lwz r4, 0x38(r4)
/* 8014E4B4 0014B594  4B FA 48 DD */	bl AnimStart__10zNPCCommonFUii
/* 8014E4B8 0014B598  38 60 00 04 */	li r3, 0x4
/* 8014E4BC 0014B59C  48 00 00 40 */	b .L_8014E4FC
.L_8014E4C0:
/* 8014E4C0 0014B5A0  3C 60 80 33 */	lis r3, "tweak__31@unnamed@zNPCTypeKingJelly_cpp@"@ha
/* 8014E4C4 0014B5A4  3C 80 80 2A */	lis r4, g_hash_subbanim@ha
/* 8014E4C8 0014B5A8  38 A3 85 38 */	addi r5, r3, "tweak__31@unnamed@zNPCTypeKingJelly_cpp@"@l
/* 8014E4CC 0014B5AC  7F E3 FB 78 */	mr r3, r31
/* 8014E4D0 0014B5B0  C0 05 00 5C */	lfs f0, 0x5c(r5)
/* 8014E4D4 0014B5B4  38 84 90 E0 */	addi r4, r4, g_hash_subbanim@l
/* 8014E4D8 0014B5B8  38 A0 00 00 */	li r5, 0x0
/* 8014E4DC 0014B5BC  D0 1E 00 4C */	stfs f0, 0x4c(r30)
/* 8014E4E0 0014B5C0  80 84 00 20 */	lwz r4, 0x20(r4)
/* 8014E4E4 0014B5C4  4B FA 48 AD */	bl AnimStart__10zNPCCommonFUii
/* 8014E4E8 0014B5C8  7F E3 FB 78 */	mr r3, r31
/* 8014E4EC 0014B5CC  4B FF E5 31 */	bl start_charge__13zNPCKingJellyFv
/* 8014E4F0 0014B5D0  38 60 00 01 */	li r3, 0x1
/* 8014E4F4 0014B5D4  48 00 00 08 */	b .L_8014E4FC
.L_8014E4F8:
/* 8014E4F8 0014B5D8  38 60 00 03 */	li r3, 0x3
.L_8014E4FC:
/* 8014E4FC 0014B5DC  E3 E1 00 18 */	psq_l f31, 0x18(r1), 0, qr0
/* 8014E500 0014B5E0  80 01 00 24 */	lwz r0, 0x24(r1)
/* 8014E504 0014B5E4  CB E1 00 10 */	lfd f31, 0x10(r1)
/* 8014E508 0014B5E8  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8014E50C 0014B5EC  83 C1 00 08 */	lwz r30, 0x8(r1)
/* 8014E510 0014B5F0  7C 08 03 A6 */	mtlr r0
/* 8014E514 0014B5F4  38 21 00 20 */	addi r1, r1, 0x20
/* 8014E518 0014B5F8  4E 80 00 20 */	blr
.endfn update_cool_down__21zNPCGoalKJShockGroundFf

# zNPCGoalKJShockGround::update_stop(float)
.fn update_stop__21zNPCGoalKJShockGroundFf, global
/* 8014E51C 0014B5FC  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 8014E520 0014B600  7C 08 02 A6 */	mflr r0
/* 8014E524 0014B604  90 01 00 24 */	stw r0, 0x24(r1)
/* 8014E528 0014B608  DB E1 00 18 */	stfd f31, 0x18(r1)
/* 8014E52C 0014B60C  FF E0 08 90 */	fmr f31, f1
/* 8014E530 0014B610  93 E1 00 14 */	stw r31, 0x14(r1)
/* 8014E534 0014B614  80 63 00 18 */	lwz r3, 0x18(r3)
/* 8014E538 0014B618  83 E3 00 00 */	lwz r31, 0x0(r3)
/* 8014E53C 0014B61C  7F E3 FB 78 */	mr r3, r31
/* 8014E540 0014B620  4B FA 4A 5D */	bl AnimCurState__10zNPCCommonFv
/* 8014E544 0014B624  3C 80 80 2A */	lis r4, g_hash_subbanim@ha
/* 8014E548 0014B628  80 A3 00 08 */	lwz r5, 0x8(r3)
/* 8014E54C 0014B62C  38 64 90 E0 */	addi r3, r4, g_hash_subbanim@l
/* 8014E550 0014B630  80 03 00 38 */	lwz r0, 0x38(r3)
/* 8014E554 0014B634  7C 05 00 40 */	cmplw r5, r0
/* 8014E558 0014B638  40 82 00 18 */	bne .L_8014E570
/* 8014E55C 0014B63C  7F E3 FB 78 */	mr r3, r31
/* 8014E560 0014B640  38 80 00 00 */	li r4, 0x0
/* 8014E564 0014B644  4B FA 4B 15 */	bl AnimTimeRemain__10zNPCCommonFP10xAnimState
/* 8014E568 0014B648  FC 1F 08 40 */	fcmpo cr0, f31, f1
/* 8014E56C 0014B64C  40 81 00 0C */	ble .L_8014E578
.L_8014E570:
/* 8014E570 0014B650  38 60 00 05 */	li r3, 0x5
/* 8014E574 0014B654  48 00 00 08 */	b .L_8014E57C
.L_8014E578:
/* 8014E578 0014B658  38 60 00 04 */	li r3, 0x4
.L_8014E57C:
/* 8014E57C 0014B65C  80 01 00 24 */	lwz r0, 0x24(r1)
/* 8014E580 0014B660  CB E1 00 18 */	lfd f31, 0x18(r1)
/* 8014E584 0014B664  83 E1 00 14 */	lwz r31, 0x14(r1)
/* 8014E588 0014B668  7C 08 03 A6 */	mtlr r0
/* 8014E58C 0014B66C  38 21 00 20 */	addi r1, r1, 0x20
/* 8014E590 0014B670  4E 80 00 20 */	blr
.endfn update_stop__21zNPCGoalKJShockGroundFf

# zNPCGoalKJDamage::Enter(float, void*)
.fn Enter__16zNPCGoalKJDamageFfPv, global
/* 8014E594 0014B674  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 8014E598 0014B678  7C 08 02 A6 */	mflr r0
/* 8014E59C 0014B67C  90 01 00 24 */	stw r0, 0x24(r1)
/* 8014E5A0 0014B680  DB E1 00 18 */	stfd f31, 0x18(r1)
/* 8014E5A4 0014B684  FF E0 08 90 */	fmr f31, f1
/* 8014E5A8 0014B688  93 E1 00 14 */	stw r31, 0x14(r1)
/* 8014E5AC 0014B68C  93 C1 00 10 */	stw r30, 0x10(r1)
/* 8014E5B0 0014B690  7C 9E 23 78 */	mr r30, r4
/* 8014E5B4 0014B694  93 A1 00 0C */	stw r29, 0xc(r1)
/* 8014E5B8 0014B698  7C 7D 1B 78 */	mr r29, r3
/* 8014E5BC 0014B69C  80 A3 00 18 */	lwz r5, 0x18(r3)
/* 8014E5C0 0014B6A0  38 60 00 04 */	li r3, 0x4
/* 8014E5C4 0014B6A4  83 E5 00 00 */	lwz r31, 0x0(r5)
/* 8014E5C8 0014B6A8  80 9F 00 24 */	lwz r4, 0x24(r31)
/* 8014E5CC 0014B6AC  80 84 00 4C */	lwz r4, 0x4c(r4)
/* 8014E5D0 0014B6B0  38 84 00 30 */	addi r4, r4, 0x30
/* 8014E5D4 0014B6B4  4B FF 81 C9 */	bl "play_sound__31@unnamed@zNPCTypeKingJelly_cpp@FiPC5xVec3"
/* 8014E5D8 0014B6B8  80 9F 00 24 */	lwz r4, 0x24(r31)
/* 8014E5DC 0014B6BC  38 60 00 04 */	li r3, 0x4
/* 8014E5E0 0014B6C0  80 84 00 4C */	lwz r4, 0x4c(r4)
/* 8014E5E4 0014B6C4  38 84 00 30 */	addi r4, r4, 0x30
/* 8014E5E8 0014B6C8  4B FF 81 B5 */	bl "play_sound__31@unnamed@zNPCTypeKingJelly_cpp@FiPC5xVec3"
/* 8014E5EC 0014B6CC  38 00 00 01 */	li r0, 0x1
/* 8014E5F0 0014B6D0  FC 20 F8 90 */	fmr f1, f31
/* 8014E5F4 0014B6D4  98 1F 10 90 */	stb r0, 0x1090(r31)
/* 8014E5F8 0014B6D8  7F A3 EB 78 */	mr r3, r29
/* 8014E5FC 0014B6DC  7F C4 F3 78 */	mr r4, r30
/* 8014E600 0014B6E0  4B F8 6B 15 */	bl Enter__14zNPCGoalCommonFfPv
/* 8014E604 0014B6E4  80 01 00 24 */	lwz r0, 0x24(r1)
/* 8014E608 0014B6E8  CB E1 00 18 */	lfd f31, 0x18(r1)
/* 8014E60C 0014B6EC  83 E1 00 14 */	lwz r31, 0x14(r1)
/* 8014E610 0014B6F0  83 C1 00 10 */	lwz r30, 0x10(r1)
/* 8014E614 0014B6F4  83 A1 00 0C */	lwz r29, 0xc(r1)
/* 8014E618 0014B6F8  7C 08 03 A6 */	mtlr r0
/* 8014E61C 0014B6FC  38 21 00 20 */	addi r1, r1, 0x20
/* 8014E620 0014B700  4E 80 00 20 */	blr
.endfn Enter__16zNPCGoalKJDamageFfPv

# zNPCGoalKJDamage::Exit(float, void*)
.fn Exit__16zNPCGoalKJDamageFfPv, global
/* 8014E624 0014B704  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 8014E628 0014B708  7C 08 02 A6 */	mflr r0
/* 8014E62C 0014B70C  90 01 00 24 */	stw r0, 0x24(r1)
/* 8014E630 0014B710  DB E1 00 18 */	stfd f31, 0x18(r1)
/* 8014E634 0014B714  FF E0 08 90 */	fmr f31, f1
/* 8014E638 0014B718  93 E1 00 14 */	stw r31, 0x14(r1)
/* 8014E63C 0014B71C  93 C1 00 10 */	stw r30, 0x10(r1)
/* 8014E640 0014B720  7C 9E 23 78 */	mr r30, r4
/* 8014E644 0014B724  93 A1 00 0C */	stw r29, 0xc(r1)
/* 8014E648 0014B728  7C 7D 1B 78 */	mr r29, r3
/* 8014E64C 0014B72C  80 63 00 18 */	lwz r3, 0x18(r3)
/* 8014E650 0014B730  83 E3 00 00 */	lwz r31, 0x0(r3)
/* 8014E654 0014B734  7F E3 FB 78 */	mr r3, r31
/* 8014E658 0014B738  4B FF C4 99 */	bl update_round__13zNPCKingJellyFv
/* 8014E65C 0014B73C  38 00 00 00 */	li r0, 0x0
/* 8014E660 0014B740  FC 20 F8 90 */	fmr f1, f31
/* 8014E664 0014B744  98 1F 10 90 */	stb r0, 0x1090(r31)
/* 8014E668 0014B748  7F A3 EB 78 */	mr r3, r29
/* 8014E66C 0014B74C  7F C4 F3 78 */	mr r4, r30
/* 8014E670 0014B750  4B F8 6D AD */	bl Exit__5xGoalFfPv
/* 8014E674 0014B754  80 01 00 24 */	lwz r0, 0x24(r1)
/* 8014E678 0014B758  CB E1 00 18 */	lfd f31, 0x18(r1)
/* 8014E67C 0014B75C  83 E1 00 14 */	lwz r31, 0x14(r1)
/* 8014E680 0014B760  83 C1 00 10 */	lwz r30, 0x10(r1)
/* 8014E684 0014B764  83 A1 00 0C */	lwz r29, 0xc(r1)
/* 8014E688 0014B768  7C 08 03 A6 */	mtlr r0
/* 8014E68C 0014B76C  38 21 00 20 */	addi r1, r1, 0x20
/* 8014E690 0014B770  4E 80 00 20 */	blr
.endfn Exit__16zNPCGoalKJDamageFfPv

# zNPCGoalKJDamage::Process(en_trantype*, float, void*, xScene*)
.fn Process__16zNPCGoalKJDamageFP11en_trantypefPvP6xScene, global
/* 8014E694 0014B774  94 21 FF D0 */	stwu r1, -0x30(r1)
/* 8014E698 0014B778  7C 08 02 A6 */	mflr r0
/* 8014E69C 0014B77C  90 01 00 34 */	stw r0, 0x34(r1)
/* 8014E6A0 0014B780  DB E1 00 28 */	stfd f31, 0x28(r1)
/* 8014E6A4 0014B784  FF E0 08 90 */	fmr f31, f1
/* 8014E6A8 0014B788  BF 61 00 14 */	stmw r27, 0x14(r1)
/* 8014E6AC 0014B78C  7C 7B 1B 78 */	mr r27, r3
/* 8014E6B0 0014B790  7C 9C 23 78 */	mr r28, r4
/* 8014E6B4 0014B794  7C BD 2B 78 */	mr r29, r5
/* 8014E6B8 0014B798  7C DE 33 78 */	mr r30, r6
/* 8014E6BC 0014B79C  80 63 00 18 */	lwz r3, 0x18(r3)
/* 8014E6C0 0014B7A0  83 E3 00 00 */	lwz r31, 0x0(r3)
/* 8014E6C4 0014B7A4  7F E3 FB 78 */	mr r3, r31
/* 8014E6C8 0014B7A8  4B FA 48 D5 */	bl AnimCurState__10zNPCCommonFv
/* 8014E6CC 0014B7AC  3C 80 80 2A */	lis r4, g_hash_subbanim@ha
/* 8014E6D0 0014B7B0  80 A3 00 08 */	lwz r5, 0x8(r3)
/* 8014E6D4 0014B7B4  38 64 90 E0 */	addi r3, r4, g_hash_subbanim@l
/* 8014E6D8 0014B7B8  80 03 00 24 */	lwz r0, 0x24(r3)
/* 8014E6DC 0014B7BC  7C 05 00 40 */	cmplw r5, r0
/* 8014E6E0 0014B7C0  40 82 00 18 */	bne .L_8014E6F8
/* 8014E6E4 0014B7C4  7F E3 FB 78 */	mr r3, r31
/* 8014E6E8 0014B7C8  38 80 00 00 */	li r4, 0x0
/* 8014E6EC 0014B7CC  4B FA 49 8D */	bl AnimTimeRemain__10zNPCCommonFP10xAnimState
/* 8014E6F0 0014B7D0  FC 1F 08 40 */	fcmpo cr0, f31, f1
/* 8014E6F4 0014B7D4  40 81 00 30 */	ble .L_8014E724
.L_8014E6F8:
/* 8014E6F8 0014B7D8  38 00 00 01 */	li r0, 0x1
/* 8014E6FC 0014B7DC  90 1C 00 00 */	stw r0, 0x0(r28)
/* 8014E700 0014B7E0  80 1F 02 C4 */	lwz r0, 0x2c4(r31)
/* 8014E704 0014B7E4  2C 00 00 00 */	cmpwi r0, 0x0
/* 8014E708 0014B7E8  41 81 00 10 */	bgt .L_8014E718
/* 8014E70C 0014B7EC  3C 60 4E 47 */	lis r3, 0x4e47
/* 8014E710 0014B7F0  38 63 4D 37 */	addi r3, r3, 0x4d37
/* 8014E714 0014B7F4  48 00 00 28 */	b .L_8014E73C
.L_8014E718:
/* 8014E718 0014B7F8  3C 60 4E 47 */	lis r3, 0x4e47
/* 8014E71C 0014B7FC  38 63 4D 33 */	addi r3, r3, 0x4d33
/* 8014E720 0014B800  48 00 00 1C */	b .L_8014E73C
.L_8014E724:
/* 8014E724 0014B804  FC 20 F8 90 */	fmr f1, f31
/* 8014E728 0014B808  7F 63 DB 78 */	mr r3, r27
/* 8014E72C 0014B80C  7F 84 E3 78 */	mr r4, r28
/* 8014E730 0014B810  7F A5 EB 78 */	mr r5, r29
/* 8014E734 0014B814  7F C6 F3 78 */	mr r6, r30
/* 8014E738 0014B818  4B FC 04 11 */	bl Process__5xGoalFP11en_trantypefPvP6xScene
.L_8014E73C:
/* 8014E73C 0014B81C  CB E1 00 28 */	lfd f31, 0x28(r1)
/* 8014E740 0014B820  BB 61 00 14 */	lmw r27, 0x14(r1)
/* 8014E744 0014B824  80 01 00 34 */	lwz r0, 0x34(r1)
/* 8014E748 0014B828  7C 08 03 A6 */	mtlr r0
/* 8014E74C 0014B82C  38 21 00 30 */	addi r1, r1, 0x30
/* 8014E750 0014B830  4E 80 00 20 */	blr
.endfn Process__16zNPCGoalKJDamageFP11en_trantypefPvP6xScene

# zNPCGoalKJDeath::Enter(float, void*)
.fn Enter__15zNPCGoalKJDeathFfPv, global
/* 8014E754 0014B834  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 8014E758 0014B838  7C 08 02 A6 */	mflr r0
/* 8014E75C 0014B83C  90 01 00 24 */	stw r0, 0x24(r1)
/* 8014E760 0014B840  DB E1 00 18 */	stfd f31, 0x18(r1)
/* 8014E764 0014B844  FF E0 08 90 */	fmr f31, f1
/* 8014E768 0014B848  93 E1 00 14 */	stw r31, 0x14(r1)
/* 8014E76C 0014B84C  93 C1 00 10 */	stw r30, 0x10(r1)
/* 8014E770 0014B850  7C 9E 23 78 */	mr r30, r4
/* 8014E774 0014B854  93 A1 00 0C */	stw r29, 0xc(r1)
/* 8014E778 0014B858  7C 7D 1B 78 */	mr r29, r3
/* 8014E77C 0014B85C  80 63 00 18 */	lwz r3, 0x18(r3)
/* 8014E780 0014B860  83 E3 00 00 */	lwz r31, 0x0(r3)
/* 8014E784 0014B864  7F E3 FB 78 */	mr r3, r31
/* 8014E788 0014B868  4B FF D3 05 */	bl decompose__13zNPCKingJellyFv
/* 8014E78C 0014B86C  7F E3 FB 78 */	mr r3, r31
/* 8014E790 0014B870  4B FF D3 BD */	bl post_decompose__13zNPCKingJellyFv
/* 8014E794 0014B874  FC 20 F8 90 */	fmr f1, f31
/* 8014E798 0014B878  7F A3 EB 78 */	mr r3, r29
/* 8014E79C 0014B87C  7F C4 F3 78 */	mr r4, r30
/* 8014E7A0 0014B880  4B F8 69 75 */	bl Enter__14zNPCGoalCommonFfPv
/* 8014E7A4 0014B884  80 01 00 24 */	lwz r0, 0x24(r1)
/* 8014E7A8 0014B888  CB E1 00 18 */	lfd f31, 0x18(r1)
/* 8014E7AC 0014B88C  83 E1 00 14 */	lwz r31, 0x14(r1)
/* 8014E7B0 0014B890  83 C1 00 10 */	lwz r30, 0x10(r1)
/* 8014E7B4 0014B894  83 A1 00 0C */	lwz r29, 0xc(r1)
/* 8014E7B8 0014B898  7C 08 03 A6 */	mtlr r0
/* 8014E7BC 0014B89C  38 21 00 20 */	addi r1, r1, 0x20
/* 8014E7C0 0014B8A0  4E 80 00 20 */	blr
.endfn Enter__15zNPCGoalKJDeathFfPv

# zNPCGoalKJDeath::Exit(float, void*)
.fn Exit__15zNPCGoalKJDeathFfPv, global
/* 8014E7C4 0014B8A4  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8014E7C8 0014B8A8  7C 08 02 A6 */	mflr r0
/* 8014E7CC 0014B8AC  90 01 00 14 */	stw r0, 0x14(r1)
/* 8014E7D0 0014B8B0  4B F8 6C 4D */	bl Exit__5xGoalFfPv
/* 8014E7D4 0014B8B4  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8014E7D8 0014B8B8  7C 08 03 A6 */	mtlr r0
/* 8014E7DC 0014B8BC  38 21 00 10 */	addi r1, r1, 0x10
/* 8014E7E0 0014B8C0  4E 80 00 20 */	blr
.endfn Exit__15zNPCGoalKJDeathFfPv

# zNPCGoalKJDeath::Process(en_trantype*, float, void*, xScene*)
.fn Process__15zNPCGoalKJDeathFP11en_trantypefPvP6xScene, global
/* 8014E7E4 0014B8C4  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8014E7E8 0014B8C8  7C 08 02 A6 */	mflr r0
/* 8014E7EC 0014B8CC  90 01 00 14 */	stw r0, 0x14(r1)
/* 8014E7F0 0014B8D0  4B FC 03 59 */	bl Process__5xGoalFP11en_trantypefPvP6xScene
/* 8014E7F4 0014B8D4  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8014E7F8 0014B8D8  7C 08 03 A6 */	mtlr r0
/* 8014E7FC 0014B8DC  38 21 00 10 */	addi r1, r1, 0x10
/* 8014E800 0014B8E0  4E 80 00 20 */	blr
.endfn Process__15zNPCGoalKJDeathFP11en_trantypefPvP6xScene

# 0x8014E804 - 0x8014E80C
.section .text, "ax", unique, 1
.balign 4

# zNPCJelly::MeetTheKing(zNPCCommon*)
.fn MeetTheKing__9zNPCJellyFP10zNPCCommon, weak
/* 8014E804 0014B8E4  90 83 02 AC */	stw r4, 0x2ac(r3)
/* 8014E808 0014B8E8  4E 80 00 20 */	blr
.endfn MeetTheKing__9zNPCJellyFP10zNPCCommon

# 0x8014E80C - 0x8014E8CC
.section .text, "ax", unique, 2
.balign 4

# zNPCKingJelly::render_debug()
.fn render_debug__13zNPCKingJellyFv, weak
/* 8014E80C 0014B8EC  4E 80 00 20 */	blr
.endfn render_debug__13zNPCKingJellyFv

# zNPCKingJelly::on_change_ambient_ring(const tweak_info&)
.fn on_change_ambient_ring__13zNPCKingJellyFRC10tweak_info, weak
/* 8014E810 0014B8F0  4E 80 00 20 */	blr
.endfn on_change_ambient_ring__13zNPCKingJellyFRC10tweak_info

# zNPCKingJelly::on_change_fade_obstructions(const tweak_info&)
.fn on_change_fade_obstructions__13zNPCKingJellyFRC10tweak_info, weak
/* 8014E814 0014B8F4  4E 80 00 20 */	blr
.endfn on_change_fade_obstructions__13zNPCKingJellyFRC10tweak_info

# zNPCKingJelly::get_center() const
.fn get_center__13zNPCKingJellyCFv, weak
/* 8014E818 0014B8F8  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 8014E81C 0014B8FC  7C 08 02 A6 */	mflr r0
/* 8014E820 0014B900  90 01 00 24 */	stw r0, 0x24(r1)
/* 8014E824 0014B904  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 8014E828 0014B908  7C 9F 23 78 */	mr r31, r4
/* 8014E82C 0014B90C  80 84 00 24 */	lwz r4, 0x24(r4)
/* 8014E830 0014B910  93 C1 00 18 */	stw r30, 0x18(r1)
/* 8014E834 0014B914  7C 7E 1B 78 */	mr r30, r3
/* 8014E838 0014B918  38 61 00 08 */	addi r3, r1, 0x8
/* 8014E83C 0014B91C  80 A4 00 4C */	lwz r5, 0x4c(r4)
/* 8014E840 0014B920  38 85 00 30 */	addi r4, r5, 0x30
/* 8014E844 0014B924  38 A5 00 B0 */	addi r5, r5, 0xb0
/* 8014E848 0014B928  4B EC 6B 99 */	bl __pl__5xVec3CFRC5xVec3
/* 8014E84C 0014B92C  80 BF 01 D8 */	lwz r5, 0x1d8(r31)
/* 8014E850 0014B930  7F C3 F3 78 */	mr r3, r30
/* 8014E854 0014B934  38 81 00 08 */	addi r4, r1, 0x8
/* 8014E858 0014B938  38 A5 00 34 */	addi r5, r5, 0x34
/* 8014E85C 0014B93C  4B EC 6B 85 */	bl __pl__5xVec3CFRC5xVec3
/* 8014E860 0014B940  80 01 00 24 */	lwz r0, 0x24(r1)
/* 8014E864 0014B944  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 8014E868 0014B948  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 8014E86C 0014B94C  7C 08 03 A6 */	mtlr r0
/* 8014E870 0014B950  38 21 00 20 */	addi r1, r1, 0x20
/* 8014E874 0014B954  4E 80 00 20 */	blr
.endfn get_center__13zNPCKingJellyCFv

# zNPCKingJelly::get_bottom() const
.fn get_bottom__13zNPCKingJellyCFv, weak
/* 8014E878 0014B958  80 63 00 24 */	lwz r3, 0x24(r3)
/* 8014E87C 0014B95C  80 63 00 4C */	lwz r3, 0x4c(r3)
/* 8014E880 0014B960  38 63 00 30 */	addi r3, r3, 0x30
/* 8014E884 0014B964  4E 80 00 20 */	blr
.endfn get_bottom__13zNPCKingJellyCFv

# lightning_ring::update(float)
.fn update__14lightning_ringFf, weak
/* 8014E888 0014B968  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8014E88C 0014B96C  7C 08 02 A6 */	mflr r0
/* 8014E890 0014B970  90 01 00 14 */	stw r0, 0x14(r1)
/* 8014E894 0014B974  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8014E898 0014B978  7C 7F 1B 78 */	mr r31, r3
/* 8014E89C 0014B97C  81 83 00 80 */	lwz r12, 0x80(r3)
/* 8014E8A0 0014B980  28 0C 00 00 */	cmplwi r12, 0x0
/* 8014E8A4 0014B984  41 82 00 0C */	beq .L_8014E8B0
/* 8014E8A8 0014B988  7D 89 03 A6 */	mtctr r12
/* 8014E8AC 0014B98C  4E 80 04 21 */	bctrl
.L_8014E8B0:
/* 8014E8B0 0014B990  7F E3 FB 78 */	mr r3, r31
/* 8014E8B4 0014B994  4B FF 84 ED */	bl refresh__14lightning_ringFv
/* 8014E8B8 0014B998  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8014E8BC 0014B99C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8014E8C0 0014B9A0  7C 08 03 A6 */	mtlr r0
/* 8014E8C4 0014B9A4  38 21 00 10 */	addi r1, r1, 0x10
/* 8014E8C8 0014B9A8  4E 80 00 20 */	blr
.endfn update__14lightning_ringFf

# 0x8014E8CC - 0x8014EB68
.section .text, "ax", unique, 3
.balign 4

# auto_tweak::load_param<iColor_tag, int>(iColor_tag&, int, int, int, xModelAssetParam*, unsigned int, const char*)
.fn "load_param<10iColor_tag,i>__10auto_tweakFR10iColor_tagiiiP16xModelAssetParamUiPCc", local
/* 8014E8CC 0014B9AC  94 21 FF 90 */	stwu r1, -0x70(r1)
/* 8014E8D0 0014B9B0  7C 08 02 A6 */	mflr r0
/* 8014E8D4 0014B9B4  3D 40 43 30 */	lis r10, 0x4330
/* 8014E8D8 0014B9B8  3C 80 80 27 */	lis r4, "@814"@ha
/* 8014E8DC 0014B9BC  90 01 00 74 */	stw r0, 0x74(r1)
/* 8014E8E0 0014B9C0  38 A4 D8 20 */	addi r5, r4, "@814"@l
/* 8014E8E4 0014B9C4  93 E1 00 6C */	stw r31, 0x6c(r1)
/* 8014E8E8 0014B9C8  7C 7F 1B 78 */	mr r31, r3
/* 8014E8EC 0014B9CC  7C E3 3B 78 */	mr r3, r7
/* 8014E8F0 0014B9D0  38 E1 00 18 */	addi r7, r1, 0x18
/* 8014E8F4 0014B9D4  80 85 00 00 */	lwz r4, 0x0(r5)
/* 8014E8F8 0014B9D8  80 C5 00 04 */	lwz r6, 0x4(r5)
/* 8014E8FC 0014B9DC  81 65 00 08 */	lwz r11, 0x8(r5)
/* 8014E900 0014B9E0  80 05 00 0C */	lwz r0, 0xc(r5)
/* 8014E904 0014B9E4  7D 25 4B 78 */	mr r5, r9
/* 8014E908 0014B9E8  90 81 00 18 */	stw r4, 0x18(r1)
/* 8014E90C 0014B9EC  7D 04 43 78 */	mr r4, r8
/* 8014E910 0014B9F0  39 01 00 08 */	addi r8, r1, 0x8
/* 8014E914 0014B9F4  90 C1 00 1C */	stw r6, 0x1c(r1)
/* 8014E918 0014B9F8  38 C0 00 04 */	li r6, 0x4
/* 8014E91C 0014B9FC  91 61 00 20 */	stw r11, 0x20(r1)
/* 8014E920 0014BA00  90 01 00 24 */	stw r0, 0x24(r1)
/* 8014E924 0014BA04  88 1F 00 00 */	lbz r0, 0x0(r31)
/* 8014E928 0014BA08  91 41 00 28 */	stw r10, 0x28(r1)
/* 8014E92C 0014BA0C  C8 22 A7 40 */	lfd f1, "@2454"@sda21(r2)
/* 8014E930 0014BA10  90 01 00 2C */	stw r0, 0x2c(r1)
/* 8014E934 0014BA14  C8 01 00 28 */	lfd f0, 0x28(r1)
/* 8014E938 0014BA18  91 41 00 30 */	stw r10, 0x30(r1)
/* 8014E93C 0014BA1C  EC 00 08 28 */	fsubs f0, f0, f1
/* 8014E940 0014BA20  91 41 00 38 */	stw r10, 0x38(r1)
/* 8014E944 0014BA24  D0 01 00 18 */	stfs f0, 0x18(r1)
/* 8014E948 0014BA28  88 1F 00 01 */	lbz r0, 0x1(r31)
/* 8014E94C 0014BA2C  91 41 00 40 */	stw r10, 0x40(r1)
/* 8014E950 0014BA30  90 01 00 34 */	stw r0, 0x34(r1)
/* 8014E954 0014BA34  C8 01 00 30 */	lfd f0, 0x30(r1)
/* 8014E958 0014BA38  EC 00 08 28 */	fsubs f0, f0, f1
/* 8014E95C 0014BA3C  D0 01 00 1C */	stfs f0, 0x1c(r1)
/* 8014E960 0014BA40  88 1F 00 02 */	lbz r0, 0x2(r31)
/* 8014E964 0014BA44  90 01 00 3C */	stw r0, 0x3c(r1)
/* 8014E968 0014BA48  C8 01 00 38 */	lfd f0, 0x38(r1)
/* 8014E96C 0014BA4C  EC 00 08 28 */	fsubs f0, f0, f1
/* 8014E970 0014BA50  D0 01 00 20 */	stfs f0, 0x20(r1)
/* 8014E974 0014BA54  88 1F 00 03 */	lbz r0, 0x3(r31)
/* 8014E978 0014BA58  90 01 00 44 */	stw r0, 0x44(r1)
/* 8014E97C 0014BA5C  C8 01 00 40 */	lfd f0, 0x40(r1)
/* 8014E980 0014BA60  EC 00 08 28 */	fsubs f0, f0, f1
/* 8014E984 0014BA64  D0 01 00 24 */	stfs f0, 0x24(r1)
/* 8014E988 0014BA68  4B F0 77 45 */	bl zParamGetFloatList__FP16xModelAssetParamUiPCciPfPf
/* 8014E98C 0014BA6C  C0 01 00 08 */	lfs f0, 0x8(r1)
/* 8014E990 0014BA70  FC 00 00 1E */	fctiwz f0, f0
/* 8014E994 0014BA74  D8 01 00 48 */	stfd f0, 0x48(r1)
/* 8014E998 0014BA78  80 01 00 4C */	lwz r0, 0x4c(r1)
/* 8014E99C 0014BA7C  98 1F 00 00 */	stb r0, 0x0(r31)
/* 8014E9A0 0014BA80  C0 01 00 0C */	lfs f0, 0xc(r1)
/* 8014E9A4 0014BA84  FC 00 00 1E */	fctiwz f0, f0
/* 8014E9A8 0014BA88  D8 01 00 50 */	stfd f0, 0x50(r1)
/* 8014E9AC 0014BA8C  80 01 00 54 */	lwz r0, 0x54(r1)
/* 8014E9B0 0014BA90  98 1F 00 01 */	stb r0, 0x1(r31)
/* 8014E9B4 0014BA94  C0 01 00 10 */	lfs f0, 0x10(r1)
/* 8014E9B8 0014BA98  FC 00 00 1E */	fctiwz f0, f0
/* 8014E9BC 0014BA9C  D8 01 00 58 */	stfd f0, 0x58(r1)
/* 8014E9C0 0014BAA0  80 01 00 5C */	lwz r0, 0x5c(r1)
/* 8014E9C4 0014BAA4  98 1F 00 02 */	stb r0, 0x2(r31)
/* 8014E9C8 0014BAA8  C0 01 00 14 */	lfs f0, 0x14(r1)
/* 8014E9CC 0014BAAC  FC 00 00 1E */	fctiwz f0, f0
/* 8014E9D0 0014BAB0  D8 01 00 60 */	stfd f0, 0x60(r1)
/* 8014E9D4 0014BAB4  80 01 00 64 */	lwz r0, 0x64(r1)
/* 8014E9D8 0014BAB8  98 1F 00 03 */	stb r0, 0x3(r31)
/* 8014E9DC 0014BABC  83 E1 00 6C */	lwz r31, 0x6c(r1)
/* 8014E9E0 0014BAC0  80 01 00 74 */	lwz r0, 0x74(r1)
/* 8014E9E4 0014BAC4  7C 08 03 A6 */	mtlr r0
/* 8014E9E8 0014BAC8  38 21 00 70 */	addi r1, r1, 0x70
/* 8014E9EC 0014BACC  4E 80 00 20 */	blr
.endfn "load_param<10iColor_tag,i>__10auto_tweakFR10iColor_tagiiiP16xModelAssetParamUiPCc"

# auto_tweak::load_param<bool, int>(bool&, int, int, int, xModelAssetParam*, unsigned int, const char*)
.fn "load_param<b,i>__10auto_tweakFRbiiiP16xModelAssetParamUiPCc", local
/* 8014E9F0 0014BAD0  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8014E9F4 0014BAD4  7C 08 02 A6 */	mflr r0
/* 8014E9F8 0014BAD8  7D 04 43 78 */	mr r4, r8
/* 8014E9FC 0014BADC  7D 25 4B 78 */	mr r5, r9
/* 8014EA00 0014BAE0  90 01 00 14 */	stw r0, 0x14(r1)
/* 8014EA04 0014BAE4  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8014EA08 0014BAE8  7C 7F 1B 78 */	mr r31, r3
/* 8014EA0C 0014BAEC  88 C3 00 00 */	lbz r6, 0x0(r3)
/* 8014EA10 0014BAF0  7C E3 3B 78 */	mr r3, r7
/* 8014EA14 0014BAF4  4B F0 75 F1 */	bl zParamGetInt__FP16xModelAssetParamUiPCci
/* 8014EA18 0014BAF8  7C 03 00 D0 */	neg r0, r3
/* 8014EA1C 0014BAFC  7C 00 1B 78 */	or r0, r0, r3
/* 8014EA20 0014BB00  54 00 0F FE */	srwi r0, r0, 31
/* 8014EA24 0014BB04  98 1F 00 00 */	stb r0, 0x0(r31)
/* 8014EA28 0014BB08  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8014EA2C 0014BB0C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8014EA30 0014BB10  7C 08 03 A6 */	mtlr r0
/* 8014EA34 0014BB14  38 21 00 10 */	addi r1, r1, 0x10
/* 8014EA38 0014BB18  4E 80 00 20 */	blr
.endfn "load_param<b,i>__10auto_tweakFRbiiiP16xModelAssetParamUiPCc"

# auto_tweak::load_param<float, float>(float&, float, float, float, xModelAssetParam*, unsigned int, const char*)
.fn "load_param<f,f>__10auto_tweakFRffffP16xModelAssetParamUiPCc", local
/* 8014EA3C 0014BB1C  94 21 FF C0 */	stwu r1, -0x40(r1)
/* 8014EA40 0014BB20  7C 08 02 A6 */	mflr r0
/* 8014EA44 0014BB24  90 01 00 44 */	stw r0, 0x44(r1)
/* 8014EA48 0014BB28  DB E1 00 30 */	stfd f31, 0x30(r1)
/* 8014EA4C 0014BB2C  F3 E1 00 38 */	psq_st f31, 0x38(r1), 0, qr0
/* 8014EA50 0014BB30  DB C1 00 20 */	stfd f30, 0x20(r1)
/* 8014EA54 0014BB34  F3 C1 00 28 */	psq_st f30, 0x28(r1), 0, qr0
/* 8014EA58 0014BB38  DB A1 00 10 */	stfd f29, 0x10(r1)
/* 8014EA5C 0014BB3C  F3 A1 00 18 */	psq_st f29, 0x18(r1), 0, qr0
/* 8014EA60 0014BB40  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8014EA64 0014BB44  FF A0 08 90 */	fmr f29, f1
/* 8014EA68 0014BB48  C0 23 00 00 */	lfs f1, 0x0(r3)
/* 8014EA6C 0014BB4C  FF C0 10 90 */	fmr f30, f2
/* 8014EA70 0014BB50  7C 7F 1B 78 */	mr r31, r3
/* 8014EA74 0014BB54  7C 83 23 78 */	mr r3, r4
/* 8014EA78 0014BB58  7C A4 2B 78 */	mr r4, r5
/* 8014EA7C 0014BB5C  FF E0 18 90 */	fmr f31, f3
/* 8014EA80 0014BB60  7C C5 33 78 */	mr r5, r6
/* 8014EA84 0014BB64  4B F0 75 E5 */	bl zParamGetFloat__FP16xModelAssetParamUiPCcf
/* 8014EA88 0014BB68  D0 3F 00 00 */	stfs f1, 0x0(r31)
/* 8014EA8C 0014BB6C  C0 1F 00 00 */	lfs f0, 0x0(r31)
/* 8014EA90 0014BB70  FC 00 F0 40 */	fcmpo cr0, f0, f30
/* 8014EA94 0014BB74  40 80 00 0C */	bge .L_8014EAA0
/* 8014EA98 0014BB78  D3 DF 00 00 */	stfs f30, 0x0(r31)
/* 8014EA9C 0014BB7C  48 00 00 10 */	b .L_8014EAAC
.L_8014EAA0:
/* 8014EAA0 0014BB80  FC 00 F8 40 */	fcmpo cr0, f0, f31
/* 8014EAA4 0014BB84  40 81 00 08 */	ble .L_8014EAAC
/* 8014EAA8 0014BB88  D3 FF 00 00 */	stfs f31, 0x0(r31)
.L_8014EAAC:
/* 8014EAAC 0014BB8C  C0 1F 00 00 */	lfs f0, 0x0(r31)
/* 8014EAB0 0014BB90  EC 00 07 72 */	fmuls f0, f0, f29
/* 8014EAB4 0014BB94  D0 1F 00 00 */	stfs f0, 0x0(r31)
/* 8014EAB8 0014BB98  E3 E1 00 38 */	psq_l f31, 0x38(r1), 0, qr0
/* 8014EABC 0014BB9C  CB E1 00 30 */	lfd f31, 0x30(r1)
/* 8014EAC0 0014BBA0  E3 C1 00 28 */	psq_l f30, 0x28(r1), 0, qr0
/* 8014EAC4 0014BBA4  CB C1 00 20 */	lfd f30, 0x20(r1)
/* 8014EAC8 0014BBA8  E3 A1 00 18 */	psq_l f29, 0x18(r1), 0, qr0
/* 8014EACC 0014BBAC  CB A1 00 10 */	lfd f29, 0x10(r1)
/* 8014EAD0 0014BBB0  80 01 00 44 */	lwz r0, 0x44(r1)
/* 8014EAD4 0014BBB4  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8014EAD8 0014BBB8  7C 08 03 A6 */	mtlr r0
/* 8014EADC 0014BBBC  38 21 00 40 */	addi r1, r1, 0x40
/* 8014EAE0 0014BBC0  4E 80 00 20 */	blr
.endfn "load_param<f,f>__10auto_tweakFRffffP16xModelAssetParamUiPCc"

# auto_tweak::load_param<int, int>(int&, int, int, int, xModelAssetParam*, unsigned int, const char*)
.fn "load_param<i,i>__10auto_tweakFRiiiiP16xModelAssetParamUiPCc", local
/* 8014EAE4 0014BBC4  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 8014EAE8 0014BBC8  7C 08 02 A6 */	mflr r0
/* 8014EAEC 0014BBCC  90 01 00 24 */	stw r0, 0x24(r1)
/* 8014EAF0 0014BBD0  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 8014EAF4 0014BBD4  7C DF 33 78 */	mr r31, r6
/* 8014EAF8 0014BBD8  93 C1 00 18 */	stw r30, 0x18(r1)
/* 8014EAFC 0014BBDC  7C BE 2B 78 */	mr r30, r5
/* 8014EB00 0014BBE0  7D 25 4B 78 */	mr r5, r9
/* 8014EB04 0014BBE4  93 A1 00 14 */	stw r29, 0x14(r1)
/* 8014EB08 0014BBE8  7C 9D 23 78 */	mr r29, r4
/* 8014EB0C 0014BBEC  7D 04 43 78 */	mr r4, r8
/* 8014EB10 0014BBF0  93 81 00 10 */	stw r28, 0x10(r1)
/* 8014EB14 0014BBF4  7C 7C 1B 78 */	mr r28, r3
/* 8014EB18 0014BBF8  80 C3 00 00 */	lwz r6, 0x0(r3)
/* 8014EB1C 0014BBFC  7C E3 3B 78 */	mr r3, r7
/* 8014EB20 0014BC00  4B F0 74 E5 */	bl zParamGetInt__FP16xModelAssetParamUiPCci
/* 8014EB24 0014BC04  7C 03 F0 00 */	cmpw r3, r30
/* 8014EB28 0014BC08  40 80 00 0C */	bge .L_8014EB34
/* 8014EB2C 0014BC0C  7F C3 F3 78 */	mr r3, r30
/* 8014EB30 0014BC10  48 00 00 10 */	b .L_8014EB40
.L_8014EB34:
/* 8014EB34 0014BC14  7C 03 F8 00 */	cmpw r3, r31
/* 8014EB38 0014BC18  40 81 00 08 */	ble .L_8014EB40
/* 8014EB3C 0014BC1C  7F E3 FB 78 */	mr r3, r31
.L_8014EB40:
/* 8014EB40 0014BC20  7C 63 E9 D6 */	mullw r3, r3, r29
/* 8014EB44 0014BC24  90 7C 00 00 */	stw r3, 0x0(r28)
/* 8014EB48 0014BC28  80 01 00 24 */	lwz r0, 0x24(r1)
/* 8014EB4C 0014BC2C  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 8014EB50 0014BC30  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 8014EB54 0014BC34  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 8014EB58 0014BC38  83 81 00 10 */	lwz r28, 0x10(r1)
/* 8014EB5C 0014BC3C  7C 08 03 A6 */	mtlr r0
/* 8014EB60 0014BC40  38 21 00 20 */	addi r1, r1, 0x20
/* 8014EB64 0014BC44  4E 80 00 20 */	blr
.endfn "load_param<i,i>__10auto_tweakFRiiiiP16xModelAssetParamUiPCc"

# 0x8014EB68 - 0x8014EC7C
.section .text, "ax", unique, 4
.balign 4

# xUtil_choose<int>(const int*, int, const float*)
.fn "xUtil_choose<i>__FPCiiPCf", local
/* 8014EB68 0014BC48  94 21 FF D0 */	stwu r1, -0x30(r1)
/* 8014EB6C 0014BC4C  7C 08 02 A6 */	mflr r0
/* 8014EB70 0014BC50  90 01 00 34 */	stw r0, 0x34(r1)
/* 8014EB74 0014BC54  93 E1 00 2C */	stw r31, 0x2c(r1)
/* 8014EB78 0014BC58  93 C1 00 28 */	stw r30, 0x28(r1)
/* 8014EB7C 0014BC5C  7C BE 2B 78 */	mr r30, r5
/* 8014EB80 0014BC60  93 A1 00 24 */	stw r29, 0x24(r1)
/* 8014EB84 0014BC64  7C 9D 23 78 */	mr r29, r4
/* 8014EB88 0014BC68  93 81 00 20 */	stw r28, 0x20(r1)
/* 8014EB8C 0014BC6C  7C 7C 1B 79 */	mr. r28, r3
/* 8014EB90 0014BC70  40 82 00 0C */	bne .L_8014EB9C
/* 8014EB94 0014BC74  38 60 00 00 */	li r3, 0x0
/* 8014EB98 0014BC78  48 00 00 C4 */	b .L_8014EC5C
.L_8014EB9C:
/* 8014EB9C 0014BC7C  2C 1D 00 01 */	cmpwi r29, 0x1
/* 8014EBA0 0014BC80  40 80 00 0C */	bge .L_8014EBAC
/* 8014EBA4 0014BC84  38 60 00 00 */	li r3, 0x0
/* 8014EBA8 0014BC88  48 00 00 B4 */	b .L_8014EC5C
.L_8014EBAC:
/* 8014EBAC 0014BC8C  3B E0 00 00 */	li r31, 0x0
/* 8014EBB0 0014BC90  4B EE 20 D9 */	bl xurand__Fv
/* 8014EBB4 0014BC94  28 1E 00 00 */	cmplwi r30, 0x0
/* 8014EBB8 0014BC98  40 82 00 34 */	bne .L_8014EBEC
/* 8014EBBC 0014BC9C  6F A3 80 00 */	xoris r3, r29, 0x8000
/* 8014EBC0 0014BCA0  3C 00 43 30 */	lis r0, 0x4330
/* 8014EBC4 0014BCA4  90 61 00 0C */	stw r3, 0xc(r1)
/* 8014EBC8 0014BCA8  C8 42 A6 68 */	lfd f2, "@2088"@sda21(r2)
/* 8014EBCC 0014BCAC  90 01 00 08 */	stw r0, 0x8(r1)
/* 8014EBD0 0014BCB0  C8 01 00 08 */	lfd f0, 0x8(r1)
/* 8014EBD4 0014BCB4  EC 00 10 28 */	fsubs f0, f0, f2
/* 8014EBD8 0014BCB8  EC 01 00 32 */	fmuls f0, f1, f0
/* 8014EBDC 0014BCBC  FC 00 00 1E */	fctiwz f0, f0
/* 8014EBE0 0014BCC0  D8 01 00 10 */	stfd f0, 0x10(r1)
/* 8014EBE4 0014BCC4  83 E1 00 14 */	lwz r31, 0x14(r1)
/* 8014EBE8 0014BCC8  48 00 00 54 */	b .L_8014EC3C
.L_8014EBEC:
/* 8014EBEC 0014BCCC  7F C3 F3 78 */	mr r3, r30
/* 8014EBF0 0014BCD0  C0 42 A6 34 */	lfs f2, "@1869"@sda21(r2)
/* 8014EBF4 0014BCD4  38 80 00 00 */	li r4, 0x0
/* 8014EBF8 0014BCD8  7F A9 03 A6 */	mtctr r29
/* 8014EBFC 0014BCDC  2C 1D 00 00 */	cmpwi r29, 0x0
/* 8014EC00 0014BCE0  40 81 00 3C */	ble .L_8014EC3C
.L_8014EC04:
/* 8014EC04 0014BCE4  FC 60 10 90 */	fmr f3, f2
/* 8014EC08 0014BCE8  C0 03 00 00 */	lfs f0, 0x0(r3)
/* 8014EC0C 0014BCEC  EC 42 00 2A */	fadds f2, f2, f0
/* 8014EC10 0014BCF0  FC 01 18 40 */	fcmpo cr0, f1, f3
/* 8014EC14 0014BCF4  4C 41 13 82 */	cror eq, gt, eq
/* 8014EC18 0014BCF8  40 82 00 18 */	bne .L_8014EC30
/* 8014EC1C 0014BCFC  FC 01 10 40 */	fcmpo cr0, f1, f2
/* 8014EC20 0014BD00  4C 40 13 82 */	cror eq, lt, eq
/* 8014EC24 0014BD04  40 82 00 0C */	bne .L_8014EC30
/* 8014EC28 0014BD08  7C 9F 23 78 */	mr r31, r4
/* 8014EC2C 0014BD0C  48 00 00 10 */	b .L_8014EC3C
.L_8014EC30:
/* 8014EC30 0014BD10  38 63 00 04 */	addi r3, r3, 0x4
/* 8014EC34 0014BD14  38 84 00 01 */	addi r4, r4, 0x1
/* 8014EC38 0014BD18  42 00 FF CC */	bdnz .L_8014EC04
.L_8014EC3C:
/* 8014EC3C 0014BD1C  7C 1F E8 00 */	cmpw r31, r29
/* 8014EC40 0014BD20  41 80 00 08 */	blt .L_8014EC48
/* 8014EC44 0014BD24  3B FD FF FF */	addi r31, r29, -0x1
.L_8014EC48:
/* 8014EC48 0014BD28  2C 1F 00 00 */	cmpwi r31, 0x0
/* 8014EC4C 0014BD2C  40 80 00 08 */	bge .L_8014EC54
/* 8014EC50 0014BD30  3B E0 00 00 */	li r31, 0x0
.L_8014EC54:
/* 8014EC54 0014BD34  57 E0 10 3A */	slwi r0, r31, 2
/* 8014EC58 0014BD38  7C 7C 00 2E */	lwzx r3, r28, r0
.L_8014EC5C:
/* 8014EC5C 0014BD3C  80 01 00 34 */	lwz r0, 0x34(r1)
/* 8014EC60 0014BD40  83 E1 00 2C */	lwz r31, 0x2c(r1)
/* 8014EC64 0014BD44  83 C1 00 28 */	lwz r30, 0x28(r1)
/* 8014EC68 0014BD48  83 A1 00 24 */	lwz r29, 0x24(r1)
/* 8014EC6C 0014BD4C  83 81 00 20 */	lwz r28, 0x20(r1)
/* 8014EC70 0014BD50  7C 08 03 A6 */	mtlr r0
/* 8014EC74 0014BD54  38 21 00 30 */	addi r1, r1, 0x30
/* 8014EC78 0014BD58  4E 80 00 20 */	blr
.endfn "xUtil_choose<i>__FPCiiPCf"

# 0x8026D820 - 0x8026E838
.rodata
.balign 8

.obj "@814", local
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
.endobj "@814"

# @unnamed@zNPCTypeKingJelly_cpp@::sound_flags
.obj "sound_flags__31@unnamed@zNPCTypeKingJelly_cpp@", local
	.4byte 0x01000000
	.4byte 0x00000101
	.byte 0x00, 0x00, 0x00
.endobj "sound_flags__31@unnamed@zNPCTypeKingJelly_cpp@"
	.byte 0x00

# @unnamed@zNPCTypeKingJelly_cpp@::tentacle_bone
.obj "tentacle_bone__31@unnamed@zNPCTypeKingJelly_cpp@", local
	.4byte 0x14151617
	.4byte 0x10111213
	.4byte 0x1D1E1F20
	.4byte 0x0508090B
	.4byte 0x21242527
	.4byte 0x0C0D0E0F
	.4byte 0x18191A1C
.endobj "tentacle_bone__31@unnamed@zNPCTypeKingJelly_cpp@"

.obj "@2092", local
	.4byte 0x00000001
	.4byte 0x00000002
	.4byte 0x00000003
	.4byte 0x00000007
	.4byte 0x00000008
	.4byte 0x0000000C
	.4byte 0x0000000D
	.4byte 0x0000000E
	.4byte 0x00000009
	.4byte 0x0000000F
	.4byte 0x00000000
.endobj "@2092"

.obj "@3385", local
	.4byte 0x53484F57
	.4byte 0x45522043
	.4byte 0x55525441
	.4byte 0x494E2053
	.4byte 0x494D5000
.endobj "@3385"

.obj "@3473", local
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
.endobj "@3473"

.obj "@3482", local
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
.endobj "@3482"

.obj "@stringBase0", local
	.4byte 0x4B4A5F70
	.4byte 0x756C7365
	.4byte 0x7570646F
	.4byte 0x776E004B
	.4byte 0x4A5F6772
	.4byte 0x756E7400
	.4byte 0x4B4A5F43
	.4byte 0x68617267
	.4byte 0x65004B4A
	.4byte 0x5F436865
	.4byte 0x6572004B
	.4byte 0x4A5F4C61
	.4byte 0x6E643100
	.4byte 0x4B4A5F4C
	.4byte 0x616E6432
	.4byte 0x004B4A5F
	.4byte 0x4D6F7600
	.4byte 0x4B4A5F4F
	.4byte 0x7363004B
	.4byte 0x4A5F7269
	.4byte 0x7365004B
	.4byte 0x4A5F5461
	.4byte 0x756E7400
	.4byte 0x4B4A5F50
	.4byte 0x756C7365
	.4byte 0x007A4E50
	.4byte 0x434B696E
	.4byte 0x674A656C
	.4byte 0x6C790050
	.4byte 0x4152454D
	.4byte 0x49545F4B
	.4byte 0x4A5F5350
	.4byte 0x41574E00
	.4byte 0x50415245
	.4byte 0x4D49545F
	.4byte 0x4B4A5F5A
	.4byte 0x41500050
	.4byte 0x4152454D
	.4byte 0x49545F4B
	.4byte 0x4A5F5348
	.4byte 0x4F434B5F
	.4byte 0x52494E47
	.4byte 0x00504152
	.4byte 0x454D4954
	.4byte 0x5F4B4A5F
	.4byte 0x5448554D
	.4byte 0x505F5249
	.4byte 0x4E470054
	.4byte 0x55425F57
	.4byte 0x41544552
	.4byte 0x5F53494D
	.4byte 0x50006D61
	.4byte 0x785F6C69
	.4byte 0x6665006D
	.4byte 0x696E5F64
	.4byte 0x69737400
.L_8026D990:
	.4byte 0x6D6F7665
	.4byte 0x5F726164
	.4byte 0x69757300
	.4byte 0x76656C5F
	.4byte 0x64656361
	.4byte 0x79007265
	.4byte 0x70656C5F
	.4byte 0x72616469
	.4byte 0x75730072
	.4byte 0x6570656C
	.4byte 0x5F726164
	.4byte 0x6975735F
	.4byte 0x67726F75
	.4byte 0x6E640066
	.4byte 0x6164655F
	.4byte 0x6F627374
	.4byte 0x72756374
	.4byte 0x696F6E73
	.4byte 0x006D7573
	.4byte 0x69635F66
	.4byte 0x61646500
	.4byte 0x6D757369
	.4byte 0x635F6661
	.4byte 0x64655F64
	.4byte 0x656C6179
	.4byte 0x00626C69
	.4byte 0x6E6B2E64
	.4byte 0x75726174
	.4byte 0x696F6E00
	.4byte 0x626C696E
	.4byte 0x6B2E616D
	.4byte 0x6F756E74
	.4byte 0x00626C69
	.4byte 0x6E6B2E64
	.4byte 0x726F705F
	.4byte 0x6F666600
	.4byte 0x626C696E
	.4byte 0x6B2E636F
	.4byte 0x6C6F722E
	.4byte 0x7200626C
	.4byte 0x696E6B2E
	.4byte 0x636F6C6F
	.4byte 0x722E6700
	.4byte 0x626C696E
	.4byte 0x6B2E636F
	.4byte 0x6C6F722E
	.4byte 0x6200626C
	.4byte 0x696E6B2E
	.4byte 0x636F6C6F
	.4byte 0x722E6100
	.4byte 0x696E7465
	.4byte 0x7276616C
	.4byte 0x2E766172
	.4byte 0x69616E63
	.4byte 0x6500696E
	.4byte 0x74657276
	.4byte 0x616C2E61
	.4byte 0x74746163
	.4byte 0x6B5B305D
	.4byte 0x00696E74
	.4byte 0x65727661
	.4byte 0x6C2E6174
	.4byte 0x7461636B
	.4byte 0x5B315D00
	.4byte 0x696E7465
	.4byte 0x7276616C
	.4byte 0x2E617474
	.4byte 0x61636B5B
	.4byte 0x325D0069
	.4byte 0x6E746572
	.4byte 0x76616C2E
	.4byte 0x7761726D
	.4byte 0x5F757000
	.4byte 0x696E7465
	.4byte 0x7276616C
	.4byte 0x2E72656C
	.4byte 0x65617365
	.4byte 0x00696E74
	.4byte 0x65727661
	.4byte 0x6C2E636F
	.4byte 0x6F6C5F64
	.4byte 0x6F776E00
	.4byte 0x73706177
	.4byte 0x6E2E6379
	.4byte 0x636C6573
	.4byte 0x00737061
	.4byte 0x776E2E76
	.4byte 0x6F666673
	.4byte 0x65740073
	.4byte 0x7061776E
	.4byte 0x2E686F66
	.4byte 0x66736574
	.4byte 0x00737061
	.4byte 0x776E2E64
	.4byte 0x656C6179
	.4byte 0x00737061
	.4byte 0x776E2E66
	.4byte 0x616C6C5F
	.4byte 0x74696D65
	.4byte 0x00737061
	.4byte 0x776E2E73
	.4byte 0x7065772E
	.4byte 0x73706565
	.4byte 0x64007370
	.4byte 0x61776E2E
	.4byte 0x73706577
	.4byte 0x2E64726F
	.4byte 0x705F6F66
	.4byte 0x66007370
	.4byte 0x61776E2E
	.4byte 0x73706577
	.4byte 0x2E64656C
	.4byte 0x61790073
	.4byte 0x7061776E
	.4byte 0x2E737065
	.4byte 0x772E766F
	.4byte 0x66667365
	.4byte 0x74007761
	.4byte 0x76655F72
	.4byte 0x696E672E
	.4byte 0x6D696E5F
	.4byte 0x72616469
	.4byte 0x75730077
	.4byte 0x6176655F
	.4byte 0x72696E67
	.4byte 0x2E6D6178
	.4byte 0x5F726164
	.4byte 0x69757300
	.4byte 0x77617665
	.4byte 0x5F72696E
	.4byte 0x672E6865
	.4byte 0x69676874
	.4byte 0x00776176
	.4byte 0x655F7269
	.4byte 0x6E672E66
	.4byte 0x6164655F
	.4byte 0x74696D65
	.4byte 0x00776176
	.4byte 0x655F7269
	.4byte 0x6E672E6D
	.4byte 0x61785F76
	.4byte 0x656C0077
	.4byte 0x6176655F
	.4byte 0x72696E67
	.4byte 0x2E616363
	.4byte 0x656C0077
	.4byte 0x6176655F
	.4byte 0x72696E67
	.4byte 0x2E736567
	.4byte 0x6D656E74
	.4byte 0x5F6C656E
	.4byte 0x67746800
	.4byte 0x77617665
	.4byte 0x5F72696E
	.4byte 0x672E7061
	.4byte 0x72746963
	.4byte 0x6C655F68
	.4byte 0x65696768
	.4byte 0x74007761
	.4byte 0x76655F72
	.4byte 0x696E672E
	.4byte 0x70617274
	.4byte 0x69636C65
	.4byte 0x73007761
	.4byte 0x76655F72
	.4byte 0x696E672E
	.4byte 0x64616D61
	.4byte 0x67655F68
	.4byte 0x65696768
	.4byte 0x74007761
	.4byte 0x76655F72
	.4byte 0x696E672E
	.4byte 0x64616D61
	.4byte 0x67655F77
	.4byte 0x69647468
	.4byte 0x00776176
	.4byte 0x655F7269
	.4byte 0x6E672E6B
	.4byte 0x6E6F636B
	.4byte 0x5F626163
	.4byte 0x6B007761
	.4byte 0x76655F72
	.4byte 0x696E672E
	.4byte 0x756E6974
	.4byte 0x5B305D2E
	.4byte 0x72616469
	.4byte 0x75735F6F
	.4byte 0x66667365
	.4byte 0x74007761
	.4byte 0x76655F72
	.4byte 0x696E672E
	.4byte 0x756E6974
	.4byte 0x5B305D2E
	.4byte 0x68656967
	.4byte 0x68745F6F
	.4byte 0x66667365
	.4byte 0x74007761
	.4byte 0x76655F72
	.4byte 0x696E672E
	.4byte 0x756E6974
	.4byte 0x5B305D2E
	.4byte 0x6C696E65
	.4byte 0x00776176
	.4byte 0x655F7269
	.4byte 0x6E672E75
	.4byte 0x6E69745B
	.4byte 0x305D2E74
	.4byte 0x6869636B
	.4byte 0x6E657373
	.4byte 0x00776176
	.4byte 0x655F7269
	.4byte 0x6E672E75
	.4byte 0x6E69745B
	.4byte 0x305D2E63
	.4byte 0x6F6C6F72
	.4byte 0x00776176
	.4byte 0x655F7269
	.4byte 0x6E672E75
	.4byte 0x6E69745B
	.4byte 0x305D2E72
	.4byte 0x6F745F72
	.4byte 0x61646975
	.4byte 0x73007761
	.4byte 0x76655F72
	.4byte 0x696E672E
	.4byte 0x756E6974
	.4byte 0x5B305D2E
	.4byte 0x64656772
	.4byte 0x65657300
	.4byte 0x77617665
	.4byte 0x5F72696E
	.4byte 0x672E756E
	.4byte 0x69745B31
	.4byte 0x5D2E7261
	.4byte 0x64697573
	.4byte 0x5F6F6666
	.4byte 0x73657400
	.4byte 0x77617665
	.4byte 0x5F72696E
	.4byte 0x672E756E
	.4byte 0x69745B31
	.4byte 0x5D2E6865
	.4byte 0x69676874
	.4byte 0x5F6F6666
	.4byte 0x73657400
	.4byte 0x77617665
	.4byte 0x5F72696E
	.4byte 0x672E756E
	.4byte 0x69745B31
	.4byte 0x5D2E6C69
	.4byte 0x6E650077
	.4byte 0x6176655F
	.4byte 0x72696E67
	.4byte 0x2E756E69
	.4byte 0x745B315D
	.4byte 0x2E746869
	.4byte 0x636B6E65
	.4byte 0x73730077
	.4byte 0x6176655F
	.4byte 0x72696E67
	.4byte 0x2E756E69
	.4byte 0x745B315D
	.4byte 0x2E636F6C
	.4byte 0x6F720077
	.4byte 0x6176655F
	.4byte 0x72696E67
	.4byte 0x2E756E69
	.4byte 0x745B315D
	.4byte 0x2E726F74
	.4byte 0x5F726164
	.4byte 0x69757300
	.4byte 0x77617665
	.4byte 0x5F72696E
	.4byte 0x672E756E
	.4byte 0x69745B31
	.4byte 0x5D2E6465
	.4byte 0x67726565
	.4byte 0x73007761
	.4byte 0x76655F72
	.4byte 0x696E672E
	.4byte 0x756E6974
	.4byte 0x5B325D2E
	.4byte 0x72616469
	.4byte 0x75735F6F
	.4byte 0x66667365
	.4byte 0x74007761
	.4byte 0x76655F72
	.4byte 0x696E672E
	.4byte 0x756E6974
	.4byte 0x5B325D2E
	.4byte 0x68656967
	.4byte 0x68745F6F
	.4byte 0x66667365
	.4byte 0x74007761
	.4byte 0x76655F72
	.4byte 0x696E672E
	.4byte 0x756E6974
	.4byte 0x5B325D2E
	.4byte 0x6C696E65
	.4byte 0x00776176
	.4byte 0x655F7269
	.4byte 0x6E672E75
	.4byte 0x6E69745B
	.4byte 0x325D2E74
	.4byte 0x6869636B
	.4byte 0x6E657373
	.4byte 0x00776176
	.4byte 0x655F7269
	.4byte 0x6E672E75
	.4byte 0x6E69745B
	.4byte 0x325D2E63
	.4byte 0x6F6C6F72
	.4byte 0x00776176
	.4byte 0x655F7269
	.4byte 0x6E672E75
	.4byte 0x6E69745B
	.4byte 0x325D2E72
	.4byte 0x6F745F72
	.4byte 0x61646975
	.4byte 0x73007761
	.4byte 0x76655F72
	.4byte 0x696E672E
	.4byte 0x756E6974
	.4byte 0x5B325D2E
	.4byte 0x64656772
	.4byte 0x65657300
	.4byte 0x77617665
	.4byte 0x5F72696E
	.4byte 0x672E756E
	.4byte 0x69745B33
	.4byte 0x5D2E7261
	.4byte 0x64697573
	.4byte 0x5F6F6666
	.4byte 0x73657400
	.4byte 0x77617665
	.4byte 0x5F72696E
	.4byte 0x672E756E
	.4byte 0x69745B33
	.4byte 0x5D2E6865
	.4byte 0x69676874
	.4byte 0x5F6F6666
	.4byte 0x73657400
	.4byte 0x77617665
	.4byte 0x5F72696E
	.4byte 0x672E756E
	.4byte 0x69745B33
	.4byte 0x5D2E6C69
	.4byte 0x6E650077
	.4byte 0x6176655F
	.4byte 0x72696E67
	.4byte 0x2E756E69
	.4byte 0x745B335D
	.4byte 0x2E746869
	.4byte 0x636B6E65
	.4byte 0x73730077
	.4byte 0x6176655F
	.4byte 0x72696E67
	.4byte 0x2E756E69
	.4byte 0x745B335D
	.4byte 0x2E636F6C
	.4byte 0x6F720077
	.4byte 0x6176655F
	.4byte 0x72696E67
	.4byte 0x2E756E69
	.4byte 0x745B335D
	.4byte 0x2E726F74
	.4byte 0x5F726164
	.4byte 0x69757300
	.4byte 0x77617665
	.4byte 0x5F72696E
	.4byte 0x672E756E
	.4byte 0x69745B33
	.4byte 0x5D2E6465
	.4byte 0x67726565
	.4byte 0x7300616D
	.4byte 0x6269656E
	.4byte 0x745F7269
	.4byte 0x6E672E72
	.4byte 0x61646975
	.4byte 0x7300616D
	.4byte 0x6269656E
	.4byte 0x745F7269
	.4byte 0x6E672E6D
	.4byte 0x696E5F68
	.4byte 0x65696768
.L_8026DF94:
	.4byte 0x7400616D
	.4byte 0x6269656E
	.4byte 0x745F7269
.L_8026DFA0:
	.4byte 0x6E672E6D
	.4byte 0x61785F68
	.4byte 0x65696768
	.4byte 0x7400616D
	.4byte 0x6269656E
	.4byte 0x745F7269
	.4byte 0x6E672E73
	.4byte 0x70656564
	.4byte 0x00616D62
	.4byte 0x69656E74
	.4byte 0x5F72696E
	.4byte 0x672E7365
	.4byte 0x676D656E
	.4byte 0x745F6C65
	.4byte 0x6E677468
	.4byte 0x00616D62
	.4byte 0x69656E74
	.4byte 0x5F72696E
	.4byte 0x672E7468
	.4byte 0x69636B6E
	.4byte 0x65737300
	.4byte 0x616D6269
.L_8026DFF8:
	.4byte 0x656E745F
	.4byte 0x72696E67
	.4byte 0x2E636F6C
	.4byte 0x6F720061
	.4byte 0x6D626965
	.4byte 0x6E745F72
	.4byte 0x696E672E
	.4byte 0x6B6E6F63
	.4byte 0x6B5F6261
	.4byte 0x636B0061
	.4byte 0x6D626965
	.4byte 0x6E745F72
	.4byte 0x696E672E
	.4byte 0x63686172
	.4byte 0x67652E72
	.4byte 0x61646975
	.4byte 0x7300616D
	.4byte 0x6269656E
	.4byte 0x745F7269
	.4byte 0x6E672E63
	.4byte 0x68617267
	.4byte 0x652E6D61
	.4byte 0x785F6865
	.4byte 0x69676874
	.4byte 0x00616D62
	.4byte 0x69656E74
	.4byte 0x5F72696E
	.4byte 0x672E6368
	.4byte 0x61726765
.L_8026E06C:
	.4byte 0x2E737065
	.4byte 0x65640061
	.4byte 0x6D626965
	.4byte 0x6E745F72
	.4byte 0x696E672E
	.4byte 0x63686172
	.4byte 0x67652E74
	.4byte 0x6869636B
	.4byte 0x6E657373
	.4byte 0x00616D62
	.4byte 0x69656E74
	.4byte 0x5F72696E
	.4byte 0x672E6368
	.4byte 0x61726765
	.4byte 0x2E636F6C
	.4byte 0x6F720074
	.4byte 0x656E7461
	.4byte 0x636C652E
	.4byte 0x74686963
	.4byte 0x6B6E6573
	.4byte 0x73007465
	.4byte 0x6E746163
	.4byte 0x6C652E72
	.4byte 0x616E645F
	.4byte 0x72616469
	.4byte 0x75730074
	.4byte 0x656E7461
	.4byte 0x636C652E
	.4byte 0x726F745F
	.4byte 0x72616469
	.4byte 0x75730074
	.4byte 0x656E7461
	.4byte 0x636C652E
	.4byte 0x6D6F7665
	.4byte 0x5F646567
	.4byte 0x72656573
	.4byte 0x0074656E
	.4byte 0x7461636C
	.4byte 0x652E636F
	.4byte 0x6C6F7200
	.4byte 0x74656E74
	.4byte 0x61636C65
	.4byte 0x2E64656C
	.4byte 0x61790074
.L_8026E11C:
	.4byte 0x656E7461
	.4byte 0x636C652E
	.4byte 0x74696D65
	.4byte 0x0074656E
	.4byte 0x7461636C
	.4byte 0x652E6D61
	.4byte 0x78007465
	.4byte 0x6E746163
	.4byte 0x6C652E70
	.4byte 0x61727469
	.4byte 0x636C6573
	.4byte 0x0074656E
	.4byte 0x7461636C
	.4byte 0x652E6B6E
	.4byte 0x6F636B5F
	.4byte 0x6261636B
	.4byte 0x0074656E
	.4byte 0x7461636C
	.4byte 0x652E6461
	.4byte 0x6D616765
	.4byte 0x5F776964
	.4byte 0x74680074
	.4byte 0x656E7461
	.4byte 0x636C652E
	.4byte 0x63686172
	.4byte 0x67652E74
	.4byte 0x6869636B
	.4byte 0x6E657373
	.4byte 0x0074656E
	.4byte 0x7461636C
	.4byte 0x652E6368
	.4byte 0x61726765
	.4byte 0x2E636F6C
	.4byte 0x6F720074
	.4byte 0x656E7461
	.4byte 0x636C652E
	.4byte 0x63686172
	.4byte 0x67652E6D
	.4byte 0x6F76655F
	.4byte 0x64656772
	.4byte 0x65657300
	.4byte 0x7468756D
	.4byte 0x702E6465
	.4byte 0x6C617900
	.4byte 0x7468756D
	.4byte 0x702E7269
	.4byte 0x6E677300
	.4byte 0x7468756D
	.4byte 0x702E766F
	.4byte 0x66667365
	.4byte 0x74007468
	.4byte 0x756D702E
	.4byte 0x70617274
	.4byte 0x69636C65
	.4byte 0x73007468
	.4byte 0x756D702E
	.4byte 0x72616469
	.4byte 0x75730074
	.4byte 0x68756D70
	.4byte 0x2E776964
	.4byte 0x74680074
	.4byte 0x68756D70
	.4byte 0x2E76656C
	.4byte 0x00746875
	.4byte 0x6D702E70
	.4byte 0x61727469
	.4byte 0x636C655F
	.4byte 0x64726F70
	.4byte 0x5F6F6666
	.4byte 0x00746875
	.4byte 0x6D702E76
	.4byte 0x656C5F64
	.4byte 0x726F705F
	.4byte 0x6F666600
	.4byte 0x736F756E
	.4byte 0x645B534F
	.4byte 0x554E445F
	.4byte 0x414D4249
	.4byte 0x454E545F
	.4byte 0x52494E47
	.4byte 0x5D2E766F
	.4byte 0x6C756D65
	.4byte 0x00736F75
	.4byte 0x6E645B53
	.4byte 0x4F554E44
	.4byte 0x5F414D42
	.4byte 0x49454E54
	.4byte 0x5F52494E
	.4byte 0x475D2E72
	.4byte 0x61646975
	.4byte 0x735F696E
	.4byte 0x6E657200
	.4byte 0x736F756E
	.4byte 0x645B534F
	.4byte 0x554E445F
	.4byte 0x414D4249
	.4byte 0x454E545F
	.4byte 0x52494E47
	.4byte 0x5D2E7261
	.4byte 0x64697573
	.4byte 0x5F6F7574
	.4byte 0x65720073
	.4byte 0x6F756E64
	.4byte 0x5B534F55
	.4byte 0x4E445F41
	.4byte 0x4D424945
	.4byte 0x4E545F52
	.4byte 0x494E475D
	.4byte 0x2E707269
	.4byte 0x6F726974
	.4byte 0x7900736F
	.4byte 0x756E645B
	.4byte 0x534F554E
	.4byte 0x445F4249
	.4byte 0x5254485D
	.4byte 0x2E766F6C
	.4byte 0x756D6500
	.4byte 0x736F756E
	.4byte 0x645B534F
	.4byte 0x554E445F
	.4byte 0x42495254
	.4byte 0x485D2E64
	.4byte 0x656C6179
	.4byte 0x00736F75
	.4byte 0x6E645B53
	.4byte 0x4F554E44
	.4byte 0x5F424952
	.4byte 0x54485D2E
	.4byte 0x72616469
	.4byte 0x75735F69
	.4byte 0x6E6E6572
	.4byte 0x00736F75
	.4byte 0x6E645B53
	.4byte 0x4F554E44
	.4byte 0x5F424952
	.4byte 0x54485D2E
	.4byte 0x72616469
	.4byte 0x75735F6F
	.4byte 0x75746572
	.4byte 0x00736F75
	.4byte 0x6E645B53
	.4byte 0x4F554E44
	.4byte 0x5F424952
	.4byte 0x54485D2E
	.4byte 0x7072696F
	.4byte 0x72697479
	.4byte 0x00736F75
	.4byte 0x6E645B53
	.4byte 0x4F554E44
	.4byte 0x5F434841
	.4byte 0x5247455D
	.4byte 0x2E766F6C
	.4byte 0x756D6500
	.4byte 0x736F756E
	.4byte 0x645B534F
	.4byte 0x554E445F
	.4byte 0x43484152
	.4byte 0x47455D2E
	.4byte 0x64656C61
	.4byte 0x7900736F
	.4byte 0x756E645B
	.4byte 0x534F554E
	.4byte 0x445F4348
	.4byte 0x41524745
	.4byte 0x5D2E7261
	.4byte 0x64697573
	.4byte 0x5F696E6E
	.4byte 0x65720073
	.4byte 0x6F756E64
	.4byte 0x5B534F55
	.4byte 0x4E445F43
	.4byte 0x48415247
	.4byte 0x455D2E72
	.4byte 0x61646975
	.4byte 0x735F6F75
	.4byte 0x74657200
	.4byte 0x736F756E
	.4byte 0x645B534F
	.4byte 0x554E445F
	.4byte 0x43484152
	.4byte 0x47455D2E
	.4byte 0x7072696F
	.4byte 0x72697479
	.4byte 0x00736F75
	.4byte 0x6E645B53
	.4byte 0x4F554E44
	.4byte 0x5F434845
	.4byte 0x45525D2E
	.4byte 0x766F6C75
	.4byte 0x6D650073
	.4byte 0x6F756E64
	.4byte 0x5B534F55
	.4byte 0x4E445F43
	.4byte 0x48454552
	.4byte 0x5D2E6465
	.4byte 0x6C617900
	.4byte 0x736F756E
	.4byte 0x645B534F
	.4byte 0x554E445F
	.4byte 0x43484545
	.4byte 0x525D2E72
	.4byte 0x61646975
	.4byte 0x735F696E
	.4byte 0x6E657200
	.4byte 0x736F756E
	.4byte 0x645B534F
	.4byte 0x554E445F
	.4byte 0x43484545
	.4byte 0x525D2E72
	.4byte 0x61646975
	.4byte 0x735F6F75
	.4byte 0x74657200
	.4byte 0x736F756E
	.4byte 0x645B534F
	.4byte 0x554E445F
	.4byte 0x43484545
	.4byte 0x525D2E70
	.4byte 0x72696F72
	.4byte 0x69747900
	.4byte 0x736F756E
	.4byte 0x645B534F
	.4byte 0x554E445F
	.4byte 0x4752554E
	.4byte 0x545D2E76
	.4byte 0x6F6C756D
	.4byte 0x6500736F
	.4byte 0x756E645B
	.4byte 0x534F554E
	.4byte 0x445F4752
	.4byte 0x554E545D
	.4byte 0x2E64656C
	.4byte 0x61790073
	.4byte 0x6F756E64
	.4byte 0x5B534F55
	.4byte 0x4E445F47
	.4byte 0x52554E54
	.4byte 0x5D2E7261
	.4byte 0x64697573
	.4byte 0x5F696E6E
	.4byte 0x65720073
	.4byte 0x6F756E64
	.4byte 0x5B534F55
	.4byte 0x4E445F47
	.4byte 0x52554E54
	.4byte 0x5D2E7261
	.4byte 0x64697573
	.4byte 0x5F6F7574
	.4byte 0x65720073
	.4byte 0x6F756E64
	.4byte 0x5B534F55
	.4byte 0x4E445F47
	.4byte 0x52554E54
	.4byte 0x5D2E7072
	.4byte 0x696F7269
	.4byte 0x74790073
	.4byte 0x6F756E64
	.4byte 0x5B534F55
	.4byte 0x4E445F4C
	.4byte 0x414E445D
	.4byte 0x2E766F6C
	.4byte 0x756D6500
	.4byte 0x736F756E
	.4byte 0x645B534F
	.4byte 0x554E445F
	.4byte 0x4C414E44
	.4byte 0x5D2E6465
	.4byte 0x6C617900
	.4byte 0x736F756E
	.4byte 0x645B534F
	.4byte 0x554E445F
	.4byte 0x4C414E44
	.4byte 0x5D2E7261
	.4byte 0x64697573
	.4byte 0x5F696E6E
	.4byte 0x65720073
	.4byte 0x6F756E64
.L_8026E56C:
	.4byte 0x5B534F55
	.4byte 0x4E445F4C
	.4byte 0x414E445D
	.4byte 0x2E726164
	.4byte 0x6975735F
	.4byte 0x6F757465
	.4byte 0x7200736F
	.4byte 0x756E645B
	.4byte 0x534F554E
	.4byte 0x445F4C41
	.4byte 0x4E445D2E
	.4byte 0x7072696F
	.4byte 0x72697479
	.4byte 0x00736F75
.L_8026E5A4:
	.4byte 0x6E645B53
	.4byte 0x4F554E44
	.4byte 0x5F4D4F56
	.4byte 0x455D2E76
	.4byte 0x6F6C756D
	.4byte 0x6500736F
	.4byte 0x756E645B
	.4byte 0x534F554E
	.4byte 0x445F4D4F
	.4byte 0x56455D2E
	.4byte 0x72616469
	.4byte 0x75735F69
	.4byte 0x6E6E6572
	.4byte 0x00736F75
	.4byte 0x6E645B53
	.4byte 0x4F554E44
	.4byte 0x5F4D4F56
	.4byte 0x455D2E72
	.4byte 0x61646975
	.4byte 0x735F6F75
	.4byte 0x74657200
	.4byte 0x736F756E
	.4byte 0x645B534F
	.4byte 0x554E445F
	.4byte 0x4D4F5645
	.4byte 0x5D2E7072
	.4byte 0x696F7269
	.4byte 0x74790073
	.4byte 0x6F756E64
.L_8026E618:
	.4byte 0x5B534F55
	.4byte 0x4E445F4F
	.4byte 0x5343494C
	.4byte 0x4C415445
	.4byte 0x5D2E766F
	.4byte 0x6C756D65
	.4byte 0x00736F75
	.4byte 0x6E645B53
	.4byte 0x4F554E44
	.4byte 0x5F4F5343
	.4byte 0x494C4C41
	.4byte 0x54455D2E
	.4byte 0x72616469
	.4byte 0x75735F69
	.4byte 0x6E6E6572
	.4byte 0x00736F75
	.4byte 0x6E645B53
.L_8026E65C:
	.4byte 0x4F554E44
	.4byte 0x5F4F5343
	.4byte 0x494C4C41
	.4byte 0x54455D2E
	.4byte 0x72616469
	.4byte 0x75735F6F
	.4byte 0x75746572
	.4byte 0x00736F75
	.4byte 0x6E645B53
	.4byte 0x4F554E44
	.4byte 0x5F4F5343
	.4byte 0x494C4C41
	.4byte 0x54455D2E
	.4byte 0x7072696F
	.4byte 0x72697479
	.4byte 0x00736F75
	.4byte 0x6E645B53
	.4byte 0x4F554E44
	.4byte 0x5F524953
	.4byte 0x455D2E76
	.4byte 0x6F6C756D
	.4byte 0x6500736F
	.4byte 0x756E645B
	.4byte 0x534F554E
	.4byte 0x445F5249
	.4byte 0x53455D2E
	.4byte 0x64656C61
	.4byte 0x7900736F
	.4byte 0x756E645B
	.4byte 0x534F554E
	.4byte 0x445F5249
	.4byte 0x53455D2E
	.4byte 0x72616469
	.4byte 0x75735F69
	.4byte 0x6E6E6572
	.4byte 0x00736F75
	.4byte 0x6E645B53
	.4byte 0x4F554E44
	.4byte 0x5F524953
	.4byte 0x455D2E72
	.4byte 0x61646975
	.4byte 0x735F6F75
	.4byte 0x74657200
	.4byte 0x736F756E
	.4byte 0x645B534F
	.4byte 0x554E445F
	.4byte 0x52495345
	.4byte 0x5D2E7072
	.4byte 0x696F7269
	.4byte 0x74790073
	.4byte 0x6F756E64
	.4byte 0x5B534F55
	.4byte 0x4E445F54
	.4byte 0x41554E54
	.4byte 0x5D2E766F
	.4byte 0x6C756D65
	.4byte 0x00736F75
	.4byte 0x6E645B53
	.4byte 0x4F554E44
	.4byte 0x5F544155
	.4byte 0x4E545D2E
	.4byte 0x64656C61
	.4byte 0x7900736F
	.4byte 0x756E645B
	.4byte 0x534F554E
	.4byte 0x445F5441
	.4byte 0x554E545D
	.4byte 0x2E726164
	.4byte 0x6975735F
	.4byte 0x696E6E65
	.4byte 0x7200736F
	.4byte 0x756E645B
	.4byte 0x534F554E
	.4byte 0x445F5441
	.4byte 0x554E545D
	.4byte 0x2E726164
	.4byte 0x6975735F
	.4byte 0x6F757465
	.4byte 0x7200736F
	.4byte 0x756E645B
	.4byte 0x534F554E
	.4byte 0x445F5441
	.4byte 0x554E545D
	.4byte 0x2E707269
	.4byte 0x6F726974
	.4byte 0x7900736F
	.4byte 0x756E645B
	.4byte 0x534F554E
	.4byte 0x445F5741
	.4byte 0x56455F52
	.4byte 0x494E475D
	.4byte 0x2E766F6C
	.4byte 0x756D6500
	.4byte 0x736F756E
	.4byte 0x645B534F
	.4byte 0x554E445F
	.4byte 0x57415645
	.4byte 0x5F52494E
	.4byte 0x475D2E64
	.4byte 0x656C6179
	.4byte 0x00736F75
	.4byte 0x6E645B53
	.4byte 0x4F554E44
	.4byte 0x5F574156
	.4byte 0x455F5249
	.4byte 0x4E475D2E
	.4byte 0x72616469
	.4byte 0x75735F69
	.4byte 0x6E6E6572
	.4byte 0x00736F75
	.4byte 0x6E645B53
	.4byte 0x4F554E44
	.4byte 0x5F574156
	.4byte 0x455F5249
	.4byte 0x4E475D2E
	.4byte 0x7072696F
	.4byte 0x72697479
	.byte 0x00
.endobj "@stringBase0"
	.4byte 0x00000000
	.byte 0x00, 0x00, 0x00

# 0x80299DA8 - 0x8029A138
.data
.balign 8

# @unnamed@zNPCTypeKingJelly_cpp@::sound_name
.obj "sound_name__31@unnamed@zNPCTypeKingJelly_cpp@", local
	.4byte "@stringBase0"
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte "@stringBase0"+0xF
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte "@stringBase0"+0x18
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte "@stringBase0"+0x22
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte "@stringBase0"+0xF
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte "@stringBase0"+0x2B
	.4byte "@stringBase0"+0x34
	.4byte 0x00000000
	.4byte "@stringBase0"+0x3D
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte "@stringBase0"+0x44
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte "@stringBase0"+0x4B
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte "@stringBase0"+0x53
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte "@stringBase0"+0x5C
	.4byte 0x00000000
	.4byte 0x00000000
.endobj "sound_name__31@unnamed@zNPCTypeKingJelly_cpp@"

# @unnamed@zNPCTypeKingJelly_cpp@::boss_cam
.obj "boss_cam__31@unnamed@zNPCTypeKingJelly_cpp@", local
	.4byte 0x41000000
.L_80299E30:
	.4byte 0x40800000
.L_80299E34:
	.4byte 0x40400000
	.4byte 0x3E4CCCCD
	.4byte 0x400CCCCD
	.4byte 0xBF800000
	.4byte 0x3F800000
	.4byte 0x3E4CCCCD
	.4byte 0x3FC00000
.L_80299E50:
	.4byte 0x41200000
.L_80299E54:
	.4byte 0x41200000
.L_80299E58:
	.4byte 0x41200000
.L_80299E5C:
	.4byte 0x41200000
.L_80299E60:
	.4byte 0x42480000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
.L_80299E80:
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
.endobj "boss_cam__31@unnamed@zNPCTypeKingJelly_cpp@"

.obj cb_fade_obstructions$2233, local
	.4byte on_change_fade_obstructions__13zNPCKingJellyFRC10tweak_info
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
.endobj cb_fade_obstructions$2233

.obj cb_ambient_ring$2234, local
	.4byte on_change_ambient_ring__13zNPCKingJellyFRC10tweak_info
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
.endobj cb_ambient_ring$2234

.obj "@2565", local
	.rel AnimPick__13zNPCKingJellyFi16en_NPC_GOAL_SPOTP5xGoal, .L_8014A850
	.rel AnimPick__13zNPCKingJellyFi16en_NPC_GOAL_SPOTP5xGoal, .L_8014A858
	.rel AnimPick__13zNPCKingJellyFi16en_NPC_GOAL_SPOTP5xGoal, .L_8014A86C
	.rel AnimPick__13zNPCKingJellyFi16en_NPC_GOAL_SPOTP5xGoal, .L_8014A874
	.rel AnimPick__13zNPCKingJellyFi16en_NPC_GOAL_SPOTP5xGoal, .L_8014A87C
	.rel AnimPick__13zNPCKingJellyFi16en_NPC_GOAL_SPOTP5xGoal, .L_8014A884
	.rel AnimPick__13zNPCKingJellyFi16en_NPC_GOAL_SPOTP5xGoal, .L_8014A88C
.endobj "@2565"

# zNPCGoalKJDeath::__vtable
.obj __vt__15zNPCGoalKJDeath, global
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte Clear__14zNPCGoalCommonFv
	.4byte Enter__15zNPCGoalKJDeathFfPv
	.4byte Exit__15zNPCGoalKJDeathFfPv
	.4byte Suspend__5xGoalFfPv
	.4byte Resume__14zNPCGoalCommonFfPv
	.4byte PreCalc__14zNPCGoalCommonFfPv
	.4byte EvalRules__5xGoalFP11en_trantypefPv
	.4byte Process__15zNPCGoalKJDeathFP11en_trantypefPvP6xScene
	.4byte SysEvent__5xGoalFP5xBaseP5xBaseUiPCfP5xBasePi
	.4byte NPCMessage__14zNPCGoalCommonFP6NPCMsg
	.4byte CollReview__14zNPCGoalCommonFPv
.endobj __vt__15zNPCGoalKJDeath

# zNPCGoalKJDamage::__vtable
.obj __vt__16zNPCGoalKJDamage, global
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte Clear__14zNPCGoalCommonFv
	.4byte Enter__16zNPCGoalKJDamageFfPv
	.4byte Exit__16zNPCGoalKJDamageFfPv
	.4byte Suspend__5xGoalFfPv
	.4byte Resume__14zNPCGoalCommonFfPv
	.4byte PreCalc__14zNPCGoalCommonFfPv
	.4byte EvalRules__5xGoalFP11en_trantypefPv
	.4byte Process__16zNPCGoalKJDamageFP11en_trantypefPvP6xScene
	.4byte SysEvent__5xGoalFP5xBaseP5xBaseUiPCfP5xBasePi
	.4byte NPCMessage__14zNPCGoalCommonFP6NPCMsg
	.4byte CollReview__14zNPCGoalCommonFPv
.endobj __vt__16zNPCGoalKJDamage

# zNPCGoalKJShockGround::__vtable
.obj __vt__21zNPCGoalKJShockGround, global
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte Clear__14zNPCGoalCommonFv
	.4byte Enter__21zNPCGoalKJShockGroundFfPv
	.4byte Exit__21zNPCGoalKJShockGroundFfPv
	.4byte Suspend__5xGoalFfPv
	.4byte Resume__14zNPCGoalCommonFfPv
	.4byte PreCalc__14zNPCGoalCommonFfPv
	.4byte EvalRules__5xGoalFP11en_trantypefPv
	.4byte Process__21zNPCGoalKJShockGroundFP11en_trantypefPvP6xScene
	.4byte SysEvent__5xGoalFP5xBaseP5xBaseUiPCfP5xBasePi
	.4byte NPCMessage__14zNPCGoalCommonFP6NPCMsg
	.4byte CollReview__14zNPCGoalCommonFPv
.endobj __vt__21zNPCGoalKJShockGround

# zNPCGoalKJTaunt::__vtable
.obj __vt__15zNPCGoalKJTaunt, global
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte Clear__14zNPCGoalCommonFv
	.4byte Enter__15zNPCGoalKJTauntFfPv
	.4byte Exit__15zNPCGoalKJTauntFfPv
	.4byte Suspend__5xGoalFfPv
	.4byte Resume__14zNPCGoalCommonFfPv
	.4byte PreCalc__14zNPCGoalCommonFfPv
	.4byte EvalRules__5xGoalFP11en_trantypefPv
	.4byte Process__15zNPCGoalKJTauntFP11en_trantypefPvP6xScene
	.4byte SysEvent__5xGoalFP5xBaseP5xBaseUiPCfP5xBasePi
	.4byte NPCMessage__14zNPCGoalCommonFP6NPCMsg
	.4byte CollReview__14zNPCGoalCommonFPv
.endobj __vt__15zNPCGoalKJTaunt

# zNPCGoalKJSpawnKids::__vtable
.obj __vt__19zNPCGoalKJSpawnKids, global
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte Clear__14zNPCGoalCommonFv
	.4byte Enter__19zNPCGoalKJSpawnKidsFfPv
	.4byte Exit__19zNPCGoalKJSpawnKidsFfPv
	.4byte Suspend__5xGoalFfPv
	.4byte Resume__14zNPCGoalCommonFfPv
	.4byte PreCalc__14zNPCGoalCommonFfPv
	.4byte EvalRules__5xGoalFP11en_trantypefPv
	.4byte Process__19zNPCGoalKJSpawnKidsFP11en_trantypefPvP6xScene
	.4byte SysEvent__5xGoalFP5xBaseP5xBaseUiPCfP5xBasePi
	.4byte NPCMessage__14zNPCGoalCommonFP6NPCMsg
	.4byte CollReview__14zNPCGoalCommonFPv
.endobj __vt__19zNPCGoalKJSpawnKids

# zNPCGoalKJBored::__vtable
.obj __vt__15zNPCGoalKJBored, global
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte Clear__14zNPCGoalCommonFv
	.4byte Enter__15zNPCGoalKJBoredFfPv
	.4byte Exit__15zNPCGoalKJBoredFfPv
	.4byte Suspend__5xGoalFfPv
	.4byte Resume__14zNPCGoalCommonFfPv
	.4byte PreCalc__14zNPCGoalCommonFfPv
	.4byte EvalRules__5xGoalFP11en_trantypefPv
	.4byte Process__15zNPCGoalKJBoredFP11en_trantypefPvP6xScene
	.4byte SysEvent__5xGoalFP5xBaseP5xBaseUiPCfP5xBasePi
	.4byte NPCMessage__14zNPCGoalCommonFP6NPCMsg
	.4byte CollReview__14zNPCGoalCommonFPv
.endobj __vt__15zNPCGoalKJBored

# zNPCGoalKJIdle::__vtable
.obj __vt__14zNPCGoalKJIdle, global
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte Clear__14zNPCGoalCommonFv
	.4byte Enter__14zNPCGoalKJIdleFfPv
	.4byte Exit__14zNPCGoalKJIdleFfPv
	.4byte Suspend__5xGoalFfPv
	.4byte Resume__14zNPCGoalCommonFfPv
	.4byte PreCalc__14zNPCGoalCommonFfPv
	.4byte EvalRules__5xGoalFP11en_trantypefPv
	.4byte Process__14zNPCGoalKJIdleFP11en_trantypefPvP6xScene
	.4byte SysEvent__5xGoalFP5xBaseP5xBaseUiPCfP5xBasePi
	.4byte NPCMessage__14zNPCGoalCommonFP6NPCMsg
	.4byte CollReview__14zNPCGoalCommonFPv
.endobj __vt__14zNPCGoalKJIdle

# zNPCKingJelly::__vtable
.obj __vt__13zNPCKingJelly, global
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte Init__13zNPCKingJellyFP9xEntAsset
	.4byte PostInit__9xNPCBasicFv
	.4byte Setup__13zNPCKingJellyFv
	.4byte PostSetup__9xNPCBasicFv
	.4byte Reset__13zNPCKingJellyFv
	.4byte Process__13zNPCKingJellyFP6xScenef
	.4byte BUpdate__13zNPCKingJellyFP5xVec3
	.4byte NewTime__10zNPCCommonFP6xScenef
	.4byte Move__10zNPCCommonFP6xScenefP9xEntFrame
	.4byte SysEvent__13zNPCKingJellyFP5xBaseP5xBaseUiPCfP5xBasePi
	.4byte Render__9xNPCBasicFv
	.4byte Save__9xNPCBasicCFP7xSerial
	.4byte Load__9xNPCBasicFP7xSerial
	.4byte CollideReview__10zNPCCommonFv
	.4byte ColChkFlags__11zNPCSubBossCFv
	.4byte ColPenFlags__11zNPCSubBossCFv
	.4byte ColChkByFlags__11zNPCSubBossCFv
	.4byte ColPenByFlags__11zNPCSubBossCFv
	.4byte PhysicsFlags__11zNPCSubBossCFv
	.4byte Destroy__13zNPCKingJellyFv
	.4byte NPCMessage__10zNPCCommonFP6NPCMsg
	.4byte RenderExtra__13zNPCKingJellyFv
	.4byte RenderExtraPostParticles__10zNPCCommonFv
	.4byte ParseINI__13zNPCKingJellyFv
	.4byte ParseLinks__13zNPCKingJellyFv
	.4byte ParseProps__10zNPCCommonFv
	.4byte SelfSetup__13zNPCKingJellyFv
	.4byte SelfDestroy__10zNPCCommonFv
	.4byte IsHealthy__10zNPCCommonFv
	.4byte IsAlive__10zNPCCommonFv
	.4byte Damage__13zNPCKingJellyF18en_NPC_DAMAGE_TYPEP5xBasePC5xVec3
	.4byte Respawn__10zNPCCommonFPC5xVec3P10zMovePointP10zMovePoint
	.4byte DuploOwner__10zNPCCommonFP10zNPCCommon
	.4byte DuploNotice__10zNPCCommonF13en_SM_NOTICESPv
	.4byte CanRope__10zNPCCommonFv
	.4byte LassoNotify__10zNPCCommonF14en_LASSO_EVENT
	.4byte SetCarryState__10zNPCCommonF18en_NPC_CARRY_STATE
	.4byte Stun__10zNPCCommonFf
	.4byte SpeakBegin__10zNPCCommonFv
	.4byte SpeakEnd__10zNPCCommonFv
	.4byte SpeakStart__10zNPCCommonFUiUii
	.4byte SpeakStop__10zNPCCommonFv
	.4byte AnimPick__13zNPCKingJellyFi16en_NPC_GOAL_SPOTP5xGoal
	.4byte GetParm__10zNPCCommonF10en_npcparmPv
	.4byte GetParmDefault__10zNPCCommonF10en_npcparmPv
	.4byte GenShadCacheRad__10zNPCCommonFv
	.4byte PRIV_GetDriverData__10zNPCCommonFv
	.4byte PRIV_GetLassoData__10zNPCCommonFv
	.4byte LassoSetup__10zNPCCommonFv
.endobj __vt__13zNPCKingJelly
	.4byte 0x00000000

# 0x80328538 - 0x803294D0
.section .bss, "wa", @nobits
.balign 8

# @unnamed@zNPCTypeKingJelly_cpp@::tweak
.obj "tweak__31@unnamed@zNPCTypeKingJelly_cpp@", local
.sym ...bss.0, local
	.skip 0x298
.endobj "tweak__31@unnamed@zNPCTypeKingJelly_cpp@"

# @unnamed@zNPCTypeKingJelly_cpp@::sound_data
.obj "sound_data__31@unnamed@zNPCTypeKingJelly_cpp@", local
	.skip 0x108
.endobj "sound_data__31@unnamed@zNPCTypeKingJelly_cpp@"

# @unnamed@zNPCTypeKingJelly_cpp@::spawn_emitter_settings
.obj "spawn_emitter_settings__31@unnamed@zNPCTypeKingJelly_cpp@", local
	.skip 0x16C
.endobj "spawn_emitter_settings__31@unnamed@zNPCTypeKingJelly_cpp@"

# @unnamed@zNPCTypeKingJelly_cpp@::zap_emitter_settings
.obj "zap_emitter_settings__31@unnamed@zNPCTypeKingJelly_cpp@", local
	.skip 0x16C
.endobj "zap_emitter_settings__31@unnamed@zNPCTypeKingJelly_cpp@"

# @unnamed@zNPCTypeKingJelly_cpp@::shock_ring_emitter_settings
.obj "shock_ring_emitter_settings__31@unnamed@zNPCTypeKingJelly_cpp@", local
	.skip 0x16C
.endobj "shock_ring_emitter_settings__31@unnamed@zNPCTypeKingJelly_cpp@"

# @unnamed@zNPCTypeKingJelly_cpp@::thump_ring_emitter_settings
.obj "thump_ring_emitter_settings__31@unnamed@zNPCTypeKingJelly_cpp@", local
	.skip 0x16C
.endobj "thump_ring_emitter_settings__31@unnamed@zNPCTypeKingJelly_cpp@"

# @unnamed@zNPCTypeKingJelly_cpp@::ring_segments
.obj "ring_segments__31@unnamed@zNPCTypeKingJelly_cpp@", local
	.skip 0x300
.endobj "ring_segments__31@unnamed@zNPCTypeKingJelly_cpp@"

.obj sin_lookup$1918, local
	.skip 0x24
.endobj sin_lookup$1918

.obj cos_lookup$1919, local
	.skip 0x24
.endobj cos_lookup$1919

.obj segments$1929, local
	.skip 0x300
.endobj segments$1929

# 0x803CADA0 - 0x803CADA8
.section .sdata, "wa"
.balign 8

.obj last_hit_at$2858, local
	.4byte 0xFFFFFFFF
	.4byte 0xFFFFFFFF
.endobj last_hit_at$2858

# 0x803CBFB0 - 0x803CBFC8
.section .sbss, "wa", @nobits
.balign 8

# @unnamed@zNPCTypeKingJelly_cpp@::spawn_emitter
.obj "spawn_emitter__31@unnamed@zNPCTypeKingJelly_cpp@", local
	.skip 0x4
.endobj "spawn_emitter__31@unnamed@zNPCTypeKingJelly_cpp@"

# @unnamed@zNPCTypeKingJelly_cpp@::zap_emitter
.obj "zap_emitter__31@unnamed@zNPCTypeKingJelly_cpp@", local
	.skip 0x4
.endobj "zap_emitter__31@unnamed@zNPCTypeKingJelly_cpp@"

# @unnamed@zNPCTypeKingJelly_cpp@::shock_ring_emitter
.obj "shock_ring_emitter__31@unnamed@zNPCTypeKingJelly_cpp@", local
	.skip 0x4
.endobj "shock_ring_emitter__31@unnamed@zNPCTypeKingJelly_cpp@"

# @unnamed@zNPCTypeKingJelly_cpp@::thump_ring_emitter
.obj "thump_ring_emitter__31@unnamed@zNPCTypeKingJelly_cpp@", local
	.skip 0x4
.endobj "thump_ring_emitter__31@unnamed@zNPCTypeKingJelly_cpp@"

.obj sclookup_inited$1915, local
	.skip 0x1
.endobj sclookup_inited$1915

.obj init$1916, local
	.skip 0x1
.endobj init$1916
	.skip 0x6

# 0x803CEFB0 - 0x803CF0E8
.section .sdata2, "a"
.balign 8

.obj "@1868", local
	.4byte 0x3F800000
.endobj "@1868"

.obj "@1869", local
	.4byte 0x00000000
.endobj "@1869"

# @unnamed@zNPCTypeKingJelly_cpp@::bored_anims
.obj "bored_anims__31@unnamed@zNPCTypeKingJelly_cpp@", local
	.4byte 0x00000002
	.4byte 0x00000003
.endobj "bored_anims__31@unnamed@zNPCTypeKingJelly_cpp@"

.obj "@1973", local
	.4byte 0x3DC90FDB
.endobj "@1973"

.obj "@1974", local
	.4byte 0x3F7FFF58
.endobj "@1974"

.obj "@1975", local
	.4byte 0x40490FDB
.endobj "@1975"

.obj "@1976", local
	.4byte 0x40000000
.endobj "@1976"

.obj "@1987", local
	.4byte 0x3F000000
.endobj "@1987"

.obj "@1992", local
	.4byte 0x40C90FDB
.endobj "@1992"

.obj "@2007", local
	.4byte 0x437F0000
.endobj "@2007"

.obj "@2084", local
	.4byte 0x47C35000
.endobj "@2084"

.obj "@2085", local
	.4byte 0x43B40000
.endobj "@2085"

.obj "@2086", local
	.4byte 0x3F400000
.endobj "@2086"

.obj "@2088", local
	.4byte 0x43300000
	.4byte 0x80000000
.endobj "@2088"

.obj "@2105", local
	.4byte 0x3E4CCCCD
.endobj "@2105"

.obj "@2106", local
	.4byte 0x3DCCCCCD
.endobj "@2106"

.obj "@2146", local
	.4byte 0x426FFFFF
.endobj "@2146"

.obj "@2147", local
	.4byte 0x41100000
.endobj "@2147"

.obj "@2148", local
	.4byte 0x4111999A
.endobj "@2148"

.obj "@2149", local
	.4byte 0x40900000
.endobj "@2149"

.obj "@2197", local
	.4byte 0x3A83126F
.endobj "@2197"

.obj "@2406", local
	.4byte 0x40800000
.endobj "@2406"

.obj "@2407", local
	.4byte 0x41200000
.endobj "@2407"

.obj "@2408", local
	.4byte 0x41500000
.endobj "@2408"

.obj "@2409", local
	.4byte 0x41A00000
.endobj "@2409"

.obj "@2410", local
	.4byte 0x3F4CCCCD
.endobj "@2410"

.obj "@2411", local
	.4byte 0x3FE66666
.endobj "@2411"

.obj "@2412", local
	.4byte 0x447A0000
.endobj "@2412"

.obj "@2413", local
	.4byte 0x404CCCCD
.endobj "@2413"

.obj "@2414", local
	.4byte 0x3ECCCCCD
.endobj "@2414"

.obj "@2415", local
	.4byte 0x42C80000
.endobj "@2415"

.obj "@2416", local
	.4byte 0x40600000
.endobj "@2416"

.obj "@2417", local
	.4byte 0x40200000
.endobj "@2417"

.obj "@2418", local
	.4byte 0x4E6E6B28
.endobj "@2418"

.obj "@2419", local
	.4byte 0x3E800000
.endobj "@2419"

.obj "@2420", local
	.4byte 0x40400000
.endobj "@2420"

.obj "@2421", local
	.4byte 0xC2C80000
.endobj "@2421"

.obj "@2422", local
	.4byte 0x457A0000
.endobj "@2422"

.obj "@2423", local
	.4byte 0xC5BB8000
.endobj "@2423"

.obj "@2424", local
	.4byte 0xCE6E6B28
.endobj "@2424"

.obj "@2425", local
	.4byte 0xC0000000
.endobj "@2425"

.obj "@2426", local
	.4byte 0x41C80000
.endobj "@2426"

.obj "@2427", local
	.4byte 0x461C4000
.endobj "@2427"

.obj "@2428", local
	.4byte 0x428C0000
.endobj "@2428"

.obj "@2429", local
	.4byte 0x3C23D70A
.endobj "@2429"

.obj "@2430", local
	.4byte 0xBE99999A
.endobj "@2430"

.obj "@2431", local
	.4byte 0xC1200000
.endobj "@2431"

.obj "@2432", local
	.4byte 0x459C4000
.endobj "@2432"

.obj "@2433", local
	.4byte 0x49742400
.endobj "@2433"

.obj "@2434", local
	.4byte 0x3E99999A
.endobj "@2434"

.obj "@2435", local
	.4byte 0x44340000
.endobj "@2435"

.obj "@2436", local
	.4byte 0x3FC00000
.endobj "@2436"

.obj "@2437", local
	.4byte 0xBF000000
.endobj "@2437"

.obj "@2438", local
	.4byte 0xBF800000
.endobj "@2438"

.obj "@2439", local
	.4byte 0x40A00000
.endobj "@2439"

.obj "@2440", local
	.4byte 0x41000000
.endobj "@2440"

.obj "@2441", local
	.4byte 0x41700000
.endobj "@2441"

.obj "@2442", local
	.4byte 0x45188000
.endobj "@2442"

.obj "@2443", local
	.4byte 0x43340000
.endobj "@2443"

.obj "@2444", local
	.4byte 0x3F19999A
.endobj "@2444"

.obj "@2445", local
	.4byte 0x43480000
.endobj "@2445"

.obj "@2446", local
	.4byte 0x3F333333
.endobj "@2446"

.obj "@2447", local
	.4byte 0x42480000
.endobj "@2447"

.obj "@2448", local
	.4byte 0x42200000
.endobj "@2448"

.obj "@2449", local
	.4byte 0x41F00000
.endobj "@2449"
	.4byte 0x00000000

.obj "@2454", local
	.4byte 0x43300000
	.4byte 0x00000000
.endobj "@2454"

.obj "@2743", local
	.4byte 0xB727C5AC
.endobj "@2743"

.obj "@2744", local
	.4byte 0x3727C5AC
.endobj "@2744"

.obj "@2823", local
	.4byte 0x3F3504F3
.endobj "@2823"

.obj "@2977", local
	.4byte 0x42B40000
.endobj "@2977"

.obj "@3258", local
	.4byte 0x3B808081
.endobj "@3258"

.obj "@3259", local
	.4byte 0x3C888889
.endobj "@3259"

.obj "@3519", local
	.4byte 0x3F666666
.endobj "@3519"
	.4byte 0x00000000
