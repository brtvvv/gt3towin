#define DEF_func_0015C4C8
#include "m2c.h"
#include "funcs.h"
extern M2C_UNK D_00321C18 __attribute__((section(".data")));

extern "C" s32 func_0015C4C8(void) {
    s32 temp_s1;
    s32 temp_v0;

    temp_v0 = func_002440C8((s32) &D_00321C18);
    temp_s1 = func_00243D40(temp_v0);
    func_00244108(temp_v0);
    return temp_s1;
}
