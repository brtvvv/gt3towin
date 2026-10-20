#define DEF_func_0027D9B0
#include "m2c.h"
#include "funcs.h"
extern M2C_UNK D_00349E30 __attribute__((section(".data")));
extern M2C_UNK D_004B4580 __attribute__((section(".data")));
extern s32 D_004B4590 __attribute__((section(".data")));

extern "C" s32 *func_0027D9B0(void) {
    if (D_004B4590 == 0) {
        func_0027DA38();
        func_0027D620((s32) &D_004B4590, (s32) &D_00349E30, (s32) &D_004B4580);
    }
    return &D_004B4590;
}
