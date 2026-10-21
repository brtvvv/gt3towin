#define DEF_func_001577C8
#include "m2c.h"
#include "funcs.h"
struct VC_8_0_1 { char pad[0x8]; virtual void v0(s32); };
extern "C" void func_001577C8(void **arg0, s32 arg1) {
    void *temp_a2;

    temp_a2 = *arg0;
    if (temp_a2 != NULL) {
        ((VC_8_0_1 *)(temp_a2))->v0((s32)(3));
    }
    if (arg1 & 1) {
        func_0027D2F8((s32) arg0);
    }
}
