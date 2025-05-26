#include "PowerPC_EABI_Support/MetroTRK/trk.h"

TRKBuffer gTRKMsgBufs[3];

/*
 * --INFO--
 * Address:	8021C4CC
 * Size:	000008
 */
static void TRKSetBufferUsed(TRKBuffer* msg, BOOL state)
{
	msg->isInUse = state;
}

/*
 * --INFO--
 * Address:	8021C4D4
 * Size:	000078
 */
DSError TRKInitializeMessageBuffers(void)
{
	int i;
	for (i = 0; i < 3; i++) {
		TRKInitializeMutex(&gTRKMsgBufs[i]);
		TRKAcquireMutex(&gTRKMsgBufs[i]);
		TRKSetBufferUsed(&gTRKMsgBufs[i], FALSE);
		TRKReleaseMutex(&gTRKMsgBufs[i]);
	}

	return DS_NoError;
}

/*
 * --INFO--
 * Address:	8021C54C
 * Size:	00009C
 */
DSError TRKGetFreeBuffer(int* msgID, TRKBuffer** outMsg)
{
	DSError error = DS_NoMessageBufferAvailable;
	int i;
	*outMsg = NULL;

	for (i = 0; i < 3; i++) {
		TRKBuffer* buf = TRKGetBuffer(i);

		TRKAcquireMutex(buf);
		if (!buf->isInUse) {
			TRKResetBuffer(buf, 1);
			TRKSetBufferUsed(buf, TRUE);
			error   = DS_NoError;
			*outMsg = buf;
			*msgID  = i;
			i       = 3; // why not break? weird choice
		}
		TRKReleaseMutex(buf);
	}

	return error;
}

/*
 * --INFO--
 * Address:	8021C5E8
 * Size:	00002C
 */
void* TRKGetBuffer(int idx)
{
	TRKBuffer* buf = NULL;
	if (idx >= 0 && idx < 3) {
		buf = &gTRKMsgBufs[idx];
	}

	return buf;
}

/*
 * --INFO--
 * Address:	8021C614
 * Size:	000068
 */
void TRKReleaseBuffer(int idx)
{
	TRKBuffer* msg;
	if (idx != -1 && idx >= 0 && idx < 3) {
		msg = &gTRKMsgBufs[idx];
		TRKAcquireMutex(msg);
		TRKSetBufferUsed(msg, FALSE);
		TRKReleaseMutex(msg);
	}
}

/*
 * --INFO--
 * Address:	8021C67C
 * Size:	000040
 */
void TRKResetBuffer(TRKBuffer* msg, u8 keepData)
{
	msg->length   = 0;
	msg->position = 0;

	if (!keepData) {
		TRK_memset(msg->data, 0, TRKMSGBUF_SIZE);
	}
}

/*
 * --INFO--
 * Address:	8021C6BC
 * Size:	000030
 */
DSError TRKSetBufferPosition(TRKBuffer* msg, u32 pos)
{
	DSError error = DS_NoError;

	if (pos > 0x880) {
		error = DS_MessageBufferOverflow;
	} else {
		msg->position = pos;
		// If the new position is past the current length,
		// update the length
		if (pos > msg->length) {
			msg->length = pos;
		}
	}

	return error;
}

/*
 * --INFO--
 * Address:	8021C6EC
 * Size:	0000A4
 */
#pragma dont_inline on
DSError TRKAppendBuffer(TRKBuffer* msg, const void* data, size_t length)
{
	DSError error = DS_NoError; // r31
	u32 bytesLeft;

	// Return if no bytes to append
	if (length == 0) {
		return DS_NoError;
	}

	bytesLeft = 0x880 - msg->position;

	// If there isn't enough space left in the buffer, change the number
	// of bytes to append to the remaning number of bytes
	if (bytesLeft < length) {
		error  = DS_MessageBufferOverflow;
		length = bytesLeft;
	}

	if (length == 1) {
		// If the length of bytes to append is 1, just copy the byte over
		msg->data[msg->position] = ((u8*)data)[0];
	} else {
		// Otherwise, use memcpy
		TRK_memcpy(msg->data + msg->position, data, length);
	}

	// Update the position and length
	msg->position += length;
	msg->length = msg->position;

	return error;
}
#pragma dont_inline reset

