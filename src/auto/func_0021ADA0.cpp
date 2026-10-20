#include "m2c.h"
extern "C" s32 func_00216650(s32, M2C_UNK, M2C_UNK);           /* extern */

extern "C" s32 func_0021ADA0(s32 arg0) {
    return func_00216650(arg0 + 0x1F550, 4, 0) != 0;
}
