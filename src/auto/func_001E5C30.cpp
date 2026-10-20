#include "m2c.h"
extern "C" M2C_UNK func_001F8938(s32);                         /* extern */

extern "C" void func_001E5C30(s32 arg0) {
    void *temp_s0;

    func_001F8938(arg0 + 0xEC8);
    temp_s0 = arg0 + 0xF84;
    if (M2C_FIELD(temp_s0, u8 *, 0x534) == 8) {
        M2C_FIELD(temp_s0, f32 *, 0x430) = 1.0f;
    }
}
