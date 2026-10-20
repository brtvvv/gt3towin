#include "m2c.h"
extern "C" M2C_UNK func_001B2F30(void *);                      /* extern */

extern "C" void func_00175AA0(void *arg0) {
    if (M2C_FIELD(arg0, s32 *, 0x920) != 0) {
        func_001B2F30(arg0 + 0xC);
    }
}
