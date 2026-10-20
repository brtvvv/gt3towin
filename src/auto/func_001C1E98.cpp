#include "m2c.h"
extern "C" s32 func_001C1E98(void *arg0) {
    s16 temp_a1;
    void *temp_v1;

    temp_v1 = M2C_FIELD(arg0, void **, 0x1C);
    temp_a1 = M2C_FIELD(temp_v1, s16 *, 0x48);
    return M2C_FIELD(M2C_FIELD(temp_v1, void *(**)(void *, s16), 0x4C)(arg0 + temp_a1, temp_a1), s32 *, 0x160);
}
