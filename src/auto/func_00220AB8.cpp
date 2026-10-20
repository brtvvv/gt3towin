#include "m2c.h"
extern "C" s32 func_00220AB8(void *arg0) {
    return ((s32) M2C_FIELD(M2C_FIELD(arg0, void **, 0x84), s32 *, 0x14) >> 1) & 1;
}
