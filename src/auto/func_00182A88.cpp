#define DEF_func_00182A88
#include "m2c.h"
#include "funcs.h"
extern M2C_UNK D_0032A328 __attribute__((section(".data")));
extern M2C_UNK D_004B38D0 __attribute__((section(".data")));
extern s32 D_004B3900 __attribute__((section(".data")));

extern "C" s32 *func_00182A88(void) {
    if (D_004B3900 == 0) {
        func_00182138();
        func_0027D620((s32) &D_004B3900, (s32) &D_0032A328, (s32) &D_004B38D0);
    }
    return &D_004B3900;
}
