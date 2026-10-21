#define DEF_func_0017D3B8
#include "m2c.h"
#include "funcs.h"
struct VC_0_37_0 { virtual void d0(); virtual void d1(); virtual void d2(); virtual void d3(); virtual void d4(); virtual void d5(); virtual void d6(); virtual void d7(); virtual void d8(); virtual void d9(); virtual void d10(); virtual void d11(); virtual void d12(); virtual void d13(); virtual void d14(); virtual void d15(); virtual void d16(); virtual void d17(); virtual void d18(); virtual void d19(); virtual void d20(); virtual void d21(); virtual void d22(); virtual void d23(); virtual void d24(); virtual void d25(); virtual void d26(); virtual void d27(); virtual void d28(); virtual void d29(); virtual void d30(); virtual void d31(); virtual void d32(); virtual void d33(); virtual void d34(); virtual void d35(); virtual void d36(); virtual void v37(); };
struct VC_4_7_0 { char pad[0x4]; virtual void d0(); virtual void d1(); virtual void d2(); virtual void d3(); virtual void d4(); virtual void d5(); virtual void d6(); virtual void v7(); };
struct VC_E3A8_26_0 { char pad[0xE3A8]; virtual void d0(); virtual void d1(); virtual void d2(); virtual void d3(); virtual void d4(); virtual void d5(); virtual void d6(); virtual void d7(); virtual void d8(); virtual void d9(); virtual void d10(); virtual void d11(); virtual void d12(); virtual void d13(); virtual void d14(); virtual void d15(); virtual void d16(); virtual void d17(); virtual void d18(); virtual void d19(); virtual void d20(); virtual void d21(); virtual void d22(); virtual void d23(); virtual void d24(); virtual void d25(); virtual void v26(); };
extern "C" void func_0017D3B8(void *arg0) {
    ((VC_0_37_0 *)(arg0))->v37();
    ((VC_4_7_0 *)(M2C_FIELD(arg0, void **, 0xC)))->v7();
    ((VC_E3A8_26_0 *)(M2C_FIELD(arg0, void **, 8)))->v26();
    func_0017B490(M2C_FIELD(arg0, s32 *, 4));
    func_0017D5C8((s32) arg0, 1);
}
