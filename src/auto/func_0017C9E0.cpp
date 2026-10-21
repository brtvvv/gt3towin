#define DEF_func_0017C9E0
#include "m2c.h"
#include "funcs.h"
struct VC_E3A8_22_1 { char pad[0xE3A8]; virtual void d0(); virtual void d1(); virtual void d2(); virtual void d3(); virtual void d4(); virtual void d5(); virtual void d6(); virtual void d7(); virtual void d8(); virtual void d9(); virtual void d10(); virtual void d11(); virtual void d12(); virtual void d13(); virtual void d14(); virtual void d15(); virtual void d16(); virtual void d17(); virtual void d18(); virtual void d19(); virtual void d20(); virtual void d21(); virtual s32 v22(s32); };
extern "C" void func_0017C9E0(void *arg0) {
    s32 temp_s1;

    temp_s1 = M2C_FIELD(arg0, s32 *, 4);
    func_0017B3B8(temp_s1, (s32) arg0);
    ((VC_E3A8_22_1 *)(M2C_FIELD(arg0, void **, 8)))->v22((s32)(M2C_FIELD(arg0, s32 *, 0x9784)));
    func_0017B1C8(temp_s1);
}
