#include "m2c.h"
extern "C" M2C_UNK func_00233100();                            /* extern */

extern "C" void func_00238550(void *arg0, s64 arg1) {
    M2C_FIELD(arg0, s64 *, 0x38) = arg1;
    func_00233100();
}
