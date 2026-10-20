#include "m2c.h"
extern "C" M2C_UNK func_00211720(s32, void *);                 /* extern */

extern "C" void func_001E1570(void *arg0) {
    func_00211720(M2C_FIELD(arg0, s32 *, 0xC), arg0 + 0x16D4);
}
