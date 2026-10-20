#include "m2c.h"
extern "C" M2C_UNK func_0027ED70(s32, M2C_UNK, M2C_UNK);       /* extern */

extern "C" void func_002682E0(s32 arg0, s32 arg1) {
    s32 var_a0;
    s32 var_v1;

    var_a0 = arg0 + 0x30;
    var_v1 = 0;
loop_1:
    var_v1 += 1;
    if (var_a0 == arg1) {
        func_0027ED70(var_a0, 0, 0x20);
        return;
    }
    var_a0 += 0x20;
    if (var_v1 >= 4) {
        return;
    }
    goto loop_1;
}
