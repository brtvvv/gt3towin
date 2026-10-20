#include "m2c.h"
extern "C" s32 func_00239BD0(void *arg0) {
    void *temp_a1;

    temp_a1 = M2C_FIELD(arg0, void **, 0x18);
    return (M2C_FIELD(temp_a1, u8 *, 0x1C4) * 0xEA60) + (M2C_FIELD(temp_a1, u8 *, 0x1C5) * 0x3E8) + M2C_FIELD(temp_a1, u16 *, 0x1C6);
}
