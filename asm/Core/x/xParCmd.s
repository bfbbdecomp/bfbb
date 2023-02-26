.include "macros.inc"
.file "xParCmd.cpp"

# 0x80036B8C - 0x80038390
.text
.balign 4

# xParCmdInit()
.fn xParCmdInit__Fv, global
/* 80036B8C 00033C6C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80036B90 00033C70  7C 08 02 A6 */	mflr r0
/* 80036B94 00033C74  3C 80 80 03 */	lis r4, xParCmdMove_Update__FP7xParCmdP9xParGroupf@ha
/* 80036B98 00033C78  38 60 00 00 */	li r3, 0x0
/* 80036B9C 00033C7C  90 01 00 14 */	stw r0, 0x14(r1)
/* 80036BA0 00033C80  38 A4 72 C4 */	addi r5, r4, xParCmdMove_Update__FP7xParCmdP9xParGroupf@l
/* 80036BA4 00033C84  38 80 00 14 */	li r4, 0x14
/* 80036BA8 00033C88  48 00 02 19 */	bl xParCmdRegister__FUiUiPFP7xParCmdP9xParGroupf_v
/* 80036BAC 00033C8C  3C 80 80 03 */	lis r4, xParCmdMoveRandom_Update__FP7xParCmdP9xParGroupf@ha
/* 80036BB0 00033C90  38 60 00 01 */	li r3, 0x1
/* 80036BB4 00033C94  38 A4 73 38 */	addi r5, r4, xParCmdMoveRandom_Update__FP7xParCmdP9xParGroupf@l
/* 80036BB8 00033C98  38 80 00 14 */	li r4, 0x14
/* 80036BBC 00033C9C  48 00 02 05 */	bl xParCmdRegister__FUiUiPFP7xParCmdP9xParGroupf_v
/* 80036BC0 00033CA0  3C 80 80 03 */	lis r4, xParCmdAccelerate_Update__FP7xParCmdP9xParGroupf@ha
/* 80036BC4 00033CA4  38 60 00 02 */	li r3, 0x2
/* 80036BC8 00033CA8  38 A4 72 28 */	addi r5, r4, xParCmdAccelerate_Update__FP7xParCmdP9xParGroupf@l
/* 80036BCC 00033CAC  38 80 00 14 */	li r4, 0x14
/* 80036BD0 00033CB0  48 00 01 F1 */	bl xParCmdRegister__FUiUiPFP7xParCmdP9xParGroupf_v
/* 80036BD4 00033CB4  3C 80 80 03 */	lis r4, xParCmdVelocityApply_Update__FP7xParCmdP9xParGroupf@ha
/* 80036BD8 00033CB8  38 60 00 03 */	li r3, 0x3
/* 80036BDC 00033CBC  38 A4 77 80 */	addi r5, r4, xParCmdVelocityApply_Update__FP7xParCmdP9xParGroupf@l
/* 80036BE0 00033CC0  38 80 00 08 */	li r4, 0x8
/* 80036BE4 00033CC4  48 00 01 DD */	bl xParCmdRegister__FUiUiPFP7xParCmdP9xParGroupf_v
/* 80036BE8 00033CC8  38 60 00 05 */	li r3, 0x5
/* 80036BEC 00033CCC  38 80 00 0C */	li r4, 0xc
/* 80036BF0 00033CD0  38 A0 00 00 */	li r5, 0x0
/* 80036BF4 00033CD4  48 00 01 CD */	bl xParCmdRegister__FUiUiPFP7xParCmdP9xParGroupf_v
/* 80036BF8 00033CD8  3C 80 80 03 */	lis r4, xParCmdKillSlow_Update__FP7xParCmdP9xParGroupf@ha
/* 80036BFC 00033CDC  38 60 00 06 */	li r3, 0x6
/* 80036C00 00033CE0  38 A4 6E 78 */	addi r5, r4, xParCmdKillSlow_Update__FP7xParCmdP9xParGroupf@l
/* 80036C04 00033CE4  38 80 00 10 */	li r4, 0x10
/* 80036C08 00033CE8  48 00 01 B9 */	bl xParCmdRegister__FUiUiPFP7xParCmdP9xParGroupf_v
/* 80036C0C 00033CEC  3C 80 80 03 */	lis r4, xParCmdFollow_Update__FP7xParCmdP9xParGroupf@ha
/* 80036C10 00033CF0  38 60 00 07 */	li r3, 0x7
/* 80036C14 00033CF4  38 A4 6F 4C */	addi r5, r4, xParCmdFollow_Update__FP7xParCmdP9xParGroupf@l
/* 80036C18 00033CF8  38 80 00 10 */	li r4, 0x10
/* 80036C1C 00033CFC  48 00 01 A5 */	bl xParCmdRegister__FUiUiPFP7xParCmdP9xParGroupf_v
/* 80036C20 00033D00  3C 80 80 03 */	lis r4, xParCmdOrbitPoint_Update__FP7xParCmdP9xParGroupf@ha
/* 80036C24 00033D04  38 60 00 08 */	li r3, 0x8
/* 80036C28 00033D08  38 A4 70 30 */	addi r5, r4, xParCmdOrbitPoint_Update__FP7xParCmdP9xParGroupf@l
/* 80036C2C 00033D0C  38 80 00 20 */	li r4, 0x20
/* 80036C30 00033D10  48 00 01 91 */	bl xParCmdRegister__FUiUiPFP7xParCmdP9xParGroupf_v
/* 80036C34 00033D14  3C 80 80 03 */	lis r4, xParCmdOrbitLine_Update__FP7xParCmdP9xParGroupf@ha
/* 80036C38 00033D18  38 60 00 09 */	li r3, 0x9
/* 80036C3C 00033D1C  38 A4 71 14 */	addi r5, r4, xParCmdOrbitLine_Update__FP7xParCmdP9xParGroupf@l
/* 80036C40 00033D20  38 80 00 2C */	li r4, 0x2c
/* 80036C44 00033D24  48 00 01 7D */	bl xParCmdRegister__FUiUiPFP7xParCmdP9xParGroupf_v
/* 80036C48 00033D28  3C 80 80 03 */	lis r4, xParCmdMoveRandomPar_Update__FP7xParCmdP9xParGroupf@ha
/* 80036C4C 00033D2C  38 60 00 0A */	li r3, 0xa
/* 80036C50 00033D30  38 A4 74 14 */	addi r5, r4, xParCmdMoveRandomPar_Update__FP7xParCmdP9xParGroupf@l
/* 80036C54 00033D34  38 80 00 14 */	li r4, 0x14
/* 80036C58 00033D38  48 00 01 69 */	bl xParCmdRegister__FUiUiPFP7xParCmdP9xParGroupf_v
/* 80036C5C 00033D3C  3C 80 80 03 */	lis r4, xParCmdScale3rdPolyReg_Update__FP7xParCmdP9xParGroupf@ha
/* 80036C60 00033D40  38 60 00 0B */	li r3, 0xb
/* 80036C64 00033D44  38 A4 74 B8 */	addi r5, r4, xParCmdScale3rdPolyReg_Update__FP7xParCmdP9xParGroupf@l
/* 80036C68 00033D48  38 80 00 18 */	li r4, 0x18
/* 80036C6C 00033D4C  48 00 01 55 */	bl xParCmdRegister__FUiUiPFP7xParCmdP9xParGroupf_v
/* 80036C70 00033D50  3C 80 80 03 */	lis r4, xParCmdTex_Update__FP7xParCmdP9xParGroupf@ha
/* 80036C74 00033D54  38 60 00 0C */	li r3, 0xc
/* 80036C78 00033D58  38 A4 78 F0 */	addi r5, r4, xParCmdTex_Update__FP7xParCmdP9xParGroupf@l
/* 80036C7C 00033D5C  38 80 00 24 */	li r4, 0x24
/* 80036C80 00033D60  48 00 01 41 */	bl xParCmdRegister__FUiUiPFP7xParCmdP9xParGroupf_v
/* 80036C84 00033D64  3C 80 80 03 */	lis r4, xParCmdTexAnim_Update__FP7xParCmdP9xParGroupf@ha
/* 80036C88 00033D68  38 60 00 0D */	li r3, 0xd
/* 80036C8C 00033D6C  38 A4 78 F4 */	addi r5, r4, xParCmdTexAnim_Update__FP7xParCmdP9xParGroupf@l
/* 80036C90 00033D70  38 80 00 18 */	li r4, 0x18
/* 80036C94 00033D74  48 00 01 2D */	bl xParCmdRegister__FUiUiPFP7xParCmdP9xParGroupf_v
/* 80036C98 00033D78  3C 80 80 03 */	lis r4, xParCmdRandomVelocityPar_Update__FP7xParCmdP9xParGroupf@ha
/* 80036C9C 00033D7C  38 60 00 0F */	li r3, 0xf
/* 80036CA0 00033D80  38 A4 74 C8 */	addi r5, r4, xParCmdRandomVelocityPar_Update__FP7xParCmdP9xParGroupf@l
/* 80036CA4 00033D84  38 80 00 14 */	li r4, 0x14
/* 80036CA8 00033D88  48 00 01 19 */	bl xParCmdRegister__FUiUiPFP7xParCmdP9xParGroupf_v
/* 80036CAC 00033D8C  3C 80 80 03 */	lis r4, xParCmdAge_Update__FP7xParCmdP9xParGroupf@ha
/* 80036CB0 00033D90  38 60 00 12 */	li r3, 0x12
/* 80036CB4 00033D94  38 A4 6F 1C */	addi r5, r4, xParCmdAge_Update__FP7xParCmdP9xParGroupf@l
/* 80036CB8 00033D98  38 80 00 0C */	li r4, 0xc
/* 80036CBC 00033D9C  48 00 01 05 */	bl xParCmdRegister__FUiUiPFP7xParCmdP9xParGroupf_v
/* 80036CC0 00033DA0  3C 80 80 03 */	lis r4, xParCmdAlpha3rdPolyReg_Update__FP7xParCmdP9xParGroupf@ha
/* 80036CC4 00033DA4  38 60 00 13 */	li r3, 0x13
/* 80036CC8 00033DA8  38 A4 74 C4 */	addi r5, r4, xParCmdAlpha3rdPolyReg_Update__FP7xParCmdP9xParGroupf@l
/* 80036CCC 00033DAC  38 80 00 18 */	li r4, 0x18
/* 80036CD0 00033DB0  48 00 00 F1 */	bl xParCmdRegister__FUiUiPFP7xParCmdP9xParGroupf_v
/* 80036CD4 00033DB4  3C 80 80 03 */	lis r4, xParCmdApplyWind_Update__FP7xParCmdP9xParGroupf@ha
/* 80036CD8 00033DB8  38 60 00 14 */	li r3, 0x14
/* 80036CDC 00033DBC  38 A4 75 BC */	addi r5, r4, xParCmdApplyWind_Update__FP7xParCmdP9xParGroupf@l
/* 80036CE0 00033DC0  38 80 00 0C */	li r4, 0xc
/* 80036CE4 00033DC4  48 00 00 DD */	bl xParCmdRegister__FUiUiPFP7xParCmdP9xParGroupf_v
/* 80036CE8 00033DC8  3C 80 80 03 */	lis r4, xParCmdRotPar_Update__FP7xParCmdP9xParGroupf@ha
/* 80036CEC 00033DCC  38 60 00 15 */	li r3, 0x15
/* 80036CF0 00033DD0  38 A4 76 08 */	addi r5, r4, xParCmdRotPar_Update__FP7xParCmdP9xParGroupf@l
/* 80036CF4 00033DD4  38 80 00 20 */	li r4, 0x20
/* 80036CF8 00033DD8  48 00 00 C9 */	bl xParCmdRegister__FUiUiPFP7xParCmdP9xParGroupf_v
/* 80036CFC 00033DDC  3C 80 80 03 */	lis r4, xParCmdRotateAround_Update__FP7xParCmdP9xParGroupf@ha
/* 80036D00 00033DE0  38 60 00 17 */	li r3, 0x17
/* 80036D04 00033DE4  38 A4 77 C8 */	addi r5, r4, xParCmdRotateAround_Update__FP7xParCmdP9xParGroupf@l
/* 80036D08 00033DE8  38 80 00 20 */	li r4, 0x20
/* 80036D0C 00033DEC  48 00 00 B5 */	bl xParCmdRegister__FUiUiPFP7xParCmdP9xParGroupf_v
/* 80036D10 00033DF0  3C 80 80 03 */	lis r4, xParCmdSmokeAlpha_Update__FP7xParCmdP9xParGroupf@ha
/* 80036D14 00033DF4  38 60 00 18 */	li r3, 0x18
/* 80036D18 00033DF8  38 A4 74 BC */	addi r5, r4, xParCmdSmokeAlpha_Update__FP7xParCmdP9xParGroupf@l
/* 80036D1C 00033DFC  38 80 00 0C */	li r4, 0xc
/* 80036D20 00033E00  48 00 00 A1 */	bl xParCmdRegister__FUiUiPFP7xParCmdP9xParGroupf_v
/* 80036D24 00033E04  3C 80 80 03 */	lis r4, xParCmdScale_Update__FP7xParCmdP9xParGroupf@ha
/* 80036D28 00033E08  38 60 00 19 */	li r3, 0x19
/* 80036D2C 00033E0C  38 A4 74 C0 */	addi r5, r4, xParCmdScale_Update__FP7xParCmdP9xParGroupf@l
/* 80036D30 00033E10  38 80 00 0C */	li r4, 0xc
/* 80036D34 00033E14  48 00 00 8D */	bl xParCmdRegister__FUiUiPFP7xParCmdP9xParGroupf_v
/* 80036D38 00033E18  3C 80 80 03 */	lis r4, xParCmdCollideFall_Update__FP7xParCmdP9xParGroupf@ha
/* 80036D3C 00033E1C  38 60 00 1D */	li r3, 0x1d
/* 80036D40 00033E20  38 A4 7C 98 */	addi r5, r4, xParCmdCollideFall_Update__FP7xParCmdP9xParGroupf@l
/* 80036D44 00033E24  38 80 00 10 */	li r4, 0x10
/* 80036D48 00033E28  48 00 00 79 */	bl xParCmdRegister__FUiUiPFP7xParCmdP9xParGroupf_v
/* 80036D4C 00033E2C  3C 80 80 03 */	lis r4, xParCmdCollideFallSticky_Update__FP7xParCmdP9xParGroupf@ha
/* 80036D50 00033E30  38 60 00 22 */	li r3, 0x22
/* 80036D54 00033E34  38 A4 7C F8 */	addi r5, r4, xParCmdCollideFallSticky_Update__FP7xParCmdP9xParGroupf@l
/* 80036D58 00033E38  38 80 00 14 */	li r4, 0x14
/* 80036D5C 00033E3C  48 00 00 65 */	bl xParCmdRegister__FUiUiPFP7xParCmdP9xParGroupf_v
/* 80036D60 00033E40  3C 80 80 04 */	lis r4, xParCmd_Shaper_Update__FP7xParCmdP9xParGroupf@ha
/* 80036D64 00033E44  38 60 00 1E */	li r3, 0x1e
/* 80036D68 00033E48  38 A4 80 CC */	addi r5, r4, xParCmd_Shaper_Update__FP7xParCmdP9xParGroupf@l
/* 80036D6C 00033E4C  38 80 00 30 */	li r4, 0x30
/* 80036D70 00033E50  48 00 00 51 */	bl xParCmdRegister__FUiUiPFP7xParCmdP9xParGroupf_v
/* 80036D74 00033E54  3C 80 80 03 */	lis r4, xParCmd_AlphaInOut_Update__FP7xParCmdP9xParGroupf@ha
/* 80036D78 00033E58  38 60 00 1F */	li r3, 0x1f
/* 80036D7C 00033E5C  38 A4 7F 38 */	addi r5, r4, xParCmd_AlphaInOut_Update__FP7xParCmdP9xParGroupf@l
/* 80036D80 00033E60  38 80 00 18 */	li r4, 0x18
/* 80036D84 00033E64  48 00 00 3D */	bl xParCmdRegister__FUiUiPFP7xParCmdP9xParGroupf_v
/* 80036D88 00033E68  3C 80 80 03 */	lis r4, xParCmd_SizeInOut_Update__FP7xParCmdP9xParGroupf@ha
/* 80036D8C 00033E6C  38 60 00 20 */	li r3, 0x20
/* 80036D90 00033E70  38 A4 7D EC */	addi r5, r4, xParCmd_SizeInOut_Update__FP7xParCmdP9xParGroupf@l
/* 80036D94 00033E74  38 80 00 18 */	li r4, 0x18
/* 80036D98 00033E78  48 00 00 29 */	bl xParCmdRegister__FUiUiPFP7xParCmdP9xParGroupf_v
/* 80036D9C 00033E7C  3C 80 80 03 */	lis r4, xParCmd_DampenSpeed_Update__FP7xParCmdP9xParGroupf@ha
/* 80036DA0 00033E80  38 60 00 21 */	li r3, 0x21
/* 80036DA4 00033E84  38 A4 7D 7C */	addi r5, r4, xParCmd_DampenSpeed_Update__FP7xParCmdP9xParGroupf@l
/* 80036DA8 00033E88  38 80 00 0C */	li r4, 0xc
/* 80036DAC 00033E8C  48 00 00 15 */	bl xParCmdRegister__FUiUiPFP7xParCmdP9xParGroupf_v
/* 80036DB0 00033E90  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80036DB4 00033E94  7C 08 03 A6 */	mtlr r0
/* 80036DB8 00033E98  38 21 00 10 */	addi r1, r1, 0x10
/* 80036DBC 00033E9C  4E 80 00 20 */	blr
.endfn xParCmdInit__Fv

# xParCmdRegister(unsigned int, unsigned int, void (*)(xParCmd*, xParGroup*, float))
.fn xParCmdRegister__FUiUiPFP7xParCmdP9xParGroupf_v, global
/* 80036DC0 00033EA0  1C 03 00 0C */	mulli r0, r3, 0xc
/* 80036DC4 00033EA4  3C C0 80 28 */	lis r6, sCmdInfo@ha
/* 80036DC8 00033EA8  38 C6 D7 00 */	addi r6, r6, sCmdInfo@l
/* 80036DCC 00033EAC  7C 66 01 2E */	stwx r3, r6, r0
/* 80036DD0 00033EB0  7C 66 02 14 */	add r3, r6, r0
/* 80036DD4 00033EB4  90 83 00 04 */	stw r4, 0x4(r3)
/* 80036DD8 00033EB8  90 A3 00 08 */	stw r5, 0x8(r3)
/* 80036DDC 00033EBC  4E 80 00 20 */	blr
.endfn xParCmdRegister__FUiUiPFP7xParCmdP9xParGroupf_v

# xParCmdGetSize(unsigned int)
.fn xParCmdGetSize__FUi, global
/* 80036DE0 00033EC0  3C 80 80 28 */	lis r4, sCmdInfo@ha
/* 80036DE4 00033EC4  38 00 00 23 */	li r0, 0x23
/* 80036DE8 00033EC8  38 84 D7 00 */	addi r4, r4, sCmdInfo@l
/* 80036DEC 00033ECC  38 A0 00 00 */	li r5, 0x0
/* 80036DF0 00033ED0  7C 09 03 A6 */	mtctr r0
.L_80036DF4:
/* 80036DF4 00033ED4  80 04 00 00 */	lwz r0, 0x0(r4)
/* 80036DF8 00033ED8  7C 03 00 40 */	cmplw r3, r0
/* 80036DFC 00033EDC  40 82 00 1C */	bne .L_80036E18
/* 80036E00 00033EE0  1C 05 00 0C */	mulli r0, r5, 0xc
/* 80036E04 00033EE4  3C 60 80 28 */	lis r3, sCmdInfo@ha
/* 80036E08 00033EE8  38 63 D7 00 */	addi r3, r3, sCmdInfo@l
/* 80036E0C 00033EEC  7C 63 02 14 */	add r3, r3, r0
/* 80036E10 00033EF0  80 63 00 04 */	lwz r3, 0x4(r3)
/* 80036E14 00033EF4  4E 80 00 20 */	blr
.L_80036E18:
/* 80036E18 00033EF8  38 84 00 0C */	addi r4, r4, 0xc
/* 80036E1C 00033EFC  38 A5 00 01 */	addi r5, r5, 0x1
/* 80036E20 00033F00  42 00 FF D4 */	bdnz .L_80036DF4
/* 80036E24 00033F04  38 60 00 00 */	li r3, 0x0
/* 80036E28 00033F08  4E 80 00 20 */	blr
.endfn xParCmdGetSize__FUi

