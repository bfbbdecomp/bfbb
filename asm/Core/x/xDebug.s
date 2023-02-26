.include "macros.inc"
.file "xDebug.cpp"

# 0x80017D3C - 0x80017DA4
.text
.balign 4

# xprintf(const char*, ...)
.fn xprintf__FPCce, global
/* 80017D3C 00014E1C  94 21 FF 90 */	stwu r1, -0x70(r1)
/* 80017D40 00014E20  40 86 00 24 */	bne cr1, .L_80017D64
/* 80017D44 00014E24  D8 21 00 28 */	stfd f1, 0x28(r1)
/* 80017D48 00014E28  D8 41 00 30 */	stfd f2, 0x30(r1)
/* 80017D4C 00014E2C  D8 61 00 38 */	stfd f3, 0x38(r1)
/* 80017D50 00014E30  D8 81 00 40 */	stfd f4, 0x40(r1)
/* 80017D54 00014E34  D8 A1 00 48 */	stfd f5, 0x48(r1)
/* 80017D58 00014E38  D8 C1 00 50 */	stfd f6, 0x50(r1)
/* 80017D5C 00014E3C  D8 E1 00 58 */	stfd f7, 0x58(r1)
/* 80017D60 00014E40  D9 01 00 60 */	stfd f8, 0x60(r1)
.L_80017D64:
/* 80017D64 00014E44  90 61 00 08 */	stw r3, 0x8(r1)
/* 80017D68 00014E48  90 81 00 0C */	stw r4, 0xc(r1)
/* 80017D6C 00014E4C  90 A1 00 10 */	stw r5, 0x10(r1)
/* 80017D70 00014E50  90 C1 00 14 */	stw r6, 0x14(r1)
/* 80017D74 00014E54  90 E1 00 18 */	stw r7, 0x18(r1)
/* 80017D78 00014E58  91 01 00 1C */	stw r8, 0x1c(r1)
/* 80017D7C 00014E5C  91 21 00 20 */	stw r9, 0x20(r1)
/* 80017D80 00014E60  91 41 00 24 */	stw r10, 0x24(r1)
/* 80017D84 00014E64  38 21 00 70 */	addi r1, r1, 0x70
/* 80017D88 00014E68  4E 80 00 20 */	blr
.endfn xprintf__FPCce

# xDebugModeAdd(const char*, void (*)(void))
.fn xDebugModeAdd__FPCcPFv_v, global
/* 80017D8C 00014E6C  38 60 FF FF */	li r3, -0x1
/* 80017D90 00014E70  4E 80 00 20 */	blr
.endfn xDebugModeAdd__FPCcPFv_v

# xDebugInit()
.fn xDebugInit__Fv, global
/* 80017D94 00014E74  4E 80 00 20 */	blr
.endfn xDebugInit__Fv

# xDebugUpdate()
.fn xDebugUpdate__Fv, global
/* 80017D98 00014E78  4E 80 00 20 */	blr
.endfn xDebugUpdate__Fv

# xDebugExit()
.fn xDebugExit__Fv, global
/* 80017D9C 00014E7C  4E 80 00 20 */	blr
.endfn xDebugExit__Fv

# xDebugTimestampScreen()
.fn xDebugTimestampScreen__Fv, global
/* 80017DA0 00014E80  4E 80 00 20 */	blr
.endfn xDebugTimestampScreen__Fv

# 0x80017DA4 - 0x80017FD4
.section .text, "ax", unique, 1
.balign 4

# xtextbox::render(bool) const
.fn render__8xtextboxCFb, weak
/* 80017DA4 00014E84  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80017DA8 00014E88  7C 08 02 A6 */	mflr r0
/* 80017DAC 00014E8C  90 01 00 14 */	stw r0, 0x14(r1)
/* 80017DB0 00014E90  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80017DB4 00014E94  7C 7F 1B 78 */	mr r31, r3
/* 80017DB8 00014E98  48 00 A8 79 */	bl temp_layout__8xtextboxCFb
/* 80017DBC 00014E9C  7C 64 1B 78 */	mr r4, r3
/* 80017DC0 00014EA0  7F E3 FB 78 */	mr r3, r31
/* 80017DC4 00014EA4  38 A0 00 00 */	li r5, 0x0
/* 80017DC8 00014EA8  38 C0 FF FF */	li r6, -0x1
/* 80017DCC 00014EAC  48 00 AA E5 */	bl render__8xtextboxCFRQ28xtextbox6layoutii
/* 80017DD0 00014EB0  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80017DD4 00014EB4  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80017DD8 00014EB8  7C 08 03 A6 */	mtlr r0
/* 80017DDC 00014EBC  38 21 00 10 */	addi r1, r1, 0x10
/* 80017DE0 00014EC0  4E 80 00 20 */	blr
.endfn render__8xtextboxCFb

