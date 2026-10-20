#define DEF_func_0017CF50
#include "m2c.h"
#include "funcs.h"
extern s32 D_00353790;
extern M2C_UNK D_0049DC30 __attribute__((section(".data")));

extern "C" M2C_UNK *func_0017CF50(void) {
    if (D_00353790 == 0) {
        func_00211430((s32) &D_0049DC30);
        D_00353790 = 1;
        func_0027EA30((s32) func_0017CF28);
    }
    return &D_0049DC30;
}
