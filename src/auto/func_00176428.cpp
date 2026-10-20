#include "m2c.h"
extern "C" M2C_UNK func_00175640();                            /* extern */

extern "C" void func_00176428(void *arg0, s32 arg1) {
    void *temp_v1;

    if (M2C_FIELD(arg0, s32 *, 0xC) != 0) {
        func_00175640();
        temp_v1 = M2C_FIELD(arg0, void **, 8);
        M2C_FIELD(arg0, s32 *, 0x18) = M2C_FIELD(temp_v1, s32 (**)(void *, s32), 0x4C)(arg0 + M2C_FIELD(temp_v1, s16 *, 0x48), arg1);
    }
}
