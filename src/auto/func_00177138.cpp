#define DEF_func_00177138
#include "m2c.h"
#include "funcs.h"
extern M2C_UNK D_00328AA8 __attribute__((section(".data")));
extern M2C_UNK D_004B3800 __attribute__((section(".data")));
extern s32 D_004B3870 __attribute__((section(".data")));

extern "C" s32 *func_00177138(void) {
    if (D_004B3870 == 0) {
        func_00175D18();
        func_0027D620((s32) &D_004B3870, (s32) &D_00328AA8, (s32) &D_004B3800);
    }
    return &D_004B3870;
}
