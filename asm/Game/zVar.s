.include "macros.inc"

.if 0

.section .text  # 0x800BD1B0 - 0x800BE470

var_text_CorruptFileName__18_esc__2_unnamed_esc__2_zVar_cpp_esc__2_Fv:
/* 800BD2EC 000BA0EC  94 21 FF 20 */	stwu r1, -0xe0(r1)
/* 800BD2F0 000BA0F0  7C 08 02 A6 */	mflr r0
/* 800BD2F4 000BA0F4  90 01 00 E4 */	stw r0, 0xe4(r1)
/* 800BD2F8 000BA0F8  38 61 00 08 */	addi r3, r1, 8
/* 800BD2FC 000BA0FC  BF 61 00 CC */	stmw r27, 0xcc(r1)
/* 800BD300 000BA100  4B FE 95 29 */	bl zMenuGetCorruptFiles__FPA64_c
/* 800BD304 000BA104  3C 80 80 26 */	lis r4, zVar_strings@ha
/* 800BD308 000BA108  3C A0 80 30 */	lis r5, zVar_printf_buffer5@ha
/* 800BD30C 000BA10C  38 84 FC B0 */	addi r4, r4, zVar_strings@l
/* 800BD310 000BA110  7C 7D 1B 78 */	mr r29, r3
/* 800BD314 000BA114  38 65 86 70 */	addi r3, r5, zVar_printf_buffer5@l
/* 800BD318 000BA118  38 84 00 0D */	addi r4, r4, 0xd
/* 800BD31C 000BA11C  48 12 A3 E5 */	bl strcpy
/* 800BD320 000BA120  3C 80 80 30 */	lis r4, zVar_printf_buffer5@ha
/* 800BD324 000BA124  3C 60 80 26 */	lis r3, zVar_strings@ha
/* 800BD328 000BA128  3B C4 86 70 */	addi r30, r4, zVar_printf_buffer5@l
/* 800BD32C 000BA12C  3B 81 00 08 */	addi r28, r1, 8
/* 800BD330 000BA130  3B E3 FC B0 */	addi r31, r3, zVar_strings@l
/* 800BD334 000BA134  3B 60 00 00 */	li r27, 0
/* 800BD338 000BA138  48 00 00 24 */	b lbl_800BD35C
lbl_800BD33C:
/* 800BD33C 000BA13C  7F C3 F3 78 */	mr r3, r30
/* 800BD340 000BA140  7F 84 E3 78 */	mr r4, r28
/* 800BD344 000BA144  48 12 A3 4D */	bl strcat
/* 800BD348 000BA148  7F C3 F3 78 */	mr r3, r30
/* 800BD34C 000BA14C  38 9F 00 0E */	addi r4, r31, 0xe
/* 800BD350 000BA150  48 12 A3 41 */	bl strcat
/* 800BD354 000BA154  3B 9C 00 40 */	addi r28, r28, 0x40
/* 800BD358 000BA158  3B 7B 00 01 */	addi r27, r27, 1
lbl_800BD35C:
/* 800BD35C 000BA15C  7C 1B E8 00 */	cmpw r27, r29
/* 800BD360 000BA160  41 80 FF DC */	blt lbl_800BD33C
/* 800BD364 000BA164  BB 61 00 CC */	lmw r27, 0xcc(r1)
/* 800BD368 000BA168  3C 60 80 30 */	lis r3, zVar_printf_buffer5@ha
/* 800BD36C 000BA16C  80 01 00 E4 */	lwz r0, 0xe4(r1)
/* 800BD370 000BA170  38 63 86 70 */	addi r3, r3, zVar_printf_buffer5@l
/* 800BD374 000BA174  7C 08 03 A6 */	mtlr r0
/* 800BD378 000BA178  38 21 00 E0 */	addi r1, r1, 0xe0
/* 800BD37C 000BA17C  4E 80 00 20 */	blr 

