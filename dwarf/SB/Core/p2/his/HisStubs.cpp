typedef struct _sif_serve_data;
typedef struct HISRemoteVoiceTransStatusParameter;
typedef struct HISGetRequestDebugParameter;
typedef struct HISGetRequestStatusParameter;
typedef struct _sif_queue_data;
typedef struct HISGetRequestDebugReturn;
typedef struct HISLoadBlockAsyncReturn;
typedef struct HISFlushHostIOHandlesReturn;
typedef struct HISInitParameter;
typedef struct HISPauseVoiceParameter;
typedef struct HISGetSoundDebugVoiceReturn;
typedef struct HISDelayFrameParameter;
typedef struct HISGetRequestStatusReturn;
typedef struct HISRemoteBlockTransStatusParameter;
typedef struct HISGetRequestCountParameter;
typedef struct HISGetFileSizeParameter;
typedef struct HISSetVoicePitchParameter;
typedef struct HISSetVoiceVolumeParameter;
typedef struct HISPlaySoundParameter;
typedef struct HISPauseVoiceReturn;
typedef struct _sif_rpc_data;
typedef struct HISRemoteVoiceTransStatusReturn;
typedef struct HISGetSoundDebugVoiceParameter;
typedef struct HISDelayFrameReturn;
typedef struct HISSoundDebug;
typedef struct HISJoinStereoVoicesParameter;
typedef struct HISGetExternalStreamBufferParameter;
typedef struct HISInitReturn;
typedef struct HISPlayStreamReturn;
typedef struct HISSetVoiceVolumeReturn;
typedef struct HISPlaySoundReturn;
typedef struct HISGetRequestCountReturn;
typedef struct HISGetFileSizeReturn;
typedef struct HISResumeVoiceParameter;
typedef struct HISRemoteBlockTransStatusReturn;
typedef struct HISSetVoicePitchReturn;
typedef struct HISGetFirstValidRequestParameter;
typedef struct HISGetVoiceStatusParameter;
typedef struct HISGetSoundDebugParameter;
typedef struct HISResumeVoiceReturn;
typedef struct HISJoinStereoVoicesReturn;
typedef struct HISGetExternalStreamBufferReturn;
typedef enum HISMediaType;
typedef struct HISRemoteSetParamParameter;
typedef struct HISNullParameter;
typedef struct HISGetVersionParameter;
typedef struct HISGetFirstValidRequestReturn;
typedef struct _sif_client_data;
typedef struct HISRemoteSetParamReturn;
typedef struct HISSetMasterVolumeParameter;
typedef struct HISGetSoundDebugReturn;
typedef struct HISGetFreeRequestCountParameter;
typedef struct HISCancelRequestParameter;
typedef enum HISMemoryType;
typedef struct HISGetVoiceStatusReturn;
typedef struct HISFileIndexDebug;
typedef struct HISFlushHostIOHandlesParameter;
typedef struct HISPlayStreamParameter;
typedef struct HISStopVoiceParameter;
typedef struct HISNullReturn;
typedef struct HISRemoteVoiceTransParameter;
typedef struct HISSetMasterVolumeReturn;
typedef struct HISGetVersionReturn;
typedef struct HISCancelRequestReturn;
typedef struct HISGetFileIndexParameter;
typedef struct HISPlayExternalStreamParameter;
typedef enum HISStatus;
typedef struct HISGetFreeRequestCountReturn;
typedef struct HISStopVoiceReturn;
typedef struct HISGetFileIndexReturn;
typedef struct HISTestParameter;
typedef struct HISSoundDebugVoice;
typedef struct HISRemoteVoiceTransReturn;
typedef struct HISGetFileIndexDebugParameter;
typedef struct HISCloseRequestParameter;
typedef struct HISRemoteBlockTransParameter;
typedef struct HISGetFileIndexDebugReturn;
typedef struct HISPlayExternalStreamReturn;
typedef struct HISWaitForRequestParameter;
typedef struct HISCloseRequestReturn;
typedef struct HISRequestDebug;
typedef struct HISRemoteBlockTransReturn;
typedef union _class;
typedef struct HISTestReturn;
typedef struct HISLoadBlockAsyncParameter;
typedef struct HISWaitForRequestReturn;
typedef struct HISWaitForAllRequestsParameter;
typedef struct HISLoadExternalStreamParameter;
typedef struct HISWaitForAllRequestsReturn;
typedef struct HISLoadExternalStreamReturn;

