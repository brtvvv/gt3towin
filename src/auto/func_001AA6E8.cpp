#include "m2c.h"
extern "C" M2C_UNK func_00225BC8(s32);                         /* extern */
extern "C" M2C_UNK func_00227D60(s32);                         /* extern */

extern "C" void func_001AA6E8(void *arg0) {
    func_00225BC8(M2C_FIELD(arg0, s32 *, 4));
    func_00225BC8(M2C_FIELD(arg0, s32 *, 0x58));
    func_00225BC8(M2C_FIELD(arg0, s32 *, 0x14));
    func_00225BC8(M2C_FIELD(arg0, s32 *, 0x24));
    func_00227D60(M2C_FIELD(arg0, s32 *, 0x78));
}
