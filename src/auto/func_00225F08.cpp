#include "m2c.h"
extern "C" f32 func_00225E08();                                /* extern */
extern f32 D_00354480;
extern f32 D_00354C60;

extern "C" s32 func_00225F08(void *arg0) {
    f32 temp_f1;
    s32 var_v0;

    temp_f1 = (D_00354C60 * M2C_FIELD(arg0, f32 *, 0xC)) / func_00225E08();
    var_v0 = 0;
    if (!(D_00354480 < temp_f1)) {
        var_v0 = 1;
        if (!((D_00354480 * 0.5f) < temp_f1)) {
            var_v0 = 3;
            if ((D_00354480 * 0.25f) < temp_f1) {
                var_v0 = 2;
            }
        }
    }
    return var_v0;
}
