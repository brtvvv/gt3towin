#include "m2c.h"
extern "C" s32 func_00230A68(s8, s32);                         /* extern */
extern "C" M2C_UNK func_00230C30(void *, s32);                 /* extern */

extern "C" void func_00230BF8(void *arg0) {
    func_00230C30(arg0, func_00230A68(M2C_FIELD(arg0, s8 *, 8), arg0 + 0x14));
}
