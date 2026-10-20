#define DEF_func_0027DB88
#include "m2c.h"
#include "funcs.h"
extern M2C_UNK D_00349E70 __attribute__((section(".data")));
extern M2C_UNK D_00354F18 __attribute__((section(".data")));
extern s32 D_004B4570 __attribute__((section(".data")));

extern "C" s32 *func_0027DB88(void) {
    if (D_004B4570 == 0) {
        func_0027B5F8();
        func_0027D620((s32) &D_004B4570, (s32) &D_00349E70, (s32) &D_00354F18);
    }
    return &D_004B4570;
}
