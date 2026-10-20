#define DEF_func_00238840
#include "m2c.h"
#include "funcs.h"
extern M2C_UNK D_00343C40 __attribute__((section(".data")));
extern M2C_UNK D_00343C50 __attribute__((section(".data")));
extern s32 D_004B4450 __attribute__((section(".data")));

extern "C" s32 *func_00238840(void) {
    if (D_004B4450 == 0) {
        func_002329D8();
        func_002388A0();
        func_0027D5F8((s32) &D_004B4450, (s32) &D_00343C40, (s32) &D_00343C50, 2);
    }
    return &D_004B4450;
}
