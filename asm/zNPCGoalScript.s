.include "macros.inc"
.file "zNPCGoalScript.cpp"

# 0x801245D4 - 0x801248A4
.text
.balign 4

# GOALCreate_Script(int, RyzMemGrow*, void*)
.fn GOALCreate_Script__FiP10RyzMemGrowPv, global
/* 801245D4 001216B4  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801245D8 001216B8  7C 08 02 A6 */	mflr r0
/* 801245DC 001216BC  7C 85 23 78 */	mr r5, r4
/* 801245E0 001216C0  38 C0 00 00 */	li r6, 0x0
/* 801245E4 001216C4  90 01 00 14 */	stw r0, 0x14(r1)
/* 801245E8 001216C8  93 E1 00 0C */	stw r31, 0xc(r1)
/* 801245EC 001216CC  7C 7F 1B 78 */	mr r31, r3
/* 801245F0 001216D0  3C 9F B1 B9 */	addis r4, r31, 0xb1b9
/* 801245F4 001216D4  38 84 AC D0 */	addi r4, r4, -0x5330
/* 801245F8 001216D8  28 04 00 07 */	cmplwi r4, 0x7
/* 801245FC 001216DC  41 81 01 58 */	bgt .L_80124754
/* 80124600 001216E0  3C 60 80 2A */	lis r3, "@811"@ha
/* 80124604 001216E4  54 84 10 3A */	slwi r4, r4, 2
/* 80124608 001216E8  38 63 81 08 */	addi r3, r3, "@811"@l
/* 8012460C 001216EC  7C 03 20 2E */	lwzx r0, r3, r4
/* 80124610 001216F0  7C 09 03 A6 */	mtctr r0
/* 80124614 001216F4  4E 80 04 20 */	bctr
.L_80124618:
/* 80124618 001216F8  7F E4 FB 78 */	mr r4, r31
/* 8012461C 001216FC  38 60 00 50 */	li r3, 0x50
/* 80124620 00121700  4B FE AB 31 */	bl __nw__10RyzMemDataFUliP10RyzMemGrow
/* 80124624 00121704  7C 60 1B 79 */	mr. r0, r3
/* 80124628 00121708  41 82 00 10 */	beq .L_80124638
/* 8012462C 0012170C  7F E4 FB 78 */	mr r4, r31
/* 80124630 00121710  48 00 04 6D */	bl __ct__14zNPCGoalScriptFi
/* 80124634 00121714  7C 60 1B 78 */	mr r0, r3
.L_80124638:
/* 80124638 00121718  7C 06 03 78 */	mr r6, r0
/* 8012463C 0012171C  48 00 01 18 */	b .L_80124754
.L_80124640:
/* 80124640 00121720  7F E4 FB 78 */	mr r4, r31
/* 80124644 00121724  38 60 00 4C */	li r3, 0x4c
/* 80124648 00121728  4B FE AB 09 */	bl __nw__10RyzMemDataFUliP10RyzMemGrow
/* 8012464C 0012172C  7C 60 1B 79 */	mr. r0, r3
/* 80124650 00121730  41 82 00 10 */	beq .L_80124660
/* 80124654 00121734  7F E4 FB 78 */	mr r4, r31
/* 80124658 00121738  48 00 03 FD */	bl __ct__18zNPCGoalScriptAnimFi
/* 8012465C 0012173C  7C 60 1B 78 */	mr r0, r3
.L_80124660:
/* 80124660 00121740  7C 06 03 78 */	mr r6, r0
/* 80124664 00121744  48 00 00 F0 */	b .L_80124754
.L_80124668:
/* 80124668 00121748  7F E4 FB 78 */	mr r4, r31
/* 8012466C 0012174C  38 60 00 4C */	li r3, 0x4c
/* 80124670 00121750  4B FE AA E1 */	bl __nw__10RyzMemDataFUliP10RyzMemGrow
/* 80124674 00121754  7C 60 1B 79 */	mr. r0, r3
/* 80124678 00121758  41 82 00 10 */	beq .L_80124688
/* 8012467C 0012175C  7F E4 FB 78 */	mr r4, r31
/* 80124680 00121760  48 00 03 8D */	bl __ct__20zNPCGoalScriptAttackFi
/* 80124684 00121764  7C 60 1B 78 */	mr r0, r3
.L_80124688:
/* 80124688 00121768  7C 06 03 78 */	mr r6, r0
/* 8012468C 0012176C  48 00 00 C8 */	b .L_80124754
.L_80124690:
/* 80124690 00121770  7F E4 FB 78 */	mr r4, r31
/* 80124694 00121774  38 60 00 4C */	li r3, 0x4c
/* 80124698 00121778  4B FE AA B9 */	bl __nw__10RyzMemDataFUliP10RyzMemGrow
/* 8012469C 0012177C  7C 60 1B 79 */	mr. r0, r3
/* 801246A0 00121780  41 82 00 10 */	beq .L_801246B0
/* 801246A4 00121784  7F E4 FB 78 */	mr r4, r31
/* 801246A8 00121788  48 00 03 1D */	bl __ct__18zNPCGoalScriptMoveFi
/* 801246AC 0012178C  7C 60 1B 78 */	mr r0, r3
.L_801246B0:
/* 801246B0 00121790  7C 06 03 78 */	mr r6, r0
/* 801246B4 00121794  48 00 00 A0 */	b .L_80124754
.L_801246B8:
/* 801246B8 00121798  7F E4 FB 78 */	mr r4, r31
/* 801246BC 0012179C  38 60 00 4C */	li r3, 0x4c
/* 801246C0 001217A0  4B FE AA 91 */	bl __nw__10RyzMemDataFUliP10RyzMemGrow
/* 801246C4 001217A4  7C 60 1B 79 */	mr. r0, r3
/* 801246C8 001217A8  41 82 00 10 */	beq .L_801246D8
/* 801246CC 001217AC  7F E4 FB 78 */	mr r4, r31
/* 801246D0 001217B0  48 00 02 AD */	bl __ct__18zNPCGoalScriptTalkFi
/* 801246D4 001217B4  7C 60 1B 78 */	mr r0, r3
.L_801246D8:
/* 801246D8 001217B8  7C 06 03 78 */	mr r6, r0
/* 801246DC 001217BC  48 00 00 78 */	b .L_80124754
.L_801246E0:
/* 801246E0 001217C0  7F E4 FB 78 */	mr r4, r31
/* 801246E4 001217C4  38 60 00 4C */	li r3, 0x4c
/* 801246E8 001217C8  4B FE AA 69 */	bl __nw__10RyzMemDataFUliP10RyzMemGrow
/* 801246EC 001217CC  7C 60 1B 79 */	mr. r0, r3
/* 801246F0 001217D0  41 82 00 10 */	beq .L_80124700
/* 801246F4 001217D4  7F E4 FB 78 */	mr r4, r31
/* 801246F8 001217D8  48 00 02 3D */	bl __ct__20zNPCGoalScriptFollowFi
/* 801246FC 001217DC  7C 60 1B 78 */	mr r0, r3
.L_80124700:
/* 80124700 001217E0  7C 06 03 78 */	mr r6, r0
/* 80124704 001217E4  48 00 00 50 */	b .L_80124754
.L_80124708:
/* 80124708 001217E8  7F E4 FB 78 */	mr r4, r31
/* 8012470C 001217EC  38 60 00 4C */	li r3, 0x4c
/* 80124710 001217F0  4B FE AA 41 */	bl __nw__10RyzMemDataFUliP10RyzMemGrow
/* 80124714 001217F4  7C 60 1B 79 */	mr. r0, r3
/* 80124718 001217F8  41 82 00 10 */	beq .L_80124728
/* 8012471C 001217FC  7F E4 FB 78 */	mr r4, r31
/* 80124720 00121800  48 00 01 CD */	bl __ct__18zNPCGoalScriptLeadFi
/* 80124724 00121804  7C 60 1B 78 */	mr r0, r3
.L_80124728:
/* 80124728 00121808  7C 06 03 78 */	mr r6, r0
/* 8012472C 0012180C  48 00 00 28 */	b .L_80124754
.L_80124730:
/* 80124730 00121810  7F E4 FB 78 */	mr r4, r31
/* 80124734 00121814  38 60 00 4C */	li r3, 0x4c
/* 80124738 00121818  4B FE AA 19 */	bl __nw__10RyzMemDataFUliP10RyzMemGrow
/* 8012473C 0012181C  7C 60 1B 79 */	mr. r0, r3
/* 80124740 00121820  41 82 00 10 */	beq .L_80124750
/* 80124744 00121824  7F E4 FB 78 */	mr r4, r31
/* 80124748 00121828  48 00 01 5D */	bl __ct__18zNPCGoalScriptWaitFi
/* 8012474C 0012182C  7C 60 1B 78 */	mr r0, r3
.L_80124750:
/* 80124750 00121830  7C 06 03 78 */	mr r6, r0
.L_80124754:
/* 80124754 00121834  28 06 00 00 */	cmplwi r6, 0x0
/* 80124758 00121838  7C C3 33 78 */	mr r3, r6
/* 8012475C 0012183C  41 82 00 08 */	beq .L_80124764
/* 80124760 00121840  38 66 00 0C */	addi r3, r6, 0xc
.L_80124764:
/* 80124764 00121844  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80124768 00121848  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8012476C 0012184C  7C 08 03 A6 */	mtlr r0
/* 80124770 00121850  38 21 00 10 */	addi r1, r1, 0x10
/* 80124774 00121854  4E 80 00 20 */	blr
.endfn GOALCreate_Script__FiP10RyzMemGrowPv

