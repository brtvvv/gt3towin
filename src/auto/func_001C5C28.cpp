#define DEF_func_001C5C28
#include "m2c.h"
#include "funcs.h"
extern M2C_UNK D_00337998 __attribute__((section(".data")));
extern M2C_UNK D_00353FF8 __attribute__((section(".data")));
extern s32 D_004B3FF0 __attribute__((section(".data")));

extern "C" s32 *func_001C5C28(void) {
    if (D_004B3FF0 == 0) {
        func_001B5758();
        func_0027D5F8((s32) &D_004B3FF0, (s32) &D_00337998, (s32) &D_00353FF8, 1);
    }
    return &D_004B3FF0;
}
