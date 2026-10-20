#define DEF_func_001C2E78
#include "m2c.h"
#include "funcs.h"
extern M2C_UNK D_00336D60 __attribute__((section(".data")));
extern M2C_UNK D_00353FA0 __attribute__((section(".data")));
extern s32 D_004B3FA0 __attribute__((section(".data")));

extern "C" s32 *func_001C2E78(void) {
    if (D_004B3FA0 == 0) {
        func_001B5758();
        func_0027D5F8((s32) &D_004B3FA0, (s32) &D_00336D60, (s32) &D_00353FA0, 1);
    }
    return &D_004B3FA0;
}
