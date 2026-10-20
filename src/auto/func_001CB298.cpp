#include "m2c.h"
extern "C" void func_001CB298(void *arg0) {
    s16 temp_a1;
    void *temp_v1;

    temp_v1 = M2C_FIELD(arg0, void **, 0x1C);
    temp_a1 = M2C_FIELD(temp_v1, s16 *, 0x48);
    M2C_FIELD(temp_v1, M2C_UNK (**)(void *, s16), 0x4C)(arg0 + temp_a1, temp_a1);
}
