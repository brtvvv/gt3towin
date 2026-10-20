#include "m2c.h"
extern "C" M2C_UNK func_00235520(s32);                         /* extern */

extern "C" void func_001C5210(void *arg0) {
    func_00235520(M2C_FIELD(arg0, s32 *, 0x1530));
}
