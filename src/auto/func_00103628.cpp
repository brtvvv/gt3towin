#define DEF_func_00103628
#include "m2c.h"
#include "funcs.h"
extern M2C_UNK D_0030A9F8 __attribute__((section(".data")));
extern s32 D_004B2E50 __attribute__((section(".data")));
extern M2C_UNK D_004B2E70 __attribute__((section(".data")));

extern "C" s32 *func_00103628(void) {
    if (D_004B2E50 == 0) {
        func_00103728();
        func_0027D620((s32) &D_004B2E50, (s32) &D_0030A9F8, (s32) &D_004B2E70);
    }
    return &D_004B2E50;
}
