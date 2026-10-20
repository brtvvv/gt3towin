#include "m2c.h"
extern "C" M2C_UNK func_00247398(s32, f32, f32, f32, f32, f32, f32); /* extern */

extern "C" void func_001A9578(void *arg0, s32 arg1) {
    func_00247398(arg1, M2C_FIELD(arg0, f32 *, 0xB4), M2C_FIELD(arg0, f32 *, 0xB8), M2C_FIELD(arg0, f32 *, 0xBC), M2C_FIELD(arg0, f32 *, 0xC0), M2C_FIELD(arg0, f32 *, 0xC4), M2C_FIELD(arg0, f32 *, 0xC8));
}
