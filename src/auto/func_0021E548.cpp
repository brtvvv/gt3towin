#include "m2c.h"
extern "C" void *func_0021E288(s32);                           /* extern */

extern "C" s8 func_0021E548(void *arg0) {
    return M2C_FIELD(func_0021E288(M2C_FIELD(arg0, s32 *, 0x10)), s8 *, 5);
}
