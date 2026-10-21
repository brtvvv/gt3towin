#define DEF_func_00148688
#include "m2c.h"
#include "funcs.h"
struct VC_0_8_0 { virtual void d0(); virtual void d1(); virtual void d2(); virtual void d3(); virtual void d4(); virtual void d5(); virtual void d6(); virtual void d7(); virtual void v8(); };
extern "C" void func_00148688(void *arg0) {

    if (M2C_FIELD(arg0, s32 *, 0xFBBC) == 0) {
        ((VC_0_8_0 *)(arg0))->v8();
        M2C_FIELD(arg0, s32 *, 0xFBBC) = 1;
        func_00148748((s32) arg0);
    }
}