# xtextbox::create(const xfont&, const basic_rect<float>&, unsigned int, float, float, float, float)
.fn "create__8xtextboxFRC5xfontRC13basic_rect<f>Uiffff", weak
/* 80017DE4 00014EC4  94 21 FF 60 */	stwu r1, -0xa0(r1)
/* 80017DE8 00014EC8  7C 08 02 A6 */	mflr r0
/* 80017DEC 00014ECC  90 01 00 A4 */	stw r0, 0xa4(r1)
/* 80017DF0 00014ED0  39 61 00 A0 */	addi r11, r1, 0xa0
/* 80017DF4 00014ED4  48 1D 56 7D */	bl _savefpr_28
/* 80017DF8 00014ED8  93 E1 00 7C */	stw r31, 0x7c(r1)
/* 80017DFC 00014EDC  93 C1 00 78 */	stw r30, 0x78(r1)
/* 80017E00 00014EE0  93 A1 00 74 */	stw r29, 0x74(r1)
/* 80017E04 00014EE4  FF 80 08 90 */	fmr f28, f1
/* 80017E08 00014EE8  7C 7D 1B 78 */	mr r29, r3
/* 80017E0C 00014EEC  FF A0 10 90 */	fmr f29, f2
/* 80017E10 00014EF0  7C BE 2B 78 */	mr r30, r5
/* 80017E14 00014EF4  FF C0 18 90 */	fmr f30, f3
/* 80017E18 00014EF8  7C DF 33 78 */	mr r31, r6
/* 80017E1C 00014EFC  FF E0 20 90 */	fmr f31, f4
/* 80017E20 00014F00  38 61 00 08 */	addi r3, r1, 0x8
/* 80017E24 00014F04  48 00 00 85 */	bl __as__5xfontFRC5xfont
/* 80017E28 00014F08  7F C4 F3 78 */	mr r4, r30
/* 80017E2C 00014F0C  38 61 00 2C */	addi r3, r1, 0x2c
/* 80017E30 00014F10  48 00 02 11 */	bl "__as__13basic_rect<f>FRC13basic_rect<f>"
/* 80017E34 00014F14  3C 60 80 28 */	lis r3, text_cb__8xtextbox@ha
/* 80017E38 00014F18  38 C0 00 00 */	li r6, 0x0
/* 80017E3C 00014F1C  38 63 BB EC */	addi r3, r3, text_cb__8xtextbox@l
/* 80017E40 00014F20  38 00 00 0D */	li r0, 0xd
/* 80017E44 00014F24  93 E1 00 3C */	stw r31, 0x3c(r1)
/* 80017E48 00014F28  38 BD FF FC */	addi r5, r29, -0x4
/* 80017E4C 00014F2C  38 81 00 04 */	addi r4, r1, 0x4
/* 80017E50 00014F30  D3 81 00 40 */	stfs f28, 0x40(r1)
/* 80017E54 00014F34  D3 A1 00 44 */	stfs f29, 0x44(r1)
/* 80017E58 00014F38  D3 C1 00 48 */	stfs f30, 0x48(r1)
/* 80017E5C 00014F3C  D3 E1 00 4C */	stfs f31, 0x4c(r1)
/* 80017E60 00014F40  90 C1 00 60 */	stw r6, 0x60(r1)
/* 80017E64 00014F44  90 C1 00 6C */	stw r6, 0x6c(r1)
/* 80017E68 00014F48  90 61 00 50 */	stw r3, 0x50(r1)
/* 80017E6C 00014F4C  7C 09 03 A6 */	mtctr r0
.L_80017E70:
/* 80017E70 00014F50  80 64 00 04 */	lwz r3, 0x4(r4)
/* 80017E74 00014F54  84 04 00 08 */	lwzu r0, 0x8(r4)
/* 80017E78 00014F58  90 65 00 04 */	stw r3, 0x4(r5)
/* 80017E7C 00014F5C  94 05 00 08 */	stwu r0, 0x8(r5)
/* 80017E80 00014F60  42 00 FF F0 */	bdnz .L_80017E70
/* 80017E84 00014F64  39 61 00 A0 */	addi r11, r1, 0xa0
/* 80017E88 00014F68  48 1D 56 35 */	bl _restfpr_28
/* 80017E8C 00014F6C  80 01 00 A4 */	lwz r0, 0xa4(r1)
/* 80017E90 00014F70  83 E1 00 7C */	lwz r31, 0x7c(r1)
/* 80017E94 00014F74  83 C1 00 78 */	lwz r30, 0x78(r1)
/* 80017E98 00014F78  83 A1 00 74 */	lwz r29, 0x74(r1)
/* 80017E9C 00014F7C  7C 08 03 A6 */	mtlr r0
/* 80017EA0 00014F80  38 21 00 A0 */	addi r1, r1, 0xa0
/* 80017EA4 00014F84  4E 80 00 20 */	blr
.endfn "create__8xtextboxFRC5xfontRC13basic_rect<f>Uiffff"

