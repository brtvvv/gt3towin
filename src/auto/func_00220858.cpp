#define DEF_func_00220858
#include "m2c.h"
#include "funcs.h"
extern "C" void func_00220858(s32 arg0, f32 fparg0, f32 fparg1, f32 fparg2) {
    f32 temp_f1;

    temp_f1 = fparg2 * 0.75f;
    func_00220760(arg0, fparg0, fparg1 - temp_f1, temp_f1 / fparg0);
}
