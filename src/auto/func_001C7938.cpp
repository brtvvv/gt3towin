#include "m2c.h"
extern "C" M2C_UNK func_001B3970(void *, s32);                 /* extern */

extern "C" void func_001C7938(void *arg0) {
    func_001B3970(arg0 + 0x48C, M2C_FIELD(arg0, s32 *, 0x4AC));
}
