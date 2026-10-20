#include "m2c.h"
extern f32 D_00354C64;

extern "C" void func_00226C80(f32 fparg0) {
    f32 var_f12;

    var_f12 = fparg0;
    if (var_f12 < 0.0f) {
        var_f12 = 0.0f;
    }
    if (var_f12 > 1.0f) {
        var_f12 = 1.0f;
    }
    D_00354C64 = var_f12;
}
