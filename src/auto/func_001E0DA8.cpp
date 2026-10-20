#define DEF_func_001E0DA8
#include "m2c.h"
#include "funcs.h"
extern f32 D_0049EA1C __attribute__((section(".data")));

extern "C" f32 func_001E0DA8(void *arg0, f32 *arg1, s32 *arg2, s32 *arg3) {
    if (arg1 != NULL) {
        *arg1 = 1.0f;
    }
    if (arg2 != NULL) {
        *arg2 = (s32) M2C_FIELD(arg0, s8 *, 0x16CC);
    }
    if (arg3 != NULL) {
        *arg3 = (s32) M2C_FIELD(arg0, s8 *, 0x16CD);
    }
    return M2C_FIELD(arg0, f32 *, 0x16C8) * D_0049EA1C;
}
