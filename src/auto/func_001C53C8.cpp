#include "m2c.h"
extern "C" s32 func_00235FC0(s32);                             /* extern */

extern "C" s32 func_001C53C8(void *arg0) {
    return func_00235FC0(M2C_FIELD(arg0, s32 *, 0x1530)) == 0x42;
}
