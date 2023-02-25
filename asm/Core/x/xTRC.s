.include "macros.inc"
.file "xTRC.cpp"

# 0x8004D6AC - 0x8004DB80
.text
.balign 4

# xTRCInit()
.fn xTRCInit__Fv, global
/* 8004D6AC 0004A78C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8004D6B0 0004A790  7C 08 02 A6 */	mflr r0
/* 8004D6B4 0004A794  3C 60 80 3C */	lis r3, gTrcPad@ha
/* 8004D6B8 0004A798  38 80 00 00 */	li r4, 0x0
/* 8004D6BC 0004A79C  90 01 00 14 */	stw r0, 0x14(r1)
/* 8004D6C0 0004A7A0  38 63 EF 88 */	addi r3, r3, gTrcPad@l
/* 8004D6C4 0004A7A4  38 A0 00 30 */	li r5, 0x30
/* 8004D6C8 0004A7A8  4B FB 5D 91 */	bl memset
/* 8004D6CC 0004A7AC  3C 60 80 3C */	lis r3, gTrcPad@ha
/* 8004D6D0 0004A7B0  38 80 00 00 */	li r4, 0x0
/* 8004D6D4 0004A7B4  39 03 EF 88 */	addi r8, r3, gTrcPad@l
/* 8004D6D8 0004A7B8  38 E0 00 01 */	li r7, 0x1
/* 8004D6DC 0004A7BC  38 C0 00 02 */	li r6, 0x2
/* 8004D6E0 0004A7C0  38 00 00 03 */	li r0, 0x3
/* 8004D6E4 0004A7C4  90 88 00 04 */	stw r4, 0x4(r8)
/* 8004D6E8 0004A7C8  38 6D 8B 18 */	addi r3, r13, gTrcDisk@sda21
/* 8004D6EC 0004A7CC  38 80 00 00 */	li r4, 0x0
/* 8004D6F0 0004A7D0  38 A0 00 08 */	li r5, 0x8
/* 8004D6F4 0004A7D4  90 E8 00 10 */	stw r7, 0x10(r8)
/* 8004D6F8 0004A7D8  90 C8 00 1C */	stw r6, 0x1c(r8)
/* 8004D6FC 0004A7DC  90 08 00 28 */	stw r0, 0x28(r8)
/* 8004D700 0004A7E0  4B FB 5D 59 */	bl memset
/* 8004D704 0004A7E4  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8004D708 0004A7E8  7C 08 03 A6 */	mtlr r0
/* 8004D70C 0004A7EC  38 21 00 10 */	addi r1, r1, 0x10
/* 8004D710 0004A7F0  4E 80 00 20 */	blr
.endfn xTRCInit__Fv

