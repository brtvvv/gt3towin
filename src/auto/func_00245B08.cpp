#include "m2c.h"
extern "C" M2C_UNK func_002535A0(s32, s32, s32, s32);          /* extern */

extern "C" void func_00245B08(void *arg0) {
    func_002535A0(M2C_FIELD(arg0, s32 *, 0), M2C_FIELD(arg0, s32 *, 4), M2C_FIELD(arg0, s32 *, 8), M2C_FIELD(arg0, s32 *, 0xC));
}
