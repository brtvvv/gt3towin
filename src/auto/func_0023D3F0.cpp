#define DEF_func_0023D3F0
#include "m2c.h"
#include "funcs.h"
struct VC_8_0_1 { char pad[0x8]; virtual void v0(s32); };
extern "C" s32 func_0023D3F0(s32 arg0, s32 arg1) {

    func_0023D308(arg0, arg1);
    if (arg1 != 0) {
        ((VC_8_0_1 *)(arg1))->v0((s32)(3));
    }
    return arg0;
}
