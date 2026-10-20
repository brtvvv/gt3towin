#define DEF_func_00127550
#include "m2c.h"
#include "funcs.h"
extern M2C_UNK D_00313C30 __attribute__((section(".data")));
extern s32 D_004B2FF0 __attribute__((section(".data")));
extern M2C_UNK D_004B4070 __attribute__((section(".data")));

extern "C" s32 *func_00127550(void) {
    if (D_004B2FF0 == 0) {
        func_001CC858();
        func_0027D620((s32) &D_004B2FF0, (s32) &D_00313C30, (s32) &D_004B4070);
    }
    return &D_004B2FF0;
}
