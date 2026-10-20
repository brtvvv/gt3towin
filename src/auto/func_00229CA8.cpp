#include "m2c.h"
extern "C" M2C_UNK func_00229C30(s32, u32);                    /* extern */

extern "C" void func_00229CA8(s32 arg0, u32 arg1) {
    s32 var_s1;
    u32 temp_s2;
    u32 var_s0;

    var_s0 = arg1;
    temp_s2 = var_s0 + 0x3C;
    var_s1 = arg0;
    do {
        func_00229C30(var_s1, var_s0);
        var_s0 += 0xC;
        var_s1 += 0xC;
    } while (var_s0 < temp_s2);
}
