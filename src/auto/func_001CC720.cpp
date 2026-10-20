#include "m2c.h"
extern "C" M2C_UNK func_00252790(M2C_UNK);                     /* extern */
extern "C" M2C_UNK func_00256DB0(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
extern "C" M2C_UNK func_0025B158(s32);                         /* extern */

extern "C" void func_001CC720(void *arg0) {
    if (M2C_FIELD(arg0, s32 *, 0x2C) != 0) {
        func_00252790(6);
        func_00252790(4);
        func_0025B158(M2C_FIELD(arg0, s32 *, 0x44));
        func_00256DB0(0, 0, 0x280, 0x200);
    }
}
