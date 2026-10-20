#define DEF_func_00274B20
#include "m2c.h"
#include "funcs.h"
extern s32 *D_004AD628 __attribute__((section(".data")));
extern s32 *D_004AD62C __attribute__((section(".data")));
extern s32 *D_004AD630 __attribute__((section(".data")));

extern "C" void func_00274B20(s32 arg0) {
    s32 temp_a0;

    temp_a0 = arg0 | 0x20000000;
    if (D_004AD628 != NULL) {
        *D_004AD628 = M2C_FIELD(temp_a0, s32 *, 0);
    }
    if (D_004AD62C != NULL) {
        *D_004AD62C = M2C_FIELD(temp_a0, s32 *, 4);
    }
    if (D_004AD630 != NULL) {
        *D_004AD630 = M2C_FIELD(temp_a0, s32 *, 0x90);
    }
}
