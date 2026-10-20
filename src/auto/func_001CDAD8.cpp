#include "m2c.h"
extern "C" M2C_UNK func_00245508();                            /* extern */

extern "C" void *func_001CDAD8(void *arg0) {
    func_00245508();
    M2C_FIELD(arg0, s32 *, 0x60) = 0;
    return arg0;
}
