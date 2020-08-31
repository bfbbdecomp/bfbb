.include "macros.inc"

.section .text  # 0x80017D3C - 0x80018064

.global xprintf__FPCce
xprintf__FPCce:
/* 80017D3C 00014B3C  94 21 FF 90 */	stwu r1, -0x70(r1)
/* 80017D40 00014B40  40 86 00 24 */	bne cr1, lbl_80017D64
/* 80017D44 00014B44  D8 21 00 28 */	stfd f1, 0x28(r1)
/* 80017D48 00014B48  D8 41 00 30 */	stfd f2, 0x30(r1)
/* 80017D4C 00014B4C  D8 61 00 38 */	stfd f3, 0x38(r1)
/* 80017D50 00014B50  D8 81 00 40 */	stfd f4, 0x40(r1)
/* 80017D54 00014B54  D8 A1 00 48 */	stfd f5, 0x48(r1)
/* 80017D58 00014B58  D8 C1 00 50 */	stfd f6, 0x50(r1)
/* 80017D5C 00014B5C  D8 E1 00 58 */	stfd f7, 0x58(r1)
/* 80017D60 00014B60  D9 01 00 60 */	stfd f8, 0x60(r1)
lbl_80017D64:
/* 80017D64 00014B64  90 61 00 08 */	stw r3, 8(r1)
/* 80017D68 00014B68  90 81 00 0C */	stw r4, 0xc(r1)
/* 80017D6C 00014B6C  90 A1 00 10 */	stw r5, 0x10(r1)
/* 80017D70 00014B70  90 C1 00 14 */	stw r6, 0x14(r1)
/* 80017D74 00014B74  90 E1 00 18 */	stw r7, 0x18(r1)
/* 80017D78 00014B78  91 01 00 1C */	stw r8, 0x1c(r1)
/* 80017D7C 00014B7C  91 21 00 20 */	stw r9, 0x20(r1)
/* 80017D80 00014B80  91 41 00 24 */	stw r10, 0x24(r1)
/* 80017D84 00014B84  38 21 00 70 */	addi r1, r1, 0x70
/* 80017D88 00014B88  4E 80 00 20 */	blr 

.global xDebugModeAdd__FPCcPFv_v
xDebugModeAdd__FPCcPFv_v:
/* 80017D8C 00014B8C  38 60 FF FF */	li r3, -1
/* 80017D90 00014B90  4E 80 00 20 */	blr 

.global xDebugInit__Fv
xDebugInit__Fv:
/* 80017D94 00014B94  4E 80 00 20 */	blr 

.global xDebugUpdate__Fv
xDebugUpdate__Fv:
/* 80017D98 00014B98  4E 80 00 20 */	blr 

.global xDebugExit__Fv
xDebugExit__Fv:
/* 80017D9C 00014B9C  4E 80 00 20 */	blr 

.global xDebugTimestampScreen__Fv
xDebugTimestampScreen__Fv:
/* 80017DA0 00014BA0  4E 80 00 20 */	blr 

.global render__8xtextboxCFb
render__8xtextboxCFb:
/* 80017DA4 00014BA4  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80017DA8 00014BA8  7C 08 02 A6 */	mflr r0
/* 80017DAC 00014BAC  90 01 00 14 */	stw r0, 0x14(r1)
/* 80017DB0 00014BB0  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80017DB4 00014BB4  7C 7F 1B 78 */	mr r31, r3
/* 80017DB8 00014BB8  48 00 A8 79 */	bl temp_layout__8xtextboxCFb
/* 80017DBC 00014BBC  7C 64 1B 78 */	mr r4, r3
/* 80017DC0 00014BC0  7F E3 FB 78 */	mr r3, r31
/* 80017DC4 00014BC4  38 A0 00 00 */	li r5, 0
/* 80017DC8 00014BC8  38 C0 FF FF */	li r6, -1
/* 80017DCC 00014BCC  48 00 AA E5 */	bl render__8xtextboxCFRQ28xtextbox6layoutii
/* 80017DD0 00014BD0  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80017DD4 00014BD4  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80017DD8 00014BD8  7C 08 03 A6 */	mtlr r0
/* 80017DDC 00014BDC  38 21 00 10 */	addi r1, r1, 0x10
/* 80017DE0 00014BE0  4E 80 00 20 */	blr 

