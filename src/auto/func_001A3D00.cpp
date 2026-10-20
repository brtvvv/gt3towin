#define DEF_func_001A3D00
#include "m2c.h"
#include "funcs.h"
extern M2C_UNK D_00331AB0 __attribute__((section(".data")));
extern s32 D_004B2C10 __attribute__((section(".data")));
extern M2C_UNK D_004B2CD0 __attribute__((section(".data")));

extern "C" s32 *func_001A3D00(void) {
    if (D_004B2C10 == 0) {
        func_001A3D78();
        func_0027D620((s32) &D_004B2C10, (s32) &D_00331AB0, (s32) &D_004B2CD0);
    }
    return &D_004B2C10;
}
