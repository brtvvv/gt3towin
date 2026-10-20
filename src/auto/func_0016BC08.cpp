#define DEF_func_0016BC08
#include "m2c.h"
#include "funcs.h"
extern M2C_UNK D_00324FE0 __attribute__((section(".data")));
extern s32 D_004B3630 __attribute__((section(".data")));
extern M2C_UNK D_004B41C0 __attribute__((section(".data")));

extern "C" s32 *func_0016BC08(void) {
    if (D_004B3630 == 0) {
        func_001D69F8();
        func_0027D620((s32) &D_004B3630, (s32) &D_00324FE0, (s32) &D_004B41C0);
    }
    return &D_004B3630;
}
