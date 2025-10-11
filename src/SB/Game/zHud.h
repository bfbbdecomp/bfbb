#ifndef ZHUD_H
#define ZHUD_H

#include <types.h>
#include "xString.h"
#include "xHudMeter.h"
#include "xHudModel.h"

struct special_data {
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
