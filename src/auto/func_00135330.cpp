#define DEF_func_00135330
#include "m2c.h"
#include "funcs.h"
extern M2C_UNK D_003181A0 __attribute__((section(".data")));
extern s32 D_004B3180 __attribute__((section(".data")));
extern M2C_UNK D_004B4070 __attribute__((section(".data")));

extern "C" s32 *func_00135330(void) {
    if (D_004B3180 == 0) {
        func_001CC858();
        func_0027D620((s32) &D_004B3180, (s32) &D_003181A0, (s32) &D_004B4070);
    }
    return &D_004B3180;
}
