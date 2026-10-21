#define DEF_func_0022AF38
#include "m2c.h"
#include "funcs.h"
struct VC_90_0_0 { char pad[0x90]; virtual void v0(); };
extern "C" void func_0022AF38(void *arg0) {

    if (M2C_FIELD(arg0, s32 *, 0) != 0) {
        if (M2C_FIELD(arg0, u8 *, 0x8D) == 1) {
            ((VC_90_0_0 *)(arg0))->v0();
        }
    }
}
