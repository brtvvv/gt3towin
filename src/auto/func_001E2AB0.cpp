#include "m2c.h"
extern "C" s8 func_001E2A58(s8);                               /* extern */

extern "C" void func_001E2AB0(s32 arg0) {
    s8 *var_s0;

    var_s0 = arg0 + 0xD6;
    do {
        *var_s0 = func_001E2A58(*var_s0);
        var_s0 += 1;
    } while ((u32) var_s0 < (u32) (arg0 + 0xD8));
}
