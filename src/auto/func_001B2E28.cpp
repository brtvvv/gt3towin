#include "m2c.h"
extern "C" M2C_UNK func_001B2560(s32);                         /* extern */

extern "C" void func_001B2E28(s32 arg0) {
    s32 var_s0;
    s32 var_s1;

    var_s1 = 6;
    var_s0 = arg0 + 0x240;
    do {
        var_s1 -= 1;
        func_001B2560(var_s0);
        var_s0 += 0xF0;
    } while (var_s1 >= 0);
}