# xParCmdGetUpdateFunc(unsigned int)
.fn xParCmdGetUpdateFunc__FUi, global
/* 80036E2C 00033F0C  3C 80 80 28 */	lis r4, sCmdInfo@ha
/* 80036E30 00033F10  38 00 00 23 */	li r0, 0x23
/* 80036E34 00033F14  38 84 D7 00 */	addi r4, r4, sCmdInfo@l
/* 80036E38 00033F18  38 A0 00 00 */	li r5, 0x0
/* 80036E3C 00033F1C  7C 09 03 A6 */	mtctr r0
.L_80036E40:
/* 80036E40 00033F20  80 04 00 00 */	lwz r0, 0x0(r4)
/* 80036E44 00033F24  7C 03 00 40 */	cmplw r3, r0
/* 80036E48 00033F28  40 82 00 1C */	bne .L_80036E64
/* 80036E4C 00033F2C  1C 05 00 0C */	mulli r0, r5, 0xc
/* 80036E50 00033F30  3C 60 80 28 */	lis r3, sCmdInfo@ha
/* 80036E54 00033F34  38 63 D7 00 */	addi r3, r3, sCmdInfo@l
/* 80036E58 00033F38  7C 63 02 14 */	add r3, r3, r0
/* 80036E5C 00033F3C  80 63 00 08 */	lwz r3, 0x8(r3)
/* 80036E60 00033F40  4E 80 00 20 */	blr
.L_80036E64:
/* 80036E64 00033F44  38 84 00 0C */	addi r4, r4, 0xc
/* 80036E68 00033F48  38 A5 00 01 */	addi r5, r5, 0x1
/* 80036E6C 00033F4C  42 00 FF D4 */	bdnz .L_80036E40
/* 80036E70 00033F50  38 60 00 00 */	li r3, 0x0
/* 80036E74 00033F54  4E 80 00 20 */	blr
.endfn xParCmdGetUpdateFunc__FUi

# xParCmdKillSlow_Update(xParCmd*, xParGroup*, float)
.fn xParCmdKillSlow_Update__FP7xParCmdP9xParGroupf, global
/* 80036E78 00033F58  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 80036E7C 00033F5C  7C 08 02 A6 */	mflr r0
/* 80036E80 00033F60  90 01 00 24 */	stw r0, 0x24(r1)
/* 80036E84 00033F64  DB E1 00 10 */	stfd f31, 0x10(r1)
/* 80036E88 00033F68  F3 E1 00 18 */	psq_st f31, 0x18(r1), 0, qr0
/* 80036E8C 00033F6C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80036E90 00033F70  80 63 00 04 */	lwz r3, 0x4(r3)
/* 80036E94 00033F74  83 E4 00 00 */	lwz r31, 0x0(r4)
/* 80036E98 00033F78  C0 03 00 08 */	lfs f0, 0x8(r3)
/* 80036E9C 00033F7C  80 03 00 0C */	lwz r0, 0xc(r3)
/* 80036EA0 00033F80  EF E0 00 72 */	fmuls f31, f0, f1
/* 80036EA4 00033F84  28 00 00 00 */	cmplwi r0, 0x0
/* 80036EA8 00033F88  41 82 00 50 */	beq .L_80036EF8
/* 80036EAC 00033F8C  48 00 00 20 */	b .L_80036ECC
.L_80036EB0:
/* 80036EB0 00033F90  38 7F 00 20 */	addi r3, r31, 0x20
/* 80036EB4 00033F94  4B FD E2 19 */	bl xVec3Length2__FPC5xVec3
/* 80036EB8 00033F98  FC 01 F8 40 */	fcmpo cr0, f1, f31
/* 80036EBC 00033F9C  40 80 00 0C */	bge .L_80036EC8
/* 80036EC0 00033FA0  C0 02 85 98 */	lfs f0, "@658"@sda21(r2)
/* 80036EC4 00033FA4  D0 1F 00 08 */	stfs f0, 0x8(r31)
.L_80036EC8:
/* 80036EC8 00033FA8  83 FF 00 00 */	lwz r31, 0x0(r31)
.L_80036ECC:
/* 80036ECC 00033FAC  28 1F 00 00 */	cmplwi r31, 0x0
/* 80036ED0 00033FB0  40 82 FF E0 */	bne .L_80036EB0
/* 80036ED4 00033FB4  48 00 00 2C */	b .L_80036F00
/* 80036ED8 00033FB8  48 00 00 20 */	b .L_80036EF8
.L_80036EDC:
/* 80036EDC 00033FBC  38 7F 00 20 */	addi r3, r31, 0x20
/* 80036EE0 00033FC0  4B FD E1 ED */	bl xVec3Length2__FPC5xVec3
/* 80036EE4 00033FC4  FC 01 F8 40 */	fcmpo cr0, f1, f31
/* 80036EE8 00033FC8  40 81 00 0C */	ble .L_80036EF4
/* 80036EEC 00033FCC  C0 02 85 98 */	lfs f0, "@658"@sda21(r2)
/* 80036EF0 00033FD0  D0 1F 00 08 */	stfs f0, 0x8(r31)
.L_80036EF4:
/* 80036EF4 00033FD4  83 FF 00 00 */	lwz r31, 0x0(r31)
.L_80036EF8:
/* 80036EF8 00033FD8  28 1F 00 00 */	cmplwi r31, 0x0
/* 80036EFC 00033FDC  40 82 FF E0 */	bne .L_80036EDC
.L_80036F00:
/* 80036F00 00033FE0  E3 E1 00 18 */	psq_l f31, 0x18(r1), 0, qr0
/* 80036F04 00033FE4  80 01 00 24 */	lwz r0, 0x24(r1)
/* 80036F08 00033FE8  CB E1 00 10 */	lfd f31, 0x10(r1)
/* 80036F0C 00033FEC  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80036F10 00033FF0  7C 08 03 A6 */	mtlr r0
/* 80036F14 00033FF4  38 21 00 20 */	addi r1, r1, 0x20
/* 80036F18 00033FF8  4E 80 00 20 */	blr
.endfn xParCmdKillSlow_Update__FP7xParCmdP9xParGroupf

# xParCmdAge_Update(xParCmd*, xParGroup*, float)
.fn xParCmdAge_Update__FP7xParCmdP9xParGroupf, global
/* 80036F1C 00033FFC  80 63 00 04 */	lwz r3, 0x4(r3)
/* 80036F20 00034000  80 84 00 00 */	lwz r4, 0x0(r4)
/* 80036F24 00034004  C0 03 00 08 */	lfs f0, 0x8(r3)
/* 80036F28 00034008  EC 20 00 72 */	fmuls f1, f0, f1
/* 80036F2C 0003400C  48 00 00 14 */	b .L_80036F40
.L_80036F30:
/* 80036F30 00034010  C0 04 00 08 */	lfs f0, 0x8(r4)
/* 80036F34 00034014  EC 00 08 28 */	fsubs f0, f0, f1
/* 80036F38 00034018  D0 04 00 08 */	stfs f0, 0x8(r4)
/* 80036F3C 0003401C  80 84 00 00 */	lwz r4, 0x0(r4)
.L_80036F40:
/* 80036F40 00034020  28 04 00 00 */	cmplwi r4, 0x0
/* 80036F44 00034024  40 82 FF EC */	bne .L_80036F30
/* 80036F48 00034028  4E 80 00 20 */	blr
.endfn xParCmdAge_Update__FP7xParCmdP9xParGroupf

# xParCmdFollow_Update(xParCmd*, xParGroup*, float)
.fn xParCmdFollow_Update__FP7xParCmdP9xParGroupf, global
/* 80036F4C 0003402C  94 21 FF C0 */	stwu r1, -0x40(r1)
/* 80036F50 00034030  7C 08 02 A6 */	mflr r0
/* 80036F54 00034034  90 01 00 44 */	stw r0, 0x44(r1)
/* 80036F58 00034038  DB E1 00 30 */	stfd f31, 0x30(r1)
/* 80036F5C 0003403C  F3 E1 00 38 */	psq_st f31, 0x38(r1), 0, qr0
/* 80036F60 00034040  DB C1 00 20 */	stfd f30, 0x20(r1)
/* 80036F64 00034044  F3 C1 00 28 */	psq_st f30, 0x28(r1), 0, qr0
/* 80036F68 00034048  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 80036F6C 0003404C  93 C1 00 18 */	stw r30, 0x18(r1)
/* 80036F70 00034050  83 C3 00 04 */	lwz r30, 0x4(r3)
/* 80036F74 00034054  83 E4 00 00 */	lwz r31, 0x0(r4)
/* 80036F78 00034058  C0 1E 00 08 */	lfs f0, 0x8(r30)
/* 80036F7C 0003405C  EF C0 00 72 */	fmuls f30, f0, f1
/* 80036F80 00034060  48 00 00 74 */	b .L_80036FF4
.L_80036F84:
/* 80036F84 00034064  38 61 00 08 */	addi r3, r1, 0x8
/* 80036F88 00034068  38 84 00 10 */	addi r4, r4, 0x10
/* 80036F8C 0003406C  38 BF 00 10 */	addi r5, r31, 0x10
/* 80036F90 00034070  4B FD 77 01 */	bl xVec3Sub__FP5xVec3PC5xVec3PC5xVec3
/* 80036F94 00034074  38 61 00 08 */	addi r3, r1, 0x8
/* 80036F98 00034078  4B FD E1 35 */	bl xVec3Length2__FPC5xVec3
/* 80036F9C 0003407C  FF E0 08 90 */	fmr f31, f1
/* 80036FA0 00034080  C0 21 00 08 */	lfs f1, 0x8(r1)
/* 80036FA4 00034084  C0 41 00 0C */	lfs f2, 0xc(r1)
/* 80036FA8 00034088  C0 61 00 10 */	lfs f3, 0x10(r1)
/* 80036FAC 0003408C  48 00 13 E5 */	bl xVec3LengthFast__Ffff
/* 80036FB0 00034090  C0 1E 00 0C */	lfs f0, 0xc(r30)
/* 80036FB4 00034094  C0 41 00 08 */	lfs f2, 0x8(r1)
/* 80036FB8 00034098  EC 7F 00 2A */	fadds f3, f31, f0
/* 80036FBC 0003409C  C0 1F 00 20 */	lfs f0, 0x20(r31)
/* 80036FC0 000340A0  EC 21 00 F2 */	fmuls f1, f1, f3
/* 80036FC4 000340A4  EC 7E 08 24 */	fdivs f3, f30, f1
/* 80036FC8 000340A8  EC 02 00 FA */	fmadds f0, f2, f3, f0
/* 80036FCC 000340AC  D0 1F 00 20 */	stfs f0, 0x20(r31)
/* 80036FD0 000340B0  C0 21 00 0C */	lfs f1, 0xc(r1)
/* 80036FD4 000340B4  C0 1F 00 24 */	lfs f0, 0x24(r31)
/* 80036FD8 000340B8  EC 01 00 FA */	fmadds f0, f1, f3, f0
/* 80036FDC 000340BC  D0 1F 00 24 */	stfs f0, 0x24(r31)
/* 80036FE0 000340C0  C0 21 00 10 */	lfs f1, 0x10(r1)
/* 80036FE4 000340C4  C0 1F 00 28 */	lfs f0, 0x28(r31)
/* 80036FE8 000340C8  EC 01 00 FA */	fmadds f0, f1, f3, f0
/* 80036FEC 000340CC  D0 1F 00 28 */	stfs f0, 0x28(r31)
/* 80036FF0 000340D0  83 FF 00 00 */	lwz r31, 0x0(r31)
.L_80036FF4:
/* 80036FF4 000340D4  28 1F 00 00 */	cmplwi r31, 0x0
/* 80036FF8 000340D8  41 82 00 10 */	beq .L_80037008
/* 80036FFC 000340DC  80 9F 00 00 */	lwz r4, 0x0(r31)
/* 80037000 000340E0  28 04 00 00 */	cmplwi r4, 0x0
/* 80037004 000340E4  40 82 FF 80 */	bne .L_80036F84
.L_80037008:
/* 80037008 000340E8  E3 E1 00 38 */	psq_l f31, 0x38(r1), 0, qr0
/* 8003700C 000340EC  CB E1 00 30 */	lfd f31, 0x30(r1)
/* 80037010 000340F0  E3 C1 00 28 */	psq_l f30, 0x28(r1), 0, qr0
/* 80037014 000340F4  CB C1 00 20 */	lfd f30, 0x20(r1)
/* 80037018 000340F8  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 8003701C 000340FC  80 01 00 44 */	lwz r0, 0x44(r1)
/* 80037020 00034100  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 80037024 00034104  7C 08 03 A6 */	mtlr r0
/* 80037028 00034108  38 21 00 40 */	addi r1, r1, 0x40
/* 8003702C 0003410C  4E 80 00 20 */	blr
.endfn xParCmdFollow_Update__FP7xParCmdP9xParGroupf

# xParCmdOrbitPoint_Update(xParCmd*, xParGroup*, float)
.fn xParCmdOrbitPoint_Update__FP7xParCmdP9xParGroupf, global
/* 80037030 00034110  94 21 FF C0 */	stwu r1, -0x40(r1)
/* 80037034 00034114  7C 08 02 A6 */	mflr r0
/* 80037038 00034118  90 01 00 44 */	stw r0, 0x44(r1)
/* 8003703C 0003411C  DB E1 00 30 */	stfd f31, 0x30(r1)
/* 80037040 00034120  F3 E1 00 38 */	psq_st f31, 0x38(r1), 0, qr0
/* 80037044 00034124  DB C1 00 20 */	stfd f30, 0x20(r1)
/* 80037048 00034128  F3 C1 00 28 */	psq_st f30, 0x28(r1), 0, qr0
/* 8003704C 0003412C  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 80037050 00034130  93 C1 00 18 */	stw r30, 0x18(r1)
/* 80037054 00034134  83 C3 00 04 */	lwz r30, 0x4(r3)
/* 80037058 00034138  83 E4 00 00 */	lwz r31, 0x0(r4)
/* 8003705C 0003413C  C0 1E 00 14 */	lfs f0, 0x14(r30)
/* 80037060 00034140  EF C0 00 72 */	fmuls f30, f0, f1
/* 80037064 00034144  48 00 00 80 */	b .L_800370E4
.L_80037068:
/* 80037068 00034148  38 61 00 08 */	addi r3, r1, 0x8
/* 8003706C 0003414C  38 9E 00 08 */	addi r4, r30, 0x8
/* 80037070 00034150  38 BF 00 10 */	addi r5, r31, 0x10
/* 80037074 00034154  4B FD 76 1D */	bl xVec3Sub__FP5xVec3PC5xVec3PC5xVec3
/* 80037078 00034158  38 61 00 08 */	addi r3, r1, 0x8
/* 8003707C 0003415C  4B FD E0 51 */	bl xVec3Length2__FPC5xVec3
/* 80037080 00034160  FF E0 08 90 */	fmr f31, f1
/* 80037084 00034164  C0 1E 00 1C */	lfs f0, 0x1c(r30)
/* 80037088 00034168  FC 1F 00 40 */	fcmpo cr0, f31, f0
/* 8003708C 0003416C  40 80 00 54 */	bge .L_800370E0
/* 80037090 00034170  C0 21 00 08 */	lfs f1, 0x8(r1)
/* 80037094 00034174  C0 41 00 0C */	lfs f2, 0xc(r1)
/* 80037098 00034178  C0 61 00 10 */	lfs f3, 0x10(r1)
/* 8003709C 0003417C  48 00 12 F5 */	bl xVec3LengthFast__Ffff
/* 800370A0 00034180  C0 1E 00 18 */	lfs f0, 0x18(r30)
/* 800370A4 00034184  C0 41 00 08 */	lfs f2, 0x8(r1)
/* 800370A8 00034188  EC 7F 00 2A */	fadds f3, f31, f0
/* 800370AC 0003418C  C0 1F 00 20 */	lfs f0, 0x20(r31)
/* 800370B0 00034190  EC 21 18 2A */	fadds f1, f1, f3
/* 800370B4 00034194  EC 7E 08 24 */	fdivs f3, f30, f1
/* 800370B8 00034198  EC 02 00 FA */	fmadds f0, f2, f3, f0
/* 800370BC 0003419C  D0 1F 00 20 */	stfs f0, 0x20(r31)
/* 800370C0 000341A0  C0 21 00 0C */	lfs f1, 0xc(r1)
/* 800370C4 000341A4  C0 1F 00 24 */	lfs f0, 0x24(r31)
/* 800370C8 000341A8  EC 01 00 FA */	fmadds f0, f1, f3, f0
/* 800370CC 000341AC  D0 1F 00 24 */	stfs f0, 0x24(r31)
/* 800370D0 000341B0  C0 21 00 10 */	lfs f1, 0x10(r1)
/* 800370D4 000341B4  C0 1F 00 28 */	lfs f0, 0x28(r31)
/* 800370D8 000341B8  EC 01 00 FA */	fmadds f0, f1, f3, f0
/* 800370DC 000341BC  D0 1F 00 28 */	stfs f0, 0x28(r31)
.L_800370E0:
/* 800370E0 000341C0  83 FF 00 00 */	lwz r31, 0x0(r31)
.L_800370E4:
/* 800370E4 000341C4  28 1F 00 00 */	cmplwi r31, 0x0
/* 800370E8 000341C8  40 82 FF 80 */	bne .L_80037068
/* 800370EC 000341CC  E3 E1 00 38 */	psq_l f31, 0x38(r1), 0, qr0
/* 800370F0 000341D0  CB E1 00 30 */	lfd f31, 0x30(r1)
/* 800370F4 000341D4  E3 C1 00 28 */	psq_l f30, 0x28(r1), 0, qr0
/* 800370F8 000341D8  CB C1 00 20 */	lfd f30, 0x20(r1)
/* 800370FC 000341DC  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 80037100 000341E0  80 01 00 44 */	lwz r0, 0x44(r1)
/* 80037104 000341E4  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 80037108 000341E8  7C 08 03 A6 */	mtlr r0
/* 8003710C 000341EC  38 21 00 40 */	addi r1, r1, 0x40
/* 80037110 000341F0  4E 80 00 20 */	blr
.endfn xParCmdOrbitPoint_Update__FP7xParCmdP9xParGroupf

