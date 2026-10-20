#include "m2c.h"
extern "C" s32 func_0013DBD8();                                /* extern */
extern "C" M2C_UNK func_0013DDE0(s32);                         /* extern */
extern "C" M2C_UNK func_0013E3E0(s32);                         /* extern */

extern "C" void func_0013DBF8(s32 arg0) {
    if (func_0013DBD8() != 0) {
        func_0013DDE0(arg0);
        return;
    }
    func_0013E3E0(arg0);
}
