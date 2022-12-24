.include "macros.inc"
.file "__ppc_eabi_init.cpp"

# 0x80003400 - 0x80003458
.section .init, "ax"
.balign 4

.fn __init_hardware, global
/* 80003400 000004E0  7C 00 00 A6 */	mfmsr r0
/* 80003404 000004E4  60 00 20 00 */	ori r0, r0, 0x2000
/* 80003408 000004E8  7C 00 01 24 */	mtmsr r0
/* 8000340C 000004EC  7F E8 02 A6 */	mflr r31
/* 80003410 000004F0  48 1C E1 85 */	bl __OSPSInit
/* 80003414 000004F4  48 1C D7 29 */	bl __OSFPRInit
/* 80003418 000004F8  48 1C F2 45 */	bl __OSCacheInit
/* 8000341C 000004FC  7F E8 03 A6 */	mtlr r31
/* 80003420 00000500  4E 80 00 20 */	blr
.endfn __init_hardware

.fn __flush_cache, global
/* 80003424 00000504  3C A0 FF FF */	lis r5, 0xffff
/* 80003428 00000508  60 A5 FF F1 */	ori r5, r5, 0xfff1
/* 8000342C 0000050C  7C A5 18 38 */	and r5, r5, r3
/* 80003430 00000510  7C 65 18 50 */	subf r3, r5, r3
/* 80003434 00000514  7C 84 1A 14 */	add r4, r4, r3
.L_80003438:
/* 80003438 00000518  7C 00 28 6C */	dcbst r0, r5
/* 8000343C 0000051C  7C 00 04 AC */	sync
/* 80003440 00000520  7C 00 2F AC */	icbi r0, r5
/* 80003444 00000524  30 A5 00 08 */	addic r5, r5, 0x8
/* 80003448 00000528  34 84 FF F8 */	addic. r4, r4, -0x8
/* 8000344C 0000052C  40 80 FF EC */	bge .L_80003438
/* 80003450 00000530  4C 00 01 2C */	isync
/* 80003454 00000534  4E 80 00 20 */	blr
.endfn __flush_cache

# 0x801D79CC - 0x801D7A60
.text
.balign 4

.fn __init_user, global
/* 801D79CC 001D4AAC  7C 08 02 A6 */	mflr r0
/* 801D79D0 001D4AB0  90 01 00 04 */	stw r0, 0x4(r1)
/* 801D79D4 001D4AB4  94 21 FF F8 */	stwu r1, -0x8(r1)
/* 801D79D8 001D4AB8  48 00 00 15 */	bl __init_cpp
/* 801D79DC 001D4ABC  80 01 00 0C */	lwz r0, 0xc(r1)
/* 801D79E0 001D4AC0  38 21 00 08 */	addi r1, r1, 0x8
/* 801D79E4 001D4AC4  7C 08 03 A6 */	mtlr r0
/* 801D79E8 001D4AC8  4E 80 00 20 */	blr
.endfn __init_user

.fn __init_cpp, local
/* 801D79EC 001D4ACC  7C 08 02 A6 */	mflr r0
/* 801D79F0 001D4AD0  90 01 00 04 */	stw r0, 0x4(r1)
/* 801D79F4 001D4AD4  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801D79F8 001D4AD8  93 E1 00 0C */	stw r31, 0xc(r1)
/* 801D79FC 001D4ADC  3C 60 80 25 */	lis r3, _ctors@ha
/* 801D7A00 001D4AE0  38 03 1D 00 */	addi r0, r3, _ctors@l
/* 801D7A04 001D4AE4  7C 1F 03 78 */	mr r31, r0
/* 801D7A08 001D4AE8  48 00 00 04 */	b .L_801D7A0C
.L_801D7A0C:
/* 801D7A0C 001D4AEC  48 00 00 04 */	b .L_801D7A10
.L_801D7A10:
/* 801D7A10 001D4AF0  48 00 00 10 */	b .L_801D7A20
.L_801D7A14:
/* 801D7A14 001D4AF4  7D 88 03 A6 */	mtlr r12
/* 801D7A18 001D4AF8  4E 80 00 21 */	blrl
/* 801D7A1C 001D4AFC  3B FF 00 04 */	addi r31, r31, 0x4
.L_801D7A20:
/* 801D7A20 001D4B00  81 9F 00 00 */	lwz r12, 0x0(r31)
/* 801D7A24 001D4B04  28 0C 00 00 */	cmplwi r12, 0x0
/* 801D7A28 001D4B08  40 82 FF EC */	bne .L_801D7A14
/* 801D7A2C 001D4B0C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801D7A30 001D4B10  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 801D7A34 001D4B14  38 21 00 10 */	addi r1, r1, 0x10
/* 801D7A38 001D4B18  7C 08 03 A6 */	mtlr r0
/* 801D7A3C 001D4B1C  4E 80 00 20 */	blr
.endfn __init_cpp

.fn _ExitProcess, global
/* 801D7A40 001D4B20  7C 08 02 A6 */	mflr r0
/* 801D7A44 001D4B24  90 01 00 04 */	stw r0, 0x4(r1)
/* 801D7A48 001D4B28  94 21 FF F8 */	stwu r1, -0x8(r1)
/* 801D7A4C 001D4B2C  4B FE 32 65 */	bl PPCHalt
/* 801D7A50 001D4B30  80 01 00 0C */	lwz r0, 0xc(r1)
/* 801D7A54 001D4B34  38 21 00 08 */	addi r1, r1, 0x8
/* 801D7A58 001D4B38  7C 08 03 A6 */	mtlr r0
/* 801D7A5C 001D4B3C  4E 80 00 20 */	blr
.endfn _ExitProcess
