#include "m2c.h"
extern "C" s32 func_001B4820();                                /* extern */
extern "C" s32 func_0026BCA0(s32, s32, M2C_UNK);               /* extern */
extern "C" M2C_UNK func_0026C1C8(s32);                         /* extern */

extern "C" s32 func_001BC338(s32 arg0) {
    s32 temp_v0;

    temp_v0 = func_0026BCA0(func_001B4820(), arg0, 0x10);
    if (temp_v0 == 0) {
        func_0026C1C8(func_001B4820());
    }
    return temp_v0;
}