# render_message(const char*)
.fn render_message__FPCc, local
/* 8004D714 0004A7F4  94 21 FF 40 */	stwu r1, -0xc0(r1)
/* 8004D718 0004A7F8  7C 08 02 A6 */	mflr r0
/* 8004D71C 0004A7FC  90 01 00 C4 */	stw r0, 0xc4(r1)
/* 8004D720 0004A800  DB E1 00 B0 */	stfd f31, 0xb0(r1)
/* 8004D724 0004A804  F3 E1 00 B8 */	psq_st f31, 0xb8(r1), 0, qr0
/* 8004D728 0004A808  93 E1 00 AC */	stw r31, 0xac(r1)
/* 8004D72C 0004A80C  88 0D 8B 20 */	lbz r0, init$733@sda21(r13)
/* 8004D730 0004A810  7C 7F 1B 78 */	mr r31, r3
/* 8004D734 0004A814  7C 00 07 75 */	extsb. r0, r0
/* 8004D738 0004A818  40 82 00 9C */	bne .L_8004D7D4
/* 8004D73C 0004A81C  80 02 87 B0 */	lwz r0, yellow@sda21(r2)
/* 8004D740 0004A820  90 01 00 0C */	stw r0, 0xc(r1)
/* 8004D744 0004A824  C0 22 87 B8 */	lfs f1, "@747"@sda21(r2)
/* 8004D748 0004A828  4B FC A8 75 */	bl NSCREENY__Ff
/* 8004D74C 0004A82C  FF E0 08 90 */	fmr f31, f1
/* 8004D750 0004A830  C0 22 87 B4 */	lfs f1, "@746"@sda21(r2)
/* 8004D754 0004A834  4B FC A8 75 */	bl NSCREENX__Ff
/* 8004D758 0004A838  FC 40 F8 90 */	fmr f2, f31
/* 8004D75C 0004A83C  3C 60 80 25 */	lis r3, screen_bounds@ha
/* 8004D760 0004A840  C0 62 87 BC */	lfs f3, "@748"@sda21(r2)
/* 8004D764 0004A844  38 C3 3F 00 */	addi r6, r3, screen_bounds@l
/* 8004D768 0004A848  38 61 00 10 */	addi r3, r1, 0x10
/* 8004D76C 0004A84C  38 A1 00 0C */	addi r5, r1, 0xc
/* 8004D770 0004A850  38 80 00 01 */	li r4, 0x1
/* 8004D774 0004A854  4B FC A7 81 */	bl "create__5xfontFUifff10iColor_tagRC13basic_rect<f>"
/* 8004D778 0004A858  C0 22 87 BC */	lfs f1, "@748"@sda21(r2)
/* 8004D77C 0004A85C  3C 60 80 25 */	lis r3, screen_bounds@ha
/* 8004D780 0004A860  38 A3 3F 00 */	addi r5, r3, screen_bounds@l
/* 8004D784 0004A864  38 81 00 10 */	addi r4, r1, 0x10
/* 8004D788 0004A868  FC 40 08 90 */	fmr f2, f1
/* 8004D78C 0004A86C  38 61 00 34 */	addi r3, r1, 0x34
/* 8004D790 0004A870  FC 60 08 90 */	fmr f3, f1
/* 8004D794 0004A874  38 C0 00 02 */	li r6, 0x2
/* 8004D798 0004A878  FC 80 08 90 */	fmr f4, f1
/* 8004D79C 0004A87C  4B FC A6 49 */	bl "create__8xtextboxFRC5xfontRC13basic_rect<f>Uiffff"
/* 8004D7A0 0004A880  3C 60 80 29 */	lis r3, tb$731@ha
/* 8004D7A4 0004A884  38 00 00 0D */	li r0, 0xd
/* 8004D7A8 0004A888  38 63 A2 A8 */	addi r3, r3, tb$731@l
/* 8004D7AC 0004A88C  38 81 00 30 */	addi r4, r1, 0x30
/* 8004D7B0 0004A890  38 A3 FF FC */	addi r5, r3, -0x4
/* 8004D7B4 0004A894  7C 09 03 A6 */	mtctr r0
.L_8004D7B8:
/* 8004D7B8 0004A898  80 64 00 04 */	lwz r3, 0x4(r4)
/* 8004D7BC 0004A89C  84 04 00 08 */	lwzu r0, 0x8(r4)
/* 8004D7C0 0004A8A0  90 65 00 04 */	stw r3, 0x4(r5)
/* 8004D7C4 0004A8A4  94 05 00 08 */	stwu r0, 0x8(r5)
/* 8004D7C8 0004A8A8  42 00 FF F0 */	bdnz .L_8004D7B8
/* 8004D7CC 0004A8AC  38 00 00 01 */	li r0, 0x1
/* 8004D7D0 0004A8B0  98 0D 8B 20 */	stb r0, init$733@sda21(r13)
.L_8004D7D4:
/* 8004D7D4 0004A8B4  3C 60 80 29 */	lis r3, tb$731@ha
/* 8004D7D8 0004A8B8  7F E4 FB 78 */	mr r4, r31
/* 8004D7DC 0004A8BC  38 63 A2 A8 */	addi r3, r3, tb$731@l
/* 8004D7E0 0004A8C0  4B FD 4C E9 */	bl set_text__8xtextboxFPCc
/* 8004D7E4 0004A8C4  3C 80 80 29 */	lis r4, tb$731@ha
/* 8004D7E8 0004A8C8  3C 60 80 25 */	lis r3, screen_bounds@ha
/* 8004D7EC 0004A8CC  38 84 A2 A8 */	addi r4, r4, tb$731@l
/* 8004D7F0 0004A8D0  3B E4 00 24 */	addi r31, r4, 0x24
/* 8004D7F4 0004A8D4  38 83 3F 00 */	addi r4, r3, screen_bounds@l
/* 8004D7F8 0004A8D8  7F E3 FB 78 */	mr r3, r31
/* 8004D7FC 0004A8DC  4B FC A8 45 */	bl "__as__13basic_rect<f>FRC13basic_rect<f>"
/* 8004D800 0004A8E0  C0 22 87 C0 */	lfs f1, "@749"@sda21(r2)
/* 8004D804 0004A8E4  7F E3 FB 78 */	mr r3, r31
/* 8004D808 0004A8E8  48 00 03 F1 */	bl "contract__13basic_rect<f>Ff"
/* 8004D80C 0004A8EC  3C 60 80 29 */	lis r3, tb$731@ha
/* 8004D810 0004A8F0  38 80 00 01 */	li r4, 0x1
/* 8004D814 0004A8F4  38 63 A2 A8 */	addi r3, r3, tb$731@l
/* 8004D818 0004A8F8  48 00 03 69 */	bl yextent__8xtextboxCFb
/* 8004D81C 0004A8FC  3C 60 80 29 */	lis r3, tb$731@ha
/* 8004D820 0004A900  FC 00 08 18 */	frsp f0, f1
/* 8004D824 0004A904  38 E3 A2 A8 */	addi r7, r3, tb$731@l
/* 8004D828 0004A908  38 60 00 00 */	li r3, 0x0
/* 8004D82C 0004A90C  D0 27 00 30 */	stfs f1, 0x30(r7)
/* 8004D830 0004A910  38 80 00 00 */	li r4, 0x0
/* 8004D834 0004A914  38 A0 00 00 */	li r5, 0x0
/* 8004D838 0004A918  C0 22 87 C4 */	lfs f1, "@750"@sda21(r2)
/* 8004D83C 0004A91C  38 C0 00 C8 */	li r6, 0xc8
/* 8004D840 0004A920  EC 01 08 3C */	fnmsubs f0, f1, f0, f1
/* 8004D844 0004A924  D0 07 00 28 */	stfs f0, 0x28(r7)
/* 8004D848 0004A928  4B FE 17 A1 */	bl xColorFromRGBA__FUcUcUcUc
/* 8004D84C 0004A92C  3C 80 80 29 */	lis r4, tb$731@ha
/* 8004D850 0004A930  90 61 00 08 */	stw r3, 0x8(r1)
/* 8004D854 0004A934  38 64 A2 A8 */	addi r3, r4, tb$731@l
/* 8004D858 0004A938  38 81 00 08 */	addi r4, r1, 0x8
/* 8004D85C 0004A93C  38 63 00 14 */	addi r3, r3, 0x14
/* 8004D860 0004A940  4B FD 85 31 */	bl "render_fill_rect__FRC13basic_rect<f>10iColor_tag"
/* 8004D864 0004A944  3C 60 80 29 */	lis r3, tb$731@ha
/* 8004D868 0004A948  38 80 00 01 */	li r4, 0x1
/* 8004D86C 0004A94C  38 63 A2 A8 */	addi r3, r3, tb$731@l
/* 8004D870 0004A950  4B FC A5 35 */	bl render__8xtextboxCFb
/* 8004D874 0004A954  E3 E1 00 B8 */	psq_l f31, 0xb8(r1), 0, qr0
/* 8004D878 0004A958  80 01 00 C4 */	lwz r0, 0xc4(r1)
/* 8004D87C 0004A95C  CB E1 00 B0 */	lfd f31, 0xb0(r1)
/* 8004D880 0004A960  83 E1 00 AC */	lwz r31, 0xac(r1)
/* 8004D884 0004A964  7C 08 03 A6 */	mtlr r0
/* 8004D888 0004A968  38 21 00 C0 */	addi r1, r1, 0xc0
/* 8004D88C 0004A96C  4E 80 00 20 */	blr
.endfn render_message__FPCc

