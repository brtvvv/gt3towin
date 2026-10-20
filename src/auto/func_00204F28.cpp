#define DEF_func_00204F28
#include "m2c.h"
#include "funcs.h"
extern M2C_UNK D_00340138 __attribute__((section(".data")));
extern M2C_UNK D_004B42C0 __attribute__((section(".data")));
extern s32 D_004B4310 __attribute__((section(".data")));

extern "C" s32 *func_00204F28(void) {
    if (D_004B4310 == 0) {
        func_001FFC30();
        func_0027D620((s32) &D_004B4310, (s32) &D_00340138, (s32) &D_004B42C0);
    }
    return &D_004B4310;
}
