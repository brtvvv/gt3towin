#include "m2c.h"
extern "C" void func_00207B70(void *arg0) {
    f32 temp_f2;
    f32 temp_f2_2;
    f32 temp_f4;
    f32 var_f0;

    temp_f4 = M2C_FIELD(arg0, f32 *, 0);
    temp_f2 = M2C_FIELD(arg0, f32 *, 4);
    temp_f2_2 = temp_f2 + ((((0.0f - temp_f4) * 30.0f) + (temp_f2 * -10.0f)) / 60.0f);
    M2C_FIELD(arg0, f32 *, 4) = temp_f2_2;
    if (temp_f2_2 > 900.0f) {
        M2C_FIELD(arg0, f32 *, 4) = 900.0f;
    }
    var_f0 = M2C_FIELD(arg0, f32 *, 4);
    if (var_f0 < -900.0f) {
        M2C_FIELD(arg0, f32 *, 4) = -900.0f;
        var_f0 = -900.0f;
    }
    M2C_FIELD(arg0, f32 *, 0) = (f32) (temp_f4 + (var_f0 / 60.0f));
}
