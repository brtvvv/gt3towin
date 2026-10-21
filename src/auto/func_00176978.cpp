#define DEF_func_00176978
#include "m2c.h"
#include "funcs.h"
extern "C" void func_00176978(void *arg0, void *arg1) {
    f32 temp_f20;
    s32 temp_s0;
    void *temp_v0;

    temp_v0 = *(s32 *)((M2C_FIELD(arg0, s32 *, 4) * 4) + M2C_FIELD(M2C_FIELD(arg1, void **, 0x18), s32 *, 8));
    if (M2C_FIELD(arg0, s32 *, 0x20) != 0) {
        temp_f20 = M2C_FIELD(M2C_FIELD(temp_v0, void **, 0x18), f32 *, 0x16AC);
        func_002133F8(({ s32 _g = func_00219680() + 0x2E560; _g; }), M2C_FIELD(arg0, s32 *, 0x24), temp_f20);
        return;
    }
    temp_s0 = M2C_FIELD(temp_v0, s32 *, 0x220);
    func_00213368(({ s32 _g = func_00219680() + 0x2E560; _g; }), M2C_FIELD(arg0, s32 *, 0x24), temp_s0);
}
