#define DEF_func_001A3C10
#include "m2c.h"
#include "funcs.h"
extern M2C_UNK D_00331A90 __attribute__((section(".data")));
extern M2C_UNK D_00354DC8;
extern s32 D_004B3D70 __attribute__((section(".data")));

extern "C" s32 *func_001A3C10(void) {
    if (D_004B3D70 == 0) {
        func_001A3538();
        func_0027D620((s32) &D_004B3D70, (s32) &D_00331A90, (s32) &D_00354DC8);
    }
    return &D_004B3D70;
}
