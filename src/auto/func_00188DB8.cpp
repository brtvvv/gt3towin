#define DEF_func_00188DB8
#include "m2c.h"
#include "funcs.h"
extern M2C_UNK D_0032C940 __attribute__((section(".data")));
extern M2C_UNK D_004B38C0 __attribute__((section(".data")));
extern s32 D_004B39E0 __attribute__((section(".data")));

extern "C" s32 *func_00188DB8(void) {
    if (D_004B39E0 == 0) {
        func_0017F0A0();
        func_0027D620((s32) &D_004B39E0, (s32) &D_0032C940, (s32) &D_004B38C0);
    }
    return &D_004B39E0;
}