# xParCmdOrbitLine_Update(xParCmd*, xParGroup*, float)
.fn xParCmdOrbitLine_Update__FP7xParCmdP9xParGroupf, global
/* 80037114 000341F4  94 21 FF A0 */	stwu r1, -0x60(r1)
/* 80037118 000341F8  7C 08 02 A6 */	mflr r0
/* 8003711C 000341FC  90 01 00 64 */	stw r0, 0x64(r1)
/* 80037120 00034200  DB E1 00 50 */	stfd f31, 0x50(r1)
/* 80037124 00034204  F3 E1 00 58 */	psq_st f31, 0x58(r1), 0, qr0
/* 80037128 00034208  DB C1 00 40 */	stfd f30, 0x40(r1)
/* 8003712C 0003420C  F3 C1 00 48 */	psq_st f30, 0x48(r1), 0, qr0
/* 80037130 00034210  93 E1 00 3C */	stw r31, 0x3c(r1)
/* 80037134 00034214  93 C1 00 38 */	stw r30, 0x38(r1)
/* 80037138 00034218  83 C3 00 04 */	lwz r30, 0x4(r3)
/* 8003713C 0003421C  83 E4 00 00 */	lwz r31, 0x0(r4)
/* 80037140 00034220  C0 1E 00 20 */	lfs f0, 0x20(r30)
/* 80037144 00034224  EF C0 00 72 */	fmuls f30, f0, f1
/* 80037148 00034228  48 00 00 B0 */	b .L_800371F8
.L_8003714C:
/* 8003714C 0003422C  38 61 00 2C */	addi r3, r1, 0x2c
/* 80037150 00034230  38 9F 00 10 */	addi r4, r31, 0x10
/* 80037154 00034234  38 BE 00 08 */	addi r5, r30, 0x8
/* 80037158 00034238  4B FD 75 39 */	bl xVec3Sub__FP5xVec3PC5xVec3PC5xVec3
/* 8003715C 0003423C  38 61 00 14 */	addi r3, r1, 0x14
/* 80037160 00034240  38 81 00 2C */	addi r4, r1, 0x2c
/* 80037164 00034244  38 BE 00 14 */	addi r5, r30, 0x14
/* 80037168 00034248  4B FD DF 25 */	bl xVec3Cross__FP5xVec3PC5xVec3PC5xVec3
/* 8003716C 0003424C  38 61 00 20 */	addi r3, r1, 0x20
/* 80037170 00034250  38 9E 00 14 */	addi r4, r30, 0x14
/* 80037174 00034254  38 A1 00 14 */	addi r5, r1, 0x14
/* 80037178 00034258  4B FD DF 15 */	bl xVec3Cross__FP5xVec3PC5xVec3PC5xVec3
/* 8003717C 0003425C  38 61 00 08 */	addi r3, r1, 0x8
/* 80037180 00034260  38 81 00 20 */	addi r4, r1, 0x20
/* 80037184 00034264  38 A1 00 2C */	addi r5, r1, 0x2c
/* 80037188 00034268  4B FD 75 09 */	bl xVec3Sub__FP5xVec3PC5xVec3PC5xVec3
/* 8003718C 0003426C  38 61 00 08 */	addi r3, r1, 0x8
/* 80037190 00034270  4B FD DF 3D */	bl xVec3Length2__FPC5xVec3
/* 80037194 00034274  FF E0 08 90 */	fmr f31, f1
/* 80037198 00034278  C0 1E 00 28 */	lfs f0, 0x28(r30)
/* 8003719C 0003427C  FC 1F 00 40 */	fcmpo cr0, f31, f0
/* 800371A0 00034280  40 80 00 54 */	bge .L_800371F4
/* 800371A4 00034284  C0 21 00 08 */	lfs f1, 0x8(r1)
/* 800371A8 00034288  C0 41 00 0C */	lfs f2, 0xc(r1)
/* 800371AC 0003428C  C0 61 00 10 */	lfs f3, 0x10(r1)
/* 800371B0 00034290  48 00 11 E1 */	bl xVec3LengthFast__Ffff
/* 800371B4 00034294  C0 1E 00 24 */	lfs f0, 0x24(r30)
/* 800371B8 00034298  C0 41 00 08 */	lfs f2, 0x8(r1)
/* 800371BC 0003429C  EC 7F 00 2A */	fadds f3, f31, f0
/* 800371C0 000342A0  C0 1F 00 20 */	lfs f0, 0x20(r31)
/* 800371C4 000342A4  EC 21 18 2A */	fadds f1, f1, f3
/* 800371C8 000342A8  EC 7E 08 24 */	fdivs f3, f30, f1
/* 800371CC 000342AC  EC 02 00 FA */	fmadds f0, f2, f3, f0
/* 800371D0 000342B0  D0 1F 00 20 */	stfs f0, 0x20(r31)
/* 800371D4 000342B4  C0 21 00 0C */	lfs f1, 0xc(r1)
/* 800371D8 000342B8  C0 1F 00 24 */	lfs f0, 0x24(r31)
/* 800371DC 000342BC  EC 01 00 FA */	fmadds f0, f1, f3, f0
/* 800371E0 000342C0  D0 1F 00 24 */	stfs f0, 0x24(r31)
/* 800371E4 000342C4  C0 21 00 10 */	lfs f1, 0x10(r1)
/* 800371E8 000342C8  C0 1F 00 28 */	lfs f0, 0x28(r31)
/* 800371EC 000342CC  EC 01 00 FA */	fmadds f0, f1, f3, f0
/* 800371F0 000342D0  D0 1F 00 28 */	stfs f0, 0x28(r31)
.L_800371F4:
/* 800371F4 000342D4  83 FF 00 00 */	lwz r31, 0x0(r31)
.L_800371F8:
/* 800371F8 000342D8  28 1F 00 00 */	cmplwi r31, 0x0
/* 800371FC 000342DC  40 82 FF 50 */	bne .L_8003714C
/* 80037200 000342E0  E3 E1 00 58 */	psq_l f31, 0x58(r1), 0, qr0
/* 80037204 000342E4  CB E1 00 50 */	lfd f31, 0x50(r1)
/* 80037208 000342E8  E3 C1 00 48 */	psq_l f30, 0x48(r1), 0, qr0
/* 8003720C 000342EC  CB C1 00 40 */	lfd f30, 0x40(r1)
/* 80037210 000342F0  83 E1 00 3C */	lwz r31, 0x3c(r1)
/* 80037214 000342F4  80 01 00 64 */	lwz r0, 0x64(r1)
/* 80037218 000342F8  83 C1 00 38 */	lwz r30, 0x38(r1)
/* 8003721C 000342FC  7C 08 03 A6 */	mtlr r0
/* 80037220 00034300  38 21 00 60 */	addi r1, r1, 0x60
/* 80037224 00034304  4E 80 00 20 */	blr
.endfn xParCmdOrbitLine_Update__FP7xParCmdP9xParGroupf

# xParCmdAccelerate_Update(xParCmd*, xParGroup*, float)
.fn xParCmdAccelerate_Update__FP7xParCmdP9xParGroupf, global
/* 80037228 00034308  94 21 FF D0 */	stwu r1, -0x30(r1)
/* 8003722C 0003430C  7C 08 02 A6 */	mflr r0
/* 80037230 00034310  90 01 00 34 */	stw r0, 0x34(r1)
/* 80037234 00034314  DB E1 00 20 */	stfd f31, 0x20(r1)
/* 80037238 00034318  F3 E1 00 28 */	psq_st f31, 0x28(r1), 0, qr0
/* 8003723C 0003431C  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 80037240 00034320  80 A3 00 04 */	lwz r5, 0x4(r3)
/* 80037244 00034324  FF E0 08 90 */	fmr f31, f1
/* 80037248 00034328  7C 9F 23 78 */	mr r31, r4
/* 8003724C 0003432C  38 61 00 08 */	addi r3, r1, 0x8
/* 80037250 00034330  38 85 00 08 */	addi r4, r5, 0x8
/* 80037254 00034334  4B FD 40 11 */	bl __as__5xVec3FRC5xVec3
/* 80037258 00034338  FC 20 F8 90 */	fmr f1, f31
/* 8003725C 0003433C  38 61 00 08 */	addi r3, r1, 0x8
/* 80037260 00034340  4B FE 46 D9 */	bl xVec3SMulBy__FP5xVec3f
/* 80037264 00034344  80 7F 00 00 */	lwz r3, 0x0(r31)
/* 80037268 00034348  48 00 00 38 */	b .L_800372A0
.L_8003726C:
/* 8003726C 0003434C  C0 23 00 20 */	lfs f1, 0x20(r3)
/* 80037270 00034350  C0 01 00 08 */	lfs f0, 0x8(r1)
/* 80037274 00034354  EC 01 00 2A */	fadds f0, f1, f0
/* 80037278 00034358  D0 03 00 20 */	stfs f0, 0x20(r3)
/* 8003727C 0003435C  C0 23 00 24 */	lfs f1, 0x24(r3)
/* 80037280 00034360  C0 01 00 0C */	lfs f0, 0xc(r1)
/* 80037284 00034364  EC 01 00 2A */	fadds f0, f1, f0
/* 80037288 00034368  D0 03 00 24 */	stfs f0, 0x24(r3)
/* 8003728C 0003436C  C0 23 00 28 */	lfs f1, 0x28(r3)
/* 80037290 00034370  C0 01 00 10 */	lfs f0, 0x10(r1)
/* 80037294 00034374  EC 01 00 2A */	fadds f0, f1, f0
/* 80037298 00034378  D0 03 00 28 */	stfs f0, 0x28(r3)
/* 8003729C 0003437C  80 63 00 00 */	lwz r3, 0x0(r3)
.L_800372A0:
/* 800372A0 00034380  28 03 00 00 */	cmplwi r3, 0x0
/* 800372A4 00034384  40 82 FF C8 */	bne .L_8003726C
/* 800372A8 00034388  E3 E1 00 28 */	psq_l f31, 0x28(r1), 0, qr0
/* 800372AC 0003438C  80 01 00 34 */	lwz r0, 0x34(r1)
/* 800372B0 00034390  CB E1 00 20 */	lfd f31, 0x20(r1)
/* 800372B4 00034394  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 800372B8 00034398  7C 08 03 A6 */	mtlr r0
/* 800372BC 0003439C  38 21 00 30 */	addi r1, r1, 0x30
/* 800372C0 000343A0  4E 80 00 20 */	blr
.endfn xParCmdAccelerate_Update__FP7xParCmdP9xParGroupf

# xParCmdMove_Update(xParCmd*, xParGroup*, float)
.fn xParCmdMove_Update__FP7xParCmdP9xParGroupf, global
/* 800372C4 000343A4  94 21 FF D0 */	stwu r1, -0x30(r1)
/* 800372C8 000343A8  7C 08 02 A6 */	mflr r0
/* 800372CC 000343AC  90 01 00 34 */	stw r0, 0x34(r1)
/* 800372D0 000343B0  DB E1 00 28 */	stfd f31, 0x28(r1)
/* 800372D4 000343B4  FF E0 08 90 */	fmr f31, f1
/* 800372D8 000343B8  93 E1 00 24 */	stw r31, 0x24(r1)
/* 800372DC 000343BC  7C 9F 23 78 */	mr r31, r4
/* 800372E0 000343C0  80 A3 00 04 */	lwz r5, 0x4(r3)
/* 800372E4 000343C4  38 61 00 08 */	addi r3, r1, 0x8
/* 800372E8 000343C8  38 85 00 08 */	addi r4, r5, 0x8
/* 800372EC 000343CC  4B FD 3F 79 */	bl __as__5xVec3FRC5xVec3
/* 800372F0 000343D0  FC 20 F8 90 */	fmr f1, f31
/* 800372F4 000343D4  38 61 00 08 */	addi r3, r1, 0x8
/* 800372F8 000343D8  4B FE 46 41 */	bl xVec3SMulBy__FP5xVec3f
/* 800372FC 000343DC  83 FF 00 00 */	lwz r31, 0x0(r31)
/* 80037300 000343E0  48 00 00 18 */	b .L_80037318
.L_80037304:
/* 80037304 000343E4  38 7F 00 10 */	addi r3, r31, 0x10
/* 80037308 000343E8  38 A1 00 08 */	addi r5, r1, 0x8
/* 8003730C 000343EC  7C 64 1B 78 */	mr r4, r3
/* 80037310 000343F0  4B FD 3D A9 */	bl xVec3Add__FP5xVec3PC5xVec3PC5xVec3
/* 80037314 000343F4  83 FF 00 00 */	lwz r31, 0x0(r31)
.L_80037318:
/* 80037318 000343F8  28 1F 00 00 */	cmplwi r31, 0x0
/* 8003731C 000343FC  40 82 FF E8 */	bne .L_80037304
/* 80037320 00034400  80 01 00 34 */	lwz r0, 0x34(r1)
/* 80037324 00034404  CB E1 00 28 */	lfd f31, 0x28(r1)
/* 80037328 00034408  83 E1 00 24 */	lwz r31, 0x24(r1)
/* 8003732C 0003440C  7C 08 03 A6 */	mtlr r0
/* 80037330 00034410  38 21 00 30 */	addi r1, r1, 0x30
/* 80037334 00034414  4E 80 00 20 */	blr
.endfn xParCmdMove_Update__FP7xParCmdP9xParGroupf

# xParCmdMoveRandom_Update(xParCmd*, xParGroup*, float)
.fn xParCmdMoveRandom_Update__FP7xParCmdP9xParGroupf, global
/* 80037338 00034418  94 21 FF D0 */	stwu r1, -0x30(r1)
/* 8003733C 0003441C  7C 08 02 A6 */	mflr r0
/* 80037340 00034420  90 01 00 34 */	stw r0, 0x34(r1)
/* 80037344 00034424  DB E1 00 20 */	stfd f31, 0x20(r1)
/* 80037348 00034428  F3 E1 00 28 */	psq_st f31, 0x28(r1), 0, qr0
/* 8003734C 0003442C  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 80037350 00034430  93 C1 00 18 */	stw r30, 0x18(r1)
/* 80037354 00034434  83 E3 00 04 */	lwz r31, 0x4(r3)
/* 80037358 00034438  FF E0 08 90 */	fmr f31, f1
/* 8003735C 0003443C  7C 9E 23 78 */	mr r30, r4
/* 80037360 00034440  38 61 00 08 */	addi r3, r1, 0x8
/* 80037364 00034444  38 9F 00 08 */	addi r4, r31, 0x8
/* 80037368 00034448  4B FD 3E FD */	bl __as__5xVec3FRC5xVec3
/* 8003736C 0003444C  4B FF 99 1D */	bl xurand__Fv
/* 80037370 00034450  C0 42 85 A0 */	lfs f2, "@760"@sda21(r2)
/* 80037374 00034454  C0 01 00 08 */	lfs f0, 0x8(r1)
/* 80037378 00034458  EC 22 00 72 */	fmuls f1, f2, f1
/* 8003737C 0003445C  EC 00 00 72 */	fmuls f0, f0, f1
/* 80037380 00034460  D0 01 00 08 */	stfs f0, 0x8(r1)
/* 80037384 00034464  4B FF 99 05 */	bl xurand__Fv
/* 80037388 00034468  C0 42 85 A0 */	lfs f2, "@760"@sda21(r2)
/* 8003738C 0003446C  C0 01 00 0C */	lfs f0, 0xc(r1)
/* 80037390 00034470  EC 22 00 72 */	fmuls f1, f2, f1
/* 80037394 00034474  EC 00 00 72 */	fmuls f0, f0, f1
/* 80037398 00034478  D0 01 00 0C */	stfs f0, 0xc(r1)
/* 8003739C 0003447C  4B FF 98 ED */	bl xurand__Fv
/* 800373A0 00034480  C0 42 85 A0 */	lfs f2, "@760"@sda21(r2)
/* 800373A4 00034484  38 61 00 08 */	addi r3, r1, 0x8
/* 800373A8 00034488  C0 01 00 10 */	lfs f0, 0x10(r1)
/* 800373AC 0003448C  7C 64 1B 78 */	mr r4, r3
/* 800373B0 00034490  EC 22 00 72 */	fmuls f1, f2, f1
/* 800373B4 00034494  38 BF 00 08 */	addi r5, r31, 0x8
/* 800373B8 00034498  EC 00 00 72 */	fmuls f0, f0, f1
/* 800373BC 0003449C  D0 01 00 10 */	stfs f0, 0x10(r1)
/* 800373C0 000344A0  4B FD 72 D1 */	bl xVec3Sub__FP5xVec3PC5xVec3PC5xVec3
/* 800373C4 000344A4  FC 20 F8 90 */	fmr f1, f31
/* 800373C8 000344A8  38 61 00 08 */	addi r3, r1, 0x8
/* 800373CC 000344AC  4B FE 45 6D */	bl xVec3SMulBy__FP5xVec3f
/* 800373D0 000344B0  83 FE 00 00 */	lwz r31, 0x0(r30)
/* 800373D4 000344B4  48 00 00 18 */	b .L_800373EC
.L_800373D8:
/* 800373D8 000344B8  38 7F 00 10 */	addi r3, r31, 0x10
/* 800373DC 000344BC  38 A1 00 08 */	addi r5, r1, 0x8
/* 800373E0 000344C0  7C 64 1B 78 */	mr r4, r3
/* 800373E4 000344C4  4B FD 3C D5 */	bl xVec3Add__FP5xVec3PC5xVec3PC5xVec3
/* 800373E8 000344C8  83 FF 00 00 */	lwz r31, 0x0(r31)
.L_800373EC:
/* 800373EC 000344CC  28 1F 00 00 */	cmplwi r31, 0x0
/* 800373F0 000344D0  40 82 FF E8 */	bne .L_800373D8
/* 800373F4 000344D4  E3 E1 00 28 */	psq_l f31, 0x28(r1), 0, qr0
/* 800373F8 000344D8  80 01 00 34 */	lwz r0, 0x34(r1)
/* 800373FC 000344DC  CB E1 00 20 */	lfd f31, 0x20(r1)
/* 80037400 000344E0  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 80037404 000344E4  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 80037408 000344E8  7C 08 03 A6 */	mtlr r0
/* 8003740C 000344EC  38 21 00 30 */	addi r1, r1, 0x30
/* 80037410 000344F0  4E 80 00 20 */	blr
.endfn xParCmdMoveRandom_Update__FP7xParCmdP9xParGroupf

# xParCmdMoveRandomPar_Update(xParCmd*, xParGroup*, float)
.fn xParCmdMoveRandomPar_Update__FP7xParCmdP9xParGroupf, global
/* 80037414 000344F4  94 21 FF D0 */	stwu r1, -0x30(r1)
/* 80037418 000344F8  7C 08 02 A6 */	mflr r0
/* 8003741C 000344FC  90 01 00 34 */	stw r0, 0x34(r1)
/* 80037420 00034500  DB E1 00 20 */	stfd f31, 0x20(r1)
/* 80037424 00034504  F3 E1 00 28 */	psq_st f31, 0x28(r1), 0, qr0
/* 80037428 00034508  DB C1 00 10 */	stfd f30, 0x10(r1)
/* 8003742C 0003450C  F3 C1 00 18 */	psq_st f30, 0x18(r1), 0, qr0
/* 80037430 00034510  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80037434 00034514  C0 02 85 A4 */	lfs f0, "@772"@sda21(r2)
/* 80037438 00034518  80 63 00 04 */	lwz r3, 0x4(r3)
/* 8003743C 0003451C  EC 41 00 32 */	fmuls f2, f1, f0
/* 80037440 00034520  83 E4 00 00 */	lwz r31, 0x0(r4)
/* 80037444 00034524  C0 23 00 08 */	lfs f1, 0x8(r3)
/* 80037448 00034528  C0 03 00 10 */	lfs f0, 0x10(r3)
/* 8003744C 0003452C  EF E1 00 B2 */	fmuls f31, f1, f2
/* 80037450 00034530  EF C0 00 B2 */	fmuls f30, f0, f2
/* 80037454 00034534  48 00 00 38 */	b .L_8003748C
.L_80037458:
/* 80037458 00034538  4B FF 98 31 */	bl xurand__Fv
/* 8003745C 0003453C  C0 42 85 A4 */	lfs f2, "@772"@sda21(r2)
/* 80037460 00034540  C0 1F 00 10 */	lfs f0, 0x10(r31)
/* 80037464 00034544  EC 21 10 28 */	fsubs f1, f1, f2
/* 80037468 00034548  EC 1F 00 7A */	fmadds f0, f31, f1, f0
/* 8003746C 0003454C  D0 1F 00 10 */	stfs f0, 0x10(r31)
/* 80037470 00034550  4B FF 98 19 */	bl xurand__Fv
/* 80037474 00034554  C0 42 85 A4 */	lfs f2, "@772"@sda21(r2)
/* 80037478 00034558  C0 1F 00 18 */	lfs f0, 0x18(r31)
/* 8003747C 0003455C  EC 21 10 28 */	fsubs f1, f1, f2
/* 80037480 00034560  EC 1E 00 7A */	fmadds f0, f30, f1, f0
/* 80037484 00034564  D0 1F 00 18 */	stfs f0, 0x18(r31)
/* 80037488 00034568  83 FF 00 00 */	lwz r31, 0x0(r31)
.L_8003748C:
/* 8003748C 0003456C  28 1F 00 00 */	cmplwi r31, 0x0
/* 80037490 00034570  40 82 FF C8 */	bne .L_80037458
/* 80037494 00034574  E3 E1 00 28 */	psq_l f31, 0x28(r1), 0, qr0
/* 80037498 00034578  CB E1 00 20 */	lfd f31, 0x20(r1)
/* 8003749C 0003457C  E3 C1 00 18 */	psq_l f30, 0x18(r1), 0, qr0
/* 800374A0 00034580  CB C1 00 10 */	lfd f30, 0x10(r1)
/* 800374A4 00034584  80 01 00 34 */	lwz r0, 0x34(r1)
/* 800374A8 00034588  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 800374AC 0003458C  7C 08 03 A6 */	mtlr r0
/* 800374B0 00034590  38 21 00 30 */	addi r1, r1, 0x30
/* 800374B4 00034594  4E 80 00 20 */	blr
.endfn xParCmdMoveRandomPar_Update__FP7xParCmdP9xParGroupf

