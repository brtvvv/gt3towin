#include "m2c.h"
extern "C" M2C_UNK func_001B9A58(void *, s32);                 /* extern */
extern "C" M2C_UNK func_00220550(s32);                         /* extern */

extern "C" void func_001B9BF8(void *arg0, s32 arg1) {
    func_00220550(arg1);
    func_001B9A58(arg0, M2C_FIELD(arg0, s32 *, 0x2C8));
}
