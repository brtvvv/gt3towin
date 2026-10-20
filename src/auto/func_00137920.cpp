#define DEF_func_00137920
#include "m2c.h"
#include "funcs.h"
extern M2C_UNK D_00318680 __attribute__((section(".data")));
extern s32 D_004B31A0 __attribute__((section(".data")));
extern M2C_UNK D_004B4070 __attribute__((section(".data")));

extern "C" s32 *func_00137920(void) {
    if (D_004B31A0 == 0) {
        func_001CC858();
        func_0027D620((s32) &D_004B31A0, (s32) &D_00318680, (s32) &D_004B4070);
    }
    return &D_004B31A0;
}