# xParCmdScale3rdPolyReg_Update(xParCmd*, xParGroup*, float)
.fn xParCmdScale3rdPolyReg_Update__FP7xParCmdP9xParGroupf, global
/* 800374B8 00034598  4E 80 00 20 */	blr
.endfn xParCmdScale3rdPolyReg_Update__FP7xParCmdP9xParGroupf

# xParCmdSmokeAlpha_Update(xParCmd*, xParGroup*, float)
.fn xParCmdSmokeAlpha_Update__FP7xParCmdP9xParGroupf, global
/* 800374BC 0003459C  4E 80 00 20 */	blr
.endfn xParCmdSmokeAlpha_Update__FP7xParCmdP9xParGroupf

# xParCmdScale_Update(xParCmd*, xParGroup*, float)
.fn xParCmdScale_Update__FP7xParCmdP9xParGroupf, global
/* 800374C0 000345A0  4E 80 00 20 */	blr
.endfn xParCmdScale_Update__FP7xParCmdP9xParGroupf

# xParCmdAlpha3rdPolyReg_Update(xParCmd*, xParGroup*, float)
.fn xParCmdAlpha3rdPolyReg_Update__FP7xParCmdP9xParGroupf, global
/* 800374C4 000345A4  4E 80 00 20 */	blr
.endfn xParCmdAlpha3rdPolyReg_Update__FP7xParCmdP9xParGroupf

# xParCmdRandomVelocityPar_Update(xParCmd*, xParGroup*, float)
.fn xParCmdRandomVelocityPar_Update__FP7xParCmdP9xParGroupf, global
/* 800374C8 000345A8  94 21 FF 70 */	stwu r1, -0x90(r1)
/* 800374CC 000345AC  7C 08 02 A6 */	mflr r0
/* 800374D0 000345B0  90 01 00 94 */	stw r0, 0x94(r1)
/* 800374D4 000345B4  DB E1 00 80 */	stfd f31, 0x80(r1)
/* 800374D8 000345B8  F3 E1 00 88 */	psq_st f31, 0x88(r1), 0, qr0
/* 800374DC 000345BC  DB C1 00 70 */	stfd f30, 0x70(r1)
/* 800374E0 000345C0  F3 C1 00 78 */	psq_st f30, 0x78(r1), 0, qr0
/* 800374E4 000345C4  DB A1 00 60 */	stfd f29, 0x60(r1)
/* 800374E8 000345C8  F3 A1 00 68 */	psq_st f29, 0x68(r1), 0, qr0
/* 800374EC 000345CC  DB 81 00 50 */	stfd f28, 0x50(r1)
/* 800374F0 000345D0  F3 81 00 58 */	psq_st f28, 0x58(r1), 0, qr0
/* 800374F4 000345D4  DB 61 00 40 */	stfd f27, 0x40(r1)
/* 800374F8 000345D8  F3 61 00 48 */	psq_st f27, 0x48(r1), 0, qr0
/* 800374FC 000345DC  93 E1 00 3C */	stw r31, 0x3c(r1)
/* 80037500 000345E0  80 63 00 04 */	lwz r3, 0x4(r3)
/* 80037504 000345E4  83 E4 00 00 */	lwz r31, 0x0(r4)
/* 80037508 000345E8  C0 63 00 08 */	lfs f3, 0x8(r3)
/* 8003750C 000345EC  C0 43 00 0C */	lfs f2, 0xc(r3)
/* 80037510 000345F0  C0 03 00 10 */	lfs f0, 0x10(r3)
/* 80037514 000345F4  EF E3 00 72 */	fmuls f31, f3, f1
/* 80037518 000345F8  EF C2 00 72 */	fmuls f30, f2, f1
/* 8003751C 000345FC  EF A0 00 72 */	fmuls f29, f0, f1
/* 80037520 00034600  48 00 00 58 */	b .L_80037578
.L_80037524:
/* 80037524 00034604  4B FF 97 65 */	bl xurand__Fv
/* 80037528 00034608  EC 3F 00 72 */	fmuls f1, f31, f1
/* 8003752C 0003460C  C0 02 85 A0 */	lfs f0, "@760"@sda21(r2)
/* 80037530 00034610  EF 80 F8 78 */	fmsubs f28, f0, f1, f31
/* 80037534 00034614  4B FF 97 55 */	bl xurand__Fv
/* 80037538 00034618  EC 3E 00 72 */	fmuls f1, f30, f1
/* 8003753C 0003461C  C0 02 85 A0 */	lfs f0, "@760"@sda21(r2)
/* 80037540 00034620  EF 60 F0 78 */	fmsubs f27, f0, f1, f30
/* 80037544 00034624  4B FF 97 45 */	bl xurand__Fv
/* 80037548 00034628  EC 7D 00 72 */	fmuls f3, f29, f1
/* 8003754C 0003462C  C0 02 85 A0 */	lfs f0, "@760"@sda21(r2)
/* 80037550 00034630  FC 20 D8 90 */	fmr f1, f27
/* 80037554 00034634  38 61 00 08 */	addi r3, r1, 0x8
/* 80037558 00034638  FC 40 E0 90 */	fmr f2, f28
/* 8003755C 0003463C  EC 60 E8 F8 */	fmsubs f3, f0, f3, f29
/* 80037560 00034640  4B FF AC 71 */	bl xMat3x3Euler__FP7xMat3x3fff
/* 80037564 00034644  38 7F 00 20 */	addi r3, r31, 0x20
/* 80037568 00034648  38 81 00 08 */	addi r4, r1, 0x8
/* 8003756C 0003464C  7C 65 1B 78 */	mr r5, r3
/* 80037570 00034650  4B FF B4 ED */	bl xMat3x3LMulVec__FP5xVec3PC7xMat3x3PC5xVec3
/* 80037574 00034654  83 FF 00 00 */	lwz r31, 0x0(r31)
.L_80037578:
/* 80037578 00034658  28 1F 00 00 */	cmplwi r31, 0x0
/* 8003757C 0003465C  40 82 FF A8 */	bne .L_80037524
/* 80037580 00034660  E3 E1 00 88 */	psq_l f31, 0x88(r1), 0, qr0
/* 80037584 00034664  CB E1 00 80 */	lfd f31, 0x80(r1)
/* 80037588 00034668  E3 C1 00 78 */	psq_l f30, 0x78(r1), 0, qr0
/* 8003758C 0003466C  CB C1 00 70 */	lfd f30, 0x70(r1)
/* 80037590 00034670  E3 A1 00 68 */	psq_l f29, 0x68(r1), 0, qr0
/* 80037594 00034674  CB A1 00 60 */	lfd f29, 0x60(r1)
/* 80037598 00034678  E3 81 00 58 */	psq_l f28, 0x58(r1), 0, qr0
/* 8003759C 0003467C  CB 81 00 50 */	lfd f28, 0x50(r1)
/* 800375A0 00034680  E3 61 00 48 */	psq_l f27, 0x48(r1), 0, qr0
/* 800375A4 00034684  CB 61 00 40 */	lfd f27, 0x40(r1)
/* 800375A8 00034688  80 01 00 94 */	lwz r0, 0x94(r1)
/* 800375AC 0003468C  83 E1 00 3C */	lwz r31, 0x3c(r1)
/* 800375B0 00034690  7C 08 03 A6 */	mtlr r0
/* 800375B4 00034694  38 21 00 90 */	addi r1, r1, 0x90
/* 800375B8 00034698  4E 80 00 20 */	blr
.endfn xParCmdRandomVelocityPar_Update__FP7xParCmdP9xParGroupf

# xParCmdApplyWind_Update(xParCmd*, xParGroup*, float)
.fn xParCmdApplyWind_Update__FP7xParCmdP9xParGroupf, global
/* 800375BC 0003469C  80 63 00 04 */	lwz r3, 0x4(r3)
/* 800375C0 000346A0  C0 42 85 A8 */	lfs f2, "@812"@sda21(r2)
/* 800375C4 000346A4  C0 03 00 08 */	lfs f0, 0x8(r3)
/* 800375C8 000346A8  FC 60 10 90 */	fmr f3, f2
/* 800375CC 000346AC  80 64 00 00 */	lwz r3, 0x0(r4)
/* 800375D0 000346B0  EC 00 00 72 */	fmuls f0, f0, f1
/* 800375D4 000346B4  EC 42 00 32 */	fmuls f2, f2, f0
/* 800375D8 000346B8  EC 63 00 32 */	fmuls f3, f3, f0
/* 800375DC 000346BC  48 00 00 20 */	b .L_800375FC
.L_800375E0:
/* 800375E0 000346C0  C0 03 00 20 */	lfs f0, 0x20(r3)
/* 800375E4 000346C4  EC 00 10 2A */	fadds f0, f0, f2
/* 800375E8 000346C8  D0 03 00 20 */	stfs f0, 0x20(r3)
/* 800375EC 000346CC  C0 03 00 28 */	lfs f0, 0x28(r3)
/* 800375F0 000346D0  EC 00 18 2A */	fadds f0, f0, f3
/* 800375F4 000346D4  D0 03 00 28 */	stfs f0, 0x28(r3)
/* 800375F8 000346D8  80 63 00 00 */	lwz r3, 0x0(r3)
.L_800375FC:
/* 800375FC 000346DC  28 03 00 00 */	cmplwi r3, 0x0
/* 80037600 000346E0  40 82 FF E0 */	bne .L_800375E0
/* 80037604 000346E4  4E 80 00 20 */	blr
.endfn xParCmdApplyWind_Update__FP7xParCmdP9xParGroupf

# xParCmdRotPar_Update(xParCmd*, xParGroup*, float)
.fn xParCmdRotPar_Update__FP7xParCmdP9xParGroupf, global
/* 80037608 000346E8  94 21 FF 60 */	stwu r1, -0xa0(r1)
/* 8003760C 000346EC  7C 08 02 A6 */	mflr r0
/* 80037610 000346F0  90 01 00 A4 */	stw r0, 0xa4(r1)
/* 80037614 000346F4  DB E1 00 90 */	stfd f31, 0x90(r1)
/* 80037618 000346F8  F3 E1 00 98 */	psq_st f31, 0x98(r1), 0, qr0
/* 8003761C 000346FC  DB C1 00 80 */	stfd f30, 0x80(r1)
/* 80037620 00034700  F3 C1 00 88 */	psq_st f30, 0x88(r1), 0, qr0
/* 80037624 00034704  DB A1 00 70 */	stfd f29, 0x70(r1)
/* 80037628 00034708  F3 A1 00 78 */	psq_st f29, 0x78(r1), 0, qr0
/* 8003762C 0003470C  DB 81 00 60 */	stfd f28, 0x60(r1)
/* 80037630 00034710  F3 81 00 68 */	psq_st f28, 0x68(r1), 0, qr0
/* 80037634 00034714  DB 61 00 50 */	stfd f27, 0x50(r1)
/* 80037638 00034718  F3 61 00 58 */	psq_st f27, 0x58(r1), 0, qr0
/* 8003763C 0003471C  DB 41 00 40 */	stfd f26, 0x40(r1)
/* 80037640 00034720  F3 41 00 48 */	psq_st f26, 0x48(r1), 0, qr0
/* 80037644 00034724  DB 21 00 30 */	stfd f25, 0x30(r1)
/* 80037648 00034728  F3 21 00 38 */	psq_st f25, 0x38(r1), 0, qr0
/* 8003764C 0003472C  93 E1 00 2C */	stw r31, 0x2c(r1)
/* 80037650 00034730  80 63 00 04 */	lwz r3, 0x4(r3)
/* 80037654 00034734  FF E0 08 90 */	fmr f31, f1
/* 80037658 00034738  C0 C2 85 B0 */	lfs f6, "@831"@sda21(r2)
/* 8003765C 0003473C  C0 83 00 08 */	lfs f4, 0x8(r3)
/* 80037660 00034740  C0 63 00 14 */	lfs f3, 0x14(r3)
/* 80037664 00034744  C1 03 00 0C */	lfs f8, 0xc(r3)
/* 80037668 00034748  EC 44 30 24 */	fdivs f2, f4, f6
/* 8003766C 0003474C  C0 23 00 18 */	lfs f1, 0x18(r3)
/* 80037670 00034750  C1 23 00 10 */	lfs f9, 0x10(r3)
/* 80037674 00034754  C0 03 00 1C */	lfs f0, 0x1c(r3)
/* 80037678 00034758  C0 E2 85 AC */	lfs f7, "@830"@sda21(r2)
/* 8003767C 0003475C  83 E4 00 00 */	lwz r31, 0x0(r4)
/* 80037680 00034760  EC 63 20 28 */	fsubs f3, f3, f4
/* 80037684 00034764  EC 21 40 28 */	fsubs f1, f1, f8
/* 80037688 00034768  EC 00 48 28 */	fsubs f0, f0, f9
/* 8003768C 0003476C  EC A3 30 24 */	fdivs f5, f3, f6
/* 80037690 00034770  EC 81 30 24 */	fdivs f4, f1, f6
/* 80037694 00034774  EC 60 30 24 */	fdivs f3, f0, f6
/* 80037698 00034778  EC 28 30 24 */	fdivs f1, f8, f6
/* 8003769C 0003477C  EC 09 30 24 */	fdivs f0, f9, f6
/* 800376A0 00034780  EF C7 01 72 */	fmuls f30, f7, f5
/* 800376A4 00034784  EF A7 01 32 */	fmuls f29, f7, f4
/* 800376A8 00034788  EF 87 00 F2 */	fmuls f28, f7, f3
/* 800376AC 0003478C  EF 67 00 B2 */	fmuls f27, f7, f2
/* 800376B0 00034790  EF 47 00 72 */	fmuls f26, f7, f1
/* 800376B4 00034794  EF 27 00 32 */	fmuls f25, f7, f0
/* 800376B8 00034798  48 00 00 74 */	b .L_8003772C
.L_800376BC:
/* 800376BC 0003479C  4B FF 95 CD */	bl xurand__Fv
/* 800376C0 000347A0  EC 1E D8 7A */	fmadds f0, f30, f1, f27
/* 800376C4 000347A4  88 1F 00 34 */	lbz r0, 0x34(r31)
/* 800376C8 000347A8  EC 1F 00 32 */	fmuls f0, f31, f0
/* 800376CC 000347AC  FC 00 00 1E */	fctiwz f0, f0
/* 800376D0 000347B0  D8 01 00 08 */	stfd f0, 0x8(r1)
/* 800376D4 000347B4  80 61 00 0C */	lwz r3, 0xc(r1)
/* 800376D8 000347B8  7C 00 1A 14 */	add r0, r0, r3
/* 800376DC 000347BC  98 1F 00 34 */	stb r0, 0x34(r31)
/* 800376E0 000347C0  4B FF 95 A9 */	bl xurand__Fv
/* 800376E4 000347C4  EC 1D D0 7A */	fmadds f0, f29, f1, f26
/* 800376E8 000347C8  88 1F 00 35 */	lbz r0, 0x35(r31)
/* 800376EC 000347CC  EC 1F 00 32 */	fmuls f0, f31, f0
/* 800376F0 000347D0  FC 00 00 1E */	fctiwz f0, f0
/* 800376F4 000347D4  D8 01 00 10 */	stfd f0, 0x10(r1)
/* 800376F8 000347D8  80 61 00 14 */	lwz r3, 0x14(r1)
/* 800376FC 000347DC  7C 00 1A 14 */	add r0, r0, r3
/* 80037700 000347E0  98 1F 00 35 */	stb r0, 0x35(r31)
/* 80037704 000347E4  4B FF 95 85 */	bl xurand__Fv
/* 80037708 000347E8  EC 1C C8 7A */	fmadds f0, f28, f1, f25
/* 8003770C 000347EC  88 1F 00 36 */	lbz r0, 0x36(r31)
/* 80037710 000347F0  EC 1F 00 32 */	fmuls f0, f31, f0
/* 80037714 000347F4  FC 00 00 1E */	fctiwz f0, f0
/* 80037718 000347F8  D8 01 00 18 */	stfd f0, 0x18(r1)
/* 8003771C 000347FC  80 61 00 1C */	lwz r3, 0x1c(r1)
/* 80037720 00034800  7C 00 1A 14 */	add r0, r0, r3
/* 80037724 00034804  98 1F 00 36 */	stb r0, 0x36(r31)
/* 80037728 00034808  83 FF 00 00 */	lwz r31, 0x0(r31)
.L_8003772C:
/* 8003772C 0003480C  28 1F 00 00 */	cmplwi r31, 0x0
/* 80037730 00034810  40 82 FF 8C */	bne .L_800376BC
/* 80037734 00034814  E3 E1 00 98 */	psq_l f31, 0x98(r1), 0, qr0
/* 80037738 00034818  CB E1 00 90 */	lfd f31, 0x90(r1)
/* 8003773C 0003481C  E3 C1 00 88 */	psq_l f30, 0x88(r1), 0, qr0
/* 80037740 00034820  CB C1 00 80 */	lfd f30, 0x80(r1)
/* 80037744 00034824  E3 A1 00 78 */	psq_l f29, 0x78(r1), 0, qr0
/* 80037748 00034828  CB A1 00 70 */	lfd f29, 0x70(r1)
/* 8003774C 0003482C  E3 81 00 68 */	psq_l f28, 0x68(r1), 0, qr0
/* 80037750 00034830  CB 81 00 60 */	lfd f28, 0x60(r1)
/* 80037754 00034834  E3 61 00 58 */	psq_l f27, 0x58(r1), 0, qr0
/* 80037758 00034838  CB 61 00 50 */	lfd f27, 0x50(r1)
/* 8003775C 0003483C  E3 41 00 48 */	psq_l f26, 0x48(r1), 0, qr0
/* 80037760 00034840  CB 41 00 40 */	lfd f26, 0x40(r1)
/* 80037764 00034844  E3 21 00 38 */	psq_l f25, 0x38(r1), 0, qr0
/* 80037768 00034848  CB 21 00 30 */	lfd f25, 0x30(r1)
/* 8003776C 0003484C  80 01 00 A4 */	lwz r0, 0xa4(r1)
/* 80037770 00034850  83 E1 00 2C */	lwz r31, 0x2c(r1)
/* 80037774 00034854  7C 08 03 A6 */	mtlr r0
/* 80037778 00034858  38 21 00 A0 */	addi r1, r1, 0xa0
/* 8003777C 0003485C  4E 80 00 20 */	blr
.endfn xParCmdRotPar_Update__FP7xParCmdP9xParGroupf

