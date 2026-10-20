#include "m2c.h"
extern "C" M2C_UNK func_001EF650(s32, u8, s32, s32);           /* extern */

extern "C" void func_001E19D0(void *arg0, s32 arg1) {
    s32 temp_a3;

    temp_a3 = arg1 * 0x1B00;
    func_001EF650(M2C_FIELD(arg0, s32 *, 4), M2C_FIELD(arg0, u8 *, 0x136C), M2C_FIELD(M2C_FIELD(arg0, void **, 0xC), s32 *, 0x12C) + temp_a3, temp_a3);
}
