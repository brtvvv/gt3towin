#include "m2c.h"
extern "C" void *func_0021E1F0(s32);                           /* extern */

extern "C" s32 func_0021E508(void *arg0) {
    return M2C_FIELD(func_0021E1F0(M2C_FIELD(arg0, s32 *, 0x10)), s32 *, 4);
}
