#define DEF_func_001B63F0
#include "m2c.h"
#include "funcs.h"
extern M2C_UNK D_00334888 __attribute__((section(".data")));
extern M2C_UNK D_00353EC0 __attribute__((section(".data")));
extern s32 D_004B3E90 __attribute__((section(".data")));

extern "C" s32 *func_001B63F0(void) {
    if (D_004B3E90 == 0) {
        func_001B5758();
        func_0027D5F8((s32) &D_004B3E90, (s32) &D_00334888, (s32) &D_00353EC0, 1);
    }
    return &D_004B3E90;
}
