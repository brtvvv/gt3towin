#define DEF_func_001D6EA0
#include "m2c.h"
#include "funcs.h"
struct VC_1C_9_0 { char pad[0x1C]; virtual void d0(); virtual void d1(); virtual void d2(); virtual void d3(); virtual void d4(); virtual void d5(); virtual void d6(); virtual void d7(); virtual void d8(); virtual void v9(); };
extern "C" void func_001D6EA0(s32 arg0) {
    s32 var_v0;
    void *temp_v0;
    void *temp_v1;

    func_001BAEA0(arg0);
    func_001D3860(M2C_FIELD(arg0, s32 *, 0x180));
    temp_v1 = M2C_FIELD(arg0, void **, 0x10);
    if (temp_v1 != NULL) {
        temp_v0 = M2C_FIELD(temp_v1, void **, 0x1C);
        var_v0 = func_0027E260(M2C_FIELD(temp_v0, s32 *, 4), (s32) func_001D9038, 1, (s32) (temp_v1 + M2C_FIELD(temp_v0, s16 *, 0)), (s32) func_001C1060, (s32) temp_v1);
    } else {
        var_v0 = 0;
    }
    if (var_v0 == 0) {
        func_001D6F38(arg0);
        func_001D7028(arg0);
    }
    ((VC_1C_9_0 *)(arg0))->v9();
}
