#include "m2c.h"
extern "C" u8 func_001DA6F0(s32 arg0, s32 arg1, s8 *arg2, s8 *arg3) {
    *arg2 = 0;
    *arg3 = 0x64;
    return M2C_FIELD((arg0 + (arg1 >> 1)), u8 *, 0x38);
}