/* zVarGameSlotInfo__18@unnamed@zVar_cpp@FiPcUl */
zVarGameSlotInfo__FiPcUl:
/* 800BD4FC 000BA2FC  94 21 FE 50 */	stwu r1, -0x1b0(r1)
/* 800BD500 000BA300  7C 08 02 A6 */	mflr r0
/* 800BD504 000BA304  3C A0 80 26 */	lis r5, lbl_8025F9E8@ha
/* 800BD508 000BA308  90 01 01 B4 */	stw r0, 0x1b4(r1)
/* 800BD50C 000BA30C  38 A5 F9 E8 */	addi r5, r5, lbl_8025F9E8@l
/* 800BD510 000BA310  BD C1 01 68 */	stmw r14, 0x168(r1)
/* 800BD514 000BA314  7C 7E 1B 78 */	mr r30, r3
/* 800BD518 000BA318  7C 9F 23 78 */	mr r31, r4
/* 800BD51C 000BA31C  38 65 01 C4 */	addi r3, r5, 0x1c4
/* 800BD520 000BA320  39 C0 00 20 */	li r14, 0x20
/* 800BD524 000BA324  38 81 00 64 */	addi r4, r1, 0x64
/* 800BD528 000BA328  80 05 01 68 */	lwz r0, 0x168(r5)
/* 800BD52C 000BA32C  81 E5 01 6C */	lwz r15, 0x16c(r5)
/* 800BD530 000BA330  82 05 01 70 */	lwz r16, 0x170(r5)
/* 800BD534 000BA334  82 25 01 74 */	lwz r17, 0x174(r5)
/* 800BD538 000BA338  82 45 01 78 */	lwz r18, 0x178(r5)
/* 800BD53C 000BA33C  82 65 01 7C */	lwz r19, 0x17c(r5)
/* 800BD540 000BA340  82 85 01 80 */	lwz r20, 0x180(r5)
/* 800BD544 000BA344  82 A5 01 84 */	lwz r21, 0x184(r5)
/* 800BD548 000BA348  82 C5 01 88 */	lwz r22, 0x188(r5)
/* 800BD54C 000BA34C  82 E5 01 8C */	lwz r23, 0x18c(r5)
/* 800BD550 000BA350  83 05 01 90 */	lwz r24, 0x190(r5)
/* 800BD554 000BA354  83 25 01 94 */	lwz r25, 0x194(r5)
/* 800BD558 000BA358  83 45 01 98 */	lwz r26, 0x198(r5)
/* 800BD55C 000BA35C  83 65 01 9C */	lwz r27, 0x19c(r5)
/* 800BD560 000BA360  83 85 01 A0 */	lwz r28, 0x1a0(r5)
/* 800BD564 000BA364  83 A5 01 A4 */	lwz r29, 0x1a4(r5)
/* 800BD568 000BA368  81 85 01 A8 */	lwz r12, 0x1a8(r5)
/* 800BD56C 000BA36C  81 65 01 AC */	lwz r11, 0x1ac(r5)
/* 800BD570 000BA370  81 45 01 B0 */	lwz r10, 0x1b0(r5)
/* 800BD574 000BA374  81 25 01 B4 */	lwz r9, 0x1b4(r5)
/* 800BD578 000BA378  81 05 01 B8 */	lwz r8, 0x1b8(r5)
/* 800BD57C 000BA37C  80 E5 01 BC */	lwz r7, 0x1bc(r5)
/* 800BD580 000BA380  80 C5 01 C0 */	lwz r6, 0x1c0(r5)
/* 800BD584 000BA384  80 A5 01 C4 */	lwz r5, 0x1c4(r5)
/* 800BD588 000BA388  90 01 00 48 */	stw r0, 0x48(r1)
/* 800BD58C 000BA38C  91 E1 00 4C */	stw r15, 0x4c(r1)
/* 800BD590 000BA390  92 01 00 50 */	stw r16, 0x50(r1)
/* 800BD594 000BA394  92 21 00 54 */	stw r17, 0x54(r1)
/* 800BD598 000BA398  92 41 00 58 */	stw r18, 0x58(r1)
/* 800BD59C 000BA39C  92 61 00 5C */	stw r19, 0x5c(r1)
/* 800BD5A0 000BA3A0  92 81 00 60 */	stw r20, 0x60(r1)
/* 800BD5A4 000BA3A4  92 A1 00 64 */	stw r21, 0x64(r1)
/* 800BD5A8 000BA3A8  92 C1 00 28 */	stw r22, 0x28(r1)
/* 800BD5AC 000BA3AC  92 E1 00 2C */	stw r23, 0x2c(r1)
/* 800BD5B0 000BA3B0  93 01 00 30 */	stw r24, 0x30(r1)
/* 800BD5B4 000BA3B4  93 21 00 34 */	stw r25, 0x34(r1)
/* 800BD5B8 000BA3B8  93 41 00 38 */	stw r26, 0x38(r1)
/* 800BD5BC 000BA3BC  93 61 00 3C */	stw r27, 0x3c(r1)
/* 800BD5C0 000BA3C0  93 81 00 40 */	stw r28, 0x40(r1)
/* 800BD5C4 000BA3C4  93 A1 00 44 */	stw r29, 0x44(r1)
/* 800BD5C8 000BA3C8  91 81 00 08 */	stw r12, 8(r1)
/* 800BD5CC 000BA3CC  91 61 00 0C */	stw r11, 0xc(r1)
/* 800BD5D0 000BA3D0  91 41 00 10 */	stw r10, 0x10(r1)
/* 800BD5D4 000BA3D4  91 21 00 14 */	stw r9, 0x14(r1)
/* 800BD5D8 000BA3D8  91 01 00 18 */	stw r8, 0x18(r1)
/* 800BD5DC 000BA3DC  90 E1 00 1C */	stw r7, 0x1c(r1)
/* 800BD5E0 000BA3E0  90 C1 00 20 */	stw r6, 0x20(r1)
/* 800BD5E4 000BA3E4  90 A1 00 24 */	stw r5, 0x24(r1)
/* 800BD5E8 000BA3E8  7D C9 03 A6 */	mtctr r14
lbl_800BD5EC:
/* 800BD5EC 000BA3EC  80 A3 00 04 */	lwz r5, 4(r3)
/* 800BD5F0 000BA3F0  84 03 00 08 */	lwzu r0, 8(r3)
/* 800BD5F4 000BA3F4  90 A4 00 04 */	stw r5, 4(r4)
/* 800BD5F8 000BA3F8  94 04 00 08 */	stwu r0, 8(r4)
/* 800BD5FC 000BA3FC  42 00 FF F0 */	bdnz lbl_800BD5EC
/* 800BD600 000BA400  1D DE 00 6C */	mulli r14, r30, 0x6c
/* 800BD604 000BA404  3C 80 80 3C */	lis r4, zSaveLoadGameTable@ha
/* 800BD608 000BA408  38 61 00 48 */	addi r3, r1, 0x48
/* 800BD60C 000BA40C  38 04 25 20 */	addi r0, r4, zSaveLoadGameTable@l
/* 800BD610 000BA410  7D E0 72 14 */	add r15, r0, r14
/* 800BD614 000BA414  38 A0 00 05 */	li r5, 5
/* 800BD618 000BA418  38 8F 00 40 */	addi r4, r15, 0x40
/* 800BD61C 000BA41C  48 12 A0 A1 */	bl strncpy
/* 800BD620 000BA420  3C 60 80 3C */	lis r3, zSaveLoadGameTable@ha
/* 800BD624 000BA424  38 A0 00 2F */	li r5, 0x2f
/* 800BD628 000BA428  38 03 25 20 */	addi r0, r3, zSaveLoadGameTable@l
/* 800BD62C 000BA42C  3C 80 80 26 */	lis r4, zVar_strings@ha
/* 800BD630 000BA430  7C 60 72 14 */	add r3, r0, r14
/* 800BD634 000BA434  98 A1 00 4A */	stb r5, 0x4a(r1)
/* 800BD638 000BA438  38 84 FC B0 */	addi r4, r4, zVar_strings@l
/* 800BD63C 000BA43C  88 C3 00 48 */	lbz r6, 0x48(r3)
/* 800BD640 000BA440  88 E3 00 49 */	lbz r7, 0x49(r3)
/* 800BD644 000BA444  38 61 00 68 */	addi r3, r1, 0x68
/* 800BD648 000BA448  38 84 00 13 */	addi r4, r4, 0x13
/* 800BD64C 000BA44C  38 A1 00 48 */	addi r5, r1, 0x48
/* 800BD650 000BA450  4C C6 31 82 */	crclr 6
/* 800BD654 000BA454  48 12 68 E1 */	bl sprintf
/* 800BD658 000BA458  38 61 00 48 */	addi r3, r1, 0x48
/* 800BD65C 000BA45C  38 81 00 68 */	addi r4, r1, 0x68
/* 800BD660 000BA460  38 A0 00 20 */	li r5, 0x20
/* 800BD664 000BA464  48 12 A0 59 */	bl strncpy
/* 800BD668 000BA468  3C 60 80 3C */	lis r3, zSaveLoadGameTable@ha
/* 800BD66C 000BA46C  38 A0 00 00 */	li r5, 0
/* 800BD670 000BA470  38 03 25 20 */	addi r0, r3, zSaveLoadGameTable@l
/* 800BD674 000BA474  3C 80 80 26 */	lis r4, zVar_strings@ha
/* 800BD678 000BA478  7C 60 72 14 */	add r3, r0, r14
/* 800BD67C 000BA47C  98 A1 00 67 */	stb r5, 0x67(r1)
/* 800BD680 000BA480  38 84 FC B0 */	addi r4, r4, zVar_strings@l
/* 800BD684 000BA484  88 A3 00 4B */	lbz r5, 0x4b(r3)
/* 800BD688 000BA488  88 C3 00 4C */	lbz r6, 0x4c(r3)
/* 800BD68C 000BA48C  38 61 00 28 */	addi r3, r1, 0x28
/* 800BD690 000BA490  38 84 00 1B */	addi r4, r4, 0x1b
/* 800BD694 000BA494  4C C6 31 82 */	crclr 6
/* 800BD698 000BA498  48 12 68 9D */	bl sprintf
/* 800BD69C 000BA49C  38 61 00 28 */	addi r3, r1, 0x28
/* 800BD6A0 000BA4A0  48 12 B1 CD */	bl atoi
/* 800BD6A4 000BA4A4  7C 70 1B 78 */	mr r16, r3
/* 800BD6A8 000BA4A8  2C 10 00 0C */	cmpwi r16, 0xc
/* 800BD6AC 000BA4AC  41 80 00 2C */	blt lbl_800BD6D8
/* 800BD6B0 000BA4B0  3C 80 80 26 */	lis r4, zVar_strings@ha
/* 800BD6B4 000BA4B4  38 61 00 08 */	addi r3, r1, 8
/* 800BD6B8 000BA4B8  38 84 FC B0 */	addi r4, r4, zVar_strings@l
/* 800BD6BC 000BA4BC  38 A0 00 03 */	li r5, 3
/* 800BD6C0 000BA4C0  38 84 00 20 */	addi r4, r4, 0x20
/* 800BD6C4 000BA4C4  48 12 9F F9 */	bl strncpy
/* 800BD6C8 000BA4C8  2C 10 00 0C */	cmpwi r16, 0xc
/* 800BD6CC 000BA4CC  41 82 00 30 */	beq lbl_800BD6FC
/* 800BD6D0 000BA4D0  3A 10 FF F4 */	addi r16, r16, -12
/* 800BD6D4 000BA4D4  48 00 00 28 */	b lbl_800BD6FC
lbl_800BD6D8:
/* 800BD6D8 000BA4D8  3C 80 80 26 */	lis r4, zVar_strings@ha
/* 800BD6DC 000BA4DC  38 61 00 08 */	addi r3, r1, 8
/* 800BD6E0 000BA4E0  38 84 FC B0 */	addi r4, r4, zVar_strings@l
/* 800BD6E4 000BA4E4  38 A0 00 03 */	li r5, 3
/* 800BD6E8 000BA4E8  38 84 00 23 */	addi r4, r4, 0x23
/* 800BD6EC 000BA4EC  48 12 9F D1 */	bl strncpy
/* 800BD6F0 000BA4F0  2C 10 00 00 */	cmpwi r16, 0
/* 800BD6F4 000BA4F4  40 82 00 08 */	bne lbl_800BD6FC
/* 800BD6F8 000BA4F8  3A 00 00 0C */	li r16, 0xc
lbl_800BD6FC:
/* 800BD6FC 000BA4FC  3C 60 80 3C */	lis r3, zSaveLoadGameTable@ha
/* 800BD700 000BA500  3C C0 80 26 */	lis r6, zVar_strings@ha
/* 800BD704 000BA504  38 03 25 20 */	addi r0, r3, zSaveLoadGameTable@l
/* 800BD708 000BA508  7E 05 83 78 */	mr r5, r16
/* 800BD70C 000BA50C  7C 80 72 14 */	add r4, r0, r14
/* 800BD710 000BA510  39 06 FC B0 */	addi r8, r6, zVar_strings@l
/* 800BD714 000BA514  88 C4 00 4E */	lbz r6, 0x4e(r4)
/* 800BD718 000BA518  38 61 00 28 */	addi r3, r1, 0x28
/* 800BD71C 000BA51C  88 E4 00 4F */	lbz r7, 0x4f(r4)
/* 800BD720 000BA520  38 88 00 26 */	addi r4, r8, 0x26
/* 800BD724 000BA524  39 01 00 08 */	addi r8, r1, 8
/* 800BD728 000BA528  4C C6 31 82 */	crclr 6
/* 800BD72C 000BA52C  48 12 68 09 */	bl sprintf
/* 800BD730 000BA530  3C 80 80 26 */	lis r4, zVar_strings@ha
/* 800BD734 000BA534  38 61 00 48 */	addi r3, r1, 0x48
/* 800BD738 000BA538  38 84 FC B0 */	addi r4, r4, zVar_strings@l
/* 800BD73C 000BA53C  38 C1 00 28 */	addi r6, r1, 0x28
/* 800BD740 000BA540  7C 65 1B 78 */	mr r5, r3
/* 800BD744 000BA544  38 84 00 31 */	addi r4, r4, 0x31
/* 800BD748 000BA548  4C C6 31 82 */	crclr 6
/* 800BD74C 000BA54C  48 12 67 E9 */	bl sprintf
/* 800BD750 000BA550  38 00 00 00 */	li r0, 0
/* 800BD754 000BA554  3C 60 80 26 */	lis r3, zVar_strings@ha
/* 800BD758 000BA558  38 83 FC B0 */	addi r4, r3, zVar_strings@l
/* 800BD75C 000BA55C  98 01 00 47 */	stb r0, 0x47(r1)
/* 800BD760 000BA560  7D E3 7B 78 */	mr r3, r15
/* 800BD764 000BA564  98 01 00 67 */	stb r0, 0x67(r1)
/* 800BD768 000BA568  38 84 00 37 */	addi r4, r4, 0x37
/* 800BD76C 000BA56C  4B F8 EE 41 */	bl xStricmp__FPCcPCc
/* 800BD770 000BA570  2C 03 00 00 */	cmpwi r3, 0
/* 800BD774 000BA574  40 82 00 20 */	bne lbl_800BD794
/* 800BD778 000BA578  3C 80 80 26 */	lis r4, zVar_strings@ha
/* 800BD77C 000BA57C  7F E3 FB 78 */	mr r3, r31
/* 800BD780 000BA580  38 84 FC B0 */	addi r4, r4, zVar_strings@l
/* 800BD784 000BA584  38 84 00 37 */	addi r4, r4, 0x37
/* 800BD788 000BA588  4C C6 31 82 */	crclr 6
/* 800BD78C 000BA58C  48 12 67 A9 */	bl sprintf
/* 800BD790 000BA590  48 00 00 10 */	b lbl_800BD7A0
lbl_800BD794:
/* 800BD794 000BA594  7F E3 FB 78 */	mr r3, r31
/* 800BD798 000BA598  7F C4 F3 78 */	mr r4, r30
/* 800BD79C 000BA59C  4B FF 1A 91 */	bl zSaveLoad_BuildName__FPci
lbl_800BD7A0:
/* 800BD7A0 000BA5A0  7F E3 FB 78 */	mr r3, r31
/* 800BD7A4 000BA5A4  B9 C1 01 68 */	lmw r14, 0x168(r1)
/* 800BD7A8 000BA5A8  80 01 01 B4 */	lwz r0, 0x1b4(r1)
/* 800BD7AC 000BA5AC  7C 08 03 A6 */	mtlr r0
/* 800BD7B0 000BA5B0  38 21 01 B0 */	addi r1, r1, 0x1b0
/* 800BD7B4 000BA5B4  4E 80 00 20 */	blr 

