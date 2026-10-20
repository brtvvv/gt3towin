#include "m2c.h"
extern "C" M2C_UNK func_0019D440(void *);                      /* extern */

extern "C" void func_0019EBC8(void *arg0) {
    if (M2C_FIELD(arg0, u8 *, 0x12) != 0) {
        func_0019D440(arg0 + 0x20);
    }
}
