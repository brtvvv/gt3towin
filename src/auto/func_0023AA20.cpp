#include "m2c.h"
extern "C" M2C_UNK func_002379C0(s32, s32);                    /* extern */
extern "C" s32 func_00243DC8();                                /* extern */

extern "C" s32 func_0023AA20(s32 arg0) {
    s32 temp_v0;

    temp_v0 = func_00243DC8();
    func_002379C0(arg0 + 8, temp_v0);
    return temp_v0;
}
