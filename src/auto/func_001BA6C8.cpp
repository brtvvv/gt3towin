#include "m2c.h"
extern "C" M2C_UNK func_001BA6A0();                            /* extern */

extern "C" void func_001BA6C8(void *arg0, void *arg1) {
    if (M2C_FIELD(arg1, s32 *, 0x40) & 0xF00000) {
        func_001BA6A0();
        return;
    }
    M2C_FIELD(arg0, f32 *, 0xA4) = 1.0f;
}
