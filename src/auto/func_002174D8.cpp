#include "m2c.h"
extern "C" M2C_UNK func_00217280(s32);                         /* extern */

extern "C" void func_002174D8(s32 arg0) {
    s32 temp_s1;
    s32 var_s0;

    var_s0 = arg0;
    temp_s1 = var_s0 + 0xB40;
    do {
        func_00217280(var_s0);
        var_s0 += 0x14;
    } while (var_s0 < temp_s1);
}
