#include "m2c.h"
extern "C" M2C_UNK func_001C0768(s32);                         /* extern */

extern "C" void func_001505F0(void *arg0) {
    s32 temp_a0;

    temp_a0 = M2C_FIELD(arg0, s32 *, 0x50);
    if (temp_a0 != 0) {
        func_001C0768(temp_a0);
    }
    M2C_FIELD(arg0, s32 *, 0x50) = 0;
}