# zNPCGoalScript::Enter(float, void*)
.fn Enter__14zNPCGoalScriptFfPv, global
/* 80124778 00121858  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 8012477C 0012185C  7C 08 02 A6 */	mflr r0
/* 80124780 00121860  38 A0 01 3E */	li r5, 0x13e
/* 80124784 00121864  90 01 00 24 */	stw r0, 0x24(r1)
/* 80124788 00121868  DB E1 00 18 */	stfd f31, 0x18(r1)
/* 8012478C 0012186C  FF E0 08 90 */	fmr f31, f1
/* 80124790 00121870  93 E1 00 14 */	stw r31, 0x14(r1)
/* 80124794 00121874  7C 9F 23 78 */	mr r31, r4
/* 80124798 00121878  93 C1 00 10 */	stw r30, 0x10(r1)
/* 8012479C 0012187C  7C 7E 1B 78 */	mr r30, r3
/* 801247A0 00121880  80 63 00 18 */	lwz r3, 0x18(r3)
/* 801247A4 00121884  80 63 00 00 */	lwz r3, 0x0(r3)
/* 801247A8 00121888  7C 64 1B 78 */	mr r4, r3
/* 801247AC 0012188C  4B EF AF 35 */	bl zEntEvent__FP5xBaseP5xBaseUi
/* 801247B0 00121890  FC 20 F8 90 */	fmr f1, f31
/* 801247B4 00121894  7F C3 F3 78 */	mr r3, r30
/* 801247B8 00121898  7F E4 FB 78 */	mr r4, r31
/* 801247BC 0012189C  4B FB 09 59 */	bl Enter__14zNPCGoalCommonFfPv
/* 801247C0 001218A0  80 01 00 24 */	lwz r0, 0x24(r1)
/* 801247C4 001218A4  CB E1 00 18 */	lfd f31, 0x18(r1)
/* 801247C8 001218A8  83 E1 00 14 */	lwz r31, 0x14(r1)
/* 801247CC 001218AC  83 C1 00 10 */	lwz r30, 0x10(r1)
/* 801247D0 001218B0  7C 08 03 A6 */	mtlr r0
/* 801247D4 001218B4  38 21 00 20 */	addi r1, r1, 0x20
/* 801247D8 001218B8  4E 80 00 20 */	blr
.endfn Enter__14zNPCGoalScriptFfPv

