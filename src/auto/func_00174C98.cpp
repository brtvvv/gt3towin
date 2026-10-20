#define DEF_func_00174C98
#include "m2c.h"
#include "funcs.h"
extern M2C_UNK D_00327160 __attribute__((section(".data")));
extern M2C_UNK D_00353660 __attribute__((section(".data")));
extern s32 D_004B37A0 __attribute__((section(".data")));

extern "C" s32 *func_00174C98(void) {
    if (D_004B37A0 == 0) {
        func_001B5758();
        func_0027D5F8((s32) &D_004B37A0, (s32) &D_00327160, (s32) &D_00353660, 1);
    }
    return &D_004B37A0;
}
