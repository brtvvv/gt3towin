#include "m2c.h"
extern "C" M2C_UNK func_0026D5B8(s32);                         /* extern */

extern "C" void func_0022AEF8(void *arg0) {
    if (M2C_FIELD(arg0, u8 *, 0x8E) != 1) {
        func_0026D5B8(M2C_FIELD(arg0, s32 *, 0));
        M2C_FIELD(arg0, s32 *, 0) = 0;
    }
}