# xParCmdVelocityApply_Update(xParCmd*, xParGroup*, float)
.fn xParCmdVelocityApply_Update__FP7xParCmdP9xParGroupf, global
/* 80037780 00034860  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80037784 00034864  7C 08 02 A6 */	mflr r0
/* 80037788 00034868  90 01 00 14 */	stw r0, 0x14(r1)
/* 8003778C 0003486C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80037790 00034870  83 E4 00 00 */	lwz r31, 0x0(r4)
/* 80037794 00034874  48 00 00 18 */	b .L_800377AC
.L_80037798:
/* 80037798 00034878  38 7F 00 10 */	addi r3, r31, 0x10
/* 8003779C 0003487C  38 BF 00 20 */	addi r5, r31, 0x20
/* 800377A0 00034880  7C 64 1B 78 */	mr r4, r3
/* 800377A4 00034884  4B FD 39 15 */	bl xVec3Add__FP5xVec3PC5xVec3PC5xVec3
/* 800377A8 00034888  83 FF 00 00 */	lwz r31, 0x0(r31)
.L_800377AC:
/* 800377AC 0003488C  28 1F 00 00 */	cmplwi r31, 0x0
/* 800377B0 00034890  40 82 FF E8 */	bne .L_80037798
/* 800377B4 00034894  80 01 00 14 */	lwz r0, 0x14(r1)
/* 800377B8 00034898  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 800377BC 0003489C  7C 08 03 A6 */	mtlr r0
/* 800377C0 000348A0  38 21 00 10 */	addi r1, r1, 0x10
/* 800377C4 000348A4  4E 80 00 20 */	blr
.endfn xParCmdVelocityApply_Update__FP7xParCmdP9xParGroupf

# xParCmdRotateAround_Update(xParCmd*, xParGroup*, float)
.fn xParCmdRotateAround_Update__FP7xParCmdP9xParGroupf, global
/* 800377C8 000348A8  94 21 FF 30 */	stwu r1, -0xd0(r1)
/* 800377CC 000348AC  7C 08 02 A6 */	mflr r0
/* 800377D0 000348B0  90 01 00 D4 */	stw r0, 0xd4(r1)
/* 800377D4 000348B4  DB E1 00 C0 */	stfd f31, 0xc0(r1)
/* 800377D8 000348B8  F3 E1 00 C8 */	psq_st f31, 0xc8(r1), 0, qr0
/* 800377DC 000348BC  DB C1 00 B0 */	stfd f30, 0xb0(r1)
/* 800377E0 000348C0  F3 C1 00 B8 */	psq_st f30, 0xb8(r1), 0, qr0
/* 800377E4 000348C4  DB A1 00 A0 */	stfd f29, 0xa0(r1)
/* 800377E8 000348C8  F3 A1 00 A8 */	psq_st f29, 0xa8(r1), 0, qr0
/* 800377EC 000348CC  93 E1 00 9C */	stw r31, 0x9c(r1)
/* 800377F0 000348D0  93 C1 00 98 */	stw r30, 0x98(r1)
/* 800377F4 000348D4  83 C3 00 04 */	lwz r30, 0x4(r3)
/* 800377F8 000348D8  C0 82 85 B4 */	lfs f4, "@857"@sda21(r2)
/* 800377FC 000348DC  C0 5E 00 1C */	lfs f2, 0x1c(r30)
/* 80037800 000348E0  C0 1E 00 18 */	lfs f0, 0x18(r30)
/* 80037804 000348E4  EC 61 00 B2 */	fmuls f3, f1, f2
/* 80037808 000348E8  C0 42 85 B8 */	lfs f2, "@858"@sda21(r2)
/* 8003780C 000348EC  EF A1 00 32 */	fmuls f29, f1, f0
/* 80037810 000348F0  83 E4 00 00 */	lwz r31, 0x0(r4)
/* 80037814 000348F4  EC 04 00 F2 */	fmuls f0, f4, f3
/* 80037818 000348F8  EF C0 10 24 */	fdivs f30, f0, f2
/* 8003781C 000348FC  48 00 00 9C */	b .L_800378B8
.L_80037820:
/* 80037820 00034900  38 61 00 2C */	addi r3, r1, 0x2c
/* 80037824 00034904  38 9E 00 08 */	addi r4, r30, 0x8
/* 80037828 00034908  38 BF 00 10 */	addi r5, r31, 0x10
/* 8003782C 0003490C  4B FD 6E 65 */	bl xVec3Sub__FP5xVec3PC5xVec3PC5xVec3
/* 80037830 00034910  C0 02 85 9C */	lfs f0, "@691"@sda21(r2)
/* 80037834 00034914  38 61 00 68 */	addi r3, r1, 0x68
/* 80037838 00034918  38 81 00 2C */	addi r4, r1, 0x2c
/* 8003783C 0003491C  D0 01 00 30 */	stfs f0, 0x30(r1)
/* 80037840 00034920  4B FF A7 71 */	bl xMat3x3LookVec__FP7xMat3x3PC5xVec3
/* 80037844 00034924  FF E0 08 90 */	fmr f31, f1
/* 80037848 00034928  38 61 00 68 */	addi r3, r1, 0x68
/* 8003784C 0003492C  38 81 00 20 */	addi r4, r1, 0x20
/* 80037850 00034930  4B FF A5 E5 */	bl xMat3x3GetEuler__FPC7xMat3x3P5xVec3
/* 80037854 00034934  C0 01 00 20 */	lfs f0, 0x20(r1)
/* 80037858 00034938  38 61 00 38 */	addi r3, r1, 0x38
/* 8003785C 0003493C  C0 41 00 24 */	lfs f2, 0x24(r1)
/* 80037860 00034940  EC 20 F0 2A */	fadds f1, f0, f30
/* 80037864 00034944  C0 61 00 28 */	lfs f3, 0x28(r1)
/* 80037868 00034948  D0 21 00 20 */	stfs f1, 0x20(r1)
/* 8003786C 0003494C  4B FF A9 65 */	bl xMat3x3Euler__FP7xMat3x3fff
/* 80037870 00034950  EC 3F E8 2A */	fadds f1, f31, f29
/* 80037874 00034954  C0 02 85 9C */	lfs f0, "@691"@sda21(r2)
/* 80037878 00034958  38 61 00 08 */	addi r3, r1, 0x8
/* 8003787C 0003495C  38 81 00 38 */	addi r4, r1, 0x38
/* 80037880 00034960  D0 01 00 14 */	stfs f0, 0x14(r1)
/* 80037884 00034964  38 A1 00 14 */	addi r5, r1, 0x14
/* 80037888 00034968  D0 01 00 18 */	stfs f0, 0x18(r1)
/* 8003788C 0003496C  D0 21 00 1C */	stfs f1, 0x1c(r1)
/* 80037890 00034970  48 00 0B 35 */	bl xMat3x3RMulVec__FP5xVec3PC7xMat3x3PC5xVec3
/* 80037894 00034974  C0 21 00 08 */	lfs f1, 0x8(r1)
/* 80037898 00034978  C0 1E 00 08 */	lfs f0, 0x8(r30)
/* 8003789C 0003497C  EC 01 00 2A */	fadds f0, f1, f0
/* 800378A0 00034980  D0 1F 00 10 */	stfs f0, 0x10(r31)
/* 800378A4 00034984  C0 21 00 10 */	lfs f1, 0x10(r1)
/* 800378A8 00034988  C0 1E 00 10 */	lfs f0, 0x10(r30)
/* 800378AC 0003498C  EC 01 00 2A */	fadds f0, f1, f0
/* 800378B0 00034990  D0 1F 00 18 */	stfs f0, 0x18(r31)
/* 800378B4 00034994  83 FF 00 00 */	lwz r31, 0x0(r31)
.L_800378B8:
/* 800378B8 00034998  28 1F 00 00 */	cmplwi r31, 0x0
/* 800378BC 0003499C  40 82 FF 64 */	bne .L_80037820
/* 800378C0 000349A0  E3 E1 00 C8 */	psq_l f31, 0xc8(r1), 0, qr0
/* 800378C4 000349A4  CB E1 00 C0 */	lfd f31, 0xc0(r1)
/* 800378C8 000349A8  E3 C1 00 B8 */	psq_l f30, 0xb8(r1), 0, qr0
/* 800378CC 000349AC  CB C1 00 B0 */	lfd f30, 0xb0(r1)
/* 800378D0 000349B0  E3 A1 00 A8 */	psq_l f29, 0xa8(r1), 0, qr0
/* 800378D4 000349B4  CB A1 00 A0 */	lfd f29, 0xa0(r1)
/* 800378D8 000349B8  83 E1 00 9C */	lwz r31, 0x9c(r1)
/* 800378DC 000349BC  80 01 00 D4 */	lwz r0, 0xd4(r1)
/* 800378E0 000349C0  83 C1 00 98 */	lwz r30, 0x98(r1)
/* 800378E4 000349C4  7C 08 03 A6 */	mtlr r0
/* 800378E8 000349C8  38 21 00 D0 */	addi r1, r1, 0xd0
/* 800378EC 000349CC  4E 80 00 20 */	blr
.endfn xParCmdRotateAround_Update__FP7xParCmdP9xParGroupf

# xParCmdTex_Update(xParCmd*, xParGroup*, float)
.fn xParCmdTex_Update__FP7xParCmdP9xParGroupf, global
/* 800378F0 000349D0  4E 80 00 20 */	blr
.endfn xParCmdTex_Update__FP7xParCmdP9xParGroupf

