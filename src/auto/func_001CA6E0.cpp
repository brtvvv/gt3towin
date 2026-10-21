#define DEF_func_001CA6E0
#include "m2c.h"
#include "funcs.h"
extern "C" s32 func_001CA6E0(void *arg0) {
    s16 temp_a1;
    void *temp_v0;
    void *temp_v1;

    temp_v1 = M2C_FIELD(arg0, void **, 0x1C);
    temp_a1 = M2C_FIELD(temp_v1, s16 *, 0x48);
    temp_v0 = M2C_FIELD(temp_v1, void *(**)(void *, s16), 0x4C)(arg0 + temp_a1, temp_a1);
    if (!(temp_v0 == NULL)) {
        return M2C_FIELD(temp_v0, s32 *, 0x118);
    }
    return 0;
}
