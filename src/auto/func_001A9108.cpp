#define DEF_func_001A9108
#include "m2c.h"
#include "funcs.h"
extern "C" void func_001A9108(void *arg0) {
    f32 temp_f0;

    func_00256D70(0.0f, 0.0f, 0.0f, 0.0f);
    temp_f0 = M2C_FIELD(arg0, f32 *, 0x24);
    func_00256D50(M2C_FIELD(arg0, f32 *, 0x38) * temp_f0, M2C_FIELD(arg0, f32 *, 0x3C) * temp_f0, M2C_FIELD(arg0, f32 *, 0x40) * temp_f0, M2C_FIELD(arg0, f32 *, 0x44) * temp_f0);
}
