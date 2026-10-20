#include "m2c.h"
extern "C" M2C_UNK func_001C08E0(void *);                      /* extern */

extern "C" void func_001CC778(void *arg0) {
    if (M2C_FIELD(arg0, s32 *, 0x28) == 0) {
        func_001C08E0(arg0 + 4);
    }
}
