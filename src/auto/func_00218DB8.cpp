#include "m2c.h"
extern "C" M2C_UNK func_0027FDBC();                            /* extern */

extern "C" void func_00218DB8(void *arg0, s32 arg1, s32 arg2) {
    if (arg1 != 0) {
        func_0027FDBC();
        M2C_FIELD(arg0, s32 *, 0x40) = arg2;
        return;
    }
    M2C_FIELD(arg0, s8 *, 0) = 0;
    M2C_FIELD(arg0, s32 *, 0x40) = -1;
}
