#include "m2c.h"
extern "C" s32 func_001B4820();                                /* extern */
extern "C" s32 func_0026ACA0(s32);                             /* extern */
extern "C" s32 func_0026BCA0(s32, s32, M2C_UNK);               /* extern */
extern "C" M2C_UNK func_0026BFC0(s32, s32);                    /* extern */
extern "C" M2C_UNK func_0027FDBC(s32, s32);                    /* extern */

extern "C" void func_001BAE10(void *arg0, s32 arg1) {
    s32 temp_s0;
    s32 temp_s0_2;
    s32 temp_v0;

    temp_s0 = M2C_FIELD(arg0, s32 *, 0xEC);
    if (temp_s0 != 0) {
        M2C_FIELD(arg0, s32 *, 0xEC) = 0;
        func_0026BFC0(func_001B4820(), temp_s0);
    }
    if (arg1 != 0) {
        temp_s0_2 = func_0026ACA0(arg1);
        temp_v0 = func_0026BCA0(func_001B4820(), temp_s0_2 + 1, 0x10);
        func_0027FDBC(temp_v0, arg1);
        M2C_FIELD(arg0, s32 *, 0xEC) = temp_v0;
    }
}
