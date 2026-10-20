#include "m2c.h"
extern "C" f32 func_001A9488(void *, f32, f32);                /* extern */
extern "C" M2C_UNK func_00220110(f32, f32, f32, f32);          /* extern */
extern f32 D_0035445C;

extern "C" void func_001AD2D0(void *arg0) {
    void *temp_v0;

    temp_v0 = M2C_FIELD(arg0, void **, 0x23C);
    func_00220110(M2C_FIELD(temp_v0, f32 *, 0xA60), M2C_FIELD(temp_v0, f32 *, 0xA64), M2C_FIELD(temp_v0, f32 *, 0xA68), M2C_FIELD(temp_v0, f32 *, 0xA6C));
    D_0035445C = func_001A9488(M2C_FIELD(arg0, void **, 0x23C), M2C_FIELD(arg0, f32 *, 0x240), M2C_FIELD(arg0, f32 *, 0x244));
}
