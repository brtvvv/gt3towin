#include "m2c.h"
extern "C" M2C_UNK func_001A2FA8(s32, s32);                    /* extern */

extern "C" void func_00190C80(void *arg0) {
    s32 temp_a1;
    s32 temp_s2;
    u32 var_s0;
    void *temp_s1;
    void *temp_v1;

    temp_v1 = M2C_FIELD(arg0, void **, 0);
    if (M2C_FIELD(temp_v1, s32 *, 0x90) != 0) {
        temp_s2 = M2C_FIELD(arg0, s32 *, 8);
        temp_s1 = M2C_FIELD(temp_v1, void **, 0x70);
        if (temp_s2 != 0) {
            var_s0 = 0;
            if (M2C_FIELD(temp_s1, u32 *, 0x50) != 0) {
                do {
                    temp_a1 = var_s0 << 5;
                    var_s0 += 1;
                    func_001A2FA8(temp_s2, M2C_FIELD(temp_s1, s32 *, 0x54) + temp_a1);
                } while (var_s0 < (u32) M2C_FIELD(temp_s1, u32 *, 0x50));
            }
        }
    }
}
