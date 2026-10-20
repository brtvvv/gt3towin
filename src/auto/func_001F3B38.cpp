#include "m2c.h"
extern "C" f32 func_00229B80(s32, s32, M2C_UNK);               /* extern */

extern "C" f32 func_001F3B38(void *arg0, s32 arg1) {
    s16 temp_a1;
    void *temp_v1;

    temp_v1 = M2C_FIELD(arg0, void **, 0xE3A8);
    temp_a1 = M2C_FIELD(temp_v1, s16 *, 0x108);
    if ((M2C_FIELD(temp_v1, s32 (**)(void *, s16), 0x10C)(arg0 + temp_a1, temp_a1) - 2) < arg1) {
        return -1.0f;
    }
    return func_00229B80(M2C_FIELD(*M2C_FIELD(arg0, void ***, 0xB7A8), s32 *, 0x70), arg1, 0);
}
