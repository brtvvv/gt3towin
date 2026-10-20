#define DEF_func_001B5758
#include "m2c.h"
#include "funcs.h"
extern M2C_UNK D_003345A0 __attribute__((section(".data")));
extern M2C_UNK D_003345B8 __attribute__((section(".data")));
extern s32 D_004B3E60 __attribute__((section(".data")));

extern "C" s32 *func_001B5758(void) {
    if (D_004B3E60 == 0) {
        func_001B57B8();
        func_001BB828();
        func_0027D5F8((s32) &D_004B3E60, (s32) &D_003345A0, (s32) &D_003345B8, 2);
    }
    return &D_004B3E60;
}
