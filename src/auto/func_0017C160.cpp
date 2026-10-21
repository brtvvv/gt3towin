#define DEF_func_0017C160
#include "m2c.h"
#include "funcs.h"
extern f32 D_00353784 __attribute__((section(".data")));

extern "C" s32 func_0017C160(f32 *arg0, f32 fparg0) {
    f32 temp_f1;
    f32 var_f12;
    s32 var_v0;

    var_f12 = fparg0;
    temp_f1 = *arg0;
    var_v0 = 1;
    if (temp_f1 == D_00353784) {
        var_v0 = 0;
    }
    if ((var_v0 == 0) || (temp_f1 < var_f12)) {
        if (999.9f < var_f12) {
            var_f12 = 999.9f;
        }
        *arg0 = var_f12;
        return 1;
    }
    return 0;
}
