#define DEF_func_00129550
#include "m2c.h"
#include "funcs.h"
extern M2C_UNK D_003150A0 __attribute__((section(".data")));
extern s32 D_004B3060 __attribute__((section(".data")));
extern M2C_UNK D_004B3EF0 __attribute__((section(".data")));

extern "C" s32 *func_00129550(void) {
    if (D_004B3060 == 0) {
        func_001BB828();
        func_0027D620((s32) &D_004B3060, (s32) &D_003150A0, (s32) &D_004B3EF0);
    }
    return &D_004B3060;
}
