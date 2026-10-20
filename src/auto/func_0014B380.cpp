#include "m2c.h"
extern "C" M2C_UNK func_0015B288(M2C_UNK);                     /* extern */
extern "C" M2C_UNK func_0015B398();                            /* extern */

extern "C" void func_0014B380(void *arg0) {
    if (M2C_FIELD(arg0, s32 *, 0x30774) != 0) {
        func_0015B398();
        func_0015B288(1);
        func_0015B288(0);
        M2C_FIELD(arg0, s32 *, 0x30774) = 0;
    }
}