# zNPCGoalScript::Exit(float, void*)
.fn Exit__14zNPCGoalScriptFfPv, global
/* 801247DC 001218BC  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801247E0 001218C0  7C 08 02 A6 */	mflr r0
/* 801247E4 001218C4  90 01 00 14 */	stw r0, 0x14(r1)
/* 801247E8 001218C8  4B FB 0C 35 */	bl Exit__5xGoalFfPv
/* 801247EC 001218CC  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801247F0 001218D0  7C 08 03 A6 */	mtlr r0
/* 801247F4 001218D4  38 21 00 10 */	addi r1, r1, 0x10
/* 801247F8 001218D8  4E 80 00 20 */	blr
.endfn Exit__14zNPCGoalScriptFfPv

# zNPCGoalScript::SysEvent(xBase*, xBase*, unsigned int, const float*, xBase*, int*)
.fn SysEvent__14zNPCGoalScriptFP5xBaseP5xBaseUiPCfP5xBasePi, global
/* 801247FC 001218DC  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80124800 001218E0  7C 08 02 A6 */	mflr r0
/* 80124804 001218E4  90 01 00 14 */	stw r0, 0x14(r1)
/* 80124808 001218E8  4B FB 0C 25 */	bl SysEvent__5xGoalFP5xBaseP5xBaseUiPCfP5xBasePi
/* 8012480C 001218EC  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80124810 001218F0  7C 08 03 A6 */	mtlr r0
/* 80124814 001218F4  38 21 00 10 */	addi r1, r1, 0x10
/* 80124818 001218F8  4E 80 00 20 */	blr
.endfn SysEvent__14zNPCGoalScriptFP5xBaseP5xBaseUiPCfP5xBasePi

