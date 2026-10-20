#define DEF_func_00116558
#include "m2c.h"
#include "funcs.h"
extern M2C_UNK D_0030F510 __attribute__((section(".data")));
extern s32 D_004B2F20 __attribute__((section(".data")));
extern M2C_UNK D_004B3EF0 __attribute__((section(".data")));

extern "C" s32 *func_00116558(void) {
    if (D_004B2F20 == 0) {
        func_001BB828();
        func_0027D620((s32) &D_004B2F20, (s32) &D_0030F510, (s32) &D_004B3EF0);
    }
    return &D_004B2F20;
}
