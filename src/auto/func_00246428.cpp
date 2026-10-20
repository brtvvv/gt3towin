#include "m2c.h"
extern "C" s32 func_0026D5E0(s32);                             /* extern */
extern "C" M2C_UNK func_0027EBC8(s32, s32, s32);               /* extern */

extern "C" void func_00246428(void *arg0) {
    s32 temp_s0;
    s32 temp_v0;

    if (M2C_FIELD(arg0, s32 *, 0x10) == 0) {
        temp_s0 = M2C_FIELD(arg0, s32 *, 0xC) * 0x28;
        temp_v0 = func_0026D5E0(temp_s0);
        func_0027EBC8(temp_v0, M2C_FIELD(arg0, s32 *, 8), temp_s0);
        M2C_FIELD(arg0, s32 *, 8) = temp_v0;
        M2C_FIELD(arg0, s32 *, 0x10) = 1;
    }
}
