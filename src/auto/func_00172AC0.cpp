#include "m2c.h"
extern "C" M2C_UNK func_00214018(s32, s32, s32);               /* extern */
extern "C" s32 func_00219680();                                /* extern */

extern "C" void func_00172AC0(s32 arg0, s32 arg1) {
    func_00214018(func_00219680() + 0x26160, arg0 + 4, arg1);
}
