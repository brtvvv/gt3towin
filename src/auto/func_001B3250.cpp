#include "m2c.h"
extern "C" M2C_UNK func_001B2858(void *, void *);              /* extern */

extern "C" void func_001B3250(void *arg0, s32 arg1) {
    s32 temp_v0;

    temp_v0 = M2C_FIELD(arg0, s32 *, 0x8DC);
    if ((arg1 != temp_v0) && (arg1 >= 0)) {
        if (temp_v0 >= 0) {
            func_001B2858(arg0 + ((temp_v0 * 0xF0) + 0x240), arg0 + 0x8F0);
        }
        M2C_FIELD(arg0, s32 *, 0x8DC) = arg1;
        func_001B2858(arg0 + ((arg1 * 0xF0) + 0x240), arg0 + 0x8E0);
    }
}
