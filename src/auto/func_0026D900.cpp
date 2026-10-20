#define DEF_func_0026D900
#include "m2c.h"
#include "funcs.h"
extern M2C_UNK D_00349038 __attribute__((section(".data")));
extern M2C_UNK D_00354F00;
extern s32 D_004B4520 __attribute__((section(".data")));

extern "C" s32 *func_0026D900(void) {
    if (D_004B4520 == 0) {
        func_0026D2B8();
        func_0027D620((s32) &D_004B4520, (s32) &D_00349038, (s32) &D_00354F00);
    }
    return &D_004B4520;
}
