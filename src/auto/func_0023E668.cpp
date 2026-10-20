#include "m2c.h"
extern "C" M2C_UNK func_0024B700();                            /* extern */

extern "C" void func_0023E668(void *arg0) {
    if (M2C_FIELD(arg0, s32 *, 0x258) != 0) {
        func_0024B700();
        M2C_FIELD(arg0, s32 *, 0x258) = 0;
    }
}
