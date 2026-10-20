#include "m2c.h"
extern "C" M2C_UNK func_00246168();                            /* extern */
extern "C" M2C_UNK func_0027D2F8(s32);                         /* extern */

extern "C" void func_002460D0(s32 arg0, s32 arg1) {
    func_00246168();
    if (arg1 & 1) {
        func_0027D2F8(arg0);
    }
}
