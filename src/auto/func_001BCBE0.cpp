#include "m2c.h"
extern "C" M2C_UNK func_001BC738(s32, s32);                    /* extern */

extern "C" s32 func_001BCBE0(void *arg0, void *arg1, s32 arg2) {
    func_001BC738(arg2, M2C_FIELD(arg0, s32 *, 4));
    return M2C_FIELD(arg1, s32 *, 0x2C);
}
