#include "m2c.h"
extern "C" M2C_UNK func_001B0DA8(s32, s32);                    /* extern */

extern "C" void func_001B2858(void *arg0, s32 arg1) {
    func_001B0DA8(arg1, M2C_FIELD(arg0, s32 *, 0x40));
    func_001B0DA8(arg1, M2C_FIELD(arg0, s32 *, 0x44));
}
