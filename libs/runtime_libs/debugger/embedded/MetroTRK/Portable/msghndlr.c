#include "PowerPC_EABI_Support/MetroTRK/trk.h"

typedef struct _TRK_Msg {
	u8 _00[8];
	u32 m_msgLength;
	u32 _0C;
	u8 m_msg[4]; // TODO: unknown array length
} TRK_Msg;

/*
 * --INFO--
 * Address:	8021CF78
 * Size:	000098
 */
void TRKMessageIntoReply(TRKBuffer* buffer, MessageCommandID ackCmd, DSReplyError errSentInAck)
{
	TRKResetBuffer(buffer, 1);

	TRKAppendBuffer1_ui8(buffer, ackCmd);
	TRKAppendBuffer1_ui8(buffer, errSentInAck);
}

/*
 * --INFO--
 * Address:	8021D010
 * Size:	000050
 */
DSError TRKSendACK(TRKBuffer* buffer)
{
	DSError err;
	int ackTries;

	ackTries = 3;
	do {
		err = TRKMessageSend(buffer);
		--ackTries;
	} while (err != DS_NoError && ackTries > 0);

	return err;
}

/*
 * --INFO--
 * Address:	8021D060
 * Size:	000034
 */
DSError TRKStandardACK(TRKBuffer* buffer, MessageCommandID commandID, DSReplyError replyError)
{
	TRKMessageIntoReply(buffer, commandID, replyError);
	return TRKSendACK(buffer);
}

/*
 * --INFO--
 * Address:	........
 * Size:	000008
 */
