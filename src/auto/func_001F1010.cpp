#include "m2c.h"
extern "C" M2C_UNK func_001DB0C8(s32, s32);                    /* extern */

extern "C" void func_001F1010(void **arg0, s32 arg1) {
    func_001DB0C8(arg1, M2C_FIELD(*arg0, s32 *, 0x14));
}
