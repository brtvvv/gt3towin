#include "m2c.h"
extern f32 D_00351EA4;
extern f32 D_00351EA8;

extern "C" f32 func_001EA038(s32 arg0, s32 *arg1) {
    if (arg0 >= 0xE1) {
        *arg1 = 1;
        return ((f32) (0xFA - arg0) * D_00351EA4) / 25.0f;
    }
    if (arg0 >= 0x19) {
        *arg1 = 2;
        return D_00351EA8;
    }
    *arg1 = 0;
    return 0.0f;
}