void TRKDoError(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	8021D094
 * Size:	000028
 */
DSError TRKDoUnsupported(TRKBuffer* buffer)
{
	return TRKStandardACK(buffer, DSMSG_ReplyACK, DSREPLY_UnsupportedCommandError);
}

/*
 * --INFO--
 * Address:	8021D0BC
 * Size:	000028
 */
DSError TRKDoConnect(TRKBuffer* buffer)
{
	return TRKStandardACK(buffer, DSMSG_ReplyACK, DSREPLY_NoError);
}

/*
 * --INFO--
 * Address:	8021D0E4
 * Size:	000050
 */
DSError TRKDoDisconnect(TRKBuffer* buffer)
{
	DSError error = TRKStandardACK(buffer, DSMSG_ReplyACK, DSREPLY_NoError);
	TRKEvent event;

	if (error == DS_NoError) {
		TRKConstructEvent(&event, 1);
		TRKPostEvent(&event);
	}
	return error;
}

/*
 * --INFO--
 * Address:	8021D134
 * Size:	000030
 */
DSError TRKDoReset(TRKBuffer* buffer)
{
	TRKStandardACK(buffer, DSMSG_ReplyACK, DSREPLY_NoError);
	__TRK_reset();
	return DS_NoError;
}

/*
 * --INFO--
 * Address:	8021D164
 * Size:	000184
 */
DSError TRKDoVersions(TRKBuffer* buffer)
{
	DSError error;
	DSVersions versions;

	if (buffer->length != 1) {
		error = TRKStandardACK(buffer, DSMSG_ReplyACK, DSREPLY_PacketSizeError);
	} else {
		TRKMessageIntoReply(buffer, DSMSG_ReplyACK, DSREPLY_NoError);
		error = TRKTargetVersions(&versions);

		if (error == DS_NoError)
			error = TRKAppendBuffer1_ui8(buffer, versions.kernelMajor);
		if (error == DS_NoError)
			error = TRKAppendBuffer1_ui8(buffer, versions.kernelMinor);
		if (error == DS_NoError)
			error = TRKAppendBuffer1_ui8(buffer, versions.protocolMajor);
		if (error == DS_NoError)
			error = TRKAppendBuffer1_ui8(buffer, versions.protocolMinor);

		if (error != DS_NoError)
			error = TRKStandardACK(buffer, DSMSG_ReplyACK, DSREPLY_CWDSError);
		else
			error = TRKSendACK(buffer);
	}
}

/*
 * --INFO--
 * Address:	8021D2E8
 * Size:	0000DC
 */
DSError TRKDoSupportMask(TRKBuffer* buffer)
{
	DSError error;
	u8 mask[32];

	if (buffer->length != 1) {
		TRKStandardACK(buffer, DSMSG_ReplyACK, DSREPLY_PacketSizeError);
	} else {
		TRKMessageIntoReply(buffer, DSMSG_ReplyACK, DSREPLY_NoError);
		error = TRKTargetSupportMask(mask);

		if (error == DS_NoError)
			error = TRKAppendBuffer(buffer, mask, 32);
		if (error == DS_NoError)
			error = TRKAppendBuffer1_ui8(buffer, 2);

		if (error != DS_NoError)
			TRKStandardACK(buffer, DSMSG_ReplyACK, DSREPLY_CWDSError);
		else
			TRKSendACK(buffer);
	}
}

/*
 * --INFO--
 * Address:	8021D3C4
 * Size:	000244
 */
DSError TRKDoCPUType(TRKBuffer* buffer)
{
	DSError error;
	DSCPUType cputype;

	if (buffer->length != 1) {
		error = TRKStandardACK(buffer, DSMSG_ReplyACK, DSREPLY_PacketSizeError);
		return;
	}

	TRKMessageIntoReply(buffer, DSMSG_ReplyACK, DSREPLY_NoError);

	error = TRKTargetCPUType(&cputype);

	if (error == DS_NoError)
		error = TRKAppendBuffer1_ui8(buffer, cputype.cpuMajor);
	if (error == DS_NoError)
		error = TRKAppendBuffer1_ui8(buffer, cputype.cpuMinor);
	if (error == DS_NoError)
		error = TRKAppendBuffer1_ui8(buffer, cputype.bigEndian);
	if (error == DS_NoError)
		error = TRKAppendBuffer1_ui8(buffer, cputype.defaultTypeSize);
	if (error == DS_NoError)
		error = TRKAppendBuffer1_ui8(buffer, cputype.fpTypeSize);
	if (error == DS_NoError)
		error = TRKAppendBuffer1_ui8(buffer, cputype.extended1TypeSize);
	if (error == DS_NoError)
		error = TRKAppendBuffer1_ui8(buffer, cputype.extended2TypeSize);

	if (error != DS_NoError)
		error = TRKStandardACK(buffer, DSMSG_ReplyACK, DSREPLY_CWDSError);
	else
		error = TRKSendACK(buffer);
}

/*
 * --INFO--
 * Address:	8021D608
 * Size:	0001E8
 */
DSError TRKDoReadMemory(TRKBuffer* buffer)
{
	u8 tempBuf[0x800] ATTRIBUTE_ALIGN(32);
	u32 length;
	u32 msg_start;
	u16 msg_length;
	u8 msg_options;
	u8 msg_command;
	DSReplyError replyError;
	DSError error;

	if (buffer->length != 8) {
		error = TRKStandardACK(buffer, DSMSG_ReplyACK, DSREPLY_PacketSizeError);
		return error;
	}

	TRKSetBufferPosition(buffer, DSREPLY_NoError);
	error = TRKReadBuffer1_ui8(buffer, &msg_command);
	if (error == DS_NoError)
		error = TRKReadBuffer1_ui8(buffer, &msg_options);

	if (error == DS_NoError)
		error = TRKReadBuffer1_ui16(buffer, &msg_length);

	if (error == DS_NoError)
		error = TRKReadBuffer1_ui32(buffer, &msg_start);

	if (msg_options & 2) {
		error = TRKStandardACK(buffer, DSMSG_ReplyACK, DSREPLY_UnsupportedOptionError);
		return error;
	}

	if (msg_length > 0x800) {
		error = TRKStandardACK(buffer, DSMSG_ReplyACK, DSREPLY_ParameterError);
		return error;
	}

	TRKMessageIntoReply(buffer, DSMSG_ReplyACK, DSREPLY_NoError);

	if (error == DS_NoError) {
		length = (u32)msg_length;
		error  = TRKTargetAccessMemory(tempBuf, msg_start, &length, (msg_options & 8) ? MEMACCESS_UserMemory : MEMACCESS_DebuggerMemory, 1);
		msg_length = (u16)length;
		if (error == DS_NoError)
			error = TRKAppendBuffer1_ui16(buffer, msg_length);
		if (error == DS_NoError)
			error = TRKAppendBuffer(buffer, tempBuf, length);
	}

	if (error != DS_NoError) {
		switch (error) {
		case DS_CWDSException:
			replyError = DSREPLY_CWDSException;
			break;
		case DS_InvalidMemory:
			replyError = DSREPLY_InvalidMemoryRange;
			break;
		case DS_InvalidProcessID:
			replyError = DSREPLY_InvalidProcessID;
			break;
		case DS_InvalidThreadID:
			replyError = DSREPLY_InvalidThreadID;
			break;
		case DS_OSError:
			replyError = DSREPLY_OSError;
			break;
		default:
			replyError = DSREPLY_CWDSError;
			break;
		}
		error = TRKStandardACK(buffer, DSMSG_ReplyACK, replyError);
	} else {
		error = TRKSendACK(buffer);
	}

	return error;
}

/*
 * --INFO--
 * Address:	8021D7F0
 * Size:	0001FC
 */
DSError TRKDoWriteMemory(TRKBuffer* buffer)
{
	u8 tmpBuffer[0x800] ATTRIBUTE_ALIGN(32);
	u32 length;
	u32 msg_start;
	u16 msg_length;
	u8 msg_options;
	u8 msg_command;
	DSReplyError replyError;
	DSError error;

	if (buffer->length <= 8) {
		error = TRKStandardACK(buffer, DSMSG_ReplyACK, DSREPLY_PacketSizeError);
		return error;
	}

	TRKSetBufferPosition(buffer, DSREPLY_NoError);
	error = TRKReadBuffer1_ui8(buffer, &msg_command);
	if (error == DS_NoError)
		error = TRKReadBuffer1_ui8(buffer, &msg_options);

	if (error == DS_NoError)
		error = TRKReadBuffer1_ui16(buffer, &msg_length);

	if (error == DS_NoError)
		error = TRKReadBuffer1_ui32(buffer, &msg_start);

	if (msg_options & 2) {
		error = TRKStandardACK(buffer, DSMSG_ReplyACK, DSREPLY_UnsupportedOptionError);
		return error;
	}

	if ((buffer->length != msg_length + 8) || (msg_length > 0x800)) {
		error = TRKStandardACK(buffer, DSMSG_ReplyACK, DSREPLY_ParameterError);
	} else {
		if (error == DS_NoError) {
			length = (u32)msg_length;
			error  = TRKReadBuffer(buffer, tmpBuffer, length);
			if (error == DS_NoError) {
				error = TRKTargetAccessMemory(tmpBuffer, msg_start, &length,
				                              (msg_options & 8) ? MEMACCESS_UserMemory : MEMACCESS_DebuggerMemory, FALSE);
			}
			msg_length = (u16)length;
		}

		if (error == DS_NoError)
			TRKMessageIntoReply(buffer, DSMSG_ReplyACK, DSREPLY_NoError);

		if (error == DS_NoError)
			error = TRKAppendBuffer1_ui16(buffer, msg_length);

		if (error != DS_NoError) {
			switch (error) {
			case DS_CWDSException:
				replyError = DSREPLY_CWDSException;
				break;
			case DS_InvalidMemory:
				replyError = DSREPLY_InvalidMemoryRange;
				break;
			case DS_InvalidProcessID:
				replyError = DSREPLY_InvalidProcessID;
				break;
			case DS_InvalidThreadID:
				replyError = DSREPLY_InvalidThreadID;
				break;
			case DS_OSError:
				replyError = DSREPLY_OSError;
				break;
			default:
				replyError = DSREPLY_CWDSError;
				break;
			}
			error = TRKStandardACK(buffer, DSMSG_ReplyACK, replyError);
		} else {
			error = TRKSendACK(buffer);
		}
	}

	return error;
}

/*
 * --INFO--
 * Address:	8021D9EC
 * Size:	000204
 */
DSError TRKDoReadRegisters(TRKBuffer* buffer)
{
	DSMessageRegisterOptions options;
	u32 registerDataLength;
	u16 msg_lastRegister;
	u16 msg_firstRegister;
	u8 msg_options;
	u8 msg_command;
	DSError error;
	DSReplyError replyError;

	if (buffer->length != 6) {
		error = TRKStandardACK(buffer, DSMSG_ReplyACK, DSREPLY_PacketSizeError);
		return;
	}
	TRKSetBufferPosition(buffer, DSREPLY_NoError);
	error = TRKReadBuffer1_ui8(buffer, &msg_command);
	if (error == DS_NoError)
		error = TRKReadBuffer1_ui8(buffer, &msg_options);

	if (error == DS_NoError)
		error = TRKReadBuffer1_ui16(buffer, &msg_firstRegister);

	if (error == DS_NoError)
		error = TRKReadBuffer1_ui16(buffer, &msg_lastRegister);

	if (msg_firstRegister > msg_lastRegister) {
		error = TRKStandardACK(buffer, DSMSG_ReplyACK, DSREPLY_InvalidRegisterRange);
		return;
	}

	if (error == DS_NoError)
		TRKMessageIntoReply(buffer, DSMSG_ReplyACK, DSREPLY_NoError);

	options = (DSMessageRegisterOptions)(msg_options & 7);
	switch (options) {
	case DSREG_Default:
		error = TRKTargetAccessDefault(msg_firstRegister, msg_lastRegister, buffer, &registerDataLength, TRUE);
		break;
	case DSREG_FP:
		error = TRKTargetAccessFP(msg_firstRegister, msg_lastRegister, buffer, &registerDataLength, TRUE);
		break;
	case DSREG_Extended1:
		error = TRKTargetAccessExtended1(msg_firstRegister, msg_lastRegister, buffer, &registerDataLength, TRUE);
		break;
	case DSREG_Extended2:
		error = TRKTargetAccessExtended2(msg_firstRegister, msg_lastRegister, buffer, &registerDataLength, TRUE);
		break;
	default:
		error = DS_UnsupportedError;
		break;
	}

	if (error != DS_NoError) {
		switch (error) {
		case DS_UnsupportedError:
			replyError = DSREPLY_UnsupportedOptionError;
			break;
		case DS_InvalidRegister:
			replyError = DSREPLY_InvalidRegisterRange;
			break;
		case DS_CWDSException:
			replyError = DSREPLY_CWDSException;
			break;
		case DS_InvalidProcessID:
			replyError = DSREPLY_InvalidProcessID;
			break;
		case DS_InvalidThreadID:
			replyError = DSREPLY_InvalidThreadID;
			break;
		case DS_OSError:
			replyError = DSREPLY_OSError;
			break;
		default:
			replyError = DSREPLY_CWDSError;
		}

		error = TRKStandardACK(buffer, DSMSG_ReplyACK, replyError);
	} else {
		error = TRKSendACK(buffer);
	}
}

/*
 * --INFO--
 * Address:	8021DBF0
 * Size:	000208
 */
DSError TRKDoWriteRegisters(TRKBuffer* buffer)
{
	DSMessageRegisterOptions options;
	u32 registerDataLength;
	u16 msg_lastRegister;
	u16 msg_firstRegister;
	u8 msg_options;
	u8 msg_command;
	DSError error;
	DSReplyError replyError;

	if (buffer->length <= 6) {
		error = TRKStandardACK(buffer, DSMSG_ReplyACK, DSREPLY_PacketSizeError);
		return;
	}
	TRKSetBufferPosition(buffer, DSREPLY_NoError);
	error = TRKReadBuffer1_ui8(buffer, &msg_command);
	if (error == DS_NoError)
		error = TRKReadBuffer1_ui8(buffer, &msg_options);

	if (error == DS_NoError)
		error = TRKReadBuffer1_ui16(buffer, &msg_firstRegister);

	if (error == DS_NoError)
		error = TRKReadBuffer1_ui16(buffer, &msg_lastRegister);

	if (msg_firstRegister > msg_lastRegister) {
		error = TRKStandardACK(buffer, DSMSG_ReplyACK, DSREPLY_InvalidRegisterRange);
		return;
	}

	options = (DSMessageRegisterOptions)msg_options;
	switch (options) {
	case DSREG_Default:
		error = TRKTargetAccessDefault(msg_firstRegister, msg_lastRegister, buffer, &registerDataLength, FALSE);
		break;
	case DSREG_FP:
		error = TRKTargetAccessFP(msg_firstRegister, msg_lastRegister, buffer, &registerDataLength, FALSE);
		break;
	case DSREG_Extended1:
		error = TRKTargetAccessExtended1(msg_firstRegister, msg_lastRegister, buffer, &registerDataLength, FALSE);
		break;
	case DSREG_Extended2:
		error = TRKTargetAccessExtended2(msg_firstRegister, msg_lastRegister, buffer, &registerDataLength, FALSE);
		break;
	default:
		error = DS_UnsupportedError;
		break;
	}

	if (error == DS_NoError)
		TRKMessageIntoReply(buffer, DSMSG_ReplyACK, DSREPLY_NoError);

	if (error != DS_NoError) {
		switch (error) {
		case DS_UnsupportedError:
			replyError = DSREPLY_UnsupportedOptionError;
			break;
		case DS_InvalidRegister:
			replyError = DSREPLY_InvalidRegisterRange;
			break;
		case DS_MessageBufferReadError:
			replyError = DSREPLY_PacketSizeError;
			break;
		case DS_CWDSException:
			replyError = DSREPLY_CWDSException;
			break;
		case DS_InvalidProcessID:
			replyError = DSREPLY_InvalidProcessID;
			break;
		case DS_InvalidThreadID:
			replyError = DSREPLY_InvalidThreadID;
			break;
		case DS_OSError:
			replyError = DSREPLY_OSError;
			break;
		default:
			replyError = DSREPLY_CWDSError;
		}

		error = TRKStandardACK(buffer, DSMSG_ReplyACK, replyError);
	} else {
		error = TRKSendACK(buffer);
	}
}

/*
 * --INFO--
 * Address:	8021DDF8
 * Size:	000138
 */
DSError TRKDoFlushCache(TRKBuffer* buffer)
{
	u32 msg_end;
	u32 msg_start;
	u8 msg_options;
	u8 msg_command;
	DSError error;
	DSReplyError replyErr;

	if (buffer->length != 10) {
		error = TRKStandardACK(buffer, DSMSG_ReplyACK, DSREPLY_PacketSizeError);
		return;
	}

	TRKSetBufferPosition(buffer, DSREPLY_NoError);
	error = TRKReadBuffer1_ui8(buffer, &msg_command);
	if (error == DS_NoError)
		error = TRKReadBuffer1_ui8(buffer, &msg_options);
	if (error == DS_NoError)
		error = TRKReadBuffer1_ui32(buffer, &msg_start);
	if (error == DS_NoError)
		error = TRKReadBuffer1_ui32(buffer, &msg_end);

	if (msg_start > msg_end) {
		error = TRKStandardACK(buffer, DSMSG_ReplyACK, DSREPLY_InvalidMemoryRange);
		return;
	}

	if (error == DS_NoError)
		error = TRKTargetFlushCache(msg_options, (void*)msg_start, (void*)msg_end);

	if (error == DS_NoError)
		TRKMessageIntoReply(buffer, DSMSG_ReplyACK, DSREPLY_NoError);

	if (error != DS_NoError) {
		switch (error) {
		case DS_UnsupportedError:
			replyErr = DSREPLY_UnsupportedOptionError;
			break;
		default:
			replyErr = DSREPLY_CWDSError;
			break;
		}

		error = TRKStandardACK(buffer, DSMSG_ReplyACK, replyErr);
	} else {
		error = TRKSendACK(buffer);
	}
}

/*
 * --INFO--
 * Address:	8021DF30
 * Size:	000064
 */
DSError TRKDoContinue(TRKBuffer* buffer)
{
	DSError error;

	error = TRKTargetStopped();
	if (error == DS_NoError) {
		error = TRKStandardACK(buffer, DSMSG_ReplyACK, DSREPLY_NotStopped);
		return;
	}

	error = TRKStandardACK(buffer, DSMSG_ReplyACK, DSREPLY_NoError);
	if (error == DS_NoError)
		error = TRKTargetContinue();
}

/*
 * --INFO--
 * Address:	8021DF94
 * Size:	000204
 */
DSError TRKDoStep(TRKBuffer* buffer)
{
	DSError error;
	u32 msg_rangeEnd;
	u32 msg_rangeStart;
	u8 msg_count;
	u8 msg_options;
	u8 msg_command;
	u32 pc;

	if (buffer->length < 3) {
		TRKStandardACK(buffer, DSMSG_ReplyACK, DSREPLY_PacketSizeError);
		return;
	}

	TRKSetBufferPosition(buffer, DSREPLY_NoError);

	error = TRKReadBuffer1_ui8(buffer, &msg_command);
	if (error == DS_NoError)
		error = TRKReadBuffer1_ui8(buffer, &msg_options);

	switch (msg_options) {
	case DSSTEP_IntoCount:
	case DSSTEP_OverCount:
		if (error == DS_NoError)
			TRKReadBuffer1_ui8(buffer, &msg_count);
		if (msg_count >= 1) {
			break;
		}
		TRKStandardACK(buffer, DSMSG_ReplyACK, DSREPLY_ParameterError);
		return;
	case DSSTEP_IntoRange:
	case DSSTEP_OverRange:
		if (buffer->length != 10) {
			TRKStandardACK(buffer, DSMSG_ReplyACK, DSREPLY_PacketSizeError);
			return;
		}

		if (error == DS_NoError)
			error = TRKReadBuffer1_ui32(buffer, &msg_rangeStart);
		if (error == DS_NoError)
			error = TRKReadBuffer1_ui32(buffer, &msg_rangeEnd);

		pc = TRKTargetGetPC();
		if (pc >= msg_rangeStart && pc <= msg_rangeEnd) {
			break;
		}
		TRKStandardACK(buffer, DSMSG_ReplyACK, DSREPLY_ParameterError);
		return;
	default:
		TRKStandardACK(buffer, DSMSG_ReplyACK, DSREPLY_UnsupportedOptionError);
		return;
	}

	if (!TRKTargetStopped()) {
		TRKStandardACK(buffer, DSMSG_ReplyACK, DSREPLY_NotStopped);
		return;
	}

	error = TRKStandardACK(buffer, DSMSG_ReplyACK, DSREPLY_NoError);
	if (error == DS_NoError)
		switch (msg_options) {
		case DSSTEP_IntoCount:
		case DSSTEP_OverCount:
			error = TRKTargetSingleStep(msg_count, (msg_options == DSSTEP_OverCount));
			break;
		case DSSTEP_IntoRange:
		case DSSTEP_OverRange:
			error = TRKTargetStepOutOfRange(msg_rangeStart, msg_rangeEnd, (msg_options == DSSTEP_OverRange));
			break;
		}
}

/*
 * --INFO--
 * Address:	8021E198
 * Size:	000084
 */
DSError TRKDoStop(TRKBuffer* b)
{
	DSReplyError replyError;

	switch (TRKTargetStop()) {
	case DS_NoError:
		replyError = DSREPLY_NoError;
		break;
	case DS_InvalidProcessID:
		replyError = DSREPLY_InvalidProcessID;
		break;
	case DS_InvalidThreadID:
		replyError = DSREPLY_InvalidThreadID;
		break;
	case DS_OSError:
		replyError = DSREPLY_OSError;
		break;
	default:
		replyError = DSREPLY_Error;
		break;
	}

	return TRKStandardACK(b, DSMSG_ReplyACK, replyError);
}
