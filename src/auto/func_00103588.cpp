#include "m2c.h"
extern "C" s32 func_00114A70(s32);                             /* extern */
extern "C" void *func_00219680();                              /* extern */
extern "C" s32 func_0021E568(s32, M2C_UNK, s32);               /* extern */
extern "C" s32 func_0021EE60();                                /* extern */

extern "C" s32 func_00103588(void *arg0, M2C_UNK arg1) {
    s32 temp_s0;
    s32 temp_s1;

    temp_s1 = func_0021EE60();
    temp_s0 = func_0021E568(temp_s1, arg1, func_00114A70(M2C_FIELD(arg0, s32 *, 0x18)));
    return M2C_FIELD(func_00219680(), s32 *, 0x44) >= temp_s0;
}
