#include "m2c.h"
extern "C" M2C_UNK func_0019FFD8(s32);                         /* extern */

extern "C" void func_00190D28(void *arg0) {
    s32 temp_a0;

    temp_a0 = M2C_FIELD(arg0, s32 *, 0xC);
    if (temp_a0 != 0) {
        func_0019FFD8(temp_a0);
    }
}
