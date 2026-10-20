#define DEF_func_001F12D0
#include "m2c.h"
#include "funcs.h"
extern M2C_UNK D_0033E7A8 __attribute__((section(".data")));
extern M2C_UNK D_00354E18;
extern s32 D_004B4240 __attribute__((section(".data")));

extern "C" s32 *func_001F12D0(void) {
    if (D_004B4240 == 0) {
        func_001EE928();
        func_0027D620((s32) &D_004B4240, (s32) &D_0033E7A8, (s32) &D_00354E18);
    }
    return &D_004B4240;
}
