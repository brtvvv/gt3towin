#include "m2c.h"
extern "C" M2C_UNK func_001A3528(void *);                      /* extern */
extern "C" M2C_UNK func_001A3780(s32);                         /* extern */

extern "C" void func_001A3AA0(void *arg0) {
    func_001A3780(arg0 + 0xC);
    func_001A3528(arg0);
    M2C_FIELD(arg0, s32 *, 0x2A8) = 0;
}
