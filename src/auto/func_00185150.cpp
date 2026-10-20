#define DEF_func_00185150
#include "m2c.h"
#include "funcs.h"
extern M2C_UNK D_0032B9B8 __attribute__((section(".data")));
extern M2C_UNK D_004B2C40 __attribute__((section(".data")));
extern s32 D_004B3970 __attribute__((section(".data")));

extern "C" s32 *func_00185150(void) {
    if (D_004B3970 == 0) {
        func_001851A0();
        func_0027D620((s32) &D_004B3970, (s32) &D_0032B9B8, (s32) &D_004B2C40);
    }
    return &D_004B3970;
}
