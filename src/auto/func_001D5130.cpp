#include "m2c.h"
extern "C" M2C_UNK func_001D3860(s32);                         /* extern */

extern "C" void func_001D5130(void *arg0) {
    s32 temp_a0;

    temp_a0 = M2C_FIELD(arg0, s32 *, 0x204);
    if (temp_a0 != 0) {
        func_001D3860(temp_a0);
    }
}
