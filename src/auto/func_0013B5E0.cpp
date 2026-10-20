#define DEF_func_0013B5E0
#include "m2c.h"
#include "funcs.h"
extern M2C_UNK D_0031A420 __attribute__((section(".data")));
extern M2C_UNK D_004B3080 __attribute__((section(".data")));
extern s32 D_004B30F0 __attribute__((section(".data")));

extern "C" s32 *func_0013B5E0(void) {
    if (D_004B30F0 == 0) {
        func_0013AC68();
        func_0027D620((s32) &D_004B30F0, (s32) &D_0031A420, (s32) &D_004B3080);
    }
    return &D_004B30F0;
}
