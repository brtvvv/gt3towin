#define DEF_func_0027B5F8
#include "m2c.h"
#include "funcs.h"
extern M2C_UNK D_00349C18 __attribute__((section(".data")));
extern s32 D_00354F18 __attribute__((section(".data")));

extern "C" s32 *func_0027B5F8(void) {
    if (D_00354F18 == 0) {
        func_0027D640((s32) &D_00354F18, (s32) &D_00349C18);
    }
    return &D_00354F18;
}
