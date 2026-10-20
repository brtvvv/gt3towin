#include "m2c.h"
extern "C" s32 func_001EDF90(void *arg0) {
    return M2C_FIELD(arg0, s16 *, 0x434) - M2C_FIELD(arg0, u8 *, 0x467);
}
