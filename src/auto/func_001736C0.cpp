#define DEF_func_001736C0
#include "m2c.h"
#include "funcs.h"
extern M2C_UNK D_00326978 __attribute__((section(".data")));
extern M2C_UNK D_00354D10;
extern s32 D_004B3730 __attribute__((section(".data")));

extern "C" s32 *func_001736C0(void) {
    if (D_004B3730 == 0) {
        func_00173718();
        func_0027D620((s32) &D_004B3730, (s32) &D_00326978, (s32) &D_00354D10);
    }
    return &D_004B3730;
}