# zNPCGoalScript::NPCMessage(NPCMsg*)
.fn NPCMessage__14zNPCGoalScriptFP6NPCMsg, global
/* 8012481C 001218FC  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80124820 00121900  7C 08 02 A6 */	mflr r0
/* 80124824 00121904  90 01 00 14 */	stw r0, 0x14(r1)
/* 80124828 00121908  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8012482C 0012190C  7C 9F 23 78 */	mr r31, r4
/* 80124830 00121910  4B FC 7F 61 */	bl GetPsyche__5xGoalCFv
/* 80124834 00121914  80 1F 00 00 */	lwz r0, 0x0(r31)
/* 80124838 00121918  3B E0 00 01 */	li r31, 0x1
/* 8012483C 0012191C  2C 00 00 1B */	cmpwi r0, 0x1b
/* 80124840 00121920  41 82 00 20 */	beq .L_80124860
/* 80124844 00121924  40 80 00 10 */	bge .L_80124854
/* 80124848 00121928  2C 00 00 1A */	cmpwi r0, 0x1a
/* 8012484C 0012192C  40 80 00 40 */	bge .L_8012488C
/* 80124850 00121930  48 00 00 38 */	b .L_80124888
.L_80124854:
/* 80124854 00121934  2C 00 00 1D */	cmpwi r0, 0x1d
/* 80124858 00121938  40 80 00 30 */	bge .L_80124888
/* 8012485C 0012193C  48 00 00 18 */	b .L_80124874
.L_80124860:
/* 80124860 00121940  3C 80 4E 47 */	lis r4, 0x4e47
/* 80124864 00121944  38 A0 00 00 */	li r5, 0x0
/* 80124868 00121948  38 84 4E 30 */	addi r4, r4, 0x4e30
/* 8012486C 0012194C  4B FE 8E C5 */	bl GoalSet__7xPsycheFii
/* 80124870 00121950  48 00 00 1C */	b .L_8012488C
.L_80124874:
/* 80124874 00121954  3C 80 4E 47 */	lis r4, 0x4e47
/* 80124878 00121958  38 A0 00 00 */	li r5, 0x0
/* 8012487C 0012195C  38 84 53 30 */	addi r4, r4, 0x5330
/* 80124880 00121960  4B FE 92 C1 */	bl GoalPop__7xPsycheFii
/* 80124884 00121964  48 00 00 08 */	b .L_8012488C
.L_80124888:
/* 80124888 00121968  3B E0 00 00 */	li r31, 0x0
.L_8012488C:
/* 8012488C 0012196C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80124890 00121970  7F E3 FB 78 */	mr r3, r31
/* 80124894 00121974  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80124898 00121978  7C 08 03 A6 */	mtlr r0
/* 8012489C 0012197C  38 21 00 10 */	addi r1, r1, 0x10
/* 801248A0 00121980  4E 80 00 20 */	blr
.endfn NPCMessage__14zNPCGoalScriptFP6NPCMsg

