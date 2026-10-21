#define DEF_func_0014C0D0
#include "m2c.h"
#include "funcs.h"
struct VC_8_7_0 { char pad[0x8]; virtual void d0(); virtual void d1(); virtual void d2(); virtual void d3(); virtual void d4(); virtual void d5(); virtual void d6(); virtual s32 v7(); };
struct VC_8_8_0 { char pad[0x8]; virtual void d0(); virtual void d1(); virtual void d2(); virtual void d3(); virtual void d4(); virtual void d5(); virtual void d6(); virtual void d7(); virtual s32 v8(); };
extern "C" void func_0014C0D0(s32 arg0, s32 arg1) {
    s32 temp_s2;
    s32 temp_v0;
    s32 temp_v0_2;

    temp_v0 = func_0014ADA8(arg0);
    if (temp_v0 != 0) {
        temp_s2 = ((VC_8_8_0 *)(temp_v0))->v8();
        temp_v0_2 = ((VC_8_7_0 *)(temp_v0))->v7();
        if (temp_s2 < func_0026ACA0(temp_v0_2)) {
            func_00280088(arg1, temp_v0_2 + temp_s2, 0x20);
            M2C_FIELD(arg1, s8 *, 0x20) = 0;
            return;
        }
    }
    M2C_FIELD(arg1, s8 *, 0) = 0;
}
