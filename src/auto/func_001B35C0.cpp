#define DEF_func_001B35C0
#include "m2c.h"
#include "funcs.h"
extern M2C_UNK D_003339D8 __attribute__((section(".data")));
extern s32 D_004B3E10 __attribute__((section(".data")));
extern M2C_UNK D_004B3EF0 __attribute__((section(".data")));

extern "C" s32 *func_001B35C0(void) {
    if (D_004B3E10 == 0) {
        func_001BB828();
        func_0027D620((s32) &D_004B3E10, (s32) &D_003339D8, (s32) &D_004B3EF0);
    }
    return &D_004B3E10;
}
