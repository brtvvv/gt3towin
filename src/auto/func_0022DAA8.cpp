#define DEF_func_0022DAA8
#include "m2c.h"
#include "funcs.h"
struct VC_18_1_0 { char pad[0x18]; virtual void d0(); virtual void v1(); };
extern "C" s32 func_0022DAA8(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 temp_s4;

    temp_s4 = func_0022DA90(arg0);
    M2C_FIELD(arg0, s32 *, 0) = arg1;
    M2C_FIELD(arg0, s32 *, 4) = arg2;
    M2C_FIELD(arg0, s32 *, 8) = arg3;
    M2C_FIELD(arg0, s32 *, 0xC) = 0;
    ((VC_18_1_0 *)(arg0))->v1();
    return temp_s4;
}
