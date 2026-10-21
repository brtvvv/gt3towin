#define DEF_func_001C0818
#include "m2c.h"
#include "funcs.h"
struct VC_1C_0_1 { char pad[0x1C]; virtual void v0(s32); };
extern "C" void func_001C0818(void *arg0) {
    void *temp_a0;
    void *temp_a0_2;

    temp_a0 = M2C_FIELD(arg0, void **, 4);
    if (temp_a0 != NULL) {
        func_001C0818(temp_a0);
        M2C_FIELD(arg0, void **, 4) = NULL;
    }
    temp_a0_2 = M2C_FIELD(arg0, void **, 8);
    if (temp_a0_2 != NULL) {
        func_001C0818(temp_a0_2);
        M2C_FIELD(arg0, void **, 8) = NULL;
    }
    if (arg0 != NULL) {
        ((VC_1C_0_1 *)(arg0))->v0((s32)(3));
    }
}
