#define DEF_func_00207158
#include "m2c.h"
#include "funcs.h"
extern M2C_UNK D_003406D8 __attribute__((section(".data")));
extern M2C_UNK D_004B42C0 __attribute__((section(".data")));
extern s32 D_004B4360 __attribute__((section(".data")));

extern "C" s32 *func_00207158(void) {
    if (D_004B4360 == 0) {
        func_001FFC30();
        func_0027D620((s32) &D_004B4360, (s32) &D_003406D8, (s32) &D_004B42C0);
    }
    return &D_004B4360;
}