# xfont::operator=(const xfont&)
.fn __as__5xfontFRC5xfont, weak
/* 80017EA8 00014F88  80 04 00 00 */	lwz r0, 0x0(r4)
/* 80017EAC 00014F8C  C0 04 00 04 */	lfs f0, 0x4(r4)
/* 80017EB0 00014F90  90 03 00 00 */	stw r0, 0x0(r3)
/* 80017EB4 00014F94  C0 24 00 08 */	lfs f1, 0x8(r4)
/* 80017EB8 00014F98  D0 03 00 04 */	stfs f0, 0x4(r3)
/* 80017EBC 00014F9C  C0 04 00 0C */	lfs f0, 0xc(r4)
/* 80017EC0 00014FA0  D0 23 00 08 */	stfs f1, 0x8(r3)
/* 80017EC4 00014FA4  80 04 00 10 */	lwz r0, 0x10(r4)
/* 80017EC8 00014FA8  D0 03 00 0C */	stfs f0, 0xc(r3)
/* 80017ECC 00014FAC  80 A4 00 14 */	lwz r5, 0x14(r4)
/* 80017ED0 00014FB0  90 03 00 10 */	stw r0, 0x10(r3)
/* 80017ED4 00014FB4  80 04 00 18 */	lwz r0, 0x18(r4)
/* 80017ED8 00014FB8  90 A3 00 14 */	stw r5, 0x14(r3)
/* 80017EDC 00014FBC  80 A4 00 1C */	lwz r5, 0x1c(r4)
/* 80017EE0 00014FC0  90 03 00 18 */	stw r0, 0x18(r3)
/* 80017EE4 00014FC4  80 04 00 20 */	lwz r0, 0x20(r4)
/* 80017EE8 00014FC8  90 A3 00 1C */	stw r5, 0x1c(r3)
/* 80017EEC 00014FCC  90 03 00 20 */	stw r0, 0x20(r3)
/* 80017EF0 00014FD0  4E 80 00 20 */	blr
.endfn __as__5xfontFRC5xfont

