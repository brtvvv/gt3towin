#include "m2c.h"
extern "C" M2C_UNK func_00245EB8();                            /* extern */

extern "C" void func_001CE0B0(void *arg0) {
    if (M2C_FIELD(arg0, s32 *, 0x60) != 0) {
        func_00245EB8();
        M2C_FIELD(arg0, s32 *, 0x38) = 0;
    }
}