# 0x801248A4 - 0x80124AE4
.section .text, "ax", unique, 1
.balign 4

# zNPCGoalScriptWait::zNPCGoalScriptWait(int)
.fn __ct__18zNPCGoalScriptWaitFi, weak
/* 801248A4 00121984  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801248A8 00121988  7C 08 02 A6 */	mflr r0
/* 801248AC 0012198C  90 01 00 14 */	stw r0, 0x14(r1)
/* 801248B0 00121990  93 E1 00 0C */	stw r31, 0xc(r1)
/* 801248B4 00121994  7C 7F 1B 78 */	mr r31, r3
/* 801248B8 00121998  4B FB 47 3D */	bl __ct__14zNPCGoalCommonFi
/* 801248BC 0012199C  3C 80 80 2A */	lis r4, __vt__18zNPCGoalScriptWait@ha
/* 801248C0 001219A0  7F E3 FB 78 */	mr r3, r31
/* 801248C4 001219A4  38 04 82 94 */	addi r0, r4, __vt__18zNPCGoalScriptWait@l
/* 801248C8 001219A8  38 80 00 06 */	li r4, 0x6
/* 801248CC 001219AC  90 1F 00 38 */	stw r0, 0x38(r31)
/* 801248D0 001219B0  4B FB 47 D1 */	bl SetFlags__5xGoalFi
/* 801248D4 001219B4  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801248D8 001219B8  7F E3 FB 78 */	mr r3, r31
/* 801248DC 001219BC  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 801248E0 001219C0  7C 08 03 A6 */	mtlr r0
/* 801248E4 001219C4  38 21 00 10 */	addi r1, r1, 0x10
/* 801248E8 001219C8  4E 80 00 20 */	blr
.endfn __ct__18zNPCGoalScriptWaitFi

# zNPCGoalScriptLead::zNPCGoalScriptLead(int)
.fn __ct__18zNPCGoalScriptLeadFi, weak
/* 801248EC 001219CC  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801248F0 001219D0  7C 08 02 A6 */	mflr r0
/* 801248F4 001219D4  90 01 00 14 */	stw r0, 0x14(r1)
/* 801248F8 001219D8  93 E1 00 0C */	stw r31, 0xc(r1)
/* 801248FC 001219DC  7C 7F 1B 78 */	mr r31, r3
/* 80124900 001219E0  4B FB 46 F5 */	bl __ct__14zNPCGoalCommonFi
/* 80124904 001219E4  3C 80 80 2A */	lis r4, __vt__18zNPCGoalScriptLead@ha
/* 80124908 001219E8  7F E3 FB 78 */	mr r3, r31
/* 8012490C 001219EC  38 04 82 60 */	addi r0, r4, __vt__18zNPCGoalScriptLead@l
/* 80124910 001219F0  38 80 00 06 */	li r4, 0x6
/* 80124914 001219F4  90 1F 00 38 */	stw r0, 0x38(r31)
/* 80124918 001219F8  4B FB 47 89 */	bl SetFlags__5xGoalFi
/* 8012491C 001219FC  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80124920 00121A00  7F E3 FB 78 */	mr r3, r31
/* 80124924 00121A04  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80124928 00121A08  7C 08 03 A6 */	mtlr r0
/* 8012492C 00121A0C  38 21 00 10 */	addi r1, r1, 0x10
/* 80124930 00121A10  4E 80 00 20 */	blr
.endfn __ct__18zNPCGoalScriptLeadFi

