#define DEF_func_0018E0A8
#include "m2c.h"
#include "funcs.h"
extern M2C_UNK D_0032E7B8 __attribute__((section(".data")));
extern M2C_UNK D_00354D80;
extern s32 D_004B3AC0 __attribute__((section(".data")));

extern "C" s32 *func_0018E0A8(void) {
    if (D_004B3AC0 == 0) {
        func_0017AA40();
        func_0027D620((s32) &D_004B3AC0, (s32) &D_0032E7B8, (s32) &D_00354D80);
    }
    return &D_004B3AC0;
}