/*
 * --INFO--
 * Address:	8021C790
 * Size:	00008C
 */
DSError TRKReadBuffer(TRKBuffer* msg, void* data, size_t length)
{
	DSError error = DS_NoError;
	unsigned int bytesLeft; // this has to be unsigned int not u32 to match lmfao.

	// Return if no bytes to read
	if (length == 0) {
		return DS_NoError;
	}

	bytesLeft = msg->length - msg->position;

	// If the number of bytes to read exceeds the buffer length, change
	// the length to the remaining number of bytes
	if (length > bytesLeft) {
		error  = DS_MessageBufferReadError;
		length = bytesLeft;
	}

	TRK_memcpy(data, msg->data + msg->position, length);
	msg->position += length;
	return error;
}

/*
 * --INFO--
 * Address:	8021C81C
 * Size:	000054
 */
DSError TRKAppendBuffer1_ui16(TRKBuffer* buffer, const u16 data)
{
	u8* bigEndianData;
	u8* byteData;
	u8 swapBuffer[sizeof(data)];

	if (gTRKBigEndian) {
		bigEndianData = (u8*)&data;
	} else {
		byteData      = (u8*)&data;
		bigEndianData = swapBuffer;

		bigEndianData[0] = byteData[1];
		bigEndianData[1] = byteData[0];
	}

	return TRKAppendBuffer(buffer, (const void*)bigEndianData, sizeof(data));
}

/*
 * --INFO--
 * Address:	8021C870
 * Size:	000064
 */
DSError TRKAppendBuffer1_ui32(TRKBuffer* buffer, const u32 data)
{
	u8* bigEndianData;
	u8* byteData;
	u8 swapBuffer[sizeof(data)];

	if (gTRKBigEndian) {
		bigEndianData = (u8*)&data;
	} else {
		byteData      = (u8*)&data;
		bigEndianData = swapBuffer;

		bigEndianData[0] = byteData[3];
		bigEndianData[1] = byteData[2];
		bigEndianData[2] = byteData[1];
		bigEndianData[3] = byteData[0];
	}

	return TRKAppendBuffer(buffer, (const void*)bigEndianData, sizeof(data));
}
/*
 * --INFO--
 * Address:	8021C8D4
 * Size:	000088
 */
