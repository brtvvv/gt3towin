#define DEF_func_0013A2C0
#include "m2c.h"
#include "funcs.h"
extern M2C_UNK D_00319B30 __attribute__((section(".data")));
extern s32 D_004B31D0 __attribute__((section(".data")));
extern M2C_UNK D_004B31E0 __attribute__((section(".data")));

extern "C" s32 *func_0013A2C0(void) {
    if (D_004B31D0 == 0) {
        func_0013A4D8();
        func_0027D620((s32) &D_004B31D0, (s32) &D_00319B30, (s32) &D_004B31E0);
    }
    return &D_004B31D0;
}
