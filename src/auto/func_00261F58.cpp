#define DEF_func_00261F58
#include "m2c.h"
#include "funcs.h"
extern s32 D_00354AC8;
extern s32 D_00354ACC;
extern s32 D_00354AD0;
extern M2C_UNK D_004A9008 __attribute__((section(".data")));

extern "C" void func_00261F58(void) {
    D_00354AD0 = M2C_FIELD(&D_004A9008, s32 *, 0);
    D_00354ACC = M2C_FIELD(&D_004A9008, s32 *, 4);
    D_00354AC8 = M2C_FIELD(&D_004A9008, s32 *, 8);
}
