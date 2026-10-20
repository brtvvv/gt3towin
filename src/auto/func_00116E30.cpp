#define DEF_func_00116E30
#include "m2c.h"
#include "funcs.h"
extern M2C_UNK D_0030F928 __attribute__((section(".data")));
extern M2C_UNK D_00352958 __attribute__((section(".data")));
extern s32 D_004B2F40 __attribute__((section(".data")));

extern "C" s32 *func_00116E30(void) {
    if (D_004B2F40 == 0) {
        func_001B5758();
        func_0027D5F8((s32) &D_004B2F40, (s32) &D_0030F928, (s32) &D_00352958, 1);
    }
    return &D_004B2F40;
}
