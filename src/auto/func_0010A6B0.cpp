#include "m2c.h"
extern "C" M2C_UNK func_00105238(s32);                         /* extern */
extern "C" M2C_UNK func_0010AC90(void *);                      /* extern */
extern "C" M2C_UNK func_001B9A28(s32, s32);                    /* extern */

extern "C" void func_0010A6B0(void *arg0) {
    func_001B9A28(M2C_FIELD(arg0, s32 *, 0x3ADC), M2C_FIELD(arg0, s32 *, 0x3914));
    func_00105238(M2C_FIELD(arg0, s32 *, 0x3AF4));
    func_0010AC90(arg0);
}
