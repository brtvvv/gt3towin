#define DEF_func_001C5828
#include "m2c.h"
#include "funcs.h"
extern M2C_UNK D_00337778 __attribute__((section(".data")));
extern M2C_UNK D_00353FF0 __attribute__((section(".data")));
extern s32 D_004B3FE0 __attribute__((section(".data")));

extern "C" s32 *func_001C5828(void) {
    if (D_004B3FE0 == 0) {
        func_001B5758();
        func_0027D5F8((s32) &D_004B3FE0, (s32) &D_00337778, (s32) &D_00353FF0, 1);
    }
    return &D_004B3FE0;
}
