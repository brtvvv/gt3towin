#define DEF_func_0022EF58
#include "m2c.h"
#include "funcs.h"
struct VC_4_1_1 { char pad[0x4]; virtual void d0(); virtual void v1(s32); };
struct VC_C0_8_0 { char pad[0xC0]; virtual void d0(); virtual void d1(); virtual void d2(); virtual void d3(); virtual void d4(); virtual void d5(); virtual void d6(); virtual void d7(); virtual void v8(); };
struct VC_C0_9_0 { char pad[0xC0]; virtual void d0(); virtual void d1(); virtual void d2(); virtual void d3(); virtual void d4(); virtual void d5(); virtual void d6(); virtual void d7(); virtual void d8(); virtual void v9(); };
extern "C" void func_0022EF58(void *arg0) {
    void *temp_a2;
    ((VC_C0_8_0 *)(arg0))->v8();
    temp_a2 = M2C_FIELD(arg0, void **, 0xC);
    if (temp_a2 != NULL) {
        ((VC_4_1_1 *)(temp_a2))->v1((s32)(arg0));
    }
    ((VC_C0_9_0 *)(arg0))->v9();
}