parse_tag_var__FRQ28xtextbox3jotRC8xtextboxRC8xtextboxRCQ28xtextbox9split_tag:
/* 800BDF80 000BAD80  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 800BDF84 000BAD84  7C 08 02 A6 */	mflr r0
/* 800BDF88 000BAD88  90 01 00 14 */	stw r0, 0x14(r1)
/* 800BDF8C 000BAD8C  80 06 00 14 */	lwz r0, 0x14(r6)
/* 800BDF90 000BAD90  93 E1 00 0C */	stw r31, 0xc(r1)
/* 800BDF94 000BAD94  7C 7F 1B 78 */	mr r31, r3
/* 800BDF98 000BAD98  28 00 00 01 */	cmplwi r0, 1
/* 800BDF9C 000BAD9C  40 82 00 70 */	bne lbl_800BE00C
/* 800BDFA0 000BADA0  80 66 00 10 */	lwz r3, 0x10(r6)
/* 800BDFA4 000BADA4  88 03 00 00 */	lbz r0, 0(r3)
/* 800BDFA8 000BADA8  28 00 00 3A */	cmplwi r0, 0x3a
/* 800BDFAC 000BADAC  40 82 00 60 */	bne lbl_800BE00C
/* 800BDFB0 000BADB0  80 06 00 1C */	lwz r0, 0x1c(r6)
/* 800BDFB4 000BADB4  28 00 00 01 */	cmplwi r0, 1
/* 800BDFB8 000BADB8  41 81 00 08 */	bgt lbl_800BDFC0
/* 800BDFBC 000BADBC  48 00 00 50 */	b lbl_800BE00C
lbl_800BDFC0:
/* 800BDFC0 000BADC0  38 66 00 18 */	addi r3, r6, 0x18
/* 800BDFC4 000BADC4  48 00 00 89 */	bl var_text__FRC6substr
/* 800BDFC8 000BADC8  90 7F 00 10 */	stw r3, 0x10(r31)
/* 800BDFCC 000BADCC  38 00 00 00 */	li r0, 0
/* 800BDFD0 000BADD0  B0 1F 00 0C */	sth r0, 0xc(r31)
/* 800BDFD4 000BADD4  80 1F 00 10 */	lwz r0, 0x10(r31)
/* 800BDFD8 000BADD8  28 00 00 00 */	cmplwi r0, 0
/* 800BDFDC 000BADDC  41 82 00 30 */	beq lbl_800BE00C
/* 800BDFE0 000BADE0  3C 80 00 01 */	lis r4, 0x0000FC00@ha
/* 800BDFE4 000BADE4  38 60 00 01 */	li r3, 1
/* 800BDFE8 000BADE8  38 04 FC 00 */	addi r0, r4, 0x0000FC00@l
/* 800BDFEC 000BADEC  B0 1F 00 0C */	sth r0, 0xc(r31)
/* 800BDFF0 000BADF0  88 1F 00 09 */	lbz r0, 9(r31)
/* 800BDFF4 000BADF4  50 60 36 72 */	rlwimi r0, r3, 6, 0x19, 0x19
/* 800BDFF8 000BADF8  98 1F 00 09 */	stb r0, 9(r31)
/* 800BDFFC 000BADFC  54 03 D7 FE */	rlwinm r3, r0, 0x1a, 0x1f, 0x1f
/* 800BE000 000BAE00  88 1F 00 09 */	lbz r0, 9(r31)
/* 800BE004 000BAE04  50 60 3E 30 */	rlwimi r0, r3, 7, 0x18, 0x18
/* 800BE008 000BAE08  98 1F 00 09 */	stb r0, 9(r31)
lbl_800BE00C:
/* 800BE00C 000BAE0C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 800BE010 000BAE10  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 800BE014 000BAE14  7C 08 03 A6 */	mtlr r0
/* 800BE018 000BAE18  38 21 00 10 */	addi r1, r1, 0x10
/* 800BE01C 000BAE1C  4E 80 00 20 */	blr 

