#define DEF_func_001B6C00
#include "m2c.h"
#include "funcs.h"
extern M2C_UNK D_00334B88 __attribute__((section(".data")));
extern M2C_UNK D_00353EC8 __attribute__((section(".data")));
extern s32 D_004B3EB0 __attribute__((section(".data")));

extern "C" s32 *func_001B6C00(void) {
    if (D_004B3EB0 == 0) {
        func_001CB368();
        func_0027D5F8((s32) &D_004B3EB0, (s32) &D_00334B88, (s32) &D_00353EC8, 1);
    }
    return &D_004B3EB0;
}
