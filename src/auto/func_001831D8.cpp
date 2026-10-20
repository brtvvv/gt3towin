#define DEF_func_001831D8
#include "m2c.h"
#include "funcs.h"
extern M2C_UNK D_0032A8A0 __attribute__((section(".data")));
extern M2C_UNK D_004B3900 __attribute__((section(".data")));
extern s32 D_004B3910 __attribute__((section(".data")));

extern "C" s32 *func_001831D8(void) {
    if (D_004B3910 == 0) {
        func_00182A88();
        func_0027D620((s32) &D_004B3910, (s32) &D_0032A8A0, (s32) &D_004B3900);
    }
    return &D_004B3910;
}
