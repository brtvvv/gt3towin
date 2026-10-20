#include "m2c.h"
extern "C" M2C_UNK func_001C51B8(s32, s32);                    /* extern */
extern "C" s32 func_001C5450();                                /* extern */

extern "C" void func_00218FC0(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x538) = arg1;
    func_001C51B8(func_001C5450(), arg1 + 0x10);
}
