#define DEF_func_001D9920
#include "m2c.h"
#include "funcs.h"
extern M2C_UNK D_0033DBC8 __attribute__((section(".data")));
extern M2C_UNK D_00354E40;
extern s32 D_004B4230 __attribute__((section(".data")));

extern "C" s32 *func_001D9920(void) {
    if (D_004B4230 == 0) {
        func_0020FEE8();
        func_0027D620((s32) &D_004B4230, (s32) &D_0033DBC8, (s32) &D_00354E40);
    }
    return &D_004B4230;
}
