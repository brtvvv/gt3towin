#define DEF_func_001C2360
#include "m2c.h"
#include "funcs.h"
extern M2C_UNK D_00336910 __attribute__((section(".data")));
extern M2C_UNK D_00353F90 __attribute__((section(".data")));
extern s32 D_004B3F90 __attribute__((section(".data")));

extern "C" s32 *func_001C2360(void) {
    if (D_004B3F90 == 0) {
        func_001B5758();
        func_0027D5F8((s32) &D_004B3F90, (s32) &D_00336910, (s32) &D_00353F90, 1);
    }
    return &D_004B3F90;
}
