#define DEF_func_00101FB0
#include "m2c.h"
#include "funcs.h"
extern M2C_UNK D_00309EA8 __attribute__((section(".data")));
extern M2C_UNK D_004B2DC0 __attribute__((section(".data")));
extern s32 D_004B2DD0 __attribute__((section(".data")));

extern "C" s32 *func_00101FB0(void) {
    if (D_004B2DD0 == 0) {
        func_00102008();
        func_0027D620((s32) &D_004B2DD0, (s32) &D_00309EA8, (s32) &D_004B2DC0);
    }
    return &D_004B2DD0;
}