typedef void(*type_19)(void*);
typedef void*(*type_61)(uint32, void*, int32);

typedef int8 type_0[20];
typedef int8 type_1[17];
typedef int8 type_2[18];
typedef int8 type_3[44];
typedef int8 type_4[17];
typedef int8 type_5[20];
typedef int8 type_6[22];
typedef int8 type_7[36];
typedef int8 type_8[17];
typedef int8 type_9[20];
typedef int8 type_10[17];
typedef int8 type_11[17];
typedef int8 type_12[17];
typedef int8 type_13[48];
typedef int8 type_14[18];
typedef int8 type_15[20];
typedef int8 type_16[20];
typedef int8 type_17[17];
typedef int8 type_18[20];
typedef int8 type_20[20];
typedef int8 type_21[17];
typedef int8 type_22[20];
typedef int8 type_23[20];
typedef int8 type_24[17];
typedef int8 type_25[20];
typedef int8 type_26[20];
typedef int8 type_27[17];
typedef int8 type_28[48];
typedef int8 type_29[17];
typedef int8 type_30[20];
typedef uint32 type_31[2];
typedef int8 type_32[17];
typedef int8 type_33[17];
typedef int8 type_34[20];
typedef int8 type_35[64];
typedef int8 type_36[17];
typedef int8 type_37[17];
typedef int8 type_38[20];
typedef int8 type_39[20];
typedef int8 type_40[20];
typedef int8 type_41[20];
typedef int8 type_42[20];
typedef int8 type_43[32];
typedef int8 type_44[48];
typedef int8 type_45[20];
typedef int8 type_46[32];
typedef int8 type_47[64];
typedef int8 type_48[76];
typedef int8 type_49[17];
typedef int8 type_50[17];
typedef int8 type_51[48];
typedef int8 type_52[20];
typedef int8 type_53[20];
typedef int8 type_54[20];
typedef int8 type_55[20];
typedef int8 type_56[17];
typedef int8 type_57[44];
typedef int8 type_58[36];
typedef int8 type_59[17];
typedef int8 type_60[20];
typedef int8 type_62[17];
typedef int8 type_63[17];
typedef int8 type_64[17];
typedef int8 type_65[20];
typedef int8 type_66[17];
typedef int8 type_67[84];
typedef int8 type_68[17];
typedef int8 type_69[20];
typedef int8 type_70[17];
typedef int8 type_71[24];
typedef int8 type_72[20];
typedef int8 type_73[17];
typedef int8 type_74[20];
typedef int8 type_75[17];
typedef int8 type_76[20];
typedef int8 type_77[17];
typedef int8 type_78[18];
typedef int8 type_79[24];
typedef int8 type_80[17];
typedef int8 type_81[17];
typedef int8 type_82[17];
typedef int8 type_83[20];

struct _sif_serve_data
{
	uint32 command;
	type_61 func;
	void* buff;
	int32 size;
	type_61 cfunc;
	void* cbuff;
	int32 csize;
	_sif_client_data* client;
	void* paddr;
	uint32 fno;
	void* receive;
	int32 rsize;
	int32 rmode;
	uint32 rid;
	_sif_serve_data* link;
	_sif_serve_data* next;
	_sif_queue_data* base;
};

struct HISRemoteVoiceTransStatusParameter
{
	int16 channel;
	int16 flag;
};

struct HISGetRequestDebugParameter
{
	int32 requestID;
};

struct HISGetRequestStatusParameter
{
	int32 requestID;
};

struct _sif_queue_data
{
	int32 key;
	int32 active;
	_sif_serve_data* link;
	_sif_serve_data* start;
	_sif_serve_data* end;
	_sif_queue_data* next;
};

struct HISGetRequestDebugReturn
{
	HISRequestDebug requestDebug;
};

struct HISLoadBlockAsyncReturn
{
	int32 requestID;
};

struct HISFlushHostIOHandlesReturn
{
};

struct HISInitParameter
{
	HISMediaType mediaType;
};

