#define DEF_func_001B70C0
#include "m2c.h"
#include "funcs.h"
extern M2C_UNK D_00334F90 __attribute__((section(".data")));
extern s32 D_004B3ED0 __attribute__((section(".data")));
extern M2C_UNK D_004B3EF0 __attribute__((section(".data")));

extern "C" s32 *func_001B70C0(void) {
    if (D_004B3ED0 == 0) {
        func_001BB828();
        func_0027D620((s32) &D_004B3ED0, (s32) &D_00334F90, (s32) &D_004B3EF0);
    }
    return &D_004B3ED0;
}
