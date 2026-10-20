#define DEF_func_00187168
#include "m2c.h"
#include "funcs.h"
extern M2C_UNK D_0032C360 __attribute__((section(".data")));
extern M2C_UNK D_004B2D40 __attribute__((section(".data")));
extern s32 D_004B3990 __attribute__((section(".data")));

extern "C" s32 *func_00187168(void) {
    if (D_004B3990 == 0) {
        func_001871B8();
        func_0027D620((s32) &D_004B3990, (s32) &D_0032C360, (s32) &D_004B2D40);
    }
    return &D_004B3990;
}