.global zVarEntryCB_SndMusicVol__FPv
zVarEntryCB_SndMusicVol__FPv:
/* 800BE0EC 000BAEEC  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 800BE0F0 000BAEF0  7C 08 02 A6 */	mflr r0
/* 800BE0F4 000BAEF4  3C 60 80 3C */	lis r3, gSnd@ha
/* 800BE0F8 000BAEF8  90 01 00 14 */	stw r0, 0x14(r1)
/* 800BE0FC 000BAEFC  38 63 D5 B4 */	addi r3, r3, gSnd@l
/* 800BE100 000BAF00  C8 22 96 28 */	lfd f1, volumeMod1-_SDA2_BASE_(r2)
/* 800BE104 000BAF04  C0 43 00 10 */	lfs f2, 0x10(r3)
/* 800BE108 000BAF08  C8 02 96 30 */	lfd f0, volumeMod2-_SDA2_BASE_(r2)
/* 800BE10C 000BAF0C  FC 42 00 72 */	fmul f2, f2, f1
/* 800BE110 000BAF10  FC 20 10 2A */	fadd f1, f0, f2
/* 800BE114 000BAF14  48 12 F2 C9 */	bl __cvt_fp2unsigned
/* 800BE118 000BAF18  80 01 00 14 */	lwz r0, 0x14(r1)
/* 800BE11C 000BAF1C  7C 08 03 A6 */	mtlr r0
/* 800BE120 000BAF20  38 21 00 10 */	addi r1, r1, 0x10
/* 800BE124 000BAF24  4E 80 00 20 */	blr 

