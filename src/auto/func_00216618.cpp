#include "m2c.h"
extern "C" M2C_UNK func_00216040(s32, s32, s32);               /* extern */

extern "C" void func_00216618(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 temp_a2;

    temp_a2 = arg2 * 0x154;
    func_00216040((arg1 * 0xAA0) + arg0 + temp_a2, arg3, temp_a2);
}
