#define DEF_func_0018A868
#include "m2c.h"
#include "funcs.h"
extern M2C_UNK D_0032D480 __attribute__((section(".data")));
extern M2C_UNK D_004B39D0 __attribute__((section(".data")));
extern s32 D_004B3A40 __attribute__((section(".data")));

extern "C" s32 *func_0018A868(void) {
    if (D_004B3A40 == 0) {
        func_00188D68();
        func_0027D620((s32) &D_004B3A40, (s32) &D_0032D480, (s32) &D_004B39D0);
    }
    return &D_004B3A40;
}
