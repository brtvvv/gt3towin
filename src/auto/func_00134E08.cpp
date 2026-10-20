#include "m2c.h"
extern "C" M2C_UNK func_001B4840(s32, s32);                    /* extern */
extern "C" M2C_UNK func_001B48A0();                            /* extern */

extern "C" void func_00134E08(void *arg0, s32 arg1, s32 arg2) {
    if (M2C_FIELD(arg0, s32 *, 0x28C) != 0) {
        func_001B48A0();
    }
    M2C_FIELD(arg0, s32 *, 0x28C) = arg1;
    func_001B4840(arg1, arg2);
}
