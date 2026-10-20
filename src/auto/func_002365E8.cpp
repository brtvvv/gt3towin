#include "m2c.h"
extern "C" M2C_UNK func_002327C0(s32, u16);                    /* extern */
extern "C" void *func_00235968();                              /* extern */

extern "C" void func_002365E8(void *arg0) {
    func_002327C0(M2C_FIELD(arg0, s32 *, 0x1D8), M2C_FIELD(func_00235968(), u16 *, 0x40));
}
