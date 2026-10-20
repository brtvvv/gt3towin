#define DEF_func_00176610
#include "m2c.h"
#include "funcs.h"
extern s32 D_002C5A78 __attribute__((section(".data")));
extern s32 D_002C5A7C __attribute__((section(".data")));

extern "C" s32 func_00176610(void *arg0) {
    if (M2C_FIELD(arg0, s32 *, 0x18) == 0) {
        return D_002C5A78;
    }
    return D_002C5A7C;
}
