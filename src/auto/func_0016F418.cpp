#define DEF_func_0016F418
#include "m2c.h"
#include "funcs.h"
extern "C" void func_0016F418(f32 *arg0, f32 *arg1, f32 fparg0, f32 fparg1) {
    f32 temp_f20;
    f32 temp_f20_2;
    f32 temp_f21;
    f32 temp_f21_2;

    temp_f20 = *arg0;
    temp_f21 = *arg1;
    temp_f20_2 = temp_f20 + (fparg0 * 15.0f);
    temp_f21_2 = temp_f21 + (fparg1 * 30.0f);
    func_00258118(temp_f20, temp_f21, 0.0f, temp_f20_2, temp_f21_2, 0.0f);
    *arg0 = temp_f20_2 + (fparg0 * 30.0f);
    *arg1 = temp_f21_2;
    func_00258118(temp_f20_2, temp_f21_2, 0.0f, *arg0, temp_f21_2, 0.0f);
}
