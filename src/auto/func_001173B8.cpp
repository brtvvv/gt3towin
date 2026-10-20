#define DEF_func_001173B8
#include "m2c.h"
#include "funcs.h"
extern M2C_UNK D_0030FBD0 __attribute__((section(".data")));
extern s32 D_004B2F50 __attribute__((section(".data")));
extern M2C_UNK D_004B3EF0 __attribute__((section(".data")));

extern "C" s32 *func_001173B8(void) {
    if (D_004B2F50 == 0) {
        func_001BB828();
        func_0027D620((s32) &D_004B2F50, (s32) &D_0030FBD0, (s32) &D_004B3EF0);
    }
    return &D_004B2F50;
}
