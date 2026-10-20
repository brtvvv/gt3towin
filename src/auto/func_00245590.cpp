#include "m2c.h"
extern "C" M2C_UNK func_00245E38();                            /* extern */

extern "C" void *func_00245590(void *arg0, s32 arg1, s32 arg2, s32 arg3) {
    M2C_FIELD(arg0, s32 *, 0x10) = 0;
    M2C_FIELD(arg0, s32 *, 0x14) = 0;
    M2C_FIELD(arg0, s32 *, 0x30) = 0;
    M2C_FIELD(arg0, s32 *, 0x34) = 0;
    M2C_FIELD(arg0, s32 *, 4) = arg1;
    M2C_FIELD(arg0, s32 *, 8) = arg2;
    M2C_FIELD(arg0, s32 *, 0xC) = arg3;
    func_00245E38();
    return arg0;
}
