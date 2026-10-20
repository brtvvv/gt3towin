#define DEF_func_001520C8
#include "m2c.h"
#include "funcs.h"
extern M2C_UNK D_0031FA60 __attribute__((section(".data")));
extern M2C_UNK D_004B3390 __attribute__((section(".data")));
extern s32 D_004B33B0 __attribute__((section(".data")));

extern "C" s32 *func_001520C8(void) {
    if (D_004B33B0 == 0) {
        func_00152170();
        func_0027D620((s32) &D_004B33B0, (s32) &D_0031FA60, (s32) &D_004B3390);
    }
    return &D_004B33B0;
}
