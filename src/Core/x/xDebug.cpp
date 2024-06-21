#include "xDebug.h"

#include <types.h>

extern float32 _781; // 0.0020833334f.
extern float32 _783; // 0.0015625f.

void xprintf(const char* msg, ...)
{
    // Redacted. :}
}

int32 xDebugModeAdd(char* mode, void(*debugFunc))
{
    // Redacted. :}
    return -1;
}

void xDebugInit()
{
    // Redacted. :}
}

void xDebugUpdate()
{
    // Redacted. :}
}

void xDebugExit()
{
    // Redacted. :}
}

void xDebugTimestampScreen()
{
    // Redacted. :}
}

void xtextbox::render(bool cache) const
{
    render(temp_layout(cache), 0, -1);
}




#if 0
// WIP.
xfont& xfont::operator=(const xfont& other)
{
    iColor_tag tmpColor;
    float32 tmp;
    float32 tmp2;

    tmp = other.width;
    this->id = other.id;
    tmp2 = other.height;
    this->width = tmp;
    tmp = other.space;
    this->height = tmp2;
    tmpColor = other.color;
    this->space = tmp;
    tmp2 = other.clip.x;
    this->color = tmpColor;
    tmp = other.clip.y;
    this->clip.x = tmp2;
    tmp2 = other.clip.w;
    this->clip.y = tmp;
    tmp = other.clip.h;
    this->clip.w = tmp2;
    this->clip.h = tmp;

    return *this;
}

#endif







float32 NSCREENY(float32 scale)
{
    return _781 * scale;
}

float32 NSCREENX(float32 scale)
{
    return _783 * scale;
}