# zNPCGoalScriptFollow::zNPCGoalScriptFollow(int)
.fn __ct__20zNPCGoalScriptFollowFi, weak
/* 80124934 00121A14  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80124938 00121A18  7C 08 02 A6 */	mflr r0
/* 8012493C 00121A1C  90 01 00 14 */	stw r0, 0x14(r1)
/* 80124940 00121A20  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80124944 00121A24  7C 7F 1B 78 */	mr r31, r3
/* 80124948 00121A28  4B FB 46 AD */	bl __ct__14zNPCGoalCommonFi
/* 8012494C 00121A2C  3C 80 80 2A */	lis r4, __vt__20zNPCGoalScriptFollow@ha
/* 80124950 00121A30  7F E3 FB 78 */	mr r3, r31
/* 80124954 00121A34  38 04 82 2C */	addi r0, r4, __vt__20zNPCGoalScriptFollow@l
/* 80124958 00121A38  38 80 00 06 */	li r4, 0x6
/* 8012495C 00121A3C  90 1F 00 38 */	stw r0, 0x38(r31)
/* 80124960 00121A40  4B FB 47 41 */	bl SetFlags__5xGoalFi
/* 80124964 00121A44  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80124968 00121A48  7F E3 FB 78 */	mr r3, r31
/* 8012496C 00121A4C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80124970 00121A50  7C 08 03 A6 */	mtlr r0
/* 80124974 00121A54  38 21 00 10 */	addi r1, r1, 0x10
/* 80124978 00121A58  4E 80 00 20 */	blr
.endfn __ct__20zNPCGoalScriptFollowFi

# zNPCGoalScriptTalk::zNPCGoalScriptTalk(int)
.fn __ct__18zNPCGoalScriptTalkFi, weak
/* 8012497C 00121A5C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80124980 00121A60  7C 08 02 A6 */	mflr r0
/* 80124984 00121A64  90 01 00 14 */	stw r0, 0x14(r1)
/* 80124988 00121A68  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8012498C 00121A6C  7C 7F 1B 78 */	mr r31, r3
/* 80124990 00121A70  4B FB 46 65 */	bl __ct__14zNPCGoalCommonFi
/* 80124994 00121A74  3C 80 80 2A */	lis r4, __vt__18zNPCGoalScriptTalk@ha
/* 80124998 00121A78  7F E3 FB 78 */	mr r3, r31
/* 8012499C 00121A7C  38 04 81 F8 */	addi r0, r4, __vt__18zNPCGoalScriptTalk@l
/* 801249A0 00121A80  38 80 00 06 */	li r4, 0x6
/* 801249A4 00121A84  90 1F 00 38 */	stw r0, 0x38(r31)
/* 801249A8 00121A88  4B FB 46 F9 */	bl SetFlags__5xGoalFi
/* 801249AC 00121A8C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801249B0 00121A90  7F E3 FB 78 */	mr r3, r31
/* 801249B4 00121A94  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 801249B8 00121A98  7C 08 03 A6 */	mtlr r0
/* 801249BC 00121A9C  38 21 00 10 */	addi r1, r1, 0x10
/* 801249C0 00121AA0  4E 80 00 20 */	blr
.endfn __ct__18zNPCGoalScriptTalkFi

# zNPCGoalScriptMove::zNPCGoalScriptMove(int)
.fn __ct__18zNPCGoalScriptMoveFi, weak
/* 801249C4 00121AA4  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801249C8 00121AA8  7C 08 02 A6 */	mflr r0
/* 801249CC 00121AAC  90 01 00 14 */	stw r0, 0x14(r1)
/* 801249D0 00121AB0  93 E1 00 0C */	stw r31, 0xc(r1)
/* 801249D4 00121AB4  7C 7F 1B 78 */	mr r31, r3
/* 801249D8 00121AB8  4B FB 46 1D */	bl __ct__14zNPCGoalCommonFi
/* 801249DC 00121ABC  3C 80 80 2A */	lis r4, __vt__18zNPCGoalScriptMove@ha
/* 801249E0 00121AC0  7F E3 FB 78 */	mr r3, r31
/* 801249E4 00121AC4  38 04 81 C4 */	addi r0, r4, __vt__18zNPCGoalScriptMove@l
/* 801249E8 00121AC8  38 80 00 06 */	li r4, 0x6
/* 801249EC 00121ACC  90 1F 00 38 */	stw r0, 0x38(r31)
/* 801249F0 00121AD0  4B FB 46 B1 */	bl SetFlags__5xGoalFi
/* 801249F4 00121AD4  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801249F8 00121AD8  7F E3 FB 78 */	mr r3, r31
/* 801249FC 00121ADC  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80124A00 00121AE0  7C 08 03 A6 */	mtlr r0
/* 80124A04 00121AE4  38 21 00 10 */	addi r1, r1, 0x10
/* 80124A08 00121AE8  4E 80 00 20 */	blr
.endfn __ct__18zNPCGoalScriptMoveFi