.global zVarEntryCB_SndFXVol__FPv
zVarEntryCB_SndFXVol__FPv:
/* 800BE128 000BAF28  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 800BE12C 000BAF2C  7C 08 02 A6 */	mflr r0
/* 800BE130 000BAF30  3C 60 80 3C */	lis r3, gSnd@ha
/* 800BE134 000BAF34  90 01 00 14 */	stw r0, 0x14(r1)
/* 800BE138 000BAF38  38 63 D5 B4 */	addi r3, r3, gSnd@l
/* 800BE13C 000BAF3C  C8 22 96 28 */	lfd f1, volumeMod1-_SDA2_BASE_(r2)
/* 800BE140 000BAF40  C0 43 00 08 */	lfs f2, 8(r3)
/* 800BE144 000BAF44  C8 02 96 30 */	lfd f0, volumeMod2-_SDA2_BASE_(r2)
/* 800BE148 000BAF48  FC 42 00 72 */	fmul f2, f2, f1
/* 800BE14C 000BAF4C  FC 20 10 2A */	fadd f1, f0, f2
/* 800BE150 000BAF50  48 12 F2 8D */	bl __cvt_fp2unsigned
/* 800BE154 000BAF54  80 01 00 14 */	lwz r0, 0x14(r1)
/* 800BE158 000BAF58  7C 08 03 A6 */	mtlr r0
/* 800BE15C 000BAF5C  38 21 00 10 */	addi r1, r1, 0x10
/* 800BE160 000BAF60  4E 80 00 20 */	blr 

