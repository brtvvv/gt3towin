#define DEF_func_00149F08
#include "m2c.h"
#include "funcs.h"
extern M2C_UNK D_0031DE58 __attribute__((section(".data")));
extern M2C_UNK D_00354D58;
extern s32 D_004B3380 __attribute__((section(".data")));

extern "C" s32 *func_00149F08(void) {
    if (D_004B3380 == 0) {
        func_0014A068();
        func_0027D620((s32) &D_004B3380, (s32) &D_0031DE58, (s32) &D_00354D58);
    }
    return &D_004B3380;
}
