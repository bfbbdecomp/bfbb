#include "iTRC.h"

#include <types.h>
#include <string.h>

bool ROMFont::Init()
{

}

void ROMFont::InitGX()
{

}

void ROMFont::InitVI()
{

}

void ROMFont::RenderBegin()
{

}

void ROMFont::RenderEnd()
{

}

void ROMFont::SwapBuffers()
{

}

void ROMFont::DrawCell(int, int, int, int)
{

}

void GXEnd()
{

}

void GXPosition3s16()
{

}

void ROMFont::LoadSheet(void*)
{

}

void GXSetTexCoordGen()
{

}

void ROMFont::DrawString(int, int, char*)
{

}

void ROMFont::GetWidth(char*)
{

}

void ROMFont::DrawTextBox(int, int, int, int, char*)
{

}

void ResetButton::EnableReset()
{
    ResetButton::mResetEnabled = 1;
}

void ResetButton::DisableReset()
{
    ResetButton::mResetEnabled = 0;
}

void ResetButton::SetSndKillFunction(void (*Func)())
{
    ResetButton::mSndKill = Func;
}

void ResetButton::CheckResetButton()
{

}

bool iTRCDisk::Init(void)
{
    return ROMFont::Init();
}

void iTRCDisk::SetErrorMessage(const char* message)
{
    strcpy(mMessage, message);
}

void iTRCDisk::ResetMessage()
{
    memset(mMessage, 0, 0x100);
}

void iTRCDisk::SetPadStopRumblingFunction(void (*Func)())
{
    mPadStopRumbling = Func;
}

void iTRCDisk::SetSndSuspendFunction(void (*Func)())
{
    mSndSuspend = Func;
}

void iTRCDisk::SetSndResumeFunction(void (*Func)())
{
    mSndResume = Func;
}

void iTRCDisk::SetSndKillFunction(void (*Func)())
{
    mSndKill = Func;
}

void iTRCDisk::SetMovieSuspendFunction(void (*Func)())
{
    mMovieSuspendFunction = Func;
}

void iTRCDisk::SetMovieResumeFunction(void (*Func)())
{
    mMovieResumeFunction = Func;
}

bool iTRCDisk::IsDiskIDed()
{

}

void iTRCDisk::DisplayErrorMessage()
{

}

void iTRCDisk::SetDVDState()
{

}

bool iTRCDisk::CheckDVDAndResetState()
{

}
