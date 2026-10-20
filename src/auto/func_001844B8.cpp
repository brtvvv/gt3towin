#include "m2c.h"
extern "C" M2C_UNK func_00175850(void *, s32);                 /* extern */
extern "C" M2C_UNK func_001AF2F8(s32, s32);                    /* extern */

extern "C" void func_001844B8(void *arg0) {
    s32 temp_s0;

    temp_s0 = arg0 + 0x1B044;
    func_001AF2F8(temp_s0, M2C_FIELD(arg0, s32 *, 4));
    func_00175850(arg0 + 0x29220, temp_s0);
}
