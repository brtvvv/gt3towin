#define DEF_func_00219080
#include "m2c.h"
#include "funcs.h"
extern M2C_UNK D_00341DA0 __attribute__((section(".data")));
extern M2C_UNK D_00341DB0 __attribute__((section(".data")));
extern s32 D_004B2C30 __attribute__((section(".data")));

extern "C" s32 *func_00219080(void) {
    if (D_004B2C30 == 0) {
        func_00239370();
        func_00125C08();
        func_0027D5F8((s32) &D_004B2C30, (s32) &D_00341DA0, (s32) &D_00341DB0, 2);
    }
    return &D_004B2C30;
}
