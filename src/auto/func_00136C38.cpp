#define DEF_func_00136C38
#include "m2c.h"
#include "funcs.h"
struct VC_288_1_0 { char pad[0x288]; virtual void d0(); virtual void v1(); };
extern M2C_UNK D_0029F200 __attribute__((section(".data")));
extern s32 D_00352F3C;
extern s32 D_003540E4;
extern s32 D_003540E8;

extern "C" void func_00136C38(s32 arg0) {
    s32 temp_s2;

    func_001CC9E0(arg0);
    ((VC_288_1_0 *)(arg0))->v1();
    func_001CC3A0(arg0 + 0x28C);
    func_001B7240(arg0 + 0x2E8, arg0 + 0x290, 0);
    temp_s2 = D_00352F3C;
    func_001C33E0(arg0 + 0x3BC, (s32) &D_0029F200, temp_s2, arg0);
    func_001C33E0(arg0 + 0x440, (s32) &D_0029F200, temp_s2, arg0);
    D_003540E8 = 0;
    D_003540E4 = 0;
}
