#include "m2c.h"
extern "C" M2C_UNK func_00218B40(s32, s32);                    /* extern */
extern "C" M2C_UNK func_00219570();                            /* extern */
extern "C" M2C_UNK func_0027EBC8(s32, s32, M2C_UNK);           /* extern */

extern "C" void func_002194E8(s32 arg0, s32 arg1) {
    func_00219570();
    func_0027EBC8(arg1, arg0, 0x638);
    func_00218B40(arg0 + 0x638, arg1 + 0x638);
}
