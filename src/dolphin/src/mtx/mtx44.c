#include <dolphin.h>
#include <dolphin/mtx.h>

void C_MTXOrtho(Mtx44 m, f32 t, f32 b, f32 l, f32 r, f32 n, f32 f)
{
    f32 tmp;

    tmp = 1 / (r - l);
    m[0][0] = 2 * tmp;
    m[0][1] = 0;
    m[0][2] = 0;
    m[0][3] = (tmp * -(r + l));
    tmp = 1 / (t - b);
    m[1][0] = 0;
    m[1][1] = 2 * tmp;
    m[1][2] = 0;
    m[1][3] = (tmp * -(t + b));
    m[2][0] = 0;
    m[2][1] = 0;
    tmp = 1 / (f - n);
    m[2][2] = (-1 * tmp);
    m[2][3] = (-f * tmp);
    m[3][0] = 0;
    m[3][1] = 0;
    m[3][2] = 0;
    m[3][3] = 1;
}
