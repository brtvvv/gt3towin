#define DEF_func_00187288
#include "m2c.h"
#include "funcs.h"
extern M2C_UNK D_0032C3B0 __attribute__((section(".data")));
extern s32 D_004B39C0 __attribute__((section(".data")));
extern M2C_UNK D_004B43A0 __attribute__((section(".data")));

extern "C" s32 *func_00187288(void) {
    if (D_004B39C0 == 0) {
        func_002128F8();
        func_0027D620((s32) &D_004B39C0, (s32) &D_0032C3B0, (s32) &D_004B43A0);
    }
    return &D_004B39C0;
}
