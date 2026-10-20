#define DEF_func_0016CBD0
#include "m2c.h"
#include "funcs.h"
extern M2C_UNK D_00325630 __attribute__((section(".data")));
extern s32 D_004B3660 __attribute__((section(".data")));
extern M2C_UNK D_004B4220 __attribute__((section(".data")));

extern "C" s32 *func_0016CBD0(void) {
    if (D_004B3660 == 0) {
        func_001D9038();
        func_0027D620((s32) &D_004B3660, (s32) &D_00325630, (s32) &D_004B4220);
    }
    return &D_004B3660;
}