zVarEntryCB_MCAvailable__FPv:
/* 800BE164 000BAF64  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 800BE168 000BAF68  7C 08 02 A6 */	mflr r0
/* 800BE16C 000BAF6C  38 60 00 00 */	li r3, 0
/* 800BE170 000BAF70  38 80 00 00 */	li r4, 0
/* 800BE174 000BAF74  90 01 00 14 */	stw r0, 0x14(r1)
/* 800BE178 000BAF78  4B F7 F1 09 */	bl xSGGameIsEmpty__FP17st_XSAVEGAME_DATAi
/* 800BE17C 000BAF7C  2C 03 00 01 */	cmpwi r3, 1
/* 800BE180 000BAF80  40 82 00 3C */	bne lbl_800BE1BC
/* 800BE184 000BAF84  38 60 00 00 */	li r3, 0
/* 800BE188 000BAF88  38 80 00 01 */	li r4, 1
/* 800BE18C 000BAF8C  4B F7 F0 F5 */	bl xSGGameIsEmpty__FP17st_XSAVEGAME_DATAi
/* 800BE190 000BAF90  2C 03 00 01 */	cmpwi r3, 1
/* 800BE194 000BAF94  40 82 00 0C */	bne lbl_800BE1A0
/* 800BE198 000BAF98  38 60 00 00 */	li r3, 0
/* 800BE19C 000BAF9C  48 00 00 70 */	b lbl_800BE20C
lbl_800BE1A0:
/* 800BE1A0 000BAFA0  38 60 00 00 */	li r3, 0
/* 800BE1A4 000BAFA4  38 80 00 01 */	li r4, 1
/* 800BE1A8 000BAFA8  4B F7 F0 D9 */	bl xSGGameIsEmpty__FP17st_XSAVEGAME_DATAi
/* 800BE1AC 000BAFAC  2C 03 00 00 */	cmpwi r3, 0
/* 800BE1B0 000BAFB0  40 82 00 58 */	bne lbl_800BE208
/* 800BE1B4 000BAFB4  38 60 00 02 */	li r3, 2
/* 800BE1B8 000BAFB8  48 00 00 54 */	b lbl_800BE20C
lbl_800BE1BC:
/* 800BE1BC 000BAFBC  38 60 00 00 */	li r3, 0
/* 800BE1C0 000BAFC0  38 80 00 00 */	li r4, 0
/* 800BE1C4 000BAFC4  4B F7 F0 BD */	bl xSGGameIsEmpty__FP17st_XSAVEGAME_DATAi
/* 800BE1C8 000BAFC8  2C 03 00 00 */	cmpwi r3, 0
/* 800BE1CC 000BAFCC  40 82 00 3C */	bne lbl_800BE208
/* 800BE1D0 000BAFD0  38 60 00 00 */	li r3, 0
/* 800BE1D4 000BAFD4  38 80 00 01 */	li r4, 1
/* 800BE1D8 000BAFD8  4B F7 F0 A9 */	bl xSGGameIsEmpty__FP17st_XSAVEGAME_DATAi
/* 800BE1DC 000BAFDC  2C 03 00 01 */	cmpwi r3, 1
/* 800BE1E0 000BAFE0  40 82 00 0C */	bne lbl_800BE1EC
/* 800BE1E4 000BAFE4  38 60 00 01 */	li r3, 1
/* 800BE1E8 000BAFE8  48 00 00 24 */	b lbl_800BE20C
lbl_800BE1EC:
/* 800BE1EC 000BAFEC  38 60 00 00 */	li r3, 0
/* 800BE1F0 000BAFF0  38 80 00 01 */	li r4, 1
/* 800BE1F4 000BAFF4  4B F7 F0 8D */	bl xSGGameIsEmpty__FP17st_XSAVEGAME_DATAi
/* 800BE1F8 000BAFF8  2C 03 00 00 */	cmpwi r3, 0
/* 800BE1FC 000BAFFC  40 82 00 0C */	bne lbl_800BE208
/* 800BE200 000BB000  38 60 00 03 */	li r3, 3
/* 800BE204 000BB004  48 00 00 08 */	b lbl_800BE20C
lbl_800BE208:
/* 800BE208 000BB008  38 60 00 00 */	li r3, 0
lbl_800BE20C:
/* 800BE20C 000BB00C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 800BE210 000BB010  7C 08 03 A6 */	mtlr r0
/* 800BE214 000BB014  38 21 00 10 */	addi r1, r1, 0x10
/* 800BE218 000BB018  4E 80 00 20 */	blr 

