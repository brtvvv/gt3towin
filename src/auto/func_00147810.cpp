#define DEF_func_00147810
#include "m2c.h"
#include "funcs.h"
extern M2C_UNK D_0031D980 __attribute__((section(".data")));
extern s32 D_004B32F0 __attribute__((section(".data")));
extern M2C_UNK D_004B3310 __attribute__((section(".data")));

extern "C" s32 *func_00147810(void) {
    if (D_004B32F0 == 0) {
        func_00147BA0();
        func_0027D620((s32) &D_004B32F0, (s32) &D_0031D980, (s32) &D_004B3310);
    }
    return &D_004B32F0;
}