# zNPCGoalScriptAttack::zNPCGoalScriptAttack(int)
.fn __ct__20zNPCGoalScriptAttackFi, weak
/* 80124A0C 00121AEC  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80124A10 00121AF0  7C 08 02 A6 */	mflr r0
/* 80124A14 00121AF4  90 01 00 14 */	stw r0, 0x14(r1)
/* 80124A18 00121AF8  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80124A1C 00121AFC  7C 7F 1B 78 */	mr r31, r3
/* 80124A20 00121B00  4B FB 45 D5 */	bl __ct__14zNPCGoalCommonFi
/* 80124A24 00121B04  3C 80 80 2A */	lis r4, __vt__20zNPCGoalScriptAttack@ha
/* 80124A28 00121B08  7F E3 FB 78 */	mr r3, r31
/* 80124A2C 00121B0C  38 04 81 90 */	addi r0, r4, __vt__20zNPCGoalScriptAttack@l
/* 80124A30 00121B10  38 80 00 06 */	li r4, 0x6
/* 80124A34 00121B14  90 1F 00 38 */	stw r0, 0x38(r31)
/* 80124A38 00121B18  4B FB 46 69 */	bl SetFlags__5xGoalFi
/* 80124A3C 00121B1C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80124A40 00121B20  7F E3 FB 78 */	mr r3, r31
/* 80124A44 00121B24  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80124A48 00121B28  7C 08 03 A6 */	mtlr r0
/* 80124A4C 00121B2C  38 21 00 10 */	addi r1, r1, 0x10
/* 80124A50 00121B30  4E 80 00 20 */	blr
.endfn __ct__20zNPCGoalScriptAttackFi

# zNPCGoalScriptAnim::zNPCGoalScriptAnim(int)
.fn __ct__18zNPCGoalScriptAnimFi, weak
/* 80124A54 00121B34  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80124A58 00121B38  7C 08 02 A6 */	mflr r0
/* 80124A5C 00121B3C  90 01 00 14 */	stw r0, 0x14(r1)
/* 80124A60 00121B40  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80124A64 00121B44  7C 7F 1B 78 */	mr r31, r3
/* 80124A68 00121B48  4B FB 45 8D */	bl __ct__14zNPCGoalCommonFi
/* 80124A6C 00121B4C  3C 80 80 2A */	lis r4, __vt__18zNPCGoalScriptAnim@ha
/* 80124A70 00121B50  7F E3 FB 78 */	mr r3, r31
/* 80124A74 00121B54  38 04 81 5C */	addi r0, r4, __vt__18zNPCGoalScriptAnim@l
/* 80124A78 00121B58  38 80 00 06 */	li r4, 0x6
/* 80124A7C 00121B5C  90 1F 00 38 */	stw r0, 0x38(r31)
/* 80124A80 00121B60  4B FB 46 21 */	bl SetFlags__5xGoalFi
/* 80124A84 00121B64  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80124A88 00121B68  7F E3 FB 78 */	mr r3, r31
/* 80124A8C 00121B6C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80124A90 00121B70  7C 08 03 A6 */	mtlr r0
/* 80124A94 00121B74  38 21 00 10 */	addi r1, r1, 0x10
/* 80124A98 00121B78  4E 80 00 20 */	blr
.endfn __ct__18zNPCGoalScriptAnimFi

