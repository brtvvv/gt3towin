#define DEF_func_002039B8
#include "m2c.h"
#include "funcs.h"
extern M2C_UNK D_0033FE20 __attribute__((section(".data")));
extern M2C_UNK D_004B42D0 __attribute__((section(".data")));
extern s32 D_004B42E0 __attribute__((section(".data")));

extern "C" s32 *func_002039B8(void) {
    if (D_004B42E0 == 0) {
        func_00202310();
        func_0027D620((s32) &D_004B42E0, (s32) &D_0033FE20, (s32) &D_004B42D0);
    }
    return &D_004B42E0;
}
