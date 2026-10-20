#include "m2c.h"
extern "C" M2C_UNK func_00262798();                            /* extern */
extern "C" M2C_UNK func_00262958();                            /* extern */
extern "C" s32 func_002652E8(M2C_UNK);                         /* extern */
extern "C" M2C_UNK func_002653B8(M2C_UNK);                     /* extern */
extern "C" s32 func_00265F38();                                /* extern */
extern s32 D_00354AD8;

extern "C" s32 func_00262628(s32 *arg0, s32 *arg1) {
    s32 temp_v0;
    s32 temp_v0_2;

    func_00262798();
    temp_v0 = func_002652E8(0x20);
    if ((u32) (temp_v0 - 0x101) >= 0xAFU) {
        func_002653B8(0x20);
        return -1;
    }
    func_002653B8(0x20);
    func_00262958();
    temp_v0_2 = func_00265F38();
    *arg1 = temp_v0_2;
    *arg0 = ((((temp_v0 & 0xFF) - 1) * D_00354AD8) + temp_v0_2) - 1;
    *arg1 = 1;
    return 1;
}
