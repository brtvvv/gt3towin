#define DEF_func_001872D8
#include "m2c.h"
#include "funcs.h"
extern M2C_UNK D_0032C3C8 __attribute__((section(".data")));
extern M2C_UNK D_004B2C50 __attribute__((section(".data")));
extern s32 D_004B39B0 __attribute__((section(".data")));

extern "C" s32 *func_001872D8(void) {
    if (D_004B39B0 == 0) {
        func_00187328();
        func_0027D620((s32) &D_004B39B0, (s32) &D_0032C3C8, (s32) &D_004B2C50);
    }
    return &D_004B39B0;
}
