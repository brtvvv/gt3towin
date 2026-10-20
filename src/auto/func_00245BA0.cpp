#include "m2c.h"
extern "C" M2C_UNK func_00253720(s32, s32);                    /* extern */

extern "C" void func_00245BA0(void *arg0) {
    func_00253720(M2C_FIELD(arg0, s32 *, 0), M2C_FIELD(arg0, s32 *, 4));
}
