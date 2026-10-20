#include "m2c.h"
extern "C" M2C_UNK func_0017A100(s32, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */

extern "C" void func_0017D360(void *arg0) {
    s32 temp_s0;

    temp_s0 = M2C_FIELD(arg0, s32 *, 4) + 0x84;
    func_0017A100(temp_s0, 3, 0, 0);
    func_0017A100(temp_s0, 0x14, 0x14, 0);
}
