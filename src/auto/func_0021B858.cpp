#define DEF_func_0021B858
#include "m2c.h"
#include "funcs.h"
extern M2C_UNK D_00342268 __attribute__((section(".data")));
extern s32 D_004B2BF0 __attribute__((section(".data")));
extern M2C_UNK D_004B2D30 __attribute__((section(".data")));

extern "C" s32 *func_0021B858(void) {
    if (D_004B2BF0 == 0) {
        func_0021B8D0();
        func_0027D620((s32) &D_004B2BF0, (s32) &D_00342268, (s32) &D_004B2D30);
    }
    return &D_004B2BF0;
}
