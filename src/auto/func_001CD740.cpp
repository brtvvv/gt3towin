#include "m2c.h"
extern "C" s32 func_001CD740(void *arg0, s32 arg1) {
    if (arg1 < M2C_FIELD(arg0, s32 *, 4)) {
        return M2C_FIELD(arg0, s32 *, 8) + (arg1 << 5) + 4;
    }
    return 0;
}
