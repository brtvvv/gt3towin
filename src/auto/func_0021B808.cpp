#define DEF_func_0021B808
#include "m2c.h"
#include "funcs.h"
extern M2C_UNK D_00342248 __attribute__((section(".data")));
extern M2C_UNK D_00354ED0;
extern s32 D_004B43B0 __attribute__((section(".data")));

extern "C" s32 *func_0021B808(void) {
    if (D_004B43B0 == 0) {
        func_002441A8();
        func_0027D620((s32) &D_004B43B0, (s32) &D_00342248, (s32) &D_00354ED0);
    }
    return &D_004B43B0;
}
