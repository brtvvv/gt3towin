#include "m2c.h"
extern "C" M2C_UNK func_001F61F8(s32);                         /* extern */

extern "C" void func_002115B0(void *arg0) {
    s32 temp_a0;

    temp_a0 = M2C_FIELD(arg0, s32 *, 0x128);
    if (temp_a0 != 0) {
        func_001F61F8(temp_a0);
    }
}
