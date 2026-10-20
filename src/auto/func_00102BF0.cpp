#define DEF_func_00102BF0
#include "m2c.h"
#include "funcs.h"
extern M2C_UNK D_0030A4E0 __attribute__((section(".data")));
extern M2C_UNK D_00354EE8;
extern s32 D_004B2E30 __attribute__((section(".data")));

extern "C" s32 *func_00102BF0(void) {
    if (D_004B2E30 == 0) {
        func_0025EF00();
        func_0027D620((s32) &D_004B2E30, (s32) &D_0030A4E0, (s32) &D_00354EE8);
    }
    return &D_004B2E30;
}
