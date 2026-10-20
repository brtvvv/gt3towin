#define DEF_func_001A4D58
#include "m2c.h"
#include "funcs.h"
extern M2C_UNK D_00331EE8 __attribute__((section(".data")));
extern M2C_UNK D_00354DE8;
extern s32 D_004B2CD0 __attribute__((section(".data")));

extern "C" s32 *func_001A4D58(void) {
    if (D_004B2CD0 == 0) {
        func_001B1DF0();
        func_0027D620((s32) &D_004B2CD0, (s32) &D_00331EE8, (s32) &D_00354DE8);
    }
    return &D_004B2CD0;
}
