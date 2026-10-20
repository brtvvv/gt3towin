#define DEF_func_00102878
#include "m2c.h"
#include "funcs.h"
extern M2C_UNK D_0030A118 __attribute__((section(".data")));
extern M2C_UNK D_004B2E10 __attribute__((section(".data")));
extern s32 D_004B2E20 __attribute__((section(".data")));

extern "C" s32 *func_00102878(void) {
    if (D_004B2E20 == 0) {
        func_001029D8();
        func_0027D620((s32) &D_004B2E20, (s32) &D_0030A118, (s32) &D_004B2E10);
    }
    return &D_004B2E20;
}
