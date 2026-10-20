#include "m2c.h"
extern "C" M2C_UNK func_001C0A18(void *);                      /* extern */
extern "C" M2C_UNK func_001C0B90(void *);                      /* extern */

extern "C" void func_001B16D0(void *arg0, s32 arg1) {
    if ((M2C_FIELD(arg0, s32 *, 0) != 0) && (M2C_FIELD(arg0, s32 *, 0x28) != 0)) {
        if (arg1 != 0) {
            func_001C0B90(arg0 + 4);
        } else {
            func_001C0A18(arg0 + 4);
        }
    }
}
