#include "m2c.h"
extern "C" M2C_UNK func_00214E08(s32, s32);                    /* extern */
extern "C" M2C_UNK func_0027EBC8(s32, s32, M2C_UNK);           /* extern */

extern "C" void func_00217428(s32 arg0, s32 arg1) {
    func_0027EBC8(arg1, arg0, 0x10);
    func_00214E08(arg0 + 0x10, arg1 + 0x10);
}
