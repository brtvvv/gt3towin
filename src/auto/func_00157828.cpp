#include "m2c.h"
extern "C" s32 func_00157188(s32);                             /* extern */
extern "C" s32 func_00240048();                                /* extern */
extern "C" s32 func_00240178(s32);                             /* extern */

extern "C" s32 func_00157828(s32 arg0) {
    s32 temp_v0;
    s32 var_v0;

    var_v0 = 0;
    if (func_00240048() == 2) {
        var_v0 = 0;
        if (func_00240178(arg0) != 0) {
            temp_v0 = func_00157188(arg0);
            if (temp_v0 < 0) {
                return -1;
            }
            var_v0 = temp_v0 == 1;
            /* Duplicate return node #5. Try simplifying control flow for better match */
            return var_v0;
        }
    }
    return var_v0;
}
