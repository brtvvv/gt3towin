#include "m2c.h"
extern "C" M2C_UNK func_001000B8(M2C_UNK);                     /* extern */
extern "C" M2C_UNK func_0026F5F8(M2C_UNK);                     /* extern */

extern "C" void func_0027E9D8(void) {
loop_1:
    func_0026F5F8(6);
    func_001000B8(1);
    goto loop_1;
}
