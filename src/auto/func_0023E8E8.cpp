#include "m2c.h"
extern "C" void func_0023E8E8(u8 **arg0) {
    u8 *temp_a1;
    u8 *var_a0;
    void *temp_v1;

    temp_a1 = *arg0;
    if ((M2C_FIELD(temp_a1, u8 *, 0) == 0xAD) && (M2C_FIELD(temp_a1, u8 *, 1) == 0x90) && (M2C_FIELD(temp_a1, u8 *, 2) == 0xB9) && (M2C_FIELD(temp_a1, u8 *, 3) == 0xAC)) {
        var_a0 = temp_a1 + M2C_FIELD(temp_a1, s32 *, 0xC);
        temp_v1 = var_a0 + M2C_FIELD(temp_a1, s32 *, 0x10);
        if ((u32) var_a0 < (u32) temp_v1) {
            do {
                *var_a0 = ~*var_a0;
                var_a0 += 1;
            } while ((u32) var_a0 < (u32) temp_v1);
        }
        M2C_FIELD(*arg0, u8 *, 0) = 0x52;
        M2C_FIELD(*arg0, u8 *, 1) = 0x6FU;
        M2C_FIELD(*arg0, u8 *, 2) = 0x46U;
        M2C_FIELD(*arg0, u8 *, 3) = 0x53U;
    }
}
