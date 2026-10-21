#define DEF_func_001C1A50
#include "m2c.h"
#include "funcs.h"

extern "C" void func_001C1A50(s32 arg0) {
    f32 temp_f20;

    func_001BAEA0(arg0);
    temp_f20 = 0.3f;
    func_001D29C8(arg0 + 0x20, M2C_FIELD(arg0, f32 *, 0x100), temp_f20);
    func_001D29C8(arg0 + 0x2C, M2C_FIELD(arg0, f32 *, 0x104), temp_f20);
    func_001C19D0(arg0);
}
