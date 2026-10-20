#define DEF_func_00187328
#include "m2c.h"
#include "funcs.h"
extern M2C_UNK D_0032C3E8 __attribute__((section(".data")));
extern M2C_UNK D_00354D80;
extern s32 D_004B2C50 __attribute__((section(".data")));

extern "C" s32 *func_00187328(void) {
    if (D_004B2C50 == 0) {
        func_0017AA40();
        func_0027D620((s32) &D_004B2C50, (s32) &D_0032C3E8, (s32) &D_00354D80);
    }
    return &D_004B2C50;
}
