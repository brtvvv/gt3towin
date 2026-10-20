#include "m2c.h"
extern "C" s32 func_0020C128(s32 arg0, f32 fparg0) {
    s32 var_v0;

    var_v0 = arg0 == 1;
    if (fparg0 < 0.5f) {
        var_v0 = 0;
    }
    return var_v0;
}