.global create__8xtextboxFRC5xfontRC13basic_rect_f_Uiffff
create__8xtextboxFRC5xfontRC13basic_rect_f_Uiffff:
/* 80017DE4 00014BE4  94 21 FF 60 */	stwu r1, -0xa0(r1)
/* 80017DE8 00014BE8  7C 08 02 A6 */	mflr r0
/* 80017DEC 00014BEC  90 01 00 A4 */	stw r0, 0xa4(r1)
/* 80017DF0 00014BF0  39 61 00 A0 */	addi r11, r1, 0xa0
/* 80017DF4 00014BF4  48 1D 56 7D */	bl func_801ED470
/* 80017DF8 00014BF8  93 E1 00 7C */	stw r31, 0x7c(r1)
/* 80017DFC 00014BFC  93 C1 00 78 */	stw r30, 0x78(r1)
/* 80017E00 00014C00  93 A1 00 74 */	stw r29, 0x74(r1)
/* 80017E04 00014C04  FF 80 08 90 */	fmr f28, f1
/* 80017E08 00014C08  7C 7D 1B 78 */	mr r29, r3
/* 80017E0C 00014C0C  FF A0 10 90 */	fmr f29, f2
/* 80017E10 00014C10  7C BE 2B 78 */	mr r30, r5
/* 80017E14 00014C14  FF C0 18 90 */	fmr f30, f3
/* 80017E18 00014C18  7C DF 33 78 */	mr r31, r6
/* 80017E1C 00014C1C  FF E0 20 90 */	fmr f31, f4
/* 80017E20 00014C20  38 61 00 08 */	addi r3, r1, 8
/* 80017E24 00014C24  48 00 00 85 */	bl __as__5xfontFRC5xfont
/* 80017E28 00014C28  7F C4 F3 78 */	mr r4, r30
/* 80017E2C 00014C2C  38 61 00 2C */	addi r3, r1, 0x2c
/* 80017E30 00014C30  48 00 02 11 */	bl __as__13basic_rect_f_FRC13basic_rect_f_
/* 80017E34 00014C34  3C 60 80 28 */	lis r3, lbl_text_cb__8xtextbox@ha
/* 80017E38 00014C38  38 C0 00 00 */	li r6, 0
/* 80017E3C 00014C3C  38 63 BB EC */	addi r3, r3, lbl_text_cb__8xtextbox@l
/* 80017E40 00014C40  38 00 00 0D */	li r0, 0xd
/* 80017E44 00014C44  93 E1 00 3C */	stw r31, 0x3c(r1)
/* 80017E48 00014C48  38 BD FF FC */	addi r5, r29, -4
/* 80017E4C 00014C4C  38 81 00 04 */	addi r4, r1, 4
/* 80017E50 00014C50  D3 81 00 40 */	stfs f28, 0x40(r1)
/* 80017E54 00014C54  D3 A1 00 44 */	stfs f29, 0x44(r1)
/* 80017E58 00014C58  D3 C1 00 48 */	stfs f30, 0x48(r1)
/* 80017E5C 00014C5C  D3 E1 00 4C */	stfs f31, 0x4c(r1)
/* 80017E60 00014C60  90 C1 00 60 */	stw r6, 0x60(r1)
/* 80017E64 00014C64  90 C1 00 6C */	stw r6, 0x6c(r1)
/* 80017E68 00014C68  90 61 00 50 */	stw r3, 0x50(r1)
/* 80017E6C 00014C6C  7C 09 03 A6 */	mtctr r0
lbl_80017E70:
/* 80017E70 00014C70  80 64 00 04 */	lwz r3, 4(r4)
/* 80017E74 00014C74  84 04 00 08 */	lwzu r0, 8(r4)
/* 80017E78 00014C78  90 65 00 04 */	stw r3, 4(r5)
/* 80017E7C 00014C7C  94 05 00 08 */	stwu r0, 8(r5)
/* 80017E80 00014C80  42 00 FF F0 */	bdnz lbl_80017E70
/* 80017E84 00014C84  39 61 00 A0 */	addi r11, r1, 0xa0
/* 80017E88 00014C88  48 1D 56 35 */	bl func_801ED4BC
/* 80017E8C 00014C8C  80 01 00 A4 */	lwz r0, 0xa4(r1)
/* 80017E90 00014C90  83 E1 00 7C */	lwz r31, 0x7c(r1)
/* 80017E94 00014C94  83 C1 00 78 */	lwz r30, 0x78(r1)
/* 80017E98 00014C98  83 A1 00 74 */	lwz r29, 0x74(r1)
/* 80017E9C 00014C9C  7C 08 03 A6 */	mtlr r0
/* 80017EA0 00014CA0  38 21 00 A0 */	addi r1, r1, 0xa0
/* 80017EA4 00014CA4  4E 80 00 20 */	blr 

