#define DEF_func_0013CD28
#include "m2c.h"
#include "funcs.h"
extern M2C_UNK D_0031AB78 __attribute__((section(".data")));
extern s32 D_004B3230 __attribute__((section(".data")));
extern M2C_UNK D_004B4380 __attribute__((section(".data")));

extern "C" s32 *func_0013CD28(void) {
    if (D_004B3230 == 0) {
        func_00210EE0();
        func_0027D620((s32) &D_004B3230, (s32) &D_0031AB78, (s32) &D_004B4380);
    }
    return &D_004B3230;
}
