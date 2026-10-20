#define DEF_func_00176320
#include "m2c.h"
#include "funcs.h"
extern M2C_UNK D_00327B00 __attribute__((section(".data")));
extern M2C_UNK D_004B3800 __attribute__((section(".data")));
extern s32 D_004B3810 __attribute__((section(".data")));

extern "C" s32 *func_00176320(void) {
    if (D_004B3810 == 0) {
        func_00175D18();
        func_0027D620((s32) &D_004B3810, (s32) &D_00327B00, (s32) &D_004B3800);
    }
    return &D_004B3810;
}
