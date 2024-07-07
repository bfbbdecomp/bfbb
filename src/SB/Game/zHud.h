#ifndef ZHUD_H
#define ZHUD_H

#include <types.h>

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
