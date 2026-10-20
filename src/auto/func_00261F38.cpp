#define DEF_func_00261F38
#include "m2c.h"
#include "funcs.h"
extern s32 D_00354AC8;
extern s32 D_00354ACC;
extern s32 D_00354AD0;
extern M2C_UNK D_004A9000 __attribute__((section(".data")));

extern "C" void func_00261F38(void) {
    D_00354AD0 = 0;
    M2C_FIELD(&D_004A9000, s32 *, 0) = 0;
    M2C_FIELD(&D_004A9000, s32 *, 4) = 0;
    D_00354ACC = 0;
    D_00354AC8 = 0;
}
