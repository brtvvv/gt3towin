#include "m2c.h"
extern "C" M2C_UNK func_001FC330();                            /* extern */
extern "C" M2C_UNK func_001FC368(void *);                      /* extern */

extern "C" void func_001FC088(void *arg0, f32 fparg0) {
    M2C_FIELD(arg0, f32 *, 0x4DC) = fparg0;
    M2C_FIELD(arg0, f32 *, 0x3A0) = 1.0f;
    M2C_FIELD(arg0, f32 *, 0x390) = (f32) M2C_FIELD(arg0, f32 *, 0x454);
    M2C_FIELD(arg0, f32 *, 0x394) = (f32) M2C_FIELD(arg0, f32 *, 0x458);
    M2C_FIELD(arg0, f32 *, 0x398) = (f32) M2C_FIELD(arg0, f32 *, 0x45C);
    M2C_FIELD(arg0, f32 *, 0x39C) = (f32) M2C_FIELD(arg0, f32 *, 0x46C);
    M2C_FIELD(arg0, f32 *, 0x3C4) = (f32) M2C_FIELD(arg0, f32 *, 0x460);
    M2C_FIELD(arg0, f32 *, 0x3C8) = (f32) M2C_FIELD(arg0, f32 *, 0x464);
    M2C_FIELD(arg0, f32 *, 0x3CC) = (f32) M2C_FIELD(arg0, f32 *, 0x468);
    M2C_FIELD(arg0, f32 *, 0x3D0) = (f32) M2C_FIELD(arg0, f32 *, 0x470);
    M2C_FIELD(arg0, s32 *, 0x434) = 0;
    M2C_FIELD(arg0, s32 *, 0x438) = 0;
    M2C_FIELD(arg0, s32 *, 0x440) = 0;
    M2C_FIELD(arg0, s32 *, 0x43C) = 0;
    M2C_FIELD(arg0, s32 *, 0x444) = 0;
    M2C_FIELD(arg0, s32 *, 0x448) = 0;
    M2C_FIELD(arg0, s32 *, 0x38C) = 0;
    if (M2C_FIELD(arg0, s32 *, 0x3EC) != 0) {
        func_001FC330();
        return;
    }
    M2C_FIELD(arg0, s32 *, 0x3EC) = 1;
    func_001FC368(arg0);
}
