#define DEF_func_00197748
#include "m2c.h"
#include "funcs.h"
struct VC_14_5_1 { char pad[0x14]; virtual void d0(); virtual void d1(); virtual void d2(); virtual void d3(); virtual void d4(); virtual void v5(s32); };
extern "C" void func_00197748(s32 arg0, s32 arg1) {

    if (func_001976A0(arg0) != 0) {
        ((VC_14_5_1 *)(arg0))->v5((s32)(arg1));
    }
}
