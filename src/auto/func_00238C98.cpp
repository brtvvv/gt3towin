#include "m2c.h"
extern "C" s32 func_00235688();                                /* extern */
extern "C" s32 func_002357F8(s32, s32);                        /* extern */
extern "C" s32 func_00238D00(s32, s32, s32);                   /* extern */

extern "C" s32 func_00238C98(s32 arg0, s32 arg1) {
    s32 temp_s2;
    s32 temp_v0;

    temp_s2 = func_00235688();
    temp_v0 = func_002357F8(arg0, arg1);
    if (temp_v0 == 0) {
        return -1;
    }
    return func_00238D00(arg0, temp_s2, temp_v0);
}
