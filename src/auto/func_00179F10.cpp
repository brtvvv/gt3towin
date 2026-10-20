#include "m2c.h"
extern "C" M2C_UNK func_0027ED70(s32, M2C_UNK, M2C_UNK);       /* extern */

extern "C" void func_00179F10(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x818) = 0;
    func_0027ED70(arg0 + 0x800, 0, 0x18);
}
