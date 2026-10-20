#define DEF_func_0018A9B0
#include "m2c.h"
#include "funcs.h"
extern M2C_UNK D_0032D7A0 __attribute__((section(".data")));
extern s32 D_004B3A50 __attribute__((section(".data")));
extern M2C_UNK D_004B3BE0 __attribute__((section(".data")));

extern "C" s32 *func_0018A9B0(void) {
    if (D_004B3A50 == 0) {
        func_00196880();
        func_0027D620((s32) &D_004B3A50, (s32) &D_0032D7A0, (s32) &D_004B3BE0);
    }
    return &D_004B3A50;
}
