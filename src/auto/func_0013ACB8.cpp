#include "m2c.h"
extern "C" M2C_UNK func_001CC978(s32, s32);                    /* extern */
extern "C" M2C_UNK func_0022AD80(s32, M2C_UNK);                /* extern */

extern "C" void func_0013ACB8(s32 arg0, s32 arg1) {
    func_0022AD80(arg0 + 0xDE8, 2);
    func_001CC978(arg0, arg1);
}
