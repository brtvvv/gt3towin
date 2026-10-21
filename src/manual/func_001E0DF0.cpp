#define DEF_func_001E0CD0
#define DEF_func_001E0DF0
#include "m2c.h"
#include "funcs.h"
extern "C" s32 func_001E0CD0(s32, f32, s32, s32);
struct VC_E3A8_40_3 { char pad[0xE3A8]; virtual void d0(); virtual void d1(); virtual void d2(); virtual void d3(); virtual void d4(); virtual void d5(); virtual void d6(); virtual void d7(); virtual void d8(); virtual void d9(); virtual void d10(); virtual void d11(); virtual void d12(); virtual void d13(); virtual void d14(); virtual void d15(); virtual void d16(); virtual void d17(); virtual void d18(); virtual void d19(); virtual void d20(); virtual void d21(); virtual void d22(); virtual void d23(); virtual void d24(); virtual void d25(); virtual void d26(); virtual void d27(); virtual void d28(); virtual void d29(); virtual void d30(); virtual void d31(); virtual void d32(); virtual void d33(); virtual void d34(); virtual void d35(); virtual void d36(); virtual void d37(); virtual void d38(); virtual void d39(); virtual void v40(s32, s32, s32); };
extern "C" void func_001E0DF0(void *arg0, s32 arg1, s32 arg2, f32 fparg0) {
    ((VC_E3A8_40_3 *)(M2C_FIELD(arg0, void **, 4)))->v40((s32)(arg0), (s32)(arg1), (s32)(arg2));
    func_001E0CD0((s32) arg0, fparg0, arg1, arg2);
}
