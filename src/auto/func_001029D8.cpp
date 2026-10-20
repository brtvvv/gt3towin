#define DEF_func_001029D8
#include "m2c.h"
#include "funcs.h"
extern M2C_UNK D_0030A158 __attribute__((section(".data")));
extern M2C_UNK D_00354D20;
extern s32 D_004B2E10 __attribute__((section(".data")));

extern "C" s32 *func_001029D8(void) {
    if (D_004B2E10 == 0) {
        func_00101B20();
        func_0027D620((s32) &D_004B2E10, (s32) &D_0030A158, (s32) &D_00354D20);
    }
    return &D_004B2E10;
}
