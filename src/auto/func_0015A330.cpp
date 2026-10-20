#define DEF_func_0015A330
#include "m2c.h"
#include "funcs.h"
extern M2C_UNK D_00321760 __attribute__((section(".data")));
extern M2C_UNK D_00353250 __attribute__((section(".data")));
extern s32 D_004B3440 __attribute__((section(".data")));

extern "C" s32 *func_0015A330(void) {
    if (D_004B3440 == 0) {
        func_0015A610();
        func_0027D5F8((s32) &D_004B3440, (s32) &D_00321760, (s32) &D_00353250, 1);
    }
    return &D_004B3440;
}
