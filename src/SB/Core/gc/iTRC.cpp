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



int ResetButton::EnableReset() 
{  
   return ResetButton::mResetEnabled = 1;
}

int ResetButton::DisableReset() 
{  
   return ResetButton::mResetEnabled = 0;
}

void ResetButton::SetSndKillFunction(void (*Func)())
{
  
}

void ResetButton::CheckResetButton()
{
  
}

bool iTRCDisk::Init(void)
{
  bool RFInit = ROMFont::Init();
  return RFInit;
}

void iTRCDisk::SetErrorMessage(const char*)
{
  
}

void iTRCDisk::ResetMessage()
{
}

void iTRCDisk::SetPadStopRumblingFunction(void (*)(void))
{

}

void iTRCDisk::SetSndSuspendFunction(void (*)(void))
{

}

void iTRCDisk::SetSndResumeFunction(void (*)(void))
{

}

void iTRCDisk::SetSndKillFunction(void (*)(void))
{

}

void iTRCDisk::SetMovieSuspendFunction(void (*)(void))
{

}

void iTRCDisk::SetMovieResumeFunction(void (*)(void))
{

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
