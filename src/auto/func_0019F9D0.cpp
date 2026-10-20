#include "m2c.h"
extern "C" M2C_UNK func_00257F80();                            /* extern */
extern f32 D_003517D4;

extern "C" void func_0019F9D0(void *arg0, void *arg1) {
    s32 var_v0;
    s32 var_v1;

    var_v1 = 1;
    if (!(M2C_FIELD(arg0, f32 *, 8) < D_003517D4)) {
        var_v1 = 0;
    }
    var_v0 = 1;
    if (!(M2C_FIELD(arg1, f32 *, 8) < D_003517D4)) {
        var_v0 = 0;
    }
    if ((var_v1 != 0) && (var_v0 != 0)) {
        func_00257F80();
    }
}