# xTRCRender()
.fn xTRCRender__Fv, global
/* 8004D890 0004A970  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8004D894 0004A974  7C 08 02 A6 */	mflr r0
/* 8004D898 0004A978  90 01 00 14 */	stw r0, 0x14(r1)
/* 8004D89C 0004A97C  80 6D 8B 24 */	lwz r3, message_text@sda21(r13)
/* 8004D8A0 0004A980  28 03 00 00 */	cmplwi r3, 0x0
/* 8004D8A4 0004A984  41 82 00 08 */	beq .L_8004D8AC
/* 8004D8A8 0004A988  4B FF FE 6D */	bl render_message__FPCc
.L_8004D8AC:
/* 8004D8AC 0004A98C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8004D8B0 0004A990  7C 08 03 A6 */	mtlr r0
/* 8004D8B4 0004A994  38 21 00 10 */	addi r1, r1, 0x10
/* 8004D8B8 0004A998  4E 80 00 20 */	blr
.endfn xTRCRender__Fv

# xTRCReset()
.fn xTRCReset__Fv, global
/* 8004D8BC 0004A99C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8004D8C0 0004A9A0  7C 08 02 A6 */	mflr r0
/* 8004D8C4 0004A9A4  3C 60 80 3C */	lis r3, globals@ha
/* 8004D8C8 0004A9A8  90 01 00 14 */	stw r0, 0x14(r1)
/* 8004D8CC 0004A9AC  38 00 00 00 */	li r0, 0x0
/* 8004D8D0 0004A9B0  38 63 05 58 */	addi r3, r3, globals@l
/* 8004D8D4 0004A9B4  90 0D 8B 24 */	stw r0, message_text@sda21(r13)
/* 8004D8D8 0004A9B8  98 03 06 D8 */	stb r0, 0x6d8(r3)
/* 8004D8DC 0004A9BC  80 0D 8F A8 */	lwz r0, gGameMode@sda21(r13)
/* 8004D8E0 0004A9C0  2C 00 00 08 */	cmpwi r0, 0x8
/* 8004D8E4 0004A9C4  40 82 00 10 */	bne .L_8004D8F4
/* 8004D8E8 0004A9C8  38 60 00 0C */	li r3, 0xc
/* 8004D8EC 0004A9CC  48 04 D3 2D */	bl zGameModeSwitch__F9eGameMode
/* 8004D8F0 0004A9D0  4B FF AA 15 */	bl xSndResume__Fv
.L_8004D8F4:
/* 8004D8F4 0004A9D4  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8004D8F8 0004A9D8  7C 08 03 A6 */	mtlr r0
/* 8004D8FC 0004A9DC  38 21 00 10 */	addi r1, r1, 0x10
/* 8004D900 0004A9E0  4E 80 00 20 */	blr
.endfn xTRCReset__Fv

# xTRCPad(int, _tagTRCState)
.fn xTRCPad__Fi12_tagTRCState, global
/* 8004D904 0004A9E4  4E 80 00 20 */	blr
.endfn xTRCPad__Fi12_tagTRCState

# xTRCDisk(_tagTRCState)
.fn xTRCDisk__F12_tagTRCState, global
/* 8004D908 0004A9E8  2C 03 00 05 */	cmpwi r3, 0x5
/* 8004D90C 0004A9EC  41 82 00 18 */	beq .L_8004D924
/* 8004D910 0004A9F0  90 6D 8B 18 */	stw r3, gTrcDisk@sda21(r13)
/* 8004D914 0004A9F4  38 00 00 06 */	li r0, 0x6
/* 8004D918 0004A9F8  38 6D 8B 18 */	addi r3, r13, gTrcDisk@sda21
/* 8004D91C 0004A9FC  90 03 00 04 */	stw r0, 0x4(r3)
/* 8004D920 0004AA00  4E 80 00 20 */	blr
.L_8004D924:
/* 8004D924 0004AA04  38 00 00 05 */	li r0, 0x5
/* 8004D928 0004AA08  38 6D 8B 18 */	addi r3, r13, gTrcDisk@sda21
/* 8004D92C 0004AA0C  90 03 00 04 */	stw r0, 0x4(r3)
/* 8004D930 0004AA10  4E 80 00 20 */	blr
.endfn xTRCDisk__F12_tagTRCState

