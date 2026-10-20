#include "m2c.h"
extern f32 D_00354478;

extern "C" s32 func_00225EB0(f32 fparg0) {
    s32 var_v0;

    var_v0 = 0;
    if (!(D_00354478 < fparg0)) {
        var_v0 = 1;
        if (!((D_00354478 * 0.5f) < fparg0)) {
            var_v0 = 3;
            if ((D_00354478 * 0.25f) < fparg0) {
                var_v0 = 2;
            }
        }
    }
    return var_v0;
}
