#define DEF_func_001D2940
#include "m2c.h"
#include "funcs.h"

extern "C" void *func_001D2940(void *arg0, f32 fparg0) {
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f1;

    temp_f1 = M2C_FIELD(arg0, f32 *, 0) * 0.016666668f;
    M2C_FIELD(arg0, f32 *, 0) = 0.0f;
    temp_f0 = M2C_FIELD(arg0, f32 *, 4) + temp_f1;
    temp_f0_2 = temp_f0 - (temp_f0 * fparg0 * 0.016666668f);
    M2C_FIELD(arg0, f32 *, 4) = temp_f0_2;
    M2C_FIELD(arg0, f32 *, 8) = (f32) (M2C_FIELD(arg0, f32 *, 8) + (temp_f0_2 * 0.016666668f));
    return arg0;
}
