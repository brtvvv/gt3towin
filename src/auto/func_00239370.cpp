#define DEF_func_00239370
#include "m2c.h"
#include "funcs.h"
extern M2C_UNK D_00343D08 __attribute__((section(".data")));
extern M2C_UNK D_00343D20 __attribute__((section(".data")));
extern s32 D_004B4460 __attribute__((section(".data")));

extern "C" s32 *func_00239370(void) {
    if (D_004B4460 == 0) {
        func_002393D0();
        func_00238840();
        func_0027D5F8((s32) &D_004B4460, (s32) &D_00343D08, (s32) &D_00343D20, 2);
    }
    return &D_004B4460;
}
