#include "m2c.h"
extern "C" M2C_UNK func_001763C8();                            /* extern */
extern f32 D_0035161C;

extern "C" void func_00176CE8(void *arg0) {
    func_001763C8();
    M2C_FIELD(arg0, f32 *, 0x10) = (f32) D_0035161C;
    M2C_FIELD(arg0, f32 *, 0x14) = 15.0f;
}
