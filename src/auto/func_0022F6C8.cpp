#define DEF_func_0022F6C8
#include "m2c.h"
#include "funcs.h"
struct VC_4_4_0 { char pad[0x4]; virtual void d0(); virtual void d1(); virtual void d2(); virtual void d3(); virtual void v4(); };
extern "C" void func_0022F6C8(void *arg0) {

    if (M2C_FIELD(arg0, s32 *, 8) == func_0022E8B0()) {
        ((VC_4_4_0 *)(M2C_FIELD(arg0, void **, 0xCC)))->v4();
    }
}