.endif

.section .rodata
.balign 8
.global lbl_8025F9E8
/* Offset to first 1.0f pair: 0x150 */
/* Offset to second 1.0f pair: 0x160 */
lbl_8025F9E8:
	.incbin "baserom.dol", 0x25C9C8, 0x2C8
.global zVar_strings
zVar_strings:
	.incbin "baserom.dol", 0x25CC90, 0x354

.section .data
.balign 8
.global state_text
state_text:
	.incbin "baserom.dol", 0x28E6C0, 0x10
.global heshe_text
heshe_text:
	.incbin "baserom.dol", 0x28E6D0, 0xC
.global playername_text
playername_text:
	.incbin "baserom.dol", 0x28E6DC, 0xC
.global lbl_80291708
lbl_80291708:
	.incbin "baserom.dol", 0x28E6E8, 0x40

.global vars
vars:
	.incbin "baserom.dol", 0x28E728, 0x1D4

.global var_tag
var_tag:
	.incbin "baserom.dol", 0x28E8FC, 0x14
/* SPECULATION: link order */
.global zVarEntryTable
zVarEntryTable:
	.incbin "baserom.dol", 0x28E910, 0x130
/* SPECULATION: link order */
.global __MIXVolumeTable
__MIXVolumeTable:
	.incbin "baserom.dol", 0x28EA40, 0xB8C
