#include "m2c.h"
extern "C" s32 func_00219F60();                                /* extern */
extern "C" M2C_UNK func_0021A860(void *, s32);                 /* extern */

extern "C" void func_00219F28(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x30) = arg1;
    func_0021A860(arg0, func_00219F60());
}
