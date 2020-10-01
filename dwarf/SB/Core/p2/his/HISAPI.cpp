typedef enum HISMemoryType;
typedef enum HISStatus;


typedef s8 type[4096];

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
s8* asyncRequestBuffer;
s32 asyncRequestCurrent;

void HISFlushAsyncRequestsNoWait();
void HISFlushAsyncRequests();
void HISPlayExternalStreamAsync(s32 voice, s32 leftVolume, s32 rightVolume, s32 pitch, s32 flags, s32 attack, s32 release, s32 blockSize);
void HISJoinStereoVoicesAsync(s32 voice1, s32 voice2);
void HISResumeVoiceAsync(s32 voice);
void HISPauseVoiceAsync(s32 voice);
void HISStopVoiceAsync(s32 voice);
void HISSetVoicePitchAsync(s32 voice, s32 pitch);
void HISSetVoiceVolumeAsync(s32 voice, s32 leftVolume, s32 rightVolume);
void HISPlayStreamAsync(s32 voice, s32 leftVolume, s32 rightVolume, s32 pitch, s32 fileIndex, s32 logicalSectorNumber, s32 dataSize, s32 flags, s32 attack, s32 release, s32 blockSize, s32 interleaveSectors);
void HISPlaySoundAsync(s32 voice, s32 leftVolume, s32 rightVolume, s32 pitch, u32 address, s32 attack, s32 release, u8 paused);
HISStatus HISLoadBlock(s32 fileIndex, s32 sourceBlock, s32 sourceSize, void* destinationAddress, HISMemoryType destinationType, s32 priority, s32 flags);

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
void HISPlayExternalStreamAsync(s32 voice, s32 leftVolume, s32 rightVolume, s32 pitch, s32 flags, s32 attack, s32 release, s32 blockSize)
{
}

// HISJoinStereoVoicesAsync__Fii
// Start address: 0x34b690
void HISJoinStereoVoicesAsync(s32 voice1, s32 voice2)
{
}

// HISResumeVoiceAsync__Fi
// Start address: 0x34b6d0
void HISResumeVoiceAsync(s32 voice)
{
}

// HISPauseVoiceAsync__Fi
// Start address: 0x34b710
void HISPauseVoiceAsync(s32 voice)
{
}

// HISStopVoiceAsync__Fi
// Start address: 0x34b750
void HISStopVoiceAsync(s32 voice)
{
}

// HISSetVoicePitchAsync__Fii
// Start address: 0x34b790
void HISSetVoicePitchAsync(s32 voice, s32 pitch)
{
}

// HISSetVoiceVolumeAsync__Fiii
// Start address: 0x34b7d0
void HISSetVoiceVolumeAsync(s32 voice, s32 leftVolume, s32 rightVolume)
{
}

// HISPlayStreamAsync__Fiiiiiiiiiiii
// Start address: 0x34b810
void HISPlayStreamAsync(s32 voice, s32 leftVolume, s32 rightVolume, s32 pitch, s32 fileIndex, s32 logicalSectorNumber, s32 dataSize, s32 flags, s32 attack, s32 release, s32 blockSize, s32 interleaveSectors)
{
}

// HISPlaySoundAsync__FiiiiUiiib
// Start address: 0x34b890
void HISPlaySoundAsync(s32 voice, s32 leftVolume, s32 rightVolume, s32 pitch, u32 address, s32 attack, s32 release, u8 paused)
{
}

// HISLoadBlock__FiiiPv13HISMemoryTypeii
// Start address: 0x34b8f0
HISStatus HISLoadBlock(s32 fileIndex, s32 sourceBlock, s32 sourceSize, void* destinationAddress, HISMemoryType destinationType, s32 priority, s32 flags)
{
	s32 id;
	HISStatus status;
}