/* SPECULATION: link order */
.global __MIXAIVolumeTable
__MIXAIVolumeTable:
	.incbin "baserom.dol", 0x28F5CC, 0x34

.section .bss
.balign 8
.global zVar_printf_buffer1
zVar_printf_buffer1:
	.skip 0xC
.global zVar_printf_buffer2
zVar_printf_buffer2:
	.skip 0xC
.global zVar_printf_buffer3
zVar_printf_buffer3:
	.skip 0xC
.global zVar_printf_buffer4
zVar_printf_buffer4:
	.skip 0xC
.global zVar_printf_buffer5
zVar_printf_buffer5:
	.skip 0x80
.global zVar_printf_buffer6
zVar_printf_buffer6:
	.skip 0x20
.global zVar_printf_buffer7
zVar_printf_buffer7:
	.skip 0xC
.global zVar_printf_buffer8
zVar_printf_buffer8:
	.skip 0xC
.global zVar_printf_buffer9
zVar_printf_buffer9:
	.skip 0x20
.global zVar_printf_buffer10
zVar_printf_buffer10:
	.skip 0x20
.global zVar_buffer11
zVar_buffer11:
	.skip 0x40
.global zVar_buffer12
zVar_buffer12:
	.skip 0x40
.global zVar_buffer13
zVar_buffer13:
	.skip 0x40
.global zVar_buffer14
zVar_buffer14:
	.skip 0x40
.global zVar_buffer15
zVar_buffer15:
	.skip 0x40
.global zVar_buffer16
zVar_buffer16:
	.skip 0x40
.global zVar_buffer17
zVar_buffer17:
	.skip 0x40
.global zVar_buffer18
zVar_buffer18:
	.skip 0x40
.global zVar_buffer19
zVar_buffer19:
	.skip 0xC
.global zVar_buffer20
zVar_buffer20:
	.skip 0xC
.global zVar_buffer21
zVar_buffer21:
	.skip 0xC
.global zVar_buffer22
zVar_buffer22:
	.skip 0xC
.global zVar_buffer23
zVar_buffer23:
	.skip 0xC
.global zVar_buffer24
zVar_buffer24:
	.skip 0x30
.global zVar_buffer25
zVar_buffer25:
	.skip 0xC
.global zVar_buffer26
zVar_buffer26:
	.skip 0xC
.global zVar_buffer27
zVar_buffer27:
	.skip 0xC
.global zVar_buffer28
zVar_buffer28:
	.skip 0xC
.global zVar_buffer29
zVar_buffer29:
	.skip 0x40
.global zVar_buffer30
zVar_buffer30:
	.skip 0xC
.global zVar_buffer31
zVar_buffer31:
	.skip 0xC
.global zVar_buffer32
zVar_buffer32:
/* TODO: There are more labels here, zVar_buffer32 is not that big */
	.skip 0x23C4

.section .sbss
.balign 8
.global bad_card_available
bad_card_available:
	.skip 0x4
.global bad_card_needed
bad_card_needed:
	.skip 0x4
.global selSceneID
selSceneID:
	.skip 0x8

.section .sdata2
.balign 8
.global volumeMod1
volumeMod1:
	.incbin "baserom.dol", 0x2B7848, 0x8
.global volumeMod2
volumeMod2:
	.incbin "baserom.dol", 0x2B7850, 0x8
