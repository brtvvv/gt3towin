#define DEF_func_00188D00
#include "m2c.h"
#include "funcs.h"
extern M2C_UNK D_0032C910 __attribute__((section(".data")));
extern M2C_UNK D_004B38E0 __attribute__((section(".data")));
extern s32 D_004B39F0 __attribute__((section(".data")));

extern "C" s32 *func_00188D00(void) {
    if (D_004B39F0 == 0) {
        func_001821D0();
        func_0027D620((s32) &D_004B39F0, (s32) &D_0032C910, (s32) &D_004B38E0);
    }
    return &D_004B39F0;
}
