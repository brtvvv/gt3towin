#include "m2c.h"
extern "C" M2C_UNK func_001D34C0(f32, f32, f32, f32);          /* extern */

extern "C" void func_001B53C8(void *arg0) {
    func_001D34C0(M2C_FIELD(arg0, f32 *, 0x28), M2C_FIELD(arg0, f32 *, 0x34), M2C_FIELD(arg0, f32 *, 0x38), M2C_FIELD(arg0, f32 *, 0x3C));
}