.global __as__5xfontFRC5xfont
__as__5xfontFRC5xfont:
/* 80017EA8 00014CA8  80 04 00 00 */	lwz r0, 0(r4)
/* 80017EAC 00014CAC  C0 04 00 04 */	lfs f0, 4(r4)
/* 80017EB0 00014CB0  90 03 00 00 */	stw r0, 0(r3)
/* 80017EB4 00014CB4  C0 24 00 08 */	lfs f1, 8(r4)
/* 80017EB8 00014CB8  D0 03 00 04 */	stfs f0, 4(r3)
/* 80017EBC 00014CBC  C0 04 00 0C */	lfs f0, 0xc(r4)
/* 80017EC0 00014CC0  D0 23 00 08 */	stfs f1, 8(r3)
/* 80017EC4 00014CC4  80 04 00 10 */	lwz r0, 0x10(r4)
/* 80017EC8 00014CC8  D0 03 00 0C */	stfs f0, 0xc(r3)
/* 80017ECC 00014CCC  80 A4 00 14 */	lwz r5, 0x14(r4)
/* 80017ED0 00014CD0  90 03 00 10 */	stw r0, 0x10(r3)
/* 80017ED4 00014CD4  80 04 00 18 */	lwz r0, 0x18(r4)
/* 80017ED8 00014CD8  90 A3 00 14 */	stw r5, 0x14(r3)
/* 80017EDC 00014CDC  80 A4 00 1C */	lwz r5, 0x1c(r4)
/* 80017EE0 00014CE0  90 03 00 18 */	stw r0, 0x18(r3)
/* 80017EE4 00014CE4  80 04 00 20 */	lwz r0, 0x20(r4)
/* 80017EE8 00014CE8  90 A3 00 1C */	stw r5, 0x1c(r3)
/* 80017EEC 00014CEC  90 03 00 20 */	stw r0, 0x20(r3)
/* 80017EF0 00014CF0  4E 80 00 20 */	blr 

