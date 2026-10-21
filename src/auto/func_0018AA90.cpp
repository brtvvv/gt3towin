#define DEF_func_0018AA90
#include "m2c.h"
#include "funcs.h"
struct VC_4_7_0 { char pad[0x4]; virtual void d0(); virtual void d1(); virtual void d2(); virtual void d3(); virtual void d4(); virtual void d5(); virtual void d6(); virtual void v7(); };
extern "C" void func_0018AA90(void *arg0, s32 arg1, s32 arg2) {

    if (arg1 == 0x14) {
        ((VC_4_7_0 *)(arg0))->v7();
        return;
    }
    func_0017EB80((s32) arg0, arg1, arg2);
}