# zNPCGoalScript::zNPCGoalScript(int)
.fn __ct__14zNPCGoalScriptFi, weak
/* 80124A9C 00121B7C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80124AA0 00121B80  7C 08 02 A6 */	mflr r0
/* 80124AA4 00121B84  90 01 00 14 */	stw r0, 0x14(r1)
/* 80124AA8 00121B88  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80124AAC 00121B8C  7C 7F 1B 78 */	mr r31, r3
/* 80124AB0 00121B90  4B FB 45 45 */	bl __ct__14zNPCGoalCommonFi
/* 80124AB4 00121B94  3C 80 80 2A */	lis r4, __vt__14zNPCGoalScript@ha
/* 80124AB8 00121B98  7F E3 FB 78 */	mr r3, r31
/* 80124ABC 00121B9C  38 04 81 28 */	addi r0, r4, __vt__14zNPCGoalScript@l
/* 80124AC0 00121BA0  38 80 00 1C */	li r4, 0x1c
/* 80124AC4 00121BA4  90 1F 00 38 */	stw r0, 0x38(r31)
/* 80124AC8 00121BA8  4B FB 45 D9 */	bl SetFlags__5xGoalFi
/* 80124ACC 00121BAC  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80124AD0 00121BB0  7F E3 FB 78 */	mr r3, r31
/* 80124AD4 00121BB4  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80124AD8 00121BB8  7C 08 03 A6 */	mtlr r0
/* 80124ADC 00121BBC  38 21 00 10 */	addi r1, r1, 0x10
/* 80124AE0 00121BC0  4E 80 00 20 */	blr
.endfn __ct__14zNPCGoalScriptFi

# 0x80298108 - 0x802982C8
.data
.balign 8

.obj "@811", local
	.rel GOALCreate_Script__FiP10RyzMemGrowPv, .L_80124618
	.rel GOALCreate_Script__FiP10RyzMemGrowPv, .L_80124640
	.rel GOALCreate_Script__FiP10RyzMemGrowPv, .L_80124668
	.rel GOALCreate_Script__FiP10RyzMemGrowPv, .L_80124690
	.rel GOALCreate_Script__FiP10RyzMemGrowPv, .L_801246B8
	.rel GOALCreate_Script__FiP10RyzMemGrowPv, .L_801246E0
	.rel GOALCreate_Script__FiP10RyzMemGrowPv, .L_80124708
	.rel GOALCreate_Script__FiP10RyzMemGrowPv, .L_80124730
.endobj "@811"

# zNPCGoalScript::__vtable
.obj __vt__14zNPCGoalScript, global
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte Clear__14zNPCGoalCommonFv
	.4byte Enter__14zNPCGoalScriptFfPv
	.4byte Exit__14zNPCGoalScriptFfPv
	.4byte Suspend__5xGoalFfPv
	.4byte Resume__14zNPCGoalCommonFfPv
	.4byte PreCalc__14zNPCGoalCommonFfPv
	.4byte EvalRules__5xGoalFP11en_trantypefPv
	.4byte Process__5xGoalFP11en_trantypefPvP6xScene
	.4byte SysEvent__14zNPCGoalScriptFP5xBaseP5xBaseUiPCfP5xBasePi
	.4byte NPCMessage__14zNPCGoalScriptFP6NPCMsg
	.4byte CollReview__14zNPCGoalCommonFPv
.endobj __vt__14zNPCGoalScript

# zNPCGoalScriptAnim::__vtable
.obj __vt__18zNPCGoalScriptAnim, weak
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
.endobj __vt__18zNPCGoalScriptAnim

# zNPCGoalScriptAttack::__vtable
.obj __vt__20zNPCGoalScriptAttack, weak
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
.endobj __vt__20zNPCGoalScriptAttack

# zNPCGoalScriptMove::__vtable
.obj __vt__18zNPCGoalScriptMove, weak
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
.endobj __vt__18zNPCGoalScriptMove

# zNPCGoalScriptTalk::__vtable
.obj __vt__18zNPCGoalScriptTalk, weak
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
.endobj __vt__18zNPCGoalScriptTalk

# zNPCGoalScriptFollow::__vtable
.obj __vt__20zNPCGoalScriptFollow, weak
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
.endobj __vt__20zNPCGoalScriptFollow

# zNPCGoalScriptLead::__vtable
.obj __vt__18zNPCGoalScriptLead, weak
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
.endobj __vt__18zNPCGoalScriptLead

# zNPCGoalScriptWait::__vtable
.obj __vt__18zNPCGoalScriptWait, weak
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
.endobj __vt__18zNPCGoalScriptWait
