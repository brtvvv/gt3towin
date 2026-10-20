#define DEF_func_00151E88
#include "m2c.h"
#include "funcs.h"
extern M2C_UNK D_0031F980 __attribute__((section(".data")));
extern M2C_UNK D_004B3470 __attribute__((section(".data")));
extern s32 D_004B3490 __attribute__((section(".data")));

extern "C" s32 *func_00151E88(void) {
    if (D_004B3490 == 0) {
        func_00151F58();
        func_0027D620((s32) &D_004B3490, (s32) &D_0031F980, (s32) &D_004B3470);
    }
    return &D_004B3490;
}
