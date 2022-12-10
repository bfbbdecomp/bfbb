.include "macros.inc"
.file "dispatch.c"

# 0x801F0844 - 0x801F08E0
.text
.balign 4

.fn TRKDispatchMessage, global
/* 801F0844 001ED924  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 801F0848 001ED928  7C 08 02 A6 */	mflr r0
/* 801F084C 001ED92C  38 80 00 00 */	li r4, 0x0
/* 801F0850 001ED930  90 01 00 24 */	stw r0, 0x24(r1)
/* 801F0854 001ED934  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 801F0858 001ED938  3B E0 05 00 */	li r31, 0x500
/* 801F085C 001ED93C  93 C1 00 18 */	stw r30, 0x18(r1)
/* 801F0860 001ED940  7C 7E 1B 78 */	mr r30, r3
/* 801F0864 001ED944  4B FF F9 4D */	bl TRKSetBufferPosition
/* 801F0868 001ED948  7F C3 F3 78 */	mr r3, r30
/* 801F086C 001ED94C  38 81 00 08 */	addi r4, r1, 0x8
/* 801F0870 001ED950  4B FF F3 91 */	bl TRKReadBuffer1_ui8
/* 801F0874 001ED954  3C 60 80 38 */	lis r3, gTRKDispatchTableSize@ha
/* 801F0878 001ED958  88 81 00 08 */	lbz r4, 0x8(r1)
/* 801F087C 001ED95C  80 03 0C C0 */	lwz r0, gTRKDispatchTableSize@l(r3)
/* 801F0880 001ED960  54 83 06 3E */	clrlwi r3, r4, 24
/* 801F0884 001ED964  7C 03 00 40 */	cmplw r3, r0
/* 801F0888 001ED968  40 80 00 24 */	bge .L_801F08AC
/* 801F088C 001ED96C  3C 60 80 2B */	lis r3, gTRKDispatchTable@ha
/* 801F0890 001ED970  54 80 15 BA */	clrlslwi r0, r4, 24, 2
/* 801F0894 001ED974  38 83 75 68 */	addi r4, r3, gTRKDispatchTable@l
/* 801F0898 001ED978  7F C3 F3 78 */	mr r3, r30
/* 801F089C 001ED97C  7D 84 00 2E */	lwzx r12, r4, r0
/* 801F08A0 001ED980  7D 89 03 A6 */	mtctr r12
/* 801F08A4 001ED984  4E 80 04 21 */	bctrl
/* 801F08A8 001ED988  7C 7F 1B 78 */	mr r31, r3
.L_801F08AC:
/* 801F08AC 001ED98C  80 01 00 24 */	lwz r0, 0x24(r1)
/* 801F08B0 001ED990  7F E3 FB 78 */	mr r3, r31
/* 801F08B4 001ED994  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 801F08B8 001ED998  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 801F08BC 001ED99C  7C 08 03 A6 */	mtlr r0
/* 801F08C0 001ED9A0  38 21 00 20 */	addi r1, r1, 0x20
/* 801F08C4 001ED9A4  4E 80 00 20 */	blr
.endfn TRKDispatchMessage

.fn TRKInitializeDispatcher, global
/* 801F08C8 001ED9A8  3C 60 80 38 */	lis r3, gTRKDispatchTableSize@ha
/* 801F08CC 001ED9AC  38 00 00 20 */	li r0, 0x20
/* 801F08D0 001ED9B0  38 83 0C C0 */	addi r4, r3, gTRKDispatchTableSize@l
/* 801F08D4 001ED9B4  38 60 00 00 */	li r3, 0x0
/* 801F08D8 001ED9B8  90 04 00 00 */	stw r0, 0x0(r4)
/* 801F08DC 001ED9BC  4E 80 00 20 */	blr
.endfn TRKInitializeDispatcher

# 0x802B7568 - 0x802B75F0
.data
.balign 8

.obj gTRKDispatchTable, global
	.4byte TRKDoUnsupported
	.4byte TRKDoConnect
	.4byte TRKDoDisconnect
	.4byte TRKDoReset
	.4byte TRKDoVersions
	.4byte TRKDoSupportMask
	.4byte TRKDoCPUType
	.4byte TRKDoUnsupported
	.4byte TRKDoUnsupported
	.4byte TRKDoUnsupported
	.4byte TRKDoUnsupported
	.4byte TRKDoUnsupported
	.4byte TRKDoUnsupported
	.4byte TRKDoUnsupported
	.4byte TRKDoUnsupported
	.4byte TRKDoUnsupported
	.4byte TRKDoReadMemory
	.4byte TRKDoWriteMemory
	.4byte TRKDoReadRegisters
	.4byte TRKDoWriteRegisters
	.4byte TRKDoUnsupported
	.4byte TRKDoUnsupported
	.4byte TRKDoFlushCache
	.4byte TRKDoSetOption
	.4byte TRKDoContinue
	.4byte TRKDoStep
	.4byte TRKDoStop
	.4byte TRKDoUnsupported
	.4byte TRKDoUnsupported
	.4byte TRKDoUnsupported
	.4byte TRKDoUnsupported
	.4byte TRKDoUnsupported
	.4byte 0x00000000
.endobj gTRKDispatchTable
	.4byte 0x00000000

# 0x80380CC0 - 0x80380CC8
.bss
.balign 8

.obj gTRKDispatchTableSize, global
	.skip 0x4
.endobj gTRKDispatchTableSize
	.skip 0x4
