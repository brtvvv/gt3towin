#include "m2c.h"
extern "C" M2C_UNK func_001F53A0(s32, s32, M2C_UNK);           /* extern */

extern "C" void func_001F5F38(void *arg0, s32 arg1) {
    s32 temp_v1;

    temp_v1 = M2C_FIELD(arg0, s32 *, 0x4C) + (arg1 << 0xF);
    M2C_FIELD(arg0, s32 *, 0x50) = temp_v1;
    func_001F53A0(arg0 + 8, temp_v1 + 0x1B00, 0x64F8);
}
