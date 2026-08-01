#include "varbits.h"

#define VARBITS_MAX_BITS 32
#define VARBITS_LENS_COUNT (VARBITS_MAX_BITS + 1)
#define VARBITS_MAX_BITLEVEL 128
#define VARBITS_BITLEVEL_COUNT (VARBITS_MAX_BITLEVEL + 1)

const u32 VarBitsLens[VARBITS_LENS_COUNT] RAD_ATTRIBUTE_ALIGN(32) = {
    0x00000000, 0x00000001, 0x00000003, 0x00000007, 0x0000000F, 0x0000001F, 0x0000003F,
    0x0000007F, 0x000000FF, 0x000001FF, 0x000003FF, 0x000007FF, 0x00000FFF, 0x00001FFF,
    0x00003FFF, 0x00007FFF, 0x0000FFFF, 0x0001FFFF, 0x0003FFFF, 0x0007FFFF, 0x000FFFFF,
    0x001FFFFF, 0x003FFFFF, 0x007FFFFF, 0x00FFFFFF, 0x01FFFFFF, 0x03FFFFFF, 0x07FFFFFF,
    0x0FFFFFFF, 0x1FFFFFFF, 0x3FFFFFFF, 0x7FFFFFFF, 0xFFFFFFFF,
};
const double VarBitsLensalign = 0.0;

const u8 _bitlevels[VARBITS_BITLEVEL_COUNT] RAD_ATTRIBUTE_ALIGN(64) = {
    0, 1,
    2, 2,
    3, 3, 3, 3,
    4, 4, 4, 4, 4, 4, 4, 4,
    5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5,
    6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6,
    6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6,
    7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7,
    7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7,
    7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7,
    7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7,
    8,
};
const double _bitlevelsalign = 0.0;

void VarBitsCopy(VARBITS PTR4* dest, VARBITS PTR4* src, u32 size)
{
    u32 value;

    while (size >= 8) {
        if (src->bitlen > 7) {
            value = src->bits & GetBitsLen(8);
            src->bits >>= 8;
            src->bitlen -= 8;
        } else {
            register VARBITSTEMP word = *src->cur;

            value = (src->bits | (word << src->bitlen)) & GetBitsLen(8);
            src->bits = word >> (8 - src->bitlen);
            src->bitlen += BITSTYPELEN - 8;
            VARBITS_ADVANCE_CUR(src->cur);
        }
        VarBitsPut(*dest, value, 8);
        size -= 8;
    }

    if (size) {
        VarBitsGet(value, u32, *src, size);
        VarBitsPut(*dest, value, size);
    }
}