# xfont::create(unsigned int, float, float, float, iColor_tag, const basic_rect<float>&)
.fn "create__5xfontFUifff10iColor_tagRC13basic_rect<f>", weak
/* 80017EF4 00014FD4  94 21 FF C0 */	stwu r1, -0x40(r1)
/* 80017EF8 00014FD8  7C 08 02 A6 */	mflr r0
/* 80017EFC 00014FDC  90 01 00 44 */	stw r0, 0x44(r1)
/* 80017F00 00014FE0  93 E1 00 3C */	stw r31, 0x3c(r1)
/* 80017F04 00014FE4  7C DF 33 78 */	mr r31, r6
/* 80017F08 00014FE8  93 C1 00 38 */	stw r30, 0x38(r1)
/* 80017F0C 00014FEC  7C 7E 1B 78 */	mr r30, r3
/* 80017F10 00014FF0  38 61 00 18 */	addi r3, r1, 0x18
/* 80017F14 00014FF4  90 81 00 08 */	stw r4, 0x8(r1)
/* 80017F18 00014FF8  7C A4 2B 78 */	mr r4, r5
/* 80017F1C 00014FFC  D0 21 00 0C */	stfs f1, 0xc(r1)
/* 80017F20 00015000  D0 41 00 10 */	stfs f2, 0x10(r1)
/* 80017F24 00015004  D0 61 00 14 */	stfs f3, 0x14(r1)
/* 80017F28 00015008  48 00 00 71 */	bl __as__10iColor_tagFRC10iColor_tag
/* 80017F2C 0001500C  7F E4 FB 78 */	mr r4, r31
/* 80017F30 00015010  38 61 00 1C */	addi r3, r1, 0x1c
/* 80017F34 00015014  48 00 01 0D */	bl "__as__13basic_rect<f>FRC13basic_rect<f>"
/* 80017F38 00015018  80 61 00 08 */	lwz r3, 0x8(r1)
/* 80017F3C 0001501C  80 01 00 0C */	lwz r0, 0xc(r1)
/* 80017F40 00015020  90 7E 00 00 */	stw r3, 0x0(r30)
/* 80017F44 00015024  90 1E 00 04 */	stw r0, 0x4(r30)
/* 80017F48 00015028  80 61 00 10 */	lwz r3, 0x10(r1)
/* 80017F4C 0001502C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80017F50 00015030  90 7E 00 08 */	stw r3, 0x8(r30)
/* 80017F54 00015034  90 1E 00 0C */	stw r0, 0xc(r30)
/* 80017F58 00015038  80 61 00 18 */	lwz r3, 0x18(r1)
/* 80017F5C 0001503C  80 01 00 1C */	lwz r0, 0x1c(r1)
/* 80017F60 00015040  90 7E 00 10 */	stw r3, 0x10(r30)
/* 80017F64 00015044  90 1E 00 14 */	stw r0, 0x14(r30)
/* 80017F68 00015048  80 61 00 20 */	lwz r3, 0x20(r1)
/* 80017F6C 0001504C  80 01 00 24 */	lwz r0, 0x24(r1)
/* 80017F70 00015050  90 7E 00 18 */	stw r3, 0x18(r30)
/* 80017F74 00015054  90 1E 00 1C */	stw r0, 0x1c(r30)
/* 80017F78 00015058  80 01 00 28 */	lwz r0, 0x28(r1)
/* 80017F7C 0001505C  90 1E 00 20 */	stw r0, 0x20(r30)
/* 80017F80 00015060  83 E1 00 3C */	lwz r31, 0x3c(r1)
/* 80017F84 00015064  83 C1 00 38 */	lwz r30, 0x38(r1)
/* 80017F88 00015068  80 01 00 44 */	lwz r0, 0x44(r1)
/* 80017F8C 0001506C  7C 08 03 A6 */	mtlr r0
/* 80017F90 00015070  38 21 00 40 */	addi r1, r1, 0x40
/* 80017F94 00015074  4E 80 00 20 */	blr
.endfn "create__5xfontFUifff10iColor_tagRC13basic_rect<f>"

# iColor_tag::operator=(const iColor_tag&)
.fn __as__10iColor_tagFRC10iColor_tag, weak
/* 80017F98 00015078  88 A4 00 00 */	lbz r5, 0x0(r4)
/* 80017F9C 0001507C  88 04 00 01 */	lbz r0, 0x1(r4)
/* 80017FA0 00015080  98 A3 00 00 */	stb r5, 0x0(r3)
/* 80017FA4 00015084  88 A4 00 02 */	lbz r5, 0x2(r4)
/* 80017FA8 00015088  98 03 00 01 */	stb r0, 0x1(r3)
/* 80017FAC 0001508C  88 04 00 03 */	lbz r0, 0x3(r4)
/* 80017FB0 00015090  98 A3 00 02 */	stb r5, 0x2(r3)
/* 80017FB4 00015094  98 03 00 03 */	stb r0, 0x3(r3)
/* 80017FB8 00015098  4E 80 00 20 */	blr
.endfn __as__10iColor_tagFRC10iColor_tag

# NSCREENY(float)
.fn NSCREENY__Ff, weak
/* 80017FBC 0001509C  C0 02 82 20 */	lfs f0, "@781"@sda21(r2)
/* 80017FC0 000150A0  EC 20 00 72 */	fmuls f1, f0, f1
/* 80017FC4 000150A4  4E 80 00 20 */	blr
.endfn NSCREENY__Ff

# NSCREENX(float)
.fn NSCREENX__Ff, weak
/* 80017FC8 000150A8  C0 02 82 24 */	lfs f0, "@783"@sda21(r2)
/* 80017FCC 000150AC  EC 20 00 72 */	fmuls f1, f0, f1
/* 80017FD0 000150B0  4E 80 00 20 */	blr
.endfn NSCREENX__Ff

