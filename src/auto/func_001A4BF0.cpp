#define DEF_func_001A4BF0
#include "m2c.h"
#include "funcs.h"
extern M2C_UNK D_00331EA0 __attribute__((section(".data")));
extern M2C_UNK D_00354DC8;
extern s32 D_004B3D90 __attribute__((section(".data")));

extern "C" s32 *func_001A4BF0(void) {
    if (D_004B3D90 == 0) {
        func_001A3538();
        func_0027D620((s32) &D_004B3D90, (s32) &D_00331EA0, (s32) &D_00354DC8);
    }
    return &D_004B3D90;
}
