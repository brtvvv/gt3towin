#define DEF_func_0013BBD8
#include "m2c.h"
#include "funcs.h"
extern M2C_UNK D_0031A7F8 __attribute__((section(".data")));
extern M2C_UNK D_004B30B0 __attribute__((section(".data")));
extern s32 D_004B3220 __attribute__((section(".data")));

extern "C" s32 *func_0013BBD8(void) {
    if (D_004B3220 == 0) {
        func_00139078();
        func_0027D620((s32) &D_004B3220, (s32) &D_0031A7F8, (s32) &D_004B30B0);
    }
    return &D_004B3220;
}
