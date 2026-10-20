#include "m2c.h"
extern "C" M2C_UNK func_00217F98(s32, s32, s32);               /* extern */
extern "C" s32 func_00219680();                                /* extern */

extern "C" void func_0012F260(s32 arg0, s32 arg1) {
    func_00217F98(func_00219680() + 0x23510, arg1, arg0);
}
