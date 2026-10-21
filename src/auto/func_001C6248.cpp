#define DEF_func_001C6248
#include "m2c.h"
#include "funcs.h"
struct VC_14_3_1 { char pad[0x14]; virtual void d0(); virtual void d1(); virtual void d2(); virtual s32 v3(s32); };
extern f32 D_003519FC;

extern "C" void func_001C6248(void *arg0) {
    M2C_UNK var_a1;
    f32 temp_f0;
    s32 var_a0;
    void *temp_v1;
    void *var_a2;

    if (M2C_FIELD(M2C_FIELD(arg0, void **, 0x124), s32 *, 0xAE4) <= 0) {
        func_001BC848((s32) arg0);
        temp_f0 = M2C_FIELD(arg0, f32 *, 0x12C) - D_003519FC;
        M2C_FIELD(arg0, f32 *, 0x12C) = temp_f0;
        if (temp_f0 < 0.0f) {
            M2C_FIELD(arg0, f32 *, 0x12C) = 1.0f;
        }
        temp_v1 = M2C_FIELD(M2C_FIELD(arg0, void **, 0x124), void **, 0xA14);
        var_a0 = 0;
        if (M2C_FIELD(temp_v1, s32 *, 0xC8) != 0) {
            var_a2 = arg0 + 0x10C;
            var_a1 = -1;
            goto block_7;
        }
        var_a2 = arg0 + 0x10C;
        if (M2C_FIELD(temp_v1, s32 *, 0xCC) != 0) {
            var_a1 = 1;
block_7:
            var_a0 = ((VC_14_3_1 *)(var_a2))->v3((s32)(var_a1));
        }
        if (var_a0 != 0) {
            func_001C5E88(3);
            M2C_FIELD(arg0, f32 *, 0x12C) = 1.0f;
        }
        M2C_FIELD(arg0, M2C_UNK (**)(s32, s32), 0x128)(M2C_FIELD(arg0, s32 *, 0x100), M2C_FIELD(arg0, s32 *, 0x10C));
    }
}
