#include "m2c.h"
extern "C" M2C_UNK func_001904C8();                            /* extern */
extern "C" M2C_UNK func_00232C10(s32, s32);                    /* extern */

extern "C" void func_0018FD50(s32 arg0, s32 arg1) {
    func_001904C8();
    func_00232C10(arg0 + 0x298, arg1);
}
