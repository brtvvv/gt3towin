#define DEF_func_00102960
#include "m2c.h"
#include "funcs.h"
extern M2C_UNK D_0030A138 __attribute__((section(".data")));
extern s32 D_004B2E00 __attribute__((section(".data")));
extern M2C_UNK D_004B2E10 __attribute__((section(".data")));

extern "C" s32 *func_00102960(void) {
    if (D_004B2E00 == 0) {
        func_001029D8();
        func_0027D620((s32) &D_004B2E00, (s32) &D_0030A138, (s32) &D_004B2E10);
    }
    return &D_004B2E00;
}
