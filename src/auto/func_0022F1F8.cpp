#include "m2c.h"
extern "C" s32 func_0022F1F8(void *arg0, s32 arg1) {
    s16 temp_a1;
    void *temp_v1;

    temp_v1 = M2C_FIELD(arg0, void **, 0xC0);
    temp_a1 = M2C_FIELD(temp_v1, s16 *, 0x38);
    return (M2C_FIELD(temp_v1, s32 (**)(void *, s16), 0x3C)(arg0 + temp_a1, temp_a1) & arg1) != 0;
}
