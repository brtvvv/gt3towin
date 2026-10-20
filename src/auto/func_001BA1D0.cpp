#define DEF_func_001BA1D0
#include "m2c.h"
#include "funcs.h"
extern M2C_UNK D_003355C8 __attribute__((section(".data")));
extern s32 D_004B3EE0 __attribute__((section(".data")));
extern M2C_UNK D_004B3F10 __attribute__((section(".data")));

extern "C" s32 *func_001BA1D0(void) {
    if (D_004B3EE0 == 0) {
        func_001BC950();
        func_0027D620((s32) &D_004B3EE0, (s32) &D_003355C8, (s32) &D_004B3F10);
    }
    return &D_004B3EE0;
}
