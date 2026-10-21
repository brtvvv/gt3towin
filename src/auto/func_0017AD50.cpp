#define DEF_func_0017AD50
#include "m2c.h"
#include "funcs.h"
struct VC_1C_0_1 { char pad[0x1C]; virtual void v0(s32); };
extern "C" void func_0017AD50(void *arg0) {
    void *temp_a2;

    temp_a2 = M2C_FIELD(arg0, void **, 0x18);
    if (temp_a2 != NULL) {
        ((VC_1C_0_1 *)(temp_a2))->v0((s32)(3));
    }
    M2C_FIELD(arg0, void **, 0x18) = NULL;
}
