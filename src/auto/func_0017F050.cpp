#define DEF_func_0017F050
#include "m2c.h"
#include "funcs.h"
extern M2C_UNK D_00329888 __attribute__((section(".data")));
extern M2C_UNK D_00354DD0;
extern s32 D_004B38B0 __attribute__((section(".data")));

extern "C" s32 *func_0017F050(void) {
    if (D_004B38B0 == 0) {
        func_001A7348();
        func_0027D620((s32) &D_004B38B0, (s32) &D_00329888, (s32) &D_00354DD0);
    }
    return &D_004B38B0;
}
