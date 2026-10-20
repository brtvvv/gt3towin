#define DEF_func_0019EF28
#include "m2c.h"
#include "funcs.h"
extern M2C_UNK D_00331468 __attribute__((section(".data")));
extern s32 D_004B2D60 __attribute__((section(".data")));
extern M2C_UNK D_004B3D20 __attribute__((section(".data")));

extern "C" s32 *func_0019EF28(void) {
    if (D_004B2D60 == 0) {
        func_0019E018();
        func_0027D620((s32) &D_004B2D60, (s32) &D_00331468, (s32) &D_004B3D20);
    }
    return &D_004B2D60;
}
