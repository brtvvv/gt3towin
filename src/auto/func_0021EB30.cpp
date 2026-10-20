#include "m2c.h"
extern "C" s32 *func_0021EFA8(s32, s32, s32);                  /* extern */

extern "C" s32 func_0021EB30(void *arg0, s32 arg1) {
    void *temp_v0;

    temp_v0 = M2C_FIELD(arg0, void **, 0x20);
    return *func_0021EFA8(M2C_FIELD(temp_v0, s32 *, 4), M2C_FIELD(temp_v0, s32 *, 0), arg1);
}
