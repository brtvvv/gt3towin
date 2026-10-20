#include "m2c.h"
extern "C" M2C_UNK func_0027FDBC(s32);                         /* extern */

extern "C" void func_0023C408(void *arg0, s32 arg1) {
    if (arg1 != 0) {
        func_0027FDBC(arg0 + 0x10);
    } else {
        M2C_FIELD(arg0, s8 *, 0x10) = 0;
    }
    M2C_FIELD(arg0, s32 *, 0xC) = 1;
}
