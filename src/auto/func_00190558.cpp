#define DEF_func_00190558
#include "m2c.h"
#include "funcs.h"
extern M2C_UNK D_0032F458 __attribute__((section(".data")));
extern M2C_UNK D_00354D80;
extern s32 D_004B3B50 __attribute__((section(".data")));

extern "C" s32 *func_00190558(void) {
    if (D_004B3B50 == 0) {
        func_0017AA40();
        func_0027D620((s32) &D_004B3B50, (s32) &D_0032F458, (s32) &D_00354D80);
    }
    return &D_004B3B50;
}
