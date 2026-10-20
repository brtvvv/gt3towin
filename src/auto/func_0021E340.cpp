#include "m2c.h"
extern "C" void *func_0021E1B8(s32);                           /* extern */

extern "C" s16 func_0021E340(void *arg0) {
    return M2C_FIELD(func_0021E1B8(M2C_FIELD(arg0, s32 *, 0xC)), s16 *, 0xA);
}