struct HISPauseVoiceParameter
{
	uint16 voice;
};

struct HISGetSoundDebugVoiceReturn
{
	HISSoundDebugVoice soundDebugVoice;
};

struct HISDelayFrameParameter
{
};

struct HISGetRequestStatusReturn
{
	HISStatus currentStatus;
};

struct HISRemoteBlockTransStatusParameter
{
	int16 channel;
	int16 flag;
};

struct HISGetRequestCountParameter
{
};

struct HISGetFileSizeParameter
{
	int32 fileIndex;
};

struct HISSetVoicePitchParameter
{
	uint16 voice;
	uint16 pitch;
};

struct HISSetVoiceVolumeParameter
{
	uint16 voice;
	uint16 leftVolume;
	uint16 rightVolume;
};

struct HISPlaySoundParameter
{
	uint32 address;
	uint16 voice;
	uint16 leftVolume;
	uint16 rightVolume;
	uint16 pitch;
	uint16 attack;
	uint16 release;
	uint8 paused;
};

struct HISPauseVoiceReturn
{
};

struct _sif_rpc_data
{
	void* paddr;
	uint32 pid;
	int32 tid;
	uint32 mode;
};

struct HISRemoteVoiceTransStatusReturn
{
	uint32 ret;
};

struct HISGetSoundDebugVoiceParameter
{
	int32 voice;
};

struct HISDelayFrameReturn
{
};

struct HISSoundDebug
{
	uint16 leftVolume;
	uint16 rightVolume;
};

struct HISJoinStereoVoicesParameter
{
	uint16 voice1;
	uint16 voice2;
};

struct HISGetExternalStreamBufferParameter
{
	int32 voice;
};

struct HISInitReturn
{
};

struct HISPlayStreamReturn
{
};

struct HISSetVoiceVolumeReturn
{
};

struct HISPlaySoundReturn
{
};

struct HISGetRequestCountReturn
{
	int32 count;
};

struct HISGetFileSizeReturn
{
	int32 size;
};

struct HISResumeVoiceParameter
{
	uint16 voice;
};

struct HISRemoteBlockTransStatusReturn
{
	uint32 ret;
};

struct HISSetVoicePitchReturn
{
};

struct HISGetFirstValidRequestParameter
{
};

struct HISGetVoiceStatusParameter
{
};

struct HISGetSoundDebugParameter
{
};

struct HISResumeVoiceReturn
{
};

struct HISJoinStereoVoicesReturn
{
};

struct HISGetExternalStreamBufferReturn
{
	int32 buffer;
};

enum HISMediaType
{
	HIS_MEDIA_CDROM,
	HIS_MEDIA_DVD,
	HIS_MEDIA_HOSTIO
};

struct HISRemoteSetParamParameter
{
	uint16 reg;
	uint16 value;
};

struct HISNullParameter
{
};

struct HISGetVersionParameter
{
};

struct HISGetFirstValidRequestReturn
{
	int32 request;
};

struct _sif_client_data
{
	_sif_rpc_data rpcd;
	uint32 command;
	void* buff;
	void* cbuff;
	type_19 func;
	void* para;
	_sif_serve_data* serve;
};

struct HISRemoteSetParamReturn
{
};

struct HISSetMasterVolumeParameter
{
	uint16 leftVolume;
	uint16 rightVolume;
};

struct HISGetSoundDebugReturn
{
	HISSoundDebug soundDebug;
};

struct HISGetFreeRequestCountParameter
{
};

struct HISCancelRequestParameter
{
	int32 requestID;
};

enum HISMemoryType
{
	HIS_MEMORY_EE,
	HIS_MEMORY_IOP,
	HIS_MEMORY_SPU
};

struct HISGetVoiceStatusReturn
{
	type_31 status;
};

struct HISFileIndexDebug
{
	int32 logicalSectorNumber;
	int32 size;
	int32 sizeInSectors;
	type_44 name;
};

struct HISFlushHostIOHandlesParameter
{
};

struct HISPlayStreamParameter
{
	int32 fileIndex;
	int32 logicalSectorNumber;
	int32 dataSize;
	int32 blockSize;
	uint16 voice;
	uint16 leftVolume;
	uint16 rightVolume;
	uint16 pitch;
	uint16 flags;
	uint16 attack;
	uint16 release;
	uint16 interleaveSectors;
};

