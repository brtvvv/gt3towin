#include "m2c.h"
extern "C" M2C_UNK func_00218FC0(s32, s32);                    /* extern */
extern "C" M2C_UNK func_0023BFF8(s32);                         /* extern */

extern "C" void func_00218FF8(s32 arg0, s32 arg1) {
    s32 var_s0;

    if (arg1 != 0) {
        var_s0 = arg0 + 0xD8;
        func_0023BFF8(var_s0);
    } else {
        var_s0 = arg0 + 0xD8;
    }
    func_00218FC0(arg0, var_s0);
}
