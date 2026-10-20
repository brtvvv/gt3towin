#include "m2c.h"
extern "C" f32 func_00223248();                                /* extern */
extern f32 D_00352328;
extern f32 D_0035232C;
extern f32 D_00352330;

extern "C" s32 func_002232D8(void) {
    f32 temp_f0;
    s32 var_v0;

    temp_f0 = func_00223248();
    var_v0 = 0;
    if (!(D_00352328 < temp_f0)) {
        var_v0 = 1;
        if (!(D_0035232C < temp_f0)) {
            var_v0 = 3;
            if (D_00352330 < temp_f0) {
                var_v0 = 2;
            }
        }
    }
    return var_v0;
}
