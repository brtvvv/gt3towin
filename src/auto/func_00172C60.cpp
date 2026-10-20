#include "m2c.h"
extern "C" M2C_UNK func_001726A8(s32, s32);                    /* extern */
extern "C" s32 func_002168C0(s32, s32, s32, s32);              /* extern */
extern "C" s32 func_00219680();                                /* extern */

extern "C" void func_00172C60(void *arg0, s32 arg1, s32 arg2) {
    func_001726A8(arg2, func_002168C0(func_00219680() + 0x1F550, M2C_FIELD(arg0, s32 *, 4), M2C_FIELD(arg0, s32 *, 8), arg1));
}
