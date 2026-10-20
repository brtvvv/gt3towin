#define DEF_func_001CC858
#include "m2c.h"
#include "funcs.h"
extern M2C_UNK D_00338780 __attribute__((section(".data")));
extern M2C_UNK D_00354D20;
extern s32 D_004B4070 __attribute__((section(".data")));

extern "C" s32 *func_001CC858(void) {
    if (D_004B4070 == 0) {
        func_00101B20();
        func_0027D620((s32) &D_004B4070, (s32) &D_00338780, (s32) &D_00354D20);
    }
    return &D_004B4070;
}
