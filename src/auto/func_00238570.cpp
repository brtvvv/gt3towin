#include "m2c.h"
extern "C" M2C_UNK func_00233048();                            /* extern */

extern "C" void func_00238570(void *arg0, s64 arg1) {
    M2C_FIELD(arg0, s64 *, 0x40) = arg1;
    func_00233048();
}
