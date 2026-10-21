#define DEF_func_001E17F8
#include "m2c.h"
#include "funcs.h"
struct VC_E3A8_4_0 { char pad[0xE3A8]; virtual void d0(); virtual void d1(); virtual void d2(); virtual void d3(); virtual s32 v4(); };
extern "C" s32 func_001E17F8(void *arg0) {
    s32 var_v0;
    void *temp_s0;

    temp_s0 = arg0 + 0xF84;
    var_v0 = 0;
    if (((VC_E3A8_4_0 *)(M2C_FIELD(arg0, void **, 4)))->v4() != 0) {
        var_v0 = 0;
        if (M2C_FIELD(temp_s0, u8 *, 0x534) == 0) {
            var_v0 = M2C_FIELD(temp_s0, s8 *, 0x3E9) == 0;
        }
    }
    return var_v0;
}
