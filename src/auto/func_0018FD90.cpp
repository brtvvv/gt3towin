#include "m2c.h"
extern "C" M2C_UNK func_001904E8();                            /* extern */
extern "C" M2C_UNK func_00232C10(s32, s32);                    /* extern */

extern "C" void func_0018FD90(s32 arg0) {
    func_001904E8();
    func_00232C10(arg0 + 0x298, arg0 + 0x60);
}
