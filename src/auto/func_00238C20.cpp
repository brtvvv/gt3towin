#include "m2c.h"
extern "C" s32 func_00238C20(s32 arg0, s32 arg1) {
    return ((s32) M2C_FIELD((arg0 + (arg1 >> 3)), u8 *, 0x1E8) >> (arg1 & 7)) & 1;
}
