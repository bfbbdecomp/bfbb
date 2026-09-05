#include "PowerPC_EABI_Support/MetroTRK/trk.h"

u32 gTRKDispatchTableSize;

struct DispatchEntry {
	DSError (*fn)(TRKBuffer*);
};

struct DispatchEntry gTRKDispatchTable[33] = {
	{ &TRKDoUnsupported }, { &TRKDoConnect },     { &TRKDoDisconnect },  { &TRKDoReset },         { &TRKDoVersions },
	{ &TRKDoSupportMask }, { &TRKDoCPUType },     { &TRKDoUnsupported }, { &TRKDoUnsupported },   { &TRKDoUnsupported },
	{ &TRKDoUnsupported }, { &TRKDoUnsupported }, { &TRKDoUnsupported }, { &TRKDoUnsupported },   { &TRKDoUnsupported },
	{ &TRKDoUnsupported }, { &TRKDoReadMemory },  { &TRKDoWriteMemory }, { &TRKDoReadRegisters }, { &TRKDoWriteRegisters },
	{ &TRKDoUnsupported }, { &TRKDoUnsupported }, { &TRKDoFlushCache },  { &TRKDoSetOption },     { &TRKDoContinue },
	{ &TRKDoStep },        { &TRKDoStop },        { &TRKDoUnsupported }, { &TRKDoUnsupported },   { &TRKDoUnsupported },
	{ &TRKDoUnsupported }, { &TRKDoUnsupported },
};

/*
 * --INFO--
 * Address:	8021CEF4
 * Size:	000084
 */
asm DSError TRKDispatchMessage(TRKBuffer* buffer)
{
	nofralloc
	stwu r1, -0x20(r1)
	mflr r0
	li r4, 0x0
	stw r0, 0x24(r1)
	stw r31, 0x1C(r1)
	li r31, 0x500
	stw r30, 0x18(r1)
	mr r30, r3
	bl TRKSetBufferPosition
	mr r3, r30
	addi r4, r1, 0x8
	bl TRKReadBuffer1_ui8
	lis r3, gTRKDispatchTableSize@ha
	lbz r4, 0x8(r1)
	lwz r0, gTRKDispatchTableSize@l(r3)
	clrlwi r3, r4, 24
	cmplw r3, r0
	bge dispatch_done
	lis r3, gTRKDispatchTable@ha
	clrlslwi r0, r4, 24, 2
	addi r4, r3, gTRKDispatchTable@l
	mr r3, r30
	lwzx r12, r4, r0
	mtctr r12
	bctrl
	mr r31, r3

dispatch_done:
	lwz r0, 0x24(r1)
	mr r3, r31
	lwz r31, 0x1C(r1)
	lwz r30, 0x18(r1)
	mtlr r0
	addi r1, r1, 0x20
	blr
}

/*
 * --INFO--
 * Address:	8021CEE0
 * Size:	000018
 */
asm DSError TRKInitializeDispatcher(void)
{
	nofralloc
	lis r3, gTRKDispatchTableSize@ha
	li r0, 0x20
	addi r4, r3, gTRKDispatchTableSize@l
	li r3, 0x0
	stw r0, 0x0(r4)
	blr
}
