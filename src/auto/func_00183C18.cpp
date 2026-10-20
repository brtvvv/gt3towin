#define DEF_func_00183C18
#include "m2c.h"
#include "funcs.h"
extern M2C_UNK D_0032B1E0 __attribute__((section(".data")));
extern M2C_UNK D_004B3900 __attribute__((section(".data")));
extern s32 D_004B3960 __attribute__((section(".data")));

extern "C" s32 *func_00183C18(void) {
    if (D_004B3960 == 0) {
        func_00182A88();
        func_0027D620((s32) &D_004B3960, (s32) &D_0032B1E0, (s32) &D_004B3900);
    }
    return &D_004B3960;
}
