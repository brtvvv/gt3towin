#define DEF_func_001D69F8
#include "m2c.h"
#include "funcs.h"
extern M2C_UNK D_0033A870 __attribute__((section(".data")));
extern M2C_UNK D_004B4160 __attribute__((section(".data")));
extern s32 D_004B41C0 __attribute__((section(".data")));

extern "C" s32 *func_001D69F8(void) {
    if (D_004B41C0 == 0) {
        func_001D6AD0();
        func_0027D620((s32) &D_004B41C0, (s32) &D_0033A870, (s32) &D_004B4160);
    }
    return &D_004B41C0;
}
