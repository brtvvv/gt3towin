#define DEF_func_0012CF90
#include "m2c.h"
#include "funcs.h"
extern M2C_UNK D_003164E0 __attribute__((section(".data")));
extern s32 D_004B3130 __attribute__((section(".data")));
extern M2C_UNK D_004B4070 __attribute__((section(".data")));

extern "C" s32 *func_0012CF90(void) {
    if (D_004B3130 == 0) {
        func_001CC858();
        func_0027D620((s32) &D_004B3130, (s32) &D_003164E0, (s32) &D_004B4070);
    }
    return &D_004B3130;
}
