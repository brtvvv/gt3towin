#define DEF_func_00127DE0
#include "m2c.h"
#include "funcs.h"
extern M2C_UNK D_00314118 __attribute__((section(".data")));
extern M2C_UNK D_00354E00;
extern s32 D_004B3010 __attribute__((section(".data")));

extern "C" s32 *func_00127DE0(void) {
    if (D_004B3010 == 0) {
        func_001CCCF8();
        func_0027D620((s32) &D_004B3010, (s32) &D_00314118, (s32) &D_00354E00);
    }
    return &D_004B3010;
}
