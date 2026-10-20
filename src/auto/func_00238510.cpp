#include "m2c.h"
extern "C" M2C_UNK func_002335F0();                            /* extern */

extern "C" void func_00238510(void *arg0, s64 arg1) {
    M2C_FIELD(arg0, s64 *, 0xE0) = arg1;
    func_002335F0();
}
