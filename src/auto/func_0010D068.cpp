#define DEF_func_0010D068
#include "m2c.h"
#include "funcs.h"
struct VC_14_0_0 { char pad[0x14]; virtual s32 v0(); };
extern "C" f32 func_0010D068(void *arg0) {
    return (f32) ((VC_14_0_0 *)(M2C_FIELD(arg0, void **, 0x100)))->v0() * (M2C_FIELD(arg0, f32 *, 0x114) + M2C_FIELD(arg0, f32 *, 0x110));
}
