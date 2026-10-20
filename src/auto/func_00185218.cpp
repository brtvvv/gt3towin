#define DEF_func_00185218
#include "m2c.h"
#include "funcs.h"
extern M2C_UNK D_0032B9E8 __attribute__((section(".data")));
extern M2C_UNK D_004B2D80 __attribute__((section(".data")));
extern s32 D_004B3980 __attribute__((section(".data")));

extern "C" s32 *func_00185218(void) {
    if (D_004B3980 == 0) {
        func_00185268();
        func_0027D620((s32) &D_004B3980, (s32) &D_0032B9E8, (s32) &D_004B2D80);
    }
    return &D_004B3980;
}
