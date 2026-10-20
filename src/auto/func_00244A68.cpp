#include "m2c.h"
extern "C" s32 func_00251BE8();                                /* extern */
extern "C" M2C_UNK func_00286EE0(s32);                         /* extern */

extern "C" void func_00244A68(void *arg0) {
    func_00286EE0(M2C_FIELD(arg0, s32 *, 0xA20));
    M2C_FIELD(arg0, s32 *, 0xA28) = 1;
    M2C_FIELD(arg0, s32 *, 0xA2C) = (s32) (func_00251BE8() != 0);
}
