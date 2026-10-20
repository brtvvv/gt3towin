#include "m2c.h"
extern "C" s32 func_00239B70(void *arg0) {
    void *temp_a1;

    temp_a1 = M2C_FIELD(arg0, void **, 0x18);
    return (M2C_FIELD(temp_a1, u8 *, 0x1CC) * 0xEA60) + (M2C_FIELD(temp_a1, u8 *, 0x1CD) * 0x3E8) + M2C_FIELD(temp_a1, u16 *, 0x1CE);
}
