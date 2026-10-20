#include "m2c.h"
extern "C" M2C_UNK func_00202068();                            /* extern */

extern "C" void func_00201418(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x100) = arg1;
    if (M2C_FIELD(arg0, s32 *, 0x15C) != 0) {
        func_00202068();
    }
}
