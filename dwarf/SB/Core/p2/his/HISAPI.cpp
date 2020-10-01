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

type asyncRequestBuffers;
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
}

// HISFlushAsyncRequests__Fv
// Start address: 0x34b600
void HISFlushAsyncRequests()
{
}

// HISPlayExternalStreamAsync__Fiiiiiiii
// Start address: 0x34b630
void HISPlayExternalStreamAsync(int32 voice, int32 leftVolume, int32 rightVolume, int32 pitch, int32 flags, int32 attack, int32 release, int32 blockSize)
{
}

// HISJoinStereoVoicesAsync__Fii
// Start address: 0x34b690
void HISJoinStereoVoicesAsync(int32 voice1, int32 voice2)
{
}

// HISResumeVoiceAsync__Fi
// Start address: 0x34b6d0
void HISResumeVoiceAsync(int32 voice)
{
}

// HISPauseVoiceAsync__Fi
// Start address: 0x34b710
void HISPauseVoiceAsync(int32 voice)
{
}

// HISStopVoiceAsync__Fi
// Start address: 0x34b750
void HISStopVoiceAsync(int32 voice)
{
}

// HISSetVoicePitchAsync__Fii
// Start address: 0x34b790
void HISSetVoicePitchAsync(int32 voice, int32 pitch)
{
}

// HISSetVoiceVolumeAsync__Fiii
// Start address: 0x34b7d0
void HISSetVoiceVolumeAsync(int32 voice, int32 leftVolume, int32 rightVolume)
{
}

// HISPlayStreamAsync__Fiiiiiiiiiiii
// Start address: 0x34b810
void HISPlayStreamAsync(int32 voice, int32 leftVolume, int32 rightVolume, int32 pitch, int32 fileIndex, int32 logicalSectorNumber, int32 dataSize, int32 flags, int32 attack, int32 release, int32 blockSize, int32 interleaveSectors)
{
}

// HISPlaySoundAsync__FiiiiUiiib
// Start address: 0x34b890
void HISPlaySoundAsync(int32 voice, int32 leftVolume, int32 rightVolume, int32 pitch, uint32 address, int32 attack, int32 release, uint8 paused)
{
}

// HISLoadBlock__FiiiPv13HISMemoryTypeii
// Start address: 0x34b8f0
HISStatus HISLoadBlock(int32 fileIndex, int32 sourceBlock, int32 sourceSize, void* destinationAddress, HISMemoryType destinationType, int32 priority, int32 flags)
{
	int32 id;
	HISStatus status;
}

