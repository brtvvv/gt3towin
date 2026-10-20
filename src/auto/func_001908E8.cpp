#include "m2c.h"
extern f32 D_003516BC;

extern "C" f32 func_001908E8(void **arg0, s32 arg1) {
    return M2C_FIELD(((arg1 * 0x10) + M2C_FIELD(M2C_FIELD(*arg0, void **, 0x70), s32 *, 0x2C)), f32 *, 0xC) + D_003516BC;
}
