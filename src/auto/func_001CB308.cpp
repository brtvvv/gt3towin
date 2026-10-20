#include "m2c.h"
extern "C" f32 func_001CB308(void *arg0) {
    if (M2C_FIELD(arg0, s32 *, 0xBC) == 0) {
        return M2C_FIELD(arg0, f32 *, 0x3C);
    }
    return M2C_FIELD(arg0, f32 *, 0x38);
}
