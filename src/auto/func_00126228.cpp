#include "m2c.h"
extern "C" s32 func_00219680();                                /* extern */
extern "C" M2C_UNK func_0021A6C8(s32, s32);                    /* extern */

extern "C" void func_00126228(void) {
    s32 temp_s0;

    temp_s0 = func_00219680() + 0x30D10;
    func_0021A6C8(func_00219680(), temp_s0);
}
