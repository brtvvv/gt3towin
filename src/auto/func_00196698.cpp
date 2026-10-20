#define DEF_func_00196698
#include "m2c.h"
#include "funcs.h"
extern M2C_UNK D_0032FE10 __attribute__((section(".data")));
extern s32 D_004B3B80 __attribute__((section(".data")));
extern M2C_UNK D_004B3B90 __attribute__((section(".data")));

extern "C" s32 *func_00196698(void) {
    if (D_004B3B80 == 0) {
        func_001917A0();
        func_0027D620((s32) &D_004B3B80, (s32) &D_0032FE10, (s32) &D_004B3B90);
    }
    return &D_004B3B80;
}
