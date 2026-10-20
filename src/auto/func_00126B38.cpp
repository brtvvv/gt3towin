#include "m2c.h"
extern "C" M2C_UNK func_001CD868(void *, M2C_UNK);             /* extern */

extern "C" void func_00126B38(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0xE54) = 7;
    func_001CD868(arg0 + 0xE58, 4);
}
