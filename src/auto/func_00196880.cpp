#define DEF_func_00196880
#include "m2c.h"
#include "funcs.h"
extern M2C_UNK D_0032FE48 __attribute__((section(".data")));
extern M2C_UNK D_00354CF0;
extern s32 D_004B3BE0 __attribute__((section(".data")));

extern "C" s32 *func_00196880(void) {
    if (D_004B3BE0 == 0) {
        func_00196A50();
        func_0027D620((s32) &D_004B3BE0, (s32) &D_0032FE48, (s32) &D_00354CF0);
    }
    return &D_004B3BE0;
}