# render_mem_card_no_space(int, int, int, bool)
.fn render_mem_card_no_space__Fiiib, global
/* 8004D934 0004AA14  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8004D938 0004AA18  7C 08 02 A6 */	mflr r0
/* 8004D93C 0004AA1C  2C 04 00 00 */	cmpwi r4, 0x0
/* 8004D940 0004AA20  90 01 00 14 */	stw r0, 0x14(r1)
/* 8004D944 0004AA24  40 80 00 18 */	bge .L_8004D95C
/* 8004D948 0004AA28  2C 05 FF FF */	cmpwi r5, -0x1
/* 8004D94C 0004AA2C  41 82 00 10 */	beq .L_8004D95C
/* 8004D950 0004AA30  2C 03 FF FF */	cmpwi r3, -0x1
/* 8004D954 0004AA34  41 82 00 08 */	beq .L_8004D95C
/* 8004D958 0004AA38  38 80 00 00 */	li r4, 0x0
.L_8004D95C:
/* 8004D95C 0004AA3C  90 6D 91 64 */	stw r3, bad_card_needed@sda21(r13)
/* 8004D960 0004AA40  3C E0 80 25 */	lis r7, "@stringBase0"@ha
/* 8004D964 0004AA44  2C 05 00 00 */	cmpwi r5, 0x0
/* 8004D968 0004AA48  38 E7 3F 10 */	addi r7, r7, "@stringBase0"@l
/* 8004D96C 0004AA4C  90 8D 91 60 */	stw r4, bad_card_available@sda21(r13)
/* 8004D970 0004AA50  38 07 03 68 */	addi r0, r7, 0x368
/* 8004D974 0004AA54  40 82 00 14 */	bne .L_8004D988
/* 8004D978 0004AA58  7C 03 20 00 */	cmpw r3, r4
/* 8004D97C 0004AA5C  40 81 00 0C */	ble .L_8004D988
/* 8004D980 0004AA60  38 07 03 83 */	addi r0, r7, 0x383
/* 8004D984 0004AA64  48 00 00 30 */	b .L_8004D9B4
.L_8004D988:
/* 8004D988 0004AA68  2C 05 00 00 */	cmpwi r5, 0x0
/* 8004D98C 0004AA6C  40 81 00 0C */	ble .L_8004D998
/* 8004D990 0004AA70  7C 03 20 00 */	cmpw r3, r4
/* 8004D994 0004AA74  41 81 00 14 */	bgt .L_8004D9A8
.L_8004D998:
/* 8004D998 0004AA78  2C 05 FF FF */	cmpwi r5, -0x1
/* 8004D99C 0004AA7C  41 82 00 0C */	beq .L_8004D9A8
/* 8004D9A0 0004AA80  7C 03 20 00 */	cmpw r3, r4
/* 8004D9A4 0004AA84  40 81 00 10 */	ble .L_8004D9B4
.L_8004D9A8:
/* 8004D9A8 0004AA88  3C 60 80 25 */	lis r3, "@stringBase0"@ha
/* 8004D9AC 0004AA8C  38 63 3F 10 */	addi r3, r3, "@stringBase0"@l
/* 8004D9B0 0004AA90  38 03 03 A8 */	addi r0, r3, 0x3a8
.L_8004D9B4:
/* 8004D9B4 0004AA94  7C 03 03 78 */	mr r3, r0
/* 8004D9B8 0004AA98  7C C4 33 78 */	mr r4, r6
/* 8004D9BC 0004AA9C  48 00 00 15 */	bl RenderText__FPCcb
/* 8004D9C0 0004AAA0  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8004D9C4 0004AAA4  7C 08 03 A6 */	mtlr r0
/* 8004D9C8 0004AAA8  38 21 00 10 */	addi r1, r1, 0x10
/* 8004D9CC 0004AAAC  4E 80 00 20 */	blr
.endfn render_mem_card_no_space__Fiiib

