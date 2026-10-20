#include "m2c.h"
extern "C" f32 func_001FC570(f32);                             /* extern */
extern "C" f32 func_001FC5E0(f32);                             /* extern */

extern "C" void func_001FC620(void *arg0) {
    M2C_FIELD(arg0, f32 *, 0x454) = (f32) M2C_FIELD(arg0, f32 *, 0x3A4);
    M2C_FIELD(arg0, f32 *, 0x458) = (f32) M2C_FIELD(arg0, f32 *, 0x3A8);
    M2C_FIELD(arg0, f32 *, 0x45C) = (f32) M2C_FIELD(arg0, f32 *, 0x3AC);
    M2C_FIELD(arg0, f32 *, 0x460) = (f32) M2C_FIELD(arg0, f32 *, 0x3C4);
    M2C_FIELD(arg0, f32 *, 0x464) = (f32) M2C_FIELD(arg0, f32 *, 0x3C8);
    M2C_FIELD(arg0, f32 *, 0x468) = (f32) M2C_FIELD(arg0, f32 *, 0x3CC);
    M2C_FIELD(arg0, f32 *, 0x46C) = func_001FC570(M2C_FIELD(arg0, f32 *, 0x3B0));
    M2C_FIELD(arg0, f32 *, 0x470) = func_001FC5E0(M2C_FIELD(arg0, f32 *, 0x3D0));
}
