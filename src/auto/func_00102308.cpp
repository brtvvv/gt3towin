#define DEF_func_00102308
#include "m2c.h"
#include "funcs.h"
struct VC_0_4_0 { virtual void d0(); virtual void d1(); virtual void d2(); virtual void d3(); virtual void v4(); };
extern M2C_UNK D_0049D100 __attribute__((section(".data")));
extern M2C_UNK D_0049D510 __attribute__((section(".data")));
extern M2C_UNK D_0049D528 __attribute__((section(".data")));
extern M2C_UNK D_0049D540 __attribute__((section(".data")));

extern "C" void func_00102308(s32 arg0, s32 arg1) {
    M2C_UNK *var_s0;

    var_s0 = NULL;
    switch (arg0) {                                 /* irregular */
    case 0:
        var_s0 = &D_0049D540;
        break;
    case 1:
        var_s0 = &D_0049D528;
        break;
    case 2:
        var_s0 = &D_0049D510;
        break;
    case 3:
        var_s0 = &D_0049D100;
        break;
    }
    if (var_s0 != NULL) {
        M2C_FIELD(var_s0, s32 *, 4) = arg1;
        ((VC_0_4_0 *)(var_s0))->v4();
        func_00101A58((s32) var_s0);
    }
}
