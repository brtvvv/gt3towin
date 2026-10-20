#define DEF_func_001851A0
#include "m2c.h"
#include "funcs.h"
extern M2C_UNK D_0032B9D0 __attribute__((section(".data")));
extern s32 D_004B2C40 __attribute__((section(".data")));
extern M2C_UNK D_004B38E0 __attribute__((section(".data")));

extern "C" s32 *func_001851A0(void) {
    if (D_004B2C40 == 0) {
        func_001821D0();
        func_0027D620((s32) &D_004B2C40, (s32) &D_0032B9D0, (s32) &D_004B38E0);
    }
    return &D_004B2C40;
}
