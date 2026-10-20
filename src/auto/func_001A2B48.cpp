#include "m2c.h"
extern "C" M2C_UNK func_001A0CA0(s32, f32, f32, f32);          /* extern */

extern "C" void func_001A2B48(void *arg0, s32 arg1) {
    func_001A0CA0(arg1, M2C_FIELD(arg0, f32 *, 4), M2C_FIELD(arg0, f32 *, 8), M2C_FIELD(arg0, f32 *, 0xC));
}
