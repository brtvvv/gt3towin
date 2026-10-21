#define DEF_func_001D8080
#include "m2c.h"
#include "funcs.h"
struct VC_1C_0_1 { char pad[0x1C]; virtual void v0(s32); };
struct VC_1C_5_1 { char pad[0x1C]; virtual void d0(); virtual void d1(); virtual void d2(); virtual void d3(); virtual void d4(); virtual void v5(s32); };
extern "C" void func_001D8080(void *arg0, void *arg1) {
    void *temp_a2;
    void *temp_a2_2;

    temp_a2 = M2C_FIELD(arg0, void **, 0x180);
    if (temp_a2 != NULL) {
        ((VC_1C_5_1 *)(temp_a2))->v5((s32)(0));
        temp_a2_2 = M2C_FIELD(arg0, void **, 0x180);
        if (temp_a2_2 != NULL) {
            ((VC_1C_0_1 *)(temp_a2_2))->v0((s32)(3));
        }
    }
    if (arg1 != NULL) {
        ((VC_1C_5_1 *)(arg1))->v5((s32)(arg0));
    }
    M2C_FIELD(arg0, void **, 0x180) = arg1;
}
