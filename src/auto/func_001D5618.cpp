#define DEF_func_001D5618
#include "m2c.h"
#include "funcs.h"
struct VC_1C_14_1 { char pad[0x1C]; virtual void d0(); virtual void d1(); virtual void d2(); virtual void d3(); virtual void d4(); virtual void d5(); virtual void d6(); virtual void d7(); virtual void d8(); virtual void d9(); virtual void d10(); virtual void d11(); virtual void d12(); virtual void d13(); virtual void v14(s32); };
struct VC_1C_29_1 { char pad[0x1C]; virtual void d0(); virtual void d1(); virtual void d2(); virtual void d3(); virtual void d4(); virtual void d5(); virtual void d6(); virtual void d7(); virtual void d8(); virtual void d9(); virtual void d10(); virtual void d11(); virtual void d12(); virtual void d13(); virtual void d14(); virtual void d15(); virtual void d16(); virtual void d17(); virtual void d18(); virtual void d19(); virtual void d20(); virtual void d21(); virtual void d22(); virtual void d23(); virtual void d24(); virtual void d25(); virtual void d26(); virtual void d27(); virtual void d28(); virtual void v29(s32); };
struct VC_1C_30_2 { char pad[0x1C]; virtual void d0(); virtual void d1(); virtual void d2(); virtual void d3(); virtual void d4(); virtual void d5(); virtual void d6(); virtual void d7(); virtual void d8(); virtual void d9(); virtual void d10(); virtual void d11(); virtual void d12(); virtual void d13(); virtual void d14(); virtual void d15(); virtual void d16(); virtual void d17(); virtual void d18(); virtual void d19(); virtual void d20(); virtual void d21(); virtual void d22(); virtual void d23(); virtual void d24(); virtual void d25(); virtual void d26(); virtual void d27(); virtual void d28(); virtual void d29(); virtual void v30(s32, s32); };
extern "C" s32 func_001D5618(void *arg0, void *arg1) {
    s32 temp_a2;
    s32 temp_s0;
    s32 temp_s5;
    void *temp_s2;
    void *temp_v0;
    void *temp_v0_2;

    temp_s2 = M2C_FIELD(arg0, void **, 0x210);
    if ((temp_s2 != NULL) && (arg1 != NULL)) {
        if (M2C_FIELD(arg0, s32 *, 0x240) != 0) {
            temp_v0 = M2C_FIELD(temp_s2, void **, 0x1C);
            temp_s5 = func_0027E260(M2C_FIELD(temp_v0, s32 *, 4), (s32) func_001D69F8, 1, (s32) (temp_s2 + M2C_FIELD(temp_v0, s16 *, 0)), (s32) func_001D9038, (s32) temp_s2);
            temp_v0_2 = M2C_FIELD(arg1, void **, 0x1C);
            temp_a2 = func_0027E260(M2C_FIELD(temp_v0_2, s32 *, 4), (s32) func_001D69F8, 1, (s32) (arg1 + M2C_FIELD(temp_v0_2, s16 *, 0)), (s32) func_001D9038, (s32) arg1);
            if ((temp_s5 != 0) && (temp_a2 != 0)) {
                ((VC_1C_30_2 *)(arg0))->v30((s32)(temp_s5), (s32)(temp_a2));
            }
        }
        temp_s0 = M2C_FIELD(temp_s2, s32 *, 0x174);
        ((VC_1C_14_1 *)(temp_s2))->v14((s32)(0));
        ((VC_1C_14_1 *)(arg1))->v14((s32)(temp_s0));
    }
    ((VC_1C_29_1 *)(arg0))->v29((s32)(arg1));
    return 1;
}
