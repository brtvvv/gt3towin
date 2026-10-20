#define DEF_func_00203E58
#include "m2c.h"
#include "funcs.h"
extern M2C_UNK D_0033FF28 __attribute__((section(".data")));
extern M2C_UNK D_004B42C0 __attribute__((section(".data")));
extern s32 D_004B42F0 __attribute__((section(".data")));

extern "C" s32 *func_00203E58(void) {
    if (D_004B42F0 == 0) {
        func_001FFC30();
        func_0027D620((s32) &D_004B42F0, (s32) &D_0033FF28, (s32) &D_004B42C0);
    }
    return &D_004B42F0;
}
