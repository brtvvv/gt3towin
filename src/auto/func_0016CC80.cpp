#define DEF_func_0016CC80
#include "m2c.h"
#include "funcs.h"
extern M2C_UNK D_00325668 __attribute__((section(".data")));
extern s32 D_004B3670 __attribute__((section(".data")));
extern M2C_UNK D_004B4220 __attribute__((section(".data")));

extern "C" s32 *func_0016CC80(void) {
    if (D_004B3670 == 0) {
        func_001D9038();
        func_0027D620((s32) &D_004B3670, (s32) &D_00325668, (s32) &D_004B4220);
    }
    return &D_004B3670;
}
