#define DEF_func_001A4C40
#include "m2c.h"
#include "funcs.h"
extern M2C_UNK D_00331EB8 __attribute__((section(".data")));
extern M2C_UNK D_004B2C10 __attribute__((section(".data")));
extern s32 D_004B3160 __attribute__((section(".data")));

extern "C" s32 *func_001A4C40(void) {
    if (D_004B3160 == 0) {
        func_001A3D00();
        func_0027D620((s32) &D_004B3160, (s32) &D_00331EB8, (s32) &D_004B2C10);
    }
    return &D_004B3160;
}
