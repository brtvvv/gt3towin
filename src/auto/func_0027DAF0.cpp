#define DEF_func_0027DAF0
#include "m2c.h"
#include "funcs.h"
extern M2C_UNK D_00349E60 __attribute__((section(".data")));
extern M2C_UNK D_00354F18 __attribute__((section(".data")));
extern s32 D_004B4560 __attribute__((section(".data")));

extern "C" s32 *func_0027DAF0(void) {
    if (D_004B4560 == 0) {
        func_0027B5F8();
        func_0027D620((s32) &D_004B4560, (s32) &D_00349E60, (s32) &D_00354F18);
    }
    return &D_004B4560;
}
