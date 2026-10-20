#include "m2c.h"
extern "C" M2C_UNK func_001F53C8(void *, void *);              /* extern */

extern "C" void func_001F60F0(void *arg0, void *arg1) {
    if ((M2C_FIELD(arg0, s32 *, 4) == 0) && (M2C_FIELD(arg1, s32 *, 4) == 0)) {
        func_001F53C8(arg0 + 8, arg1 + 8);
    }
}
