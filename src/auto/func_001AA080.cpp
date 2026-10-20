#include "m2c.h"
extern "C" M2C_UNK func_001AA620();                            /* extern */
extern "C" M2C_UNK func_0022A470(s32, s32);                    /* extern */

extern "C" void func_001AA080(void *arg0) {
    s32 temp_a0;

    func_001AA620();
    temp_a0 = M2C_FIELD(arg0, s32 *, 0x8C);
    if (temp_a0 != 0) {
        func_0022A470(temp_a0, M2C_FIELD(arg0, s32 *, 0x70));
    }
}
