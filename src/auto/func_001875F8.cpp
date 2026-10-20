#include "m2c.h"
extern "C" M2C_UNK func_00232C10(void *, s32);                 /* extern */

extern "C" void func_001875F8(s32 arg0, void *arg1) {
    s32 temp_s1;
    void *temp_s0;
    void *temp_s3;

    temp_s3 = arg0 + 0x58;
    temp_s0 = arg1 + 0x20;
    temp_s1 = M2C_FIELD(arg1, s32 *, 0x14);
    func_00232C10(temp_s0, arg0 + 0x70);
    M2C_FIELD(temp_s0, s32 *, 0x1E8) = (s32) ((temp_s1 != 0) ? 1 : 0x100);
    if (M2C_FIELD(temp_s0, s32 *, 0x1E0) != 0) {
        M2C_FIELD(arg1, s32 *, 0x20E8) = (s32) M2C_FIELD(temp_s3, s32 *, 0x10);
        M2C_FIELD(arg1, s32 *, 0x20E4) = (s32) M2C_FIELD(temp_s3, s32 *, 0xC);
    }
    M2C_FIELD(arg1, s32 *, 0x20E0) = 0;
}
