#include "m2c.h"
extern "C" s32 func_00242F10(s32, s32, M2C_UNK, M2C_UNK);      /* extern */

extern "C" s32 func_001A9BE8(s32 arg0, s32 arg1) {
    return func_00242F10(arg1, arg0, 0, 0) != 0;
}
