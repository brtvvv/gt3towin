#include "m2c.h"
extern "C" s32 func_001B5D18();                                /* extern */

extern "C" void func_001B5DF8(void *arg0) {
    s32 temp_v0;

    temp_v0 = func_001B5D18();
    if (temp_v0 != 0) {
        M2C_FIELD(arg0, s32 *, 0x130) = temp_v0;
    }
}
