#define DEF_func_0015A610
#include "m2c.h"
#include "funcs.h"
extern M2C_UNK D_00321810 __attribute__((section(".data")));
extern M2C_UNK D_00353248 __attribute__((section(".data")));
extern s32 D_004B3430 __attribute__((section(".data")));

extern "C" s32 *func_0015A610(void) {
    if (D_004B3430 == 0) {
        func_00151EE8();
        func_0027D5F8((s32) &D_004B3430, (s32) &D_00321810, (s32) &D_00353248, 1);
    }
    return &D_004B3430;
}
