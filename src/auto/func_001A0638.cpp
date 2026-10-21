#define DEF_func_001A0638
#include "m2c.h"
#include "funcs.h"
extern M2C_UNK D_002F5880 __attribute__((section(".data")));

extern "C" void func_001A0638(void *arg0) {
    s32 var_s0;

    if (M2C_FIELD(arg0, s32 *, 4) != 0) {
        func_00245330((s32) &D_002F5880, M2C_FIELD(arg0, s32 *, 0xC));
        func_0024DE50(M2C_FIELD(M2C_FIELD(arg0, s32 *, 0xC), s32 *, 0x18));
        func_00252500(5);
        func_00252500(6);
        func_00252500(2);
        func_00252790(0xF);
        func_00253A98(0);
        func_00253908(0x68, 1.0f);
        func_0024D590();
        var_s0 = M2C_FIELD(arg0, s32 *, 4);
        if (var_s0 != 0) {
            do {
                func_0019FBA8(var_s0);
                var_s0 = *(s32 *)var_s0;
            } while (var_s0 != 0);
        }
        func_00256088();
        func_00258C50();
        func_0024D5B8();
        func_00256108();
        func_00253A98(1);
        func_00252500(0xF);
        func_00252790(2);
    }
}
