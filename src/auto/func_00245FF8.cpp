#define DEF_func_00245FF8
#include "m2c.h"
#include "funcs.h"
extern M2C_UNK D_002F5880 __attribute__((section(".data")));

extern "C" void func_00245FF8(void *arg0, void *arg1) {
    s32 temp_a1;
    s32 temp_s0;
    s32 temp_v0;

    temp_a1 = M2C_FIELD(arg0, s32 *, 0);
    if (temp_a1 >= 0) {
        func_00244BB8((s32) &D_002F5880, temp_a1);
    }
    temp_v0 = func_00244AD8((s32) &D_002F5880, M2C_FIELD(arg1, u16 *, 0x12) << 6, 0);
    M2C_FIELD(arg0, s32 *, 0) = temp_v0;
    M2C_FIELD(arg0, s32 *, 0x2C) = 1;
    func_002498C0((s32) arg1, temp_v0);
    temp_s0 = func_002530C8(1);
    func_0024A7D8((s32) arg1);
    func_00253198(0x20000);
    func_002530C8(0);
    func_00253198(0x10000);
    func_002530C8(temp_s0);
    func_002557B0();
}
