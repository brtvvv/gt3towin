#define DEF_func_00173B10
#include "m2c.h"
#include "funcs.h"
extern M2C_UNK D_00326B10 __attribute__((section(".data")));
extern M2C_UNK D_00354E00;
extern s32 D_004B3790 __attribute__((section(".data")));

extern "C" s32 *func_00173B10(void) {
    if (D_004B3790 == 0) {
        func_001CCCF8();
        func_0027D620((s32) &D_004B3790, (s32) &D_00326B10, (s32) &D_00354E00);
    }
    return &D_004B3790;
}
