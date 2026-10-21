#define DEF_func_001D3860
#include "m2c.h"
#include "funcs.h"
struct VC_1C_1_0 { char pad[0x1C]; virtual void d0(); virtual void v1(); };
extern "C" void func_001D3860(void *arg0) {

    if (M2C_FIELD(arg0, s32 *, 0x20) != 0) {
        ((VC_1C_1_0 *)(arg0))->v1();
    }
}
