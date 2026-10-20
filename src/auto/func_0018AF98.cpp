#define DEF_func_0018AF98
#include "m2c.h"
#include "funcs.h"
extern M2C_UNK D_0032DB38 __attribute__((section(".data")));
extern s32 D_004B3170 __attribute__((section(".data")));
extern M2C_UNK D_004B3D90 __attribute__((section(".data")));

extern "C" s32 *func_0018AF98(void) {
    if (D_004B3170 == 0) {
        func_001A4BF0();
        func_0027D620((s32) &D_004B3170, (s32) &D_0032DB38, (s32) &D_004B3D90);
    }
    return &D_004B3170;
}