# xParCmdTexAnim_Update(xParCmd*, xParGroup*, float)
.fn xParCmdTexAnim_Update__FP7xParCmdP9xParGroupf, global
/* 800378F4 000349D4  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 800378F8 000349D8  7C 08 02 A6 */	mflr r0
/* 800378FC 000349DC  90 01 00 14 */	stw r0, 0x14(r1)
/* 80037900 000349E0  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80037904 000349E4  93 C1 00 08 */	stw r30, 0x8(r1)
/* 80037908 000349E8  83 C4 00 20 */	lwz r30, 0x20(r4)
/* 8003790C 000349EC  80 63 00 04 */	lwz r3, 0x4(r3)
/* 80037910 000349F0  28 1E 00 00 */	cmplwi r30, 0x0
/* 80037914 000349F4  41 82 03 6C */	beq .L_80037C80
/* 80037918 000349F8  C0 43 00 10 */	lfs f2, 0x10(r3)
/* 8003791C 000349FC  C0 02 85 9C */	lfs f0, "@691"@sda21(r2)
/* 80037920 00034A00  FC 02 00 40 */	fcmpo cr0, f2, f0
/* 80037924 00034A04  40 81 00 28 */	ble .L_8003794C
/* 80037928 00034A08  C0 03 00 14 */	lfs f0, 0x14(r3)
/* 8003792C 00034A0C  EC 00 08 28 */	fsubs f0, f0, f1
/* 80037930 00034A10  D0 03 00 14 */	stfs f0, 0x14(r3)
/* 80037934 00034A14  C0 23 00 14 */	lfs f1, 0x14(r3)
/* 80037938 00034A18  C0 02 85 9C */	lfs f0, "@691"@sda21(r2)
/* 8003793C 00034A1C  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80037940 00034A20  41 81 03 40 */	bgt .L_80037C80
/* 80037944 00034A24  C0 03 00 10 */	lfs f0, 0x10(r3)
/* 80037948 00034A28  D0 03 00 14 */	stfs f0, 0x14(r3)
.L_8003794C:
/* 8003794C 00034A2C  88 03 00 08 */	lbz r0, 0x8(r3)
/* 80037950 00034A30  83 E4 00 00 */	lwz r31, 0x0(r4)
/* 80037954 00034A34  28 00 00 00 */	cmplwi r0, 0x0
/* 80037958 00034A38  40 82 00 48 */	bne .L_800379A0
/* 8003795C 00034A3C  48 00 00 38 */	b .L_80037994
.L_80037960:
/* 80037960 00034A40  4B FF 93 09 */	bl xrand__Fv
/* 80037964 00034A44  88 9E 00 1A */	lbz r4, 0x1a(r30)
/* 80037968 00034A48  7C 03 23 96 */	divwu r0, r3, r4
/* 8003796C 00034A4C  7C 00 21 D6 */	mullw r0, r0, r4
/* 80037970 00034A50  7C 00 18 50 */	subf r0, r0, r3
/* 80037974 00034A54  98 1F 00 32 */	stb r0, 0x32(r31)
/* 80037978 00034A58  4B FF 92 F1 */	bl xrand__Fv
/* 8003797C 00034A5C  88 9E 00 19 */	lbz r4, 0x19(r30)
/* 80037980 00034A60  7C 03 23 96 */	divwu r0, r3, r4
/* 80037984 00034A64  7C 00 21 D6 */	mullw r0, r0, r4
/* 80037988 00034A68  7C 00 18 50 */	subf r0, r0, r3
/* 8003798C 00034A6C  98 1F 00 33 */	stb r0, 0x33(r31)
/* 80037990 00034A70  83 FF 00 00 */	lwz r31, 0x0(r31)
.L_80037994:
/* 80037994 00034A74  28 1F 00 00 */	cmplwi r31, 0x0
/* 80037998 00034A78  40 82 FF C8 */	bne .L_80037960
/* 8003799C 00034A7C  48 00 02 E4 */	b .L_80037C80
.L_800379A0:
/* 800379A0 00034A80  28 00 00 01 */	cmplwi r0, 0x1
/* 800379A4 00034A84  40 82 00 E0 */	bne .L_80037A84
/* 800379A8 00034A88  88 1E 00 1A */	lbz r0, 0x1a(r30)
/* 800379AC 00034A8C  28 00 00 01 */	cmplwi r0, 0x1
/* 800379B0 00034A90  40 81 02 D0 */	ble .L_80037C80
/* 800379B4 00034A94  48 00 00 C4 */	b .L_80037A78
.L_800379B8:
/* 800379B8 00034A98  88 9F 00 32 */	lbz r4, 0x32(r31)
/* 800379BC 00034A9C  38 04 00 01 */	addi r0, r4, 0x1
/* 800379C0 00034AA0  98 1F 00 32 */	stb r0, 0x32(r31)
/* 800379C4 00034AA4  88 9F 00 32 */	lbz r4, 0x32(r31)
/* 800379C8 00034AA8  88 1E 00 1A */	lbz r0, 0x1a(r30)
/* 800379CC 00034AAC  7C 04 00 40 */	cmplw r4, r0
/* 800379D0 00034AB0  41 80 00 A4 */	blt .L_80037A74
/* 800379D4 00034AB4  38 A0 00 00 */	li r5, 0x0
/* 800379D8 00034AB8  98 BF 00 32 */	stb r5, 0x32(r31)
/* 800379DC 00034ABC  88 03 00 09 */	lbz r0, 0x9(r3)
/* 800379E0 00034AC0  28 00 00 01 */	cmplwi r0, 0x1
/* 800379E4 00034AC4  40 82 00 28 */	bne .L_80037A0C
/* 800379E8 00034AC8  88 9F 00 33 */	lbz r4, 0x33(r31)
/* 800379EC 00034ACC  38 04 00 01 */	addi r0, r4, 0x1
/* 800379F0 00034AD0  98 1F 00 33 */	stb r0, 0x33(r31)
/* 800379F4 00034AD4  88 9F 00 33 */	lbz r4, 0x33(r31)
/* 800379F8 00034AD8  88 1E 00 19 */	lbz r0, 0x19(r30)
/* 800379FC 00034ADC  7C 04 00 40 */	cmplw r4, r0
/* 80037A00 00034AE0  41 80 00 74 */	blt .L_80037A74
/* 80037A04 00034AE4  98 BF 00 33 */	stb r5, 0x33(r31)
/* 80037A08 00034AE8  48 00 00 6C */	b .L_80037A74
.L_80037A0C:
/* 80037A0C 00034AEC  28 00 00 02 */	cmplwi r0, 0x2
/* 80037A10 00034AF0  40 82 00 2C */	bne .L_80037A3C
/* 80037A14 00034AF4  88 9F 00 33 */	lbz r4, 0x33(r31)
/* 80037A18 00034AF8  28 04 00 00 */	cmplwi r4, 0x0
/* 80037A1C 00034AFC  40 82 00 14 */	bne .L_80037A30
/* 80037A20 00034B00  88 9E 00 19 */	lbz r4, 0x19(r30)
/* 80037A24 00034B04  38 04 FF FF */	addi r0, r4, -0x1
/* 80037A28 00034B08  98 1F 00 33 */	stb r0, 0x33(r31)
/* 80037A2C 00034B0C  48 00 00 48 */	b .L_80037A74
.L_80037A30:
/* 80037A30 00034B10  38 04 FF FF */	addi r0, r4, -0x1
/* 80037A34 00034B14  98 1F 00 33 */	stb r0, 0x33(r31)
/* 80037A38 00034B18  48 00 00 3C */	b .L_80037A74
.L_80037A3C:
/* 80037A3C 00034B1C  28 00 00 03 */	cmplwi r0, 0x3
/* 80037A40 00034B20  40 82 00 34 */	bne .L_80037A74
/* 80037A44 00034B24  88 9F 00 33 */	lbz r4, 0x33(r31)
/* 80037A48 00034B28  38 04 00 01 */	addi r0, r4, 0x1
/* 80037A4C 00034B2C  98 1F 00 33 */	stb r0, 0x33(r31)
/* 80037A50 00034B30  88 1F 00 33 */	lbz r0, 0x33(r31)
/* 80037A54 00034B34  88 9E 00 19 */	lbz r4, 0x19(r30)
/* 80037A58 00034B38  7C 00 20 40 */	cmplw r0, r4
/* 80037A5C 00034B3C  41 80 00 18 */	blt .L_80037A74
/* 80037A60 00034B40  38 04 FF FF */	addi r0, r4, -0x1
/* 80037A64 00034B44  98 1F 00 33 */	stb r0, 0x33(r31)
/* 80037A68 00034B48  88 9E 00 1A */	lbz r4, 0x1a(r30)
/* 80037A6C 00034B4C  38 04 FF FF */	addi r0, r4, -0x1
/* 80037A70 00034B50  98 1F 00 32 */	stb r0, 0x32(r31)
.L_80037A74:
/* 80037A74 00034B54  83 FF 00 00 */	lwz r31, 0x0(r31)
.L_80037A78:
/* 80037A78 00034B58  28 1F 00 00 */	cmplwi r31, 0x0
/* 80037A7C 00034B5C  40 82 FF 3C */	bne .L_800379B8
/* 80037A80 00034B60  48 00 02 00 */	b .L_80037C80
.L_80037A84:
/* 80037A84 00034B64  28 00 00 02 */	cmplwi r0, 0x2
/* 80037A88 00034B68  40 82 00 A8 */	bne .L_80037B30
/* 80037A8C 00034B6C  88 1E 00 1A */	lbz r0, 0x1a(r30)
/* 80037A90 00034B70  28 00 00 01 */	cmplwi r0, 0x1
/* 80037A94 00034B74  40 81 01 EC */	ble .L_80037C80
/* 80037A98 00034B78  48 00 00 8C */	b .L_80037B24
.L_80037A9C:
/* 80037A9C 00034B7C  88 9F 00 32 */	lbz r4, 0x32(r31)
/* 80037AA0 00034B80  28 04 00 00 */	cmplwi r4, 0x0
/* 80037AA4 00034B84  40 82 00 74 */	bne .L_80037B18
/* 80037AA8 00034B88  88 9E 00 1A */	lbz r4, 0x1a(r30)
/* 80037AAC 00034B8C  38 04 FF FF */	addi r0, r4, -0x1
/* 80037AB0 00034B90  98 1F 00 32 */	stb r0, 0x32(r31)
/* 80037AB4 00034B94  88 03 00 09 */	lbz r0, 0x9(r3)
/* 80037AB8 00034B98  28 00 00 01 */	cmplwi r0, 0x1
/* 80037ABC 00034B9C  40 82 00 2C */	bne .L_80037AE8
/* 80037AC0 00034BA0  88 9F 00 33 */	lbz r4, 0x33(r31)
/* 80037AC4 00034BA4  38 04 00 01 */	addi r0, r4, 0x1
/* 80037AC8 00034BA8  98 1F 00 33 */	stb r0, 0x33(r31)
/* 80037ACC 00034BAC  88 9F 00 33 */	lbz r4, 0x33(r31)
/* 80037AD0 00034BB0  88 1E 00 19 */	lbz r0, 0x19(r30)
/* 80037AD4 00034BB4  7C 04 00 40 */	cmplw r4, r0
/* 80037AD8 00034BB8  41 80 00 48 */	blt .L_80037B20
/* 80037ADC 00034BBC  38 00 00 00 */	li r0, 0x0
/* 80037AE0 00034BC0  98 1F 00 33 */	stb r0, 0x33(r31)
/* 80037AE4 00034BC4  48 00 00 3C */	b .L_80037B20
.L_80037AE8:
/* 80037AE8 00034BC8  28 00 00 02 */	cmplwi r0, 0x2
/* 80037AEC 00034BCC  40 82 00 34 */	bne .L_80037B20
/* 80037AF0 00034BD0  88 9F 00 33 */	lbz r4, 0x33(r31)
/* 80037AF4 00034BD4  28 04 00 00 */	cmplwi r4, 0x0
/* 80037AF8 00034BD8  40 82 00 14 */	bne .L_80037B0C
/* 80037AFC 00034BDC  88 9E 00 19 */	lbz r4, 0x19(r30)
/* 80037B00 00034BE0  38 04 FF FF */	addi r0, r4, -0x1
/* 80037B04 00034BE4  98 1F 00 33 */	stb r0, 0x33(r31)
/* 80037B08 00034BE8  48 00 00 18 */	b .L_80037B20
.L_80037B0C:
/* 80037B0C 00034BEC  38 04 FF FF */	addi r0, r4, -0x1
/* 80037B10 00034BF0  98 1F 00 33 */	stb r0, 0x33(r31)
/* 80037B14 00034BF4  48 00 00 0C */	b .L_80037B20
.L_80037B18:
/* 80037B18 00034BF8  38 04 FF FF */	addi r0, r4, -0x1
/* 80037B1C 00034BFC  98 1F 00 32 */	stb r0, 0x32(r31)
.L_80037B20:
/* 80037B20 00034C00  83 FF 00 00 */	lwz r31, 0x0(r31)
.L_80037B24:
/* 80037B24 00034C04  28 1F 00 00 */	cmplwi r31, 0x0
/* 80037B28 00034C08  40 82 FF 74 */	bne .L_80037A9C
/* 80037B2C 00034C0C  48 00 01 54 */	b .L_80037C80
.L_80037B30:
/* 80037B30 00034C10  28 00 00 03 */	cmplwi r0, 0x3
/* 80037B34 00034C14  40 82 00 A8 */	bne .L_80037BDC
/* 80037B38 00034C18  88 1E 00 19 */	lbz r0, 0x19(r30)
/* 80037B3C 00034C1C  28 00 00 01 */	cmplwi r0, 0x1
/* 80037B40 00034C20  40 81 01 40 */	ble .L_80037C80
/* 80037B44 00034C24  48 00 00 8C */	b .L_80037BD0
.L_80037B48:
/* 80037B48 00034C28  88 9F 00 33 */	lbz r4, 0x33(r31)
/* 80037B4C 00034C2C  28 04 00 00 */	cmplwi r4, 0x0
/* 80037B50 00034C30  40 82 00 74 */	bne .L_80037BC4
/* 80037B54 00034C34  88 9E 00 19 */	lbz r4, 0x19(r30)
/* 80037B58 00034C38  38 04 FF FF */	addi r0, r4, -0x1
/* 80037B5C 00034C3C  98 1F 00 33 */	stb r0, 0x33(r31)
/* 80037B60 00034C40  88 03 00 09 */	lbz r0, 0x9(r3)
/* 80037B64 00034C44  28 00 00 01 */	cmplwi r0, 0x1
/* 80037B68 00034C48  40 82 00 2C */	bne .L_80037B94
/* 80037B6C 00034C4C  88 9F 00 32 */	lbz r4, 0x32(r31)
/* 80037B70 00034C50  38 04 00 01 */	addi r0, r4, 0x1
/* 80037B74 00034C54  98 1F 00 32 */	stb r0, 0x32(r31)
/* 80037B78 00034C58  88 9F 00 32 */	lbz r4, 0x32(r31)
/* 80037B7C 00034C5C  88 1E 00 1A */	lbz r0, 0x1a(r30)
/* 80037B80 00034C60  7C 04 00 40 */	cmplw r4, r0
/* 80037B84 00034C64  41 80 00 48 */	blt .L_80037BCC
/* 80037B88 00034C68  38 00 00 00 */	li r0, 0x0
/* 80037B8C 00034C6C  98 1F 00 32 */	stb r0, 0x32(r31)
/* 80037B90 00034C70  48 00 00 3C */	b .L_80037BCC
.L_80037B94:
/* 80037B94 00034C74  28 00 00 02 */	cmplwi r0, 0x2
/* 80037B98 00034C78  40 82 00 34 */	bne .L_80037BCC
/* 80037B9C 00034C7C  88 9F 00 32 */	lbz r4, 0x32(r31)
/* 80037BA0 00034C80  28 04 00 00 */	cmplwi r4, 0x0
/* 80037BA4 00034C84  40 82 00 14 */	bne .L_80037BB8
/* 80037BA8 00034C88  88 9E 00 1A */	lbz r4, 0x1a(r30)
/* 80037BAC 00034C8C  38 04 FF FF */	addi r0, r4, -0x1
/* 80037BB0 00034C90  98 1F 00 32 */	stb r0, 0x32(r31)
/* 80037BB4 00034C94  48 00 00 18 */	b .L_80037BCC
.L_80037BB8:
/* 80037BB8 00034C98  38 04 FF FF */	addi r0, r4, -0x1
/* 80037BBC 00034C9C  98 1F 00 32 */	stb r0, 0x32(r31)
/* 80037BC0 00034CA0  48 00 00 0C */	b .L_80037BCC
.L_80037BC4:
/* 80037BC4 00034CA4  38 04 FF FF */	addi r0, r4, -0x1
/* 80037BC8 00034CA8  98 1F 00 33 */	stb r0, 0x33(r31)
.L_80037BCC:
/* 80037BCC 00034CAC  83 FF 00 00 */	lwz r31, 0x0(r31)
.L_80037BD0:
/* 80037BD0 00034CB0  28 1F 00 00 */	cmplwi r31, 0x0
/* 80037BD4 00034CB4  40 82 FF 74 */	bne .L_80037B48
/* 80037BD8 00034CB8  48 00 00 A8 */	b .L_80037C80
.L_80037BDC:
/* 80037BDC 00034CBC  28 00 00 04 */	cmplwi r0, 0x4
/* 80037BE0 00034CC0  40 82 00 A0 */	bne .L_80037C80
/* 80037BE4 00034CC4  88 1E 00 19 */	lbz r0, 0x19(r30)
/* 80037BE8 00034CC8  28 00 00 01 */	cmplwi r0, 0x1
/* 80037BEC 00034CCC  40 81 00 94 */	ble .L_80037C80
/* 80037BF0 00034CD0  48 00 00 88 */	b .L_80037C78
.L_80037BF4:
/* 80037BF4 00034CD4  88 9F 00 33 */	lbz r4, 0x33(r31)
/* 80037BF8 00034CD8  38 04 00 01 */	addi r0, r4, 0x1
/* 80037BFC 00034CDC  98 1F 00 33 */	stb r0, 0x33(r31)
/* 80037C00 00034CE0  88 9F 00 33 */	lbz r4, 0x33(r31)
/* 80037C04 00034CE4  88 1E 00 19 */	lbz r0, 0x19(r30)
/* 80037C08 00034CE8  7C 04 00 40 */	cmplw r4, r0
/* 80037C0C 00034CEC  41 80 00 68 */	blt .L_80037C74
/* 80037C10 00034CF0  38 A0 00 00 */	li r5, 0x0
/* 80037C14 00034CF4  98 BF 00 33 */	stb r5, 0x33(r31)
/* 80037C18 00034CF8  88 03 00 09 */	lbz r0, 0x9(r3)
/* 80037C1C 00034CFC  28 00 00 01 */	cmplwi r0, 0x1
/* 80037C20 00034D00  40 82 00 28 */	bne .L_80037C48
/* 80037C24 00034D04  88 9F 00 32 */	lbz r4, 0x32(r31)
/* 80037C28 00034D08  38 04 00 01 */	addi r0, r4, 0x1
/* 80037C2C 00034D0C  98 1F 00 32 */	stb r0, 0x32(r31)
/* 80037C30 00034D10  88 9F 00 32 */	lbz r4, 0x32(r31)
/* 80037C34 00034D14  88 1E 00 1A */	lbz r0, 0x1a(r30)
/* 80037C38 00034D18  7C 04 00 40 */	cmplw r4, r0
/* 80037C3C 00034D1C  41 80 00 38 */	blt .L_80037C74
/* 80037C40 00034D20  98 BF 00 32 */	stb r5, 0x32(r31)
/* 80037C44 00034D24  48 00 00 30 */	b .L_80037C74
.L_80037C48:
/* 80037C48 00034D28  28 00 00 02 */	cmplwi r0, 0x2
/* 80037C4C 00034D2C  40 82 00 28 */	bne .L_80037C74
/* 80037C50 00034D30  88 9F 00 32 */	lbz r4, 0x32(r31)
/* 80037C54 00034D34  28 04 00 00 */	cmplwi r4, 0x0
/* 80037C58 00034D38  40 82 00 14 */	bne .L_80037C6C
/* 80037C5C 00034D3C  88 9E 00 1A */	lbz r4, 0x1a(r30)
/* 80037C60 00034D40  38 04 FF FF */	addi r0, r4, -0x1
/* 80037C64 00034D44  98 1F 00 32 */	stb r0, 0x32(r31)
/* 80037C68 00034D48  48 00 00 0C */	b .L_80037C74
.L_80037C6C:
/* 80037C6C 00034D4C  38 04 FF FF */	addi r0, r4, -0x1
/* 80037C70 00034D50  98 1F 00 32 */	stb r0, 0x32(r31)
.L_80037C74:
/* 80037C74 00034D54  83 FF 00 00 */	lwz r31, 0x0(r31)
.L_80037C78:
/* 80037C78 00034D58  28 1F 00 00 */	cmplwi r31, 0x0
/* 80037C7C 00034D5C  40 82 FF 78 */	bne .L_80037BF4
.L_80037C80:
/* 80037C80 00034D60  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80037C84 00034D64  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80037C88 00034D68  83 C1 00 08 */	lwz r30, 0x8(r1)
/* 80037C8C 00034D6C  7C 08 03 A6 */	mtlr r0
/* 80037C90 00034D70  38 21 00 10 */	addi r1, r1, 0x10
/* 80037C94 00034D74  4E 80 00 20 */	blr
.endfn xParCmdTexAnim_Update__FP7xParCmdP9xParGroupf

# xParCmdCollideFall_Update(xParCmd*, xParGroup*, float)
.fn xParCmdCollideFall_Update__FP7xParCmdP9xParGroupf, global
/* 80037C98 00034D78  80 63 00 04 */	lwz r3, 0x4(r3)
/* 80037C9C 00034D7C  80 84 00 00 */	lwz r4, 0x0(r4)
/* 80037CA0 00034D80  48 00 00 4C */	b .L_80037CEC
.L_80037CA4:
/* 80037CA4 00034D84  C0 43 00 08 */	lfs f2, 0x8(r3)
/* 80037CA8 00034D88  C0 24 00 14 */	lfs f1, 0x14(r4)
/* 80037CAC 00034D8C  C0 02 85 9C */	lfs f0, "@691"@sda21(r2)
/* 80037CB0 00034D90  EC 22 08 28 */	fsubs f1, f2, f1
/* 80037CB4 00034D94  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80037CB8 00034D98  41 80 00 30 */	blt .L_80037CE8
/* 80037CBC 00034D9C  C0 03 00 0C */	lfs f0, 0xc(r3)
/* 80037CC0 00034DA0  EC 01 10 3A */	fmadds f0, f1, f0, f2
/* 80037CC4 00034DA4  D0 04 00 14 */	stfs f0, 0x14(r4)
/* 80037CC8 00034DA8  C0 24 00 24 */	lfs f1, 0x24(r4)
/* 80037CCC 00034DAC  C0 02 85 9C */	lfs f0, "@691"@sda21(r2)
/* 80037CD0 00034DB0  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80037CD4 00034DB4  40 80 00 14 */	bge .L_80037CE8
/* 80037CD8 00034DB8  FC 20 08 50 */	fneg f1, f1
/* 80037CDC 00034DBC  C0 03 00 0C */	lfs f0, 0xc(r3)
/* 80037CE0 00034DC0  EC 01 00 32 */	fmuls f0, f1, f0
/* 80037CE4 00034DC4  D0 04 00 24 */	stfs f0, 0x24(r4)
.L_80037CE8:
/* 80037CE8 00034DC8  80 84 00 00 */	lwz r4, 0x0(r4)
.L_80037CEC:
/* 80037CEC 00034DCC  28 04 00 00 */	cmplwi r4, 0x0
/* 80037CF0 00034DD0  40 82 FF B4 */	bne .L_80037CA4
/* 80037CF4 00034DD4  4E 80 00 20 */	blr
.endfn xParCmdCollideFall_Update__FP7xParCmdP9xParGroupf

# xParCmdCollideFallSticky_Update(xParCmd*, xParGroup*, float)
.fn xParCmdCollideFallSticky_Update__FP7xParCmdP9xParGroupf, global
/* 80037CF8 00034DD8  80 63 00 04 */	lwz r3, 0x4(r3)
/* 80037CFC 00034DDC  C0 22 85 A8 */	lfs f1, "@812"@sda21(r2)
/* 80037D00 00034DE0  C0 03 00 10 */	lfs f0, 0x10(r3)
/* 80037D04 00034DE4  80 84 00 00 */	lwz r4, 0x0(r4)
/* 80037D08 00034DE8  EC 61 00 28 */	fsubs f3, f1, f0
/* 80037D0C 00034DEC  48 00 00 64 */	b .L_80037D70
.L_80037D10:
/* 80037D10 00034DF0  C0 43 00 08 */	lfs f2, 0x8(r3)
/* 80037D14 00034DF4  C0 24 00 14 */	lfs f1, 0x14(r4)
/* 80037D18 00034DF8  C0 02 85 9C */	lfs f0, "@691"@sda21(r2)
/* 80037D1C 00034DFC  EC 22 08 28 */	fsubs f1, f2, f1
/* 80037D20 00034E00  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80037D24 00034E04  41 80 00 48 */	blt .L_80037D6C
/* 80037D28 00034E08  C0 03 00 0C */	lfs f0, 0xc(r3)
/* 80037D2C 00034E0C  EC 01 10 3A */	fmadds f0, f1, f0, f2
/* 80037D30 00034E10  D0 04 00 14 */	stfs f0, 0x14(r4)
/* 80037D34 00034E14  C0 24 00 24 */	lfs f1, 0x24(r4)
/* 80037D38 00034E18  C0 02 85 9C */	lfs f0, "@691"@sda21(r2)
/* 80037D3C 00034E1C  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80037D40 00034E20  40 80 00 14 */	bge .L_80037D54
/* 80037D44 00034E24  FC 20 08 50 */	fneg f1, f1
/* 80037D48 00034E28  C0 03 00 0C */	lfs f0, 0xc(r3)
/* 80037D4C 00034E2C  EC 01 00 32 */	fmuls f0, f1, f0
/* 80037D50 00034E30  D0 04 00 24 */	stfs f0, 0x24(r4)
.L_80037D54:
/* 80037D54 00034E34  C0 04 00 20 */	lfs f0, 0x20(r4)
/* 80037D58 00034E38  EC 00 00 F2 */	fmuls f0, f0, f3
/* 80037D5C 00034E3C  D0 04 00 20 */	stfs f0, 0x20(r4)
/* 80037D60 00034E40  C0 04 00 28 */	lfs f0, 0x28(r4)
/* 80037D64 00034E44  EC 00 00 F2 */	fmuls f0, f0, f3
/* 80037D68 00034E48  D0 04 00 28 */	stfs f0, 0x28(r4)
.L_80037D6C:
/* 80037D6C 00034E4C  80 84 00 00 */	lwz r4, 0x0(r4)
.L_80037D70:
/* 80037D70 00034E50  28 04 00 00 */	cmplwi r4, 0x0
/* 80037D74 00034E54  40 82 FF 9C */	bne .L_80037D10
/* 80037D78 00034E58  4E 80 00 20 */	blr
.endfn xParCmdCollideFallSticky_Update__FP7xParCmdP9xParGroupf

# xParCmd_DampenSpeed_Update(xParCmd*, xParGroup*, float)
.fn xParCmd_DampenSpeed_Update__FP7xParCmdP9xParGroupf, global
/* 80037D7C 00034E5C  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 80037D80 00034E60  7C 08 02 A6 */	mflr r0
/* 80037D84 00034E64  90 01 00 24 */	stw r0, 0x24(r1)
/* 80037D88 00034E68  DB E1 00 10 */	stfd f31, 0x10(r1)
/* 80037D8C 00034E6C  F3 E1 00 18 */	psq_st f31, 0x18(r1), 0, qr0
/* 80037D90 00034E70  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80037D94 00034E74  80 63 00 04 */	lwz r3, 0x4(r3)
/* 80037D98 00034E78  88 03 00 04 */	lbz r0, 0x4(r3)
/* 80037D9C 00034E7C  28 00 00 00 */	cmplwi r0, 0x0
/* 80037DA0 00034E80  41 82 00 30 */	beq .L_80037DD0
/* 80037DA4 00034E84  C0 03 00 08 */	lfs f0, 0x8(r3)
/* 80037DA8 00034E88  83 E4 00 00 */	lwz r31, 0x0(r4)
/* 80037DAC 00034E8C  EF E1 00 32 */	fmuls f31, f1, f0
/* 80037DB0 00034E90  48 00 00 18 */	b .L_80037DC8
.L_80037DB4:
/* 80037DB4 00034E94  FC 20 F8 90 */	fmr f1, f31
/* 80037DB8 00034E98  38 7F 00 20 */	addi r3, r31, 0x20
/* 80037DBC 00034E9C  7C 64 1B 78 */	mr r4, r3
/* 80037DC0 00034EA0  4B FD D2 99 */	bl xVec3AddScaled__FP5xVec3PC5xVec3f
/* 80037DC4 00034EA4  83 FF 00 00 */	lwz r31, 0x0(r31)
.L_80037DC8:
/* 80037DC8 00034EA8  28 1F 00 00 */	cmplwi r31, 0x0
/* 80037DCC 00034EAC  40 82 FF E8 */	bne .L_80037DB4
.L_80037DD0:
/* 80037DD0 00034EB0  E3 E1 00 18 */	psq_l f31, 0x18(r1), 0, qr0
/* 80037DD4 00034EB4  80 01 00 24 */	lwz r0, 0x24(r1)
/* 80037DD8 00034EB8  CB E1 00 10 */	lfd f31, 0x10(r1)
/* 80037DDC 00034EBC  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80037DE0 00034EC0  7C 08 03 A6 */	mtlr r0
/* 80037DE4 00034EC4  38 21 00 20 */	addi r1, r1, 0x20
/* 80037DE8 00034EC8  4E 80 00 20 */	blr
.endfn xParCmd_DampenSpeed_Update__FP7xParCmdP9xParGroupf

