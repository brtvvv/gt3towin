#define DEF_func_001C6D08
#include "m2c.h"
#include "funcs.h"
extern M2C_UNK D_00337F20 __attribute__((section(".data")));
extern M2C_UNK D_00354DF8;
extern s32 D_004B4020 __attribute__((section(".data")));

extern "C" s32 *func_001C6D08(void) {
    if (D_004B4020 == 0) {
        func_001C1060();
        func_0027D620((s32) &D_004B4020, (s32) &D_00337F20, (s32) &D_00354DF8);
    }
    return &D_004B4020;
}
