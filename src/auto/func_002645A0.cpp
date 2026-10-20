#include "m2c.h"
extern "C" s32 func_0026D660(M2C_UNK, s32);                    /* extern */
extern "C" M2C_UNK func_00287120(M2C_UNK);                     /* extern */

extern "C" s32 func_002645A0(s32 arg0) {
    s32 temp_s0;

    temp_s0 = func_0026D660(0x80, ((u32) (arg0 + 0x3F) >> 6) << 6);
    func_00287120(0);
    return temp_s0;
}
