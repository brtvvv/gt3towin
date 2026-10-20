#define DEF_func_001749E8
#include "m2c.h"
#include "funcs.h"
extern M2C_UNK D_00327140 __attribute__((section(".data")));
extern M2C_UNK D_00353658 __attribute__((section(".data")));
extern s32 D_004B37B0 __attribute__((section(".data")));

extern "C" s32 *func_001749E8(void) {
    if (D_004B37B0 == 0) {
        func_001CB368();
        func_0027D5F8((s32) &D_004B37B0, (s32) &D_00327140, (s32) &D_00353658, 1);
    }
    return &D_004B37B0;
}
