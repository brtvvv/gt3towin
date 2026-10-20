#define DEF_func_001B3568
#include "m2c.h"
#include "funcs.h"
extern M2C_UNK D_003339C8 __attribute__((section(".data")));
extern M2C_UNK D_004B2CD0 __attribute__((section(".data")));
extern s32 D_004B3E30 __attribute__((section(".data")));

extern "C" s32 *func_001B3568(void) {
    if (D_004B3E30 == 0) {
        func_001A3D78();
        func_0027D620((s32) &D_004B3E30, (s32) &D_003339C8, (s32) &D_004B2CD0);
    }
    return &D_004B3E30;
}
