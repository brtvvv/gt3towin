#define DEF_func_0019EC50
#include "m2c.h"
#include "funcs.h"
extern M2C_UNK D_00331268 __attribute__((section(".data")));
extern M2C_UNK D_004B2BD0 __attribute__((section(".data")));
extern s32 D_004B3D50 __attribute__((section(".data")));

extern "C" s32 *func_0019EC50(void) {
    if (D_004B3D50 == 0) {
        func_00196A00();
        func_0027D620((s32) &D_004B3D50, (s32) &D_00331268, (s32) &D_004B2BD0);
    }
    return &D_004B3D50;
}
