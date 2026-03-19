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

DSError TRKDispatchMessage(TRKBuffer* buffer)
{
	DSError error;
	u8 command;

	error = DS_DispatchError;
	TRKSetBufferPosition(buffer, 0);
	TRKReadBuffer1_ui8(buffer, &command);
	command &= 0xFF;
	if (command < gTRKDispatchTableSize) {
		error = gTRKDispatchTable[command].fn(buffer);
	}
	return error;
}

DSError TRKInitializeDispatcher()
{
	gTRKDispatchTableSize = 32;
	return DS_NoError;
}

static DSError TRKOverrideDispatch(TRKBuffer* buffer)
{
	(void)buffer;
	return DS_NoError;
}
