#include "m2c.h"
extern "C" M2C_UNK func_002566C8(f32, f32, f32, f32, f32, f32, f32); /* extern */

extern "C" void func_00210F70(void *arg0) {
    func_002566C8(M2C_FIELD(arg0, f32 *, 0x24), M2C_FIELD(arg0, f32 *, 0x28), M2C_FIELD(arg0, f32 *, 0x2C), M2C_FIELD(arg0, f32 *, 0x30), M2C_FIELD(arg0, f32 *, 0x34), M2C_FIELD(arg0, f32 *, 0x38), M2C_FIELD(arg0, f32 *, 0x3C));
}
