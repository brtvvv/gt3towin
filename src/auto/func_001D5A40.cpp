#define DEF_func_001D5A40
#include "m2c.h"
#include "funcs.h"
extern "C" void func_001D5A40(s32 unused0, s32 arg1, void *arg2) {
    void *temp_s0;
    void *temp_s0_2;
    void *temp_s1;

    temp_s0 = M2C_FIELD(arg2, void **, 0x1C);
    temp_s0_2 = temp_s0 + 0x100;
    temp_s1 = arg2 + M2C_FIELD(temp_s0, s16 *, 0x100);
    M2C_FIELD(temp_s0_2, M2C_UNK (**)(void *, s32), 4)(temp_s1, func_001D5BD0(arg1, 0));
}
