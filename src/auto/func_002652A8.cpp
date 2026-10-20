#include "m2c.h"
extern "C" s32 func_002652E8();                                /* extern */
extern "C" M2C_UNK func_002653B8(s32);                         /* extern */

extern "C" s32 func_002652A8(s32 arg0) {
    s32 temp_s1;

    temp_s1 = func_002652E8();
    func_002653B8(arg0);
    return temp_s1;
}
