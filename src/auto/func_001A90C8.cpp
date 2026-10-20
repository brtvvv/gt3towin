#include "m2c.h"
extern "C" M2C_UNK func_00254EF0(f32, f32, f32);               /* extern */
extern "C" M2C_UNK func_00255010(f32, f32);                    /* extern */

extern "C" void func_001A90C8(void *arg0, f32 fparg0) {
    func_00255010(M2C_FIELD(arg0, f32 *, 0x10) * fparg0, M2C_FIELD(arg0, f32 *, 0x14));
    func_00254EF0(M2C_FIELD(arg0, f32 *, 0), M2C_FIELD(arg0, f32 *, 4), M2C_FIELD(arg0, f32 *, 8));
}
