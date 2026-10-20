#include "m2c.h"
extern "C" M2C_UNK func_0026F5A8();                            /* extern */
extern "C" M2C_UNK func_0026F5E0();                            /* extern */
extern "C" s32 func_0028ACD0(s32, s32);                        /* extern */

extern "C" s32 func_0026AFB8(s32 arg0, s32 arg1) {
    s32 temp_s0;

    func_0026F5A8();
    temp_s0 = func_0028ACD0(arg0, arg1);
    func_0026F5E0();
    return temp_s0;
}
