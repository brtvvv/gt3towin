#define DEF_func_0019E9C8
#include "m2c.h"
#include "funcs.h"
extern M2C_UNK D_00331238 __attribute__((section(".data")));
extern s32 D_004B2BE0 __attribute__((section(".data")));
extern M2C_UNK D_004B3D50 __attribute__((section(".data")));

extern "C" s32 *func_0019E9C8(void) {
    if (D_004B2BE0 == 0) {
        func_0019EC50();
        func_0027D620((s32) &D_004B2BE0, (s32) &D_00331238, (s32) &D_004B3D50);
    }
    return &D_004B2BE0;
}
