#include "m2c.h"
extern "C" M2C_UNK func_00225950(s32);                         /* extern */
extern "C" M2C_UNK func_00227D00(s32);                         /* extern */

extern "C" void func_001AA620(void *arg0) {
    func_00225950(M2C_FIELD(arg0, s32 *, 4));
    func_00225950(M2C_FIELD(arg0, s32 *, 0x58));
    func_00225950(M2C_FIELD(arg0, s32 *, 0x14));
    func_00225950(M2C_FIELD(arg0, s32 *, 0x24));
    func_00227D00(M2C_FIELD(arg0, s32 *, 0x78));
}
