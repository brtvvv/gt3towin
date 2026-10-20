#include "m2c.h"
extern "C" s32 func_0023FF38(s32);                             /* extern */

extern "C" s32 func_001485D0(void *arg0) {
    if (func_0023FF38(M2C_FIELD(arg0, s32 *, 0xFB60)) != 0) {
        M2C_FIELD(arg0, s32 *, 0xFB90) = 1;
    }
    return M2C_FIELD(arg0, s32 *, 0xFB90);
}
