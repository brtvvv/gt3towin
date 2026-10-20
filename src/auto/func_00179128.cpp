#include "m2c.h"
extern "C" M2C_UNK func_0017C258(s32, void *);                 /* extern */
extern "C" s32 func_0017C2F0(void *, s32);                     /* extern */

extern "C" s32 func_00179128(s32 arg0, s32 arg1, s32 arg2) {
    s32 temp_s2;
    s32 temp_s3;
    void *temp_s1;

    temp_s1 = arg0 + 0x11DC;
    temp_s2 = arg0 + 0x11C8;
    M2C_FIELD(temp_s1, s32 *, 0x10) = arg1;
    temp_s3 = func_0017C2F0(temp_s1, temp_s2);
    if (arg2 != 0) {
        func_0017C258(temp_s2, temp_s1);
    }
    return temp_s3;
}
