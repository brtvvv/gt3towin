#define DEF_func_001B6338
#include "m2c.h"
#include "funcs.h"
extern M2C_UNK D_00334868 __attribute__((section(".data")));
extern M2C_UNK D_00353EB8 __attribute__((section(".data")));
extern s32 D_004B3E70 __attribute__((section(".data")));

extern "C" s32 *func_001B6338(void) {
    if (D_004B3E70 == 0) {
        func_001CB368();
        func_0027D5F8((s32) &D_004B3E70, (s32) &D_00334868, (s32) &D_00353EB8, 1);
    }
    return &D_004B3E70;
}
