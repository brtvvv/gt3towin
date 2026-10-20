#define DEF_func_0018AEF8
#include "m2c.h"
#include "funcs.h"
extern M2C_UNK D_0032DB10 __attribute__((section(".data")));
extern M2C_UNK D_004B39F0 __attribute__((section(".data")));
extern s32 D_004B3A60 __attribute__((section(".data")));

extern "C" s32 *func_0018AEF8(void) {
    if (D_004B3A60 == 0) {
        func_00188D00();
        func_0027D620((s32) &D_004B3A60, (s32) &D_0032DB10, (s32) &D_004B39F0);
    }
    return &D_004B3A60;
}
