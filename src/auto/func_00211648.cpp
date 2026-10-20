#include "m2c.h"
extern "C" M2C_UNK func_001F6128(s32, s32);                    /* extern */

extern "C" void func_00211648(void *arg0) {
    s32 temp_a1;
    s32 temp_v1;

    temp_v1 = M2C_FIELD(arg0, s32 *, 0x124);
    if (temp_v1 != 0) {
        temp_a1 = M2C_FIELD(arg0, s32 *, 0x128);
        if ((temp_a1 != 0) && (M2C_FIELD(arg0, s32 *, 0x130) == 0)) {
            func_001F6128(temp_v1, temp_a1);
        }
    }
}
