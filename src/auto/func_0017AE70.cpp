#define DEF_func_0017AE70
#include "m2c.h"
#include "funcs.h"
struct VC_10_0_1 { char pad[0x10]; virtual void v0(s32); };
extern "C" void func_0017AE70(void *arg0) {
    void *temp_a2;

    temp_a2 = M2C_FIELD(arg0, void **, 0x38);
    if (temp_a2 != NULL) {
        ((VC_10_0_1 *)(temp_a2))->v0((s32)(3));
    }
    M2C_FIELD(arg0, void **, 0x38) = NULL;
}
