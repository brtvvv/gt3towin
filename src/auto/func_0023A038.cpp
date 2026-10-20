#define DEF_func_0023A038
#include "m2c.h"
#include "funcs.h"
extern M2C_UNK D_00343D58 __attribute__((section(".data")));
extern M2C_UNK D_00354E98;
extern s32 D_004B4470 __attribute__((section(".data")));

extern "C" s32 *func_0023A038(void) {
    if (D_004B4470 == 0) {
        func_002329D8();
        func_0027D620((s32) &D_004B4470, (s32) &D_00343D58, (s32) &D_00354E98);
    }
    return &D_004B4470;
}
