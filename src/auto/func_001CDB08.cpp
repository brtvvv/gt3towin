#include "m2c.h"
extern "C" M2C_UNK func_001CDC40();                            /* extern */
extern "C" M2C_UNK func_00245530(s32, M2C_UNK);                /* extern */
extern "C" M2C_UNK func_0027D2F8(s32);                         /* extern */

extern "C" void func_001CDB08(s32 arg0, s32 arg1) {
    func_001CDC40();
    func_00245530(arg0, 2);
    if (arg1 & 1) {
        func_0027D2F8(arg0);
    }
}
