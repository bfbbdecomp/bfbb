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

// func_80017DE4
#pragma GLOBAL_ASM("asm/Core/x/xDebug.s",                                                          \
                   "create__8xtextboxFRC5xfontRC13basic_rect_esc__0_f_esc__1_Uiffff")

#if 1

// func_80017EA8
#pragma GLOBAL_ASM("asm/Core/x/xDebug.s", "__as__5xfontFRC5xfont")

#else

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

// func_80017EF4
#pragma GLOBAL_ASM("asm/Core/x/xDebug.s",                                                          \
                   "create__5xfontFUifff10iColor_tagRC13basic_rect_esc__0_f_esc__1_")

// func_80017F98
#pragma GLOBAL_ASM("asm/Core/x/xDebug.s", "__as__10iColor_tagFRC10iColor_tag")

float32 NSCREENY(float32 scale)
{
    return _781 * scale;
}

float32 NSCREENX(float32 scale)
{
    return _783 * scale;
}

// func_80017FD4
#pragma GLOBAL_ASM("asm/Core/x/xDebug.s", "contract__13basic_rect_esc__0_f_esc__1_Fffff")

// func_80018004
#pragma GLOBAL_ASM("asm/Core/x/xDebug.s", "expand__13basic_rect_esc__0_f_esc__1_Fffff")

// func_80018040
#pragma GLOBAL_ASM("asm/Core/x/xDebug.s",                                                          \
                   "__as__13basic_rect_esc__0_f_esc__1_FRC13basic_rect_esc__0_f_esc__1_")
