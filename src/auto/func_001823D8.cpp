#include "m2c.h"
extern "C" M2C_UNK func_00232C10(void *, s32);                 /* extern */

extern "C" void func_001823D8(s32 arg0, void *arg1) {
    void *temp_s0;
    void *temp_s2;

    if (M2C_FIELD(arg1, s32 *, 0x14) == 0) {
        temp_s0 = arg1 + 0x20;
        temp_s2 = arg0 + 0x58;
        func_00232C10(temp_s0, arg0 + 0x70);
        M2C_FIELD(temp_s0, s32 *, 0x1E8) = 0x100;
        if (M2C_FIELD(temp_s0, s32 *, 0x1E0) != 0) {
            M2C_FIELD(arg1, s32 *, 0x20E8) = (s32) M2C_FIELD(temp_s2, s32 *, 0x10);
            M2C_FIELD(arg1, s32 *, 0x20E4) = (s32) M2C_FIELD(temp_s2, s32 *, 0xC);
        }
    }
}
