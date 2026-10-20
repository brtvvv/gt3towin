#include "m2c.h"
extern "C" M2C_UNK func_00232E30(s32);                         /* extern */
extern "C" s32 func_002350A0(s32);                             /* extern */
extern "C" M2C_UNK func_00236FB0(s32, s32);                    /* extern */
extern "C" s32 func_0023A2A8(M2C_UNK *, s32, M2C_UNK);         /* extern */
extern M2C_UNK D_00354730;

extern "C" void func_0018D8A0(s32 arg0) {
    s32 temp_s0;

    temp_s0 = arg0 + 0x60;
    func_00232E30(temp_s0);
    func_00236FB0(temp_s0, func_0023A2A8(&D_00354730, func_002350A0(temp_s0), 0));
}
