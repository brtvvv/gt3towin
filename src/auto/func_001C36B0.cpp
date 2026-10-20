#include "m2c.h"
extern "C" s32 func_001C36B0(void *arg0, void *arg1) {
    if (M2C_FIELD(arg1, s32 *, 0x40) & 1) {
        return M2C_FIELD(M2C_FIELD(arg0, void **, 4), s32 *, 0xC) + (*M2C_FIELD(arg1, s32 **, 0x60) * 8);
    }
    return 0;
}
