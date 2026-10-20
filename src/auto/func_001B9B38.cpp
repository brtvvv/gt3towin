#include "m2c.h"
extern "C" M2C_UNK func_001B9B78(s32, s32);                    /* extern */
extern "C" M2C_UNK func_00228330(s32);                         /* extern */

extern "C" void func_001B9B38(s32 arg0, s32 arg1) {
    func_00228330(arg1);
    func_001B9B78(arg0, arg1);
}