struct HISStopVoiceParameter
{
	uint16 voice;
};

struct HISNullReturn
{
};

struct HISRemoteVoiceTransParameter
{
	int16 channel;
	uint16 mode;
	uint8* m_addr;
	uint32 s_addr;
	uint32 size;
};

struct HISSetMasterVolumeReturn
{
};

struct HISGetVersionReturn
{
	int32 version;
};

struct HISCancelRequestReturn
{
	uint8 success;
};

struct HISGetFileIndexParameter
{
	type_51 filename;
};

struct HISPlayExternalStreamParameter
{
	int32 blockSize;
	uint16 voice;
	uint16 leftVolume;
	uint16 rightVolume;
	uint16 pitch;
	uint16 flags;
	uint16 attack;
	uint16 release;
};

enum HISStatus
{
	HIS_STATUS_INVALID_ID,
	HIS_STATUS_DONE,
	HIS_STATUS_IN_PROGRESS,
	HIS_STATUS_IN_QUEUE,
	HIS_STATUS_PARTIAL,
	HIS_STATUS_FAILED,
	HIS_STATUS_CANCELLED,
	HIS_STATUS_DMA_WAIT
};

struct HISGetFreeRequestCountReturn
{
	int32 count;
};

struct HISStopVoiceReturn
{
};

struct HISGetFileIndexReturn
{
	int32 index;
};

struct HISTestParameter
{
	int32 testValue;
	type_47 testString;
};

struct HISSoundDebugVoice
{
	uint32 address;
	uint16 leftVolume;
	uint16 rightVolume;
	uint16 pitch;
	uint16 envelope;
	uint8 kon;
	uint8 koff;
	uint8 endx;
	uint8 external;
	uint8 streaming;
	uint8 reading;
	uint8 readingBuffer;
	uint8 byteMode;
	union
	{
		int32 currentSector;
		int32 currentOffset;
	};
	int32 sectorsLeft;
	int32 dataSize;
};

struct HISRemoteVoiceTransReturn
{
	int32 ret;
};

struct HISGetFileIndexDebugParameter
{
	int32 fileIndex;
};

struct HISCloseRequestParameter
{
	int32 requestID;
};

struct HISRemoteBlockTransParameter
{
	int16 channel;
	uint16 mode;
	uint8* m_addr;
	uint32 size;
	uint8* start_addr;
};

struct HISGetFileIndexDebugReturn
{
	HISFileIndexDebug fileIndexDebug;
};

struct HISPlayExternalStreamReturn
{
};

struct HISWaitForRequestParameter
{
};

struct HISCloseRequestReturn
{
	uint8 success;
};

struct HISRequestDebug
{
	_class small;
	int32 destination;
	int32 currentPriority;
	int32 originalPriority;
	int32 fileIndex;
	int32 startSector;
	int32 sectorsToRead;
};

struct HISRemoteBlockTransReturn
{
	int32 ret;
};

union _class
{
	int32 nextRequest;
	HISStatus status;
	HISMemoryType destinationType;
};

struct HISTestReturn
{
	int32 returnValue;
};

struct HISLoadBlockAsyncParameter
{
	int32 fileIndex;
	int32 sourceBlock;
	int32 sourceSize;
	void* destinationAddress;
	HISMemoryType destinationType;
	int32 priority;
	int32 flags;
};

struct HISWaitForRequestReturn
{
};

struct HISWaitForAllRequestsParameter
{
};

struct HISLoadExternalStreamParameter
{
	uint16 voice;
	uint16 buffer;
	void* address;
};

struct HISWaitForAllRequestsReturn
{
};

struct HISLoadExternalStreamReturn
{
};

_sif_client_data clientData;
uint8 asyncFire;

