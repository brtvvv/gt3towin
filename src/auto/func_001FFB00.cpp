#include "m2c.h"
extern "C" f32 func_001FFB00(s32 arg0, s32 arg1) {
    return M2C_FIELD(((arg1 * 0x10) + arg0), f32 *, 0x98);
}
