#include "m2c.h"
extern "C" s32 func_002350A0();                                /* extern */
extern "C" s32 func_0023A328(M2C_UNK *, s32, s32);             /* extern */
extern M2C_UNK D_00354730;

extern "C" void func_00236FB0(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 8) = arg1;
    if (arg1 != 0xFFFFFFFF) {
        M2C_FIELD(arg0, s32 *, 0xC) = func_0023A328(&D_00354730, func_002350A0(), arg1);
    }
}
