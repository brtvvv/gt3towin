#include "m2c.h"
extern "C" M2C_UNK func_001B5038();                            /* extern */
extern "C" M2C_UNK func_001B5100(void *);                      /* extern */
extern "C" M2C_UNK func_001B5190(void *);                      /* extern */
extern "C" M2C_UNK func_001B5380(void *);                      /* extern */
extern "C" s32 func_001B53C8(void *);                          /* extern */

extern "C" void func_001B53F0(void *arg0) {
    if (M2C_FIELD(arg0, s32 *, 0xAC) != 0) {
        func_001B5038();
        if (func_001B53C8(arg0) == 0) {
            func_001B5100(arg0);
            func_001B5190(arg0);
        }
        func_001B5380(arg0);
    }
}
