#include "m2c.h"
extern "C" void *func_0021E120(s32);                           /* extern */

extern "C" s32 func_0021E2E0(void *arg0) {
    return M2C_FIELD(func_0021E120(M2C_FIELD(arg0, s32 *, 0xC)), s32 *, 4);
}
