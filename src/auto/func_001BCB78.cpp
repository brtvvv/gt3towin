#include "m2c.h"
extern "C" s32 func_001BCB78(void *arg0, void *arg1) {
    M2C_FIELD(arg0, s32 *, 8) = (s32) (M2C_FIELD(arg0, s32 *, 8) + M2C_FIELD(arg1, s32 *, 4));
    return M2C_FIELD(arg1, s32 *, 0x2C);
}
