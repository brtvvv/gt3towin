#include "m2c.h"
extern "C" M2C_UNK func_001B48A0();                            /* extern */

extern "C" void func_0012C8C0(void *arg0) {
    func_001B48A0();
    M2C_FIELD(arg0, s32 *, 0x28C) = 0;
}
