#define DEF_func_0016BA40
#include "m2c.h"
#include "funcs.h"
struct VC_1C_14_1 { char pad[0x1C]; virtual void d0(); virtual void d1(); virtual void d2(); virtual void d3(); virtual void d4(); virtual void d5(); virtual void d6(); virtual void d7(); virtual void d8(); virtual void d9(); virtual void d10(); virtual void d11(); virtual void d12(); virtual void d13(); virtual void v14(s32); };
extern "C" void func_0016BA40(s32 arg0, s32 arg1) {

    func_001D7588(arg0, arg1);
    ((VC_1C_14_1 *)(M2C_FIELD(arg0, void **, 0x1E4)))->v14((s32)(arg1));
}