.global create__5xfontFUifff10iColor_tagRC13basic_rect_f_
create__5xfontFUifff10iColor_tagRC13basic_rect_f_:
/* 80017EF4 00014CF4  94 21 FF C0 */	stwu r1, -0x40(r1)
/* 80017EF8 00014CF8  7C 08 02 A6 */	mflr r0
/* 80017EFC 00014CFC  90 01 00 44 */	stw r0, 0x44(r1)
/* 80017F00 00014D00  93 E1 00 3C */	stw r31, 0x3c(r1)
/* 80017F04 00014D04  7C DF 33 78 */	mr r31, r6
/* 80017F08 00014D08  93 C1 00 38 */	stw r30, 0x38(r1)
/* 80017F0C 00014D0C  7C 7E 1B 78 */	mr r30, r3
/* 80017F10 00014D10  38 61 00 18 */	addi r3, r1, 0x18
/* 80017F14 00014D14  90 81 00 08 */	stw r4, 8(r1)
/* 80017F18 00014D18  7C A4 2B 78 */	mr r4, r5
/* 80017F1C 00014D1C  D0 21 00 0C */	stfs f1, 0xc(r1)
/* 80017F20 00014D20  D0 41 00 10 */	stfs f2, 0x10(r1)
/* 80017F24 00014D24  D0 61 00 14 */	stfs f3, 0x14(r1)
/* 80017F28 00014D28  48 00 00 71 */	bl __as__10iColor_tagFRC10iColor_tag
/* 80017F2C 00014D2C  7F E4 FB 78 */	mr r4, r31
/* 80017F30 00014D30  38 61 00 1C */	addi r3, r1, 0x1c
/* 80017F34 00014D34  48 00 01 0D */	bl __as__13basic_rect_f_FRC13basic_rect_f_
/* 80017F38 00014D38  80 61 00 08 */	lwz r3, 8(r1)
/* 80017F3C 00014D3C  80 01 00 0C */	lwz r0, 0xc(r1)
/* 80017F40 00014D40  90 7E 00 00 */	stw r3, 0(r30)
/* 80017F44 00014D44  90 1E 00 04 */	stw r0, 4(r30)
/* 80017F48 00014D48  80 61 00 10 */	lwz r3, 0x10(r1)
/* 80017F4C 00014D4C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80017F50 00014D50  90 7E 00 08 */	stw r3, 8(r30)
/* 80017F54 00014D54  90 1E 00 0C */	stw r0, 0xc(r30)
/* 80017F58 00014D58  80 61 00 18 */	lwz r3, 0x18(r1)
/* 80017F5C 00014D5C  80 01 00 1C */	lwz r0, 0x1c(r1)
/* 80017F60 00014D60  90 7E 00 10 */	stw r3, 0x10(r30)
/* 80017F64 00014D64  90 1E 00 14 */	stw r0, 0x14(r30)
/* 80017F68 00014D68  80 61 00 20 */	lwz r3, 0x20(r1)
/* 80017F6C 00014D6C  80 01 00 24 */	lwz r0, 0x24(r1)
/* 80017F70 00014D70  90 7E 00 18 */	stw r3, 0x18(r30)
/* 80017F74 00014D74  90 1E 00 1C */	stw r0, 0x1c(r30)
/* 80017F78 00014D78  80 01 00 28 */	lwz r0, 0x28(r1)
/* 80017F7C 00014D7C  90 1E 00 20 */	stw r0, 0x20(r30)
/* 80017F80 00014D80  83 E1 00 3C */	lwz r31, 0x3c(r1)
/* 80017F84 00014D84  83 C1 00 38 */	lwz r30, 0x38(r1)
/* 80017F88 00014D88  80 01 00 44 */	lwz r0, 0x44(r1)
/* 80017F8C 00014D8C  7C 08 03 A6 */	mtlr r0
/* 80017F90 00014D90  38 21 00 40 */	addi r1, r1, 0x40
/* 80017F94 00014D94  4E 80 00 20 */	blr 

.global __as__10iColor_tagFRC10iColor_tag
__as__10iColor_tagFRC10iColor_tag:
/* 80017F98 00014D98  88 A4 00 00 */	lbz r5, 0(r4)
/* 80017F9C 00014D9C  88 04 00 01 */	lbz r0, 1(r4)
/* 80017FA0 00014DA0  98 A3 00 00 */	stb r5, 0(r3)
/* 80017FA4 00014DA4  88 A4 00 02 */	lbz r5, 2(r4)
/* 80017FA8 00014DA8  98 03 00 01 */	stb r0, 1(r3)
/* 80017FAC 00014DAC  88 04 00 03 */	lbz r0, 3(r4)
/* 80017FB0 00014DB0  98 A3 00 02 */	stb r5, 2(r3)
/* 80017FB4 00014DB4  98 03 00 03 */	stb r0, 3(r3)
/* 80017FB8 00014DB8  4E 80 00 20 */	blr 

