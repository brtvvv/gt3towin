#define DEF_func_0011BC48
#include "m2c.h"
#include "funcs.h"
extern M2C_UNK D_003113A0 __attribute__((section(".data")));
extern M2C_UNK D_00352A10 __attribute__((section(".data")));
extern s32 D_004B2FB0 __attribute__((section(".data")));

extern "C" s32 *func_0011BC48(void) {
    if (D_004B2FB0 == 0) {
        func_001CB368();
        func_0027D5F8((s32) &D_004B2FB0, (s32) &D_003113A0, (s32) &D_00352A10, 1);
    }
    return &D_004B2FB0;
}
