#include "m2c.h"
extern "C" M2C_UNK func_002137A8(s32);                         /* extern */

extern "C" void func_00213DA0(s32 arg0) {
    s32 temp_s1;
    s32 var_s0;

    var_s0 = arg0;
    temp_s1 = var_s0 + 0x8400;
    do {
        func_002137A8(var_s0);
        var_s0 += 0x300;
    } while (var_s0 < temp_s1);
}
