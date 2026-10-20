#include "m2c.h"
extern "C" M2C_UNK func_002701E0();                            /* extern */

extern "C" void func_002710D0(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x70) = 0;
    func_002701E0();
}