# xParCmd_SizeInOut_Update(xParCmd*, xParGroup*, float)
.fn xParCmd_SizeInOut_Update__FP7xParCmdP9xParGroupf, global
/* 80037DEC 00034ECC  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 80037DF0 00034ED0  80 C3 00 04 */	lwz r6, 0x4(r3)
/* 80037DF4 00034ED4  88 06 00 04 */	lbz r0, 0x4(r6)
/* 80037DF8 00034ED8  28 00 00 00 */	cmplwi r0, 0x0
/* 80037DFC 00034EDC  41 82 01 34 */	beq .L_80037F30
/* 80037E00 00034EE0  C0 86 00 0C */	lfs f4, 0xc(r6)
/* 80037E04 00034EE4  38 A1 00 08 */	addi r5, r1, 0x8
/* 80037E08 00034EE8  C0 26 00 08 */	lfs f1, 0x8(r6)
/* 80037E0C 00034EEC  C0 A6 00 10 */	lfs f5, 0x10(r6)
/* 80037E10 00034EF0  C0 06 00 14 */	lfs f0, 0x14(r6)
/* 80037E14 00034EF4  EC 44 08 28 */	fsubs f2, f4, f1
/* 80037E18 00034EF8  C0 62 85 BC */	lfs f3, "@1075"@sda21(r2)
/* 80037E1C 00034EFC  EC 25 20 28 */	fsubs f1, f5, f4
/* 80037E20 00034F00  EC 00 28 28 */	fsubs f0, f0, f5
/* 80037E24 00034F04  80 84 00 00 */	lwz r4, 0x0(r4)
/* 80037E28 00034F08  EC 43 00 B2 */	fmuls f2, f3, f2
/* 80037E2C 00034F0C  EC 23 00 72 */	fmuls f1, f3, f1
/* 80037E30 00034F10  EC 03 00 32 */	fmuls f0, f3, f0
/* 80037E34 00034F14  D0 41 00 08 */	stfs f2, 0x8(r1)
/* 80037E38 00034F18  D0 21 00 0C */	stfs f1, 0xc(r1)
/* 80037E3C 00034F1C  D0 01 00 10 */	stfs f0, 0x10(r1)
/* 80037E40 00034F20  48 00 00 E8 */	b .L_80037F28
.L_80037E44:
/* 80037E44 00034F24  C0 24 00 08 */	lfs f1, 0x8(r4)
/* 80037E48 00034F28  C0 04 00 38 */	lfs f0, 0x38(r4)
/* 80037E4C 00034F2C  C0 42 85 A8 */	lfs f2, "@812"@sda21(r2)
/* 80037E50 00034F30  EC 21 00 24 */	fdivs f1, f1, f0
/* 80037E54 00034F34  C0 02 85 9C */	lfs f0, "@691"@sda21(r2)
/* 80037E58 00034F38  EC 22 08 28 */	fsubs f1, f2, f1
/* 80037E5C 00034F3C  FC 01 10 40 */	fcmpo cr0, f1, f2
/* 80037E60 00034F40  40 80 00 08 */	bge .L_80037E68
/* 80037E64 00034F44  FC 40 08 90 */	fmr f2, f1
.L_80037E68:
/* 80037E68 00034F48  FC 00 10 40 */	fcmpo cr0, f0, f2
/* 80037E6C 00034F4C  40 81 00 0C */	ble .L_80037E78
/* 80037E70 00034F50  C0 42 85 9C */	lfs f2, "@691"@sda21(r2)
/* 80037E74 00034F54  48 00 00 14 */	b .L_80037E88
.L_80037E78:
/* 80037E78 00034F58  C0 42 85 A8 */	lfs f2, "@812"@sda21(r2)
/* 80037E7C 00034F5C  FC 01 10 40 */	fcmpo cr0, f1, f2
/* 80037E80 00034F60  40 80 00 08 */	bge .L_80037E88
/* 80037E84 00034F64  FC 40 08 90 */	fmr f2, f1
.L_80037E88:
/* 80037E88 00034F68  C0 02 85 C0 */	lfs f0, "@1076"@sda21(r2)
/* 80037E8C 00034F6C  FC 02 00 40 */	fcmpo cr0, f2, f0
/* 80037E90 00034F70  40 80 00 0C */	bge .L_80037E9C
/* 80037E94 00034F74  38 E0 00 00 */	li r7, 0x0
/* 80037E98 00034F78  48 00 00 1C */	b .L_80037EB4
.L_80037E9C:
/* 80037E9C 00034F7C  C0 02 85 C4 */	lfs f0, "@1077"@sda21(r2)
/* 80037EA0 00034F80  FC 02 00 40 */	fcmpo cr0, f2, f0
/* 80037EA4 00034F84  40 80 00 0C */	bge .L_80037EB0
/* 80037EA8 00034F88  38 E0 00 01 */	li r7, 0x1
/* 80037EAC 00034F8C  48 00 00 08 */	b .L_80037EB4
.L_80037EB0:
/* 80037EB0 00034F90  38 E0 00 02 */	li r7, 0x2
.L_80037EB4:
/* 80037EB4 00034F94  2C 07 00 00 */	cmpwi r7, 0x0
/* 80037EB8 00034F98  7C E3 3B 78 */	mr r3, r7
/* 80037EBC 00034F9C  40 81 00 50 */	ble .L_80037F0C
/* 80037EC0 00034FA0  54 E0 E8 FF */	srwi. r0, r7, 3
/* 80037EC4 00034FA4  7C 09 03 A6 */	mtctr r0
/* 80037EC8 00034FA8  41 82 00 34 */	beq .L_80037EFC
.L_80037ECC:
/* 80037ECC 00034FAC  C0 02 85 C0 */	lfs f0, "@1076"@sda21(r2)
/* 80037ED0 00034FB0  EC 42 00 28 */	fsubs f2, f2, f0
/* 80037ED4 00034FB4  EC 42 00 28 */	fsubs f2, f2, f0
/* 80037ED8 00034FB8  EC 42 00 28 */	fsubs f2, f2, f0
/* 80037EDC 00034FBC  EC 42 00 28 */	fsubs f2, f2, f0
/* 80037EE0 00034FC0  EC 42 00 28 */	fsubs f2, f2, f0
/* 80037EE4 00034FC4  EC 42 00 28 */	fsubs f2, f2, f0
/* 80037EE8 00034FC8  EC 42 00 28 */	fsubs f2, f2, f0
/* 80037EEC 00034FCC  EC 42 00 28 */	fsubs f2, f2, f0
/* 80037EF0 00034FD0  42 00 FF DC */	bdnz .L_80037ECC
/* 80037EF4 00034FD4  70 63 00 07 */	andi. r3, r3, 0x7
/* 80037EF8 00034FD8  41 82 00 14 */	beq .L_80037F0C
.L_80037EFC:
/* 80037EFC 00034FDC  7C 69 03 A6 */	mtctr r3
.L_80037F00:
/* 80037F00 00034FE0  C0 02 85 C0 */	lfs f0, "@1076"@sda21(r2)
/* 80037F04 00034FE4  EC 42 00 28 */	fsubs f2, f2, f0
/* 80037F08 00034FE8  42 00 FF F8 */	bdnz .L_80037F00
.L_80037F0C:
/* 80037F0C 00034FEC  54 E3 10 3A */	slwi r3, r7, 2
/* 80037F10 00034FF0  38 03 00 08 */	addi r0, r3, 0x8
/* 80037F14 00034FF4  7C 25 1C 2E */	lfsx f1, r5, r3
/* 80037F18 00034FF8  7C 06 04 2E */	lfsx f0, r6, r0
/* 80037F1C 00034FFC  EC 02 00 7A */	fmadds f0, f2, f1, f0
/* 80037F20 00035000  D0 04 00 1C */	stfs f0, 0x1c(r4)
/* 80037F24 00035004  80 84 00 00 */	lwz r4, 0x0(r4)
.L_80037F28:
/* 80037F28 00035008  28 04 00 00 */	cmplwi r4, 0x0
/* 80037F2C 0003500C  40 82 FF 18 */	bne .L_80037E44
.L_80037F30:
/* 80037F30 00035010  38 21 00 20 */	addi r1, r1, 0x20
/* 80037F34 00035014  4E 80 00 20 */	blr
.endfn xParCmd_SizeInOut_Update__FP7xParCmdP9xParGroupf

# xParCmd_AlphaInOut_Update(xParCmd*, xParGroup*, float)
.fn xParCmd_AlphaInOut_Update__FP7xParCmdP9xParGroupf, global
/* 80037F38 00035018  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 80037F3C 0003501C  80 C3 00 04 */	lwz r6, 0x4(r3)
/* 80037F40 00035020  88 06 00 04 */	lbz r0, 0x4(r6)
/* 80037F44 00035024  28 00 00 00 */	cmplwi r0, 0x0
/* 80037F48 00035028  41 82 01 7C */	beq .L_800380C4
/* 80037F4C 0003502C  C0 86 00 0C */	lfs f4, 0xc(r6)
/* 80037F50 00035030  38 A1 00 08 */	addi r5, r1, 0x8
/* 80037F54 00035034  C0 26 00 08 */	lfs f1, 0x8(r6)
/* 80037F58 00035038  C0 A6 00 10 */	lfs f5, 0x10(r6)
/* 80037F5C 0003503C  C0 06 00 14 */	lfs f0, 0x14(r6)
/* 80037F60 00035040  EC 44 08 28 */	fsubs f2, f4, f1
/* 80037F64 00035044  C0 62 85 BC */	lfs f3, "@1075"@sda21(r2)
/* 80037F68 00035048  EC 25 20 28 */	fsubs f1, f5, f4
/* 80037F6C 0003504C  EC 00 28 28 */	fsubs f0, f0, f5
/* 80037F70 00035050  80 84 00 00 */	lwz r4, 0x0(r4)
/* 80037F74 00035054  EC 43 00 B2 */	fmuls f2, f3, f2
/* 80037F78 00035058  EC 23 00 72 */	fmuls f1, f3, f1
/* 80037F7C 0003505C  EC 03 00 32 */	fmuls f0, f3, f0
/* 80037F80 00035060  D0 41 00 08 */	stfs f2, 0x8(r1)
/* 80037F84 00035064  D0 21 00 0C */	stfs f1, 0xc(r1)
/* 80037F88 00035068  D0 01 00 10 */	stfs f0, 0x10(r1)
/* 80037F8C 0003506C  48 00 01 30 */	b .L_800380BC
.L_80037F90:
/* 80037F90 00035070  C0 24 00 08 */	lfs f1, 0x8(r4)
/* 80037F94 00035074  C0 04 00 38 */	lfs f0, 0x38(r4)
/* 80037F98 00035078  C0 42 85 A8 */	lfs f2, "@812"@sda21(r2)
/* 80037F9C 0003507C  EC 21 00 24 */	fdivs f1, f1, f0
/* 80037FA0 00035080  C0 02 85 9C */	lfs f0, "@691"@sda21(r2)
/* 80037FA4 00035084  EC 22 08 28 */	fsubs f1, f2, f1
/* 80037FA8 00035088  FC 01 10 40 */	fcmpo cr0, f1, f2
/* 80037FAC 0003508C  40 80 00 08 */	bge .L_80037FB4
/* 80037FB0 00035090  FC 40 08 90 */	fmr f2, f1
.L_80037FB4:
/* 80037FB4 00035094  FC 00 10 40 */	fcmpo cr0, f0, f2
/* 80037FB8 00035098  40 81 00 0C */	ble .L_80037FC4
/* 80037FBC 0003509C  C0 82 85 9C */	lfs f4, "@691"@sda21(r2)
/* 80037FC0 000350A0  48 00 00 14 */	b .L_80037FD4
.L_80037FC4:
/* 80037FC4 000350A4  C0 82 85 A8 */	lfs f4, "@812"@sda21(r2)
/* 80037FC8 000350A8  FC 01 20 40 */	fcmpo cr0, f1, f4
/* 80037FCC 000350AC  40 80 00 08 */	bge .L_80037FD4
/* 80037FD0 000350B0  FC 80 08 90 */	fmr f4, f1
.L_80037FD4:
/* 80037FD4 000350B4  C0 02 85 C0 */	lfs f0, "@1076"@sda21(r2)
/* 80037FD8 000350B8  FC 04 00 40 */	fcmpo cr0, f4, f0
/* 80037FDC 000350BC  40 80 00 0C */	bge .L_80037FE8
/* 80037FE0 000350C0  38 E0 00 00 */	li r7, 0x0
/* 80037FE4 000350C4  48 00 00 1C */	b .L_80038000
.L_80037FE8:
/* 80037FE8 000350C8  C0 02 85 C4 */	lfs f0, "@1077"@sda21(r2)
/* 80037FEC 000350CC  FC 04 00 40 */	fcmpo cr0, f4, f0
/* 80037FF0 000350D0  40 80 00 0C */	bge .L_80037FFC
/* 80037FF4 000350D4  38 E0 00 01 */	li r7, 0x1
/* 80037FF8 000350D8  48 00 00 08 */	b .L_80038000
.L_80037FFC:
/* 80037FFC 000350DC  38 E0 00 02 */	li r7, 0x2
.L_80038000:
/* 80038000 000350E0  2C 07 00 00 */	cmpwi r7, 0x0
/* 80038004 000350E4  7C E3 3B 78 */	mr r3, r7
/* 80038008 000350E8  40 81 00 50 */	ble .L_80038058
/* 8003800C 000350EC  54 E0 E8 FF */	srwi. r0, r7, 3
/* 80038010 000350F0  7C 09 03 A6 */	mtctr r0
/* 80038014 000350F4  41 82 00 34 */	beq .L_80038048
.L_80038018:
/* 80038018 000350F8  C0 02 85 C0 */	lfs f0, "@1076"@sda21(r2)
/* 8003801C 000350FC  EC 84 00 28 */	fsubs f4, f4, f0
/* 80038020 00035100  EC 84 00 28 */	fsubs f4, f4, f0
/* 80038024 00035104  EC 84 00 28 */	fsubs f4, f4, f0
/* 80038028 00035108  EC 84 00 28 */	fsubs f4, f4, f0
/* 8003802C 0003510C  EC 84 00 28 */	fsubs f4, f4, f0
/* 80038030 00035110  EC 84 00 28 */	fsubs f4, f4, f0
/* 80038034 00035114  EC 84 00 28 */	fsubs f4, f4, f0
/* 80038038 00035118  EC 84 00 28 */	fsubs f4, f4, f0
/* 8003803C 0003511C  42 00 FF DC */	bdnz .L_80038018
/* 80038040 00035120  70 63 00 07 */	andi. r3, r3, 0x7
/* 80038044 00035124  41 82 00 14 */	beq .L_80038058
.L_80038048:
/* 80038048 00035128  7C 69 03 A6 */	mtctr r3
.L_8003804C:
/* 8003804C 0003512C  C0 02 85 C0 */	lfs f0, "@1076"@sda21(r2)
/* 80038050 00035130  EC 84 00 28 */	fsubs f4, f4, f0
/* 80038054 00035134  42 00 FF F8 */	bdnz .L_8003804C
.L_80038058:
/* 80038058 00035138  54 E3 10 3A */	slwi r3, r7, 2
/* 8003805C 0003513C  C0 02 85 AC */	lfs f0, "@830"@sda21(r2)
/* 80038060 00035140  38 03 00 08 */	addi r0, r3, 0x8
/* 80038064 00035144  7C 65 1C 2E */	lfsx f3, r5, r3
/* 80038068 00035148  7C 46 04 2E */	lfsx f2, r6, r0
/* 8003806C 0003514C  C0 22 85 9C */	lfs f1, "@691"@sda21(r2)
/* 80038070 00035150  EC 44 10 FA */	fmadds f2, f4, f3, f2
/* 80038074 00035154  FC 02 00 40 */	fcmpo cr0, f2, f0
/* 80038078 00035158  40 80 00 08 */	bge .L_80038080
/* 8003807C 0003515C  FC 00 10 90 */	fmr f0, f2
.L_80038080:
/* 80038080 00035160  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80038084 00035164  40 81 00 0C */	ble .L_80038090
/* 80038088 00035168  C0 02 85 9C */	lfs f0, "@691"@sda21(r2)
/* 8003808C 0003516C  48 00 00 14 */	b .L_800380A0
.L_80038090:
/* 80038090 00035170  C0 02 85 AC */	lfs f0, "@830"@sda21(r2)
/* 80038094 00035174  FC 02 00 40 */	fcmpo cr0, f2, f0
/* 80038098 00035178  40 80 00 08 */	bge .L_800380A0
/* 8003809C 0003517C  FC 00 10 90 */	fmr f0, f2
.L_800380A0:
/* 800380A0 00035180  D0 04 00 5C */	stfs f0, 0x5c(r4)
/* 800380A4 00035184  C0 04 00 5C */	lfs f0, 0x5c(r4)
/* 800380A8 00035188  FC 00 00 1E */	fctiwz f0, f0
/* 800380AC 0003518C  D8 01 00 18 */	stfd f0, 0x18(r1)
/* 800380B0 00035190  80 01 00 1C */	lwz r0, 0x1c(r1)
/* 800380B4 00035194  98 04 00 0F */	stb r0, 0xf(r4)
/* 800380B8 00035198  80 84 00 00 */	lwz r4, 0x0(r4)
.L_800380BC:
/* 800380BC 0003519C  28 04 00 00 */	cmplwi r4, 0x0
/* 800380C0 000351A0  40 82 FE D0 */	bne .L_80037F90
.L_800380C4:
/* 800380C4 000351A4  38 21 00 20 */	addi r1, r1, 0x20
/* 800380C8 000351A8  4E 80 00 20 */	blr
.endfn xParCmd_AlphaInOut_Update__FP7xParCmdP9xParGroupf

