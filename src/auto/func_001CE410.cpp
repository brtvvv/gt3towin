#include "m2c.h"
extern "C" M2C_UNK func_001CE3E0();                            /* extern */

extern "C" void func_001CE410(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x5C) = arg1;
    if (arg1 != 0) {
        func_001CE3E0();
    }
}
