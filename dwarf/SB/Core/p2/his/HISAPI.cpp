typedef enum HISMemoryType;
typedef enum HISStatus;


typedef int8 type[4096];

enum HISMemoryType
{
	HIS_MEMORY_EE,
	HIS_MEMORY_IOP,
	HIS_MEMORY_SPU
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

int8 asyncRequestBuffers[4096];
int8* asyncRequestBuffer;
int32 asyncRequestCurrent;

void HISFlushAsyncRequestsNoWait();
void HISFlushAsyncRequests();
void HISPlayExternalStreamAsync(int32 voice, int32 leftVolume, int32 rightVolume, int32 pitch, int32 flags, int32 attack, int32 release, int32 blockSize);
void HISJoinStereoVoicesAsync(int32 voice1, int32 voice2);
void HISResumeVoiceAsync(int32 voice);
void HISPauseVoiceAsync(int32 voice);
void HISStopVoiceAsync(int32 voice);
void HISSetVoicePitchAsync(int32 voice, int32 pitch);
void HISSetVoiceVolumeAsync(int32 voice, int32 leftVolume, int32 rightVolume);
void HISPlayStreamAsync(int32 voice, int32 leftVolume, int32 rightVolume, int32 pitch, int32 fileIndex, int32 logicalSectorNumber, int32 dataSize, int32 flags, int32 attack, int32 release, int32 blockSize, int32 interleaveSectors);
void HISPlaySoundAsync(int32 voice, int32 leftVolume, int32 rightVolume, int32 pitch, uint32 address, int32 attack, int32 release, uint8 paused);
HISStatus HISLoadBlock(int32 fileIndex, int32 sourceBlock, int32 sourceSize, void* destinationAddress, HISMemoryType destinationType, int32 priority, int32 flags);

// HISFlushAsyncRequestsNoWait__Fv
// Start address: 0x34b5a0
void HISFlushAsyncRequestsNoWait()
{
	// Line 325, Address: 0x34b5a0, Func Offset: 0
	// Line 327, Address: 0x34b5ac, Func Offset: 0xc
	// Line 328, Address: 0x34b5b4, Func Offset: 0x14
	// Line 332, Address: 0x34b5bc, Func Offset: 0x1c
	// Line 333, Address: 0x34b5d0, Func Offset: 0x30
	// Line 335, Address: 0x34b5e0, Func Offset: 0x40
	// Line 336, Address: 0x34b5e4, Func Offset: 0x44
	// Line 338, Address: 0x34b5e8, Func Offset: 0x48
	// Func End, Address: 0x34b5f4, Func Offset: 0x54
}

// HISFlushAsyncRequests__Fv
// Start address: 0x34b600
void HISFlushAsyncRequests()
{
	// Line 315, Address: 0x34b600, Func Offset: 0
	// Line 317, Address: 0x34b60c, Func Offset: 0xc
	// Line 318, Address: 0x34b614, Func Offset: 0x14
	// Line 319, Address: 0x34b61c, Func Offset: 0x1c
	// Line 322, Address: 0x34b620, Func Offset: 0x20
	// Func End, Address: 0x34b62c, Func Offset: 0x2c
}

// HISPlayExternalStreamAsync__Fiiiiiiii
// Start address: 0x34b630
void HISPlayExternalStreamAsync(int32 voice, int32 leftVolume, int32 rightVolume, int32 pitch, int32 flags, int32 attack, int32 release, int32 blockSize)
{
	// Line 268, Address: 0x34b630, Func Offset: 0
	// Line 271, Address: 0x34b64c, Func Offset: 0x1c
	// Line 272, Address: 0x34b660, Func Offset: 0x30
	// Line 273, Address: 0x34b664, Func Offset: 0x34
	// Line 274, Address: 0x34b668, Func Offset: 0x38
	// Line 275, Address: 0x34b66c, Func Offset: 0x3c
	// Line 276, Address: 0x34b670, Func Offset: 0x40
	// Line 277, Address: 0x34b674, Func Offset: 0x44
	// Line 278, Address: 0x34b678, Func Offset: 0x48
	// Line 290, Address: 0x34b67c, Func Offset: 0x4c
	// Func End, Address: 0x34b684, Func Offset: 0x54
}

// HISJoinStereoVoicesAsync__Fii
// Start address: 0x34b690
void HISJoinStereoVoicesAsync(int32 voice1, int32 voice2)
{
	// Line 248, Address: 0x34b690, Func Offset: 0
	// Line 251, Address: 0x34b6ac, Func Offset: 0x1c
	// Line 252, Address: 0x34b6c0, Func Offset: 0x30
	// Line 258, Address: 0x34b6c4, Func Offset: 0x34
	// Func End, Address: 0x34b6cc, Func Offset: 0x3c
}

// HISResumeVoiceAsync__Fi
// Start address: 0x34b6d0
void HISResumeVoiceAsync(int32 voice)
{
	// Line 230, Address: 0x34b6d0, Func Offset: 0
	// Line 233, Address: 0x34b6ec, Func Offset: 0x1c
	// Line 238, Address: 0x34b700, Func Offset: 0x30
	// Func End, Address: 0x34b708, Func Offset: 0x38
}

// HISPauseVoiceAsync__Fi
// Start address: 0x34b710
void HISPauseVoiceAsync(int32 voice)
{
	// Line 213, Address: 0x34b710, Func Offset: 0
	// Line 216, Address: 0x34b72c, Func Offset: 0x1c
	// Line 221, Address: 0x34b740, Func Offset: 0x30
	// Func End, Address: 0x34b748, Func Offset: 0x38
}

// HISStopVoiceAsync__Fi
// Start address: 0x34b750
void HISStopVoiceAsync(int32 voice)
{
	// Line 196, Address: 0x34b750, Func Offset: 0
	// Line 199, Address: 0x34b76c, Func Offset: 0x1c
	// Line 204, Address: 0x34b780, Func Offset: 0x30
	// Func End, Address: 0x34b788, Func Offset: 0x38
}

// HISSetVoicePitchAsync__Fii
// Start address: 0x34b790
void HISSetVoicePitchAsync(int32 voice, int32 pitch)
{
	// Line 177, Address: 0x34b790, Func Offset: 0
	// Line 180, Address: 0x34b7ac, Func Offset: 0x1c
	// Line 181, Address: 0x34b7c0, Func Offset: 0x30
	// Line 187, Address: 0x34b7c4, Func Offset: 0x34
	// Func End, Address: 0x34b7cc, Func Offset: 0x3c
}

// HISSetVoiceVolumeAsync__Fiii
// Start address: 0x34b7d0
void HISSetVoiceVolumeAsync(int32 voice, int32 leftVolume, int32 rightVolume)
{
	// Line 156, Address: 0x34b7d0, Func Offset: 0
	// Line 159, Address: 0x34b7ec, Func Offset: 0x1c
	// Line 160, Address: 0x34b800, Func Offset: 0x30
	// Line 161, Address: 0x34b804, Func Offset: 0x34
	// Line 168, Address: 0x34b808, Func Offset: 0x38
	// Func End, Address: 0x34b810, Func Offset: 0x40
}

// HISPlayStreamAsync__Fiiiiiiiiiiii
// Start address: 0x34b810
void HISPlayStreamAsync(int32 voice, int32 leftVolume, int32 rightVolume, int32 pitch, int32 fileIndex, int32 logicalSectorNumber, int32 dataSize, int32 flags, int32 attack, int32 release, int32 blockSize, int32 interleaveSectors)
{
	// Line 115, Address: 0x34b810, Func Offset: 0
	// Line 118, Address: 0x34b82c, Func Offset: 0x1c
	// Line 119, Address: 0x34b840, Func Offset: 0x30
	// Line 120, Address: 0x34b844, Func Offset: 0x34
	// Line 121, Address: 0x34b848, Func Offset: 0x38
	// Line 122, Address: 0x34b84c, Func Offset: 0x3c
	// Line 123, Address: 0x34b850, Func Offset: 0x40
	// Line 124, Address: 0x34b854, Func Offset: 0x44
	// Line 125, Address: 0x34b858, Func Offset: 0x48
	// Line 126, Address: 0x34b85c, Func Offset: 0x4c
	// Line 127, Address: 0x34b860, Func Offset: 0x50
	// Line 128, Address: 0x34b868, Func Offset: 0x58
	// Line 129, Address: 0x34b870, Func Offset: 0x60
	// Line 130, Address: 0x34b878, Func Offset: 0x68
	// Line 145, Address: 0x34b87c, Func Offset: 0x6c
	// Func End, Address: 0x34b884, Func Offset: 0x74
}

// HISPlaySoundAsync__FiiiiUiiib
// Start address: 0x34b890
void HISPlaySoundAsync(int32 voice, int32 leftVolume, int32 rightVolume, int32 pitch, uint32 address, int32 attack, int32 release, uint8 paused)
{
	// Line 79, Address: 0x34b890, Func Offset: 0
	// Line 82, Address: 0x34b8ac, Func Offset: 0x1c
	// Line 83, Address: 0x34b8c0, Func Offset: 0x30
	// Line 84, Address: 0x34b8c4, Func Offset: 0x34
	// Line 85, Address: 0x34b8c8, Func Offset: 0x38
	// Line 86, Address: 0x34b8cc, Func Offset: 0x3c
	// Line 87, Address: 0x34b8d0, Func Offset: 0x40
	// Line 88, Address: 0x34b8d4, Func Offset: 0x44
	// Line 89, Address: 0x34b8d8, Func Offset: 0x48
	// Line 101, Address: 0x34b8dc, Func Offset: 0x4c
	// Func End, Address: 0x34b8e4, Func Offset: 0x54
}

// HISLoadBlock__FiiiPv13HISMemoryTypeii
// Start address: 0x34b8f0
HISStatus HISLoadBlock(int32 fileIndex, int32 sourceBlock, int32 sourceSize, void* destinationAddress, HISMemoryType destinationType, int32 priority, int32 flags)
{
	int32 id;
	HISStatus status;
	// Line 9, Address: 0x34b8f0, Func Offset: 0
	// Line 11, Address: 0x34b8fc, Func Offset: 0xc
	// Line 13, Address: 0x34b908, Func Offset: 0x18
	// Line 14, Address: 0x34b914, Func Offset: 0x24
	// Line 17, Address: 0x34b91c, Func Offset: 0x2c
	// Line 20, Address: 0x34b920, Func Offset: 0x30
	// Line 21, Address: 0x34b92c, Func Offset: 0x3c
	// Line 22, Address: 0x34b960, Func Offset: 0x70
	// Line 23, Address: 0x34b968, Func Offset: 0x78
	// Line 27, Address: 0x34b970, Func Offset: 0x80
	// Line 28, Address: 0x34b978, Func Offset: 0x88
	// Line 30, Address: 0x34b980, Func Offset: 0x90
	// Func End, Address: 0x34b994, Func Offset: 0xa4
}