DSError TRKAppendBuffer1_ui64(TRKBuffer* buffer, const u64 data)
{
	u8* bigEndianData;
	u8* byteData;
	u8 swapBuffer[sizeof(data)];
	if (gTRKBigEndian) {
		bigEndianData = (u8*)&data;
	} else {
		byteData      = (u8*)&data;
		bigEndianData = swapBuffer;

		bigEndianData[0] = byteData[7];
		bigEndianData[1] = byteData[6];
		bigEndianData[2] = byteData[5];
		bigEndianData[3] = byteData[4];
		bigEndianData[4] = byteData[3];
		bigEndianData[5] = byteData[2];
		bigEndianData[6] = byteData[1];
		bigEndianData[7] = byteData[0];
	}

	return TRKAppendBuffer(buffer, (const void*)bigEndianData, sizeof(data));
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000C4
 */
void TRKAppendBuffer1_ui128(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	8021C95C
 * Size:	000068
 */
DSError TRKAppendBuffer_ui8(TRKBuffer* buffer, const u8* data, int count)
{
	DSError err;
	int i;

	for (i = 0, err = DS_NoError; err == DS_NoError && i < count; i++) {
		err = TRKAppendBuffer1_ui8(buffer, data[i]);
	}

	return err;
}

/*
 * --INFO--
 * Address:	........
 * Size:	00007C
 */
void TRKAppendBuffer_ui16(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	8021C9C4
 * Size:	00007C
 */
DSError TRKAppendBuffer_ui32(TRKBuffer* buffer, const u32* data, int count)
{
	DSError err;
	int i;

	for (i = 0, err = DS_NoError; err == DS_NoError && i < count; i++) {
		err = TRKAppendBuffer1_ui32(buffer, data[i]);
	}

	return err;
}

/*
 * --INFO--
 * Address:	........
 * Size:	000080
 */
void TRKAppendBuffer_ui64(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	00007C
 */
void TRKAppendBuffer_ui128(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	8021CA40
 * Size:	000024
 */
DSError TRKReadBuffer1_ui8(TRKBuffer* buffer, u8* data)
{
	return TRKReadBuffer(buffer, (void*)data, 1);
}

/*
 * --INFO--
 * Address:	8021CA64
 * Size:	000080
 */
DSError TRKReadBuffer1_ui16(TRKBuffer* buffer, u16* data)
{
	DSError err;

	u8* bigEndianData;
	u8* byteData;
	u8 swapBuffer[sizeof(data)];

	if (gTRKBigEndian) {
		bigEndianData = (u8*)data;
	} else {
		bigEndianData = swapBuffer;
	}

	err = TRKReadBuffer(buffer, (void*)bigEndianData, sizeof(*data));

	if (!gTRKBigEndian && err == DS_NoError) {
		byteData = (u8*)data;

		byteData[0] = bigEndianData[1];
		byteData[1] = bigEndianData[0];
	}

	return err;
}

/*
 * --INFO--
 * Address:	8021CAE4
 * Size:	000090
 */
DSError TRKReadBuffer1_ui32(TRKBuffer* buffer, u32* data)
{
	DSError err;

	u8* bigEndianData;
	u8* byteData;
	u8 swapBuffer[sizeof(data)];

	if (gTRKBigEndian) {
		bigEndianData = (u8*)data;
	} else {
		bigEndianData = swapBuffer;
	}

	err = TRKReadBuffer(buffer, (void*)bigEndianData, sizeof(*data));

	if (!gTRKBigEndian && err == DS_NoError) {
		byteData = (u8*)data;

		byteData[0] = bigEndianData[3];
		byteData[1] = bigEndianData[2];
		byteData[2] = bigEndianData[1];
		byteData[3] = bigEndianData[0];
	}

	return err;
}

/*
 * --INFO--
 * Address:	8021CB74
 * Size:	0000B0
 */
DSError TRKReadBuffer1_ui64(TRKBuffer* buffer, u64* data)
{
	DSError err;

	u8* bigEndianData;
	u8* byteData;
	u8 swapBuffer[sizeof(data)];

	if (gTRKBigEndian) {
		bigEndianData = (u8*)data;
	} else {
		bigEndianData = swapBuffer;
	}

	err = TRKReadBuffer(buffer, (void*)bigEndianData, sizeof(*data));

	if (!gTRKBigEndian && err == 0) {
		byteData = (u8*)data;

		byteData[0] = bigEndianData[7];
		byteData[1] = bigEndianData[6];
		byteData[2] = bigEndianData[5];
		byteData[3] = bigEndianData[4];
		byteData[4] = bigEndianData[3];
		byteData[5] = bigEndianData[2];
		byteData[6] = bigEndianData[1];
		byteData[7] = bigEndianData[0];
	}

	return err;
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000F0
 */
void TRKReadBuffer1_ui128(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	8021CC24
 * Size:	000074
 */
DSError TRKReadBuffer_ui8(TRKBuffer* buffer, u8* data, int count)
{
	DSError err;
	int i;

	for (i = 0, err = DS_NoError; err == DS_NoError && i < count; i++) {
		err = TRKReadBuffer1_ui8(buffer, &(data[i]));
	}

	return err;
}

/*
 * --INFO--
 * Address:	........
 * Size:	00007C
 */
void TRKReadBuffer_ui16(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	8021CC98
 * Size:	00007C
 */
DSError TRKReadBuffer_ui32(TRKBuffer* buffer, u32* data, int count)
{
	DSError err;
	s32 i;

	for (i = 0, err = DS_NoError; err == DS_NoError && i < count; i++) {
		err = TRKReadBuffer1_ui32(buffer, &(data[i]));
	}

	return err;
}

/*
 * --INFO--
 * Address:	........
 * Size:	00007C
 */
void TRKReadBuffer_ui64(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	00007C
 */
void TRKReadBuffer_ui128(void)
{
	// UNUSED FUNCTION
}
