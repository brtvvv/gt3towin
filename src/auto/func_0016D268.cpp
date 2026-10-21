#define DEF_func_0016D268
#include "m2c.h"
#include "funcs.h"
struct VC_1C_14_1 { char pad[0x1C]; virtual void d0(); virtual void d1(); virtual void d2(); virtual void d3(); virtual void d4(); virtual void d5(); virtual void d6(); virtual void d7(); virtual void d8(); virtual void d9(); virtual void d10(); virtual void d11(); virtual void d12(); virtual void d13(); virtual void v14(s32); };
extern "C" s32 func_0016D268(void *arg0, s32 arg1, s32 arg2, s32 arg3) {

    if (((arg2 == 1) || (arg2 == 3)) && (func_001D8990(M2C_FIELD(arg0, s32 *, 0x248)) != 0)) {
        ((VC_1C_14_1 *)(M2C_FIELD(arg0, s32 *, 0x248)))->v14((s32)(M2C_FIELD(arg0, s32 *, 0x174)));
        ((VC_1C_14_1 *)(arg0))->v14((s32)(0));
        func_001C5E88(3);
        return 0;
    }
    return func_001D51C8((s32) arg0, arg1, arg2, arg3);
}
