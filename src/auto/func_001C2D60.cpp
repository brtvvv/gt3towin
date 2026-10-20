#include "m2c.h"
extern "C" M2C_UNK func_001B5458();                            /* extern */
extern "C" M2C_UNK func_001CACC8(s32, s32);                    /* extern */

extern "C" void func_001C2D60(void *arg0, s32 arg1) {
    s32 temp_a0;

    func_001B5458();
    temp_a0 = M2C_FIELD(arg0, s32 *, 0x160);
    if (temp_a0 != 0) {
        func_001CACC8(temp_a0, arg1 ^ 1);
    }
}
