#include "m2c.h"
extern "C" void func_001401A0(void *arg0) {
    s32 temp_v0;

    temp_v0 = M2C_FIELD(arg0, s32 *, 0xE4C) - 1;
    M2C_FIELD(arg0, s32 *, 0xE4C) = temp_v0;
    if (temp_v0 <= 0) {
        M2C_FIELD(arg0, s32 *, 0xE48) = 0;
    }
}
