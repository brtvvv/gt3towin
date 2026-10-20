#include "m2c.h"
extern "C" M2C_UNK func_0018F558();                            /* extern */
extern "C" M2C_UNK func_0018F658();                            /* extern */

extern "C" void func_0018EE58(void *arg0) {
    if (M2C_FIELD(arg0, s32 *, 0x288) == 0) {
        func_0018F558();
        return;
    }
    func_0018F658();
}
