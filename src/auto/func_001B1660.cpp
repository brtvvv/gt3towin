#include "m2c.h"
extern "C" s32 func_001B0BC8(s32);                             /* extern */

extern "C" s32 func_001B1660(s32 *arg0, s32 arg1) {
    s32 temp_a0;
    s32 var_v0;

    temp_a0 = *arg0;
    var_v0 = arg1;
    if (temp_a0 != 0) {
        var_v0 = func_001B0BC8(temp_a0);
    }
    return var_v0;
}
