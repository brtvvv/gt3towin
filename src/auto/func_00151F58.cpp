#define DEF_func_00151F58
#include "m2c.h"
#include "funcs.h"
extern M2C_UNK D_0031F9D0 __attribute__((section(".data")));
extern M2C_UNK D_004B33B0 __attribute__((section(".data")));
extern s32 D_004B3470 __attribute__((section(".data")));

extern "C" s32 *func_00151F58(void) {
    if (D_004B3470 == 0) {
        func_001520C8();
        func_0027D620((s32) &D_004B3470, (s32) &D_0031F9D0, (s32) &D_004B33B0);
    }
    return &D_004B3470;
}
