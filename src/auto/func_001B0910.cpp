#define DEF_func_001B0910
#include "m2c.h"
#include "funcs.h"
extern M2C_UNK D_00332DD0 __attribute__((section(".data")));
extern M2C_UNK D_00354DE8;
extern s32 D_004B3DE0 __attribute__((section(".data")));

extern "C" s32 *func_001B0910(void) {
    if (D_004B3DE0 == 0) {
        func_001B1DF0();
        func_0027D620((s32) &D_004B3DE0, (s32) &D_00332DD0, (s32) &D_00354DE8);
    }
    return &D_004B3DE0;
}
