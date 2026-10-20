#define DEF_func_00151EE8
#include "m2c.h"
#include "funcs.h"
extern M2C_UNK D_0031F9A8 __attribute__((section(".data")));
extern M2C_UNK D_003531C8 __attribute__((section(".data")));
extern s32 D_004B3480 __attribute__((section(".data")));

extern "C" s32 *func_00151EE8(void) {
    if (D_004B3480 == 0) {
        func_00152008();
        func_0027D5F8((s32) &D_004B3480, (s32) &D_0031F9A8, (s32) &D_003531C8, 1);
    }
    return &D_004B3480;
}
