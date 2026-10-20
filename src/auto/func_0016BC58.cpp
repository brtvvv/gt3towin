#define DEF_func_0016BC58
#include "m2c.h"
#include "funcs.h"
extern M2C_UNK D_00325000 __attribute__((section(".data")));
extern s32 D_004B3610 __attribute__((section(".data")));
extern M2C_UNK D_004B3640 __attribute__((section(".data")));

extern "C" s32 *func_0016BC58(void) {
    if (D_004B3610 == 0) {
        func_0016BCB0();
        func_0027D620((s32) &D_004B3610, (s32) &D_00325000, (s32) &D_004B3640);
    }
    return &D_004B3610;
}
