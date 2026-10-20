#define DEF_func_00175D18
#include "m2c.h"
#include "funcs.h"
extern M2C_UNK D_003278F8 __attribute__((section(".data")));
extern M2C_UNK D_00354D60;
extern s32 D_004B3800 __attribute__((section(".data")));

extern "C" s32 *func_00175D18(void) {
    if (D_004B3800 == 0) {
        func_00175710();
        func_0027D620((s32) &D_004B3800, (s32) &D_003278F8, (s32) &D_00354D60);
    }
    return &D_004B3800;
}
