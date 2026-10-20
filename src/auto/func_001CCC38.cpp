#include "m2c.h"
extern "C" M2C_UNK func_00253458(M2C_UNK);                     /* extern */

extern "C" void func_001CCC38(void *arg0) {
    s32 temp_v0;
    s32 temp_v1_2;
    void *temp_v1;

    temp_v1 = M2C_FIELD(arg0, void **, 0xC0);
    if (M2C_FIELD(temp_v1, s32 (**)(void *), 0x2C)(arg0 + M2C_FIELD(temp_v1, s16 *, 0x28)) != 0) {
        M2C_FIELD(arg0, s32 *, 0x26C) = 0;
    }
    func_00253458(1);
    temp_v1_2 = M2C_FIELD(arg0, s32 *, 0x274);
    temp_v0 = M2C_FIELD(arg0, s32 *, 0x26C) + 1;
    M2C_FIELD(arg0, s32 *, 0x26C) = temp_v0;
    if ((temp_v1_2 > 0) && (temp_v1_2 < temp_v0)) {
        M2C_FIELD(arg0, s32 *, 0x270) = 1;
    }
}
