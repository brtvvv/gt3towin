#define DEF_func_0027E260
#include "m2c.h"
#include "funcs.h"
extern "C" void func_0027E260(void *(*arg0)(), s32 (*arg1)(), s32 arg2, s32 arg3, s32 (*arg4)(), s32 arg5) {
    s32 temp_s2;
    void *temp_s0;
    void *temp_s0_2;
    void *temp_s1;
    void *temp_v0;

    temp_v0 = arg0();
    temp_s0 = M2C_FIELD(temp_v0, void **, 4);
    temp_s0_2 = temp_s0 + 0x10;
    temp_s1 = temp_v0 + M2C_FIELD(temp_s0, s16 *, 0x10);
    temp_s2 = arg1();
    M2C_FIELD(temp_s0_2, M2C_UNK (**)(void *, s32, s32, s32, s32, s32), 4)(temp_s1, temp_s2, arg2, arg3, arg4(), arg5);
}
