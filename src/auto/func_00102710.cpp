#include "m2c.h"
extern "C" M2C_UNK func_00102168();                            /* extern */

extern "C" void func_00102710(void *arg0) {
    func_00102168();
    M2C_FIELD(arg0, s32 *, 0x10) = 0;
}