# RenderText(const char*, bool)
.fn RenderText__FPCcb, global
/* 8004D9D0 0004AAB0  94 21 FF 40 */	stwu r1, -0xc0(r1)
/* 8004D9D4 0004AAB4  7C 08 02 A6 */	mflr r0
/* 8004D9D8 0004AAB8  90 01 00 C4 */	stw r0, 0xc4(r1)
/* 8004D9DC 0004AABC  DB E1 00 B0 */	stfd f31, 0xb0(r1)
/* 8004D9E0 0004AAC0  F3 E1 00 B8 */	psq_st f31, 0xb8(r1), 0, qr0
/* 8004D9E4 0004AAC4  93 E1 00 AC */	stw r31, 0xac(r1)
/* 8004D9E8 0004AAC8  93 C1 00 A8 */	stw r30, 0xa8(r1)
/* 8004D9EC 0004AACC  88 0D 8B 28 */	lbz r0, init$897@sda21(r13)
/* 8004D9F0 0004AAD0  7C 7E 1B 78 */	mr r30, r3
/* 8004D9F4 0004AAD4  7C 9F 23 78 */	mr r31, r4
/* 8004D9F8 0004AAD8  7C 00 07 75 */	extsb. r0, r0
/* 8004D9FC 0004AADC  40 82 00 AC */	bne .L_8004DAA8
/* 8004DA00 0004AAE0  38 60 00 FF */	li r3, 0xff
/* 8004DA04 0004AAE4  38 80 00 E6 */	li r4, 0xe6
/* 8004DA08 0004AAE8  38 A0 00 00 */	li r5, 0x0
/* 8004DA0C 0004AAEC  38 C0 00 FF */	li r6, 0xff
/* 8004DA10 0004AAF0  4B FE 15 D9 */	bl xColorFromRGBA__FUcUcUcUc
/* 8004DA14 0004AAF4  90 61 00 0C */	stw r3, 0xc(r1)
/* 8004DA18 0004AAF8  C0 22 87 B8 */	lfs f1, "@747"@sda21(r2)
/* 8004DA1C 0004AAFC  4B FC A5 A1 */	bl NSCREENY__Ff
/* 8004DA20 0004AB00  FF E0 08 90 */	fmr f31, f1
/* 8004DA24 0004AB04  C0 22 87 B4 */	lfs f1, "@746"@sda21(r2)
/* 8004DA28 0004AB08  4B FC A5 A1 */	bl NSCREENX__Ff
/* 8004DA2C 0004AB0C  FC 40 F8 90 */	fmr f2, f31
/* 8004DA30 0004AB10  3C 60 80 25 */	lis r3, screen_bounds@ha
/* 8004DA34 0004AB14  C0 62 87 BC */	lfs f3, "@748"@sda21(r2)
/* 8004DA38 0004AB18  38 C3 3F 00 */	addi r6, r3, screen_bounds@l
/* 8004DA3C 0004AB1C  38 61 00 10 */	addi r3, r1, 0x10
/* 8004DA40 0004AB20  38 A1 00 0C */	addi r5, r1, 0xc
/* 8004DA44 0004AB24  38 80 00 01 */	li r4, 0x1
/* 8004DA48 0004AB28  4B FC A4 AD */	bl "create__5xfontFUifff10iColor_tagRC13basic_rect<f>"
/* 8004DA4C 0004AB2C  C0 22 87 BC */	lfs f1, "@748"@sda21(r2)
/* 8004DA50 0004AB30  3C 60 80 25 */	lis r3, screen_bounds@ha
/* 8004DA54 0004AB34  38 A3 3F 00 */	addi r5, r3, screen_bounds@l
/* 8004DA58 0004AB38  38 81 00 10 */	addi r4, r1, 0x10
/* 8004DA5C 0004AB3C  FC 40 08 90 */	fmr f2, f1
/* 8004DA60 0004AB40  38 61 00 34 */	addi r3, r1, 0x34
/* 8004DA64 0004AB44  FC 60 08 90 */	fmr f3, f1
/* 8004DA68 0004AB48  38 C0 00 02 */	li r6, 0x2
/* 8004DA6C 0004AB4C  FC 80 08 90 */	fmr f4, f1
/* 8004DA70 0004AB50  4B FC A3 75 */	bl "create__8xtextboxFRC5xfontRC13basic_rect<f>Uiffff"
/* 8004DA74 0004AB54  3C 60 80 29 */	lis r3, tb$895@ha
/* 8004DA78 0004AB58  38 00 00 0D */	li r0, 0xd
/* 8004DA7C 0004AB5C  38 63 A3 10 */	addi r3, r3, tb$895@l
/* 8004DA80 0004AB60  38 81 00 30 */	addi r4, r1, 0x30
/* 8004DA84 0004AB64  38 A3 FF FC */	addi r5, r3, -0x4
/* 8004DA88 0004AB68  7C 09 03 A6 */	mtctr r0
.L_8004DA8C:
/* 8004DA8C 0004AB6C  80 64 00 04 */	lwz r3, 0x4(r4)
/* 8004DA90 0004AB70  84 04 00 08 */	lwzu r0, 0x8(r4)
/* 8004DA94 0004AB74  90 65 00 04 */	stw r3, 0x4(r5)
/* 8004DA98 0004AB78  94 05 00 08 */	stwu r0, 0x8(r5)
/* 8004DA9C 0004AB7C  42 00 FF F0 */	bdnz .L_8004DA8C
/* 8004DAA0 0004AB80  38 00 00 01 */	li r0, 0x1
/* 8004DAA4 0004AB84  98 0D 8B 28 */	stb r0, init$897@sda21(r13)
.L_8004DAA8:
/* 8004DAA8 0004AB88  57 E0 06 3F */	clrlwi. r0, r31, 24
/* 8004DAAC 0004AB8C  3C 60 80 29 */	lis r3, tb$895@ha
/* 8004DAB0 0004AB90  38 63 A3 10 */	addi r3, r3, tb$895@l
/* 8004DAB4 0004AB94  41 82 00 0C */	beq .L_8004DAC0
/* 8004DAB8 0004AB98  7F C4 F3 78 */	mr r4, r30
/* 8004DABC 0004AB9C  48 00 00 10 */	b .L_8004DACC
.L_8004DAC0:
/* 8004DAC0 0004ABA0  3C 80 80 25 */	lis r4, "@stringBase0"@ha
/* 8004DAC4 0004ABA4  38 84 3F 10 */	addi r4, r4, "@stringBase0"@l
/* 8004DAC8 0004ABA8  38 84 03 CB */	addi r4, r4, 0x3cb
.L_8004DACC:
/* 8004DACC 0004ABAC  4B FD 49 FD */	bl set_text__8xtextboxFPCc
/* 8004DAD0 0004ABB0  3C 80 80 29 */	lis r4, tb$895@ha
/* 8004DAD4 0004ABB4  3C 60 80 25 */	lis r3, screen_bounds@ha
/* 8004DAD8 0004ABB8  38 84 A3 10 */	addi r4, r4, tb$895@l
/* 8004DADC 0004ABBC  3B C4 00 24 */	addi r30, r4, 0x24
/* 8004DAE0 0004ABC0  38 83 3F 00 */	addi r4, r3, screen_bounds@l
/* 8004DAE4 0004ABC4  7F C3 F3 78 */	mr r3, r30
/* 8004DAE8 0004ABC8  4B FC A5 59 */	bl "__as__13basic_rect<f>FRC13basic_rect<f>"
/* 8004DAEC 0004ABCC  C0 22 87 C0 */	lfs f1, "@749"@sda21(r2)
/* 8004DAF0 0004ABD0  7F C3 F3 78 */	mr r3, r30
/* 8004DAF4 0004ABD4  48 00 01 05 */	bl "contract__13basic_rect<f>Ff"
/* 8004DAF8 0004ABD8  3C 60 80 29 */	lis r3, tb$895@ha
/* 8004DAFC 0004ABDC  38 80 00 01 */	li r4, 0x1
/* 8004DB00 0004ABE0  38 63 A3 10 */	addi r3, r3, tb$895@l
/* 8004DB04 0004ABE4  48 00 00 7D */	bl yextent__8xtextboxCFb
/* 8004DB08 0004ABE8  3C 60 80 29 */	lis r3, tb$895@ha
/* 8004DB0C 0004ABEC  FC 00 08 18 */	frsp f0, f1
/* 8004DB10 0004ABF0  38 63 A3 10 */	addi r3, r3, tb$895@l
/* 8004DB14 0004ABF4  38 80 00 01 */	li r4, 0x1
/* 8004DB18 0004ABF8  D0 23 00 30 */	stfs f1, 0x30(r3)
/* 8004DB1C 0004ABFC  C0 22 87 C4 */	lfs f1, "@750"@sda21(r2)
/* 8004DB20 0004AC00  EC 01 08 3C */	fnmsubs f0, f1, f0, f1
/* 8004DB24 0004AC04  D0 03 00 28 */	stfs f0, 0x28(r3)
/* 8004DB28 0004AC08  4B FC A2 7D */	bl render__8xtextboxCFb
/* 8004DB2C 0004AC0C  57 E0 06 3F */	clrlwi. r0, r31, 24
/* 8004DB30 0004AC10  40 82 00 30 */	bne .L_8004DB60
/* 8004DB34 0004AC14  38 60 00 00 */	li r3, 0x0
/* 8004DB38 0004AC18  38 80 00 00 */	li r4, 0x0
/* 8004DB3C 0004AC1C  38 A0 00 00 */	li r5, 0x0
/* 8004DB40 0004AC20  38 C0 00 96 */	li r6, 0x96
/* 8004DB44 0004AC24  4B FE 14 A5 */	bl xColorFromRGBA__FUcUcUcUc
/* 8004DB48 0004AC28  3C 80 80 29 */	lis r4, tb$895@ha
/* 8004DB4C 0004AC2C  90 61 00 08 */	stw r3, 0x8(r1)
/* 8004DB50 0004AC30  38 64 A3 10 */	addi r3, r4, tb$895@l
/* 8004DB54 0004AC34  38 81 00 08 */	addi r4, r1, 0x8
/* 8004DB58 0004AC38  38 63 00 14 */	addi r3, r3, 0x14
/* 8004DB5C 0004AC3C  4B FD 82 35 */	bl "render_fill_rect__FRC13basic_rect<f>10iColor_tag"
.L_8004DB60:
/* 8004DB60 0004AC40  E3 E1 00 B8 */	psq_l f31, 0xb8(r1), 0, qr0
/* 8004DB64 0004AC44  80 01 00 C4 */	lwz r0, 0xc4(r1)
/* 8004DB68 0004AC48  CB E1 00 B0 */	lfd f31, 0xb0(r1)
/* 8004DB6C 0004AC4C  83 E1 00 AC */	lwz r31, 0xac(r1)
/* 8004DB70 0004AC50  83 C1 00 A8 */	lwz r30, 0xa8(r1)
/* 8004DB74 0004AC54  7C 08 03 A6 */	mtlr r0
/* 8004DB78 0004AC58  38 21 00 C0 */	addi r1, r1, 0xc0
/* 8004DB7C 0004AC5C  4E 80 00 20 */	blr
.endfn RenderText__FPCcb

