#include "m2c.h"
extern "C" M2C_UNK func_0016DDF8(s32);                         /* extern */
extern "C" M2C_UNK func_00170900(s32);                         /* extern */

extern "C" void func_00171830(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x1E4) = 0;
    func_0016DDF8(M2C_FIELD(arg0, s32 *, 0x1F0));
    func_00170900(M2C_FIELD(arg0, s32 *, 0x1F4));
}
