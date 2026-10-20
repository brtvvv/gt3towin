#define DEF_func_0023AF00
#include "m2c.h"
#include "funcs.h"
extern M2C_UNK D_00343F28 __attribute__((section(".data")));
extern M2C_UNK D_00354ED0;
extern s32 D_004B4480 __attribute__((section(".data")));

extern "C" s32 *func_0023AF00(void) {
    if (D_004B4480 == 0) {
        func_002441A8();
        func_0027D620((s32) &D_004B4480, (s32) &D_00343F28, (s32) &D_00354ED0);
    }
    return &D_004B4480;
}
