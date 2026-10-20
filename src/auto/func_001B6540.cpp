#define DEF_func_001B6540
#include "m2c.h"
#include "funcs.h"
extern M2C_UNK D_003348B8 __attribute__((section(".data")));
extern M2C_UNK D_00354DF8;
extern s32 D_004B3E80 __attribute__((section(".data")));

extern "C" s32 *func_001B6540(void) {
    if (D_004B3E80 == 0) {
        func_001C1060();
        func_0027D620((s32) &D_004B3E80, (s32) &D_003348B8, (s32) &D_00354DF8);
    }
    return &D_004B3E80;
}
