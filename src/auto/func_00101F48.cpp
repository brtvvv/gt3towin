#define DEF_func_00101F48
#include "m2c.h"
#include "funcs.h"
struct VC_0_2_1 { virtual void d0(); virtual void d1(); virtual void v2(s32); };
extern "C" void func_00101F48(void *arg0, s32 arg1) {
    void *var_s0;

    var_s0 = M2C_FIELD(arg0, void **, 0x1C);
    if (var_s0 != NULL) {
        do {
            ((VC_0_2_1 *)(var_s0))->v2((s32)(arg1));
            var_s0 = M2C_FIELD(var_s0, void **, 0x14);
        } while (var_s0 != NULL);
    }
}