void HISRemoteSetParam(uint16 reg, uint16 value);
int32 HISRemoteVoiceTrans(int16 channel, uint16 mode, uint8* m_addr, uint32 s_addr, uint32 size);
uint32 HISRemoteBlockTransStatus(int16 channel, int16 flag);
int32 HISRemoteBlockTrans(int16 channel, uint16 mode, uint8* m_addr, uint32 size, uint8* start_addr);
int32 HISGetExternalStreamBuffer(int32 voice);
void HISLoadExternalStream(int32 voice, int32 buffer, void* address);
void HISSetMasterVolume(int32 leftVolume, int32 rightVolume);
void HISGetVoiceStatus(uint32* data);
void _HISBatchSoundCommandsNoWait(void* data, int32 size);
void HISBatchSoundCommands(void* data, int32 size);
void HISGetFileIndexDebug(int32 fileIndex, HISFileIndexDebug* fileIndexDebug);
int32 HISGetFirstValidRequest();
void HISGetRequestDebug(int32 requestID, HISRequestDebug* requestDebug);
void HISFlushHostIOHandles();
int32 HISGetFileSize(int32 fileIndex);
void HISWaitForRequest();
uint8 HISCloseRequest(int32 requestID);
uint8 HISCancelRequest(int32 requestID);
HISStatus HISGetRequestStatus(int32 requestID);
int32 HISLoadBlockAsync(int32 fileIndex, int32 sourceBlock, int32 sourceSize, void* destinationAddress, HISMemoryType destinationType, int32 priority, int32 flags);
int32 HISGetFileIndex(int8* filename);
int32 HISGetVersion();
void HISInit(HISMediaType mediaType);
void HISInitStubs();

// HISRemoteSetParam__FUsUs
// Start address: 0x34a4d0
void HISRemoteSetParam(uint16 reg, uint16 value)
{
	type_18 inputBuffer;
	HISRemoteSetParamParameter* input;
	type_24 outputBuffer;
	HISRemoteSetParamReturn* output;
}

// HISRemoteVoiceTrans__FsUsPUcUiUi
// Start address: 0x34a580
int32 HISRemoteVoiceTrans(int16 channel, uint16 mode, uint8* m_addr, uint32 s_addr, uint32 size)
{
	type_46 inputBuffer;
	HISRemoteVoiceTransParameter* input;
	type_54 outputBuffer;
	HISRemoteVoiceTransReturn* output;
}

// HISRemoteBlockTransStatus__Fss
// Start address: 0x34a670
uint32 HISRemoteBlockTransStatus(int16 channel, int16 flag)
{
	type_15 inputBuffer;
	HISRemoteBlockTransStatusParameter* input;
	type_20 outputBuffer;
	HISRemoteBlockTransStatusReturn* output;
}

// HISRemoteBlockTrans__FsUsPUcUiPUc
// Start address: 0x34a720
int32 HISRemoteBlockTrans(int16 channel, uint16 mode, uint8* m_addr, uint32 size, uint8* start_addr)
{
	type_43 inputBuffer;
	HISRemoteBlockTransParameter* input;
	type_53 outputBuffer;
	HISRemoteBlockTransReturn* output;
}

// HISGetExternalStreamBuffer__Fi
// Start address: 0x34a810
int32 HISGetExternalStreamBuffer(int32 voice)
{
	type_23 inputBuffer;
	HISGetExternalStreamBufferParameter* input;
	type_30 outputBuffer;
	HISGetExternalStreamBufferReturn* output;
}

// HISLoadExternalStream__FiiPCv
// Start address: 0x34a8c0
void HISLoadExternalStream(int32 voice, int32 buffer, void* address)
{
	type_79 inputBuffer;
	HISLoadExternalStreamParameter* input;
	type_81 outputBuffer;
	HISLoadExternalStreamReturn* output;
}

// HISSetMasterVolume__Fii
// Start address: 0x34a980
void HISSetMasterVolume(int32 leftVolume, int32 rightVolume)
{
	type_22 inputBuffer;
	HISSetMasterVolumeParameter* input;
	type_29 outputBuffer;
	HISSetMasterVolumeReturn* output;
}

// HISGetVoiceStatus__FPUi
// Start address: 0x34aa30
void HISGetVoiceStatus(uint32* data)
{
	type_62 inputBuffer;
	HISGetVoiceStatusParameter* input;
	type_71 outputBuffer;
	HISGetVoiceStatusReturn* output;
	int32 i;
}

// _HISBatchSoundCommandsNoWait__FPCvi
// Start address: 0x34aaf0
void _HISBatchSoundCommandsNoWait(void* data, int32 size)
{
}

