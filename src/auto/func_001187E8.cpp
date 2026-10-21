#define DEF_func_001187E8
#include "m2c.h"
#include "funcs.h"
struct VC_1C_1_0 { char pad[0x1C]; virtual void d0(); virtual void v1(); };
extern "C" void func_001187E8(void *arg0) {
    void *temp_a1;
    void *temp_a1_2;

    temp_a1 = M2C_FIELD(arg0, void **, 0xC8);
    if (temp_a1 != NULL) {
        ((VC_1C_1_0 *)(temp_a1))->v1();
    }
    temp_a1_2 = M2C_FIELD(arg0, void **, 0xCC);
    if (temp_a1_2 != NULL) {
        ((VC_1C_1_0 *)(temp_a1_2))->v1();
    }
}
