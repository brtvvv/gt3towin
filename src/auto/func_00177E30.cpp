#include "m2c.h"
extern "C" s32 func_002350A0(void *);                          /* extern */
extern "C" s32 func_0023A328(M2C_UNK *, s32, s32);             /* extern */
extern M2C_UNK D_00354730;

extern "C" void func_00177E30(void *arg0) {
    s32 temp_v0;
    void *temp_s0;

    temp_s0 = arg0 + 0x20;
    temp_v0 = func_0023A328(&D_00354730, func_002350A0(temp_s0), M2C_FIELD(temp_s0, s32 *, 8));
    M2C_FIELD(arg0, s32 *, 0x18A8) = (s32) ((temp_v0 <= -1) ? 0 : temp_v0);
}
