#define DEF_func_0021B920
#include "m2c.h"
#include "funcs.h"
extern M2C_UNK D_003422E0 __attribute__((section(".data")));
extern M2C_UNK D_004B2D90 __attribute__((section(".data")));
extern s32 D_004B2DA0 __attribute__((section(".data")));

extern "C" s32 *func_0021B920(void) {
    if (D_004B2DA0 == 0) {
        func_0021B998();
        func_0027D620((s32) &D_004B2DA0, (s32) &D_003422E0, (s32) &D_004B2D90);
    }
    return &D_004B2DA0;
}
