#include "PowerPC_EABI_Support/MetroTRK/trk.h"

typedef struct memRange {
	u8* start;
	u8* end;
	BOOL readable;
	BOOL writeable;
} memRange;

const memRange gTRKMemMap[1] = { { (u8*)0, (u8*)-1, TRUE, TRUE } };

typedef struct StopInfo_PPC {
	u32 PC;
	u32 PCInstruction;
	u16 exceptionID;
} StopInfo_PPC;
typedef struct TRKExceptionStatus {
	StopInfo_PPC exceptionInfo;
	u8 inTRK;
	u8 exceptionDetected;
} TRKExceptionStatus;
typedef struct TRKStepStatus {
	BOOL active;    // 0x0
	u8 type;        // 0x4
	u32 count;      // 0x8
	u32 rangeStart; // 0xC
	u32 rangeEnd;   // 0x10
} TRKStepStatus;

// Instruction macros
#define INSTR_NOP                                0x60000000
#define INSTR_BLR                                0x4E800020
#define DSFetch_u32(_p_)                         (*((u32*)_p_))
#define DSFetch_u64(_p_)                         (*((u64*)_p_))
#define INSTR_PSQ_ST(psr, offset, rDest, w, gqr) (0xF0000000 | (psr << 21) | (rDest << 16) | (w << 15) | (gqr << 12) | offset)
#define INSTR_PSQ_L(psr, offset, rSrc, w, gqr)   (0xE0000000 | (psr << 21) | (rSrc << 16) | (w << 15) | (gqr << 12) | offset)
#define INSTR_STW(rSrc, offset, rDest)           (0x90000000 | (rSrc << 21) | (rDest << 16) | offset)
#define INSTR_LWZ(rDest, offset, rSrc)           (0x80000000 | (rDest << 21) | (rSrc << 16) | offset)
#define INSTR_STFD(fprSrc, offset, rDest)        (0xD8000000 | (fprSrc << 21) | (rDest << 16) | offset)
#define INSTR_LFD(fprDest, offset, rSrc)         (0xC8000000 | (fprDest << 21) | (rSrc << 16) | offset)
#define INSTR_MFSPR(rDest, spr)                  (0x7C000000 | (rDest << 21) | ((spr & 0xFE0) << 6) | ((spr & 0x1F) << 16) | 0x2A6)
#define INSTR_MTSPR(spr, rSrc)                   (0x7C000000 | (rSrc << 21) | ((spr & 0xFE0) << 6) | ((spr & 0x1F) << 16) | 0x3A6)

ProcessorRestoreFlags_PPC gTRKRestoreFlags    = { FALSE, FALSE };
static TRKExceptionStatus gTRKExceptionStatus = { { 0, 0, 0 }, TRUE, 0 };
static TRKStepStatus gTRKStepStatus           = { FALSE, DSSTEP_IntoCount, 0, 0 };
static u16 TRK_saved_exceptionID              = 0;
ProcessorState_PPC gTRKCPUState;
TRKState gTRKState;

typedef unsigned char u128[16];
u128 TRKvalue128_temp;

Default_PPC gTRKSaveState;
void TRKPostInterruptEvent(void);
void TRKExceptionHandler(u16 a);
void TRKUARTInterruptHandler(void);
void TRKInterruptHandlerEnableInterrupts(void);
DSError TRKPPCAccessSPR(void*, u32, BOOL);
DSError TRKPPCAccessPairedSingleRegister(void*, u32, BOOL);
DSError TRKPPCAccessFPRegister(void*, u32, BOOL);
DSError TRKPPCAccessSpecialReg(void*, u32*, BOOL);

static BOOL TRKTargetCheckStep();

/*
 * --INFO--
 * Address:	8021E884
 * Size:	000008
 */
ASM u32 __TRK_get_MSR() {
#ifdef __MWERKS__ // clang-format off
    nofralloc
    mfmsr r3
    blr
#endif // clang-format on
}

/*
 * --INFO--
 * Address:	8021E88C
 * Size:	000008
 */
ASM void __TRK_set_MSR(register u32 msr)
{
#ifdef __MWERKS__ // clang-format off
		nofralloc
		mtmsr msr
		blr
	#endif // clang-format on
}

/*
 * --INFO--
 * Address:	........
 * Size:	000008
 */