.global NSCREENY__Ff
NSCREENY__Ff:
/* 80017FBC 00014DBC  C0 02 82 20 */	lfs f0, lbl__781-_SDA2_BASE_(r2)
/* 80017FC0 00014DC0  EC 20 00 72 */	fmuls f1, f0, f1
/* 80017FC4 00014DC4  4E 80 00 20 */	blr 

.global NSCREENX__Ff
NSCREENX__Ff:
/* 80017FC8 00014DC8  C0 02 82 24 */	lfs f0, lbl__783-_SDA2_BASE_(r2)
/* 80017FCC 00014DCC  EC 20 00 72 */	fmuls f1, f0, f1
/* 80017FD0 00014DD0  4E 80 00 20 */	blr 

.global contract__13basic_rect_f_Fffff
contract__13basic_rect_f_Fffff:
/* 80017FD4 00014DD4  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80017FD8 00014DD8  7C 08 02 A6 */	mflr r0
/* 80017FDC 00014DDC  FC 20 08 50 */	fneg f1, f1
/* 80017FE0 00014DE0  FC 40 10 50 */	fneg f2, f2
/* 80017FE4 00014DE4  90 01 00 14 */	stw r0, 0x14(r1)
/* 80017FE8 00014DE8  FC 60 18 50 */	fneg f3, f3
/* 80017FEC 00014DEC  FC 80 20 50 */	fneg f4, f4
/* 80017FF0 00014DF0  48 00 00 15 */	bl expand__13basic_rect_f_Fffff
/* 80017FF4 00014DF4  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80017FF8 00014DF8  7C 08 03 A6 */	mtlr r0
/* 80017FFC 00014DFC  38 21 00 10 */	addi r1, r1, 0x10
/* 80018000 00014E00  4E 80 00 20 */	blr 

.global expand__13basic_rect_f_Fffff
expand__13basic_rect_f_Fffff:
/* 80018004 00014E04  C0 A3 00 00 */	lfs f5, 0(r3)
/* 80018008 00014E08  EC 61 18 2A */	fadds f3, f1, f3
/* 8001800C 00014E0C  EC 02 20 2A */	fadds f0, f2, f4
/* 80018010 00014E10  EC 25 08 28 */	fsubs f1, f5, f1
/* 80018014 00014E14  D0 23 00 00 */	stfs f1, 0(r3)
/* 80018018 00014E18  C0 23 00 08 */	lfs f1, 8(r3)
/* 8001801C 00014E1C  EC 21 18 2A */	fadds f1, f1, f3
/* 80018020 00014E20  D0 23 00 08 */	stfs f1, 8(r3)
/* 80018024 00014E24  C0 23 00 04 */	lfs f1, 4(r3)
/* 80018028 00014E28  EC 21 10 28 */	fsubs f1, f1, f2
/* 8001802C 00014E2C  D0 23 00 04 */	stfs f1, 4(r3)
/* 80018030 00014E30  C0 23 00 0C */	lfs f1, 0xc(r3)
/* 80018034 00014E34  EC 01 00 2A */	fadds f0, f1, f0
/* 80018038 00014E38  D0 03 00 0C */	stfs f0, 0xc(r3)
/* 8001803C 00014E3C  4E 80 00 20 */	blr 

.global __as__13basic_rect_f_FRC13basic_rect_f_
__as__13basic_rect_f_FRC13basic_rect_f_:
/* 80018040 00014E40  C0 24 00 00 */	lfs f1, 0(r4)
/* 80018044 00014E44  C0 04 00 04 */	lfs f0, 4(r4)
/* 80018048 00014E48  D0 23 00 00 */	stfs f1, 0(r3)
/* 8001804C 00014E4C  C0 24 00 08 */	lfs f1, 8(r4)
/* 80018050 00014E50  D0 03 00 04 */	stfs f0, 4(r3)
/* 80018054 00014E54  C0 04 00 0C */	lfs f0, 0xc(r4)
/* 80018058 00014E58  D0 23 00 08 */	stfs f1, 8(r3)
/* 8001805C 00014E5C  D0 03 00 0C */	stfs f0, 0xc(r3)
/* 80018060 00014E60  4E 80 00 20 */	blr 
