#include "m2c.h"
extern "C" M2C_UNK func_0027EBC8(s32, void *, s32);            /* extern */

extern "C" void *func_001F5BC0(void *arg0, void *arg1) {
    s32 temp_a0;

    temp_a0 = M2C_FIELD(arg0, s32 *, 0x38);
    if (temp_a0 == 0) {
        return arg1;
    }
    func_0027EBC8(temp_a0, arg1, M2C_FIELD(arg1, s32 *, 4));
    return arg1 + ((M2C_FIELD(arg1, s32 *, 4) + 3) & ~3);
}
