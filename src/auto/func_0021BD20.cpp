#include "m2c.h"
extern "C" M2C_UNK func_0021BD58();                            /* extern */
extern "C" M2C_UNK func_0021BDB0();                            /* extern */

extern "C" void func_0021BD20(void *arg0) {
    if (M2C_FIELD(arg0, s8 *, 6) == 0) {
        func_0021BD58();
        return;
    }
    func_0021BDB0();
}
