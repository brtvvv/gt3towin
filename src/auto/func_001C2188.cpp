#include "m2c.h"
extern "C" M2C_UNK func_001B4F10();                            /* extern */
extern "C" M2C_UNK func_001BAEA0(s32);                         /* extern */

extern "C" void func_001C2188(s32 arg0) {
    func_001B4F10();
    func_001BAEA0(arg0 + 0x164);
}