// HISBatchSoundCommands__FPCvi
// Start address: 0x34ab70
void HISBatchSoundCommands(void* data, int32 size)
{
}

// HISGetFileIndexDebug__FiP17HISFileIndexDebug
// Start address: 0x34abf0
void HISGetFileIndexDebug(int32 fileIndex, HISFileIndexDebug* fileIndexDebug)
{
	type_41 inputBuffer;
	HISGetFileIndexDebugParameter* input;
	type_48 outputBuffer;
	HISGetFileIndexDebugReturn* output;
}

// HISGetFirstValidRequest__Fv
// Start address: 0x34acf0
int32 HISGetFirstValidRequest()
{
	type_37 inputBuffer;
	HISGetFirstValidRequestParameter* input;
	type_40 outputBuffer;
	HISGetFirstValidRequestReturn* output;
}

// HISGetRequestDebug__FiP15HISRequestDebug
// Start address: 0x34ad80
void HISGetRequestDebug(int32 requestID, HISRequestDebug* requestDebug)
{
	type_83 inputBuffer;
	HISGetRequestDebugParameter* input;
	type_3 outputBuffer;
	HISGetRequestDebugReturn* output;
}

// HISFlushHostIOHandles__Fv
// Start address: 0x34ae70
void HISFlushHostIOHandles()
{
	type_82 inputBuffer;
	HISFlushHostIOHandlesParameter* input;
	type_1 outputBuffer;
	HISFlushHostIOHandlesReturn* output;
}

// HISGetFileSize__Fi
// Start address: 0x34af00
int32 HISGetFileSize(int32 fileIndex)
{
	type_69 inputBuffer;
	HISGetFileSizeParameter* input;
	type_76 outputBuffer;
	HISGetFileSizeReturn* output;
}

// HISWaitForRequest__Fv
// Start address: 0x34afb0
void HISWaitForRequest()
{
	type_70 inputBuffer;
	HISWaitForRequestParameter* input;
	type_77 outputBuffer;
	HISWaitForRequestReturn* output;
}

// HISCloseRequest__Fi
// Start address: 0x34b040
uint8 HISCloseRequest(int32 requestID)
{
	type_42 inputBuffer;
	HISCloseRequestParameter* input;
	type_50 outputBuffer;
	HISCloseRequestReturn* output;
}

// HISCancelRequest__Fi
// Start address: 0x34b0f0
uint8 HISCancelRequest(int32 requestID)
{
	type_25 inputBuffer;
	HISCancelRequestParameter* input;
	type_32 outputBuffer;
	HISCancelRequestReturn* output;
}

// HISGetRequestStatus__Fi
// Start address: 0x34b1a0
HISStatus HISGetRequestStatus(int32 requestID)
{
	type_0 inputBuffer;
	HISGetRequestStatusParameter* input;
	type_5 outputBuffer;
	HISGetRequestStatusReturn* output;
}

// HISLoadBlockAsync__FiiiPv13HISMemoryTypeii
// Start address: 0x34b250
int32 HISLoadBlockAsync(int32 fileIndex, int32 sourceBlock, int32 sourceSize, void* destinationAddress, HISMemoryType destinationType, int32 priority, int32 flags)
{
	type_57 inputBuffer;
	HISLoadBlockAsyncParameter* input;
	type_60 outputBuffer;
	HISLoadBlockAsyncReturn* output;
}

// HISGetFileIndex__FPCc
// Start address: 0x34b370
int32 HISGetFileIndex(int8* filename)
{
	type_35 inputBuffer;
	HISGetFileIndexParameter* input;
	type_38 outputBuffer;
	HISGetFileIndexReturn* output;
}

// HISGetVersion__Fv
// Start address: 0x34b420
int32 HISGetVersion()
{
	type_27 inputBuffer;
	HISGetVersionParameter* input;
	type_34 outputBuffer;
	HISGetVersionReturn* output;
}

// HISInit__F12HISMediaType
// Start address: 0x34b4b0
void HISInit(HISMediaType mediaType)
{
	type_16 inputBuffer;
	HISInitParameter* input;
	type_21 outputBuffer;
	HISInitReturn* output;
}

// HISInitStubs__Fv
// Start address: 0x34b550
void HISInitStubs()
{
}

