#include "m2c.h"
extern "C" s32 func_001C8750(void *arg0) {
    return M2C_FIELD(M2C_FIELD(arg0, void **, 4), s16 *, 0x40) == 1;
}
