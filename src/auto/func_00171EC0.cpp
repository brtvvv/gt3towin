#include "m2c.h"
extern "C" f32 func_00171EC0(void *arg0) {
    return M2C_FIELD(arg0, f32 *, 0x5D0) + (M2C_FIELD(arg0, f32 *, 0x520) * 5.0f);
}
