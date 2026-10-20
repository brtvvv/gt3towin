#include "m2c.h"
extern "C" M2C_UNK func_00226E10(void *, u16, s32);            /* extern */

extern "C" void func_00227140(void *arg0, s32 arg1) {
    func_00226E10(arg0 + 0x14, M2C_FIELD(arg0, u16 *, 2), arg1);
}
