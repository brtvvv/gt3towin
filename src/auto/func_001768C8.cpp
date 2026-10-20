#define DEF_func_001768C8
#include "m2c.h"
#include "funcs.h"
extern M2C_UNK D_00327DD8 __attribute__((section(".data")));
extern M2C_UNK D_00354D60;
extern s32 D_004B3820 __attribute__((section(".data")));

extern "C" s32 *func_001768C8(void) {
    if (D_004B3820 == 0) {
        func_00175710();
        func_0027D620((s32) &D_004B3820, (s32) &D_00327DD8, (s32) &D_00354D60);
    }
    return &D_004B3820;
}
