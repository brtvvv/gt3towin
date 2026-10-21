#define DEF_func_0022F660
#include "m2c.h"
#include "funcs.h"
struct VC_4_3_2 { char pad[0x4]; virtual void d0(); virtual void d1(); virtual void d2(); virtual void v3(s32, s32); };
extern "C" void func_0022F660(void *arg0, s32 arg1, s32 arg2) {

    if (M2C_FIELD(arg0, s32 *, 8) == func_0022E8B0()) {
        ((VC_4_3_2 *)(M2C_FIELD(arg0, void **, 0xCC)))->v3((s32)(arg1), (s32)(arg2));
    }
}
