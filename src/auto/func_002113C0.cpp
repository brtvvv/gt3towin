#define DEF_func_002113C0
#include "m2c.h"
#include "funcs.h"
extern M2C_UNK D_00341078 __attribute__((section(".data")));
extern M2C_UNK D_00354E40;
extern s32 D_004B4390 __attribute__((section(".data")));

extern "C" s32 *func_002113C0(void) {
    if (D_004B4390 == 0) {
        func_0020FEE8();
        func_0027D620((s32) &D_004B4390, (s32) &D_00341078, (s32) &D_00354E40);
    }
    return &D_004B4390;
}
