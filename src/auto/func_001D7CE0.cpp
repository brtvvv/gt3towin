#define DEF_func_001D7CE0
#include "m2c.h"
#include "funcs.h"
extern "C" f32 func_001D7CE0(void *arg0) {
    f32 temp_f20;
    f32 var_f21;
    void *temp_v0;

    temp_v0 = M2C_FIELD(arg0, void **, 0x9C);
    if (temp_v0 != NULL) {
        var_f21 = M2C_FIELD(temp_v0, f32 *, 0x38) * 0.5f;
    } else {
        var_f21 = 0.0f;
    }
    temp_f20 = M2C_FIELD(arg0, f32 *, 0x28);
    return (temp_f20 - func_001D7CB0((s32) arg0)) + var_f21;
}
