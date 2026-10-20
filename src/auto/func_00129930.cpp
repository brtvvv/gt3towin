#include "m2c.h"
extern "C" void func_00129930(void *arg0, f32 fparg0) {
    f32 var_f0;

    var_f0 = 1.0f;
    if (fparg0 < 1.0f) {
        /* Duplicate return node #1. Try simplifying control flow for better match */
        M2C_FIELD(arg0, f32 *, 0x20) = var_f0;
        return;
    }
    var_f0 = 3.0f;
    if (!(fparg0 > 3.0f)) {
        M2C_FIELD(arg0, f32 *, 0x20) = fparg0;
        return;
    }
    M2C_FIELD(arg0, f32 *, 0x20) = var_f0;
}
