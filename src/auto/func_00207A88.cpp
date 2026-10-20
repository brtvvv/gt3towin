#include "m2c.h"
extern "C" void func_00207A88(void *arg0, f32 fparg0, f32 fparg1) {
    f32 temp_f1;
    f32 temp_f1_2;
    f32 temp_f3;
    f32 var_f0;
    f32 var_f2;

    temp_f3 = M2C_FIELD(arg0, f32 *, 0);
    M2C_FIELD(arg0, f32 *, 4) = fparg0;
    var_f2 = (fparg0 - temp_f3) * 30.0f;
    if (temp_f3 < fparg0) {
        var_f2 *= fparg1;
    }
    temp_f1 = M2C_FIELD(arg0, f32 *, 8);
    temp_f1_2 = temp_f1 + ((var_f2 + (temp_f1 * -10.0f)) / 60.0f);
    M2C_FIELD(arg0, f32 *, 8) = temp_f1_2;
    if (temp_f1_2 > 10.0f) {
        M2C_FIELD(arg0, f32 *, 8) = 10.0f;
    }
    var_f0 = M2C_FIELD(arg0, f32 *, 8);
    if (var_f0 < -30.0f) {
        M2C_FIELD(arg0, f32 *, 8) = -30.0f;
        var_f0 = -30.0f;
    }
    M2C_FIELD(arg0, f32 *, 0) = (f32) (temp_f3 + (var_f0 / 60.0f));
}
