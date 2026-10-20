#define DEF_func_00231018
#include "m2c.h"
#include "funcs.h"
extern M2C_UNK D_00354680 __attribute__((section(".data")));
extern M2C_UNK D_00354E88;
extern s32 D_004B4420 __attribute__((section(".data")));

extern "C" s32 *func_00231018(void) {
    if (D_004B4420 == 0) {
        func_002302E8();
        func_0027D620((s32) &D_004B4420, (s32) &D_00354680, (s32) &D_00354E88);
    }
    return &D_004B4420;
}
