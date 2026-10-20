#define DEF_func_00154C60
#include "m2c.h"
#include "funcs.h"
extern M2C_UNK D_00320560 __attribute__((section(".data")));
extern M2C_UNK D_004B3490 __attribute__((section(".data")));
extern s32 D_004B3570 __attribute__((section(".data")));

extern "C" s32 *func_00154C60(void) {
    if (D_004B3570 == 0) {
        func_00151E88();
        func_0027D620((s32) &D_004B3570, (s32) &D_00320560, (s32) &D_004B3490);
    }
    return &D_004B3570;
}
