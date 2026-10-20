#define DEF_func_0020B1E0
#include "m2c.h"
#include "funcs.h"
extern M2C_UNK D_00340970 __attribute__((section(".data")));
extern M2C_UNK D_00354E40;
extern s32 D_004B2C00 __attribute__((section(".data")));

extern "C" s32 *func_0020B1E0(void) {
    if (D_004B2C00 == 0) {
        func_0020FEE8();
        func_0027D620((s32) &D_004B2C00, (s32) &D_00340970, (s32) &D_00354E40);
    }
    return &D_004B2C00;
}
