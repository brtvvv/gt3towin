#include "m2c.h"
extern "C" M2C_UNK func_00233288();                            /* extern */

extern "C" void func_00238618(void *arg0, s64 arg1) {
    M2C_FIELD(arg0, s64 *, 0x48) = arg1;
    func_00233288();
}
