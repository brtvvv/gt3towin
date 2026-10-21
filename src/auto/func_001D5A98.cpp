#define DEF_func_001D5A98
#include "m2c.h"
#include "funcs.h"
struct VC_1C_14_1 { char pad[0x1C]; virtual void d0(); virtual void d1(); virtual void d2(); virtual void d3(); virtual void d4(); virtual void d5(); virtual void d6(); virtual void d7(); virtual void d8(); virtual void d9(); virtual void d10(); virtual void d11(); virtual void d12(); virtual void d13(); virtual void v14(s32); };
extern "C" void func_001D5A98(void *arg0, s32 arg1) {
    void *temp_a2;
    void *temp_a2_2;
    void *temp_s0;
    void *temp_s0_2;
    void *temp_s1;

    temp_a2 = M2C_FIELD(arg0, void **, 0x210);
    if (temp_a2 != NULL) {
        ((VC_1C_14_1 *)(temp_a2))->v14((s32)(0));
    }
    temp_s0 = M2C_FIELD(arg0, void **, 0x1C);
    temp_s0_2 = temp_s0 + 0xF0;
    temp_s1 = arg0 + M2C_FIELD(temp_s0, s16 *, 0xF0);
    M2C_FIELD(temp_s0_2, M2C_UNK (**)(void *, s32), 4)(temp_s1, func_001D5C08((s32) arg0, arg1));
    temp_a2_2 = M2C_FIELD(arg0, void **, 0x210);
    if (temp_a2_2 != NULL) {
        ((VC_1C_14_1 *)(temp_a2_2))->v14((s32)(M2C_FIELD(arg0, s32 *, 0x174)));
    }
}
