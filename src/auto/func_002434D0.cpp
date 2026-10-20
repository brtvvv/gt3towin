#include "m2c.h"
extern "C" M2C_UNK func_0026D5B8(s32);                         /* extern */
extern "C" M2C_UNK func_0027D2F8(void *);                      /* extern */

extern "C" void func_002434D0(void *arg0, s32 arg1) {
    s32 temp_a0;

    temp_a0 = M2C_FIELD(arg0, s32 *, 4);
    if (temp_a0 != 0) {
        func_0026D5B8(temp_a0);
    }
    if (arg1 & 1) {
        func_0027D2F8(arg0);
    }
}
