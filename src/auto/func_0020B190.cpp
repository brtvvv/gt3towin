#define DEF_func_0020B190
#include "m2c.h"
#include "funcs.h"
extern M2C_UNK D_00340960 __attribute__((section(".data")));
extern M2C_UNK D_004B2C00 __attribute__((section(".data")));
extern s32 D_004B4370 __attribute__((section(".data")));

extern "C" s32 *func_0020B190(void) {
    if (D_004B4370 == 0) {
        func_0020B1E0();
        func_0027D620((s32) &D_004B4370, (s32) &D_00340960, (s32) &D_004B2C00);
    }
    return &D_004B4370;
}
