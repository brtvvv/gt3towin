#define DEF_func_001B33E0
#include "m2c.h"
#include "funcs.h"
extern M2C_UNK D_003339A0 __attribute__((section(".data")));
extern s32 D_004B2CF0 __attribute__((section(".data")));
extern M2C_UNK D_004B3E30 __attribute__((section(".data")));

extern "C" s32 *func_001B33E0(void) {
    if (D_004B2CF0 == 0) {
        func_001B3568();
        func_0027D620((s32) &D_004B2CF0, (s32) &D_003339A0, (s32) &D_004B3E30);
    }
    return &D_004B2CF0;
}
