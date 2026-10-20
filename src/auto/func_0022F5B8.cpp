#include "m2c.h"
extern "C" s32 func_0022DCD0();                                /* extern */
extern "C" s32 func_0022DCF8(s32);                             /* extern */
extern "C" s32 func_0022E890(s32);                             /* extern */
extern "C" M2C_UNK func_00231310(void *, s32);                 /* extern */

extern "C" void func_0022F5B8(void *arg0) {
    s32 temp_v0;

    if ((func_0022DCD0() != 0) && (func_0022E890(M2C_FIELD(arg0, s32 *, 8)) != 0)) {
        temp_v0 = func_0022DCF8(M2C_FIELD(arg0, s32 *, 8));
        if (temp_v0 != 0) {
            func_00231310(arg0 + 0xBC, temp_v0);
        }
    }
}
