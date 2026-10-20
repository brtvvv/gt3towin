#include "m2c.h"
extern "C" s32 func_001C4110(s32, s32, s32);                   /* extern */

extern "C" s32 func_001C3708(void *arg0, s32 arg1) {
    s32 temp_a0;

    temp_a0 = M2C_FIELD(arg0, s32 *, 0x60);
    if (temp_a0 == 0) {
        return 0;
    }
    return func_001C4110(temp_a0, M2C_FIELD(arg0, s32 *, 0x64), arg1);
}
