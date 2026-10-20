#define DEF_func_001D38B0
#include "m2c.h"
#include "funcs.h"
extern M2C_UNK D_00339418 __attribute__((section(".data")));
extern M2C_UNK D_00354DF8;
extern s32 D_004B4110 __attribute__((section(".data")));

extern "C" s32 *func_001D38B0(void) {
    if (D_004B4110 == 0) {
        func_001C1060();
        func_0027D620((s32) &D_004B4110, (s32) &D_00339418, (s32) &D_00354DF8);
    }
    return &D_004B4110;
}
