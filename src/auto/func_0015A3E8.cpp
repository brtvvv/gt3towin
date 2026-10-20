#define DEF_func_0015A3E8
#include "m2c.h"
#include "funcs.h"
extern M2C_UNK D_00321790 __attribute__((section(".data")));
extern M2C_UNK D_00353250 __attribute__((section(".data")));
extern s32 D_004B3420 __attribute__((section(".data")));

extern "C" s32 *func_0015A3E8(void) {
    if (D_004B3420 == 0) {
        func_0015A610();
        func_0027D5F8((s32) &D_004B3420, (s32) &D_00321790, (s32) &D_00353250, 1);
    }
    return &D_004B3420;
}
