#define DEF_func_001DAD78
#include "m2c.h"
#include "funcs.h"
extern M2C_UNK D_002D40C0 __attribute__((section(".data")));

extern "C" f32 func_001DAD78(void *arg0) {
    f32 temp_f0;
    f32 var_f0;
    f32 var_f20;

    temp_f0 = func_001DBBD8((s32) &D_002D40C0);
    if (temp_f0 == 0.0f) {
        return 1.0f;
    }
    var_f20 = M2C_FIELD(arg0, f32 *, 8);
    if (var_f20 < 0.0f) {
        var_f20 -= func_001DBBA8((s32) &D_002D40C0);
    }
    var_f0 = var_f20 / temp_f0;
    if (var_f0 > 1.0f) {
        var_f0 = 1.0f;
    }
    return var_f0;
}
