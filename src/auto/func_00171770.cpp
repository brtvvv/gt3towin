#define DEF_func_00171770
#include "m2c.h"
#include "funcs.h"
struct VC_1C_23_1 { char pad[0x1C]; virtual void d0(); virtual void d1(); virtual void d2(); virtual void d3(); virtual void d4(); virtual void d5(); virtual void d6(); virtual void d7(); virtual void d8(); virtual void d9(); virtual void d10(); virtual void d11(); virtual void d12(); virtual void d13(); virtual void d14(); virtual void d15(); virtual void d16(); virtual void d17(); virtual void d18(); virtual void d19(); virtual void d20(); virtual void d21(); virtual void d22(); virtual void v23(s32); };
extern "C" void func_00171770(void *arg0) {
    s32 temp_a0;
    ((VC_1C_23_1 *)(M2C_FIELD(arg0, void **, 0x1F0)))->v23((s32)(0));
    ((VC_1C_23_1 *)(M2C_FIELD(arg0, void **, 0x1F4)))->v23((s32)(0));
    temp_a0 = M2C_FIELD(M2C_FIELD(arg0, void **, 0x1E8), s32 *, 0xE44);
    switch (temp_a0) {                              /* irregular */
    case 1:
        ((VC_1C_23_1 *)(M2C_FIELD(arg0, void **, 0x1F0)))->v23((s32)(1));
        return;
    case 2:
        ((VC_1C_23_1 *)(M2C_FIELD(arg0, void **, 0x1F4)))->v23((s32)(1));
        break;
    }
}
