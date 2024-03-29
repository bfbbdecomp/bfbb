.include "macros.inc"
.file "zFMV.cpp"

# 0x80092BEC - 0x80092D1C
.text
.balign 4

# zFMVPlay(char*, unsigned int, float, bool, bool)
.fn zFMVPlay__FPcUifbb, global
/* 80092BEC 0008FCCC  94 21 FF A0 */	stwu r1, -0x60(r1)
/* 80092BF0 0008FCD0  7C 08 02 A6 */	mflr r0
/* 80092BF4 0008FCD4  28 03 00 00 */	cmplwi r3, 0x0
/* 80092BF8 0008FCD8  90 01 00 64 */	stw r0, 0x64(r1)
/* 80092BFC 0008FCDC  DB E1 00 58 */	stfd f31, 0x58(r1)
/* 80092C00 0008FCE0  FF E0 08 90 */	fmr f31, f1
/* 80092C04 0008FCE4  93 E1 00 54 */	stw r31, 0x54(r1)
/* 80092C08 0008FCE8  93 C1 00 50 */	stw r30, 0x50(r1)
/* 80092C0C 0008FCEC  7C DE 33 78 */	mr r30, r6
/* 80092C10 0008FCF0  93 A1 00 4C */	stw r29, 0x4c(r1)
/* 80092C14 0008FCF4  7C BD 2B 78 */	mr r29, r5
/* 80092C18 0008FCF8  93 81 00 48 */	stw r28, 0x48(r1)
/* 80092C1C 0008FCFC  7C 9C 23 78 */	mr r28, r4
/* 80092C20 0008FD00  40 82 00 14 */	bne .L_80092C34
/* 80092C24 0008FD04  38 60 00 01 */	li r3, 0x1
/* 80092C28 0008FD08  48 00 00 84 */	b .L_80092CAC
/* 80092C2C 0008FD0C  48 00 00 08 */	b .L_80092C34
.L_80092C30:
/* 80092C30 0008FD10  38 63 00 01 */	addi r3, r3, 0x1
.L_80092C34:
/* 80092C34 0008FD14  88 03 00 00 */	lbz r0, 0x0(r3)
/* 80092C38 0008FD18  28 00 00 2F */	cmplwi r0, 0x2f
/* 80092C3C 0008FD1C  41 82 FF F4 */	beq .L_80092C30
/* 80092C40 0008FD20  28 00 00 5C */	cmplwi r0, 0x5c
/* 80092C44 0008FD24  41 82 FF EC */	beq .L_80092C30
/* 80092C48 0008FD28  3C 80 80 26 */	lis r4, "@stringBase0"@ha
/* 80092C4C 0008FD2C  7C 65 1B 78 */	mr r5, r3
/* 80092C50 0008FD30  38 84 BA 20 */	addi r4, r4, "@stringBase0"@l
/* 80092C54 0008FD34  38 61 00 08 */	addi r3, r1, 0x8
/* 80092C58 0008FD38  38 C4 00 05 */	addi r6, r4, 0x5
/* 80092C5C 0008FD3C  4C C6 31 82 */	crclr 4*cr1+eq
/* 80092C60 0008FD40  48 15 12 D5 */	bl sprintf
/* 80092C64 0008FD44  4B FB 56 6D */	bl xSndSuspend__Fv
/* 80092C68 0008FD48  48 00 7C CD */	bl zGameGetOstrich__Fv
/* 80092C6C 0008FD4C  7C 60 1B 78 */	mr r0, r3
/* 80092C70 0008FD50  38 60 00 01 */	li r3, 0x1
/* 80092C74 0008FD54  7C 1F 03 78 */	mr r31, r0
/* 80092C78 0008FD58  48 00 7C C5 */	bl zGameSetOstrich__F12_GameOstrich
/* 80092C7C 0008FD5C  FC 20 F8 90 */	fmr f1, f31
/* 80092C80 0008FD60  7F 84 E3 78 */	mr r4, r28
/* 80092C84 0008FD64  7F A5 EB 78 */	mr r5, r29
/* 80092C88 0008FD68  7F C6 F3 78 */	mr r6, r30
/* 80092C8C 0008FD6C  38 61 00 08 */	addi r3, r1, 0x8
/* 80092C90 0008FD70  48 03 0D 61 */	bl iFMVPlay__FPcUifbb
/* 80092C94 0008FD74  7C 60 1B 78 */	mr r0, r3
/* 80092C98 0008FD78  7F E3 FB 78 */	mr r3, r31
/* 80092C9C 0008FD7C  7C 1F 03 78 */	mr r31, r0
/* 80092CA0 0008FD80  48 00 7C 9D */	bl zGameSetOstrich__F12_GameOstrich
/* 80092CA4 0008FD84  4B FB 56 61 */	bl xSndResume__Fv
/* 80092CA8 0008FD88  7F E3 FB 78 */	mr r3, r31
.L_80092CAC:
/* 80092CAC 0008FD8C  80 01 00 64 */	lwz r0, 0x64(r1)
/* 80092CB0 0008FD90  CB E1 00 58 */	lfd f31, 0x58(r1)
/* 80092CB4 0008FD94  83 E1 00 54 */	lwz r31, 0x54(r1)
/* 80092CB8 0008FD98  83 C1 00 50 */	lwz r30, 0x50(r1)
/* 80092CBC 0008FD9C  83 A1 00 4C */	lwz r29, 0x4c(r1)
/* 80092CC0 0008FDA0  83 81 00 48 */	lwz r28, 0x48(r1)
/* 80092CC4 0008FDA4  7C 08 03 A6 */	mtlr r0
/* 80092CC8 0008FDA8  38 21 00 60 */	addi r1, r1, 0x60
/* 80092CCC 0008FDAC  4E 80 00 20 */	blr
.endfn zFMVPlay__FPcUifbb

