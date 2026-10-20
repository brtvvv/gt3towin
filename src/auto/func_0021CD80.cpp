#include "m2c.h"
extern "C" s32 func_0021CD20(s32, s32);                        /* extern */

extern "C" s32 func_0021CD80(s32 arg0, s32 arg1, u32 arg2) {
    s32 temp_v0;
    s32 var_s0;
    s32 var_s2;
    s32 var_s3;
    u32 var_s1;

    var_s1 = arg2;
    var_s3 = 0;
    var_s2 = 0;
    var_s0 = arg1;
    if (var_s1 >= 8U) {
        do {
            var_s1 -= 8;
            temp_v0 = func_0021CD20(arg0, var_s0) << var_s2;
            var_s0 += 8;
            var_s3 |= temp_v0;
            var_s2 += 8;
        } while (var_s1 >= 8U);
    }
    if (var_s1 != 0) {
        var_s3 |= (func_0021CD20(arg0, var_s0) & ((1 << var_s1) - 1) & 0xFF) << var_s2;
    }
    return var_s3;
}
