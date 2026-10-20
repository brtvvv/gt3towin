#include "m2c.h"
extern "C" M2C_UNK func_00214BE8(s32, s32, s32);               /* extern */
extern "C" s32 func_00219680();                                /* extern */

extern "C" void func_001728A8(void *arg0, s32 arg1) {
    func_00214BE8(func_00219680() + 0x246F8, M2C_FIELD(arg0, s32 *, 4), arg1);
}
