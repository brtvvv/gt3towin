#define DEF_func_001291B0
#include "m2c.h"
#include "funcs.h"
extern M2C_UNK D_00314E08 __attribute__((section(".data")));
extern s32 D_004B3040 __attribute__((section(".data")));
extern M2C_UNK D_004B4070 __attribute__((section(".data")));

extern "C" s32 *func_001291B0(void) {
    if (D_004B3040 == 0) {
        func_001CC858();
        func_0027D620((s32) &D_004B3040, (s32) &D_00314E08, (s32) &D_004B4070);
    }
    return &D_004B3040;
}
