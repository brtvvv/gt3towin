#define DEF_func_0018B858
#include "m2c.h"
#include "funcs.h"
extern s32 D_002F587C __attribute__((section(".data")));

extern "C" f32 func_0018B858(void) {
    f32 var_f0;

    var_f0 = 1.0f;
    if (D_002F587C != 0) {
        var_f0 = 0.75f;
    }
    return var_f0;
}
