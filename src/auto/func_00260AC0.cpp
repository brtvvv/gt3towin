#include "m2c.h"
extern s32 D_00354CB4;

extern "C" s32 func_00260AC0(void *arg0) {
    void *temp_v1;

    temp_v1 = M2C_FIELD(arg0, void **, 8);
    return M2C_FIELD(temp_v1, s32 *, 0x34) + (M2C_FIELD(temp_v1, s32 *, 0x30) << D_00354CB4);
}
