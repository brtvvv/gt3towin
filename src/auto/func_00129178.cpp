#include "m2c.h"
extern "C" M2C_UNK func_001CD170(s32);                         /* extern */

extern "C" void func_00129178(void *arg0) {
    s32 temp_v0;

    func_001CD170(arg0 + 0x5C);
    temp_v0 = M2C_FIELD(arg0, s32 *, 0x58);
    if (temp_v0 > 0) {
        M2C_FIELD(arg0, s32 *, 0x58) = (s32) (temp_v0 - 1);
    }
}
