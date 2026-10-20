#define DEF_func_0013ABB8
#include "m2c.h"
#include "funcs.h"
extern M2C_UNK D_00319F20 __attribute__((section(".data")));
extern M2C_UNK D_004B3080 __attribute__((section(".data")));
extern s32 D_004B31F0 __attribute__((section(".data")));

extern "C" s32 *func_0013ABB8(void) {
    if (D_004B31F0 == 0) {
        func_0013AC68();
        func_0027D620((s32) &D_004B31F0, (s32) &D_00319F20, (s32) &D_004B3080);
    }
    return &D_004B31F0;
}
