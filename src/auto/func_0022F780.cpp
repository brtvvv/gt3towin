#include "m2c.h"
extern "C" M2C_UNK func_002302A8(s32, s32);                    /* extern */
extern "C" M2C_UNK func_00230BB8(s32, M2C_UNK);                /* extern */

extern "C" void func_0022F780(s32 arg0, s32 arg1) {
    func_002302A8(arg0 + 0xBC, 2);
    func_002302A8(arg0 + 0x48, 2);
    func_00230BB8(arg0 + 0xC, 2);
    func_002302A8(arg0, arg1);
}
