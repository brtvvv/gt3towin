#define DEF_func_0018AF48
#include "m2c.h"
#include "funcs.h"
extern M2C_UNK D_0032DB20 __attribute__((section(".data")));
extern M2C_UNK D_004B38B0 __attribute__((section(".data")));
extern s32 D_004B3A70 __attribute__((section(".data")));

extern "C" s32 *func_0018AF48(void) {
    if (D_004B3A70 == 0) {
        func_0017F050();
        func_0027D620((s32) &D_004B3A70, (s32) &D_0032DB20, (s32) &D_004B38B0);
    }
    return &D_004B3A70;
}
