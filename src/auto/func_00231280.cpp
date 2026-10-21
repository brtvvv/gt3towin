#define DEF_func_00231280
#include "m2c.h"
#include "funcs.h"
struct VC_4_4_0 { char pad[0x4]; virtual void d0(); virtual void d1(); virtual void d2(); virtual void d3(); virtual void v4(); };
extern "C" void func_00231280(void *arg0) {
    ((VC_4_4_0 *)(M2C_FIELD(arg0, void **, 8)))->v4();
    ((VC_4_4_0 *)(M2C_FIELD(arg0, void **, 0xC)))->v4();
}
