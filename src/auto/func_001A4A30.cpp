#include "m2c.h"
extern "C" M2C_UNK func_001A3528(void *);                      /* extern */
extern "C" M2C_UNK func_001A46A0(s32);                         /* extern */
extern "C" M2C_UNK func_001A48D8(s32, M2C_UNK);                /* extern */

extern "C" void func_001A4A30(void *arg0) {
    s32 temp_s0;

    temp_s0 = arg0 + 0xC;
    func_001A48D8(temp_s0, 1);
    func_001A46A0(temp_s0);
    func_001A3528(arg0);
    M2C_FIELD(arg0, s32 *, 0x2CC) = 0;
}
