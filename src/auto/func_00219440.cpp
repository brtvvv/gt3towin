#include "m2c.h"
extern "C" M2C_UNK func_00251E38(s32, s32);                    /* extern */

extern "C" void func_00219440(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x68) = arg1;
    func_00251E38(M2C_FIELD(arg0, s32 *, 0x64) * 2, arg1 * 2);
}
