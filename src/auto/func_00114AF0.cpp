#include "m2c.h"
extern "C" M2C_UNK func_00114A90(s32);                         /* extern */

extern "C" void func_00114AF0(void *arg0, s32 arg1) {
    s32 var_a0;

    if (arg1 != 2) {
        var_a0 = M2C_FIELD(arg0, s32 *, 0x38DC);
    } else {
        var_a0 = M2C_FIELD(arg0, s32 *, 0x3974);
    }
    func_00114A90(var_a0);
}
