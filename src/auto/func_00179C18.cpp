#define DEF_func_00179C18
#include "m2c.h"
#include "funcs.h"
extern M2C_UNK D_00328CE0 __attribute__((section(".data")));
extern M2C_UNK D_00353770 __attribute__((section(".data")));
extern s32 D_004B3880 __attribute__((section(".data")));

extern "C" s32 *func_00179C18(void) {
    if (D_004B3880 == 0) {
        func_00238840();
        func_0027D5F8((s32) &D_004B3880, (s32) &D_00328CE0, (s32) &D_00353770, 1);
    }
    return &D_004B3880;
}