# 0x8004DB80 - 0x8004DBF8
.section .text, "ax", unique, 1
.balign 4

# xtextbox::yextent(bool) const
.fn yextent__8xtextboxCFb, weak
/* 8004DB80 0004AC60  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8004DB84 0004AC64  7C 08 02 A6 */	mflr r0
/* 8004DB88 0004AC68  90 01 00 14 */	stw r0, 0x14(r1)
/* 8004DB8C 0004AC6C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8004DB90 0004AC70  7C 7F 1B 78 */	mr r31, r3
/* 8004DB94 0004AC74  4B FD 4A 9D */	bl temp_layout__8xtextboxCFb
/* 8004DB98 0004AC78  7C 64 1B 78 */	mr r4, r3
/* 8004DB9C 0004AC7C  7F E3 FB 78 */	mr r3, r31
/* 8004DBA0 0004AC80  38 A0 00 00 */	li r5, 0x0
/* 8004DBA4 0004AC84  38 C0 FF FF */	li r6, -0x1
/* 8004DBA8 0004AC88  48 00 00 19 */	bl yextent__8xtextboxCFRCQ28xtextbox6layoutii
/* 8004DBAC 0004AC8C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8004DBB0 0004AC90  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8004DBB4 0004AC94  7C 08 03 A6 */	mtlr r0
/* 8004DBB8 0004AC98  38 21 00 10 */	addi r1, r1, 0x10
/* 8004DBBC 0004AC9C  4E 80 00 20 */	blr
.endfn yextent__8xtextboxCFb

# xtextbox::yextent(const xtextbox::layout&, int, int) const
.fn yextent__8xtextboxCFRCQ28xtextbox6layoutii, weak
/* 8004DBC0 0004ACA0  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8004DBC4 0004ACA4  7C 08 02 A6 */	mflr r0
/* 8004DBC8 0004ACA8  7C C7 33 78 */	mr r7, r6
/* 8004DBCC 0004ACAC  90 01 00 14 */	stw r0, 0x14(r1)
/* 8004DBD0 0004ACB0  7C A0 2B 78 */	mr r0, r5
/* 8004DBD4 0004ACB4  7C 85 23 78 */	mr r5, r4
/* 8004DBD8 0004ACB8  38 81 00 08 */	addi r4, r1, 0x8
/* 8004DBDC 0004ACBC  C0 22 87 C8 */	lfs f1, "@758"@sda21(r2)
/* 8004DBE0 0004ACC0  7C 06 03 78 */	mr r6, r0
/* 8004DBE4 0004ACC4  4B FD 4C F9 */	bl yextent__8xtextboxCFfRiRCQ28xtextbox6layoutii
/* 8004DBE8 0004ACC8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8004DBEC 0004ACCC  7C 08 03 A6 */	mtlr r0
/* 8004DBF0 0004ACD0  38 21 00 10 */	addi r1, r1, 0x10
/* 8004DBF4 0004ACD4  4E 80 00 20 */	blr
.endfn yextent__8xtextboxCFRCQ28xtextbox6layoutii

