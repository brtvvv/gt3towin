#define DEF_func_00135110
#include "m2c.h"
#include "funcs.h"
struct VC_0_1_0 { virtual void d0(); virtual void v1(); };
struct VC_0_35_0 { virtual void d0(); virtual void d1(); virtual void d2(); virtual void d3(); virtual void d4(); virtual void d5(); virtual void d6(); virtual void d7(); virtual void d8(); virtual void d9(); virtual void d10(); virtual void d11(); virtual void d12(); virtual void d13(); virtual void d14(); virtual void d15(); virtual void d16(); virtual void d17(); virtual void d18(); virtual void d19(); virtual void d20(); virtual void d21(); virtual void d22(); virtual void d23(); virtual void d24(); virtual void d25(); virtual void d26(); virtual void d27(); virtual void d28(); virtual void d29(); virtual void d30(); virtual void d31(); virtual void d32(); virtual void d33(); virtual void d34(); virtual void v35(); };
struct VC_0_8_1 { virtual void d0(); virtual void d1(); virtual void d2(); virtual void d3(); virtual void d4(); virtual void d5(); virtual void d6(); virtual void d7(); virtual void v8(s32); };
extern "C" void func_00135110(void *arg0) {
    void *temp_s0;

    temp_s0 = M2C_FIELD(arg0, void **, 0x2E8);
    if (temp_s0 != NULL) {
        M2C_FIELD(temp_s0, s32 *, 0x978C) = 0;
        ((VC_0_1_0 *)(temp_s0))->v1();
        if (func_0017D680((s32) temp_s0) == 1) {
            ((VC_0_35_0 *)(temp_s0))->v35();
            ((VC_0_8_1 *)(temp_s0))->v8((s32)(M2C_FIELD(arg0, s32 *, 0xE54)));
        }
        M2C_FIELD(temp_s0, s32 *, 0x978C) = 1;
    }
}
