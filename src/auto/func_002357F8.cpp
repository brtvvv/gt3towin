#include "m2c.h"
extern "C" M2C_UNK func_00235018(s32, s32, s32);               /* extern */
extern "C" s32 func_00235688();                                /* extern */
extern "C" s32 func_00235770(s32, s32);                        /* extern */

extern "C" void func_002357F8(s32 arg0, s32 arg1) {
    s32 temp_s2;

    temp_s2 = func_00235688();
    func_00235018(arg0, temp_s2, func_00235770(arg0, arg1));
}