# zFMVFileGetName(eFMVFile)
.fn zFMVFileGetName__F8eFMVFile, global
/* 80092CD0 0008FDB0  3C 80 80 29 */	lis r4, zFMVFileTable@ha
/* 80092CD4 0008FDB4  38 00 00 09 */	li r0, 0x9
/* 80092CD8 0008FDB8  38 84 EE 98 */	addi r4, r4, zFMVFileTable@l
/* 80092CDC 0008FDBC  38 A0 00 00 */	li r5, 0x0
/* 80092CE0 0008FDC0  7C 09 03 A6 */	mtctr r0
.L_80092CE4:
/* 80092CE4 0008FDC4  80 04 00 00 */	lwz r0, 0x0(r4)
/* 80092CE8 0008FDC8  7C 03 00 00 */	cmpw r3, r0
/* 80092CEC 0008FDCC  40 82 00 1C */	bne .L_80092D08
/* 80092CF0 0008FDD0  1C 85 00 24 */	mulli r4, r5, 0x24
/* 80092CF4 0008FDD4  3C 60 80 29 */	lis r3, zFMVFileTable@ha
/* 80092CF8 0008FDD8  38 03 EE 98 */	addi r0, r3, zFMVFileTable@l
/* 80092CFC 0008FDDC  7C 60 22 14 */	add r3, r0, r4
/* 80092D00 0008FDE0  38 63 00 04 */	addi r3, r3, 0x4
/* 80092D04 0008FDE4  4E 80 00 20 */	blr
.L_80092D08:
/* 80092D08 0008FDE8  38 84 00 24 */	addi r4, r4, 0x24
/* 80092D0C 0008FDEC  38 A5 00 01 */	addi r5, r5, 0x1
/* 80092D10 0008FDF0  42 00 FF D4 */	bdnz .L_80092CE4
/* 80092D14 0008FDF4  38 60 00 00 */	li r3, 0x0
/* 80092D18 0008FDF8  4E 80 00 20 */	blr
.endfn zFMVFileGetName__F8eFMVFile

# 0x8025BA20 - 0x8025BA30
.rodata
.balign 8

.obj "@stringBase0", local
	.4byte 0x25732573
	.4byte 0x002E6269
	.2byte 0x6B00
.endobj "@stringBase0"
	.4byte 0x00000000
	.2byte 0x0000

# 0x8028EE98 - 0x8028EFE0
.data
.balign 8

.obj zFMVFileTable, local
	.4byte 0x00000000
	.4byte 0x464D565C
	.4byte 0x464F5000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000001
	.4byte 0x464D565C
	.4byte 0x54616B00
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000002
	.4byte 0x464D565C
	.4byte 0x4A4E0000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000003
	.4byte 0x464D565C
	.4byte 0x53420000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000004
	.4byte 0x464D565C
	.4byte 0x48494C6F
	.4byte 0x676F0000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000007
	.4byte 0x464D565C
	.4byte 0x5448514C
	.4byte 0x6F676F00
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000005
	.4byte 0x464D565C
	.4byte 0x4E69636B
	.4byte 0x4C6F676F
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000006
	.4byte 0x464D565C
	.4byte 0x52574C6F
	.4byte 0x676F0000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000008
	.4byte 0x464D565C
	.4byte 0x64656D6F
	.4byte 0x31000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
.endobj zFMVFileTable
	.4byte 0x00000000
