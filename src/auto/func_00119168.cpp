#define DEF_func_00119168
#include "m2c.h"
#include "funcs.h"
extern M2C_UNK D_00310730 __attribute__((section(".data")));
extern s32 D_004B2F60 __attribute__((section(".data")));
extern M2C_UNK D_004B3EF0 __attribute__((section(".data")));

extern "C" s32 *func_00119168(void) {
    if (D_004B2F60 == 0) {
        func_001BB828();
        func_0027D620((s32) &D_004B2F60, (s32) &D_00310730, (s32) &D_004B3EF0);
    }
    return &D_004B2F60;
}
