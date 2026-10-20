#include "m2c.h"
extern "C" s32 func_00201330();                                /* extern */

extern "C" s32 func_00203398(void *arg0) {
    s32 var_v1;

    var_v1 = 3;
    if (M2C_FIELD(arg0, s32 *, 0xA78) == 3) {
        var_v1 = func_00201330();
    }
    return var_v1;
}
