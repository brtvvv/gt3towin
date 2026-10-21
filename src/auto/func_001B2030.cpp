#define DEF_func_001B2030
#include "m2c.h"
#include "funcs.h"
struct VC_2C_4_0 { char pad[0x2C]; virtual void d0(); virtual void d1(); virtual void d2(); virtual void d3(); virtual void v4(); };
extern "C" void func_001B2030(void *arg0, f32 fparg0) {

    if (M2C_FIELD(arg0, f32 *, 0x38) < fparg0) {
        ((VC_2C_4_0 *)(arg0))->v4();
    }
}
