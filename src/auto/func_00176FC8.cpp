#include "m2c.h"
extern "C" M2C_UNK func_00175AC8();                            /* extern */

extern "C" void func_00176FC8(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x950) = 1;
    func_00175AC8();
}
