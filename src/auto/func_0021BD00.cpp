#include "m2c.h"
extern "C" M2C_UNK func_0021BD20();                            /* extern */

extern "C" void func_0021BD00(void *arg0, s8 arg1) {
    M2C_FIELD(arg0, s8 *, 6) = arg1;
    func_0021BD20();
}
