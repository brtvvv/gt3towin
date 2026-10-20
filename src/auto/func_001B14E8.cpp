#define DEF_func_001B14E8
#include "m2c.h"
#include "funcs.h"
extern M2C_UNK D_00333238 __attribute__((section(".data")));
extern M2C_UNK D_00354CF8;
extern s32 D_004B3DF0 __attribute__((section(".data")));

extern "C" s32 *func_001B14E8(void) {
    if (D_004B3DF0 == 0) {
        func_001B1540();
        func_0027D620((s32) &D_004B3DF0, (s32) &D_00333238, (s32) &D_00354CF8);
    }
    return &D_004B3DF0;
}
