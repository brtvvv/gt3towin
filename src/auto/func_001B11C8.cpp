#include "m2c.h"
extern "C" M2C_UNK func_001C33B0(void *);                      /* extern */

extern "C" void func_001B11C8(void *arg0) {
    if (M2C_FIELD(arg0, s32 *, 0x1B8) != 0) {
        func_001C33B0(arg0 + 0x134);
        M2C_FIELD(arg0, s32 *, 0x1B8) = 0;
    }
}
