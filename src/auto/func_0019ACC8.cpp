#define DEF_func_0019ACC8
#include "m2c.h"
#include "funcs.h"
extern M2C_UNK D_00330A18 __attribute__((section(".data")));
extern M2C_UNK D_004B2C60 __attribute__((section(".data")));
extern s32 D_004B3C00 __attribute__((section(".data")));

extern "C" s32 *func_0019ACC8(void) {
    if (D_004B3C00 == 0) {
        func_0019AD38();
        func_0027D620((s32) &D_004B3C00, (s32) &D_00330A18, (s32) &D_004B2C60);
    }
    return &D_004B3C00;
}
