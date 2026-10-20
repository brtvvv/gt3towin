#include "m2c.h"
extern "C" s32 func_001C41B0(s32, s32, s32);                   /* extern */

extern "C" s32 func_001C3740(void *arg0, s32 arg1) {
    s32 temp_a0;

    temp_a0 = M2C_FIELD(arg0, s32 *, 0x6C);
    if (temp_a0 == 0) {
        return 0;
    }
    return func_001C41B0(temp_a0, M2C_FIELD(arg0, s32 *, 0x70), arg1);
}
