#include "m2c.h"
extern "C" M2C_UNK func_00252500(s32);                         /* extern */
extern "C" M2C_UNK func_00256908(s32, M2C_UNK, s32);           /* extern */

extern "C" void func_0022A5D8(s32 arg0, s32 arg1) {
    func_00256908(arg1, 0xD, arg0);
    func_00256908(arg1, 1, arg0 + 0x10);
    func_00256908(arg1, 0, arg0 + 0x20);
    func_00256908(arg1, 4, arg0 + 0x30);
    func_00252500(arg1);
}
