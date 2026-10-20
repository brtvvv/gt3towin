#include "m2c.h"
extern "C" s32 func_001F5D38(s32);                             /* extern */
extern "C" M2C_UNK func_001F5EF8(s32, s32);                    /* extern */

extern "C" void func_001F5EC0(s32 arg0, s32 arg1) {
    func_001F5EF8(arg0, func_001F5D38(arg1));
}
