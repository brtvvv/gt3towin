#include "m2c.h"
extern "C" M2C_UNK func_00216040(s32, M2C_UNK);                /* extern */

extern "C" void func_00216788(s32 arg0, s32 arg1) {
    s32 var_s0;
    s32 var_s1;

    var_s1 = 7;
    var_s0 = (arg1 * 0xAA0) + arg0;
    do {
        func_00216040(var_s0, 2);
        var_s1 -= 1;
        var_s0 += 0x154;
    } while (var_s1 >= 0);
}
