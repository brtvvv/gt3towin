#define DEF_func_0022F090
#include "m2c.h"
#include "funcs.h"
struct VC_4_5_0 { char pad[0x4]; virtual void d0(); virtual void d1(); virtual void d2(); virtual void d3(); virtual void d4(); virtual s32 v5(); };
extern "C" void func_0022F090(void *arg0) {
    ((VC_4_5_0 *)(M2C_FIELD(arg0, void **, 0xC)))->v5();
}
