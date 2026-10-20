#include "m2c.h"
extern "C" M2C_UNK func_0027FDBC(s32);                         /* extern */

extern "C" void func_00176D20(void *arg0, s32 arg1) {
    if (arg1 != 0) {
        func_0027FDBC(arg0 + 0x20);
        return;
    }
    M2C_FIELD(arg0, s8 *, 0x20) = 0;
}
