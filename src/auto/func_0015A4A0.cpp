#define DEF_func_0015A4A0
#include "m2c.h"
#include "funcs.h"
extern M2C_UNK D_003217B8 __attribute__((section(".data")));
extern M2C_UNK D_00353250 __attribute__((section(".data")));
extern s32 D_004B3450 __attribute__((section(".data")));

extern "C" s32 *func_0015A4A0(void) {
    if (D_004B3450 == 0) {
        func_0015A610();
        func_0027D5F8((s32) &D_004B3450, (s32) &D_003217B8, (s32) &D_00353250, 1);
    }
    return &D_004B3450;
}
