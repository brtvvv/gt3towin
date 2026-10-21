#define DEF_func_00197798
#include "m2c.h"
#include "funcs.h"
struct VC_14_4_0 { char pad[0x14]; virtual void d0(); virtual void d1(); virtual void d2(); virtual void d3(); virtual void v4(); };
extern "C" void func_00197798(s32 arg0) {

    if (func_001976A0(arg0) != 0) {
        ((VC_14_4_0 *)(arg0))->v4();
    }
}
