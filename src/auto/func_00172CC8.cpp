#include "m2c.h"
extern "C" M2C_UNK func_00216930(s32, s32, s32, s32);          /* extern */
extern "C" s32 func_00219680();                                /* extern */

extern "C" void func_00172CC8(void *arg0, s32 arg1) {
    func_00216930(func_00219680() + 0x1F550, M2C_FIELD(arg0, s32 *, 4), M2C_FIELD(arg0, s32 *, 8), arg1);
}
