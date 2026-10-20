#define DEF_func_002056C8
#include "m2c.h"
#include "funcs.h"
extern M2C_UNK D_00340258 __attribute__((section(".data")));
extern M2C_UNK D_004B42C0 __attribute__((section(".data")));
extern s32 D_004B4320 __attribute__((section(".data")));

extern "C" s32 *func_002056C8(void) {
    if (D_004B4320 == 0) {
        func_001FFC30();
        func_0027D620((s32) &D_004B4320, (s32) &D_00340258, (s32) &D_004B42C0);
    }
    return &D_004B4320;
}
