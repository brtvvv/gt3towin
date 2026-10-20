#include "m2c.h"
extern "C" M2C_UNK func_00251BF8(s32, s32, s32);               /* extern */
extern "C" M2C_UNK func_00251CC8(M2C_UNK);                     /* extern */
extern "C" M2C_UNK func_00253458(M2C_UNK);                     /* extern */

extern "C" void func_002441E8(void *arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 temp_v1;
    void *temp_s0;

    M2C_FIELD(arg0, s32 *, 0) = arg1;
    M2C_FIELD(arg0, s32 *, 4) = arg2;
    M2C_FIELD(arg0, s32 *, 8) = arg3;
    func_00253458(1);
    func_00251BF8(arg1, arg2, arg3);
    func_00251CC8(0);
    temp_s0 = arg0 + 0xA50;
    temp_v1 = M2C_FIELD(temp_s0, s32 *, 0x70);
    M2C_FIELD(((temp_v1 * 0x38) + temp_s0), s32 *, 0x28) = 0;
    M2C_FIELD((((1 - temp_v1) * 0x38) + temp_s0), s32 *, 0x28) = 0;
}
