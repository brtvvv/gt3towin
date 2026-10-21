#define DEF_func_00176C08
#include "m2c.h"
#include "funcs.h"
extern "C" void func_00176C08(void *arg0, void *arg1) {
    s32 temp_s0;

    temp_s0 = M2C_FIELD(*(s32 *)((M2C_FIELD(arg0, s32 *, 4) * 4) + M2C_FIELD(M2C_FIELD(arg1, void **, 0x18), s32 *, 8)), s32 *, 0x220);
    func_00214AE8(({ s32 _g = func_00219680() + 0x246F8; _g; }), M2C_FIELD(arg0, s32 *, 0x20), temp_s0);
}
