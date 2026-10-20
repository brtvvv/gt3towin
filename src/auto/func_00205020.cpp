#define DEF_func_00205020
#include "m2c.h"
#include "funcs.h"
extern "C" void func_00205020(s32 arg0, s32 arg1, f32 fparg0) {
    f32 temp_f3;
    f32 temp_f3_2;
    f32 temp_f4;

    func_00204F88(arg0, arg1);
    temp_f4 = M2C_FIELD(arg0, f32 *, 0);
    temp_f3 = M2C_FIELD(arg0, f32 *, 8);
    temp_f3_2 = temp_f3 + (((fparg0 * (M2C_FIELD(arg0, f32 *, 4) - temp_f4)) + (temp_f3 * -10.0f)) / 50.0f);
    M2C_FIELD(arg0, f32 *, 8) = temp_f3_2;
    M2C_FIELD(arg0, f32 *, 0) = (f32) (temp_f4 + (temp_f3_2 / 50.0f));
}
