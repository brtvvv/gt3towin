#include "m2c.h"
extern "C" M2C_UNK func_00217DA0(s32);                         /* extern */
extern "C" M2C_UNK func_00217E88(s32);                         /* extern */

extern "C" s32 func_00217E20(s32 arg0) {
    s32 var_s0;
    s32 var_s1;

    var_s1 = 0x17D;
    var_s0 = arg0;
    do {
        var_s1 -= 1;
        func_00217DA0(var_s0);
        var_s0 += 4;
    } while (var_s1 != -1);
    func_00217E88(arg0);
    return arg0;
}
