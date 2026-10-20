#define DEF_func_001902B0
#include "m2c.h"
#include "funcs.h"
extern M2C_UNK D_0032F088 __attribute__((section(".data")));
extern s32 D_004B3B30 __attribute__((section(".data")));
extern M2C_UNK D_004B3B50 __attribute__((section(".data")));

extern "C" s32 *func_001902B0(void) {
    if (D_004B3B30 == 0) {
        func_00190558();
        func_0027D620((s32) &D_004B3B30, (s32) &D_0032F088, (s32) &D_004B3B50);
    }
    return &D_004B3B30;
}
