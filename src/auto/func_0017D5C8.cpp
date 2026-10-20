#include "m2c.h"
extern "C" M2C_UNK func_00286DD0(s32);                         /* extern */

extern "C" void func_0017D5C8(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x979C) = arg1;
    func_00286DD0(M2C_FIELD(arg0, s32 *, 0x9780));
}
