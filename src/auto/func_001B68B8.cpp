#include "m2c.h"
extern "C" M2C_UNK func_001BAEA0(s32);                         /* extern */
extern "C" M2C_UNK func_001CABB0();                            /* extern */

extern "C" void func_001B68B8(s32 arg0) {
    func_001CABB0();
    func_001BAEA0(arg0 + 0x128);
}
