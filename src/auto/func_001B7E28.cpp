#define DEF_func_001B7E28
#include "m2c.h"
#include "funcs.h"
extern "C" void func_001B7E28(void *arg0) {
    s32 temp_v0;
    void *temp_a2;

    temp_a2 = M2C_FIELD(arg0, void **, 0xC);
    if (M2C_FIELD(temp_a2, s8 *, 0xC4) != 0) {
        temp_v0 = func_001B8DF0(M2C_FIELD(arg0, s32 *, 0xB18), M2C_FIELD(arg0, s32 *, 0xB1C), (s32) (temp_a2 + 0xC4));
        if (temp_v0 != 0) {
            M2C_FIELD(temp_v0, M2C_UNK (**)(s32, M2C_UNK, M2C_UNK, s32), 4)(M2C_FIELD(arg0, s32 *, 0xB20), 0, 0, M2C_FIELD(arg0, s32 *, 0x1DC));
        }
    }
}
