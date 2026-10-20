#define DEF_func_00103728
#include "m2c.h"
#include "funcs.h"
extern M2C_UNK D_0030AA38 __attribute__((section(".data")));
extern M2C_UNK D_00354D00;
extern s32 D_004B2E70 __attribute__((section(".data")));

extern "C" s32 *func_00103728(void) {
    if (D_004B2E70 == 0) {
        func_00103778();
        func_0027D620((s32) &D_004B2E70, (s32) &D_0030AA38, (s32) &D_00354D00);
    }
    return &D_004B2E70;
}
