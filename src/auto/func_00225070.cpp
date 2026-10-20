#define DEF_func_00225070
#include "m2c.h"
#include "funcs.h"
extern M2C_UNK D_00342908 __attribute__((section(".data")));
extern M2C_UNK D_00354E50;
extern s32 D_004B43F0 __attribute__((section(".data")));

extern "C" s32 *func_00225070(void) {
    if (D_004B43F0 == 0) {
        func_00222318();
        func_0027D620((s32) &D_004B43F0, (s32) &D_00342908, (s32) &D_00354E50);
    }
    return &D_004B43F0;
}
