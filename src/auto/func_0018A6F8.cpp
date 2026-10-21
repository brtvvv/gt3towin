#define DEF_func_0018A6F8
#include "m2c.h"
#include "funcs.h"
struct VC_0_34_1 { virtual void d0(); virtual void d1(); virtual void d2(); virtual void d3(); virtual void d4(); virtual void d5(); virtual void d6(); virtual void d7(); virtual void d8(); virtual void d9(); virtual void d10(); virtual void d11(); virtual void d12(); virtual void d13(); virtual void d14(); virtual void d15(); virtual void d16(); virtual void d17(); virtual void d18(); virtual void d19(); virtual void d20(); virtual void d21(); virtual void d22(); virtual void d23(); virtual void d24(); virtual void d25(); virtual void d26(); virtual void d27(); virtual void d28(); virtual void d29(); virtual void d30(); virtual void d31(); virtual void d32(); virtual void d33(); virtual void v34(s32); };
extern s8 D_00353950;

extern "C" void func_0018A6F8(void *arg0) {
    s32 temp_s1;
    void *temp_s3;

    temp_s3 = M2C_FIELD(arg0, void **, 4);
    temp_s1 = M2C_FIELD(*M2C_FIELD(M2C_FIELD(temp_s3, void **, 0x18), void ***, 8), s32 *, 0x18);
    if ((M2C_FIELD(arg0, s32 *, 0x3AC74) != 0) || (M2C_FIELD(arg0, s32 *, 0x9784) != 0) || (func_001EBA48(temp_s1) < 2)) {
        ((VC_0_34_1 *)(arg0))->v34((s32)(2));
        return;
    }
    M2C_FIELD(arg0, s32 *, 0x3AC74) = 1;
    func_0017A100((s32) (temp_s3 + 0x84), 5, 0, 0);
    func_001EBBF8(temp_s1, 4);
    func_001F5B28(func_00188268((s32) arg0) + 0xCC);
    func_00211620(func_00188268((s32) arg0));
    D_00353950 = 3;
}
