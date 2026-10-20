#define DEF_func_0010F950
#include "m2c.h"
#include "funcs.h"
extern M2C_UNK D_0030D148 __attribute__((section(".data")));
extern M2C_UNK D_00352810 __attribute__((section(".data")));
extern s32 D_004B2ED0 __attribute__((section(".data")));

extern "C" s32 *func_0010F950(void) {
    if (D_004B2ED0 == 0) {
        func_001CB368();
        func_0027D5F8((s32) &D_004B2ED0, (s32) &D_0030D148, (s32) &D_00352810, 1);
    }
    return &D_004B2ED0;
}
