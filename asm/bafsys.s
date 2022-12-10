.include "macros.inc"
.file "bafsys.c"

# 0x8022F69C - 0x8022F7C4
.text
.balign 4

.fn RwOsGetFileInterface, global
/* 8022F69C 0022C77C  80 6D 9F 7C */	lwz r3, RwEngineInstance@sda21(r13)
/* 8022F6A0 0022C780  38 63 00 C4 */	addi r3, r3, 0xc4
/* 8022F6A4 0022C784  4E 80 00 20 */	blr
.endfn RwOsGetFileInterface

.fn rwfexist, local
/* 8022F6A8 0022C788  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8022F6AC 0022C78C  7C 08 02 A6 */	mflr r0
/* 8022F6B0 0022C790  38 8D 87 90 */	addi r4, r13, "@55"@sda21
/* 8022F6B4 0022C794  90 01 00 14 */	stw r0, 0x14(r1)
/* 8022F6B8 0022C798  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8022F6BC 0022C79C  80 AD 9F 7C */	lwz r5, RwEngineInstance@sda21(r13)
/* 8022F6C0 0022C7A0  81 85 00 C8 */	lwz r12, 0xc8(r5)
/* 8022F6C4 0022C7A4  7D 89 03 A6 */	mtctr r12
/* 8022F6C8 0022C7A8  4E 80 04 21 */	bctrl
/* 8022F6CC 0022C7AC  7C 03 00 D0 */	neg r0, r3
/* 8022F6D0 0022C7B0  28 03 00 00 */	cmplwi r3, 0x0
/* 8022F6D4 0022C7B4  7C 00 1B 78 */	or r0, r0, r3
/* 8022F6D8 0022C7B8  54 1F 0F FE */	srwi r31, r0, 31
/* 8022F6DC 0022C7BC  41 82 00 14 */	beq .L_8022F6F0
/* 8022F6E0 0022C7C0  80 8D 9F 7C */	lwz r4, RwEngineInstance@sda21(r13)
/* 8022F6E4 0022C7C4  81 84 00 CC */	lwz r12, 0xcc(r4)
/* 8022F6E8 0022C7C8  7D 89 03 A6 */	mtctr r12
/* 8022F6EC 0022C7CC  4E 80 04 21 */	bctrl
.L_8022F6F0:
/* 8022F6F0 0022C7D0  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8022F6F4 0022C7D4  7F E3 FB 78 */	mr r3, r31
/* 8022F6F8 0022C7D8  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8022F6FC 0022C7DC  7C 08 03 A6 */	mtlr r0
/* 8022F700 0022C7E0  38 21 00 10 */	addi r1, r1, 0x10
/* 8022F704 0022C7E4  4E 80 00 20 */	blr
.endfn rwfexist

