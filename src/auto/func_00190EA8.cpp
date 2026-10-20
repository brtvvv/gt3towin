#include "m2c.h"
extern void *D_00353930;

extern "C" s32 func_00190EA8(s32 arg0) {
    return M2C_FIELD(D_00353930, s32 *, 0x28) + (arg0 << 7);
}
