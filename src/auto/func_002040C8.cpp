#define DEF_func_002040C8
#include "m2c.h"
#include "funcs.h"
extern M2C_UNK D_00340030 __attribute__((section(".data")));
extern M2C_UNK D_004B42F0 __attribute__((section(".data")));
extern s32 D_004B4300 __attribute__((section(".data")));

extern "C" s32 *func_002040C8(void) {
    if (D_004B4300 == 0) {
        func_00203E58();
        func_0027D620((s32) &D_004B4300, (s32) &D_00340030, (s32) &D_004B42F0);
    }
    return &D_004B4300;
}
