#define DEF_func_0027DC18
#include "m2c.h"
#include "funcs.h"
extern M2C_UNK D_00349E80 __attribute__((section(".data")));
extern s32 D_00354F20 __attribute__((section(".data")));

extern "C" s32 *func_0027DC18(void) {
    if (D_00354F20 == 0) {
        func_0027D640((s32) &D_00354F20, (s32) &D_00349E80);
    }
    return &D_00354F20;
}
