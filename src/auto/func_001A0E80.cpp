#include "m2c.h"
extern "C" s32 func_001A2830(s32, s32, s32, s32);              /* extern */

extern "C" void func_001A0E80(s32 arg0, void *arg1) {
    if (M2C_FIELD(arg1, s32 *, 0xC) == 0) {
        M2C_FIELD(arg1, s32 *, 0xC) = func_001A2830(M2C_FIELD(arg1, s32 *, 4), arg0, M2C_FIELD(arg1, s32 *, 0), M2C_FIELD(arg1, s32 *, 8));
    }
}
