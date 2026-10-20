#define DEF_func_0022F730
#include "m2c.h"
#include "funcs.h"
extern M2C_UNK D_00343318 __attribute__((section(".data")));
extern M2C_UNK D_00354E88;
extern s32 D_004B4410 __attribute__((section(".data")));

extern "C" s32 *func_0022F730(void) {
    if (D_004B4410 == 0) {
        func_002302E8();
        func_0027D620((s32) &D_004B4410, (s32) &D_00343318, (s32) &D_00354E88);
    }
    return &D_004B4410;
}
