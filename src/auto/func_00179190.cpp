#include "m2c.h"
extern "C" M2C_UNK func_0017BF30(s32, M2C_UNK);                /* extern */
extern "C" M2C_UNK func_0017BF50(s32, s32);                    /* extern */

extern "C" void func_00179190(s32 arg0, s32 arg1) {
    s32 temp_s0;

    temp_s0 = arg0 + 0x210;
    func_0017BF30(temp_s0, 0);
    func_0017BF50(temp_s0, arg1);
}
