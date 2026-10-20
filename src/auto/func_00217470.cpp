#include "m2c.h"
extern "C" M2C_UNK func_00217250(s32);                         /* extern */
extern "C" M2C_UNK func_002174D8(s32);                         /* extern */

extern "C" s32 func_00217470(s32 arg0) {
    s32 var_s0;
    s32 var_s1;

    var_s1 = 0x8F;
    var_s0 = arg0;
    do {
        var_s1 -= 1;
        func_00217250(var_s0);
        var_s0 += 0x14;
    } while (var_s1 != -1);
    func_002174D8(arg0);
    return arg0;
}