void __TRK_get_PVR(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000008
 */
void __TRK_get_IBAT0U(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000008
 */
void __TRK_get_IBAT0L(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000008
 */
void __TRK_get_IBAT1U(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000008
 */
void __TRK_get_IBAT1L(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000008
 */
void __TRK_get_IBAT2U(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000008
 */
void __TRK_get_IBAT2L(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000008
 */
void __TRK_get_IBAT3U(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000008
 */
void __TRK_get_IBAT3L(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000008
 */
void __TRK_get_DBAT0U(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000008
 */
void __TRK_get_DBAT0L(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000008
 */
void __TRK_get_DBAT1U(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000008
 */
void __TRK_get_DBAT1L(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000008
 */
void __TRK_get_DBAT2U(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000008
 */
void __TRK_get_DBAT2L(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000008
 */
void __TRK_get_DBAT3U(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000008
 */
void __TRK_get_DBAT3L(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	8021E894
 * Size:	000138
 */
DSError TRKValidMemory32(const void* addr, size_t length, ValidMemoryOptions readWriteable)
{
	DSError err = DS_InvalidMemory; /* assume range is invalid */

	const u8* start;
	const u8* end;

	int i;

	/*
	** Get start and end addresses for the memory range and
	** verify that they are reasonable.
	*/

	start = (const u8*)addr;
	end   = ((const u8*)addr + (length - 1));

	if (end < start)
		return DS_InvalidMemory;

	/*
	** Iterate through the gTRKMemMap array to determine if the requested
	** range falls within the valid ranges in the map.
	*/

	for (i = 0; (i < (s32)(sizeof(gTRKMemMap) / sizeof(memRange))); i++) {
		/*
		** If the requested range is not completely above
		** the valid range AND it is not completely below
		** the valid range then it must overlap somewhere.
		** If the requested range overlaps with one of the
		** valid ranges, do some additional checking.
		**
		*/

		if ((start <= (const u8*)gTRKMemMap[i].end) && (end >= (const u8*)gTRKMemMap[i].start)) {
			/*
			** First, verify that the read/write attributes are
			** acceptable.  If so, then recursively check any
			** part of the requested range that falls before or
			** after the valid range.
			*/

			if ((((u8)readWriteable == VALIDMEM_Readable) && !gTRKMemMap[i].readable)
			    || (((u8)readWriteable == VALIDMEM_Writeable) && !gTRKMemMap[i].writeable)) {
				err = DS_InvalidMemory;
			} else {
				err = DS_NoError;

				/*
				** If a portion of the requested range falls before
				** the current valid range, then recursively
				** check it.
				*/

				if (start < (const u8*)gTRKMemMap[i].start)
					err = TRKValidMemory32(start, (u32)((const u8*)gTRKMemMap[i].start - start), readWriteable);

				/*
				** If a portion of the requested range falls after
				** the current valid range, then recursively
				** check it.
				** Note: Only do this step if the previous check
				** did not detect invalid access.
				*/

				if ((err == DS_NoError) && (end > (const u8*)gTRKMemMap[i].end))
					err = TRKValidMemory32((const u8*)gTRKMemMap[i].end, (u32)(end - (const u8*)gTRKMemMap[i].end), readWriteable);
			}

			break;
		}
	}

	return err;
}

/*
 * --INFO--
 * Address:	8021E9CC
 * Size:	00003C
 */
static ASM void TRK_ppc_memcpy(register void* dest, register const void* src, register int n, register u32 param_4, register u32 param_5) {
#ifdef __MWERKS__ // clang-format off
#define msr        r8
#define byte    r9
#define count    r10
nofralloc

mfmsr msr
li count, 0

top_loop:
cmpw count, n
beq out_loop

mtmsr param_5
sync

lbzx byte, count, src

mtmsr param_4
sync

stbx byte, count, dest

addi count, count, 1

b top_loop
out_loop:
mtmsr msr
sync

blr
#undef count
#undef byte
#undef msr
#endif // clang-format on
}

/*
 * --INFO--
 * Address:	8021EA08
 * Size:	000164
 */
DSError TRKTargetAccessMemory(void* data, u32 start, size_t* length, MemoryAccessOptions accessOptions, BOOL read)
{
	DSError error;
	u32 target_msr;
	void* addr;
	u32 trk_msr;
	TRKExceptionStatus tempExceptionStatus = gTRKExceptionStatus;
	gTRKExceptionStatus.exceptionDetected  = FALSE;

	addr  = (void*)TRKTargetTranslate(start);
	error = TRKValidMemory32(addr, *length, read ? VALIDMEM_Readable : VALIDMEM_Writeable);

	if (error != DS_NoError) {
		*length = 0;
	} else {
		target_msr = __TRK_get_MSR();
		trk_msr    = target_msr | gTRKCPUState.Extended1.MSR & 0x10;

		if (read) {
			TRK_ppc_memcpy(data, addr, *length, target_msr, trk_msr);
		} else {
			TRK_ppc_memcpy(addr, data, *length, trk_msr, target_msr);
			TRK_flush_cache(addr, *length);
			if ((void*)start != addr) {
				TRK_flush_cache((void*)start, *length);
			}
		}
	}

	if (gTRKExceptionStatus.exceptionDetected) {
		*length = 0;
		error   = DS_CWDSException;
	}

	gTRKExceptionStatus = tempExceptionStatus;
	return error;
}

/*
 * --INFO--
 * Address:	8021EB6C
 * Size:	00004C
 */
DSError TRKTargetReadInstruction(void* data, u32 start)
{
	DSError error;
	size_t registersLength = 4;

	error = TRKTargetAccessMemory(data, start, &registersLength, MEMACCESS_UserMemory, TRUE);

	if (error == DS_NoError && registersLength != 4) {
		error = DS_InvalidMemory;
	}

	return error;
}

/*
 * --INFO--
 * Address:	8021EBB8
 * Size:	0000FC
 */
DSError TRKTargetAccessDefault(u32 firstRegister, u32 lastRegister, TRKBuffer* b, size_t* registersLengthPtr, BOOL read)
{
	DSError error;
	u32 count;
	u32* data;
	TRKExceptionStatus tempExceptionStatus;

	if (lastRegister > 0x24) {
		return DS_InvalidRegister;
	}

	tempExceptionStatus = gTRKExceptionStatus;

	gTRKExceptionStatus.exceptionDetected = FALSE;

	data = gTRKCPUState.Default.GPR + firstRegister;

	count = (lastRegister - firstRegister) + 1;

	*registersLengthPtr = count * sizeof(u32);

	if (read) {
		error = TRKAppendBuffer_ui32(b, data, count);
	} else {
		error = TRKReadBuffer_ui32(b, data, count);
	}

	if (gTRKExceptionStatus.exceptionDetected) {
		*registersLengthPtr = 0;
		error               = DS_CWDSException;
	}

	gTRKExceptionStatus = tempExceptionStatus;
	return error;
}

/*
 * --INFO--
 * Address:	8021ECB4
 * Size:	000148
 */
DSError TRKTargetAccessFP(u32 firstRegister, u32 lastRegister, TRKBuffer* b, size_t* registersLengthPtr, BOOL read)
{
	u64 temp;
	DSError error;
	TRKExceptionStatus tempExceptionStatus;
	u32 current;

	if (lastRegister > 0x21) {
		return DS_InvalidRegister;
	}

	tempExceptionStatus                   = gTRKExceptionStatus;
	gTRKExceptionStatus.exceptionDetected = FALSE;

	__TRK_set_MSR(__TRK_get_MSR() | 0x2000);

	*registersLengthPtr = 0;
	error               = DS_NoError;

	for (current = firstRegister; (current <= lastRegister) && (error == DS_NoError); current++, *registersLengthPtr += sizeof(f64)) {
		if (read) {
			TRKPPCAccessFPRegister(&temp, current, read);
			error = TRKAppendBuffer1_ui64(b, temp);
		} else {
			TRKReadBuffer1_ui64(b, &temp);
			error = TRKPPCAccessFPRegister(&temp, current, read);
		}
	}

	if (gTRKExceptionStatus.exceptionDetected) {
		*registersLengthPtr = 0;
		error               = DS_CWDSException;
	}

	gTRKExceptionStatus = tempExceptionStatus;
	return error;
}

/*
 * --INFO--
 * Address:	8021EDFC
 * Size:	000178
 */
DSError TRKTargetAccessExtended1(u32 firstRegister, u32 lastRegister, TRKBuffer* b, size_t* registersLengthPtr, BOOL read)
{
	TRKExceptionStatus tempExceptionStatus;
	int error;
	u32* data;
	int count;

	if (lastRegister > 0x60) {
		return DS_InvalidRegister;
	}

	tempExceptionStatus                   = gTRKExceptionStatus;
	gTRKExceptionStatus.exceptionDetected = FALSE;

	*registersLengthPtr = 0;

	if (firstRegister <= lastRegister) {
		data  = (u32*)&gTRKCPUState.Extended1 + firstRegister;
		count = lastRegister - firstRegister + 1;
		*registersLengthPtr += count * sizeof(u32);

		if (read) {
			error = TRKAppendBuffer_ui32(b, data, count);
		} else {
			if (data <= &gTRKCPUState.Extended1.TBU && (data + count - 1) >= &gTRKCPUState.Extended1.TBL) {
				gTRKRestoreFlags.TBR = 1;
			}

			if (data <= &gTRKCPUState.Extended1.DEC && (data + count - 1) >= &gTRKCPUState.Extended1.DEC) {
				gTRKRestoreFlags.DEC = 1;
			}
			error = TRKReadBuffer_ui32(b, data, count);
		}
	}
	if (gTRKExceptionStatus.exceptionDetected) {
		*registersLengthPtr = 0;
		error               = DS_CWDSException;
	}

	gTRKExceptionStatus = tempExceptionStatus;
	return error;
}

/*
 * --INFO--
 * Address:	8021EF74
 * Size:	00017C
 */
DSError TRKTargetAccessExtended2(u32 firstRegister, u32 lastRegister, TRKBuffer* b, size_t* registerStorageSize, BOOL read)
{
	u32 value_buf[2];
	TRKExceptionStatus savedException;
	u32 i;
	DSError err;
	u32 value_buf0[1];

	if (lastRegister > 0x1f)
		return DS_InvalidRegister;

	/*
	** Save any existing exception status and clear the exception flag.
	** This allows detection of exceptions that occur ONLY within this
	** function.
	*/

	savedException                        = gTRKExceptionStatus;
	gTRKExceptionStatus.exceptionDetected = FALSE;

	TRKPPCAccessSPR(value_buf0, SPR_HID2, TRUE);

	value_buf0[0] |= 0xA0000000;
	TRKPPCAccessSPR(value_buf0, SPR_HID2, FALSE);

	value_buf0[0] = 0;
	TRKPPCAccessSPR(value_buf0, SPR_GQR0, FALSE);

	*registerStorageSize = 0;
	err                  = DS_NoError;

	for (i = firstRegister; (i <= lastRegister) && (err == DS_NoError); i++) {
		if (read) {
			err = TRKPPCAccessPairedSingleRegister((u64*)value_buf, i, read);
			err = TRKAppendBuffer1_ui64(b, *(u64*)value_buf);
		} else {
			err = TRKReadBuffer1_ui64(b, (u64*)value_buf);
			err = TRKPPCAccessPairedSingleRegister((u64*)value_buf, i, read);
		}

		*registerStorageSize += sizeof(u64);
	}

	if (gTRKExceptionStatus.exceptionDetected) {
		*registerStorageSize = 0;
		err                  = DS_CWDSException;
	}

	gTRKExceptionStatus = savedException;

	return err;
}

/*
 * --INFO--
 * Address:	8021F0F0
 * Size:	000028
 */
DSError TRKTargetVersions(DSVersions* versions)
{
	versions->kernelMajor   = 0;
	versions->kernelMinor   = 8;
	versions->protocolMajor = 1;
	versions->protocolMinor = 10;
	return DS_NoError;
}

/*
 * --INFO--
 * Address:	8021F118
 * Size:	0000A4
 */
DSError TRKTargetSupportMask(u8 mask[32])
{
	mask[0]    = 0x7a;
	mask[1]    = 0;
	mask[2]    = 0x4f;
	mask[3]    = 7;
	mask[4]    = 0;
	mask[5]    = 0;
	mask[6]    = 0;
	mask[7]    = 0;
	mask[8]    = 0;
	mask[9]    = 0;
	mask[10]   = 0;
	mask[0xb]  = 0;
	mask[0xc]  = 0;
	mask[0xd]  = 0;
	mask[0xe]  = 0;
	mask[0xf]  = 0;
	mask[0x10] = 1;
	mask[0x11] = 0;
	mask[0x12] = 3;
	mask[0x13] = 0;
	mask[0x14] = 0;
	mask[0x15] = 0;
	mask[0x16] = 0;
	mask[0x17] = 0;
	mask[0x18] = 0;
	mask[0x19] = 0;
	mask[0x1a] = 3;
	mask[0x1b] = 0;
	mask[0x1c] = 0;
	mask[0x1d] = 0;
	mask[0x1e] = 0;
	mask[0x1f] = 0x80;
	return DS_NoError;
}

extern BOOL gTRKBigEndian;
/*
 * --INFO--
 * Address:	8021F1BC
 * Size:	000068
 */
DSError TRKTargetCPUType(DSCPUType* cpuType)
{
	cpuType->cpuMajor          = 0;
	cpuType->cpuMinor          = TRKTargetCPUMinorType();
	cpuType->bigEndian         = gTRKBigEndian;
	cpuType->defaultTypeSize   = 4;
	cpuType->fpTypeSize        = 8;
	cpuType->extended1TypeSize = 4;
	cpuType->extended2TypeSize = 8;
	return DS_NoError;
}

/*
 * --INFO--
 * Address:	........
 * Size:	00002C
 */
void TRKTargetCheckException(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	8021F224
 * Size:	000194
 */
ASM void TRKInterruptHandler()
{
#ifdef __MWERKS__ // clang-format off
    nofralloc
    mtsrr0 r2
    mtsrr1 r4
    mfsprg r4, 3
    mfcr r2
    mtsprg 3, r2
    lis r2, gTRKState@h
    ori r2, r2, gTRKState@l
    lwz r2, TRKState_PPC.MSR(r2)
    ori r2, r2, 0x8002
    xori r2, r2, 0x8002
    sync
    mtmsr r2
    sync
    lis r2, TRK_saved_exceptionID@h
    ori r2, r2, TRK_saved_exceptionID@l
    sth r3, 0(r2)
    cmpwi r3, 0x500
    bne L_802CF694
    lis r2, gTRKCPUState@h
    ori r2, r2, gTRKCPUState@l
    mflr r3
    stw r3, ProcessorState_PPC.transport_handler_saved_ra(r2)
    bl TRKUARTInterruptHandler
    lis r2, gTRKCPUState@h
    ori r2, r2, gTRKCPUState@l
    lwz r3, ProcessorState_PPC.transport_handler_saved_ra(r2)
    mtlr r3
    lis r2, gTRKState@h
    ori r2, r2, gTRKState@l
    lwz r2, TRKState_PPC.inputPendingPtr(r2)
    lbz r2, TRKState_PPC.GPR[0](r2)
    cmpwi r2, 0
    beq L_802CF678
    lis r2, gTRKExceptionStatus@h
    ori r2, r2, gTRKExceptionStatus@l
    lbz r2, TRKExceptionStatus.inTRK(r2)
    cmpwi r2, 1
    beq L_802CF678
    lis r2, gTRKState@h
    ori r2, r2, gTRKState@l
    li r3, 1
    stb r3, TRKState_PPC.inputActivated(r2)
    b L_802CF694
L_802CF678:
    lis r2, gTRKSaveState@h
    ori r2, r2, gTRKSaveState@l
    lwz r3, Default_PPC.CR(r2)
    mtcrf 0xff, r3
    lwz r3, Default_PPC.GPR[3](r2)
    lwz r2, Default_PPC.GPR[2](r2)
    rfi
L_802CF694:
    lis r2, TRK_saved_exceptionID@h
    ori r2, r2, TRK_saved_exceptionID@l
    lhz r3, 0(r2)
    lis r2, gTRKExceptionStatus@h
    ori r2, r2, gTRKExceptionStatus@l
    lbz r2, TRKExceptionStatus.inTRK(r2)
    cmpwi r2, 0
    bne TRKExceptionHandler
    lis r2, gTRKCPUState@h
    ori r2, r2, gTRKCPUState@l
    stw r0, ProcessorState_PPC.Default.GPR[0](r2)
    stw r1, ProcessorState_PPC.Default.GPR[1](r2)
    mfsprg r0, 1
    stw r0, ProcessorState_PPC.Default.GPR[2](r2)
    sth r3, ProcessorState_PPC.Extended1.exceptionID(r2)
    sth r3, (ProcessorState_PPC.Extended1.exceptionID + 2)(r2)
    mfsprg r0, 2
    stw r0, ProcessorState_PPC.Default.GPR[3](r2)
    stmw r4, ProcessorState_PPC.Default.GPR[4](r2)
    mfsrr0 r27
    mflr r28
    mfsprg r29, 3
    mfctr r30
    mfxer r31
    stmw r27, ProcessorState_PPC.Default.PC(r2)
    bl TRKSaveExtended1Block
    lis r2, gTRKExceptionStatus@h
    ori r2, r2, gTRKExceptionStatus@l
    li r3, 1
    stb r3, TRKExceptionStatus.inTRK(r2)
    lis r2, gTRKState@h
    ori r2, r2, gTRKState@l
    lwz r0, TRKState_PPC.MSR(r2)
    sync
    mtmsr r0
    sync
    lwz r0, TRKState_PPC.LR(r2)
    mtlr r0
    lwz r0, TRKState_PPC.CTR(r2)
    mtctr r0
    lwz r0, TRKState_PPC.XER(r2)
    mtxer r0
    lwz r0, TRKState_PPC.DSISR(r2)
    mtdsisr r0
    lwz r0, TRKState_PPC.DAR(r2)
    mtdar r0
    lmw r3, TRKState_PPC.GPR[3](r2)
    lwz r0, TRKState_PPC.GPR[0](r2)
    lwz r1, TRKState_PPC.GPR[1](r2)
    lwz r2, TRKState_PPC.GPR[2](r2)
    b TRKPostInterruptEvent
#endif // clang-format on
}

/*
 * --INFO--
 * Address:	8021F3B8
 * Size:	00009C
 */
ASM void TRKExceptionHandler(u16 a)
{
#ifdef __MWERKS__ // clang-format off
    nofralloc
    lis r2, gTRKExceptionStatus@h
    ori r2, r2, gTRKExceptionStatus@l
    sth r3, TRKExceptionStatus.exceptionInfo.exceptionID(r2)
    mfsrr0 r3
    stw r3, TRKExceptionStatus.exceptionInfo.PC(r2)
    lhz r3, TRKExceptionStatus.exceptionInfo.exceptionID(r2)
    cmpwi r3, 0x200
    beq LAB_00010ba4
    cmpwi r3, 0x300
    beq LAB_00010ba4
    cmpwi r3, 0x400
    beq LAB_00010ba4
    cmpwi r3, 0x600
    beq LAB_00010ba4
    cmpwi r3, 0x700
    beq LAB_00010ba4
    cmpwi r3, 0x800
    beq LAB_00010ba4
    cmpwi r3, 0x1000
    beq LAB_00010ba4
    cmpwi r3, 0x1100
    beq LAB_00010ba4
    cmpwi r3, 0x1200
    beq LAB_00010ba4
    cmpwi r3, 0x1300
    beq LAB_00010ba4
    b LAB_00010bb0
LAB_00010ba4:
    mfsrr0 r3
    addi r3, r3, 0x4
    mtsrr0 r3
LAB_00010bb0:
    lis r2, gTRKExceptionStatus@h
    ori r2, r2, gTRKExceptionStatus@l
    li r3, 0x1
    stb r3, TRKExceptionStatus.exceptionDetected(r2)
    mfsprg r3, 3
    mtcrf 0xff, r3
    mfsprg r2, 1
    mfsprg r3, 2
    rfi
#endif // clang-format on
}

/*
 * --INFO--
 * Address:	8021F454
 * Size:	0000B0
 */
void TRKPostInterruptEvent(void)
{
	TRKEvent event;
	NubEventType eventType;
	u32 inst;

	if (gTRKState.inputActivated) {
		gTRKState.inputActivated = FALSE;
	} else {
		switch (gTRKCPUState.Extended1.exceptionID & 0xFFFF) {
		case 0xd00:
		case 0x700:
			TRKTargetReadInstruction(&inst, gTRKCPUState.Default.PC);

			if (inst == 0xfe00000) {
				eventType = NUBEVENT_Support;
			} else {
				eventType = NUBEVENT_Breakpoint;
			}
			break;
		default:
			eventType = NUBEVENT_Exception;
			break;
		}

		TRKConstructEvent(&event, eventType);
		TRKPostEvent(&event);
	}
}

/*
 * --INFO--
 * Address:	8021F504
 * Size:	0000C4
 */
ASM void TRKSwapAndGo()
{
#ifdef __MWERKS__ // clang-format off
    nofralloc
    lis r3, gTRKState@h
    ori r3, r3, gTRKState@l
    stmw r0, TRKState_PPC.GPR[0](r3)
    mfmsr r0
    stw r0, TRKState_PPC.MSR(r3)
    mflr r0
    stw r0, TRKState_PPC.LR(r3)
    mfctr r0
    stw r0, TRKState_PPC.CTR(r3)
    mfxer r0
    stw r0, TRKState_PPC.XER(r3)
    mfdsisr r0
    stw r0, TRKState_PPC.DSISR(r3)
    mfdar r0
    stw r0, TRKState_PPC.DAR(r3)
    li r1, -0x7ffe
    nor r1, r1, r1
    mfmsr r3
    and r3, r3, r1
    mtmsr r3
    lis r2, gTRKState@h
    ori r2, r2, gTRKState@l
    lwz r2, TRKState_PPC.inputPendingPtr(r2)
    lbz r2, TRKState_PPC.GPR[0](r2)
    cmpwi r2, 0
    beq L_802CF930
    lis r2, gTRKState@h
    ori r2, r2, gTRKState@l
    li r3, 1
    stb r3, TRKState_PPC.inputActivated(r2)
    b TRKInterruptHandlerEnableInterrupts
L_802CF930:
    lis r2, gTRKExceptionStatus@h
    ori r2, r2, gTRKExceptionStatus@l
    li r3, 0
    stb r3, 0xc(r2)
    bl TRKRestoreExtended1Block
    lis r2, gTRKCPUState@h
    ori r2, r2, gTRKCPUState@l
    lmw r27, ProcessorState_PPC.Default.PC(r2)
    mtsrr0 r27
    mtlr r28
    mtcrf 0xff, r29
    mtctr r30
    mtxer r31
    lmw r3, ProcessorState_PPC.Default.GPR[3](r2)
    lwz r0, ProcessorState_PPC.Default.GPR[0](r2)
    lwz r1, ProcessorState_PPC.Default.GPR[1](r2)
    lwz r2, ProcessorState_PPC.Default.GPR[2](r2)
    rfi
#endif // clang-format on
}

/*
 * --INFO--
 * Address:	8021F5C8
 * Size:	000054
 */
ASM void TRKInterruptHandlerEnableInterrupts(void)
{
#ifdef __MWERKS__ // clang-format off
    nofralloc;
    lis       r2, gTRKState@h
    ori       r2, r2, gTRKState@l
    lwz       r0, TRKState_PPC.MSR(r2)
    sync
    mtmsr     r0
    sync
    lwz       r0, TRKState_PPC.LR(r2)
    mtlr      r0
    lwz       r0, TRKState_PPC.CTR(r2)
    mtctr     r0
    lwz       r0, TRKState_PPC.XER(r2)
    mtxer     r0
    lwz       r0, TRKState_PPC.DSISR(r2)
    mtdsisr   r0
    lwz       r0, TRKState_PPC.DAR(r2)
    mtdar     r0
    lmw       r3, TRKState_PPC.GPR[3](r2)
    lwz       r0, TRKState_PPC.GPR[0](r2)
    lwz       r1, TRKState_PPC.GPR[1](r2)
    lwz       r2, TRKState_PPC.GPR[2](r2)
    b         TRKPostInterruptEvent
#endif // clang-format on
}

/*
 * --INFO--
 * Address:	8021F61C
 * Size:	000064
 */
DSError TRKTargetInterrupt(TRKEvent* event)
{
	DSError error = DS_NoError;
	switch (event->eventType) {
	case NUBEVENT_Breakpoint:
	case NUBEVENT_Exception:
		if (TRKTargetCheckStep() == FALSE) {
			TRKTargetSetStopped(TRUE);
			error = TRKDoNotifyStopped(DSMSG_NotifyStopped);
		}
		break;
	default:
		break;
	}

	return error;
}

/*
 * --INFO--
 * Address:	8021F680
 * Size:	000090
 */
DSError TRKTargetAddStopInfo(TRKBuffer* buffer)
{
	DSError error;
	u32 instruction;

	error = TRKAppendBuffer1_ui32(buffer, gTRKCPUState.Default.PC);
	if (error == DS_NoError) {
		error = TRKTargetReadInstruction(&instruction, gTRKCPUState.Default.PC);
	}
	if (error == DS_NoError)
		error = TRKAppendBuffer1_ui32(buffer, instruction);
	if (error == DS_NoError)
		error = TRKAppendBuffer1_ui16(buffer, gTRKCPUState.Extended1.exceptionID);

	return error;
}

/*
 * --INFO--
 * Address:	8021F710
 * Size:	000088
 */
DSError TRKTargetAddExceptionInfo(TRKBuffer* buffer)
{
	DSError error;
	u32 local_10;

	error = TRKAppendBuffer1_ui32(buffer, gTRKExceptionStatus.exceptionInfo.PC);
	if (error == 0) {
		error = TRKTargetReadInstruction(&local_10, gTRKExceptionStatus.exceptionInfo.PC);
	}
	if (error == 0) {
		error = TRKAppendBuffer1_ui32(buffer, local_10);
	}
	if (error == 0) {
		error = TRKAppendBuffer1_ui16(buffer, gTRKExceptionStatus.exceptionInfo.exceptionID);
	}

	return error;
}

/*
 * --INFO--
 * Address:	8021F798
 * Size:	00003C
 */
static DSError TRKTargetEnableTrace(BOOL val)
{
	if (val) {
		gTRKCPUState.Extended1.MSR |= 0x400;
	} else {
		gTRKCPUState.Extended1.MSR &= ~0x400;
	}
	return DS_NoError;
}

/*
 * --INFO--
 * Address:	8021F7D4
 * Size:	000084
 */
static BOOL TRKTargetStepDone()
{
	BOOL result = TRUE;

	if (gTRKStepStatus.active && ((u16)gTRKCPUState.Extended1.exceptionID) == PPC_Trace) {
		switch (gTRKStepStatus.type) {
		case DSSTEP_IntoCount:
			if (gTRKStepStatus.count > 0) {
				result = FALSE;
			}
			break;
		case DSSTEP_IntoRange:
			if (gTRKCPUState.Default.PC >= gTRKStepStatus.rangeStart && gTRKCPUState.Default.PC <= gTRKStepStatus.rangeEnd) {
				result = FALSE;
			}
			break;
		default:
			break;
		}
	}

	return result;
}

/*
 * --INFO--
 * Address:	8021F858
 * Size:	000070
 */
static DSError TRKTargetDoStep()
{
	gTRKStepStatus.active = TRUE;
	TRKTargetEnableTrace(TRUE);

	if (gTRKStepStatus.type == DSSTEP_IntoCount || gTRKStepStatus.type == DSSTEP_OverCount) {
		gTRKStepStatus.count--;
	}

	TRKTargetSetStopped(FALSE);
	return DS_NoError;
}

/*
 * --INFO--
 * Address:	8021F8C8
 * Size:	000068
 */
static BOOL TRKTargetCheckStep()
{
	if (gTRKStepStatus.active) {
		TRKTargetEnableTrace(FALSE);

		if (TRKTargetStepDone()) {
			gTRKStepStatus.active = FALSE;
		} else {
			TRKTargetDoStep();
		}
	}

	return gTRKStepStatus.active;
}

/*
 * --INFO--
 * Address:	8021F930
 * Size:	000044
 */
DSError TRKTargetSingleStep(u32 count, BOOL stepOver)
{
	DSError error = DS_NoError;

	if (stepOver) {
		error = DS_UnsupportedError;
	} else {
		gTRKStepStatus.type  = DSSTEP_IntoCount;
		gTRKStepStatus.count = count;
		error                = TRKTargetDoStep();
	}

	return error;
}

/*
 * --INFO--
 * Address:	8021F974
 * Size:	000048
 */
DSError TRKTargetStepOutOfRange(u32 rangeStart, u32 rangeEnd, BOOL stepOver)
{
	DSError error = DS_NoError;

	if (stepOver) {
		// Stepping over isn't supported for PowerPC
		error = DS_UnsupportedError;
	} else {
		gTRKStepStatus.type = DSSTEP_IntoRange;
		// gTRKStepStatus.active = TRUE;
		gTRKStepStatus.rangeStart = rangeStart;
		gTRKStepStatus.rangeEnd   = rangeEnd;
		error                     = TRKTargetDoStep();
	}

	return error;
}

/*
 * --INFO--
 * Address:	8021F9BC
 * Size:	000010
 */
u32 TRKTargetGetPC()
{
	return gTRKCPUState.Default.PC;
}

/*
 * --INFO--
 * Address:	8021F9CC
 * Size:	0000F0
 */
DSError TRKTargetSupportRequest(void)
{
	DSError error;
	// u32 spC;
	size_t* length;
	TRKEvent event;
	u8 ioResult;
	u8 commandId;

	commandId = (MessageCommandID)gTRKCPUState.Default.GPR[3];
	if (commandId != DSMSG_ReadFile && commandId != DSMSG_WriteFile) {
		TRKConstructEvent(&event, NUBEVENT_Exception);
		TRKPostEvent(&event);
		return DS_NoError;
	}

	length = (size_t*)gTRKCPUState.Default.GPR[5];
	error  = TRKSuppAccessFile((u8)gTRKCPUState.Default.GPR[4], (u8*)gTRKCPUState.Default.GPR[6], length, (DSIOResult*)&ioResult, TRUE,
	                           commandId == DSMSG_ReadFile);
	if (ioResult == DS_IONoError && error != DS_NoError) {
		ioResult = DS_IOError;
	}
	gTRKCPUState.Default.GPR[3] = ioResult;
	if (commandId == DSMSG_ReadFile) {
		TRK_flush_cache((void*)gTRKCPUState.Default.GPR[6], *length);
	}
	gTRKCPUState.Default.PC += 4;
	return error;
}

/*
 * --INFO--
 * Address:	8021FABC
 * Size:	00003C
 */
DSError TRKTargetFlushCache(u8 a, void* start, void* end)
{
	if (start < end) {
		TRK_flush_cache(start, (u8*)end - (u8*)start);
		return DS_NoError;
	}

	return DS_InvalidMemory;
}

/*
 * --INFO--
 * Address:	8021FAF8
 * Size:	000010
 */
BOOL TRKTargetStopped()
{
	return gTRKState.isStopped;
}

/*
 * --INFO--
 * Address:	8021FB08
 * Size:	000010
 */
void TRKTargetSetStopped(uint stopped)
{
	gTRKState.isStopped = stopped;
}

/*
 * --INFO--
 * Address:	8021FB18
 * Size:	000028
 */
u32 TRKTargetStop()
{
	TRKTargetSetStopped(1);
	return 0;
}

/*
 * --INFO--
 * Address:	8021FB40
 * Size:	0000B0
 */
DSError TRKPPCAccessSPR(void* value, u32 spr_register_num, BOOL read)
{
	/* Initialize instruction array with nop */

	u32 access_func[5] = { INSTR_NOP, INSTR_NOP, INSTR_NOP, INSTR_NOP, INSTR_NOP };
	/*
	** Construct a small assembly function to perform the
	** requested access and call it.  The read/write function
	** is in the form:
	**
	** read:
	**        mfspr    r4, spr_register_num
	**        stw      r4, 0(r3)
	**        blr
	**
	** write:
	**        lwz      r4, 0(r3)
	**        mtspr    spr_register_num, r4
	**        blr
	**
	*/

	if (read) {
		access_func[0] = INSTR_MFSPR(4, spr_register_num);
		access_func[1] = (u32)INSTR_STW(4, 0, 3);
	} else {
		access_func[0] = (u32)INSTR_LWZ(4, 0, 3);
		access_func[1] = INSTR_MTSPR(spr_register_num, 4);
	}

	return TRKPPCAccessSpecialReg(value, access_func, read);
}

/*
 * --INFO--
 * Address:	8021FBF0
 * Size:	000078
 */
DSError TRKPPCAccessPairedSingleRegister(void* srcDestPtr, u32 psr, BOOL read)
{
	// all nop by default
	u32 instructionData[] = { INSTR_NOP, INSTR_NOP, INSTR_NOP, INSTR_NOP, INSTR_NOP };

	if (read) {
		instructionData[0] = INSTR_PSQ_ST(psr, 0, 3, 0, 0); // psq_st psr, 0(r3), 0, 0
	} else {
		instructionData[0] = INSTR_PSQ_L(psr, 0, 3, 0, 0); // psq_l psr, 0(r3), 0, 0
	}

	return TRKPPCAccessSpecialReg(srcDestPtr, instructionData, read);
}

#define FP_FPSCR_ACCESS 32
#define FP_FPECR_ACCESS 33

/*
 * --INFO--
 * Address:	8021FC68
 * Size:	000180
 */
DSError TRKPPCAccessFPRegister(void* srcDestPtr, u32 fpr, BOOL read)
{
	DSError error = DS_NoError;
	// all nop by default
	u32 instructionData1[] = { INSTR_NOP, INSTR_NOP, INSTR_NOP, INSTR_NOP, INSTR_NOP };

	if (fpr < FP_FPSCR_ACCESS) {
		if (read) {
			instructionData1[0] = INSTR_STFD(fpr, 0, 3); // stfd fpr, 0(r3)
		} else {
			instructionData1[0] = INSTR_LFD(fpr, 0, 3); // lfd fpr, 0(r3)
		}

		error = TRKPPCAccessSpecialReg(srcDestPtr, instructionData1, read);

	} else if (fpr == FP_FPSCR_ACCESS) {
		if (read) {
			/*
			    stfd    f1, 0 (r4)
			    mffs    sp
			    stfd    f1, 0 (r3)
			    lfd     f1, 0 (r4)
			*/
			instructionData1[0] = 0xD8240000;
			instructionData1[1] = 0xFC20048E;
			instructionData1[2] = 0xD8230000;
			instructionData1[3] = 0xC8240000;
		} else {
			/*
			    stfd    f1, 0 (r4)
			    lfd     f1, 0 (r3)
			    mtfsf   0xff, f1
			    lfd     f1, 0 (r4)
			*/
			instructionData1[0] = 0xD8240000;
			instructionData1[1] = 0xC8230000;
			instructionData1[2] = 0xFDFE0D8E;
			instructionData1[3] = 0xC8240000;
		}

		error = TRKPPCAccessSpecialReg(srcDestPtr, instructionData1, read);
		*(u64*)srcDestPtr &= 0xFFFFFFFF;

	} else if (fpr == FP_FPECR_ACCESS) {
		if (!read) {
			*(u32*)srcDestPtr = *((u32*)(srcDestPtr) + 1);
		}
		error = TRKPPCAccessSPR(srcDestPtr, 1022, read);
		if (read) {
			DSFetch_u64(srcDestPtr) = DSFetch_u32(srcDestPtr) & 0xffffffffLL;
		}
	}

	return error;
}

#define DEBUG_VECTORREG_ACCESS 0

/*
 * --INFO--
 * Address:	8021FDE8
 * Size:	000068
 */
DSError TRKPPCAccessSpecialReg(void* value, u32* access_func, BOOL read)
{
	typedef void (*asm_access_type)(void*, void*);

	/*
	** Construct a small assembly function to perform the
	** requested access and call it.  The read/write function
	** is in the form:
	**
	**        <access_func>
	**        blr
	*/

	/*
	** Put blr instruction at the end of access function (it should be
	** a 5-instruction array w/the last one empty).
	*/

	access_func[4] = INSTR_BLR;

	/*
	** Now that the instruction array is built, get a function pointer to it.
	*/

#if DEBUG_VECTORREG_ACCESS

	__puts("\r\nasm_access: ");
	__puthex8((u32)asm_access);
	__puts("   access_func: ");
	__puthex8((u32)access_func);

	for (i = 0; i < 10; i++) {
		__puts("\r\ninst[");
		__puthex2(i);
		__puts("]: ");
		__puthex8(access_func[i]);
		__puts("  ;  ");
		__puthex8(*((u32*)asm_access + i));
	}

	__puts("\r\n");

#endif

	// Flush cache
	TRK_flush_cache((void*)(u32)access_func, (sizeof(access_func) * 5));
	((asm_access_type)access_func)((u32*)value, (void*)&TRKvalue128_temp);

	return DS_NoError;
}

/*
 * --INFO--
 * Address:	8021FE50
 * Size:	000010
 */
void TRKTargetSetInputPendingPtr(void* ptr)
{
	gTRKState.inputPendingPtr = ptr;
}
