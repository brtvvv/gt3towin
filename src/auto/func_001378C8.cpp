#define DEF_func_001378C8
#include "m2c.h"
#include "funcs.h"
extern M2C_UNK D_00318660 __attribute__((section(".data")));
extern M2C_UNK D_00354DF0;
extern s32 D_004B3190 __attribute__((section(".data")));

extern "C" s32 *func_001378C8(void) {
    if (D_004B3190 == 0) {
        func_001B91F8();
        func_0027D620((s32) &D_004B3190, (s32) &D_00318660, (s32) &D_00354DF0);
    }
    return &D_004B3190;
}
