#define DEF_func_001976B0
#include "m2c.h"
#include "funcs.h"
extern "C" void func_001976B0(void *arg0, s32 unused1, s32 unused2, s32 arg3, s32 arg4) {
    void *temp_v1;
    void *temp_v1_2;

    temp_v1 = M2C_FIELD(arg0, void **, 0x14);
    M2C_FIELD(temp_v1, M2C_UNK (**)(void *), 0x3C)(arg0 + M2C_FIELD(temp_v1, s16 *, 0x38));
    temp_v1_2 = M2C_FIELD(arg0, void **, 0x14);
    M2C_FIELD(temp_v1_2, M2C_UNK (**)(void *, s32, s32), 0x44)(arg0 + M2C_FIELD(temp_v1_2, s16 *, 0x40), arg3, arg4);
}
