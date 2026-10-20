#include "m2c.h"
extern "C" s32 func_00232210(s32);                             /* extern */
extern "C" M2C_UNK func_0023A620(s32, s32);                    /* extern */

extern "C" void func_0023A5E8(s32 arg0, s32 arg1) {
    func_0023A620(arg0, func_00232210(arg1));
}
