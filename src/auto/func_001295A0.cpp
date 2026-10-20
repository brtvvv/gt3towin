#include "m2c.h"
extern "C" M2C_UNK func_001BAB98(s32, M2C_UNK);                /* extern */
extern "C" M2C_UNK func_001C0360(s32);                         /* extern */

extern "C" void func_001295A0(s32 arg0, s32 arg1) {
    func_001BAB98(arg0 + 0x108, 2);
    func_001BAB98(arg0, 0);
    if (arg1 & 1) {
        func_001C0360(arg0);
    }
}
