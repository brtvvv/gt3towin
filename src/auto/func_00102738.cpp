#define DEF_func_00102738
#include "m2c.h"
#include "funcs.h"
extern M2C_UNK D_0030A0F8 __attribute__((section(".data")));
extern s32 D_004B2DF0 __attribute__((section(".data")));
extern M2C_UNK D_004B2E10 __attribute__((section(".data")));

extern "C" s32 *func_00102738(void) {
    if (D_004B2DF0 == 0) {
        func_001029D8();
        func_0027D620((s32) &D_004B2DF0, (s32) &D_0030A0F8, (s32) &D_004B2E10);
    }
    return &D_004B2DF0;
}
