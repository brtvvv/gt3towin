#include "m2c.h"
extern "C" s32 func_00229B30(s32, M2C_UNK);                    /* extern */

extern "C" s32 func_001F3AF8(void *arg0) {
    s32 temp_v0;

    temp_v0 = func_00229B30(M2C_FIELD(*M2C_FIELD(arg0, void ***, 0xB7A8), s32 *, 0x70), 0) + 1;
    return (temp_v0 >= 5) ? 4 : temp_v0;
}
