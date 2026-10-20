#define DEF_func_001D28A8
#include "m2c.h"
#include "funcs.h"
extern M2C_UNK D_00339220 __attribute__((section(".data")));
extern M2C_UNK D_00354DF8;
extern s32 D_004B4100 __attribute__((section(".data")));

extern "C" s32 *func_001D28A8(void) {
    if (D_004B4100 == 0) {
        func_001C1060();
        func_0027D620((s32) &D_004B4100, (s32) &D_00339220, (s32) &D_00354DF8);
    }
    return &D_004B4100;
}
