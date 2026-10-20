#include "m2c.h"
extern "C" M2C_UNK func_001487B8();                            /* extern */

extern "C" void func_001486E8(void *arg0) {
    if (M2C_FIELD(arg0, s32 *, 0xFBBC) != 0) {
        func_001487B8();
        M2C_FIELD(arg0, s32 *, 0xFBBC) = 0;
    }
}
