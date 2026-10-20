#include "m2c.h"
extern "C" M2C_UNK func_00220638(s32, s32, s32);               /* extern */

extern "C" void func_00220AF8(void *arg0) {
    func_00220638(M2C_FIELD(arg0, s32 *, 0x88), M2C_FIELD(arg0, s32 *, 0x8C), M2C_FIELD(arg0, s32 *, 0));
}
