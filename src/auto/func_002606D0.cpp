#include "m2c.h"
extern s32 D_00354AC4;

extern "C" s32 func_002606D0(void *arg0, void *arg1) {
    s32 temp_a2;
    s32 temp_a3;

    temp_a3 = M2C_FIELD(arg1, s32 *, 0);
    temp_a2 = M2C_FIELD(arg1, s32 *, 4);
    M2C_FIELD(arg0, s32 *, 0x18) = temp_a3;
    M2C_FIELD(arg0, s32 *, 0x1C) = temp_a2;
    M2C_FIELD(arg0, s32 *, 0x20) = (s32) ((temp_a3 >> 4) * (temp_a2 >> 4));
    D_00354AC4 = 0;
    return 0;
}
