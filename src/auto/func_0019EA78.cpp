#define DEF_func_0019EA78
#include "m2c.h"
#include "funcs.h"
extern M2C_UNK D_00331250 __attribute__((section(".data")));
extern s32 D_004B2C70 __attribute__((section(".data")));
extern M2C_UNK D_004B3D50 __attribute__((section(".data")));

extern "C" s32 *func_0019EA78(void) {
    if (D_004B2C70 == 0) {
        func_0019EC50();
        func_0027D620((s32) &D_004B2C70, (s32) &D_00331250, (s32) &D_004B3D50);
    }
    return &D_004B2C70;
}
