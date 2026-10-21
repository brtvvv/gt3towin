#define DEF_func_001D7588
#include "m2c.h"
#include "funcs.h"
struct VC_1C_14_1 { char pad[0x1C]; virtual void d0(); virtual void d1(); virtual void d2(); virtual void d3(); virtual void d4(); virtual void d5(); virtual void d6(); virtual void d7(); virtual void d8(); virtual void d9(); virtual void d10(); virtual void d11(); virtual void d12(); virtual void d13(); virtual void v14(s32); };
struct VC_1C_20_1 { char pad[0x1C]; virtual void d0(); virtual void d1(); virtual void d2(); virtual void d3(); virtual void d4(); virtual void d5(); virtual void d6(); virtual void d7(); virtual void d8(); virtual void d9(); virtual void d10(); virtual void d11(); virtual void d12(); virtual void d13(); virtual void d14(); virtual void d15(); virtual void d16(); virtual void d17(); virtual void d18(); virtual void d19(); virtual void v20(s32); };
extern "C" void func_001D7588(void *arg0, s32 arg1) {
    s32 var_s0;
    s32 var_v0;
    s32 var_v0_2;
    void *temp_v0;
    void *temp_v0_3;
    void *temp_v1;
    void *temp_v1_2;

    M2C_FIELD(arg0, s32 *, 0x174) = arg1;
    if (M2C_FIELD(arg0, s32 *, 0x170) != 0) {
        temp_v1 = M2C_FIELD(arg0, void **, 8);
        if (temp_v1 != NULL) {
            temp_v0 = M2C_FIELD(temp_v1, void **, 0x1C);
            var_v0 = func_0027E260(M2C_FIELD(temp_v0, s32 *, 4), (s32) func_001D9038, 1, (s32) (temp_v1 + M2C_FIELD(temp_v0, s16 *, 0)), (s32) func_001C1060, (s32) temp_v1);
        } else {
            var_v0 = 0;
        }
        var_s0 = var_v0;
        if (var_s0 != 0) {
            do {
                ((VC_1C_14_1 *)(var_s0))->v14((s32)(M2C_FIELD(arg0, s32 *, 0x174)));
                temp_v1_2 = M2C_FIELD(var_s0, void **, 4);
                if (temp_v1_2 != NULL) {
                    temp_v0_3 = M2C_FIELD(temp_v1_2, void **, 0x1C);
                    var_v0_2 = func_0027E260(M2C_FIELD(temp_v0_3, s32 *, 4), (s32) func_001D9038, 1, (s32) (temp_v1_2 + M2C_FIELD(temp_v0_3, s16 *, 0)), (s32) func_001C1060, (s32) temp_v1_2);
                } else {
                    var_v0_2 = 0;
                }
                var_s0 = var_v0_2;
            } while (var_s0 != 0);
        }
    }
    ((VC_1C_20_1 *)(arg0))->v20((s32)(M2C_FIELD(arg0, s32 *, 0x174) != 0));
}
