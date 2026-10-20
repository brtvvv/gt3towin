#include "m2c.h"
extern "C" M2C_UNK func_001CB058(void *, s32, M2C_UNK);        /* extern */
extern "C" s32 func_0023D4B8(s32);                             /* extern */

extern "C" void func_001CB000(void *arg0) {
    void *temp_v1;

    if (func_0023D4B8(arg0 + 0xB0) != 0) {
        temp_v1 = M2C_FIELD(arg0, void **, 0x1C);
        func_001CB058(arg0, M2C_FIELD(M2C_FIELD(temp_v1, void *(**)(void *), 0x4C)(arg0 + M2C_FIELD(temp_v1, s16 *, 0x48)), s32 *, 0x118), 1);
    }
}