.fn _rwFileSystemOpen, global
/* 8022F708 0022C7E8  3C 80 80 23 */	lis r4, rwfexist@ha
/* 8022F70C 0022C7EC  80 6D 9F 7C */	lwz r3, RwEngineInstance@sda21(r13)
/* 8022F710 0022C7F0  38 04 F6 A8 */	addi r0, r4, rwfexist@l
/* 8022F714 0022C7F4  3C A0 80 1E */	lis r5, fopen@ha
/* 8022F718 0022C7F8  90 03 00 C4 */	stw r0, 0xc4(r3)
/* 8022F71C 0022C7FC  3C 60 80 1E */	lis r3, fclose@ha
/* 8022F720 0022C800  3D 40 80 1E */	lis r10, fread@ha
/* 8022F724 0022C804  3D 20 80 1E */	lis r9, fwrite@ha
/* 8022F728 0022C808  80 8D 9F 7C */	lwz r4, RwEngineInstance@sda21(r13)
/* 8022F72C 0022C80C  38 05 2F 14 */	addi r0, r5, fopen@l
/* 8022F730 0022C810  3D 00 80 1E */	lis r8, fgets@ha
/* 8022F734 0022C814  3C E0 80 1E */	lis r7, fputs@ha
/* 8022F738 0022C818  90 04 00 C8 */	stw r0, 0xc8(r4)
/* 8022F73C 0022C81C  3C C0 80 1E */	lis r6, feof@ha
/* 8022F740 0022C820  3C A0 80 1E */	lis r5, fseek@ha
/* 8022F744 0022C824  3C 80 80 1E */	lis r4, fflush@ha
/* 8022F748 0022C828  81 6D 9F 7C */	lwz r11, RwEngineInstance@sda21(r13)
/* 8022F74C 0022C82C  39 83 32 9C */	addi r12, r3, fclose@l
/* 8022F750 0022C830  3C 60 80 1E */	lis r3, ftell@ha
/* 8022F754 0022C834  38 0A 2D 1C */	addi r0, r10, fread@l
/* 8022F758 0022C838  91 8B 00 CC */	stw r12, 0xcc(r11)
/* 8022F75C 0022C83C  39 49 29 50 */	addi r10, r9, fwrite@l
/* 8022F760 0022C840  39 28 23 E8 */	addi r9, r8, fgets@l
/* 8022F764 0022C844  39 07 21 5C */	addi r8, r7, fputs@l
/* 8022F768 0022C848  81 6D 9F 7C */	lwz r11, RwEngineInstance@sda21(r13)
/* 8022F76C 0022C84C  38 E6 3F 1C */	addi r7, r6, feof@l
/* 8022F770 0022C850  38 C5 34 58 */	addi r6, r5, fseek@l
/* 8022F774 0022C854  38 A4 31 64 */	addi r5, r4, fflush@l
/* 8022F778 0022C858  90 0B 00 D0 */	stw r0, 0xd0(r11)
/* 8022F77C 0022C85C  38 03 37 00 */	addi r0, r3, ftell@l
/* 8022F780 0022C860  38 60 00 01 */	li r3, 0x1
/* 8022F784 0022C864  80 8D 9F 7C */	lwz r4, RwEngineInstance@sda21(r13)
/* 8022F788 0022C868  91 44 00 D4 */	stw r10, 0xd4(r4)
/* 8022F78C 0022C86C  80 8D 9F 7C */	lwz r4, RwEngineInstance@sda21(r13)
/* 8022F790 0022C870  91 24 00 D8 */	stw r9, 0xd8(r4)
/* 8022F794 0022C874  80 8D 9F 7C */	lwz r4, RwEngineInstance@sda21(r13)
/* 8022F798 0022C878  91 04 00 DC */	stw r8, 0xdc(r4)
/* 8022F79C 0022C87C  80 8D 9F 7C */	lwz r4, RwEngineInstance@sda21(r13)
/* 8022F7A0 0022C880  90 E4 00 E0 */	stw r7, 0xe0(r4)
/* 8022F7A4 0022C884  80 8D 9F 7C */	lwz r4, RwEngineInstance@sda21(r13)
/* 8022F7A8 0022C888  90 C4 00 E4 */	stw r6, 0xe4(r4)
/* 8022F7AC 0022C88C  80 8D 9F 7C */	lwz r4, RwEngineInstance@sda21(r13)
/* 8022F7B0 0022C890  90 A4 00 E8 */	stw r5, 0xe8(r4)
/* 8022F7B4 0022C894  80 8D 9F 7C */	lwz r4, RwEngineInstance@sda21(r13)
/* 8022F7B8 0022C898  90 04 00 EC */	stw r0, 0xec(r4)
/* 8022F7BC 0022C89C  4E 80 00 20 */	blr
.endfn _rwFileSystemOpen

.fn _rwFileSystemClose, global
/* 8022F7C0 0022C8A0  4E 80 00 20 */	blr
.endfn _rwFileSystemClose

# 0x803CB090 - 0x803CB098
.section .sdata, "wa"
.balign 8

.obj "@55", local
	.byte 0x72, 0x62, 0x00
.endobj "@55"
	.4byte 0x00000000
	.byte 0x00
