#include "m2c.h"
extern "C" M2C_UNK func_002331B8();                            /* extern */

extern "C" void func_002385B0(void *arg0, s64 arg1) {
    M2C_FIELD(arg0, s64 *, 0x78) = arg1;
    func_002331B8();
}
