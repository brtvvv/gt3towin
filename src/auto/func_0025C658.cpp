#include "m2c.h"
extern "C" M2C_UNK func_0026AE48(s32);                         /* extern */

extern "C" void func_0025C658(void *arg0) {
    if (M2C_FIELD(arg0, s32 *, 0x3C) != 0) {
        M2C_FIELD(arg0, s32 *, 0x3C) = 0;
        func_0026AE48(M2C_FIELD(arg0, s32 *, 0x40));
    }
}
