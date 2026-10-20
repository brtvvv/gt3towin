#include "m2c.h"
extern "C" M2C_UNK func_00230F80(s32, s32);                    /* extern */
extern "C" s32 func_002320B8(s32);                             /* extern */

extern "C" void func_00231310(void *arg0) {
    func_00230F80(M2C_FIELD(arg0, s32 *, 8), func_002320B8(M2C_FIELD(arg0, s32 *, 0xC)));
}
