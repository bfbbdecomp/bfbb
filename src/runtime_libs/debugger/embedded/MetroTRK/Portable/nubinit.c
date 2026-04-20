#include "PowerPC_EABI_Support/MetroTRK/trk.h"

BOOL gTRKBigEndian;

/*
 * --INFO--
 * Address:	8021C408
 * Size:	000028
 */
void TRKNubWelcome(void)
{
	TRK_board_display("MetroTRK for GAMECUBE v2.0");
	return;
}

/*
 * --INFO--
 * Address:	8021C3E4
 * Size:	000024
 */
DSError TRKTerminateNub(void)
{
	TRKTerminateSerialHandler();
	return DS_NoError;
}

/*
 * --INFO--
 * Address:	8021C310
 * Size:	0000D4
 */
DSError TRKInitializeNub(void)
{
	u8 bendian[4];
	BOOL* bigEndian;
	DSError ret;
	DSError uartErr;
	volatile u8** inputPendingPtr;

	ret       = DS_NoError;
	bigEndian = &gTRKBigEndian;
	*bigEndian = TRUE;

	bendian[0] = 0x12;
	bendian[1] = 0x34;
	bendian[2] = 0x56;
	bendian[3] = 0x78;

	if (*(u32*)bendian == 0x12345678) {
		*bigEndian = TRUE;
	} else if (*(u32*)bendian == 0x78563412) {
		*bigEndian = FALSE;
	} else {
		ret = TRUE;
	}

	if (ret == DS_NoError)
		usr_put_initialize();
	if (ret == DS_NoError)
		ret = TRKInitializeEventQueue();
	if (ret == DS_NoError)
		ret = TRKInitializeMessageBuffers();
	if (ret == DS_NoError)
		ret = TRKInitializeDispatcher();

	InitializeProgramEndTrap();

	if (ret == DS_NoError) {
		inputPendingPtr = (volatile u8**)&gTRKInputPendingPtr;
		uartErr = TRKInitializeIntDrivenUART(0x0000e100, 1, 0, inputPendingPtr);
		TRKTargetSetInputPendingPtr((void*)*inputPendingPtr);
		if (uartErr != DS_NoError) {
			ret = uartErr;
		}
	}

	if (ret == DS_NoError)
		ret = TRKInitializeSerialHandler();
	if (ret == DS_NoError)
		ret = TRKInitializeTarget();

	return ret;
}
