#define DEF_func_00153878
#include "m2c.h"
#include "funcs.h"
extern M2C_UNK D_00320480 __attribute__((section(".data")));
extern s32 D_004B34F0 __attribute__((section(".data")));
extern M2C_UNK D_004B3580 __attribute__((section(".data")));

extern "C" s32 *func_00153878(void) {
    if (D_004B34F0 == 0) {
        func_00153E98();
        func_0027D620((s32) &D_004B34F0, (s32) &D_00320480, (s32) &D_004B3580);
    }
    return &D_004B34F0;
}
