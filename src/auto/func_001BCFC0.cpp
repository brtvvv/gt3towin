#define DEF_func_001BCFC0
#include "m2c.h"
#include "funcs.h"
struct VC_1C_5_0 { char pad[0x1C]; virtual void d0(); virtual void d1(); virtual void d2(); virtual void d3(); virtual void d4(); virtual void v5(); };
extern "C" s32 func_001BCFC0(void *arg0, void *arg1, void *arg2) {
    ((VC_1C_5_0 *)(arg2))->v5();
    M2C_FIELD(arg0, s32 *, 8) = (s32) (M2C_FIELD(arg0, s32 *, 8) + 1);
    return M2C_FIELD(arg1, s32 *, 0x2C);
}
