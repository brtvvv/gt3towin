#define DEF_func_0023C4F8
#include "m2c.h"
#include "funcs.h"
extern M2C_UNK D_003442C0 __attribute__((section(".data")));
extern s32 D_004B2C80 __attribute__((section(".data")));
extern M2C_UNK D_004B2D70 __attribute__((section(".data")));

extern "C" s32 *func_0023C4F8(void) {
    if (D_004B2C80 == 0) {
        func_0023C570();
        func_0027D620((s32) &D_004B2C80, (s32) &D_003442C0, (s32) &D_004B2D70);
    }
    return &D_004B2C80;
}
