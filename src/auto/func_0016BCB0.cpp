#define DEF_func_0016BCB0
#include "m2c.h"
#include "funcs.h"
extern M2C_UNK D_00325020 __attribute__((section(".data")));
extern s32 D_004B3640 __attribute__((section(".data")));
extern M2C_UNK D_004B41C0 __attribute__((section(".data")));

extern "C" s32 *func_0016BCB0(void) {
    if (D_004B3640 == 0) {
        func_001D69F8();
        func_0027D620((s32) &D_004B3640, (s32) &D_00325020, (s32) &D_004B41C0);
    }
    return &D_004B3640;
}
