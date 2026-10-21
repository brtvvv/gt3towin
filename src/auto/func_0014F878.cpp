#define DEF_func_0014F878
#include "m2c.h"
#include "funcs.h"
struct VC_8_14_1 { char pad[0x8]; virtual void d0(); virtual void d1(); virtual void d2(); virtual void d3(); virtual void d4(); virtual void d5(); virtual void d6(); virtual void d7(); virtual void d8(); virtual void d9(); virtual void d10(); virtual void d11(); virtual void d12(); virtual void d13(); virtual void v14(s32); };
extern "C" void func_0014F878(s32 arg0, s32 arg1, void *arg2) {
    s32 temp_v0;

    temp_v0 = func_0014F838(arg0, arg1);
    if (temp_v0 != 0) {
        ((VC_8_14_1 *)(temp_v0))->v14((s32)(arg2));
        if ((arg1 == 0) && (M2C_FIELD(arg0, s32 *, 0x20) != 0)) {
            func_00150DF0(M2C_FIELD(arg2, s32 *, 0x20), 0);
        }
    }
}
