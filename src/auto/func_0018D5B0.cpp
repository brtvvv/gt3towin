#include "m2c.h"
extern "C" M2C_UNK func_0017A100(s32, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */

extern "C" void func_0018D5B0(void *arg0, s32 arg1) {
    s32 temp_s0;

    if (M2C_FIELD(arg0, s32 *, 0xC) == 1) {
        temp_s0 = arg1 + 0x84;
        func_0017A100(temp_s0, 0x14, 0x13, 0);
        func_0017A100(temp_s0, 8, 0, 0);
    }
}