# xParCmd_Shaper_Update(xParCmd*, xParGroup*, float)
.fn xParCmd_Shaper_Update__FP7xParCmdP9xParGroupf, global
/* 800380CC 000351AC  94 21 FF A0 */	stwu r1, -0x60(r1)
/* 800380D0 000351B0  7C 08 02 A6 */	mflr r0
/* 800380D4 000351B4  90 01 00 64 */	stw r0, 0x64(r1)
/* 800380D8 000351B8  DB E1 00 50 */	stfd f31, 0x50(r1)
/* 800380DC 000351BC  F3 E1 00 58 */	psq_st f31, 0x58(r1), 0, qr0
/* 800380E0 000351C0  DB C1 00 40 */	stfd f30, 0x40(r1)
/* 800380E4 000351C4  F3 C1 00 48 */	psq_st f30, 0x48(r1), 0, qr0
/* 800380E8 000351C8  93 E1 00 3C */	stw r31, 0x3c(r1)
/* 800380EC 000351CC  93 C1 00 38 */	stw r30, 0x38(r1)
/* 800380F0 000351D0  93 A1 00 34 */	stw r29, 0x34(r1)
/* 800380F4 000351D4  93 81 00 30 */	stw r28, 0x30(r1)
/* 800380F8 000351D8  83 C3 00 04 */	lwz r30, 0x4(r3)
/* 800380FC 000351DC  88 1E 00 04 */	lbz r0, 0x4(r30)
/* 80038100 000351E0  28 00 00 00 */	cmplwi r0, 0x0
/* 80038104 000351E4  41 82 02 5C */	beq .L_80038360
/* 80038108 000351E8  C0 1E 00 28 */	lfs f0, 0x28(r30)
/* 8003810C 000351EC  3B A0 00 01 */	li r29, 0x1
/* 80038110 000351F0  C0 7E 00 2C */	lfs f3, 0x2c(r30)
/* 80038114 000351F4  3B 80 00 01 */	li r28, 0x1
/* 80038118 000351F8  C0 5E 00 08 */	lfs f2, 0x8(r30)
/* 8003811C 000351FC  EF E1 00 32 */	fmuls f31, f1, f0
/* 80038120 00035200  C0 02 85 9C */	lfs f0, "@691"@sda21(r2)
/* 80038124 00035204  EF C1 00 F2 */	fmuls f30, f1, f3
/* 80038128 00035208  FC 02 00 40 */	fcmpo cr0, f2, f0
/* 8003812C 0003520C  40 80 00 08 */	bge .L_80038134
/* 80038130 00035210  3B A0 00 00 */	li r29, 0x0
.L_80038134:
/* 80038134 00035214  C0 3E 00 18 */	lfs f1, 0x18(r30)
/* 80038138 00035218  C0 02 85 9C */	lfs f0, "@691"@sda21(r2)
/* 8003813C 0003521C  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80038140 00035220  40 80 00 08 */	bge .L_80038148
/* 80038144 00035224  3B 80 00 00 */	li r28, 0x0
.L_80038148:
/* 80038148 00035228  C0 5E 00 1C */	lfs f2, 0x1c(r30)
/* 8003814C 0003522C  C0 3E 00 18 */	lfs f1, 0x18(r30)
/* 80038150 00035230  C0 BE 00 20 */	lfs f5, 0x20(r30)
/* 80038154 00035234  C0 1E 00 24 */	lfs f0, 0x24(r30)
/* 80038158 00035238  EC 82 08 28 */	fsubs f4, f2, f1
/* 8003815C 0003523C  C0 C2 85 BC */	lfs f6, "@1075"@sda21(r2)
/* 80038160 00035240  EC 65 10 28 */	fsubs f3, f5, f2
/* 80038164 00035244  EC 20 28 28 */	fsubs f1, f0, f5
/* 80038168 00035248  C0 FE 00 0C */	lfs f7, 0xc(r30)
/* 8003816C 0003524C  C0 5E 00 08 */	lfs f2, 0x8(r30)
/* 80038170 00035250  C1 1E 00 10 */	lfs f8, 0x10(r30)
/* 80038174 00035254  EC A6 01 32 */	fmuls f5, f6, f4
/* 80038178 00035258  C0 1E 00 14 */	lfs f0, 0x14(r30)
/* 8003817C 0003525C  EC 87 10 28 */	fsubs f4, f7, f2
/* 80038180 00035260  83 E4 00 00 */	lwz r31, 0x0(r4)
/* 80038184 00035264  EC 48 38 28 */	fsubs f2, f8, f7
/* 80038188 00035268  D0 A1 00 08 */	stfs f5, 0x8(r1)
/* 8003818C 0003526C  EC 00 40 28 */	fsubs f0, f0, f8
/* 80038190 00035270  EC 86 01 32 */	fmuls f4, f6, f4
/* 80038194 00035274  EC 66 00 F2 */	fmuls f3, f6, f3
/* 80038198 00035278  EC 46 00 B2 */	fmuls f2, f6, f2
/* 8003819C 0003527C  EC 26 00 72 */	fmuls f1, f6, f1
/* 800381A0 00035280  D0 81 00 14 */	stfs f4, 0x14(r1)
/* 800381A4 00035284  EC 06 00 32 */	fmuls f0, f6, f0
/* 800381A8 00035288  D0 61 00 0C */	stfs f3, 0xc(r1)
/* 800381AC 0003528C  D0 41 00 18 */	stfs f2, 0x18(r1)
/* 800381B0 00035290  D0 21 00 10 */	stfs f1, 0x10(r1)
/* 800381B4 00035294  D0 01 00 1C */	stfs f0, 0x1c(r1)
/* 800381B8 00035298  48 00 01 A0 */	b .L_80038358
.L_800381BC:
/* 800381BC 0003529C  FC 20 F8 90 */	fmr f1, f31
/* 800381C0 000352A0  38 7F 00 20 */	addi r3, r31, 0x20
/* 800381C4 000352A4  7C 64 1B 78 */	mr r4, r3
/* 800381C8 000352A8  4B FD CE 91 */	bl xVec3AddScaled__FP5xVec3PC5xVec3f
/* 800381CC 000352AC  C0 1F 00 24 */	lfs f0, 0x24(r31)
/* 800381D0 000352B0  EC 00 F0 28 */	fsubs f0, f0, f30
/* 800381D4 000352B4  D0 1F 00 24 */	stfs f0, 0x24(r31)
/* 800381D8 000352B8  C0 3F 00 38 */	lfs f1, 0x38(r31)
/* 800381DC 000352BC  C0 02 85 C8 */	lfs f0, "@1205"@sda21(r2)
/* 800381E0 000352C0  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 800381E4 000352C4  41 80 00 14 */	blt .L_800381F8
/* 800381E8 000352C8  2C 1C 00 00 */	cmpwi r28, 0x0
/* 800381EC 000352CC  40 82 00 14 */	bne .L_80038200
/* 800381F0 000352D0  2C 1D 00 00 */	cmpwi r29, 0x0
/* 800381F4 000352D4  40 82 00 0C */	bne .L_80038200
.L_800381F8:
/* 800381F8 000352D8  83 FF 00 00 */	lwz r31, 0x0(r31)
/* 800381FC 000352DC  48 00 01 5C */	b .L_80038358
.L_80038200:
/* 80038200 000352E0  C0 1F 00 08 */	lfs f0, 0x8(r31)
/* 80038204 000352E4  C0 42 85 A8 */	lfs f2, "@812"@sda21(r2)
/* 80038208 000352E8  EC 20 08 24 */	fdivs f1, f0, f1
/* 8003820C 000352EC  C0 02 85 9C */	lfs f0, "@691"@sda21(r2)
/* 80038210 000352F0  EC 22 08 28 */	fsubs f1, f2, f1
/* 80038214 000352F4  FC 01 10 40 */	fcmpo cr0, f1, f2
/* 80038218 000352F8  40 80 00 08 */	bge .L_80038220
/* 8003821C 000352FC  FC 40 08 90 */	fmr f2, f1
.L_80038220:
/* 80038220 00035300  FC 00 10 40 */	fcmpo cr0, f0, f2
/* 80038224 00035304  40 81 00 0C */	ble .L_80038230
/* 80038228 00035308  C0 62 85 9C */	lfs f3, "@691"@sda21(r2)
/* 8003822C 0003530C  48 00 00 14 */	b .L_80038240
.L_80038230:
/* 80038230 00035310  C0 62 85 A8 */	lfs f3, "@812"@sda21(r2)
/* 80038234 00035314  FC 01 18 40 */	fcmpo cr0, f1, f3
/* 80038238 00035318  40 80 00 08 */	bge .L_80038240
/* 8003823C 0003531C  FC 60 08 90 */	fmr f3, f1
.L_80038240:
/* 80038240 00035320  C0 02 85 C0 */	lfs f0, "@1076"@sda21(r2)
/* 80038244 00035324  FC 03 00 40 */	fcmpo cr0, f3, f0
/* 80038248 00035328  40 80 00 0C */	bge .L_80038254
/* 8003824C 0003532C  38 A0 00 00 */	li r5, 0x0
/* 80038250 00035330  48 00 00 1C */	b .L_8003826C
.L_80038254:
/* 80038254 00035334  C0 02 85 C4 */	lfs f0, "@1077"@sda21(r2)
/* 80038258 00035338  FC 03 00 40 */	fcmpo cr0, f3, f0
/* 8003825C 0003533C  40 80 00 0C */	bge .L_80038268
/* 80038260 00035340  38 A0 00 01 */	li r5, 0x1
/* 80038264 00035344  48 00 00 08 */	b .L_8003826C
.L_80038268:
/* 80038268 00035348  38 A0 00 02 */	li r5, 0x2
.L_8003826C:
/* 8003826C 0003534C  2C 05 00 00 */	cmpwi r5, 0x0
/* 80038270 00035350  7C A3 2B 78 */	mr r3, r5
/* 80038274 00035354  40 81 00 50 */	ble .L_800382C4
/* 80038278 00035358  54 A0 E8 FF */	srwi. r0, r5, 3
/* 8003827C 0003535C  7C 09 03 A6 */	mtctr r0
/* 80038280 00035360  41 82 00 34 */	beq .L_800382B4
.L_80038284:
/* 80038284 00035364  C0 02 85 C0 */	lfs f0, "@1076"@sda21(r2)
/* 80038288 00035368  EC 63 00 28 */	fsubs f3, f3, f0
/* 8003828C 0003536C  EC 63 00 28 */	fsubs f3, f3, f0
/* 80038290 00035370  EC 63 00 28 */	fsubs f3, f3, f0
/* 80038294 00035374  EC 63 00 28 */	fsubs f3, f3, f0
/* 80038298 00035378  EC 63 00 28 */	fsubs f3, f3, f0
/* 8003829C 0003537C  EC 63 00 28 */	fsubs f3, f3, f0
/* 800382A0 00035380  EC 63 00 28 */	fsubs f3, f3, f0
/* 800382A4 00035384  EC 63 00 28 */	fsubs f3, f3, f0
/* 800382A8 00035388  42 00 FF DC */	bdnz .L_80038284
/* 800382AC 0003538C  70 63 00 07 */	andi. r3, r3, 0x7
/* 800382B0 00035390  41 82 00 14 */	beq .L_800382C4
.L_800382B4:
/* 800382B4 00035394  7C 69 03 A6 */	mtctr r3
.L_800382B8:
/* 800382B8 00035398  C0 02 85 C0 */	lfs f0, "@1076"@sda21(r2)
/* 800382BC 0003539C  EC 63 00 28 */	fsubs f3, f3, f0
/* 800382C0 000353A0  42 00 FF F8 */	bdnz .L_800382B8
.L_800382C4:
/* 800382C4 000353A4  2C 1C 00 00 */	cmpwi r28, 0x0
/* 800382C8 000353A8  41 82 00 20 */	beq .L_800382E8
/* 800382CC 000353AC  54 A4 10 3A */	slwi r4, r5, 2
/* 800382D0 000353B0  38 61 00 08 */	addi r3, r1, 0x8
/* 800382D4 000353B4  38 04 00 18 */	addi r0, r4, 0x18
/* 800382D8 000353B8  7C 23 24 2E */	lfsx f1, r3, r4
/* 800382DC 000353BC  7C 1E 04 2E */	lfsx f0, r30, r0
/* 800382E0 000353C0  EC 03 00 7A */	fmadds f0, f3, f1, f0
/* 800382E4 000353C4  D0 1F 00 1C */	stfs f0, 0x1c(r31)
.L_800382E8:
/* 800382E8 000353C8  2C 1D 00 00 */	cmpwi r29, 0x0
/* 800382EC 000353CC  41 82 00 68 */	beq .L_80038354
/* 800382F0 000353D0  54 A4 10 3A */	slwi r4, r5, 2
/* 800382F4 000353D4  38 61 00 14 */	addi r3, r1, 0x14
/* 800382F8 000353D8  38 04 00 08 */	addi r0, r4, 0x8
/* 800382FC 000353DC  7C 43 24 2E */	lfsx f2, r3, r4
/* 80038300 000353E0  7C 3E 04 2E */	lfsx f1, r30, r0
/* 80038304 000353E4  C0 02 85 AC */	lfs f0, "@830"@sda21(r2)
/* 80038308 000353E8  EC 43 08 BA */	fmadds f2, f3, f2, f1
/* 8003830C 000353EC  C0 22 85 9C */	lfs f1, "@691"@sda21(r2)
/* 80038310 000353F0  FC 02 00 40 */	fcmpo cr0, f2, f0
/* 80038314 000353F4  40 80 00 08 */	bge .L_8003831C
/* 80038318 000353F8  FC 00 10 90 */	fmr f0, f2
.L_8003831C:
/* 8003831C 000353FC  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80038320 00035400  40 81 00 0C */	ble .L_8003832C
/* 80038324 00035404  C0 02 85 9C */	lfs f0, "@691"@sda21(r2)
/* 80038328 00035408  48 00 00 14 */	b .L_8003833C
.L_8003832C:
/* 8003832C 0003540C  C0 02 85 AC */	lfs f0, "@830"@sda21(r2)
/* 80038330 00035410  FC 02 00 40 */	fcmpo cr0, f2, f0
/* 80038334 00035414  40 80 00 08 */	bge .L_8003833C
/* 80038338 00035418  FC 00 10 90 */	fmr f0, f2
.L_8003833C:
/* 8003833C 0003541C  D0 1F 00 5C */	stfs f0, 0x5c(r31)
/* 80038340 00035420  C0 1F 00 5C */	lfs f0, 0x5c(r31)
/* 80038344 00035424  FC 00 00 1E */	fctiwz f0, f0
/* 80038348 00035428  D8 01 00 20 */	stfd f0, 0x20(r1)
/* 8003834C 0003542C  80 01 00 24 */	lwz r0, 0x24(r1)
/* 80038350 00035430  98 1F 00 0F */	stb r0, 0xf(r31)
.L_80038354:
/* 80038354 00035434  83 FF 00 00 */	lwz r31, 0x0(r31)
.L_80038358:
/* 80038358 00035438  28 1F 00 00 */	cmplwi r31, 0x0
/* 8003835C 0003543C  40 82 FE 60 */	bne .L_800381BC
.L_80038360:
/* 80038360 00035440  E3 E1 00 58 */	psq_l f31, 0x58(r1), 0, qr0
/* 80038364 00035444  CB E1 00 50 */	lfd f31, 0x50(r1)
/* 80038368 00035448  E3 C1 00 48 */	psq_l f30, 0x48(r1), 0, qr0
/* 8003836C 0003544C  CB C1 00 40 */	lfd f30, 0x40(r1)
/* 80038370 00035450  83 E1 00 3C */	lwz r31, 0x3c(r1)
/* 80038374 00035454  83 C1 00 38 */	lwz r30, 0x38(r1)
/* 80038378 00035458  83 A1 00 34 */	lwz r29, 0x34(r1)
/* 8003837C 0003545C  80 01 00 64 */	lwz r0, 0x64(r1)
/* 80038380 00035460  83 81 00 30 */	lwz r28, 0x30(r1)
/* 80038384 00035464  7C 08 03 A6 */	mtlr r0
/* 80038388 00035468  38 21 00 60 */	addi r1, r1, 0x60
/* 8003838C 0003546C  4E 80 00 20 */	blr
.endfn xParCmd_Shaper_Update__FP7xParCmdP9xParGroupf

# 0x80038390 - 0x800383C4
.section .text, "ax", unique, 1
.balign 4

# xVec3LengthFast(float, float, float)
.fn xVec3LengthFast__Ffff, weak
/* 80038390 00035470  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80038394 00035474  7C 08 02 A6 */	mflr r0
/* 80038398 00035478  EC 02 00 B2 */	fmuls f0, f2, f2
/* 8003839C 0003547C  90 01 00 14 */	stw r0, 0x14(r1)
/* 800383A0 00035480  38 61 00 08 */	addi r3, r1, 0x8
/* 800383A4 00035484  EC 01 00 7A */	fmadds f0, f1, f1, f0
/* 800383A8 00035488  EC 23 00 FA */	fmadds f1, f3, f3, f0
/* 800383AC 0003548C  4B FD A7 AD */	bl xsqrtfast__FRff
/* 800383B0 00035490  80 01 00 14 */	lwz r0, 0x14(r1)
/* 800383B4 00035494  C0 21 00 08 */	lfs f1, 0x8(r1)
/* 800383B8 00035498  7C 08 03 A6 */	mtlr r0
/* 800383BC 0003549C  38 21 00 10 */	addi r1, r1, 0x10
/* 800383C0 000354A0  4E 80 00 20 */	blr
.endfn xVec3LengthFast__Ffff

# 0x800383C4 - 0x80038428
.section .text, "ax", unique, 2
.balign 4

# xMat3x3RMulVec(xVec3*, const xMat3x3*, const xVec3*)
.fn xMat3x3RMulVec__FP5xVec3PC7xMat3x3PC5xVec3, local
/* 800383C4 000354A4  C0 65 00 04 */	lfs f3, 0x4(r5)
/* 800383C8 000354A8  C0 04 00 10 */	lfs f0, 0x10(r4)
/* 800383CC 000354AC  C0 44 00 14 */	lfs f2, 0x14(r4)
/* 800383D0 000354B0  EC 00 00 F2 */	fmuls f0, f0, f3
/* 800383D4 000354B4  C0 C5 00 00 */	lfs f6, 0x0(r5)
/* 800383D8 000354B8  C0 24 00 00 */	lfs f1, 0x0(r4)
/* 800383DC 000354BC  EC 82 00 F2 */	fmuls f4, f2, f3
/* 800383E0 000354C0  C0 44 00 18 */	lfs f2, 0x18(r4)
/* 800383E4 000354C4  C0 A4 00 04 */	lfs f5, 0x4(r4)
/* 800383E8 000354C8  EC 01 01 BA */	fmadds f0, f1, f6, f0
/* 800383EC 000354CC  C0 E5 00 08 */	lfs f7, 0x8(r5)
/* 800383F0 000354D0  C0 24 00 20 */	lfs f1, 0x20(r4)
/* 800383F4 000354D4  EC 42 00 F2 */	fmuls f2, f2, f3
/* 800383F8 000354D8  C0 64 00 08 */	lfs f3, 0x8(r4)
/* 800383FC 000354DC  EC 85 21 BA */	fmadds f4, f5, f6, f4
/* 80038400 000354E0  EC 01 01 FA */	fmadds f0, f1, f7, f0
/* 80038404 000354E4  C0 A4 00 24 */	lfs f5, 0x24(r4)
/* 80038408 000354E8  EC 23 11 BA */	fmadds f1, f3, f6, f2
/* 8003840C 000354EC  C0 44 00 28 */	lfs f2, 0x28(r4)
/* 80038410 000354F0  EC 65 21 FA */	fmadds f3, f5, f7, f4
/* 80038414 000354F4  D0 03 00 00 */	stfs f0, 0x0(r3)
/* 80038418 000354F8  EC 02 09 FA */	fmadds f0, f2, f7, f1
/* 8003841C 000354FC  D0 63 00 04 */	stfs f3, 0x4(r3)
/* 80038420 00035500  D0 03 00 08 */	stfs f0, 0x8(r3)
/* 80038424 00035504  4E 80 00 20 */	blr
.endfn xMat3x3RMulVec__FP5xVec3PC7xMat3x3PC5xVec3

# 0x8027D700 - 0x8027D8A8
.data
.balign 8

.obj sCmdInfo, local
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
.endobj sCmdInfo
	.4byte 0x00000000

# 0x803CCF18 - 0x803CCF50
.section .sdata2, "a"
.balign 8

.obj "@658", local
	.4byte 0xBF800000
.endobj "@658"

.obj "@691", local
	.4byte 0x00000000
.endobj "@691"

.obj "@760", local
	.4byte 0x40000000
.endobj "@760"

.obj "@772", local
	.4byte 0x3F000000
.endobj "@772"

.obj "@812", local
	.4byte 0x3F800000
.endobj "@812"

.obj "@830", local
	.4byte 0x437F0000
.endobj "@830"

.obj "@831", local
	.4byte 0x43B40000
.endobj "@831"

.obj "@857", local
	.4byte 0x40490FDB
.endobj "@857"

.obj "@858", local
	.4byte 0x43340000
.endobj "@858"

.obj "@1075", local
	.4byte 0x40400000
.endobj "@1075"

.obj "@1076", local
	.4byte 0x3EAAAAAB
.endobj "@1076"

.obj "@1077", local
	.4byte 0x3F2AAAAB
.endobj "@1077"

.obj "@1205", local
	.4byte 0x3727C5AC
.endobj "@1205"
	.4byte 0x00000000
