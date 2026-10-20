#include "m2c.h"
extern "C" M2C_UNK func_00232C10(void *, s32);                 /* extern */

extern "C" void func_0018D828(s32 arg0, void *arg1) {
    s32 temp_s0;
    void *temp_s2;

    temp_s2 = arg1 + 0x20;
    temp_s0 = M2C_FIELD(arg1, s32 *, 0x14);
    func_00232C10(temp_s2, arg0 + 0x60);
    M2C_FIELD(temp_s2, s32 *, 0x1E8) = (s32) (temp_s0 + 0x100);
    M2C_FIELD(arg1, s32 *, 0x20E0) = 0;
}