# 0x8004DBF8 - 0x8004DC48
.section .text, "ax", unique, 2
.balign 4

# basic_rect<float>::contract(float)
.fn "contract__13basic_rect<f>Ff", weak
/* 8004DBF8 0004ACD8  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8004DBFC 0004ACDC  7C 08 02 A6 */	mflr r0
/* 8004DC00 0004ACE0  FC 20 08 50 */	fneg f1, f1
/* 8004DC04 0004ACE4  90 01 00 14 */	stw r0, 0x14(r1)
/* 8004DC08 0004ACE8  48 00 00 15 */	bl "expand__13basic_rect<f>Ff"
/* 8004DC0C 0004ACEC  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8004DC10 0004ACF0  7C 08 03 A6 */	mtlr r0
/* 8004DC14 0004ACF4  38 21 00 10 */	addi r1, r1, 0x10
/* 8004DC18 0004ACF8  4E 80 00 20 */	blr
.endfn "contract__13basic_rect<f>Ff"

# basic_rect<float>::expand(float)
.fn "expand__13basic_rect<f>Ff", weak
/* 8004DC1C 0004ACFC  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8004DC20 0004AD00  7C 08 02 A6 */	mflr r0
/* 8004DC24 0004AD04  FC 40 08 90 */	fmr f2, f1
/* 8004DC28 0004AD08  FC 60 08 90 */	fmr f3, f1
/* 8004DC2C 0004AD0C  90 01 00 14 */	stw r0, 0x14(r1)
/* 8004DC30 0004AD10  FC 80 08 90 */	fmr f4, f1
/* 8004DC34 0004AD14  4B FC A3 D1 */	bl "expand__13basic_rect<f>Fffff"
/* 8004DC38 0004AD18  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8004DC3C 0004AD1C  7C 08 03 A6 */	mtlr r0
/* 8004DC40 0004AD20  38 21 00 10 */	addi r1, r1, 0x10
/* 8004DC44 0004AD24  4E 80 00 20 */	blr
.endfn "expand__13basic_rect<f>Ff"

# 0x80253F00 - 0x802542E0
.rodata
.balign 8

.obj screen_bounds, local
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x3F800000
	.4byte 0x3F800000
.endobj screen_bounds

