#include "m2c.h"
extern "C" M2C_UNK func_00230F28(s32, s32);                    /* extern */
extern "C" s32 func_00232030(s32);                             /* extern */

extern "C" void func_002312D8(void *arg0) {
    func_00230F28(M2C_FIELD(arg0, s32 *, 8), func_00232030(M2C_FIELD(arg0, s32 *, 0xC)));
}
