#include "m2c.h"
extern "C" s32 func_001BF0A0(s32);                             /* extern */
extern "C" s32 func_002352D8(s32);                             /* extern */
extern "C" M2C_UNK func_0027FC78(s32, s32);                    /* extern */

extern "C" void func_001BFF58(s32 *arg0, s32 *arg1) {
    s32 temp_s0;
    s32 temp_s0_2;
    s32 temp_s1;
    s32 temp_s2;

    temp_s0 = *arg1;
    temp_s1 = func_001BF0A0(*arg0);
    temp_s2 = func_001BF0A0(temp_s0);
    temp_s0_2 = func_002352D8(temp_s1 + 0x10);
    func_0027FC78(temp_s0_2, func_002352D8(temp_s2 + 0x10));
}
