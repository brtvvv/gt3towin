#define DEF_func_001D4F78
#include "m2c.h"
#include "funcs.h"
struct VC_1C_21_1 { char pad[0x1C]; virtual void d0(); virtual void d1(); virtual void d2(); virtual void d3(); virtual void d4(); virtual void d5(); virtual void d6(); virtual void d7(); virtual void d8(); virtual void d9(); virtual void d10(); virtual void d11(); virtual void d12(); virtual void d13(); virtual void d14(); virtual void d15(); virtual void d16(); virtual void d17(); virtual void d18(); virtual void d19(); virtual void d20(); virtual void v21(s32); };
extern "C" void func_001D4F78(void *arg0, s32 arg1) {

    if (arg1 != M2C_FIELD(arg0, s32 *, 0x200)) {
        M2C_FIELD(arg0, s32 *, 0x200) = arg1;
        ((VC_1C_21_1 *)(arg0))->v21((s32)(M2C_FIELD(arg0, s32 *, 0x164)));
    }
}
