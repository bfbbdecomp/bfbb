.include "macros.inc"
.file "zTalkBox.cpp"

# 0x801305FC - 0x80133A30
.text
.balign 4

# @unnamed@zTalkBox_cpp@::speak_stop()
.fn "speak_stop__22@unnamed@zTalkBox_cpp@Fv", local
/* 801305FC 0012D6DC  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80130600 0012D6E0  7C 08 02 A6 */	mflr r0
/* 80130604 0012D6E4  3C 60 80 32 */	lis r3, "shared__22@unnamed@zTalkBox_cpp@"@ha
/* 80130608 0012D6E8  90 01 00 14 */	stw r0, 0x14(r1)
/* 8013060C 0012D6EC  38 63 B3 20 */	addi r3, r3, "shared__22@unnamed@zTalkBox_cpp@"@l
/* 80130610 0012D6F0  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80130614 0012D6F4  3F E3 00 01 */	addis r31, r3, 0x1
/* 80130618 0012D6F8  80 7F 8E 94 */	lwz r3, -0x716c(r31)
/* 8013061C 0012D6FC  28 03 00 00 */	cmplwi r3, 0x0
/* 80130620 0012D700  41 82 00 1C */	beq .L_8013063C
/* 80130624 0012D704  81 83 01 B8 */	lwz r12, 0x1b8(r3)
/* 80130628 0012D708  81 8C 00 AC */	lwz r12, 0xac(r12)
/* 8013062C 0012D70C  7D 89 03 A6 */	mtctr r12
/* 80130630 0012D710  4E 80 04 21 */	bctrl
/* 80130634 0012D714  38 00 00 00 */	li r0, 0x0
/* 80130638 0012D718  90 1F 8E 94 */	stw r0, -0x716c(r31)
.L_8013063C:
/* 8013063C 0012D71C  3C 60 80 32 */	lis r3, "shared__22@unnamed@zTalkBox_cpp@"@ha
/* 80130640 0012D720  38 63 B3 20 */	addi r3, r3, "shared__22@unnamed@zTalkBox_cpp@"@l
/* 80130644 0012D724  3F E3 00 01 */	addis r31, r3, 0x1
/* 80130648 0012D728  80 1F 8E 98 */	lwz r0, -0x7168(r31)
/* 8013064C 0012D72C  28 00 00 00 */	cmplwi r0, 0x0
/* 80130650 0012D730  41 82 00 10 */	beq .L_80130660
/* 80130654 0012D734  4B F3 B1 39 */	bl zEntPlayerSpeakStop__Fv
/* 80130658 0012D738  38 00 00 00 */	li r0, 0x0
/* 8013065C 0012D73C  90 1F 8E 98 */	stw r0, -0x7168(r31)
.L_80130660:
/* 80130660 0012D740  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80130664 0012D744  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80130668 0012D748  7C 08 03 A6 */	mtlr r0
/* 8013066C 0012D74C  38 21 00 10 */	addi r1, r1, 0x10
/* 80130670 0012D750  4E 80 00 20 */	blr
.endfn "speak_stop__22@unnamed@zTalkBox_cpp@Fv"

# @unnamed@zTalkBox_cpp@::trigger(unsigned int)
.fn "trigger__22@unnamed@zTalkBox_cpp@FUi", local
/* 80130674 0012D754  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80130678 0012D758  7C 08 02 A6 */	mflr r0
/* 8013067C 0012D75C  3C 80 80 32 */	lis r4, "shared__22@unnamed@zTalkBox_cpp@"@ha
/* 80130680 0012D760  90 01 00 14 */	stw r0, 0x14(r1)
/* 80130684 0012D764  38 84 B3 20 */	addi r4, r4, "shared__22@unnamed@zTalkBox_cpp@"@l
/* 80130688 0012D768  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8013068C 0012D76C  93 C1 00 08 */	stw r30, 0x8(r1)
/* 80130690 0012D770  7C 7E 1B 78 */	mr r30, r3
/* 80130694 0012D774  3C 64 00 01 */	addis r3, r4, 0x1
/* 80130698 0012D778  88 03 8D 7A */	lbz r0, -0x7286(r3)
/* 8013069C 0012D77C  28 00 00 00 */	cmplwi r0, 0x0
/* 801306A0 0012D780  41 82 00 30 */	beq .L_801306D0
/* 801306A4 0012D784  3B E3 8D 80 */	addi r31, r3, -0x7280
/* 801306A8 0012D788  7F E3 FB 78 */	mr r3, r31
/* 801306AC 0012D78C  48 00 34 BD */	bl "push_back__56fixed_queue<Q222@unnamed@zTalkBox_cpp@12trigger_pair,32>Fv"
/* 801306B0 0012D790  7F E3 FB 78 */	mr r3, r31
/* 801306B4 0012D794  48 00 33 7D */	bl "back__56fixed_queue<Q222@unnamed@zTalkBox_cpp@12trigger_pair,32>Fv"
/* 801306B8 0012D798  3C 80 80 32 */	lis r4, "shared__22@unnamed@zTalkBox_cpp@"@ha
/* 801306BC 0012D79C  38 84 B3 20 */	addi r4, r4, "shared__22@unnamed@zTalkBox_cpp@"@l
/* 801306C0 0012D7A0  80 04 00 08 */	lwz r0, 0x8(r4)
/* 801306C4 0012D7A4  90 03 00 00 */	stw r0, 0x0(r3)
/* 801306C8 0012D7A8  93 C3 00 04 */	stw r30, 0x4(r3)
/* 801306CC 0012D7AC  48 00 00 14 */	b .L_801306E0
.L_801306D0:
/* 801306D0 0012D7B0  80 64 00 08 */	lwz r3, 0x8(r4)
/* 801306D4 0012D7B4  7F C5 F3 78 */	mr r5, r30
/* 801306D8 0012D7B8  7C 64 1B 78 */	mr r4, r3
/* 801306DC 0012D7BC  4B EE F0 05 */	bl zEntEvent__FP5xBaseP5xBaseUi
.L_801306E0:
/* 801306E0 0012D7C0  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801306E4 0012D7C4  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 801306E8 0012D7C8  83 C1 00 08 */	lwz r30, 0x8(r1)
/* 801306EC 0012D7CC  7C 08 03 A6 */	mtlr r0
/* 801306F0 0012D7D0  38 21 00 10 */	addi r1, r1, 0x10
/* 801306F4 0012D7D4  4E 80 00 20 */	blr
.endfn "trigger__22@unnamed@zTalkBox_cpp@FUi"

# @unnamed@zTalkBox_cpp@::trigger_pads(unsigned int)
.fn "trigger_pads__22@unnamed@zTalkBox_cpp@FUi", local
/* 801306F8 0012D7D8  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801306FC 0012D7DC  7C 08 02 A6 */	mflr r0
/* 80130700 0012D7E0  90 01 00 14 */	stw r0, 0x14(r1)
/* 80130704 0012D7E4  54 60 06 F7 */	rlwinm. r0, r3, 0, 27, 27
/* 80130708 0012D7E8  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8013070C 0012D7EC  7C 7F 1B 78 */	mr r31, r3
/* 80130710 0012D7F0  41 82 00 0C */	beq .L_8013071C
/* 80130714 0012D7F4  38 60 00 49 */	li r3, 0x49
/* 80130718 0012D7F8  4B FF FF 5D */	bl "trigger__22@unnamed@zTalkBox_cpp@FUi"
.L_8013071C:
/* 8013071C 0012D7FC  57 E0 06 73 */	rlwinm. r0, r31, 0, 25, 25
/* 80130720 0012D800  41 82 00 0C */	beq .L_8013072C
/* 80130724 0012D804  38 60 00 4A */	li r3, 0x4a
/* 80130728 0012D808  4B FF FF 4D */	bl "trigger__22@unnamed@zTalkBox_cpp@FUi"
.L_8013072C:
/* 8013072C 0012D80C  57 E0 06 31 */	rlwinm. r0, r31, 0, 24, 24
/* 80130730 0012D810  41 82 00 0C */	beq .L_8013073C
/* 80130734 0012D814  38 60 00 4C */	li r3, 0x4c
/* 80130738 0012D818  4B FF FF 3D */	bl "trigger__22@unnamed@zTalkBox_cpp@FUi"
.L_8013073C:
/* 8013073C 0012D81C  57 E0 06 B5 */	rlwinm. r0, r31, 0, 26, 26
/* 80130740 0012D820  41 82 00 0C */	beq .L_8013074C
/* 80130744 0012D824  38 60 00 4B */	li r3, 0x4b
/* 80130748 0012D828  4B FF FF 2D */	bl "trigger__22@unnamed@zTalkBox_cpp@FUi"
.L_8013074C:
/* 8013074C 0012D82C  57 E0 07 FF */	clrlwi. r0, r31, 31
/* 80130750 0012D830  41 82 00 0C */	beq .L_8013075C
/* 80130754 0012D834  38 60 00 47 */	li r3, 0x47
/* 80130758 0012D838  4B FF FF 1D */	bl "trigger__22@unnamed@zTalkBox_cpp@FUi"
.L_8013075C:
/* 8013075C 0012D83C  57 E0 07 BD */	rlwinm. r0, r31, 0, 30, 30
/* 80130760 0012D840  41 82 00 0C */	beq .L_8013076C
/* 80130764 0012D844  38 60 00 48 */	li r3, 0x48
/* 80130768 0012D848  4B FF FF 0D */	bl "trigger__22@unnamed@zTalkBox_cpp@FUi"
.L_8013076C:
/* 8013076C 0012D84C  57 E0 04 E7 */	rlwinm. r0, r31, 0, 19, 19
/* 80130770 0012D850  41 82 00 0C */	beq .L_8013077C
/* 80130774 0012D854  38 60 00 45 */	li r3, 0x45
/* 80130778 0012D858  4B FF FE FD */	bl "trigger__22@unnamed@zTalkBox_cpp@FUi"
.L_8013077C:
/* 8013077C 0012D85C  57 E0 04 A5 */	rlwinm. r0, r31, 0, 18, 18
/* 80130780 0012D860  41 82 00 0C */	beq .L_8013078C
/* 80130784 0012D864  38 60 00 46 */	li r3, 0x46
/* 80130788 0012D868  4B FF FE ED */	bl "trigger__22@unnamed@zTalkBox_cpp@FUi"
.L_8013078C:
/* 8013078C 0012D86C  57 E0 05 EF */	rlwinm. r0, r31, 0, 23, 23
/* 80130790 0012D870  41 82 00 0C */	beq .L_8013079C
/* 80130794 0012D874  38 60 00 43 */	li r3, 0x43
/* 80130798 0012D878  4B FF FE DD */	bl "trigger__22@unnamed@zTalkBox_cpp@FUi"
.L_8013079C:
/* 8013079C 0012D87C  57 E0 05 AD */	rlwinm. r0, r31, 0, 22, 22
/* 801307A0 0012D880  41 82 00 0C */	beq .L_801307AC
/* 801307A4 0012D884  38 60 00 44 */	li r3, 0x44
/* 801307A8 0012D888  4B FF FE CD */	bl "trigger__22@unnamed@zTalkBox_cpp@FUi"
.L_801307AC:
/* 801307AC 0012D88C  57 E0 03 DF */	rlwinm. r0, r31, 0, 15, 15
/* 801307B0 0012D890  41 82 00 0C */	beq .L_801307BC
/* 801307B4 0012D894  38 60 00 3F */	li r3, 0x3f
/* 801307B8 0012D898  4B FF FE BD */	bl "trigger__22@unnamed@zTalkBox_cpp@FUi"
.L_801307BC:
/* 801307BC 0012D89C  57 E0 03 9D */	rlwinm. r0, r31, 0, 14, 14
/* 801307C0 0012D8A0  41 82 00 0C */	beq .L_801307CC
/* 801307C4 0012D8A4  38 60 00 41 */	li r3, 0x41
/* 801307C8 0012D8A8  4B FF FE AD */	bl "trigger__22@unnamed@zTalkBox_cpp@FUi"
.L_801307CC:
/* 801307CC 0012D8AC  57 E0 03 5B */	rlwinm. r0, r31, 0, 13, 13
/* 801307D0 0012D8B0  41 82 00 0C */	beq .L_801307DC
/* 801307D4 0012D8B4  38 60 00 42 */	li r3, 0x42
/* 801307D8 0012D8B8  4B FF FE 9D */	bl "trigger__22@unnamed@zTalkBox_cpp@FUi"
.L_801307DC:
/* 801307DC 0012D8BC  57 E0 03 19 */	rlwinm. r0, r31, 0, 12, 12
/* 801307E0 0012D8C0  41 82 00 0C */	beq .L_801307EC
/* 801307E4 0012D8C4  38 60 00 40 */	li r3, 0x40
/* 801307E8 0012D8C8  4B FF FE 8D */	bl "trigger__22@unnamed@zTalkBox_cpp@FUi"
.L_801307EC:
/* 801307EC 0012D8CC  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801307F0 0012D8D0  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 801307F4 0012D8D4  7C 08 03 A6 */	mtlr r0
/* 801307F8 0012D8D8  38 21 00 10 */	addi r1, r1, 0x10
/* 801307FC 0012D8DC  4E 80 00 20 */	blr
.endfn "trigger_pads__22@unnamed@zTalkBox_cpp@FUi"

# @unnamed@zTalkBox_cpp@::flush_triggered()
.fn "flush_triggered__22@unnamed@zTalkBox_cpp@Fv", local
/* 80130800 0012D8E0  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 80130804 0012D8E4  7C 08 02 A6 */	mflr r0
/* 80130808 0012D8E8  3C 60 80 32 */	lis r3, "shared__22@unnamed@zTalkBox_cpp@"@ha
/* 8013080C 0012D8EC  90 01 00 24 */	stw r0, 0x24(r1)
/* 80130810 0012D8F0  38 63 B3 20 */	addi r3, r3, "shared__22@unnamed@zTalkBox_cpp@"@l
/* 80130814 0012D8F4  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 80130818 0012D8F8  3F E3 00 01 */	addis r31, r3, 0x1
/* 8013081C 0012D8FC  3B FF 8D 80 */	addi r31, r31, -0x7280
/* 80130820 0012D900  48 00 00 34 */	b .L_80130854
.L_80130824:
/* 80130824 0012D904  7F E3 FB 78 */	mr r3, r31
/* 80130828 0012D908  48 00 33 A9 */	bl "front__56fixed_queue<Q222@unnamed@zTalkBox_cpp@12trigger_pair,32>Fv"
/* 8013082C 0012D90C  80 83 00 00 */	lwz r4, 0x0(r3)
/* 80130830 0012D910  80 03 00 04 */	lwz r0, 0x4(r3)
/* 80130834 0012D914  7F E3 FB 78 */	mr r3, r31
/* 80130838 0012D918  90 81 00 08 */	stw r4, 0x8(r1)
/* 8013083C 0012D91C  90 01 00 0C */	stw r0, 0xc(r1)
/* 80130840 0012D920  48 00 33 69 */	bl "pop_front__56fixed_queue<Q222@unnamed@zTalkBox_cpp@12trigger_pair,32>Fv"
/* 80130844 0012D924  80 61 00 08 */	lwz r3, 0x8(r1)
/* 80130848 0012D928  80 A1 00 0C */	lwz r5, 0xc(r1)
/* 8013084C 0012D92C  7C 64 1B 78 */	mr r4, r3
/* 80130850 0012D930  4B EE EE 91 */	bl zEntEvent__FP5xBaseP5xBaseUi
.L_80130854:
/* 80130854 0012D934  7F E3 FB 78 */	mr r3, r31
/* 80130858 0012D938  48 00 33 39 */	bl "empty__56fixed_queue<Q222@unnamed@zTalkBox_cpp@12trigger_pair,32>CFv"
/* 8013085C 0012D93C  54 60 06 3F */	clrlwi. r0, r3, 24
/* 80130860 0012D940  41 82 FF C4 */	beq .L_80130824
/* 80130864 0012D944  80 01 00 24 */	lwz r0, 0x24(r1)
/* 80130868 0012D948  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 8013086C 0012D94C  7C 08 03 A6 */	mtlr r0
/* 80130870 0012D950  38 21 00 20 */	addi r1, r1, 0x20
/* 80130874 0012D954  4E 80 00 20 */	blr
.endfn "flush_triggered__22@unnamed@zTalkBox_cpp@Fv"

# @unnamed@zTalkBox_cpp@::read_bool(const substr&, bool)
.fn "read_bool__22@unnamed@zTalkBox_cpp@FRC6substrb", local
/* 80130878 0012D958  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 8013087C 0012D95C  7C 08 02 A6 */	mflr r0
/* 80130880 0012D960  90 01 00 24 */	stw r0, 0x24(r1)
/* 80130884 0012D964  54 80 06 3F */	clrlwi. r0, r4, 24
/* 80130888 0012D968  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 8013088C 0012D96C  93 C1 00 18 */	stw r30, 0x18(r1)
/* 80130890 0012D970  93 A1 00 14 */	stw r29, 0x14(r1)
/* 80130894 0012D974  7C 7D 1B 78 */	mr r29, r3
/* 80130898 0012D978  41 82 00 44 */	beq .L_801308DC
/* 8013089C 0012D97C  3C 60 80 27 */	lis r3, negative$940@ha
/* 801308A0 0012D980  3B C0 00 00 */	li r30, 0x0
/* 801308A4 0012D984  3B E3 C8 A0 */	addi r31, r3, negative$940@l
.L_801308A8:
/* 801308A8 0012D988  7F A3 EB 78 */	mr r3, r29
/* 801308AC 0012D98C  7F E4 FB 78 */	mr r4, r31
/* 801308B0 0012D990  4B F1 C0 85 */	bl icompare__FRC6substrRC6substr
/* 801308B4 0012D994  2C 03 00 00 */	cmpwi r3, 0x0
/* 801308B8 0012D998  40 82 00 0C */	bne .L_801308C4
/* 801308BC 0012D99C  38 60 00 00 */	li r3, 0x0
/* 801308C0 0012D9A0  48 00 00 58 */	b .L_80130918
.L_801308C4:
/* 801308C4 0012D9A4  3B DE 00 01 */	addi r30, r30, 0x1
/* 801308C8 0012D9A8  3B FF 00 08 */	addi r31, r31, 0x8
/* 801308CC 0012D9AC  28 1E 00 06 */	cmplwi r30, 0x6
/* 801308D0 0012D9B0  41 80 FF D8 */	blt .L_801308A8
/* 801308D4 0012D9B4  38 60 00 01 */	li r3, 0x1
/* 801308D8 0012D9B8  48 00 00 40 */	b .L_80130918
.L_801308DC:
/* 801308DC 0012D9BC  3C 60 80 27 */	lis r3, positive$938@ha
/* 801308E0 0012D9C0  3B C0 00 00 */	li r30, 0x0
/* 801308E4 0012D9C4  3B E3 C8 70 */	addi r31, r3, positive$938@l
.L_801308E8:
/* 801308E8 0012D9C8  7F A3 EB 78 */	mr r3, r29
/* 801308EC 0012D9CC  7F E4 FB 78 */	mr r4, r31
/* 801308F0 0012D9D0  4B F1 C0 45 */	bl icompare__FRC6substrRC6substr
/* 801308F4 0012D9D4  2C 03 00 00 */	cmpwi r3, 0x0
/* 801308F8 0012D9D8  40 82 00 0C */	bne .L_80130904
/* 801308FC 0012D9DC  38 60 00 01 */	li r3, 0x1
/* 80130900 0012D9E0  48 00 00 18 */	b .L_80130918
.L_80130904:
/* 80130904 0012D9E4  3B DE 00 01 */	addi r30, r30, 0x1
/* 80130908 0012D9E8  3B FF 00 08 */	addi r31, r31, 0x8
/* 8013090C 0012D9EC  28 1E 00 06 */	cmplwi r30, 0x6
/* 80130910 0012D9F0  41 80 FF D8 */	blt .L_801308E8
/* 80130914 0012D9F4  38 60 00 00 */	li r3, 0x0
.L_80130918:
/* 80130918 0012D9F8  80 01 00 24 */	lwz r0, 0x24(r1)
/* 8013091C 0012D9FC  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 80130920 0012DA00  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 80130924 0012DA04  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 80130928 0012DA08  7C 08 03 A6 */	mtlr r0
/* 8013092C 0012DA0C  38 21 00 20 */	addi r1, r1, 0x20
/* 80130930 0012DA10  4E 80 00 20 */	blr
.endfn "read_bool__22@unnamed@zTalkBox_cpp@FRC6substrb"

# @unnamed@zTalkBox_cpp@::reset_auto_wait()
.fn "reset_auto_wait__22@unnamed@zTalkBox_cpp@Fv", local
/* 80130934 0012DA14  3C 60 80 32 */	lis r3, "shared__22@unnamed@zTalkBox_cpp@"@ha
/* 80130938 0012DA18  38 00 00 00 */	li r0, 0x0
/* 8013093C 0012DA1C  38 63 B3 20 */	addi r3, r3, "shared__22@unnamed@zTalkBox_cpp@"@l
/* 80130940 0012DA20  80 83 00 08 */	lwz r4, 0x8(r3)
/* 80130944 0012DA24  3C A3 00 01 */	addis r5, r3, 0x1
/* 80130948 0012DA28  88 65 8D 38 */	lbz r3, -0x72c8(r5)
/* 8013094C 0012DA2C  80 C4 00 14 */	lwz r6, 0x14(r4)
/* 80130950 0012DA30  88 86 00 28 */	lbz r4, 0x28(r6)
/* 80130954 0012DA34  50 83 3E 30 */	rlwimi r3, r4, 7, 24, 24
/* 80130958 0012DA38  98 65 8D 38 */	stb r3, -0x72c8(r5)
/* 8013095C 0012DA3C  88 86 00 29 */	lbz r4, 0x29(r6)
/* 80130960 0012DA40  88 65 8D 38 */	lbz r3, -0x72c8(r5)
/* 80130964 0012DA44  50 83 36 72 */	rlwimi r3, r4, 6, 25, 25
/* 80130968 0012DA48  98 65 8D 38 */	stb r3, -0x72c8(r5)
/* 8013096C 0012DA4C  88 86 00 2A */	lbz r4, 0x2a(r6)
/* 80130970 0012DA50  88 65 8D 38 */	lbz r3, -0x72c8(r5)
/* 80130974 0012DA54  50 83 2E B4 */	rlwimi r3, r4, 5, 26, 26
/* 80130978 0012DA58  98 65 8D 38 */	stb r3, -0x72c8(r5)
/* 8013097C 0012DA5C  88 86 00 2B */	lbz r4, 0x2b(r6)
/* 80130980 0012DA60  88 65 8D 38 */	lbz r3, -0x72c8(r5)
/* 80130984 0012DA64  50 83 26 F6 */	rlwimi r3, r4, 4, 27, 27
/* 80130988 0012DA68  98 65 8D 38 */	stb r3, -0x72c8(r5)
/* 8013098C 0012DA6C  C0 06 00 2C */	lfs f0, 0x2c(r6)
/* 80130990 0012DA70  D0 05 8D 3C */	stfs f0, -0x72c4(r5)
/* 80130994 0012DA74  98 05 8D 3A */	stb r0, -0x72c6(r5)
/* 80130998 0012DA78  80 66 00 30 */	lwz r3, 0x30(r6)
/* 8013099C 0012DA7C  2C 03 00 00 */	cmpwi r3, 0x0
/* 801309A0 0012DA80  40 81 00 0C */	ble .L_801309AC
/* 801309A4 0012DA84  2C 03 00 20 */	cmpwi r3, 0x20
/* 801309A8 0012DA88  41 80 00 1C */	blt .L_801309C4
.L_801309AC:
/* 801309AC 0012DA8C  3C 60 80 32 */	lis r3, "shared__22@unnamed@zTalkBox_cpp@"@ha
/* 801309B0 0012DA90  38 00 FF FF */	li r0, -0x1
/* 801309B4 0012DA94  38 63 B3 20 */	addi r3, r3, "shared__22@unnamed@zTalkBox_cpp@"@l
/* 801309B8 0012DA98  3C 63 00 01 */	addis r3, r3, 0x1
/* 801309BC 0012DA9C  90 03 8D 40 */	stw r0, -0x72c0(r3)
/* 801309C0 0012DAA0  48 00 00 10 */	b .L_801309D0
.L_801309C4:
/* 801309C4 0012DAA4  38 00 00 01 */	li r0, 0x1
/* 801309C8 0012DAA8  7C 00 18 30 */	slw r0, r0, r3
/* 801309CC 0012DAAC  90 05 8D 40 */	stw r0, -0x72c0(r5)
.L_801309D0:
/* 801309D0 0012DAB0  3C 60 80 32 */	lis r3, "shared__22@unnamed@zTalkBox_cpp@"@ha
/* 801309D4 0012DAB4  38 00 00 00 */	li r0, 0x0
/* 801309D8 0012DAB8  38 63 B3 20 */	addi r3, r3, "shared__22@unnamed@zTalkBox_cpp@"@l
/* 801309DC 0012DABC  3C 63 00 01 */	addis r3, r3, 0x1
/* 801309E0 0012DAC0  90 03 8D 44 */	stw r0, -0x72bc(r3)
/* 801309E4 0012DAC4  4E 80 00 20 */	blr
.endfn "reset_auto_wait__22@unnamed@zTalkBox_cpp@Fv"

# @unnamed@zTalkBox_cpp@::load_wait_context(@unnamed@zTalkBox_cpp@::wait_context&, const xtextbox::tag_entry_list&)
.fn "load_wait_context__22@unnamed@zTalkBox_cpp@FRQ222@unnamed@zTalkBox_cpp@12wait_contextRCQ28xtextbox14tag_entry_list", local
/* 801309E8 0012DAC8  94 21 FF B0 */	stwu r1, -0x50(r1)
/* 801309EC 0012DACC  7C 08 02 A6 */	mflr r0
/* 801309F0 0012DAD0  90 01 00 54 */	stw r0, 0x54(r1)
/* 801309F4 0012DAD4  93 E1 00 4C */	stw r31, 0x4c(r1)
/* 801309F8 0012DAD8  7C 9F 23 78 */	mr r31, r4
/* 801309FC 0012DADC  93 C1 00 48 */	stw r30, 0x48(r1)
/* 80130A00 0012DAE0  7C 7E 1B 78 */	mr r30, r3
/* 80130A04 0012DAE4  93 A1 00 44 */	stw r29, 0x44(r1)
/* 80130A08 0012DAE8  48 00 02 89 */	bl "reset_type__Q222@unnamed@zTalkBox_cpp@12wait_contextFv"
/* 80130A0C 0012DAEC  C0 02 A3 28 */	lfs f0, "@1032"@sda21(r2)
/* 80130A10 0012DAF0  3C 60 80 27 */	lis r3, "@stringBase0"@ha
/* 80130A14 0012DAF4  38 63 C9 20 */	addi r3, r3, "@stringBase0"@l
/* 80130A18 0012DAF8  38 80 00 04 */	li r4, 0x4
/* 80130A1C 0012DAFC  D0 1E 00 04 */	stfs f0, 0x4(r30)
/* 80130A20 0012DB00  38 63 00 25 */	addi r3, r3, 0x25
/* 80130A24 0012DB04  4B EF 59 01 */	bl create__6substrFPCcUl
/* 80130A28 0012DB08  90 81 00 34 */	stw r4, 0x34(r1)
/* 80130A2C 0012DB0C  38 81 00 30 */	addi r4, r1, 0x30
/* 80130A30 0012DB10  90 61 00 30 */	stw r3, 0x30(r1)
/* 80130A34 0012DB14  7F E3 FB 78 */	mr r3, r31
/* 80130A38 0012DB18  4B EF 20 ED */	bl find_entry__8xtextboxFRCQ28xtextbox14tag_entry_listRC6substr
/* 80130A3C 0012DB1C  28 03 00 00 */	cmplwi r3, 0x0
/* 80130A40 0012DB20  41 82 00 28 */	beq .L_80130A68
/* 80130A44 0012DB24  38 9E 00 04 */	addi r4, r30, 0x4
/* 80130A48 0012DB28  38 A0 00 01 */	li r5, 0x1
/* 80130A4C 0012DB2C  4B EF 21 49 */	bl read_list__8xtextboxFRCQ28xtextbox9tag_entryPfUl
/* 80130A50 0012DB30  28 03 00 01 */	cmplwi r3, 0x1
/* 80130A54 0012DB34  40 82 00 14 */	bne .L_80130A68
/* 80130A58 0012DB38  88 1E 00 00 */	lbz r0, 0x0(r30)
/* 80130A5C 0012DB3C  38 60 00 01 */	li r3, 0x1
/* 80130A60 0012DB40  50 60 3E 30 */	rlwimi r0, r3, 7, 24, 24
/* 80130A64 0012DB44  98 1E 00 00 */	stb r0, 0x0(r30)
.L_80130A68:
/* 80130A68 0012DB48  3C 60 80 27 */	lis r3, "@stringBase0"@ha
/* 80130A6C 0012DB4C  38 80 00 06 */	li r4, 0x6
/* 80130A70 0012DB50  38 63 C9 20 */	addi r3, r3, "@stringBase0"@l
/* 80130A74 0012DB54  38 63 00 2A */	addi r3, r3, 0x2a
/* 80130A78 0012DB58  4B EF 58 AD */	bl create__6substrFPCcUl
/* 80130A7C 0012DB5C  90 81 00 2C */	stw r4, 0x2c(r1)
/* 80130A80 0012DB60  38 81 00 28 */	addi r4, r1, 0x28
/* 80130A84 0012DB64  90 61 00 28 */	stw r3, 0x28(r1)
/* 80130A88 0012DB68  7F E3 FB 78 */	mr r3, r31
/* 80130A8C 0012DB6C  4B EF 20 99 */	bl find_entry__8xtextboxFRCQ28xtextbox14tag_entry_listRC6substr
/* 80130A90 0012DB70  7C 7D 1B 79 */	mr. r29, r3
/* 80130A94 0012DB74  41 82 00 70 */	beq .L_80130B04
/* 80130A98 0012DB78  88 1E 00 00 */	lbz r0, 0x0(r30)
/* 80130A9C 0012DB7C  38 60 00 01 */	li r3, 0x1
/* 80130AA0 0012DB80  50 60 36 72 */	rlwimi r0, r3, 6, 25, 25
/* 80130AA4 0012DB84  98 1E 00 00 */	stb r0, 0x0(r30)
/* 80130AA8 0012DB88  88 1D 00 08 */	lbz r0, 0x8(r29)
/* 80130AAC 0012DB8C  28 00 00 3D */	cmplwi r0, 0x3d
/* 80130AB0 0012DB90  40 82 00 4C */	bne .L_80130AFC
/* 80130AB4 0012DB94  80 1D 00 10 */	lwz r0, 0x10(r29)
/* 80130AB8 0012DB98  28 00 00 01 */	cmplwi r0, 0x1
/* 80130ABC 0012DB9C  40 82 00 40 */	bne .L_80130AFC
/* 80130AC0 0012DBA0  3C 60 80 27 */	lis r3, "@stringBase0"@ha
/* 80130AC4 0012DBA4  38 80 00 05 */	li r4, 0x5
/* 80130AC8 0012DBA8  38 63 C9 20 */	addi r3, r3, "@stringBase0"@l
/* 80130ACC 0012DBAC  38 63 00 31 */	addi r3, r3, 0x31
/* 80130AD0 0012DBB0  4B EF 58 55 */	bl create__6substrFPCcUl
/* 80130AD4 0012DBB4  90 81 00 24 */	stw r4, 0x24(r1)
/* 80130AD8 0012DBB8  38 81 00 20 */	addi r4, r1, 0x20
/* 80130ADC 0012DBBC  90 61 00 20 */	stw r3, 0x20(r1)
/* 80130AE0 0012DBC0  80 7D 00 0C */	lwz r3, 0xc(r29)
/* 80130AE4 0012DBC4  4B F1 BE 51 */	bl icompare__FRC6substrRC6substr
/* 80130AE8 0012DBC8  2C 03 00 00 */	cmpwi r3, 0x0
/* 80130AEC 0012DBCC  40 82 00 10 */	bne .L_80130AFC
/* 80130AF0 0012DBD0  38 00 00 01 */	li r0, 0x1
/* 80130AF4 0012DBD4  90 1E 00 0C */	stw r0, 0xc(r30)
/* 80130AF8 0012DBD8  48 00 00 0C */	b .L_80130B04
.L_80130AFC:
/* 80130AFC 0012DBDC  38 00 00 00 */	li r0, 0x0
/* 80130B00 0012DBE0  90 1E 00 0C */	stw r0, 0xc(r30)
.L_80130B04:
/* 80130B04 0012DBE4  3C 60 80 27 */	lis r3, "@stringBase0"@ha
/* 80130B08 0012DBE8  38 80 00 05 */	li r4, 0x5
/* 80130B0C 0012DBEC  38 63 C9 20 */	addi r3, r3, "@stringBase0"@l
/* 80130B10 0012DBF0  38 63 00 37 */	addi r3, r3, 0x37
/* 80130B14 0012DBF4  4B EF 58 11 */	bl create__6substrFPCcUl
/* 80130B18 0012DBF8  90 81 00 1C */	stw r4, 0x1c(r1)
/* 80130B1C 0012DBFC  38 81 00 18 */	addi r4, r1, 0x18
/* 80130B20 0012DC00  90 61 00 18 */	stw r3, 0x18(r1)
/* 80130B24 0012DC04  7F E3 FB 78 */	mr r3, r31
/* 80130B28 0012DC08  4B EF 1F FD */	bl find_entry__8xtextboxFRCQ28xtextbox14tag_entry_listRC6substr
/* 80130B2C 0012DC0C  7C 03 00 D0 */	neg r0, r3
/* 80130B30 0012DC10  3C 80 80 27 */	lis r4, "@stringBase0"@ha
/* 80130B34 0012DC14  7C 03 1B 78 */	or r3, r0, r3
/* 80130B38 0012DC18  88 1E 00 00 */	lbz r0, 0x0(r30)
/* 80130B3C 0012DC1C  54 65 0F FE */	srwi r5, r3, 31
/* 80130B40 0012DC20  38 64 C9 20 */	addi r3, r4, "@stringBase0"@l
/* 80130B44 0012DC24  50 A0 2E B4 */	rlwimi r0, r5, 5, 26, 26
/* 80130B48 0012DC28  38 80 00 05 */	li r4, 0x5
/* 80130B4C 0012DC2C  98 1E 00 00 */	stb r0, 0x0(r30)
/* 80130B50 0012DC30  38 63 00 3D */	addi r3, r3, 0x3d
/* 80130B54 0012DC34  4B EF 57 D1 */	bl create__6substrFPCcUl
/* 80130B58 0012DC38  90 81 00 14 */	stw r4, 0x14(r1)
/* 80130B5C 0012DC3C  38 81 00 10 */	addi r4, r1, 0x10
/* 80130B60 0012DC40  90 61 00 10 */	stw r3, 0x10(r1)
/* 80130B64 0012DC44  7F E3 FB 78 */	mr r3, r31
/* 80130B68 0012DC48  4B EF 1F BD */	bl find_entry__8xtextboxFRCQ28xtextbox14tag_entry_listRC6substr
/* 80130B6C 0012DC4C  7C 7D 1B 79 */	mr. r29, r3
/* 80130B70 0012DC50  41 82 00 94 */	beq .L_80130C04
/* 80130B74 0012DC54  88 1E 00 00 */	lbz r0, 0x0(r30)
/* 80130B78 0012DC58  38 80 00 01 */	li r4, 0x1
/* 80130B7C 0012DC5C  50 80 26 F6 */	rlwimi r0, r4, 4, 27, 27
/* 80130B80 0012DC60  38 A0 00 20 */	li r5, 0x20
/* 80130B84 0012DC64  3C 80 80 32 */	lis r4, v$993@ha
/* 80130B88 0012DC68  98 1E 00 00 */	stb r0, 0x0(r30)
/* 80130B8C 0012DC6C  38 84 41 BC */	addi r4, r4, v$993@l
/* 80130B90 0012DC70  4B EF 20 85 */	bl read_list__8xtextboxFRCQ28xtextbox9tag_entryPiUl
/* 80130B94 0012DC74  28 03 00 00 */	cmplwi r3, 0x0
/* 80130B98 0012DC78  40 82 00 10 */	bne .L_80130BA8
/* 80130B9C 0012DC7C  38 00 FF FF */	li r0, -0x1
/* 80130BA0 0012DC80  90 1E 00 08 */	stw r0, 0x8(r30)
/* 80130BA4 0012DC84  48 00 00 60 */	b .L_80130C04
.L_80130BA8:
/* 80130BA8 0012DC88  88 1D 00 08 */	lbz r0, 0x8(r29)
/* 80130BAC 0012DC8C  28 00 00 3D */	cmplwi r0, 0x3d
/* 80130BB0 0012DC90  40 82 00 54 */	bne .L_80130C04
/* 80130BB4 0012DC94  3C 80 80 32 */	lis r4, v$993@ha
/* 80130BB8 0012DC98  38 A4 41 BC */	addi r5, r4, v$993@l
/* 80130BBC 0012DC9C  38 80 00 01 */	li r4, 0x1
/* 80130BC0 0012DCA0  7C 69 03 A6 */	mtctr r3
/* 80130BC4 0012DCA4  28 03 00 00 */	cmplwi r3, 0x0
/* 80130BC8 0012DCA8  40 81 00 28 */	ble .L_80130BF0
.L_80130BCC:
/* 80130BCC 0012DCAC  80 05 00 00 */	lwz r0, 0x0(r5)
/* 80130BD0 0012DCB0  28 00 00 20 */	cmplwi r0, 0x20
/* 80130BD4 0012DCB4  40 80 00 14 */	bge .L_80130BE8
/* 80130BD8 0012DCB8  80 7E 00 08 */	lwz r3, 0x8(r30)
/* 80130BDC 0012DCBC  7C 80 00 30 */	slw r0, r4, r0
/* 80130BE0 0012DCC0  7C 60 03 78 */	or r0, r3, r0
/* 80130BE4 0012DCC4  90 1E 00 08 */	stw r0, 0x8(r30)
.L_80130BE8:
/* 80130BE8 0012DCC8  38 A5 00 04 */	addi r5, r5, 0x4
/* 80130BEC 0012DCCC  42 00 FF E0 */	bdnz .L_80130BCC
.L_80130BF0:
/* 80130BF0 0012DCD0  80 1E 00 08 */	lwz r0, 0x8(r30)
/* 80130BF4 0012DCD4  54 00 07 FF */	clrlwi. r0, r0, 31
/* 80130BF8 0012DCD8  41 82 00 0C */	beq .L_80130C04
/* 80130BFC 0012DCDC  38 00 FF FF */	li r0, -0x1
/* 80130C00 0012DCE0  90 1E 00 08 */	stw r0, 0x8(r30)
.L_80130C04:
/* 80130C04 0012DCE4  3C 60 80 27 */	lis r3, "@stringBase0"@ha
/* 80130C08 0012DCE8  38 80 00 04 */	li r4, 0x4
/* 80130C0C 0012DCEC  38 63 C9 20 */	addi r3, r3, "@stringBase0"@l
/* 80130C10 0012DCF0  38 63 00 43 */	addi r3, r3, 0x43
/* 80130C14 0012DCF4  4B EF 57 11 */	bl create__6substrFPCcUl
/* 80130C18 0012DCF8  90 81 00 0C */	stw r4, 0xc(r1)
/* 80130C1C 0012DCFC  38 81 00 08 */	addi r4, r1, 0x8
/* 80130C20 0012DD00  90 61 00 08 */	stw r3, 0x8(r1)
/* 80130C24 0012DD04  7F E3 FB 78 */	mr r3, r31
/* 80130C28 0012DD08  4B EF 1E FD */	bl find_entry__8xtextboxFRCQ28xtextbox14tag_entry_listRC6substr
/* 80130C2C 0012DD0C  28 03 00 00 */	cmplwi r3, 0x0
/* 80130C30 0012DD10  41 82 00 3C */	beq .L_80130C6C
/* 80130C34 0012DD14  88 03 00 08 */	lbz r0, 0x8(r3)
/* 80130C38 0012DD18  28 00 00 3D */	cmplwi r0, 0x3d
/* 80130C3C 0012DD1C  40 82 00 24 */	bne .L_80130C60
/* 80130C40 0012DD20  80 03 00 10 */	lwz r0, 0x10(r3)
/* 80130C44 0012DD24  28 00 00 00 */	cmplwi r0, 0x0
/* 80130C48 0012DD28  41 82 00 18 */	beq .L_80130C60
/* 80130C4C 0012DD2C  80 63 00 0C */	lwz r3, 0xc(r3)
/* 80130C50 0012DD30  38 80 00 01 */	li r4, 0x1
/* 80130C54 0012DD34  4B FF FC 25 */	bl "read_bool__22@unnamed@zTalkBox_cpp@FRC6substrb"
/* 80130C58 0012DD38  54 60 06 3F */	clrlwi. r0, r3, 24
/* 80130C5C 0012DD3C  40 82 00 10 */	bne .L_80130C6C
.L_80130C60:
/* 80130C60 0012DD40  38 00 00 01 */	li r0, 0x1
/* 80130C64 0012DD44  98 1E 00 02 */	stb r0, 0x2(r30)
/* 80130C68 0012DD48  48 00 00 0C */	b .L_80130C74
.L_80130C6C:
/* 80130C6C 0012DD4C  38 00 00 00 */	li r0, 0x0
/* 80130C70 0012DD50  98 1E 00 02 */	stb r0, 0x2(r30)
.L_80130C74:
/* 80130C74 0012DD54  80 01 00 54 */	lwz r0, 0x54(r1)
/* 80130C78 0012DD58  83 E1 00 4C */	lwz r31, 0x4c(r1)
/* 80130C7C 0012DD5C  83 C1 00 48 */	lwz r30, 0x48(r1)
/* 80130C80 0012DD60  83 A1 00 44 */	lwz r29, 0x44(r1)
/* 80130C84 0012DD64  7C 08 03 A6 */	mtlr r0
/* 80130C88 0012DD68  38 21 00 50 */	addi r1, r1, 0x50
/* 80130C8C 0012DD6C  4E 80 00 20 */	blr
.endfn "load_wait_context__22@unnamed@zTalkBox_cpp@FRQ222@unnamed@zTalkBox_cpp@12wait_contextRCQ28xtextbox14tag_entry_list"

# @unnamed@zTalkBox_cpp@::wait_context::reset_type()
.fn "reset_type__Q222@unnamed@zTalkBox_cpp@12wait_contextFv", local
/* 80130C90 0012DD70  38 00 00 00 */	li r0, 0x0
/* 80130C94 0012DD74  B0 03 00 00 */	sth r0, 0x0(r3)
/* 80130C98 0012DD78  4E 80 00 20 */	blr
.endfn "reset_type__Q222@unnamed@zTalkBox_cpp@12wait_contextFv"

# @unnamed@zTalkBox_cpp@::parse_tag_auto_wait(xtextbox::jot&, const xtextbox&, const xtextbox&, const xtextbox::split_tag&)
.fn "parse_tag_auto_wait__22@unnamed@zTalkBox_cpp@FRQ28xtextbox3jotRC8xtextboxRC8xtextboxRCQ28xtextbox9split_tag", local
/* 80130C9C 0012DD7C  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 80130CA0 0012DD80  7C 08 02 A6 */	mflr r0
/* 80130CA4 0012DD84  3C 80 80 32 */	lis r4, "shared__22@unnamed@zTalkBox_cpp@"@ha
/* 80130CA8 0012DD88  90 01 00 24 */	stw r0, 0x24(r1)
/* 80130CAC 0012DD8C  38 84 B3 20 */	addi r4, r4, "shared__22@unnamed@zTalkBox_cpp@"@l
/* 80130CB0 0012DD90  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 80130CB4 0012DD94  80 84 00 08 */	lwz r4, 0x8(r4)
/* 80130CB8 0012DD98  28 04 00 00 */	cmplwi r4, 0x0
/* 80130CBC 0012DD9C  41 82 00 AC */	beq .L_80130D68
/* 80130CC0 0012DDA0  80 84 00 18 */	lwz r4, 0x18(r4)
/* 80130CC4 0012DDA4  38 04 00 18 */	addi r0, r4, 0x18
/* 80130CC8 0012DDA8  7C 00 28 40 */	cmplw r0, r5
/* 80130CCC 0012DDAC  40 82 00 9C */	bne .L_80130D68
/* 80130CD0 0012DDB0  83 E3 00 10 */	lwz r31, 0x10(r3)
/* 80130CD4 0012DDB4  38 00 00 10 */	li r0, 0x10
/* 80130CD8 0012DDB8  B0 03 00 0C */	sth r0, 0xc(r3)
/* 80130CDC 0012DDBC  7C C3 33 78 */	mr r3, r6
/* 80130CE0 0012DDC0  4B EF 1C 29 */	bl read_tag__8xtextboxFRC6substr
/* 80130CE4 0012DDC4  90 81 00 0C */	stw r4, 0xc(r1)
/* 80130CE8 0012DDC8  90 61 00 08 */	stw r3, 0x8(r1)
/* 80130CEC 0012DDCC  88 03 00 08 */	lbz r0, 0x8(r3)
/* 80130CF0 0012DDD0  28 00 00 3D */	cmplwi r0, 0x3d
/* 80130CF4 0012DDD4  40 82 00 38 */	bne .L_80130D2C
/* 80130CF8 0012DDD8  80 03 00 10 */	lwz r0, 0x10(r3)
/* 80130CFC 0012DDDC  28 00 00 00 */	cmplwi r0, 0x0
/* 80130D00 0012DDE0  41 82 00 2C */	beq .L_80130D2C
/* 80130D04 0012DDE4  80 63 00 0C */	lwz r3, 0xc(r3)
/* 80130D08 0012DDE8  38 80 00 01 */	li r4, 0x1
/* 80130D0C 0012DDEC  4B FF FB 6D */	bl "read_bool__22@unnamed@zTalkBox_cpp@FRC6substrb"
/* 80130D10 0012DDF0  54 60 06 3F */	clrlwi. r0, r3, 24
/* 80130D14 0012DDF4  40 82 00 18 */	bne .L_80130D2C
/* 80130D18 0012DDF8  7F E3 FB 78 */	mr r3, r31
/* 80130D1C 0012DDFC  4B FF FF 75 */	bl "reset_type__Q222@unnamed@zTalkBox_cpp@12wait_contextFv"
/* 80130D20 0012DE00  C0 02 A3 28 */	lfs f0, "@1032"@sda21(r2)
/* 80130D24 0012DE04  D0 1F 00 04 */	stfs f0, 0x4(r31)
/* 80130D28 0012DE08  48 00 00 28 */	b .L_80130D50
.L_80130D2C:
/* 80130D2C 0012DE0C  80 C1 00 0C */	lwz r6, 0xc(r1)
/* 80130D30 0012DE10  7F E3 FB 78 */	mr r3, r31
/* 80130D34 0012DE14  80 A1 00 08 */	lwz r5, 0x8(r1)
/* 80130D38 0012DE18  38 81 00 08 */	addi r4, r1, 0x8
/* 80130D3C 0012DE1C  38 C6 FF FF */	addi r6, r6, -0x1
/* 80130D40 0012DE20  38 05 00 14 */	addi r0, r5, 0x14
/* 80130D44 0012DE24  90 C1 00 0C */	stw r6, 0xc(r1)
/* 80130D48 0012DE28  90 01 00 08 */	stw r0, 0x8(r1)
/* 80130D4C 0012DE2C  4B FF FC 9D */	bl "load_wait_context__22@unnamed@zTalkBox_cpp@FRQ222@unnamed@zTalkBox_cpp@12wait_contextRCQ28xtextbox14tag_entry_list"
.L_80130D50:
/* 80130D50 0012DE30  3C 60 80 32 */	lis r3, "shared__22@unnamed@zTalkBox_cpp@"@ha
/* 80130D54 0012DE34  7F E4 FB 78 */	mr r4, r31
/* 80130D58 0012DE38  38 63 B3 20 */	addi r3, r3, "shared__22@unnamed@zTalkBox_cpp@"@l
/* 80130D5C 0012DE3C  3C 63 00 01 */	addis r3, r3, 0x1
/* 80130D60 0012DE40  38 63 8D 38 */	addi r3, r3, -0x72c8
/* 80130D64 0012DE44  48 00 00 19 */	bl "__as__Q222@unnamed@zTalkBox_cpp@12wait_contextFRCQ222@unnamed@zTalkBox_cpp@12wait_context"
.L_80130D68:
/* 80130D68 0012DE48  80 01 00 24 */	lwz r0, 0x24(r1)
/* 80130D6C 0012DE4C  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 80130D70 0012DE50  7C 08 03 A6 */	mtlr r0
/* 80130D74 0012DE54  38 21 00 20 */	addi r1, r1, 0x20
/* 80130D78 0012DE58  4E 80 00 20 */	blr
.endfn "parse_tag_auto_wait__22@unnamed@zTalkBox_cpp@FRQ28xtextbox3jotRC8xtextboxRC8xtextboxRCQ28xtextbox9split_tag"

# @unnamed@zTalkBox_cpp@::wait_context::operator=(const @unnamed@zTalkBox_cpp@::wait_context&)
.fn "__as__Q222@unnamed@zTalkBox_cpp@12wait_contextFRCQ222@unnamed@zTalkBox_cpp@12wait_context", local
/* 80130D7C 0012DE5C  A0 A4 00 00 */	lhz r5, 0x0(r4)
/* 80130D80 0012DE60  88 04 00 02 */	lbz r0, 0x2(r4)
/* 80130D84 0012DE64  B0 A3 00 00 */	sth r5, 0x0(r3)
/* 80130D88 0012DE68  C0 04 00 04 */	lfs f0, 0x4(r4)
/* 80130D8C 0012DE6C  98 03 00 02 */	stb r0, 0x2(r3)
/* 80130D90 0012DE70  80 A4 00 08 */	lwz r5, 0x8(r4)
/* 80130D94 0012DE74  D0 03 00 04 */	stfs f0, 0x4(r3)
/* 80130D98 0012DE78  80 04 00 0C */	lwz r0, 0xc(r4)
/* 80130D9C 0012DE7C  90 A3 00 08 */	stw r5, 0x8(r3)
/* 80130DA0 0012DE80  90 03 00 0C */	stw r0, 0xc(r3)
/* 80130DA4 0012DE84  4E 80 00 20 */	blr
.endfn "__as__Q222@unnamed@zTalkBox_cpp@12wait_contextFRCQ222@unnamed@zTalkBox_cpp@12wait_context"

# @unnamed@zTalkBox_cpp@::reset_tag_auto_wait(xtextbox::jot&, const xtextbox&, const xtextbox&, const xtextbox::split_tag&)
.fn "reset_tag_auto_wait__22@unnamed@zTalkBox_cpp@FRQ28xtextbox3jotRC8xtextboxRC8xtextboxRCQ28xtextbox9split_tag", local
/* 80130DA8 0012DE88  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80130DAC 0012DE8C  7C 08 02 A6 */	mflr r0
/* 80130DB0 0012DE90  3C 80 80 32 */	lis r4, "shared__22@unnamed@zTalkBox_cpp@"@ha
/* 80130DB4 0012DE94  90 01 00 14 */	stw r0, 0x14(r1)
/* 80130DB8 0012DE98  38 84 B3 20 */	addi r4, r4, "shared__22@unnamed@zTalkBox_cpp@"@l
/* 80130DBC 0012DE9C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80130DC0 0012DEA0  80 84 00 08 */	lwz r4, 0x8(r4)
/* 80130DC4 0012DEA4  28 04 00 00 */	cmplwi r4, 0x0
/* 80130DC8 0012DEA8  41 82 00 3C */	beq .L_80130E04
/* 80130DCC 0012DEAC  80 84 00 18 */	lwz r4, 0x18(r4)
/* 80130DD0 0012DEB0  38 04 00 18 */	addi r0, r4, 0x18
/* 80130DD4 0012DEB4  7C 00 28 40 */	cmplw r0, r5
/* 80130DD8 0012DEB8  40 82 00 2C */	bne .L_80130E04
/* 80130DDC 0012DEBC  83 E3 00 10 */	lwz r31, 0x10(r3)
/* 80130DE0 0012DEC0  38 00 00 10 */	li r0, 0x10
/* 80130DE4 0012DEC4  B0 03 00 0C */	sth r0, 0xc(r3)
/* 80130DE8 0012DEC8  4B FF FB 4D */	bl "reset_auto_wait__22@unnamed@zTalkBox_cpp@Fv"
/* 80130DEC 0012DECC  3C 80 80 32 */	lis r4, "shared__22@unnamed@zTalkBox_cpp@"@ha
/* 80130DF0 0012DED0  7F E3 FB 78 */	mr r3, r31
/* 80130DF4 0012DED4  38 84 B3 20 */	addi r4, r4, "shared__22@unnamed@zTalkBox_cpp@"@l
/* 80130DF8 0012DED8  3C 84 00 01 */	addis r4, r4, 0x1
/* 80130DFC 0012DEDC  38 84 8D 38 */	addi r4, r4, -0x72c8
/* 80130E00 0012DEE0  4B FF FF 7D */	bl "__as__Q222@unnamed@zTalkBox_cpp@12wait_contextFRCQ222@unnamed@zTalkBox_cpp@12wait_context"
.L_80130E04:
/* 80130E04 0012DEE4  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80130E08 0012DEE8  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80130E0C 0012DEEC  7C 08 03 A6 */	mtlr r0
/* 80130E10 0012DEF0  38 21 00 10 */	addi r1, r1, 0x10
/* 80130E14 0012DEF4  4E 80 00 20 */	blr
.endfn "reset_tag_auto_wait__22@unnamed@zTalkBox_cpp@FRQ28xtextbox3jotRC8xtextboxRC8xtextboxRCQ28xtextbox9split_tag"

# @unnamed@zTalkBox_cpp@::trigger_auto_wait(const xtextbox::jot&)
.fn "trigger_auto_wait__22@unnamed@zTalkBox_cpp@FRCQ28xtextbox3jot", local
/* 80130E18 0012DEF8  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80130E1C 0012DEFC  7C 08 02 A6 */	mflr r0
/* 80130E20 0012DF00  3C 80 80 32 */	lis r4, "shared__22@unnamed@zTalkBox_cpp@"@ha
/* 80130E24 0012DF04  38 A4 B3 20 */	addi r5, r4, "shared__22@unnamed@zTalkBox_cpp@"@l
/* 80130E28 0012DF08  80 83 00 10 */	lwz r4, 0x10(r3)
/* 80130E2C 0012DF0C  3C 65 00 01 */	addis r3, r5, 0x1
/* 80130E30 0012DF10  90 01 00 14 */	stw r0, 0x14(r1)
/* 80130E34 0012DF14  38 63 8D 38 */	addi r3, r3, -0x72c8
/* 80130E38 0012DF18  4B FF FF 45 */	bl "__as__Q222@unnamed@zTalkBox_cpp@12wait_contextFRCQ222@unnamed@zTalkBox_cpp@12wait_context"
/* 80130E3C 0012DF1C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80130E40 0012DF20  38 60 00 01 */	li r3, 0x1
/* 80130E44 0012DF24  7C 08 03 A6 */	mtlr r0
/* 80130E48 0012DF28  38 21 00 10 */	addi r1, r1, 0x10
/* 80130E4C 0012DF2C  4E 80 00 20 */	blr
.endfn "trigger_auto_wait__22@unnamed@zTalkBox_cpp@FRCQ28xtextbox3jot"

# @unnamed@zTalkBox_cpp@::parse_tag_signal(xtextbox::jot&, const xtextbox&, const xtextbox&, const xtextbox::split_tag&)
.fn "parse_tag_signal__22@unnamed@zTalkBox_cpp@FRQ28xtextbox3jotRC8xtextboxRC8xtextboxRCQ28xtextbox9split_tag", local
/* 80130E50 0012DF30  94 21 FF 90 */	stwu r1, -0x70(r1)
/* 80130E54 0012DF34  7C 08 02 A6 */	mflr r0
/* 80130E58 0012DF38  3C 80 80 32 */	lis r4, "shared__22@unnamed@zTalkBox_cpp@"@ha
/* 80130E5C 0012DF3C  90 01 00 74 */	stw r0, 0x74(r1)
/* 80130E60 0012DF40  93 E1 00 6C */	stw r31, 0x6c(r1)
/* 80130E64 0012DF44  7C 7F 1B 78 */	mr r31, r3
/* 80130E68 0012DF48  38 64 B3 20 */	addi r3, r4, "shared__22@unnamed@zTalkBox_cpp@"@l
/* 80130E6C 0012DF4C  80 63 00 08 */	lwz r3, 0x8(r3)
/* 80130E70 0012DF50  28 03 00 00 */	cmplwi r3, 0x0
/* 80130E74 0012DF54  41 82 01 10 */	beq .L_80130F84
/* 80130E78 0012DF58  80 63 00 18 */	lwz r3, 0x18(r3)
/* 80130E7C 0012DF5C  38 03 00 18 */	addi r0, r3, 0x18
/* 80130E80 0012DF60  7C 00 28 40 */	cmplw r0, r5
/* 80130E84 0012DF64  40 82 01 00 */	bne .L_80130F84
/* 80130E88 0012DF68  38 00 00 00 */	li r0, 0x0
/* 80130E8C 0012DF6C  7C C3 33 78 */	mr r3, r6
/* 80130E90 0012DF70  90 1F 00 10 */	stw r0, 0x10(r31)
/* 80130E94 0012DF74  4B EF 1A 75 */	bl read_tag__8xtextboxFRC6substr
/* 80130E98 0012DF78  90 81 00 14 */	stw r4, 0x14(r1)
/* 80130E9C 0012DF7C  90 61 00 10 */	stw r3, 0x10(r1)
/* 80130EA0 0012DF80  88 03 00 08 */	lbz r0, 0x8(r3)
/* 80130EA4 0012DF84  28 00 00 3A */	cmplwi r0, 0x3a
/* 80130EA8 0012DF88  40 82 00 DC */	bne .L_80130F84
/* 80130EAC 0012DF8C  38 81 00 18 */	addi r4, r1, 0x18
/* 80130EB0 0012DF90  38 A0 00 14 */	li r5, 0x14
/* 80130EB4 0012DF94  4B EF 1D 61 */	bl read_list__8xtextboxFRCQ28xtextbox9tag_entryPiUl
/* 80130EB8 0012DF98  28 03 00 00 */	cmplwi r3, 0x0
/* 80130EBC 0012DF9C  40 82 00 14 */	bne .L_80130ED0
/* 80130EC0 0012DFA0  3C 60 80 00 */	lis r3, 0x8000
/* 80130EC4 0012DFA4  38 03 FF FF */	addi r0, r3, -0x1
/* 80130EC8 0012DFA8  90 1F 00 10 */	stw r0, 0x10(r31)
/* 80130ECC 0012DFAC  48 00 00 38 */	b .L_80130F04
.L_80130ED0:
/* 80130ED0 0012DFB0  38 A1 00 18 */	addi r5, r1, 0x18
/* 80130ED4 0012DFB4  38 80 00 01 */	li r4, 0x1
/* 80130ED8 0012DFB8  7C 69 03 A6 */	mtctr r3
/* 80130EDC 0012DFBC  40 81 00 28 */	ble .L_80130F04
.L_80130EE0:
/* 80130EE0 0012DFC0  80 05 00 00 */	lwz r0, 0x0(r5)
/* 80130EE4 0012DFC4  28 00 00 14 */	cmplwi r0, 0x14
/* 80130EE8 0012DFC8  40 80 00 14 */	bge .L_80130EFC
/* 80130EEC 0012DFCC  80 7F 00 10 */	lwz r3, 0x10(r31)
/* 80130EF0 0012DFD0  7C 80 00 30 */	slw r0, r4, r0
/* 80130EF4 0012DFD4  7C 60 03 78 */	or r0, r3, r0
/* 80130EF8 0012DFD8  90 1F 00 10 */	stw r0, 0x10(r31)
.L_80130EFC:
/* 80130EFC 0012DFDC  38 A5 00 04 */	addi r5, r5, 0x4
/* 80130F00 0012DFE0  42 00 FF E0 */	bdnz .L_80130EE0
.L_80130F04:
/* 80130F04 0012DFE4  80 81 00 10 */	lwz r4, 0x10(r1)
/* 80130F08 0012DFE8  3C 60 80 27 */	lis r3, "@stringBase0"@ha
/* 80130F0C 0012DFEC  80 A1 00 14 */	lwz r5, 0x14(r1)
/* 80130F10 0012DFF0  38 63 C9 20 */	addi r3, r3, "@stringBase0"@l
/* 80130F14 0012DFF4  38 C4 00 14 */	addi r6, r4, 0x14
/* 80130F18 0012DFF8  38 80 00 04 */	li r4, 0x4
/* 80130F1C 0012DFFC  38 05 FF FF */	addi r0, r5, -0x1
/* 80130F20 0012E000  90 C1 00 10 */	stw r6, 0x10(r1)
/* 80130F24 0012E004  38 63 00 43 */	addi r3, r3, 0x43
/* 80130F28 0012E008  90 01 00 14 */	stw r0, 0x14(r1)
/* 80130F2C 0012E00C  4B EF 53 F9 */	bl create__6substrFPCcUl
/* 80130F30 0012E010  90 81 00 0C */	stw r4, 0xc(r1)
/* 80130F34 0012E014  38 81 00 08 */	addi r4, r1, 0x8
/* 80130F38 0012E018  90 61 00 08 */	stw r3, 0x8(r1)
/* 80130F3C 0012E01C  38 61 00 10 */	addi r3, r1, 0x10
/* 80130F40 0012E020  4B EF 1B E5 */	bl find_entry__8xtextboxFRCQ28xtextbox14tag_entry_listRC6substr
/* 80130F44 0012E024  28 03 00 00 */	cmplwi r3, 0x0
/* 80130F48 0012E028  41 82 00 3C */	beq .L_80130F84
/* 80130F4C 0012E02C  88 03 00 08 */	lbz r0, 0x8(r3)
/* 80130F50 0012E030  28 00 00 3D */	cmplwi r0, 0x3d
/* 80130F54 0012E034  40 82 00 24 */	bne .L_80130F78
/* 80130F58 0012E038  80 03 00 10 */	lwz r0, 0x10(r3)
/* 80130F5C 0012E03C  28 00 00 00 */	cmplwi r0, 0x0
/* 80130F60 0012E040  41 82 00 18 */	beq .L_80130F78
/* 80130F64 0012E044  80 63 00 0C */	lwz r3, 0xc(r3)
/* 80130F68 0012E048  38 80 00 01 */	li r4, 0x1
/* 80130F6C 0012E04C  4B FF F9 0D */	bl "read_bool__22@unnamed@zTalkBox_cpp@FRC6substrb"
/* 80130F70 0012E050  54 60 06 3F */	clrlwi. r0, r3, 24
/* 80130F74 0012E054  40 82 00 10 */	bne .L_80130F84
.L_80130F78:
/* 80130F78 0012E058  80 1F 00 10 */	lwz r0, 0x10(r31)
/* 80130F7C 0012E05C  64 00 80 00 */	oris r0, r0, 0x8000
/* 80130F80 0012E060  90 1F 00 10 */	stw r0, 0x10(r31)
.L_80130F84:
/* 80130F84 0012E064  80 01 00 74 */	lwz r0, 0x74(r1)
/* 80130F88 0012E068  83 E1 00 6C */	lwz r31, 0x6c(r1)
/* 80130F8C 0012E06C  7C 08 03 A6 */	mtlr r0
/* 80130F90 0012E070  38 21 00 70 */	addi r1, r1, 0x70
/* 80130F94 0012E074  4E 80 00 20 */	blr
.endfn "parse_tag_signal__22@unnamed@zTalkBox_cpp@FRQ28xtextbox3jotRC8xtextboxRC8xtextboxRCQ28xtextbox9split_tag"

# @unnamed@zTalkBox_cpp@::trigger_signal(const xtextbox::jot&)
.fn "trigger_signal__22@unnamed@zTalkBox_cpp@FRCQ28xtextbox3jot", local
/* 80130F98 0012E078  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 80130F9C 0012E07C  7C 08 02 A6 */	mflr r0
/* 80130FA0 0012E080  3C 80 80 32 */	lis r4, "shared__22@unnamed@zTalkBox_cpp@"@ha
/* 80130FA4 0012E084  90 01 00 24 */	stw r0, 0x24(r1)
/* 80130FA8 0012E088  BF 61 00 0C */	stmw r27, 0xc(r1)
/* 80130FAC 0012E08C  7C 7F 1B 78 */	mr r31, r3
/* 80130FB0 0012E090  38 64 B3 20 */	addi r3, r4, "shared__22@unnamed@zTalkBox_cpp@"@l
/* 80130FB4 0012E094  3C 63 00 01 */	addis r3, r3, 0x1
/* 80130FB8 0012E098  88 03 8D 79 */	lbz r0, -0x7287(r3)
/* 80130FBC 0012E09C  28 00 00 00 */	cmplwi r0, 0x0
/* 80130FC0 0012E0A0  41 82 00 18 */	beq .L_80130FD8
/* 80130FC4 0012E0A4  80 1F 00 10 */	lwz r0, 0x10(r31)
/* 80130FC8 0012E0A8  54 00 00 01 */	clrrwi. r0, r0, 31
/* 80130FCC 0012E0AC  40 82 00 0C */	bne .L_80130FD8
/* 80130FD0 0012E0B0  38 60 00 01 */	li r3, 0x1
/* 80130FD4 0012E0B4  48 00 00 70 */	b .L_80131044
.L_80130FD8:
/* 80130FD8 0012E0B8  3C 60 80 27 */	lis r3, signals$1119@ha
/* 80130FDC 0012E0BC  83 BF 00 10 */	lwz r29, 0x10(r31)
/* 80130FE0 0012E0C0  3B 83 C8 D0 */	addi r28, r3, signals$1119@l
/* 80130FE4 0012E0C4  3B 60 00 00 */	li r27, 0x0
/* 80130FE8 0012E0C8  3B C0 00 01 */	li r30, 0x1
.L_80130FEC:
/* 80130FEC 0012E0CC  7F C0 D8 30 */	slw r0, r30, r27
/* 80130FF0 0012E0D0  7F A0 00 39 */	and. r0, r29, r0
/* 80130FF4 0012E0D4  41 82 00 0C */	beq .L_80131000
/* 80130FF8 0012E0D8  80 7C 00 00 */	lwz r3, 0x0(r28)
/* 80130FFC 0012E0DC  4B FF F6 79 */	bl "trigger__22@unnamed@zTalkBox_cpp@FUi"
.L_80131000:
/* 80131000 0012E0E0  3B 7B 00 01 */	addi r27, r27, 0x1
/* 80131004 0012E0E4  3B 9C 00 04 */	addi r28, r28, 0x4
/* 80131008 0012E0E8  28 1B 00 14 */	cmplwi r27, 0x14
/* 8013100C 0012E0EC  41 80 FF E0 */	blt .L_80130FEC
/* 80131010 0012E0F0  3C 60 80 32 */	lis r3, "shared__22@unnamed@zTalkBox_cpp@"@ha
/* 80131014 0012E0F4  38 63 B3 20 */	addi r3, r3, "shared__22@unnamed@zTalkBox_cpp@"@l
/* 80131018 0012E0F8  3C 63 00 01 */	addis r3, r3, 0x1
/* 8013101C 0012E0FC  80 63 8D 7C */	lwz r3, -0x7284(r3)
/* 80131020 0012E100  28 03 00 00 */	cmplwi r3, 0x0
/* 80131024 0012E104  41 82 00 1C */	beq .L_80131040
/* 80131028 0012E108  81 83 00 00 */	lwz r12, 0x0(r3)
/* 8013102C 0012E10C  80 1F 00 10 */	lwz r0, 0x10(r31)
/* 80131030 0012E110  81 8C 00 08 */	lwz r12, 0x8(r12)
/* 80131034 0012E114  54 04 00 7E */	clrlwi r4, r0, 1
/* 80131038 0012E118  7D 89 03 A6 */	mtctr r12
/* 8013103C 0012E11C  4E 80 04 21 */	bctrl
.L_80131040:
/* 80131040 0012E120  38 60 00 01 */	li r3, 0x1
.L_80131044:
/* 80131044 0012E124  BB 61 00 0C */	lmw r27, 0xc(r1)
/* 80131048 0012E128  80 01 00 24 */	lwz r0, 0x24(r1)
/* 8013104C 0012E12C  7C 08 03 A6 */	mtlr r0
/* 80131050 0012E130  38 21 00 20 */	addi r1, r1, 0x20
/* 80131054 0012E134  4E 80 00 20 */	blr
.endfn "trigger_signal__22@unnamed@zTalkBox_cpp@FRCQ28xtextbox3jot"

# @unnamed@zTalkBox_cpp@::load_sound_type(@unnamed@zTalkBox_cpp@::sound_context&, const xtextbox::tag_entry_list&)
.fn "load_sound_type__22@unnamed@zTalkBox_cpp@FRQ222@unnamed@zTalkBox_cpp@13sound_contextRCQ28xtextbox14tag_entry_list", local
/* 80131058 0012E138  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 8013105C 0012E13C  7C 08 02 A6 */	mflr r0
/* 80131060 0012E140  3C A0 80 27 */	lis r5, "@stringBase0"@ha
/* 80131064 0012E144  90 01 00 24 */	stw r0, 0x24(r1)
/* 80131068 0012E148  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 8013106C 0012E14C  7C 9F 23 78 */	mr r31, r4
/* 80131070 0012E150  38 85 C9 20 */	addi r4, r5, "@stringBase0"@l
/* 80131074 0012E154  93 C1 00 18 */	stw r30, 0x18(r1)
/* 80131078 0012E158  7C 7E 1B 78 */	mr r30, r3
/* 8013107C 0012E15C  38 64 00 48 */	addi r3, r4, 0x48
/* 80131080 0012E160  38 80 00 06 */	li r4, 0x6
/* 80131084 0012E164  4B EF 52 A1 */	bl create__6substrFPCcUl
/* 80131088 0012E168  90 81 00 0C */	stw r4, 0xc(r1)
/* 8013108C 0012E16C  38 81 00 08 */	addi r4, r1, 0x8
/* 80131090 0012E170  90 61 00 08 */	stw r3, 0x8(r1)
/* 80131094 0012E174  7F E3 FB 78 */	mr r3, r31
/* 80131098 0012E178  4B EF 1A 8D */	bl find_entry__8xtextboxFRCQ28xtextbox14tag_entry_listRC6substr
/* 8013109C 0012E17C  28 03 00 00 */	cmplwi r3, 0x0
/* 801310A0 0012E180  41 82 00 38 */	beq .L_801310D8
/* 801310A4 0012E184  38 9E 00 08 */	addi r4, r30, 0x8
/* 801310A8 0012E188  38 A0 00 02 */	li r5, 0x2
/* 801310AC 0012E18C  4B EF 1A E9 */	bl read_list__8xtextboxFRCQ28xtextbox9tag_entryPfUl
/* 801310B0 0012E190  28 03 00 01 */	cmplwi r3, 0x1
/* 801310B4 0012E194  40 82 00 0C */	bne .L_801310C0
/* 801310B8 0012E198  C0 1E 00 08 */	lfs f0, 0x8(r30)
/* 801310BC 0012E19C  D0 1E 00 0C */	stfs f0, 0xc(r30)
.L_801310C0:
/* 801310C0 0012E1A0  28 03 00 00 */	cmplwi r3, 0x0
/* 801310C4 0012E1A4  41 82 00 14 */	beq .L_801310D8
/* 801310C8 0012E1A8  38 00 00 01 */	li r0, 0x1
/* 801310CC 0012E1AC  38 60 00 01 */	li r3, 0x1
/* 801310D0 0012E1B0  98 1E 00 05 */	stb r0, 0x5(r30)
/* 801310D4 0012E1B4  48 00 00 1C */	b .L_801310F0
.L_801310D8:
/* 801310D8 0012E1B8  C0 02 A3 2C */	lfs f0, "@1150"@sda21(r2)
/* 801310DC 0012E1BC  38 00 00 01 */	li r0, 0x1
/* 801310E0 0012E1C0  38 60 00 01 */	li r3, 0x1
/* 801310E4 0012E1C4  D0 1E 00 08 */	stfs f0, 0x8(r30)
/* 801310E8 0012E1C8  D0 1E 00 0C */	stfs f0, 0xc(r30)
/* 801310EC 0012E1CC  98 1E 00 05 */	stb r0, 0x5(r30)
.L_801310F0:
/* 801310F0 0012E1D0  80 01 00 24 */	lwz r0, 0x24(r1)
/* 801310F4 0012E1D4  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 801310F8 0012E1D8  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 801310FC 0012E1DC  7C 08 03 A6 */	mtlr r0
/* 80131100 0012E1E0  38 21 00 20 */	addi r1, r1, 0x20
/* 80131104 0012E1E4  4E 80 00 20 */	blr
.endfn "load_sound_type__22@unnamed@zTalkBox_cpp@FRQ222@unnamed@zTalkBox_cpp@13sound_contextRCQ28xtextbox14tag_entry_list"

# @unnamed@zTalkBox_cpp@::parse_tag_sound(xtextbox::jot&, const xtextbox&, const xtextbox&, const xtextbox::split_tag&)
.fn "parse_tag_sound__22@unnamed@zTalkBox_cpp@FRQ28xtextbox3jotRC8xtextboxRC8xtextboxRCQ28xtextbox9split_tag", local
/* 80131108 0012E1E8  94 21 FF 80 */	stwu r1, -0x80(r1)
/* 8013110C 0012E1EC  7C 08 02 A6 */	mflr r0
/* 80131110 0012E1F0  3C 80 80 32 */	lis r4, "shared__22@unnamed@zTalkBox_cpp@"@ha
/* 80131114 0012E1F4  90 01 00 84 */	stw r0, 0x84(r1)
/* 80131118 0012E1F8  93 E1 00 7C */	stw r31, 0x7c(r1)
/* 8013111C 0012E1FC  93 C1 00 78 */	stw r30, 0x78(r1)
/* 80131120 0012E200  7C 7E 1B 78 */	mr r30, r3
/* 80131124 0012E204  38 64 B3 20 */	addi r3, r4, "shared__22@unnamed@zTalkBox_cpp@"@l
/* 80131128 0012E208  93 A1 00 74 */	stw r29, 0x74(r1)
/* 8013112C 0012E20C  80 63 00 08 */	lwz r3, 0x8(r3)
/* 80131130 0012E210  28 03 00 00 */	cmplwi r3, 0x0
/* 80131134 0012E214  41 82 02 F0 */	beq .L_80131424
/* 80131138 0012E218  80 63 00 18 */	lwz r3, 0x18(r3)
/* 8013113C 0012E21C  38 03 00 18 */	addi r0, r3, 0x18
/* 80131140 0012E220  7C 00 28 40 */	cmplw r0, r5
/* 80131144 0012E224  40 82 02 E0 */	bne .L_80131424
/* 80131148 0012E228  83 FE 00 10 */	lwz r31, 0x10(r30)
/* 8013114C 0012E22C  7C C3 33 78 */	mr r3, r6
/* 80131150 0012E230  4B EF 17 B9 */	bl read_tag__8xtextboxFRC6substr
/* 80131154 0012E234  90 81 00 48 */	stw r4, 0x48(r1)
/* 80131158 0012E238  3C A0 80 27 */	lis r5, "@stringBase0"@ha
/* 8013115C 0012E23C  38 00 00 00 */	li r0, 0x0
/* 80131160 0012E240  38 80 00 06 */	li r4, 0x6
/* 80131164 0012E244  90 61 00 44 */	stw r3, 0x44(r1)
/* 80131168 0012E248  38 65 C9 20 */	addi r3, r5, "@stringBase0"@l
/* 8013116C 0012E24C  38 63 00 4F */	addi r3, r3, 0x4f
/* 80131170 0012E250  98 1F 00 04 */	stb r0, 0x4(r31)
/* 80131174 0012E254  4B EF 51 B1 */	bl create__6substrFPCcUl
/* 80131178 0012E258  90 81 00 40 */	stw r4, 0x40(r1)
/* 8013117C 0012E25C  38 81 00 3C */	addi r4, r1, 0x3c
/* 80131180 0012E260  90 61 00 3C */	stw r3, 0x3c(r1)
/* 80131184 0012E264  38 61 00 44 */	addi r3, r1, 0x44
/* 80131188 0012E268  4B EF 19 9D */	bl find_entry__8xtextboxFRCQ28xtextbox14tag_entry_listRC6substr
/* 8013118C 0012E26C  28 03 00 00 */	cmplwi r3, 0x0
/* 80131190 0012E270  41 82 00 88 */	beq .L_80131218
/* 80131194 0012E274  80 03 00 10 */	lwz r0, 0x10(r3)
/* 80131198 0012E278  28 00 00 00 */	cmplwi r0, 0x0
/* 8013119C 0012E27C  41 82 00 7C */	beq .L_80131218
/* 801311A0 0012E280  3C 80 80 27 */	lis r4, "@stringBase0"@ha
/* 801311A4 0012E284  83 A3 00 0C */	lwz r29, 0xc(r3)
/* 801311A8 0012E288  38 64 C9 20 */	addi r3, r4, "@stringBase0"@l
/* 801311AC 0012E28C  38 80 00 03 */	li r4, 0x3
/* 801311B0 0012E290  38 63 00 56 */	addi r3, r3, 0x56
/* 801311B4 0012E294  4B EF 51 71 */	bl create__6substrFPCcUl
/* 801311B8 0012E298  90 81 00 38 */	stw r4, 0x38(r1)
/* 801311BC 0012E29C  38 81 00 34 */	addi r4, r1, 0x34
/* 801311C0 0012E2A0  90 61 00 34 */	stw r3, 0x34(r1)
/* 801311C4 0012E2A4  7F A3 EB 78 */	mr r3, r29
/* 801311C8 0012E2A8  4B F1 B7 6D */	bl icompare__FRC6substrRC6substr
/* 801311CC 0012E2AC  2C 03 00 00 */	cmpwi r3, 0x0
/* 801311D0 0012E2B0  40 82 00 10 */	bne .L_801311E0
/* 801311D4 0012E2B4  38 00 00 01 */	li r0, 0x1
/* 801311D8 0012E2B8  98 1F 00 04 */	stb r0, 0x4(r31)
/* 801311DC 0012E2BC  48 00 00 3C */	b .L_80131218
.L_801311E0:
/* 801311E0 0012E2C0  3C 60 80 27 */	lis r3, "@stringBase0"@ha
/* 801311E4 0012E2C4  38 80 00 06 */	li r4, 0x6
/* 801311E8 0012E2C8  38 63 C9 20 */	addi r3, r3, "@stringBase0"@l
/* 801311EC 0012E2CC  38 63 00 5A */	addi r3, r3, 0x5a
/* 801311F0 0012E2D0  4B EF 51 35 */	bl create__6substrFPCcUl
/* 801311F4 0012E2D4  90 81 00 30 */	stw r4, 0x30(r1)
/* 801311F8 0012E2D8  38 81 00 2C */	addi r4, r1, 0x2c
/* 801311FC 0012E2DC  90 61 00 2C */	stw r3, 0x2c(r1)
/* 80131200 0012E2E0  7F A3 EB 78 */	mr r3, r29
/* 80131204 0012E2E4  4B F1 B7 31 */	bl icompare__FRC6substrRC6substr
/* 80131208 0012E2E8  2C 03 00 00 */	cmpwi r3, 0x0
/* 8013120C 0012E2EC  40 82 00 0C */	bne .L_80131218
/* 80131210 0012E2F0  38 00 00 02 */	li r0, 0x2
/* 80131214 0012E2F4  98 1F 00 04 */	stb r0, 0x4(r31)
.L_80131218:
/* 80131218 0012E2F8  88 1F 00 04 */	lbz r0, 0x4(r31)
/* 8013121C 0012E2FC  80 61 00 44 */	lwz r3, 0x44(r1)
/* 80131220 0012E300  2C 00 00 02 */	cmpwi r0, 0x2
/* 80131224 0012E304  40 82 00 10 */	bne .L_80131234
/* 80131228 0012E308  38 00 00 00 */	li r0, 0x0
/* 8013122C 0012E30C  90 1F 00 00 */	stw r0, 0x0(r31)
/* 80131230 0012E310  48 00 00 38 */	b .L_80131268
.L_80131234:
/* 80131234 0012E314  88 03 00 08 */	lbz r0, 0x8(r3)
/* 80131238 0012E318  28 00 00 3A */	cmplwi r0, 0x3a
/* 8013123C 0012E31C  40 82 01 E8 */	bne .L_80131424
/* 80131240 0012E320  80 03 00 10 */	lwz r0, 0x10(r3)
/* 80131244 0012E324  28 00 00 00 */	cmplwi r0, 0x0
/* 80131248 0012E328  41 82 01 DC */	beq .L_80131424
/* 8013124C 0012E32C  80 83 00 0C */	lwz r4, 0xc(r3)
/* 80131250 0012E330  80 64 00 00 */	lwz r3, 0x0(r4)
/* 80131254 0012E334  80 84 00 04 */	lwz r4, 0x4(r4)
/* 80131258 0012E338  4B F1 AF F9 */	bl xStrHash__FPCcUl
/* 8013125C 0012E33C  90 7F 00 00 */	stw r3, 0x0(r31)
/* 80131260 0012E340  48 00 00 08 */	b .L_80131268
/* 80131264 0012E344  48 00 01 C0 */	b .L_80131424
.L_80131268:
/* 80131268 0012E348  80 1F 00 00 */	lwz r0, 0x0(r31)
/* 8013126C 0012E34C  28 00 00 00 */	cmplwi r0, 0x0
/* 80131270 0012E350  41 82 00 1C */	beq .L_8013128C
/* 80131274 0012E354  88 1F 00 04 */	lbz r0, 0x4(r31)
/* 80131278 0012E358  2C 00 00 02 */	cmpwi r0, 0x2
/* 8013127C 0012E35C  41 82 00 10 */	beq .L_8013128C
/* 80131280 0012E360  7F E3 FB 78 */	mr r3, r31
/* 80131284 0012E364  38 81 00 44 */	addi r4, r1, 0x44
/* 80131288 0012E368  4B FF FD D1 */	bl "load_sound_type__22@unnamed@zTalkBox_cpp@FRQ222@unnamed@zTalkBox_cpp@13sound_contextRCQ28xtextbox14tag_entry_list"
.L_8013128C:
/* 8013128C 0012E36C  38 00 00 02 */	li r0, 0x2
/* 80131290 0012E370  3C 60 80 27 */	lis r3, "@stringBase0"@ha
/* 80131294 0012E374  38 63 C9 20 */	addi r3, r3, "@stringBase0"@l
/* 80131298 0012E378  90 1F 00 14 */	stw r0, 0x14(r31)
/* 8013129C 0012E37C  38 63 00 61 */	addi r3, r3, 0x61
/* 801312A0 0012E380  38 80 00 07 */	li r4, 0x7
/* 801312A4 0012E384  4B EF 50 81 */	bl create__6substrFPCcUl
/* 801312A8 0012E388  90 81 00 28 */	stw r4, 0x28(r1)
/* 801312AC 0012E38C  38 81 00 24 */	addi r4, r1, 0x24
/* 801312B0 0012E390  90 61 00 24 */	stw r3, 0x24(r1)
/* 801312B4 0012E394  38 61 00 44 */	addi r3, r1, 0x44
/* 801312B8 0012E398  4B EF 18 6D */	bl find_entry__8xtextboxFRCQ28xtextbox14tag_entry_listRC6substr
/* 801312BC 0012E39C  28 03 00 00 */	cmplwi r3, 0x0
/* 801312C0 0012E3A0  41 82 00 A4 */	beq .L_80131364
/* 801312C4 0012E3A4  80 03 00 10 */	lwz r0, 0x10(r3)
/* 801312C8 0012E3A8  28 00 00 00 */	cmplwi r0, 0x0
/* 801312CC 0012E3AC  41 82 00 98 */	beq .L_80131364
/* 801312D0 0012E3B0  3C 80 80 27 */	lis r4, "@stringBase0"@ha
/* 801312D4 0012E3B4  83 A3 00 0C */	lwz r29, 0xc(r3)
/* 801312D8 0012E3B8  38 64 C9 20 */	addi r3, r4, "@stringBase0"@l
/* 801312DC 0012E3BC  38 80 00 02 */	li r4, 0x2
/* 801312E0 0012E3C0  38 63 00 69 */	addi r3, r3, 0x69
/* 801312E4 0012E3C4  4B EF 50 41 */	bl create__6substrFPCcUl
/* 801312E8 0012E3C8  90 81 00 20 */	stw r4, 0x20(r1)
/* 801312EC 0012E3CC  38 81 00 1C */	addi r4, r1, 0x1c
/* 801312F0 0012E3D0  90 61 00 1C */	stw r3, 0x1c(r1)
/* 801312F4 0012E3D4  7F A3 EB 78 */	mr r3, r29
/* 801312F8 0012E3D8  4B F1 B6 3D */	bl icompare__FRC6substrRC6substr
/* 801312FC 0012E3DC  2C 03 00 00 */	cmpwi r3, 0x0
/* 80131300 0012E3E0  40 82 00 10 */	bne .L_80131310
/* 80131304 0012E3E4  38 00 00 01 */	li r0, 0x1
/* 80131308 0012E3E8  90 1F 00 14 */	stw r0, 0x14(r31)
/* 8013130C 0012E3EC  48 00 00 58 */	b .L_80131364
.L_80131310:
/* 80131310 0012E3F0  3C 60 80 27 */	lis r3, "@stringBase0"@ha
/* 80131314 0012E3F4  38 80 00 04 */	li r4, 0x4
/* 80131318 0012E3F8  38 63 C9 20 */	addi r3, r3, "@stringBase0"@l
/* 8013131C 0012E3FC  38 63 00 6C */	addi r3, r3, 0x6c
/* 80131320 0012E400  4B EF 50 05 */	bl create__6substrFPCcUl
/* 80131324 0012E404  90 81 00 18 */	stw r4, 0x18(r1)
/* 80131328 0012E408  38 81 00 14 */	addi r4, r1, 0x14
/* 8013132C 0012E40C  90 61 00 14 */	stw r3, 0x14(r1)
/* 80131330 0012E410  7F A3 EB 78 */	mr r3, r29
/* 80131334 0012E414  4B F1 B6 01 */	bl icompare__FRC6substrRC6substr
/* 80131338 0012E418  2C 03 00 00 */	cmpwi r3, 0x0
/* 8013133C 0012E41C  40 82 00 10 */	bne .L_8013134C
/* 80131340 0012E420  38 00 00 00 */	li r0, 0x0
/* 80131344 0012E424  90 1F 00 14 */	stw r0, 0x14(r31)
/* 80131348 0012E428  48 00 00 1C */	b .L_80131364
.L_8013134C:
/* 8013134C 0012E42C  80 9D 00 04 */	lwz r4, 0x4(r29)
/* 80131350 0012E430  28 04 00 00 */	cmplwi r4, 0x0
/* 80131354 0012E434  41 82 00 10 */	beq .L_80131364
/* 80131358 0012E438  80 7D 00 00 */	lwz r3, 0x0(r29)
/* 8013135C 0012E43C  4B F1 AE F5 */	bl xStrHash__FPCcUl
/* 80131360 0012E440  90 7F 00 14 */	stw r3, 0x14(r31)
.L_80131364:
/* 80131364 0012E444  38 00 00 00 */	li r0, 0x0
/* 80131368 0012E448  3C 60 80 27 */	lis r3, "@stringBase0"@ha
/* 8013136C 0012E44C  38 63 C9 20 */	addi r3, r3, "@stringBase0"@l
/* 80131370 0012E450  98 1F 00 07 */	stb r0, 0x7(r31)
/* 80131374 0012E454  38 63 00 71 */	addi r3, r3, 0x71
/* 80131378 0012E458  38 80 00 04 */	li r4, 0x4
/* 8013137C 0012E45C  4B EF 4F A9 */	bl create__6substrFPCcUl
/* 80131380 0012E460  90 81 00 10 */	stw r4, 0x10(r1)
/* 80131384 0012E464  38 81 00 0C */	addi r4, r1, 0xc
/* 80131388 0012E468  90 61 00 0C */	stw r3, 0xc(r1)
/* 8013138C 0012E46C  38 61 00 44 */	addi r3, r1, 0x44
/* 80131390 0012E470  4B EF 17 95 */	bl find_entry__8xtextboxFRCQ28xtextbox14tag_entry_listRC6substr
/* 80131394 0012E474  28 03 00 00 */	cmplwi r3, 0x0
/* 80131398 0012E478  41 82 00 2C */	beq .L_801313C4
/* 8013139C 0012E47C  80 03 00 10 */	lwz r0, 0x10(r3)
/* 801313A0 0012E480  28 00 00 00 */	cmplwi r0, 0x0
/* 801313A4 0012E484  41 82 00 20 */	beq .L_801313C4
/* 801313A8 0012E488  38 00 00 00 */	li r0, 0x0
/* 801313AC 0012E48C  38 81 00 08 */	addi r4, r1, 0x8
/* 801313B0 0012E490  90 01 00 08 */	stw r0, 0x8(r1)
/* 801313B4 0012E494  38 A0 00 01 */	li r5, 0x1
/* 801313B8 0012E498  4B EF 18 5D */	bl read_list__8xtextboxFRCQ28xtextbox9tag_entryPiUl
/* 801313BC 0012E49C  80 01 00 08 */	lwz r0, 0x8(r1)
/* 801313C0 0012E4A0  98 1F 00 07 */	stb r0, 0x7(r31)
.L_801313C4:
/* 801313C4 0012E4A4  80 7F 00 00 */	lwz r3, 0x0(r31)
/* 801313C8 0012E4A8  28 03 00 00 */	cmplwi r3, 0x0
/* 801313CC 0012E4AC  41 82 00 58 */	beq .L_80131424
/* 801313D0 0012E4B0  38 81 00 4C */	addi r4, r1, 0x4c
/* 801313D4 0012E4B4  4B F1 A5 89 */	bl xSTGetAssetInfo__FUiP20st_PKR_ASSET_TOCINFO
/* 801313D8 0012E4B8  2C 03 00 00 */	cmpwi r3, 0x0
/* 801313DC 0012E4BC  40 82 00 08 */	bne .L_801313E4
/* 801313E0 0012E4C0  48 00 00 44 */	b .L_80131424
.L_801313E4:
/* 801313E4 0012E4C4  80 61 00 50 */	lwz r3, 0x50(r1)
/* 801313E8 0012E4C8  80 63 00 00 */	lwz r3, 0x0(r3)
/* 801313EC 0012E4CC  3C 03 AC B2 */	addis r0, r3, 0xacb2
/* 801313F0 0012E4D0  28 00 44 20 */	cmplwi r0, 0x4420
/* 801313F4 0012E4D4  40 82 00 10 */	bne .L_80131404
/* 801313F8 0012E4D8  38 00 00 00 */	li r0, 0x0
/* 801313FC 0012E4DC  98 1F 00 06 */	stb r0, 0x6(r31)
/* 80131400 0012E4E0  48 00 00 1C */	b .L_8013141C
.L_80131404:
/* 80131404 0012E4E4  28 00 44 53 */	cmplwi r0, 0x4453
/* 80131408 0012E4E8  40 82 00 1C */	bne .L_80131424
/* 8013140C 0012E4EC  38 00 00 01 */	li r0, 0x1
/* 80131410 0012E4F0  98 1F 00 06 */	stb r0, 0x6(r31)
/* 80131414 0012E4F4  48 00 00 08 */	b .L_8013141C
/* 80131418 0012E4F8  48 00 00 0C */	b .L_80131424
.L_8013141C:
/* 8013141C 0012E4FC  38 00 00 18 */	li r0, 0x18
/* 80131420 0012E500  B0 1E 00 0C */	sth r0, 0xc(r30)
.L_80131424:
/* 80131424 0012E504  80 01 00 84 */	lwz r0, 0x84(r1)
/* 80131428 0012E508  83 E1 00 7C */	lwz r31, 0x7c(r1)
/* 8013142C 0012E50C  83 C1 00 78 */	lwz r30, 0x78(r1)
/* 80131430 0012E510  83 A1 00 74 */	lwz r29, 0x74(r1)
/* 80131434 0012E514  7C 08 03 A6 */	mtlr r0
/* 80131438 0012E518  38 21 00 80 */	addi r1, r1, 0x80
/* 8013143C 0012E51C  4E 80 00 20 */	blr
.endfn "parse_tag_sound__22@unnamed@zTalkBox_cpp@FRQ28xtextbox3jotRC8xtextboxRC8xtextboxRCQ28xtextbox9split_tag"

# @unnamed@zTalkBox_cpp@::reset_tag_sound(xtextbox::jot&, const xtextbox&, const xtextbox&, const xtextbox::split_tag&)
.fn "reset_tag_sound__22@unnamed@zTalkBox_cpp@FRQ28xtextbox3jotRC8xtextboxRC8xtextboxRCQ28xtextbox9split_tag", local
/* 80131440 0012E520  3C 80 80 32 */	lis r4, "shared__22@unnamed@zTalkBox_cpp@"@ha
/* 80131444 0012E524  38 84 B3 20 */	addi r4, r4, "shared__22@unnamed@zTalkBox_cpp@"@l
/* 80131448 0012E528  80 84 00 08 */	lwz r4, 0x8(r4)
/* 8013144C 0012E52C  28 04 00 00 */	cmplwi r4, 0x0
/* 80131450 0012E530  4D 82 00 20 */	beqlr
/* 80131454 0012E534  80 84 00 18 */	lwz r4, 0x18(r4)
/* 80131458 0012E538  38 04 00 18 */	addi r0, r4, 0x18
/* 8013145C 0012E53C  7C 00 28 40 */	cmplw r0, r5
/* 80131460 0012E540  4C 82 00 20 */	bnelr
/* 80131464 0012E544  80 A3 00 10 */	lwz r5, 0x10(r3)
/* 80131468 0012E548  38 80 00 18 */	li r4, 0x18
/* 8013146C 0012E54C  38 00 00 00 */	li r0, 0x0
/* 80131470 0012E550  B0 83 00 0C */	sth r4, 0xc(r3)
/* 80131474 0012E554  90 05 00 00 */	stw r0, 0x0(r5)
/* 80131478 0012E558  98 05 00 04 */	stb r0, 0x4(r5)
/* 8013147C 0012E55C  4E 80 00 20 */	blr
.endfn "reset_tag_sound__22@unnamed@zTalkBox_cpp@FRQ28xtextbox3jotRC8xtextboxRC8xtextboxRCQ28xtextbox9split_tag"

# @unnamed@zTalkBox_cpp@::trigger_sound(const xtextbox::jot&)
.fn "trigger_sound__22@unnamed@zTalkBox_cpp@FRCQ28xtextbox3jot", local
/* 80131480 0012E560  94 21 FF D0 */	stwu r1, -0x30(r1)
/* 80131484 0012E564  7C 08 02 A6 */	mflr r0
/* 80131488 0012E568  3C 80 80 32 */	lis r4, "shared__22@unnamed@zTalkBox_cpp@"@ha
/* 8013148C 0012E56C  90 01 00 34 */	stw r0, 0x34(r1)
/* 80131490 0012E570  38 84 B3 20 */	addi r4, r4, "shared__22@unnamed@zTalkBox_cpp@"@l
/* 80131494 0012E574  3C 84 00 01 */	addis r4, r4, 0x1
/* 80131498 0012E578  BF 61 00 1C */	stmw r27, 0x1c(r1)
/* 8013149C 0012E57C  88 04 8D 79 */	lbz r0, -0x7287(r4)
/* 801314A0 0012E580  28 00 00 00 */	cmplwi r0, 0x0
/* 801314A4 0012E584  41 82 00 1C */	beq .L_801314C0
/* 801314A8 0012E588  7C 83 23 78 */	mr r3, r4
/* 801314AC 0012E58C  38 63 8D 5C */	addi r3, r3, -0x72a4
/* 801314B0 0012E590  48 00 28 29 */	bl "clear__14sound_queue<4>Fv"
/* 801314B4 0012E594  4B FF F1 49 */	bl "speak_stop__22@unnamed@zTalkBox_cpp@Fv"
/* 801314B8 0012E598  38 60 00 01 */	li r3, 0x1
/* 801314BC 0012E59C  48 00 02 34 */	b .L_801316F0
.L_801314C0:
/* 801314C0 0012E5A0  83 E3 00 10 */	lwz r31, 0x10(r3)
/* 801314C4 0012E5A4  88 1F 00 04 */	lbz r0, 0x4(r31)
/* 801314C8 0012E5A8  7C 00 07 74 */	extsb r0, r0
/* 801314CC 0012E5AC  2C 00 00 01 */	cmpwi r0, 0x1
/* 801314D0 0012E5B0  41 82 00 4C */	beq .L_8013151C
/* 801314D4 0012E5B4  40 80 00 10 */	bge .L_801314E4
/* 801314D8 0012E5B8  2C 00 00 00 */	cmpwi r0, 0x0
/* 801314DC 0012E5BC  40 80 00 30 */	bge .L_8013150C
/* 801314E0 0012E5C0  48 00 00 3C */	b .L_8013151C
.L_801314E4:
/* 801314E4 0012E5C4  2C 00 00 03 */	cmpwi r0, 0x3
/* 801314E8 0012E5C8  40 80 00 34 */	bge .L_8013151C
/* 801314EC 0012E5CC  3B A4 8D 5C */	addi r29, r4, -0x72a4
/* 801314F0 0012E5D0  7F A3 EB 78 */	mr r3, r29
/* 801314F4 0012E5D4  48 00 27 C5 */	bl "size__14sound_queue<4>CFv"
/* 801314F8 0012E5D8  2C 03 00 00 */	cmpwi r3, 0x0
/* 801314FC 0012E5DC  40 81 01 F0 */	ble .L_801316EC
/* 80131500 0012E5E0  7F A3 EB 78 */	mr r3, r29
/* 80131504 0012E5E4  48 00 27 51 */	bl "pop__14sound_queue<4>Fv"
/* 80131508 0012E5E8  48 00 01 E4 */	b .L_801316EC
.L_8013150C:
/* 8013150C 0012E5EC  7C 83 23 78 */	mr r3, r4
/* 80131510 0012E5F0  38 63 8D 5C */	addi r3, r3, -0x72a4
/* 80131514 0012E5F4  48 00 27 C5 */	bl "clear__14sound_queue<4>Fv"
/* 80131518 0012E5F8  4B FF F0 E5 */	bl "speak_stop__22@unnamed@zTalkBox_cpp@Fv"
.L_8013151C:
/* 8013151C 0012E5FC  80 9F 00 00 */	lwz r4, 0x0(r31)
/* 80131520 0012E600  28 04 00 00 */	cmplwi r4, 0x0
/* 80131524 0012E604  40 82 00 0C */	bne .L_80131530
/* 80131528 0012E608  38 60 00 01 */	li r3, 0x1
/* 8013152C 0012E60C  48 00 01 C4 */	b .L_801316F0
.L_80131530:
/* 80131530 0012E610  C0 3F 00 08 */	lfs f1, 0x8(r31)
/* 80131534 0012E614  C0 1F 00 0C */	lfs f0, 0xc(r31)
/* 80131538 0012E618  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8013153C 0012E61C  40 81 00 08 */	ble .L_80131544
/* 80131540 0012E620  48 00 00 08 */	b .L_80131548
.L_80131544:
/* 80131544 0012E624  FC 20 00 90 */	fmr f1, f0
.L_80131548:
/* 80131548 0012E628  3C 60 80 32 */	lis r3, "shared__22@unnamed@zTalkBox_cpp@"@ha
/* 8013154C 0012E62C  C0 42 A3 28 */	lfs f2, "@1032"@sda21(r2)
/* 80131550 0012E630  38 E3 B3 20 */	addi r7, r3, "shared__22@unnamed@zTalkBox_cpp@"@l
/* 80131554 0012E634  38 A0 00 80 */	li r5, 0x80
/* 80131558 0012E638  3C 67 00 01 */	addis r3, r7, 0x1
/* 8013155C 0012E63C  38 C0 00 00 */	li r6, 0x0
/* 80131560 0012E640  C0 03 8E 90 */	lfs f0, -0x7170(r3)
/* 80131564 0012E644  7C 7D 1B 78 */	mr r29, r3
/* 80131568 0012E648  80 03 8D 58 */	lwz r0, -0x72a8(r3)
/* 8013156C 0012E64C  39 00 00 01 */	li r8, 0x1
/* 80131570 0012E650  EC 20 00 72 */	fmuls f1, f0, f1
/* 80131574 0012E654  38 63 8D 5C */	addi r3, r3, -0x72a4
/* 80131578 0012E658  7C E7 02 14 */	add r7, r7, r0
/* 8013157C 0012E65C  3C E7 00 01 */	addis r7, r7, 0x1
/* 80131580 0012E660  38 E7 8D 56 */	addi r7, r7, -0x72aa
/* 80131584 0012E664  4B EF E5 7D */	bl "play__14sound_queue<4>FUiffUiUiUi14sound_category"
/* 80131588 0012E668  80 1D 8D 58 */	lwz r0, -0x72a8(r29)
/* 8013158C 0012E66C  3C 60 80 32 */	lis r3, "shared__22@unnamed@zTalkBox_cpp@"@ha
/* 80131590 0012E670  38 83 B3 20 */	addi r4, r3, "shared__22@unnamed@zTalkBox_cpp@"@l
/* 80131594 0012E674  3B C0 00 00 */	li r30, 0x0
/* 80131598 0012E678  68 00 00 01 */	xori r0, r0, 0x1
/* 8013159C 0012E67C  3B 80 00 00 */	li r28, 0x0
/* 801315A0 0012E680  90 1D 8D 58 */	stw r0, -0x72a8(r29)
/* 801315A4 0012E684  80 7F 00 14 */	lwz r3, 0x14(r31)
/* 801315A8 0012E688  80 84 00 08 */	lwz r4, 0x8(r4)
/* 801315AC 0012E68C  2C 03 00 01 */	cmpwi r3, 0x1
/* 801315B0 0012E690  41 82 00 20 */	beq .L_801315D0
/* 801315B4 0012E694  40 80 00 10 */	bge .L_801315C4
/* 801315B8 0012E698  2C 03 00 00 */	cmpwi r3, 0x0
/* 801315BC 0012E69C  40 80 00 C0 */	bge .L_8013167C
/* 801315C0 0012E6A0  48 00 00 28 */	b .L_801315E8
.L_801315C4:
/* 801315C4 0012E6A4  2C 03 00 03 */	cmpwi r3, 0x3
/* 801315C8 0012E6A8  40 80 00 20 */	bge .L_801315E8
/* 801315CC 0012E6AC  48 00 00 14 */	b .L_801315E0
.L_801315D0:
/* 801315D0 0012E6B0  3C 60 80 3C */	lis r3, globals@ha
/* 801315D4 0012E6B4  38 63 05 58 */	addi r3, r3, globals@l
/* 801315D8 0012E6B8  3B 83 06 E0 */	addi r28, r3, 0x6e0
/* 801315DC 0012E6BC  48 00 00 A0 */	b .L_8013167C
.L_801315E0:
/* 801315E0 0012E6C0  83 C4 00 38 */	lwz r30, 0x38(r4)
/* 801315E4 0012E6C4  48 00 00 98 */	b .L_8013167C
.L_801315E8:
/* 801315E8 0012E6C8  4B F8 34 55 */	bl zSceneFindObject__FUi
/* 801315EC 0012E6CC  28 03 00 00 */	cmplwi r3, 0x0
/* 801315F0 0012E6D0  90 61 00 08 */	stw r3, 0x8(r1)
/* 801315F4 0012E6D4  41 82 00 88 */	beq .L_8013167C
/* 801315F8 0012E6D8  88 03 00 04 */	lbz r0, 0x4(r3)
/* 801315FC 0012E6DC  28 00 00 2B */	cmplwi r0, 0x2b
/* 80131600 0012E6E0  40 82 00 0C */	bne .L_8013160C
/* 80131604 0012E6E4  7C 7E 1B 78 */	mr r30, r3
/* 80131608 0012E6E8  48 00 00 74 */	b .L_8013167C
.L_8013160C:
/* 8013160C 0012E6EC  28 00 00 03 */	cmplwi r0, 0x3
/* 80131610 0012E6F0  40 82 00 14 */	bne .L_80131624
/* 80131614 0012E6F4  3C 60 80 3C */	lis r3, globals@ha
/* 80131618 0012E6F8  38 63 05 58 */	addi r3, r3, globals@l
/* 8013161C 0012E6FC  3B 83 06 E0 */	addi r28, r3, 0x6e0
/* 80131620 0012E700  48 00 00 5C */	b .L_8013167C
.L_80131624:
/* 80131624 0012E704  28 00 00 11 */	cmplwi r0, 0x11
/* 80131628 0012E708  40 82 00 54 */	bne .L_8013167C
/* 8013162C 0012E70C  38 61 00 08 */	addi r3, r1, 0x8
/* 80131630 0012E710  3B 60 00 00 */	li r27, 0x0
/* 80131634 0012E714  4B EF B8 49 */	bl xGroupGetCount__FP6xGroup
/* 80131638 0012E718  7C 7D 1B 78 */	mr r29, r3
/* 8013163C 0012E71C  48 00 00 38 */	b .L_80131674
.L_80131640:
/* 80131640 0012E720  7F 64 DB 78 */	mr r4, r27
/* 80131644 0012E724  38 61 00 08 */	addi r3, r1, 0x8
/* 80131648 0012E728  4B EF B8 41 */	bl xGroupGetItemPtr__FP6xGroupUi
/* 8013164C 0012E72C  7C 64 1B 79 */	mr. r4, r3
/* 80131650 0012E730  41 82 00 20 */	beq .L_80131670
/* 80131654 0012E734  88 04 00 04 */	lbz r0, 0x4(r4)
/* 80131658 0012E738  28 00 00 2B */	cmplwi r0, 0x2b
/* 8013165C 0012E73C  40 82 00 14 */	bne .L_80131670
/* 80131660 0012E740  7C 9E 23 78 */	mr r30, r4
/* 80131664 0012E744  4B ED CF D5 */	bl xEntIsVisible__FPC4xEnt
/* 80131668 0012E748  28 03 00 00 */	cmplwi r3, 0x0
/* 8013166C 0012E74C  40 82 00 10 */	bne .L_8013167C
.L_80131670:
/* 80131670 0012E750  3B 7B 00 01 */	addi r27, r27, 0x1
.L_80131674:
/* 80131674 0012E754  7C 1B E8 40 */	cmplw r27, r29
/* 80131678 0012E758  41 80 FF C8 */	blt .L_80131640
.L_8013167C:
/* 8013167C 0012E75C  28 1E 00 00 */	cmplwi r30, 0x0
/* 80131680 0012E760  41 82 00 3C */	beq .L_801316BC
/* 80131684 0012E764  7F C3 F3 78 */	mr r3, r30
/* 80131688 0012E768  88 9F 00 07 */	lbz r4, 0x7(r31)
/* 8013168C 0012E76C  81 9E 01 B8 */	lwz r12, 0x1b8(r30)
/* 80131690 0012E770  38 A0 00 00 */	li r5, 0x0
/* 80131694 0012E774  38 C4 FF FF */	addi r6, r4, -0x1
/* 80131698 0012E778  80 9F 00 00 */	lwz r4, 0x0(r31)
/* 8013169C 0012E77C  81 8C 00 A8 */	lwz r12, 0xa8(r12)
/* 801316A0 0012E780  7D 89 03 A6 */	mtctr r12
/* 801316A4 0012E784  4E 80 04 21 */	bctrl
/* 801316A8 0012E788  3C 60 80 32 */	lis r3, "shared__22@unnamed@zTalkBox_cpp@"@ha
/* 801316AC 0012E78C  38 63 B3 20 */	addi r3, r3, "shared__22@unnamed@zTalkBox_cpp@"@l
/* 801316B0 0012E790  3C 63 00 01 */	addis r3, r3, 0x1
/* 801316B4 0012E794  93 C3 8E 94 */	stw r30, -0x716c(r3)
/* 801316B8 0012E798  48 00 00 34 */	b .L_801316EC
.L_801316BC:
/* 801316BC 0012E79C  28 1C 00 00 */	cmplwi r28, 0x0
/* 801316C0 0012E7A0  41 82 00 2C */	beq .L_801316EC
/* 801316C4 0012E7A4  88 BF 00 07 */	lbz r5, 0x7(r31)
/* 801316C8 0012E7A8  38 80 00 00 */	li r4, 0x0
/* 801316CC 0012E7AC  80 7F 00 00 */	lwz r3, 0x0(r31)
/* 801316D0 0012E7B0  38 A5 FF FF */	addi r5, r5, -0x1
/* 801316D4 0012E7B4  4B F3 9F F9 */	bl zEntPlayerSpeakStart__FUiUii
/* 801316D8 0012E7B8  3C 60 80 32 */	lis r3, "shared__22@unnamed@zTalkBox_cpp@"@ha
/* 801316DC 0012E7BC  38 00 00 01 */	li r0, 0x1
/* 801316E0 0012E7C0  38 63 B3 20 */	addi r3, r3, "shared__22@unnamed@zTalkBox_cpp@"@l
/* 801316E4 0012E7C4  3C 63 00 01 */	addis r3, r3, 0x1
/* 801316E8 0012E7C8  90 03 8E 98 */	stw r0, -0x7168(r3)
.L_801316EC:
/* 801316EC 0012E7CC  38 60 00 01 */	li r3, 0x1
.L_801316F0:
/* 801316F0 0012E7D0  BB 61 00 1C */	lmw r27, 0x1c(r1)
/* 801316F4 0012E7D4  80 01 00 34 */	lwz r0, 0x34(r1)
/* 801316F8 0012E7D8  7C 08 03 A6 */	mtlr r0
/* 801316FC 0012E7DC  38 21 00 30 */	addi r1, r1, 0x30
/* 80131700 0012E7E0  4E 80 00 20 */	blr
.endfn "trigger_sound__22@unnamed@zTalkBox_cpp@FRCQ28xtextbox3jot"

# @unnamed@zTalkBox_cpp@::parse_tag_pause(xtextbox::jot&, const xtextbox&, const xtextbox&, const xtextbox::split_tag&)
.fn "parse_tag_pause__22@unnamed@zTalkBox_cpp@FRQ28xtextbox3jotRC8xtextboxRC8xtextboxRCQ28xtextbox9split_tag", local
/* 80131704 0012E7E4  4E 80 00 20 */	blr
.endfn "parse_tag_pause__22@unnamed@zTalkBox_cpp@FRQ28xtextbox3jotRC8xtextboxRC8xtextboxRCQ28xtextbox9split_tag"

# @unnamed@zTalkBox_cpp@::reset_tag_pause(xtextbox::jot&, const xtextbox&, const xtextbox&, const xtextbox::split_tag&)
.fn "reset_tag_pause__22@unnamed@zTalkBox_cpp@FRQ28xtextbox3jotRC8xtextboxRC8xtextboxRCQ28xtextbox9split_tag", local
/* 80131708 0012E7E8  4E 80 00 20 */	blr
.endfn "reset_tag_pause__22@unnamed@zTalkBox_cpp@FRQ28xtextbox3jotRC8xtextboxRC8xtextboxRCQ28xtextbox9split_tag"

# @unnamed@zTalkBox_cpp@::trigger_pause(const xtextbox::jot&)
.fn "trigger_pause__22@unnamed@zTalkBox_cpp@FRCQ28xtextbox3jot", local
/* 8013170C 0012E7EC  38 60 00 01 */	li r3, 0x1
/* 80131710 0012E7F0  4E 80 00 20 */	blr
.endfn "trigger_pause__22@unnamed@zTalkBox_cpp@FRCQ28xtextbox3jot"

# @unnamed@zTalkBox_cpp@::parse_tag_allow_quit(xtextbox::jot&, const xtextbox&, const xtextbox&, const xtextbox::split_tag&)
.fn "parse_tag_allow_quit__22@unnamed@zTalkBox_cpp@FRQ28xtextbox3jotRC8xtextboxRC8xtextboxRCQ28xtextbox9split_tag", local
/* 80131714 0012E7F4  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80131718 0012E7F8  7C 08 02 A6 */	mflr r0
/* 8013171C 0012E7FC  90 01 00 14 */	stw r0, 0x14(r1)
/* 80131720 0012E800  80 06 00 14 */	lwz r0, 0x14(r6)
/* 80131724 0012E804  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80131728 0012E808  3B E0 00 00 */	li r31, 0x0
/* 8013172C 0012E80C  28 00 00 01 */	cmplwi r0, 0x1
/* 80131730 0012E810  93 C1 00 08 */	stw r30, 0x8(r1)
/* 80131734 0012E814  7C 7E 1B 78 */	mr r30, r3
/* 80131738 0012E818  40 82 00 28 */	bne .L_80131760
/* 8013173C 0012E81C  80 66 00 10 */	lwz r3, 0x10(r6)
/* 80131740 0012E820  88 03 00 00 */	lbz r0, 0x0(r3)
/* 80131744 0012E824  28 00 00 3D */	cmplwi r0, 0x3d
/* 80131748 0012E828  40 82 00 18 */	bne .L_80131760
/* 8013174C 0012E82C  38 66 00 18 */	addi r3, r6, 0x18
/* 80131750 0012E830  38 80 00 01 */	li r4, 0x1
/* 80131754 0012E834  4B FF F1 25 */	bl "read_bool__22@unnamed@zTalkBox_cpp@FRC6substrb"
/* 80131758 0012E838  54 60 06 3F */	clrlwi. r0, r3, 24
/* 8013175C 0012E83C  41 82 00 08 */	beq .L_80131764
.L_80131760:
/* 80131760 0012E840  3B E0 00 01 */	li r31, 0x1
.L_80131764:
/* 80131764 0012E844  9B FE 00 10 */	stb r31, 0x10(r30)
/* 80131768 0012E848  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8013176C 0012E84C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80131770 0012E850  83 C1 00 08 */	lwz r30, 0x8(r1)
/* 80131774 0012E854  7C 08 03 A6 */	mtlr r0
/* 80131778 0012E858  38 21 00 10 */	addi r1, r1, 0x10
/* 8013177C 0012E85C  4E 80 00 20 */	blr
.endfn "parse_tag_allow_quit__22@unnamed@zTalkBox_cpp@FRQ28xtextbox3jotRC8xtextboxRC8xtextboxRCQ28xtextbox9split_tag"

# @unnamed@zTalkBox_cpp@::reset_tag_allow_quit(xtextbox::jot&, const xtextbox&, const xtextbox&, const xtextbox::split_tag&)
.fn "reset_tag_allow_quit__22@unnamed@zTalkBox_cpp@FRQ28xtextbox3jotRC8xtextboxRC8xtextboxRCQ28xtextbox9split_tag", local
/* 80131780 0012E860  3C 80 80 32 */	lis r4, "shared__22@unnamed@zTalkBox_cpp@"@ha
/* 80131784 0012E864  38 84 B3 20 */	addi r4, r4, "shared__22@unnamed@zTalkBox_cpp@"@l
/* 80131788 0012E868  80 C4 00 08 */	lwz r6, 0x8(r4)
/* 8013178C 0012E86C  28 06 00 00 */	cmplwi r6, 0x0
/* 80131790 0012E870  4D 82 00 20 */	beqlr
/* 80131794 0012E874  80 86 00 18 */	lwz r4, 0x18(r6)
/* 80131798 0012E878  38 04 00 18 */	addi r0, r4, 0x18
/* 8013179C 0012E87C  7C 00 28 40 */	cmplw r0, r5
/* 801317A0 0012E880  4C 82 00 20 */	bnelr
/* 801317A4 0012E884  80 86 00 14 */	lwz r4, 0x14(r6)
/* 801317A8 0012E888  88 84 00 1E */	lbz r4, 0x1e(r4)
/* 801317AC 0012E88C  7C 04 00 D0 */	neg r0, r4
/* 801317B0 0012E890  7C 00 23 78 */	or r0, r0, r4
/* 801317B4 0012E894  54 00 0F FE */	srwi r0, r0, 31
/* 801317B8 0012E898  98 03 00 10 */	stb r0, 0x10(r3)
/* 801317BC 0012E89C  4E 80 00 20 */	blr
.endfn "reset_tag_allow_quit__22@unnamed@zTalkBox_cpp@FRQ28xtextbox3jotRC8xtextboxRC8xtextboxRCQ28xtextbox9split_tag"

# @unnamed@zTalkBox_cpp@::trigger_allow_quit(const xtextbox::jot&)
.fn "trigger_allow_quit__22@unnamed@zTalkBox_cpp@FRCQ28xtextbox3jot", local
/* 801317C0 0012E8A0  80 A3 00 10 */	lwz r5, 0x10(r3)
/* 801317C4 0012E8A4  3C 60 80 32 */	lis r3, "shared__22@unnamed@zTalkBox_cpp@"@ha
/* 801317C8 0012E8A8  38 83 B3 20 */	addi r4, r3, "shared__22@unnamed@zTalkBox_cpp@"@l
/* 801317CC 0012E8AC  38 60 00 01 */	li r3, 0x1
/* 801317D0 0012E8B0  7C 05 00 D0 */	neg r0, r5
/* 801317D4 0012E8B4  7C 00 2B 78 */	or r0, r0, r5
/* 801317D8 0012E8B8  3C 84 00 01 */	addis r4, r4, 0x1
/* 801317DC 0012E8BC  54 00 0F FE */	srwi r0, r0, 31
/* 801317E0 0012E8C0  98 04 8D 78 */	stb r0, -0x7288(r4)
/* 801317E4 0012E8C4  4E 80 00 20 */	blr
.endfn "trigger_allow_quit__22@unnamed@zTalkBox_cpp@FRCQ28xtextbox3jot"

# @unnamed@zTalkBox_cpp@::parse_tag_teleport(xtextbox::jot&, const xtextbox&, const xtextbox&, const xtextbox::split_tag&)
.fn "parse_tag_teleport__22@unnamed@zTalkBox_cpp@FRQ28xtextbox3jotRC8xtextboxRC8xtextboxRCQ28xtextbox9split_tag", local
/* 801317E8 0012E8C8  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 801317EC 0012E8CC  7C 08 02 A6 */	mflr r0
/* 801317F0 0012E8D0  3C 80 80 32 */	lis r4, "shared__22@unnamed@zTalkBox_cpp@"@ha
/* 801317F4 0012E8D4  90 01 00 24 */	stw r0, 0x24(r1)
/* 801317F8 0012E8D8  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 801317FC 0012E8DC  7C 7F 1B 78 */	mr r31, r3
/* 80131800 0012E8E0  38 64 B3 20 */	addi r3, r4, "shared__22@unnamed@zTalkBox_cpp@"@l
/* 80131804 0012E8E4  93 C1 00 18 */	stw r30, 0x18(r1)
/* 80131808 0012E8E8  93 A1 00 14 */	stw r29, 0x14(r1)
/* 8013180C 0012E8EC  80 63 00 08 */	lwz r3, 0x8(r3)
/* 80131810 0012E8F0  28 03 00 00 */	cmplwi r3, 0x0
/* 80131814 0012E8F4  41 82 00 E8 */	beq .L_801318FC
/* 80131818 0012E8F8  80 06 00 14 */	lwz r0, 0x14(r6)
/* 8013181C 0012E8FC  38 A0 00 00 */	li r5, 0x0
/* 80131820 0012E900  80 63 00 14 */	lwz r3, 0x14(r3)
/* 80131824 0012E904  28 00 00 01 */	cmplwi r0, 0x1
/* 80131828 0012E908  83 BF 00 10 */	lwz r29, 0x10(r31)
/* 8013182C 0012E90C  80 63 00 24 */	lwz r3, 0x24(r3)
/* 80131830 0012E910  40 82 00 24 */	bne .L_80131854
/* 80131834 0012E914  80 86 00 10 */	lwz r4, 0x10(r6)
/* 80131838 0012E918  88 04 00 00 */	lbz r0, 0x0(r4)
/* 8013183C 0012E91C  28 00 00 3A */	cmplwi r0, 0x3a
/* 80131840 0012E920  40 82 00 14 */	bne .L_80131854
/* 80131844 0012E924  80 06 00 1C */	lwz r0, 0x1c(r6)
/* 80131848 0012E928  28 00 00 00 */	cmplwi r0, 0x0
/* 8013184C 0012E92C  41 82 00 08 */	beq .L_80131854
/* 80131850 0012E930  38 A0 00 01 */	li r5, 0x1
.L_80131854:
/* 80131854 0012E934  54 A0 06 3F */	clrlwi. r0, r5, 24
/* 80131858 0012E938  41 82 00 10 */	beq .L_80131868
/* 8013185C 0012E93C  80 66 00 18 */	lwz r3, 0x18(r6)
/* 80131860 0012E940  80 86 00 1C */	lwz r4, 0x1c(r6)
/* 80131864 0012E944  4B F1 A9 ED */	bl xStrHash__FPCcUl
.L_80131868:
/* 80131868 0012E948  28 03 00 00 */	cmplwi r3, 0x0
/* 8013186C 0012E94C  41 82 00 90 */	beq .L_801318FC
/* 80131870 0012E950  38 00 00 00 */	li r0, 0x0
/* 80131874 0012E954  38 80 00 00 */	li r4, 0x0
/* 80131878 0012E958  98 1D 00 01 */	stb r0, 0x1(r29)
/* 8013187C 0012E95C  98 1D 00 00 */	stb r0, 0x0(r29)
/* 80131880 0012E960  4B F1 9E 8D */	bl xSTFindAsset__FUiPUi
/* 80131884 0012E964  7C 7E 1B 79 */	mr. r30, r3
/* 80131888 0012E968  41 82 00 74 */	beq .L_801318FC
/* 8013188C 0012E96C  48 00 25 95 */	bl type_name__14location_assetFv
/* 80131890 0012E970  4B F1 A9 85 */	bl xStrHash__FPCc
/* 80131894 0012E974  80 1E 00 08 */	lwz r0, 0x8(r30)
/* 80131898 0012E978  7C 00 18 40 */	cmplw r0, r3
/* 8013189C 0012E97C  40 82 00 1C */	bne .L_801318B8
/* 801318A0 0012E980  38 00 00 01 */	li r0, 0x1
/* 801318A4 0012E984  38 7D 00 04 */	addi r3, r29, 0x4
/* 801318A8 0012E988  98 1D 00 00 */	stb r0, 0x0(r29)
/* 801318AC 0012E98C  38 9E 00 10 */	addi r4, r30, 0x10
/* 801318B0 0012E990  4B ED 99 B5 */	bl __as__5xVec3FRC5xVec3
/* 801318B4 0012E994  48 00 00 40 */	b .L_801318F4
.L_801318B8:
/* 801318B8 0012E998  48 00 25 59 */	bl type_name__13pointer_assetFv
/* 801318BC 0012E99C  4B F1 A9 59 */	bl xStrHash__FPCc
/* 801318C0 0012E9A0  80 1E 00 08 */	lwz r0, 0x8(r30)
/* 801318C4 0012E9A4  7C 00 18 40 */	cmplw r0, r3
/* 801318C8 0012E9A8  40 82 00 2C */	bne .L_801318F4
/* 801318CC 0012E9AC  38 00 00 01 */	li r0, 0x1
/* 801318D0 0012E9B0  38 7D 00 04 */	addi r3, r29, 0x4
/* 801318D4 0012E9B4  98 1D 00 01 */	stb r0, 0x1(r29)
/* 801318D8 0012E9B8  38 9E 00 10 */	addi r4, r30, 0x10
/* 801318DC 0012E9BC  98 1D 00 00 */	stb r0, 0x0(r29)
/* 801318E0 0012E9C0  4B ED 99 85 */	bl __as__5xVec3FRC5xVec3
/* 801318E4 0012E9C4  C0 22 A3 30 */	lfs f1, "@1422"@sda21(r2)
/* 801318E8 0012E9C8  C0 1E 00 1C */	lfs f0, 0x1c(r30)
/* 801318EC 0012E9CC  EC 01 00 32 */	fmuls f0, f1, f0
/* 801318F0 0012E9D0  D0 1D 00 10 */	stfs f0, 0x10(r29)
.L_801318F4:
/* 801318F4 0012E9D4  38 00 00 14 */	li r0, 0x14
/* 801318F8 0012E9D8  B0 1F 00 0C */	sth r0, 0xc(r31)
.L_801318FC:
/* 801318FC 0012E9DC  80 01 00 24 */	lwz r0, 0x24(r1)
/* 80131900 0012E9E0  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 80131904 0012E9E4  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 80131908 0012E9E8  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 8013190C 0012E9EC  7C 08 03 A6 */	mtlr r0
/* 80131910 0012E9F0  38 21 00 20 */	addi r1, r1, 0x20
/* 80131914 0012E9F4  4E 80 00 20 */	blr
.endfn "parse_tag_teleport__22@unnamed@zTalkBox_cpp@FRQ28xtextbox3jotRC8xtextboxRC8xtextboxRCQ28xtextbox9split_tag"

# @unnamed@zTalkBox_cpp@::move_player(const xVec3&)
.fn "move_player__22@unnamed@zTalkBox_cpp@FRC5xVec3", local
/* 80131918 0012E9F8  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8013191C 0012E9FC  7C 08 02 A6 */	mflr r0
/* 80131920 0012EA00  3C 80 80 3C */	lis r4, globals@ha
/* 80131924 0012EA04  90 01 00 14 */	stw r0, 0x14(r1)
/* 80131928 0012EA08  38 C4 05 58 */	addi r6, r4, globals@l
/* 8013192C 0012EA0C  7C 64 1B 78 */	mr r4, r3
/* 80131930 0012EA10  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80131934 0012EA14  80 A6 07 04 */	lwz r5, 0x704(r6)
/* 80131938 0012EA18  80 66 07 28 */	lwz r3, 0x728(r6)
/* 8013193C 0012EA1C  80 A5 00 4C */	lwz r5, 0x4c(r5)
/* 80131940 0012EA20  38 63 00 30 */	addi r3, r3, 0x30
/* 80131944 0012EA24  3B E5 00 30 */	addi r31, r5, 0x30
/* 80131948 0012EA28  4B ED 99 1D */	bl __as__5xVec3FRC5xVec3
/* 8013194C 0012EA2C  7C 64 1B 78 */	mr r4, r3
/* 80131950 0012EA30  7F E3 FB 78 */	mr r3, r31
/* 80131954 0012EA34  4B ED 99 11 */	bl __as__5xVec3FRC5xVec3
/* 80131958 0012EA38  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8013195C 0012EA3C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80131960 0012EA40  7C 08 03 A6 */	mtlr r0
/* 80131964 0012EA44  38 21 00 10 */	addi r1, r1, 0x10
/* 80131968 0012EA48  4E 80 00 20 */	blr
.endfn "move_player__22@unnamed@zTalkBox_cpp@FRC5xVec3"

# @unnamed@zTalkBox_cpp@::turn_player(float)
.fn "turn_player__22@unnamed@zTalkBox_cpp@Ff", local
/* 8013196C 0012EA4C  94 21 FF D0 */	stwu r1, -0x30(r1)
/* 80131970 0012EA50  7C 08 02 A6 */	mflr r0
/* 80131974 0012EA54  3C 60 80 3C */	lis r3, globals@ha
/* 80131978 0012EA58  90 01 00 34 */	stw r0, 0x34(r1)
/* 8013197C 0012EA5C  38 63 05 58 */	addi r3, r3, globals@l
/* 80131980 0012EA60  38 81 00 08 */	addi r4, r1, 0x8
/* 80131984 0012EA64  DB E1 00 28 */	stfd f31, 0x28(r1)
/* 80131988 0012EA68  FF E0 08 90 */	fmr f31, f1
/* 8013198C 0012EA6C  93 E1 00 24 */	stw r31, 0x24(r1)
/* 80131990 0012EA70  80 63 07 04 */	lwz r3, 0x704(r3)
/* 80131994 0012EA74  83 E3 00 4C */	lwz r31, 0x4c(r3)
/* 80131998 0012EA78  7F E3 FB 78 */	mr r3, r31
/* 8013199C 0012EA7C  4B F0 04 99 */	bl xMat3x3GetEuler__FPC7xMat3x3P5xVec3
/* 801319A0 0012EA80  D3 E1 00 08 */	stfs f31, 0x8(r1)
/* 801319A4 0012EA84  7F E3 FB 78 */	mr r3, r31
/* 801319A8 0012EA88  38 81 00 08 */	addi r4, r1, 0x8
/* 801319AC 0012EA8C  4B F0 07 F9 */	bl xMat3x3Euler__FP7xMat3x3PC5xVec3
/* 801319B0 0012EA90  80 01 00 34 */	lwz r0, 0x34(r1)
/* 801319B4 0012EA94  CB E1 00 28 */	lfd f31, 0x28(r1)
/* 801319B8 0012EA98  83 E1 00 24 */	lwz r31, 0x24(r1)
/* 801319BC 0012EA9C  7C 08 03 A6 */	mtlr r0
/* 801319C0 0012EAA0  38 21 00 30 */	addi r1, r1, 0x30
/* 801319C4 0012EAA4  4E 80 00 20 */	blr
.endfn "turn_player__22@unnamed@zTalkBox_cpp@Ff"

# @unnamed@zTalkBox_cpp@::trigger_teleport(const xtextbox::jot&)
.fn "trigger_teleport__22@unnamed@zTalkBox_cpp@FRCQ28xtextbox3jot", local
/* 801319C8 0012EAA8  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801319CC 0012EAAC  7C 08 02 A6 */	mflr r0
/* 801319D0 0012EAB0  90 01 00 14 */	stw r0, 0x14(r1)
/* 801319D4 0012EAB4  A0 03 00 0C */	lhz r0, 0xc(r3)
/* 801319D8 0012EAB8  93 E1 00 0C */	stw r31, 0xc(r1)
/* 801319DC 0012EABC  28 00 00 14 */	cmplwi r0, 0x14
/* 801319E0 0012EAC0  41 82 00 0C */	beq .L_801319EC
/* 801319E4 0012EAC4  38 60 00 01 */	li r3, 0x1
/* 801319E8 0012EAC8  48 00 00 34 */	b .L_80131A1C
.L_801319EC:
/* 801319EC 0012EACC  83 E3 00 10 */	lwz r31, 0x10(r3)
/* 801319F0 0012EAD0  88 1F 00 00 */	lbz r0, 0x0(r31)
/* 801319F4 0012EAD4  28 00 00 00 */	cmplwi r0, 0x0
/* 801319F8 0012EAD8  41 82 00 0C */	beq .L_80131A04
/* 801319FC 0012EADC  38 7F 00 04 */	addi r3, r31, 0x4
/* 80131A00 0012EAE0  4B FF FF 19 */	bl "move_player__22@unnamed@zTalkBox_cpp@FRC5xVec3"
.L_80131A04:
/* 80131A04 0012EAE4  88 1F 00 01 */	lbz r0, 0x1(r31)
/* 80131A08 0012EAE8  28 00 00 00 */	cmplwi r0, 0x0
/* 80131A0C 0012EAEC  41 82 00 0C */	beq .L_80131A18
/* 80131A10 0012EAF0  C0 3F 00 10 */	lfs f1, 0x10(r31)
/* 80131A14 0012EAF4  4B FF FF 59 */	bl "turn_player__22@unnamed@zTalkBox_cpp@Ff"
.L_80131A18:
/* 80131A18 0012EAF8  38 60 00 01 */	li r3, 0x1
.L_80131A1C:
/* 80131A1C 0012EAFC  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80131A20 0012EB00  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80131A24 0012EB04  7C 08 03 A6 */	mtlr r0
/* 80131A28 0012EB08  38 21 00 10 */	addi r1, r1, 0x10
/* 80131A2C 0012EB0C  4E 80 00 20 */	blr
.endfn "trigger_teleport__22@unnamed@zTalkBox_cpp@FRCQ28xtextbox3jot"

# @unnamed@zTalkBox_cpp@::parse_tag_trap(xtextbox::jot&, const xtextbox&, const xtextbox&, const xtextbox::split_tag&)
.fn "parse_tag_trap__22@unnamed@zTalkBox_cpp@FRQ28xtextbox3jotRC8xtextboxRC8xtextboxRCQ28xtextbox9split_tag", local
/* 80131A30 0012EB10  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80131A34 0012EB14  7C 08 02 A6 */	mflr r0
/* 80131A38 0012EB18  90 01 00 14 */	stw r0, 0x14(r1)
/* 80131A3C 0012EB1C  80 06 00 14 */	lwz r0, 0x14(r6)
/* 80131A40 0012EB20  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80131A44 0012EB24  3B E0 00 00 */	li r31, 0x0
/* 80131A48 0012EB28  28 00 00 01 */	cmplwi r0, 0x1
/* 80131A4C 0012EB2C  93 C1 00 08 */	stw r30, 0x8(r1)
/* 80131A50 0012EB30  7C 7E 1B 78 */	mr r30, r3
/* 80131A54 0012EB34  40 82 00 28 */	bne .L_80131A7C
/* 80131A58 0012EB38  80 66 00 10 */	lwz r3, 0x10(r6)
/* 80131A5C 0012EB3C  88 03 00 00 */	lbz r0, 0x0(r3)
/* 80131A60 0012EB40  28 00 00 3D */	cmplwi r0, 0x3d
/* 80131A64 0012EB44  40 82 00 18 */	bne .L_80131A7C
/* 80131A68 0012EB48  38 66 00 18 */	addi r3, r6, 0x18
/* 80131A6C 0012EB4C  38 80 00 01 */	li r4, 0x1
/* 80131A70 0012EB50  4B FF EE 09 */	bl "read_bool__22@unnamed@zTalkBox_cpp@FRC6substrb"
/* 80131A74 0012EB54  54 60 06 3F */	clrlwi. r0, r3, 24
/* 80131A78 0012EB58  41 82 00 08 */	beq .L_80131A80
.L_80131A7C:
/* 80131A7C 0012EB5C  3B E0 00 01 */	li r31, 0x1
.L_80131A80:
/* 80131A80 0012EB60  9B FE 00 10 */	stb r31, 0x10(r30)
/* 80131A84 0012EB64  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80131A88 0012EB68  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80131A8C 0012EB6C  83 C1 00 08 */	lwz r30, 0x8(r1)
/* 80131A90 0012EB70  7C 08 03 A6 */	mtlr r0
/* 80131A94 0012EB74  38 21 00 10 */	addi r1, r1, 0x10
/* 80131A98 0012EB78  4E 80 00 20 */	blr
.endfn "parse_tag_trap__22@unnamed@zTalkBox_cpp@FRQ28xtextbox3jotRC8xtextboxRC8xtextboxRCQ28xtextbox9split_tag"

# @unnamed@zTalkBox_cpp@::reset_tag_trap(xtextbox::jot&, const xtextbox&, const xtextbox&, const xtextbox::split_tag&)
.fn "reset_tag_trap__22@unnamed@zTalkBox_cpp@FRQ28xtextbox3jotRC8xtextboxRC8xtextboxRCQ28xtextbox9split_tag", local
/* 80131A9C 0012EB7C  3C 80 80 32 */	lis r4, "shared__22@unnamed@zTalkBox_cpp@"@ha
/* 80131AA0 0012EB80  38 84 B3 20 */	addi r4, r4, "shared__22@unnamed@zTalkBox_cpp@"@l
/* 80131AA4 0012EB84  80 C4 00 08 */	lwz r6, 0x8(r4)
/* 80131AA8 0012EB88  28 06 00 00 */	cmplwi r6, 0x0
/* 80131AAC 0012EB8C  4D 82 00 20 */	beqlr
/* 80131AB0 0012EB90  80 86 00 18 */	lwz r4, 0x18(r6)
/* 80131AB4 0012EB94  38 04 00 18 */	addi r0, r4, 0x18
/* 80131AB8 0012EB98  7C 00 28 40 */	cmplw r0, r5
/* 80131ABC 0012EB9C  4C 82 00 20 */	bnelr
/* 80131AC0 0012EBA0  80 86 00 14 */	lwz r4, 0x14(r6)
/* 80131AC4 0012EBA4  88 84 00 1C */	lbz r4, 0x1c(r4)
/* 80131AC8 0012EBA8  7C 04 00 D0 */	neg r0, r4
/* 80131ACC 0012EBAC  7C 00 23 78 */	or r0, r0, r4
/* 80131AD0 0012EBB0  54 00 0F FE */	srwi r0, r0, 31
/* 80131AD4 0012EBB4  98 03 00 10 */	stb r0, 0x10(r3)
/* 80131AD8 0012EBB8  4E 80 00 20 */	blr
.endfn "reset_tag_trap__22@unnamed@zTalkBox_cpp@FRQ28xtextbox3jotRC8xtextboxRC8xtextboxRCQ28xtextbox9split_tag"

# @unnamed@zTalkBox_cpp@::trigger_trap(const xtextbox::jot&)
.fn "trigger_trap__22@unnamed@zTalkBox_cpp@FRCQ28xtextbox3jot", local
/* 80131ADC 0012EBBC  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80131AE0 0012EBC0  7C 08 02 A6 */	mflr r0
/* 80131AE4 0012EBC4  90 01 00 14 */	stw r0, 0x14(r1)
/* 80131AE8 0012EBC8  80 03 00 10 */	lwz r0, 0x10(r3)
/* 80131AEC 0012EBCC  28 00 00 00 */	cmplwi r0, 0x0
/* 80131AF0 0012EBD0  41 82 00 10 */	beq .L_80131B00
/* 80131AF4 0012EBD4  38 60 00 10 */	li r3, 0x10
/* 80131AF8 0012EBD8  4B F3 4A 61 */	bl zEntPlayerControlOff__F13zControlOwner
/* 80131AFC 0012EBDC  48 00 00 0C */	b .L_80131B08
.L_80131B00:
/* 80131B00 0012EBE0  38 60 00 10 */	li r3, 0x10
/* 80131B04 0012EBE4  4B F3 49 FD */	bl zEntPlayerControlOn__F13zControlOwner
.L_80131B08:
/* 80131B08 0012EBE8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80131B0C 0012EBEC  38 60 00 01 */	li r3, 0x1
/* 80131B10 0012EBF0  7C 08 03 A6 */	mtlr r0
/* 80131B14 0012EBF4  38 21 00 10 */	addi r1, r1, 0x10
/* 80131B18 0012EBF8  4E 80 00 20 */	blr
.endfn "trigger_trap__22@unnamed@zTalkBox_cpp@FRCQ28xtextbox3jot"

# @unnamed@zTalkBox_cpp@::parse_tag_wait(xtextbox::jot&, const xtextbox&, const xtextbox&, const xtextbox::split_tag&)
.fn "parse_tag_wait__22@unnamed@zTalkBox_cpp@FRQ28xtextbox3jotRC8xtextboxRC8xtextboxRCQ28xtextbox9split_tag", local
/* 80131B1C 0012EBFC  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 80131B20 0012EC00  7C 08 02 A6 */	mflr r0
/* 80131B24 0012EC04  3C 80 80 32 */	lis r4, "shared__22@unnamed@zTalkBox_cpp@"@ha
/* 80131B28 0012EC08  90 01 00 24 */	stw r0, 0x24(r1)
/* 80131B2C 0012EC0C  38 84 B3 20 */	addi r4, r4, "shared__22@unnamed@zTalkBox_cpp@"@l
/* 80131B30 0012EC10  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 80131B34 0012EC14  80 84 00 08 */	lwz r4, 0x8(r4)
/* 80131B38 0012EC18  28 04 00 00 */	cmplwi r4, 0x0
/* 80131B3C 0012EC1C  41 82 00 6C */	beq .L_80131BA8
/* 80131B40 0012EC20  80 84 00 18 */	lwz r4, 0x18(r4)
/* 80131B44 0012EC24  38 04 00 18 */	addi r0, r4, 0x18
/* 80131B48 0012EC28  7C 00 28 40 */	cmplw r0, r5
/* 80131B4C 0012EC2C  40 82 00 5C */	bne .L_80131BA8
/* 80131B50 0012EC30  83 E3 00 10 */	lwz r31, 0x10(r3)
/* 80131B54 0012EC34  38 00 00 10 */	li r0, 0x10
/* 80131B58 0012EC38  B0 03 00 0C */	sth r0, 0xc(r3)
/* 80131B5C 0012EC3C  7C C3 33 78 */	mr r3, r6
/* 80131B60 0012EC40  4B EF 0D A9 */	bl read_tag__8xtextboxFRC6substr
/* 80131B64 0012EC44  28 04 00 01 */	cmplwi r4, 0x1
/* 80131B68 0012EC48  90 81 00 0C */	stw r4, 0xc(r1)
/* 80131B6C 0012EC4C  90 61 00 08 */	stw r3, 0x8(r1)
/* 80131B70 0012EC50  40 82 00 2C */	bne .L_80131B9C
/* 80131B74 0012EC54  80 03 00 10 */	lwz r0, 0x10(r3)
/* 80131B78 0012EC58  28 00 00 00 */	cmplwi r0, 0x0
/* 80131B7C 0012EC5C  40 82 00 20 */	bne .L_80131B9C
/* 80131B80 0012EC60  3C 80 80 32 */	lis r4, "shared__22@unnamed@zTalkBox_cpp@"@ha
/* 80131B84 0012EC64  7F E3 FB 78 */	mr r3, r31
/* 80131B88 0012EC68  38 84 B3 20 */	addi r4, r4, "shared__22@unnamed@zTalkBox_cpp@"@l
/* 80131B8C 0012EC6C  3C 84 00 01 */	addis r4, r4, 0x1
/* 80131B90 0012EC70  38 84 8D 38 */	addi r4, r4, -0x72c8
/* 80131B94 0012EC74  4B FF F1 E9 */	bl "__as__Q222@unnamed@zTalkBox_cpp@12wait_contextFRCQ222@unnamed@zTalkBox_cpp@12wait_context"
/* 80131B98 0012EC78  48 00 00 10 */	b .L_80131BA8
.L_80131B9C:
/* 80131B9C 0012EC7C  7F E3 FB 78 */	mr r3, r31
/* 80131BA0 0012EC80  38 81 00 08 */	addi r4, r1, 0x8
/* 80131BA4 0012EC84  4B FF EE 45 */	bl "load_wait_context__22@unnamed@zTalkBox_cpp@FRQ222@unnamed@zTalkBox_cpp@12wait_contextRCQ28xtextbox14tag_entry_list"
.L_80131BA8:
/* 80131BA8 0012EC88  80 01 00 24 */	lwz r0, 0x24(r1)
/* 80131BAC 0012EC8C  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 80131BB0 0012EC90  7C 08 03 A6 */	mtlr r0
/* 80131BB4 0012EC94  38 21 00 20 */	addi r1, r1, 0x20
/* 80131BB8 0012EC98  4E 80 00 20 */	blr
.endfn "parse_tag_wait__22@unnamed@zTalkBox_cpp@FRQ28xtextbox3jotRC8xtextboxRC8xtextboxRCQ28xtextbox9split_tag"

# @unnamed@zTalkBox_cpp@::trigger_wait(const xtextbox::jot&)
.fn "trigger_wait__22@unnamed@zTalkBox_cpp@FRCQ28xtextbox3jot", local
/* 80131BBC 0012EC9C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80131BC0 0012ECA0  7C 08 02 A6 */	mflr r0
/* 80131BC4 0012ECA4  3C A0 80 32 */	lis r5, "shared__22@unnamed@zTalkBox_cpp@"@ha
/* 80131BC8 0012ECA8  80 83 00 10 */	lwz r4, 0x10(r3)
/* 80131BCC 0012ECAC  38 65 B3 20 */	addi r3, r5, "shared__22@unnamed@zTalkBox_cpp@"@l
/* 80131BD0 0012ECB0  90 01 00 14 */	stw r0, 0x14(r1)
/* 80131BD4 0012ECB4  3C 63 00 01 */	addis r3, r3, 0x1
/* 80131BD8 0012ECB8  88 03 8D 79 */	lbz r0, -0x7287(r3)
/* 80131BDC 0012ECBC  28 00 00 00 */	cmplwi r0, 0x0
/* 80131BE0 0012ECC0  41 82 00 24 */	beq .L_80131C04
/* 80131BE4 0012ECC4  88 03 8D 78 */	lbz r0, -0x7288(r3)
/* 80131BE8 0012ECC8  28 00 00 00 */	cmplwi r0, 0x0
/* 80131BEC 0012ECCC  41 82 00 18 */	beq .L_80131C04
/* 80131BF0 0012ECD0  88 04 00 02 */	lbz r0, 0x2(r4)
/* 80131BF4 0012ECD4  28 00 00 00 */	cmplwi r0, 0x0
/* 80131BF8 0012ECD8  40 82 00 0C */	bne .L_80131C04
/* 80131BFC 0012ECDC  38 60 00 01 */	li r3, 0x1
/* 80131C00 0012ECE0  48 00 00 1C */	b .L_80131C1C
.L_80131C04:
/* 80131C04 0012ECE4  3C 60 80 32 */	lis r3, "shared__22@unnamed@zTalkBox_cpp@"@ha
/* 80131C08 0012ECE8  38 63 B3 20 */	addi r3, r3, "shared__22@unnamed@zTalkBox_cpp@"@l
/* 80131C0C 0012ECEC  3C 63 00 01 */	addis r3, r3, 0x1
/* 80131C10 0012ECF0  38 63 8D 28 */	addi r3, r3, -0x72d8
/* 80131C14 0012ECF4  4B FF F1 69 */	bl "__as__Q222@unnamed@zTalkBox_cpp@12wait_contextFRCQ222@unnamed@zTalkBox_cpp@12wait_context"
/* 80131C18 0012ECF8  38 60 00 00 */	li r3, 0x0
.L_80131C1C:
/* 80131C1C 0012ECFC  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80131C20 0012ED00  7C 08 03 A6 */	mtlr r0
/* 80131C24 0012ED04  38 21 00 10 */	addi r1, r1, 0x10
/* 80131C28 0012ED08  4E 80 00 20 */	blr
.endfn "trigger_wait__22@unnamed@zTalkBox_cpp@FRCQ28xtextbox3jot"

# @unnamed@zTalkBox_cpp@::start_audio_effect(ztalkbox&)
.fn "start_audio_effect__22@unnamed@zTalkBox_cpp@FR8ztalkbox", local
/* 80131C2C 0012ED0C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80131C30 0012ED10  7C 08 02 A6 */	mflr r0
/* 80131C34 0012ED14  90 01 00 14 */	stw r0, 0x14(r1)
/* 80131C38 0012ED18  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80131C3C 0012ED1C  7C 7F 1B 78 */	mr r31, r3
/* 80131C40 0012ED20  88 0D 95 FD */	lbz r0, init$1503@sda21(r13)
/* 80131C44 0012ED24  7C 00 07 75 */	extsb. r0, r0
/* 80131C48 0012ED28  40 82 00 14 */	bne .L_80131C5C
/* 80131C4C 0012ED2C  38 60 00 00 */	li r3, 0x0
/* 80131C50 0012ED30  38 00 00 01 */	li r0, 0x1
/* 80131C54 0012ED34  98 6D 95 FC */	stb r3, registered$1502@sda21(r13)
/* 80131C58 0012ED38  98 0D 95 FD */	stb r0, init$1503@sda21(r13)
.L_80131C5C:
/* 80131C5C 0012ED3C  88 0D 95 FC */	lbz r0, registered$1502@sda21(r13)
/* 80131C60 0012ED40  28 00 00 00 */	cmplwi r0, 0x0
/* 80131C64 0012ED44  40 82 00 5C */	bne .L_80131CC0
/* 80131C68 0012ED48  38 00 00 01 */	li r0, 0x1
/* 80131C6C 0012ED4C  3C 60 80 27 */	lis r3, "@stringBase0"@ha
/* 80131C70 0012ED50  98 0D 95 FC */	stb r0, registered$1502@sda21(r13)
/* 80131C74 0012ED54  38 63 C9 20 */	addi r3, r3, "@stringBase0"@l
/* 80131C78 0012ED58  38 63 00 BA */	addi r3, r3, 0xba
/* 80131C7C 0012ED5C  38 8D 84 6C */	addi r4, r13, "music_fade__22@unnamed@zTalkBox_cpp@"@sda21
/* 80131C80 0012ED60  C0 22 A3 28 */	lfs f1, "@1032"@sda21(r2)
/* 80131C84 0012ED64  38 A0 00 00 */	li r5, 0x0
/* 80131C88 0012ED68  C0 42 A3 2C */	lfs f2, "@1150"@sda21(r2)
/* 80131C8C 0012ED6C  38 C0 00 00 */	li r6, 0x0
/* 80131C90 0012ED70  38 E0 00 00 */	li r7, 0x0
/* 80131C94 0012ED74  4B EF E9 99 */	bl xDebugAddTweak__FPCcPfffPC14tweak_callbackPvUi
/* 80131C98 0012ED78  3C 60 80 27 */	lis r3, "@stringBase0"@ha
/* 80131C9C 0012ED7C  C0 22 A3 28 */	lfs f1, "@1032"@sda21(r2)
/* 80131CA0 0012ED80  38 63 C9 20 */	addi r3, r3, "@stringBase0"@l
/* 80131CA4 0012ED84  C0 42 A3 34 */	lfs f2, "@1514"@sda21(r2)
/* 80131CA8 0012ED88  38 63 00 CF */	addi r3, r3, 0xcf
/* 80131CAC 0012ED8C  38 8D 84 70 */	addi r4, r13, "music_fade_delay__22@unnamed@zTalkBox_cpp@"@sda21
/* 80131CB0 0012ED90  38 A0 00 00 */	li r5, 0x0
/* 80131CB4 0012ED94  38 C0 00 00 */	li r6, 0x0
/* 80131CB8 0012ED98  38 E0 00 00 */	li r7, 0x0
/* 80131CBC 0012ED9C  4B EF E9 71 */	bl xDebugAddTweak__FPCcPfffPC14tweak_callbackPvUi
.L_80131CC0:
/* 80131CC0 0012EDA0  80 7F 00 14 */	lwz r3, 0x14(r31)
/* 80131CC4 0012EDA4  88 03 00 23 */	lbz r0, 0x23(r3)
/* 80131CC8 0012EDA8  2C 00 00 01 */	cmpwi r0, 0x1
/* 80131CCC 0012EDAC  41 82 00 0C */	beq .L_80131CD8
/* 80131CD0 0012EDB0  40 80 00 14 */	bge .L_80131CE4
/* 80131CD4 0012EDB4  48 00 00 10 */	b .L_80131CE4
.L_80131CD8:
/* 80131CD8 0012EDB8  C0 2D 84 6C */	lfs f1, "music_fade__22@unnamed@zTalkBox_cpp@"@sda21(r13)
/* 80131CDC 0012EDBC  C0 4D 84 70 */	lfs f2, "music_fade_delay__22@unnamed@zTalkBox_cpp@"@sda21(r13)
/* 80131CE0 0012EDC0  4B F7 5F 81 */	bl zMusicSetVolume__Fff
.L_80131CE4:
/* 80131CE4 0012EDC4  80 7F 00 14 */	lwz r3, 0x14(r31)
/* 80131CE8 0012EDC8  88 03 00 1C */	lbz r0, 0x1c(r3)
/* 80131CEC 0012EDCC  28 00 00 00 */	cmplwi r0, 0x0
/* 80131CF0 0012EDD0  41 82 00 08 */	beq .L_80131CF8
/* 80131CF4 0012EDD4  4B F4 F5 F1 */	bl zEntPlayer_SNDStopStream__Fv
.L_80131CF8:
/* 80131CF8 0012EDD8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80131CFC 0012EDDC  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80131D00 0012EDE0  7C 08 03 A6 */	mtlr r0
/* 80131D04 0012EDE4  38 21 00 10 */	addi r1, r1, 0x10
/* 80131D08 0012EDE8  4E 80 00 20 */	blr
.endfn "start_audio_effect__22@unnamed@zTalkBox_cpp@FR8ztalkbox"

# @unnamed@zTalkBox_cpp@::stop_audio_effect()
.fn "stop_audio_effect__22@unnamed@zTalkBox_cpp@Fv", local
/* 80131D0C 0012EDEC  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80131D10 0012EDF0  7C 08 02 A6 */	mflr r0
/* 80131D14 0012EDF4  3C 60 80 32 */	lis r3, "shared__22@unnamed@zTalkBox_cpp@"@ha
/* 80131D18 0012EDF8  90 01 00 14 */	stw r0, 0x14(r1)
/* 80131D1C 0012EDFC  38 63 B3 20 */	addi r3, r3, "shared__22@unnamed@zTalkBox_cpp@"@l
/* 80131D20 0012EE00  80 63 00 08 */	lwz r3, 0x8(r3)
/* 80131D24 0012EE04  28 03 00 00 */	cmplwi r3, 0x0
/* 80131D28 0012EE08  41 82 00 28 */	beq .L_80131D50
/* 80131D2C 0012EE0C  80 63 00 14 */	lwz r3, 0x14(r3)
/* 80131D30 0012EE10  88 03 00 23 */	lbz r0, 0x23(r3)
/* 80131D34 0012EE14  2C 00 00 01 */	cmpwi r0, 0x1
/* 80131D38 0012EE18  41 82 00 0C */	beq .L_80131D44
/* 80131D3C 0012EE1C  40 80 00 14 */	bge .L_80131D50
/* 80131D40 0012EE20  48 00 00 10 */	b .L_80131D50
.L_80131D44:
/* 80131D44 0012EE24  C0 22 A3 2C */	lfs f1, "@1150"@sda21(r2)
/* 80131D48 0012EE28  C0 4D 84 70 */	lfs f2, "music_fade_delay__22@unnamed@zTalkBox_cpp@"@sda21(r13)
/* 80131D4C 0012EE2C  4B F7 5F 15 */	bl zMusicSetVolume__Fff
.L_80131D50:
/* 80131D50 0012EE30  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80131D54 0012EE34  7C 08 03 A6 */	mtlr r0
/* 80131D58 0012EE38  38 21 00 10 */	addi r1, r1, 0x10
/* 80131D5C 0012EE3C  4E 80 00 20 */	blr
.endfn "stop_audio_effect__22@unnamed@zTalkBox_cpp@Fv"

# @unnamed@zTalkBox_cpp@::deactivate()
.fn "deactivate__22@unnamed@zTalkBox_cpp@Fv", local
/* 80131D60 0012EE40  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80131D64 0012EE44  7C 08 02 A6 */	mflr r0
/* 80131D68 0012EE48  90 01 00 14 */	stw r0, 0x14(r1)
/* 80131D6C 0012EE4C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80131D70 0012EE50  93 C1 00 08 */	stw r30, 0x8(r1)
/* 80131D74 0012EE54  4B FF FF 99 */	bl "stop_audio_effect__22@unnamed@zTalkBox_cpp@Fv"
/* 80131D78 0012EE58  3C 60 80 32 */	lis r3, "shared__22@unnamed@zTalkBox_cpp@"@ha
/* 80131D7C 0012EE5C  3B E3 B3 20 */	addi r31, r3, "shared__22@unnamed@zTalkBox_cpp@"@l
/* 80131D80 0012EE60  83 DF 00 08 */	lwz r30, 0x8(r31)
/* 80131D84 0012EE64  28 1E 00 00 */	cmplwi r30, 0x0
/* 80131D88 0012EE68  41 82 00 2C */	beq .L_80131DB4
/* 80131D8C 0012EE6C  80 7E 00 1C */	lwz r3, 0x1c(r30)
/* 80131D90 0012EE70  28 03 00 00 */	cmplwi r3, 0x0
/* 80131D94 0012EE74  41 82 00 08 */	beq .L_80131D9C
/* 80131D98 0012EE78  48 00 28 55 */	bl deactivate__8ztextboxFv
.L_80131D9C:
/* 80131D9C 0012EE7C  38 80 00 00 */	li r4, 0x0
/* 80131DA0 0012EE80  90 9F 00 08 */	stw r4, 0x8(r31)
/* 80131DA4 0012EE84  80 7E 00 18 */	lwz r3, 0x18(r30)
/* 80131DA8 0012EE88  88 03 00 10 */	lbz r0, 0x10(r3)
/* 80131DAC 0012EE8C  50 80 26 F6 */	rlwimi r0, r4, 4, 27, 27
/* 80131DB0 0012EE90  98 03 00 10 */	stb r0, 0x10(r3)
.L_80131DB4:
/* 80131DB4 0012EE94  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80131DB8 0012EE98  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80131DBC 0012EE9C  83 C1 00 08 */	lwz r30, 0x8(r1)
/* 80131DC0 0012EEA0  7C 08 03 A6 */	mtlr r0
/* 80131DC4 0012EEA4  38 21 00 10 */	addi r1, r1, 0x10
/* 80131DC8 0012EEA8  4E 80 00 20 */	blr
.endfn "deactivate__22@unnamed@zTalkBox_cpp@Fv"

# @unnamed@zTalkBox_cpp@::activate(ztalkbox&)
.fn "activate__22@unnamed@zTalkBox_cpp@FR8ztalkbox", local
/* 80131DCC 0012EEAC  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80131DD0 0012EEB0  7C 08 02 A6 */	mflr r0
/* 80131DD4 0012EEB4  90 01 00 14 */	stw r0, 0x14(r1)
/* 80131DD8 0012EEB8  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80131DDC 0012EEBC  7C 7F 1B 78 */	mr r31, r3
/* 80131DE0 0012EEC0  4B FF FF 81 */	bl "deactivate__22@unnamed@zTalkBox_cpp@Fv"
/* 80131DE4 0012EEC4  3C 60 80 32 */	lis r3, "shared__22@unnamed@zTalkBox_cpp@"@ha
/* 80131DE8 0012EEC8  38 63 B3 20 */	addi r3, r3, "shared__22@unnamed@zTalkBox_cpp@"@l
/* 80131DEC 0012EECC  93 E3 00 08 */	stw r31, 0x8(r3)
/* 80131DF0 0012EED0  80 7F 00 18 */	lwz r3, 0x18(r31)
/* 80131DF4 0012EED4  88 03 00 10 */	lbz r0, 0x10(r3)
/* 80131DF8 0012EED8  54 00 CF FF */	extrwi. r0, r0, 1, 24
/* 80131DFC 0012EEDC  41 82 00 08 */	beq .L_80131E04
/* 80131E00 0012EEE0  48 00 27 ED */	bl deactivate__8ztextboxFv
.L_80131E04:
/* 80131E04 0012EEE4  80 7F 00 1C */	lwz r3, 0x1c(r31)
/* 80131E08 0012EEE8  28 03 00 00 */	cmplwi r3, 0x0
/* 80131E0C 0012EEEC  41 82 00 14 */	beq .L_80131E20
/* 80131E10 0012EEF0  88 1F 00 10 */	lbz r0, 0x10(r31)
/* 80131E14 0012EEF4  54 00 CF FF */	extrwi. r0, r0, 1, 24
/* 80131E18 0012EEF8  41 82 00 08 */	beq .L_80131E20
/* 80131E1C 0012EEFC  48 00 27 85 */	bl activate__8ztextboxFv
.L_80131E20:
/* 80131E20 0012EF00  7F E3 FB 78 */	mr r3, r31
/* 80131E24 0012EF04  4B FF FE 09 */	bl "start_audio_effect__22@unnamed@zTalkBox_cpp@FR8ztalkbox"
/* 80131E28 0012EF08  80 7F 00 18 */	lwz r3, 0x18(r31)
/* 80131E2C 0012EF0C  38 80 00 01 */	li r4, 0x1
/* 80131E30 0012EF10  88 03 00 10 */	lbz r0, 0x10(r3)
/* 80131E34 0012EF14  50 80 26 F6 */	rlwimi r0, r4, 4, 27, 27
/* 80131E38 0012EF18  98 03 00 10 */	stb r0, 0x10(r3)
/* 80131E3C 0012EF1C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80131E40 0012EF20  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80131E44 0012EF24  7C 08 03 A6 */	mtlr r0
/* 80131E48 0012EF28  38 21 00 10 */	addi r1, r1, 0x10
/* 80131E4C 0012EF2C  4E 80 00 20 */	blr
.endfn "activate__22@unnamed@zTalkBox_cpp@FR8ztalkbox"

# @unnamed@zTalkBox_cpp@::is_wait_jot(const xtextbox::jot&)
.fn "is_wait_jot__22@unnamed@zTalkBox_cpp@FRCQ28xtextbox3jot", local
/* 80131E50 0012EF30  80 A3 00 38 */	lwz r5, 0x38(r3)
/* 80131E54 0012EF34  38 60 00 00 */	li r3, 0x0
/* 80131E58 0012EF38  28 05 00 00 */	cmplwi r5, 0x0
/* 80131E5C 0012EF3C  4D 82 00 20 */	beqlr
/* 80131E60 0012EF40  3C 80 80 13 */	lis r4, "parse_tag_wait__22@unnamed@zTalkBox_cpp@FRQ28xtextbox3jotRC8xtextboxRC8xtextboxRCQ28xtextbox9split_tag"@ha
/* 80131E64 0012EF44  80 A5 00 08 */	lwz r5, 0x8(r5)
/* 80131E68 0012EF48  38 04 1B 1C */	addi r0, r4, "parse_tag_wait__22@unnamed@zTalkBox_cpp@FRQ28xtextbox3jotRC8xtextboxRC8xtextboxRCQ28xtextbox9split_tag"@l
/* 80131E6C 0012EF4C  7C 05 00 40 */	cmplw r5, r0
/* 80131E70 0012EF50  4C 82 00 20 */	bnelr
/* 80131E74 0012EF54  38 60 00 01 */	li r3, 0x1
/* 80131E78 0012EF58  4E 80 00 20 */	blr
.endfn "is_wait_jot__22@unnamed@zTalkBox_cpp@FRCQ28xtextbox3jot"

# @unnamed@zTalkBox_cpp@::layout_contains_streams()
.fn "layout_contains_streams__22@unnamed@zTalkBox_cpp@Fv", local
/* 80131E7C 0012EF5C  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 80131E80 0012EF60  7C 08 02 A6 */	mflr r0
/* 80131E84 0012EF64  3C 60 80 27 */	lis r3, "@stringBase0"@ha
/* 80131E88 0012EF68  38 80 00 05 */	li r4, 0x5
/* 80131E8C 0012EF6C  90 01 00 24 */	stw r0, 0x24(r1)
/* 80131E90 0012EF70  38 63 C9 20 */	addi r3, r3, "@stringBase0"@l
/* 80131E94 0012EF74  38 63 00 37 */	addi r3, r3, 0x37
/* 80131E98 0012EF78  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 80131E9C 0012EF7C  93 C1 00 18 */	stw r30, 0x18(r1)
/* 80131EA0 0012EF80  4B EF 44 85 */	bl create__6substrFPCcUl
/* 80131EA4 0012EF84  90 61 00 08 */	stw r3, 0x8(r1)
/* 80131EA8 0012EF88  38 61 00 08 */	addi r3, r1, 0x8
/* 80131EAC 0012EF8C  90 81 00 0C */	stw r4, 0xc(r1)
/* 80131EB0 0012EF90  4B EF 46 E1 */	bl find_format_tag__8xtextboxFRC6substr
/* 80131EB4 0012EF94  3C 80 80 32 */	lis r4, "shared__22@unnamed@zTalkBox_cpp@"@ha
/* 80131EB8 0012EF98  7C 7F 1B 78 */	mr r31, r3
/* 80131EBC 0012EF9C  38 64 B3 20 */	addi r3, r4, "shared__22@unnamed@zTalkBox_cpp@"@l
/* 80131EC0 0012EFA0  3B C3 00 24 */	addi r30, r3, 0x24
/* 80131EC4 0012EFA4  7F C3 F3 78 */	mr r3, r30
/* 80131EC8 0012EFA8  48 00 1F 69 */	bl jots__Q28xtextbox6layoutCFv
/* 80131ECC 0012EFAC  7C 60 1B 78 */	mr r0, r3
/* 80131ED0 0012EFB0  7F C3 F3 78 */	mr r3, r30
/* 80131ED4 0012EFB4  7C 1E 03 78 */	mr r30, r0
/* 80131ED8 0012EFB8  4B EF 46 DD */	bl jots_size__Q28xtextbox6layoutCFv
/* 80131EDC 0012EFBC  1C 03 00 3C */	mulli r0, r3, 0x3c
/* 80131EE0 0012EFC0  7C 9E 02 14 */	add r4, r30, r0
/* 80131EE4 0012EFC4  48 00 00 38 */	b .L_80131F1C
.L_80131EE8:
/* 80131EE8 0012EFC8  80 1E 00 38 */	lwz r0, 0x38(r30)
/* 80131EEC 0012EFCC  7C 00 F8 40 */	cmplw r0, r31
/* 80131EF0 0012EFD0  40 82 00 28 */	bne .L_80131F18
/* 80131EF4 0012EFD4  A0 1E 00 0C */	lhz r0, 0xc(r30)
/* 80131EF8 0012EFD8  28 00 00 18 */	cmplwi r0, 0x18
/* 80131EFC 0012EFDC  40 82 00 1C */	bne .L_80131F18
/* 80131F00 0012EFE0  80 7E 00 10 */	lwz r3, 0x10(r30)
/* 80131F04 0012EFE4  88 03 00 06 */	lbz r0, 0x6(r3)
/* 80131F08 0012EFE8  2C 00 00 01 */	cmpwi r0, 0x1
/* 80131F0C 0012EFEC  40 82 00 0C */	bne .L_80131F18
/* 80131F10 0012EFF0  38 60 00 01 */	li r3, 0x1
/* 80131F14 0012EFF4  48 00 00 14 */	b .L_80131F28
.L_80131F18:
/* 80131F18 0012EFF8  3B DE 00 3C */	addi r30, r30, 0x3c
.L_80131F1C:
/* 80131F1C 0012EFFC  7C 1E 20 40 */	cmplw r30, r4
/* 80131F20 0012F000  40 82 FF C8 */	bne .L_80131EE8
/* 80131F24 0012F004  38 60 00 00 */	li r3, 0x0
.L_80131F28:
/* 80131F28 0012F008  80 01 00 24 */	lwz r0, 0x24(r1)
/* 80131F2C 0012F00C  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 80131F30 0012F010  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 80131F34 0012F014  7C 08 03 A6 */	mtlr r0
/* 80131F38 0012F018  38 21 00 20 */	addi r1, r1, 0x20
/* 80131F3C 0012F01C  4E 80 00 20 */	blr
.endfn "layout_contains_streams__22@unnamed@zTalkBox_cpp@Fv"

# @unnamed@zTalkBox_cpp@::lock_stream()
.fn "lock_stream__22@unnamed@zTalkBox_cpp@Fv", local
/* 80131F40 0012F020  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80131F44 0012F024  7C 08 02 A6 */	mflr r0
/* 80131F48 0012F028  3C 60 80 32 */	lis r3, "shared__22@unnamed@zTalkBox_cpp@"@ha
/* 80131F4C 0012F02C  38 80 00 01 */	li r4, 0x1
/* 80131F50 0012F030  90 01 00 14 */	stw r0, 0x14(r1)
/* 80131F54 0012F034  38 63 B3 20 */	addi r3, r3, "shared__22@unnamed@zTalkBox_cpp@"@l
/* 80131F58 0012F038  38 A0 00 01 */	li r5, 0x1
/* 80131F5C 0012F03C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80131F60 0012F040  3F E3 00 01 */	addis r31, r3, 0x1
/* 80131F64 0012F044  3B FF 8D 56 */	addi r31, r31, -0x72aa
/* 80131F68 0012F048  7F E3 FB 78 */	mr r3, r31
/* 80131F6C 0012F04C  4B F1 78 39 */	bl xSndStreamLock__FUi14sound_categoryb
/* 80131F70 0012F050  3C 80 80 32 */	lis r4, "shared__22@unnamed@zTalkBox_cpp@"@ha
/* 80131F74 0012F054  98 7F 00 00 */	stb r3, 0x0(r31)
/* 80131F78 0012F058  38 64 B3 20 */	addi r3, r4, "shared__22@unnamed@zTalkBox_cpp@"@l
/* 80131F7C 0012F05C  38 80 00 01 */	li r4, 0x1
/* 80131F80 0012F060  3F E3 00 01 */	addis r31, r3, 0x1
/* 80131F84 0012F064  38 A0 00 01 */	li r5, 0x1
/* 80131F88 0012F068  3B FF 8D 57 */	addi r31, r31, -0x72a9
/* 80131F8C 0012F06C  7F E3 FB 78 */	mr r3, r31
/* 80131F90 0012F070  4B F1 78 15 */	bl xSndStreamLock__FUi14sound_categoryb
/* 80131F94 0012F074  98 7F 00 00 */	stb r3, 0x0(r31)
/* 80131F98 0012F078  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80131F9C 0012F07C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80131FA0 0012F080  7C 08 03 A6 */	mtlr r0
/* 80131FA4 0012F084  38 21 00 10 */	addi r1, r1, 0x10
/* 80131FA8 0012F088  4E 80 00 20 */	blr
.endfn "lock_stream__22@unnamed@zTalkBox_cpp@Fv"

# @unnamed@zTalkBox_cpp@::unlock_stream()
.fn "unlock_stream__22@unnamed@zTalkBox_cpp@Fv", local
/* 80131FAC 0012F08C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80131FB0 0012F090  7C 08 02 A6 */	mflr r0
/* 80131FB4 0012F094  3C 60 80 32 */	lis r3, "shared__22@unnamed@zTalkBox_cpp@"@ha
/* 80131FB8 0012F098  90 01 00 14 */	stw r0, 0x14(r1)
/* 80131FBC 0012F09C  38 63 B3 20 */	addi r3, r3, "shared__22@unnamed@zTalkBox_cpp@"@l
/* 80131FC0 0012F0A0  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80131FC4 0012F0A4  3F E3 00 01 */	addis r31, r3, 0x1
/* 80131FC8 0012F0A8  3B FF 8D 56 */	addi r31, r31, -0x72aa
/* 80131FCC 0012F0AC  93 C1 00 08 */	stw r30, 0x8(r1)
/* 80131FD0 0012F0B0  7F E3 FB 78 */	mr r3, r31
/* 80131FD4 0012F0B4  4B F1 79 89 */	bl xSndStreamUnlock__FUi
/* 80131FD8 0012F0B8  3C 60 80 32 */	lis r3, "shared__22@unnamed@zTalkBox_cpp@"@ha
/* 80131FDC 0012F0BC  38 63 B3 20 */	addi r3, r3, "shared__22@unnamed@zTalkBox_cpp@"@l
/* 80131FE0 0012F0C0  3F C3 00 01 */	addis r30, r3, 0x1
/* 80131FE4 0012F0C4  3B DE 8D 57 */	addi r30, r30, -0x72a9
/* 80131FE8 0012F0C8  7F C3 F3 78 */	mr r3, r30
/* 80131FEC 0012F0CC  4B F1 79 71 */	bl xSndStreamUnlock__FUi
/* 80131FF0 0012F0D0  38 00 00 00 */	li r0, 0x0
/* 80131FF4 0012F0D4  98 1F 00 00 */	stb r0, 0x0(r31)
/* 80131FF8 0012F0D8  98 1E 00 00 */	stb r0, 0x0(r30)
/* 80131FFC 0012F0DC  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80132000 0012F0E0  83 C1 00 08 */	lwz r30, 0x8(r1)
/* 80132004 0012F0E4  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80132008 0012F0E8  7C 08 03 A6 */	mtlr r0
/* 8013200C 0012F0EC  38 21 00 10 */	addi r1, r1, 0x10
/* 80132010 0012F0F0  4E 80 00 20 */	blr
.endfn "unlock_stream__22@unnamed@zTalkBox_cpp@Fv"

# @unnamed@zTalkBox_cpp@::refresh_prompts()
.fn "refresh_prompts__22@unnamed@zTalkBox_cpp@Fv", local
/* 80132014 0012F0F4  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 80132018 0012F0F8  7C 08 02 A6 */	mflr r0
/* 8013201C 0012F0FC  3C 60 80 32 */	lis r3, "shared__22@unnamed@zTalkBox_cpp@"@ha
/* 80132020 0012F100  90 01 00 24 */	stw r0, 0x24(r1)
/* 80132024 0012F104  38 83 B3 20 */	addi r4, r3, "shared__22@unnamed@zTalkBox_cpp@"@l
/* 80132028 0012F108  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 8013202C 0012F10C  83 E4 00 08 */	lwz r31, 0x8(r4)
/* 80132030 0012F110  80 7F 00 1C */	lwz r3, 0x1c(r31)
/* 80132034 0012F114  28 03 00 00 */	cmplwi r3, 0x0
/* 80132038 0012F118  41 82 00 80 */	beq .L_801320B8
/* 8013203C 0012F11C  3C E4 00 01 */	addis r7, r4, 0x1
/* 80132040 0012F120  88 07 8D 28 */	lbz r0, -0x72d8(r7)
/* 80132044 0012F124  54 00 D7 FF */	extrwi. r0, r0, 1, 25
/* 80132048 0012F128  41 82 00 44 */	beq .L_8013208C
/* 8013204C 0012F12C  88 07 8D 54 */	lbz r0, -0x72ac(r7)
/* 80132050 0012F130  28 00 00 00 */	cmplwi r0, 0x0
/* 80132054 0012F134  41 82 00 38 */	beq .L_8013208C
/* 80132058 0012F138  80 02 BF 68 */	lwz r0, "@1622"@sda21(r2)
/* 8013205C 0012F13C  38 81 00 08 */	addi r4, r1, 0x8
/* 80132060 0012F140  80 A2 BF 6C */	lwz r5, "@1622"+0x4@sda21(r2)
/* 80132064 0012F144  90 01 00 08 */	stw r0, 0x8(r1)
/* 80132068 0012F148  80 DF 00 24 */	lwz r6, 0x24(r31)
/* 8013206C 0012F14C  80 07 8D 34 */	lwz r0, -0x72cc(r7)
/* 80132070 0012F150  90 A1 00 0C */	stw r5, 0xc(r1)
/* 80132074 0012F154  80 BF 00 34 */	lwz r5, 0x34(r31)
/* 80132078 0012F158  54 00 10 3A */	slwi r0, r0, 2
/* 8013207C 0012F15C  90 C1 00 08 */	stw r6, 0x8(r1)
/* 80132080 0012F160  90 A1 00 0C */	stw r5, 0xc(r1)
/* 80132084 0012F164  7C 84 00 2E */	lwzx r4, r4, r0
/* 80132088 0012F168  48 00 00 08 */	b .L_80132090
.L_8013208C:
/* 8013208C 0012F16C  80 9F 00 28 */	lwz r4, 0x28(r31)
.L_80132090:
/* 80132090 0012F170  28 04 00 00 */	cmplwi r4, 0x0
/* 80132094 0012F174  41 82 00 20 */	beq .L_801320B4
/* 80132098 0012F178  48 00 25 B9 */	bl set_text__8ztextboxFPCc
/* 8013209C 0012F17C  88 1F 00 10 */	lbz r0, 0x10(r31)
/* 801320A0 0012F180  54 00 CF FF */	extrwi. r0, r0, 1, 24
/* 801320A4 0012F184  41 82 00 14 */	beq .L_801320B8
/* 801320A8 0012F188  80 7F 00 1C */	lwz r3, 0x1c(r31)
/* 801320AC 0012F18C  48 00 24 F5 */	bl activate__8ztextboxFv
/* 801320B0 0012F190  48 00 00 08 */	b .L_801320B8
.L_801320B4:
/* 801320B4 0012F194  48 00 25 39 */	bl deactivate__8ztextboxFv
.L_801320B8:
/* 801320B8 0012F198  80 7F 00 20 */	lwz r3, 0x20(r31)
/* 801320BC 0012F19C  28 03 00 00 */	cmplwi r3, 0x0
/* 801320C0 0012F1A0  41 82 00 A0 */	beq .L_80132160
/* 801320C4 0012F1A4  3C 80 80 32 */	lis r4, "shared__22@unnamed@zTalkBox_cpp@"@ha
/* 801320C8 0012F1A8  38 84 B3 20 */	addi r4, r4, "shared__22@unnamed@zTalkBox_cpp@"@l
/* 801320CC 0012F1AC  3C A4 00 01 */	addis r5, r4, 0x1
/* 801320D0 0012F1B0  88 C5 8D 78 */	lbz r6, -0x7288(r5)
/* 801320D4 0012F1B4  28 06 00 00 */	cmplwi r6, 0x0
/* 801320D8 0012F1B8  41 82 00 38 */	beq .L_80132110
/* 801320DC 0012F1BC  80 9F 00 2C */	lwz r4, 0x2c(r31)
/* 801320E0 0012F1C0  28 04 00 00 */	cmplwi r4, 0x0
/* 801320E4 0012F1C4  41 82 00 2C */	beq .L_80132110
/* 801320E8 0012F1C8  88 05 8D 55 */	lbz r0, -0x72ab(r5)
/* 801320EC 0012F1CC  28 00 00 00 */	cmplwi r0, 0x0
/* 801320F0 0012F1D0  41 82 00 20 */	beq .L_80132110
/* 801320F4 0012F1D4  48 00 25 5D */	bl set_text__8ztextboxFPCc
/* 801320F8 0012F1D8  88 1F 00 10 */	lbz r0, 0x10(r31)
/* 801320FC 0012F1DC  54 00 CF FF */	extrwi. r0, r0, 1, 24
/* 80132100 0012F1E0  41 82 00 60 */	beq .L_80132160
/* 80132104 0012F1E4  80 7F 00 20 */	lwz r3, 0x20(r31)
/* 80132108 0012F1E8  48 00 24 99 */	bl activate__8ztextboxFv
/* 8013210C 0012F1EC  48 00 00 54 */	b .L_80132160
.L_80132110:
/* 80132110 0012F1F0  28 06 00 00 */	cmplwi r6, 0x0
/* 80132114 0012F1F4  41 82 00 20 */	beq .L_80132134
/* 80132118 0012F1F8  3C 80 80 32 */	lis r4, "shared__22@unnamed@zTalkBox_cpp@"@ha
/* 8013211C 0012F1FC  C0 02 A3 28 */	lfs f0, "@1032"@sda21(r2)
/* 80132120 0012F200  38 84 B3 20 */	addi r4, r4, "shared__22@unnamed@zTalkBox_cpp@"@l
/* 80132124 0012F204  3C 84 00 01 */	addis r4, r4, 0x1
/* 80132128 0012F208  C0 24 8D 50 */	lfs f1, -0x72b0(r4)
/* 8013212C 0012F20C  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80132130 0012F210  40 81 00 2C */	ble .L_8013215C
.L_80132134:
/* 80132134 0012F214  80 9F 00 30 */	lwz r4, 0x30(r31)
/* 80132138 0012F218  28 04 00 00 */	cmplwi r4, 0x0
/* 8013213C 0012F21C  41 82 00 20 */	beq .L_8013215C
/* 80132140 0012F220  48 00 25 11 */	bl set_text__8ztextboxFPCc
/* 80132144 0012F224  88 1F 00 10 */	lbz r0, 0x10(r31)
/* 80132148 0012F228  54 00 CF FF */	extrwi. r0, r0, 1, 24
/* 8013214C 0012F22C  41 82 00 14 */	beq .L_80132160
/* 80132150 0012F230  80 7F 00 20 */	lwz r3, 0x20(r31)
/* 80132154 0012F234  48 00 24 4D */	bl activate__8ztextboxFv
/* 80132158 0012F238  48 00 00 08 */	b .L_80132160
.L_8013215C:
/* 8013215C 0012F23C  48 00 24 91 */	bl deactivate__8ztextboxFv
.L_80132160:
/* 80132160 0012F240  80 01 00 24 */	lwz r0, 0x24(r1)
/* 80132164 0012F244  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 80132168 0012F248  7C 08 03 A6 */	mtlr r0
/* 8013216C 0012F24C  38 21 00 20 */	addi r1, r1, 0x20
/* 80132170 0012F250  4E 80 00 20 */	blr
.endfn "refresh_prompts__22@unnamed@zTalkBox_cpp@Fv"

# @unnamed@zTalkBox_cpp@::update_prompt_status(float)
.fn "update_prompt_status__22@unnamed@zTalkBox_cpp@Ff", local
/* 80132174 0012F254  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80132178 0012F258  7C 08 02 A6 */	mflr r0
/* 8013217C 0012F25C  3C 60 80 32 */	lis r3, "shared__22@unnamed@zTalkBox_cpp@"@ha
/* 80132180 0012F260  90 01 00 14 */	stw r0, 0x14(r1)
/* 80132184 0012F264  38 83 B3 20 */	addi r4, r3, "shared__22@unnamed@zTalkBox_cpp@"@l
/* 80132188 0012F268  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8013218C 0012F26C  3F E4 00 01 */	addis r31, r4, 0x1
/* 80132190 0012F270  88 1F 8D 28 */	lbz r0, -0x72d8(r31)
/* 80132194 0012F274  54 00 D7 FF */	extrwi. r0, r0, 1, 25
/* 80132198 0012F278  41 82 00 64 */	beq .L_801321FC
/* 8013219C 0012F27C  88 1F 8D 54 */	lbz r0, -0x72ac(r31)
/* 801321A0 0012F280  28 00 00 00 */	cmplwi r0, 0x0
/* 801321A4 0012F284  40 82 00 58 */	bne .L_801321FC
/* 801321A8 0012F288  C0 1F 8D 4C */	lfs f0, -0x72b4(r31)
/* 801321AC 0012F28C  EC 00 08 28 */	fsubs f0, f0, f1
/* 801321B0 0012F290  D0 1F 8D 4C */	stfs f0, -0x72b4(r31)
/* 801321B4 0012F294  C0 3F 8D 4C */	lfs f1, -0x72b4(r31)
/* 801321B8 0012F298  C0 02 A3 28 */	lfs f0, "@1032"@sda21(r2)
/* 801321BC 0012F29C  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 801321C0 0012F2A0  41 81 00 3C */	bgt .L_801321FC
/* 801321C4 0012F2A4  80 BF 8D 58 */	lwz r5, -0x72a8(r31)
/* 801321C8 0012F2A8  7C 7F 2A 14 */	add r3, r31, r5
/* 801321CC 0012F2AC  88 03 8D 56 */	lbz r0, -0x72aa(r3)
/* 801321D0 0012F2B0  28 00 00 00 */	cmplwi r0, 0x0
/* 801321D4 0012F2B4  41 82 00 1C */	beq .L_801321F0
/* 801321D8 0012F2B8  7C 64 2A 14 */	add r3, r4, r5
/* 801321DC 0012F2BC  3C 63 00 01 */	addis r3, r3, 0x1
/* 801321E0 0012F2C0  38 63 8D 56 */	addi r3, r3, -0x72aa
/* 801321E4 0012F2C4  4B F1 77 2D */	bl xSndStreamReady__FUi
/* 801321E8 0012F2C8  54 60 06 3F */	clrlwi. r0, r3, 24
/* 801321EC 0012F2CC  41 82 00 10 */	beq .L_801321FC
.L_801321F0:
/* 801321F0 0012F2D0  38 00 00 01 */	li r0, 0x1
/* 801321F4 0012F2D4  98 1F 8D 54 */	stb r0, -0x72ac(r31)
/* 801321F8 0012F2D8  4B FF FE 1D */	bl "refresh_prompts__22@unnamed@zTalkBox_cpp@Fv"
.L_801321FC:
/* 801321FC 0012F2DC  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80132200 0012F2E0  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80132204 0012F2E4  7C 08 03 A6 */	mtlr r0
/* 80132208 0012F2E8  38 21 00 10 */	addi r1, r1, 0x10
/* 8013220C 0012F2EC  4E 80 00 20 */	blr
.endfn "update_prompt_status__22@unnamed@zTalkBox_cpp@Ff"

# @unnamed@zTalkBox_cpp@::update_quit_status(float)
.fn "update_quit_status__22@unnamed@zTalkBox_cpp@Ff", local
/* 80132210 0012F2F0  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80132214 0012F2F4  7C 08 02 A6 */	mflr r0
/* 80132218 0012F2F8  3C 60 80 32 */	lis r3, "shared__22@unnamed@zTalkBox_cpp@"@ha
/* 8013221C 0012F2FC  38 63 B3 20 */	addi r3, r3, "shared__22@unnamed@zTalkBox_cpp@"@l
/* 80132220 0012F300  90 01 00 14 */	stw r0, 0x14(r1)
/* 80132224 0012F304  3C 63 00 01 */	addis r3, r3, 0x1
/* 80132228 0012F308  88 03 8D 55 */	lbz r0, -0x72ab(r3)
/* 8013222C 0012F30C  28 00 00 00 */	cmplwi r0, 0x0
/* 80132230 0012F310  40 82 00 2C */	bne .L_8013225C
/* 80132234 0012F314  C0 03 8D 50 */	lfs f0, -0x72b0(r3)
/* 80132238 0012F318  EC 00 08 28 */	fsubs f0, f0, f1
/* 8013223C 0012F31C  D0 03 8D 50 */	stfs f0, -0x72b0(r3)
/* 80132240 0012F320  C0 23 8D 50 */	lfs f1, -0x72b0(r3)
/* 80132244 0012F324  C0 02 A3 28 */	lfs f0, "@1032"@sda21(r2)
/* 80132248 0012F328  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8013224C 0012F32C  41 81 00 10 */	bgt .L_8013225C
/* 80132250 0012F330  38 00 00 01 */	li r0, 0x1
/* 80132254 0012F334  98 03 8D 55 */	stb r0, -0x72ab(r3)
/* 80132258 0012F338  4B FF FD BD */	bl "refresh_prompts__22@unnamed@zTalkBox_cpp@Fv"
.L_8013225C:
/* 8013225C 0012F33C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80132260 0012F340  7C 08 03 A6 */	mtlr r0
/* 80132264 0012F344  38 21 00 10 */	addi r1, r1, 0x10
/* 80132268 0012F348  4E 80 00 20 */	blr
.endfn "update_quit_status__22@unnamed@zTalkBox_cpp@Ff"

# @unnamed@zTalkBox_cpp@::hide_prompts()
.fn "hide_prompts__22@unnamed@zTalkBox_cpp@Fv", local
/* 8013226C 0012F34C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80132270 0012F350  7C 08 02 A6 */	mflr r0
/* 80132274 0012F354  3C 60 80 32 */	lis r3, "shared__22@unnamed@zTalkBox_cpp@"@ha
/* 80132278 0012F358  90 01 00 14 */	stw r0, 0x14(r1)
/* 8013227C 0012F35C  38 63 B3 20 */	addi r3, r3, "shared__22@unnamed@zTalkBox_cpp@"@l
/* 80132280 0012F360  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80132284 0012F364  83 E3 00 08 */	lwz r31, 0x8(r3)
/* 80132288 0012F368  80 7F 00 1C */	lwz r3, 0x1c(r31)
/* 8013228C 0012F36C  28 03 00 00 */	cmplwi r3, 0x0
/* 80132290 0012F370  41 82 00 08 */	beq .L_80132298
/* 80132294 0012F374  48 00 23 59 */	bl deactivate__8ztextboxFv
.L_80132298:
/* 80132298 0012F378  80 7F 00 20 */	lwz r3, 0x20(r31)
/* 8013229C 0012F37C  28 03 00 00 */	cmplwi r3, 0x0
/* 801322A0 0012F380  41 82 00 08 */	beq .L_801322A8
/* 801322A4 0012F384  48 00 23 49 */	bl deactivate__8ztextboxFv
.L_801322A8:
/* 801322A8 0012F388  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801322AC 0012F38C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 801322B0 0012F390  7C 08 03 A6 */	mtlr r0
/* 801322B4 0012F394  38 21 00 10 */	addi r1, r1, 0x10
/* 801322B8 0012F398  4E 80 00 20 */	blr
.endfn "hide_prompts__22@unnamed@zTalkBox_cpp@Fv"

# @unnamed@zTalkBox_cpp@::stop_wait(ztalkbox&, const float*, unsigned long)
.fn "stop_wait__22@unnamed@zTalkBox_cpp@FR8ztalkboxPCfUl", local
/* 801322BC 0012F39C  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 801322C0 0012F3A0  7C 08 02 A6 */	mflr r0
/* 801322C4 0012F3A4  3C C0 80 32 */	lis r6, "shared__22@unnamed@zTalkBox_cpp@"@ha
/* 801322C8 0012F3A8  90 01 00 24 */	stw r0, 0x24(r1)
/* 801322CC 0012F3AC  BF 41 00 08 */	stmw r26, 0x8(r1)
/* 801322D0 0012F3B0  7C 7A 1B 78 */	mr r26, r3
/* 801322D4 0012F3B4  38 66 B3 20 */	addi r3, r6, "shared__22@unnamed@zTalkBox_cpp@"@l
/* 801322D8 0012F3B8  7C BB 2B 78 */	mr r27, r5
/* 801322DC 0012F3BC  80 03 00 08 */	lwz r0, 0x8(r3)
/* 801322E0 0012F3C0  7C 00 D0 40 */	cmplw r0, r26
/* 801322E4 0012F3C4  40 82 00 60 */	bne .L_80132344
/* 801322E8 0012F3C8  7C 9E 23 78 */	mr r30, r4
/* 801322EC 0012F3CC  3B A0 00 00 */	li r29, 0x0
/* 801322F0 0012F3D0  3B 80 00 00 */	li r28, 0x0
/* 801322F4 0012F3D4  3B E0 00 01 */	li r31, 0x1
/* 801322F8 0012F3D8  48 00 00 2C */	b .L_80132324
.L_801322FC:
/* 801322FC 0012F3DC  C0 3E 00 00 */	lfs f1, 0x0(r30)
/* 80132300 0012F3E0  48 0B B0 DD */	bl __cvt_fp2unsigned
/* 80132304 0012F3E4  28 03 00 00 */	cmplwi r3, 0x0
/* 80132308 0012F3E8  41 82 00 14 */	beq .L_8013231C
/* 8013230C 0012F3EC  28 03 00 20 */	cmplwi r3, 0x20
/* 80132310 0012F3F0  40 80 00 0C */	bge .L_8013231C
/* 80132314 0012F3F4  7F E0 18 30 */	slw r0, r31, r3
/* 80132318 0012F3F8  7F BD 03 78 */	or r29, r29, r0
.L_8013231C:
/* 8013231C 0012F3FC  3B DE 00 04 */	addi r30, r30, 0x4
/* 80132320 0012F400  3B 9C 00 01 */	addi r28, r28, 0x1
.L_80132324:
/* 80132324 0012F404  7C 1C D8 40 */	cmplw r28, r27
/* 80132328 0012F408  41 80 FF D4 */	blt .L_801322FC
/* 8013232C 0012F40C  28 1D 00 00 */	cmplwi r29, 0x0
/* 80132330 0012F410  40 82 00 08 */	bne .L_80132338
/* 80132334 0012F414  3B A0 FF FF */	li r29, -0x1
.L_80132338:
/* 80132338 0012F418  7F 43 D3 78 */	mr r3, r26
/* 8013233C 0012F41C  7F A4 EB 78 */	mr r4, r29
/* 80132340 0012F420  48 00 08 45 */	bl stop_wait__8ztalkboxFUi
.L_80132344:
/* 80132344 0012F424  BB 41 00 08 */	lmw r26, 0x8(r1)
/* 80132348 0012F428  80 01 00 24 */	lwz r0, 0x24(r1)
/* 8013234C 0012F42C  7C 08 03 A6 */	mtlr r0
/* 80132350 0012F430  38 21 00 20 */	addi r1, r1, 0x20
/* 80132354 0012F434  4E 80 00 20 */	blr
.endfn "stop_wait__22@unnamed@zTalkBox_cpp@FR8ztalkboxPCfUl"

# @unnamed@zTalkBox_cpp@::cb_dispatch(xBase*, xBase*, unsigned int, const float*, xBase*)
.fn "cb_dispatch__22@unnamed@zTalkBox_cpp@FP5xBaseP5xBaseUiPCfP5xBase", local
/* 80132358 0012F438  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8013235C 0012F43C  7C 08 02 A6 */	mflr r0
/* 80132360 0012F440  3C 60 80 32 */	lis r3, "shared__22@unnamed@zTalkBox_cpp@"@ha
/* 80132364 0012F444  2C 05 01 52 */	cmpwi r5, 0x152
/* 80132368 0012F448  90 01 00 14 */	stw r0, 0x14(r1)
/* 8013236C 0012F44C  38 63 B3 20 */	addi r3, r3, "shared__22@unnamed@zTalkBox_cpp@"@l
/* 80132370 0012F450  38 00 00 01 */	li r0, 0x1
/* 80132374 0012F454  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80132378 0012F458  3F E3 00 01 */	addis r31, r3, 0x1
/* 8013237C 0012F45C  7C 83 23 78 */	mr r3, r4
/* 80132380 0012F460  98 1F 8D 7A */	stb r0, -0x7286(r31)
/* 80132384 0012F464  41 82 01 44 */	beq .L_801324C8
/* 80132388 0012F468  40 80 00 5C */	bge .L_801323E4
/* 8013238C 0012F46C  2C 05 00 4D */	cmpwi r5, 0x4d
/* 80132390 0012F470  40 80 00 2C */	bge .L_801323BC
/* 80132394 0012F474  2C 05 00 0A */	cmpwi r5, 0xa
/* 80132398 0012F478  41 82 00 A4 */	beq .L_8013243C
/* 8013239C 0012F47C  40 80 01 44 */	bge .L_801324E0
/* 801323A0 0012F480  2C 05 00 04 */	cmpwi r5, 0x4
/* 801323A4 0012F484  41 82 00 A0 */	beq .L_80132444
/* 801323A8 0012F488  40 80 01 38 */	bge .L_801324E0
/* 801323AC 0012F48C  2C 05 00 03 */	cmpwi r5, 0x3
/* 801323B0 0012F490  40 80 00 9C */	bge .L_8013244C
/* 801323B4 0012F494  48 00 01 2C */	b .L_801324E0
/* 801323B8 0012F498  48 00 01 28 */	b .L_801324E0
.L_801323BC:
/* 801323BC 0012F49C  2C 05 01 4E */	cmpwi r5, 0x14e
/* 801323C0 0012F4A0  41 82 00 F4 */	beq .L_801324B4
/* 801323C4 0012F4A4  40 80 00 10 */	bge .L_801323D4
/* 801323C8 0012F4A8  2C 05 00 58 */	cmpwi r5, 0x58
/* 801323CC 0012F4AC  41 82 00 70 */	beq .L_8013243C
/* 801323D0 0012F4B0  48 00 01 10 */	b .L_801324E0
.L_801323D4:
/* 801323D4 0012F4B4  2C 05 01 50 */	cmpwi r5, 0x150
/* 801323D8 0012F4B8  41 82 00 A4 */	beq .L_8013247C
/* 801323DC 0012F4BC  40 80 01 04 */	bge .L_801324E0
/* 801323E0 0012F4C0  48 00 00 74 */	b .L_80132454
.L_801323E4:
/* 801323E4 0012F4C4  2C 05 01 C7 */	cmpwi r5, 0x1c7
/* 801323E8 0012F4C8  40 80 00 30 */	bge .L_80132418
/* 801323EC 0012F4CC  2C 05 01 60 */	cmpwi r5, 0x160
/* 801323F0 0012F4D0  41 82 00 98 */	beq .L_80132488
/* 801323F4 0012F4D4  40 80 00 18 */	bge .L_8013240C
/* 801323F8 0012F4D8  2C 05 01 56 */	cmpwi r5, 0x156
/* 801323FC 0012F4DC  40 80 00 E4 */	bge .L_801324E0
/* 80132400 0012F4E0  2C 05 01 54 */	cmpwi r5, 0x154
/* 80132404 0012F4E4  40 80 00 DC */	bge .L_801324E0
/* 80132408 0012F4E8  48 00 00 D4 */	b .L_801324DC
.L_8013240C:
/* 8013240C 0012F4EC  2C 05 01 C5 */	cmpwi r5, 0x1c5
/* 80132410 0012F4F0  40 80 00 D0 */	bge .L_801324E0
/* 80132414 0012F4F4  48 00 00 CC */	b .L_801324E0
.L_80132418:
/* 80132418 0012F4F8  2C 05 01 F7 */	cmpwi r5, 0x1f7
/* 8013241C 0012F4FC  41 82 00 30 */	beq .L_8013244C
/* 80132420 0012F500  40 80 00 10 */	bge .L_80132430
/* 80132424 0012F504  2C 05 01 D3 */	cmpwi r5, 0x1d3
/* 80132428 0012F508  40 80 00 B8 */	bge .L_801324E0
/* 8013242C 0012F50C  48 00 00 B4 */	b .L_801324E0
.L_80132430:
/* 80132430 0012F510  2C 05 01 F9 */	cmpwi r5, 0x1f9
/* 80132434 0012F514  40 80 00 AC */	bge .L_801324E0
/* 80132438 0012F518  48 00 00 0C */	b .L_80132444
.L_8013243C:
/* 8013243C 0012F51C  48 00 02 05 */	bl reset__8ztalkboxFv
/* 80132440 0012F520  48 00 00 A0 */	b .L_801324E0
.L_80132444:
/* 80132444 0012F524  48 00 07 F9 */	bl hide__8ztalkboxFv
/* 80132448 0012F528  48 00 00 98 */	b .L_801324E0
.L_8013244C:
/* 8013244C 0012F52C  48 00 07 61 */	bl show__8ztalkboxFv
/* 80132450 0012F530  48 00 00 90 */	b .L_801324E0
.L_80132454:
/* 80132454 0012F534  28 06 00 00 */	cmplwi r6, 0x0
/* 80132458 0012F538  40 82 00 0C */	bne .L_80132464
/* 8013245C 0012F53C  38 80 00 00 */	li r4, 0x0
/* 80132460 0012F540  48 00 00 08 */	b .L_80132468
.L_80132464:
/* 80132464 0012F544  80 86 00 00 */	lwz r4, 0x0(r6)
.L_80132468:
/* 80132468 0012F548  38 A0 00 00 */	li r5, 0x0
/* 8013246C 0012F54C  38 C0 00 00 */	li r6, 0x0
/* 80132470 0012F550  48 00 05 A5 */	bl start_talk__8ztalkboxFUiPQ28ztalkbox8callbackP10zNPCCommon
/* 80132474 0012F554  4B FF E3 8D */	bl "flush_triggered__22@unnamed@zTalkBox_cpp@Fv"
/* 80132478 0012F558  48 00 00 68 */	b .L_801324E0
.L_8013247C:
/* 8013247C 0012F55C  48 00 06 15 */	bl stop_talk__8ztalkboxFv
/* 80132480 0012F560  4B FF E3 81 */	bl "flush_triggered__22@unnamed@zTalkBox_cpp@Fv"
/* 80132484 0012F564  48 00 00 5C */	b .L_801324E0
.L_80132488:
/* 80132488 0012F568  28 06 00 00 */	cmplwi r6, 0x0
/* 8013248C 0012F56C  40 82 00 14 */	bne .L_801324A0
/* 80132490 0012F570  38 80 00 00 */	li r4, 0x0
/* 80132494 0012F574  38 A0 00 00 */	li r5, 0x0
/* 80132498 0012F578  4B FF FE 25 */	bl "stop_wait__22@unnamed@zTalkBox_cpp@FR8ztalkboxPCfUl"
/* 8013249C 0012F57C  48 00 00 10 */	b .L_801324AC
.L_801324A0:
/* 801324A0 0012F580  7C C4 33 78 */	mr r4, r6
/* 801324A4 0012F584  38 A0 00 04 */	li r5, 0x4
/* 801324A8 0012F588  4B FF FE 15 */	bl "stop_wait__22@unnamed@zTalkBox_cpp@FR8ztalkboxPCfUl"
.L_801324AC:
/* 801324AC 0012F58C  4B FF E3 55 */	bl "flush_triggered__22@unnamed@zTalkBox_cpp@Fv"
/* 801324B0 0012F590  48 00 00 30 */	b .L_801324E0
.L_801324B4:
/* 801324B4 0012F594  28 06 00 00 */	cmplwi r6, 0x0
/* 801324B8 0012F598  41 82 00 28 */	beq .L_801324E0
/* 801324BC 0012F59C  80 86 00 00 */	lwz r4, 0x0(r6)
/* 801324C0 0012F5A0  48 00 02 AD */	bl set_text__8ztalkboxFUi
/* 801324C4 0012F5A4  48 00 00 1C */	b .L_801324E0
.L_801324C8:
/* 801324C8 0012F5A8  28 06 00 00 */	cmplwi r6, 0x0
/* 801324CC 0012F5AC  41 82 00 14 */	beq .L_801324E0
/* 801324D0 0012F5B0  80 86 00 00 */	lwz r4, 0x0(r6)
/* 801324D4 0012F5B4  48 00 03 49 */	bl add_text__8ztalkboxFUi
/* 801324D8 0012F5B8  48 00 00 08 */	b .L_801324E0
.L_801324DC:
/* 801324DC 0012F5BC  48 00 03 91 */	bl clear_text__8ztalkboxFv
.L_801324E0:
/* 801324E0 0012F5C0  38 00 00 00 */	li r0, 0x0
/* 801324E4 0012F5C4  38 60 00 01 */	li r3, 0x1
/* 801324E8 0012F5C8  98 1F 8D 7A */	stb r0, -0x7286(r31)
/* 801324EC 0012F5CC  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 801324F0 0012F5D0  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801324F4 0012F5D4  7C 08 03 A6 */	mtlr r0
/* 801324F8 0012F5D8  38 21 00 10 */	addi r1, r1, 0x10
/* 801324FC 0012F5DC  4E 80 00 20 */	blr
.endfn "cb_dispatch__22@unnamed@zTalkBox_cpp@FP5xBaseP5xBaseUiPCfP5xBase"

# @unnamed@zTalkBox_cpp@::load_text(unsigned int)
.fn "load_text__22@unnamed@zTalkBox_cpp@FUi", local
/* 80132500 0012F5E0  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80132504 0012F5E4  7C 08 02 A6 */	mflr r0
/* 80132508 0012F5E8  28 03 00 00 */	cmplwi r3, 0x0
/* 8013250C 0012F5EC  90 01 00 14 */	stw r0, 0x14(r1)
/* 80132510 0012F5F0  40 82 00 0C */	bne .L_8013251C
/* 80132514 0012F5F4  38 60 00 00 */	li r3, 0x0
/* 80132518 0012F5F8  48 00 00 20 */	b .L_80132538
.L_8013251C:
/* 8013251C 0012F5FC  38 80 00 00 */	li r4, 0x0
/* 80132520 0012F600  4B F1 91 ED */	bl xSTFindAsset__FUiPUi
/* 80132524 0012F604  28 03 00 00 */	cmplwi r3, 0x0
/* 80132528 0012F608  40 82 00 0C */	bne .L_80132534
/* 8013252C 0012F60C  38 60 00 00 */	li r3, 0x0
/* 80132530 0012F610  48 00 00 08 */	b .L_80132538
.L_80132534:
/* 80132534 0012F614  38 63 00 04 */	addi r3, r3, 0x4
.L_80132538:
/* 80132538 0012F618  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8013253C 0012F61C  7C 08 03 A6 */	mtlr r0
/* 80132540 0012F620  38 21 00 10 */	addi r1, r1, 0x10
/* 80132544 0012F624  4E 80 00 20 */	blr
.endfn "load_text__22@unnamed@zTalkBox_cpp@FUi"

# ztalkbox::load(const ztalkbox::asset_type&)
.fn load__8ztalkboxFRCQ28ztalkbox10asset_type, global
/* 80132548 0012F628  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8013254C 0012F62C  7C 08 02 A6 */	mflr r0
/* 80132550 0012F630  90 01 00 14 */	stw r0, 0x14(r1)
/* 80132554 0012F634  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80132558 0012F638  7C 9F 23 78 */	mr r31, r4
/* 8013255C 0012F63C  93 C1 00 08 */	stw r30, 0x8(r1)
/* 80132560 0012F640  7C 7E 1B 78 */	mr r30, r3
/* 80132564 0012F644  4B ED 6E 9D */	bl xBaseInit__FP5xBaseP10xBaseAsset
/* 80132568 0012F648  38 00 00 34 */	li r0, 0x34
/* 8013256C 0012F64C  3C 60 80 13 */	lis r3, "cb_dispatch__22@unnamed@zTalkBox_cpp@FP5xBaseP5xBaseUiPCfP5xBase"@ha
/* 80132570 0012F650  98 1E 00 04 */	stb r0, 0x4(r30)
/* 80132574 0012F654  38 03 23 58 */	addi r0, r3, "cb_dispatch__22@unnamed@zTalkBox_cpp@FP5xBaseP5xBaseUiPCfP5xBase"@l
/* 80132578 0012F658  93 FE 00 14 */	stw r31, 0x14(r30)
/* 8013257C 0012F65C  90 1E 00 0C */	stw r0, 0xc(r30)
/* 80132580 0012F660  88 1E 00 05 */	lbz r0, 0x5(r30)
/* 80132584 0012F664  28 00 00 00 */	cmplwi r0, 0x0
/* 80132588 0012F668  41 82 00 0C */	beq .L_80132594
/* 8013258C 0012F66C  38 1F 00 48 */	addi r0, r31, 0x48
/* 80132590 0012F670  90 1E 00 08 */	stw r0, 0x8(r30)
.L_80132594:
/* 80132594 0012F674  80 7F 00 10 */	lwz r3, 0x10(r31)
/* 80132598 0012F678  4B F8 24 A5 */	bl zSceneFindObject__FUi
/* 8013259C 0012F67C  80 1F 00 14 */	lwz r0, 0x14(r31)
/* 801325A0 0012F680  90 7E 00 18 */	stw r3, 0x18(r30)
/* 801325A4 0012F684  28 00 00 00 */	cmplwi r0, 0x0
/* 801325A8 0012F688  40 82 00 10 */	bne .L_801325B8
/* 801325AC 0012F68C  38 00 00 00 */	li r0, 0x0
/* 801325B0 0012F690  90 1E 00 1C */	stw r0, 0x1c(r30)
/* 801325B4 0012F694  48 00 00 10 */	b .L_801325C4
.L_801325B8:
/* 801325B8 0012F698  7C 03 03 78 */	mr r3, r0
/* 801325BC 0012F69C  4B F8 24 81 */	bl zSceneFindObject__FUi
/* 801325C0 0012F6A0  90 7E 00 1C */	stw r3, 0x1c(r30)
.L_801325C4:
/* 801325C4 0012F6A4  80 7F 00 18 */	lwz r3, 0x18(r31)
/* 801325C8 0012F6A8  28 03 00 00 */	cmplwi r3, 0x0
/* 801325CC 0012F6AC  40 82 00 10 */	bne .L_801325DC
/* 801325D0 0012F6B0  38 00 00 00 */	li r0, 0x0
/* 801325D4 0012F6B4  90 1E 00 20 */	stw r0, 0x20(r30)
/* 801325D8 0012F6B8  48 00 00 0C */	b .L_801325E4
.L_801325DC:
/* 801325DC 0012F6BC  4B F8 24 61 */	bl zSceneFindObject__FUi
/* 801325E0 0012F6C0  90 7E 00 20 */	stw r3, 0x20(r30)
.L_801325E4:
/* 801325E4 0012F6C4  80 7F 00 34 */	lwz r3, 0x34(r31)
/* 801325E8 0012F6C8  4B FF FF 19 */	bl "load_text__22@unnamed@zTalkBox_cpp@FUi"
/* 801325EC 0012F6CC  90 7E 00 24 */	stw r3, 0x24(r30)
/* 801325F0 0012F6D0  80 7F 00 38 */	lwz r3, 0x38(r31)
/* 801325F4 0012F6D4  4B FF FF 0D */	bl "load_text__22@unnamed@zTalkBox_cpp@FUi"
/* 801325F8 0012F6D8  90 7E 00 28 */	stw r3, 0x28(r30)
/* 801325FC 0012F6DC  80 7F 00 3C */	lwz r3, 0x3c(r31)
/* 80132600 0012F6E0  4B FF FF 01 */	bl "load_text__22@unnamed@zTalkBox_cpp@FUi"
/* 80132604 0012F6E4  90 7E 00 2C */	stw r3, 0x2c(r30)
/* 80132608 0012F6E8  80 7F 00 40 */	lwz r3, 0x40(r31)
/* 8013260C 0012F6EC  4B FF FE F5 */	bl "load_text__22@unnamed@zTalkBox_cpp@FUi"
/* 80132610 0012F6F0  90 7E 00 30 */	stw r3, 0x30(r30)
/* 80132614 0012F6F4  80 7F 00 44 */	lwz r3, 0x44(r31)
/* 80132618 0012F6F8  4B FF FE E9 */	bl "load_text__22@unnamed@zTalkBox_cpp@FUi"
/* 8013261C 0012F6FC  90 7E 00 34 */	stw r3, 0x34(r30)
/* 80132620 0012F700  7F C3 F3 78 */	mr r3, r30
/* 80132624 0012F704  48 00 00 1D */	bl reset__8ztalkboxFv
/* 80132628 0012F708  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8013262C 0012F70C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80132630 0012F710  83 C1 00 08 */	lwz r30, 0x8(r1)
/* 80132634 0012F714  7C 08 03 A6 */	mtlr r0
/* 80132638 0012F718  38 21 00 10 */	addi r1, r1, 0x10
/* 8013263C 0012F71C  4E 80 00 20 */	blr
.endfn load__8ztalkboxFRCQ28ztalkbox10asset_type

# ztalkbox::reset()
.fn reset__8ztalkboxFv, global
/* 80132640 0012F720  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80132644 0012F724  7C 08 02 A6 */	mflr r0
/* 80132648 0012F728  38 80 00 01 */	li r4, 0x1
/* 8013264C 0012F72C  90 01 00 14 */	stw r0, 0x14(r1)
/* 80132650 0012F730  88 03 00 10 */	lbz r0, 0x10(r3)
/* 80132654 0012F734  50 80 3E 30 */	rlwimi r0, r4, 7, 24, 24
/* 80132658 0012F738  3C 80 80 32 */	lis r4, "shared__22@unnamed@zTalkBox_cpp@"@ha
/* 8013265C 0012F73C  98 03 00 10 */	stb r0, 0x10(r3)
/* 80132660 0012F740  38 84 B3 20 */	addi r4, r4, "shared__22@unnamed@zTalkBox_cpp@"@l
/* 80132664 0012F744  80 04 00 08 */	lwz r0, 0x8(r4)
/* 80132668 0012F748  7C 00 18 40 */	cmplw r0, r3
/* 8013266C 0012F74C  40 82 00 08 */	bne .L_80132674
/* 80132670 0012F750  4B FF F6 F1 */	bl "deactivate__22@unnamed@zTalkBox_cpp@Fv"
.L_80132674:
/* 80132674 0012F754  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80132678 0012F758  7C 08 03 A6 */	mtlr r0
/* 8013267C 0012F75C  38 21 00 10 */	addi r1, r1, 0x10
/* 80132680 0012F760  4E 80 00 20 */	blr
.endfn reset__8ztalkboxFv

# ztalkbox::set_text(const char*)
.fn set_text__8ztalkboxFPCc, global
/* 80132684 0012F764  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 80132688 0012F768  7C 08 02 A6 */	mflr r0
/* 8013268C 0012F76C  28 04 00 00 */	cmplwi r4, 0x0
/* 80132690 0012F770  90 01 00 24 */	stw r0, 0x24(r1)
/* 80132694 0012F774  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 80132698 0012F778  93 C1 00 18 */	stw r30, 0x18(r1)
/* 8013269C 0012F77C  93 A1 00 14 */	stw r29, 0x14(r1)
/* 801326A0 0012F780  7C 7D 1B 78 */	mr r29, r3
/* 801326A4 0012F784  83 C3 00 18 */	lwz r30, 0x18(r3)
/* 801326A8 0012F788  41 82 00 10 */	beq .L_801326B8
/* 801326AC 0012F78C  7F C3 F3 78 */	mr r3, r30
/* 801326B0 0012F790  48 00 1F A1 */	bl set_text__8ztextboxFPCc
/* 801326B4 0012F794  48 00 00 0C */	b .L_801326C0
.L_801326B8:
/* 801326B8 0012F798  7F C3 F3 78 */	mr r3, r30
/* 801326BC 0012F79C  48 00 20 BD */	bl clear_text__8ztextboxFv
.L_801326C0:
/* 801326C0 0012F7A0  7F C3 F3 78 */	mr r3, r30
/* 801326C4 0012F7A4  48 00 20 D1 */	bl refresh__8ztextboxFv
/* 801326C8 0012F7A8  3C 60 80 32 */	lis r3, "shared__22@unnamed@zTalkBox_cpp@"@ha
/* 801326CC 0012F7AC  3B E3 B3 20 */	addi r31, r3, "shared__22@unnamed@zTalkBox_cpp@"@l
/* 801326D0 0012F7B0  80 1F 00 08 */	lwz r0, 0x8(r31)
/* 801326D4 0012F7B4  7C 00 E8 40 */	cmplw r0, r29
/* 801326D8 0012F7B8  40 82 00 70 */	bne .L_80132748
/* 801326DC 0012F7BC  80 7F 00 0C */	lwz r3, 0xc(r31)
/* 801326E0 0012F7C0  28 03 00 00 */	cmplwi r3, 0x0
/* 801326E4 0012F7C4  41 82 00 1C */	beq .L_80132700
/* 801326E8 0012F7C8  81 83 00 04 */	lwz r12, 0x4(r3)
/* 801326EC 0012F7CC  81 8C 00 0C */	lwz r12, 0xc(r12)
/* 801326F0 0012F7D0  7D 89 03 A6 */	mtctr r12
/* 801326F4 0012F7D4  4E 80 04 21 */	bctrl
/* 801326F8 0012F7D8  38 00 00 00 */	li r0, 0x0
/* 801326FC 0012F7DC  90 1F 00 0C */	stw r0, 0xc(r31)
.L_80132700:
/* 80132700 0012F7E0  3C 60 80 32 */	lis r3, "shared__22@unnamed@zTalkBox_cpp@"@ha
/* 80132704 0012F7E4  38 9E 00 18 */	addi r4, r30, 0x18
/* 80132708 0012F7E8  38 63 B3 20 */	addi r3, r3, "shared__22@unnamed@zTalkBox_cpp@"@l
/* 8013270C 0012F7EC  38 A0 00 00 */	li r5, 0x0
/* 80132710 0012F7F0  38 63 00 24 */	addi r3, r3, 0x24
/* 80132714 0012F7F4  4B EF 05 B5 */	bl refresh__Q28xtextbox6layoutFRC8xtextboxb
/* 80132718 0012F7F8  4B FF F7 65 */	bl "layout_contains_streams__22@unnamed@zTalkBox_cpp@Fv"
/* 8013271C 0012F7FC  54 60 06 3F */	clrlwi. r0, r3, 24
/* 80132720 0012F800  41 82 00 08 */	beq .L_80132728
/* 80132724 0012F804  4B FF F8 1D */	bl "lock_stream__22@unnamed@zTalkBox_cpp@Fv"
.L_80132728:
/* 80132728 0012F808  3C 60 80 32 */	lis r3, "shared__22@unnamed@zTalkBox_cpp@"@ha
/* 8013272C 0012F80C  38 63 B3 20 */	addi r3, r3, "shared__22@unnamed@zTalkBox_cpp@"@l
/* 80132730 0012F810  80 63 00 14 */	lwz r3, 0x14(r3)
/* 80132734 0012F814  90 7F 00 0C */	stw r3, 0xc(r31)
/* 80132738 0012F818  81 83 00 04 */	lwz r12, 0x4(r3)
/* 8013273C 0012F81C  81 8C 00 08 */	lwz r12, 0x8(r12)
/* 80132740 0012F820  7D 89 03 A6 */	mtctr r12
/* 80132744 0012F824  4E 80 04 21 */	bctrl
.L_80132748:
/* 80132748 0012F828  80 01 00 24 */	lwz r0, 0x24(r1)
/* 8013274C 0012F82C  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 80132750 0012F830  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 80132754 0012F834  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 80132758 0012F838  7C 08 03 A6 */	mtlr r0
/* 8013275C 0012F83C  38 21 00 20 */	addi r1, r1, 0x20
/* 80132760 0012F840  4E 80 00 20 */	blr
.endfn set_text__8ztalkboxFPCc

# @unnamed@zTalkBox_cpp@::state_type::start()
.fn "start__Q222@unnamed@zTalkBox_cpp@10state_typeFv", local
/* 80132764 0012F844  4E 80 00 20 */	blr
.endfn "start__Q222@unnamed@zTalkBox_cpp@10state_typeFv"

# @unnamed@zTalkBox_cpp@::state_type::stop()
.fn "stop__Q222@unnamed@zTalkBox_cpp@10state_typeFv", local
/* 80132768 0012F848  4E 80 00 20 */	blr
.endfn "stop__Q222@unnamed@zTalkBox_cpp@10state_typeFv"

# ztalkbox::set_text(unsigned int)
.fn set_text__8ztalkboxFUi, global
/* 8013276C 0012F84C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80132770 0012F850  7C 08 02 A6 */	mflr r0
/* 80132774 0012F854  28 04 00 00 */	cmplwi r4, 0x0
/* 80132778 0012F858  90 01 00 14 */	stw r0, 0x14(r1)
/* 8013277C 0012F85C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80132780 0012F860  7C 7F 1B 78 */	mr r31, r3
/* 80132784 0012F864  41 82 00 30 */	beq .L_801327B4
/* 80132788 0012F868  7C 83 23 78 */	mr r3, r4
/* 8013278C 0012F86C  38 80 00 00 */	li r4, 0x0
/* 80132790 0012F870  4B F1 8F 7D */	bl xSTFindAsset__FUiPUi
/* 80132794 0012F874  7C 64 1B 79 */	mr. r4, r3
/* 80132798 0012F878  40 82 00 10 */	bne .L_801327A8
/* 8013279C 0012F87C  7F E3 FB 78 */	mr r3, r31
/* 801327A0 0012F880  48 00 00 CD */	bl clear_text__8ztalkboxFv
/* 801327A4 0012F884  48 00 00 10 */	b .L_801327B4
.L_801327A8:
/* 801327A8 0012F888  7F E3 FB 78 */	mr r3, r31
/* 801327AC 0012F88C  38 84 00 04 */	addi r4, r4, 0x4
/* 801327B0 0012F890  4B FF FE D5 */	bl set_text__8ztalkboxFPCc
.L_801327B4:
/* 801327B4 0012F894  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801327B8 0012F898  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 801327BC 0012F89C  7C 08 03 A6 */	mtlr r0
/* 801327C0 0012F8A0  38 21 00 10 */	addi r1, r1, 0x10
/* 801327C4 0012F8A4  4E 80 00 20 */	blr
.endfn set_text__8ztalkboxFUi

# ztalkbox::add_text(const char*)
.fn add_text__8ztalkboxFPCc, global
/* 801327C8 0012F8A8  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801327CC 0012F8AC  7C 08 02 A6 */	mflr r0
/* 801327D0 0012F8B0  90 01 00 14 */	stw r0, 0x14(r1)
/* 801327D4 0012F8B4  93 E1 00 0C */	stw r31, 0xc(r1)
/* 801327D8 0012F8B8  7C 7F 1B 78 */	mr r31, r3
/* 801327DC 0012F8BC  80 63 00 18 */	lwz r3, 0x18(r3)
/* 801327E0 0012F8C0  48 00 1F 11 */	bl add_text__8ztextboxFPCc
/* 801327E4 0012F8C4  3C 60 80 32 */	lis r3, "shared__22@unnamed@zTalkBox_cpp@"@ha
/* 801327E8 0012F8C8  38 63 B3 20 */	addi r3, r3, "shared__22@unnamed@zTalkBox_cpp@"@l
/* 801327EC 0012F8CC  80 03 00 08 */	lwz r0, 0x8(r3)
/* 801327F0 0012F8D0  7C 00 F8 40 */	cmplw r0, r31
/* 801327F4 0012F8D4  40 82 00 14 */	bne .L_80132808
/* 801327F8 0012F8D8  80 9F 00 18 */	lwz r4, 0x18(r31)
/* 801327FC 0012F8DC  38 63 00 24 */	addi r3, r3, 0x24
/* 80132800 0012F8E0  38 84 00 18 */	addi r4, r4, 0x18
/* 80132804 0012F8E4  4B EF 05 29 */	bl refresh_end__Q28xtextbox6layoutFRC8xtextbox
.L_80132808:
/* 80132808 0012F8E8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8013280C 0012F8EC  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80132810 0012F8F0  7C 08 03 A6 */	mtlr r0
/* 80132814 0012F8F4  38 21 00 10 */	addi r1, r1, 0x10
/* 80132818 0012F8F8  4E 80 00 20 */	blr
.endfn add_text__8ztalkboxFPCc

# ztalkbox::add_text(unsigned int)
.fn add_text__8ztalkboxFUi, global
/* 8013281C 0012F8FC  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80132820 0012F900  7C 08 02 A6 */	mflr r0
/* 80132824 0012F904  28 04 00 00 */	cmplwi r4, 0x0
/* 80132828 0012F908  90 01 00 14 */	stw r0, 0x14(r1)
/* 8013282C 0012F90C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80132830 0012F910  7C 7F 1B 78 */	mr r31, r3
/* 80132834 0012F914  41 82 00 24 */	beq .L_80132858
/* 80132838 0012F918  7C 83 23 78 */	mr r3, r4
/* 8013283C 0012F91C  38 80 00 00 */	li r4, 0x0
/* 80132840 0012F920  4B F1 8E CD */	bl xSTFindAsset__FUiPUi
/* 80132844 0012F924  7C 64 1B 79 */	mr. r4, r3
/* 80132848 0012F928  41 82 00 10 */	beq .L_80132858
/* 8013284C 0012F92C  7F E3 FB 78 */	mr r3, r31
/* 80132850 0012F930  38 84 00 04 */	addi r4, r4, 0x4
/* 80132854 0012F934  4B FF FF 75 */	bl add_text__8ztalkboxFPCc
.L_80132858:
/* 80132858 0012F938  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8013285C 0012F93C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80132860 0012F940  7C 08 03 A6 */	mtlr r0
/* 80132864 0012F944  38 21 00 10 */	addi r1, r1, 0x10
/* 80132868 0012F948  4E 80 00 20 */	blr
.endfn add_text__8ztalkboxFUi

# ztalkbox::clear_text()
.fn clear_text__8ztalkboxFv, global
/* 8013286C 0012F94C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80132870 0012F950  7C 08 02 A6 */	mflr r0
/* 80132874 0012F954  38 80 00 00 */	li r4, 0x0
/* 80132878 0012F958  90 01 00 14 */	stw r0, 0x14(r1)
/* 8013287C 0012F95C  4B FF FE 09 */	bl set_text__8ztalkboxFPCc
/* 80132880 0012F960  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80132884 0012F964  7C 08 03 A6 */	mtlr r0
/* 80132888 0012F968  38 21 00 10 */	addi r1, r1, 0x10
/* 8013288C 0012F96C  4E 80 00 20 */	blr
.endfn clear_text__8ztalkboxFv

# ztalkbox::start_talk(const char*, ztalkbox::callback*, zNPCCommon*)
.fn start_talk__8ztalkboxFPCcPQ28ztalkbox8callbackP10zNPCCommon, global
/* 80132890 0012F970  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 80132894 0012F974  7C 08 02 A6 */	mflr r0
/* 80132898 0012F978  90 01 00 24 */	stw r0, 0x24(r1)
/* 8013289C 0012F97C  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 801328A0 0012F980  7C BF 2B 78 */	mr r31, r5
/* 801328A4 0012F984  93 C1 00 18 */	stw r30, 0x18(r1)
/* 801328A8 0012F988  7C 9E 23 78 */	mr r30, r4
/* 801328AC 0012F98C  93 A1 00 14 */	stw r29, 0x14(r1)
/* 801328B0 0012F990  7C 7D 1B 78 */	mr r29, r3
/* 801328B4 0012F994  3C 60 80 32 */	lis r3, "shared__22@unnamed@zTalkBox_cpp@"@ha
/* 801328B8 0012F998  90 DD 00 38 */	stw r6, 0x38(r29)
/* 801328BC 0012F99C  38 63 B3 20 */	addi r3, r3, "shared__22@unnamed@zTalkBox_cpp@"@l
/* 801328C0 0012F9A0  80 63 00 08 */	lwz r3, 0x8(r3)
/* 801328C4 0012F9A4  28 03 00 00 */	cmplwi r3, 0x0
/* 801328C8 0012F9A8  41 82 00 08 */	beq .L_801328D0
/* 801328CC 0012F9AC  48 00 01 C5 */	bl stop_talk__8ztalkboxFv
.L_801328D0:
/* 801328D0 0012F9B0  7F A3 EB 78 */	mr r3, r29
/* 801328D4 0012F9B4  4B FF F4 F9 */	bl "activate__22@unnamed@zTalkBox_cpp@FR8ztalkbox"
/* 801328D8 0012F9B8  3C 60 80 32 */	lis r3, "shared__22@unnamed@zTalkBox_cpp@"@ha
/* 801328DC 0012F9BC  38 00 00 00 */	li r0, 0x0
/* 801328E0 0012F9C0  38 63 B3 20 */	addi r3, r3, "shared__22@unnamed@zTalkBox_cpp@"@l
/* 801328E4 0012F9C4  3C 63 00 01 */	addis r3, r3, 0x1
/* 801328E8 0012F9C8  93 E3 8D 7C */	stw r31, -0x7284(r3)
/* 801328EC 0012F9CC  90 03 8D 48 */	stw r0, -0x72b8(r3)
/* 801328F0 0012F9D0  4B FF E0 45 */	bl "reset_auto_wait__22@unnamed@zTalkBox_cpp@Fv"
/* 801328F4 0012F9D4  80 9D 00 14 */	lwz r4, 0x14(r29)
/* 801328F8 0012F9D8  3C 60 80 32 */	lis r3, "shared__22@unnamed@zTalkBox_cpp@"@ha
/* 801328FC 0012F9DC  38 63 B3 20 */	addi r3, r3, "shared__22@unnamed@zTalkBox_cpp@"@l
/* 80132900 0012F9E0  38 00 00 00 */	li r0, 0x0
/* 80132904 0012F9E4  88 A4 00 1E */	lbz r5, 0x1e(r4)
/* 80132908 0012F9E8  3C 63 00 01 */	addis r3, r3, 0x1
/* 8013290C 0012F9EC  7C 85 00 D0 */	neg r4, r5
/* 80132910 0012F9F0  7C 84 2B 78 */	or r4, r4, r5
/* 80132914 0012F9F4  54 84 0F FE */	srwi r4, r4, 31
/* 80132918 0012F9F8  98 83 8D 78 */	stb r4, -0x7288(r3)
/* 8013291C 0012F9FC  98 03 8D 79 */	stb r0, -0x7287(r3)
/* 80132920 0012FA00  80 7D 00 14 */	lwz r3, 0x14(r29)
/* 80132924 0012FA04  88 03 00 1C */	lbz r0, 0x1c(r3)
/* 80132928 0012FA08  28 00 00 00 */	cmplwi r0, 0x0
/* 8013292C 0012FA0C  41 82 00 10 */	beq .L_8013293C
/* 80132930 0012FA10  38 60 00 10 */	li r3, 0x10
/* 80132934 0012FA14  4B F3 3C 25 */	bl zEntPlayerControlOff__F13zControlOwner
/* 80132938 0012FA18  48 00 00 0C */	b .L_80132944
.L_8013293C:
/* 8013293C 0012FA1C  38 60 00 10 */	li r3, 0x10
/* 80132940 0012FA20  4B F3 3B C1 */	bl zEntPlayerControlOn__F13zControlOwner
.L_80132944:
/* 80132944 0012FA24  7F A3 EB 78 */	mr r3, r29
/* 80132948 0012FA28  38 80 00 01 */	li r4, 0x1
/* 8013294C 0012FA2C  48 00 03 49 */	bl MasterTellSlaves__8ztalkboxFi
/* 80132950 0012FA30  4B FF F6 C5 */	bl "refresh_prompts__22@unnamed@zTalkBox_cpp@Fv"
/* 80132954 0012FA34  83 BD 00 18 */	lwz r29, 0x18(r29)
/* 80132958 0012FA38  88 1D 00 10 */	lbz r0, 0x10(r29)
/* 8013295C 0012FA3C  54 00 CF FF */	extrwi. r0, r0, 1, 24
/* 80132960 0012FA40  41 82 00 0C */	beq .L_8013296C
/* 80132964 0012FA44  7F A3 EB 78 */	mr r3, r29
/* 80132968 0012FA48  48 00 1C 85 */	bl deactivate__8ztextboxFv
.L_8013296C:
/* 8013296C 0012FA4C  28 1E 00 00 */	cmplwi r30, 0x0
/* 80132970 0012FA50  41 82 00 10 */	beq .L_80132980
/* 80132974 0012FA54  7F A3 EB 78 */	mr r3, r29
/* 80132978 0012FA58  7F C4 F3 78 */	mr r4, r30
/* 8013297C 0012FA5C  48 00 1C D5 */	bl set_text__8ztextboxFPCc
.L_80132980:
/* 80132980 0012FA60  7F A3 EB 78 */	mr r3, r29
/* 80132984 0012FA64  48 00 1E 11 */	bl refresh__8ztextboxFv
/* 80132988 0012FA68  3C 60 80 32 */	lis r3, "shared__22@unnamed@zTalkBox_cpp@"@ha
/* 8013298C 0012FA6C  38 9D 00 18 */	addi r4, r29, 0x18
/* 80132990 0012FA70  38 63 B3 20 */	addi r3, r3, "shared__22@unnamed@zTalkBox_cpp@"@l
/* 80132994 0012FA74  38 A0 00 00 */	li r5, 0x0
/* 80132998 0012FA78  38 63 00 24 */	addi r3, r3, 0x24
/* 8013299C 0012FA7C  4B EF 03 2D */	bl refresh__Q28xtextbox6layoutFRC8xtextboxb
/* 801329A0 0012FA80  4B FF F4 DD */	bl "layout_contains_streams__22@unnamed@zTalkBox_cpp@Fv"
/* 801329A4 0012FA84  54 60 06 3F */	clrlwi. r0, r3, 24
/* 801329A8 0012FA88  41 82 00 08 */	beq .L_801329B0
/* 801329AC 0012FA8C  4B FF F5 95 */	bl "lock_stream__22@unnamed@zTalkBox_cpp@Fv"
.L_801329B0:
/* 801329B0 0012FA90  3C 80 80 32 */	lis r4, "shared__22@unnamed@zTalkBox_cpp@"@ha
/* 801329B4 0012FA94  38 60 01 61 */	li r3, 0x161
/* 801329B8 0012FA98  3B A4 B3 20 */	addi r29, r4, "shared__22@unnamed@zTalkBox_cpp@"@l
/* 801329BC 0012FA9C  80 1D 00 14 */	lwz r0, 0x14(r29)
/* 801329C0 0012FAA0  90 1D 00 0C */	stw r0, 0xc(r29)
/* 801329C4 0012FAA4  4B FF DC B1 */	bl "trigger__22@unnamed@zTalkBox_cpp@FUi"
/* 801329C8 0012FAA8  28 1F 00 00 */	cmplwi r31, 0x0
/* 801329CC 0012FAAC  41 82 00 18 */	beq .L_801329E4
/* 801329D0 0012FAB0  7F E3 FB 78 */	mr r3, r31
/* 801329D4 0012FAB4  81 9F 00 00 */	lwz r12, 0x0(r31)
/* 801329D8 0012FAB8  81 8C 00 0C */	lwz r12, 0xc(r12)
/* 801329DC 0012FABC  7D 89 03 A6 */	mtctr r12
/* 801329E0 0012FAC0  4E 80 04 21 */	bctrl
.L_801329E4:
/* 801329E4 0012FAC4  80 7D 00 0C */	lwz r3, 0xc(r29)
/* 801329E8 0012FAC8  81 83 00 04 */	lwz r12, 0x4(r3)
/* 801329EC 0012FACC  81 8C 00 08 */	lwz r12, 0x8(r12)
/* 801329F0 0012FAD0  7D 89 03 A6 */	mtctr r12
/* 801329F4 0012FAD4  4E 80 04 21 */	bctrl
/* 801329F8 0012FAD8  80 01 00 24 */	lwz r0, 0x24(r1)
/* 801329FC 0012FADC  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 80132A00 0012FAE0  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 80132A04 0012FAE4  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 80132A08 0012FAE8  7C 08 03 A6 */	mtlr r0
/* 80132A0C 0012FAEC  38 21 00 20 */	addi r1, r1, 0x20
/* 80132A10 0012FAF0  4E 80 00 20 */	blr
.endfn start_talk__8ztalkboxFPCcPQ28ztalkbox8callbackP10zNPCCommon

# ztalkbox::start_talk(unsigned int, ztalkbox::callback*, zNPCCommon*)
.fn start_talk__8ztalkboxFUiPQ28ztalkbox8callbackP10zNPCCommon, global
/* 80132A14 0012FAF4  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 80132A18 0012FAF8  7C 08 02 A6 */	mflr r0
/* 80132A1C 0012FAFC  28 04 00 00 */	cmplwi r4, 0x0
/* 80132A20 0012FB00  90 01 00 24 */	stw r0, 0x24(r1)
/* 80132A24 0012FB04  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 80132A28 0012FB08  7C DF 33 78 */	mr r31, r6
/* 80132A2C 0012FB0C  93 C1 00 18 */	stw r30, 0x18(r1)
/* 80132A30 0012FB10  7C BE 2B 78 */	mr r30, r5
/* 80132A34 0012FB14  93 A1 00 14 */	stw r29, 0x14(r1)
/* 80132A38 0012FB18  7C 7D 1B 78 */	mr r29, r3
/* 80132A3C 0012FB1C  40 82 00 10 */	bne .L_80132A4C
/* 80132A40 0012FB20  38 80 00 00 */	li r4, 0x0
/* 80132A44 0012FB24  4B FF FE 4D */	bl start_talk__8ztalkboxFPCcPQ28ztalkbox8callbackP10zNPCCommon
/* 80132A48 0012FB28  48 00 00 2C */	b .L_80132A74
.L_80132A4C:
/* 80132A4C 0012FB2C  7C 83 23 78 */	mr r3, r4
/* 80132A50 0012FB30  38 80 00 00 */	li r4, 0x0
/* 80132A54 0012FB34  4B F1 8C B9 */	bl xSTFindAsset__FUiPUi
/* 80132A58 0012FB38  7C 64 1B 79 */	mr. r4, r3
/* 80132A5C 0012FB3C  41 82 00 18 */	beq .L_80132A74
/* 80132A60 0012FB40  7F A3 EB 78 */	mr r3, r29
/* 80132A64 0012FB44  7F C5 F3 78 */	mr r5, r30
/* 80132A68 0012FB48  7F E6 FB 78 */	mr r6, r31
/* 80132A6C 0012FB4C  38 84 00 04 */	addi r4, r4, 0x4
/* 80132A70 0012FB50  4B FF FE 21 */	bl start_talk__8ztalkboxFPCcPQ28ztalkbox8callbackP10zNPCCommon
.L_80132A74:
/* 80132A74 0012FB54  80 01 00 24 */	lwz r0, 0x24(r1)
/* 80132A78 0012FB58  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 80132A7C 0012FB5C  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 80132A80 0012FB60  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 80132A84 0012FB64  7C 08 03 A6 */	mtlr r0
/* 80132A88 0012FB68  38 21 00 20 */	addi r1, r1, 0x20
/* 80132A8C 0012FB6C  4E 80 00 20 */	blr
.endfn start_talk__8ztalkboxFUiPQ28ztalkbox8callbackP10zNPCCommon

# ztalkbox::stop_talk()
.fn stop_talk__8ztalkboxFv, global
/* 80132A90 0012FB70  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80132A94 0012FB74  7C 08 02 A6 */	mflr r0
/* 80132A98 0012FB78  3C 80 80 32 */	lis r4, "shared__22@unnamed@zTalkBox_cpp@"@ha
/* 80132A9C 0012FB7C  90 01 00 14 */	stw r0, 0x14(r1)
/* 80132AA0 0012FB80  38 84 B3 20 */	addi r4, r4, "shared__22@unnamed@zTalkBox_cpp@"@l
/* 80132AA4 0012FB84  80 04 00 08 */	lwz r0, 0x8(r4)
/* 80132AA8 0012FB88  7C 00 18 40 */	cmplw r0, r3
/* 80132AAC 0012FB8C  40 82 00 08 */	bne .L_80132AB4
/* 80132AB0 0012FB90  48 00 00 15 */	bl "stop__22@unnamed@zTalkBox_cpp@Fv"
.L_80132AB4:
/* 80132AB4 0012FB94  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80132AB8 0012FB98  7C 08 03 A6 */	mtlr r0
/* 80132ABC 0012FB9C  38 21 00 10 */	addi r1, r1, 0x10
/* 80132AC0 0012FBA0  4E 80 00 20 */	blr
.endfn stop_talk__8ztalkboxFv

# @unnamed@zTalkBox_cpp@::stop()
.fn "stop__22@unnamed@zTalkBox_cpp@Fv", local
/* 80132AC4 0012FBA4  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80132AC8 0012FBA8  7C 08 02 A6 */	mflr r0
/* 80132ACC 0012FBAC  3C 60 80 32 */	lis r3, "shared__22@unnamed@zTalkBox_cpp@"@ha
/* 80132AD0 0012FBB0  90 01 00 14 */	stw r0, 0x14(r1)
/* 80132AD4 0012FBB4  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80132AD8 0012FBB8  3B E3 B3 20 */	addi r31, r3, "shared__22@unnamed@zTalkBox_cpp@"@l
/* 80132ADC 0012FBBC  80 7F 00 0C */	lwz r3, 0xc(r31)
/* 80132AE0 0012FBC0  28 03 00 00 */	cmplwi r3, 0x0
/* 80132AE4 0012FBC4  41 82 00 8C */	beq .L_80132B70
/* 80132AE8 0012FBC8  81 83 00 04 */	lwz r12, 0x4(r3)
/* 80132AEC 0012FBCC  81 8C 00 0C */	lwz r12, 0xc(r12)
/* 80132AF0 0012FBD0  7D 89 03 A6 */	mtctr r12
/* 80132AF4 0012FBD4  4E 80 04 21 */	bctrl
/* 80132AF8 0012FBD8  4B FF F7 75 */	bl "hide_prompts__22@unnamed@zTalkBox_cpp@Fv"
/* 80132AFC 0012FBDC  3C 60 80 32 */	lis r3, "shared__22@unnamed@zTalkBox_cpp@"@ha
/* 80132B00 0012FBE0  38 80 00 00 */	li r4, 0x0
/* 80132B04 0012FBE4  38 63 B3 20 */	addi r3, r3, "shared__22@unnamed@zTalkBox_cpp@"@l
/* 80132B08 0012FBE8  80 63 00 08 */	lwz r3, 0x8(r3)
/* 80132B0C 0012FBEC  48 00 01 89 */	bl MasterTellSlaves__8ztalkboxFi
/* 80132B10 0012FBF0  38 60 00 10 */	li r3, 0x10
/* 80132B14 0012FBF4  4B F3 39 ED */	bl zEntPlayerControlOn__F13zControlOwner
/* 80132B18 0012FBF8  38 60 01 62 */	li r3, 0x162
/* 80132B1C 0012FBFC  4B FF DB 59 */	bl "trigger__22@unnamed@zTalkBox_cpp@FUi"
/* 80132B20 0012FC00  3C 60 80 32 */	lis r3, "shared__22@unnamed@zTalkBox_cpp@"@ha
/* 80132B24 0012FC04  38 63 B3 20 */	addi r3, r3, "shared__22@unnamed@zTalkBox_cpp@"@l
/* 80132B28 0012FC08  3C 63 00 01 */	addis r3, r3, 0x1
/* 80132B2C 0012FC0C  80 63 8D 7C */	lwz r3, -0x7284(r3)
/* 80132B30 0012FC10  28 03 00 00 */	cmplwi r3, 0x0
/* 80132B34 0012FC14  41 82 00 14 */	beq .L_80132B48
/* 80132B38 0012FC18  81 83 00 00 */	lwz r12, 0x0(r3)
/* 80132B3C 0012FC1C  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 80132B40 0012FC20  7D 89 03 A6 */	mtctr r12
/* 80132B44 0012FC24  4E 80 04 21 */	bctrl
.L_80132B48:
/* 80132B48 0012FC28  38 00 00 00 */	li r0, 0x0
/* 80132B4C 0012FC2C  90 1F 00 0C */	stw r0, 0xc(r31)
/* 80132B50 0012FC30  4B FF F2 11 */	bl "deactivate__22@unnamed@zTalkBox_cpp@Fv"
/* 80132B54 0012FC34  3C 60 80 32 */	lis r3, "shared__22@unnamed@zTalkBox_cpp@"@ha
/* 80132B58 0012FC38  38 63 B3 20 */	addi r3, r3, "shared__22@unnamed@zTalkBox_cpp@"@l
/* 80132B5C 0012FC3C  3C 63 00 01 */	addis r3, r3, 0x1
/* 80132B60 0012FC40  38 63 8D 5C */	addi r3, r3, -0x72a4
/* 80132B64 0012FC44  48 00 11 75 */	bl "clear__14sound_queue<4>Fv"
/* 80132B68 0012FC48  4B FF DA 95 */	bl "speak_stop__22@unnamed@zTalkBox_cpp@Fv"
/* 80132B6C 0012FC4C  4B FF F4 41 */	bl "unlock_stream__22@unnamed@zTalkBox_cpp@Fv"
.L_80132B70:
/* 80132B70 0012FC50  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80132B74 0012FC54  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80132B78 0012FC58  7C 08 03 A6 */	mtlr r0
/* 80132B7C 0012FC5C  38 21 00 10 */	addi r1, r1, 0x10
/* 80132B80 0012FC60  4E 80 00 20 */	blr
.endfn "stop__22@unnamed@zTalkBox_cpp@Fv"

# ztalkbox::stop_wait(unsigned int)
.fn stop_wait__8ztalkboxFUi, global
/* 80132B84 0012FC64  3C A0 80 32 */	lis r5, "shared__22@unnamed@zTalkBox_cpp@"@ha
/* 80132B88 0012FC68  38 A5 B3 20 */	addi r5, r5, "shared__22@unnamed@zTalkBox_cpp@"@l
/* 80132B8C 0012FC6C  80 05 00 08 */	lwz r0, 0x8(r5)
/* 80132B90 0012FC70  7C 00 18 40 */	cmplw r0, r3
/* 80132B94 0012FC74  4C 82 00 20 */	bnelr
/* 80132B98 0012FC78  3C 65 00 01 */	addis r3, r5, 0x1
/* 80132B9C 0012FC7C  80 03 8D 48 */	lwz r0, -0x72b8(r3)
/* 80132BA0 0012FC80  7C 00 23 78 */	or r0, r0, r4
/* 80132BA4 0012FC84  90 03 8D 48 */	stw r0, -0x72b8(r3)
/* 80132BA8 0012FC88  4E 80 00 20 */	blr
.endfn stop_wait__8ztalkboxFUi

# ztalkbox::show()
.fn show__8ztalkboxFv, global
/* 80132BAC 0012FC8C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80132BB0 0012FC90  7C 08 02 A6 */	mflr r0
/* 80132BB4 0012FC94  38 80 00 01 */	li r4, 0x1
/* 80132BB8 0012FC98  90 01 00 14 */	stw r0, 0x14(r1)
/* 80132BBC 0012FC9C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80132BC0 0012FCA0  7C 7F 1B 78 */	mr r31, r3
/* 80132BC4 0012FCA4  3C 60 80 32 */	lis r3, "shared__22@unnamed@zTalkBox_cpp@"@ha
/* 80132BC8 0012FCA8  88 1F 00 10 */	lbz r0, 0x10(r31)
/* 80132BCC 0012FCAC  50 80 3E 30 */	rlwimi r0, r4, 7, 24, 24
/* 80132BD0 0012FCB0  38 63 B3 20 */	addi r3, r3, "shared__22@unnamed@zTalkBox_cpp@"@l
/* 80132BD4 0012FCB4  98 1F 00 10 */	stb r0, 0x10(r31)
/* 80132BD8 0012FCB8  80 03 00 08 */	lwz r0, 0x8(r3)
/* 80132BDC 0012FCBC  7C 00 F8 40 */	cmplw r0, r31
/* 80132BE0 0012FCC0  40 82 00 48 */	bne .L_80132C28
/* 80132BE4 0012FCC4  80 7F 00 1C */	lwz r3, 0x1c(r31)
/* 80132BE8 0012FCC8  28 03 00 00 */	cmplwi r3, 0x0
/* 80132BEC 0012FCCC  41 82 00 08 */	beq .L_80132BF4
/* 80132BF0 0012FCD0  48 00 19 B1 */	bl activate__8ztextboxFv
.L_80132BF4:
/* 80132BF4 0012FCD4  3C 60 80 32 */	lis r3, "shared__22@unnamed@zTalkBox_cpp@"@ha
/* 80132BF8 0012FCD8  38 63 B3 20 */	addi r3, r3, "shared__22@unnamed@zTalkBox_cpp@"@l
/* 80132BFC 0012FCDC  3C 63 00 01 */	addis r3, r3, 0x1
/* 80132C00 0012FCE0  88 03 8D 78 */	lbz r0, -0x7288(r3)
/* 80132C04 0012FCE4  28 00 00 00 */	cmplwi r0, 0x0
/* 80132C08 0012FCE8  41 82 00 20 */	beq .L_80132C28
/* 80132C0C 0012FCEC  80 1F 00 2C */	lwz r0, 0x2c(r31)
/* 80132C10 0012FCF0  28 00 00 00 */	cmplwi r0, 0x0
/* 80132C14 0012FCF4  41 82 00 14 */	beq .L_80132C28
/* 80132C18 0012FCF8  80 7F 00 20 */	lwz r3, 0x20(r31)
/* 80132C1C 0012FCFC  28 03 00 00 */	cmplwi r3, 0x0
/* 80132C20 0012FD00  41 82 00 08 */	beq .L_80132C28
/* 80132C24 0012FD04  48 00 19 7D */	bl activate__8ztextboxFv
.L_80132C28:
/* 80132C28 0012FD08  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80132C2C 0012FD0C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80132C30 0012FD10  7C 08 03 A6 */	mtlr r0
/* 80132C34 0012FD14  38 21 00 10 */	addi r1, r1, 0x10
/* 80132C38 0012FD18  4E 80 00 20 */	blr
.endfn show__8ztalkboxFv

# ztalkbox::hide()
.fn hide__8ztalkboxFv, global
/* 80132C3C 0012FD1C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80132C40 0012FD20  7C 08 02 A6 */	mflr r0
/* 80132C44 0012FD24  90 01 00 14 */	stw r0, 0x14(r1)
/* 80132C48 0012FD28  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80132C4C 0012FD2C  7C 7F 1B 78 */	mr r31, r3
/* 80132C50 0012FD30  38 60 00 00 */	li r3, 0x0
/* 80132C54 0012FD34  88 1F 00 10 */	lbz r0, 0x10(r31)
/* 80132C58 0012FD38  50 60 3E 30 */	rlwimi r0, r3, 7, 24, 24
/* 80132C5C 0012FD3C  98 1F 00 10 */	stb r0, 0x10(r31)
/* 80132C60 0012FD40  80 7F 00 1C */	lwz r3, 0x1c(r31)
/* 80132C64 0012FD44  28 03 00 00 */	cmplwi r3, 0x0
/* 80132C68 0012FD48  41 82 00 08 */	beq .L_80132C70
/* 80132C6C 0012FD4C  48 00 19 81 */	bl deactivate__8ztextboxFv
.L_80132C70:
/* 80132C70 0012FD50  80 7F 00 20 */	lwz r3, 0x20(r31)
/* 80132C74 0012FD54  28 03 00 00 */	cmplwi r3, 0x0
/* 80132C78 0012FD58  41 82 00 08 */	beq .L_80132C80
/* 80132C7C 0012FD5C  48 00 19 71 */	bl deactivate__8ztextboxFv
.L_80132C80:
/* 80132C80 0012FD60  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80132C84 0012FD64  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80132C88 0012FD68  7C 08 03 A6 */	mtlr r0
/* 80132C8C 0012FD6C  38 21 00 10 */	addi r1, r1, 0x10
/* 80132C90 0012FD70  4E 80 00 20 */	blr
.endfn hide__8ztalkboxFv

# ztalkbox::MasterTellSlaves(int)
.fn MasterTellSlaves__8ztalkboxFi, global
/* 80132C94 0012FD74  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 80132C98 0012FD78  7C 08 02 A6 */	mflr r0
/* 80132C9C 0012FD7C  3C A0 80 3C */	lis r5, globals@ha
/* 80132CA0 0012FD80  90 01 00 24 */	stw r0, 0x24(r1)
/* 80132CA4 0012FD84  BF 41 00 08 */	stmw r26, 0x8(r1)
/* 80132CA8 0012FD88  7C 7A 1B 78 */	mr r26, r3
/* 80132CAC 0012FD8C  7C 9B 23 78 */	mr r27, r4
/* 80132CB0 0012FD90  3B A0 00 00 */	li r29, 0x0
/* 80132CB4 0012FD94  3B E5 05 58 */	addi r31, r5, globals@l
/* 80132CB8 0012FD98  3B C0 00 00 */	li r30, 0x0
/* 80132CBC 0012FD9C  48 00 00 54 */	b .L_80132D10
.L_80132CC0:
/* 80132CC0 0012FDA0  80 1A 00 08 */	lwz r0, 0x8(r26)
/* 80132CC4 0012FDA4  7F 80 F2 14 */	add r28, r0, r30
/* 80132CC8 0012FDA8  A0 1C 00 02 */	lhz r0, 0x2(r28)
/* 80132CCC 0012FDAC  28 00 01 33 */	cmplwi r0, 0x133
/* 80132CD0 0012FDB0  40 82 00 38 */	bne .L_80132D08
/* 80132CD4 0012FDB4  80 7F 1F C0 */	lwz r3, 0x1fc0(r31)
/* 80132CD8 0012FDB8  80 9A 00 00 */	lwz r4, 0x0(r26)
/* 80132CDC 0012FDBC  4B F0 C9 49 */	bl xSceneID2Name__FP6xSceneUi
/* 80132CE0 0012FDC0  80 7F 1F C0 */	lwz r3, 0x1fc0(r31)
/* 80132CE4 0012FDC4  80 9C 00 04 */	lwz r4, 0x4(r28)
/* 80132CE8 0012FDC8  4B F0 C9 3D */	bl xSceneID2Name__FP6xSceneUi
/* 80132CEC 0012FDCC  80 7C 00 04 */	lwz r3, 0x4(r28)
/* 80132CF0 0012FDD0  4B F8 1D 4D */	bl zSceneFindObject__FUi
/* 80132CF4 0012FDD4  7C 64 1B 79 */	mr. r4, r3
/* 80132CF8 0012FDD8  41 82 00 10 */	beq .L_80132D08
/* 80132CFC 0012FDDC  7F 43 D3 78 */	mr r3, r26
/* 80132D00 0012FDE0  7F 65 DB 78 */	mr r5, r27
/* 80132D04 0012FDE4  48 00 00 2D */	bl MasterLoveSlave__8ztalkboxFP5xBasei
.L_80132D08:
/* 80132D08 0012FDE8  3B DE 00 20 */	addi r30, r30, 0x20
/* 80132D0C 0012FDEC  3B BD 00 01 */	addi r29, r29, 0x1
.L_80132D10:
/* 80132D10 0012FDF0  88 1A 00 05 */	lbz r0, 0x5(r26)
/* 80132D14 0012FDF4  7C 1D 00 00 */	cmpw r29, r0
/* 80132D18 0012FDF8  41 80 FF A8 */	blt .L_80132CC0
/* 80132D1C 0012FDFC  BB 41 00 08 */	lmw r26, 0x8(r1)
/* 80132D20 0012FE00  80 01 00 24 */	lwz r0, 0x24(r1)
/* 80132D24 0012FE04  7C 08 03 A6 */	mtlr r0
/* 80132D28 0012FE08  38 21 00 20 */	addi r1, r1, 0x20
/* 80132D2C 0012FE0C  4E 80 00 20 */	blr
.endfn MasterTellSlaves__8ztalkboxFi

# ztalkbox::MasterLoveSlave(xBase*, int)
.fn MasterLoveSlave__8ztalkboxFP5xBasei, global
/* 80132D30 0012FE10  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 80132D34 0012FE14  7C 08 02 A6 */	mflr r0
/* 80132D38 0012FE18  90 01 00 24 */	stw r0, 0x24(r1)
/* 80132D3C 0012FE1C  BF 61 00 0C */	stmw r27, 0xc(r1)
/* 80132D40 0012FE20  7C 7B 1B 78 */	mr r27, r3
/* 80132D44 0012FE24  7C BC 2B 78 */	mr r28, r5
/* 80132D48 0012FE28  88 04 00 04 */	lbz r0, 0x4(r4)
/* 80132D4C 0012FE2C  2C 00 00 2B */	cmpwi r0, 0x2b
/* 80132D50 0012FE30  41 82 00 5C */	beq .L_80132DAC
/* 80132D54 0012FE34  40 80 00 8C */	bge .L_80132DE0
/* 80132D58 0012FE38  2C 00 00 11 */	cmpwi r0, 0x11
/* 80132D5C 0012FE3C  41 82 00 08 */	beq .L_80132D64
/* 80132D60 0012FE40  48 00 00 80 */	b .L_80132DE0
.L_80132D64:
/* 80132D64 0012FE44  7C 9E 23 78 */	mr r30, r4
/* 80132D68 0012FE48  7F C3 F3 78 */	mr r3, r30
/* 80132D6C 0012FE4C  4B EF A1 11 */	bl xGroupGetCount__FP6xGroup
/* 80132D70 0012FE50  7C 7F 1B 78 */	mr r31, r3
/* 80132D74 0012FE54  3B A0 00 00 */	li r29, 0x0
/* 80132D78 0012FE58  48 00 00 28 */	b .L_80132DA0
.L_80132D7C:
/* 80132D7C 0012FE5C  7F C3 F3 78 */	mr r3, r30
/* 80132D80 0012FE60  7F A4 EB 78 */	mr r4, r29
/* 80132D84 0012FE64  4B EF A1 05 */	bl xGroupGetItemPtr__FP6xGroupUi
/* 80132D88 0012FE68  7C 64 1B 79 */	mr. r4, r3
/* 80132D8C 0012FE6C  41 82 00 10 */	beq .L_80132D9C
/* 80132D90 0012FE70  7F 63 DB 78 */	mr r3, r27
/* 80132D94 0012FE74  7F 85 E3 78 */	mr r5, r28
/* 80132D98 0012FE78  4B FF FF 99 */	bl MasterLoveSlave__8ztalkboxFP5xBasei
.L_80132D9C:
/* 80132D9C 0012FE7C  3B BD 00 01 */	addi r29, r29, 0x1
.L_80132DA0:
/* 80132DA0 0012FE80  7C 1D F8 00 */	cmpw r29, r31
/* 80132DA4 0012FE84  41 80 FF D8 */	blt .L_80132D7C
/* 80132DA8 0012FE88  48 00 00 38 */	b .L_80132DE0
.L_80132DAC:
/* 80132DAC 0012FE8C  2C 1C 00 00 */	cmpwi r28, 0x0
/* 80132DB0 0012FE90  41 82 00 1C */	beq .L_80132DCC
/* 80132DB4 0012FE94  7C 83 23 78 */	mr r3, r4
/* 80132DB8 0012FE98  81 84 01 B8 */	lwz r12, 0x1b8(r4)
/* 80132DBC 0012FE9C  81 8C 00 A0 */	lwz r12, 0xa0(r12)
/* 80132DC0 0012FEA0  7D 89 03 A6 */	mtctr r12
/* 80132DC4 0012FEA4  4E 80 04 21 */	bctrl
/* 80132DC8 0012FEA8  48 00 00 18 */	b .L_80132DE0
.L_80132DCC:
/* 80132DCC 0012FEAC  7C 83 23 78 */	mr r3, r4
/* 80132DD0 0012FEB0  81 84 01 B8 */	lwz r12, 0x1b8(r4)
/* 80132DD4 0012FEB4  81 8C 00 A4 */	lwz r12, 0xa4(r12)
/* 80132DD8 0012FEB8  7D 89 03 A6 */	mtctr r12
/* 80132DDC 0012FEBC  4E 80 04 21 */	bctrl
.L_80132DE0:
/* 80132DE0 0012FEC0  BB 61 00 0C */	lmw r27, 0xc(r1)
/* 80132DE4 0012FEC4  80 01 00 24 */	lwz r0, 0x24(r1)
/* 80132DE8 0012FEC8  7C 08 03 A6 */	mtlr r0
/* 80132DEC 0012FECC  38 21 00 20 */	addi r1, r1, 0x20
/* 80132DF0 0012FED0  4E 80 00 20 */	blr
.endfn MasterLoveSlave__8ztalkboxFP5xBasei

# ztalkbox::load_settings(xIniFile&)
.fn load_settings__8ztalkboxFR8xIniFile, global
/* 80132DF4 0012FED4  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80132DF8 0012FED8  7C 08 02 A6 */	mflr r0
/* 80132DFC 0012FEDC  3C 80 80 27 */	lis r4, "@stringBase0"@ha
/* 80132E00 0012FEE0  90 01 00 14 */	stw r0, 0x14(r1)
/* 80132E04 0012FEE4  38 84 C9 20 */	addi r4, r4, "@stringBase0"@l
/* 80132E08 0012FEE8  38 84 00 EA */	addi r4, r4, 0xea
/* 80132E0C 0012FEEC  C0 22 A3 38 */	lfs f1, "@2117"@sda21(r2)
/* 80132E10 0012FEF0  4B EF DD 35 */	bl xIniGetFloat__FP8xIniFilePcf
/* 80132E14 0012FEF4  3C 80 80 32 */	lis r4, "shared__22@unnamed@zTalkBox_cpp@"@ha
/* 80132E18 0012FEF8  3C 60 80 27 */	lis r3, "@stringBase0"@ha
/* 80132E1C 0012FEFC  38 84 B3 20 */	addi r4, r4, "shared__22@unnamed@zTalkBox_cpp@"@l
/* 80132E20 0012FF00  38 A0 00 00 */	li r5, 0x0
/* 80132E24 0012FF04  3C 84 00 01 */	addis r4, r4, 0x1
/* 80132E28 0012FF08  D4 24 8E 90 */	stfsu f1, -0x7170(r4)
/* 80132E2C 0012FF0C  38 63 C9 20 */	addi r3, r3, "@stringBase0"@l
/* 80132E30 0012FF10  38 C0 00 00 */	li r6, 0x0
/* 80132E34 0012FF14  C0 22 A3 28 */	lfs f1, "@1032"@sda21(r2)
/* 80132E38 0012FF18  38 63 00 FA */	addi r3, r3, 0xfa
/* 80132E3C 0012FF1C  C0 42 A3 34 */	lfs f2, "@1514"@sda21(r2)
/* 80132E40 0012FF20  38 E0 00 00 */	li r7, 0x0
/* 80132E44 0012FF24  4B EF D7 E9 */	bl xDebugAddTweak__FPCcPfffPC14tweak_callbackPvUi
/* 80132E48 0012FF28  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80132E4C 0012FF2C  7C 08 03 A6 */	mtlr r0
/* 80132E50 0012FF30  38 21 00 10 */	addi r1, r1, 0x10
/* 80132E54 0012FF34  4E 80 00 20 */	blr
.endfn load_settings__8ztalkboxFR8xIniFile

# ztalkbox::init()
.fn init__8ztalkboxFv, global
/* 80132E58 0012FF38  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80132E5C 0012FF3C  7C 08 02 A6 */	mflr r0
/* 80132E60 0012FF40  3C 60 80 2A */	lis r3, "new_tags__22@unnamed@zTalkBox_cpp@"@ha
/* 80132E64 0012FF44  90 01 00 14 */	stw r0, 0x14(r1)
/* 80132E68 0012FF48  38 63 8E 68 */	addi r3, r3, "new_tags__22@unnamed@zTalkBox_cpp@"@l
/* 80132E6C 0012FF4C  80 8D 84 68 */	lwz r4, "new_tags_size__22@unnamed@zTalkBox_cpp@"@sda21(r13)
/* 80132E70 0012FF50  4B EF 2D 25 */	bl register_tags__8xtextboxFPCQ28xtextbox8tag_typeUl
/* 80132E74 0012FF54  88 0D 95 FE */	lbz r0, init$2122@sda21(r13)
/* 80132E78 0012FF58  7C 00 07 75 */	extsb. r0, r0
/* 80132E7C 0012FF5C  40 82 00 14 */	bne .L_80132E90
/* 80132E80 0012FF60  38 6D 96 00 */	addi r3, r13, start_state$2121@sda21
/* 80132E84 0012FF64  48 00 01 99 */	bl "__ct__Q222@unnamed@zTalkBox_cpp@16start_state_typeFv"
/* 80132E88 0012FF68  38 00 00 01 */	li r0, 0x1
/* 80132E8C 0012FF6C  98 0D 95 FE */	stb r0, init$2122@sda21(r13)
.L_80132E90:
/* 80132E90 0012FF70  3C 60 80 32 */	lis r3, "shared__22@unnamed@zTalkBox_cpp@"@ha
/* 80132E94 0012FF74  38 0D 96 00 */	addi r0, r13, start_state$2121@sda21
/* 80132E98 0012FF78  38 63 B3 20 */	addi r3, r3, "shared__22@unnamed@zTalkBox_cpp@"@l
/* 80132E9C 0012FF7C  90 03 00 14 */	stw r0, 0x14(r3)
/* 80132EA0 0012FF80  88 0D 96 08 */	lbz r0, init$2125@sda21(r13)
/* 80132EA4 0012FF84  7C 00 07 75 */	extsb. r0, r0
/* 80132EA8 0012FF88  40 82 00 18 */	bne .L_80132EC0
/* 80132EAC 0012FF8C  3C 60 80 32 */	lis r3, next_state$2124@ha
/* 80132EB0 0012FF90  38 63 42 3C */	addi r3, r3, next_state$2124@l
/* 80132EB4 0012FF94  48 00 01 29 */	bl "__ct__Q222@unnamed@zTalkBox_cpp@15next_state_typeFv"
/* 80132EB8 0012FF98  38 00 00 01 */	li r0, 0x1
/* 80132EBC 0012FF9C  98 0D 96 08 */	stb r0, init$2125@sda21(r13)
.L_80132EC0:
/* 80132EC0 0012FFA0  3C 80 80 32 */	lis r4, next_state$2124@ha
/* 80132EC4 0012FFA4  3C 60 80 32 */	lis r3, "shared__22@unnamed@zTalkBox_cpp@"@ha
/* 80132EC8 0012FFA8  38 04 42 3C */	addi r0, r4, next_state$2124@l
/* 80132ECC 0012FFAC  38 63 B3 20 */	addi r3, r3, "shared__22@unnamed@zTalkBox_cpp@"@l
/* 80132ED0 0012FFB0  90 03 00 18 */	stw r0, 0x18(r3)
/* 80132ED4 0012FFB4  88 0D 96 09 */	lbz r0, init$2128@sda21(r13)
/* 80132ED8 0012FFB8  7C 00 07 75 */	extsb. r0, r0
/* 80132EDC 0012FFBC  40 82 00 18 */	bne .L_80132EF4
/* 80132EE0 0012FFC0  3C 60 80 32 */	lis r3, wait_state$2127@ha
/* 80132EE4 0012FFC4  38 63 42 48 */	addi r3, r3, wait_state$2127@l
/* 80132EE8 0012FFC8  48 00 00 B5 */	bl "__ct__Q222@unnamed@zTalkBox_cpp@15wait_state_typeFv"
/* 80132EEC 0012FFCC  38 00 00 01 */	li r0, 0x1
/* 80132EF0 0012FFD0  98 0D 96 09 */	stb r0, init$2128@sda21(r13)
.L_80132EF4:
/* 80132EF4 0012FFD4  3C 80 80 32 */	lis r4, wait_state$2127@ha
/* 80132EF8 0012FFD8  3C 60 80 32 */	lis r3, "shared__22@unnamed@zTalkBox_cpp@"@ha
/* 80132EFC 0012FFDC  38 04 42 48 */	addi r0, r4, wait_state$2127@l
/* 80132F00 0012FFE0  38 63 B3 20 */	addi r3, r3, "shared__22@unnamed@zTalkBox_cpp@"@l
/* 80132F04 0012FFE4  90 03 00 1C */	stw r0, 0x1c(r3)
/* 80132F08 0012FFE8  88 0D 96 0A */	lbz r0, init$2131@sda21(r13)
/* 80132F0C 0012FFEC  7C 00 07 75 */	extsb. r0, r0
/* 80132F10 0012FFF0  40 82 00 14 */	bne .L_80132F24
/* 80132F14 0012FFF4  38 6D 96 0C */	addi r3, r13, stop_state$2130@sda21
/* 80132F18 0012FFF8  48 00 00 31 */	bl "__ct__Q222@unnamed@zTalkBox_cpp@15stop_state_typeFv"
/* 80132F1C 0012FFFC  38 00 00 01 */	li r0, 0x1
/* 80132F20 00130000  98 0D 96 0A */	stb r0, init$2131@sda21(r13)
.L_80132F24:
/* 80132F24 00130004  3C 60 80 32 */	lis r3, "shared__22@unnamed@zTalkBox_cpp@"@ha
/* 80132F28 00130008  38 0D 96 0C */	addi r0, r13, stop_state$2130@sda21
/* 80132F2C 0013000C  38 63 B3 20 */	addi r3, r3, "shared__22@unnamed@zTalkBox_cpp@"@l
/* 80132F30 00130010  90 03 00 20 */	stw r0, 0x20(r3)
/* 80132F34 00130014  48 00 03 95 */	bl reset_all__8ztalkboxFv
/* 80132F38 00130018  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80132F3C 0013001C  7C 08 03 A6 */	mtlr r0
/* 80132F40 00130020  38 21 00 10 */	addi r1, r1, 0x10
/* 80132F44 00130024  4E 80 00 20 */	blr
.endfn init__8ztalkboxFv

# @unnamed@zTalkBox_cpp@::stop_state_type::stop_state_type()
.fn "__ct__Q222@unnamed@zTalkBox_cpp@15stop_state_typeFv", local
/* 80132F48 00130028  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80132F4C 0013002C  7C 08 02 A6 */	mflr r0
/* 80132F50 00130030  38 80 00 04 */	li r4, 0x4
/* 80132F54 00130034  90 01 00 14 */	stw r0, 0x14(r1)
/* 80132F58 00130038  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80132F5C 0013003C  7C 7F 1B 78 */	mr r31, r3
/* 80132F60 00130040  48 00 00 29 */	bl "__ct__Q222@unnamed@zTalkBox_cpp@10state_typeFQ222@unnamed@zTalkBox_cpp@10state_enum"
/* 80132F64 00130044  3C 80 80 2A */	lis r4, "__vt__Q222@unnamed@zTalkBox_cpp@15stop_state_type"@ha
/* 80132F68 00130048  7F E3 FB 78 */	mr r3, r31
/* 80132F6C 0013004C  38 04 8F 6C */	addi r0, r4, "__vt__Q222@unnamed@zTalkBox_cpp@15stop_state_type"@l
/* 80132F70 00130050  90 1F 00 04 */	stw r0, 0x4(r31)
/* 80132F74 00130054  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80132F78 00130058  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80132F7C 0013005C  7C 08 03 A6 */	mtlr r0
/* 80132F80 00130060  38 21 00 10 */	addi r1, r1, 0x10
/* 80132F84 00130064  4E 80 00 20 */	blr
.endfn "__ct__Q222@unnamed@zTalkBox_cpp@15stop_state_typeFv"

# @unnamed@zTalkBox_cpp@::state_type::state_type(@unnamed@zTalkBox_cpp@::state_enum)
.fn "__ct__Q222@unnamed@zTalkBox_cpp@10state_typeFQ222@unnamed@zTalkBox_cpp@10state_enum", local
/* 80132F88 00130068  3C A0 80 2A */	lis r5, "__vt__Q222@unnamed@zTalkBox_cpp@10state_type"@ha
/* 80132F8C 0013006C  38 05 8F 58 */	addi r0, r5, "__vt__Q222@unnamed@zTalkBox_cpp@10state_type"@l
/* 80132F90 00130070  90 03 00 04 */	stw r0, 0x4(r3)
/* 80132F94 00130074  90 83 00 00 */	stw r4, 0x0(r3)
/* 80132F98 00130078  4E 80 00 20 */	blr
.endfn "__ct__Q222@unnamed@zTalkBox_cpp@10state_typeFQ222@unnamed@zTalkBox_cpp@10state_enum"

# @unnamed@zTalkBox_cpp@::wait_state_type::wait_state_type()
.fn "__ct__Q222@unnamed@zTalkBox_cpp@15wait_state_typeFv", local
/* 80132F9C 0013007C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80132FA0 00130080  7C 08 02 A6 */	mflr r0
/* 80132FA4 00130084  38 80 00 03 */	li r4, 0x3
/* 80132FA8 00130088  90 01 00 14 */	stw r0, 0x14(r1)
/* 80132FAC 0013008C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80132FB0 00130090  7C 7F 1B 78 */	mr r31, r3
/* 80132FB4 00130094  4B FF FF D5 */	bl "__ct__Q222@unnamed@zTalkBox_cpp@10state_typeFQ222@unnamed@zTalkBox_cpp@10state_enum"
/* 80132FB8 00130098  3C 80 80 2A */	lis r4, "__vt__Q222@unnamed@zTalkBox_cpp@15wait_state_type"@ha
/* 80132FBC 0013009C  7F E3 FB 78 */	mr r3, r31
/* 80132FC0 001300A0  38 04 8F 44 */	addi r0, r4, "__vt__Q222@unnamed@zTalkBox_cpp@15wait_state_type"@l
/* 80132FC4 001300A4  90 1F 00 04 */	stw r0, 0x4(r31)
/* 80132FC8 001300A8  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80132FCC 001300AC  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80132FD0 001300B0  7C 08 03 A6 */	mtlr r0
/* 80132FD4 001300B4  38 21 00 10 */	addi r1, r1, 0x10
/* 80132FD8 001300B8  4E 80 00 20 */	blr
.endfn "__ct__Q222@unnamed@zTalkBox_cpp@15wait_state_typeFv"

# @unnamed@zTalkBox_cpp@::next_state_type::next_state_type()
.fn "__ct__Q222@unnamed@zTalkBox_cpp@15next_state_typeFv", local
/* 80132FDC 001300BC  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80132FE0 001300C0  7C 08 02 A6 */	mflr r0
/* 80132FE4 001300C4  38 80 00 02 */	li r4, 0x2
/* 80132FE8 001300C8  90 01 00 14 */	stw r0, 0x14(r1)
/* 80132FEC 001300CC  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80132FF0 001300D0  7C 7F 1B 78 */	mr r31, r3
/* 80132FF4 001300D4  4B FF FF 95 */	bl "__ct__Q222@unnamed@zTalkBox_cpp@10state_typeFQ222@unnamed@zTalkBox_cpp@10state_enum"
/* 80132FF8 001300D8  3C 80 80 2A */	lis r4, "__vt__Q222@unnamed@zTalkBox_cpp@15next_state_type"@ha
/* 80132FFC 001300DC  7F E3 FB 78 */	mr r3, r31
/* 80133000 001300E0  38 04 8F 30 */	addi r0, r4, "__vt__Q222@unnamed@zTalkBox_cpp@15next_state_type"@l
/* 80133004 001300E4  90 1F 00 04 */	stw r0, 0x4(r31)
/* 80133008 001300E8  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8013300C 001300EC  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80133010 001300F0  7C 08 03 A6 */	mtlr r0
/* 80133014 001300F4  38 21 00 10 */	addi r1, r1, 0x10
/* 80133018 001300F8  4E 80 00 20 */	blr
.endfn "__ct__Q222@unnamed@zTalkBox_cpp@15next_state_typeFv"

# @unnamed@zTalkBox_cpp@::start_state_type::start_state_type()
.fn "__ct__Q222@unnamed@zTalkBox_cpp@16start_state_typeFv", local
/* 8013301C 001300FC  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80133020 00130100  7C 08 02 A6 */	mflr r0
/* 80133024 00130104  38 80 00 01 */	li r4, 0x1
/* 80133028 00130108  90 01 00 14 */	stw r0, 0x14(r1)
/* 8013302C 0013010C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80133030 00130110  7C 7F 1B 78 */	mr r31, r3
/* 80133034 00130114  4B FF FF 55 */	bl "__ct__Q222@unnamed@zTalkBox_cpp@10state_typeFQ222@unnamed@zTalkBox_cpp@10state_enum"
/* 80133038 00130118  3C 80 80 2A */	lis r4, "__vt__Q222@unnamed@zTalkBox_cpp@16start_state_type"@ha
/* 8013303C 0013011C  7F E3 FB 78 */	mr r3, r31
/* 80133040 00130120  38 04 8F 1C */	addi r0, r4, "__vt__Q222@unnamed@zTalkBox_cpp@16start_state_type"@l
/* 80133044 00130124  90 1F 00 04 */	stw r0, 0x4(r31)
/* 80133048 00130128  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8013304C 0013012C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80133050 00130130  7C 08 03 A6 */	mtlr r0
/* 80133054 00130134  38 21 00 10 */	addi r1, r1, 0x10
/* 80133058 00130138  4E 80 00 20 */	blr
.endfn "__ct__Q222@unnamed@zTalkBox_cpp@16start_state_typeFv"

# ztalkbox::load(xBase&, xDynAsset&, unsigned long)
.fn load__8ztalkboxFR5xBaseR9xDynAssetUl, global
/* 8013305C 0013013C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80133060 00130140  7C 08 02 A6 */	mflr r0
/* 80133064 00130144  90 01 00 14 */	stw r0, 0x14(r1)
/* 80133068 00130148  4B FF F4 E1 */	bl load__8ztalkboxFRCQ28ztalkbox10asset_type
/* 8013306C 0013014C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80133070 00130150  7C 08 03 A6 */	mtlr r0
/* 80133074 00130154  38 21 00 10 */	addi r1, r1, 0x10
/* 80133078 00130158  4E 80 00 20 */	blr
.endfn load__8ztalkboxFR5xBaseR9xDynAssetUl

# ztalkbox::update_all(xScene&, float)
.fn update_all__8ztalkboxFR6xScenef, global
/* 8013307C 0013015C  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 80133080 00130160  7C 08 02 A6 */	mflr r0
/* 80133084 00130164  90 01 00 24 */	stw r0, 0x24(r1)
/* 80133088 00130168  DB E1 00 18 */	stfd f31, 0x18(r1)
/* 8013308C 0013016C  FF E0 08 90 */	fmr f31, f1
/* 80133090 00130170  93 E1 00 14 */	stw r31, 0x14(r1)
/* 80133094 00130174  93 C1 00 10 */	stw r30, 0x10(r1)
/* 80133098 00130178  93 A1 00 0C */	stw r29, 0xc(r1)
/* 8013309C 0013017C  93 81 00 08 */	stw r28, 0x8(r1)
/* 801330A0 00130180  7C 7C 1B 78 */	mr r28, r3
/* 801330A4 00130184  4B F6 50 D9 */	bl zGameIsPaused__Fv
/* 801330A8 00130188  2C 03 00 00 */	cmpwi r3, 0x0
/* 801330AC 0013018C  40 82 01 20 */	bne .L_801331CC
/* 801330B0 00130190  3C 60 80 32 */	lis r3, "shared__22@unnamed@zTalkBox_cpp@"@ha
/* 801330B4 00130194  3B A3 B3 20 */	addi r29, r3, "shared__22@unnamed@zTalkBox_cpp@"@l
/* 801330B8 00130198  3F FD 00 01 */	addis r31, r29, 0x1
/* 801330BC 0013019C  48 00 00 8C */	b .L_80133148
.L_801330C0:
/* 801330C0 001301A0  38 00 00 01 */	li r0, 0x1
/* 801330C4 001301A4  FC 20 F8 90 */	fmr f1, f31
/* 801330C8 001301A8  98 1F 8D 7A */	stb r0, -0x7286(r31)
/* 801330CC 001301AC  7F 84 E3 78 */	mr r4, r28
/* 801330D0 001301B0  80 7D 00 0C */	lwz r3, 0xc(r29)
/* 801330D4 001301B4  81 83 00 04 */	lwz r12, 0x4(r3)
/* 801330D8 001301B8  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 801330DC 001301BC  7D 89 03 A6 */	mtctr r12
/* 801330E0 001301C0  4E 80 04 21 */	bctrl
/* 801330E4 001301C4  80 9D 00 0C */	lwz r4, 0xc(r29)
/* 801330E8 001301C8  7C 7E 1B 78 */	mr r30, r3
/* 801330EC 001301CC  80 04 00 00 */	lwz r0, 0x0(r4)
/* 801330F0 001301D0  7C 1E 00 00 */	cmpw r30, r0
/* 801330F4 001301D4  41 82 00 60 */	beq .L_80133154
/* 801330F8 001301D8  7C 83 23 78 */	mr r3, r4
/* 801330FC 001301DC  81 84 00 04 */	lwz r12, 0x4(r4)
/* 80133100 001301E0  81 8C 00 0C */	lwz r12, 0xc(r12)
/* 80133104 001301E4  7D 89 03 A6 */	mtctr r12
/* 80133108 001301E8  4E 80 04 21 */	bctrl
/* 8013310C 001301EC  2C 1E FF FF */	cmpwi r30, -0x1
/* 80133110 001301F0  40 82 00 0C */	bne .L_8013311C
/* 80133114 001301F4  4B FF F9 B1 */	bl "stop__22@unnamed@zTalkBox_cpp@Fv"
/* 80133118 001301F8  48 00 00 3C */	b .L_80133154
.L_8013311C:
/* 8013311C 001301FC  57 C0 10 3A */	slwi r0, r30, 2
/* 80133120 00130200  7C 7D 02 14 */	add r3, r29, r0
/* 80133124 00130204  80 63 00 10 */	lwz r3, 0x10(r3)
/* 80133128 00130208  90 7D 00 0C */	stw r3, 0xc(r29)
/* 8013312C 0013020C  81 83 00 04 */	lwz r12, 0x4(r3)
/* 80133130 00130210  81 8C 00 08 */	lwz r12, 0x8(r12)
/* 80133134 00130214  7D 89 03 A6 */	mtctr r12
/* 80133138 00130218  4E 80 04 21 */	bctrl
/* 8013313C 0013021C  38 00 00 00 */	li r0, 0x0
/* 80133140 00130220  98 1F 8D 7A */	stb r0, -0x7286(r31)
/* 80133144 00130224  4B FF D6 BD */	bl "flush_triggered__22@unnamed@zTalkBox_cpp@Fv"
.L_80133148:
/* 80133148 00130228  80 1D 00 0C */	lwz r0, 0xc(r29)
/* 8013314C 0013022C  28 00 00 00 */	cmplwi r0, 0x0
/* 80133150 00130230  40 82 FF 70 */	bne .L_801330C0
.L_80133154:
/* 80133154 00130234  80 1D 00 0C */	lwz r0, 0xc(r29)
/* 80133158 00130238  28 00 00 00 */	cmplwi r0, 0x0
/* 8013315C 0013023C  41 82 00 64 */	beq .L_801331C0
/* 80133160 00130240  3C 60 80 32 */	lis r3, "shared__22@unnamed@zTalkBox_cpp@"@ha
/* 80133164 00130244  38 63 B3 20 */	addi r3, r3, "shared__22@unnamed@zTalkBox_cpp@"@l
/* 80133168 00130248  80 63 00 08 */	lwz r3, 0x8(r3)
/* 8013316C 0013024C  28 03 00 00 */	cmplwi r3, 0x0
/* 80133170 00130250  41 82 00 50 */	beq .L_801331C0
/* 80133174 00130254  80 63 00 14 */	lwz r3, 0x14(r3)
/* 80133178 00130258  88 83 00 1F */	lbz r4, 0x1f(r3)
/* 8013317C 0013025C  2C 04 00 02 */	cmpwi r4, 0x2
/* 80133180 00130260  40 82 00 18 */	bne .L_80133198
/* 80133184 00130264  3C 60 80 3C */	lis r3, globals@ha
/* 80133188 00130268  38 63 05 58 */	addi r3, r3, globals@l
/* 8013318C 0013026C  80 03 17 88 */	lwz r0, 0x1788(r3)
/* 80133190 00130270  28 00 00 00 */	cmplwi r0, 0x0
/* 80133194 00130274  41 82 00 20 */	beq .L_801331B4
.L_80133198:
/* 80133198 00130278  2C 04 00 01 */	cmpwi r4, 0x1
/* 8013319C 0013027C  40 82 00 24 */	bne .L_801331C0
/* 801331A0 00130280  3C 60 80 3C */	lis r3, globals@ha
/* 801331A4 00130284  38 63 05 58 */	addi r3, r3, globals@l
/* 801331A8 00130288  80 03 17 88 */	lwz r0, 0x1788(r3)
/* 801331AC 0013028C  28 00 00 00 */	cmplwi r0, 0x0
/* 801331B0 00130290  41 82 00 10 */	beq .L_801331C0
.L_801331B4:
/* 801331B4 00130294  48 00 00 3D */	bl "pad_pressed__22@unnamed@zTalkBox_cpp@Fv"
/* 801331B8 00130298  80 63 00 00 */	lwz r3, 0x0(r3)
/* 801331BC 0013029C  4B FF D5 3D */	bl "trigger_pads__22@unnamed@zTalkBox_cpp@FUi"
.L_801331C0:
/* 801331C0 001302A0  38 00 00 00 */	li r0, 0x0
/* 801331C4 001302A4  98 1F 8D 7A */	stb r0, -0x7286(r31)
/* 801331C8 001302A8  4B FF D6 39 */	bl "flush_triggered__22@unnamed@zTalkBox_cpp@Fv"
.L_801331CC:
/* 801331CC 001302AC  80 01 00 24 */	lwz r0, 0x24(r1)
/* 801331D0 001302B0  CB E1 00 18 */	lfd f31, 0x18(r1)
/* 801331D4 001302B4  83 E1 00 14 */	lwz r31, 0x14(r1)
/* 801331D8 001302B8  83 C1 00 10 */	lwz r30, 0x10(r1)
/* 801331DC 001302BC  83 A1 00 0C */	lwz r29, 0xc(r1)
/* 801331E0 001302C0  83 81 00 08 */	lwz r28, 0x8(r1)
/* 801331E4 001302C4  7C 08 03 A6 */	mtlr r0
/* 801331E8 001302C8  38 21 00 20 */	addi r1, r1, 0x20
/* 801331EC 001302CC  4E 80 00 20 */	blr
.endfn update_all__8ztalkboxFR6xScenef

# @unnamed@zTalkBox_cpp@::pad_pressed()
.fn "pad_pressed__22@unnamed@zTalkBox_cpp@Fv", local
/* 801331F0 001302D0  3C 60 80 32 */	lis r3, "shared__22@unnamed@zTalkBox_cpp@"@ha
/* 801331F4 001302D4  38 63 B3 20 */	addi r3, r3, "shared__22@unnamed@zTalkBox_cpp@"@l
/* 801331F8 001302D8  80 03 00 04 */	lwz r0, 0x4(r3)
/* 801331FC 001302DC  54 00 07 BD */	rlwinm. r0, r0, 0, 30, 30
/* 80133200 001302E0  41 82 00 18 */	beq .L_80133218
/* 80133204 001302E4  3C 60 80 3C */	lis r3, globals@ha
/* 80133208 001302E8  38 63 05 58 */	addi r3, r3, globals@l
/* 8013320C 001302EC  80 63 03 1C */	lwz r3, 0x31c(r3)
/* 80133210 001302F0  38 63 00 30 */	addi r3, r3, 0x30
/* 80133214 001302F4  4E 80 00 20 */	blr
.L_80133218:
/* 80133218 001302F8  38 00 00 00 */	li r0, 0x0
/* 8013321C 001302FC  38 6D 95 F8 */	addi r3, r13, zero$829@sda21
/* 80133220 00130300  90 0D 95 F8 */	stw r0, zero$829@sda21(r13)
/* 80133224 00130304  4E 80 00 20 */	blr
.endfn "pad_pressed__22@unnamed@zTalkBox_cpp@Fv"

# ztalkbox::render_all()
.fn render_all__8ztalkboxFv, global
/* 80133228 00130308  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8013322C 0013030C  7C 08 02 A6 */	mflr r0
/* 80133230 00130310  3C 60 80 32 */	lis r3, "shared__22@unnamed@zTalkBox_cpp@"@ha
/* 80133234 00130314  90 01 00 14 */	stw r0, 0x14(r1)
/* 80133238 00130318  38 63 B3 20 */	addi r3, r3, "shared__22@unnamed@zTalkBox_cpp@"@l
/* 8013323C 0013031C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80133240 00130320  80 03 00 04 */	lwz r0, 0x4(r3)
/* 80133244 00130324  54 00 07 FF */	clrlwi. r0, r0, 31
/* 80133248 00130328  41 82 00 6C */	beq .L_801332B4
/* 8013324C 0013032C  80 03 00 0C */	lwz r0, 0xc(r3)
/* 80133250 00130330  28 00 00 00 */	cmplwi r0, 0x0
/* 80133254 00130334  41 82 00 60 */	beq .L_801332B4
/* 80133258 00130338  80 63 00 08 */	lwz r3, 0x8(r3)
/* 8013325C 0013033C  88 03 00 10 */	lbz r0, 0x10(r3)
/* 80133260 00130340  54 00 CF FF */	extrwi. r0, r0, 1, 24
/* 80133264 00130344  41 82 00 50 */	beq .L_801332B4
/* 80133268 00130348  83 E3 00 18 */	lwz r31, 0x18(r3)
/* 8013326C 0013034C  88 1F 00 10 */	lbz r0, 0x10(r31)
/* 80133270 00130350  54 00 CF FF */	extrwi. r0, r0, 1, 24
/* 80133274 00130354  41 82 00 0C */	beq .L_80133280
/* 80133278 00130358  7F E3 FB 78 */	mr r3, r31
/* 8013327C 0013035C  48 00 13 71 */	bl deactivate__8ztextboxFv
.L_80133280:
/* 80133280 00130360  88 1F 00 10 */	lbz r0, 0x10(r31)
/* 80133284 00130364  54 00 DF FF */	extrwi. r0, r0, 1, 26
/* 80133288 00130368  41 82 00 0C */	beq .L_80133294
/* 8013328C 0013036C  7F E3 FB 78 */	mr r3, r31
/* 80133290 00130370  48 00 12 CD */	bl render_backdrop__8ztextboxFv
.L_80133294:
/* 80133294 00130374  3C 80 80 32 */	lis r4, "shared__22@unnamed@zTalkBox_cpp@"@ha
/* 80133298 00130378  38 7F 00 18 */	addi r3, r31, 0x18
/* 8013329C 0013037C  38 84 B3 20 */	addi r4, r4, "shared__22@unnamed@zTalkBox_cpp@"@l
/* 801332A0 00130380  3C C4 00 01 */	addis r6, r4, 0x1
/* 801332A4 00130384  80 A6 8D 1C */	lwz r5, -0x72e4(r6)
/* 801332A8 00130388  38 84 00 24 */	addi r4, r4, 0x24
/* 801332AC 0013038C  80 C6 8D 20 */	lwz r6, -0x72e0(r6)
/* 801332B0 00130390  4B EE F6 01 */	bl render__8xtextboxCFRQ28xtextbox6layoutii
.L_801332B4:
/* 801332B4 00130394  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801332B8 00130398  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 801332BC 0013039C  7C 08 03 A6 */	mtlr r0
/* 801332C0 001303A0  38 21 00 10 */	addi r1, r1, 0x10
/* 801332C4 001303A4  4E 80 00 20 */	blr
.endfn render_all__8ztalkboxFv

# ztalkbox::reset_all()
.fn reset_all__8ztalkboxFv, global
/* 801332C8 001303A8  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801332CC 001303AC  7C 08 02 A6 */	mflr r0
/* 801332D0 001303B0  3C 60 80 32 */	lis r3, "shared__22@unnamed@zTalkBox_cpp@"@ha
/* 801332D4 001303B4  38 A0 00 00 */	li r5, 0x0
/* 801332D8 001303B8  90 01 00 14 */	stw r0, 0x14(r1)
/* 801332DC 001303BC  38 83 B3 20 */	addi r4, r3, "shared__22@unnamed@zTalkBox_cpp@"@l
/* 801332E0 001303C0  38 00 FF FF */	li r0, -0x1
/* 801332E4 001303C4  90 A4 00 00 */	stw r5, 0x0(r4)
/* 801332E8 001303C8  3C 64 00 01 */	addis r3, r4, 0x1
/* 801332EC 001303CC  90 04 00 04 */	stw r0, 0x4(r4)
/* 801332F0 001303D0  90 A4 00 08 */	stw r5, 0x8(r4)
/* 801332F4 001303D4  90 A4 00 0C */	stw r5, 0xc(r4)
/* 801332F8 001303D8  90 A3 8D 7C */	stw r5, -0x7284(r3)
/* 801332FC 001303DC  98 A3 8D 7A */	stb r5, -0x7286(r3)
/* 80133300 001303E0  90 A3 8E 94 */	stw r5, -0x716c(r3)
/* 80133304 001303E4  38 63 8D 80 */	addi r3, r3, -0x7280
/* 80133308 001303E8  48 00 09 1D */	bl "reset__56fixed_queue<Q222@unnamed@zTalkBox_cpp@12trigger_pair,32>Fv"
/* 8013330C 001303EC  3C 60 80 32 */	lis r3, "shared__22@unnamed@zTalkBox_cpp@"@ha
/* 80133310 001303F0  38 00 00 00 */	li r0, 0x0
/* 80133314 001303F4  38 63 B3 20 */	addi r3, r3, "shared__22@unnamed@zTalkBox_cpp@"@l
/* 80133318 001303F8  3C 83 00 01 */	addis r4, r3, 0x1
/* 8013331C 001303FC  98 04 8D 55 */	stb r0, -0x72ab(r4)
/* 80133320 00130400  38 63 00 24 */	addi r3, r3, 0x24
/* 80133324 00130404  98 04 8D 54 */	stb r0, -0x72ac(r4)
/* 80133328 00130408  90 04 8D 58 */	stw r0, -0x72a8(r4)
/* 8013332C 0013040C  98 04 8D 57 */	stb r0, -0x72a9(r4)
/* 80133330 00130410  98 04 8D 56 */	stb r0, -0x72aa(r4)
/* 80133334 00130414  4B EE FA 59 */	bl clear__Q28xtextbox6layoutFv
/* 80133338 00130418  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8013333C 0013041C  7C 08 03 A6 */	mtlr r0
/* 80133340 00130420  38 21 00 10 */	addi r1, r1, 0x10
/* 80133344 00130424  4E 80 00 20 */	blr
.endfn reset_all__8ztalkboxFv

# ztalkbox::get_active()
.fn get_active__8ztalkboxFv, global
/* 80133348 00130428  3C 60 80 32 */	lis r3, "shared__22@unnamed@zTalkBox_cpp@"@ha
/* 8013334C 0013042C  38 63 B3 20 */	addi r3, r3, "shared__22@unnamed@zTalkBox_cpp@"@l
/* 80133350 00130430  80 63 00 08 */	lwz r3, 0x8(r3)
/* 80133354 00130434  4E 80 00 20 */	blr
.endfn get_active__8ztalkboxFv

# ztalkbox::permit(unsigned int, unsigned int)
.fn permit__8ztalkboxFUiUi, global
/* 80133358 00130438  3C A0 80 32 */	lis r5, "shared__22@unnamed@zTalkBox_cpp@"@ha
/* 8013335C 0013043C  38 A5 B3 20 */	addi r5, r5, "shared__22@unnamed@zTalkBox_cpp@"@l
/* 80133360 00130440  80 05 00 04 */	lwz r0, 0x4(r5)
/* 80133364 00130444  7C 00 20 78 */	andc r0, r0, r4
/* 80133368 00130448  90 05 00 04 */	stw r0, 0x4(r5)
/* 8013336C 0013044C  7C 00 1B 78 */	or r0, r0, r3
/* 80133370 00130450  90 05 00 04 */	stw r0, 0x4(r5)
/* 80133374 00130454  4E 80 00 20 */	blr
.endfn permit__8ztalkboxFUiUi

# @unnamed@zTalkBox_cpp@::start_state_type::start()
.fn "start__Q222@unnamed@zTalkBox_cpp@16start_state_typeFv", local
/* 80133378 00130458  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8013337C 0013045C  7C 08 02 A6 */	mflr r0
/* 80133380 00130460  3C 60 80 32 */	lis r3, "shared__22@unnamed@zTalkBox_cpp@"@ha
/* 80133384 00130464  90 01 00 14 */	stw r0, 0x14(r1)
/* 80133388 00130468  38 63 B3 20 */	addi r3, r3, "shared__22@unnamed@zTalkBox_cpp@"@l
/* 8013338C 0013046C  38 00 00 00 */	li r0, 0x0
/* 80133390 00130470  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80133394 00130474  3C 83 00 01 */	addis r4, r3, 0x1
/* 80133398 00130478  3B E4 8D 28 */	addi r31, r4, -0x72d8
/* 8013339C 0013047C  90 04 8D 24 */	stw r0, -0x72dc(r4)
/* 801333A0 00130480  7F E3 FB 78 */	mr r3, r31
/* 801333A4 00130484  90 04 8D 20 */	stw r0, -0x72e0(r4)
/* 801333A8 00130488  90 04 8D 1C */	stw r0, -0x72e4(r4)
/* 801333AC 0013048C  4B FF D8 E5 */	bl "reset_type__Q222@unnamed@zTalkBox_cpp@12wait_contextFv"
/* 801333B0 00130490  88 1F 00 00 */	lbz r0, 0x0(r31)
/* 801333B4 00130494  38 60 00 01 */	li r3, 0x1
/* 801333B8 00130498  50 60 3E 30 */	rlwimi r0, r3, 7, 24, 24
/* 801333BC 0013049C  3C 60 80 32 */	lis r3, "shared__22@unnamed@zTalkBox_cpp@"@ha
/* 801333C0 001304A0  98 1F 00 00 */	stb r0, 0x0(r31)
/* 801333C4 001304A4  38 63 B3 20 */	addi r3, r3, "shared__22@unnamed@zTalkBox_cpp@"@l
/* 801333C8 001304A8  3C 63 00 01 */	addis r3, r3, 0x1
/* 801333CC 001304AC  38 00 00 00 */	li r0, 0x0
/* 801333D0 001304B0  C0 02 A3 28 */	lfs f0, "@1032"@sda21(r2)
/* 801333D4 001304B4  D0 03 8D 2C */	stfs f0, -0x72d4(r3)
/* 801333D8 001304B8  C0 02 A3 3C */	lfs f0, "@2209"@sda21(r2)
/* 801333DC 001304BC  D0 03 8D 50 */	stfs f0, -0x72b0(r3)
/* 801333E0 001304C0  D0 03 8D 4C */	stfs f0, -0x72b4(r3)
/* 801333E4 001304C4  98 03 8D 55 */	stb r0, -0x72ab(r3)
/* 801333E8 001304C8  98 03 8D 54 */	stb r0, -0x72ac(r3)
/* 801333EC 001304CC  4B FF EC 29 */	bl "refresh_prompts__22@unnamed@zTalkBox_cpp@Fv"
/* 801333F0 001304D0  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801333F4 001304D4  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 801333F8 001304D8  7C 08 03 A6 */	mtlr r0
/* 801333FC 001304DC  38 21 00 10 */	addi r1, r1, 0x10
/* 80133400 001304E0  4E 80 00 20 */	blr
.endfn "start__Q222@unnamed@zTalkBox_cpp@16start_state_typeFv"

# @unnamed@zTalkBox_cpp@::start_state_type::stop()
.fn "stop__Q222@unnamed@zTalkBox_cpp@16start_state_typeFv", local
/* 80133404 001304E4  4E 80 00 20 */	blr
.endfn "stop__Q222@unnamed@zTalkBox_cpp@16start_state_typeFv"

# @unnamed@zTalkBox_cpp@::start_state_type::update(xScene&, float)
.fn "update__Q222@unnamed@zTalkBox_cpp@16start_state_typeFR6xScenef", local
/* 80133408 001304E8  38 60 00 02 */	li r3, 0x2
/* 8013340C 001304EC  4E 80 00 20 */	blr
.endfn "update__Q222@unnamed@zTalkBox_cpp@16start_state_typeFR6xScenef"

# @unnamed@zTalkBox_cpp@::next_state_type::start()
.fn "start__Q222@unnamed@zTalkBox_cpp@15next_state_typeFv", local
/* 80133410 001304F0  94 21 FF D0 */	stwu r1, -0x30(r1)
/* 80133414 001304F4  7C 08 02 A6 */	mflr r0
/* 80133418 001304F8  3C 60 80 32 */	lis r3, "shared__22@unnamed@zTalkBox_cpp@"@ha
/* 8013341C 001304FC  90 01 00 34 */	stw r0, 0x34(r1)
/* 80133420 00130500  38 A3 B3 20 */	addi r5, r3, "shared__22@unnamed@zTalkBox_cpp@"@l
/* 80133424 00130504  BF 61 00 1C */	stmw r27, 0x1c(r1)
/* 80133428 00130508  3F E5 00 01 */	addis r31, r5, 0x1
/* 8013342C 0013050C  80 7F 8D 20 */	lwz r3, -0x72e0(r31)
/* 80133430 00130510  80 1F 8D 24 */	lwz r0, -0x72dc(r31)
/* 80133434 00130514  7C 03 00 00 */	cmpw r3, r0
/* 80133438 00130518  40 82 00 A4 */	bne .L_801334DC
/* 8013343C 0013051C  80 85 00 08 */	lwz r4, 0x8(r5)
/* 80133440 00130520  3B A5 00 24 */	addi r29, r5, 0x24
/* 80133444 00130524  7F A3 EB 78 */	mr r3, r29
/* 80133448 00130528  80 84 00 18 */	lwz r4, 0x18(r4)
/* 8013344C 0013052C  3B 64 00 18 */	addi r27, r4, 0x18
/* 80133450 00130530  4B EF 31 65 */	bl jots_size__Q28xtextbox6layoutCFv
/* 80133454 00130534  7C 7E 1B 78 */	mr r30, r3
/* 80133458 00130538  7F A3 EB 78 */	mr r3, r29
/* 8013345C 0013053C  48 00 09 D5 */	bl jots__Q28xtextbox6layoutCFv
/* 80133460 00130540  3C 60 80 32 */	lis r3, "shared__22@unnamed@zTalkBox_cpp@"@ha
/* 80133464 00130544  80 1F 8D 20 */	lwz r0, -0x72e0(r31)
/* 80133468 00130548  38 83 B3 20 */	addi r4, r3, "shared__22@unnamed@zTalkBox_cpp@"@l
/* 8013346C 0013054C  7F 63 DB 78 */	mr r3, r27
/* 80133470 00130550  3F 84 00 01 */	addis r28, r4, 0x1
/* 80133474 00130554  7F A5 EB 78 */	mr r5, r29
/* 80133478 00130558  90 1C 8D 1C */	stw r0, -0x72e4(r28)
/* 8013347C 0013055C  38 81 00 08 */	addi r4, r1, 0x8
/* 80133480 00130560  38 E0 FF FF */	li r7, -0x1
/* 80133484 00130564  C0 3B 00 30 */	lfs f1, 0x30(r27)
/* 80133488 00130568  80 DC 8D 1C */	lwz r6, -0x72e4(r28)
/* 8013348C 0013056C  4B EE F4 51 */	bl yextent__8xtextboxCFfRiRCQ28xtextbox6layoutii
/* 80133490 00130570  80 01 00 08 */	lwz r0, 0x8(r1)
/* 80133494 00130574  2C 00 00 00 */	cmpwi r0, 0x0
/* 80133498 00130578  40 82 00 18 */	bne .L_801334B0
/* 8013349C 0013057C  80 1C 8D 1C */	lwz r0, -0x72e4(r28)
/* 801334A0 00130580  7C 1E 00 00 */	cmpw r30, r0
/* 801334A4 00130584  40 81 00 0C */	ble .L_801334B0
/* 801334A8 00130588  38 00 00 01 */	li r0, 0x1
/* 801334AC 0013058C  90 01 00 08 */	stw r0, 0x8(r1)
.L_801334B0:
/* 801334B0 00130590  80 7C 8D 1C */	lwz r3, -0x72e4(r28)
/* 801334B4 00130594  80 01 00 08 */	lwz r0, 0x8(r1)
/* 801334B8 00130598  7C 03 02 14 */	add r0, r3, r0
/* 801334BC 0013059C  90 1F 8D 24 */	stw r0, -0x72dc(r31)
/* 801334C0 001305A0  48 00 00 1C */	b .L_801334DC
.L_801334C4:
/* 801334C4 001305A4  80 7F 8D 20 */	lwz r3, -0x72e0(r31)
/* 801334C8 001305A8  38 03 00 01 */	addi r0, r3, 0x1
/* 801334CC 001305AC  90 1F 8D 20 */	stw r0, -0x72e0(r31)
/* 801334D0 001305B0  48 00 00 C1 */	bl "trigger_jot__22@unnamed@zTalkBox_cpp@Fi"
/* 801334D4 001305B4  54 60 06 3F */	clrlwi. r0, r3, 24
/* 801334D8 001305B8  41 82 00 14 */	beq .L_801334EC
.L_801334DC:
/* 801334DC 001305BC  80 7F 8D 20 */	lwz r3, -0x72e0(r31)
/* 801334E0 001305C0  80 1F 8D 24 */	lwz r0, -0x72dc(r31)
/* 801334E4 001305C4  7C 03 00 00 */	cmpw r3, r0
/* 801334E8 001305C8  41 80 FF DC */	blt .L_801334C4
.L_801334EC:
/* 801334EC 001305CC  80 7F 8D 20 */	lwz r3, -0x72e0(r31)
/* 801334F0 001305D0  80 1F 8D 24 */	lwz r0, -0x72dc(r31)
/* 801334F4 001305D4  7C 03 00 00 */	cmpw r3, r0
/* 801334F8 001305D8  40 82 00 84 */	bne .L_8013357C
/* 801334FC 001305DC  3C 60 80 32 */	lis r3, "shared__22@unnamed@zTalkBox_cpp@"@ha
/* 80133500 001305E0  38 63 B3 20 */	addi r3, r3, "shared__22@unnamed@zTalkBox_cpp@"@l
/* 80133504 001305E4  38 63 00 24 */	addi r3, r3, 0x24
/* 80133508 001305E8  48 00 09 29 */	bl jots__Q28xtextbox6layoutCFv
/* 8013350C 001305EC  80 BF 8D 20 */	lwz r5, -0x72e0(r31)
/* 80133510 001305F0  1C 85 00 3C */	mulli r4, r5, 0x3c
/* 80133514 001305F4  38 C4 FF C4 */	addi r6, r4, -0x3c
/* 80133518 001305F8  7C C3 32 14 */	add r6, r3, r6
/* 8013351C 001305FC  88 06 00 09 */	lbz r0, 0x9(r6)
/* 80133520 00130600  54 00 DF FF */	extrwi. r0, r0, 1, 26
/* 80133524 00130604  41 82 00 24 */	beq .L_80133548
/* 80133528 00130608  3C 60 80 32 */	lis r3, "shared__22@unnamed@zTalkBox_cpp@"@ha
/* 8013352C 0013060C  38 85 FF FF */	addi r4, r5, -0x1
/* 80133530 00130610  38 63 B3 20 */	addi r3, r3, "shared__22@unnamed@zTalkBox_cpp@"@l
/* 80133534 00130614  3C 63 00 01 */	addis r3, r3, 0x1
/* 80133538 00130618  80 03 8D 1C */	lwz r0, -0x72e4(r3)
/* 8013353C 0013061C  7C 04 00 00 */	cmpw r4, r0
/* 80133540 00130620  40 81 00 08 */	ble .L_80133548
/* 80133544 00130624  38 C6 FF C4 */	addi r6, r6, -0x3c
.L_80133548:
/* 80133548 00130628  7C C3 33 78 */	mr r3, r6
/* 8013354C 0013062C  4B FF E9 05 */	bl "is_wait_jot__22@unnamed@zTalkBox_cpp@FRCQ28xtextbox3jot"
/* 80133550 00130630  54 60 06 3F */	clrlwi. r0, r3, 24
/* 80133554 00130634  40 82 00 28 */	bne .L_8013357C
/* 80133558 00130638  3C 60 80 32 */	lis r3, "shared__22@unnamed@zTalkBox_cpp@"@ha
/* 8013355C 0013063C  38 63 B3 20 */	addi r3, r3, "shared__22@unnamed@zTalkBox_cpp@"@l
/* 80133560 00130640  3C 63 00 01 */	addis r3, r3, 0x1
/* 80133564 00130644  7C 64 1B 78 */	mr r4, r3
/* 80133568 00130648  38 84 8D 38 */	addi r4, r4, -0x72c8
/* 8013356C 0013064C  38 63 8D 28 */	addi r3, r3, -0x72d8
/* 80133570 00130650  4B FF D8 0D */	bl "__as__Q222@unnamed@zTalkBox_cpp@12wait_contextFRCQ222@unnamed@zTalkBox_cpp@12wait_context"
/* 80133574 00130654  48 00 00 08 */	b .L_8013357C
/* 80133578 00130658  4B FF FF 64 */	b .L_801334DC
.L_8013357C:
/* 8013357C 0013065C  BB 61 00 1C */	lmw r27, 0x1c(r1)
/* 80133580 00130660  80 01 00 34 */	lwz r0, 0x34(r1)
/* 80133584 00130664  7C 08 03 A6 */	mtlr r0
/* 80133588 00130668  38 21 00 30 */	addi r1, r1, 0x30
/* 8013358C 0013066C  4E 80 00 20 */	blr
.endfn "start__Q222@unnamed@zTalkBox_cpp@15next_state_typeFv"

# @unnamed@zTalkBox_cpp@::trigger_jot(int)
.fn "trigger_jot__22@unnamed@zTalkBox_cpp@Fi", local
/* 80133590 00130670  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80133594 00130674  7C 08 02 A6 */	mflr r0
/* 80133598 00130678  3C 80 80 32 */	lis r4, "shared__22@unnamed@zTalkBox_cpp@"@ha
/* 8013359C 0013067C  90 01 00 14 */	stw r0, 0x14(r1)
/* 801335A0 00130680  93 E1 00 0C */	stw r31, 0xc(r1)
/* 801335A4 00130684  7C 7F 1B 78 */	mr r31, r3
/* 801335A8 00130688  38 64 B3 20 */	addi r3, r4, "shared__22@unnamed@zTalkBox_cpp@"@l
/* 801335AC 0013068C  38 63 00 24 */	addi r3, r3, 0x24
/* 801335B0 00130690  48 00 08 81 */	bl jots__Q28xtextbox6layoutCFv
/* 801335B4 00130694  1C 1F 00 3C */	mulli r0, r31, 0x3c
/* 801335B8 00130698  7C 63 02 14 */	add r3, r3, r0
/* 801335BC 0013069C  48 00 00 19 */	bl "trigger_jot__22@unnamed@zTalkBox_cpp@FRCQ28xtextbox3jot"
/* 801335C0 001306A0  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801335C4 001306A4  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 801335C8 001306A8  7C 08 03 A6 */	mtlr r0
/* 801335CC 001306AC  38 21 00 10 */	addi r1, r1, 0x10
/* 801335D0 001306B0  4E 80 00 20 */	blr
.endfn "trigger_jot__22@unnamed@zTalkBox_cpp@Fi"

# @unnamed@zTalkBox_cpp@::trigger_jot(const xtextbox::jot&)
.fn "trigger_jot__22@unnamed@zTalkBox_cpp@FRCQ28xtextbox3jot", local
/* 801335D4 001306B4  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801335D8 001306B8  7C 08 02 A6 */	mflr r0
/* 801335DC 001306BC  80 83 00 38 */	lwz r4, 0x38(r3)
/* 801335E0 001306C0  90 01 00 14 */	stw r0, 0x14(r1)
/* 801335E4 001306C4  28 04 00 00 */	cmplwi r4, 0x0
/* 801335E8 001306C8  40 82 00 0C */	bne .L_801335F4
/* 801335EC 001306CC  38 60 00 01 */	li r3, 0x1
/* 801335F0 001306D0  48 00 00 20 */	b .L_80133610
.L_801335F4:
/* 801335F4 001306D4  81 84 00 10 */	lwz r12, 0x10(r4)
/* 801335F8 001306D8  28 0C 00 00 */	cmplwi r12, 0x0
/* 801335FC 001306DC  41 82 00 10 */	beq .L_8013360C
/* 80133600 001306E0  7D 89 03 A6 */	mtctr r12
/* 80133604 001306E4  4E 80 04 21 */	bctrl
/* 80133608 001306E8  48 00 00 08 */	b .L_80133610
.L_8013360C:
/* 8013360C 001306EC  38 60 00 01 */	li r3, 0x1
.L_80133610:
/* 80133610 001306F0  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80133614 001306F4  7C 08 03 A6 */	mtlr r0
/* 80133618 001306F8  38 21 00 10 */	addi r1, r1, 0x10
/* 8013361C 001306FC  4E 80 00 20 */	blr
.endfn "trigger_jot__22@unnamed@zTalkBox_cpp@FRCQ28xtextbox3jot"

# @unnamed@zTalkBox_cpp@::next_state_type::stop()
.fn "stop__Q222@unnamed@zTalkBox_cpp@15next_state_typeFv", local
/* 80133620 00130700  4E 80 00 20 */	blr
.endfn "stop__Q222@unnamed@zTalkBox_cpp@15next_state_typeFv"

# @unnamed@zTalkBox_cpp@::next_state_type::update(xScene&, float)
.fn "update__Q222@unnamed@zTalkBox_cpp@15next_state_typeFR6xScenef", local
/* 80133624 00130704  3C 80 80 32 */	lis r4, "shared__22@unnamed@zTalkBox_cpp@"@ha
/* 80133628 00130708  38 60 00 03 */	li r3, 0x3
/* 8013362C 0013070C  38 84 B3 20 */	addi r4, r4, "shared__22@unnamed@zTalkBox_cpp@"@l
/* 80133630 00130710  3C A4 00 01 */	addis r5, r4, 0x1
/* 80133634 00130714  80 85 8D 1C */	lwz r4, -0x72e4(r5)
/* 80133638 00130718  80 05 8D 24 */	lwz r0, -0x72dc(r5)
/* 8013363C 0013071C  7C 04 00 00 */	cmpw r4, r0
/* 80133640 00130720  4C 82 00 20 */	bnelr
/* 80133644 00130724  38 60 00 04 */	li r3, 0x4
/* 80133648 00130728  4E 80 00 20 */	blr
.endfn "update__Q222@unnamed@zTalkBox_cpp@15next_state_typeFR6xScenef"

# @unnamed@zTalkBox_cpp@::wait_state_type::start()
.fn "start__Q222@unnamed@zTalkBox_cpp@15wait_state_typeFv", local
/* 8013364C 0013072C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80133650 00130730  7C 08 02 A6 */	mflr r0
/* 80133654 00130734  90 01 00 14 */	stw r0, 0x14(r1)
/* 80133658 00130738  38 00 00 00 */	li r0, 0x0
/* 8013365C 0013073C  98 03 00 08 */	stb r0, 0x8(r3)
/* 80133660 00130740  4B FF E9 B5 */	bl "refresh_prompts__22@unnamed@zTalkBox_cpp@Fv"
/* 80133664 00130744  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80133668 00130748  7C 08 03 A6 */	mtlr r0
/* 8013366C 0013074C  38 21 00 10 */	addi r1, r1, 0x10
/* 80133670 00130750  4E 80 00 20 */	blr
.endfn "start__Q222@unnamed@zTalkBox_cpp@15wait_state_typeFv"

# @unnamed@zTalkBox_cpp@::wait_state_type::stop()
.fn "stop__Q222@unnamed@zTalkBox_cpp@15wait_state_typeFv", local
/* 80133674 00130754  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80133678 00130758  7C 08 02 A6 */	mflr r0
/* 8013367C 0013075C  3C 80 80 32 */	lis r4, "shared__22@unnamed@zTalkBox_cpp@"@ha
/* 80133680 00130760  90 01 00 14 */	stw r0, 0x14(r1)
/* 80133684 00130764  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80133688 00130768  93 C1 00 08 */	stw r30, 0x8(r1)
/* 8013368C 0013076C  7C 7E 1B 78 */	mr r30, r3
/* 80133690 00130770  38 64 B3 20 */	addi r3, r4, "shared__22@unnamed@zTalkBox_cpp@"@l
/* 80133694 00130774  3F E3 00 01 */	addis r31, r3, 0x1
/* 80133698 00130778  8C 1F 8D 28 */	lbzu r0, -0x72d8(r31)
/* 8013369C 0013077C  54 00 CF FF */	extrwi. r0, r0, 1, 24
/* 801336A0 00130780  41 82 00 10 */	beq .L_801336B0
/* 801336A4 00130784  88 1F 00 00 */	lbz r0, 0x0(r31)
/* 801336A8 00130788  54 00 D7 FF */	extrwi. r0, r0, 1, 25
/* 801336AC 0013078C  41 82 00 20 */	beq .L_801336CC
.L_801336B0:
/* 801336B0 00130790  3C 60 80 32 */	lis r3, "shared__22@unnamed@zTalkBox_cpp@"@ha
/* 801336B4 00130794  C0 02 A3 40 */	lfs f0, "@2251"@sda21(r2)
/* 801336B8 00130798  38 63 B3 20 */	addi r3, r3, "shared__22@unnamed@zTalkBox_cpp@"@l
/* 801336BC 0013079C  38 00 00 00 */	li r0, 0x0
/* 801336C0 001307A0  3C 63 00 01 */	addis r3, r3, 0x1
/* 801336C4 001307A4  D0 03 8D 4C */	stfs f0, -0x72b4(r3)
/* 801336C8 001307A8  98 03 8D 54 */	stb r0, -0x72ac(r3)
.L_801336CC:
/* 801336CC 001307AC  3C 60 80 32 */	lis r3, "shared__22@unnamed@zTalkBox_cpp@"@ha
/* 801336D0 001307B0  C0 02 A3 28 */	lfs f0, "@1032"@sda21(r2)
/* 801336D4 001307B4  38 63 B3 20 */	addi r3, r3, "shared__22@unnamed@zTalkBox_cpp@"@l
/* 801336D8 001307B8  38 A0 00 01 */	li r5, 0x1
/* 801336DC 001307BC  3C 63 00 01 */	addis r3, r3, 0x1
/* 801336E0 001307C0  D0 03 8D 50 */	stfs f0, -0x72b0(r3)
/* 801336E4 001307C4  98 A3 8D 55 */	stb r5, -0x72ab(r3)
/* 801336E8 001307C8  88 1F 00 00 */	lbz r0, 0x0(r31)
/* 801336EC 001307CC  54 00 D7 FF */	extrwi. r0, r0, 1, 25
/* 801336F0 001307D0  41 82 00 58 */	beq .L_80133748
/* 801336F4 001307D4  80 03 8D 34 */	lwz r0, -0x72cc(r3)
/* 801336F8 001307D8  2C 00 00 01 */	cmpwi r0, 0x1
/* 801336FC 001307DC  40 82 00 4C */	bne .L_80133748
/* 80133700 001307E0  80 63 8D 7C */	lwz r3, -0x7284(r3)
/* 80133704 001307E4  28 03 00 00 */	cmplwi r3, 0x0
/* 80133708 001307E8  41 82 00 28 */	beq .L_80133730
/* 8013370C 001307EC  88 1E 00 08 */	lbz r0, 0x8(r30)
/* 80133710 001307F0  38 80 00 02 */	li r4, 0x2
/* 80133714 001307F4  28 00 00 00 */	cmplwi r0, 0x0
/* 80133718 001307F8  41 82 00 08 */	beq .L_80133720
/* 8013371C 001307FC  7C A4 2B 78 */	mr r4, r5
.L_80133720:
/* 80133720 00130800  81 83 00 00 */	lwz r12, 0x0(r3)
/* 80133724 00130804  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 80133728 00130808  7D 89 03 A6 */	mtctr r12
/* 8013372C 0013080C  4E 80 04 21 */	bctrl
.L_80133730:
/* 80133730 00130810  88 1E 00 08 */	lbz r0, 0x8(r30)
/* 80133734 00130814  38 60 01 C6 */	li r3, 0x1c6
/* 80133738 00130818  28 00 00 00 */	cmplwi r0, 0x0
/* 8013373C 0013081C  41 82 00 08 */	beq .L_80133744
/* 80133740 00130820  38 60 01 C5 */	li r3, 0x1c5
.L_80133744:
/* 80133744 00130824  4B FF CF 31 */	bl "trigger__22@unnamed@zTalkBox_cpp@FUi"
.L_80133748:
/* 80133748 00130828  7F E3 FB 78 */	mr r3, r31
/* 8013374C 0013082C  4B FF D5 45 */	bl "reset_type__Q222@unnamed@zTalkBox_cpp@12wait_contextFv"
/* 80133750 00130830  88 1F 00 00 */	lbz r0, 0x0(r31)
/* 80133754 00130834  38 60 00 01 */	li r3, 0x1
/* 80133758 00130838  50 60 3E 30 */	rlwimi r0, r3, 7, 24, 24
/* 8013375C 0013083C  3C 60 80 32 */	lis r3, "shared__22@unnamed@zTalkBox_cpp@"@ha
/* 80133760 00130840  98 1F 00 00 */	stb r0, 0x0(r31)
/* 80133764 00130844  38 63 B3 20 */	addi r3, r3, "shared__22@unnamed@zTalkBox_cpp@"@l
/* 80133768 00130848  3C 63 00 01 */	addis r3, r3, 0x1
/* 8013376C 0013084C  38 00 00 00 */	li r0, 0x0
/* 80133770 00130850  C0 02 A3 28 */	lfs f0, "@1032"@sda21(r2)
/* 80133774 00130854  D0 03 8D 2C */	stfs f0, -0x72d4(r3)
/* 80133778 00130858  98 03 8D 2A */	stb r0, -0x72d6(r3)
/* 8013377C 0013085C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80133780 00130860  83 C1 00 08 */	lwz r30, 0x8(r1)
/* 80133784 00130864  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80133788 00130868  7C 08 03 A6 */	mtlr r0
/* 8013378C 0013086C  38 21 00 10 */	addi r1, r1, 0x10
/* 80133790 00130870  4E 80 00 20 */	blr
.endfn "stop__Q222@unnamed@zTalkBox_cpp@15wait_state_typeFv"

# @unnamed@zTalkBox_cpp@::wait_state_type::update(xScene&, float)
.fn "update__Q222@unnamed@zTalkBox_cpp@15wait_state_typeFR6xScenef", local
/* 80133794 00130874  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 80133798 00130878  7C 08 02 A6 */	mflr r0
/* 8013379C 0013087C  90 01 00 24 */	stw r0, 0x24(r1)
/* 801337A0 00130880  DB E1 00 10 */	stfd f31, 0x10(r1)
/* 801337A4 00130884  F3 E1 00 18 */	psq_st f31, 0x18(r1), 0, qr0
/* 801337A8 00130888  93 E1 00 0C */	stw r31, 0xc(r1)
/* 801337AC 0013088C  93 C1 00 08 */	stw r30, 0x8(r1)
/* 801337B0 00130890  7C 7E 1B 78 */	mr r30, r3
/* 801337B4 00130894  FF E0 08 90 */	fmr f31, f1
/* 801337B8 00130898  4B FF E9 BD */	bl "update_prompt_status__22@unnamed@zTalkBox_cpp@Ff"
/* 801337BC 0013089C  FC 20 F8 90 */	fmr f1, f31
/* 801337C0 001308A0  4B FF EA 51 */	bl "update_quit_status__22@unnamed@zTalkBox_cpp@Ff"
/* 801337C4 001308A4  4B FF FA 2D */	bl "pad_pressed__22@unnamed@zTalkBox_cpp@Fv"
/* 801337C8 001308A8  3C 80 80 32 */	lis r4, "shared__22@unnamed@zTalkBox_cpp@"@ha
/* 801337CC 001308AC  38 84 B3 20 */	addi r4, r4, "shared__22@unnamed@zTalkBox_cpp@"@l
/* 801337D0 001308B0  3C 84 00 01 */	addis r4, r4, 0x1
/* 801337D4 001308B4  88 04 8D 79 */	lbz r0, -0x7287(r4)
/* 801337D8 001308B8  28 00 00 00 */	cmplwi r0, 0x0
/* 801337DC 001308BC  41 82 00 2C */	beq .L_80133808
/* 801337E0 001308C0  88 04 8D 78 */	lbz r0, -0x7288(r4)
/* 801337E4 001308C4  28 00 00 00 */	cmplwi r0, 0x0
/* 801337E8 001308C8  41 82 00 18 */	beq .L_80133800
/* 801337EC 001308CC  88 04 8D 2A */	lbz r0, -0x72d6(r4)
/* 801337F0 001308D0  28 00 00 00 */	cmplwi r0, 0x0
/* 801337F4 001308D4  40 82 00 0C */	bne .L_80133800
/* 801337F8 001308D8  38 60 00 02 */	li r3, 0x2
/* 801337FC 001308DC  48 00 01 A4 */	b .L_801339A0
.L_80133800:
/* 80133800 001308E0  38 00 00 00 */	li r0, 0x0
/* 80133804 001308E4  98 04 8D 79 */	stb r0, -0x7287(r4)
.L_80133808:
/* 80133808 001308E8  3C A0 80 32 */	lis r5, "shared__22@unnamed@zTalkBox_cpp@"@ha
/* 8013380C 001308EC  38 A5 B3 20 */	addi r5, r5, "shared__22@unnamed@zTalkBox_cpp@"@l
/* 80133810 001308F0  3F E5 00 01 */	addis r31, r5, 0x1
/* 80133814 001308F4  88 1F 8D 28 */	lbz r0, -0x72d8(r31)
/* 80133818 001308F8  54 00 CF FF */	extrwi. r0, r0, 1, 24
/* 8013381C 001308FC  41 82 00 2C */	beq .L_80133848
/* 80133820 00130900  C0 1F 8D 2C */	lfs f0, -0x72d4(r31)
/* 80133824 00130904  EC 00 F8 28 */	fsubs f0, f0, f31
/* 80133828 00130908  D0 1F 8D 2C */	stfs f0, -0x72d4(r31)
/* 8013382C 0013090C  C0 3F 8D 2C */	lfs f1, -0x72d4(r31)
/* 80133830 00130910  C0 02 A3 28 */	lfs f0, "@1032"@sda21(r2)
/* 80133834 00130914  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80133838 00130918  4C 40 13 82 */	cror eq, lt, eq
/* 8013383C 0013091C  40 82 00 0C */	bne .L_80133848
/* 80133840 00130920  38 60 00 02 */	li r3, 0x2
/* 80133844 00130924  48 00 01 5C */	b .L_801339A0
.L_80133848:
/* 80133848 00130928  88 1F 8D 28 */	lbz r0, -0x72d8(r31)
/* 8013384C 0013092C  54 00 D7 FF */	extrwi. r0, r0, 1, 25
/* 80133850 00130930  41 82 00 88 */	beq .L_801338D8
/* 80133854 00130934  3C A0 80 32 */	lis r5, "shared__22@unnamed@zTalkBox_cpp@"@ha
/* 80133858 00130938  38 A5 B3 20 */	addi r5, r5, "shared__22@unnamed@zTalkBox_cpp@"@l
/* 8013385C 0013093C  3C A5 00 01 */	addis r5, r5, 0x1
/* 80133860 00130940  88 05 8D 54 */	lbz r0, -0x72ac(r5)
/* 80133864 00130944  28 00 00 00 */	cmplwi r0, 0x0
/* 80133868 00130948  41 82 00 70 */	beq .L_801338D8
/* 8013386C 0013094C  80 05 8D 34 */	lwz r0, -0x72cc(r5)
/* 80133870 00130950  2C 00 00 01 */	cmpwi r0, 0x1
/* 80133874 00130954  41 82 00 0C */	beq .L_80133880
/* 80133878 00130958  40 80 00 44 */	bge .L_801338BC
/* 8013387C 0013095C  48 00 00 40 */	b .L_801338BC
.L_80133880:
/* 80133880 00130960  80 A3 00 00 */	lwz r5, 0x0(r3)
/* 80133884 00130964  54 A0 03 DF */	rlwinm. r0, r5, 0, 15, 15
/* 80133888 00130968  41 82 00 1C */	beq .L_801338A4
/* 8013388C 0013096C  54 A4 04 1C */	rlwinm r4, r5, 0, 16, 14
/* 80133890 00130970  38 00 00 01 */	li r0, 0x1
/* 80133894 00130974  90 83 00 00 */	stw r4, 0x0(r3)
/* 80133898 00130978  38 60 00 02 */	li r3, 0x2
/* 8013389C 0013097C  98 1E 00 08 */	stb r0, 0x8(r30)
/* 801338A0 00130980  48 00 01 00 */	b .L_801339A0
.L_801338A4:
/* 801338A4 00130984  54 A0 03 5B */	rlwinm. r0, r5, 0, 13, 13
/* 801338A8 00130988  41 82 00 30 */	beq .L_801338D8
/* 801338AC 0013098C  54 A0 03 98 */	rlwinm r0, r5, 0, 14, 12
/* 801338B0 00130990  90 03 00 00 */	stw r0, 0x0(r3)
/* 801338B4 00130994  38 60 00 02 */	li r3, 0x2
/* 801338B8 00130998  48 00 00 E8 */	b .L_801339A0
.L_801338BC:
/* 801338BC 0013099C  80 A3 00 00 */	lwz r5, 0x0(r3)
/* 801338C0 001309A0  54 A0 03 DF */	rlwinm. r0, r5, 0, 15, 15
/* 801338C4 001309A4  41 82 00 14 */	beq .L_801338D8
/* 801338C8 001309A8  54 A0 04 1C */	rlwinm r0, r5, 0, 16, 14
/* 801338CC 001309AC  90 03 00 00 */	stw r0, 0x0(r3)
/* 801338D0 001309B0  38 60 00 02 */	li r3, 0x2
/* 801338D4 001309B4  48 00 00 CC */	b .L_801339A0
.L_801338D8:
/* 801338D8 001309B8  3C A0 80 32 */	lis r5, "shared__22@unnamed@zTalkBox_cpp@"@ha
/* 801338DC 001309BC  38 A5 B3 20 */	addi r5, r5, "shared__22@unnamed@zTalkBox_cpp@"@l
/* 801338E0 001309C0  3C A5 00 01 */	addis r5, r5, 0x1
/* 801338E4 001309C4  88 05 8D 78 */	lbz r0, -0x7288(r5)
/* 801338E8 001309C8  28 00 00 00 */	cmplwi r0, 0x0
/* 801338EC 001309CC  41 82 00 40 */	beq .L_8013392C
/* 801338F0 001309D0  80 03 00 00 */	lwz r0, 0x0(r3)
/* 801338F4 001309D4  54 06 03 19 */	rlwinm. r6, r0, 0, 12, 12
/* 801338F8 001309D8  41 82 00 34 */	beq .L_8013392C
/* 801338FC 001309DC  88 05 8D 55 */	lbz r0, -0x72ab(r5)
/* 80133900 001309E0  28 00 00 00 */	cmplwi r0, 0x0
/* 80133904 001309E4  41 82 00 28 */	beq .L_8013392C
/* 80133908 001309E8  28 06 00 00 */	cmplwi r6, 0x0
/* 8013390C 001309EC  41 82 00 20 */	beq .L_8013392C
/* 80133910 001309F0  38 00 00 01 */	li r0, 0x1
/* 80133914 001309F4  98 04 8D 79 */	stb r0, -0x7287(r4)
/* 80133918 001309F8  80 03 00 00 */	lwz r0, 0x0(r3)
/* 8013391C 001309FC  54 00 03 56 */	rlwinm r0, r0, 0, 13, 11
/* 80133920 00130A00  90 03 00 00 */	stw r0, 0x0(r3)
/* 80133924 00130A04  38 60 00 02 */	li r3, 0x2
/* 80133928 00130A08  48 00 00 78 */	b .L_801339A0
.L_8013392C:
/* 8013392C 00130A0C  88 1F 8D 28 */	lbz r0, -0x72d8(r31)
/* 80133930 00130A10  54 00 DF FF */	extrwi. r0, r0, 1, 26
/* 80133934 00130A14  41 82 00 30 */	beq .L_80133964
/* 80133938 00130A18  3C 60 80 32 */	lis r3, "shared__22@unnamed@zTalkBox_cpp@"@ha
/* 8013393C 00130A1C  38 80 FF FF */	li r4, -0x1
/* 80133940 00130A20  38 63 B3 20 */	addi r3, r3, "shared__22@unnamed@zTalkBox_cpp@"@l
/* 80133944 00130A24  38 A0 00 01 */	li r5, 0x1
/* 80133948 00130A28  3C 63 00 01 */	addis r3, r3, 0x1
/* 8013394C 00130A2C  38 63 8D 5C */	addi r3, r3, -0x72a4
/* 80133950 00130A30  48 00 03 CD */	bl "playing__14sound_queue<4>CFib"
/* 80133954 00130A34  54 60 06 3F */	clrlwi. r0, r3, 24
/* 80133958 00130A38  40 82 00 0C */	bne .L_80133964
/* 8013395C 00130A3C  38 60 00 02 */	li r3, 0x2
/* 80133960 00130A40  48 00 00 40 */	b .L_801339A0
.L_80133964:
/* 80133964 00130A44  88 1F 8D 28 */	lbz r0, -0x72d8(r31)
/* 80133968 00130A48  54 00 E7 FF */	extrwi. r0, r0, 1, 27
/* 8013396C 00130A4C  41 82 00 30 */	beq .L_8013399C
/* 80133970 00130A50  3C 60 80 32 */	lis r3, "shared__22@unnamed@zTalkBox_cpp@"@ha
/* 80133974 00130A54  38 63 B3 20 */	addi r3, r3, "shared__22@unnamed@zTalkBox_cpp@"@l
/* 80133978 00130A58  3C A3 00 01 */	addis r5, r3, 0x1
/* 8013397C 00130A5C  80 65 8D 48 */	lwz r3, -0x72b8(r5)
/* 80133980 00130A60  80 85 8D 30 */	lwz r4, -0x72d0(r5)
/* 80133984 00130A64  7C 60 20 39 */	and. r0, r3, r4
/* 80133988 00130A68  41 82 00 14 */	beq .L_8013399C
/* 8013398C 00130A6C  7C 60 20 78 */	andc r0, r3, r4
/* 80133990 00130A70  38 60 00 02 */	li r3, 0x2
/* 80133994 00130A74  90 05 8D 48 */	stw r0, -0x72b8(r5)
/* 80133998 00130A78  48 00 00 08 */	b .L_801339A0
.L_8013399C:
/* 8013399C 00130A7C  38 60 00 03 */	li r3, 0x3
.L_801339A0:
/* 801339A0 00130A80  E3 E1 00 18 */	psq_l f31, 0x18(r1), 0, qr0
/* 801339A4 00130A84  80 01 00 24 */	lwz r0, 0x24(r1)
/* 801339A8 00130A88  CB E1 00 10 */	lfd f31, 0x10(r1)
/* 801339AC 00130A8C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 801339B0 00130A90  83 C1 00 08 */	lwz r30, 0x8(r1)
/* 801339B4 00130A94  7C 08 03 A6 */	mtlr r0
/* 801339B8 00130A98  38 21 00 20 */	addi r1, r1, 0x20
/* 801339BC 00130A9C  4E 80 00 20 */	blr
.endfn "update__Q222@unnamed@zTalkBox_cpp@15wait_state_typeFR6xScenef"

# @unnamed@zTalkBox_cpp@::stop_state_type::start()
.fn "start__Q222@unnamed@zTalkBox_cpp@15stop_state_typeFv", local
/* 801339C0 00130AA0  4E 80 00 20 */	blr
.endfn "start__Q222@unnamed@zTalkBox_cpp@15stop_state_typeFv"

# @unnamed@zTalkBox_cpp@::stop_state_type::stop()
.fn "stop__Q222@unnamed@zTalkBox_cpp@15stop_state_typeFv", local
/* 801339C4 00130AA4  4E 80 00 20 */	blr
.endfn "stop__Q222@unnamed@zTalkBox_cpp@15stop_state_typeFv"

# @unnamed@zTalkBox_cpp@::stop_state_type::update(xScene&, float)
.fn "update__Q222@unnamed@zTalkBox_cpp@15stop_state_typeFR6xScenef", local
/* 801339C8 00130AA8  38 60 FF FF */	li r3, -0x1
/* 801339CC 00130AAC  4E 80 00 20 */	blr
.endfn "update__Q222@unnamed@zTalkBox_cpp@15stop_state_typeFR6xScenef"

.fn __sinit_zTalkBox_cpp, local
/* 801339D0 00130AB0  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801339D4 00130AB4  7C 08 02 A6 */	mflr r0
/* 801339D8 00130AB8  3C 60 80 32 */	lis r3, "shared__22@unnamed@zTalkBox_cpp@"@ha
/* 801339DC 00130ABC  90 01 00 14 */	stw r0, 0x14(r1)
/* 801339E0 00130AC0  38 63 B3 20 */	addi r3, r3, "shared__22@unnamed@zTalkBox_cpp@"@l
/* 801339E4 00130AC4  48 00 00 15 */	bl "__ct__Q222@unnamed@zTalkBox_cpp@11shared_typeFv"
/* 801339E8 00130AC8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801339EC 00130ACC  7C 08 03 A6 */	mtlr r0
/* 801339F0 00130AD0  38 21 00 10 */	addi r1, r1, 0x10
/* 801339F4 00130AD4  4E 80 00 20 */	blr
.endfn __sinit_zTalkBox_cpp

# @unnamed@zTalkBox_cpp@::shared_type::shared_type()
.fn "__ct__Q222@unnamed@zTalkBox_cpp@11shared_typeFv", local
/* 801339F8 00130AD8  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801339FC 00130ADC  7C 08 02 A6 */	mflr r0
/* 80133A00 00130AE0  90 01 00 14 */	stw r0, 0x14(r1)
/* 80133A04 00130AE4  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80133A08 00130AE8  7C 7F 1B 78 */	mr r31, r3
/* 80133A0C 00130AEC  3C 7F 00 01 */	addis r3, r31, 0x1
/* 80133A10 00130AF0  38 63 8D 5C */	addi r3, r3, -0x72a4
/* 80133A14 00130AF4  4B EF C0 DD */	bl "__ct__14sound_queue<4>Fv"
/* 80133A18 00130AF8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80133A1C 00130AFC  7F E3 FB 78 */	mr r3, r31
/* 80133A20 00130B00  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80133A24 00130B04  7C 08 03 A6 */	mtlr r0
/* 80133A28 00130B08  38 21 00 10 */	addi r1, r1, 0x10
/* 80133A2C 00130B0C  4E 80 00 20 */	blr
.endfn "__ct__Q222@unnamed@zTalkBox_cpp@11shared_typeFv"

# 0x80133A30 - 0x80133C54
.section .text, "ax", unique, 1
.balign 4

# fixed_queue<@unnamed@zTalkBox_cpp@::trigger_pair, 32>::back()
.fn "back__56fixed_queue<Q222@unnamed@zTalkBox_cpp@12trigger_pair,32>Fv", weak
/* 80133A30 00130B10  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 80133A34 00130B14  7C 08 02 A6 */	mflr r0
/* 80133A38 00130B18  90 01 00 24 */	stw r0, 0x24(r1)
/* 80133A3C 00130B1C  48 00 00 E9 */	bl "end__56fixed_queue<Q222@unnamed@zTalkBox_cpp@12trigger_pair,32>CFv"
/* 80133A40 00130B20  90 81 00 0C */	stw r4, 0xc(r1)
/* 80133A44 00130B24  38 80 00 01 */	li r4, 0x1
/* 80133A48 00130B28  90 61 00 08 */	stw r3, 0x8(r1)
/* 80133A4C 00130B2C  38 61 00 08 */	addi r3, r1, 0x8
/* 80133A50 00130B30  48 00 00 3D */	bl "__mi__Q256fixed_queue<Q222@unnamed@zTalkBox_cpp@12trigger_pair,32>8iteratorCFi"
/* 80133A54 00130B34  90 61 00 10 */	stw r3, 0x10(r1)
/* 80133A58 00130B38  38 61 00 10 */	addi r3, r1, 0x10
/* 80133A5C 00130B3C  90 81 00 14 */	stw r4, 0x14(r1)
/* 80133A60 00130B40  48 00 00 15 */	bl "__ml__Q256fixed_queue<Q222@unnamed@zTalkBox_cpp@12trigger_pair,32>8iteratorCFv"
/* 80133A64 00130B44  80 01 00 24 */	lwz r0, 0x24(r1)
/* 80133A68 00130B48  7C 08 03 A6 */	mtlr r0
/* 80133A6C 00130B4C  38 21 00 20 */	addi r1, r1, 0x20
/* 80133A70 00130B50  4E 80 00 20 */	blr
.endfn "back__56fixed_queue<Q222@unnamed@zTalkBox_cpp@12trigger_pair,32>Fv"

# fixed_queue<@unnamed@zTalkBox_cpp@::trigger_pair, 32>::iterator::operator*() const
.fn "__ml__Q256fixed_queue<Q222@unnamed@zTalkBox_cpp@12trigger_pair,32>8iteratorCFv", weak
/* 80133A74 00130B54  80 03 00 00 */	lwz r0, 0x0(r3)
/* 80133A78 00130B58  80 83 00 04 */	lwz r4, 0x4(r3)
/* 80133A7C 00130B5C  54 03 18 38 */	slwi r3, r0, 3
/* 80133A80 00130B60  38 63 00 08 */	addi r3, r3, 0x8
/* 80133A84 00130B64  7C 64 1A 14 */	add r3, r4, r3
/* 80133A88 00130B68  4E 80 00 20 */	blr
.endfn "__ml__Q256fixed_queue<Q222@unnamed@zTalkBox_cpp@12trigger_pair,32>8iteratorCFv"

# fixed_queue<@unnamed@zTalkBox_cpp@::trigger_pair, 32>::iterator::operator-(int) const
.fn "__mi__Q256fixed_queue<Q222@unnamed@zTalkBox_cpp@12trigger_pair,32>8iteratorCFi", weak
/* 80133A8C 00130B6C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80133A90 00130B70  7C 08 02 A6 */	mflr r0
/* 80133A94 00130B74  80 A3 00 00 */	lwz r5, 0x0(r3)
/* 80133A98 00130B78  90 01 00 14 */	stw r0, 0x14(r1)
/* 80133A9C 00130B7C  80 03 00 04 */	lwz r0, 0x4(r3)
/* 80133AA0 00130B80  38 61 00 08 */	addi r3, r1, 0x8
/* 80133AA4 00130B84  90 A1 00 08 */	stw r5, 0x8(r1)
/* 80133AA8 00130B88  90 01 00 0C */	stw r0, 0xc(r1)
/* 80133AAC 00130B8C  48 00 00 1D */	bl "__ami__Q256fixed_queue<Q222@unnamed@zTalkBox_cpp@12trigger_pair,32>8iteratorFi"
/* 80133AB0 00130B90  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80133AB4 00130B94  80 61 00 08 */	lwz r3, 0x8(r1)
/* 80133AB8 00130B98  80 81 00 0C */	lwz r4, 0xc(r1)
/* 80133ABC 00130B9C  7C 08 03 A6 */	mtlr r0
/* 80133AC0 00130BA0  38 21 00 10 */	addi r1, r1, 0x10
/* 80133AC4 00130BA4  4E 80 00 20 */	blr
.endfn "__mi__Q256fixed_queue<Q222@unnamed@zTalkBox_cpp@12trigger_pair,32>8iteratorCFi"

# fixed_queue<@unnamed@zTalkBox_cpp@::trigger_pair, 32>::iterator::operator-=(int)
.fn "__ami__Q256fixed_queue<Q222@unnamed@zTalkBox_cpp@12trigger_pair,32>8iteratorFi", weak
/* 80133AC8 00130BA8  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80133ACC 00130BAC  7C 08 02 A6 */	mflr r0
/* 80133AD0 00130BB0  7C 84 00 D0 */	neg r4, r4
/* 80133AD4 00130BB4  90 01 00 14 */	stw r0, 0x14(r1)
/* 80133AD8 00130BB8  48 00 00 21 */	bl "__apl__Q256fixed_queue<Q222@unnamed@zTalkBox_cpp@12trigger_pair,32>8iteratorFi"
/* 80133ADC 00130BBC  7C 64 1B 78 */	mr r4, r3
/* 80133AE0 00130BC0  80 63 00 00 */	lwz r3, 0x0(r3)
/* 80133AE4 00130BC4  80 84 00 04 */	lwz r4, 0x4(r4)
/* 80133AE8 00130BC8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80133AEC 00130BCC  7C 08 03 A6 */	mtlr r0
/* 80133AF0 00130BD0  38 21 00 10 */	addi r1, r1, 0x10
/* 80133AF4 00130BD4  4E 80 00 20 */	blr
.endfn "__ami__Q256fixed_queue<Q222@unnamed@zTalkBox_cpp@12trigger_pair,32>8iteratorFi"

# fixed_queue<@unnamed@zTalkBox_cpp@::trigger_pair, 32>::iterator::operator+=(int)
.fn "__apl__Q256fixed_queue<Q222@unnamed@zTalkBox_cpp@12trigger_pair,32>8iteratorFi", weak
/* 80133AF8 00130BD8  80 C3 00 00 */	lwz r6, 0x0(r3)
/* 80133AFC 00130BDC  3C A0 3E 10 */	lis r5, 0x3e10
/* 80133B00 00130BE0  38 05 83 E1 */	addi r0, r5, -0x7c1f
/* 80133B04 00130BE4  7C 86 22 14 */	add r4, r6, r4
/* 80133B08 00130BE8  38 84 00 21 */	addi r4, r4, 0x21
/* 80133B0C 00130BEC  7C 00 20 16 */	mulhwu r0, r0, r4
/* 80133B10 00130BF0  54 00 E8 FE */	srwi r0, r0, 3
/* 80133B14 00130BF4  1C 00 00 21 */	mulli r0, r0, 0x21
/* 80133B18 00130BF8  7C 00 20 50 */	subf r0, r0, r4
/* 80133B1C 00130BFC  90 03 00 00 */	stw r0, 0x0(r3)
/* 80133B20 00130C00  4E 80 00 20 */	blr
.endfn "__apl__Q256fixed_queue<Q222@unnamed@zTalkBox_cpp@12trigger_pair,32>8iteratorFi"

# fixed_queue<@unnamed@zTalkBox_cpp@::trigger_pair, 32>::end() const
.fn "end__56fixed_queue<Q222@unnamed@zTalkBox_cpp@12trigger_pair,32>CFv", weak
/* 80133B24 00130C04  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80133B28 00130C08  7C 08 02 A6 */	mflr r0
/* 80133B2C 00130C0C  80 83 00 04 */	lwz r4, 0x4(r3)
/* 80133B30 00130C10  90 01 00 14 */	stw r0, 0x14(r1)
/* 80133B34 00130C14  48 00 00 15 */	bl "create_iterator__56fixed_queue<Q222@unnamed@zTalkBox_cpp@12trigger_pair,32>CFUl"
/* 80133B38 00130C18  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80133B3C 00130C1C  7C 08 03 A6 */	mtlr r0
/* 80133B40 00130C20  38 21 00 10 */	addi r1, r1, 0x10
/* 80133B44 00130C24  4E 80 00 20 */	blr
.endfn "end__56fixed_queue<Q222@unnamed@zTalkBox_cpp@12trigger_pair,32>CFv"

# fixed_queue<@unnamed@zTalkBox_cpp@::trigger_pair, 32>::create_iterator(unsigned long) const
.fn "create_iterator__56fixed_queue<Q222@unnamed@zTalkBox_cpp@12trigger_pair,32>CFUl", weak
/* 80133B48 00130C28  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80133B4C 00130C2C  7C 60 1B 78 */	mr r0, r3
/* 80133B50 00130C30  7C 83 23 78 */	mr r3, r4
/* 80133B54 00130C34  90 81 00 08 */	stw r4, 0x8(r1)
/* 80133B58 00130C38  7C 04 03 78 */	mr r4, r0
/* 80133B5C 00130C3C  90 01 00 0C */	stw r0, 0xc(r1)
/* 80133B60 00130C40  38 21 00 10 */	addi r1, r1, 0x10
/* 80133B64 00130C44  4E 80 00 20 */	blr
.endfn "create_iterator__56fixed_queue<Q222@unnamed@zTalkBox_cpp@12trigger_pair,32>CFUl"

# fixed_queue<@unnamed@zTalkBox_cpp@::trigger_pair, 32>::push_back()
.fn "push_back__56fixed_queue<Q222@unnamed@zTalkBox_cpp@12trigger_pair,32>Fv", weak
/* 80133B68 00130C48  80 A3 00 04 */	lwz r5, 0x4(r3)
/* 80133B6C 00130C4C  3C 80 3E 10 */	lis r4, 0x3e10
/* 80133B70 00130C50  38 04 83 E1 */	addi r0, r4, -0x7c1f
/* 80133B74 00130C54  38 85 00 01 */	addi r4, r5, 0x1
/* 80133B78 00130C58  7C 00 20 16 */	mulhwu r0, r0, r4
/* 80133B7C 00130C5C  54 00 E8 FE */	srwi r0, r0, 3
/* 80133B80 00130C60  1C 00 00 21 */	mulli r0, r0, 0x21
/* 80133B84 00130C64  7C 00 20 50 */	subf r0, r0, r4
/* 80133B88 00130C68  90 03 00 04 */	stw r0, 0x4(r3)
/* 80133B8C 00130C6C  4E 80 00 20 */	blr
.endfn "push_back__56fixed_queue<Q222@unnamed@zTalkBox_cpp@12trigger_pair,32>Fv"

# fixed_queue<@unnamed@zTalkBox_cpp@::trigger_pair, 32>::empty() const
.fn "empty__56fixed_queue<Q222@unnamed@zTalkBox_cpp@12trigger_pair,32>CFv", weak
/* 80133B90 00130C70  80 83 00 04 */	lwz r4, 0x4(r3)
/* 80133B94 00130C74  80 03 00 00 */	lwz r0, 0x0(r3)
/* 80133B98 00130C78  7C 04 00 50 */	subf r0, r4, r0
/* 80133B9C 00130C7C  7C 00 00 34 */	cntlzw r0, r0
/* 80133BA0 00130C80  54 03 D9 7E */	srwi r3, r0, 5
/* 80133BA4 00130C84  4E 80 00 20 */	blr
.endfn "empty__56fixed_queue<Q222@unnamed@zTalkBox_cpp@12trigger_pair,32>CFv"

# fixed_queue<@unnamed@zTalkBox_cpp@::trigger_pair, 32>::pop_front()
.fn "pop_front__56fixed_queue<Q222@unnamed@zTalkBox_cpp@12trigger_pair,32>Fv", weak
/* 80133BA8 00130C88  80 A3 00 00 */	lwz r5, 0x0(r3)
/* 80133BAC 00130C8C  3C 80 3E 10 */	lis r4, 0x3e10
/* 80133BB0 00130C90  38 04 83 E1 */	addi r0, r4, -0x7c1f
/* 80133BB4 00130C94  38 85 00 01 */	addi r4, r5, 0x1
/* 80133BB8 00130C98  7C 00 20 16 */	mulhwu r0, r0, r4
/* 80133BBC 00130C9C  54 00 E8 FE */	srwi r0, r0, 3
/* 80133BC0 00130CA0  1C 00 00 21 */	mulli r0, r0, 0x21
/* 80133BC4 00130CA4  7C 00 20 50 */	subf r0, r0, r4
/* 80133BC8 00130CA8  90 03 00 00 */	stw r0, 0x0(r3)
/* 80133BCC 00130CAC  4E 80 00 20 */	blr
.endfn "pop_front__56fixed_queue<Q222@unnamed@zTalkBox_cpp@12trigger_pair,32>Fv"

# fixed_queue<@unnamed@zTalkBox_cpp@::trigger_pair, 32>::front()
.fn "front__56fixed_queue<Q222@unnamed@zTalkBox_cpp@12trigger_pair,32>Fv", weak
/* 80133BD0 00130CB0  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80133BD4 00130CB4  7C 08 02 A6 */	mflr r0
/* 80133BD8 00130CB8  90 01 00 14 */	stw r0, 0x14(r1)
/* 80133BDC 00130CBC  48 00 00 25 */	bl "begin__56fixed_queue<Q222@unnamed@zTalkBox_cpp@12trigger_pair,32>CFv"
/* 80133BE0 00130CC0  90 61 00 08 */	stw r3, 0x8(r1)
/* 80133BE4 00130CC4  38 61 00 08 */	addi r3, r1, 0x8
/* 80133BE8 00130CC8  90 81 00 0C */	stw r4, 0xc(r1)
/* 80133BEC 00130CCC  4B FF FE 89 */	bl "__ml__Q256fixed_queue<Q222@unnamed@zTalkBox_cpp@12trigger_pair,32>8iteratorCFv"
/* 80133BF0 00130CD0  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80133BF4 00130CD4  7C 08 03 A6 */	mtlr r0
/* 80133BF8 00130CD8  38 21 00 10 */	addi r1, r1, 0x10
/* 80133BFC 00130CDC  4E 80 00 20 */	blr
.endfn "front__56fixed_queue<Q222@unnamed@zTalkBox_cpp@12trigger_pair,32>Fv"

# fixed_queue<@unnamed@zTalkBox_cpp@::trigger_pair, 32>::begin() const
.fn "begin__56fixed_queue<Q222@unnamed@zTalkBox_cpp@12trigger_pair,32>CFv", weak
/* 80133C00 00130CE0  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80133C04 00130CE4  7C 08 02 A6 */	mflr r0
/* 80133C08 00130CE8  80 83 00 00 */	lwz r4, 0x0(r3)
/* 80133C0C 00130CEC  90 01 00 14 */	stw r0, 0x14(r1)
/* 80133C10 00130CF0  4B FF FF 39 */	bl "create_iterator__56fixed_queue<Q222@unnamed@zTalkBox_cpp@12trigger_pair,32>CFUl"
/* 80133C14 00130CF4  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80133C18 00130CF8  7C 08 03 A6 */	mtlr r0
/* 80133C1C 00130CFC  38 21 00 10 */	addi r1, r1, 0x10
/* 80133C20 00130D00  4E 80 00 20 */	blr
.endfn "begin__56fixed_queue<Q222@unnamed@zTalkBox_cpp@12trigger_pair,32>CFv"

# fixed_queue<@unnamed@zTalkBox_cpp@::trigger_pair, 32>::reset()
.fn "reset__56fixed_queue<Q222@unnamed@zTalkBox_cpp@12trigger_pair,32>Fv", weak
/* 80133C24 00130D04  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80133C28 00130D08  7C 08 02 A6 */	mflr r0
/* 80133C2C 00130D0C  90 01 00 14 */	stw r0, 0x14(r1)
/* 80133C30 00130D10  48 00 00 15 */	bl "clear__56fixed_queue<Q222@unnamed@zTalkBox_cpp@12trigger_pair,32>Fv"
/* 80133C34 00130D14  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80133C38 00130D18  7C 08 03 A6 */	mtlr r0
/* 80133C3C 00130D1C  38 21 00 10 */	addi r1, r1, 0x10
/* 80133C40 00130D20  4E 80 00 20 */	blr
.endfn "reset__56fixed_queue<Q222@unnamed@zTalkBox_cpp@12trigger_pair,32>Fv"

# fixed_queue<@unnamed@zTalkBox_cpp@::trigger_pair, 32>::clear()
.fn "clear__56fixed_queue<Q222@unnamed@zTalkBox_cpp@12trigger_pair,32>Fv", weak
/* 80133C44 00130D24  38 00 00 00 */	li r0, 0x0
/* 80133C48 00130D28  90 03 00 04 */	stw r0, 0x4(r3)
/* 80133C4C 00130D2C  90 03 00 00 */	stw r0, 0x0(r3)
/* 80133C50 00130D30  4E 80 00 20 */	blr
.endfn "clear__56fixed_queue<Q222@unnamed@zTalkBox_cpp@12trigger_pair,32>Fv"

# 0x80133C54 - 0x80133E10
.section .text, "ax", unique, 2
.balign 4

# sound_queue<4>::pop()
.fn "pop__14sound_queue<4>Fv", weak
/* 80133C54 00130D34  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80133C58 00130D38  7C 08 02 A6 */	mflr r0
/* 80133C5C 00130D3C  90 01 00 14 */	stw r0, 0x14(r1)
/* 80133C60 00130D40  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80133C64 00130D44  7C 7F 1B 78 */	mr r31, r3
/* 80133C68 00130D48  80 03 00 14 */	lwz r0, 0x14(r3)
/* 80133C6C 00130D4C  54 00 10 3A */	slwi r0, r0, 2
/* 80133C70 00130D50  7C 7F 00 2E */	lwzx r3, r31, r0
/* 80133C74 00130D54  4B F1 55 8D */	bl xSndStop__FUi
/* 80133C78 00130D58  80 9F 00 14 */	lwz r4, 0x14(r31)
/* 80133C7C 00130D5C  3C 60 66 66 */	lis r3, 0x6666
/* 80133C80 00130D60  38 03 66 67 */	addi r0, r3, 0x6667
/* 80133C84 00130D64  38 84 00 01 */	addi r4, r4, 0x1
/* 80133C88 00130D68  7C 00 20 96 */	mulhw r0, r0, r4
/* 80133C8C 00130D6C  7C 00 0E 70 */	srawi r0, r0, 1
/* 80133C90 00130D70  54 03 0F FE */	srwi r3, r0, 31
/* 80133C94 00130D74  7C 00 1A 14 */	add r0, r0, r3
/* 80133C98 00130D78  1C 00 00 05 */	mulli r0, r0, 0x5
/* 80133C9C 00130D7C  7C 00 20 50 */	subf r0, r0, r4
/* 80133CA0 00130D80  90 1F 00 14 */	stw r0, 0x14(r31)
/* 80133CA4 00130D84  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80133CA8 00130D88  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80133CAC 00130D8C  7C 08 03 A6 */	mtlr r0
/* 80133CB0 00130D90  38 21 00 10 */	addi r1, r1, 0x10
/* 80133CB4 00130D94  4E 80 00 20 */	blr
.endfn "pop__14sound_queue<4>Fv"

# sound_queue<4>::size() const
.fn "size__14sound_queue<4>CFv", weak
/* 80133CB8 00130D98  80 A3 00 18 */	lwz r5, 0x18(r3)
/* 80133CBC 00130D9C  80 83 00 14 */	lwz r4, 0x14(r3)
/* 80133CC0 00130DA0  7C 05 20 00 */	cmpw r5, r4
/* 80133CC4 00130DA4  7C 64 28 50 */	subf r3, r4, r5
/* 80133CC8 00130DA8  4C 80 00 20 */	bgelr
/* 80133CCC 00130DAC  38 05 00 05 */	addi r0, r5, 0x5
/* 80133CD0 00130DB0  7C 64 00 50 */	subf r3, r4, r0
/* 80133CD4 00130DB4  4E 80 00 20 */	blr
.endfn "size__14sound_queue<4>CFv"

# sound_queue<4>::clear()
.fn "clear__14sound_queue<4>Fv", weak
/* 80133CD8 00130DB8  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80133CDC 00130DBC  7C 08 02 A6 */	mflr r0
/* 80133CE0 00130DC0  90 01 00 14 */	stw r0, 0x14(r1)
/* 80133CE4 00130DC4  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80133CE8 00130DC8  7C 7F 1B 78 */	mr r31, r3
/* 80133CEC 00130DCC  48 00 00 0C */	b .L_80133CF8
.L_80133CF0:
/* 80133CF0 00130DD0  7F E3 FB 78 */	mr r3, r31
/* 80133CF4 00130DD4  4B FF FF 61 */	bl "pop__14sound_queue<4>Fv"
.L_80133CF8:
/* 80133CF8 00130DD8  7F E3 FB 78 */	mr r3, r31
/* 80133CFC 00130DDC  4B FF FF BD */	bl "size__14sound_queue<4>CFv"
/* 80133D00 00130DE0  2C 03 00 00 */	cmpwi r3, 0x0
/* 80133D04 00130DE4  41 81 FF EC */	bgt .L_80133CF0
/* 80133D08 00130DE8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80133D0C 00130DEC  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80133D10 00130DF0  7C 08 03 A6 */	mtlr r0
/* 80133D14 00130DF4  38 21 00 10 */	addi r1, r1, 0x10
/* 80133D18 00130DF8  4E 80 00 20 */	blr
.endfn "clear__14sound_queue<4>Fv"

# sound_queue<4>::playing(int, bool) const
.fn "playing__14sound_queue<4>CFib", weak
/* 80133D1C 00130DFC  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 80133D20 00130E00  7C 08 02 A6 */	mflr r0
/* 80133D24 00130E04  90 01 00 24 */	stw r0, 0x24(r1)
/* 80133D28 00130E08  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 80133D2C 00130E0C  7C BF 2B 78 */	mr r31, r5
/* 80133D30 00130E10  93 C1 00 18 */	stw r30, 0x18(r1)
/* 80133D34 00130E14  7C 9E 23 78 */	mr r30, r4
/* 80133D38 00130E18  93 A1 00 14 */	stw r29, 0x14(r1)
/* 80133D3C 00130E1C  7C 7D 1B 78 */	mr r29, r3
/* 80133D40 00130E20  4B FF FF 79 */	bl "size__14sound_queue<4>CFv"
/* 80133D44 00130E24  2C 1E 00 00 */	cmpwi r30, 0x0
/* 80133D48 00130E28  41 80 00 0C */	blt .L_80133D54
/* 80133D4C 00130E2C  7C 1E 18 00 */	cmpw r30, r3
/* 80133D50 00130E30  40 81 00 08 */	ble .L_80133D58
.L_80133D54:
/* 80133D54 00130E34  7C 7E 1B 78 */	mr r30, r3
.L_80133D58:
/* 80133D58 00130E38  57 E0 06 3F */	clrlwi. r0, r31, 24
/* 80133D5C 00130E3C  41 82 00 40 */	beq .L_80133D9C
/* 80133D60 00130E40  3B E0 00 00 */	li r31, 0x0
/* 80133D64 00130E44  48 00 00 28 */	b .L_80133D8C
.L_80133D68:
/* 80133D68 00130E48  7F A3 EB 78 */	mr r3, r29
/* 80133D6C 00130E4C  7F E4 FB 78 */	mr r4, r31
/* 80133D70 00130E50  48 00 00 81 */	bl "recent__14sound_queue<4>CFi"
/* 80133D74 00130E54  4B F4 EF B9 */	bl xSndIsPlayingByHandle__FUi
/* 80133D78 00130E58  54 60 06 3F */	clrlwi. r0, r3, 24
/* 80133D7C 00130E5C  40 82 00 0C */	bne .L_80133D88
/* 80133D80 00130E60  38 60 00 00 */	li r3, 0x0
/* 80133D84 00130E64  48 00 00 50 */	b .L_80133DD4
.L_80133D88:
/* 80133D88 00130E68  3B FF 00 01 */	addi r31, r31, 0x1
.L_80133D8C:
/* 80133D8C 00130E6C  7C 1F F0 00 */	cmpw r31, r30
/* 80133D90 00130E70  41 80 FF D8 */	blt .L_80133D68
/* 80133D94 00130E74  38 60 00 01 */	li r3, 0x1
/* 80133D98 00130E78  48 00 00 3C */	b .L_80133DD4
.L_80133D9C:
/* 80133D9C 00130E7C  3B E0 00 00 */	li r31, 0x0
/* 80133DA0 00130E80  48 00 00 28 */	b .L_80133DC8
.L_80133DA4:
/* 80133DA4 00130E84  7F A3 EB 78 */	mr r3, r29
/* 80133DA8 00130E88  7F E4 FB 78 */	mr r4, r31
/* 80133DAC 00130E8C  48 00 00 45 */	bl "recent__14sound_queue<4>CFi"
/* 80133DB0 00130E90  4B F4 EF 7D */	bl xSndIsPlayingByHandle__FUi
/* 80133DB4 00130E94  54 60 06 3F */	clrlwi. r0, r3, 24
/* 80133DB8 00130E98  41 82 00 0C */	beq .L_80133DC4
/* 80133DBC 00130E9C  38 60 00 01 */	li r3, 0x1
/* 80133DC0 00130EA0  48 00 00 14 */	b .L_80133DD4
.L_80133DC4:
/* 80133DC4 00130EA4  3B FF 00 01 */	addi r31, r31, 0x1
.L_80133DC8:
/* 80133DC8 00130EA8  7C 1F F0 00 */	cmpw r31, r30
/* 80133DCC 00130EAC  41 80 FF D8 */	blt .L_80133DA4
/* 80133DD0 00130EB0  38 60 00 00 */	li r3, 0x0
.L_80133DD4:
/* 80133DD4 00130EB4  80 01 00 24 */	lwz r0, 0x24(r1)
/* 80133DD8 00130EB8  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 80133DDC 00130EBC  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 80133DE0 00130EC0  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 80133DE4 00130EC4  7C 08 03 A6 */	mtlr r0
/* 80133DE8 00130EC8  38 21 00 20 */	addi r1, r1, 0x20
/* 80133DEC 00130ECC  4E 80 00 20 */	blr
.endfn "playing__14sound_queue<4>CFib"

# sound_queue<4>::recent(int) const
.fn "recent__14sound_queue<4>CFi", weak
/* 80133DF0 00130ED0  80 03 00 18 */	lwz r0, 0x18(r3)
/* 80133DF4 00130ED4  7C 84 00 50 */	subf r4, r4, r0
/* 80133DF8 00130ED8  34 84 FF FF */	addic. r4, r4, -0x1
/* 80133DFC 00130EDC  40 80 00 08 */	bge .L_80133E04
/* 80133E00 00130EE0  38 84 00 05 */	addi r4, r4, 0x5
.L_80133E04:
/* 80133E04 00130EE4  54 80 10 3A */	slwi r0, r4, 2
/* 80133E08 00130EE8  7C 63 00 2E */	lwzx r3, r3, r0
/* 80133E0C 00130EEC  4E 80 00 20 */	blr
.endfn "recent__14sound_queue<4>CFi"

# 0x80133E10 - 0x80133E30
.section .text, "ax", unique, 3
.balign 4

# pointer_asset::type_name()
.fn type_name__13pointer_assetFv, weak
/* 80133E10 00130EF0  3C 60 80 27 */	lis r3, "@stringBase0"@ha
/* 80133E14 00130EF4  38 63 C9 20 */	addi r3, r3, "@stringBase0"@l
/* 80133E18 00130EF8  38 63 00 76 */	addi r3, r3, 0x76
/* 80133E1C 00130EFC  4E 80 00 20 */	blr
.endfn type_name__13pointer_assetFv

# location_asset::type_name()
.fn type_name__14location_assetFv, weak
/* 80133E20 00130F00  3C 60 80 27 */	lis r3, "@stringBase0"@ha
/* 80133E24 00130F04  38 63 C9 20 */	addi r3, r3, "@stringBase0"@l
/* 80133E28 00130F08  38 63 00 7E */	addi r3, r3, 0x7e
/* 80133E2C 00130F0C  4E 80 00 20 */	blr
.endfn type_name__14location_assetFv

# 0x80133E30 - 0x80133E38
.section .text, "ax", unique, 4
.balign 4

# xtextbox::layout::jots() const
.fn jots__Q28xtextbox6layoutCFv, weak
/* 80133E30 00130F10  38 63 00 68 */	addi r3, r3, 0x68
/* 80133E34 00130F14  4E 80 00 20 */	blr
.endfn jots__Q28xtextbox6layoutCFv

# 0x80251D18 - 0x80251D1C
.section .ctors, "a"
.balign 4
	.4byte __sinit_zTalkBox_cpp

# 0x8026C870 - 0x8026CA38
.rodata
.balign 8

.obj positive$938, local
	.4byte "@stringBase0"
	.4byte 0x00000003
	.rel "@stringBase0", .L_8026C924
	.4byte 0x00000001
	.rel "@stringBase0", .L_8026C926
	.4byte 0x00000001
	.rel "@stringBase0", .L_8026C928
	.4byte 0x00000004
	.rel "@stringBase0", .L_8026C92D
	.4byte 0x00000001
	.rel "@stringBase0", .L_8026C92F
	.4byte 0x00000002
.endobj positive$938

.obj negative$940, local
	.rel "@stringBase0", .L_8026C932
	.4byte 0x00000003
	.rel "@stringBase0", .L_8026C935
	.4byte 0x00000001
	.rel "@stringBase0", .L_8026C937
	.4byte 0x00000001
	.rel "@stringBase0", .L_8026C939
	.4byte 0x00000005
	.rel "@stringBase0", .L_8026C93F
	.4byte 0x00000001
	.rel "@stringBase0", .L_8026C941
	.4byte 0x00000003
.endobj negative$940

.obj signals$1119, local
	.4byte 0x00000156
	.4byte 0x00000157
	.4byte 0x00000158
	.4byte 0x00000159
	.4byte 0x0000015A
	.4byte 0x0000015B
	.4byte 0x0000015C
	.4byte 0x0000015D
	.4byte 0x0000015E
	.4byte 0x0000015F
	.4byte 0x000001C9
	.4byte 0x000001CA
	.4byte 0x000001CB
	.4byte 0x000001CC
	.4byte 0x000001CD
	.4byte 0x000001CE
	.4byte 0x000001CF
	.4byte 0x000001D0
	.4byte 0x000001D1
	.4byte 0x000001D2
.endobj signals$1119

.obj "@stringBase0", local
	.4byte 0x79657300
.L_8026C924:
	.2byte 0x7900
.L_8026C926:
	.2byte 0x3100
.L_8026C928:
	.4byte 0x74727565
	.byte 0x00
.L_8026C92D:
	.2byte 0x7400
.L_8026C92F:
	.byte 0x6F, 0x6E, 0x00
.L_8026C932:
	.byte 0x6E, 0x6F, 0x00
.L_8026C935:
	.2byte 0x6E00
.L_8026C937:
	.2byte 0x3000
.L_8026C939:
	.4byte 0x66616C73
	.2byte 0x6500
.L_8026C93F:
	.2byte 0x6600
.L_8026C941:
	.4byte 0x6F666600
.L_8026C945:
	.4byte 0x77616974
	.4byte 0x0070726F
	.4byte 0x6D707400
	.4byte 0x7965736E
	.2byte 0x6F00
.L_8026C957:
	.4byte 0x736F756E
	.4byte 0x64006576
	.4byte 0x656E7400
	.4byte 0x6E656564
	.4byte 0x00766F6C
	.4byte 0x756D6500
	.4byte 0x61637469
	.4byte 0x6F6E0061
	.4byte 0x64640072
	.4byte 0x656D6F76
	.4byte 0x65007370
	.4byte 0x65616B65
	.4byte 0x72007063
	.4byte 0x006E6F6E
	.4byte 0x6500616E
	.4byte 0x696D0070
	.4byte 0x6F696E74
	.4byte 0x6572006C
	.4byte 0x6F636174
	.4byte 0x696F6E00
.L_8026C9A7:
	.4byte 0x616C6C6F
	.4byte 0x775F7175
	.byte 0x69, 0x74, 0x00
.L_8026C9B2:
	.byte 0x61, 0x71, 0x00
.L_8026C9B5:
	.4byte 0x6175746F
	.4byte 0x5F776169
	.2byte 0x7400
.L_8026C9BF:
	.4byte 0x70617573
	.2byte 0x6500
.L_8026C9C5:
	.4byte 0x7369676E
	.byte 0x61, 0x6C, 0x00
.L_8026C9CC:
	.4byte 0x74656C65
	.4byte 0x706F7274
	.byte 0x00
.L_8026C9D5:
	.4byte 0x74726170
	.4byte 0x0054656D
	.4byte 0x707C5461
	.4byte 0x6C6B204D
	.4byte 0x75736963
	.4byte 0x20466164
	.4byte 0x65005465
	.4byte 0x6D707C54
	.4byte 0x616C6B20
	.4byte 0x4D757369
	.4byte 0x63204661
	.4byte 0x64652044
	.4byte 0x656C6179
	.4byte 0x0074616C
	.4byte 0x6B5F626F
	.4byte 0x782E766F
	.4byte 0x6C756D65
	.4byte 0x0054616C
	.4byte 0x6B20426F
	.4byte 0x787C0147
	.4byte 0x6C6F6261
	.4byte 0x6C737C76
	.4byte 0x6F6C756D
	.2byte 0x6500
.endobj "@stringBase0"
	.4byte 0x00000000
	.byte 0x00

# 0x80298E68 - 0x80298F80
.data
.balign 8

# @unnamed@zTalkBox_cpp@::new_tags
.obj "new_tags__22@unnamed@zTalkBox_cpp@", local
	.rel "@stringBase0", .L_8026C9A7
	.4byte 0x0000000A
	.4byte "parse_tag_allow_quit__22@unnamed@zTalkBox_cpp@FRQ28xtextbox3jotRC8xtextboxRC8xtextboxRCQ28xtextbox9split_tag"
	.4byte "reset_tag_allow_quit__22@unnamed@zTalkBox_cpp@FRQ28xtextbox3jotRC8xtextboxRC8xtextboxRCQ28xtextbox9split_tag"
	.4byte "trigger_allow_quit__22@unnamed@zTalkBox_cpp@FRCQ28xtextbox3jot"
	.rel "@stringBase0", .L_8026C9B2
	.4byte 0x00000002
	.4byte "parse_tag_allow_quit__22@unnamed@zTalkBox_cpp@FRQ28xtextbox3jotRC8xtextboxRC8xtextboxRCQ28xtextbox9split_tag"
	.4byte "reset_tag_allow_quit__22@unnamed@zTalkBox_cpp@FRQ28xtextbox3jotRC8xtextboxRC8xtextboxRCQ28xtextbox9split_tag"
	.4byte "trigger_allow_quit__22@unnamed@zTalkBox_cpp@FRCQ28xtextbox3jot"
	.rel "@stringBase0", .L_8026C9B5
	.4byte 0x00000009
	.4byte "parse_tag_auto_wait__22@unnamed@zTalkBox_cpp@FRQ28xtextbox3jotRC8xtextboxRC8xtextboxRCQ28xtextbox9split_tag"
	.4byte "reset_tag_auto_wait__22@unnamed@zTalkBox_cpp@FRQ28xtextbox3jotRC8xtextboxRC8xtextboxRCQ28xtextbox9split_tag"
	.4byte "trigger_auto_wait__22@unnamed@zTalkBox_cpp@FRCQ28xtextbox3jot"
	.rel "@stringBase0", .L_8026C9BF
	.4byte 0x00000005
	.4byte "parse_tag_pause__22@unnamed@zTalkBox_cpp@FRQ28xtextbox3jotRC8xtextboxRC8xtextboxRCQ28xtextbox9split_tag"
	.4byte "reset_tag_pause__22@unnamed@zTalkBox_cpp@FRQ28xtextbox3jotRC8xtextboxRC8xtextboxRCQ28xtextbox9split_tag"
	.4byte "trigger_pause__22@unnamed@zTalkBox_cpp@FRCQ28xtextbox3jot"
	.rel "@stringBase0", .L_8026C9C5
	.4byte 0x00000006
	.4byte "parse_tag_signal__22@unnamed@zTalkBox_cpp@FRQ28xtextbox3jotRC8xtextboxRC8xtextboxRCQ28xtextbox9split_tag"
	.4byte 0x00000000
	.4byte "trigger_signal__22@unnamed@zTalkBox_cpp@FRCQ28xtextbox3jot"
	.rel "@stringBase0", .L_8026C957
	.4byte 0x00000005
	.4byte "parse_tag_sound__22@unnamed@zTalkBox_cpp@FRQ28xtextbox3jotRC8xtextboxRC8xtextboxRCQ28xtextbox9split_tag"
	.4byte "reset_tag_sound__22@unnamed@zTalkBox_cpp@FRQ28xtextbox3jotRC8xtextboxRC8xtextboxRCQ28xtextbox9split_tag"
	.4byte "trigger_sound__22@unnamed@zTalkBox_cpp@FRCQ28xtextbox3jot"
	.rel "@stringBase0", .L_8026C9CC
	.4byte 0x00000008
	.4byte "parse_tag_teleport__22@unnamed@zTalkBox_cpp@FRQ28xtextbox3jotRC8xtextboxRC8xtextboxRCQ28xtextbox9split_tag"
	.4byte 0x00000000
	.4byte "trigger_teleport__22@unnamed@zTalkBox_cpp@FRCQ28xtextbox3jot"
	.rel "@stringBase0", .L_8026C9D5
	.4byte 0x00000004
	.4byte "parse_tag_trap__22@unnamed@zTalkBox_cpp@FRQ28xtextbox3jotRC8xtextboxRC8xtextboxRCQ28xtextbox9split_tag"
	.4byte "reset_tag_trap__22@unnamed@zTalkBox_cpp@FRQ28xtextbox3jotRC8xtextboxRC8xtextboxRCQ28xtextbox9split_tag"
	.4byte "trigger_trap__22@unnamed@zTalkBox_cpp@FRCQ28xtextbox3jot"
	.rel "@stringBase0", .L_8026C945
	.4byte 0x00000004
	.4byte "parse_tag_wait__22@unnamed@zTalkBox_cpp@FRQ28xtextbox3jotRC8xtextboxRC8xtextboxRCQ28xtextbox9split_tag"
	.4byte 0x00000000
	.4byte "trigger_wait__22@unnamed@zTalkBox_cpp@FRCQ28xtextbox3jot"
.endobj "new_tags__22@unnamed@zTalkBox_cpp@"

# @unnamed@zTalkBox_cpp@::start_state_type::__vtable
.obj "__vt__Q222@unnamed@zTalkBox_cpp@16start_state_type", weak
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte "start__Q222@unnamed@zTalkBox_cpp@16start_state_typeFv"
	.4byte "stop__Q222@unnamed@zTalkBox_cpp@16start_state_typeFv"
	.4byte "update__Q222@unnamed@zTalkBox_cpp@16start_state_typeFR6xScenef"
.endobj "__vt__Q222@unnamed@zTalkBox_cpp@16start_state_type"

# @unnamed@zTalkBox_cpp@::next_state_type::__vtable
.obj "__vt__Q222@unnamed@zTalkBox_cpp@15next_state_type", weak
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte "start__Q222@unnamed@zTalkBox_cpp@15next_state_typeFv"
	.4byte "stop__Q222@unnamed@zTalkBox_cpp@15next_state_typeFv"
	.4byte "update__Q222@unnamed@zTalkBox_cpp@15next_state_typeFR6xScenef"
.endobj "__vt__Q222@unnamed@zTalkBox_cpp@15next_state_type"

# @unnamed@zTalkBox_cpp@::wait_state_type::__vtable
.obj "__vt__Q222@unnamed@zTalkBox_cpp@15wait_state_type", weak
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte "start__Q222@unnamed@zTalkBox_cpp@15wait_state_typeFv"
	.4byte "stop__Q222@unnamed@zTalkBox_cpp@15wait_state_typeFv"
	.4byte "update__Q222@unnamed@zTalkBox_cpp@15wait_state_typeFR6xScenef"
.endobj "__vt__Q222@unnamed@zTalkBox_cpp@15wait_state_type"

# @unnamed@zTalkBox_cpp@::state_type::__vtable
.obj "__vt__Q222@unnamed@zTalkBox_cpp@10state_type", weak
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte "start__Q222@unnamed@zTalkBox_cpp@10state_typeFv"
	.4byte "stop__Q222@unnamed@zTalkBox_cpp@10state_typeFv"
	.4byte 0x00000000
.endobj "__vt__Q222@unnamed@zTalkBox_cpp@10state_type"

# @unnamed@zTalkBox_cpp@::stop_state_type::__vtable
.obj "__vt__Q222@unnamed@zTalkBox_cpp@15stop_state_type", weak
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte "start__Q222@unnamed@zTalkBox_cpp@15stop_state_typeFv"
	.4byte "stop__Q222@unnamed@zTalkBox_cpp@15stop_state_typeFv"
	.4byte "update__Q222@unnamed@zTalkBox_cpp@15stop_state_typeFR6xScenef"
.endobj "__vt__Q222@unnamed@zTalkBox_cpp@15stop_state_type"

# 0x8031B320 - 0x80324258
.section .bss, "wa", @nobits
.balign 8

# @unnamed@zTalkBox_cpp@::shared
.obj "shared__22@unnamed@zTalkBox_cpp@", local
	.skip 0x8E9C
.endobj "shared__22@unnamed@zTalkBox_cpp@"

.obj v$993, local
	.skip 0x80
.endobj v$993

.obj next_state$2124, local
	.skip 0xC
.endobj next_state$2124

.obj wait_state$2127, local
	.skip 0xC
.endobj wait_state$2127
	.skip 0x4

# 0x803CAD68 - 0x803CAD78
.section .sdata, "wa"
.balign 8

# @unnamed@zTalkBox_cpp@::new_tags_size
.obj "new_tags_size__22@unnamed@zTalkBox_cpp@", local
	.4byte 0x00000009
.endobj "new_tags_size__22@unnamed@zTalkBox_cpp@"

# @unnamed@zTalkBox_cpp@::music_fade
.obj "music_fade__22@unnamed@zTalkBox_cpp@", local
	.4byte 0x3E800000
.endobj "music_fade__22@unnamed@zTalkBox_cpp@"

# @unnamed@zTalkBox_cpp@::music_fade_delay
.obj "music_fade_delay__22@unnamed@zTalkBox_cpp@", local
	.4byte 0x3F000000
.endobj "music_fade_delay__22@unnamed@zTalkBox_cpp@"
	.4byte 0x00000000

# 0x803CBEF8 - 0x803CBF18
.section .sbss, "wa", @nobits
.balign 8

.obj zero$829, local
	.skip 0x4
.endobj zero$829

.obj registered$1502, local
	.skip 0x1
.endobj registered$1502

.obj init$1503, local
	.skip 0x1
.endobj init$1503

.obj init$2122, local
	.skip 0x1
.endobj init$2122
	.skip 0x1

.obj start_state$2121, local
	.skip 0x8
.endobj start_state$2121

.obj init$2125, local
	.skip 0x1
.endobj init$2125

.obj init$2128, local
	.skip 0x1
.endobj init$2128

.obj init$2131, local
	.skip 0x1
.endobj init$2131
	.skip 0x1

.obj stop_state$2130, local
	.skip 0x8
.endobj stop_state$2130
	.skip 0x4

# 0x803CECA8 - 0x803CECC8
.section .sdata2, "a"
.balign 8

.obj "@1032", local
	.4byte 0x00000000
.endobj "@1032"

.obj "@1150", local
	.4byte 0x3F800000
.endobj "@1150"

.obj "@1422", local
	.4byte 0x3C8EFA35
.endobj "@1422"

.obj "@1514", local
	.4byte 0x41200000
.endobj "@1514"

.obj "@2117", local
	.4byte 0x40000000
.endobj "@2117"

.obj "@2209", local
	.4byte 0x3E800000
.endobj "@2209"

.obj "@2251", local
	.4byte 0x3DCCCCCD
.endobj "@2251"
	.4byte 0x00000000

# 0x803D08E8 - 0x803D08F0
.section .sbss2, "a", @nobits
.balign 8

.obj "@1622", local
	.skip 0x8
.endobj "@1622"
