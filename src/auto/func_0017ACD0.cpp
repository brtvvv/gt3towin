#define DEF_func_0017ACD0
#include "m2c.h"
#include "funcs.h"
struct VC_C_0_1 { char pad[0xC]; virtual void v0(s32); };
extern "C" void func_0017ACD0(void *arg0) {
    void *temp_a2;

    temp_a2 = M2C_FIELD(arg0, void **, 0x28);
    if (temp_a2 != NULL) {
        ((VC_C_0_1 *)(temp_a2))->v0((s32)(3));
    }
    M2C_FIELD(arg0, void **, 0x28) = NULL;
}
