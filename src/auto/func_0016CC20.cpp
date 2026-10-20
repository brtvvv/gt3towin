#define DEF_func_0016CC20
#include "m2c.h"
#include "funcs.h"
extern M2C_UNK D_00325648 __attribute__((section(".data")));
extern s32 D_004B3650 __attribute__((section(".data")));
extern M2C_UNK D_004B4200 __attribute__((section(".data")));

extern "C" s32 *func_0016CC20(void) {
    if (D_004B3650 == 0) {
        func_001D6A48();
        func_0027D620((s32) &D_004B3650, (s32) &D_00325648, (s32) &D_004B4200);
    }
    return &D_004B3650;
}
