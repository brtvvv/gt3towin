#define DEF_func_00210EE0
#include "m2c.h"
#include "funcs.h"
extern M2C_UNK D_00340FF8 __attribute__((section(".data")));
extern M2C_UNK D_00354E40;
extern s32 D_004B4380 __attribute__((section(".data")));

extern "C" s32 *func_00210EE0(void) {
    if (D_004B4380 == 0) {
        func_0020FEE8();
        func_0027D620((s32) &D_004B4380, (s32) &D_00340FF8, (s32) &D_00354E40);
    }
    return &D_004B4380;
}
