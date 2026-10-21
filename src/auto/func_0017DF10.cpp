#define DEF_func_0017DF10
#include "m2c.h"
#include "funcs.h"
struct VC_0_35_0 { virtual void d0(); virtual void d1(); virtual void d2(); virtual void d3(); virtual void d4(); virtual void d5(); virtual void d6(); virtual void d7(); virtual void d8(); virtual void d9(); virtual void d10(); virtual void d11(); virtual void d12(); virtual void d13(); virtual void d14(); virtual void d15(); virtual void d16(); virtual void d17(); virtual void d18(); virtual void d19(); virtual void d20(); virtual void d21(); virtual void d22(); virtual void d23(); virtual void d24(); virtual void d25(); virtual void d26(); virtual void d27(); virtual void d28(); virtual void d29(); virtual void d30(); virtual void d31(); virtual void d32(); virtual void d33(); virtual void d34(); virtual void v35(); };
struct VC_0_8_1 { virtual void d0(); virtual void d1(); virtual void d2(); virtual void d3(); virtual void d4(); virtual void d5(); virtual void d6(); virtual void d7(); virtual void v8(s32); };
extern "C" s32 func_0017DF10(s32 arg0) {
    s32 temp_s1;
    s32 temp_s2;
    s32 temp_s3;
    s32 var_v0;

    var_v0 = 0;
    if (func_0017D680(arg0) == 1) {
        temp_s3 = M2C_FIELD(arg0, s32 *, 0x978C);
        M2C_FIELD(arg0, s32 *, 0x978C) = 0;
        temp_s1 = M2C_FIELD(arg0, s32 *, 0x9784);
        temp_s2 = M2C_FIELD(arg0, s32 *, 0x9788);
        ((VC_0_35_0 *)(arg0))->v35();
        ((VC_0_8_1 *)(arg0))->v8((s32)(temp_s1));
        func_0017C600(arg0, temp_s2);
        M2C_FIELD(arg0, s32 *, 0x978C) = temp_s3;
        var_v0 = 1;
    }
    return var_v0;
}
