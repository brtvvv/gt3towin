#include "m2c.h"
extern "C" M2C_UNK func_002202D8(s32);                         /* extern */
extern "C" M2C_UNK func_002203A8(s32);                         /* extern */

extern "C" void func_0013D0F0(s32 arg0) {
    s32 temp_s0;

    temp_s0 = arg0 + 8;
    func_002203A8(temp_s0);
    func_002202D8(temp_s0);
}
