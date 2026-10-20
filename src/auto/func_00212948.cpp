#include "m2c.h"
extern "C" M2C_UNK func_00212980();                            /* extern */

extern "C" void *func_00212948(void *arg0) {
    M2C_FIELD(arg0, s32 *, 4) = 0;
    M2C_FIELD(arg0, s32 *, 0) = 0x87654321;
    func_00212980();
    return arg0;
}
