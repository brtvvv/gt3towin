#include "m2c.h"
extern "C" s8 func_001DA6D0(s32 arg0, s32 arg1, s8 *arg2, s8 *arg3) {
    *arg2 = -0x64;
    *arg3 = 0x64;
    return M2C_FIELD((arg0 + (arg1 >> 1)), s8 *, 0x62);
}
