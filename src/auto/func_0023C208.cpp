#include "m2c.h"
extern "C" s32 func_002390C8(s32);                             /* extern */
extern "C" M2C_UNK func_0027EBC8(s32, s32, M2C_UNK);           /* extern */

extern "C" s32 func_0023C208(s32 arg0) {
    s32 temp_v0;

    temp_v0 = func_002390C8(arg0 + 0x10);
    func_0027EBC8(arg0 + 0x228, temp_v0, 8);
    return temp_v0 + 8;
}
