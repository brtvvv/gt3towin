#define DEF_func_001B61C8
#include "m2c.h"
#include "funcs.h"
extern M2C_UNK D_002F2F98 __attribute__((section(".data")));

extern "C" void func_001B61C8(void *arg0) {
    f32 temp_f0;
    f32 temp_f20;
    f32 temp_f21;

    func_00255F40(1);
    func_00256088();
    temp_f0 = M2C_FIELD(arg0, f32 *, 0x20);
    temp_f20 = (320.0f / temp_f0) - M2C_FIELD(arg0, f32 *, 0x24);
    temp_f21 = (224.0f / temp_f0) - M2C_FIELD(arg0, f32 *, 0x28);
    func_00259024(temp_f0, temp_f0, 1.0f);
    func_00258FD4(temp_f20, temp_f21, 0.0f);
    func_0023E170((s32) &D_002F2F98, M2C_FIELD(arg0, f32 *, 0x20));
    func_0023E190((s32) &D_002F2F98, temp_f20, temp_f21);
    func_00255F40(0);
}
