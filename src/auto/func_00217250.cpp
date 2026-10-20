#include "m2c.h"
extern "C" M2C_UNK func_00217280();                            /* extern */

extern "C" void *func_00217250(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x10) = 8;
    func_00217280();
    return arg0;
}
