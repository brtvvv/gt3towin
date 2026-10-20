#include "m2c.h"
extern "C" s32 func_00217E00(s32, s32);                        /* extern */

extern "C" void func_00218430(s32 arg0, s32 arg1) {
    s32 var_s0;
    s32 var_s1;
    s32 var_v0;

    var_v0 = arg1;
    var_s1 = 0x17D;
    var_s0 = arg0;
    do {
        var_v0 = func_00217E00(var_s0, var_v0);
        var_s1 -= 1;
        var_s0 += 4;
    } while (var_s1 >= 0);
}
