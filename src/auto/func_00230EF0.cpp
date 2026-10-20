#include "m2c.h"
extern "C" void func_00230EF0(s32 arg0) {
    s32 var_v0;
    s8 *var_a0;

    var_a0 = arg0 + 0x3A;
    var_v0 = 2;
    do {
        *var_a0 = 0;
        var_v0 -= 1;
        var_a0 -= 1;
    } while (var_v0 >= 0);
}
