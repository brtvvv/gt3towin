#include "m2c.h"
extern "C" M2C_UNK func_00232C10(void *, s32);                 /* extern */

extern "C" void func_00190420(s32 arg0, void *arg1) {
    void *temp_s0;

    if (M2C_FIELD(arg1, s32 *, 0x14) == 0) {
        temp_s0 = arg1 + 0x20;
        func_00232C10(temp_s0, arg0 + 0x60);
        M2C_FIELD(temp_s0, s32 *, 0x1E8) = 0x100;
    }
}
