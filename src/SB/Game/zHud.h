#ifndef ZHUD_H
#define ZHUD_H

#include "xHud.h"
#include "xHudMeter.h"
#include "xHudModel.h"
#include "xString.h"

#include <types.h>

extern const basic_rect<F32> screen_bounds;

struct special_data
{
    char* hud_model;
    S32 max_value;
};

namespace zhud
{
    void render();
    void update(F32 dt);
    void show();
    void hide();
    void init();
    void destroy();
    void setup();
} // namespace zhud

#endif
