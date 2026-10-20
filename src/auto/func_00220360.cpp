#include "m2c.h"
extern "C" M2C_UNK func_00220130();                            /* extern */
extern "C" M2C_UNK func_00220188(void *);                      /* extern */
extern "C" M2C_UNK func_00226110(s32, M2C_UNK);                /* extern */

extern "C" void func_00220360(void *arg0) {
    if (M2C_FIELD(arg0, s32 *, 0x24) != 0) {
        func_00220130();
        func_00226110(M2C_FIELD(arg0, s32 *, 0x24), 5);
        func_00220188(arg0);
    }
}
