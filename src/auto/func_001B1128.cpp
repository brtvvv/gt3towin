#include "m2c.h"
extern "C" M2C_UNK func_001B11C8();                            /* extern */
extern "C" M2C_UNK func_0022EBC8(s32, M2C_UNK);                /* extern */
extern "C" M2C_UNK func_0027D2F8(s32);                         /* extern */

extern "C" void func_001B1128(s32 arg0, s32 arg1) {
    func_001B11C8();
    func_0022EBC8(arg0, 2);
    if (arg1 & 1) {
        func_0027D2F8(arg0);
    }
}
