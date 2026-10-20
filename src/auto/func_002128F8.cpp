#define DEF_func_002128F8
#include "m2c.h"
#include "funcs.h"
extern M2C_UNK D_00341180 __attribute__((section(".data")));
extern M2C_UNK D_00354E80;
extern s32 D_004B43A0 __attribute__((section(".data")));

extern "C" s32 *func_002128F8(void) {
    if (D_004B43A0 == 0) {
        func_0022F4B0();
        func_0027D620((s32) &D_004B43A0, (s32) &D_00341180, (s32) &D_00354E80);
    }
    return &D_004B43A0;
}
