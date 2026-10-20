#define DEF_func_00183188
#include "m2c.h"
#include "funcs.h"
extern M2C_UNK D_0032A888 __attribute__((section(".data")));
extern M2C_UNK D_004B3910 __attribute__((section(".data")));
extern s32 D_004B3930 __attribute__((section(".data")));

extern "C" s32 *func_00183188(void) {
    if (D_004B3930 == 0) {
        func_001831D8();
        func_0027D620((s32) &D_004B3930, (s32) &D_0032A888, (s32) &D_004B3910);
    }
    return &D_004B3930;
}
