#define DEF_func_0018A818
#include "m2c.h"
#include "funcs.h"
extern M2C_UNK D_0032D470 __attribute__((section(".data")));
extern M2C_UNK D_004B39F0 __attribute__((section(".data")));
extern s32 D_004B3A30 __attribute__((section(".data")));

extern "C" s32 *func_0018A818(void) {
    if (D_004B3A30 == 0) {
        func_00188D00();
        func_0027D620((s32) &D_004B3A30, (s32) &D_0032D470, (s32) &D_004B39F0);
    }
    return &D_004B3A30;
}
