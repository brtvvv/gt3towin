#include "m2c.h"
extern "C" M2C_UNK func_00233550();                            /* extern */

extern "C" void func_00238530(void *arg0, s64 arg1) {
    M2C_FIELD(arg0, s64 *, 0xD8) = arg1;
    func_00233550();
}
