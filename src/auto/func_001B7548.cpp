#include "m2c.h"
extern "C" M2C_UNK func_0023CD40(s32, M2C_UNK);                /* extern */

extern "C" void func_001B7548(void *arg0, s32 arg1) {
    if (arg1 != 0) {
        func_0023CD40(arg1, 0x14C);
    }
    M2C_FIELD(arg0, s32 *, 0xB40) = arg1;
}
