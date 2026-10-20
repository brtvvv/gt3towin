#include "m2c.h"
extern "C" M2C_UNK func_001B2738(void *, s32, s32, s32);       /* extern */

extern "C" void func_001B31B8(void *arg0, s32 arg1, s32 arg2) {
    s32 temp_v1;

    temp_v1 = M2C_FIELD(arg0, s32 *, 0x908);
    if ((u32) (temp_v1 - 1) < 2U) {
        func_001B2738(arg0 + ((arg1 * 0xF0) + 0x240), arg2, temp_v1 == 1, arg1);
    }
}
