#define DEF_func_001B3790
#include "m2c.h"
#include "funcs.h"
extern M2C_UNK D_00333B50 __attribute__((section(".data")));
extern M2C_UNK D_00354ED8;
extern s32 D_004B3E40 __attribute__((section(".data")));

extern "C" s32 *func_001B3790(void) {
    if (D_004B3E40 == 0) {
        func_00246890();
        func_0027D620((s32) &D_004B3E40, (s32) &D_00333B50, (s32) &D_00354ED8);
    }
    return &D_004B3E40;
}