# 0x80017FD4 - 0x80018064
.section .text, "ax", unique, 2
.balign 4

# basic_rect<float>::contract(float, float, float, float)
.fn "contract__13basic_rect<f>Fffff", weak
/* 80017FD4 000150B4  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80017FD8 000150B8  7C 08 02 A6 */	mflr r0
/* 80017FDC 000150BC  FC 20 08 50 */	fneg f1, f1
/* 80017FE0 000150C0  FC 40 10 50 */	fneg f2, f2
/* 80017FE4 000150C4  90 01 00 14 */	stw r0, 0x14(r1)
/* 80017FE8 000150C8  FC 60 18 50 */	fneg f3, f3
/* 80017FEC 000150CC  FC 80 20 50 */	fneg f4, f4
/* 80017FF0 000150D0  48 00 00 15 */	bl "expand__13basic_rect<f>Fffff"
/* 80017FF4 000150D4  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80017FF8 000150D8  7C 08 03 A6 */	mtlr r0
/* 80017FFC 000150DC  38 21 00 10 */	addi r1, r1, 0x10
/* 80018000 000150E0  4E 80 00 20 */	blr
.endfn "contract__13basic_rect<f>Fffff"

# basic_rect<float>::expand(float, float, float, float)
.fn "expand__13basic_rect<f>Fffff", weak
/* 80018004 000150E4  C0 A3 00 00 */	lfs f5, 0x0(r3)
/* 80018008 000150E8  EC 61 18 2A */	fadds f3, f1, f3
/* 8001800C 000150EC  EC 02 20 2A */	fadds f0, f2, f4
/* 80018010 000150F0  EC 25 08 28 */	fsubs f1, f5, f1
/* 80018014 000150F4  D0 23 00 00 */	stfs f1, 0x0(r3)
/* 80018018 000150F8  C0 23 00 08 */	lfs f1, 0x8(r3)
/* 8001801C 000150FC  EC 21 18 2A */	fadds f1, f1, f3
/* 80018020 00015100  D0 23 00 08 */	stfs f1, 0x8(r3)
/* 80018024 00015104  C0 23 00 04 */	lfs f1, 0x4(r3)
/* 80018028 00015108  EC 21 10 28 */	fsubs f1, f1, f2
/* 8001802C 0001510C  D0 23 00 04 */	stfs f1, 0x4(r3)
/* 80018030 00015110  C0 23 00 0C */	lfs f1, 0xc(r3)
/* 80018034 00015114  EC 01 00 2A */	fadds f0, f1, f0
/* 80018038 00015118  D0 03 00 0C */	stfs f0, 0xc(r3)
/* 8001803C 0001511C  4E 80 00 20 */	blr
.endfn "expand__13basic_rect<f>Fffff"

# basic_rect<float>::operator=(const basic_rect<float>&)
.fn "__as__13basic_rect<f>FRC13basic_rect<f>", weak
/* 80018040 00015120  C0 24 00 00 */	lfs f1, 0x0(r4)
/* 80018044 00015124  C0 04 00 04 */	lfs f0, 0x4(r4)
/* 80018048 00015128  D0 23 00 00 */	stfs f1, 0x0(r3)
/* 8001804C 0001512C  C0 24 00 08 */	lfs f1, 0x8(r4)
/* 80018050 00015130  D0 03 00 04 */	stfs f0, 0x4(r3)
/* 80018054 00015134  C0 04 00 0C */	lfs f0, 0xc(r4)
/* 80018058 00015138  D0 23 00 08 */	stfs f1, 0x8(r3)
/* 8001805C 0001513C  D0 03 00 0C */	stfs f0, 0xc(r3)
/* 80018060 00015140  4E 80 00 20 */	blr
.endfn "__as__13basic_rect<f>FRC13basic_rect<f>"

# 0x803CB1B0 - 0x803CB1B8
.section .sbss, "wa", @nobits
.balign 8

.obj gFrameCount, global
	.skip 0x4
.endobj gFrameCount
	.skip 0x4

# 0x803CCBA0 - 0x803CCBA8
.section .sdata2, "a"
.balign 8

.obj "@781", local
	.4byte 0x3B088889
.endobj "@781"

.obj "@783", local
	.4byte 0x3ACCCCCD
.endobj "@783"