.obj "@stringBase0", local
	.4byte 0x54686520
	.4byte 0x436F6E74
	.4byte 0x726F6C6C
	.4byte 0x65722069
	.4byte 0x6E20436F
	.4byte 0x6E74726F
	.4byte 0x6C6C6572
	.4byte 0x20536F63
	.4byte 0x6B657420
	.4byte 0x31206861
	.4byte 0x73206265
	.4byte 0x656E2072
	.4byte 0x656D6F76
	.4byte 0x65642E20
	.4byte 0x5265636F
	.4byte 0x6E6E6563
	.4byte 0x74207468
	.4byte 0x6520436F
	.4byte 0x6E74726F
	.4byte 0x6C6C6572
	.4byte 0x20746F20
	.4byte 0x636F6E74
	.4byte 0x696E7565
	.4byte 0x20776974
	.4byte 0x68207468
	.4byte 0x65206761
	.4byte 0x6D652E00
	.4byte 0x54686520
	.4byte 0x436F6E74
	.4byte 0x726F6C6C
	.4byte 0x65722069
	.4byte 0x6E20436F
	.4byte 0x6E74726F
	.4byte 0x6C6C6572
	.4byte 0x20536F63
	.4byte 0x6B657420
	.4byte 0x31206973
	.4byte 0x20616E20
	.4byte 0x756E6B6E
	.4byte 0x6F776E20
	.4byte 0x74797065
	.4byte 0x2E20436F
	.4byte 0x6E6E6563
	.4byte 0x74206120
	.4byte 0x7374616E
	.4byte 0x64617264
	.4byte 0x20436F6E
	.4byte 0x74726F6C
	.4byte 0x6C657220
	.4byte 0x746F2063
	.4byte 0x6F6E7469
	.4byte 0x6E756520
	.4byte 0x77697468
	.4byte 0x20746865
	.4byte 0x2067616D
	.4byte 0x652E0050
	.4byte 0x6C656173
	.4byte 0x65207761
	.4byte 0x69742E2E
	.4byte 0x2E204368
	.4byte 0x65636B69
	.4byte 0x6E672066
	.4byte 0x6F722074
	.4byte 0x68652027
	.4byte 0x53706F6E
	.4byte 0x6765426F
	.4byte 0x62205371
	.4byte 0x75617265
	.4byte 0x50616E74
	.4byte 0x733A2042
	.4byte 0x6174746C
	.4byte 0x6520666F
	.4byte 0x72204269
	.4byte 0x6B696E69
	.4byte 0x20426F74
	.4byte 0x746F6D27
	.4byte 0x2047616D
	.4byte 0x65204469
	.4byte 0x73632E00
	.4byte 0x54686520
	.4byte 0x44697363
	.4byte 0x20436F76
	.4byte 0x65722069
	.4byte 0x73206F70
	.4byte 0x656E2E20
	.4byte 0x49662079
	.4byte 0x6F752077
	.4byte 0x616E7420
	.4byte 0x746F2063
	.4byte 0x6F6E7469
	.4byte 0x6E756520
	.4byte 0x74686520
	.4byte 0x67616D65
	.4byte 0x2C20706C
	.4byte 0x65617365
	.4byte 0x20636C6F
	.4byte 0x73652074
	.4byte 0x68652044
	.4byte 0x69736320
	.4byte 0x436F7665
	.4byte 0x722E0050
	.4byte 0x6C656173
	.4byte 0x6520696E
	.4byte 0x73657274
	.4byte 0x20746865
	.4byte 0x20275370
	.4byte 0x6F6E6765
	.4byte 0x426F6220
	.4byte 0x53717561
	.4byte 0x72655061
	.4byte 0x6E74733A
	.4byte 0x20426174
	.4byte 0x746C6520
	.4byte 0x666F7220
	.4byte 0x42696B69
	.4byte 0x6E692042
	.4byte 0x6F74746F
	.4byte 0x6D272047
	.4byte 0x616D6520
	.4byte 0x44697363
	.4byte 0x2E005468
	.4byte 0x69732069
	.4byte 0x73206E6F
	.4byte 0x74207468
	.4byte 0x65202753
	.4byte 0x706F6E67
	.4byte 0x65426F62
	.4byte 0x20537175
	.4byte 0x61726550
	.4byte 0x616E7473
	.4byte 0x3A204261
	.4byte 0x74746C65
	.4byte 0x20666F72
	.4byte 0x2042696B
	.4byte 0x696E6920
	.4byte 0x426F7474
	.4byte 0x6F6D2720
	.4byte 0x47616D65
	.4byte 0x20446973
	.4byte 0x632E2050
	.4byte 0x6C656173
	.4byte 0x6520696E
	.4byte 0x73657274
	.4byte 0x20746865
	.4byte 0x20275370
	.4byte 0x6F6E6765
	.4byte 0x426F6220
	.4byte 0x53717561
	.4byte 0x72655061
	.4byte 0x6E74733A
	.4byte 0x20426174
	.4byte 0x746C6520
	.4byte 0x666F7220
	.4byte 0x42696B69
	.4byte 0x6E692042
	.4byte 0x6F74746F
	.4byte 0x6D272047
	.4byte 0x616D6520
	.4byte 0x44697363
	.4byte 0x2E005468
	.4byte 0x65204761
	.4byte 0x6D652044
	.4byte 0x69736320
	.4byte 0x636F756C
	.4byte 0x64206E6F
	.4byte 0x74206265
	.4byte 0x20726561
	.4byte 0x642E2050
	.4byte 0x6C656173
	.4byte 0x65207265
	.4byte 0x61642074
	.4byte 0x6865204E
	.4byte 0x696E7465
	.4byte 0x6E646F20
	.4byte 0x47616D65
	.4byte 0x43756265
	.4byte 0x9920496E
	.4byte 0x73747275
	.4byte 0x6374696F
	.4byte 0x6E20426F
	.4byte 0x6F6B6C65
	.4byte 0x7420666F
	.4byte 0x72206D6F
	.4byte 0x72652069
	.4byte 0x6E666F72
	.4byte 0x6D617469
	.4byte 0x6F6E2E00
	.4byte 0x416E2065
	.4byte 0x72726F72
	.4byte 0x20686173
	.4byte 0x206F6363
	.4byte 0x75727265
	.4byte 0x642E2054
	.4byte 0x75726E20
	.4byte 0x74686520
	.4byte 0x706F7765
	.4byte 0x72206F66
	.4byte 0x6620616E
	.4byte 0x64207265
	.4byte 0x66657220
	.4byte 0x746F2074
	.4byte 0x6865204E
	.4byte 0x696E7465
	.4byte 0x6E646F20
	.4byte 0x47616D65
	.4byte 0x43756265
	.4byte 0x9920496E
	.4byte 0x73747275
	.4byte 0x6374696F
	.4byte 0x6E20426F
	.4byte 0x6F6B6C65
	.4byte 0x7420666F
	.4byte 0x72206675
	.4byte 0x72746865
	.4byte 0x7220696E
	.4byte 0x73747275
	.4byte 0x6374696F
	.4byte 0x6E732E00
	.4byte 0x7B693A74
	.4byte 0x6578745F
	.4byte 0x6D656D5F
	.4byte 0x63617264
	.4byte 0x5F6E6F5F
	.4byte 0x73706163
	.4byte 0x657D007B
	.4byte 0x693A7465
	.4byte 0x78745F6D
	.4byte 0x656D5F63
	.4byte 0x6172645F
	.4byte 0x6E6F5F73
	.4byte 0x70616365
	.4byte 0x5F6F7665
	.4byte 0x72777269
	.4byte 0x74657D00
	.4byte 0x7B693A74
	.4byte 0x6578745F
	.4byte 0x6D656D5F
	.4byte 0x63617264
	.4byte 0x5F6E6F5F
	.4byte 0x73706163
	.4byte 0x655F6E6F
	.4byte 0x5F736176
	.4byte 0x657D0000
.endobj "@stringBase0"
	.4byte 0x00000000

# 0x8028A2A8 - 0x8028A378
.data
.balign 8

.obj tb$731, local
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
.endobj tb$731

.obj tb$895, local
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
.endobj tb$895

# 0x803CB418 - 0x803CB430
.section .sbss, "wa", @nobits
.balign 8

.obj gTrcDisk, global
	.skip 0x8
.endobj gTrcDisk

.obj init$733, local
	.skip 0x1
.endobj init$733
	.skip 0x3

.obj message_text, local
	.skip 0x4
.endobj message_text

.obj init$897, local
	.skip 0x1
.endobj init$897
	.skip 0x7

# 0x803CD130 - 0x803CD150
.section .sdata2, "a"
.balign 8

.obj yellow, local
	.4byte 0xFFE600FF
.endobj yellow

.obj "@746", local
	.4byte 0x41980000
.endobj "@746"

.obj "@747", local
	.4byte 0x41B00000
.endobj "@747"

.obj "@748", local
	.4byte 0x00000000
.endobj "@748"

.obj "@749", local
	.4byte 0x3DCCCCCD
.endobj "@749"

.obj "@750", local
	.4byte 0x3F000000
.endobj "@750"

.obj "@758", local
	.4byte 0x7E967699
.endobj "@758"
	.4byte 0x00000000
