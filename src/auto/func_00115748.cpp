#define DEF_func_00115748
#include "m2c.h"
#include "funcs.h"
extern M2C_UNK D_0030F2B8 __attribute__((section(".data")));
extern s32 D_004B2F10 __attribute__((section(".data")));
extern M2C_UNK D_004B4070 __attribute__((section(".data")));

extern "C" s32 *func_00115748(void) {
    if (D_004B2F10 == 0) {
        func_001CC858();
        func_0027D620((s32) &D_004B2F10, (s32) &D_0030F2B8, (s32) &D_004B4070);
    }
    return &D_004B2F10;
}
